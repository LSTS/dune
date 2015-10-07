//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 12964515b017f374ba9afe5ad06c2fc8                            *
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
    msg.setTimeStamp(0.0972132237676615);
    msg.setSource(23190U);
    msg.setSourceEntity(231U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(68U);
    msg.state = 218U;
    msg.flags = 125U;
    msg.description.assign("JGXYHVPIBGHYWFRFYYLJUZFUHZVELTSRYXXRFVAQJKTZGNDPEDXPJDALYCGPMEHSSEPWCKTPLEZLONGKZHRAUXSFTGKFYCUZXIIOXBYMRLVSZLIIHRZPCWQKHMDBUADSIBLXCGFFOATRAOWEFOOAUUKBJJJQMNVENGWBBCGBNNINPOTRENZJAQGXTOBTWQIHCIWYSCUVTDVRKYWCKTMPUEONKOWUFIKNJVLZDRQQMSQ");

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
    msg.setTimeStamp(0.19038776911667687);
    msg.setSource(39292U);
    msg.setSourceEntity(116U);
    msg.setDestination(7979U);
    msg.setDestinationEntity(57U);
    msg.state = 218U;
    msg.flags = 99U;
    msg.description.assign("VAUACXMJFNWVSRNABJJWRUGWKNYUAVTNTWMLLODJSRUEYMSPJCLRATLXOELQYDH");

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
    msg.setTimeStamp(0.21950954083226826);
    msg.setSource(58072U);
    msg.setSourceEntity(113U);
    msg.setDestination(38901U);
    msg.setDestinationEntity(134U);
    msg.state = 190U;
    msg.flags = 178U;
    msg.description.assign("WSFTVZJLAYMHQTIIUWYJJFPMYGDXKARRQVMDFFIEQREGQQCRCXUOJVFQBWAZHYXLJZENKEBGCYQSAXUSLNL");

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
    msg.setTimeStamp(0.3127412777457008);
    msg.setSource(64285U);
    msg.setSourceEntity(62U);
    msg.setDestination(1861U);
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
    msg.setTimeStamp(0.80563599038244);
    msg.setSource(22847U);
    msg.setSourceEntity(103U);
    msg.setDestination(42450U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.2425989985360194);
    msg.setSource(49039U);
    msg.setSourceEntity(39U);
    msg.setDestination(59407U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.22968361019883943);
    msg.setSource(21631U);
    msg.setSourceEntity(140U);
    msg.setDestination(17425U);
    msg.setDestinationEntity(160U);
    msg.id = 54U;
    msg.label.assign("NSXLRSAMPBFHQHZXXGJTKUWGMEAIDEMSXRSUQCEBJMXZJSWBCTSMFTKNLORHVBFNEUCVHKYFSTHDIMIUZLQLKUCWTTKTLADTYXGZGDJNEXSTWIIIREVMCDYRFODKZPZHHPBLVGPITYYBCWK");
    msg.component.assign("SQERLJXWKRIAVIFRVGAYPIOCPMFAHRNGXAZKWZFLXDVEPFLTDENAGYXLQVKCQHGVCMGLKNJWOOIFRAYMDYPGCFZUXNJUMHDEUOTYEQNLSOMBSWBCMSGRTHCHMVFBJLEDTR");
    msg.act_time = 60609U;
    msg.deact_time = 6427U;

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
    msg.setTimeStamp(0.5521753533834901);
    msg.setSource(4809U);
    msg.setSourceEntity(77U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(50U);
    msg.id = 183U;
    msg.label.assign("RTWZICHUHNAVUKLDAVJSUJBNQYROJVXPDAJFYWYYYSWPUVDZPTTRZYOIXEHFBTFNUWILNOEVELOUNSIESZGKINROCSTGQPHKIVMXMFLCSAJDUDEAJQIFTGDAVVTDNFOYFLQWMTOZZIMPDJGNIGCXVZMRSKUOASXOBCXDK");
    msg.component.assign("CNJARLLQHNSEKQJAFJERUYZGCPSUIZLKGVXKYKPNBQUYTRBOZESNIICYPJFRRZFXWLGVWVNNOHDMHFWOOXCGHXDWIHTSWYUCRONNGMSISIKMRSESRUJMGYDYMFTUPSORZOVUQAFLZXBFDLAZONXUIRGHAOGCKHDBDVXDPEXLGAYTL");
    msg.act_time = 24989U;
    msg.deact_time = 30206U;

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
    msg.setTimeStamp(0.2073636394985292);
    msg.setSource(36566U);
    msg.setSourceEntity(158U);
    msg.setDestination(33266U);
    msg.setDestinationEntity(36U);
    msg.id = 200U;
    msg.label.assign("VRKHPTANPKITCVFZJUMXSGNREKUCUNUCGZCTVQMXPMKCLJUJLEQNOWDFQRBYBDEIQWBWNTYSROYMDDFTNJFVUPGYAZIDQOLMWVBMIUWYETXORSCJHZGUVZSOSIVBFAXAXHOHMKIARBVCDEABLINJXSHCKIAAVLEABBGGHISDDKQRYPYWNWEGARXCRNUJWYKMEPSQQHHTIZFBWGJPLQTOOVFZKXEMCTFGDNSUTOPFWLZRYM");
    msg.component.assign("QWRIISMTACNUMPHELNCAEFYXPROE");
    msg.act_time = 63995U;
    msg.deact_time = 25117U;

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
    msg.setTimeStamp(0.9389166478245294);
    msg.setSource(51224U);
    msg.setSourceEntity(189U);
    msg.setDestination(58523U);
    msg.setDestinationEntity(94U);
    msg.id = 22U;

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
    msg.setTimeStamp(0.39931797964425464);
    msg.setSource(12080U);
    msg.setSourceEntity(244U);
    msg.setDestination(6206U);
    msg.setDestinationEntity(171U);
    msg.id = 220U;

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
    msg.setTimeStamp(0.5738932380421358);
    msg.setSource(39802U);
    msg.setSourceEntity(73U);
    msg.setDestination(51709U);
    msg.setDestinationEntity(237U);
    msg.id = 143U;

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
    msg.setTimeStamp(0.8966979221705527);
    msg.setSource(16585U);
    msg.setSourceEntity(129U);
    msg.setDestination(54732U);
    msg.setDestinationEntity(198U);
    msg.op = 225U;
    msg.list.assign("BKJPNVOIPQCJTXAGLHPSSWOZQBZYYVOZSQFOUCXLXZQVFYDUHXCNZPXANIQRGXTYRWNMIIVBPSOFZNPFDNBJLWCYOD");

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
    msg.setTimeStamp(0.03295196862090455);
    msg.setSource(46632U);
    msg.setSourceEntity(239U);
    msg.setDestination(14340U);
    msg.setDestinationEntity(241U);
    msg.op = 145U;
    msg.list.assign("TQZIFXKHDMTLXYRAQECBMLXHAEFQKWOIJ");

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
    msg.setTimeStamp(0.8411941048519563);
    msg.setSource(9864U);
    msg.setSourceEntity(104U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(249U);
    msg.op = 20U;
    msg.list.assign("JBCIIINWYYSCXNFWVTFBQTYBRHCXORCHKIAMWDEPTEVQATOFFJJMGOXEUHS");

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
    msg.setTimeStamp(0.4370786122440794);
    msg.setSource(13388U);
    msg.setSourceEntity(228U);
    msg.setDestination(4674U);
    msg.setDestinationEntity(0U);
    msg.value = 7U;

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
    msg.setTimeStamp(0.1817462893005134);
    msg.setSource(13610U);
    msg.setSourceEntity(104U);
    msg.setDestination(3229U);
    msg.setDestinationEntity(103U);
    msg.value = 224U;

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
    msg.setTimeStamp(0.24424930040100035);
    msg.setSource(33684U);
    msg.setSourceEntity(97U);
    msg.setDestination(56076U);
    msg.setDestinationEntity(150U);
    msg.value = 122U;

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
    msg.setTimeStamp(0.19959361215806393);
    msg.setSource(11566U);
    msg.setSourceEntity(205U);
    msg.setDestination(62897U);
    msg.setDestinationEntity(147U);
    msg.consumer.assign("GQOWOJWYMJYXPSZVECJPTFQDRMNNDBOOIAWMKJZWUMKYKAUDCDQVJNEAMBDNLVZCDWIVOQVNMLPYEQPNFSXINAGZVCXVWYCMSZPKAUVRIQRYHNQKPOHFUXDFOUWEQ");
    msg.message_id = 60311U;

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
    msg.setTimeStamp(0.5720697393324606);
    msg.setSource(44214U);
    msg.setSourceEntity(167U);
    msg.setDestination(57962U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("FZJTWTDVJWLCGRPYAMYROZGGRBDDCEXETFKVCXMGEPXSQDUMLSMYIACANQJNWOTOWQILRMBNUJTAWIYDSRGMCNNBVPREKPAHROXJSPURTZAHVOIDXUBZUCMKJAGIDVDQZCWULLGFVYHEBCLGCPKNHUKFGRUECVHZEZBNINOBNFAYVFNYKQRBFXTKOPVWEXOQFESHFTTOGMZDYXKHPAHJDLVWJSJABZUILQXSMJEIIPHHW");
    msg.message_id = 37727U;

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
    msg.setTimeStamp(0.6500437868338586);
    msg.setSource(44869U);
    msg.setSourceEntity(128U);
    msg.setDestination(56116U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("FMYJVWJYPOTFABMNNJNRBRREDOLNYQKUDVGVLADQIFMVDZEFQHCEBNMETGZQUDLYCHHOGKQTKTERKNRAFSQUNQHIYXMJLGEZTHCIJKXMVCEZWJDAPXYUDGLMXAPMBWRGSWISZBGSFUFGQBTWOSJPKJHLWOMWVRUCPKKBSZOPTOESVRUALLO");
    msg.message_id = 53098U;

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
    msg.setTimeStamp(0.0018908899394242118);
    msg.setSource(65360U);
    msg.setSourceEntity(94U);
    msg.setDestination(3870U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.9318718209807182);
    msg.setSource(10625U);
    msg.setSourceEntity(214U);
    msg.setDestination(46566U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.2282568405300207);
    msg.setSource(51202U);
    msg.setSourceEntity(44U);
    msg.setDestination(28251U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.887088628442689);
    msg.setSource(4410U);
    msg.setSourceEntity(135U);
    msg.setDestination(27555U);
    msg.setDestinationEntity(193U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.619929853893914);
    msg.setSource(31117U);
    msg.setSourceEntity(88U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(162U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.6305274095830494);
    msg.setSource(63255U);
    msg.setSourceEntity(32U);
    msg.setDestination(36588U);
    msg.setDestinationEntity(164U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.5610532351273136);
    msg.setSource(58928U);
    msg.setSourceEntity(194U);
    msg.setDestination(9985U);
    msg.setDestinationEntity(105U);
    msg.total_steps = 115U;
    msg.step_number = 73U;
    msg.step.assign("OOUSIKTIHBUUZKWYJVLRREQNOPIBHKJGLVXXGBYUPDGKDCCXEDGIWYTMBQANHREQRCEHOUMWFVQIMAGYWOHMEQWQANUNAZWBWBAEFHADRDLGZYNINCUIEQPPIYDJLFPMCKSMTWGXVRSXZEFRCPSQUJZSSZVLSKWKOOHCEFYTFROPYNBTQUHNLGFJAYSKSLOCIYQTCTHPAXVJMXVXMZDDNRUFVSGAJZXCKATTHTNELZM");
    msg.flags = 213U;

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
    msg.setTimeStamp(0.25357127799718204);
    msg.setSource(13422U);
    msg.setSourceEntity(151U);
    msg.setDestination(36992U);
    msg.setDestinationEntity(148U);
    msg.total_steps = 29U;
    msg.step_number = 29U;
    msg.step.assign("WJXGPJHXVEJPKEMYJZUHSPFDLPCAHMOGMBOCTFFIRRCNSBQNDXDZDGUBHAUXGCDAUNHQBLIRJFUKGTTLEDEYUHLXLETRCQZPNTUHWTNCEOAPBVPSFWVUDTYGXCOSKOYASFJSEOLQWXKJGADIDNKPOQIWFIMQRZVQVIBHPMWBTYAKGNXKEZXBIOYLJZLUB");
    msg.flags = 170U;

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
    msg.setTimeStamp(0.20815377326710538);
    msg.setSource(28435U);
    msg.setSourceEntity(39U);
    msg.setDestination(8143U);
    msg.setDestinationEntity(56U);
    msg.total_steps = 74U;
    msg.step_number = 161U;
    msg.step.assign("DFDUYMRWXRNBIOKBZVPXXEVQQKABQRPJGVIOMUWLQDFDHTCFIGZANJZANNRNJPUCSYYIPJZEUMSVJHANMJSLLOVUVIGXHQYWDTHHKDEKSDRAYIASJQZJPFCXC");
    msg.flags = 196U;

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
    msg.setTimeStamp(0.6842029062358512);
    msg.setSource(21292U);
    msg.setSourceEntity(253U);
    msg.setDestination(22923U);
    msg.setDestinationEntity(5U);
    msg.state = 202U;
    msg.error.assign("EUJFUAEFQUERTLORVVVJEZWPPGXNQMZGHSHKXFOTDBIKWLYICZBWRJPDJITWSOCOAPWAWIDULHTNQQNLHDTCCHPGKJFNQENPXKQSAJMD");

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
    msg.setTimeStamp(0.5543706681498375);
    msg.setSource(38445U);
    msg.setSourceEntity(94U);
    msg.setDestination(36798U);
    msg.setDestinationEntity(146U);
    msg.state = 9U;
    msg.error.assign("UWDCEDBUHQDCFWRKWLNZHOPTJTYBX");

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
    msg.setTimeStamp(0.4689189533199958);
    msg.setSource(62412U);
    msg.setSourceEntity(193U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(102U);
    msg.state = 189U;
    msg.error.assign("HXSIQXGCHRMKOERVOPYPVT");

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
    msg.setTimeStamp(0.6264047940984203);
    msg.setSource(44494U);
    msg.setSourceEntity(50U);
    msg.setDestination(24920U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.8501357243089537);
    msg.setSource(46764U);
    msg.setSourceEntity(16U);
    msg.setDestination(13509U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.8904520664094276);
    msg.setSource(22048U);
    msg.setSourceEntity(153U);
    msg.setDestination(25722U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.5745033110048443);
    msg.setSource(78U);
    msg.setSourceEntity(36U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(230U);
    msg.op = 97U;
    msg.speed_min = 0.03163787048903377;
    msg.speed_max = 0.398655163092393;
    msg.long_accel = 0.5580721477250695;
    msg.alt_max_msl = 0.9438048388981872;
    msg.dive_fraction_max = 0.23894792862001135;
    msg.climb_fraction_max = 0.35777411518764435;
    msg.bank_max = 0.9961861535727101;
    msg.p_max = 0.08024279993065386;
    msg.pitch_min = 0.24407356932433466;
    msg.pitch_max = 0.9899773028309453;
    msg.q_max = 0.20409824974177304;
    msg.g_min = 0.5981092891188468;
    msg.g_max = 0.622000326357242;
    msg.g_lat_max = 0.927281045243891;
    msg.rpm_min = 0.7930982991794762;
    msg.rpm_max = 0.7733443934582038;
    msg.rpm_rate_max = 0.9704954132431981;

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
    msg.setTimeStamp(0.45176351220446065);
    msg.setSource(43058U);
    msg.setSourceEntity(99U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(176U);
    msg.op = 158U;
    msg.speed_min = 0.3010736196070236;
    msg.speed_max = 0.16739633254123276;
    msg.long_accel = 0.6024848003261887;
    msg.alt_max_msl = 0.25772227574680096;
    msg.dive_fraction_max = 0.834266929137812;
    msg.climb_fraction_max = 0.6679334519783089;
    msg.bank_max = 0.6849616021832002;
    msg.p_max = 0.04803479896275198;
    msg.pitch_min = 0.8824221161587736;
    msg.pitch_max = 0.5270446266148703;
    msg.q_max = 0.8309986196899544;
    msg.g_min = 0.1372843608869233;
    msg.g_max = 0.5464164480549544;
    msg.g_lat_max = 0.4837211655983509;
    msg.rpm_min = 0.9652736576865514;
    msg.rpm_max = 0.2235433875427676;
    msg.rpm_rate_max = 0.9155851331923384;

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
    msg.setTimeStamp(0.9913236449206598);
    msg.setSource(18687U);
    msg.setSourceEntity(134U);
    msg.setDestination(16953U);
    msg.setDestinationEntity(66U);
    msg.op = 55U;
    msg.speed_min = 0.6849730982462384;
    msg.speed_max = 0.856456623738283;
    msg.long_accel = 0.19229728649815803;
    msg.alt_max_msl = 0.313205907595573;
    msg.dive_fraction_max = 0.6726045194236019;
    msg.climb_fraction_max = 0.3309282507700675;
    msg.bank_max = 0.7712750063242487;
    msg.p_max = 0.7929022020312295;
    msg.pitch_min = 0.6401980511045008;
    msg.pitch_max = 0.4592854247075533;
    msg.q_max = 0.596345880250789;
    msg.g_min = 0.6709146482191221;
    msg.g_max = 0.6497105723408872;
    msg.g_lat_max = 0.6004599739321331;
    msg.rpm_min = 0.28035965103851157;
    msg.rpm_max = 0.1590714115776669;
    msg.rpm_rate_max = 0.4933584433040352;

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
    msg.setTimeStamp(0.6523595155220883);
    msg.setSource(55566U);
    msg.setSourceEntity(202U);
    msg.setDestination(7496U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.315956542429375);
    msg.setSource(25984U);
    msg.setSourceEntity(34U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(212U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("EAKGVHEPLHWPYEATOOCGINESYKVWZSXSJRFKQHVOXDLEUSXRMTZCYWZZBWWRCPBANOWFUZRDHYYFNKLIXMFKSYLTPATVXCCXQQCDYRVQDWKPRGVORD");
    tmp_msg_0.state = 173U;
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
    msg.setTimeStamp(0.581180008820305);
    msg.setSource(32352U);
    msg.setSourceEntity(155U);
    msg.setDestination(16743U);
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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.1126665451219323);
    msg.setSource(56843U);
    msg.setSourceEntity(198U);
    msg.setDestination(40457U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.7316277340951894;
    msg.lon = 0.3702243225220869;
    msg.height = 0.16258529069228722;
    msg.x = 0.8143374073743933;
    msg.y = 0.5245006355069439;
    msg.z = 0.5108527384767148;
    msg.phi = 0.3141204450037569;
    msg.theta = 0.830030560377237;
    msg.psi = 0.7179808854605974;
    msg.u = 0.8681466266937248;
    msg.v = 0.07981901621689114;
    msg.w = 0.6125986949589353;
    msg.p = 0.16161204064370283;
    msg.q = 0.21482262388004414;
    msg.r = 0.24770492518982246;
    msg.svx = 0.21330452571022118;
    msg.svy = 0.8863235451955598;
    msg.svz = 0.9224144126359347;

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
    msg.setTimeStamp(0.34925008157248594);
    msg.setSource(28436U);
    msg.setSourceEntity(123U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.2761731251402607;
    msg.lon = 0.4919357721328135;
    msg.height = 0.7591021779029614;
    msg.x = 0.5193952061876417;
    msg.y = 0.6768970673604381;
    msg.z = 0.34449885689229354;
    msg.phi = 0.054839413944157034;
    msg.theta = 0.6697090069422076;
    msg.psi = 0.4760963639107185;
    msg.u = 0.7078195467295034;
    msg.v = 0.5252205716245767;
    msg.w = 0.2686419661895747;
    msg.p = 0.689095285364251;
    msg.q = 0.3095816198658937;
    msg.r = 0.2777869289139314;
    msg.svx = 0.2576082827800491;
    msg.svy = 0.8045936513832245;
    msg.svz = 0.7484059064277666;

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
    msg.setTimeStamp(0.4498121776314037);
    msg.setSource(47933U);
    msg.setSourceEntity(116U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.6675415631064007;
    msg.lon = 0.9529685688319003;
    msg.height = 0.5598848161678209;
    msg.x = 0.12441987406302424;
    msg.y = 0.26161432257823714;
    msg.z = 0.40512120680431196;
    msg.phi = 0.5924721404056389;
    msg.theta = 0.8551058543323121;
    msg.psi = 0.48609337860659474;
    msg.u = 0.06683114420032443;
    msg.v = 0.23255324279967893;
    msg.w = 0.5462740512438794;
    msg.p = 0.8024236668655913;
    msg.q = 0.9186976078628364;
    msg.r = 0.586742045142328;
    msg.svx = 0.506126656728425;
    msg.svy = 0.6665312047661093;
    msg.svz = 0.9778497935113408;

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
    msg.setTimeStamp(0.26812014583652133);
    msg.setSource(33811U);
    msg.setSourceEntity(54U);
    msg.setDestination(20709U);
    msg.setDestinationEntity(239U);
    msg.op = 139U;
    msg.entities.assign("TUWDSSEYDYTAPJPURYGINEMUKTOYETMVGLLKBGLCPPTQADWYGWODEKOEIFNZQDVSEYXJXOGHMVNHREHHYPHUKLALZTMQBGJIZCZKNKEUJDSZSKXVHCKEWTFOZRNSSPPJZKVATAHDPBGIIQXWVWABFFRUDMCWBCVJACTSBHQTIQPRQYXRONXVNRQGHCWCLFMC");

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
    msg.setTimeStamp(0.0330199435724432);
    msg.setSource(11071U);
    msg.setSourceEntity(90U);
    msg.setDestination(30169U);
    msg.setDestinationEntity(103U);
    msg.op = 98U;
    msg.entities.assign("BSUFIAVSFFEKNQCRQMDIYQXKETYNLXWGVEWJOGIQRKSHIJOUGHREINSIOZODSTRDTQJAMDSHZAMXNUTETYPOFMVKVBPCNXVCBWFGJNLIQWKLPNUQSDZEGXMYYNVJAKZN");

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
    msg.setTimeStamp(0.699229748841271);
    msg.setSource(27850U);
    msg.setSourceEntity(26U);
    msg.setDestination(19066U);
    msg.setDestinationEntity(57U);
    msg.op = 153U;
    msg.entities.assign("MTLVLSIVYUXZTAHMOMMZSYWAKGRAOEBIFJYSZPGPBVMLBWPVWIBNDGHFSHUZKUYZWAFQFYNUPGHKPOIVLUIJSMRQFUZXNQWCKDREYGNEEELDCEQEOEBLQIMCCPLWHKKHAWGUHMBJNZKAGIDGFTDFTQSXVPESOKJCXWNRXJOONTTDRPMQDPCJAFUJTBRSTJSFBERCNKGLNXBDHVIHKXHIFYVIWCAXLSDPODVZVTJTGQ");

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
    msg.setTimeStamp(0.09354696764005321);
    msg.setSource(57979U);
    msg.setSourceEntity(109U);
    msg.setDestination(52069U);
    msg.setDestinationEntity(132U);
    msg.type = 9U;
    msg.speed = 33453U;
    const char tmp_msg_0[] = {-59, -111, -45, 94, -121, -40, -90, 100, 67, 105, -120, 81, 109, -4, -35, -50, 96, -105, 70, -77, -97, 64, -93, -30, 27, 38, 98, -72, 16, 105, -42, -50, -26, -125, -92, 19, -61, 104, -90, -4, -55, 45, -53, -28, 92, 119, 3, 73, 109, -22, 115, 123, 12, -38, -126, 88, 81, -47, -51, -62, -26, -67, 117, 124, -38, -110, -65, 22, -46, 21, 74, 20, 25, -106, -67, 76, 91, 13, 52, 51, -5, -93, 54, 71, 47, -86, -62, 74, 107, 112, -108, -27, -46, 3, 35, -100, -103, 55, 12, 42, -21, -63, -28, -23, -37, 37, -76, 10, -66, -39, -16, -94, 81, 6, -95, -74, 77, 61, 71, 95, 68, 85, -73, -125, -25, 124, 60, -27, 111, -27, -28, 89, -40, -118, -56, 101, 36, -121, -98, -112, -44, -98};
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
    msg.setTimeStamp(0.2669464770651532);
    msg.setSource(50432U);
    msg.setSourceEntity(2U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(85U);
    msg.type = 69U;
    msg.speed = 15541U;
    const char tmp_msg_0[] = {126, 58, -7, -38, -78, -9, 106, 0, -7, -124, -119, 125, 114, 71, 11, 40, -118, 123, -50, -95, 102, 11, 64, 48, -48, 69, 44, 113, -89, 43, 104, -19, 38, -14, -76, 104, -3, 59, 29, -121, -54, -119, -90, 59, 61, 42, 110, 77, -77, 123, 5, -99, -95, 5, 96, -72, -128, -13, -30, -14, -14, -32, -121, 28, 53, -113, 114, 42, -38, 75, -54, -24, -11, -94, 18, 114, -36, -109};
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
    msg.setTimeStamp(0.4783733045755615);
    msg.setSource(18744U);
    msg.setSourceEntity(240U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(26U);
    msg.type = 75U;
    msg.speed = 38853U;
    const char tmp_msg_0[] = {-40, -51, 36, -70, 88, -128, 79, 107, -120, -84, -15, 106, 119, -125, -76, 119, 46, -61, -36, -30, 73, -93, -1, -15, -97, -123, -81, 60, 88, 103, 103, -128, -12, 87, 45, -41, -70, 97, -6, -125, 63, -99, 126, -105, -74, -42, -125, -99, -8, 121, -78, -57, -106, -83, -34, 116, -75, -47, -101, -24, -126, 51, -34, -126, 95, -37, -4, -116, 27, -12, -63, 18, 1, 122, 36, -15, 64, -6, 18, -112, -112, -122, -18, 114, -109, -56, 22, 94, -65, -65, -10, 12, -99, 23, -13, 83, -91, -61, 64, -46, 44, -82, -74, 66, 87, 53, -22, 48, -56, 107, -58, 23, 47, -2, -113, -100, -23, 20, 111, -58, -31, -67, -89, 92, -55, 77, -27, 95, -47, 113, 104, 17, 88, 93};
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
    msg.setTimeStamp(0.5340066958267099);
    msg.setSource(47953U);
    msg.setSourceEntity(106U);
    msg.setDestination(11846U);
    msg.setDestinationEntity(58U);
    msg.op = 252U;
    msg.tas2acc_pgain = 0.6501812500798803;
    msg.bank2p_pgain = 0.2718912801426827;

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
    msg.setTimeStamp(0.6119748562395474);
    msg.setSource(36564U);
    msg.setSourceEntity(141U);
    msg.setDestination(40715U);
    msg.setDestinationEntity(251U);
    msg.op = 208U;
    msg.tas2acc_pgain = 0.7686688016047954;
    msg.bank2p_pgain = 0.1428088528364393;

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
    msg.setTimeStamp(0.16081590758097475);
    msg.setSource(12567U);
    msg.setSourceEntity(28U);
    msg.setDestination(52258U);
    msg.setDestinationEntity(30U);
    msg.op = 114U;
    msg.tas2acc_pgain = 0.6873478059547645;
    msg.bank2p_pgain = 0.2870329278633711;

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
    msg.setTimeStamp(0.046382714389355484);
    msg.setSource(9916U);
    msg.setSourceEntity(132U);
    msg.setDestination(52149U);
    msg.setDestinationEntity(20U);
    msg.available = 2397863810U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.39485487871206726);
    msg.setSource(6987U);
    msg.setSourceEntity(115U);
    msg.setDestination(21838U);
    msg.setDestinationEntity(97U);
    msg.available = 1562619620U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.039802217346558755);
    msg.setSource(29418U);
    msg.setSourceEntity(224U);
    msg.setDestination(49549U);
    msg.setDestinationEntity(35U);
    msg.available = 3073949621U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.0033338640679030362);
    msg.setSource(31351U);
    msg.setSourceEntity(123U);
    msg.setDestination(61249U);
    msg.setDestinationEntity(41U);
    msg.op = 174U;
    msg.snapshot.assign("YYWAPDZRNRRMKMAQOBGDSPUUMNNSJEDHOIPTFWGUUSXZUZXXLTFYOIRMUCMLTICSWMFMBPEDKHRYSHDXFIZHLHWZAJPUTWKOEALGFOACWQNOHTIUTADVDTWRLFIJPRMFSYZOYXBEEAHKHYPNJLQBGIJOYBQIZBXYNEISEAXPTOECZRBDSIUKNLCMJQQGKZTSVKCWBMNVFPWPQECYHDHKJGKVBLNTQRB");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 60461U;
    tmp_msg_0.duration = 42218U;
    tmp_msg_0.speed = 0.7222437757363595;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.x = 0.3573535598112836;
    tmp_msg_0.y = 0.24493348124310932;
    tmp_msg_0.z = 0.44525458141563334;
    tmp_msg_0.z_units = 9U;
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
    msg.setTimeStamp(0.48395135568486736);
    msg.setSource(32551U);
    msg.setSourceEntity(123U);
    msg.setDestination(57710U);
    msg.setDestinationEntity(104U);
    msg.op = 77U;
    msg.snapshot.assign("LXUPYUKUSMEZIMNZTPRKQJIHJZFVMXFJPHZPHYQABMORZQQSOTGAJGCIHHXAINMGCWTHNLAWMBEQKXNUFVYQTWCYJGITZSMAIGYFYHBELRSGBPUJWJIYTOCKRDTDQCWVFOFKFWMXCNIXQSUIURVDFEEXZDDSEDRBCKHWNZQBOVZGKDIOBEWOPAGBLNRFUUYLQEXVDRXDSRNTKPPALANMKYGCJSYNKLXPZESHDWFLMVUABOCRBALTEJOSTVHL");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62153U;
    tmp_msg_0.off_x = 0.9617745735200451;
    tmp_msg_0.off_y = 0.30292157679776555;
    tmp_msg_0.off_z = 0.18505029618317448;
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
    msg.setTimeStamp(0.5336057503631612);
    msg.setSource(62879U);
    msg.setSourceEntity(61U);
    msg.setDestination(14957U);
    msg.setDestinationEntity(1U);
    msg.op = 12U;
    msg.snapshot.assign("HGLSELEUKRQIMKWOZPVWLXXYYTODZRTABLONBMAH");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 254U;
    tmp_msg_0.htime = 0.7892204118610064;
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
    msg.setTimeStamp(0.20579369763250444);
    msg.setSource(65192U);
    msg.setSourceEntity(227U);
    msg.setDestination(4930U);
    msg.setDestinationEntity(249U);
    msg.op = 230U;
    msg.name.assign("NMMQTNQXWGKKMGLVSFRCSWRLUIUUWGYUCUYPVWOASICZXROQQYNVOBEZDEFOJTYWIYGQSTEGWZBHDKPFOFPCLAARIOWVBFSPILDJVTDAFVQJHYAFADNTNJDMJKLMNBZPGVCMUQBTTWANHKOPKUJELLRXIZJHNCZUAXCSWENACERGBDHOERNJGKFEVGDMXCYZIKMJEXLHISZXJOHO");

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
    msg.setTimeStamp(0.43360026235302784);
    msg.setSource(56995U);
    msg.setSourceEntity(52U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(26U);
    msg.op = 184U;
    msg.name.assign("PLLHFZJIBWKERTALYNQGRMOYJPRPW");

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
    msg.setTimeStamp(0.9094454257318964);
    msg.setSource(53173U);
    msg.setSourceEntity(95U);
    msg.setDestination(21706U);
    msg.setDestinationEntity(108U);
    msg.op = 79U;
    msg.name.assign("UXZCVDMHWFQHBZZKNQJI");

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
    msg.setTimeStamp(0.8351081311644682);
    msg.setSource(27359U);
    msg.setSourceEntity(176U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(78U);
    msg.type = 222U;
    msg.htime = 0.8134667522976148;
    msg.context.assign("QITQMHMCVSSHJJJJGUWPWQKKYAZINHYFUCJDTXCSPOVABCGIOWOQLYNGEMBKPPKFLEHRHAMDMLEWWYODLOOLTXGYUFFFIKLCBAXGKVKOQNRUVGJUYUDIQSBFAV");
    msg.text.assign("XPTCNWMQOAKSOUKYQIJDPKTHQRJWPZXLYHFQDFYNUTXWMSOTYMWVIZBQKVKAAONABWEGTNGSIDJCZZMHUHRCDOULDJCAZYWPCDWEROSRAPVGEUSSIYLNMXINXPBLISRGOLTYUGJDHSVRVVIVUJWTNCOLHHKKEFVUBHCJONPRMBKGPKSQJQHRDATMRJCAEWZXYRVPCFBYBIZLHAFSMFIXCKNUIBTZEQGFGNXGGBXZMD");

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
    msg.setTimeStamp(0.38815161507161);
    msg.setSource(3380U);
    msg.setSourceEntity(171U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(65U);
    msg.type = 187U;
    msg.htime = 0.06701978315241164;
    msg.context.assign("DTJXREUQFNCVTGHXRUBZWHUJKOJFHZZWNYVMECFKTESYJQXGZICZYAWLVORMUDBLDIHHIMPMBPQLVZIVACERYRDKSFSKGRPXRNNQQUTUOAUQSWTFNFTRSJPPZFTXGVHBLONIATLOPKYYFPQJCDXX");
    msg.text.assign("JCIVGJUDUSPXNWNRTPLQVAPXZUNVQSJUSHFWTREPOBKBGNUQIKHZMNWEXDZMCPBYOAVWPBBNLFCIZEOZXHEWCCROYTCHRBHONRIDIXOSKKWIQXKL");

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
    msg.setTimeStamp(0.5664991101957844);
    msg.setSource(30653U);
    msg.setSourceEntity(145U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(168U);
    msg.type = 235U;
    msg.htime = 0.4497703701120509;
    msg.context.assign("ZUEGEMJWTDIMLPMZARIEUHMNVATBPOMHVQQVAJGUGBHWXBOPLXULGVDKCJSSMIGJXTNZFYEGUBTJKPE");
    msg.text.assign("EEMFWKIWZUOMYFCLALEAGVKYEZQUDRNMTGJESHEHBNPYVMVIDKTSZURYULWSCJHCQNLRPORMJFCPAALQSZSBXQCOANAQJGBEUNRLTQDZBIKJDHBKNLTWYFSBRIRJKPZGIMCXVAASSKOYFVSXNLVZUXBKORZHWBJHVGPBZOYOEIG");

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
    msg.setTimeStamp(0.933773719950874);
    msg.setSource(37877U);
    msg.setSourceEntity(250U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(20U);
    msg.command = 44U;
    msg.htime = 0.37515153065259954;

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
    msg.setTimeStamp(0.7159815885544101);
    msg.setSource(60071U);
    msg.setSourceEntity(89U);
    msg.setDestination(56995U);
    msg.setDestinationEntity(97U);
    msg.command = 53U;
    msg.htime = 0.2045541919367767;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.htime = 0.9112977448149776;
    tmp_msg_0.context.assign("NZTMYGPHSKVVODDWOKKVYFZNIZSHJUBABLIPQQUXALHJXGMPFHHASEISBISQYWR");
    tmp_msg_0.text.assign("SKNCXUKCNYENXTCTKWQVPAJNSJMTRSYTAJTEDLLZVJMMEQWDBIAPEBZRGFCHEIPVBUIGANIXZRKEFEAWFDMWDSLWNSXWUBBQVQMBGFKBDLCHQHZBKUYFXAGHQOLXVWRANMFGIOKXVPOZJCIZHYRJEUYMZHZOUGJTEIBFOZYAAYCOHQOLODQSTRPSUWDNOTISMRHSCJDB");
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
    msg.setTimeStamp(0.9275896589888939);
    msg.setSource(39021U);
    msg.setSourceEntity(189U);
    msg.setDestination(17955U);
    msg.setDestinationEntity(227U);
    msg.command = 135U;
    msg.htime = 0.7869512973352545;

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
    msg.setTimeStamp(0.9245353273186557);
    msg.setSource(42754U);
    msg.setSourceEntity(198U);
    msg.setDestination(13104U);
    msg.setDestinationEntity(218U);
    msg.op = 130U;
    msg.file.assign("UVBIAGYQJONBIUKEXBJKNTQDPCQWKJLCHNY");

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
    msg.setTimeStamp(0.2547552256634117);
    msg.setSource(50593U);
    msg.setSourceEntity(166U);
    msg.setDestination(2942U);
    msg.setDestinationEntity(101U);
    msg.op = 168U;
    msg.file.assign("IRGPTPRGIMBXDZKTORDAOAYD");

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
    msg.setTimeStamp(0.8429496053695388);
    msg.setSource(57869U);
    msg.setSourceEntity(176U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(198U);
    msg.op = 62U;
    msg.file.assign("FRZQBITCUVRFZKELKEXMVUFDRHPJTRBPXNHJMDPYEEKOCTRAJTDXYNJXQHUVSILBRWQDSMIEPTUVJXICZCQADBOAGGOPIVWPTUMHXYIZLKDOQWXWYNFRORCLJXRMQEWONYQHPGLWDSTCUSRISTGAAHSWKSCHGHJHOEZUFLDTYJUWELMMZNSTVGCAYQYSNOLNALDNFBAAFLMNCDQYZWGJVYVEZFUIB");

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
    msg.setTimeStamp(0.31930514562316437);
    msg.setSource(9552U);
    msg.setSourceEntity(27U);
    msg.setDestination(37851U);
    msg.setDestinationEntity(252U);
    msg.op = 160U;
    msg.clock = 0.33752617937176344;
    msg.tz = 96;

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
    msg.setTimeStamp(0.8299456616353417);
    msg.setSource(59479U);
    msg.setSourceEntity(176U);
    msg.setDestination(44076U);
    msg.setDestinationEntity(78U);
    msg.op = 63U;
    msg.clock = 0.2867617682069993;
    msg.tz = 98;

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
    msg.setTimeStamp(0.6956855595293193);
    msg.setSource(52125U);
    msg.setSourceEntity(157U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(120U);
    msg.op = 49U;
    msg.clock = 0.8127413436424826;
    msg.tz = 124;

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
    msg.setTimeStamp(0.7330421947594523);
    msg.setSource(19256U);
    msg.setSourceEntity(198U);
    msg.setDestination(53124U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.4030687005661202);
    msg.setSource(50595U);
    msg.setSourceEntity(137U);
    msg.setDestination(47135U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.35292726130829);
    msg.setSource(32488U);
    msg.setSourceEntity(125U);
    msg.setDestination(18549U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.3390904193019836);
    msg.setSource(64531U);
    msg.setSourceEntity(6U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(136U);
    msg.sys_name.assign("ECFVOTKDGGQZWVBZXUWEMKDBZDWRWWNLHZMISZBWIMQAMMRNKEAGXRGWMRJVFXBPQVYQNZSYHCNEQAVRBSPPDGRKLKTUFJEOCKIVYXVRPJNPTZHMTCFQGMYCDOWPFCOIUCMTDPJYCORHXLWYUMBVCKZAHASYGAQELXTFHRYHASDN");
    msg.sys_type = 188U;
    msg.owner = 14144U;
    msg.lat = 0.17642760952212777;
    msg.lon = 0.5675408339580433;
    msg.height = 0.6660422951181973;
    msg.services.assign("KTNBHROGNXAQYOPUJAVJFGKQHPFPWRCWKQLHQPLDXVSBEFUACWDKTBPXIESYZMSXEQRYGTBULIMZFYHZRWPXHDAUENUNYILRYNEAQLXHTRCYJDWAVAFSZIQWDDIDMUKIIABCGWOTVJFTKOTNZKLSVVCQDKMBVGJN");

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
    msg.setTimeStamp(0.5834049642982354);
    msg.setSource(15183U);
    msg.setSourceEntity(198U);
    msg.setDestination(1188U);
    msg.setDestinationEntity(252U);
    msg.sys_name.assign("ZOSISUDHYENOQTNCIMKOYWOLDNZFXMVFBSUUALTDTEQQKFEBRHYHBGHLSUZLCRMCQRIAHZYAUKFKMBJQRGVVANDVAPPAUISPHPEJPXVNXPJNXNXMHAFQIGXTVMLJVDGWYR");
    msg.sys_type = 147U;
    msg.owner = 22875U;
    msg.lat = 0.24470869001415663;
    msg.lon = 0.6288676775049994;
    msg.height = 0.5272892473032841;
    msg.services.assign("LEAPKQAPWHUFBEJXGOOPJRNVHYSJZZUGWLWXQSLBSEDVQUMAHGTNIEDSTBKJXKDOANNXNOBHDASRFABIYBXSVARNUIRLUQRXYFGWLTAWAXSYRRMTEIFKJPFUJFJEOOOPFDWGCXFRZKDHYYLDWGGCTLEHM");

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
    msg.setTimeStamp(0.667464909957551);
    msg.setSource(22646U);
    msg.setSourceEntity(246U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("GLJMPDJPQTABRSQUEWTXNGWUZFTITVMJDQUYTJAAAISKCYBMHIBUZIUSINHRZYWNSRFIKAXNYIKTFCBXVUZNRIKERGJDGDCZSHVYPQKXGKFEBNYZMVDRQCLKHEEELCOCJZAOVLZHKPYLTNUXDLJVNGMSFDUHVGSFIRMXTQWWJYDIKFCPTPRPOMGRDOBXJBWHWQVGSJELHOBFO");
    msg.sys_type = 57U;
    msg.owner = 25160U;
    msg.lat = 0.24189164688696652;
    msg.lon = 0.9962803844260575;
    msg.height = 0.607860663884311;
    msg.services.assign("VVBLIZVLKJRNPFHYAVVEYIAXDSHMXAXAHJJPDXARXIENBNSHLTWDVTQUUIFRCTPJEVNUCH");

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
    msg.setTimeStamp(0.4225767167339288);
    msg.setSource(6692U);
    msg.setSourceEntity(175U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(75U);
    msg.service.assign("GNNNYMUOHAPXLDAGLUYWARXJTELSHJYKIEQCOUBMEZVABBUGFZTLSZONRHZKJJHGCJTXOGJHTXZMYKYOXWVEQMDFFNVZUQMTVZAQLONGUQODCVEXOT");
    msg.service_type = 146U;

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
    msg.setTimeStamp(0.7825984682992365);
    msg.setSource(47972U);
    msg.setSourceEntity(54U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(52U);
    msg.service.assign("RXLIJRHQXALOKDCGDTGUCXGFTCKPREQLEATHPLFFECZCWJODEKVUDCZJXJYFLMDDYCPYKSIAUWQSGUFVSQEQWTWPMIIDBBSEHVHBYINXTSZZMNDYOPJLULRAPWJTMUSIUOXYSZZHHABYHQFKXTJGIIPVBSEGRNLYAXFMRGCRSQWNWUZOBUOGOFZKXORKLPVWNJNWAULQGYTXNJVHGVENVPRKDMCOIHBQWPVOYEN");
    msg.service_type = 2U;

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
    msg.setTimeStamp(0.7805757917979174);
    msg.setSource(25903U);
    msg.setSourceEntity(139U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(3U);
    msg.service.assign("MMJRCMRFYDUETUBKWPKRSLXVF");
    msg.service_type = 125U;

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
    msg.setTimeStamp(0.1406418483968418);
    msg.setSource(14710U);
    msg.setSourceEntity(137U);
    msg.setDestination(24223U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8429416259572273;

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
    msg.setTimeStamp(0.8404609451688049);
    msg.setSource(5487U);
    msg.setSourceEntity(48U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8245325860061986;

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
    msg.setTimeStamp(0.28806468340016045);
    msg.setSource(11178U);
    msg.setSourceEntity(231U);
    msg.setDestination(50042U);
    msg.setDestinationEntity(179U);
    msg.value = 0.06375936675090055;

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
    msg.setTimeStamp(0.39873093916673386);
    msg.setSource(7438U);
    msg.setSourceEntity(78U);
    msg.setDestination(13309U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8890823679625081;

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
    msg.setTimeStamp(0.7195987130501006);
    msg.setSource(2663U);
    msg.setSourceEntity(189U);
    msg.setDestination(43875U);
    msg.setDestinationEntity(102U);
    msg.value = 0.22068462280243517;

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
    msg.setTimeStamp(0.68655385048327);
    msg.setSource(16429U);
    msg.setSourceEntity(45U);
    msg.setDestination(61913U);
    msg.setDestinationEntity(106U);
    msg.value = 0.06805004254515779;

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
    msg.setTimeStamp(0.43990409580019574);
    msg.setSource(54058U);
    msg.setSourceEntity(231U);
    msg.setDestination(24999U);
    msg.setDestinationEntity(136U);
    msg.value = 0.549835854313522;

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
    msg.setTimeStamp(0.7201872241092273);
    msg.setSource(61421U);
    msg.setSourceEntity(18U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(165U);
    msg.value = 0.37792595896075265;

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
    msg.setTimeStamp(0.16454816906473058);
    msg.setSource(42658U);
    msg.setSourceEntity(3U);
    msg.setDestination(61712U);
    msg.setDestinationEntity(190U);
    msg.value = 0.40303103119731776;

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
    msg.setTimeStamp(0.6709187980972708);
    msg.setSource(55208U);
    msg.setSourceEntity(105U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(161U);
    msg.number.assign("CWEAIOZIGGSYBFALGZKZMBXLAWSTFXINRPZCZFWSDNRQMBFKYHANAWBEXUGFHTWWVBQTUFXWK");
    msg.timeout = 16482U;
    msg.contents.assign("XECVDMVBNSLGFOOCNXEKXYRHTMTANHTZNVWPHGKHLDKLQNWGYYHUEMGZFWZZXYMLBFWUTCOWULJZRAFCMDIWJVTDXLRZYMXVWYPBEWDERPDCDOBPQIFBGQAAQSBSVBXMFSNKMTCUQJRMSAEKICTVQCDOMRYETQSUCQJFKTWTAGLIRAJNY");

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
    msg.setTimeStamp(0.7020515292374436);
    msg.setSource(16022U);
    msg.setSourceEntity(107U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(252U);
    msg.number.assign("YNPGSHMUNNAWROVIXVTYLZWULJRXNCPCBWSHATRPUZYMEFHKDJQKQHAKJQEOJVMCRGXLBXTFDEBIHNLOZISOCILKKMWEEUBMSJFRCSJIDYKOFQFNGJAPTLVPRVBSFDABBDAQKYQOUVTELOMKGLIDHXLVUDCMFSDKGQAQWSOXIN");
    msg.timeout = 21860U;
    msg.contents.assign("KEHRKUXQHZDWTXUVIBLTSIQYLJSOCNZWTNMAISQKKFDVJQSEQDXJXNPSJILMYTFLGWWZFTAXAAUHKTISAIFFCNMRHEPRZNBFJSNUOQDKUJCMGGPULVAOHJYBWJDNPZTDNEIGFVGNQAPMYQHZIPNYHXXDRCQGORYXWVPCCW");

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
    msg.setTimeStamp(0.6263511111761698);
    msg.setSource(46153U);
    msg.setSourceEntity(110U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(250U);
    msg.number.assign("KTUORJKWGNLRQTAAHGIBUNPOCZBECXDOLWLQHXIHKDYYRAIPDEGWKSEQURBVGRNPFKTJOLVMHZIVFZE");
    msg.timeout = 48345U;
    msg.contents.assign("AJFUIUMZTQGYFBOITRRMLQPZKVFVYRBUXLEOIHCLHDNGNFMXQKHFYFTQUDZOCCCMJ");

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
    msg.setTimeStamp(0.16342578161591492);
    msg.setSource(22003U);
    msg.setSourceEntity(40U);
    msg.setDestination(2260U);
    msg.setDestinationEntity(134U);
    msg.seq = 2138852484U;
    msg.destination.assign("QUEMURYPSTBCQXWLFHYCAQFDZWGALUQYLETKCBENEHLODFVUUYBXODMWIZPYYONXTBKTHNK");
    msg.timeout = 36883U;
    const char tmp_msg_0[] = {71, 86, 11, 105, 39, -109, -61, 4, 29, -60, 49, -4, -118, -115, 84, -51, 54, -82, 123, -84, -38, 90, 110, -72, -125, -34, 113, 60, -93, 122, -65, -80, 102, -90, 76, 103, 41, -107, -5, -107, -63, -81, 15, -79, 16, 46, 0, 82, -19, -21, -25, -81, 116, 5, 27, -116, -106, 36, -126, 99, 3, 56, -5, -99, 3, 89, 121, -78, 70, -128, 23, -56, 58, 25, 17};
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
    msg.setTimeStamp(0.7077924348219702);
    msg.setSource(31789U);
    msg.setSourceEntity(248U);
    msg.setDestination(27577U);
    msg.setDestinationEntity(185U);
    msg.seq = 4276110258U;
    msg.destination.assign("RMANSULKCHDKLKENZMYLQTKKARLOYBDWQUEIBCYKDNLPBYQSTGJHMWDZBXSLRTVLACGXUEQHFGFYOXH");
    msg.timeout = 8035U;
    const char tmp_msg_0[] = {51, -88, 69, 53, -21, 108, 76, 100, -82, -14, 44, 28, -57, 38, 12, -88, 91, -53, -4, -50, 14, -66, -40, 54, -120, 99, 54, -119, -112, -26, -39, -88, -21, -112, 4, 27, -71, -126, -56, 55, 71, -83, -53, -36, 77, 36, -25, -70, -116, -101, 113, 110, -29, -80, 91, -28, -119, -50, 92, -15, 79, 112, -48, 116, 90, -126, 108, 12, 122, 84, 13, 23, 108, 43, -13, -66, -114, 0, -94, -122, -19, -6, 99, -14, 65, 76, -29, 45, 48, -42, -60, 58, -12, -40, 41, 45, 45, 10, -118, -71, 21, 10, -81, 70, -75, 41, -69, 2, -107, 98, 7, 43, 4, -128, 66, 113, 85, 14, 120, 54, -19, -37, -49, 5, 3, 84, 95, -27, -108, 50, 74, -56, -95, 6, -3, 64, 54, -74, -37, 62, 12, -85, 98, -78, -24, -38, 88, 112, -62, -85, -92, 109, -33, -84, 63, 13, 81, -104, -116, 103, -27, 40, 42, 66, 26, -86, 63, 60, 106, -49, 75, 38, 15, -47, 12, -29, 75, -85, 82, -111, -122, -118, -47, 97, -28, -44, -8, 81, -6, 85, -102, -119, 60, 4, 38, -99, 126, 125, 54, 8, 54};
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
    msg.setTimeStamp(0.7700957314017974);
    msg.setSource(55142U);
    msg.setSourceEntity(64U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(67U);
    msg.seq = 3416880992U;
    msg.destination.assign("XYDJDIAPMGBFXODQZJGNXGCAEURXOIDPJYCOTYCVZIPFBPDIUGJWKEDDAUHTHCSTMFQVOXGSCSRCTJVO");
    msg.timeout = 13027U;
    const char tmp_msg_0[] = {-74, 23, -92, -26, -3, -10, 5, -110, 6, 44, -77, 34, 74, -58, -103, -106, 88, -128, -120, -46, -91, -13, 91, 40, 104, -90, 15, 81, -31, 8, 74, -26, -59, 26, -108, -128, -75, -23, -7, 78, -45, 25, 8, -123, 62, 120, 111, -72, -69, -61, 83, -71, 113, -56, -55, 121, 102, 51, 124, 0, 88, 31, 21, -117, -104, -7, 85, -64, -66, -73, 95, 55, 84, -42, 46, 71, -81, -50, -127, -61, 26, 40, 87, 64, 32, 2, 77, -89, -84, 61, 53, 79, -116, -33, -111, 77, -6, -4, -69, -13, -58, -69, 75, -23, 125, 118, -108, -70, 20, -20, 121, 10, 19, 4, -81, -65, 45, -2, -87, -79, 36, -30, 92, 125, -61, 18, 82, 74, -20, 124, 114, 43, -22, -1, -122, -17, 71, 38, 51, 28, -24, -85, 96, 13, 113, 18, -84, -50, -91, -27, -99, 50, -62, 117, -109, -95, -23, 82, -36, 59, -42, -65, -68, -100, -115, 15, -43, 82, 96, 41, 73, -35, -36, -89, -65, -20, -50, 30, 72, -3, 35, 0, -15, 66, -19, -108, 0, 100};
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
    msg.setTimeStamp(0.5368799702121227);
    msg.setSource(27007U);
    msg.setSourceEntity(7U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(141U);
    msg.source.assign("HWJXCZQLOSCPTNGZRNGOBAHKEYCZJEVHIFPNLFGZESWCEQKFSRTDXNWZQUKBABSYRQHOHRZTMYKAONBHBPEITZWPNPQWSNILDYKCUGVXMORDDFYKBBJHOGKGMVIACTUTQONFNMIHKRIXTVEJPDRBAXDYSVSEFSWJUYFGCRQQNPIKMJ");
    const char tmp_msg_0[] = {-42, -105, -79, 56, 113, 35, 16, -122, 4, 93, 61, 104, -39, -127, -57, 76, -23, 30, 119, -95, 65, 15, 41, -43, 48, -110, 27, 81, 114, -24, 12, 120, 11, -17, 124, 110, 40, -77, -80, -41, -123, -116, 59, -45, 18, -121, 18, -33, -42, 24, -1, -116, 106, 66, 100, 109, 8, -19, -4, -106, -73, -86, -86, -54, -70, 106, 65, 115, -55, -67, -10, 98, 71, -46, 62, 125, -32, -70, 3, 50, 43, -45, -28, -111, -7, 58, -12, -62, -38, 33, 24, 87, 125, 14, 83, -103, 96, -107, 3, 47, 68, 124, -105, -88, -92, -77, 90, 74, 119, 85, 87, 104, -27, 73, 24, -27, 106, 26, -77, 31, -43, -106, -38, 54, -83};
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
    msg.setTimeStamp(0.454034465547683);
    msg.setSource(43343U);
    msg.setSourceEntity(168U);
    msg.setDestination(65260U);
    msg.setDestinationEntity(175U);
    msg.source.assign("SNEZHEQGKYIUIETFTRKPZWMJHIMFLEOHHLQTHMYNCHAKLMDLXJKVOOXEXZUWMUDOPTUCAZYZPJVNHGEABPHXICUCXPQOGVYWKBWULSQWNGVAOLLWLMQNDBGSXRUBCIEGDICRTSERDVPSKLRTCUGCIFKWDDTYSGKRONXOQISJJBKPMAIXDFWVBANPFBGZFFEOMAXBUTRTZ");
    const char tmp_msg_0[] = {-85, 52, -3, 81, -118, 113, 98, 89, -58, 34, 88, -111, -101, -82, -59, 76, 106, -45, -36, -103, 68, -48, -126, -67, -13, 9, -42, 102, -7, -3, -42, 27, -17, 57, -55, -113, 73, 112, 121, -23, 70, -48, 60, -29, -28, -112, 95, 71, 53, 14, 4, 49, -60, -61, 107, 59, 108, 99, 111, -63, 32, -111, -97, 66, 124, 39, 106, 28, -128, -31, 88, 114, -71, 72, 90, -24, -54, -67, 88, 110, -65, 77, 13, 28, 21, -10, 5, -127, -48, 50, 37, 39, -56, -106, 61, 52, 90, 12, 9, -78, 76, 60, 73, 25, -86, -34, 71, -82, -46, -110, -30, 110, -87, -103, 59, -73, 40, -79, -117, 91, 16, 64, -25, -49, 26, -76, -74, 112, 4, -2, 1, -112, 9, 108, 1, -123, -77, -72, -13, 109, -54, 71, 60, 9, -51, 3, -68, 98, 72, -16, -51, -54, 82, -78, -73, -55, 23, 31, -53, -115, 49, -65, 112, 110, 78, 20, -90, -95, 108, 49, -16, 112, -91, 99, -51, -10, 25, -50, 83, -90, 57, 88, -108, -78, -122, 63, -5, 11, 11, 14, -85, -117, 4, -17, 119, -87, 80, 107, -104, -91, 48, 31, 81, 24, -68, -80, -125, -112};
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
    msg.setTimeStamp(0.816615610264997);
    msg.setSource(34827U);
    msg.setSourceEntity(163U);
    msg.setDestination(57598U);
    msg.setDestinationEntity(114U);
    msg.source.assign("ARQOKBQTLTDYFKMDCLEWCTQHAYNWRGJJVYZATEXHEXNATZQ");
    const char tmp_msg_0[] = {79, 91, 114, -18, 76, 35, -36, 51, 0, -120, 26, 38, -46, 50, 47, 87, -11, -100, 1, 123, -89, 115, -29, -57, -11, 21, 51, -58, -12, 79, -13, -99, 107, 35, 87, -42, -71, 24, 67, -108, 51, 5, 15, 79, -50, 123, 84, -106, 44, 71, 14, 69, -24, -108, 8, -69, 103, -7, -7, 84, 39, 29, -68, 54, 114, -64, 94, -43, -128, -101, -82, 102, -110, 77, -89, -37, 109, 40, 14, -105, 59, 31, 80, -55, 97, 43, -2, 7, -67, 67, 78, 26, -13, 23, -127, -93, 101, 97, -53, 54, -44, 39, -24, 3, 69, 99, -10, -10, -73, 55, -44, -58, -112, -7, 59, -76, -71, 63, 42, -26, 2, -57, -59, 101, 50, 53, 17, -47, 117, -24, -4, 26, -9, -88, -24, -50, 89, 64, 72, 54, 32, -54, -86, -92, 34, 32, -76, -121, 29, 61, -52, -65, -47, 54, -43, -59, 99, 81, -35, -52, -1, 68, -102, -11, -99, -128, 126, 91, -62, 98, -46};
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
    msg.setTimeStamp(0.16297883028335491);
    msg.setSource(2494U);
    msg.setSourceEntity(25U);
    msg.setDestination(65217U);
    msg.setDestinationEntity(148U);
    msg.seq = 2762210913U;
    msg.state = 164U;
    msg.error.assign("FEIEAEVGFBFJDBIOTYFDYEPXLALNGAFAESMCKFMQWPJSDISKTKUVXEYUXTAWXTVXJQNAZUYCDZIBLMZMCNHSHOSFPRYMYMRHJYRLBZUTWNPYOHJLGEVJPMPQGINKDVEOTWXXDKVCMNXQVENRYAHBASLWHKODGDIPOHSIQLUZCCCOBWIDZZWUCJQUZSQMJQBLBIHGVGWQCLGMXFLVKQFRAGOZWKNTSUENRPJNU");

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
    msg.setTimeStamp(0.311665096876541);
    msg.setSource(60131U);
    msg.setSourceEntity(178U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(71U);
    msg.seq = 3199014670U;
    msg.state = 79U;
    msg.error.assign("MQXOYTRAFTJFNSIAMAPIIVUFYPIMPFZSGBSBGXDORISGSZETUZGLUMDVQXLAKYPAPLWTKZLSAVLDNABCQVEAWJZLCFDNQPPU");

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
    msg.setTimeStamp(0.633735711336561);
    msg.setSource(26159U);
    msg.setSourceEntity(233U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(31U);
    msg.seq = 2022068814U;
    msg.state = 119U;
    msg.error.assign("DJCIXZXACZBKRVGJNRYYJTEK");

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
    msg.setTimeStamp(0.7525549560589462);
    msg.setSource(31580U);
    msg.setSourceEntity(64U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("TNEPGGJZVNYWVSSZXCZUZOMIHMZUMXNXEEQDWXLRIFPJZLTEFIKDOREFDXPWFNYQBGMRNSYFLVQUHTPLIJFNHNSSPQDOBITGUTJCOKJOVYRCCPWFAIERKXSDYDBUUQNAOTBPAAOUJRMIWQCSKQYSWTBJTPXREZPMKIMAVF");
    msg.text.assign("DGPJNJJOXKNEVBOSJXWUNXKTYAZGQCRLWOXYPJDWBD");

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
    msg.setTimeStamp(0.0673142437753218);
    msg.setSource(52355U);
    msg.setSourceEntity(123U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(106U);
    msg.origin.assign("CJJKOFFWSBVHYSHOYZQDPXMQAHYKJKHGXXEUJJEDAQCEPOWLVWKTTYZGJEOMLUDPWDUKNRUANCBDBBPJILZVQCKRFXUCYXWCJHBTVWTALSGNIYOZKZFFES");
    msg.text.assign("YFZELZBCIJOVFLJUVBZEOFMTKDCVQGYUFLQEEYTSNROXTATIZNWCGVOZPUAOVDRNSSMUOWYLHWDDQJPKVXIYWPQJKREAWOUVBUHRB");

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
    msg.setTimeStamp(0.10811923363791776);
    msg.setSource(24175U);
    msg.setSourceEntity(231U);
    msg.setDestination(56038U);
    msg.setDestinationEntity(193U);
    msg.origin.assign("LAPZREUKCIXYCVKIBSUCMDQLXEKPTHJFNLZOZWLYSPPJNNIVTXNDJRATJWGEBJFCWMHUGTPYGAMVDSPJMODUDZUGHBQLJZJGYLCYZQWNKSNCOXTFZDHMYKXXBYEVERHUFPNBFZCKQHRAHWMYGELLODOPGSTFECBRTQXZOGJQDRNIEILHDBKXQRAPUVSBURETXTMMVJYPXFAISGBOU");
    msg.text.assign("ZPPQGDSSRHSVEIGWHNKTTOKGLIYVLMHBWYGVOAEQRLJGFJUHCIKDIAZDMXPJRFIHYVONAKMLVEGXCDBVUIAIABEBALBQHFBYQYRJVXUGRZNZXKWQCILLMMKOXHQNJNUNCMOUKGDSEGXEMFAUBOCELUJEPPOXZDCJWTPUBESBSEGRVVZYWPFFUNFYRCQDDORCKTJMRNTCPFWYFW");

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
    msg.setTimeStamp(0.3046814998240548);
    msg.setSource(27780U);
    msg.setSourceEntity(35U);
    msg.setDestination(32615U);
    msg.setDestinationEntity(191U);
    msg.origin.assign("ZBSQVNJAECRNZTJQSNIWRVWTZPARLLJACJAIVYWXURDOMPQODEASZDBTSTKK");
    msg.htime = 0.07035651486644712;
    msg.lat = 0.7053726877926064;
    msg.lon = 0.651071807063256;
    const char tmp_msg_0[] = {-107, 34, 70, -101, 36, 75, 11, -22, 66, 79, 15, -127, 72, -48, -12, -37, -58, 88, 49, 64, -109, -2, -120, -79, -80, 39, 17, -62, 4, -27, -102, -107, -32, -125, 38, -93, 86, 65, 126, -51, -20, -51, 75, -121, 111, -96, -20, -93, 21, -58, -48, 101, 58, -84, -99, -111, 27, -51, 26, -16, -93, 64, -111, -90, 50, 15, -94, -29, 98, 85, -6, -46, -106, -71, 103};
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
    msg.setTimeStamp(0.8658477070040258);
    msg.setSource(14550U);
    msg.setSourceEntity(48U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("RUWESBAKEJVGXBHZUGPDRDWBLXUTEPVRKRBHUPODDVFOYWICZLGCXAPVSVHUJXMHHQJCHWWYUQNJXZIPDQHHZACUBUTTCTOWISXFMLWRJGNFERODFJONDMAIFGAQJYNMZPOCJYTGLTLBTKKXGVCMMVAQRNNRSFZZOMYEPKLLLWBCQFBQSQYVJSRPNTEPCQY");
    msg.htime = 0.11665769454207164;
    msg.lat = 0.18608721537193718;
    msg.lon = 0.04315144724502884;
    const char tmp_msg_0[] = {45, 72, 84, -32, -16, -59, -120, 108, 126, -71, 86, -85, 63, 24, -8, -82, 34, -36, -64, -101, -64, 83, 57, 112, -104, 25, -17, -30, 89, 39, 18, 44, -51, 104, 0, 46, 98, 57, -89, 59, 51, 45, -70, 69, 112, 58, 116, 35, 26, 26, 9, -123, -50, 73, -22, -126, 40, 7, 12, 7, 22, -106, 87, -91, -68, -55, -36, 120, 35, 13, 57, 92, 0, 117, -27, 63, -24, -46, -112, -107, -44, -80, -34, -12, 34, 109, -93, -115, 101, -99, 69, 121, 19, 20, -6, -71, -29, -126, -86, -25, 123, -78, -31, 45, 119, 66, -50, 3, 97, -47, 12, -34, -48, 100, -43, 50, -71, -26, 87, -14, 120, -62, -33};
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
    msg.setTimeStamp(0.5340621571513788);
    msg.setSource(39612U);
    msg.setSourceEntity(198U);
    msg.setDestination(27064U);
    msg.setDestinationEntity(155U);
    msg.origin.assign("GATHDMTXIXBAPHPHENDMSSUKHHIXTVAHKBYJCJFSEUJZIRZRLXQIGNRZRKOAXCPJWAQESQFGPLEITQIVKYPZXFMIVTYTXGU");
    msg.htime = 0.2291300214168308;
    msg.lat = 0.6791347695807752;
    msg.lon = 0.28960722605183375;
    const char tmp_msg_0[] = {-8, -117, -48, -7, 12, -46, -112, 39, -66, 110, 5, 51, -85, -99, -14};
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
    msg.setTimeStamp(0.22622703425745916);
    msg.setSource(10550U);
    msg.setSourceEntity(78U);
    msg.setDestination(53037U);
    msg.setDestinationEntity(169U);
    msg.req_id = 29878U;
    msg.ttl = 61374U;
    msg.destination.assign("CHNSQYOZPSURSSYXKXTOZNIBFYPBDMMXQEPXMJAQGFNKDVPBMOKQSCCHCFMRFHWHGGWVFNPZTZUITPOGLJPQRSEUYVOVRJLJPBRVJYPHKDBUNNUQKGVBABXJWDDWGZKUWYACALIMXOAUIQEMVWHYJDVEAEBQBFIIHQQCSIZXZGXVUCWOETFGDWJTYAKTMCSAGBFELMAXUTTILUCJKWWGNRTNRXYTEOIKZOAFH");
    const char tmp_msg_0[] = {-37, -68, 10, -54, -46, -7, 99, -3, -105, 40, 51, -94, -96, 111, 18, -73, 15, -84, 121, -40, -111, -20, 42, -52, -93, 48, 73, 78, -96, 118, 125, 27, 28, 115, -98, -23, -118, -122, 6, -98, 35, 102, -96, -66, 101, 80, 2, 67, 88, -82, 29, 76, -4, -11, 48};
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
    msg.setTimeStamp(0.3280802175865378);
    msg.setSource(25117U);
    msg.setSourceEntity(169U);
    msg.setDestination(10268U);
    msg.setDestinationEntity(59U);
    msg.req_id = 63783U;
    msg.ttl = 26254U;
    msg.destination.assign("UYFVCIROMVHKRPPFGFYUXICPPPTGUOMGDZSLRCYIEJCKEQUJFSOFHMWLSHQTAZQYITXVDADQHGBKNZNYEDSPXAONKSAJNORQWGSRZMHCPGBRYQKLNFLAOOCFVZBESZZQGPXBSDPXTOGWNBLUGIBLZVYHHXRUBEUGFVVYXUNMAKQDLKHCNMOTOKUIWALREJCVDAMMPRCBJXWJILWEJJSTNRZXAZQDUI");
    const char tmp_msg_0[] = {77, -105, -103, -12, 89, 53, 113, 8, 99, 63, -39, 4, 29, -5, 1, -9, 81, 31, 81, -95, 10, -102, 105, 57, 23, 22, 56, -39, 1, -83, 40, -12, 37, 94, 74, 1, -74, 93, 65, 45, -126, -91, -22, -9};
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
    msg.setTimeStamp(0.8428586167465487);
    msg.setSource(47939U);
    msg.setSourceEntity(136U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(238U);
    msg.req_id = 4078U;
    msg.ttl = 60573U;
    msg.destination.assign("YSJRTURMPKRCPB");
    const char tmp_msg_0[] = {101, -104, 25, -5, -102, -94, 121, 106, 110, 39, -4, -91, -33, -76, 17, 86, -8, -25, -89, 87, -4, 51, -101, -3, 3, 34, -108, 73, -14, 64, 61, 75, 55, 34, -63, -15, 75, -109, -112, 76, -128, 42, 62, 103, -53, 118, 32, 49, -105, -39, -110, 45, -52, -7, -12, 76, -34, 77, -53, -109, 16, 39, 109, 76, 1, -5, -3, 87, -100, -62, -96, 66, 65, 5, 17, -109, 78, -59, 3, 78, 79, -52, -31, -10, -88, 47, 81, 77, 81, 13, -49, -69, 74, 123, 26, -115, -83, 61, 28, 65, 56, -99, 75, -124, 52, -47, -10, 37, -126, 40, 67, -95, -52, 72, -75, 48, -2, 60, 75, -102, 27, -27, 77, -9, -83, 116, -123, 109, 3, 35, -56, -52, 96, 82, -105, -111, 31, -118, 28, -15, 76, -108, -92, 69, 61, -27, -67, -76, 62, -115, 75, -85, -64, 8, 31, -68, -109, 98, 13, -37, -33, -102, -5, 24, -86, 97, -113, -17, 46, 44, -51, -91, 89, 102, 71, 30, -103, -18, -116, -26, 117, -81, -101, -40, 60, 46, 65, -13, 67, 24, 30, 77, -54, 46, -108, 62, -59, -120, -5, -103, -51, 111, 16, -118, -87, 95, 14, 45, 7, 60, -52, -54, 72, -67, -113, 109, -55, -112, -123, 77, 56, 64, 47, 33, -51, 115, 28, 52, 5, 65, 112, 10, 72, -80, -15, 76, 17, 126, -61, 75, 19, 61, 126, 17, -46, -66, -73, -69, -49, 58};
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
    msg.setTimeStamp(0.5476120832392489);
    msg.setSource(945U);
    msg.setSourceEntity(121U);
    msg.setDestination(21192U);
    msg.setDestinationEntity(36U);
    msg.req_id = 24456U;
    msg.status = 2U;
    msg.text.assign("GARBVMQXQMBTNSMPOVPGZLZREAWNUTIOBNQLBYADDFTISIFPTZYHUKEMMEGKCGDHVEBEXJHHQURUWKXAGXJMPCBTRJXPXIRPDZFSIKANUDT");

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
    msg.setTimeStamp(0.8691874010393621);
    msg.setSource(34818U);
    msg.setSourceEntity(139U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(102U);
    msg.req_id = 36133U;
    msg.status = 89U;
    msg.text.assign("YEGDBDQREUFLOEMQTJSYKAQSBIKGREKJBCPMFATMCYHEVRMRCKILGQKNXAEONXFNVYXTHHICNKRJJILWSPVQIHUSDH");

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
    msg.setTimeStamp(0.7368178053909261);
    msg.setSource(18621U);
    msg.setSourceEntity(194U);
    msg.setDestination(24240U);
    msg.setDestinationEntity(179U);
    msg.req_id = 15723U;
    msg.status = 174U;
    msg.text.assign("JKGEICBJDWNOXGXMBAAMFLAAYNCLUVTEPBNQJYJCSAKVUOJGDGARMRKIGQKEVGRDEZDVYHNIFSUPTEZIZPYOPXXQODMMNWWNEZFRLDOXRDNRPOLLQYLHNVCCZJFSTJJKGYWZIRIQRXPVATPUUNLIHKXHBSDQWYOSMTUQAFSW");

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
    msg.setTimeStamp(0.6818661196994221);
    msg.setSource(8991U);
    msg.setSourceEntity(120U);
    msg.setDestination(61129U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("HYMOJFEFOYDRLOMDXBQACMUZCHDORTVAPMWCEHMXITCROFUKOXZLHTQJUBBZSWGQVZRSVKJIZMWJEIORNFHXTYVJVTWSTAZWBCAFEQGBTVRIRYISCGGUJZNNCSLAZTONKWYBPUZLQAQPNSIKPDMXGXCRJQLQGAYGOAYKNIXXUSUHBDYKNQTEYGLVTPPPFVSKWNFNHBVFYXQDPCE");
    msg.links = 1736187743U;

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
    msg.setTimeStamp(0.6081576332421358);
    msg.setSource(33834U);
    msg.setSourceEntity(201U);
    msg.setDestination(44299U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("XAGMQJVFXKWOFDCQDJVBTUMLNSDRJERELDPIZRIZYQGSDCKHWXXTCOAVHDKUBEGNPVPZWSBCDECFVHJLIYHPOTWRMSAVGLMNFOTYCRSGWBEIYHQHWRRNZROCMHOSIZRSEZTHQXLXJKBYBLIPXLPFHNACUOFITUDVSJNIBGUPKWDDGZKPFCUYULUNABPPAOSJJIIKMEYGWCOUTLZMWQNXVSKFEAY");
    msg.links = 1153284597U;

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
    msg.setTimeStamp(0.7862308787129321);
    msg.setSource(12444U);
    msg.setSourceEntity(178U);
    msg.setDestination(569U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("AZJGIHWRYGIHSUDJYRXRHOZUSNQJANXOWKXUMFTTYLITEAAMFQGEFGOYQTEIBPYILFLLMTVCPLXXYPTVNDIDRPBVT");
    msg.links = 2640517829U;

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
    msg.setTimeStamp(0.9236329820882887);
    msg.setSource(20394U);
    msg.setSourceEntity(81U);
    msg.setDestination(19440U);
    msg.setDestinationEntity(236U);
    msg.groupname.assign("VHVLSHBWCCXZKKSXDASHHUZBUMFFCSNGNFJXVEVKPLTUXQZCVDWMWMQLPZDZDGDNTVZFFTETOAGXWJLPDUPHACEOGZCTLRDLVEBWYRJLHYIHENPOBJFXEURQQQOECANCMYJJGNAEUFOTJSWQAEIPARYUMYWTRPGBLNDYTWONZBIBQTGARKJSNRRIKVIYIIKINXKOLEMAU");
    msg.action = 2U;
    msg.grouplist.assign("IZSVMVXXASIQKRVBIPBNCZGDSGSCKKEDFJHMRDHUGQJSUTWAXRKYMWYQHLPCMVTTZFWOUGDLNOBUUEWOXAZCBVWRMSURSCDJTSAHIEQAGQTNWXMXIWBWICYPAIJUVEGOABHNVHBJVCOUEGDPPJMITDKELMTLXLZLJSZPLEUQRCZZUWDJFMLFBPYBXLFGIQCXRFNYSAKGPRINBOVHZQKMDRKTYOFKEOQWAJG");

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
    msg.setTimeStamp(0.801134923193023);
    msg.setSource(29698U);
    msg.setSourceEntity(142U);
    msg.setDestination(36865U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("LCMUIGACZVJQWIQDCFHIOMTFKZWGASKXDASSNJXKYBLQMLZPXMXITUPAIHMYAUEHOSONMEWMPYAUWIFRDUZUPRLNOFYMKEOQDJDQYEWGXOGKNNCNVCLLHSHJRFDWKWUPBOPDIBKCWVBEZZKENQVYLRZJSVXBCFVRZGFBIJWTAYCHTMRVFJDAHGXENOBHLCPMQSPLRYQJTBNTIKTS");
    msg.action = 107U;
    msg.grouplist.assign("QQGIVOQDENIPZOBMMIGLPJUVGRAZEIYSLFKKDTKHNVKHREFVKJHMXRLAACXUZTKQFDGIWAUACLNIRUTTXMDVBERIFUQCSYWYRJHBQVPWMFZEECZCMHPWAWKASLDMEUFOOMPXPHYPNLGGLSWRHJBTVCGQBIEXTNNDJROVFLVTOWDE");

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
    msg.setTimeStamp(0.7723842931871552);
    msg.setSource(51990U);
    msg.setSourceEntity(237U);
    msg.setDestination(49870U);
    msg.setDestinationEntity(202U);
    msg.groupname.assign("GIJRGGUWROGPNGBCFEMDLBJZZXWJHBBGENYBFOHEDFYXRMAUMWCCPXWWPJPLSODDSAIJLHHCHYIQMCXEUDOHOASBRTTSEIVZQNFXSZQZZUPFGEMGJOYAUBPVVQXTQDPXHKZISUBRYQXAICWTRJMCVNYFVKGUBLVOXFEOJZKWZTANCLVHMRBWMLNUVRTFRKSETDUIPNSZPJTGLOSOXKQJIDSYVFNKEQ");
    msg.action = 77U;
    msg.grouplist.assign("GECYVCMTVWOKPBBPCRLVRUYFJQNRGOVEUNXVFAAGAFYWALSSNEVRZCAWFHGQQLIOEPBCGDRKZDSILNOXTQNZDIPYZFPBUCFWDVHKILGXTKXZZOPKWEGENXDHHSOAAOXIJQJTGIMHTHDMNLQBBKDNJRUIEXXGOUCUCHCZSYYKHTJQMFIYPBQMPJLWBVOJYTWUXDIOKNHHLPLSBJDKVRMIFBAJZLTSNKWQGERPMSUCZSQWTRVYWMEAMZ");

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
    msg.setTimeStamp(0.8246073226673035);
    msg.setSource(58656U);
    msg.setSourceEntity(121U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(14U);
    msg.id = 1U;
    msg.range = 0.3419543585252037;

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
    msg.setTimeStamp(0.8522172572751311);
    msg.setSource(40901U);
    msg.setSourceEntity(241U);
    msg.setDestination(52040U);
    msg.setDestinationEntity(60U);
    msg.id = 27U;
    msg.range = 0.5883258918596962;

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
    msg.setTimeStamp(0.9640772300373379);
    msg.setSource(44955U);
    msg.setSourceEntity(87U);
    msg.setDestination(10298U);
    msg.setDestinationEntity(119U);
    msg.id = 170U;
    msg.range = 0.437933321841556;

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
    msg.setTimeStamp(0.08040003299777443);
    msg.setSource(29483U);
    msg.setSourceEntity(202U);
    msg.setDestination(65350U);
    msg.setDestinationEntity(253U);
    msg.beacon.assign("RPQQOUISUWFYXRFWSRBGTLAEYRMGXLVH");
    msg.lat = 0.5345100737870055;
    msg.lon = 0.0015832663711964345;
    msg.depth = 0.867675672048251;

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
    msg.setTimeStamp(0.5700039679593006);
    msg.setSource(5880U);
    msg.setSourceEntity(47U);
    msg.setDestination(45649U);
    msg.setDestinationEntity(61U);
    msg.beacon.assign("BNCWPNIRGVAHOYPFWEXFBJJXKUZZTUNRWJLGQMIBAHVLFKEODBUNAYFZYELFDWOIQYIJSYCSTHIMMTZUQWZGATMVSZRNYYXULSOEQVMJNKCNBFKLICBYATDQHLBCPQZCIGGAHOLWKIVYJBXWMFMNPOVGSWNTUBPWRUHCDDTRQUMZTYSREIFCEQRGBZHOOLSAQPXDUVDTXENVDGIXXPMKOA");
    msg.lat = 0.41741342331620546;
    msg.lon = 0.10561028983658949;
    msg.depth = 0.5738227189041;

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
    msg.setTimeStamp(0.8504023730713796);
    msg.setSource(7124U);
    msg.setSourceEntity(212U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(67U);
    msg.beacon.assign("GZJNBISCIOFIIVZMPYNIGYTFNNWDVLTDHTUOQSYFMULGACPAJGKVDWSPZCNSPOCKYXACETNKRRZOREKBLQVBKKEQBNGYQIWXMGTFLLMISKJDZKPJAHANXQHXXCWGTKVVPGAWPOVDPODHKEZMUUBFOXHHIHFYAZBWOWUQVCFCMOMUXQPDBBSVJHCLYWUIRWJ");
    msg.lat = 0.8263743791481377;
    msg.lon = 0.3642632830955771;
    msg.depth = 0.3246190726199709;

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
    msg.setTimeStamp(0.9008362054050113);
    msg.setSource(41336U);
    msg.setSourceEntity(231U);
    msg.setDestination(10627U);
    msg.setDestinationEntity(220U);
    msg.op = 61U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QYWFSPMQEQVCSYCNTGFDOXZWRZTJWAUEYIRZTCXCTWFJVIFIZPCNQLDDJKDXPQIMUTYUKRKOHGJFQPYQAEMAZLWGKOKLHFAOPZESSUXGTDCABH");
    tmp_msg_0.lat = 0.8823937688279166;
    tmp_msg_0.lon = 0.2644726326294702;
    tmp_msg_0.depth = 0.5583034855962937;
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
    msg.setTimeStamp(0.8892348706881427);
    msg.setSource(5712U);
    msg.setSourceEntity(9U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(126U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.286231274449399);
    msg.setSource(28445U);
    msg.setSourceEntity(133U);
    msg.setDestination(8752U);
    msg.setDestinationEntity(124U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.7923074185364161);
    msg.setSource(32011U);
    msg.setSourceEntity(91U);
    msg.setDestination(25065U);
    msg.setDestinationEntity(109U);
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("KPBUZWJIXZAGYWMDNAUROSWEMEFQLSUJNNQIHDNAXAFWBPFXRTMMGUODGBYDJDHMFXFB");
    tmp_msg_0.predicate.assign("DJAFQSLMEXARPDGHLKXRCHFPQYQSYZYAKWKTMYVDNCOOBCMXOMMRFMLOHQSNSSCLAEUTIBXLENUDMJRTZVRRRZACCPUPVZQADWHESOPXXCJIHDIPAGKZONHWSSKYGFNNVAOTLBWVUJJQEBVWPUYHHZTYGBGVHBWFEDOFWTTCCDPFSTGIVWKGLBXYGRUI");
    tmp_msg_0.attributes.assign("WKJOCUNQHGQTUCFMRTSYXQALQOQKIHRBIXZZFXBROVERFODASNWMEEBYIZOCLWSSQ");
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
    msg.setTimeStamp(0.5578536346293056);
    msg.setSource(59279U);
    msg.setSourceEntity(239U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(49U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.9450034766893354;
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
    msg.setTimeStamp(0.47011824312293915);
    msg.setSource(29216U);
    msg.setSourceEntity(22U);
    msg.setDestination(50025U);
    msg.setDestinationEntity(201U);
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.041300292709573805;
    tmp_msg_0.x = 0.15489230535286602;
    tmp_msg_0.y = 0.9056007325569483;
    tmp_msg_0.z = 0.9889172467294675;
    tmp_msg_0.timestep = 0.9052263472264562;
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
    msg.setTimeStamp(0.0419565314946011);
    msg.setSource(3603U);
    msg.setSourceEntity(121U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(58U);
    msg.op = 247U;
    msg.system.assign("IHDPJHDDZATCHQCTZINCQSBQNXNMOGN");
    msg.range = 0.9264812095701606;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IVQGGOJUUKCDNOVASWWCHWTTBDQZGJMBIQULIXIKXTIIVQYCGLBPRVHXXFMPDRENCONQJZMEDXSLNMTXFBBDTWYWDEHNCVGEYJUNADRBSQROPKZKYTSHLHZCWZZJDKVOMSHYBEFGGYDALNSRIXJVHMLUWJPAKSKBIHQBHMYVFFLWEIRDPOURRJNFPLFJGAEUIPBORVAPZGOEWXWOJSKTZZUAMPLMNTMQQAYEXYZSFPUGKESFKFCAQT");
    tmp_msg_0.value.assign("DPDJYTMJDEBERAKKLJWMZMNWURQYGUCFLKGYOLNPZXENXPIHBDSBRTAWSMFPXPNCJGRKIZTDOWOWIEKFAVNUICWFMSVRYXAVDAFYTTLBQSIUHEDAUKCUNQRCUVEZHZNOABZXEQVUZHDFVFWZGSYHMMFSQJIQRYOYGAQDIFJLETGPFIVJJBWBXQGOLKROIROSGTTNSKPKHPBGAPZTMITCNLJQVVOGSCXHMLLHUBKLOPHXYAHUQVEWZCM");
    tmp_msg_0.type = 87U;
    tmp_msg_0.access = 168U;
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
    msg.setTimeStamp(0.2696268041440065);
    msg.setSource(32936U);
    msg.setSourceEntity(221U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(220U);
    msg.op = 163U;
    msg.system.assign("NNIQBMIHJBQTBKFKEHURARCNTUDEXJXSRDZZYLFQCHPUHAAOPWFZSPJKHGOHBUKZFCYLVMYAZQNAOJFFLNAYYDTPZDWNVOIOKCSEIDZAYLDSOFGCIUTVPCUQCBGIXMRMCQHMPGVFTOGE");
    msg.range = 0.053527038202288435;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 134U;
    tmp_msg_0.error.assign("DDUTJPFMMNNZVPMFQGJPSNAWHNZXXUZBQEFYCXILKDIYIJOQWJGURZYVNBDBSODQRATBFVIIMXJFJBVLWQDKDAOTPRKXURUKZCTXGHRHMQHJGQYVLXEECBQTFRIGZUDUSKSPPBKRNEFYHAYWRENVSOVWKCLKEDMFEWTNZHOLVSJPEMUCXY");
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
    msg.setTimeStamp(0.1879857805687032);
    msg.setSource(61095U);
    msg.setSourceEntity(174U);
    msg.setDestination(61120U);
    msg.setDestinationEntity(80U);
    msg.op = 78U;
    msg.system.assign("AZROTOKDLATFZVYZDEVEHGOZODVRRPJAJZXIRNSSOJENLWFQFWNLOMHYNEBYFIQYAAPZPVBZFOIRMAQTCYKSCTCNWHDUIJXWJHVGLIAIFETTKWICLFXBRKZQGQKYTFAOWEEIMUEFRBGMMXGQBKHMVTEYKLVUPBYDDJPFXYHCUQCMNUZGBULXSSSDMGRJULXDUQNCVLLKRPNOGJISVKWWUMHSUXXJTAORINEBPPHABCWVPBDYGDNX");
    msg.range = 0.08834103704901386;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 17789U;
    tmp_msg_0.lat = 0.5539336109893915;
    tmp_msg_0.lon = 0.2637527964945323;
    tmp_msg_0.z = 0.5555409141603473;
    tmp_msg_0.z_units = 94U;
    tmp_msg_0.speed = 0.792311997671104;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.duration = 45956U;
    tmp_msg_0.radius = 0.35489885887189043;
    tmp_msg_0.flags = 11U;
    tmp_msg_0.custom.assign("FQPQFCZLKYXBLYLZL");
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
    msg.setTimeStamp(0.08787438750964194);
    msg.setSource(7764U);
    msg.setSourceEntity(162U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.10813961801824523);
    msg.setSource(52084U);
    msg.setSourceEntity(127U);
    msg.setDestination(5768U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.1657751431654283);
    msg.setSource(1974U);
    msg.setSourceEntity(54U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.5588509292206922);
    msg.setSource(761U);
    msg.setSourceEntity(136U);
    msg.setDestination(57413U);
    msg.setDestinationEntity(174U);
    msg.list.assign("PXIAGBXFQERHQJYHMEJULMRZZGDKSUVFEUCRIMJEPHQNGTNDJYGATWLNYJOXLXUKBGCMLBIVZXXAVSNNWOACHYVSFJUGXCVOHKBDCWFTYWHLDDXKPTHDKQDGCLNVRAZPFZAJWHFZPMFANNXSWKIQJUMMEAFITQRBSVQIWOEIYCJVIEORMAB");

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
    msg.setTimeStamp(0.20076783719904823);
    msg.setSource(18120U);
    msg.setSourceEntity(46U);
    msg.setDestination(31363U);
    msg.setDestinationEntity(110U);
    msg.list.assign("MBQEFACAOZIQJLGVZDJAVGTFSFDUNFIKCKSXUBHYDFJBIDLGRQHQMJNZKZPVNCLMHQPIIEKNCJKSCBZTYSCPAANDHHYXAAZFOXRZSRFJEKGQNLWDRXYZSOUYMLPPUQWTWBSJWUMOTRNTDOVIDVVHGTLKVIBZMGQEGXAYPPAQWUGTUOFWNRPUKSBTOLCRYDWEYVFMTTXYSKIVHUEGWCC");

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
    msg.setTimeStamp(0.7759099576314055);
    msg.setSource(25713U);
    msg.setSourceEntity(210U);
    msg.setDestination(39731U);
    msg.setDestinationEntity(71U);
    msg.list.assign("LRDDNCVXOJIZSTASVYNGPBLJLTSEMYWVKYAVWPJQRYBELHKFCOOIUVGEZFGZOAXDTNAQMQAVEZQITHDBWFZMIHGJRGNESRUOQOXZAAHOEIKVDFKJXFSZPWJNMCCJYSCDHRRUPXUBBQHTLIWDIJZXFZTNXK");

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
    msg.setTimeStamp(0.3874259440333757);
    msg.setSource(10755U);
    msg.setSourceEntity(241U);
    msg.setDestination(9368U);
    msg.setDestinationEntity(3U);
    msg.value = -28571;

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
    msg.setTimeStamp(0.008038734936909986);
    msg.setSource(21780U);
    msg.setSourceEntity(14U);
    msg.setDestination(9972U);
    msg.setDestinationEntity(191U);
    msg.value = -25379;

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
    msg.setTimeStamp(0.9651650291800662);
    msg.setSource(55584U);
    msg.setSourceEntity(73U);
    msg.setDestination(25984U);
    msg.setDestinationEntity(10U);
    msg.value = -30080;

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
    msg.setTimeStamp(0.5691183727345724);
    msg.setSource(2775U);
    msg.setSourceEntity(173U);
    msg.setDestination(13639U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9790247099421568;

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
    msg.setTimeStamp(0.4417942766554528);
    msg.setSource(48577U);
    msg.setSourceEntity(37U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(81U);
    msg.value = 0.14489012022423753;

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
    msg.setTimeStamp(0.21349228131883213);
    msg.setSource(34775U);
    msg.setSourceEntity(23U);
    msg.setDestination(16621U);
    msg.setDestinationEntity(188U);
    msg.value = 0.07903935291332953;

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
    msg.setTimeStamp(0.5946182802325906);
    msg.setSource(30852U);
    msg.setSourceEntity(141U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(135U);
    msg.value = 0.6306538005899405;

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
    msg.setTimeStamp(0.42750704500557757);
    msg.setSource(24881U);
    msg.setSourceEntity(117U);
    msg.setDestination(11469U);
    msg.setDestinationEntity(51U);
    msg.value = 0.06496172391693955;

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
    msg.setTimeStamp(0.25040904497259175);
    msg.setSource(34697U);
    msg.setSourceEntity(231U);
    msg.setDestination(21310U);
    msg.setDestinationEntity(42U);
    msg.value = 0.08411559136774593;

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
    msg.setTimeStamp(0.18379823540140383);
    msg.setSource(20719U);
    msg.setSourceEntity(92U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(235U);
    msg.validity = 13945U;
    msg.type = 243U;
    msg.utc_year = 40481U;
    msg.utc_month = 61U;
    msg.utc_day = 235U;
    msg.utc_time = 0.1353814420178432;
    msg.lat = 0.09419737160193897;
    msg.lon = 0.30295795072182075;
    msg.height = 0.9920440809725266;
    msg.satellites = 165U;
    msg.cog = 0.12407156496445693;
    msg.sog = 0.9402701398288021;
    msg.hdop = 0.4090202955348132;
    msg.vdop = 0.8724499209107098;
    msg.hacc = 0.09958404949893129;
    msg.vacc = 0.6771854460086225;

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
    msg.setTimeStamp(0.3665925986093119);
    msg.setSource(23669U);
    msg.setSourceEntity(97U);
    msg.setDestination(15387U);
    msg.setDestinationEntity(44U);
    msg.validity = 15485U;
    msg.type = 101U;
    msg.utc_year = 15286U;
    msg.utc_month = 210U;
    msg.utc_day = 200U;
    msg.utc_time = 0.13297026773667942;
    msg.lat = 0.19363407197669935;
    msg.lon = 0.2810730565197096;
    msg.height = 0.2174913762178965;
    msg.satellites = 175U;
    msg.cog = 0.6146042795898455;
    msg.sog = 0.18671149182150115;
    msg.hdop = 0.11906295290389612;
    msg.vdop = 0.4834457301181002;
    msg.hacc = 0.745481563920609;
    msg.vacc = 0.6199998240314063;

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
    msg.setTimeStamp(0.42474343886401555);
    msg.setSource(49852U);
    msg.setSourceEntity(103U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(167U);
    msg.validity = 7451U;
    msg.type = 226U;
    msg.utc_year = 23431U;
    msg.utc_month = 46U;
    msg.utc_day = 222U;
    msg.utc_time = 0.8929498115179554;
    msg.lat = 0.9643497973532346;
    msg.lon = 0.8690664750326288;
    msg.height = 0.5787566540371574;
    msg.satellites = 194U;
    msg.cog = 0.41666656301825156;
    msg.sog = 0.7797264694800496;
    msg.hdop = 0.15288985048610704;
    msg.vdop = 0.728387863625781;
    msg.hacc = 0.6325307307763889;
    msg.vacc = 0.06682620081240354;

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
    msg.setTimeStamp(0.7838410353628297);
    msg.setSource(48976U);
    msg.setSourceEntity(179U);
    msg.setDestination(2171U);
    msg.setDestinationEntity(142U);
    msg.time = 0.8124452635578598;
    msg.phi = 0.40582334599821;
    msg.theta = 0.5394557939990119;
    msg.psi = 0.0592634132197436;
    msg.psi_magnetic = 0.982726208419972;

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
    msg.setTimeStamp(0.8045824867816339);
    msg.setSource(1666U);
    msg.setSourceEntity(30U);
    msg.setDestination(24004U);
    msg.setDestinationEntity(51U);
    msg.time = 0.4630334475557023;
    msg.phi = 0.5109003452113353;
    msg.theta = 0.9381875859788095;
    msg.psi = 0.3597113675096659;
    msg.psi_magnetic = 0.09341286468113341;

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
    msg.setTimeStamp(0.3222586964592056);
    msg.setSource(24415U);
    msg.setSourceEntity(202U);
    msg.setDestination(48567U);
    msg.setDestinationEntity(5U);
    msg.time = 0.7533175389239891;
    msg.phi = 0.27192475727443066;
    msg.theta = 0.3907466600614582;
    msg.psi = 0.2690018220789715;
    msg.psi_magnetic = 0.11183671937301265;

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
    msg.setTimeStamp(0.7271668787163296);
    msg.setSource(53817U);
    msg.setSourceEntity(72U);
    msg.setDestination(3025U);
    msg.setDestinationEntity(162U);
    msg.time = 0.02257125329653642;
    msg.x = 0.2553433650632059;
    msg.y = 0.49275661466874854;
    msg.z = 0.6257915619827719;
    msg.timestep = 0.6632033079261322;

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
    msg.setTimeStamp(0.7207415560122311);
    msg.setSource(43153U);
    msg.setSourceEntity(153U);
    msg.setDestination(14241U);
    msg.setDestinationEntity(1U);
    msg.time = 0.8437440999543976;
    msg.x = 0.43415683196090804;
    msg.y = 0.8568984309012287;
    msg.z = 0.04207050133385726;
    msg.timestep = 0.586633908304689;

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
    msg.setTimeStamp(0.16413926933131961);
    msg.setSource(869U);
    msg.setSourceEntity(241U);
    msg.setDestination(29675U);
    msg.setDestinationEntity(208U);
    msg.time = 0.24048926544999993;
    msg.x = 0.46392452369228954;
    msg.y = 0.10448647389732657;
    msg.z = 0.8852541931894021;
    msg.timestep = 0.41604903456814457;

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
    msg.setTimeStamp(0.6230504654544194);
    msg.setSource(40083U);
    msg.setSourceEntity(71U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(12U);
    msg.time = 0.3716161546070883;
    msg.x = 0.5422146197789213;
    msg.y = 0.8092976497573593;
    msg.z = 0.34495618326892785;

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
    msg.setTimeStamp(0.23673903492549697);
    msg.setSource(53862U);
    msg.setSourceEntity(16U);
    msg.setDestination(7581U);
    msg.setDestinationEntity(25U);
    msg.time = 0.720727337845065;
    msg.x = 0.3285662537916044;
    msg.y = 0.9352948693480242;
    msg.z = 0.44924856887858733;

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
    msg.setTimeStamp(0.5103832666558299);
    msg.setSource(17179U);
    msg.setSourceEntity(177U);
    msg.setDestination(50521U);
    msg.setDestinationEntity(74U);
    msg.time = 0.6422243150491327;
    msg.x = 0.8105920393034673;
    msg.y = 0.935087754256534;
    msg.z = 0.48214501173359237;

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
    msg.setTimeStamp(0.7399504196876987);
    msg.setSource(46623U);
    msg.setSourceEntity(113U);
    msg.setDestination(48769U);
    msg.setDestinationEntity(39U);
    msg.time = 0.4483389481915252;
    msg.x = 0.1920448103835497;
    msg.y = 0.45451835535096485;
    msg.z = 0.9812977685800557;

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
    msg.setTimeStamp(0.08592201580806613);
    msg.setSource(58729U);
    msg.setSourceEntity(230U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(146U);
    msg.time = 0.467941020313824;
    msg.x = 0.07778262038381845;
    msg.y = 0.7823753520685044;
    msg.z = 0.5321635988184747;

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
    msg.setTimeStamp(0.14689505331849617);
    msg.setSource(2682U);
    msg.setSourceEntity(69U);
    msg.setDestination(25789U);
    msg.setDestinationEntity(111U);
    msg.time = 0.14691494325235077;
    msg.x = 0.08440902332561417;
    msg.y = 0.7078082965305561;
    msg.z = 0.38228445505304076;

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
    msg.setTimeStamp(0.08852325771751735);
    msg.setSource(37611U);
    msg.setSourceEntity(250U);
    msg.setDestination(25872U);
    msg.setDestinationEntity(185U);
    msg.time = 0.2192717772643339;
    msg.x = 0.6420692357392216;
    msg.y = 0.6810888577379629;
    msg.z = 0.9118451603947599;

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
    msg.setTimeStamp(0.9432778918500903);
    msg.setSource(65048U);
    msg.setSourceEntity(125U);
    msg.setDestination(20893U);
    msg.setDestinationEntity(166U);
    msg.time = 0.07386393083669784;
    msg.x = 0.47469450152380166;
    msg.y = 0.7254418028451963;
    msg.z = 0.19328010646727767;

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
    msg.setTimeStamp(0.9868656979091727);
    msg.setSource(52382U);
    msg.setSourceEntity(127U);
    msg.setDestination(39926U);
    msg.setDestinationEntity(119U);
    msg.time = 0.32052942923318506;
    msg.x = 0.04580788077664699;
    msg.y = 0.44708971395415364;
    msg.z = 0.49559825228870547;

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
    msg.setTimeStamp(0.2640825823933568);
    msg.setSource(26666U);
    msg.setSourceEntity(88U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(42U);
    msg.validity = 214U;
    msg.x = 0.471357382222207;
    msg.y = 0.3686766297208893;
    msg.z = 0.8748215043475668;

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
    msg.setTimeStamp(0.7798612168194738);
    msg.setSource(30143U);
    msg.setSourceEntity(214U);
    msg.setDestination(28967U);
    msg.setDestinationEntity(152U);
    msg.validity = 183U;
    msg.x = 0.610154856520413;
    msg.y = 0.9922388018925588;
    msg.z = 0.7832519482434461;

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
    msg.setTimeStamp(0.2404388174920694);
    msg.setSource(60269U);
    msg.setSourceEntity(64U);
    msg.setDestination(58142U);
    msg.setDestinationEntity(212U);
    msg.validity = 89U;
    msg.x = 0.0648896853746872;
    msg.y = 0.15808918536792538;
    msg.z = 0.39612463629887107;

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
    msg.setTimeStamp(0.9902093681351956);
    msg.setSource(18543U);
    msg.setSourceEntity(49U);
    msg.setDestination(47376U);
    msg.setDestinationEntity(156U);
    msg.validity = 89U;
    msg.x = 0.6732723530849068;
    msg.y = 0.30129310807151977;
    msg.z = 0.42096955523083146;

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
    msg.setTimeStamp(0.07883405808360888);
    msg.setSource(49018U);
    msg.setSourceEntity(182U);
    msg.setDestination(24275U);
    msg.setDestinationEntity(83U);
    msg.validity = 113U;
    msg.x = 0.5836254373109715;
    msg.y = 0.35970406298725643;
    msg.z = 0.30560530734915103;

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
    msg.setTimeStamp(0.15099653699861615);
    msg.setSource(50810U);
    msg.setSourceEntity(107U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(163U);
    msg.validity = 119U;
    msg.x = 0.9948454290649862;
    msg.y = 0.15310812483484215;
    msg.z = 0.4572823075106218;

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
    msg.setTimeStamp(0.9988051178975916);
    msg.setSource(53782U);
    msg.setSourceEntity(191U);
    msg.setDestination(445U);
    msg.setDestinationEntity(182U);
    msg.time = 0.5563104784844785;
    msg.x = 0.43908814550792874;
    msg.y = 0.24451397118715457;
    msg.z = 0.1521213527520341;

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
    msg.setTimeStamp(0.9235889333490216);
    msg.setSource(41732U);
    msg.setSourceEntity(0U);
    msg.setDestination(55263U);
    msg.setDestinationEntity(91U);
    msg.time = 0.11406125704924153;
    msg.x = 0.02253060037053667;
    msg.y = 0.8490369699697945;
    msg.z = 0.36685102309932516;

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
    msg.setTimeStamp(0.0027563688811342857);
    msg.setSource(61421U);
    msg.setSourceEntity(201U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(231U);
    msg.time = 0.032871063398635214;
    msg.x = 0.9683976313950164;
    msg.y = 0.8069894577313534;
    msg.z = 0.5649559480957996;

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
    msg.setTimeStamp(0.9851597551861865);
    msg.setSource(19276U);
    msg.setSourceEntity(150U);
    msg.setDestination(8390U);
    msg.setDestinationEntity(220U);
    msg.validity = 7U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9791763067665774;
    tmp_msg_0.y = 0.4499086662362263;
    tmp_msg_0.z = 0.735320914381276;
    tmp_msg_0.phi = 0.9130801648503591;
    tmp_msg_0.theta = 0.10775477480421347;
    tmp_msg_0.psi = 0.37043397211220686;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.17518509732489873;

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
    msg.setTimeStamp(0.42478755451595085);
    msg.setSource(60255U);
    msg.setSourceEntity(185U);
    msg.setDestination(52355U);
    msg.setDestinationEntity(224U);
    msg.validity = 170U;
    msg.value = 0.497843285748258;

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
    msg.setTimeStamp(0.09320023535068611);
    msg.setSource(20180U);
    msg.setSourceEntity(39U);
    msg.setDestination(21297U);
    msg.setDestinationEntity(245U);
    msg.validity = 93U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.02572915378732399;
    tmp_msg_0.y = 0.6569858689169014;
    tmp_msg_0.z = 0.24824350882787716;
    tmp_msg_0.phi = 0.9438684751008877;
    tmp_msg_0.theta = 0.639910539389942;
    tmp_msg_0.psi = 0.51147460825299;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.016339721422502063;
    tmp_msg_1.beam_height = 0.6745455577814845;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9439679883492146;

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
    msg.setTimeStamp(0.7495877785186168);
    msg.setSource(22571U);
    msg.setSourceEntity(227U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(2U);
    msg.value = 0.7150835986944162;

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
    msg.setTimeStamp(0.02414959679408135);
    msg.setSource(30282U);
    msg.setSourceEntity(187U);
    msg.setDestination(61760U);
    msg.setDestinationEntity(178U);
    msg.value = 0.3638601482509468;

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
    msg.setTimeStamp(0.8096753953072489);
    msg.setSource(19963U);
    msg.setSourceEntity(184U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(98U);
    msg.value = 0.4576585418191763;

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
    msg.setTimeStamp(0.41533218138267913);
    msg.setSource(27254U);
    msg.setSourceEntity(155U);
    msg.setDestination(28741U);
    msg.setDestinationEntity(113U);
    msg.value = 0.4791689165315469;

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
    msg.setTimeStamp(0.3390898326078554);
    msg.setSource(27037U);
    msg.setSourceEntity(235U);
    msg.setDestination(16117U);
    msg.setDestinationEntity(176U);
    msg.value = 0.04880668061738225;

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
    msg.setTimeStamp(0.4912106701100808);
    msg.setSource(42997U);
    msg.setSourceEntity(46U);
    msg.setDestination(43214U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6998227574828061;

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
    msg.setTimeStamp(0.9837825957138898);
    msg.setSource(10390U);
    msg.setSourceEntity(3U);
    msg.setDestination(61931U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5597341861923736;

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
    msg.setTimeStamp(0.42045608871749596);
    msg.setSource(43073U);
    msg.setSourceEntity(25U);
    msg.setDestination(27835U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6296079709389261;

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
    msg.setTimeStamp(0.05463163720577846);
    msg.setSource(8634U);
    msg.setSourceEntity(220U);
    msg.setDestination(58177U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8219490805343554;

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
    msg.setTimeStamp(0.49869628532660104);
    msg.setSource(7423U);
    msg.setSourceEntity(34U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(62U);
    msg.value = 0.4670990870669207;

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
    msg.setTimeStamp(0.9272913055953866);
    msg.setSource(63146U);
    msg.setSourceEntity(155U);
    msg.setDestination(18157U);
    msg.setDestinationEntity(109U);
    msg.value = 0.5807087223170656;

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
    msg.setTimeStamp(0.32555326514820515);
    msg.setSource(28684U);
    msg.setSourceEntity(179U);
    msg.setDestination(36519U);
    msg.setDestinationEntity(114U);
    msg.value = 0.49935214541760253;

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
    msg.setTimeStamp(0.15302459950830571);
    msg.setSource(60734U);
    msg.setSourceEntity(223U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(17U);
    msg.value = 0.46812783961664517;

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
    msg.setTimeStamp(0.9499329371376236);
    msg.setSource(1982U);
    msg.setSourceEntity(121U);
    msg.setDestination(23138U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8078429611694349;

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
    msg.setTimeStamp(0.9283077640550618);
    msg.setSource(30708U);
    msg.setSourceEntity(25U);
    msg.setDestination(33618U);
    msg.setDestinationEntity(22U);
    msg.value = 0.24014126046574724;

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
    msg.setTimeStamp(0.30956420962471365);
    msg.setSource(57566U);
    msg.setSourceEntity(163U);
    msg.setDestination(13590U);
    msg.setDestinationEntity(159U);
    msg.value = 0.45234826123643457;

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
    msg.setTimeStamp(0.03536991087010222);
    msg.setSource(39155U);
    msg.setSourceEntity(22U);
    msg.setDestination(19401U);
    msg.setDestinationEntity(242U);
    msg.value = 0.3817258410684514;

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
    msg.setTimeStamp(0.5480058281534568);
    msg.setSource(23432U);
    msg.setSourceEntity(17U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5827411219009823;

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
    msg.setTimeStamp(0.7359941622432556);
    msg.setSource(49938U);
    msg.setSourceEntity(181U);
    msg.setDestination(167U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9752210016657026;

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
    msg.setTimeStamp(0.5873400679340384);
    msg.setSource(12257U);
    msg.setSourceEntity(66U);
    msg.setDestination(48110U);
    msg.setDestinationEntity(47U);
    msg.value = 0.9752884788575128;

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
    msg.setTimeStamp(0.4124670964035385);
    msg.setSource(40231U);
    msg.setSourceEntity(21U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(115U);
    msg.value = 0.739480105043174;

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
    msg.setTimeStamp(0.4346010792291355);
    msg.setSource(37275U);
    msg.setSourceEntity(169U);
    msg.setDestination(21799U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5628480369086712;

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
    msg.setTimeStamp(0.622161707941646);
    msg.setSource(2056U);
    msg.setSourceEntity(197U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3209630281318878;

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
    msg.setTimeStamp(0.9086674145687653);
    msg.setSource(25075U);
    msg.setSourceEntity(204U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(13U);
    msg.value = 0.09676652270540576;

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
    msg.setTimeStamp(0.7597023090601258);
    msg.setSource(18834U);
    msg.setSourceEntity(201U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(209U);
    msg.direction = 0.9764007453389498;
    msg.speed = 0.47409025779981195;
    msg.turbulence = 0.21128242237410877;

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
    msg.setTimeStamp(0.93885620203575);
    msg.setSource(35678U);
    msg.setSourceEntity(214U);
    msg.setDestination(27236U);
    msg.setDestinationEntity(230U);
    msg.direction = 0.12235939456705924;
    msg.speed = 0.3559153754154517;
    msg.turbulence = 0.4486496197938441;

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
    msg.setTimeStamp(0.20485172102100957);
    msg.setSource(29574U);
    msg.setSourceEntity(231U);
    msg.setDestination(16260U);
    msg.setDestinationEntity(71U);
    msg.direction = 0.39904931495082463;
    msg.speed = 0.5568891277812679;
    msg.turbulence = 0.7617237088449845;

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
    msg.setTimeStamp(0.17667967416581132);
    msg.setSource(64803U);
    msg.setSourceEntity(22U);
    msg.setDestination(13215U);
    msg.setDestinationEntity(237U);
    msg.value = 0.06240336748223718;

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
    msg.setTimeStamp(0.8004238716221649);
    msg.setSource(13539U);
    msg.setSourceEntity(148U);
    msg.setDestination(37216U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6197448028357979;

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
    msg.setTimeStamp(0.4479957009016591);
    msg.setSource(58782U);
    msg.setSourceEntity(1U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9889329373964825;

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
    msg.setTimeStamp(0.06145715910053795);
    msg.setSource(28245U);
    msg.setSourceEntity(1U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(163U);
    msg.value.assign("IGQZLUNEOYJVXGWOGJQTILWMAJFOSDXRFPOYBSPVCCNSHHSRUTCLNMYLXGHDQXKACSTWJMOKBCDBRATJBAYGGFLWPYJXVFRUOUKWYZNASJRDAKOLXTHFRWEZCAMVVTDRISORAFPPEXPZVDBVBWLYKTYNIWBDLEXQUZDJKRPIDEEXSYFFVSZLYGMPUCNKUDNUEQBUPQGKJOLVMWHAFNJNQUVAMCGQEICTKCHIMHPIBWTIERHZM");

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
    msg.setTimeStamp(0.2051860370525984);
    msg.setSource(41598U);
    msg.setSourceEntity(4U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(73U);
    msg.value.assign("FGRZNPZTJXFDPFHVQDOYUAPGONHBLAQGUNWEISIBTERCTJZATTQOHMCOKDAYZLTPMFVFEILMLYAZJQRBLJKQJAUUCIPVJRYAITLJZYLIFMQHCGSIHKWBUXTGNXDSFCMYUKEWEQBRJDSYXSNVUBICCXQHSLEEYKPOMWSBBFDHGONZEHAHVCNKAUNOWRVDXZEWM");

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
    msg.setTimeStamp(0.07508849585011657);
    msg.setSource(52299U);
    msg.setSourceEntity(194U);
    msg.setDestination(29024U);
    msg.setDestinationEntity(110U);
    msg.value.assign("EWCTYFTOQNHEXKUOERSQJDFPWKGYJW");

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
    msg.setTimeStamp(0.29182805803285494);
    msg.setSource(12561U);
    msg.setSourceEntity(65U);
    msg.setDestination(47436U);
    msg.setDestinationEntity(180U);
    const char tmp_msg_0[] = {-18, -65, -98, -17, 84, 104, -62, -2, 74, -6, -117, -110, -108, 124, -21, -123, 10, -3, -121, -10, -113, 43, 123, -18, 111, 121, -34, 107, 1, 37, -123, 67, 73, -91, -96, -1, 112, 23, 118, -101, 63, -43, 79, -57, 102, 77, -118, 56, -61, -50, 114, -101, 103, 24, 51, -78, -45, 74, -77, -86, -101, 99, 6, -36, 16, 34, 34, -46, -17, -108, -63, -61, -97, 53, 14, -126, 3, 17, -46, -107, 32, 123, -85, 114, -45, -15, -18, -15, -66, 30, 26, 93, 33, 80, 69, -18, 13, 55, -10, 116, -94, 38, -80, -15, 29, 93, -82, 12, 58, -38, -96, -58, 35, 101, 112, -30, 115, 113, 57, 58, 27, -112, -96, 9, 27, 65, -91, -4, 2, -103, -10, 29, -22, 58, -25, 123, 68, 91, 3, -105, -32, 119, 5, -95, 85, -31, 40, -73, -123, -52, -123, 21, -38, -100, -77, 5, 66, 62, 89, -116, 106, 65, 117, 72, 119, -114, 100, -45, -54, 49, 15, -65, 63, -20, -48, 87, -111, 32, 32, 37, 70, -101, 66, 58, -78, 91, 46, -114, -52};
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
    msg.setTimeStamp(0.5872648348595956);
    msg.setSource(23769U);
    msg.setSourceEntity(52U);
    msg.setDestination(35833U);
    msg.setDestinationEntity(97U);
    const char tmp_msg_0[] = {102, -50, -31, 116, 42, -51, -89, -30, 29, 122, 63, -122, -83, -100, 31, 10, -13, -62};
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
    msg.setTimeStamp(0.23024412121499382);
    msg.setSource(40440U);
    msg.setSourceEntity(15U);
    msg.setDestination(63196U);
    msg.setDestinationEntity(96U);
    const char tmp_msg_0[] = {-44, -24, 79, -27, 76, -98, -79, -66, -128, 56, 34, 78, -59, -53, -50, -1, -20, 97, -21, 93, -34, 61, -15, -9, 102, -79, 3, -96, -84, 6, -65, -58, 95, -125, -8, -10, 51, 22, 81, -86, 62, 54, 99, -62, -77, -106, 74, -31, -17, -59, -68, 94, -5, -13, -50, 0, 95, -92, -22, 92, -94, 125, -10, 123, 24, -105, -52, -55, 110, 87, -61, -110, -116, 90, 57, 120, -72, -55, -49, 31, 40, 21, -39, 90, -80, 88, -4, -38, 52, 98, -109, -65, -13, -32, 61, -101, -57, 100, 58, -102, 83, -8, 84, 38, -112, -13, -115, -98, 117, -3, -68, -86, -24, 78, 75, 88, -62, -123, -124, 76, 42, 26, -96, 68, 42, -1, 69, -41, -76, 98, -46, -62, 108, -113, 101, 70, -128, 58, 76, 116, 106, -58, -81, 23, 119, -29, -80, 52, 23, -7, 20, -121, 80, -44, -104, 98, 6, -12, 115, 25, 73, -34, 47, 21, -106, -54, 111, -38, -54, -28, -21, 50, 59, -83, -88, 10, -119, -39, 122, 120, 28, -54, 72, 34, 57, 108, -88, 59, -77, -74, 44, -108, -75, -68, -126, 69, -56, -111, 15, -87, -93, 60, -80, 41, -83, -30, -11, -37, -94, 75, -23, -35, -70, -66, 80, -6, 39, -63, 78, 33, 77, 109, 89};
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
    msg.setTimeStamp(0.5734653320935993);
    msg.setSource(23275U);
    msg.setSourceEntity(203U);
    msg.setDestination(32214U);
    msg.setDestinationEntity(242U);
    msg.type = 59U;
    msg.frequency = 2378828737U;
    msg.min_range = 54269U;
    msg.max_range = 65331U;
    msg.bits_per_point = 57U;
    msg.scale_factor = 0.8750444096966057;
    const char tmp_msg_0[] = {3, -121, -34, -47, 27, 1, -90, 37, 54, 100, -52, 3, 27, 67, 28, 65, -28, -36, -49, -80, -82, 86, -53, 125, -92, 0, 101, -1, 87, 20, -52, 102, 55, -12, 67, 72, 35, 105, -18, -16, 27, -68, 92, -92, -105, -23, -101, -90, -96, -93, -16, -96, 104, -81, 53, 87, -31, -79, 75, 100, 85, -119, -16, -80, 28, 66, -5, -23, -93, 47, 103, 2, 15, -54, 23, 38, 79, -74, -76, 76, -6, 5, -10, -78, 6, -9, -90, 56, -100, -60, 20, -20, 103, -16, -63, 36, 107, 60, 34, -122, -45, 110, -89, -58, -83, 105, -44, -31, 7, -128, 22, 72, 13, 3, 63, -36, -73, 64, 11, -27, -117, 99, -1, -12, 6, -63, 115, -92, -49, -34, 62, 30, 8, -45, 42, 108, -33, -16, 112, 50, 1, -41, 100, -24, 118, -59, 62, 11, -13, -64, 27, 120, -22, 119, 26, 111, 82, -8, 16, 85, 79, -40, 44, 17, 73, -92, -124, -110, 70, -60, 34, -117, -108, 96, 9, 39, 122, -13, 88, 30, 114, -70, 67, 0, 20, -18, 28, 22, 19, 114, 124, 105, -94, -61, -48, -7, -27, -102, 83, -111, 110, -92, 38, 116, -17, -3, -61, -104, 71, -8, 78, 95, 9, 5};
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
    msg.setTimeStamp(0.3818315347590895);
    msg.setSource(32698U);
    msg.setSourceEntity(38U);
    msg.setDestination(36819U);
    msg.setDestinationEntity(23U);
    msg.type = 233U;
    msg.frequency = 2706936102U;
    msg.min_range = 61910U;
    msg.max_range = 20405U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.1303065527816354;
    const char tmp_msg_0[] = {74, 21, -43, -92, 98, -121, 73, -19, 47, 64, 62, 52, 126, 73, -105, 89, -125, -119, 67, -13, -47, -1, -23, 53, -99, 29, 46, 60, 88, 102, 51, 30, 19, 92, -103, -88, -95, 122, -89, -112, 55, 3, 63, 19, -72, -81, 33, -8, -113, -3, 32, 100, -86, 71, 110, 19, -36, -87, 53, -85, 76, 99, -74, 5, 63, 76, -69, 66, -60, 78, 54, -116, 121, -122, -63, 111, -86, 6, 20, -106, -57, -80, 78, 105, -82, -18, 80, -115, -34, 77, -87, -111, -58, 100, -24, 99, 8, 85, -56, 117, 43, 44, 36, -112, 1, 120, -95, -111, 31, -96, -41, 25, 65, 78, 33, 113, -106, -4, 42, 96, 75, -67, 110, -103, 13, 45, -16, 117, -109, -94, 27, 11, 77, -82, -76, 11, -101, 100, 124, 12, -4, -88, 52, 22, -85, 31, -79, -106, 44, -121, -28, 88, 89, 37, -118, 27, 87, 96, 110, -71, -121, 78, 98, -84, 52, 4, -4, -125, -37, 27, 61, -50, -17, -69, 63, 109, -74, -33, 19, -89, 111, 73, -108, 84, 117, 20, -8, 103, -124, 36, 24, -56, -66, 112, -23, -61, 76, -29, 92, 100, 5, -82, 104, 90, 83, -37, -90, -73, -44, -33, -5, -103, 115, 103, 85, 6, -68, 20, -20, -8, -27, 90, 1, 126, -56, -7, -110, 69, -68, -114, 94, 44, -122, -45, -106, 17, 79, 90, -90, 102, 22, 104, 56, 70, -92, 16, -9, 53, 110, -88, 89};
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
    msg.setTimeStamp(0.9483073017308958);
    msg.setSource(56506U);
    msg.setSourceEntity(68U);
    msg.setDestination(10500U);
    msg.setDestinationEntity(231U);
    msg.type = 251U;
    msg.frequency = 3055433030U;
    msg.min_range = 36829U;
    msg.max_range = 8832U;
    msg.bits_per_point = 126U;
    msg.scale_factor = 0.18131114076012722;
    const char tmp_msg_0[] = {-97, 84, 90, -66, 19, -58, -32, -115, 11, 64, 59, -3, 30, -116};
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
    msg.setTimeStamp(0.29260206140177747);
    msg.setSource(19104U);
    msg.setSourceEntity(79U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.6427661996050272);
    msg.setSource(37756U);
    msg.setSourceEntity(169U);
    msg.setDestination(1930U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.5997785190639052);
    msg.setSource(23694U);
    msg.setSourceEntity(130U);
    msg.setDestination(33966U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.07677712192281194);
    msg.setSource(40280U);
    msg.setSourceEntity(51U);
    msg.setDestination(61874U);
    msg.setDestinationEntity(213U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.32070249559480446);
    msg.setSource(26705U);
    msg.setSourceEntity(52U);
    msg.setDestination(17196U);
    msg.setDestinationEntity(252U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.9896121839096778);
    msg.setSource(28820U);
    msg.setSourceEntity(104U);
    msg.setDestination(6510U);
    msg.setDestinationEntity(72U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.7314411283618819);
    msg.setSource(19163U);
    msg.setSourceEntity(123U);
    msg.setDestination(4700U);
    msg.setDestinationEntity(241U);
    msg.value = 0.22594944848399612;
    msg.confidence = 0.697234084279594;
    msg.opmodes.assign("JTSFFZQBZLEKLNWVXVAQOXNAQCQGSTYMGOCSXDMRFTZARHIXDFMLOHSIPGNKGECREKIOTECJFDJJTGWCKKZUQMEPXVFMYPMLPBKPOQWBLIUEGIBHZGAETNUUBL");

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
    msg.setTimeStamp(0.670602715743718);
    msg.setSource(65172U);
    msg.setSourceEntity(180U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(108U);
    msg.value = 0.6288214890231479;
    msg.confidence = 0.8028317078904347;
    msg.opmodes.assign("RMAFLNWHTEPXBTFCUELPFSOWBZUUKBPDIVUADXUYAOQFSFXTSOBZXGMPVGCHLGCHT");

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
    msg.setTimeStamp(0.6438144908246747);
    msg.setSource(51465U);
    msg.setSourceEntity(12U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(174U);
    msg.value = 0.08506245383267741;
    msg.confidence = 0.9887087037713003;
    msg.opmodes.assign("VRGXXJQAZNNIOALWWGNVPLEDTZGEAJOONZHUDWPCAIMBEJFQKLOHGPDWWXTQVSJTYQUYUFNBBZQSYNQUEERSZYSLDVCMGAFCRDUGHWTFKTMDQKDYIPZQAWHKKE");

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
    msg.setTimeStamp(0.7143156293080642);
    msg.setSource(27338U);
    msg.setSourceEntity(182U);
    msg.setDestination(17887U);
    msg.setDestinationEntity(132U);
    msg.itow = 1486656267U;
    msg.lat = 0.3142597993391393;
    msg.lon = 0.6862632055396215;
    msg.height_ell = 0.7186334605744104;
    msg.height_sea = 0.22396234708583718;
    msg.hacc = 0.4259798101670422;
    msg.vacc = 0.8745181280458146;
    msg.vel_n = 0.6074007683437856;
    msg.vel_e = 0.11490456877476818;
    msg.vel_d = 0.6796728499324483;
    msg.speed = 0.7540779427946975;
    msg.gspeed = 0.3319216528315869;
    msg.heading = 0.8741055284234504;
    msg.sacc = 0.20464444276893856;
    msg.cacc = 0.15653396243366702;

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
    msg.setTimeStamp(0.4139918658090992);
    msg.setSource(39966U);
    msg.setSourceEntity(211U);
    msg.setDestination(46139U);
    msg.setDestinationEntity(18U);
    msg.itow = 3210754880U;
    msg.lat = 0.5337175641502638;
    msg.lon = 0.851846630477664;
    msg.height_ell = 0.9073742115646696;
    msg.height_sea = 0.8590465269929564;
    msg.hacc = 0.7661038296272266;
    msg.vacc = 0.7584769253963161;
    msg.vel_n = 0.011308091110068585;
    msg.vel_e = 0.17038835371395233;
    msg.vel_d = 0.8651712767095884;
    msg.speed = 0.9052910106332032;
    msg.gspeed = 0.10452221361582836;
    msg.heading = 0.25240852616191123;
    msg.sacc = 0.2880766112699257;
    msg.cacc = 0.7032909722855194;

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
    msg.setTimeStamp(0.6029653445044818);
    msg.setSource(49605U);
    msg.setSourceEntity(166U);
    msg.setDestination(4109U);
    msg.setDestinationEntity(203U);
    msg.itow = 43907072U;
    msg.lat = 0.3645087956284351;
    msg.lon = 0.35550480792989714;
    msg.height_ell = 0.13565846546291394;
    msg.height_sea = 0.9275367891894021;
    msg.hacc = 0.38526662516178745;
    msg.vacc = 0.17839438874989122;
    msg.vel_n = 0.849789603718877;
    msg.vel_e = 0.4829452945544277;
    msg.vel_d = 0.6291299954149421;
    msg.speed = 0.6723436097778848;
    msg.gspeed = 0.37017828150036325;
    msg.heading = 0.5216138505083936;
    msg.sacc = 0.20470979137267442;
    msg.cacc = 0.9080283992635878;

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
    msg.setTimeStamp(0.4953774194383629);
    msg.setSource(2347U);
    msg.setSourceEntity(100U);
    msg.setDestination(25733U);
    msg.setDestinationEntity(11U);
    msg.id = 233U;
    msg.value = 0.8539581110781066;

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
    msg.setTimeStamp(0.17444594283868176);
    msg.setSource(25646U);
    msg.setSourceEntity(208U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(103U);
    msg.id = 234U;
    msg.value = 0.05036223612170765;

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
    msg.setTimeStamp(0.4295894168961226);
    msg.setSource(7410U);
    msg.setSourceEntity(215U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(231U);
    msg.id = 142U;
    msg.value = 0.6263189145451143;

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
    msg.setTimeStamp(0.15984032205789278);
    msg.setSource(47252U);
    msg.setSourceEntity(106U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(229U);
    msg.x = 0.9959914172178459;
    msg.y = 0.09451360971359202;
    msg.z = 0.41742568317378115;
    msg.phi = 0.6656578904230884;
    msg.theta = 0.504916983708863;
    msg.psi = 0.6269065619537497;

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
    msg.setTimeStamp(0.5029388585556314);
    msg.setSource(53340U);
    msg.setSourceEntity(94U);
    msg.setDestination(37051U);
    msg.setDestinationEntity(237U);
    msg.x = 0.6931895026023537;
    msg.y = 0.050156884236595256;
    msg.z = 0.3314153939654987;
    msg.phi = 0.7330423980068697;
    msg.theta = 0.46604965804432297;
    msg.psi = 0.22863412875568911;

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
    msg.setTimeStamp(0.0363218320420583);
    msg.setSource(9703U);
    msg.setSourceEntity(45U);
    msg.setDestination(47293U);
    msg.setDestinationEntity(83U);
    msg.x = 0.6656166042615895;
    msg.y = 0.7148442769247194;
    msg.z = 0.9024901227669878;
    msg.phi = 0.08797332758628573;
    msg.theta = 0.5978498113400981;
    msg.psi = 0.704474828322504;

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
    msg.setTimeStamp(0.30290881476277287);
    msg.setSource(42001U);
    msg.setSourceEntity(125U);
    msg.setDestination(18937U);
    msg.setDestinationEntity(253U);
    msg.beam_width = 0.12810440188676853;
    msg.beam_height = 0.419525950673587;

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
    msg.setTimeStamp(0.33846203375505945);
    msg.setSource(39100U);
    msg.setSourceEntity(12U);
    msg.setDestination(46478U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.15104940131853783;
    msg.beam_height = 0.3189163900102341;

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
    msg.setTimeStamp(0.2010464777783526);
    msg.setSource(16323U);
    msg.setSourceEntity(12U);
    msg.setDestination(16177U);
    msg.setDestinationEntity(24U);
    msg.beam_width = 0.6741185060654845;
    msg.beam_height = 0.927091272792995;

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
    msg.setTimeStamp(0.1118971630263832);
    msg.setSource(3610U);
    msg.setSourceEntity(69U);
    msg.setDestination(24260U);
    msg.setDestinationEntity(100U);
    msg.sane = 103U;

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
    msg.setTimeStamp(0.11237636765065506);
    msg.setSource(17565U);
    msg.setSourceEntity(44U);
    msg.setDestination(36780U);
    msg.setDestinationEntity(206U);
    msg.sane = 235U;

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
    msg.setTimeStamp(0.027534346130443477);
    msg.setSource(60159U);
    msg.setSourceEntity(182U);
    msg.setDestination(24788U);
    msg.setDestinationEntity(140U);
    msg.sane = 140U;

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
    msg.setTimeStamp(0.3994262779605585);
    msg.setSource(50174U);
    msg.setSourceEntity(61U);
    msg.setDestination(16803U);
    msg.setDestinationEntity(149U);
    msg.value = 0.3703163574198135;

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
    msg.setTimeStamp(0.45271628633014716);
    msg.setSource(54829U);
    msg.setSourceEntity(62U);
    msg.setDestination(64766U);
    msg.setDestinationEntity(143U);
    msg.value = 0.1296552490121805;

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
    msg.setTimeStamp(0.7788162026642321);
    msg.setSource(29382U);
    msg.setSourceEntity(136U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(150U);
    msg.value = 0.7155974873351161;

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
    msg.setTimeStamp(0.6964727177261631);
    msg.setSource(57429U);
    msg.setSourceEntity(229U);
    msg.setDestination(34119U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7054094593727914;

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
    msg.setTimeStamp(0.297226750598924);
    msg.setSource(13005U);
    msg.setSourceEntity(121U);
    msg.setDestination(30581U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6977417739428792;

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
    msg.setTimeStamp(0.03024662204985662);
    msg.setSource(25431U);
    msg.setSourceEntity(165U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(212U);
    msg.value = 0.2862895153506727;

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
    msg.setTimeStamp(0.16991125451322575);
    msg.setSource(38536U);
    msg.setSourceEntity(112U);
    msg.setDestination(24091U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6959279413979228;

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
    msg.setTimeStamp(0.23598763345329876);
    msg.setSource(34131U);
    msg.setSourceEntity(210U);
    msg.setDestination(6994U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7428080741713398;

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
    msg.setTimeStamp(0.602638428617162);
    msg.setSource(40693U);
    msg.setSourceEntity(84U);
    msg.setDestination(54283U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8550691862365013;

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
    msg.setTimeStamp(0.14995993271576702);
    msg.setSource(2545U);
    msg.setSourceEntity(75U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(53U);
    msg.value = 0.3665714528859343;

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
    msg.setTimeStamp(0.47490485684292927);
    msg.setSource(38609U);
    msg.setSourceEntity(246U);
    msg.setDestination(26917U);
    msg.setDestinationEntity(6U);
    msg.value = 0.5998854075743768;

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
    msg.setTimeStamp(0.42793050675506206);
    msg.setSource(16537U);
    msg.setSourceEntity(237U);
    msg.setDestination(44190U);
    msg.setDestinationEntity(110U);
    msg.value = 0.2634246092299274;

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
    msg.setTimeStamp(0.1357680133755954);
    msg.setSource(32450U);
    msg.setSourceEntity(43U);
    msg.setDestination(52772U);
    msg.setDestinationEntity(154U);
    msg.value = 0.5305015928080752;

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
    msg.setTimeStamp(0.7747275498606022);
    msg.setSource(49070U);
    msg.setSourceEntity(61U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(205U);
    msg.value = 0.11041281134375913;

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
    msg.setTimeStamp(0.1631403625187945);
    msg.setSource(62921U);
    msg.setSourceEntity(13U);
    msg.setDestination(45222U);
    msg.setDestinationEntity(104U);
    msg.value = 0.7493978791078593;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.8771950341658921);
    msg.setSource(39330U);
    msg.setSourceEntity(70U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(239U);
    msg.id = 147U;
    msg.zoom = 84U;
    msg.action = 227U;

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
    msg.setTimeStamp(0.5512767817334652);
    msg.setSource(59439U);
    msg.setSourceEntity(38U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(12U);
    msg.id = 104U;
    msg.zoom = 221U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.16345164860497408);
    msg.setSource(24396U);
    msg.setSourceEntity(121U);
    msg.setDestination(63261U);
    msg.setDestinationEntity(223U);
    msg.id = 175U;
    msg.zoom = 35U;
    msg.action = 206U;

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
    msg.setTimeStamp(0.6346109218608554);
    msg.setSource(56236U);
    msg.setSourceEntity(43U);
    msg.setDestination(22129U);
    msg.setDestinationEntity(123U);
    msg.id = 26U;
    msg.value = 0.9068983926122915;

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
    msg.setTimeStamp(0.991294110919343);
    msg.setSource(32483U);
    msg.setSourceEntity(109U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(71U);
    msg.id = 97U;
    msg.value = 0.4716008114713163;

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
    msg.setTimeStamp(0.9998342555663566);
    msg.setSource(28397U);
    msg.setSourceEntity(213U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(190U);
    msg.id = 134U;
    msg.value = 0.26504476479830086;

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
    msg.setTimeStamp(0.18989108861264548);
    msg.setSource(8855U);
    msg.setSourceEntity(168U);
    msg.setDestination(14889U);
    msg.setDestinationEntity(45U);
    msg.id = 38U;
    msg.value = 0.25127927378416803;

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
    msg.setTimeStamp(0.27256126142490766);
    msg.setSource(30618U);
    msg.setSourceEntity(172U);
    msg.setDestination(4430U);
    msg.setDestinationEntity(44U);
    msg.id = 146U;
    msg.value = 0.9471844863628017;

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
    msg.setTimeStamp(0.3841445882294371);
    msg.setSource(27119U);
    msg.setSourceEntity(220U);
    msg.setDestination(4106U);
    msg.setDestinationEntity(121U);
    msg.id = 237U;
    msg.value = 0.5240037709666737;

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
    msg.setTimeStamp(0.9136068571903829);
    msg.setSource(37668U);
    msg.setSourceEntity(33U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(4U);
    msg.id = 161U;
    msg.angle = 0.8712500777788428;

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
    msg.setTimeStamp(0.14028592801445716);
    msg.setSource(13345U);
    msg.setSourceEntity(95U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(35U);
    msg.id = 210U;
    msg.angle = 0.561399808469585;

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
    msg.setTimeStamp(0.7426698311927191);
    msg.setSource(34387U);
    msg.setSourceEntity(6U);
    msg.setDestination(58457U);
    msg.setDestinationEntity(25U);
    msg.id = 47U;
    msg.angle = 0.3717532433150248;

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
    msg.setTimeStamp(0.6374976163966896);
    msg.setSource(6465U);
    msg.setSourceEntity(177U);
    msg.setDestination(40907U);
    msg.setDestinationEntity(41U);
    msg.op = 221U;
    msg.actions.assign("NZDEEWCMIGQHEUSDFZBMFMOBDNYTUFEKZQFWXKDAPEEWBGUAQBJYNCKTPYMNNSFCJCSOCURYZDVLD");

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
    msg.setTimeStamp(0.2652311606585297);
    msg.setSource(9494U);
    msg.setSourceEntity(56U);
    msg.setDestination(30094U);
    msg.setDestinationEntity(202U);
    msg.op = 43U;
    msg.actions.assign("YYOARBEGRAZNVTPNKITWKEGPRRKCSQZSKMBTOINCBYGJTJKBDIQVZAHXTPU");

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
    msg.setTimeStamp(0.8794448401761321);
    msg.setSource(39422U);
    msg.setSourceEntity(175U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(49U);
    msg.op = 87U;
    msg.actions.assign("FAGVPYLCVZETODZNHIENTHHSKBLKIUQKMWYMGDSVVKKMNIHOPRBQPGJMREUCSISCVEFLNNJBTVBUUGMATYHHLBDJTZGXUITOPUAQZWRP");

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
    msg.setTimeStamp(0.5548502682640197);
    msg.setSource(30901U);
    msg.setSourceEntity(148U);
    msg.setDestination(28500U);
    msg.setDestinationEntity(76U);
    msg.actions.assign("SECEJQUPYXUQKJKNZLXMZYGPYHEWFHHRBCJXUJOFNHMSAEMBUAGRFZZQYWMDIFGDMAMGGAHWSOEBDLOTBFPDVXBVZTPQCNKLANFJIRUWXJIXFVIQAVIUQTRGZPHHKIBSXIJKHTDVQKTVTUATERSCJCVWBPCVYFWLTCXPPPGNYGLRQZKUAXLYDRYCTLEFPINIYLOTREMNDS");

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
    msg.setTimeStamp(0.4660063482878152);
    msg.setSource(24537U);
    msg.setSourceEntity(124U);
    msg.setDestination(12028U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("RCDBSTHIOJXYZWCR");

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
    msg.setTimeStamp(0.7860778456741213);
    msg.setSource(23283U);
    msg.setSourceEntity(201U);
    msg.setDestination(16214U);
    msg.setDestinationEntity(155U);
    msg.actions.assign("GIJKJBEPZWKCLRTQFLSSFDCYVUETVJORYXIIHVHADZSEOUBOVBFKXLQGGFYKZJPCSMOHZTDPIXIPUMMMNCHGHJUXZGKJBBMHYGEZSUJCPHALDNDWANVCNKGUAZZNMXWJMLWJUFWXLBWSWPLLKWMYEXQBCOESBAIVOLNHKTUGDYOKRFGFTXSXBUGYAYAHQPXYPEWDROICQNIZSTJQAEYQPIVOFNERRTTZNKQVNPQRLIM");

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
    msg.setTimeStamp(0.9955255495993257);
    msg.setSource(6996U);
    msg.setSourceEntity(97U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(18U);
    msg.button = 86U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.7401519336981794);
    msg.setSource(21355U);
    msg.setSourceEntity(139U);
    msg.setDestination(62656U);
    msg.setDestinationEntity(209U);
    msg.button = 75U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.13820493438265302);
    msg.setSource(11344U);
    msg.setSourceEntity(170U);
    msg.setDestination(44743U);
    msg.setDestinationEntity(173U);
    msg.button = 252U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.12293959511578556);
    msg.setSource(48408U);
    msg.setSourceEntity(48U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(175U);
    msg.op = 100U;
    msg.text.assign("OWLUTQNSMGTZSASWJMAFVWKIPHCMUHHAIRZKXCGKWNDLRJERXCWHXYNYZLEMKAYKPPNDWTKFOJCQYYPNBQKQXUPXEOOYWVIDGZQXGMRTEXXJAFEERGVHSYWBRVUZYEVMJNZAIAPB");

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
    msg.setTimeStamp(0.4264281732581785);
    msg.setSource(11439U);
    msg.setSourceEntity(91U);
    msg.setDestination(54069U);
    msg.setDestinationEntity(45U);
    msg.op = 98U;
    msg.text.assign("IDAIJYYLOGCDWKHQUHNGIDTJSSFJYBWHANYKRSVZVTFWHUTATHUOCZALJPPQXPVOQNWRQKXQUPBGXIJAHUQUXSFEXCMZEKBLDWVNATHSJZZJBGWCDNJNPLZHMOZZLTAWBCQYKEJOIXC");

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
    msg.setTimeStamp(0.2562969446157626);
    msg.setSource(65268U);
    msg.setSourceEntity(25U);
    msg.setDestination(22199U);
    msg.setDestinationEntity(145U);
    msg.op = 193U;
    msg.text.assign("WNHQOYWXNUHINGKRJBUBUWBGPIPTCEMOBMAXGMYRANLCOWMYKZIVZERASCTXNOFDZWHTNBCRGYXLLVHQWGRDCKZTFHLKSEAQZCQXELHODPNZCUDPJOQFKTFJFGIAJFNFWMWERLUCHMRDNKHJIVPRFVILKBJPQQXSVKGVGMYAZOYSNEUTPZPVHWEYVTYEAPUGMDDSTDREKSLUBMYMXDJJSSLIJLGUYOSAKCOXQ");

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
    msg.setTimeStamp(0.16688959265762815);
    msg.setSource(36590U);
    msg.setSourceEntity(128U);
    msg.setDestination(13316U);
    msg.setDestinationEntity(12U);
    msg.op = 92U;
    msg.time_remain = 0.4690234105605864;
    msg.sched_time = 0.30072559575023505;

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
    msg.setTimeStamp(0.4264093689115346);
    msg.setSource(16301U);
    msg.setSourceEntity(6U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(149U);
    msg.op = 126U;
    msg.time_remain = 0.10279649329661034;
    msg.sched_time = 0.39796209825161166;

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
    msg.setTimeStamp(0.8261580672752681);
    msg.setSource(22326U);
    msg.setSourceEntity(91U);
    msg.setDestination(27751U);
    msg.setDestinationEntity(92U);
    msg.op = 92U;
    msg.time_remain = 0.3035523644436221;
    msg.sched_time = 0.4888043231349508;

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
    msg.setTimeStamp(0.2364562648552666);
    msg.setSource(35077U);
    msg.setSourceEntity(117U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(23U);
    msg.name.assign("AMAKTBGVVWCLSDXDMAGXFTWXNYSJZIVMLPDKMSKHOJH");
    msg.op = 27U;
    msg.sched_time = 0.7709155949817422;

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
    msg.setTimeStamp(0.9560619864363681);
    msg.setSource(23517U);
    msg.setSourceEntity(243U);
    msg.setDestination(54183U);
    msg.setDestinationEntity(253U);
    msg.name.assign("EFTNHUKOSTQNQFRXVIOOHKSNJJUBXNOTZCADVHVRAZNXJGSJWDGJBIRZRKVZJQVDL");
    msg.op = 75U;
    msg.sched_time = 0.3376924218016255;

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
    msg.setTimeStamp(0.3944440630349192);
    msg.setSource(35967U);
    msg.setSourceEntity(6U);
    msg.setDestination(59821U);
    msg.setDestinationEntity(101U);
    msg.name.assign("AFWTQPKZMORSPHXAJBMXZGCNTHAISDLCOQLLCABYIUQVCCBLGIWRKZTWKSFHZJTIUPNOXFGMIACKBXANHJGPYARMZDDXZKJQIUGKPCGDYTYOMNKWEMRJXUFISSVRMASSLOGWUKBYJBFLVQSRQZGILWPOHYJEAFVQXYGCFVYBPOTEJWQDTROIHLHHNDUVNPYHMWBSEDWLUHVGFRQUMPLCCTMTFWVZUEVYROTORKZEEJ");
    msg.op = 162U;
    msg.sched_time = 0.6379998651497965;

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
    msg.setTimeStamp(0.9895352892194561);
    msg.setSource(32817U);
    msg.setSourceEntity(143U);
    msg.setDestination(38255U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.5967112796291799);
    msg.setSource(15179U);
    msg.setSourceEntity(13U);
    msg.setDestination(41598U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.4827075958526382);
    msg.setSource(14073U);
    msg.setSourceEntity(229U);
    msg.setDestination(48379U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.41189002250495854);
    msg.setSource(22336U);
    msg.setSourceEntity(77U);
    msg.setDestination(6661U);
    msg.setDestinationEntity(251U);
    msg.name.assign("TZGOOJNZJMZCWTKSHIIMVMRXMNBQLXGVFUBGEBDAKHYUDZHRCKLZBDYQCRXACLRAFHUSMIJSUDYPGWCNV");
    msg.state = 112U;

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
    msg.setTimeStamp(0.332421730071382);
    msg.setSource(53890U);
    msg.setSourceEntity(64U);
    msg.setDestination(10341U);
    msg.setDestinationEntity(80U);
    msg.name.assign("RQABTFKGHTRZJETEEXMOVIACVFSFSRNUH");
    msg.state = 95U;

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
    msg.setTimeStamp(0.41008041811814133);
    msg.setSource(6788U);
    msg.setSourceEntity(96U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(137U);
    msg.name.assign("IWFRIDPNKGJTXLXWSWZMWTDUCEBJTFAYEPAFUGQOMSKUKCGXAQSDGHPOBXYCOWUAPXSTNOEDUYIAMFMYHFFBVBRGKEOLEPPUDKCJBTLNQNHGVZHJEWAKHRFMPUSAMAQLMYUVSZZSAITSVPFNYORYQVKQDCJTWDXNVGWVJVXHITNYZXHZEDGGYSPHBDHGRNMKIMCEZTCBOCBZULSIIRBZLL");
    msg.state = 24U;

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
    msg.setTimeStamp(0.45628620587761204);
    msg.setSource(11879U);
    msg.setSourceEntity(230U);
    msg.setDestination(49205U);
    msg.setDestinationEntity(135U);
    msg.name.assign("BIVOMWVLFXOUCGYTQSQWCGBLTTMELDUCEQBQNABRKXCGGPDFZXPKBZZYFDWTJHSQAVPUDTEZFYFBCRJWLZPBNXCAAOWHJJIXXCXLRCDUPS");
    msg.value = 166U;

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
    msg.setTimeStamp(0.2234874245377816);
    msg.setSource(58255U);
    msg.setSourceEntity(183U);
    msg.setDestination(9795U);
    msg.setDestinationEntity(208U);
    msg.name.assign("LUTZZAWJTWQKQFGCDQYIXLIXVMHWUAWIDBEYGQUPVJORVDNFDVUBYUAEXACGYQCNZVDLVXTRHJUKAEMBFHDMQSISTGFOWNMNSPLEDVYURBPDUSNGRGEXLCOJGXMZCRBAEKSFAQCOJUIFVATKOYWFMBO");
    msg.value = 27U;

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
    msg.setTimeStamp(0.4373834437274775);
    msg.setSource(10430U);
    msg.setSourceEntity(52U);
    msg.setDestination(21410U);
    msg.setDestinationEntity(79U);
    msg.name.assign("TRHKSAYBBKJNTJSCQLEMUBRUXHYWWVOAAF");
    msg.value = 39U;

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
    msg.setTimeStamp(0.811398952497981);
    msg.setSource(22761U);
    msg.setSourceEntity(158U);
    msg.setDestination(45795U);
    msg.setDestinationEntity(124U);
    msg.name.assign("PCXQLAWSVKNWSYQXFMYFVZKZFJCZLSIKRJSHWAMTHNHPGKFPEPDXIJDVOFTRZCTBUGTRVHIUK");

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
    msg.setTimeStamp(0.2237000742810521);
    msg.setSource(4428U);
    msg.setSourceEntity(221U);
    msg.setDestination(27320U);
    msg.setDestinationEntity(243U);
    msg.name.assign("DHXIKYXIHNJMHDBKSPNLDZETCLOXRJUBCHGPGLJQPHRUOGILODSHJAZVQOLAZDMEYOACMQFLEGVXVGUNDEGTYRSSEZMEBHEXRDQZSPVMPGYOYMLRHUVJAYSTUVFZQINQXDNTXFCIKJPWVUSBEHKWHKCVLNOXKGPNCCLXAOWGY");

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
    msg.setTimeStamp(0.23869568242211414);
    msg.setSource(47076U);
    msg.setSourceEntity(86U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(196U);
    msg.name.assign("LIJMZWCZUCKZGBJTNFCNOGAULVQLFTEVFLNQKNYOKBLBPDSTPWFPOZIMDYGRMPIEGBYUAYPLSANUJCCCTSCXNYTHPASDEVHHJKVUMEKFRDOGYHZSPCKBBZLTIYOIBWXBMCAXKEJTNZOJIDNMAKSELULOMPSWWVDBTEGQRJVDWODQDEFQMGEIYLPIZFGXARVXWQIHUTGFWVSVUPATWMARYHRRE");

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
    msg.setTimeStamp(0.44612390072219354);
    msg.setSource(14308U);
    msg.setSourceEntity(184U);
    msg.setDestination(38833U);
    msg.setDestinationEntity(226U);
    msg.name.assign("OEPWEHFVNAWUILTSGKRBCJYJVUUHJLQKGYNGMZRDFDSCTUMFOKNQBBDEJKDQAFZSUEYWPGUQXPCCKGOZDPHJOAMAWSBVBLYIRVLPGHNVEPNRWRIQLUNTQHKWVKWXCWTUIVTJDN");
    msg.value = 223U;

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
    msg.setTimeStamp(0.9550258082208372);
    msg.setSource(6529U);
    msg.setSourceEntity(210U);
    msg.setDestination(8588U);
    msg.setDestinationEntity(226U);
    msg.name.assign("HLYIBTJKNLCSUBJHVHJYQYWXJJTQZFPIYJFOG");
    msg.value = 196U;

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
    msg.setTimeStamp(0.13929491829436347);
    msg.setSource(10836U);
    msg.setSourceEntity(64U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(205U);
    msg.name.assign("SKELCVXUPNRMFKNYUMGAWPYSIAUDCNEGIISLRTZEIOOHOSGHVDUJRVAOJRTPLYFTYRKVTRXHFHBVL");
    msg.value = 169U;

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
    msg.setTimeStamp(0.6327300023447072);
    msg.setSource(48823U);
    msg.setSourceEntity(242U);
    msg.setDestination(41847U);
    msg.setDestinationEntity(3U);
    msg.id = 110U;
    msg.period = 575894138U;
    msg.duty_cycle = 3524589666U;

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
    msg.setTimeStamp(0.6166078346003623);
    msg.setSource(46844U);
    msg.setSourceEntity(49U);
    msg.setDestination(49578U);
    msg.setDestinationEntity(113U);
    msg.id = 51U;
    msg.period = 1476634987U;
    msg.duty_cycle = 3466065572U;

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
    msg.setTimeStamp(0.12201021605825446);
    msg.setSource(18380U);
    msg.setSourceEntity(36U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(43U);
    msg.id = 245U;
    msg.period = 3283634826U;
    msg.duty_cycle = 3777999080U;

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
    msg.setTimeStamp(0.11224178112258143);
    msg.setSource(5723U);
    msg.setSourceEntity(254U);
    msg.setDestination(1042U);
    msg.setDestinationEntity(230U);
    msg.id = 124U;
    msg.period = 3446234082U;
    msg.duty_cycle = 855947518U;

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
    msg.setTimeStamp(0.8816881790812218);
    msg.setSource(18356U);
    msg.setSourceEntity(120U);
    msg.setDestination(15799U);
    msg.setDestinationEntity(125U);
    msg.id = 221U;
    msg.period = 2993172172U;
    msg.duty_cycle = 1776234912U;

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
    msg.setTimeStamp(0.5391095082870832);
    msg.setSource(55451U);
    msg.setSourceEntity(51U);
    msg.setDestination(20658U);
    msg.setDestinationEntity(117U);
    msg.id = 31U;
    msg.period = 1151977511U;
    msg.duty_cycle = 1779431997U;

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
    msg.setTimeStamp(0.5614878305726486);
    msg.setSource(51186U);
    msg.setSourceEntity(225U);
    msg.setDestination(63428U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.16206457634707716;
    msg.lon = 0.6680936420030127;
    msg.height = 0.13664432799198922;
    msg.x = 0.7123636455654747;
    msg.y = 0.41600650830880903;
    msg.z = 0.2936444355029739;
    msg.phi = 0.8348249367246399;
    msg.theta = 0.4675004412108805;
    msg.psi = 0.5934856137549672;
    msg.u = 0.8638796074274738;
    msg.v = 0.12302017773071872;
    msg.w = 0.6357117652960385;
    msg.vx = 0.915569228026209;
    msg.vy = 0.1955120106946453;
    msg.vz = 0.16043379969077276;
    msg.p = 0.9189009871341952;
    msg.q = 0.8962126645826161;
    msg.r = 0.28782336948338827;
    msg.depth = 0.13911466172042308;
    msg.alt = 0.6505997268957727;

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
    msg.setTimeStamp(0.9018236309488741);
    msg.setSource(63334U);
    msg.setSourceEntity(62U);
    msg.setDestination(26651U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6040890010139932;
    msg.lon = 0.06851231468340269;
    msg.height = 0.909526967042152;
    msg.x = 0.43665715758814283;
    msg.y = 0.9073776834077028;
    msg.z = 0.46580426196005276;
    msg.phi = 0.558226333096859;
    msg.theta = 0.5204149999617452;
    msg.psi = 0.7856461627846505;
    msg.u = 0.6172023826182556;
    msg.v = 0.5123170732129517;
    msg.w = 0.6219808799841096;
    msg.vx = 0.28999145351429545;
    msg.vy = 0.6407808452841081;
    msg.vz = 0.10197617281159888;
    msg.p = 0.7030093187269254;
    msg.q = 0.9862661080619592;
    msg.r = 0.2917089063747924;
    msg.depth = 0.5717519196674493;
    msg.alt = 0.4664279209786716;

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
    msg.setTimeStamp(0.33606601732744545);
    msg.setSource(9921U);
    msg.setSourceEntity(69U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.2181055661775433;
    msg.lon = 0.6484632919172816;
    msg.height = 0.9310947150030886;
    msg.x = 0.8961586954735711;
    msg.y = 0.4335904094086711;
    msg.z = 0.3973117267951646;
    msg.phi = 0.321137354332545;
    msg.theta = 0.39344858501189917;
    msg.psi = 0.7013804907826956;
    msg.u = 0.7055896963838475;
    msg.v = 0.5339287602363402;
    msg.w = 0.33622859566803753;
    msg.vx = 0.03757363398547031;
    msg.vy = 0.08863190804241372;
    msg.vz = 0.41475996561090744;
    msg.p = 0.49021527463032255;
    msg.q = 0.9518902363644637;
    msg.r = 0.533948813407523;
    msg.depth = 0.8456064250360898;
    msg.alt = 0.1676887186385907;

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
    msg.setTimeStamp(0.9177128909142682);
    msg.setSource(8735U);
    msg.setSourceEntity(185U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(236U);
    msg.x = 0.9327457481791611;
    msg.y = 0.44548019694760244;
    msg.z = 0.6056681309886517;

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
    msg.setTimeStamp(0.5530770961284063);
    msg.setSource(29608U);
    msg.setSourceEntity(178U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(217U);
    msg.x = 0.960260835586513;
    msg.y = 0.16125001462236532;
    msg.z = 0.9036297120501361;

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
    msg.setTimeStamp(0.1968482277335296);
    msg.setSource(27838U);
    msg.setSourceEntity(133U);
    msg.setDestination(56498U);
    msg.setDestinationEntity(202U);
    msg.x = 0.7607135020245085;
    msg.y = 0.009453185050616764;
    msg.z = 0.9606165394232518;

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
    msg.setTimeStamp(0.6424831573764276);
    msg.setSource(40895U);
    msg.setSourceEntity(56U);
    msg.setDestination(60668U);
    msg.setDestinationEntity(15U);
    msg.value = 0.7546595964232835;

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
    msg.setTimeStamp(0.2859873698290365);
    msg.setSource(34445U);
    msg.setSourceEntity(33U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(163U);
    msg.value = 0.9093428409608757;

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
    msg.setTimeStamp(0.14895382151949066);
    msg.setSource(8852U);
    msg.setSourceEntity(233U);
    msg.setDestination(28199U);
    msg.setDestinationEntity(186U);
    msg.value = 0.22744822205060355;

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
    msg.setTimeStamp(0.4986840667694399);
    msg.setSource(33164U);
    msg.setSourceEntity(71U);
    msg.setDestination(11649U);
    msg.setDestinationEntity(234U);
    msg.value = 0.6059466094785063;

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
    msg.setTimeStamp(0.890778250577724);
    msg.setSource(47947U);
    msg.setSourceEntity(62U);
    msg.setDestination(14488U);
    msg.setDestinationEntity(192U);
    msg.value = 0.896721929714866;

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
    msg.setTimeStamp(0.24890638943173504);
    msg.setSource(4627U);
    msg.setSourceEntity(21U);
    msg.setDestination(25526U);
    msg.setDestinationEntity(156U);
    msg.value = 0.42098736358553024;

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
    msg.setTimeStamp(0.1169758827898063);
    msg.setSource(30477U);
    msg.setSourceEntity(135U);
    msg.setDestination(3240U);
    msg.setDestinationEntity(164U);
    msg.x = 0.6215158416351716;
    msg.y = 0.21085336211886208;
    msg.z = 0.49802808286056177;
    msg.phi = 0.7664119958472955;
    msg.theta = 0.35042693738695163;
    msg.psi = 0.23303296728966383;
    msg.p = 0.639904868128757;
    msg.q = 0.5857830839756976;
    msg.r = 0.08694173850849207;
    msg.u = 0.32841670091827657;
    msg.v = 0.8331326630427507;
    msg.w = 0.10665831771539014;
    msg.bias_psi = 0.5305127736804448;
    msg.bias_r = 0.4848163051699026;

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
    msg.setTimeStamp(0.5360585561366341);
    msg.setSource(54308U);
    msg.setSourceEntity(211U);
    msg.setDestination(24544U);
    msg.setDestinationEntity(10U);
    msg.x = 0.716459295165415;
    msg.y = 0.8000265326016927;
    msg.z = 0.7813511519566883;
    msg.phi = 0.4718754203128642;
    msg.theta = 0.17467458452454554;
    msg.psi = 0.3260153571748682;
    msg.p = 0.05319847832519009;
    msg.q = 0.752143805766157;
    msg.r = 0.3517705351024425;
    msg.u = 0.07000945668869418;
    msg.v = 0.5812544551111977;
    msg.w = 0.2843934811268817;
    msg.bias_psi = 0.6539091721980006;
    msg.bias_r = 0.49182667349600684;

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
    msg.setTimeStamp(0.15118882816797363);
    msg.setSource(20770U);
    msg.setSourceEntity(83U);
    msg.setDestination(23453U);
    msg.setDestinationEntity(111U);
    msg.x = 0.908849372451059;
    msg.y = 0.28743488789553895;
    msg.z = 0.48178341807233827;
    msg.phi = 0.04019346477996777;
    msg.theta = 0.21530316338452526;
    msg.psi = 0.7252268197261936;
    msg.p = 0.026199092482890096;
    msg.q = 0.1322744511159467;
    msg.r = 0.5883585627941225;
    msg.u = 0.20753648929470914;
    msg.v = 0.4059146625664616;
    msg.w = 0.036900843027945385;
    msg.bias_psi = 0.4107775166225419;
    msg.bias_r = 0.14762559189516156;

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
    msg.setTimeStamp(0.8168350671857401);
    msg.setSource(14666U);
    msg.setSourceEntity(230U);
    msg.setDestination(4218U);
    msg.setDestinationEntity(207U);
    msg.bias_psi = 0.2771751373356597;
    msg.bias_r = 0.8715868266160934;
    msg.cog = 0.8040984570467231;
    msg.cyaw = 0.17532863101903717;
    msg.lbl_rej_level = 0.40793413192035965;
    msg.gps_rej_level = 0.037220071295900437;
    msg.custom_x = 0.7394894369427422;
    msg.custom_y = 0.009865199244171952;
    msg.custom_z = 0.9885732081760004;

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
    msg.setTimeStamp(0.15479745892420094);
    msg.setSource(6105U);
    msg.setSourceEntity(150U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(125U);
    msg.bias_psi = 0.1110250127545519;
    msg.bias_r = 0.13612743591279852;
    msg.cog = 0.9037541530727932;
    msg.cyaw = 0.3848599092660918;
    msg.lbl_rej_level = 0.745765761198645;
    msg.gps_rej_level = 0.21115797123276125;
    msg.custom_x = 0.049493168910395235;
    msg.custom_y = 0.18144745083267277;
    msg.custom_z = 0.1494857772300432;

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
    msg.setTimeStamp(0.9017717415896407);
    msg.setSource(22671U);
    msg.setSourceEntity(186U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(195U);
    msg.bias_psi = 0.12691519238215576;
    msg.bias_r = 0.6102859967199639;
    msg.cog = 0.158392490844808;
    msg.cyaw = 0.729510245250734;
    msg.lbl_rej_level = 0.2728751780102544;
    msg.gps_rej_level = 0.00936406429602199;
    msg.custom_x = 0.5404989694657844;
    msg.custom_y = 0.7693384177956878;
    msg.custom_z = 0.26317949931007023;

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
    msg.setTimeStamp(0.029525797263142972);
    msg.setSource(5492U);
    msg.setSourceEntity(82U);
    msg.setDestination(10096U);
    msg.setDestinationEntity(129U);
    msg.utc_time = 0.27977788042917084;
    msg.reason = 88U;

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
    msg.setTimeStamp(0.47439013873146585);
    msg.setSource(47076U);
    msg.setSourceEntity(98U);
    msg.setDestination(64992U);
    msg.setDestinationEntity(224U);
    msg.utc_time = 0.39573182300359167;
    msg.reason = 3U;

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
    msg.setTimeStamp(0.6069471275734808);
    msg.setSource(30006U);
    msg.setSourceEntity(78U);
    msg.setDestination(19948U);
    msg.setDestinationEntity(156U);
    msg.utc_time = 0.3531829936405845;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.25022432400464123);
    msg.setSource(32860U);
    msg.setSourceEntity(125U);
    msg.setDestination(3729U);
    msg.setDestinationEntity(167U);
    msg.id = 222U;
    msg.range = 0.21972419098423268;
    msg.acceptance = 98U;

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
    msg.setTimeStamp(0.01977150701970487);
    msg.setSource(27246U);
    msg.setSourceEntity(118U);
    msg.setDestination(50978U);
    msg.setDestinationEntity(246U);
    msg.id = 63U;
    msg.range = 0.11284877829306805;
    msg.acceptance = 93U;

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
    msg.setTimeStamp(0.6381900949225542);
    msg.setSource(46761U);
    msg.setSourceEntity(45U);
    msg.setDestination(20800U);
    msg.setDestinationEntity(34U);
    msg.id = 36U;
    msg.range = 0.4942424976297848;
    msg.acceptance = 82U;

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
    msg.setTimeStamp(0.3186076927110637);
    msg.setSource(3759U);
    msg.setSourceEntity(189U);
    msg.setDestination(35516U);
    msg.setDestinationEntity(103U);
    msg.type = 158U;
    msg.reason = 166U;
    msg.value = 0.2796482827039374;
    msg.timestep = 0.8819603137059745;

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
    msg.setTimeStamp(0.5326601801070115);
    msg.setSource(51492U);
    msg.setSourceEntity(138U);
    msg.setDestination(37953U);
    msg.setDestinationEntity(204U);
    msg.type = 148U;
    msg.reason = 204U;
    msg.value = 0.5292439632995886;
    msg.timestep = 0.40861272847790286;

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
    msg.setTimeStamp(0.7765003309607958);
    msg.setSource(54420U);
    msg.setSourceEntity(210U);
    msg.setDestination(29443U);
    msg.setDestinationEntity(143U);
    msg.type = 51U;
    msg.reason = 137U;
    msg.value = 0.290754808790637;
    msg.timestep = 0.6998272420682994;

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
    msg.setTimeStamp(0.9818044785571944);
    msg.setSource(44350U);
    msg.setSourceEntity(242U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(171U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FUJCUFGSVEALCVGOFKWNSTIZDOQLUKXILSHZBROPCGTPVWDYYEXNZLPPAWKJCXBKFBKEBIANYGNRQSVECDIOHKYDJSPBSNOCQDFVETWRBZPWJWNXQUGEUAKYMQCITAEVOHUJXJXFEAHCGLSWLQZRWDBNRYHNYZNBPNUIO");
    tmp_msg_0.lat = 0.8123912049239469;
    tmp_msg_0.lon = 0.022276763098630248;
    tmp_msg_0.depth = 0.7280321253965812;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7956588472527503;
    msg.y = 0.6539365584216258;
    msg.var_x = 0.4340795733179832;
    msg.var_y = 0.4960629154783147;
    msg.distance = 0.969495030957391;

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
    msg.setTimeStamp(0.25073775574658685);
    msg.setSource(62064U);
    msg.setSourceEntity(183U);
    msg.setDestination(60058U);
    msg.setDestinationEntity(69U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EIXDMYLXCZZSHEMIALKJJMUCVYXVGWFZRWDFFYVGFUEHWKHMLTBBTEPYPLUFCICHPDSOUQNQPOUPCKBMNNIPHOYTTUBFPDGSCSXRLQJTRHFBRFEKIVJUVNOKTKAIZXLTZTZHIDJDQFEWGCXGXGZAFQCOMMVAUYZCATLBSGOBRVLNNBZJHVEIEWMNJXIKRPJGMTKQJCLV");
    tmp_msg_0.lat = 0.1543048516786123;
    tmp_msg_0.lon = 0.2600907667646445;
    tmp_msg_0.depth = 0.12805723980403338;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4995530492625485;
    msg.y = 0.771175374493927;
    msg.var_x = 0.021666297024130032;
    msg.var_y = 0.07818152626911723;
    msg.distance = 0.7716401629650993;

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
    msg.setTimeStamp(0.18810879061838748);
    msg.setSource(58874U);
    msg.setSourceEntity(99U);
    msg.setDestination(59408U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DVMXVUGJUWYTVBSXSPJIKSMJQQSLBZISNLXRAYOIZP");
    tmp_msg_0.lat = 0.4123435623995677;
    tmp_msg_0.lon = 0.7031690154171623;
    tmp_msg_0.depth = 0.07262536833527433;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.402275033420066;
    msg.y = 0.23665929886447812;
    msg.var_x = 0.3282061306358367;
    msg.var_y = 0.9981510985694798;
    msg.distance = 0.5833867343909176;

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
    msg.setTimeStamp(0.7149725513019052);
    msg.setSource(6361U);
    msg.setSourceEntity(46U);
    msg.setDestination(63731U);
    msg.setDestinationEntity(6U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.9265499894087067);
    msg.setSource(51558U);
    msg.setSourceEntity(112U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(65U);
    msg.state = 159U;

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
    msg.setTimeStamp(0.05994969557311414);
    msg.setSource(23902U);
    msg.setSourceEntity(22U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(50U);
    msg.state = 121U;

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
    msg.setTimeStamp(0.697926968345249);
    msg.setSource(22029U);
    msg.setSourceEntity(73U);
    msg.setDestination(45047U);
    msg.setDestinationEntity(18U);
    msg.x = 0.93641703478953;
    msg.y = 0.9886380365166446;
    msg.z = 0.26076812705161445;

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
    msg.setTimeStamp(0.9973362200895602);
    msg.setSource(58289U);
    msg.setSourceEntity(183U);
    msg.setDestination(8480U);
    msg.setDestinationEntity(151U);
    msg.x = 0.3794410307341528;
    msg.y = 0.7878515627998238;
    msg.z = 0.6817077933147001;

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
    msg.setTimeStamp(0.2058165537692893);
    msg.setSource(7076U);
    msg.setSourceEntity(238U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(76U);
    msg.x = 0.8595037902511553;
    msg.y = 0.18468281202469816;
    msg.z = 0.07161667316917897;

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
    msg.setTimeStamp(0.07136422798045772);
    msg.setSource(18924U);
    msg.setSourceEntity(179U);
    msg.setDestination(3195U);
    msg.setDestinationEntity(175U);
    msg.value = 0.2874626158705095;

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
    msg.setTimeStamp(0.15350687326148416);
    msg.setSource(62545U);
    msg.setSourceEntity(93U);
    msg.setDestination(64645U);
    msg.setDestinationEntity(187U);
    msg.value = 0.4925013588562547;

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
    msg.setTimeStamp(0.39386089936942137);
    msg.setSource(1120U);
    msg.setSourceEntity(200U);
    msg.setDestination(9182U);
    msg.setDestinationEntity(90U);
    msg.value = 0.6375608802535039;

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
    msg.setTimeStamp(0.6668112203855241);
    msg.setSource(37899U);
    msg.setSourceEntity(196U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(226U);
    msg.value = 0.39732476581565956;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.7032427206715113);
    msg.setSource(35369U);
    msg.setSourceEntity(162U);
    msg.setDestination(38605U);
    msg.setDestinationEntity(143U);
    msg.value = 0.48487891783632653;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.3820923266654983);
    msg.setSource(3722U);
    msg.setSourceEntity(77U);
    msg.setDestination(24477U);
    msg.setDestinationEntity(5U);
    msg.value = 0.08601043686589793;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.14632105149061803);
    msg.setSource(9589U);
    msg.setSourceEntity(148U);
    msg.setDestination(48494U);
    msg.setDestinationEntity(161U);
    msg.value = 0.8853789703986862;
    msg.speed_units = 203U;

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
    msg.setTimeStamp(0.764416911755403);
    msg.setSource(35296U);
    msg.setSourceEntity(136U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(245U);
    msg.value = 0.2746679523261806;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.5295884292878935);
    msg.setSource(23486U);
    msg.setSourceEntity(30U);
    msg.setDestination(4716U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9604467617689271;
    msg.speed_units = 197U;

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
    msg.setTimeStamp(0.15511207669837357);
    msg.setSource(4099U);
    msg.setSourceEntity(142U);
    msg.setDestination(51209U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8416720637206515;

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
    msg.setTimeStamp(0.729784074054758);
    msg.setSource(58565U);
    msg.setSourceEntity(80U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(84U);
    msg.value = 0.36923423185617565;

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
    msg.setTimeStamp(0.24657645305611353);
    msg.setSource(47530U);
    msg.setSourceEntity(143U);
    msg.setDestination(35344U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3670040351137166;

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
    msg.setTimeStamp(0.984703543124373);
    msg.setSource(40979U);
    msg.setSourceEntity(69U);
    msg.setDestination(54652U);
    msg.setDestinationEntity(235U);
    msg.value = 0.6329363457755166;

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
    msg.setTimeStamp(0.6577174882186498);
    msg.setSource(55708U);
    msg.setSourceEntity(52U);
    msg.setDestination(1113U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7691168440908083;

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
    msg.setTimeStamp(0.6914665043797993);
    msg.setSource(63253U);
    msg.setSourceEntity(205U);
    msg.setDestination(4322U);
    msg.setDestinationEntity(225U);
    msg.value = 0.5937042790120977;

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
    msg.setTimeStamp(0.30811064566397284);
    msg.setSource(18479U);
    msg.setSourceEntity(168U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(91U);
    msg.value = 0.061410238123073446;

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
    msg.setTimeStamp(0.5138098526146486);
    msg.setSource(27316U);
    msg.setSourceEntity(91U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(57U);
    msg.value = 0.46045369542676773;

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
    msg.setTimeStamp(0.14691561203542447);
    msg.setSource(58515U);
    msg.setSourceEntity(83U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8732413710352678;

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
    msg.setTimeStamp(0.458484647087012);
    msg.setSource(17211U);
    msg.setSourceEntity(53U);
    msg.setDestination(54583U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 238309440U;
    msg.start_lat = 0.4193653928695289;
    msg.start_lon = 0.43496792004700846;
    msg.start_z = 0.033320622796688126;
    msg.start_z_units = 191U;
    msg.end_lat = 0.8962520850223739;
    msg.end_lon = 0.0680940791073289;
    msg.end_z = 0.025972842361637105;
    msg.end_z_units = 251U;
    msg.speed = 0.5696141721069022;
    msg.speed_units = 68U;
    msg.lradius = 0.01997244004994303;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.8898788158102419);
    msg.setSource(63466U);
    msg.setSourceEntity(136U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 3999001448U;
    msg.start_lat = 0.028502277506809226;
    msg.start_lon = 0.5285366921529876;
    msg.start_z = 0.17350657553514925;
    msg.start_z_units = 137U;
    msg.end_lat = 0.6863560798084403;
    msg.end_lon = 0.6899728927212222;
    msg.end_z = 0.2291711184961488;
    msg.end_z_units = 44U;
    msg.speed = 0.9267809873994527;
    msg.speed_units = 168U;
    msg.lradius = 0.5840622772609398;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.08747876504256913);
    msg.setSource(47264U);
    msg.setSourceEntity(20U);
    msg.setDestination(46745U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 3345949384U;
    msg.start_lat = 0.20608925627228936;
    msg.start_lon = 0.6769807552915674;
    msg.start_z = 0.23973580043319098;
    msg.start_z_units = 218U;
    msg.end_lat = 0.8753157973898429;
    msg.end_lon = 0.9309464237436007;
    msg.end_z = 0.15719762184688324;
    msg.end_z_units = 202U;
    msg.speed = 0.6602116634974274;
    msg.speed_units = 177U;
    msg.lradius = 0.8537004857638233;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.71472630886366);
    msg.setSource(43330U);
    msg.setSourceEntity(61U);
    msg.setDestination(50979U);
    msg.setDestinationEntity(114U);
    msg.x = 0.6946858817358583;
    msg.y = 0.21913236868528796;
    msg.z = 0.2617526955502253;
    msg.k = 0.5851224366005734;
    msg.m = 0.962081615355595;
    msg.n = 0.6878249873824783;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.3473365469969468);
    msg.setSource(57339U);
    msg.setSourceEntity(152U);
    msg.setDestination(16486U);
    msg.setDestinationEntity(209U);
    msg.x = 0.0453487727001447;
    msg.y = 0.7155469018123343;
    msg.z = 0.44521283968931136;
    msg.k = 0.62075809812267;
    msg.m = 0.6398717346579295;
    msg.n = 0.36800898744605726;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.13489121793311898);
    msg.setSource(53861U);
    msg.setSourceEntity(63U);
    msg.setDestination(39005U);
    msg.setDestinationEntity(191U);
    msg.x = 0.24420401917876777;
    msg.y = 0.9351624649973088;
    msg.z = 0.6216362040748499;
    msg.k = 0.021305797500819956;
    msg.m = 0.026568613844101252;
    msg.n = 0.5025170062177412;
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
    msg.setTimeStamp(0.9084746079147205);
    msg.setSource(14662U);
    msg.setSourceEntity(117U);
    msg.setDestination(61655U);
    msg.setDestinationEntity(66U);
    msg.value = 0.022088293473083276;

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
    msg.setTimeStamp(0.5282128152478356);
    msg.setSource(2577U);
    msg.setSourceEntity(51U);
    msg.setDestination(24500U);
    msg.setDestinationEntity(168U);
    msg.value = 0.19410398103131754;

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
    msg.setTimeStamp(0.5074230223341073);
    msg.setSource(12426U);
    msg.setSourceEntity(26U);
    msg.setDestination(27845U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0345012544080352;

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
    msg.setTimeStamp(0.30315954872884066);
    msg.setSource(37934U);
    msg.setSourceEntity(219U);
    msg.setDestination(2689U);
    msg.setDestinationEntity(76U);
    msg.u = 0.4374472517412865;
    msg.v = 0.48340558663666733;
    msg.w = 0.9252938688243796;
    msg.p = 0.6890566500332738;
    msg.q = 0.6597344666860645;
    msg.r = 0.7635082175270319;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.25742175526222066);
    msg.setSource(48816U);
    msg.setSourceEntity(50U);
    msg.setDestination(58635U);
    msg.setDestinationEntity(129U);
    msg.u = 0.7931952366340091;
    msg.v = 0.1690673454887902;
    msg.w = 0.37063263388556456;
    msg.p = 0.852354293854225;
    msg.q = 0.10635066414639383;
    msg.r = 0.6215900815781431;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.5991894887514829);
    msg.setSource(17323U);
    msg.setSourceEntity(122U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(149U);
    msg.u = 0.04312208537578843;
    msg.v = 0.4504993699531995;
    msg.w = 0.664813969506563;
    msg.p = 0.2808875296599802;
    msg.q = 0.08590686423203497;
    msg.r = 0.08544717230876542;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.18684231536225693);
    msg.setSource(64601U);
    msg.setSourceEntity(41U);
    msg.setDestination(2235U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 2848810491U;
    msg.start_lat = 0.012685610909016543;
    msg.start_lon = 0.10644006265199835;
    msg.start_z = 0.9434458365153876;
    msg.start_z_units = 7U;
    msg.end_lat = 0.6671232227199025;
    msg.end_lon = 0.38481888275394605;
    msg.end_z = 0.17006923784406003;
    msg.end_z_units = 6U;
    msg.lradius = 0.13382213482468264;
    msg.flags = 76U;
    msg.x = 0.8022672244437778;
    msg.y = 0.4811661280305316;
    msg.z = 0.24408142414353418;
    msg.vx = 0.5072419571399711;
    msg.vy = 0.11868017118683538;
    msg.vz = 0.4314919028923331;
    msg.course_error = 0.8892207124779012;
    msg.eta = 35558U;

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
    msg.setTimeStamp(0.6258802131738512);
    msg.setSource(58229U);
    msg.setSourceEntity(218U);
    msg.setDestination(37641U);
    msg.setDestinationEntity(41U);
    msg.path_ref = 3833560130U;
    msg.start_lat = 0.32033202678268413;
    msg.start_lon = 0.5614139823385664;
    msg.start_z = 0.4213581724542036;
    msg.start_z_units = 145U;
    msg.end_lat = 0.6576780980877651;
    msg.end_lon = 0.9527864329119954;
    msg.end_z = 0.1600992208110812;
    msg.end_z_units = 42U;
    msg.lradius = 0.7201359017702792;
    msg.flags = 20U;
    msg.x = 0.3547250762137325;
    msg.y = 0.7153235801552021;
    msg.z = 0.7002724311681183;
    msg.vx = 0.15262073303763646;
    msg.vy = 0.7985500644863976;
    msg.vz = 0.26247163467542833;
    msg.course_error = 0.2608966779488264;
    msg.eta = 62746U;

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
    msg.setTimeStamp(0.22816380200860265);
    msg.setSource(14242U);
    msg.setSourceEntity(254U);
    msg.setDestination(11412U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 4099431904U;
    msg.start_lat = 0.8642602458523879;
    msg.start_lon = 0.6140390474522831;
    msg.start_z = 0.9855523011466548;
    msg.start_z_units = 120U;
    msg.end_lat = 0.08526052508840076;
    msg.end_lon = 0.08203784074459664;
    msg.end_z = 0.44398509583341716;
    msg.end_z_units = 222U;
    msg.lradius = 0.7383361413872621;
    msg.flags = 132U;
    msg.x = 0.6099815983744189;
    msg.y = 0.048134368448532805;
    msg.z = 0.6212567142900284;
    msg.vx = 0.08775588594550787;
    msg.vy = 0.045015753345447496;
    msg.vz = 0.5312670233689667;
    msg.course_error = 0.5205495174617426;
    msg.eta = 37556U;

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
    msg.setTimeStamp(0.8875129520817636);
    msg.setSource(61854U);
    msg.setSourceEntity(0U);
    msg.setDestination(36424U);
    msg.setDestinationEntity(59U);
    msg.k = 0.9158820455307808;
    msg.m = 0.24483337238877234;
    msg.n = 0.950524413278581;

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
    msg.setTimeStamp(0.11894428228365195);
    msg.setSource(18452U);
    msg.setSourceEntity(20U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(78U);
    msg.k = 0.48135888195406695;
    msg.m = 0.2893489017607862;
    msg.n = 0.32944457116283765;

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
    msg.setTimeStamp(0.817215621403238);
    msg.setSource(18038U);
    msg.setSourceEntity(131U);
    msg.setDestination(59286U);
    msg.setDestinationEntity(126U);
    msg.k = 0.33397267169064404;
    msg.m = 0.663651422549015;
    msg.n = 0.37470440876664657;

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
    msg.setTimeStamp(0.5200677281579204);
    msg.setSource(57935U);
    msg.setSourceEntity(243U);
    msg.setDestination(30369U);
    msg.setDestinationEntity(174U);
    msg.p = 0.3411414402143189;
    msg.i = 0.7453605268476385;
    msg.d = 0.3106736711418423;
    msg.a = 0.5254633633867545;

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
    msg.setTimeStamp(0.4371224231067753);
    msg.setSource(4290U);
    msg.setSourceEntity(92U);
    msg.setDestination(6492U);
    msg.setDestinationEntity(158U);
    msg.p = 0.7736431109210626;
    msg.i = 0.6607858390334608;
    msg.d = 0.3331778033578131;
    msg.a = 0.615176006197822;

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
    msg.setTimeStamp(0.2550377069507571);
    msg.setSource(9264U);
    msg.setSourceEntity(64U);
    msg.setDestination(15275U);
    msg.setDestinationEntity(124U);
    msg.p = 0.06392723528648558;
    msg.i = 0.7025738156523327;
    msg.d = 0.7233461806089978;
    msg.a = 0.33858249564314846;

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
    msg.setTimeStamp(0.30376718909055966);
    msg.setSource(32267U);
    msg.setSourceEntity(226U);
    msg.setDestination(39590U);
    msg.setDestinationEntity(188U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.03629750185695535);
    msg.setSource(23936U);
    msg.setSourceEntity(182U);
    msg.setDestination(35593U);
    msg.setDestinationEntity(14U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.398913108974585);
    msg.setSource(22575U);
    msg.setSourceEntity(102U);
    msg.setDestination(56009U);
    msg.setDestinationEntity(1U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.39793382471340255);
    msg.setSource(19171U);
    msg.setSourceEntity(115U);
    msg.setDestination(23655U);
    msg.setDestinationEntity(95U);
    msg.timeout = 26469U;
    msg.lat = 0.5341835100072305;
    msg.lon = 0.12347002301296062;
    msg.z = 0.4634848681768464;
    msg.z_units = 154U;
    msg.speed = 0.44558690534311063;
    msg.speed_units = 178U;
    msg.roll = 0.2849203678180702;
    msg.pitch = 0.1354259114353048;
    msg.yaw = 0.3323411578995329;
    msg.custom.assign("NSCFFYXZGX");

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
    msg.setTimeStamp(0.5771123915805595);
    msg.setSource(25968U);
    msg.setSourceEntity(219U);
    msg.setDestination(18637U);
    msg.setDestinationEntity(125U);
    msg.timeout = 26318U;
    msg.lat = 0.9226850643223962;
    msg.lon = 0.3805376265049236;
    msg.z = 0.947695006611686;
    msg.z_units = 172U;
    msg.speed = 0.2832806508276713;
    msg.speed_units = 209U;
    msg.roll = 0.46007470911310255;
    msg.pitch = 0.06738615984735075;
    msg.yaw = 0.6703082631922896;
    msg.custom.assign("BJCJGOUJIZAOFMLBISYYKDMUSUAFJLAULPPPADNLYNNEAQMCAQKRXEZMGRIECBOVFFZCHCKDACHFVGONYVREMYWOSYFLQBDQRDRSGJYXTXPAOIXDTIUQCTHVHIEGYRKFJQSCETYJBQPVTWXPVDWENXTSTWGUABDPWECSQZKSMJBNKXBIGVLBWOGJZZOMDWHJKBRUUPEWLOGQHIHWLSIOTLVDFTURFNVPLZKHQSKRPXVTMIM");

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
    msg.setTimeStamp(0.3813302911070321);
    msg.setSource(15400U);
    msg.setSourceEntity(130U);
    msg.setDestination(14742U);
    msg.setDestinationEntity(194U);
    msg.timeout = 50311U;
    msg.lat = 0.3633206946216898;
    msg.lon = 0.010719289179435099;
    msg.z = 0.7853844594673929;
    msg.z_units = 108U;
    msg.speed = 0.2579175344265707;
    msg.speed_units = 236U;
    msg.roll = 0.1031884605069241;
    msg.pitch = 0.5803949870358248;
    msg.yaw = 0.6668383415631439;
    msg.custom.assign("TVEKBPLEBRFMCNYJYNOZBLUYLWSHCQWDNDCRDGSNHBVQGZAHRHLUGFQUZZHKXTVMQIXLFYAVBDVZFJLXNFTKKWWQPTMBSCUCEZJWMIGIGKEIEURPMDPASZLYSXQMJOQGVUFZXMUJZKREDLBWYPAYPNXHEWOKDOYNTMUJP");

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
    msg.setTimeStamp(0.6918122284678438);
    msg.setSource(29441U);
    msg.setSourceEntity(16U);
    msg.setDestination(48659U);
    msg.setDestinationEntity(49U);
    msg.timeout = 14523U;
    msg.lat = 0.35134037035228916;
    msg.lon = 0.3577727035172322;
    msg.z = 0.3010117311531382;
    msg.z_units = 147U;
    msg.speed = 0.8162167720850712;
    msg.speed_units = 12U;
    msg.duration = 1463U;
    msg.radius = 0.21795833080399885;
    msg.flags = 240U;
    msg.custom.assign("LSMICNDOBQDUODHHLLUJFKAZSKIJVHILXWHZJGPAGQQEFABXFSSJSBIMYUKPBJHGHOXVVDPVJCKAVIYERCUMQUMDNNADXMICIQPNKCAEKJQVDTTTFHQQSULUEYTCSJXDIRQWCWBOXNZLEARRLUXWUMLXFBTDJYBWYGVKKHPCPXVOOTFEEEYOUOOTZRGPSHRYRNICWA");

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
    msg.setTimeStamp(0.10342630553026866);
    msg.setSource(16935U);
    msg.setSourceEntity(6U);
    msg.setDestination(13273U);
    msg.setDestinationEntity(86U);
    msg.timeout = 62483U;
    msg.lat = 0.9988676261322472;
    msg.lon = 0.3225002197622562;
    msg.z = 0.42413652186643347;
    msg.z_units = 104U;
    msg.speed = 0.8904090561830387;
    msg.speed_units = 237U;
    msg.duration = 9380U;
    msg.radius = 0.8742908663721517;
    msg.flags = 207U;
    msg.custom.assign("XKAYMUEZTZIUCKREOWLRDSRBGXKUPVEOSVWJAZQGDMZRGHYJMAAQBCIBNIDTNWPTYOEMLGHNAIPYJASIEHCHTGYYWWNWLQKRFFOKPWXIQTQMYNJFQUJSOEDPFHXNEHNLPVLKFDYSTZYDXDTKFLSEQOKKBCZP");

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
    msg.setTimeStamp(0.14124937360875867);
    msg.setSource(45347U);
    msg.setSourceEntity(121U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(253U);
    msg.timeout = 18093U;
    msg.lat = 0.318448120155746;
    msg.lon = 0.13610484817992385;
    msg.z = 0.19646931680071855;
    msg.z_units = 240U;
    msg.speed = 0.516434201851167;
    msg.speed_units = 147U;
    msg.duration = 13846U;
    msg.radius = 0.7307389619832929;
    msg.flags = 79U;
    msg.custom.assign("XPTQNQMOBASXBSSTDOHRCWMFZCFFNAQDZDDIWYJGWBEPGHZMAKHRWTRUDTPNPLK");

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
    msg.setTimeStamp(0.32724468959833164);
    msg.setSource(63636U);
    msg.setSourceEntity(83U);
    msg.setDestination(61814U);
    msg.setDestinationEntity(206U);
    msg.custom.assign("QLXGKNKWMPUHYSJLDEQNCSGYSVVKHEEFCAFHUTATJDFTRLBAQIDAXLYYYZWXVNDDNGCCCKJCPKPQGSWMAIJNOPDI");

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
    msg.setTimeStamp(0.3217493235201082);
    msg.setSource(57435U);
    msg.setSourceEntity(214U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(228U);
    msg.custom.assign("ZPMIYOLLQDJJ");

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
    msg.setTimeStamp(0.8519685940741332);
    msg.setSource(52988U);
    msg.setSourceEntity(205U);
    msg.setDestination(15041U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("JGRMZLODFLNAWTDCKNDBZIXUJUNQIRHTRO");

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
    msg.setTimeStamp(0.1024939037599294);
    msg.setSource(53429U);
    msg.setSourceEntity(40U);
    msg.setDestination(60233U);
    msg.setDestinationEntity(145U);
    msg.timeout = 41542U;
    msg.lat = 0.4487998885517206;
    msg.lon = 0.1056602399627482;
    msg.z = 0.07650049535587711;
    msg.z_units = 116U;
    msg.duration = 53101U;
    msg.speed = 0.005597389391629792;
    msg.speed_units = 85U;
    msg.type = 71U;
    msg.radius = 0.8363136755809546;
    msg.length = 0.16182782186709077;
    msg.bearing = 0.5710253791465228;
    msg.direction = 165U;
    msg.custom.assign("XHUOAZVWGLXAENKERSKGYWJRBGOOTFYVCLRSXRUPLNSE");

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
    msg.setTimeStamp(0.4871924474565519);
    msg.setSource(50821U);
    msg.setSourceEntity(52U);
    msg.setDestination(13281U);
    msg.setDestinationEntity(160U);
    msg.timeout = 8031U;
    msg.lat = 0.5643758218446462;
    msg.lon = 0.5098522413927834;
    msg.z = 0.926930369260299;
    msg.z_units = 54U;
    msg.duration = 38719U;
    msg.speed = 0.06686988758177004;
    msg.speed_units = 151U;
    msg.type = 185U;
    msg.radius = 0.44354734742300095;
    msg.length = 0.5528721104320251;
    msg.bearing = 0.732464029498818;
    msg.direction = 248U;
    msg.custom.assign("PZJNSHVWMGUVEVTWDWGTZCZWENMLTQYQWKYRJGVSEFAKXTTBUABCBZYFUCNQUOLDBRMJXLMCKOOBJGOGVEXWEPRTFMJINVWTSAGJURZPPECYNHSSXUNIGHCEUPDKHYAHRLOVYWDLCRALIFHQUQHMKNBEVBSISZTAIOGSOKNDDQCQYSIZFJIXFMMIWXDDKUZSQJNRIPTZVZLHPDQO");

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
    msg.setTimeStamp(0.5251605943232008);
    msg.setSource(60677U);
    msg.setSourceEntity(147U);
    msg.setDestination(24476U);
    msg.setDestinationEntity(100U);
    msg.timeout = 33983U;
    msg.lat = 0.800913419646286;
    msg.lon = 0.10417845218394961;
    msg.z = 0.9057123177247449;
    msg.z_units = 251U;
    msg.duration = 52688U;
    msg.speed = 0.5165149859803639;
    msg.speed_units = 46U;
    msg.type = 103U;
    msg.radius = 0.5668122852502405;
    msg.length = 0.27306033452607403;
    msg.bearing = 0.06387407317115423;
    msg.direction = 10U;
    msg.custom.assign("NASXWOOWNCPNJYLXEMVBOSBDQMHFQBSTJVOWAYEKUFHEPMRG");

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
    msg.setTimeStamp(0.903149560981654);
    msg.setSource(58737U);
    msg.setSourceEntity(121U);
    msg.setDestination(20993U);
    msg.setDestinationEntity(148U);
    msg.duration = 6221U;
    msg.custom.assign("ORUGXUBBAEKYWQLOVMRYDYLOENPOPDYOHNELRKZSAAQIRFDVEJCUIMGHAJQVFUHWETIYJNDVPZZDXOAJCDLZIYXCLUXSFHMOUYCGIJPAEIQNKRETZDNLRABFGXIKFKSWAKOJQNIWBUUBZOPMVTWFRRBBXMFWVKDGMTQWSUSHQNZYTXLVKJCOF");

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
    msg.setTimeStamp(0.3892555123549267);
    msg.setSource(14317U);
    msg.setSourceEntity(66U);
    msg.setDestination(29219U);
    msg.setDestinationEntity(140U);
    msg.duration = 36631U;
    msg.custom.assign("YPCBNQOGFDZKKURRTMCVUTQVJYQQYSVGRXJUCRDBEQMLJTRDGGLVUPOLNKEBZYBCDJLDIBWEKGNTNFTFILJWXOZMXSUPUMWWKXSAYWOTIMIXNQNKFPQUXDTQOCS");

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
    msg.setTimeStamp(0.42776663769118695);
    msg.setSource(62801U);
    msg.setSourceEntity(222U);
    msg.setDestination(3415U);
    msg.setDestinationEntity(230U);
    msg.duration = 59777U;
    msg.custom.assign("VKPCBFLTFIZZUDFRKRYMCGMDWILXZEJTQCKSXJMAAMQAOIOXKJOUGITYKOCBQENQWHMFMHHCKJSHNCWUNJPSOFPBKSEFZXPYHMEWHQXLOUVTYCFPWSQQOBXIYDBCEYBSPXPPKZAZNMFLLUMVMBGKRHAGELOASTKTTODRJWULNUBWXAQXDQLDIHZVZVCURPDQZPBYCLSRIRTGLSGAAJVHEUYUFDZRNGEJNVVIJBJFI");

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
    msg.setTimeStamp(0.02172379184064599);
    msg.setSource(31330U);
    msg.setSourceEntity(53U);
    msg.setDestination(13811U);
    msg.setDestinationEntity(151U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.27928064680029985;
    msg.control.set(tmp_msg_0);
    msg.duration = 35406U;
    msg.custom.assign("UZHZCFACRJCRZDOQTYSDWOFIQJKYGGSMJAHYBIUMPSPKTZIDCULWZTIEYOEOWGGRLMRBTMVJNHJOSEXQLIWWUKAOORVXQOFQGCDKMZTFRBGUGBLLNZLVRVWHCJHPTJECSDSBNDYDQLHXEAKHEKVFYTVJJSUDJPNPUWEKPPGIBBAVNTMOYFCVLWZVFWYMUKQHAXKLZEBTBGROGANYSIFNHMCRDVFEPKFXXMNUIXXQUAPRSWDPTMLQEAZNXAH");

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
    msg.setTimeStamp(0.9615999390441013);
    msg.setSource(2102U);
    msg.setSourceEntity(58U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(249U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8255024708795414;
    tmp_msg_0.speed_units = 211U;
    msg.control.set(tmp_msg_0);
    msg.duration = 65068U;
    msg.custom.assign("TZVKNXKSJWPTBRNXNKSJGBCFIHGNCPDACZDPLSBCWLHMOJLTWUXQYCYWMPAVBJBRSUESWQNYXJGEUIDOVYZGZMNOOKFGDOAIVFNICTPCMDXSIYEWFMMGAIBWYTQPUHUFKLEEOZKFTABQHBKSZIRBMTNKEQCSXHARUXYWRCHIHVOXEDQVUHOTOYASTFLUVGQUWKISWXPRJLQDZKMTFLRRRMLBEFUOYGAPGZJQIDLVHYVHVM");

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
    msg.setTimeStamp(0.27755985497421176);
    msg.setSource(55613U);
    msg.setSourceEntity(74U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(211U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3995712199U;
    tmp_msg_0.start_lat = 0.6440608906342031;
    tmp_msg_0.start_lon = 0.6292375568571671;
    tmp_msg_0.start_z = 0.6588010746108219;
    tmp_msg_0.start_z_units = 156U;
    tmp_msg_0.end_lat = 0.2824708473734546;
    tmp_msg_0.end_lon = 0.7188126300534774;
    tmp_msg_0.end_z = 0.8096736973425088;
    tmp_msg_0.end_z_units = 125U;
    tmp_msg_0.speed = 0.451500685327222;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.lradius = 0.4314106102858897;
    tmp_msg_0.flags = 7U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25109U;
    msg.custom.assign("YIFHBKXETRRDW");

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
    msg.setTimeStamp(0.9851522848237654);
    msg.setSource(15020U);
    msg.setSourceEntity(238U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(138U);
    msg.timeout = 9084U;
    msg.lat = 0.7146028318571697;
    msg.lon = 0.30348274983262247;
    msg.z = 0.34261551110867405;
    msg.z_units = 173U;
    msg.speed = 0.42307673981386806;
    msg.speed_units = 143U;
    msg.bearing = 0.349142162919272;
    msg.cross_angle = 0.33124540522573176;
    msg.width = 0.5269196632223123;
    msg.length = 0.5498605338147077;
    msg.hstep = 0.004007574258472646;
    msg.coff = 166U;
    msg.alternation = 99U;
    msg.flags = 178U;
    msg.custom.assign("CJHUMBCVAVZNHGPNVSDWKEGQDWWEZYTEUZFI");

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
    msg.setTimeStamp(0.16444504372276425);
    msg.setSource(19619U);
    msg.setSourceEntity(132U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(109U);
    msg.timeout = 39600U;
    msg.lat = 0.39245964322303417;
    msg.lon = 0.7784304646411021;
    msg.z = 0.4266005950890519;
    msg.z_units = 107U;
    msg.speed = 0.8527515780579709;
    msg.speed_units = 31U;
    msg.bearing = 0.008282234094020846;
    msg.cross_angle = 0.84488280702521;
    msg.width = 0.3585999286591547;
    msg.length = 0.7429573725876414;
    msg.hstep = 0.7065388181685004;
    msg.coff = 189U;
    msg.alternation = 114U;
    msg.flags = 132U;
    msg.custom.assign("PDCFOSAZIQNTVVIYSLCSBUAXXRXVCRTZAMHKVDYMVGWCQUJGYQCMWEHREMSHGHLXEQMXYDHPFTUFCSNAYWURQW");

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
    msg.setTimeStamp(0.16582133331943028);
    msg.setSource(21136U);
    msg.setSourceEntity(213U);
    msg.setDestination(61532U);
    msg.setDestinationEntity(237U);
    msg.timeout = 3615U;
    msg.lat = 0.10570464835734805;
    msg.lon = 0.47477188639450385;
    msg.z = 0.7858125033077896;
    msg.z_units = 185U;
    msg.speed = 0.22811876983578416;
    msg.speed_units = 140U;
    msg.bearing = 0.5178592778861053;
    msg.cross_angle = 0.7466596216675975;
    msg.width = 0.4546192194113159;
    msg.length = 0.7619161345407854;
    msg.hstep = 0.12407236893956419;
    msg.coff = 75U;
    msg.alternation = 118U;
    msg.flags = 199U;
    msg.custom.assign("UDSZLHJAPMYAPJZUKIRRUQPUQLTFYQAQIKEMEMH");

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
    msg.setTimeStamp(0.7221437347118692);
    msg.setSource(1227U);
    msg.setSourceEntity(92U);
    msg.setDestination(17977U);
    msg.setDestinationEntity(194U);
    msg.timeout = 8069U;
    msg.lat = 0.48036157173271177;
    msg.lon = 0.6496575258199734;
    msg.z = 0.030070396313167214;
    msg.z_units = 94U;
    msg.speed = 0.028663981640290714;
    msg.speed_units = 1U;
    msg.custom.assign("UXTPLIEKPEIBOJYVDKWDFLKFDUNSBPJFMPMFTVXBAHQXOCGGGSQWHNNTBM");

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
    msg.setTimeStamp(0.7522189591796797);
    msg.setSource(61587U);
    msg.setSourceEntity(2U);
    msg.setDestination(18238U);
    msg.setDestinationEntity(250U);
    msg.timeout = 11014U;
    msg.lat = 0.2702262758528774;
    msg.lon = 0.753513792258538;
    msg.z = 0.4749474137763007;
    msg.z_units = 247U;
    msg.speed = 0.4558714689177584;
    msg.speed_units = 236U;
    msg.custom.assign("PWQXFVUYLOMDYMSCMUYQZTYXPFEPARLZHAQJFJIOYGWCKYVPNMKVSXWLPAMDKTSFVINEWQWGEIWKUSKEJUZJFRRNKVFWSSUHBBVNDCAABOPDENGGBU");

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
    msg.setTimeStamp(0.7588138437388585);
    msg.setSource(31935U);
    msg.setSourceEntity(160U);
    msg.setDestination(13253U);
    msg.setDestinationEntity(87U);
    msg.timeout = 27583U;
    msg.lat = 0.23131651640474105;
    msg.lon = 0.8812905882606669;
    msg.z = 0.10098905619089549;
    msg.z_units = 193U;
    msg.speed = 0.6235587436423344;
    msg.speed_units = 55U;
    msg.custom.assign("VAZNTEAZHTRAJAXFUBBJLOOJNXXMUERZNPKUIDBNOKYHLANUHJQPZYQEBJZMHDOMIUYRFGJLYQHDMZWLWQNDDCQPHVGEWYKEVSGZTFCFVSWSQQQNIYFU");

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
    msg.setTimeStamp(0.5555344446856938);
    msg.setSource(17376U);
    msg.setSourceEntity(236U);
    msg.setDestination(55522U);
    msg.setDestinationEntity(175U);
    msg.x = 0.5447798897441258;
    msg.y = 0.09397954448204238;
    msg.z = 0.5270284374298289;

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
    msg.setTimeStamp(0.0434574249928249);
    msg.setSource(53036U);
    msg.setSourceEntity(226U);
    msg.setDestination(36784U);
    msg.setDestinationEntity(226U);
    msg.x = 0.47257785079825354;
    msg.y = 0.724122011359491;
    msg.z = 0.43508252482065446;

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
    msg.setTimeStamp(0.0313640818455001);
    msg.setSource(90U);
    msg.setSourceEntity(117U);
    msg.setDestination(40030U);
    msg.setDestinationEntity(238U);
    msg.x = 0.4718778363697238;
    msg.y = 0.9052145362532158;
    msg.z = 0.6632889267763362;

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
    msg.setTimeStamp(0.9849258990683346);
    msg.setSource(1759U);
    msg.setSourceEntity(219U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(9U);
    msg.timeout = 39120U;
    msg.lat = 0.49174180109638166;
    msg.lon = 0.13225250388622312;
    msg.z = 0.8085185356619499;
    msg.z_units = 130U;
    msg.amplitude = 0.8645699591462189;
    msg.pitch = 0.61075011513556;
    msg.speed = 0.008403325563304809;
    msg.speed_units = 36U;
    msg.custom.assign("LXMRHHAXOUXFLMVICTCOVKVYFQQCXPMEKJEERVUCIMCFDVESVDOHLSBYPWTOSNFJGVDGLWTTYASNBQVCUNWYQDNEVGZXZUJKIZBCYPYIIMHGGJAUOYUNHSAXGMLORLBDQJNPPBTEIGSIWNXIKWQBJOAJANDTFKETDZRKREZDZXHBQATJSASCD");

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
    msg.setTimeStamp(0.7528808739023151);
    msg.setSource(57722U);
    msg.setSourceEntity(160U);
    msg.setDestination(24443U);
    msg.setDestinationEntity(141U);
    msg.timeout = 59296U;
    msg.lat = 0.02597405812317255;
    msg.lon = 0.7353905438171894;
    msg.z = 0.1580253767993004;
    msg.z_units = 23U;
    msg.amplitude = 0.842196746417678;
    msg.pitch = 0.09234302055884314;
    msg.speed = 0.2996074820190403;
    msg.speed_units = 148U;
    msg.custom.assign("SYIXRWNVBUFNHRRWLJGEYTBMCQCJUZDQDWBRIPNMLPYZOKPUFLQZNUKBXVQRKWEWAZIPGUTEYIGRDOVYZFJOBFSGCBYMMAOZFMPCKWEJKQCOLFELQCZYJLTWIKEUTHMTEGHSCTICYLQPJSQXAUXNNGDKAZHHFHUMXSWQTZTNDEVZDASVNGVOJDDVIPPIXLHNSTMDARXBMVXSUSENBTKAOBFAGCQPGWKSRMIJOPFIJHVUEDARWKGBFYRCOH");

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
    msg.setTimeStamp(0.9290003398359467);
    msg.setSource(50070U);
    msg.setSourceEntity(161U);
    msg.setDestination(47840U);
    msg.setDestinationEntity(10U);
    msg.timeout = 7250U;
    msg.lat = 0.8889628556243676;
    msg.lon = 0.7632933579842212;
    msg.z = 0.5141736474933222;
    msg.z_units = 56U;
    msg.amplitude = 0.4355321976325831;
    msg.pitch = 0.7648176218828271;
    msg.speed = 0.8515750167542079;
    msg.speed_units = 213U;
    msg.custom.assign("RXXKMFCLWJOTFPAQIYOLOZSQNMYUSGIVAQQIOLVVGMYRKUXRBNFQHGJKHMZXCIVSRFBXSAWDWPDDPYKNEEMUFEWGZCLYLHORUYDUSZLQBJSPTHFNATMBQKLFCJEOTREUHZP");

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
    msg.setTimeStamp(0.46333248916397973);
    msg.setSource(20669U);
    msg.setSourceEntity(222U);
    msg.setDestination(43267U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.1979669031733483);
    msg.setSource(9200U);
    msg.setSourceEntity(188U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.599917900962623);
    msg.setSource(5447U);
    msg.setSourceEntity(136U);
    msg.setDestination(7433U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.7052423642672763);
    msg.setSource(4432U);
    msg.setSourceEntity(69U);
    msg.setDestination(21940U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.2839914508792575;
    msg.lon = 0.09619628533160285;
    msg.z = 0.14535271538804273;
    msg.z_units = 14U;
    msg.radius = 0.2857223089188534;
    msg.duration = 4984U;
    msg.speed = 0.10435333318680229;
    msg.speed_units = 20U;
    msg.custom.assign("GGNDEWLYZBLXYHIOOHTHTDIRGSBFTKDZVQYENDVBZGOSXZFVDQAJOCLKRDCRIUKADTPUXYVBPRBDPMIWJWLSAEMWSZQFUQGNOTMBWXTXUVEOUNHQEHRPDCZYJEFSTKCOLOWUCZPWVAJGQDMJAOCTMITPKPUENPFSREMHLYKGAMAKNKINJRLFCRFGF");

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
    msg.setTimeStamp(0.44208704758381345);
    msg.setSource(57530U);
    msg.setSourceEntity(9U);
    msg.setDestination(39580U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.885354296901857;
    msg.lon = 0.704330817607838;
    msg.z = 0.4321193756631613;
    msg.z_units = 146U;
    msg.radius = 0.42928492316994493;
    msg.duration = 30267U;
    msg.speed = 0.19141530441817267;
    msg.speed_units = 253U;
    msg.custom.assign("KLTGGIRPDSGIMUYZRENSLOBQEUHQGZJOVFNNUBELZLKPBWQPSFBKFFHIHWBPTCJMMSDWGDNTMOCDOUNGPIYADVIFPLCSONWAQRSUZWUIRCEYAXTLHBDXANDRXROWZAGBMYJIYKAACPXBZGTVAPOHAUWQHEXDBLTYBLCJJQOHTSSCMFWJMXQAXERQZYTJPV");

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
    msg.setTimeStamp(0.2217161540519751);
    msg.setSource(60988U);
    msg.setSourceEntity(23U);
    msg.setDestination(35054U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.31633594795878406;
    msg.lon = 0.4507467275866567;
    msg.z = 0.2605530001866123;
    msg.z_units = 206U;
    msg.radius = 0.08779047495802028;
    msg.duration = 45029U;
    msg.speed = 0.277960816779537;
    msg.speed_units = 222U;
    msg.custom.assign("QRGHPYXEAQEDTMHLVELJUZUFXGFEWWZSBWYYVESTAQTZORHNHHDJTSIUJLEQUIWRPXTMCRDKKSLGOUFOBMYKKLNJNJOWQLCMBDPNPXHVEACXAIMZTJLMKRZQGGLSFZMFVEHYTEKZMRIVNVVWBANIOJRROWMDVTSCSRDZPTURJKP");

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
    msg.setTimeStamp(0.8325546374842026);
    msg.setSource(10093U);
    msg.setSourceEntity(178U);
    msg.setDestination(19249U);
    msg.setDestinationEntity(229U);
    msg.timeout = 59039U;
    msg.flags = 226U;
    msg.lat = 0.8772006724830644;
    msg.lon = 0.14060981690160135;
    msg.start_z = 0.0854797279435584;
    msg.start_z_units = 143U;
    msg.end_z = 0.7943142521086931;
    msg.end_z_units = 91U;
    msg.radius = 0.27498987120677487;
    msg.speed = 0.5587610950634055;
    msg.speed_units = 241U;
    msg.custom.assign("WWIUNGKZLPPSQMUSHZMJXTTTGGPWODYVLWGLLAEVHXCNKLIBUAOINXXLEOBWDXAWOFNYBYEEZGBHMELNJSJCNJPFCKRAWBFQNSRDXMVSHMOKQDEEGIORZCVQFMGFZPLJYHIOMKEUSTCDSEIHWBJRDOBYU");

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
    msg.setTimeStamp(0.02612322319527105);
    msg.setSource(2427U);
    msg.setSourceEntity(204U);
    msg.setDestination(27922U);
    msg.setDestinationEntity(150U);
    msg.timeout = 64707U;
    msg.flags = 99U;
    msg.lat = 0.11838528143492766;
    msg.lon = 0.6325886128686663;
    msg.start_z = 0.45942674257534954;
    msg.start_z_units = 50U;
    msg.end_z = 0.8452762581598602;
    msg.end_z_units = 78U;
    msg.radius = 0.09931218962564514;
    msg.speed = 0.32105774742727344;
    msg.speed_units = 119U;
    msg.custom.assign("IVJWIVLZTCKTRBPICWCHFNRTRAMSQGEXJBMENFSJNZXACDNASWYQFXGUPUFLNCERCEJGZTMOUGJNJPDWQYTHFOIBUHIEVBLEMMKTSXPVNQKSWUHWBOOWUAXZQOUKRLXNAGBWRSHGTMYIKKDAGBQPCXYRKWIYLZQPCTLUCSBLDHDOQVVKFGZSXOLVDQLFJJOTEPKJAZHSUCOQYDZOXZJIKRBHTIPLRGFYEVEWYNVYAMBENAFUDHMAPGIF");

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
    msg.setTimeStamp(0.2933384833486141);
    msg.setSource(6403U);
    msg.setSourceEntity(179U);
    msg.setDestination(35367U);
    msg.setDestinationEntity(156U);
    msg.timeout = 62534U;
    msg.flags = 190U;
    msg.lat = 0.12165317725549007;
    msg.lon = 0.4424386189114755;
    msg.start_z = 0.05084453075545048;
    msg.start_z_units = 9U;
    msg.end_z = 0.47336425799174553;
    msg.end_z_units = 54U;
    msg.radius = 0.11427084385747832;
    msg.speed = 0.20719907095161938;
    msg.speed_units = 115U;
    msg.custom.assign("AMCBMOMHJULORSKXNCZFLFWAPLYWPYFIROVSKJ");

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
    msg.setTimeStamp(0.8814911671186151);
    msg.setSource(17389U);
    msg.setSourceEntity(87U);
    msg.setDestination(8464U);
    msg.setDestinationEntity(121U);
    msg.timeout = 53507U;
    msg.lat = 0.09303857138662908;
    msg.lon = 0.9337175546401482;
    msg.z = 0.45977993030724007;
    msg.z_units = 235U;
    msg.speed = 0.9309401407762333;
    msg.speed_units = 173U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6930803352888291;
    tmp_msg_0.y = 0.7376479207296863;
    tmp_msg_0.z = 0.38819356355877677;
    tmp_msg_0.t = 0.7635793605755997;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ODASBYCVTJFMELMOQUHYIEGIILAWCLTMPOFEKBABRBYYCRTDAXMEHPENERN");

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
    msg.setTimeStamp(0.8985713386355728);
    msg.setSource(17897U);
    msg.setSourceEntity(185U);
    msg.setDestination(13322U);
    msg.setDestinationEntity(165U);
    msg.timeout = 60550U;
    msg.lat = 0.7631131284235467;
    msg.lon = 0.9715449873703235;
    msg.z = 0.2331353826444863;
    msg.z_units = 52U;
    msg.speed = 0.8548038702482971;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.04474464465422645;
    tmp_msg_0.y = 0.04078780873178578;
    tmp_msg_0.z = 0.6589893251149996;
    tmp_msg_0.t = 0.22540756633519554;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EDMAXNHVVXHNXYDSZVKDSJXNEXEWRCOQUTOWSHAJINRWFWWOKZIUFEAJAGSFSHOBVVQSYQCNNPKQJVKFULDIZLQIGUXHBJUMWUTGNLXRBPYYDBKFSAKGFQXMPNBOVTGAUDZVCYMCGVJVHESFLMPIHRW");

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
    msg.setTimeStamp(0.904711442872342);
    msg.setSource(54661U);
    msg.setSourceEntity(214U);
    msg.setDestination(43532U);
    msg.setDestinationEntity(176U);
    msg.timeout = 26338U;
    msg.lat = 0.12426367355910217;
    msg.lon = 0.57295935914945;
    msg.z = 0.3466681203855825;
    msg.z_units = 185U;
    msg.speed = 0.012320761143734815;
    msg.speed_units = 108U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.39030339329972175;
    tmp_msg_0.y = 0.12397869469412592;
    tmp_msg_0.z = 0.4903365461763498;
    tmp_msg_0.t = 0.34698507044031646;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HUTMELOBLXMCCTQULXSV");

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
    msg.setTimeStamp(0.5135828639987917);
    msg.setSource(4026U);
    msg.setSourceEntity(111U);
    msg.setDestination(19014U);
    msg.setDestinationEntity(149U);
    msg.x = 0.2475480556070645;
    msg.y = 0.8805457502271336;
    msg.z = 0.09846792721083963;
    msg.t = 0.3554374003609827;

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
    msg.setTimeStamp(0.9637748781234057);
    msg.setSource(51148U);
    msg.setSourceEntity(99U);
    msg.setDestination(35844U);
    msg.setDestinationEntity(169U);
    msg.x = 0.683337606891867;
    msg.y = 0.49428195215910853;
    msg.z = 0.5870796501383848;
    msg.t = 0.822481629554283;

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
    msg.setTimeStamp(0.6865003328296793);
    msg.setSource(41894U);
    msg.setSourceEntity(195U);
    msg.setDestination(50879U);
    msg.setDestinationEntity(119U);
    msg.x = 0.5072442822126826;
    msg.y = 0.9868512960706062;
    msg.z = 0.05143980282757621;
    msg.t = 0.06987684104732927;

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
    msg.setTimeStamp(0.20751768790362313);
    msg.setSource(15979U);
    msg.setSourceEntity(25U);
    msg.setDestination(32917U);
    msg.setDestinationEntity(66U);
    msg.timeout = 15621U;
    msg.name.assign("WZPOLSFBJHTAHEKCXAZIDKMAGBHOYKXRPQGGWQDCIGUOXLXMJCMHEJYIVZKSXNMJSEUHDFTNRPNQHOAVGCZGOWLHETVIMK");
    msg.custom.assign("UKMEYDXTKFPZ");

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
    msg.setTimeStamp(0.08884039022380441);
    msg.setSource(36412U);
    msg.setSourceEntity(126U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(63U);
    msg.timeout = 33219U;
    msg.name.assign("MGSYZGFBCCUFSTLLMVHLKHDYIVJXAAGIJNDAYPBBDDHXEAFCDSBZKRYVPVWZRKODYFKELLBEUPSCBEVMIBUMQFIXSQPZRDHLUWRMUDCSNGVTVVTLHDAXKGXLJKIFTAJMUNTQHUNJYVFIACTRSDTMNRWVMXZAZZO");
    msg.custom.assign("AVJIHNBXBEZFZFALKFLTDYVCAFSDZEJCJOJEDSCROHUUUMKUSPDGIQFWEHJKDFHABYDGHKNXVMMJESBWJDGIGRIOLGLCWVXMJARUSQTIWSTKVLIZNDMAJHHMZUHYXBBFPNOQWYGTY");

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
    msg.setTimeStamp(0.5413861405479627);
    msg.setSource(22273U);
    msg.setSourceEntity(31U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(161U);
    msg.timeout = 10980U;
    msg.name.assign("FXLQVMTVJNJQCPRZPAQFMLQEEVJJCMRZWSPLUHKTBDWHEBGKPGEIJIMLZKXFVCVWTDFWFIWRJGTIRBZULSBSONQBRICRODOQGIKMYQALXGODVOCJVGNFUIFYWMHTUHLYPTREAS");
    msg.custom.assign("ZXXPHQYTPQURWMWWSDBYLDRXJIQYOLNWUFLBBNLPXVRYEXICWAORGPVDFLZIJZLUKAUFAUWCEHBYFODFMSKCYEIHCHPCNGMGEQHTSDGVLJAJFKRMIZEJGSBGAPQXQIFXNKNWVSOCPAOJCHXMSSUBKMTYJZRETDNZQUXUQRLGTMWDSJVTCUKAIXEVASHYAKVNTDEOJNZUYPTDVIMOZNOPOGLINRSVCOKBIGKCDLQKEVFQAM");

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
    msg.setTimeStamp(0.8347220846349671);
    msg.setSource(61349U);
    msg.setSourceEntity(233U);
    msg.setDestination(10498U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.4158910821392118;
    msg.lon = 0.39200160914850946;
    msg.z = 0.7473961615968034;
    msg.z_units = 140U;
    msg.speed = 0.641195426671831;
    msg.speed_units = 221U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43369U;
    tmp_msg_0.off_x = 0.8764183608227538;
    tmp_msg_0.off_y = 0.847296361830758;
    tmp_msg_0.off_z = 0.5885796191049255;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5785137593970752;
    msg.custom.assign("QQQZIYPXNIXKIMDZUNXAYAJVCPIVXVZVJMIJSLAHGVELLSGETWPKVGTMNFJZUHDWIIOEYZNDRSKHUSUJ");

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
    msg.setTimeStamp(0.9574461655495489);
    msg.setSource(10663U);
    msg.setSourceEntity(222U);
    msg.setDestination(20139U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.5420387754400772;
    msg.lon = 0.4965593514967207;
    msg.z = 0.986611327925672;
    msg.z_units = 245U;
    msg.speed = 0.593070895308095;
    msg.speed_units = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61169U;
    tmp_msg_0.off_x = 0.02398273571024956;
    tmp_msg_0.off_y = 0.8244901124412964;
    tmp_msg_0.off_z = 0.8239654694301004;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6302210024328128;
    msg.custom.assign("YYJVQNGXZMJRAFPGSKTZZFUILSUEDVHHSWBYFDHOKJKQUYOUBUQGDWMQSLCKTWPJNBCMIGCVWLUDSBNISWGNXEHICNBROVWCJTYFZMQBROFGJRNCAXTHQQLPPDEPDBRQQTVFCVLRGTK");

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
    msg.setTimeStamp(0.5923002213315682);
    msg.setSource(20485U);
    msg.setSourceEntity(72U);
    msg.setDestination(63357U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.9749574914444031;
    msg.lon = 0.0812495103777574;
    msg.z = 0.8033236369603131;
    msg.z_units = 225U;
    msg.speed = 0.9661700327249545;
    msg.speed_units = 217U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7030458296127542;
    tmp_msg_0.y = 0.17713310747302302;
    tmp_msg_0.z = 0.6728874946935566;
    tmp_msg_0.t = 0.10879143706364935;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 52074U;
    tmp_msg_1.off_x = 0.6619941385896522;
    tmp_msg_1.off_y = 0.5491399765706124;
    tmp_msg_1.off_z = 0.10445089551742426;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2253706105549289;
    msg.custom.assign("AXQGXPQYFTCUNKVRYSHRHGICGWCSXORKUZYJNNUYCTCBCOPIVPILNLCFGRPNBIILBWZDBZRWXSQZRVLCSAJXRLSIJYOFDUZEAWKIOFHHZZIAFWWUPUSFWKTLFKJQNMOBXKWDEERMYCRDIK");

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
    msg.setTimeStamp(0.5122151673796496);
    msg.setSource(61013U);
    msg.setSourceEntity(178U);
    msg.setDestination(38258U);
    msg.setDestinationEntity(27U);
    msg.vid = 5317U;
    msg.off_x = 0.3476397943207161;
    msg.off_y = 0.8711028178885398;
    msg.off_z = 0.74043288548707;

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
    msg.setTimeStamp(0.18551621877537527);
    msg.setSource(9308U);
    msg.setSourceEntity(92U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(194U);
    msg.vid = 41724U;
    msg.off_x = 0.029394303462487392;
    msg.off_y = 0.1134009993808055;
    msg.off_z = 0.5642086846156689;

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
    msg.setTimeStamp(0.1621434441434827);
    msg.setSource(61190U);
    msg.setSourceEntity(206U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(239U);
    msg.vid = 13464U;
    msg.off_x = 0.49391079122395654;
    msg.off_y = 0.8421889098677087;
    msg.off_z = 0.16272945758465696;

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
    msg.setTimeStamp(0.8684915625427317);
    msg.setSource(37881U);
    msg.setSourceEntity(19U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.37225049490834683);
    msg.setSource(63343U);
    msg.setSourceEntity(46U);
    msg.setDestination(31871U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.08238044963026903);
    msg.setSource(1477U);
    msg.setSourceEntity(148U);
    msg.setDestination(57376U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.5789577218112203);
    msg.setSource(19797U);
    msg.setSourceEntity(60U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(173U);
    msg.mid = 1730U;

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
    msg.setTimeStamp(0.5771971262776697);
    msg.setSource(56546U);
    msg.setSourceEntity(235U);
    msg.setDestination(26549U);
    msg.setDestinationEntity(213U);
    msg.mid = 57549U;

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
    msg.setTimeStamp(0.7147389266701534);
    msg.setSource(22313U);
    msg.setSourceEntity(98U);
    msg.setDestination(55583U);
    msg.setDestinationEntity(40U);
    msg.mid = 43641U;

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
    msg.setTimeStamp(0.1664336845510196);
    msg.setSource(58466U);
    msg.setSourceEntity(108U);
    msg.setDestination(2205U);
    msg.setDestinationEntity(252U);
    msg.state = 69U;
    msg.eta = 32013U;
    msg.info.assign("KGLOKPQNCVAKLXNXGJUXGYJXIFPMMYYPRCMCKRYNTLVEVRZOVERQBUKCOFRYGGXFPFBIOSNOZHZHYQVDZAJGRHEPRZKTJRXBLHIZABHDIRKEILMDSXDTHBOGVMUSLDCPOWIUWFDVKHYQJUABTZEDWFEHZNAUAGNGGL");

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
    msg.setTimeStamp(0.23180286455767418);
    msg.setSource(38877U);
    msg.setSourceEntity(160U);
    msg.setDestination(37956U);
    msg.setDestinationEntity(225U);
    msg.state = 26U;
    msg.eta = 47590U;
    msg.info.assign("RMOYOWQMRFHSFFHEXRPMCFIVTUPZHCWBGEEKKMGCRNBTOVZHITMHPEADVLGUBXYDWKXVPDBVBMMUJPSZLSRQUNDOZOTHWNINJMZIUXUYJLKXGAXHBPUONRQBYLQPGLKWYAKAGDUJIUINALEWVY");

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
    msg.setTimeStamp(0.08870232237339626);
    msg.setSource(13049U);
    msg.setSourceEntity(231U);
    msg.setDestination(43540U);
    msg.setDestinationEntity(73U);
    msg.state = 125U;
    msg.eta = 59855U;
    msg.info.assign("KFNUCIXZONLWDTBGYAKGXNBZSYKSZPRQCVFGVZMCWOEERLPDVLVXBBPMJHLFTZDKAAHTGUBLCDWNQNDQBFECSTYFMJYZLNOQIE");

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
    msg.setTimeStamp(0.07195014127802934);
    msg.setSource(59088U);
    msg.setSourceEntity(169U);
    msg.setDestination(57101U);
    msg.setDestinationEntity(254U);
    msg.system = 61555U;
    msg.duration = 63108U;
    msg.speed = 0.6865147648234545;
    msg.speed_units = 254U;
    msg.x = 0.2134843449452546;
    msg.y = 0.7795997196242014;
    msg.z = 0.2211355327720167;
    msg.z_units = 49U;

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
    msg.setTimeStamp(0.7095277372969889);
    msg.setSource(50782U);
    msg.setSourceEntity(18U);
    msg.setDestination(65157U);
    msg.setDestinationEntity(122U);
    msg.system = 53244U;
    msg.duration = 227U;
    msg.speed = 0.4275099645778936;
    msg.speed_units = 173U;
    msg.x = 0.044639129491435336;
    msg.y = 0.1618273531695168;
    msg.z = 0.6941318924634312;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.2882900677777336);
    msg.setSource(36936U);
    msg.setSourceEntity(230U);
    msg.setDestination(45795U);
    msg.setDestinationEntity(110U);
    msg.system = 47279U;
    msg.duration = 61477U;
    msg.speed = 0.5681315296394653;
    msg.speed_units = 154U;
    msg.x = 0.8524185353434468;
    msg.y = 0.42844545292819824;
    msg.z = 0.15739321036036646;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.23102826350525574);
    msg.setSource(50875U);
    msg.setSourceEntity(75U);
    msg.setDestination(48861U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.4677613521755911;
    msg.lon = 0.8935798128852478;
    msg.speed = 0.6546447847180968;
    msg.speed_units = 81U;
    msg.duration = 38028U;
    msg.sys_a = 7758U;
    msg.sys_b = 4311U;
    msg.move_threshold = 0.8340626879179319;

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
    msg.setTimeStamp(0.6089782139737274);
    msg.setSource(65240U);
    msg.setSourceEntity(96U);
    msg.setDestination(50172U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.6176986821938966;
    msg.lon = 0.11937906229333939;
    msg.speed = 0.11549056214445252;
    msg.speed_units = 244U;
    msg.duration = 64474U;
    msg.sys_a = 57017U;
    msg.sys_b = 24849U;
    msg.move_threshold = 0.5447167436624736;

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
    msg.setTimeStamp(0.5662009840702084);
    msg.setSource(33203U);
    msg.setSourceEntity(200U);
    msg.setDestination(53159U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.9203527721524456;
    msg.lon = 0.5352401014126563;
    msg.speed = 0.7680224106395591;
    msg.speed_units = 130U;
    msg.duration = 61512U;
    msg.sys_a = 40639U;
    msg.sys_b = 17064U;
    msg.move_threshold = 0.14000698576168713;

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
    msg.setTimeStamp(0.5544615043274906);
    msg.setSource(39077U);
    msg.setSourceEntity(36U);
    msg.setDestination(48294U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.9781673466181173;
    msg.lon = 0.6029787030608544;
    msg.z = 0.3314140820035866;
    msg.z_units = 158U;
    msg.speed = 0.6048319481935603;
    msg.speed_units = 118U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.15644670417775164;
    tmp_msg_0.lon = 0.3571865453806594;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YDCPCPHVOSXOWXAQYTUARJSWPEYCFPRSZGREWWNFOFAYHSDWHSBVQNSJJBIMVIQRDQDUGIKJKXKOXPQOELJYTITJGBOZYKQMRPZRICATIBWYTOYFKETEEYHVAQPHHDTSLNGGLWHPGNRWVZEDGNFYQVBQFUHGMHXUMDOIBBCCDVNLNXGKFQIMDVTCHCNBLUAAZERPXBSUCALGZJOTUSBCWFUPJXKVZKNDAEMXRLMASLXNJROVUZZFJFUZLWKM");

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
    msg.setTimeStamp(0.7317546012246887);
    msg.setSource(27614U);
    msg.setSourceEntity(38U);
    msg.setDestination(2930U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.8132142812197192;
    msg.lon = 0.38000740433273694;
    msg.z = 0.07787316534481392;
    msg.z_units = 88U;
    msg.speed = 0.7464504828159343;
    msg.speed_units = 203U;
    msg.custom.assign("DSFVHOLYLNUVLPNHBCSNBXZWWNTMJVBJIKUCWHLUZZRHRUQJWOOYKDYDLTPIJMEMRNBOHRRYJQUSYUVDLEPPFGPFCVLORDMMHPUXAEZJJEJFCFKFTNQSJVALCAIGQPYXKHGBRVJFIITKSCGWSLTEWGKWEMAUORSBXKODIWGZSZHMZXSGCLAVRTAVCWGTQAQOHXPKEADDFYPUKTEYMGHQKBAEVCMP");

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
    msg.setTimeStamp(0.4744843162809945);
    msg.setSource(12880U);
    msg.setSourceEntity(97U);
    msg.setDestination(32572U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.5568598516500112;
    msg.lon = 0.000977403184115655;
    msg.z = 0.28305246842476506;
    msg.z_units = 231U;
    msg.speed = 0.32069017309478476;
    msg.speed_units = 125U;
    msg.custom.assign("ISPOFGMAICSKEIMHWIKCCPFPYEXNRRDYBZYXSSUGEAZBUVUKWBADKINHGDUMFSZROLPKWDEDRPEVOVMNMJBYEMOZQVCLOZFJJCDFEZVYTSYWFXYAYGTWNMCLBCCVQRGSIQQXHYJJLJSZBOHWIBPWDUEJUUEOZTNXGPQIXXLIKKOAKHCLJRORCWPQTTNTBQRVFLNXLMOHUMYKHBQNRNBJFGTZWTLAZHLHFPIHDUTEGVAVNSFPG");

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
    msg.setTimeStamp(0.7469521298296877);
    msg.setSource(31634U);
    msg.setSourceEntity(193U);
    msg.setDestination(6182U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.5519468068084846;
    msg.lon = 0.5010333755120496;

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
    msg.setTimeStamp(0.9106352749623731);
    msg.setSource(2890U);
    msg.setSourceEntity(93U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.47801232219658074;
    msg.lon = 0.5625746131342577;

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
    msg.setTimeStamp(0.6481499673720453);
    msg.setSource(38408U);
    msg.setSourceEntity(3U);
    msg.setDestination(40349U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.005163127628682873;
    msg.lon = 0.7492060631108921;

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
    msg.setTimeStamp(0.7514761605654574);
    msg.setSource(21004U);
    msg.setSourceEntity(104U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(22U);
    msg.timeout = 48724U;
    msg.lat = 0.8700365679361876;
    msg.lon = 0.14567782256498085;
    msg.z = 0.3170401425711037;
    msg.z_units = 32U;
    msg.pitch = 0.950121167228339;
    msg.amplitude = 0.5885726647580963;
    msg.duration = 58830U;
    msg.speed = 0.8862918855166687;
    msg.speed_units = 107U;
    msg.radius = 0.13959868722810842;
    msg.direction = 209U;
    msg.custom.assign("LFLGRXARAKLCGACULDXQPBFKZRUAWWVNICOHJZXNOQEHQETZXTTBEILNTSIBMVDDXUKBWDJANOGVJRSF");

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
    msg.setTimeStamp(0.8176421810150594);
    msg.setSource(22046U);
    msg.setSourceEntity(231U);
    msg.setDestination(46436U);
    msg.setDestinationEntity(77U);
    msg.timeout = 39545U;
    msg.lat = 0.31419622418636495;
    msg.lon = 0.7903231188770042;
    msg.z = 0.6530575326600143;
    msg.z_units = 40U;
    msg.pitch = 0.9553936384853826;
    msg.amplitude = 0.4145383665179281;
    msg.duration = 54635U;
    msg.speed = 0.48617233314611885;
    msg.speed_units = 171U;
    msg.radius = 0.9037822147789836;
    msg.direction = 110U;
    msg.custom.assign("NUOTSOHNSJXJPWLNEPKHQSMQCFXCQGWSNTSKFKJELEBKRHAQDGZZZYVKGEVREXPFRMHLDMXCPLCPGYIWAELRYAUFMAGYTIAIFBLUOVLITBHPWKZWDHDSHRYT");

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
    msg.setTimeStamp(0.1445395932909984);
    msg.setSource(40551U);
    msg.setSourceEntity(183U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(168U);
    msg.timeout = 7872U;
    msg.lat = 0.40706448482660595;
    msg.lon = 0.799633188791167;
    msg.z = 0.03796540813186944;
    msg.z_units = 63U;
    msg.pitch = 0.13907715846736202;
    msg.amplitude = 0.3644075051032455;
    msg.duration = 48931U;
    msg.speed = 0.43305481780188804;
    msg.speed_units = 178U;
    msg.radius = 0.30218654621690133;
    msg.direction = 177U;
    msg.custom.assign("MNKCNIUADQSNWCFJXKXHLXBPATWFYWSXZNEELVGJGEGQUYTHMUWOYFUSBH");

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
    msg.setTimeStamp(0.17835815533369836);
    msg.setSource(22962U);
    msg.setSourceEntity(3U);
    msg.setDestination(55270U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("NEFMSWHKBRVFSVRDJOHGXXMHCHFBWSAKEPYIBVVRV");
    msg.reference_frame = 99U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49253U;
    tmp_msg_0.off_x = 0.28695519010497195;
    tmp_msg_0.off_y = 0.7094782881065159;
    tmp_msg_0.off_z = 0.6563079576610023;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CAKIIONRPOAQGDNCHQIIZZEIEMMKEWXJBTHCCSNSSLFOTLAJHVXMPUDCMLQXVWTZMJDGFASWHFBBYFEFJOQVYMDOSLWZWPN");

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
    msg.setTimeStamp(0.1298569761552255);
    msg.setSource(1684U);
    msg.setSourceEntity(77U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("WQBENTADWLWAOCQHSFF");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44024U;
    tmp_msg_0.off_x = 0.3892518743327611;
    tmp_msg_0.off_y = 0.8893900036512601;
    tmp_msg_0.off_z = 0.16761749780610835;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CIRMRZVYEIFJMJUGIDPNJQQCOXZVRHMDFNGQQXAELRKHUGGTIOANWLZLAGSATSMSZHJYPBBXPDHMBNWGUTOZWTQDFYRUIVMFOURUNTNFKWDZHFBQBUSILRXDEDCKFGYKOWNKMLYQBHYSEGESAHIEXCCLCXVUGEVTPQPHAPTZMZWPFTHLJOXRQTNUSLWAKKBLVEKOPLDCVBGXVSNOXZMXOAIVPBAYJJRBWWKECDYJQNERYJAZVUP");

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
    msg.setTimeStamp(0.5215239800236369);
    msg.setSource(61578U);
    msg.setSourceEntity(197U);
    msg.setDestination(44734U);
    msg.setDestinationEntity(246U);
    msg.formation_name.assign("CVQSGRLXLAFGATEBSXKUAJVQNFCXOVPHHIXEWEREHIKESIQN");
    msg.reference_frame = 225U;
    msg.custom.assign("DPQZCAVKTVOYUYNXMDEEEOUIROZEAHXCZQZUOFKBDWLWJKFZDRQMHBNBHDYLIPEMZPFGCJCTJFGVAFCIURBY");

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
    msg.setTimeStamp(0.8803553588023455);
    msg.setSource(36989U);
    msg.setSourceEntity(83U);
    msg.setDestination(59697U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("LECHLFFKLSHAWTTTVZCSGPDIGIUJKFTMJFDSJSCCVRGXIORKRTJPASBIOSHOMLMLXXBCQTBHYDEVXAUAVEQSHGURKLDUNNTQDGXUODGQJWWEVUWEBZMKZNJGLPAYOHZIQYRBMVKBXNMKMAMOPRMZCDCFJLVFYHWCZONYKURQVSIAYXEMKPOJWQBRUFYXAOZDEUDFSKHEDINARNPUPGNLAIWPBWRWXBLFVYTHNQQZHXWJYBJIOI");
    msg.formation_name.assign("GIYLTQVNKAHJDYRWUFQIPTJOBPUNLHNFCXFTOK");
    msg.plan_id.assign("ZCNUVEWFMVBAESWWYHEMXINCRHGDRDSUSAOPUMSKZDWXIUHCJBHGRSFGKLLYIPIHXTSMAAPEHPGXEPYCQUHTJVBNDIEQDOUPMWIBJMOHBBDZWTATCKFCNNTUOXQNJAJTXVCXLTLZI");
    msg.description.assign("UUAAVLHFFTIBLUNRPNZTBFPPYRDTDHZYRBCMGOEJSXLPKIUGUYQCVRJYXCCFVDIRNPZQQJULOPJDNTIXXQUH");
    msg.leader_speed = 0.9280236025158511;
    msg.leader_bank_lim = 0.47725422274517704;
    msg.pos_sim_err_lim = 0.3573389768137114;
    msg.pos_sim_err_wrn = 0.38230890774300086;
    msg.pos_sim_err_timeout = 59000U;
    msg.converg_max = 0.15963294135405426;
    msg.converg_timeout = 32067U;
    msg.comms_timeout = 3538U;
    msg.turb_lim = 0.533335837720723;
    msg.custom.assign("KATSEXDPTOXYQWSMXJSDXTMUEQHDQARWUURUVREGGHCQOGJGIGJBDPDOGHDYOCKOFSISWPLBULILPQYLMFJRBNJEDRAOUOLHQFWPFXICUTQOYAWVMETFIDGBAEZYZEKUSSTKFSZNJZPTHKQOJLHNCTNCLV");

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
    msg.setTimeStamp(0.5509646226672398);
    msg.setSource(16404U);
    msg.setSourceEntity(249U);
    msg.setDestination(49836U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("EZTOFRTTSAHXWLCJENUTGBANFOWTKGYPUBTZLUDEJMJQZMMWRHLWYIXTKWECBUZIHCYICYDJOJERAQLIGZUMVVIRRDOPYJSWBHRMKHPHNYVQBHKGSRAQQFNIDVFTDLCFKIFZWSYBXRBWUAINBSFQYNK");
    msg.formation_name.assign("GKEAODSAKEURZGMNEWVBDRLINOYIRALMGJLOBFHFNBJUNAVFKTTUXRQTBYW");
    msg.plan_id.assign("TZDRDFKEDYMCKSMDRVQOZKCPNVQWBGQTJBVOIFVKYXPSGJRVPNPKXZIUFRTXUAODDEWLUTLIFZBSLXSFHVWOOIHAJNOVDFVNSZTRNOGSFBXRPECUMJLHMTHWGNKUQ");
    msg.description.assign("ZRULSEVRPKCMSWTMJHAAVFSSBDSOCJBNQGYKJEJKBAKHXBZSHMOQIYNYZRAFUVNRMTMGUWMNLPHBQMLTKOQUIWKFHOLJTDICZGE");
    msg.leader_speed = 0.9605269274525402;
    msg.leader_bank_lim = 0.6211328554523841;
    msg.pos_sim_err_lim = 0.2471754271678216;
    msg.pos_sim_err_wrn = 0.9089155672726419;
    msg.pos_sim_err_timeout = 65345U;
    msg.converg_max = 0.7763061657941557;
    msg.converg_timeout = 32890U;
    msg.comms_timeout = 2476U;
    msg.turb_lim = 0.4862632924918435;
    msg.custom.assign("JEDRJTWDLWOERJRTKUBTENJAZGGFDVANLPMNXOOIAUUPCLIUBSYOILGVOEWCDYIMGZSBDCKNFGZESHBWHYFAENQDUGAQIBDMCWPUFFEDRVZPIMGBAIQDKMCBHRVQYLOLAMHTVGFVVANPKQNHTHAUGFFYKTSXIFRRJYXOVMTHKPTBKYHIZETTEVOYUSLQQPBVXRBSIJYZWUQDNKFSMHKJYSMZLNXJ");

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
    msg.setTimeStamp(0.8150785898304417);
    msg.setSource(357U);
    msg.setSourceEntity(41U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("OZZCHZRBBCWIFSFPKTPMSRMTQFBNTUGCHDEXMEGGAIAYYVBRQQCFPJVSQPOFRTXYDCRQOXBAMQHEYWUQRRQLVJMLRKDKWSKHVLXIYAJKUNLPZJCAZYGPEDVRRXNBKIOFUKILEZTYOOKVKVHWWWSJQGAADIHDYZCYUDXDUTCINLTIBJHUMBHTUKYFJXNMSGPNF");
    msg.formation_name.assign("YPTWTEEJZYPBZOSYUQYREILWYHBRLTOPVIMUWVXPQKYGRMDVSRTLUBDVJNKVXYMIXVKIICNHQHGTBMJVUSRFBQXFQJFISDEMWAXNSRDWRSNARUQCYLDDUOMXZZHKXCLBHPU");
    msg.plan_id.assign("JHAILQHANTNOTYUZYXYADJSMCFXWINALTXUQXTRSOYMILASKDGWUKMVAUCCHOAOPUZTQYZJPUIELQONMPJEFSSKGPHNLNGWEEXCOETYKSXLZDFRBCWEHZBRCWQGVYBDZI");
    msg.description.assign("VWQODQFSHAEWDFZCEKOGCANOXYZAISJNDCMOORSMUKDDPSCUYTFWICDIGQEQUALKVNVPWIBLPGWY");
    msg.leader_speed = 0.20912469694981806;
    msg.leader_bank_lim = 0.08391965727824025;
    msg.pos_sim_err_lim = 0.771603409556907;
    msg.pos_sim_err_wrn = 0.8421329805771383;
    msg.pos_sim_err_timeout = 60802U;
    msg.converg_max = 0.29771891548886165;
    msg.converg_timeout = 26612U;
    msg.comms_timeout = 43250U;
    msg.turb_lim = 0.6293881757919074;
    msg.custom.assign("METBFTLWUATFVCUGCVWAMUFHYBJRBDJXMYURLUYDXOOZJWKVAIHMPSXRASXVBHNVMCQAEORLINBHCJCWVELHXIMJAOAMDDVRQNMCNWNKBCZYLXPPNPKNGGVTYCEQKYHQZTCBFQBZKITZWJSNLSEXYMPAHOKRPWWBZLDONTYDIE");

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
    msg.setTimeStamp(0.15998867426097774);
    msg.setSource(44962U);
    msg.setSourceEntity(106U);
    msg.setDestination(11502U);
    msg.setDestinationEntity(171U);
    msg.control_src = 3480U;
    msg.control_ent = 40U;
    msg.timeout = 0.5901634559422559;
    msg.loiter_radius = 0.5426384634993913;
    msg.altitude_interval = 0.6860148276753035;

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
    msg.setTimeStamp(0.5054837353170497);
    msg.setSource(1427U);
    msg.setSourceEntity(117U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(28U);
    msg.control_src = 13681U;
    msg.control_ent = 84U;
    msg.timeout = 0.9471961981634194;
    msg.loiter_radius = 0.7648568643331564;
    msg.altitude_interval = 0.014221947950108782;

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
    msg.setTimeStamp(0.8959904855859351);
    msg.setSource(8447U);
    msg.setSourceEntity(64U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(18U);
    msg.control_src = 11325U;
    msg.control_ent = 173U;
    msg.timeout = 0.6316825088205673;
    msg.loiter_radius = 0.8115257972109298;
    msg.altitude_interval = 0.6251352651629555;

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
    msg.setTimeStamp(0.7198830154680455);
    msg.setSource(19568U);
    msg.setSourceEntity(15U);
    msg.setDestination(49410U);
    msg.setDestinationEntity(47U);
    msg.flags = 210U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3930832979343445;
    tmp_msg_0.speed_units = 138U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2772462781913698;
    tmp_msg_1.z_units = 41U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9056678332614204;
    msg.lon = 0.3905718825768403;
    msg.radius = 0.6826207837904493;

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
    msg.setTimeStamp(0.17547730149557494);
    msg.setSource(49218U);
    msg.setSourceEntity(18U);
    msg.setDestination(49575U);
    msg.setDestinationEntity(147U);
    msg.flags = 64U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3153680207032332;
    tmp_msg_0.speed_units = 89U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4995753722119368;
    tmp_msg_1.z_units = 146U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1805807223794652;
    msg.lon = 0.4378916444387865;
    msg.radius = 0.8117230135198021;

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
    msg.setTimeStamp(0.9941478833927965);
    msg.setSource(46679U);
    msg.setSourceEntity(69U);
    msg.setDestination(55879U);
    msg.setDestinationEntity(239U);
    msg.flags = 6U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1290598987814352;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18983032256910504;
    tmp_msg_1.z_units = 177U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.20953734525474355;
    msg.lon = 0.08268362300962029;
    msg.radius = 0.7455157285642985;

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
    msg.setTimeStamp(0.5147304124910433);
    msg.setSource(31407U);
    msg.setSourceEntity(181U);
    msg.setDestination(22737U);
    msg.setDestinationEntity(36U);
    msg.control_src = 23768U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6279777040079811;
    tmp_tmp_msg_0_0.speed_units = 30U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3823166589397857;
    tmp_tmp_msg_0_1.z_units = 15U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.67757194410877;
    tmp_msg_0.lon = 0.22515950659545214;
    tmp_msg_0.radius = 0.32349176886050146;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
    msg.proximity = 212U;

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
    msg.setTimeStamp(0.3423692280714036);
    msg.setSource(53628U);
    msg.setSourceEntity(170U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(95U);
    msg.control_src = 10770U;
    msg.control_ent = 160U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.428347061598389;
    tmp_tmp_msg_0_0.speed_units = 228U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.789992936207206;
    tmp_tmp_msg_0_1.z_units = 217U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.12317500111774804;
    tmp_msg_0.lon = 0.04715710742611079;
    tmp_msg_0.radius = 0.7472191701265847;
    msg.reference.set(tmp_msg_0);
    msg.state = 234U;
    msg.proximity = 108U;

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
    msg.setTimeStamp(0.9220867951819599);
    msg.setSource(1122U);
    msg.setSourceEntity(60U);
    msg.setDestination(50923U);
    msg.setDestinationEntity(156U);
    msg.control_src = 37302U;
    msg.control_ent = 65U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 17U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4699388521648893;
    tmp_tmp_msg_0_0.speed_units = 1U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9442093706083279;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9788405650854759;
    tmp_msg_0.lon = 0.3934682201278916;
    tmp_msg_0.radius = 0.4090353887971323;
    msg.reference.set(tmp_msg_0);
    msg.state = 119U;
    msg.proximity = 11U;

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
    msg.setTimeStamp(0.42907042556311215);
    msg.setSource(13593U);
    msg.setSourceEntity(54U);
    msg.setDestination(31884U);
    msg.setDestinationEntity(189U);
    msg.ax_cmd = 0.10294007158139695;
    msg.ay_cmd = 0.04281646305191256;
    msg.az_cmd = 0.03709396543799448;
    msg.ax_des = 0.031164087633094306;
    msg.ay_des = 0.6909536073838503;
    msg.az_des = 0.2069713664658812;
    msg.virt_err_x = 0.48455454680372667;
    msg.virt_err_y = 0.541906028059235;
    msg.virt_err_z = 0.5147395339741131;
    msg.surf_fdbk_x = 0.6649769180970294;
    msg.surf_fdbk_y = 0.9326541717173799;
    msg.surf_fdbk_z = 0.19400943781753255;
    msg.surf_unkn_x = 0.23321225272043833;
    msg.surf_unkn_y = 0.08129290743893358;
    msg.surf_unkn_z = 0.9176013792419626;
    msg.ss_x = 0.24172549634971896;
    msg.ss_y = 0.9704667891742914;
    msg.ss_z = 0.6968804064452448;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SJSBEJBMPIRVBPXTOZEBYYYCKLDSXECDKZUYHIBVMDZETWBUJWZLCOBTNGMOFAAGKUSGQWAGIJMCFUZNYFUVGHLXCPHU");
    tmp_msg_0.dist = 0.5486328666567479;
    tmp_msg_0.err = 0.5010189456993008;
    tmp_msg_0.ctrl_imp = 0.22564313978284556;
    tmp_msg_0.rel_dir_x = 0.597716938013601;
    tmp_msg_0.rel_dir_y = 0.015258230602245737;
    tmp_msg_0.rel_dir_z = 0.40076334504840017;
    tmp_msg_0.err_x = 0.83947613035019;
    tmp_msg_0.err_y = 0.2514101169757884;
    tmp_msg_0.err_z = 0.12101899732531962;
    tmp_msg_0.rf_err_x = 0.229549541994304;
    tmp_msg_0.rf_err_y = 0.8257482426368535;
    tmp_msg_0.rf_err_z = 0.8047840066311951;
    tmp_msg_0.rf_err_vx = 0.3784120345300196;
    tmp_msg_0.rf_err_vy = 0.8585154169265555;
    tmp_msg_0.rf_err_vz = 0.07631603736799408;
    tmp_msg_0.ss_x = 0.5033893045906497;
    tmp_msg_0.ss_y = 0.5085856810618736;
    tmp_msg_0.ss_z = 0.1500238514565435;
    tmp_msg_0.virt_err_x = 0.32477992471354067;
    tmp_msg_0.virt_err_y = 0.34711142055474387;
    tmp_msg_0.virt_err_z = 0.7446740007532173;
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
    msg.setTimeStamp(0.28046453863756426);
    msg.setSource(22700U);
    msg.setSourceEntity(116U);
    msg.setDestination(51023U);
    msg.setDestinationEntity(133U);
    msg.ax_cmd = 0.5529202089529476;
    msg.ay_cmd = 0.4860263117537821;
    msg.az_cmd = 0.3869988847306449;
    msg.ax_des = 0.8623860773606906;
    msg.ay_des = 0.45554873517585304;
    msg.az_des = 0.544730088855145;
    msg.virt_err_x = 0.5127744260604469;
    msg.virt_err_y = 0.8362883371035218;
    msg.virt_err_z = 0.013215973042811191;
    msg.surf_fdbk_x = 0.8066722224845654;
    msg.surf_fdbk_y = 0.9941112204174173;
    msg.surf_fdbk_z = 0.9374962224974039;
    msg.surf_unkn_x = 0.058061664624825204;
    msg.surf_unkn_y = 0.8829739363941487;
    msg.surf_unkn_z = 0.8612495121398408;
    msg.ss_x = 0.18323975112482238;
    msg.ss_y = 0.210410584480333;
    msg.ss_z = 0.3391734311463168;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VFVVCRSKHCDOFMPUXHJGBLXJFBNVDIXZSJNRHMQYHRGMHVQTCEGPZXGJYAUYIBOXVKEINSPBPQUZUWSOPZTOJVTLCGMKDOLTIIRAHXFUDBTBQBHMOZYOJZIYOTJAEBDIAPBXFPSSQKVPDKFJREEND");
    tmp_msg_0.dist = 0.7694239950614195;
    tmp_msg_0.err = 0.9199253132191362;
    tmp_msg_0.ctrl_imp = 0.2340648377639336;
    tmp_msg_0.rel_dir_x = 0.268018410821498;
    tmp_msg_0.rel_dir_y = 0.9017472233306618;
    tmp_msg_0.rel_dir_z = 0.6733271423481452;
    tmp_msg_0.err_x = 0.7999726943758422;
    tmp_msg_0.err_y = 0.8112427659349689;
    tmp_msg_0.err_z = 0.2883895026594302;
    tmp_msg_0.rf_err_x = 0.5244987581948266;
    tmp_msg_0.rf_err_y = 0.45393326573540294;
    tmp_msg_0.rf_err_z = 0.642070356098266;
    tmp_msg_0.rf_err_vx = 0.7657506274285936;
    tmp_msg_0.rf_err_vy = 0.16282941947858687;
    tmp_msg_0.rf_err_vz = 0.4463826749138198;
    tmp_msg_0.ss_x = 0.4247100953809365;
    tmp_msg_0.ss_y = 0.25680869544490603;
    tmp_msg_0.ss_z = 0.5101686639202975;
    tmp_msg_0.virt_err_x = 0.16183567585742287;
    tmp_msg_0.virt_err_y = 0.9544313709454478;
    tmp_msg_0.virt_err_z = 0.5198835069745864;
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
    msg.setTimeStamp(0.291569653668038);
    msg.setSource(63792U);
    msg.setSourceEntity(133U);
    msg.setDestination(35080U);
    msg.setDestinationEntity(72U);
    msg.ax_cmd = 0.5750320989836853;
    msg.ay_cmd = 0.3401474647684516;
    msg.az_cmd = 0.8604735014259549;
    msg.ax_des = 0.6601562226417557;
    msg.ay_des = 0.9030622773400272;
    msg.az_des = 0.19853401230933665;
    msg.virt_err_x = 0.757937136779322;
    msg.virt_err_y = 0.16619003059810045;
    msg.virt_err_z = 0.8171628207646088;
    msg.surf_fdbk_x = 0.9371247991238854;
    msg.surf_fdbk_y = 0.6064250922237008;
    msg.surf_fdbk_z = 0.47026138838607734;
    msg.surf_unkn_x = 0.27867139278265807;
    msg.surf_unkn_y = 0.7421703500225396;
    msg.surf_unkn_z = 0.2910593968403993;
    msg.ss_x = 0.6129803846003307;
    msg.ss_y = 0.9617956159534669;
    msg.ss_z = 0.9843829491067408;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NHFEJNZMNZPMQEWTADLRTRFQRFKDIDZDTJDSEOKBNENCLHWXBJCBPYGOVCAWVLIQRIMANKUOHNLATKEHFIXTRROYVBSQLACTIGQHVPXBSMQNPAGIYJJUIKYOGFQCIQFERYUVPWWVGSBULZUSJHMUG");
    tmp_msg_0.dist = 0.7051307629326431;
    tmp_msg_0.err = 0.345759362540886;
    tmp_msg_0.ctrl_imp = 0.00899629352245801;
    tmp_msg_0.rel_dir_x = 0.28062317941168136;
    tmp_msg_0.rel_dir_y = 0.8937281604651298;
    tmp_msg_0.rel_dir_z = 0.20191977521501914;
    tmp_msg_0.err_x = 0.9466264592662998;
    tmp_msg_0.err_y = 0.8216551161025261;
    tmp_msg_0.err_z = 0.7542757843784358;
    tmp_msg_0.rf_err_x = 0.8745269272786972;
    tmp_msg_0.rf_err_y = 0.3904904557223836;
    tmp_msg_0.rf_err_z = 0.947279606092228;
    tmp_msg_0.rf_err_vx = 0.49210885545840943;
    tmp_msg_0.rf_err_vy = 0.7512806028669762;
    tmp_msg_0.rf_err_vz = 0.8007752655860055;
    tmp_msg_0.ss_x = 0.43472025895087196;
    tmp_msg_0.ss_y = 0.08423022146364267;
    tmp_msg_0.ss_z = 0.21999423416395414;
    tmp_msg_0.virt_err_x = 0.2778242182697709;
    tmp_msg_0.virt_err_y = 0.8672837151124217;
    tmp_msg_0.virt_err_z = 0.1615810751876373;
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
    msg.setTimeStamp(0.9168864735390674);
    msg.setSource(904U);
    msg.setSourceEntity(169U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(34U);
    msg.s_id.assign("SOJODGWGCUXDBPMJWAQFRXMCVDDOVUOSIPIIJTTYMRKVHHWYMCGHTOKQXWUWUQAMETXFOS");
    msg.dist = 0.3713145778708966;
    msg.err = 0.9031753458534297;
    msg.ctrl_imp = 0.4858261310373654;
    msg.rel_dir_x = 0.3085050263357403;
    msg.rel_dir_y = 0.7057645838467324;
    msg.rel_dir_z = 0.016456679370287053;
    msg.err_x = 0.3908974399389008;
    msg.err_y = 0.9313470236028762;
    msg.err_z = 0.991959590858073;
    msg.rf_err_x = 0.2340277112794138;
    msg.rf_err_y = 0.2680672665824635;
    msg.rf_err_z = 0.33620073465209976;
    msg.rf_err_vx = 0.4062641852542913;
    msg.rf_err_vy = 0.602403006747773;
    msg.rf_err_vz = 0.6153911861831497;
    msg.ss_x = 0.5453889517043258;
    msg.ss_y = 0.03801985084429238;
    msg.ss_z = 0.3341518252688874;
    msg.virt_err_x = 0.254355697049645;
    msg.virt_err_y = 0.09405421333892505;
    msg.virt_err_z = 0.8404598729257783;

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
    msg.setTimeStamp(0.7945952155866481);
    msg.setSource(63377U);
    msg.setSourceEntity(24U);
    msg.setDestination(65487U);
    msg.setDestinationEntity(251U);
    msg.s_id.assign("YKKREBDCLBPEMBUKZFVLJRFQHVGNDTKPTQGEOLBFGOZAARGJXLVPDUZLAEYPXHWMHBCBRNKMWXNAIIUUUMXHJJAOWIITUTSZQSTSEVVDSNGQALALYLUTWQHXCOZIDXJDLHRCYJOOYRWJZEVACZDMKQFC");
    msg.dist = 0.5054513461597488;
    msg.err = 0.24347882640959717;
    msg.ctrl_imp = 0.9715580928783276;
    msg.rel_dir_x = 0.10694787756654944;
    msg.rel_dir_y = 0.628408555248248;
    msg.rel_dir_z = 0.9670882812852053;
    msg.err_x = 0.6766506014295053;
    msg.err_y = 0.19548693740117828;
    msg.err_z = 0.08473933180418203;
    msg.rf_err_x = 0.5480622391406108;
    msg.rf_err_y = 0.5123318288257114;
    msg.rf_err_z = 0.8520496547383315;
    msg.rf_err_vx = 0.2702885141569761;
    msg.rf_err_vy = 0.5238742865942927;
    msg.rf_err_vz = 0.6017852259447986;
    msg.ss_x = 0.8032036415941175;
    msg.ss_y = 0.17935580178523158;
    msg.ss_z = 0.011341805162105811;
    msg.virt_err_x = 0.855260321724874;
    msg.virt_err_y = 0.39767413866254997;
    msg.virt_err_z = 0.6543318279369622;

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
    msg.setTimeStamp(0.296851480340958);
    msg.setSource(54258U);
    msg.setSourceEntity(197U);
    msg.setDestination(34471U);
    msg.setDestinationEntity(7U);
    msg.s_id.assign("TVGIMGJYBAJBBNFZUKHEEFYSXBMFADJPIMRCALYKJSLEWFOWCMCSYPMBOXRRWOABSCUQDZULAESBYVDNDJLGIQAZGKUUGUQDJF");
    msg.dist = 0.5639442791546934;
    msg.err = 0.016834971135886057;
    msg.ctrl_imp = 0.781207593808678;
    msg.rel_dir_x = 0.8716997853173323;
    msg.rel_dir_y = 0.020727743911881924;
    msg.rel_dir_z = 0.26442176761972136;
    msg.err_x = 0.17596532567118228;
    msg.err_y = 0.39222906076863917;
    msg.err_z = 0.8371910235525997;
    msg.rf_err_x = 0.9643590945819932;
    msg.rf_err_y = 0.0161707439128701;
    msg.rf_err_z = 0.7665139730862911;
    msg.rf_err_vx = 0.8509333473659544;
    msg.rf_err_vy = 0.4736832424341052;
    msg.rf_err_vz = 0.21081848796339375;
    msg.ss_x = 0.12614474421119826;
    msg.ss_y = 0.9547298374180835;
    msg.ss_z = 0.957668488552596;
    msg.virt_err_x = 0.7932111895183387;
    msg.virt_err_y = 0.8341135688794091;
    msg.virt_err_z = 0.9386140483242295;

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
    msg.setTimeStamp(0.38953431358365476);
    msg.setSource(3252U);
    msg.setSourceEntity(69U);
    msg.setDestination(43261U);
    msg.setDestinationEntity(195U);
    msg.timeout = 39063U;
    msg.rpm = 0.4233255236764387;
    msg.direction = 82U;
    msg.custom.assign("NMLHKQUGVXRTONZLCSCUWRVTABSJEHUYYSLDMEDLGGJTIKGTSJEDWKZVMHWFNXSYAUBNDVQIMZRIOFYYJTYBTMPPQCKFMLBPGAEPPTYDVZICXHSGSKVVQFPFEUXRAQIJFTLUZMDLJJXIIBEWNLCBLYKGOVWNPXSPAOSRWMLEVBCKZAZCKXOZAIDAIGBXNODHPDOAXFWUORHMUJPFTWQNGFJUEYTI");

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
    msg.setTimeStamp(0.7498741972730144);
    msg.setSource(60585U);
    msg.setSourceEntity(90U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(24U);
    msg.timeout = 453U;
    msg.rpm = 0.4106014609914206;
    msg.direction = 67U;
    msg.custom.assign("EQFBIPVERAHPUGWWGDSSDSODUZLZDKAUMIXNMNYNSHEYDLMRZVYLIJZIQTVUNLLQS");

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
    msg.setTimeStamp(0.2966792943477926);
    msg.setSource(36606U);
    msg.setSourceEntity(149U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(11U);
    msg.timeout = 46738U;
    msg.rpm = 0.29700047371216465;
    msg.direction = 171U;
    msg.custom.assign("JPAZOCAXRPBTHZOAQWDCZAYPWQVAXGQBYGYERYIQRYCOBAZHBWUSRVKFTXJCCMXPNXWPHHMNMGXJNFFAZWBBINBGKPODMEGIYDUVHUMQCWEHFVEZJSSFEJMKWJTGOVUMXXODKGIDTKXRNRDLCMIQMSTSBISLUKLKEGVQNYTLIBTQQOUYGVECQPFOPETWLLLFEKLZYSZYJCINODFDTZLUUMFVLNIHSRANVTKSHPVHDZWAJUR");

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
    msg.setTimeStamp(0.7263914775128761);
    msg.setSource(63305U);
    msg.setSourceEntity(3U);
    msg.setDestination(8367U);
    msg.setDestinationEntity(94U);
    msg.formation_name.assign("IEWVZFPFKYGPGXCLXEDFOFATZVPJBSLHLZIQPIFLXUYYDCGRNHNIWKAJLUACEUPBNQHJTSIQJUVOWRBOAVXMPBZJLIDHQYVCYKENGJGQNXAOSZKQESBUJJVQBNMZSZHSYMGTOEXFCLNHRIFHEOVWKWKEDARACJMHLMYWOFJTPKZORKMMCDSOKGQUBZFBLDABGDXCIYVGURWCRSTOTEWPRQPAVKYRI");
    msg.type = 99U;
    msg.op = 16U;
    msg.group_name.assign("GGTEWSYJBNFTNRGYXFRCDKLRKOHPEFFYNUJJEPRSITEEDWGPIIKVAGSEHYCWFUJALCNQQVZUDGUIIZGJYROGXHNOSTAUWUOHSMJNNZHBIFWZGQAYMQQFPLVIRZBBVEFQHMLKVKSVBTVMSOSCSIDATXAWUZZBQWWRJAQVMJNRFTXXMCBHELMJ");
    msg.plan_id.assign("UBYZRUZDKBPTVHTFJOPQTMBLVFSNRSDALQBAYLZGGWZXPFDRXSDROKYMNNROTQFWSHIUFEUAYPJEAICMBLIHCPFJSIISXWKOMGKXBRD");
    msg.description.assign("GEUSCFYXXZTVEDTVPWSHGNQEEDOQXYAGDMBWOSMZIFAGIPQZGOXIZJMUQYBTPUBYWVMJORNXYHFCZKSQPKSOZLTMDKUHKQZUIZUVQVRCQSIMEVWOJDAKCCFHRAMJFYOINJDXBHQKFOEWGIRUXNPAVTJTJVURGEKKUERFKNBANBMLIBFTSSCKDWWTLHONE");
    msg.reference_frame = 164U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25492U;
    tmp_msg_0.off_x = 0.7046555733363723;
    tmp_msg_0.off_y = 0.07752884493940593;
    tmp_msg_0.off_z = 0.3731815906588748;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.1362823442207608;
    msg.leader_speed_min = 0.8710892387932521;
    msg.leader_speed_max = 0.42814334996660186;
    msg.leader_alt_min = 0.5180429322344872;
    msg.leader_alt_max = 0.9408145938098115;
    msg.pos_sim_err_lim = 0.08435690914183547;
    msg.pos_sim_err_wrn = 0.4076836374510411;
    msg.pos_sim_err_timeout = 60243U;
    msg.converg_max = 0.7264497643476111;
    msg.converg_timeout = 9232U;
    msg.comms_timeout = 23053U;
    msg.turb_lim = 0.5344901286147211;
    msg.custom.assign("EZHIOXHWITVNTTTGUPVAWAOGUYLRELOZHWTIUUDSHTKSQRZILNDVUQBAOFFXWFCQTAIGQPICSDPEELNVKQFQNMESPSWOJFWMZBJBYGXAQLUHRKIXPKVYEZ");

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
    msg.setTimeStamp(0.8013315971381109);
    msg.setSource(3335U);
    msg.setSourceEntity(138U);
    msg.setDestination(20870U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("YYXEKYNELWCWRTRTVXRNTFFGQEWEEGXGGVOIVAIMTUXIQHUQLCKKMPFOQJKHCZJJDWUEMSWCUECKPUENZGILTDILAVSPFANZXUWUDUASRJZKHWCWBJTKGXMQCMFLMNZBLGEBCPGBQYMIMZHKYWYSZINYTHYFDISQOJTGHMKNOPFINNPEIBDSSBBVYFODAJXHPDRFSVBURRABJALXVONPCHJQLAKGHXPQZFXLROR");
    msg.type = 206U;
    msg.op = 121U;
    msg.group_name.assign("BFUSWQSHPBYJXKJFPMLSHPGELQSMIGZJZE");
    msg.plan_id.assign("JYBIOHBZLZMBWHKGGHIMYULMBLQQDVAYOTOAQJJCMUKPRRFKTAQWRVNSSDGVHEUUZMEHRPLTSXSXREWVNIIZXKCFAGCBNFOEXNPUGGBFOHTLJDWRPSTEVRDXSE");
    msg.description.assign("JBWCJKCPHQFWBGFSPZGIRSMZCUQTKCCCJRFHYBSSIJDYTWORWVDRNDHLMTTZXVLZZCWWDMAQDENLTAIH");
    msg.reference_frame = 190U;
    msg.leader_bank_lim = 0.6687424978095012;
    msg.leader_speed_min = 0.12420742243516902;
    msg.leader_speed_max = 0.5077702161582679;
    msg.leader_alt_min = 0.28298606022812234;
    msg.leader_alt_max = 0.3759738932863107;
    msg.pos_sim_err_lim = 0.9507305287251903;
    msg.pos_sim_err_wrn = 0.17145247314663092;
    msg.pos_sim_err_timeout = 24212U;
    msg.converg_max = 0.34656004074800584;
    msg.converg_timeout = 36645U;
    msg.comms_timeout = 42880U;
    msg.turb_lim = 0.7329458178610663;
    msg.custom.assign("GFAARKPUWCOWPDDVUFUVOKACTACFTTFINBIBCSQUFRCDWNRWUKUBFLRHTZJJVFLPNXLYBBRUSVOWGFWTJKGFHEJGCZPCMDEPEWEDEMKXAYYIZPZYGUUKGNZJMQNQQIWIYRVBQOPLZXPRSTLROZEXENYXNCTIYYCNTBAHMEHEYGAOLXWMVJHHCATAOPOMVABQQMJXHOY");

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
    msg.setTimeStamp(0.0896536814611879);
    msg.setSource(29995U);
    msg.setSourceEntity(83U);
    msg.setDestination(35438U);
    msg.setDestinationEntity(129U);
    msg.formation_name.assign("JSFVZQSYLEIMXZSZMUYSGORCQIVWNDFJITWGFJBPMYKGJEDCUEGRXPITBDXUQCRHKNLNKZLAYANQHCUZKFCOIMQOCKPRVIBFTDBEVUKNDLOVFUNMAFSYFWPHQAPQLWLRTYOZBWSDXKATPTHEJEBPEJSWDEALLUGOXKHEBLNOYXKDRUNPIMJUHCONIMGVWGAVBYKS");
    msg.type = 98U;
    msg.op = 0U;
    msg.group_name.assign("LFQZJBCCPKTPD");
    msg.plan_id.assign("ZTFNIEPJZUCLXUGPYNQGHZUCFCAJYQHEPDAXSYANFYEORFMKSTELWLVGCBSKIFVNXCFXTRCPPYWEHMTBFYNUULMGTUDYBOLLORKZHESWGXJQIOHIDFKCNXGAZNDAMTDUZRCTKCOQHBSOLISABQQBEIADQQDOJBMHIGVBMKASTDKUTDANEF");
    msg.description.assign("CRCIWFFVGFZQLGOOTSXRVZKLUSCEPBNDYSIRQAINECUHWNTFRUKVYMZKWWRTPZNQTHKRKBXZOLSMPCJBWVMYCQNBQIUYMHYQOAKLSAKJXTFIMQCTDEJSVOJISLYHAHMUGAVBEDMCGDQVJOUUJBNWOEXVYFDGPJZJBTIFPAIBMYKEPGLWACRHTZQFCZANSSPPDDWHWBXRYOMXDQLS");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4419U;
    tmp_msg_0.off_x = 0.7142511476735978;
    tmp_msg_0.off_y = 0.9249799882316123;
    tmp_msg_0.off_z = 0.1787768397183529;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9695984226210834;
    msg.leader_speed_min = 0.2750689897056474;
    msg.leader_speed_max = 0.1508540882499041;
    msg.leader_alt_min = 0.5398551530447612;
    msg.leader_alt_max = 0.6672278778347904;
    msg.pos_sim_err_lim = 0.6969641952448834;
    msg.pos_sim_err_wrn = 0.2933098834791399;
    msg.pos_sim_err_timeout = 8869U;
    msg.converg_max = 0.13596254941856412;
    msg.converg_timeout = 26796U;
    msg.comms_timeout = 58659U;
    msg.turb_lim = 0.06501430352354431;
    msg.custom.assign("CGCSFEAJQMVVFUOZTLWUQTZWRGDWQBIIGDIDBWLHXGQOQHZZOSPSNMGVRZDUJTMXNFEJMOXBANRCSLYCERPA");

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
    msg.setTimeStamp(0.1780419469906379);
    msg.setSource(34440U);
    msg.setSourceEntity(61U);
    msg.setDestination(25205U);
    msg.setDestinationEntity(28U);
    msg.timeout = 22328U;
    msg.lat = 0.3053673788098896;
    msg.lon = 0.2963414384046654;
    msg.z = 0.6465084018328731;
    msg.z_units = 33U;
    msg.speed = 0.7938979731303905;
    msg.speed_units = 11U;
    msg.custom.assign("UGOKQPEMHJKELCABLHHFEQRWGEPACXXNSASDZVUXDPZHUKLOLDIGYRVRUWGHLNWVZBITAAZTOWXDUWPVQOVXBPXSMKKNZNCVJMDKAVELOISHXNARSMPDQRWXKNIXGELEDMLYMOYIFMYHHSNECRNGWJWYSYVFLOQCZYJBPETYRECBDPHJDUTOZFINDLPQIQYZCRKBSCYXUATQIJJFFBNPBOZBIGTAMHBZRGQ");

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
    msg.setTimeStamp(0.41978051818044393);
    msg.setSource(24013U);
    msg.setSourceEntity(2U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(78U);
    msg.timeout = 22104U;
    msg.lat = 0.46866677002569146;
    msg.lon = 0.07906074751219139;
    msg.z = 0.5510293872654428;
    msg.z_units = 195U;
    msg.speed = 0.46878891422924573;
    msg.speed_units = 215U;
    msg.custom.assign("XSXFTIEOHEWURRHRCFPHWVXWWIGNFUKNQYEFLIAYCBRCIUTBPDAPSVYKKOGKQKQFEMRUYPDZMJ");

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
    msg.setTimeStamp(0.9903241394181991);
    msg.setSource(48467U);
    msg.setSourceEntity(166U);
    msg.setDestination(64208U);
    msg.setDestinationEntity(90U);
    msg.timeout = 1057U;
    msg.lat = 0.6230278396064548;
    msg.lon = 0.964337806874772;
    msg.z = 0.7385820606939764;
    msg.z_units = 135U;
    msg.speed = 0.212664513065693;
    msg.speed_units = 213U;
    msg.custom.assign("ANKGBLQXCFUVJWPNEQHXQZULNUAOKNSCOFWSMDSDFVBEPXMPLTHIIWDKMTNJQICEIAOSTWLUORNCWVPAVDMGROPZUJEBLAJGLVCJLYYFPHINPGSXLCCGSNEXDRSDETIYHQBVVEKUO");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5821249698142534);
    msg.setSource(20009U);
    msg.setSourceEntity(107U);
    msg.setDestination(19459U);
    msg.setDestinationEntity(134U);
    msg.op_mode = 69U;
    msg.error_count = 100U;
    msg.error_ents.assign("FYJLTRQSXODPHVVKLENGLRMNXEOYRGAVKFUIIHXMDFFHMDQMLUVUGBYTOGCUGINHKCEHBITWTCDJDSSZJPLETUHDQWNKBZBEFKRTNISMSPXOMMQFBOSCVAABRWMDWEFSKULGNZVRQVWXAAZKEYAGJFPZADCCRZPLEBCHMAYKJYHHWPEQGMBJRIJVOCFVIJXXXNYYQUSOXJTGYLEPKGXLQUZWUNDCNUYPAPZWRB");
    msg.maneuver_type = 11121U;
    msg.maneuver_stime = 0.9874470033617581;
    msg.maneuver_eta = 9817U;
    msg.control_loops = 1667353677U;
    msg.flags = 64U;
    msg.last_error.assign("JNUXSYWAKNRGFRFTODYMGLQRMQMMKVWRFHOEGODTXWYGGHPJMIOKXQECUTBIJSGCTUTZUZTZDGXEPVLIZANOERJSFJQXUNTULJFEBHRBMXZICVIWFUDZVIOITCLRAXDHCJNHSPNAHYHXZSFPAVWERBMBDBAWESHVKUCEXQHQNBRKKCJFKYYASWISLZPIDVKMYSKYQOPQSHPOZMBNCNVVJCLUTAGBOUCQZETJPIMGNFLWYGBYKLRXVFDOWDEPWA");
    msg.last_error_time = 0.38580784539811475;

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
    msg.setTimeStamp(0.5515767206396891);
    msg.setSource(58511U);
    msg.setSourceEntity(100U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(0U);
    msg.op_mode = 208U;
    msg.error_count = 78U;
    msg.error_ents.assign("DADFTYSMLBWTKSCNNFRAVRSZKNOMOGGXR");
    msg.maneuver_type = 50579U;
    msg.maneuver_stime = 0.8132607507067434;
    msg.maneuver_eta = 46339U;
    msg.control_loops = 3731326872U;
    msg.flags = 198U;
    msg.last_error.assign("WDSBFOBXHCBXTPTJNPTNAOAOGBXVKZFPRJCGFCJRQDHIOTIZSPHQYSVORNQZBLNBMTIVLUKYXCATBICSGFYVJJJNKWKVTHDSKRKREAGZOEEMJLHWFTHLXBUFMCDFNWAECVMALYPRGQPUIZRAYKHZXLPOMDALINUBRUVTWHBOCUVKGIWQFEPIESDJKDFUSISQWGEXACGXNRCDFGMMDZQNAPHLUQ");
    msg.last_error_time = 0.04847858175858111;

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
    msg.setTimeStamp(0.21669248981465972);
    msg.setSource(25119U);
    msg.setSourceEntity(198U);
    msg.setDestination(42459U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 250U;
    msg.error_count = 26U;
    msg.error_ents.assign("HVLRDGEXNDHTTWLRPPHTRQKYJNHAQWZCFIRCNIOODBJABXIKALAVDPPFUDYCWDBBWPWEBACLXIXJXQILMWZSEQVFZNAKBLXTAZYSCFSUWIRJKTWZHWUKSKAYDYXMIOGXHWLGZESETO");
    msg.maneuver_type = 53556U;
    msg.maneuver_stime = 0.8911725688256757;
    msg.maneuver_eta = 56992U;
    msg.control_loops = 253399519U;
    msg.flags = 199U;
    msg.last_error.assign("QJWEJEBNNEFZIOKMZLBQKDREWMWXQBTQKIAGHKSMWRXCSWWESMZDUZDAKDCISQYJKGUGGKF");
    msg.last_error_time = 0.8927071892059221;

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
    msg.setTimeStamp(0.022716138659114593);
    msg.setSource(54654U);
    msg.setSourceEntity(90U);
    msg.setDestination(37903U);
    msg.setDestinationEntity(56U);
    msg.type = 239U;
    msg.request_id = 50756U;
    msg.command = 213U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.39142010344885547;
    tmp_msg_0.lon = 0.01676403771627477;
    tmp_msg_0.z = 0.8934868011120425;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.8008739039623993;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.custom.assign("ANNLSBOHQBGSCYTUAZTOUGVGUTBOZPNGJILYTPWVWSCZGDZHFLYPCVVKGYJNNAINMHPCRZPVRJXWJQECRHINYKZFTZAAYHIERRJHJVIAQYEPCOQYFHA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35713U;
    msg.info.assign("KNQTIRXPJWOPVBGXVJOQLLRECMCSPSSFKHTNTZMHETNGWTLHGBZTEYTXAHSDVVYQNHECUFKGPUAYOUBSPUIXGNKBTWIWLEIDDKRQBJIRZLUXXWXOJJVOMPDHMWIXUFBEODCBCNYMBLYZDQVRKMJWUUMAIRHOKKMSRLACBUIPTORFVXLKOIALACMAYZXSVJWPFPYQFLRZQAKYGGREDFETNFZMFUNPQHNYJCWDGWCHGSSQZAOEVZBZQ");

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
    msg.setTimeStamp(0.6750164619951714);
    msg.setSource(37533U);
    msg.setSourceEntity(214U);
    msg.setDestination(41435U);
    msg.setDestinationEntity(186U);
    msg.type = 100U;
    msg.request_id = 46270U;
    msg.command = 192U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.3846359842362216;
    tmp_msg_0.lon = 0.5981889645376182;
    tmp_msg_0.speed = 0.2952954943522873;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.duration = 42330U;
    tmp_msg_0.sys_a = 58682U;
    tmp_msg_0.sys_b = 15050U;
    tmp_msg_0.move_threshold = 0.03467851596025717;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16752U;
    msg.info.assign("SGQIHXLTAGRKCMEEQCHJRUYGILGCANEVGPURMJPDNSMVDEQBJRV");

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
    msg.setTimeStamp(0.22181151003978195);
    msg.setSource(13135U);
    msg.setSourceEntity(211U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(242U);
    msg.type = 6U;
    msg.request_id = 47472U;
    msg.command = 253U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 55051U;
    tmp_msg_0.lat = 0.10547596503766477;
    tmp_msg_0.lon = 0.5467829976509264;
    tmp_msg_0.z = 0.0951624671753557;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.duration = 14892U;
    tmp_msg_0.speed = 0.5830743530928337;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.type = 110U;
    tmp_msg_0.radius = 0.9831594509376246;
    tmp_msg_0.length = 0.9171230372843648;
    tmp_msg_0.bearing = 0.011057303328583568;
    tmp_msg_0.direction = 52U;
    tmp_msg_0.custom.assign("SSCMLHOJBQSNGTJJMFUPTHLLBAGZCDJRJUBJRFFTWVJZQCZRBLZWPWFMXQVHZFKEEGRCRCEAUUBUACBQFQDSFPHUVPDTMOKSNIXXDOGOWSCITXKDRDSGRVNFYPLLUUEQXOWMIMWYAGGCTFFICKTERYYZSXNVHTOQO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61870U;
    msg.info.assign("UPQDXEDPGEITJRJQCXMREWNMBDZCFRTZGHEASNQELPETVTPAMQVUQLGSOHOBZVJIXFAREXRJLYZWMUKLYNCVHJNWEBOQYDZURPHICAUYGTDOVNIIJGZNAJQRFBAWSKDXOMJ");

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
    msg.setTimeStamp(0.5463099141736087);
    msg.setSource(50078U);
    msg.setSourceEntity(34U);
    msg.setDestination(13490U);
    msg.setDestinationEntity(132U);
    msg.command = 214U;
    msg.entities.assign("UOVMRGCMNWVUYDZQWKSSAXCFNRQGPVYSRHSKKBPPLONAZJQJCNPIZOLKLQCSHGDGMRUMJXYPTPAFXEILAALUFCDIVIZMDXDHTJRODSX");

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
    msg.setTimeStamp(0.5462034400536397);
    msg.setSource(64640U);
    msg.setSourceEntity(109U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(110U);
    msg.command = 137U;
    msg.entities.assign("QARGNQCTUIBKWHXTIHSFLREYZEKZJMMKISMIEVDIKLPPNPWGSDTWHMYCYHDACSNLMGOUOWJIPLOZIBAYWVNATHUDZFFMMPQCPEZFQRFBXVPOPJQJPJLGUGGBQDCWXBSGAEYUUJYZCTVDKRHFNWFDHXFOXTOLRHGHMIUCBPAEAOKZYCAJATXUTILEGEIFZJARRSUJQYYUVSTKWLQ");

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
    msg.setTimeStamp(0.4436090536022119);
    msg.setSource(46234U);
    msg.setSourceEntity(111U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(143U);
    msg.command = 68U;
    msg.entities.assign("ZWIRQAYECFHZIBOZIFJPCPVNAJNRTTSAGDTCTXHDJJXQOYPWGKTGLKHNQWPYMZMFDBIXWYQYJQFNUBONOWRMFUTJECORLHVNXCPBVWTQXSRILRHUYPXZLDQFDMSPDHCKVQWPHGXAVULQVLSHXBUSGKVQMUASSSFBIKXIUIJZDLNDNZBWOABMWBAAHFSGEEJLCVALOBOY");

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
    msg.setTimeStamp(0.11290521120811514);
    msg.setSource(28399U);
    msg.setSourceEntity(204U);
    msg.setDestination(54642U);
    msg.setDestinationEntity(98U);
    msg.mcount = 0U;
    msg.mnames.assign("NBEKCCKBYYYSZBUFJBIZMGADCDBPZVYVOSWQBFFLGR");
    msg.ecount = 196U;
    msg.enames.assign("WKRRVEFWXTYLTZLBEQSUAHUJJHYKZQHRAWEOCQROUCQVHONPLNXLULTMDSAQGWFCMGKJJSXVTIQNWPVGRMVRFTYUFDBAMTZXINJXSSGK");
    msg.ccount = 178U;
    msg.cnames.assign("UGXJDNZIDEYEMBAUZHWAIXHKNWOEOWUQWNRK");
    msg.last_error.assign("GGQKGOEHZUDNCWDSTQKLFJSINLNXFHBVATTSAEIXJJRAWEZEOYISWZGZCQOTKNFGTRHXWOLRMJUSPUZXEBFXRARLMWOUFHKPOBPPMLQAYADCQCYEFWSTREKJSMMVGWLPAPLEOIMVRHKNXBMJYUGPNBOYMQWFADPAKGQIUVZGOZYKSWHRDKJDBTYVCMNSITCBPLIHEDCQSXNUV");
    msg.last_error_time = 0.600293498184672;

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
    msg.setTimeStamp(0.9041819348851584);
    msg.setSource(58116U);
    msg.setSourceEntity(47U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(60U);
    msg.mcount = 13U;
    msg.mnames.assign("HKBCYMACELCCB");
    msg.ecount = 82U;
    msg.enames.assign("MJEKDTRNBIWOQWRWEHFOLGBKUIMAFUPPGPIUMOGACMMDBJNUKQCTCECVUDJPRFCBTNARADEJYTAIZLCIBUBFNTSHUWAVYDNYHSLYFSMCGIWNJAJTOYEECCPIUSPTSEUOWMNVTSGRKXIZDV");
    msg.ccount = 104U;
    msg.cnames.assign("ERRZZQFSOAKHOWKUBEVWOEYXCJJZWKNQHUWAMBODCPACFUTNLOQIPLDFEIHWGRZXZVKDGBEGJOACTYXEAZWXFCEQMYSFUYDGTHSGXSXMTKQYVCNTZQNAVPVMBVSMSFLMKVRQEKHFNTQGILDSXXNXORITGDTIAJLIPKSUEQHBCUVCZBJAHRPJRMUFPMYHNYPSCI");
    msg.last_error.assign("VABRTGXQMNKBNIAJVFLGOWSNYHXOEQOPLACZBJLFAQCZKFNGZWRJCWWGKFXRYTMUYIBQZPJVSHFWMUNEODXZEHNPEBNXHCXUSAZDUSZIOJBLKMQIYQWMRSFPDSRTDZJNUODUDTTOKVPEYKQYUTDAETIXBFVOZUGJTPLINVCSRLKGAIDKXLZMC");
    msg.last_error_time = 0.2031399912085028;

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
    msg.setTimeStamp(0.3300176741759263);
    msg.setSource(10027U);
    msg.setSourceEntity(254U);
    msg.setDestination(20952U);
    msg.setDestinationEntity(107U);
    msg.mcount = 101U;
    msg.mnames.assign("AXWHTEGYTPZCNULMPXBOXLUKIFIBXAOZHKMROCBQIFYRBDPGYUXEDBSQRPADVHPEZYAIALPQMKOSANPJXKSWUGEGDHUQJHFKRDVFKYCZTWFTTRJZEMQQJSWKATCTJJNGRFNQNTVETLCOIDOYIHZOCCVSSJPRLETXUNLVZASZWOAVXJZRYVYEHSZBCCUGM");
    msg.ecount = 225U;
    msg.enames.assign("WKSXMJVJYTLVYWLYQYMNRXMTZRAHQVBTAKJCUSFGNXXXBVRMQLEIZLOCISTHPFPPHMBRPFIOC");
    msg.ccount = 205U;
    msg.cnames.assign("DIOBNNYDUDSGPBQWIKDVIPAAOEAQHPRMLRHSVMACHV");
    msg.last_error.assign("ZRUYVIAAJSMDWTHUKKVTRFDSFQHPFJAYSHBLFPTAKGDZNKOTBWUKVSGEZADGNJBMOCXYHCDBQVR");
    msg.last_error_time = 0.9975457248603734;

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
    msg.setTimeStamp(0.9293467201275956);
    msg.setSource(41096U);
    msg.setSourceEntity(247U);
    msg.setDestination(21944U);
    msg.setDestinationEntity(70U);
    msg.mask = 53U;
    msg.max_depth = 0.4514913156451906;
    msg.min_altitude = 0.30413854783895455;
    msg.max_altitude = 0.6832594996708243;
    msg.min_speed = 0.16582279003401335;
    msg.max_speed = 0.2624831976630211;
    msg.max_vrate = 0.7356436757110894;
    msg.lat = 0.10697652170906347;
    msg.lon = 0.3647221633717326;
    msg.orientation = 0.13227562051215958;
    msg.width = 0.06930421964070266;
    msg.length = 0.36505253251740766;

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
    msg.setTimeStamp(0.9334437391123487);
    msg.setSource(19538U);
    msg.setSourceEntity(249U);
    msg.setDestination(36221U);
    msg.setDestinationEntity(128U);
    msg.mask = 137U;
    msg.max_depth = 0.686954568806582;
    msg.min_altitude = 0.6121208061878001;
    msg.max_altitude = 0.6950154472043232;
    msg.min_speed = 0.003987350157674041;
    msg.max_speed = 0.2876447834151524;
    msg.max_vrate = 0.8503224643538192;
    msg.lat = 0.4444172856171371;
    msg.lon = 0.9036486622254905;
    msg.orientation = 0.9335822543240232;
    msg.width = 0.37047452234500877;
    msg.length = 0.5857018957330931;

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
    msg.setTimeStamp(0.3308754647453861);
    msg.setSource(17145U);
    msg.setSourceEntity(70U);
    msg.setDestination(18418U);
    msg.setDestinationEntity(112U);
    msg.mask = 164U;
    msg.max_depth = 0.9714070549405035;
    msg.min_altitude = 0.5263771282214839;
    msg.max_altitude = 0.20278274770791083;
    msg.min_speed = 0.4106197755967177;
    msg.max_speed = 0.3508281839157642;
    msg.max_vrate = 0.2737665562539934;
    msg.lat = 0.7177201470683983;
    msg.lon = 0.9525249863913137;
    msg.orientation = 0.12247473929146901;
    msg.width = 0.3384247724671736;
    msg.length = 0.01969803907126244;

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
    msg.setTimeStamp(0.433916386975875);
    msg.setSource(55418U);
    msg.setSourceEntity(114U);
    msg.setDestination(22528U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.7540314906354646);
    msg.setSource(1186U);
    msg.setSourceEntity(46U);
    msg.setDestination(56872U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.33615074889384366);
    msg.setSource(20354U);
    msg.setSourceEntity(64U);
    msg.setDestination(34653U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.9368894653455425);
    msg.setSource(21429U);
    msg.setSourceEntity(17U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(167U);
    msg.duration = 20957U;

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
    msg.setTimeStamp(0.7575745209224197);
    msg.setSource(59178U);
    msg.setSourceEntity(75U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(148U);
    msg.duration = 40525U;

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
    msg.setTimeStamp(0.6098554823604129);
    msg.setSource(24923U);
    msg.setSourceEntity(77U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(235U);
    msg.duration = 41609U;

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
    msg.setTimeStamp(0.052659830014839426);
    msg.setSource(44130U);
    msg.setSourceEntity(94U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(231U);
    msg.enable = 204U;
    msg.mask = 310760843U;
    msg.scope_ref = 3998544582U;

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
    msg.setTimeStamp(0.1615423595530513);
    msg.setSource(17134U);
    msg.setSourceEntity(215U);
    msg.setDestination(33846U);
    msg.setDestinationEntity(133U);
    msg.enable = 34U;
    msg.mask = 1192888666U;
    msg.scope_ref = 1337050609U;

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
    msg.setTimeStamp(0.6226623963072151);
    msg.setSource(27514U);
    msg.setSourceEntity(104U);
    msg.setDestination(32122U);
    msg.setDestinationEntity(198U);
    msg.enable = 112U;
    msg.mask = 2505935052U;
    msg.scope_ref = 4127073175U;

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
    msg.setTimeStamp(0.5302191002821784);
    msg.setSource(34619U);
    msg.setSourceEntity(159U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(4U);
    msg.medium = 48U;

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
    msg.setTimeStamp(0.4950905549844853);
    msg.setSource(59135U);
    msg.setSourceEntity(134U);
    msg.setDestination(60791U);
    msg.setDestinationEntity(156U);
    msg.medium = 151U;

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
    msg.setTimeStamp(0.7293279160076915);
    msg.setSource(5685U);
    msg.setSourceEntity(146U);
    msg.setDestination(63087U);
    msg.setDestinationEntity(105U);
    msg.medium = 16U;

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
    msg.setTimeStamp(0.2745109703326777);
    msg.setSource(41668U);
    msg.setSourceEntity(217U);
    msg.setDestination(719U);
    msg.setDestinationEntity(234U);
    msg.value = 0.07774343278359341;
    msg.type = 161U;

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
    msg.setTimeStamp(0.7964487346296674);
    msg.setSource(32232U);
    msg.setSourceEntity(23U);
    msg.setDestination(23750U);
    msg.setDestinationEntity(212U);
    msg.value = 0.11520187425727524;
    msg.type = 105U;

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
    msg.setTimeStamp(0.7213378893803027);
    msg.setSource(15504U);
    msg.setSourceEntity(211U);
    msg.setDestination(20227U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9589585430220723;
    msg.type = 114U;

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
    msg.setTimeStamp(0.9104044457464594);
    msg.setSource(29958U);
    msg.setSourceEntity(167U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(3U);
    msg.possimerr = 0.11474624695109581;
    msg.converg = 0.07417639016838162;
    msg.turbulence = 0.16874698982038572;
    msg.possimmon = 3U;
    msg.commmon = 224U;
    msg.convergmon = 148U;

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
    msg.setTimeStamp(0.30827431037139175);
    msg.setSource(44359U);
    msg.setSourceEntity(143U);
    msg.setDestination(7403U);
    msg.setDestinationEntity(119U);
    msg.possimerr = 0.8330296377401835;
    msg.converg = 0.7768938778453416;
    msg.turbulence = 0.3018284635598457;
    msg.possimmon = 56U;
    msg.commmon = 186U;
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
    msg.setTimeStamp(0.5990345089580863);
    msg.setSource(56582U);
    msg.setSourceEntity(60U);
    msg.setDestination(59118U);
    msg.setDestinationEntity(182U);
    msg.possimerr = 0.8825325666670513;
    msg.converg = 0.3825080367696253;
    msg.turbulence = 0.34313428171927896;
    msg.possimmon = 174U;
    msg.commmon = 187U;
    msg.convergmon = 198U;

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
    msg.setTimeStamp(0.8739497579268745);
    msg.setSource(55791U);
    msg.setSourceEntity(178U);
    msg.setDestination(26790U);
    msg.setDestinationEntity(81U);
    msg.autonomy = 115U;
    msg.mode.assign("QFPRNEWLMJEKIDTLUZFAFWOOJNCNXGVQVPVPCXRZOHSHGRAJMCH");

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
    msg.setTimeStamp(0.00591605279023899);
    msg.setSource(44192U);
    msg.setSourceEntity(149U);
    msg.setDestination(39699U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 178U;
    msg.mode.assign("SUSHGAZMDTCAHHLITMRANLFCUSUHLEDUOXUNLMQEGIKZYEHVRZISVLDCCMOGFBJNBPXRFWGFBAHAWVROLBTWDKWPNFEYEOSPQBDOJTPMUJUIZEKIRXRCJDZMPITBBGWJYIWJCDWBOQQXYVLLXUOHFRGVEVIKNOVISZTOEKQKEASBBENMQNDPUQGIN");

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
    msg.setTimeStamp(0.39170911897919813);
    msg.setSource(12887U);
    msg.setSourceEntity(187U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(75U);
    msg.autonomy = 208U;
    msg.mode.assign("XWXHOGAFJONYGCQLJWRLZFPNICEAWQRQIJBGJBDDJHCGKQOMZCPRCZTHHGVOFKADOMYESTC");

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
    msg.setTimeStamp(0.00431796454739275);
    msg.setSource(57247U);
    msg.setSourceEntity(16U);
    msg.setDestination(8468U);
    msg.setDestinationEntity(208U);
    msg.type = 8U;
    msg.op = 229U;
    msg.possimerr = 0.023806104346639767;
    msg.converg = 0.6463569240084798;
    msg.turbulence = 0.8779174897227415;
    msg.possimmon = 6U;
    msg.commmon = 82U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.4842925940131281);
    msg.setSource(9647U);
    msg.setSourceEntity(168U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(27U);
    msg.type = 225U;
    msg.op = 84U;
    msg.possimerr = 0.7635931565440226;
    msg.converg = 0.08967697829466237;
    msg.turbulence = 0.18580667014041052;
    msg.possimmon = 153U;
    msg.commmon = 210U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.4845255554788699);
    msg.setSource(1945U);
    msg.setSourceEntity(70U);
    msg.setDestination(38726U);
    msg.setDestinationEntity(31U);
    msg.type = 54U;
    msg.op = 44U;
    msg.possimerr = 0.49266194845284483;
    msg.converg = 0.015267979599792314;
    msg.turbulence = 0.8318058259665331;
    msg.possimmon = 82U;
    msg.commmon = 163U;
    msg.convergmon = 250U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.8108617165771115);
    msg.setSource(12773U);
    msg.setSourceEntity(47U);
    msg.setDestination(57020U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.33237663954710295);
    msg.setSource(58808U);
    msg.setSourceEntity(53U);
    msg.setDestination(36005U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.2604053192691236);
    msg.setSource(23042U);
    msg.setSourceEntity(98U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.3487571107814831);
    msg.setSource(17592U);
    msg.setSourceEntity(17U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("YATCQZLPVVUOHBNDLVQHXQPJOLEPEHCKSSXKZVQCTHFYTWGFCSVQZSJMGRK");
    msg.description.assign("UYHXSYOVVVUQZXDWZIJONKOFXLJEPYQTXMCPTWVCOQ");
    msg.vnamespace.assign("PQTVMUQPWKOIUEOIZBYRARBVDPCEIJEZCYZSPHZKQJZXJDDQZHXMMTCADVTHNTHLSECBHYYFRLGAIQAMKDIWMXTOPRGFHKAKIWEEAGCYMYTBWBNDZUNVAWKSXBUKXGJMQPQSNVAAYBLWKGUWCRKZUGWGNFOTCIHINUXZQFHUSRROLFORYCTNFFTSZJCGXQJHEJIBSLDEPVPSJYRVAVOVGODWKMBXCFMLSONLVSLLFFPJRDUENXDMYBT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZSBPCUVBEKLIZGTJNBPOCGOTVYKF");
    tmp_msg_0.value.assign("PINICLDHDAUKKHVGEGLVGCUIJUWOMNMCNJMHWLYSNMSHBFSCWCSQPFVSNNHIZRKTNJNKHMQEBEPYYMJABBBZGYZQRGETLZZOKKJRXWZKGKTDQUVEIFBIOIBRYPUWPMEKRVPWXQFTUXFAJOEEXXOVFOXMPJOQFZAVVRZYUIFSJOGIPNDRDTULZJFQGLHXJTYAGSTXWYBAKWCNRELQTAWCCCAHBSOSMPSQTLIDOLD");
    tmp_msg_0.type = 173U;
    tmp_msg_0.access = 67U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KHCFUCMYBQTASFPHWPVPQDVTHOSJZVJPAVNCCPELWSWONJABGJJOMIWNZXNZEDIEMYGDZOSHCRGYWLFJGYPEJQBYQLJIASKRUZKTOWDYQBDNSBQKKBBOCHIASLGJYUMWYHIHZTTFVUPNMLDVXXKIGNNFARMZMERLNBTZGTKREULLF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HVBZSZPGUARJCYJFLUALFOPTRFSMHKCYDQEOTRSWZHRCKPACQYOWOTHGLGMELYPFWOUTGJZLXZKXNKSLMNESJVOIBPHXQXSAYBTXQVCIRHILNLDRIAQHHFKVGDZPGUNUZCIFYPQDBAJSRJ");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.24835704232551548;
    tmp_tmp_tmp_msg_1_0_0.speed_units = 218U;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 4529U;
    tmp_tmp_msg_1_0.custom.assign("SUETHCBBEVGZAXZMDNUSHUUJRJAQVOMTNHJIQESWTEWBYFOSNDJGYNNLXPIXHXVYGDRIXYWQVGTQPYMMKBBKMHCDTHLAWHAAJJPBJFWCQIPIPVNGUTZZJWKRCADBSSPFCS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QUWQGAAMZSKVSOGPBCFLYNPBZHEDCHTCHZWXMODTNTRPRSVYVLHYEJSETGLBIJYXMUCVXYIMCSYEFJUJEBVBXXIAQJSILXUKVPKPNGFWSVHUOMFNFRDWMLIYGDRHOAMWLMPQKINRKYWLVNXIPDZUTRXGUNYEUEFTTPAZLBKZWLOXFUYXAEDBSCDZWCTLGEHR");
    tmp_msg_2.dest_man.assign("QCILEURJYBEYVWTADXCRUBHSCDBXZUTMSTJOTPXYUCROIUWBJAYJWZCWHVPEWVARTICMZNWBFZDTDGZVLVOAEJXLMPSXGKZYDNFTGGXKIVPJBJFIHHGHINWTK");
    tmp_msg_2.conditions.assign("NDDCLOANQYZCLJAHKRRVUKZMQFAXAVBYEYXWENFPPYHRXGTOUEZTFXSOIZQXFUVJGECWZNSMPJYXCILSRWRJBGQTFVLWSCLNAGCYDJOFKBTKXMJEQYTBWZRUFAOIXMKHDUKLFSLCCBQWKIDJGNMOSRHMTHPHTJSGQQHMHUVEPYTCIIVCGBOGPLMTMW");
    IMC::RegisterManeuver tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.mid = 36787U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::TrexObservation tmp_msg_3;
    tmp_msg_3.timeline.assign("TMGWLIXHZFUOUYDLIVNWEPHTNBPCYBZPFIMKCMEVQOCHKRGDZTXDGVASPOSNZYHLAVEBCELGLRGPNGKLKLKUTTJEEJXCWCNVOSGVYCWRMIBOPMKPNUDFZJYESOIRZJBDJJVDABHASBQIHKTCORXQAIAXTCXFXNPZKWDFXTZFSWLGAUVQRVRQLZPPHYQJGYITOBMAOXMBEDRBQWSULZUJCRF");
    tmp_msg_3.predicate.assign("DUEVTTWICMZGHYQACQBVONGLQOZRDGQEWUYSKJSIFJDCPY");
    tmp_msg_3.attributes.assign("NWABVECUGHQTCHGGUTPUBWITSWHJBRSCLFPGBQILXQVCZZVODOGPTCMGWIMYWAOLVNFQSRCYJCXJPHLMRTNOKQNHYGSCEJVZS");
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
    msg.setTimeStamp(0.5390254371671741);
    msg.setSource(45331U);
    msg.setSourceEntity(75U);
    msg.setDestination(9786U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("ILKBWTFHIPRYTFLCJSNXNXQVCMHRPKJLRBPPRBYAVAEYRXOTNIAAWHTOIGCSNOAIDVWTSSGXWHNUGTOUJPXZUBMVHKLDXQWDALREPOZZTWPZMHGDHGIADTEVNXHVWHVIVLXUMIYVQSAFBGELQCULWIXMSYQOBDPJJVLGZKDYELEBCUJNURNUKPOOFNDGQWFUB");
    msg.description.assign("SDERIPTSZASUKJYWGJULYDECULQMCFQQIWLUCXAVDMLUEISQCIGRVMCYRKRRHIBFGGAHJZYSDIBHLMQHKBFBZRLZAYGHPTAWOYVMTBYMXBCNRFKPRZTBOXEHTLWVWHZEKQQFZDHAEGBCNUORNCJXMOYNNDUPWNEUKIOOWWKJANTPSKTSHYPCCXLPABWGOXLFZM");
    msg.vnamespace.assign("KJHNOKTJGCSCPSDPAMDHSLGJZZNINFELLBWCAPVGSRMWFOETQVPZCNBJTOFSRXWJPYOALJDQUEIIQXLYVYOCKRVESLHZTUAMZWPFWXTTCNNNUWKKKSRUVAPTIXOKQYWYYVB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GNLRNBTAZQEWYUIDLDHBRHXDXTIWIUOQRBVKQAQFBWZQBTFNPXUXBKEUVEODDWXDYLVYGWFOIPSJYVRCHBCLJDFTKYJSGCICJRAQNQGWCPOCSPTENUSFVKTCEIVRMDXHEOFWONPMAYSZLDAPL");
    tmp_msg_0.value.assign("RGHZEVIOEYONWIRYKYKIAFGAFCIFVBOYUSYBEJNLRQHLOQABXOTZRLPCNCWNDQUPKPZGIFATFDPWGWVVRZZCPFGEDTBMBUKWHSMSCRFJJLXKUJZIKLLHDBEEVPJHAKQJEXRYDGOEKYANXXEVIUYSISANAHPTFGPCDQQ");
    tmp_msg_0.type = 191U;
    tmp_msg_0.access = 170U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UGCJWSPCIHMVKFBFREKJSMSUN");

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
    msg.setTimeStamp(0.3684059384477737);
    msg.setSource(6073U);
    msg.setSourceEntity(224U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("LRFHLLHPTPZOPYWQYTTCNABRQZXUMLQSWYGERAHKPUYIBGDZQMVCEAEOSIDWTJSVLUCOLNUCWJPZZBZYQXWIKDIHKOAJFXOQDBGVFHPRIGJRTFSGDDHKKTXCTXKCTTJNSBOCGUEKSEANKGVVFOZYENWIIONDJOMPHJQBMTIYQWVH");
    msg.description.assign("FLXQZTHJZOLYZKDAOWOWPBGPLIZYSNVGVMDPJYTGXEHAZMSPLGCBSJWFZTAIIMPAUZDXMOBUBEVGFPAERXURHIYMPQHOSTHWGWVKEZFLBFBLPNCYEWXDUKJGSDRGKCRKOAXBONURXHRJVDZCDNXEGUCFQQWSRCZEVQRDYCONUOL");
    msg.vnamespace.assign("ULYCCJOFQESZCFRGSWGBHGHGZKODBPATVGBUKVWPDONIYZXQKLLMJIZXFKYATKRYRZYOBLCWEPZKOQMGQTMIIVTTQPNAFSPNMXTLEUSJBBVLDSHGKFHEXVNQXPHIJVNZOQ");
    msg.start_man_id.assign("DLELADJOYIERUWMNRTGAZPSESEZKGOESWLIXBIHBGNZSVZQXDUCZBYNSTANMHPXLNFPIBULWBGQOMXLYKD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RWFVPAKZFROVNDCMJLDSGDDVIQOXZHVCFMINHGEQYXAEHQKDLUFMSOJCLTPXZZLQXYMWUZQOYGPVSAPIJMCYIHFJHDJLUBPXHEFYJXUUWGKWNMWSQMCPXGVYEBBZVZIRQMEFKGDZITJHCANEEEYUIAOCBIUWOISKSMYNJBBLFMTDKTBJDHNWRHKURCOEFNQTQRQSWKRVAALDFOXXTJSKOZNGVBNAHTYTUYERCPWIPTLAOTRUBSGKSZNLBWPPGC");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 4119U;
    tmp_tmp_msg_0_0.custom.assign("HSUBZDZPIBISKMRFYEZTWJCJODBRGEKYVSXRAHQFRQJZRYSKQDKPLNMWBTIVSDEIPTHKOSNQQNGLGDNERQOLLBOVYIPVQGUFIVMQTHUXJFWRZNJALXGXWJOZCNAIUEEFFVJMOFCOEDCCPSDSMHHCWYKAIMHMPNFKOZPAXJHLYYBZXEQOYMNOKZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YVZDYJKKPHNCVVONBUPOXHMELYAKGLUXOKRXIXINGYIHEYIV");
    tmp_msg_1.dest_man.assign("NEZTBOIGVYQQTJAFYHBLNPRJHCPZMDSFFPMVQWPEYREDHZYOGBOVKRXPFCIIERTCWTFBMNQIWNGJZNFGMQYQXXBHKDMCOEYOKUVCMABHVLCTVDCGWNRNAETMGXKULZXZDEKUGOUJWXJJANSVPHUTXJCKKQLRCWHDLOUIZXZEYGAAPRLDPWLOSBYIUFUAPKRHZNTGJUWALSYTLZNJQHRIOMICBTRWKSBQSD");
    tmp_msg_1.conditions.assign("ZPYSNTMQTHEHMPLDYHBOQIOAXXCEPWYCQTWFYLHHEPIUJPGVWQDYLZXEGGVEHNOTZFRNDENRBJTAFLCOBEKRXLBUIIIHNOXVRPTKCTVNMDAYS");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.08911296117171008);
    msg.setSource(48238U);
    msg.setSourceEntity(149U);
    msg.setDestination(11703U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("QGLNMZAGCHCXNBFUVZPHOMSHEPJDZIEKSFFABMDOHHBFXXOWVVCFAPFJYGLSNOCWZSMLCPDIAVEWXOYGIQS");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 17078U;
    tmp_msg_0.lat = 0.2718420010948861;
    tmp_msg_0.lon = 0.9940904219013936;
    tmp_msg_0.z = 0.4189115082036764;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.pitch = 0.11071421821081706;
    tmp_msg_0.amplitude = 0.5668350681268878;
    tmp_msg_0.duration = 42717U;
    tmp_msg_0.speed = 0.9152725321792902;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.radius = 0.016028369927562958;
    tmp_msg_0.direction = 100U;
    tmp_msg_0.custom.assign("BTRRODXTXBWJKTLPFRFXWUJJWVBYABNRWKIVHTPSLNMGHNNICKXOSSHIFJPLHWUUPOEAGINKJK");
    msg.data.set(tmp_msg_0);
    IMC::PlanSpecification tmp_msg_1;
    tmp_msg_1.plan_id.assign("CRORQGJQEOVWGFYMAUWIRVMJBTLENTFNCHALRNWZPZUXBQLJBYFUKLXMNIISDOWRJFKQONZYFUYVPSAMJNVOMEOWPKXBNESSDXXUXPMDFZSVSPPVTBIQJYGKMUYGJZVIABQAGHCKSTERDLZLZEBGEGFUPTJDKQYGPHDGRDHTFNUXTBBJRDTCCNAWYAQLAVWZHCGUWEDQKQSLDFBVHOUHWAXOMPH");
    tmp_msg_1.description.assign("FXZYIYNJIWNMFDOV");
    tmp_msg_1.vnamespace.assign("YHNFKQREVHALECBTSWVRCRA");
    IMC::PlanVariable tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("UXYOSHZVSKKCFAJLAVAIRHZLGSMVVMUQCMKREFHQHIBYJAUAOBWEWSMHUYYDXRSZJHNPAMKIXDPWFDPACNWLLPITVEXCTVZKGSAMCFSIIGGPVKOPDVQRKSNXDYHCLWRGPEOQBNGEWXVBXABCZJROFOOEXJOTGYFNBYJJCVFMRMHZZLQFNWZFRFHAXNDEJTDMCTLZIUWLLUQPSDTIYIJNTUQGHWNB");
    tmp_tmp_msg_1_0.value.assign("WZEUGOBFGSJRIZZAQIERTKXHIMICQSCDNEWIKNOBPUAHRSTTLXERFREKXUFJBNVQMHKIASUNYXLPYPDNHJEASTKEQPGKMXFOOCBTQFLCMWODQZDALAACWQZUZAHJHRJMSBPSGLHBPAXVOMBFTNSRGTYMLBJYVD");
    tmp_tmp_msg_1_0.type = 60U;
    tmp_tmp_msg_1_0.access = 175U;
    tmp_msg_1.variables.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_man_id.assign("XPIVWFPMJYKQTSCOPQPGCLYFIFXXJGFXPKLYDCBQZ");
    IMC::PlanManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.maneuver_id.assign("ACHKGBDNSRWPUCNNOETGYACEZDEMFXHRRQKHZPFTSMYTYUTSCBRLJQYXGSTEDFFRCLKLBN");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.group_name.assign("IZLADEYJMKZSRPQFJMMUL");
    tmp_tmp_tmp_msg_1_1_0.formation_name.assign("KNMACQBPYVITSQVUPDGZQGBNLRKBMWTISQGQUSINFHKUZNNZPYZGMRIUJDNSFORXQYSWUOHPOWAYJRAMSSEYEMTKYPWVPFLMRVUKTGPLQAJIBGUBJHWEUARVTXNWJAFTXFKKBNSYYXRQZCBWVFLZSFNOBRCCMBMVYEZOOXIJGZIMGSFLGCMPXOHHTRINHJLCETFAHQWLDPCJAEHCVJFLRQKZZKVXKCHXOLAIETICDDG");
    tmp_tmp_tmp_msg_1_1_0.plan_id.assign("METJZLHRRGHDUDRZKHURWOJWLOTOGESKLLOBDMPVJ");
    tmp_tmp_tmp_msg_1_1_0.description.assign("BHQHOUWIQHLWILWESNKQZJBYRBAQMJMPODLEYLYCMUGNZWBVEBQTLKDGLROUFKSGXQDJWPVFBTMFAFUCHPFEIAONVFNEXGWOPSXRCDHPKRQJOVKTCMHYEYIHJZYVEUFJEDRYTIRTMGXORJTLFUUMRFZPCK");
    tmp_tmp_tmp_msg_1_1_0.leader_speed = 0.3487568714603021;
    tmp_tmp_tmp_msg_1_1_0.leader_bank_lim = 0.7297174968317166;
    tmp_tmp_tmp_msg_1_1_0.pos_sim_err_lim = 0.9429256612887544;
    tmp_tmp_tmp_msg_1_1_0.pos_sim_err_wrn = 0.3968629716614992;
    tmp_tmp_tmp_msg_1_1_0.pos_sim_err_timeout = 54459U;
    tmp_tmp_tmp_msg_1_1_0.converg_max = 0.6669195005305764;
    tmp_tmp_tmp_msg_1_1_0.converg_timeout = 41844U;
    tmp_tmp_tmp_msg_1_1_0.comms_timeout = 20676U;
    tmp_tmp_tmp_msg_1_1_0.turb_lim = 0.4407561350719633;
    tmp_tmp_tmp_msg_1_1_0.custom.assign("YMTDAEUQFEVWIABJUUMCTJRJLAKOUBWGNOXOYKNBFJBRMVRATFSQVHSXOWZBBSFUNTCUHMPHPHECHMBNCUXYRZSFGTDLWFISKUNVSCJLGPXLPGOEGSYAMIRHDQLVXPQJNAWUPUHDZEYTDMIARNFWQYWPWFMLOAACNCB");
    tmp_tmp_msg_1_1.data.set(tmp_tmp_tmp_msg_1_1_0);
    IMC::Goto tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.timeout = 5790U;
    tmp_tmp_tmp_msg_1_1_1.lat = 0.5925070482546761;
    tmp_tmp_tmp_msg_1_1_1.lon = 0.2892521286826356;
    tmp_tmp_tmp_msg_1_1_1.z = 0.7209406913943249;
    tmp_tmp_tmp_msg_1_1_1.z_units = 15U;
    tmp_tmp_tmp_msg_1_1_1.speed = 0.27237719054759657;
    tmp_tmp_tmp_msg_1_1_1.speed_units = 99U;
    tmp_tmp_tmp_msg_1_1_1.roll = 0.5712592034306627;
    tmp_tmp_tmp_msg_1_1_1.pitch = 0.04869009628176746;
    tmp_tmp_tmp_msg_1_1_1.yaw = 0.12401307702188147;
    tmp_tmp_tmp_msg_1_1_1.custom.assign("DZDRKSFCPTIRLMVLFEJJDVAURWYWGCONSPGTZXHLXLXCWGKOMMBUJLWIVKEYNK");
    tmp_tmp_msg_1_1.start_actions.push_back(tmp_tmp_tmp_msg_1_1_1);
    IMC::Calibration tmp_tmp_tmp_msg_1_1_2;
    tmp_tmp_tmp_msg_1_1_2.duration = 36250U;
    tmp_tmp_msg_1_1.end_actions.push_back(tmp_tmp_tmp_msg_1_1_2);
    tmp_msg_1.maneuvers.push_back(tmp_tmp_msg_1_1);
    IMC::PlanTransition tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.source_man.assign("RBHWYCQJTGWEGKGRHSPDXBIPZBZTONLEJHJLVNKQEKMHQFCCPTKGMOANHVGELAEFDLGMMDEVQSDGVQZIATQVBATYZVIWTPKJSLJXOJFWPCHLCBEEYDXVIQPUXAPXOSAZOKWFCOQTUTWIHXVYOYSJPIZJHKDORWCBZKFYVLXIGUDNZMMNNSFKYUDEAUTSPOACRCYUGBQSHGTBRLLYXBDQJNUAJEYMRSHUV");
    tmp_tmp_msg_1_2.dest_man.assign("HDGLATZIUWTAYWKHCNTKJMTHMVQUWZWJCXDYXMGIMSUACQRQHNYYXLCLOWXMYEVAHNKJFNDSWWEVBYZIKMQAQUBMIHYQPGFJKRQDVKEROKBGVOSGATRGXLMEGXBCLBTOAINTREXLYJPFFZILZBUEJNDBKYHCRFTHJJRFPIISECJMZRKNDGRPDVBCXZHUWWDWBQFPNFMHSOOCZBPXEIVOAVLGGFSDUUVNZJQOFPYPIQLASDOKUPPTELERCTON");
    tmp_tmp_msg_1_2.conditions.assign("RZFZMAIPEPHUCGA");
    IMC::VSWR tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.value = 0.20508967482110385;
    tmp_tmp_msg_1_2.actions.push_back(tmp_tmp_tmp_msg_1_2_0);
    tmp_msg_1.transitions.push_back(tmp_tmp_msg_1_2);
    IMC::GetOperationalLimits tmp_tmp_msg_1_3;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_3);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ManeuverControlState tmp_msg_2;
    tmp_msg_2.state = 103U;
    tmp_msg_2.eta = 22142U;
    tmp_msg_2.info.assign("DOFUPHRZPTDLVMTLJBNOEHVAPAYQJBCWFMISRGDMWNASDTBNTNCQEUTKOUQJFPZQLAJUCJCFEFQSNBOGWGZZKTKHFUGVQLHDCLMQZWOFEGXRGDXLIFBAQLJRPCPKJURGHRNRKYXHPZBXHISUVIFUVWQKMGBYYWJKAZMIMOPSGADCJGIEYAXYTEFYPYMZUIXRDIBHNWEKNCQLAVDYNWSLBEKKISZ");
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
    msg.setTimeStamp(0.373701148413473);
    msg.setSource(42773U);
    msg.setSourceEntity(65U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(6U);
    msg.maneuver_id.assign("HOMFWDLKOFLYTQSKTRPDDHARYNRGWGDEDJFETVOBVIAXTSEXKXLEGYLVUVWDNOEOZCORXMHAEFUFZSLPQKYTZHRRSIUHQKTMHKIIRABYCNBGBSUKZMCNQJEIPNTVMIYFHNTSXHEJCZVJECPOYGLWURCMZGOZUZDHPWSTAQONQJTLMYIYGMYQUHAGVWKSMCKLLFWLUADJSACJDW");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("QOJUIBKDKFAHNAPKXBLAWOGNZNCSETWHVPFQWHFSFKUMHTUYEFBUCGXQDXTISUBOJARRUEVOJSQBWOCDELCGKNASJBPJPLMXDKRBDTIHGHRAJIMCFXEAUUXPZJMDTIAVRHQOHFZTSXTRMENUFDIVLSGYNSDOVQYJMVWPHDLTWZNGNJYZCOFREYRXLNBBEYQWNMYPVYCMDMGICRQGYZGUAQGLVPSPRPOLIFHKIELITTJCXZEWCKWLVZZKAO");
    tmp_msg_0.formation_name.assign("HGYSHFZFYPFSLCRPCDXBPPGKUHJSEYSTZLUGAAMHZLVKYPFJUAOHSCWYDPOECDKVFYGMJCQNNEBHXAZIKJSERQBKDTFISTHQUNLJVBXRBBWRLAQSGWPAHIVDXUVYMIDDIEOFQX");
    tmp_msg_0.plan_id.assign("IZDDZPYGNVHCJVLDHHFMRMPFIYHQOGWWAULIBZOQYGKWERQPELENOAUSKGUXGSHUQCNBAROWMMIASIUWRTXORNWFYYXCICPTATSNBPGCGCCPJTHBAKJKSVDQUBASPETGYJZFL");
    tmp_msg_0.description.assign("SXJEUACDTAVNHABBAXKOLLFHQJYZQVOAUIYSUCAKJXGGOMNNZKUQCGRTMIXTRNIOTUKMRFXEVSCTKYXFMNTQMUJDJBZREPQLCCZDGGERIYPYIJEOYEF");
    tmp_msg_0.leader_speed = 0.2612024459306934;
    tmp_msg_0.leader_bank_lim = 0.8896896684594734;
    tmp_msg_0.pos_sim_err_lim = 0.2680954428109026;
    tmp_msg_0.pos_sim_err_wrn = 0.2056508063753455;
    tmp_msg_0.pos_sim_err_timeout = 58081U;
    tmp_msg_0.converg_max = 0.49346721934827065;
    tmp_msg_0.converg_timeout = 12820U;
    tmp_msg_0.comms_timeout = 63677U;
    tmp_msg_0.turb_lim = 0.2892935269847652;
    tmp_msg_0.custom.assign("NURFCANRKQWAPHBWJQKDGPNERZKJTSNEDYXBYMWTZJOCJYWHMAYVVSJPQVINZGNJPQAOCAXMKGUDSNPJYLJCOPIFKCJIVBSFQGGXXZHBTQELSTZG");
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
    msg.setTimeStamp(0.5647591473688849);
    msg.setSource(39824U);
    msg.setSourceEntity(134U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(32U);
    msg.maneuver_id.assign("JAFHMNHZNOLABDDXUGOFLWLCPYMSMXYTBLFIDBJWUZDDSQQFYBIRKVUAUAUHLFUVEPAPJJSJYXRMQNYGKFKSSOLOGOWFNGTQAEKLCHFPXVYMXEBVPIHKCBNSKDSHFOJEOHYFUULCDIRDBZWZACMXRRWVGOGXHKAGOSQXTEYQQHVVIPKCMQWWBPLKTISRNBDCNNIVUEKJLIMEZWRUYVEPGYTVMQCXZGCJETNTTDIZXRRQMROJIWB");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.39337215324936325;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 47601U;
    tmp_msg_0.custom.assign("BCHBWKQUTNIHGDLQXICYMGRDRYJEVLMVMOPBPAYZFMJZUDIOCJYBJFRTEWGSSHWUSUTXEZNRTKQEJCZHCQBTLWPCYTNUZEDVILNLSBMWP");
    msg.data.set(tmp_msg_0);
    IMC::VehicleCommand tmp_msg_1;
    tmp_msg_1.type = 167U;
    tmp_msg_1.request_id = 25082U;
    tmp_msg_1.command = 11U;
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredRoll tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.32254282281351665;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 23504U;
    tmp_tmp_msg_1_0.custom.assign("FEQNHEOTMABEPOFWBJTLMGGSSXLRGUKWVLDVUXGFGHZDLENIQQCVAJDAVUUIJDOMMLVDKRUHJIWPZUDWSMRQJYPXFWDUIRYVISSKOTQNTXONTDLSMHGTSOFIAKHIOACUWZCMCYQKNFHAYKLYJNDHCKGWTIUJPBQJDZPCGESTJCLOAKEEXRBXFZEFAVMQKBRPMZKHHLFBIBFSNLMZYPJNEOAPUCH");
    tmp_msg_1.maneuver.set(tmp_tmp_msg_1_0);
    tmp_msg_1.calib_time = 11276U;
    tmp_msg_1.info.assign("BDVDFEBWRHQPFMFIOJ");
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
    msg.setTimeStamp(0.32702004070720114);
    msg.setSource(41062U);
    msg.setSourceEntity(65U);
    msg.setDestination(50411U);
    msg.setDestinationEntity(133U);
    msg.source_man.assign("IHRIGABUJYQIOEWGFKJQHFZWFXLSEGEUNEJVCADXFZBKVPXQIAQSBTGOARBSGENCYWCNIULQNJFRWGDMCMBFUMMJMXGSBLHWDBYZMPKEQUGKHJJWQRWQTVYIMDFDCLLAFOXTNHDFOHWLJLIKURZRBALVMCXGYYSHHVT");
    msg.dest_man.assign("FUQOXQMFAQTDGLWSAQBWRRUKMAGOATIYIE");
    msg.conditions.assign("SFKSDITPONTYOABMPOXYMMYFHQRGDDEEBXEEVSIUKFILPHJNLKNRWXBFCAVPQYRMRYSWLZOGSLRZFYLBAXYLCQNAHOZNEUZIUPDBQFACTPHTWFYHCNZYRAMIRXPFATAGJG");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 130U;
    tmp_msg_0.id.assign("CTHGFSCUTXXKOHHQIBRMQMWCWOEDCAIUCVXDKADKESOXNJIIPOIFEWZYMYFJCYIZZMUYUZBVJTNEBQHLMEUSDWATCOD");
    IMC::IoEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 175U;
    tmp_tmp_msg_0_0.error.assign("OZIXUJAXKYUWJMLLTXIHFACAEYDHWKNISWQKQNBGWQXAJRHVCIDJGOLWESOGFIWXRTWVNMHLRGSYWBVIMALTSZRFQDUJDYLXWJEKUPNZEMEQKZNTZOMGOKGZMJUTFFPHRBNFQETZQXLLUYPYCJCDKHDPBXVAIMPB");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.24765834259794672);
    msg.setSource(17235U);
    msg.setSourceEntity(76U);
    msg.setDestination(32394U);
    msg.setDestinationEntity(205U);
    msg.source_man.assign("GYNBTCHWIDIPGJTJBNWLOBXVNUTFNXDEPRQIYAMQXZSFBBIAECTQWIGLOEREECKQFEMCNVVXTGKZPIZJUPWGMSOXMLHRECZYUODDYLSEPQSREAAFAWPNUBYCJHTOADGSMTNHYGYTPRLIKDZDKYLSRFVMJDAZAGSKKQQCMHMUPAPJLLIZLONHKHVGXSWKKWFIWJQQUAPUCFQVMXC");
    msg.dest_man.assign("OIPTGYYJRAAWFMMYQAIXHVSDOHBXQPZTSWAWWTLJDLQGHUXKTBTATHGDMAKDBBE");
    msg.conditions.assign("PNAKPVJJJCCESYZBBOIRKDDRBAEONIWUYEWPGJZNLGMMZBQCKJFIHEDJKPRQQKNYFTAOWEVCKFSWQPAOPNOQXYEUSVWZNULSLMGRJFTHVXFZTQCGNOEYZBTQIOSAUVMXAGRHUHILTGQXLXDZGXISKCTCTDLKDAPXSHEIWHTHRVFBBEMRSUHIMQWIXNXPCVLEFAAHRUVBATMUDRYJFFDHMQWBYDFZ");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2332515077U;
    tmp_msg_0.start_lat = 0.30500433258167703;
    tmp_msg_0.start_lon = 0.8619657831223945;
    tmp_msg_0.start_z = 0.5218544285005926;
    tmp_msg_0.start_z_units = 143U;
    tmp_msg_0.end_lat = 0.08003653671082367;
    tmp_msg_0.end_lon = 0.9818030676644223;
    tmp_msg_0.end_z = 0.010942599624161997;
    tmp_msg_0.end_z_units = 97U;
    tmp_msg_0.lradius = 0.9287941037716153;
    tmp_msg_0.flags = 186U;
    tmp_msg_0.x = 0.00903262572922714;
    tmp_msg_0.y = 0.14547350296734463;
    tmp_msg_0.z = 0.9274913976476589;
    tmp_msg_0.vx = 0.049608611791015944;
    tmp_msg_0.vy = 0.7589214352994498;
    tmp_msg_0.vz = 0.49921063148542877;
    tmp_msg_0.course_error = 0.34306521353359276;
    tmp_msg_0.eta = 34499U;
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
    msg.setTimeStamp(0.7288966521500135);
    msg.setSource(15626U);
    msg.setSourceEntity(117U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(91U);
    msg.source_man.assign("ZBQXMPJHUXXJSREEQXLKYCHKTUHHUMWREJCPLKFMPORVATWSJDJIZAOESIGVGCTQILKEDWZDBBBSFSOAAKMXKCLZZUZWLBQVZSDHYAKYVXRQUCURTXWTFGHFPRBDEIPYOGCOSL");
    msg.dest_man.assign("TMZGCYEJBLIZKDSMDBYUVSFZPYXKBYAXRRBUQOAWOHQKXFPWHOSMHXTTXSVVPSMTFOUZNSICHZTCQDGGACAPKMGEOBBXPVFIJKDQEIJPFXQKECRJHTNNWFPROJANRYFALGAJOMLXETNVUOTXNWLLSUIFAPCASGWHNUUKKZPJQEXDYRSTQHQHJZVNETDGVEQBVILPHKVRBFLWHYWOYCNFYQVR");
    msg.conditions.assign("ZCGRNZNWFLDSUPJAQYKKICACUMTQBGAVBVCP");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2807070144U;
    tmp_msg_0.state = 109U;
    tmp_msg_0.error.assign("AFXWMMNVDZZDPEYODCGFQNIIJHJRVFLCBHWXCTCHYTXHUCCVZMVXJIBVSWDKJJPWZRTZYK");
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
    msg.setTimeStamp(0.9182631472029814);
    msg.setSource(9152U);
    msg.setSourceEntity(170U);
    msg.setDestination(28298U);
    msg.setDestinationEntity(109U);
    msg.command = 12U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QWTOEZPNYVAVQDHCVXXLOBJWTCGIWUFOCRRYTLEZOENHROVNIBMUDQSKGSPZKDJLJTPVSDLYJLTXBMUSUEIXNMFOEBLNVBHRGUQWEEEIPUGBJUODJLK");
    tmp_msg_0.description.assign("KOELHQFSKPRZPGKNBTXORHLDDEVFHAGUDSKWRBMMWZTPPGLQTRYEUIEQKCFQSYRGAYDDPIIFLVXDJOW");
    tmp_msg_0.vnamespace.assign("NBJUGPYUTZNIGRXZBCQYVSHHQCPJOBZNOABARJJRDQBQIBNXQGDVLKEJKWWUPCSOCIUGKFMMCQXFRAHVZBBVYDSPABUXDURFTSLRUGAMDKOFWDNRMFEQEOXZVMLSTLDGYMWVCAPMYIHZPSIYUASJHORPQYLYUWPMKGIEEUPTDFHKVZAJHELETFMHWCQRHWLXTIOAWICVWFCNGSFEVSZNSCDLDY");
    tmp_msg_0.start_man_id.assign("NHCWJEBZZTBELKQAVNDWAEDMPQHTTPDDMRKEAJSFQYHXIGKWMFCINHWIVVCVFGWFYPAMSUPHARBQQXRLSJGACNZFVVYSSVWOEXOJMAXVFDYLJKTBFICOHWYDTIATNWSQPIDBGKTLCMBXOFAJZYJKEPUCHZRNLAQBVCXHLUYUWUNQIEUOULGRKBUO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("EDFNJANBRAQSOUSJZLUUVGTOFWHOEPYBAKCIHWDZVXLFAJXJMMKACCRWXLXTNHULNMLTQCSAWJTPIWIBOBYSUGCONGKOBFQZVSXBNTQDRPMFCYYNNGYGAEIKZHUXOCAEKYNXEPDTOKPHRDCKVQUWHLDBWHCQUSEPFGJZIKXIKTYEMLCFKETBLDQUHXRUEMMTWPFQVGMPJVFJZLSJVIJBHYZRSYZZPGVYLWOMNMDXSG");
    tmp_tmp_msg_0_0.dest_man.assign("HPUZGZHNXVCUQHIBKBZAURKIVOGTPDCGFTHCDZLLFFSDXOVOYEKATJQEJSYSENNSIHXWVGLWZADGEBPXZRRAOVWLNHN");
    tmp_tmp_msg_0_0.conditions.assign("AIWJZZECVRZWGNWRPOMPSNNSZGQPAGNJHQTNPIRCCVFGYTTKKFOXWBIVSRDXLDXYAVXXZNVPDZCMHRTABVEKXUKHMYUMSWHMFOFQWRWKGLRPIJQQMDGFGHIJEANWZJMVFEDDOEYKDBSGJTYAMDUKZU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::AlignmentState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 188U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Sms tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.number.assign("XRPYAUWXNDYZARNIQJIJUIIGKCDWDYICHCVCUIMBHMCATGPUWEOGZLNZFCPFVEAVDBUAYVGHLTOQEEQEVBHGJKBEBPHZKWDHHLONPJGUBFWLZFMAGEQTQVRMJDCKVMKZMPGYXXRXLBGUSTXUYXPZJPNSWLODRADLONDVSOQYNRQWZWRMSFKOHTICPEXUOFBFSYMVYFUKME");
    tmp_tmp_msg_0_2.timeout = 33037U;
    tmp_tmp_msg_0_2.contents.assign("XBDJQINVCWHSHWOGGOCTIYKBDLHFDSNUUMGITKQBPXQLNEQFDOMUXNMIUKSVKLPBWAVTZBSJRVSVUHPPCUWAWTOJUQVIQFPFZCCEYYEBTDKQMEOORNCKBRLPMGYAEJTQGPZJJERSPWGXAJWYREAOPLRJXIRELVBSNCGVLITHNZNJKJYYILFDMFLWAFYIBGVANYPKKMZURHSTGZXNCZZMKMHFFXRQDAOAUBTOUYMOVHGZ");
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
    msg.setTimeStamp(0.1773993711278955);
    msg.setSource(53403U);
    msg.setSourceEntity(50U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(10U);
    msg.command = 194U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RBXLDARKZYIZOMEXWTQNUSQPLUIEPZCBQIJUJYGCVOVOZYARNBDXEYBUOFGZFEHYYBXKXCFMPAGRMRKGAKLWQOUDQFCTZVFXSNKPDMAPHQSSLWMNQOWYNESSOEAOCZTBOIISQWIKMAUAKMCZEYVWYTCVWRJTJHGHDJZZLHRFJNWUNDKQXFCSGR");
    tmp_msg_0.description.assign("ECVCNXILRGULZILJYYKWOSFFJGPUNYWGFGOMBAXXLXREAFXFSETOQCTGTBQBKDNOWSMWBRINNJHYVMCLAYQPMEYUHMASXKUEEICBLIBTPQJDJYGMYWXZWXTODRJDXTOSJBUZUHFZDVSVUEZDBCVJRPUIRWGSPQPVRMEWWHZBMKVVRFLNTQKGNOIBYKPZOHCCVMLZIAXVHHDKJIGHQNECETUKTULCMSIDP");
    tmp_msg_0.vnamespace.assign("RSHQTKYDAUXSVKXCZDWMGVZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AQNBYSDZSHIPFTFPMKMGWQLXFWWSBWYYVEAGPBMYBTPPLCTXOFQCRGFXKPHBZMXLBAEZLQGYUYKPLZWWRWRJXCIJCFMFNTUHXQDOTFZHORANIZOJEWURMGOVOYUCIZMZCENSQKJXURFDODOAEEITGVSKYHMXSJSUDVBIMCQPFDRUXNHHKSGARIV");
    tmp_tmp_msg_0_0.value.assign("MVHQPIUJKMNEQOBZHDZUMSMXNMCE");
    tmp_tmp_msg_0_0.type = 188U;
    tmp_tmp_msg_0_0.access = 78U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HRSORDBXGNRUISOWNSEBZRIGJAWYWJUOGPQFFBJBJHTXPFCFTDVRHCQSIJSUATFUDMLGBOLEEWVJO");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("AEDHWJQZLXXRHCOHQMPQDOGREUNXWWPYCEBMTNPCUKZZMBRPOXFSLWMQVTFRCPXDSQTCNIWNKFYTSCZRUKDUJVITGCTZIIHYPGGCDVNGHEDLQJVKRDYYCBKUZEHABMQDNYEXGFOSLJPTHESQNVAFZZOKYWAOFOZUGNTHJNEBJMIVTIFOLOJXL");
    tmp_tmp_msg_0_1.dest_man.assign("HZHVLHXMPNOKEXUFOQPEPBPNREFZJMSEGIPLJBZURQKTHDFMWSLHLMVIUXAIAQEQKTSRIOQGAAZELWUMQSWVVGRNFWGPGRCBFXLUQELUMHEIFYCJDDSXGNJBNFACKVYPOHTIWVSCEZAUGJTASBBXTPFJKYNHQBCNTUQHHSOZLTUKRSPXMDOVQMRDZEKXIYOVZBIYOJI");
    tmp_tmp_msg_0_1.conditions.assign("XFSHLHLWQMFLCDZSQUZHABSCJRPUJCIFVYKJFAVGROEBUMHEKIVPCYGAIQZUBLSCRXPBZROWYGRTYZAEVCMWMATQIOGNLQKMGKFVCUTXWDVALHQDKAIPNSBKPPXRYNZUEQOZDVEGPVWSLDRNOCMIMDZOLDQNIUEKWFSIMYUJJBTFXATGXEONWNADRBKTIRWNPH");
    IMC::DesiredVerticalRate tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.7750008722892571;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::JsonObject tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.json.assign("BBGUWPYTYMNUSDINUXJFMWEHZOTCRFBARWTCKMBPCRKNGPULXIHYPZRUMYIDETLFRPDZYWTRJRFCTLQDVRNJVCQEQCOEGKPZDXYYKNTSMRQPSOSYVJYVYGEDUVJKMA");
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
    msg.setTimeStamp(0.06410625855390917);
    msg.setSource(53403U);
    msg.setSourceEntity(63U);
    msg.setDestination(64234U);
    msg.setDestinationEntity(131U);
    msg.command = 123U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CSOQFRYNRNWTUUKVKXBBXWEOAKXPZBASDQPMMEKAUKAZUOMFSUTLXFOKCNTRVXKAPSQYLMIQGGJGVTODJHKONVEQGRBGDFTJICTURFHNLRCDQYVCAQJXMTYOYZLJLIRV");
    tmp_msg_0.description.assign("ZGXNNVHCIOCADMKPQKTWRJYAILBBOQXMFPUAUGUEHTUHJSTOPTHZVFGGRHFEFUMPBYGZIGDBXKRKSHYIAUBXBOVDCMNSGMLNSONQCSYPRPWWPVRUFKMFHLZEHWQMDODVXJYFDYSZYVLGXXJOECNWPWLFRLQXBWKZKJRMCQDCAJTSKINDGVEFEVDCKZTJNLHSWYLRAROUPETTVIEEIHACZKONQNMCXSJGAYJQYWQFMIBXIEUWDTLLBZJAZ");
    tmp_msg_0.vnamespace.assign("UNHGLEKBNZSJAYQDXNJESOKFTIVQHOMWEQGHJKJOP");
    tmp_msg_0.start_man_id.assign("PJWIZQJWEIU");
    IMC::EntityInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 31U;
    tmp_tmp_msg_0_0.label.assign("HZITUYAOCBWGKSSBUOTSRZJQDKLDSULPCRUFNNLORBYWEZOOPLFNXGBDLNURIGKKIVYGXXAFPZYMHPAAEAZT");
    tmp_tmp_msg_0_0.component.assign("EQLGIJXDEUKSZXTEQYCFXZAFLOCDPQDBCUGCZNEGVTXUYYILRNONRUTWCOKRWQWVQQKLRDRWJFIZVKJVXURCLAADVAYPLKSPOFGDPXKTTJAMJGUQXPWBJHZUIRQOZUIQMKKEEYGWEBNDPTHHVSIABJKBWDXRAOMYIEBXAYNVFOHSCGLFPYWDUNIJCSTMZLHZHMLSMTDSHHGNGUMFFJTMEVLSEBCRWBPOAMMO");
    tmp_tmp_msg_0_0.act_time = 2692U;
    tmp_tmp_msg_0_0.deact_time = 21431U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::GpsFix tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 61513U;
    tmp_tmp_msg_0_1.type = 73U;
    tmp_tmp_msg_0_1.utc_year = 46052U;
    tmp_tmp_msg_0_1.utc_month = 152U;
    tmp_tmp_msg_0_1.utc_day = 34U;
    tmp_tmp_msg_0_1.utc_time = 0.8619724309716597;
    tmp_tmp_msg_0_1.lat = 0.8047914390098863;
    tmp_tmp_msg_0_1.lon = 0.3518615343952778;
    tmp_tmp_msg_0_1.height = 0.23078530288649024;
    tmp_tmp_msg_0_1.satellites = 253U;
    tmp_tmp_msg_0_1.cog = 0.5048037846976671;
    tmp_tmp_msg_0_1.sog = 0.9180650431311808;
    tmp_tmp_msg_0_1.hdop = 0.16731495959980258;
    tmp_tmp_msg_0_1.vdop = 0.793106644638645;
    tmp_tmp_msg_0_1.hacc = 0.12636031276278925;
    tmp_tmp_msg_0_1.vacc = 0.9465356491250199;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.13528602829816405);
    msg.setSource(50895U);
    msg.setSourceEntity(63U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(141U);
    msg.state = 32U;
    msg.plan_id.assign("QSPYFCHRFREFIFXLTDQJSGUBYPTFALIAMWUUQJTOPVMEZCYVLVNSKPETTOWVSPZVQOOJTQWRMBGCOIBGHVNMEZMSURYJJPGJEWBGXBCVZRNAXDUKIVOBDRNWBAUXGKFTQHZPEGLCYAANMHLCJQIGTKLOEFSAPYHSSKDYXYJVRRPLCBOWKLDCWXQBOINMMEOHMUKXDLYWEDHJAHZFIK");
    msg.comm_level = 156U;

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
    msg.setTimeStamp(0.9297094655045944);
    msg.setSource(16197U);
    msg.setSourceEntity(241U);
    msg.setDestination(45421U);
    msg.setDestinationEntity(90U);
    msg.state = 159U;
    msg.plan_id.assign("XWYGYATFWUJDKHCOQHXAZLJYCODDHLTAOXNKLVSRRBGTTICJSBJHQNPKJFFFOVZXEZISTKAUDNMROWOFVKTHBOIFNEHLX");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.7681957361244103);
    msg.setSource(6736U);
    msg.setSourceEntity(201U);
    msg.setDestination(3088U);
    msg.setDestinationEntity(77U);
    msg.state = 195U;
    msg.plan_id.assign("LGRGGEKMNBPPFAXSUGUBHKEIWMUAJVVDCUZBZXCSXYEDNDXQKUBTCKIUDUYQZTHWIQAZJWSCNVFMSYFZNJFJPMKMAVZYXVHGCWSH");
    msg.comm_level = 98U;

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
    msg.setTimeStamp(0.7340690528187367);
    msg.setSource(19369U);
    msg.setSourceEntity(222U);
    msg.setDestination(19578U);
    msg.setDestinationEntity(121U);
    msg.type = 182U;
    msg.op = 14U;
    msg.request_id = 28907U;
    msg.plan_id.assign("NCMRTVTQDAEBHKAPCEUIPDUCJYQLATFRLWHBHVPYKAZYBZJINFPLOSERMWGKVUSFIRLOXMTDVEEANTPWXHGLGJZQHEGJRFRRGCJAYQGLVQJSZIANXYJUVDOFLNLEUXCDMAMNZDBWFSNYIXPBOOEFDPFXJTTYHXCQJZVIQORSFWDQVKTGTHAVQNDHRWOSOCKCEFKNRKUPIZGSHSKEUTYICLQAXMZBBPHJZUGWDKIYWSPBUBS");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.46517134405450566;
    tmp_msg_0.type = 114U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RRZXJLOTRDMXIQIOISJTHHBDZOCELZXXLIHRUTJOZZBQCNTITTCQWRHNMPWQSFWNYIVXBGDASULZLFUUSASBHBAPPWYWPDEZGASNMHQLKOEMIAMDWHHCKOUJZYINDYEEXGLGAANNUXQTQLCSOUEOGRCCKZOWBWSYVDYJFLFSZAYRMWFKPWRSXDJUJKPGQVVPXVXHGFUYNBIGANGIFTMPFBNMJMACQ");

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
    msg.setTimeStamp(0.7257110074005091);
    msg.setSource(17222U);
    msg.setSourceEntity(10U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(33U);
    msg.type = 122U;
    msg.op = 53U;
    msg.request_id = 57784U;
    msg.plan_id.assign("QGJXDROXFMVYMCFCRWZUCANKZDBGDTJADYXPBIPISPXHVRXKQAYGEULSBWPUMTIHGBCXMAQTGLLMZLBSPEFHTWVELIZIDGFTZOADXVUXBIJSHSHMAOLLQKOPTGREUIYOCUFJKRVYN");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("ORYKTNFOVOSFTGTQWEUEIJFCSKDAZAYZVQUNNSLXRFSTCPOOCDZKPLBBDMIXCQIUVMWLLHMRSLWRBXYEUSXMWILUZQPGGTJABOELARYBZOSXZMTAMVVNKHPFQQMHLFJFSDPHYCTCDVSPWUKFGXUJJAITWMXFHOVWGGCQYLUWHNRYBZJLBUAYQNMGC");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("RCYOJSEGJARDGWAAVDXXKONJKFMLJCFMDLTCRLPFDICGVRBGXSRELVYNUYSWHICDZFHNBQJCNLAYSWBAURMETUYZAUVOVDQWESUNWHVYTXWPJIBCVOHTBSTPMPGZTFNVLPAZJXEYORQHCTZBPQXORELFUMIFRFXUFVDTGDDKIZGKKKBJWEKSOLRXOTJKCLGWYMNANZTGWDCNOPVYMPQXLMQYMHIESPKQIOSIUPIUJEGHQZFSNZAKHMHHXE");
    tmp_tmp_msg_0_0.predicate.assign("FZRRCZMOZEFSOUZEKKTIMTPUXNTBXUMUMHVQAOPQVMAPVMAAYZKTHWDDVYQKBNGOKRQXPOGWDKSREXHWEBXHWMUJDULVPNPDJLPFCJYLTBPFAIFETNQILEINCEHTMRSLSLDOIDATGU");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YWWMNWNUEYDYMFCAKXMHTPPEOECDISXLRBCJQBTIAFXPFFJBICIBBQDEFAVUMSZYIIPPPHGTSJHDGQCZJDROTLJNZCJEIIBFWBORTPXTCGVOOLCMZTFMJXGTNYKFYQEAGKMERNNWOUYVRNGDLHVMDXKRVUQVSYFKXLNGXZJYZTQSCSGAFKHXRKKEHYAUASSAOHHMPITNKHDGRG");

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
    msg.setTimeStamp(0.04682114590816977);
    msg.setSource(54265U);
    msg.setSourceEntity(227U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(22U);
    msg.type = 183U;
    msg.op = 66U;
    msg.request_id = 64381U;
    msg.plan_id.assign("ZCNIZSWOVXEVXMXHGFAYBSPJGCBDWVRPZRRTCIYXVWPNHDKKYZUTXNKHJJUVTFQDYMJVFKTJAKBIMTESZOMCVYP");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 197U;
    tmp_msg_0.snapshot.assign("KZYCDPEBEZWPL");
    IMC::FineOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3649817815412848;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BUERYYJDZRKQOVOCLBSMYUGNIRNRLQLYVUCEGYMCYNMQCZGFWDXCDBHOBXVQISBFZPQOOVHBENTRTKPWNTIXMIHTAPUWBKFKAZJZHEACINVSRVVJHQZKMZBVKTXXCKELXOXANOT");

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
    msg.setTimeStamp(0.0650808258385791);
    msg.setSource(26326U);
    msg.setSourceEntity(201U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(39U);
    msg.plan_count = 21399U;
    msg.plan_size = 1294580549U;
    msg.change_time = 0.9987676222928549;
    msg.change_sid = 11114U;
    msg.change_sname.assign("YLXIYRZTVVHYASEGUGHKEAWXBXWKGPQYIKRLVVVUPRQDNNFCETQTGBCHPWKXOTDEAQKGCFMAXNPVAZNKCHDYF");
    const char tmp_msg_0[] = {-52, 98, -93, 73, 65, 20, -89, 50, 92, -66, -93, -79, -59, 121, 40, -106, -71, -21, -38, 100, -126, 36, 58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HDISFHCMMXPVAQARKBPNJUWWNEAABHNOCJFWYQNVHBGKXXEHDBGTLENLZKUPRVGDYUZXTCJEULWSHXJMZAQOWLAQLBSOZLREAIQOUTBMZTRPJSXXRKPVLJZFVOYDCYGUXIOIUNGBPAPEQXHDYIXEJUTZNMSCYTCKWRTONEMSOKEKGMCPRQMFQQZUTVHAFNGCLYYDUIGALKFKHFGBIMFVOVIRILW");
    tmp_msg_1.plan_size = 1877U;
    tmp_msg_1.change_time = 0.0418039914939895;
    tmp_msg_1.change_sid = 54176U;
    tmp_msg_1.change_sname.assign("EHUFICAXQLAFBNEMRVGIXMDWSZJJHBKBBDWPYPWLGTLCYUWOLIVCOSTBLDWJERPDNFOULIU");
    const char tmp_tmp_msg_1_0[] = {27, 102, -85, -60, -101, 27, -98, -109, -119, -111, 66, 19, -38, 39, -34, 21, -55, -65, 76, -23, 104, -1, -112, 47, 120, -116, -79, -47, -102, -6, 66, -47, 26, 124, -11, -50, -53, -14, -18, 27, -49, 109, -62, -77, 90, 70, 6, 55, -112, -90, 118, -3, 111, 21, 90, -56, -66, 86, 16, 50, -68, -19, 42, -105, -117, 106, -98, -52, 107, 111, 28, 33, 29, 52, -116, 124, -120, -112, -4, 55, -89, -98, 92, -84, -126, 42, 69, -107, 36, -29, -64, -49, -21, 49, -71, -34, -124, 59, -83, -29, 67, 92, -98, 41, -24, -59, -107, -47, 42, -50, 75, 87, 107, -29, -122, 17, -126, -30, -119, 90, 52, -32, -52, 55, 7, -74, 23, -78, -46, 126, -45, 115, -97, -81, -60, -109, -28, -117, -43, -101, 88, -104, 119, -93, -28, -123, 19, 104, -35, 45, -92, 84, -22, 43, 25, -54, -18, -3, 95, -85, -81, -72, -14, -48, 116, 66, 13, 125, 123, 45, -42, -8, 9, 50, -106, 24, -87, 11, 59, 48, -111, -56, -74, 46, -69, 35, 70, -119, -89, 95, 21, 109, -111, 0, -77, 27, -75, 42, -1, 98, -84, 102, -110, -121, 0, 40, 32, 104, 10, -84, 103, -37, -4, -4, 50, -68, 34, -4, -12, -61, -81, 51, -90, -64, 126, 18, 116, 56, -126, -78, 19, -97, -11, -21, 26, -44, 15, -88, 117, 75, 65, -110, -104, -76, 105, 22, -34, -124, 40};
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
    msg.setTimeStamp(0.9663580799155288);
    msg.setSource(27268U);
    msg.setSourceEntity(20U);
    msg.setDestination(32070U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 47193U;
    msg.plan_size = 791803520U;
    msg.change_time = 0.6185208749793369;
    msg.change_sid = 9485U;
    msg.change_sname.assign("OBWIRFVRFHTNYPXBQFFALRNKFTAYQBNNKWAOUORQSJMYIGMDPWLYPFEDYPGUAMHSWDMQWDEKLNALIXACLSOIGXZTFXHTQYVWZRGWBEBCBDMKZXVVRLNYHATLGMETKIOZZCSPBNBFMHYYTGRZXLVPSUROCJJCGFSMUOMQSVDYQJC");
    const char tmp_msg_0[] = {-12, -51, -102, -99, 39, 4, 17, -95, 104, -107, 92, 124, 79, 36, -25, 98, -107, 86, -64, -27, 23, -35, 42, -62, -84, 35, -37, 88, -127, -39, -68, -28, 85, 5, 12, -8, -85, -14, -74, -85, -8, -6, 18, 5, 69, 112, 19, -58, 48, -103, -38, 38, 67, 80, -125, -78, -34, 76, -116, -5, 94, -54, -105, 124, 87, -67, -86, -58, -108, -48, 54, -29, 101, 109, 31, -49, 52, 8, -32, 80, -55, -123, -51, -126, 43, -55, 7, -32, -70, 62, -1, 95, -78, 123, -5, -100, 89, 25, 81, -19, -5, -79, 16, -74, 65, -23, 22, 15, 100, 39, -1, -5, -76, -61, 6, 94, 29, 31, -13};
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
    msg.setTimeStamp(0.885517414579634);
    msg.setSource(61474U);
    msg.setSourceEntity(59U);
    msg.setDestination(15124U);
    msg.setDestinationEntity(248U);
    msg.plan_count = 60692U;
    msg.plan_size = 480427330U;
    msg.change_time = 0.8496798788918118;
    msg.change_sid = 55380U;
    msg.change_sname.assign("DXGLZTLXICENSSMOTCCUGMBWPEVDAPUINZMNFQDORINJQEUQWVKDXJHBSMTGULUPREAVTUDESOAUOLAVQCICYANDADQCUCNFKIKOLGADDWXWIFKYXFGIFVPGYOEJMEVAXZZQLVHTROILSYBFMSMXYQLLQFTHWDHFGRJ");
    const char tmp_msg_0[] = {-103, 5, 85, -114, 102, 118, 81, 124, -105, 36, -13, -53, 47, 18, -99, -113, -25, -67, -3, -94, -47, -25, 100, 97, 67, -69, -105, -47, -117, -66, -22, 45, 99, -91, -5, 101, 64, 106, -28};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HRIIEDSCLHBNYPOGENFWBURWLMSNQZDHNIEDGWBRBEJTUZHFXRXOTTQLSJUPWJOTFYHMKMUWUBLHQAPXURDVYWKYTISXDOSRCXVNRCAEQPAMFJVGQGUZXMCYJNPOLKKQUJZCQCYCFYOFJIKWRHIVRPWIHSLOAFHSXAOEPMUCGLQNJTDZSPKEOBCTZBSIVBFYAWTEPZYMUDZDCBA");
    tmp_msg_1.plan_size = 60982U;
    tmp_msg_1.change_time = 0.8067603739024158;
    tmp_msg_1.change_sid = 16051U;
    tmp_msg_1.change_sname.assign("XYCPJMAFALXJUYAIOHBDYOOLGLGGVTZARNBHEBDJJOTBKGKWVBRLEEDMHPMHMBWTDWGINNIWKITMKFUTXIXOQZRXPAS");
    const char tmp_tmp_msg_1_0[] = {94, -2, -94, -52, 52, 37, 61, 86, 56, -127, 33, -8, -59, 75, -43, 58, 126, 88, 63, -79, 119, 12, -114, -113, 1, -21, 53, -45, 25, 97, -114, 41, -54, -123, -50, 94, -2, -31, 33, -99, 7, -36, -20, -104, -30, -12, 0, 119, -87, 6, 14, 53, -4, -118, 63, 34, 94, 60, -26, 58, -101, -12, -29, 90, 85, -122, -103, 37, -81, -104, 19, -5, -71, 15, 12, 62, -120, 35, 80, 103, -62, 52, 23, -33, 22, -56, 109, 22, 53, 53, -9, 64, -82, -21, -31, -105, 50, 65, -39, 86, -66, 21, 22, 45, 38, 107, -127, 32, 74, -128, -101, 27, -103, 8, -93, -9, -53, 121, -18, -36, 21, -9, -105, 38, 106, -111, 53, -121, -82, -101, 54, -97};
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
    msg.setTimeStamp(0.08922748913520895);
    msg.setSource(63041U);
    msg.setSourceEntity(24U);
    msg.setDestination(48433U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("QNPFVUXNBEJQOAOUPUXUIUYEUZZPSDKWSBKWVZDEFGWDHABXGBFCDBDUHSHITYTLSRJMNAJHVSQZFBHEWKSSNMOJNTWEGNPZCIIZXTAHTGOMAMITGFYXKSSUKRRYJMRCFOPLGRGTDKTMXEEHXEFODHXNRKRCZMDQOLVILCTBWMTYVVNOCDVQALIPYQRKYCPJNQAVHGPHX");
    msg.plan_size = 1804U;
    msg.change_time = 0.1093147465746046;
    msg.change_sid = 28142U;
    msg.change_sname.assign("RRPYNZROTIPJ");
    const char tmp_msg_0[] = {26, 88, 123, 5, 90, 57, 110, -29, -99, 109, -125, -86, 48, -43, 105, 112, 54, 61, -83, -112, -68, 29, -2, -85, 94, -118, 100, 35, 123, -76, -91, -49, -99, 1, -4, -118, 14, 52, -113, -64, -81, -4, 21, -115, 70, 2, -55, 31, -90, -96, 121, -16, -34, -2, 63, -40, 38, 3, 109, -108, -81, 123, 54, 37, -24, -81, -50, 2, 54, 54, -115, -104, -59, 3, -57, -89, -10, 29, -113, 109, -96, -60, 94, 71, -122, -123, 28, -29, 55, -102, 121, 9, -59, 60, -19};
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
    msg.setTimeStamp(0.4371416848327334);
    msg.setSource(47118U);
    msg.setSourceEntity(78U);
    msg.setDestination(40804U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("ATLLINXZBXCLHBXGUYTRDRNOHVSQGRBAQDCMGOWHPESWLOUIQLU");
    msg.plan_size = 45182U;
    msg.change_time = 0.30256457634050704;
    msg.change_sid = 65121U;
    msg.change_sname.assign("ZQOAUXBASMRMRXKLAFOXKCFPGKBWDNJBYCFDGTYFXCWLSOFLEMBGWZLBRRNTIBVHNQGELSTPBOOOQXYQDGUPSIOCUQPNDVIKEAUAVMJKJJPSGUVIITFPJEZUPIHCYAYMLUMYKYEEIYTXNWWPLFCZBFOYDEBJIVFTXZVHHGWXZITJQDSBPTRQUZKSNCZTHWLHAAHXTJAGKSWZNAVRVEDXEQPLDCSNQNUDDRNZHMFKGCISQUO");
    const char tmp_msg_0[] = {-43, 79, -87, 69, -33, 107, 111, -50, 60, 115, 6, 56, -95, 85, -59, -47, 24, 96, 90, -39, 100, 125, 51, -79, 44, 47, -28, 112, 92, -22, -77, -45, -24, -3, 79, 65, 4, -97, -60, -46, -3, 74, -95, 107, 48, -22, 46, -99, 126, -84, -87, 61, -123, 43, 0, 10, -117, -93, -46, -39, -38, 74, 76, 51, 41, 4, 32, -104, -25, 115, -55, -93, -88, -26, 45, 18, 25, -118, -27, -43, 82, 56, -24, -77, -122, 60, -92, -7, -115, 70, -122, 23, -78, -72, -108, -94, -36, -38, -78, -101, 25, -17, -87, -59, 9, 126, 63, 114, -64, 126, -106, -6, 95, -63, -126, -44, 39, 61, -1, -34, 26, -76, 108, -17, 46, -22, -22, -76, 32, -77, 85, 41, -85, -113, -42, -41, 51, 19, -19, 24, -43, 6, 21, -56, -111, -77, -114, 11, -90, -100, -102, -14, 2, -104, 28, -46, 92, 59, -18, 3, 102, 23, -20, 49};
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
    msg.setTimeStamp(0.08626506550968416);
    msg.setSource(63748U);
    msg.setSourceEntity(222U);
    msg.setDestination(20861U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("EHDFJNHGUCOWFEYHBCTCZHZQRHSUYPJVQWSIYBPFHZUXRSPLBX");
    msg.plan_size = 55892U;
    msg.change_time = 0.48946541779553354;
    msg.change_sid = 47068U;
    msg.change_sname.assign("IEJWZAVBSYLEVBRMQLWFZIEBAUWRYOYHQDSZVNBLWKOECALDLOVYQJJCLGWDGFWAACFVQVFZNRVZFJIBFAUETUTHDDPCHWNI");
    const char tmp_msg_0[] = {77, -108, -43, -17, 83, -7, -119, -17, -97, -14, 30, 123, 108, 102, 109, 70, -98, -38, 34, 104, 47, -19, 58, -58, 105, -73, 97, -81, 43, -115, 80, 72, 32, -101, -9, -112, 0, 117, -121, 74, 64, 9, -13, 84, 6, -113, -110, -105, -22, 22, -15, -24, -58, -29, 73, 100, -38, 59, -77, 9, 48, 26, 100, -29, 83, -70, 41, -94, -47, 41, 43, -24, 13, -66, 43, 110, 94, 30, -61, 119, -23, -126, 51, 32, -72, 76, -99, -6, -40, 55, -21, -101, -18, 121, -12, -81, 118, -42, -18, 31, 120, 120, 8, -81};
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
    msg.setTimeStamp(0.6102588501045829);
    msg.setSource(57597U);
    msg.setSourceEntity(102U);
    msg.setDestination(49947U);
    msg.setDestinationEntity(103U);
    msg.type = 9U;
    msg.op = 76U;
    msg.request_id = 24529U;
    msg.plan_id.assign("RDXXIRRASZZSAIEWUJMFWSFWMEXFBQBZNVXWPDCQIAHBEOXJTONKRMEEHBALQERYQPVEUOGFMTLPOUOELHVHUMGILBJGDAXYCLKQTKBBNGYKOUSDVZYCVPNRASHLPFICICBLUZWDAJMZJCKEWTNNXJPOVFXHTDVOQJVHJ");
    msg.flags = 11884U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PNTYGCFHKRGLUMMYHDYEDUAGZQQQUPFIBUTUMWLLYVZAGJWPBWFLPMBHLESSZPBESCTODOIKMOZCOGSANRXOUIKZNYOCGQCCCPQXWMZTPJJHCSUNKUFMXJKGBEDMN");
    tmp_msg_0.visibility.assign("NNIDEYQXKKMMNXAKLWVFHZNWRLDMVULSJHPWHANLDIUDDCIMMQOIOOGGCJGHVSOEOZHBVZAYFPJFOSIMPUTZCBKAAZRWEXLKHYNIFCNNXEHQQFFNWOBRKCEYGPCAASPVPEIIDXZTRPUYXGRTIGWXUSGJZ");
    tmp_msg_0.scope.assign("KUOILTYAOTQCDABXKSFUSJMIVQYJYYCRXNSMQMDGZUBJMHZSBYEKEQDGYBTUVVJVJYDEGWMSXQTTDEOQDUZWIKBBRDVQWBEOKJQGSCFZEZMALIFXKGFMZFPRLNMCFWRPXNAREAGOOJE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VLCKFPJBKUWHYUCUSRKEWONVJFKAHKSQHYIEODJNJGBNKBGEXXHJODXJLNHZKZOLASDXRZSUPYQQVMXCEVMTFSUKZSPXMSRDWLNDWQZBALPBNIEWGWGGUZNDTMEEFIQOZYHZHVLTTWPQSAXHTQICYAJGYUTMFOJGXNIDSHJIL");

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
    msg.setTimeStamp(0.850856670267976);
    msg.setSource(18155U);
    msg.setSourceEntity(226U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(196U);
    msg.type = 247U;
    msg.op = 113U;
    msg.request_id = 42306U;
    msg.plan_id.assign("KPPOZWXVLPSYPUMIEXSDGCTUPQPZLBYHFJMZDJWVWGREQLMMPQVOAHJRIAXMFHDYSNUBAAIJMCDQUKOVRJESCXGUERASYWJZF");
    msg.flags = 49801U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.12023271343642705;
    tmp_msg_0.lon = 0.5983546105048446;
    tmp_msg_0.depth = 17U;
    tmp_msg_0.speed = 0.07565904847124971;
    tmp_msg_0.psi = 0.9661649487503529;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AKNNZJLDJPQRXHUDBDITZVTHIAQCVDUUZMRAZKVXZNDPZQYGHOAKVFFYHCBHIQOBOGMWMWREFPIMSQOAOTLYWLGJKUHHYWOGCBZTPSSDIMPFDWDXJUZAXQUKFSNWXUUBLKVFRNHKKENMLVFSERLJCYFYIYOSGGMQFKDMGCGGJPEJENLYXIMYPCCALEOLSWRMZTVHXVXVBAXIARRJOCATQNNIESWPVWTEFB");

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
    msg.setTimeStamp(0.3709978942018808);
    msg.setSource(1643U);
    msg.setSourceEntity(55U);
    msg.setDestination(31996U);
    msg.setDestinationEntity(209U);
    msg.type = 43U;
    msg.op = 71U;
    msg.request_id = 31055U;
    msg.plan_id.assign("FQILUMYTRTWMKDPRHLJMMIVARQJOLCRSOWPUYGTTCMBZWJSKXNYXBOUZMRONGFUHNOUYJAWKEIBUJXJWBMSQIAXEIOOZZXABRQAJEKCTEGBFHGBZCWKKNPJLDENGWORVVNRPFVBWDKVVCWQNHHLYLQAIVZYJGSERATSZTDCZHNIHICXEFXTSOFVFGFLMBCLNZMSKHTSPAXDJYOGSQUYPWTDUREPEGFKLPDZQGUDYQVKEMH");
    msg.flags = 4274U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 75U;
    tmp_msg_0.op = 106U;
    tmp_msg_0.request_id = 65076U;
    tmp_msg_0.plan_id.assign("EFEPNCVXXKPXIWPPPOQGWDTNHLQIMLECAJHCLJCNVFVWOBLJIOEXHZTQZFSHTJEFEDPYPIYMHRGKZHWBTCYOQSUNQAZKULINRUFMWRUAFJVCGSSIAYLTEBYXFMJYKQFXOIKWGOIRHBVZHOKTKERDBGTB");
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 149U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("AABYMZQDUKOFGPKIGBPRKVDQFRIXNXDWNCKPHFRCJTJERVZHKHCMPEEXJOXCIJBNPGBICKIZLNWUVTIQNWZLTYVSGTXHATOYFQJAAFTMZETDZAUHURGWFUPGNSXEYJYEUZLDNDWIYUSBZUPINLUACMSIRNSHDXFXJZLXQAOJWVYBLBLOHHFJLR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ROGGBESFYMZUHEIIPRYQHEZJWPVDCHXTGMIOKBQXWNTMHQJFFPBKLKFSHD");

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
    msg.setTimeStamp(0.8874459876892891);
    msg.setSource(29909U);
    msg.setSourceEntity(22U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(83U);
    msg.state = 68U;
    msg.plan_id.assign("LCSZITXSPLLUDFKGFCDMEPSXXKVEJAZQZBWMCNQHMFVKEFOWRQIEBNGVFRTKOOYYEQIYKDEZCQUZIAWZNGSAOAEKUDBIOXWNHUCNHMHXIMZRROTTBJSQAMYKBKPNWAZULPWTHZKTLHLTOQRUMGPDENSFACXNDJAPRTHVBLJNQXVQBECQWJYSCBOJUYPVLGVMOCFBRSHYWVVARPDOGGRUSFHGDYZXHENPBMIIPRVUKLJTFMXUIWJDJXJY");
    msg.plan_eta = -245994339;
    msg.plan_progress = 0.08154865783620446;
    msg.man_id.assign("WATNSZDEUOFERAJBCMWMTVSZIVACIQEIHUNUVUFMKAZXNIGIMCCDVWISZJDANEQXKHGNXROJQRSSTNHREWUSGBIAMKTLBYDTFTEPQGLZOCYHWPWRVZVKXIVDPCAKDYXFHBASXYZEXXLZRKUINVRMPPGCPFYHKXJLUHQQQONSUNEOYKJFSRQWAESTVCTQAVLRZFFUBFOOTJWGZYUWKPLEMLOCGDOBBHBYG");
    msg.man_type = 58058U;
    msg.man_eta = 555509512;
    msg.last_outcome = 66U;

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
    msg.setTimeStamp(0.3304103466827938);
    msg.setSource(3879U);
    msg.setSourceEntity(53U);
    msg.setDestination(63452U);
    msg.setDestinationEntity(38U);
    msg.state = 104U;
    msg.plan_id.assign("LZFUMHGTUCAYZXFWTIZYDBQPXIBPKTPHFDVRWSGLDVNVPNDXGAHWZFLLBJHJPXKONA");
    msg.plan_eta = -1354711863;
    msg.plan_progress = 0.3711442662723815;
    msg.man_id.assign("KBXQXUMULDDHSGXXYLPLI");
    msg.man_type = 50076U;
    msg.man_eta = -1449245451;
    msg.last_outcome = 70U;

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
    msg.setTimeStamp(0.05123952885660488);
    msg.setSource(49581U);
    msg.setSourceEntity(151U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(96U);
    msg.state = 168U;
    msg.plan_id.assign("PNDVTTDYVZCYNDIVBWSHPLDPNLGBXCPDEYUSLFIULOVBMYKHZEROBKFLHTQXRJEREVXFWOVJHSGQWFLPZTBZMVSYNKPMNGFACNQZVDMCSTQNUILZOEDTRKFOUJHZMOXEPIGCMAXUAUWJTCHCAYYEJYGAXKPQMHQKOSQCQDPUFLMJSJWTACIIRMUDTIVZSBRWV");
    msg.plan_eta = -205121232;
    msg.plan_progress = 0.9861722887139137;
    msg.man_id.assign("EBCJONGRCLJWFQVKHBMGESAWCTZBSVLVHVSZWPPRQJQYTJJDJMKLMLU");
    msg.man_type = 13953U;
    msg.man_eta = 684412539;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.17284728241168978);
    msg.setSource(25302U);
    msg.setSourceEntity(98U);
    msg.setDestination(35391U);
    msg.setDestinationEntity(123U);
    msg.name.assign("CNTRHISCLJOAFVZWDDHGSMLFUYNAZPVFTJZPUBOIZGGNUNYXKNCPMXYCNRBGDSIMBZVKMWEALGGVAZJWGZFVAGTLFINWRQEFZPBKUEFXWOLQOWCSHYFSLHHRTYMQKCRDIRFCIMTKBJLYAJHFLDKXCOYPKJDA");
    msg.value.assign("NPSMZEFWKEMUDKQREAFGMMLEOIOOMZGANAVHYZBNXRUEFMRGTCVZIKNFVSSBWVR");
    msg.type = 45U;
    msg.access = 203U;

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
    msg.setTimeStamp(0.0012833638713607431);
    msg.setSource(45119U);
    msg.setSourceEntity(21U);
    msg.setDestination(44725U);
    msg.setDestinationEntity(239U);
    msg.name.assign("UNBDRWGNBVOXPYVPNHMNFCSYCSLDCIYGAPSIHRHVKKKKPEKKZMLAXVHDLJUKEHBWFYEMACSQGRCZFTASDJYRLXDXMHDUTIZCIQRQVEELOZKYCFJFXIFBTUDPAXQOWZWROILNMRSQGZVJABJPBXNUCJHWLVZXIULPCFZO");
    msg.value.assign("NZMOADTOJURNBFHAEXLDEVVFMMPJFVYXJGICFDFTCXKKMZPJVEYTXBDYAZLUSABYEKZPWDTMJUJFPAGOBXRAYSKVHLHQFYORCSPQCEWWSIJWVHQDUBCLGIBCHVIDSNKWTOSUMNLOXCUPVBIQYRLZRZITBABNGQEQOZRXYFVPNLXSPOTFKSKJTFKXENERQCLAEYDQTWGTPKHWDIGDUPAEIQXGOWMUUGWGHJIMKCQHIRWMMCJNALZUBHZZRVLNNS");
    msg.type = 123U;
    msg.access = 253U;

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
    msg.setTimeStamp(0.20022275501702624);
    msg.setSource(37885U);
    msg.setSourceEntity(160U);
    msg.setDestination(10622U);
    msg.setDestinationEntity(126U);
    msg.name.assign("QXZJSNNJHMXMHSLIWGRAEKTGUPANVJOWAIQCWMKVABPZEDVSRDVRINPUVCWDOSQZGJLBVXRBFIWLSVGJYUDGATTMIOKGOJQK");
    msg.value.assign("OJVRUQFWRAUSVFBUXXDIVJOGMAKMHKOIXZDKAPVPYIIVVWRUVBRFKEIWQRUGGJFENSSCJMJYIAAHVBKYLRTYSKQDQLXUCTSDYIQNBJINZKTFLQEENBEPHCEZTLM");
    msg.type = 59U;
    msg.access = 98U;

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
    msg.setTimeStamp(0.8473639539336699);
    msg.setSource(8382U);
    msg.setSourceEntity(148U);
    msg.setDestination(37691U);
    msg.setDestinationEntity(18U);
    msg.cmd = 15U;
    msg.op = 152U;
    msg.plan_id.assign("FZJQSDUOYXEFWQVENHWIAISTLNIVNQWYMGHFJYIXZNLOSJDRCYVDVARWBIVXWHLPMOHPCBUDGWVMPMJOPGBKXIYKLHZKOOSCCLXHLOITSGGVIPCZCASAUEJUYVKTAUEKOZFTFHRXVMDYDGOMGDCYLBCRGBZZFXJYMNJNEPQWVAXQJLRWIBMFQQERRTSNMZKKHTBTEFJQ");
    msg.params.assign("MFICGUAMVOPXAYRDSXUXKNHWZYQFTKSKTZRDFANCOXHGJMMMYUNTJIBQFXVEJDYSRQFLFJWXBNHDAKOQDLNIPBGMSLCEVCSRACLHIOCRBNVIZIZLRMJWAVPZHYWQXFTEUDDETCKXAUKNP");

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
    msg.setTimeStamp(0.2524558006310049);
    msg.setSource(64095U);
    msg.setSourceEntity(124U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(109U);
    msg.cmd = 112U;
    msg.op = 17U;
    msg.plan_id.assign("HMUQOWRJPQWFFZPXWYCRCSUAZIQQDSBPPDHYKHOWXTIPCJFPAKVZOZJSFBNMBUAKOJHCCPSGLNXKYKGWSNPRNEICQWETAIVTKRBMSTHOULGCVMHDJHNJJGYQVVZARWIMFGVVUOBRCGLKTTKRIHEUAIMZNZTEBMNOYFR");
    msg.params.assign("CQRNELCMFTOETGTZOJKYZCUOCTLZOCPWWMFJSXDYESNRVALNAEYIPUUGRVXNUBVKKJDSGFIBTANLAFFLFRGXBD");

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
    msg.setTimeStamp(0.7593472321074203);
    msg.setSource(828U);
    msg.setSourceEntity(246U);
    msg.setDestination(44101U);
    msg.setDestinationEntity(230U);
    msg.cmd = 230U;
    msg.op = 120U;
    msg.plan_id.assign("OJIBLWECMXFDPBOLNPMEBVQWHYMAKYWLGPRTIUSMDRCRYBKTWRGZDSCQAFEKSBGWABQXDNPFMURDPONJXEFNPJXEDNPGQNYRCTDTSIHHWWVSZTLMNBTLROMNKBVSUOTKQYNKGJSWKV");
    msg.params.assign("GYONLTEKPCWBYVMAQWTMFPEGQSTHHWVXVSSIYIULXNNLUETGNPICZSHURORTYLNDAGYKTZAGGMJIPKHEIFVDOHFDZVKEWAJQYDZCJQTQMJUQAXHSAIARQKJWD");

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
    msg.setTimeStamp(0.5721603176456597);
    msg.setSource(35253U);
    msg.setSourceEntity(37U);
    msg.setDestination(5077U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("XUTMWTOSLPEH");
    msg.op = 72U;
    msg.lat = 0.9951840222733148;
    msg.lon = 0.9857190004646555;
    msg.height = 0.20394358823323766;
    msg.x = 0.5537409098971844;
    msg.y = 0.5948173214993083;
    msg.z = 0.05855042117721976;
    msg.phi = 0.48888269548592445;
    msg.theta = 0.14194698332012634;
    msg.psi = 0.2962984634794543;
    msg.vx = 0.24699617939905538;
    msg.vy = 0.825063004587231;
    msg.vz = 0.5387105060859699;
    msg.p = 0.30445810908301063;
    msg.q = 0.07756481750121746;
    msg.r = 0.5030763185803115;
    msg.svx = 0.3409388080422816;
    msg.svy = 0.3865897525649258;
    msg.svz = 0.7014330840594778;

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
    msg.setTimeStamp(0.2978064330764354);
    msg.setSource(1848U);
    msg.setSourceEntity(1U);
    msg.setDestination(45075U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("FUAKSMTMDKWAQTHJIBPYWNLDRHRMYXSBMIOHSDFVUXXODQEPWGGVDTKABEBEQCC");
    msg.op = 241U;
    msg.lat = 0.43840950617233865;
    msg.lon = 0.03311866465188973;
    msg.height = 0.5535003676119592;
    msg.x = 0.19435439642810692;
    msg.y = 0.8612933686250167;
    msg.z = 0.46318898262699726;
    msg.phi = 0.1669614224636703;
    msg.theta = 0.6603766242037776;
    msg.psi = 0.5101365592884954;
    msg.vx = 0.9592124580568144;
    msg.vy = 0.43934739078983853;
    msg.vz = 0.1404004379374556;
    msg.p = 0.7339750952406533;
    msg.q = 0.7343485020184995;
    msg.r = 0.10036971112044912;
    msg.svx = 0.9044070568512638;
    msg.svy = 0.9308549108295721;
    msg.svz = 0.5265995800788511;

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
    msg.setTimeStamp(0.3777129883283996);
    msg.setSource(34949U);
    msg.setSourceEntity(80U);
    msg.setDestination(53874U);
    msg.setDestinationEntity(111U);
    msg.group_name.assign("VZRXTCFOGRBKPAFGHCVYSZQNDUQGYWIUVJJWCHJUSOZKVGHPLEDVMZZCBJWSDATYAVMVEQFABSMBWFLYEIIYDULXFUQNYCFRDZBJRHPFTKWKXTPQRNLIONYLRTSKSAMVPZSREIPKMSRLNBFHHWXNKUJDBWIKJTNEADQAUAMMHUZFZQICOTOHVJQSMIYGGZLEPOLTBCXOBWFXPEEHKS");
    msg.op = 12U;
    msg.lat = 0.03672873587079928;
    msg.lon = 0.006064145543382526;
    msg.height = 0.42901341488021516;
    msg.x = 0.47204890042964287;
    msg.y = 0.5397135576067416;
    msg.z = 0.5452852663993665;
    msg.phi = 0.8189517746963381;
    msg.theta = 0.3726963015016379;
    msg.psi = 0.3456999427798845;
    msg.vx = 0.45564266274872633;
    msg.vy = 0.4330647744804359;
    msg.vz = 0.06911989756083037;
    msg.p = 0.620593716312587;
    msg.q = 0.10042954464107934;
    msg.r = 0.9842779631814709;
    msg.svx = 0.8989743417356237;
    msg.svy = 0.23164126882308678;
    msg.svz = 0.657131858679397;

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
    msg.setTimeStamp(0.54051899943881);
    msg.setSource(43787U);
    msg.setSourceEntity(108U);
    msg.setDestination(1493U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("YXEBVXMEWSTTLDVSPYAXCHDMWVIGVHRBJJLHUHGKJLDBEOJKQZZVIVXWHEPIWOZWVSNOCSEOEYYWDEDKXIDLPJZLCMLJGCUUUNUQQHAARIBKAQIZHKCHFDDA");
    msg.type = 213U;
    msg.properties = 124U;
    msg.durations.assign("FFQXVUGNJCXXMURBKIPESFJJQOGQGEZZALWZFZLHABOYDXGQMDOEAYNFSJSHISONIMHZDHZIBAMTBNSKXYYWCJAIRWHPTMYNQHIADXCKXJKTIKVAURBNUSHKYWROKPFYDJQDEECGSESM");
    msg.distances.assign("QTLGYBNYIUOVBRUZCGLXVMCGUJHEYXXSGTFPBULMCRQBDXDRRMYNNWCJPISGSRORGJWYKTBXSABCPLRZJKNKR");
    msg.actions.assign("KSYJXTNJWLBTDXWEVKGGYQ");
    msg.fuel.assign("WCFPQQLJOQIJZAMQNOTCAWSZTAGZGUDSFCWGGZGDMSANOZVTIXCUGRPWRCYTNNIXQZJKIWHMUQCDYIKERZBSXLDSBPYLSXYWKTROVSQFTNEEUXCLJWMUUCOFONYXPAFHGPPHVKYEDHRMARLBIXBHCTPTDU");

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
    msg.setTimeStamp(0.5633121462367312);
    msg.setSource(11438U);
    msg.setSourceEntity(182U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("RFGLQKSJJEPONKWDQSJKQPFICYOFQBBNAXKYEBTBVNPVZUNFDTSMIAAYOBZIASVWOXJGKUQUXMUZSSHNKFYXAPKWGRMJCMZCLHILWCNYUWUIHFHTWTZLMHVUQEUJDLNNAIRTEYKQRHDCYKHPYDMCXXJVXDWJCODRVFCGTAGDVZSQLZEYGIAPZRWSBOFIBXPBROIQFZWTTPLOJO");
    msg.type = 171U;
    msg.properties = 176U;
    msg.durations.assign("BSCUAQKKESGUDVPTUWLGMXDKQTJPRHNLSSXEKMIERBMPCFXZIWGENFMREFLUCDPQCCGFSNLIJKQWIQJGJBNPQUJTCOFBWIVVTYNXYJZPFTIWDHWAJOPZRQSDDKXRNARFAPLOVUWZQOMVKJYDGYXBBILHJREFYQUKZXVLASTZYASMGDXPRUCMHHKZATEETWXFOABEVFN");
    msg.distances.assign("HLLAZAPDVFCWPOGEVLINCWXQYJXMJPUSKMINIPLYRQUJMWECNRISORNMHZWRR");
    msg.actions.assign("FHCRKBROUCULVDZEFPGOWOTVKCLHI");
    msg.fuel.assign("TVCIUPTKFONVEJOLDQBJVWQPEYTXTSPMHODLBJPNHAMZEJOZ");

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
    msg.setTimeStamp(0.48436857790343957);
    msg.setSource(47778U);
    msg.setSourceEntity(52U);
    msg.setDestination(14234U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("ROCXKOKRFMRAJEONYYJIQHUVHIPWZBTUIBSFVBYAMEIXILYRYJULOMSHRKTSOFRYHIPTTQDGNPVSKCBFRXGZMAPYKXPVMKNHRTUUWUNKHDMMHTOZHIWFWKAQCGCXJUEGJSKBHWWOZTEEUZYQXEPFLZXQCXLZWVELNQHLFVTGEFOASJVVITQCQZDDIUYAMJEXFVFNWDBEGPDDNSSCCRWDAMBNQGIOWSGLZTSGVNLBKCD");
    msg.type = 202U;
    msg.properties = 236U;
    msg.durations.assign("ZIBKPXNDTWGXEQDNNAMORYMZHGPOBQMXSFVHNLSALBFRJUKBUQUGMQZQFVQQKCWUCRQKJNTZWUOHRRBZXTJTFOTSSOPXIBDZLFKVMYKCVBVCXXBEMUBKDYMHPSJOIZTIXEABGOQCDNWNUWUIYEOJIFMKRJA");
    msg.distances.assign("SCAJEMHUDAJEIWBXDRPHSJJRVMICPFLZBPJXITZCCDIAKHVWTOWUIHIIZWTNSNQHXUSEXOWGQVLTHMZDRNXFJBCSWPEBUWYJDUYO");
    msg.actions.assign("VYMSZMSQKGUEYHDJEVCKYXCFQXRHFABHIBOEBRRPYZXLBAYTSVXTBDSXFWULADTKSAAONBNGUPPMTTHKNIORJSWCQRIGAFLTNMBOLORXAJBRPPPYPHJFVWMCOGVMWYUANEVNDIPOWGTWSHGRIKQOXZUSSDFSHLKQGQIFBRCZVJPQXYFHWIEHZFVPNJETUWLNKL");
    msg.fuel.assign("AQXSHHGIDEABNQFKTCAYDNIXVBWJORHKRGKKNMAKBQNAJFXUJSBOZUIIH");

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
    msg.setTimeStamp(0.8557587783782181);
    msg.setSource(48980U);
    msg.setSourceEntity(37U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.04298696281719028;
    msg.lon = 0.4438240504306735;
    msg.depth = 0.2852998703249291;
    msg.roll = 0.947193430405387;
    msg.pitch = 0.17015131045875442;
    msg.yaw = 0.30430204342526757;
    msg.rcp_time = 0.38635109520582034;
    msg.sid.assign("TTKGYEWZHHNKOTMFAEVHZMP");
    msg.s_type = 177U;

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
    msg.setTimeStamp(0.4313841333280175);
    msg.setSource(10673U);
    msg.setSourceEntity(21U);
    msg.setDestination(55170U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.15942915143404213;
    msg.lon = 0.7480588702019585;
    msg.depth = 0.20683691079417554;
    msg.roll = 0.45881211548089496;
    msg.pitch = 0.8917655627757917;
    msg.yaw = 0.45987722210547766;
    msg.rcp_time = 0.08977364398032317;
    msg.sid.assign("DRGXQGTXERKVYCHQFBWSNJCEMEWEAAVUSYKBREZJNRTJVAAOXLSJHWGVDDOBOETNFLSYKHPDBYINNERXYHEDQPLIIZWZHQDOKTXXMFPUXITWPXPTJNUZTXKSIICLHBVWAVTQAUDXMLGBMQQW");
    msg.s_type = 173U;

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
    msg.setTimeStamp(0.4079681174516355);
    msg.setSource(46536U);
    msg.setSourceEntity(96U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.7174297464070268;
    msg.lon = 0.09188899039028042;
    msg.depth = 0.2860806186454238;
    msg.roll = 0.2291747869067029;
    msg.pitch = 0.07507675810707615;
    msg.yaw = 0.42656336894795843;
    msg.rcp_time = 0.38407307026990034;
    msg.sid.assign("MRYARLHIABCZNVLYPOLBWHVFGBWFAYJSPAQXVKOEYRASQWLMXBOPAHEETAXIUKMNEPBI");
    msg.s_type = 60U;

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
    msg.setTimeStamp(0.33479737403989374);
    msg.setSource(17191U);
    msg.setSourceEntity(244U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(60U);
    msg.id.assign("BIIWHWNZEVVRPWXRZLENQAFNQJEQPPJXJXVBEQVILDNUZCYJXOQDWSHBYABCAUSRNETFFKHDRCHQPEIGARSTOFHYZMQIOAERMGKDHFDJQJXLOEGSPGRDOMTCFBMCZPEBUZZIDLMKBVLZNXTIKRYMRFIUKCTQOOGPSTWBDAIKUNQUMUOKKFUVMPYSVLBGYP");
    msg.sensor_class.assign("GQSQQGSPBHLXXKWTHVAJXMNYWEIQDQGIAKSZUGVOBUSGQRMZZJCTZUXGDGRXLQKZOEZXYHPYNIQVMMDOIHEJJCACTUJUAOBVHEKPWZI");
    msg.lat = 0.9383385663406189;
    msg.lon = 0.5998398466242079;
    msg.alt = 0.4807690738923103;
    msg.heading = 0.8145771409428466;
    msg.data.assign("VKWXWHJOHTDFN");

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
    msg.setTimeStamp(0.22520181884890544);
    msg.setSource(26644U);
    msg.setSourceEntity(5U);
    msg.setDestination(47742U);
    msg.setDestinationEntity(191U);
    msg.id.assign("ZHFTCXXZDPEULWBPXOXJWETHBVLAGPQDMSSSHRIUAOPGIZANLEDNIFJWNCEMGTVJGBLANTLQRSHOILDRKWQBHQCHIMMIFADWXYQYOGOLCQPVIVGAETJYUOYJZAFJKNKCBWCYPMXQTGUZEZXDHEVZNTPTFBZDCSUHCEK");
    msg.sensor_class.assign("TEJPOKHLCBZENSQKNPWKCFUKEPMTLRHJGTPODTDMPBJGSIETMNZXJSDJAPIISYBLQZZYEDIWNGYYKBUXOJGSXHRMVMKDYUXLDPRPMLGIZRFFNAQWTDSEDMKFVNMTQUPWUFHNORZIHQQZGIBC");
    msg.lat = 0.36066693581643783;
    msg.lon = 0.7081421136917725;
    msg.alt = 0.025399531009606346;
    msg.heading = 0.38955889650418685;
    msg.data.assign("YPLRHVOZHNJBSOQRQRXBLFKJUMLDXTZRAIMIDIWGYZVJSCIYXBSVLTYTERELKZOAYSIHKWUASPFQIDIRCLAXQSFOZXZJUEWHCQBENKDNJRLSLIAUABKCVFMUZPWHMHAJXMECWGWNETNYDVMMBXOJSJVGKDNNCZHCHPCTUGOGEOBQQTRAVOFREPSDXSEBUKJPTXFEZMLKCQYXRFVCFDTNBWNPLGOGZDBGWFWPPYUIQAPDJUT");

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
    msg.setTimeStamp(0.1782768362145707);
    msg.setSource(27955U);
    msg.setSourceEntity(222U);
    msg.setDestination(52154U);
    msg.setDestinationEntity(178U);
    msg.id.assign("JFZOWSFQSPIQZNYSJLBAASEBZFGWDJETVASBTAIGYDRAJPCKOMKEORGZWRYNYLKHQGIXFEXAEIIZRSGWXYSUDCLWTCFSJAJMXZNRNLLXMVFDANSVPDTPLRXNDVFQUBYVRIHNZTINTOEXEWOYOKPVCVNBTCKUCGXOGLIHJBQWNXJMULTMJWAHSGUPZHCPERPQGQMWB");
    msg.sensor_class.assign("TCSIYRMJAYJINBYVQTVFCAHMZBOCEHAVFAUSKKTAHCESCUIQQNGGNHDWQTLDUCPBVMIKLNVJARACBNSTOFESIGICNFWVBWLTWQPPDSBHLFIHWQCXLTDYFYGRDTNRVEFPB");
    msg.lat = 0.18452670491279244;
    msg.lon = 0.257767339408123;
    msg.alt = 0.14155517216167068;
    msg.heading = 0.367511123578966;
    msg.data.assign("ARHFNITPBXMCSIRYNBRFSQGPIQTZU");

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
    msg.setTimeStamp(0.40672126000757003);
    msg.setSource(38119U);
    msg.setSourceEntity(138U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(112U);
    msg.id.assign("TKYHVDVNNHQGNBCBLVAIUSWQZPBJWCWWZEKJRWGPIJSKSXGOSNSAMIEVROVAMGIKWTHUMNALXPQVZPYSNPDRRXCDEGQOUQVNQELUPEYRUFKZULKAVFZMPDJCQAFDFKXWMBWPMAKEBODUKYCNIDEFGZGUYYCFCVBBC");

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
    msg.setTimeStamp(0.9075412576673751);
    msg.setSource(20493U);
    msg.setSourceEntity(218U);
    msg.setDestination(10962U);
    msg.setDestinationEntity(68U);
    msg.id.assign("TOTJKKNXORGCIZCQEJJVNRPWACKVNUIEECXVRIJFNBPQFMPDSZFOZKMKLFNFYBFYMIVBMESYOGCFHIXAGGYWMHBADXEPLXEDWIBPMXOBWIOMQFHTFTGWEUYARPUSHHWAXZCFPLTGWMZIMTZGQDGSXJNJNRSYAWBOQPRUDKUESVZCTGLAULUOZWRVNMQAHAPDZVBVKLCBKJEUOHYNQSPKRCQCIVTNLTALJHDQSRRUJBDXDTKUQHGVSW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SVFFSMYFJGHQAOTZHXUDQWZJWIOBVPRRXVKTGOMPXLBZZRFQWEHVQUPPRSJMUDAE");
    tmp_msg_0.feature_type = 84U;
    tmp_msg_0.rgb_red = 200U;
    tmp_msg_0.rgb_green = 104U;
    tmp_msg_0.rgb_blue = 189U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.03535038131825574;
    tmp_tmp_msg_0_0.lon = 0.029349858966028264;
    tmp_tmp_msg_0_0.alt = 0.920275120038533;
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
    msg.setTimeStamp(0.9963503818515185);
    msg.setSource(18714U);
    msg.setSourceEntity(253U);
    msg.setDestination(59885U);
    msg.setDestinationEntity(32U);
    msg.id.assign("FRIVZYHBBRBZSLSPPZDJGGDXJDIZISAXRLODZIYGNCPHAIQTXCWMGQYKYDSTJSNMYKANLLMROKWCGWGAWHSFAZQJKEBLUEVVFVNDOBLITEOISTIPKYOOCQWRPSPQCCPKTBISEGWBUTCUDVQZUHWZVFHMFXHCYJNLWMXHMFWTFQAUXVAULCFBOPUKDGDYIQXRAUQQWMFJZMXXJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OVTFKEYHIGEALDBGYPDOCKMAADMUKYSOZSTAZLIWDXUWBICGJZHLUQBTIBJQNPWPVQLDJPJIYFFWZQZIVKPNMFTQMXVVTCXREWWOUGJASXFKYOSHFUHVQLCSFWUQXLLAPJCRZRTNTHKOPDEIQACJJDYWBHEDBVCRMWMJMERKYFYBUSONFVLPSWAGBSSHZUXBUILMAJCQCETXLVEYKEGORHGOTZASRPUGNPNRKMDHIIRNDBECZNFGXXMOH");
    tmp_msg_0.feature_type = 31U;
    tmp_msg_0.rgb_red = 115U;
    tmp_msg_0.rgb_green = 9U;
    tmp_msg_0.rgb_blue = 254U;
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
    msg.setTimeStamp(0.6266384281250701);
    msg.setSource(402U);
    msg.setSourceEntity(9U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(60U);
    msg.id.assign("AJEDWRTDGCKHXREGDXSPYHXBBZYTFQCOXVYGNSSWSLMYPTECCENCLDKJTHLUYKEPHJOALBCLJHIPMXUASHGATTHQJZLBQDAHMQJOFKYKZYVQLVTEVLFF");
    msg.feature_type = 94U;
    msg.rgb_red = 71U;
    msg.rgb_green = 119U;
    msg.rgb_blue = 49U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3950561565257479;
    tmp_msg_0.lon = 0.632632634511349;
    tmp_msg_0.alt = 0.8493190243069589;
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
    msg.setTimeStamp(0.10258679910165713);
    msg.setSource(39780U);
    msg.setSourceEntity(24U);
    msg.setDestination(6015U);
    msg.setDestinationEntity(166U);
    msg.id.assign("BJHALWFYEOBCVUUXRATZLWQCMJWMWCUGLHATKPILDDHYRGIHKQSOFSZDZOCTPNGPTJMWZFMALAYIUIKELENBCKOLSZGPXUZIFMNYVPTSBHUBJOFSSVVOELLBBTGTRZGQIKOXYNPXFGCNZZIBMNXCUUWOZITRXIQJDCDKK");
    msg.feature_type = 26U;
    msg.rgb_red = 49U;
    msg.rgb_green = 234U;
    msg.rgb_blue = 42U;

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
    msg.setTimeStamp(0.35750092739996897);
    msg.setSource(28564U);
    msg.setSourceEntity(11U);
    msg.setDestination(49076U);
    msg.setDestinationEntity(70U);
    msg.id.assign("QXBLHILYPCFCQDKAXGRLXWDNTYHEDMDACSUAZQNBSCNRPBUKZXIFTCOINMEXAHLSQQRUFHJDMOBHWECEIVLCFRKGTGAFEEWWMDNQOQOVKZVQYZVBWCPYXYIHMNTKRMJSDBEVBKWBPLSPLULMXGAVTYRIMCVRZGPTOWWJXVSNVJXTGMAIYGDZPQRQ");
    msg.feature_type = 107U;
    msg.rgb_red = 164U;
    msg.rgb_green = 252U;
    msg.rgb_blue = 229U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.021350972458677453;
    tmp_msg_0.lon = 0.00628451749053105;
    tmp_msg_0.alt = 0.3546628436628214;
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
    msg.setTimeStamp(0.41650968438993674);
    msg.setSource(25341U);
    msg.setSourceEntity(115U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.39277889781923647;
    msg.lon = 0.05828711915692508;
    msg.alt = 0.8992396800867858;

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
    msg.setTimeStamp(0.7868009974159504);
    msg.setSource(20491U);
    msg.setSourceEntity(99U);
    msg.setDestination(55667U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.5731308001319243;
    msg.lon = 0.11772597153921971;
    msg.alt = 0.7615986632818535;

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
    msg.setTimeStamp(0.7899939573963884);
    msg.setSource(60072U);
    msg.setSourceEntity(194U);
    msg.setDestination(40894U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.030579515830280957;
    msg.lon = 0.48899955621905855;
    msg.alt = 0.1307548571503786;

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
    msg.setTimeStamp(0.36754574625548764);
    msg.setSource(23939U);
    msg.setSourceEntity(41U);
    msg.setDestination(13143U);
    msg.setDestinationEntity(20U);
    msg.type = 194U;
    msg.id.assign("FHFTQBUOJDTLSWVRD");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.op = 45U;
    tmp_msg_0.request_id = 54222U;
    tmp_msg_0.plan_id.assign("LDLQKEHUNBBZYRHFSLDPHIDWDONJHPIINWJMYJKULMULJYIPPRRLCZQCVMXWFLOEKVXNARVUDKYTWHKPCMZATTXKOVFEQBBQSQQIXVNMYERZCFGABOIXHVJNQZFQOTXXCJXGKBOPWWUT");
    tmp_msg_0.flags = 27567U;
    IMC::TrexOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 27U;
    tmp_tmp_msg_0_0.goal_id.assign("YWHFHGMDHHE");
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeline.assign("MOVGSWBBRUQGJGNDDAQHDWAKQHNKLUVSSQITMAKMRMMUQVMJOQDJZEZEFSAOVNQRLZUIXBOINZPFOVBZBTBYJMTELHBJFOGLHPYFYNXERBTUMHEXPSWGGCOITYFHCHCVJEWDCLPXOQDMSNALCTUKPXZCLUZWFNIOEXVKYQGPYGVECOVPSJPYLFFFWGDNSJUERIQBDWAAAHYWWIKIIXTITTNUZKWSAJHXAFKSDPBUYRVXGCLKMZNPEZCR");
    tmp_tmp_tmp_msg_0_0_0.predicate.assign("UBTNDWKYNBXOCQ");
    tmp_tmp_msg_0_0.token.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VAPBQITKQTPAFZRBPCLTJYJFJCCMOZBFDKEGOBMGGXXYIWCJGTGZCZNXLCZRLEDMIBRZOAMGDQMIANAYGQBNUNAZVXOMSFXFDSYYSUDHVUDXQVTDHPXNRQNEVRBRTIVNFWMKEMDKEOLWPLSLWPLRBJSAVQAOKEHEUDXURUFKYPHNYWWYFBSJWIGCONAZMTXWAUHXVWUZHSKJTLWRGUCJCFQLII");
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
    msg.setTimeStamp(0.06696470362156692);
    msg.setSource(50462U);
    msg.setSourceEntity(15U);
    msg.setDestination(32265U);
    msg.setDestinationEntity(223U);
    msg.type = 80U;
    msg.id.assign("VXECSUMESBCLTLIXKBMTBMPPFKFLHPEJNYMUTNSZXJJDGOJPXKURZLWRYPKKQHEQOOXIBUDKTYATYIRWBMATBDEVEJVFADVZGMVRSJDKPXTIJUDYMWQACMIDGORSJONWWCGLRZEHKQGNNVVGSFHWOKKDCTTLQQZ");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 19738U;
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
    msg.setTimeStamp(0.8835551259382651);
    msg.setSource(58963U);
    msg.setSourceEntity(167U);
    msg.setDestination(29797U);
    msg.setDestinationEntity(204U);
    msg.type = 66U;
    msg.id.assign("HXJCIIFKEZCWTPMASZZYFNMVULBLEWEGAGHOSFEXEMOYKVSNQGBZYBQPWITDLOCDWXXFMYQSBATXDUDZGHOCKMVGDPJBWWUIBCHCRDYPXONHJEZFAAGKJMPNSSOKZRWWSPJKJNUOQKVGSRATESYMSOVT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FWPCKAVOUPMPEPEXJANUYJZHPCTILVRMWJDLIVFQSANBZGEZXEMFDSBWOQJRYXIRBBEMORTGCVVGAKLKBNXBZIWJNGGXBDEAVLWSKUAQCOEFNQEKJUNXTDZI");
    tmp_msg_0.attr_type = 40U;
    tmp_msg_0.min.assign("BKLQAVPIJYWZUNBQJZLTBXGVHEODQNXAWLHOMNGTECARQKTPJZRMYLDKSHOROVJEOBTSHJTDZPMWPRKWMNVNPDMGUYMFSBYPXIPYAPFZ");
    tmp_msg_0.max.assign("YJVYCRTAYNSBVJKAXZBFYIDTEKFBJJCSAUTMWCXZUDRDERUAIEDFZOEBFAGVTRZFQOKQLITVEEPPVXQHMKNUWMSCSHQSDOGQFQHWHMIDWDPLVIJHYGLXHNWHLZUCMNGPMGKBUTNMGLAKMSIHZCVBDWEJNLGJLQIXWHGRQYRPBUUNARYTPPXKXLGSNLXCEUMKFZVSPOODTKCOHOEYMFBLCWSYWRAGNVJSZRWNATBUQQOZDFXJ");
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
    msg.setTimeStamp(0.3356197737120101);
    msg.setSource(58249U);
    msg.setSourceEntity(231U);
    msg.setDestination(36725U);
    msg.setDestinationEntity(76U);
    msg.localname.assign("LJSNQEWFFWXJYDSCXNJAWRWZNFZOVCDNDHKXCGDJHMOVMCHZPLOMBYFXAGZGGPXJVMATNSSVDYQXXEPHSYEOIJZLVPRJOZUISROTLIIUXEAFKCKVEALWRCESMZUSUIGPABVNVLYBCAIZOTFXWMARHLFYVUONLJUDGTARWOKNNTQPBKZYIRBFEYUAMKXMVYSHF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YESTRIPXZSKUBJMFCBRODAHZJSOAQXVNGZOQUACRMMEZTXSJFJUZB");
    tmp_msg_0.sys_type = 17U;
    tmp_msg_0.owner = 53023U;
    tmp_msg_0.lat = 0.712435097851382;
    tmp_msg_0.lon = 0.8773445409711689;
    tmp_msg_0.height = 0.14433438932354514;
    tmp_msg_0.services.assign("UCLACFQEYKGIUNBRYIKRJPINUBYZODHNYPLRZNOOSKAQNBJENDZEWICUXGZYMPWDMDHKVIJBEVMBMGHKEVQYLROPUHGJHVOSTBDWCHYUKJCXOTERHOZHJVFGTLBRVQCMIANAASMSWGEDATWFIATWADTUGCSFOQGKYOPFBVJXQYPIXMQCEVQXMJXOCLPMTFPVDIHWKBUBTXRFAGTLLXPFZNDNDSZXSNUQXYWWGWMEZA");
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
    msg.setTimeStamp(0.05436138179733252);
    msg.setSource(15679U);
    msg.setSourceEntity(112U);
    msg.setDestination(3971U);
    msg.setDestinationEntity(116U);
    msg.localname.assign("NPXGGRYEYQLAMVQUEKWMCJXCWHFVKVBTMXEHDGLNWAXDCIEFZGJUFZVIPIUUGVNSGOEFATFDZVOSXVRKTBPEIPCWNIYMRWSNMGJWAOKPXDWPDQHXMMPBLVQMMHRABHLKEYJPIANIRJUCXMVEYTHBNWHDQTKFLIVQBLZUDLDSLIOKDTFDATYKUHSJCWRNOUPBJSFBQNCHGULJTBZRZCZZYATEGJQSURZOSYNSRQOTKAQZYXCOCOYK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NXLMBHBQYWHFYYPUVVSNBWBVJOPVGEJGNZGHCSYJDITMTOJXRIUCCWYBYJUALUEQKTTZFDAEVWEOKWWQICZJZSVQMHSFK");
    tmp_msg_0.sys_type = 12U;
    tmp_msg_0.owner = 44181U;
    tmp_msg_0.lat = 0.22067288579557232;
    tmp_msg_0.lon = 0.42988092038005454;
    tmp_msg_0.height = 0.9996710667126578;
    tmp_msg_0.services.assign("PUWWKFIXLPIEZQFSBGBAYMMSVECAWVKGDIPYQLEUXGXAYQNPFUHFNHTCWMGIMJIZGTIJEQQKRLSVJSCVTDULTUWAKYPORPTTDDXHER");
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
    msg.setTimeStamp(0.7745630273888571);
    msg.setSource(20093U);
    msg.setSourceEntity(35U);
    msg.setDestination(48361U);
    msg.setDestinationEntity(88U);
    msg.localname.assign("TUDFHNVLWSPVOKWCYIXGJMJNNSXWVUARSLFPYYUBGLOXMRBZKGOJWFRIRHOGAUEEYZNTBEVTFRZBHTPEIBMFTGYBZKBDHMXQBXCKMCTCZNWSRQEZQHQUAUEYAV");

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
    msg.setTimeStamp(0.9026636351165915);
    msg.setSource(12338U);
    msg.setSourceEntity(149U);
    msg.setDestination(12277U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("AQHQXEADOZDGCIUTAHUHZNV");
    msg.predicate.assign("ULFUIWSKEERWDZXJCAXALZOEFVNCLLRDJQPYBKVEAQYENROWBDYAIWWDBEBTALAMRDCSJZUTNGAQF");
    msg.attributes.assign("RBOKYZNWHOZQDOITPFMXDRICLWARJPGFRAQTEYJDSXLCZAUNPSDUMDXKGVKIHINGJYEYZPRIVAKXOMXMUTYADKSQEUNCVUXHKPJRBHTSUGRMOQGLEEJYFZWAEMDDSUBCTGWAOBFOTHRNEICIILXJLOPNWSGJHYSMRMKPIQV");

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
    msg.setTimeStamp(0.6570589062472839);
    msg.setSource(33840U);
    msg.setSourceEntity(254U);
    msg.setDestination(32997U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("LJCSGJRWZHCVXIPZECGEJGHDFMXWGJYBQUVDTXLTEKRRBQSTEAVQOAYZMQGAJEMHAYMMSKIWWYEFSOJCBWNXNBYCSPSHINOHGQNMCYEYPFNSMKOOFTHXIUJPLPPJQZFDJDRTOIDXAVSEVUTZBMQIRMFAHERANVTREKNQFKTKQDBLZDFRVYKMUUSTFPRZXVTZYWCBWOLUBCGUOLGAGDILNUJVCPSWRAKGK");
    msg.predicate.assign("UVOLFVICWSCABKVEVBQDNINCFWPJHTAXOSGPHKNNLNIFHEGJNYHYQGORTPZGFWPSQKDQYKZEOKOVSURBUURDPTNHXCMWLKPVSSJZDANGEZJAXBIXYQUJTZDSREWFUQMHLXYOCIKVBBSPWML");
    msg.attributes.assign("LTBXFHBZGXYLBBAPQLGEWFPMAVILLZCWDCQLUYJVSIDLANPGAITOG");

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
    msg.setTimeStamp(0.27693432924933326);
    msg.setSource(29458U);
    msg.setSourceEntity(163U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("VMZWFKUVEMVCIIAKJUEORDBHFYPXMFSWWFCXAZRIHDMKQDYBIKZKPGERXHTSTUCSHSABUGWFOOGIQCIEBTTJNSDAVDGMQBKDHZILWXIDZXRBBNVDGJVWLZYQLZUDVHXACWNYSSTEELKCRJGNASXHLABMJYTX");
    msg.predicate.assign("FRNVNQUWTXLKTMQMLAOKZZVLNWUSODWJBFEOIWHAGQGEUNLAAQPXZJGZLRKMXEGRNKCMWLVQRXPRLKFTOAPPYTLJIYJQSUEUPZGHYNBDJBSZFKHMJNUMOZQMZJFC");
    msg.attributes.assign("GHSJMAREEXONSOYTHTWPOOYDZXCSANBIJYQMJRILKPZNMVYUJKNPYXMCWKIETALAMWOWJBLCPMRHEDCCAKEWSFQVYBKRPKRBBPFBUVQZOOFZCQBHTXYVPZPKHDXXVIJSLUXSASUURWXFFWUOZQZSPSFVGMFXIVENLRAZIGGJNTWGQNDUDQJTTCFBSLQDCWTWYUTIEGMQNDUAUVPNLBZLKERRGZDLCKACDHHOTVHGEVBJXINQIMAFMKHEI");

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
    msg.setTimeStamp(0.15656373081774633);
    msg.setSource(57253U);
    msg.setSourceEntity(4U);
    msg.setDestination(9498U);
    msg.setDestinationEntity(218U);
    msg.command = 190U;
    msg.goal_id.assign("GUDECTCTIGZGDVRKQIMFVRNWFSG");
    msg.goal_xml.assign("ZVXDYPCUVJDBMFLRGCWCMQESBEISFQOVMXIWHTTNDWRLXBINAJPAJWLHSGQLQXMDZEZANBGIFONDPOFYTCBKZWTVAGVZCJVQFCUAQUKYPBWKJGPRTCMSFEMTHRHFFNDKPNBZXIWJSJFOUCYVHQADEHRHKPTXVEKLVAWKODWLLAVZTYSMPYRRGRZULYJMSDGQGKONNEJGIPKAUZTXMABGBLNISJIIEL");

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
    msg.setTimeStamp(0.5667261544232193);
    msg.setSource(50894U);
    msg.setSourceEntity(92U);
    msg.setDestination(2531U);
    msg.setDestinationEntity(138U);
    msg.command = 197U;
    msg.goal_id.assign("UTQMFVAZGAYWHIQNWJWHOXZTKLAWLPUMLIVGAVAPESKFNPXJFRWZSKLDOJJRDNYEZ");
    msg.goal_xml.assign("WBLJODYSTQILMVKCQXOIXIIGGMANOYXLNRHMAJAHMWMGEOWJSBOZJJTAQPF");

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
    msg.setTimeStamp(0.7518037533075227);
    msg.setSource(31171U);
    msg.setSourceEntity(85U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(43U);
    msg.command = 74U;
    msg.goal_id.assign("NKRYCLIUHGVVDTFCYGUABPPQWILCTVYTLMDEBWXEEMQSPJVKCHAAGYNNJMYPZHTUOCKMGKTIDFJABGXPFIAWVCORXWVGHNZHQETUOGZTNCAWZJHAMDTCZMPDEVQQQVRBOOOLSNRRBFVNCJHANRFH");
    msg.goal_xml.assign("XBVEJJASHAOVKOEUJSHTVMTFVRFZMLZOSCNXPOWTUUDNYEUWLTLURBLFKBXJIIQNWHZKAIDHGMPXOYPAQKXUAXHWEDBQLPFMPCRYLHBKSNJGGYGTVGQGVMEMSDZJCMOWGCUDJAWYNCKXRDJEWKFXHMOBCFSFFTPYVHKQKZUTMVIDZZRYVAFXPTCTWUTNEEWRQWIFJICNPABESQOLASZCKRPHQSALUOBSYMBIPYXZNJIHDRIZNLLGEGGRQQ");

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
    msg.setTimeStamp(0.6932989932935656);
    msg.setSource(34194U);
    msg.setSourceEntity(237U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(102U);
    msg.op = 60U;
    msg.goal_id.assign("XSDPHPFKYLALYPZPQXRVKNETIXBJSAFODNQKRVXCGDZGHJYHDWKIKABIWGW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ILMKCOSQUWMBJJNFKLGUPYICKUZHHKIEHCILAREFAYPWFAGWVKPXEOJZKBBWJQVVHCSNXJTKQHRBPDOMIVBKRNONTOFKBTGOZPUTRJOVLJMSTPSQORCGYYDZGPZIECJBWXRQXIQLXAQQGYNBEHKTMVNSWDHMSUICFFDSW");
    tmp_msg_0.predicate.assign("JZEBWSDXFDIHUZYANHVDOOQPLFWZCPQKQYSMJMGJLCRIPPROETSYGUHNAZVHMOXVHRSOJZFPXKKBTWHBBVPSWYEVUDUVQTRGLKEPRCGADQNAKWBKKXQIXSOYWPQLFTRXJAXWQOOLWCUGNILZRMKTLQSBAANBGJBEBHCIVTDOCFJAWRNFMZXJYNXADSVGNDIS");
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
    msg.setTimeStamp(0.3672433787598012);
    msg.setSource(41697U);
    msg.setSourceEntity(63U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(250U);
    msg.op = 108U;
    msg.goal_id.assign("VPANARGDDMTPIWNVOVWINLQIHGJBNHSBMOFHADWJLZLCGABUXZOYMUFTIUICGEQPEEZBTN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VCPNJBLSLMKESXIDOOSXAGRUXARXYBGYMOQCPSXREHDOVXWJVWLNAIJNVPIZUPAMVXLKEVKKLKUDDETNFJYXMJBFDRYUXURBJFEYJJDOWSHCOMSBAFGBKIEZHOIGEQQUAGZJHVTKQVDRWHFCRMNCAMQUQHPLBMHFWHPGDEENNZLYGIWZUZWSTTQWLWQGZPV");
    tmp_msg_0.predicate.assign("SUQHTEDFRVYIHGJGXFTJCKQGLVUZCVTKHGZPIYZRXDTUJVOEBLROZSTTDENOLGWMGIGMHSBPLMHGDPYJYCGXXESXYYFCJJLKPBHLNFQILUCSQIOQXEKEYVWFCFZJNXJADWWQEHPZITGBHXMOTVJSWKZVFMCBRUNAROSAWADPQBEXBILFKOYUKAWTJEUOOVBZRIKPMARHCYAFWSFKQIQWXZUWPTSAN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ROSTNFTFCWXGDAVWYKQJJGENBFNVJGSAOGJHXVFSAJDWMKJHCPIFBWNTPYTVPBQYBRPUUQUTMNURNLIYQIDBXLV");
    tmp_tmp_msg_0_0.attr_type = 120U;
    tmp_tmp_msg_0_0.min.assign("CFAHDAIDQVHJQGGJURMSJOLLNNQOCDLXBGHEGPRMFLNWFRNQVHUSSCVHAOYKXYMASCGROFBRBACDQQNDVZWHQSPCHFLMNEJBZHSJAXIXNWITZIBJTXUMEITWUIAUZTXHDH");
    tmp_tmp_msg_0_0.max.assign("RNXRCYZBBYSCFHMSYRYGCWNDLTUVMMGIJWYRONCIGUOOEKVGZUFQAESFTANSSGNAJPEOVIKGCRWGJVAHKAYNFFQZMWZPVJOXBVPAFFBNYVLBMKRRPWQBFHPVXKXLOPAMXWJYAUKVQDKKTRSZRDOAUUMXSDPQVZZIDLXQNWFHZSLXWXNGHODEDTUQESKWUKCQLLMYHHUGTTNDBLTPIYIEGIBQCDOFATLEBJJWOCPUBZHHJZDIHEMIESEC");
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
    msg.setTimeStamp(0.8381236276588966);
    msg.setSource(56303U);
    msg.setSourceEntity(76U);
    msg.setDestination(19913U);
    msg.setDestinationEntity(213U);
    msg.op = 252U;
    msg.goal_id.assign("DJLEGZLMARINFQEWIBTROIWMQBGQYYCNUJTCSPBLVWYNVIYHSWXXLMSEIMRCXWLKWEISCZRUHAKRPWVIKHRFUFDEFBPHQQGAZPXQATXUTREJTQAUDVFZJSRZUJODGJTHLAV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YCQXDILVZPQAPCTEUEXLKGLAAXJXOOINXPDWWGGECTUJEOJKPMEAUDGYZZBLSJNALIGCQDFDNTMPFKCXRVEPDROVVUOVBGABBYHXVKKMFDTMWYLZIFCFNZ");
    tmp_msg_0.predicate.assign("LGVCHKHSYTQCVOALUDGYOMWLLGDMXTXUMLBKCBFLJGGVCFTGAURSDWZFRPRMJBKXCSJBXEZKOJMFIBNHJCOLHVAAGKQIWLPAWFBXQVZANXGDSBMGQI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XBMXKOBOURQEIFNNOSKGPMXZLRBSMZKFWIHJGGDOTICIPZVPTEFRUEBDSQVATPWHKDEIFSPZYLDCXOVHTEMZAVAIBYVMLARORKPCVLSTTAQGYJNJQEWUGIHJLZNLGTTPRXC");
    tmp_tmp_msg_0_0.attr_type = 58U;
    tmp_tmp_msg_0_0.min.assign("BXSCCSCBPFHQKJBBPULQWOGFUEPWNLNJGPQVEDQDRDYSRKVXZXQWPCCYKERLEEAOLXNKSAFVZQFPHZAHLJUBTELIRVMYLMMSBKHEFUXYBKIUYJRNEKNAFIEGFOVDBJAXWUDGUCSHLMDUNAI");
    tmp_tmp_msg_0_0.max.assign("HZITVLJMDMADFNDBBHCULHFMEXWCDEJCBKGDQSYKOKOKHSPJRAHFCINXXKQTWVSJFOIZAODRRJTWSZDWSBMTEZQPYZQYPBOXKMJZHYSEUNUGUGERIUBOFZTDCNRWRLEAYARJWSKLINHVLPQVBLFLYTIMXPIFNEYLMQAPCXKFYUJ");
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
    msg.setTimeStamp(0.3227180205813356);
    msg.setSource(19486U);
    msg.setSourceEntity(233U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(27U);
    msg.name.assign("LBOTJUIAHPJRGUPYHMGSPXHKPLQMJRGXOFJMTENEQPZITSQGMKBXOZVTWBRNJEQCKGKJYUCHKSPHOITERBCLCUSUVJYCEINFZNRZLDKTDQEAFGILYAMIKSQCDFZAOPZVQHYWURFNXMUINEQAFWPOGULBEQKVCXNIVCOTYMKGXTWWZTRDDIVGMLAOS");
    msg.attr_type = 168U;
    msg.min.assign("YKNGOHZNQRUCDSTGIUUHLJJSSJRMMPNMWXEISWYFDLMPTWSTKZZSPXVYAVKFEFZHXFVVGJGAHOBHVEQVIDLXBVKMGAXMFHGAADRUMTEWA");
    msg.max.assign("LLGGGDHMPFQKEHVJGXFAHMVAWCSZEYWNRAFMHMREJTWGMLOYNKINLJFKCRXNPIBTLRQXAXMUFKSXMRUGEIZVCII");

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
    msg.setTimeStamp(0.04885518022168511);
    msg.setSource(27614U);
    msg.setSourceEntity(135U);
    msg.setDestination(54358U);
    msg.setDestinationEntity(118U);
    msg.name.assign("VQDJGNVLERPPINBCVFDMQGBMGDGQKEZOXFRMBOYBSCKZPWHMPPWGCINRAFVHQAGNYKTTJNBWUEAKKGXYIJDBEYZWLVJLROTSWHHKVMUXXAWZSSPNYWAOZCADNHPISKFFPQFHOGLVSIOHEKOADTJWCQRBHKLIYTJQGUUSITTFJZGZUABLREB");
    msg.attr_type = 96U;
    msg.min.assign("OZXECAOSIXXQFGLK");
    msg.max.assign("UYBJFSPGBXBRLOXIREGPFCCDRNHLHOAECVKNJXNFFUQTUJXQOSZYGZURWWBDEYIWHUHASWNJRWMVJBZKWRPIVPLXKMDDLLVGKYJQOKMHTTMIOGUHZDTWNGTQYAACBNQMHEJOTZEVJUIZBBEV");

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
    msg.setTimeStamp(0.5582027969768794);
    msg.setSource(57358U);
    msg.setSourceEntity(120U);
    msg.setDestination(58671U);
    msg.setDestinationEntity(37U);
    msg.name.assign("FYWIFKCNLXFAGZNMFEQMWKVRHLYKUZEAUZJTOJRZHOJOJXBDGSIUQFAZXVOBKXQTUQFVQUHYRPCJG");
    msg.attr_type = 223U;
    msg.min.assign("UGBMAKCCLPDOMQHGWWWAWB");
    msg.max.assign("HQHHWEWJJYACAAOPMWQQSTUCDTYAFDOLGKCRPQHSDKZJPCWUQDMICKVURHPGXRRWRVDWJBNZKSTXEJTXEIGBAQMBBSTMZNIFCIBVSHUV");

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
    msg.setTimeStamp(0.047877209514971875);
    msg.setSource(36674U);
    msg.setSourceEntity(250U);
    msg.setDestination(60443U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("HTWZKVLGDZQDYSFPRZITOHIEETKUVCFDAJEKNRHAMBGASSRNSOJNJKIWIEXWUUCURXICPZVVLNABZDSWUEAVVPQCTJAPTBMZQPUKBWSAWZXICLBONSSQQQPGYYVNQDAPPWJETGOUPLLJWMBEOJJVFHKMCRFXKCGISPBHHWMDDETMRMBCYXHXFUXXVOLIJZUFOQDDLSRDVUYZGLNOIFCHRERKYY");
    msg.predicate.assign("ZGQPUGRDNLIUWZFLMYP");

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
    msg.setTimeStamp(0.9848220849609864);
    msg.setSource(63422U);
    msg.setSourceEntity(28U);
    msg.setDestination(60193U);
    msg.setDestinationEntity(225U);
    msg.timeline.assign("UGRFJCLEBKZXVLZCB");
    msg.predicate.assign("OMPQWMWTNYXEREUUZEBKHZLPEMBVGUSRJFWSLWPWDOLAGQLMUPIASLJTQLAUKYKCIPR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PJCEAEPEDLSUYWDAPNMQPSFOLYXXLPTMDGIMCWWISLZVLMKOZISNSJBOUIYCHLZFUNQQOXBQSOHDTBXBVFKQJWBVTCETBJEXQGKGKJJRJCTMBYLQGZFYDVDZUUDXNFPACORIQREATUFNFRHVFERACPKHSWKVURWMYGNIUTVORXXBMZTFDUCHWMFHHGALNMUQARMDJWXEZCIOKIZWZXPJQCAENHTANHHGVRLOVLGVZ");
    tmp_msg_0.attr_type = 73U;
    tmp_msg_0.min.assign("TOCPREZIWWGJAIQWPJTEMHUDBEXGZWYHGMNJGSXQCAVYHJTLTJADHYAR");
    tmp_msg_0.max.assign("VUJQQETKMZHBHMDLOLUYWXWCVKBUOWHAVAAVRGBQACCBKZAWGWTNTKVKGHVCCNWFPFOCNKPKAEFMLZHMYFKESPHODDDLDIMIIZXFOHSKUSLGRYJBZEGRIJUMLNDHHRQXYMXHRILBXDRWXGPSQXOTYVDGJNMUPQEIANEGUOWRJRWBCGTUMJQSSFTFUSJIYQELTVVP");
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
    msg.setTimeStamp(0.5110099014739453);
    msg.setSource(39371U);
    msg.setSourceEntity(41U);
    msg.setDestination(7448U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("FCXAEMLVQKLRN");
    msg.predicate.assign("FHAIYIWCRRUYRXSYHIBDAWTKHCGLBGWHOFNNSDPQQPCBHNYPAWPGPEZUJQIKXYFVXEGYJBWHLRDOYBQTNBYDQNMPFJBNXRZIVCVSDSTCUEHURWDHQVWSWNABEZOIGXVUETU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OOUDRCUVYLMUHNVKXSQNLEKLRWIHLRP");
    tmp_msg_0.attr_type = 203U;
    tmp_msg_0.min.assign("GLLQDAOFDLJFPGBDCYGSTRQQVVWTVTADADCZIJJBMLHQOTKKMTIVZPTPKIXJEIBXXEENSOYAMEFOLWHJBWQLVCUNVWCZTSXRCQCMXPYCJPPXYFVVURGANGBPTXOYMSRXPELDHIMYPZNZRYVEFAZQFEQMNJSNHZWICYKGGBKMEBLZDRCOIMWOUUUHUEQNIVHIJFKJISBYKSWTFRCSOUPKONBRSMOBHAGANWZYQUSDJRHTALFGEXALDWGR");
    tmp_msg_0.max.assign("YRMWXHCJQTPIISLQPZTCFBSIGUHTCDMYJOYGINNRKUHHKWJGFHTCUUMDZGKBPTLCYOMIUANZBTVGGNZKOOWQZJEDR");
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
    msg.setTimeStamp(0.8325493795652045);
    msg.setSource(30191U);
    msg.setSourceEntity(196U);
    msg.setDestination(56627U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("LMLRDGHYSJMXXQFJMKAWWHKHYXHHRZIBDVYVZUWEQYUSCOWSKMXRFKSRGOKVIOWLBPBRTDOFCJNTQVVDIGXBHPUUAPXQYSQLOEENNNAPBDGUIGQSLFLMQUWBPCFITEEXMKJCQX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HPGMKWRSNTGYDQSAFSESCHZWTEP");
    tmp_msg_0.predicate.assign("YPIBFILVXMIKRYMBFAHQOXSPVGZPNYEHRGMYLROFET");
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
    msg.setTimeStamp(0.03732627686703771);
    msg.setSource(8334U);
    msg.setSourceEntity(66U);
    msg.setDestination(40178U);
    msg.setDestinationEntity(211U);
    msg.reactor.assign("QGDMSXPNYEBTYSJHMRVCMIILKWVNHHWZMTVGTBIOEABOEDEJHYNSDEIAUTWAPPNOSVLETVPZJQVBTLQIHNRKGZYCDMBBYOXFSLIOGOZNHQRIGMMCDOLMZMYTWCUHKSPBPGOXPOFZAWXGRAKGFUHWTYBXKWDCUNUGTFOFXFUVZHXKAILZRYH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CAVFBCSPDWWMQPREHKTMAWOFQCROJNCXQKDNZGBTVDHFXGLGFHIKWRWTOIOLBAYHZKUCEDZAHKXRSKAMOIQXZYDQWTDLUQNUJEOHEJDUGSVFPHKQGEUFNGGULWGWYVXSVCITUCZDFIYQYNPWJEBJKEWNTZSRLPFXSMVLXVXBOSHX");
    tmp_msg_0.predicate.assign("RMIXMJPQTAOGHGEDOBFKMFZWZVAXXVOPCIADVKOGTEQVANTPJAHFPSGPERFSYSIUNWINLYEXVRVKPFBZJLHEWKBWJBCLRSNJDREIFYVFPKXFUYTWUOSJQAHBWHMSRJRLKNMRRYDAGMOZCVZBCSTGTIAQDCKUZQNULXGTXFDGTLICOEHWLGSMYLEXONHNHWUUWGQMLZRKYPE");
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
    msg.setTimeStamp(0.8713058085764487);
    msg.setSource(51192U);
    msg.setSourceEntity(118U);
    msg.setDestination(8238U);
    msg.setDestinationEntity(138U);
    msg.reactor.assign("PYKEVFRYWIZHXJMRUKQGZHHXQPLAEGQUFMZUCNXXMUTTWNGOKYYOEVBDFFHYFIQJYNSPKLCCWKLEMLNWBBWKCATRIZANVMLIKLDQIAPXBJAMEJUTAHEGVIMCOJDBNMAYULVPTDHEXZINZTWORJTGHSAYDDBGCOYMEIHPJJDCNLRUYQSRF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FGHAOUKCZAJUWQHZS");
    tmp_msg_0.predicate.assign("XAKPNBEDWCFONOZMSDCSQJVUPKUDZLLUBIOXXCZLWWOSCHTKSELHONHDWVCRCIZLMGYSGRFIOYHGDGMQKQKZYFBBPQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WGOIIOJQLMLPOSANJXQWUVRNIJCDXDRKDUEHNCALZGQYTDBGVDUJUJFCHUMBZZCHEBAHGSLCUTFWPDXPVMIPCYTJFNPTWFRRVLHCOWPVAKXMGEQAPJJVGQVKITQABPKHQQBZXOFEQMRKYDMFYYNYCADNFPHGHYE");
    tmp_tmp_msg_0_0.attr_type = 170U;
    tmp_tmp_msg_0_0.min.assign("IUWPMZPNIZ");
    tmp_tmp_msg_0_0.max.assign("APNUWAQKXLEMHMDFINQNSAOMZOUZPXYZAMCQELFPHVGPYKDNICVBQVYKSGFOEHRPZUGNHRIQRROSMKXXSCYZIEFYKIJXVGEWIDQOGDLSSCXBHFWVTFZAPAPLBTMCGQNUWFHTVYUMKJVLLEMEUOJYWLKTTVHDCFLERUJGCTZMITBYOU");
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
    msg.setTimeStamp(0.016450971600183717);
    msg.setSource(50804U);
    msg.setSourceEntity(146U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(25U);
    msg.topic.assign("CPTAASALDCOJSBAHBWKHKTSURJTTGBUQEKIWOJFEJOKZCAHZUJFTPPNYFSSINDMLHOQXSYLWUMYZNTXQEFGXZYDVNWWNBIRXQIZJMRZUPM");
    msg.data.assign("AMBWBMPHEOOMSSIFPYFNZMVKMRDYPXWUTKLONARPTYCUMUZKBJMUVQCDLL");

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
    msg.setTimeStamp(0.8446940591672857);
    msg.setSource(59897U);
    msg.setSourceEntity(17U);
    msg.setDestination(58374U);
    msg.setDestinationEntity(211U);
    msg.topic.assign("OZRFWBSKIGLZAYIYHULSJMFTRPPUBANFGZPIFLANCHRTKXEJCQZTYKCPOTZUAPYHDGXLZKKISAJOMYJZOSECVTAH");
    msg.data.assign("NTWVJTGPSFMIGBVRIUNTJPYAUSSVDFCSRRMXBLGLFPHCKQXKYAHPTOBRHAPUHTKMUREUSTXNVECEKCY");

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
    msg.setTimeStamp(0.5866976048692992);
    msg.setSource(21845U);
    msg.setSourceEntity(139U);
    msg.setDestination(16761U);
    msg.setDestinationEntity(131U);
    msg.topic.assign("ANILSXCEEANUYMQJJZANMWIONFBLLCRSVXLUVCSVYBGLNFCFDYXLWOVZZWMVFDTROVHRLQEOTMIJWRZSY");
    msg.data.assign("JHGPXETEWCKQVDCNWZWMANZUMLIVTHPQEUXFSGIFPJHUPCVLVAVOYYPGLFRWTKHXKEJFPRUCSGGBYMNRNTCBLAXXZNNODVEIYJDMILNGHYBQIFQSJBPHBFTXMJYZMUQHKXOVKWDDPUNCCVYKSHAHSCJAXMARQSIBVUFEZNQDQASZAKYJBQYRGZERWUDSEGEUMCVOTIGIKRZRLKBCDMXELRKAUGOMNWLJIJOWS");

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
    msg.setTimeStamp(0.6802083590493279);
    msg.setSource(34037U);
    msg.setSourceEntity(78U);
    msg.setDestination(17623U);
    msg.setDestinationEntity(93U);
    msg.frameid = 20U;
    const char tmp_msg_0[] = {-68, 74, 34, -2, 116, 33, 47, -15, 53, 95, 3, 52, 24, -65, -87, -15, 50, -24, 82, -86, -20, -104, 53, -70, 24, 49, 87, 60, 81, 31, -22, 1, 4, 126, 116, -64, -89, 34, 11, -24, 51, -64, 53, 27, 46, 6, -76, 58, 19, -37, 42, -51, 14, -5, 123, 106, 66, 4, 32};
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
    msg.setTimeStamp(0.5714815206029811);
    msg.setSource(41279U);
    msg.setSourceEntity(136U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(45U);
    msg.frameid = 78U;
    const char tmp_msg_0[] = {-57, 20, -23, -31, -43, -89, -38, 75, -68, -22, -128, 122, 90, 47, -77, -105, -26, -124, -81, -111, 96, 111, -46, -80, -83, -14, 78, -36, -84, 108, -128, 88, 123, 124, -49, 70, 22, 59, 48, 126, 12, 124, -54, -13, -77, -29, 25, 11, -26, 2, -94, 105, -101, -93, 22, 68, 85, 4, 66, 23, 90, 124, 81, 67, 55, -21, -114, 124, 81, 4, 66, -33, -61, 77, -98, 108, 28, -36, 80, -122, 23, -2, -123};
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
    msg.setTimeStamp(0.8531825299416271);
    msg.setSource(29352U);
    msg.setSourceEntity(4U);
    msg.setDestination(27157U);
    msg.setDestinationEntity(24U);
    msg.frameid = 253U;
    const char tmp_msg_0[] = {-110, -8, 24, -75, -38, 68, 71, -57, -6, -2, -102, 95, 111, -10, -126, -85, 66, 115, -75, -78, 25, 1, -70, 9, -55, -65, -23, 95, 38, -10, -17, -127, 77, 27, -120, 70, -6, 47, -32, -88, 57, 53, 90, 107, 64, -59, -116, -18, 23, -18, 32, 104, -66, -47, 113, 77, -76, -21, 82, -111, -20, -72, 33, 10, 49, 4, 92, 12, -38, -39, 47, -19};
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
    msg.setTimeStamp(0.902406091552082);
    msg.setSource(41638U);
    msg.setSourceEntity(241U);
    msg.setDestination(45898U);
    msg.setDestinationEntity(176U);
    msg.fps = 35U;
    msg.quality = 62U;
    msg.reps = 97U;
    msg.tsize = 66U;

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
    msg.setTimeStamp(0.6460044169573574);
    msg.setSource(23322U);
    msg.setSourceEntity(192U);
    msg.setDestination(59842U);
    msg.setDestinationEntity(217U);
    msg.fps = 65U;
    msg.quality = 195U;
    msg.reps = 67U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.2743675589964061);
    msg.setSource(30168U);
    msg.setSourceEntity(169U);
    msg.setDestination(32903U);
    msg.setDestinationEntity(88U);
    msg.fps = 236U;
    msg.quality = 137U;
    msg.reps = 49U;
    msg.tsize = 138U;

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
    msg.setTimeStamp(0.13294082580924582);
    msg.setSource(58163U);
    msg.setSourceEntity(63U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.42816794657536117;
    msg.lon = 0.27669910933344255;
    msg.depth = 12U;
    msg.speed = 0.6894060595080532;
    msg.psi = 0.30629162496477214;

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
    msg.setTimeStamp(0.5821507203569198);
    msg.setSource(9374U);
    msg.setSourceEntity(65U);
    msg.setDestination(36461U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.518570182550166;
    msg.lon = 0.2371029621587678;
    msg.depth = 129U;
    msg.speed = 0.9196245414106711;
    msg.psi = 0.32870184719206685;

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
    msg.setTimeStamp(0.35227335099120083);
    msg.setSource(28053U);
    msg.setSourceEntity(24U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.48712163311106826;
    msg.lon = 0.9962228382835713;
    msg.depth = 173U;
    msg.speed = 0.8628478975931929;
    msg.psi = 0.3630188868715296;

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
    msg.setTimeStamp(0.6018037385023002);
    msg.setSource(15612U);
    msg.setSourceEntity(196U);
    msg.setDestination(40749U);
    msg.setDestinationEntity(112U);
    msg.label.assign("SJCEHXGULAVZGFZBUBRHDLZXZPFCIOJIYSWFAYKZOBKPPDIGSOFQMTLSDKMXHLZYPFPMTYJUWQFUXCALFNSVQXVRYGTCSYNXNXHIBSKTDRKUOELFQFBPHDHPGRVDOYKT");
    msg.lat = 0.14606163101639247;
    msg.lon = 0.2308059186500172;
    msg.z = 0.4892586895394455;
    msg.z_units = 133U;
    msg.cog = 0.38140265169620247;
    msg.sog = 0.16085501041159467;

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
    msg.setTimeStamp(0.6957376250510725);
    msg.setSource(19558U);
    msg.setSourceEntity(49U);
    msg.setDestination(45030U);
    msg.setDestinationEntity(129U);
    msg.label.assign("GMOAWKXZUNKAHEMSUGIHQJNFALXTJZKONMAWQRRPOILIPVPFWCWQDOORREBFCPYNRAYWBLZXBBKQCEOVEZLVYZGLUFFLHUUVDDVIIYDAIZRNLNEFAGBTMSBYBVHMJSHXDRDPVXEBMNIYSTEPRWOJEGWMGQBTMITHDGFDVTGKCCCFYEJKSYZGPPADUNCHOLKA");
    msg.lat = 0.16163025423688449;
    msg.lon = 0.06598250175861009;
    msg.z = 0.29118520520799884;
    msg.z_units = 139U;
    msg.cog = 0.5344066872819743;
    msg.sog = 0.5364373272517796;

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
    msg.setTimeStamp(0.3607067445697951);
    msg.setSource(19565U);
    msg.setSourceEntity(73U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(204U);
    msg.label.assign("POSZWCKJVJMUPNZDKABOAEGPVQKBZOHNCSGMQYNVWVTHXBLCINLRSULYSCQCRLKDSPJVYJSRMGXUNKDABNRQHAJPTTOGFRZQHGARAMEVAKGVEDQJHCSAZXSPBBEEYOFNHQAXHFDVBIFYWIMZGDGXRKMJUTYFEFO");
    msg.lat = 0.7009295817861619;
    msg.lon = 0.42342249382205066;
    msg.z = 0.8954885603519203;
    msg.z_units = 111U;
    msg.cog = 0.7408979358829652;
    msg.sog = 0.5153535545441372;

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
    msg.setTimeStamp(0.42658028908043566);
    msg.setSource(16832U);
    msg.setSourceEntity(181U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(162U);
    msg.name.assign("CMQVSPELTHCIKEQGNVPLHRAGSDYCZJVGLWUHIIWNMISYJRGYXQNJIWZBWFYMKQOKXJCRVJUNBSFSOXACEUOLULEOWOTHGPLFDEMSDIWUKAXZVZHUEZDHIWJYLOHZDHFDPCNMDWGLZCDEXHZRPFAJ");
    msg.value.assign("JTZGDSDMBMIFMYALOJXJSKICTCRAGLZAGBLJHAZUQXBKIIFRBRIAPPLQWGHQUJRAYNOBTNXLCHWRZMUDWEKTYIXZMAZUCMCNHGXPQPSSQXUTUETKKCRIVCAUSDYGDXOHOBFJLZUMPGLVUIOJMYNJTREKYVQFOXPDXIRLDNWGSBHZLDBEOPWRNTLAVQNARYHWQZFWHKCKFECGFHKDITEOSFPSYEHVTVPFOEBWEGVXJQKJNFVOYSMCNZDSVUE");

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
    msg.setTimeStamp(0.5314028615739321);
    msg.setSource(8580U);
    msg.setSourceEntity(89U);
    msg.setDestination(32715U);
    msg.setDestinationEntity(13U);
    msg.name.assign("EFAJBOVAGDQNDSUGCCKPHEGHLZRNNWNZPWXGHUFHEFALVSRWQFYTUACWLAKMBXPUJOJRDSMLYGHTFXXQVHROTLPJRAPGHEGQQFBJAJBTSDQMXISGBIWFCZVOGZSDZKRYCUETCXPZRZJHDINTKTQB");
    msg.value.assign("JWZBVQNWXHRMJAGLPUNNKJTNDQCASYIWEBVURRETSPGHFDLWHBSYIUVVLNXSHOZJWYVTTRDZXLKXUGVICAYNEKTAZABRIFMQGBBDYNWEIVKBIJWPCIMGDOYNBOYLHSRCFKNOJSFNFYTEAKPORBKHLAOFECUPTEIHCCXZKOMIHYWDEOMXEQTKPLPQFCQMVGMCERJPIQTZTMGOGSHQWPDZRUVVUDUXJJXUDZAALXROZABYGWJHM");

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
    msg.setTimeStamp(0.45782283677188085);
    msg.setSource(29850U);
    msg.setSourceEntity(247U);
    msg.setDestination(54933U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HRCLKWYEUIYOBWBMCQAGADAPQETJPYFZTPYUGDFOKQIVDBOSKGLMXZNGKXZRAJOHXVIWFURACIZYNRGKMWJIZMMVZUILFSCYHFGPLWBBQAJSWJDNXIVQXKSOQQXEAZHFNCPSRGNSERKBDHPXLSNCJEQZIGYJTFTHAKKAVLWNNVTFYELNLLOOXMCDEVEQRROFSBUMDWEGUTTZDHPROPAQVKIDCTUTTBBCMPXMW");
    msg.value.assign("RDGYAMYZCRBETUHSGTHVUSKMPYBWOTWNRSHLVCKUGYQFEWWYLWFMDQMGLXNDPATCHAZFHJ");

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
    msg.setTimeStamp(0.48912464272808787);
    msg.setSource(26115U);
    msg.setSourceEntity(66U);
    msg.setDestination(25566U);
    msg.setDestinationEntity(22U);
    msg.name.assign("MSNONORZZAGAFJYDIAUWRBCGGQVWFTQTZMFCPCBXZSVXSWRHSHWDQUKDEYKAPLLJQZHJEGKIFMFGQJCFISBWULJVOYJOTHNXAHBKIPYZXRNHWMNTDEDVIJCUSRZESGQDBVXGOKQLTCYTXOBWOKZTWBVDMILILCPTDVFVYGVECMYSNZNBEPMDLPEPQJMQEXHJREAVOIBZKGUBNNUUUUGRHTDWMLIICYXQLAFHOKRLHAETASMYNXWORPXPKUFAK");

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
    msg.setTimeStamp(0.6874068497335623);
    msg.setSource(49983U);
    msg.setSourceEntity(215U);
    msg.setDestination(36194U);
    msg.setDestinationEntity(170U);
    msg.name.assign("RHHNWUJJIPCVNEXBUTYFATSTOGEJOPPIOSVUFQQGOIBAABDIIEMTZGW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQDNGBJXPJHJWMZQHNIBRWDVBAXXDZEIAKQSUGBAULSOZNVDOVQDVBGZHCDQYKWFPLFOGZHECRHSOYIYLBJCITSAHRRZSTATMGSLHRLLJGZNQEUXKFZRUXONTMAPVPRZTNPYXXHOUKLDFUSOMBKTLEJCWELQFIFUJGINIGJPC");
    tmp_msg_0.value.assign("OLJFOILCGJRNIOLAKEUDLKYHGPZVMZKTLPAG");
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
    msg.setTimeStamp(0.13296357579420215);
    msg.setSource(23398U);
    msg.setSourceEntity(127U);
    msg.setDestination(51960U);
    msg.setDestinationEntity(84U);
    msg.name.assign("DXGMZKXPDSSHHBPRFBNCAUWBPOKYORSDYHAMVABCIZCPBZKWCQYJFXDEYQOMSXFTTVQXNLWEUNJHVGRAPCWQLMWGVTTQSZEYLNZDMGTNSFCBNUVAPMVKUFIOKEWMKLXDLTLHKSLPSFBBKYAUTQVEPYZRLGJYNXDIOPROIXOSZLJOIDJISCRGGVAUFVOJXWEAGKDE");

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
    msg.setTimeStamp(0.20155980146258012);
    msg.setSource(36587U);
    msg.setSourceEntity(223U);
    msg.setDestination(64089U);
    msg.setDestinationEntity(201U);
    msg.name.assign("WACNBIULDGJGQPRUTMVYHCZQAJPISORRSGVPTEGLMPODLSOUXVFXXEWDQGMASUKSYXISEQLMHNKRVVHXAJWZTMJUGMIFSZDQSDIAKNYNRQVHBEUBBDKOATITKJGKMUUXNBLFPBLNJKTMZADGOLABIHMJZTIXJRWLTTCQVYCOWWQHOLCLFYOZBCAVXYTQFZRECGERZJUPPXEVPKKHFRUGWE");
    msg.visibility.assign("PGSIJYMVXYQYLRQMGHVORCAOOUUITJGLNDTUIPRTLJVUSHDEPQOEOLIDEGXHTZDHJ");
    msg.scope.assign("BBZURNVEHDYEVUHPMOPICOWXWRNDLPPXQMKCIMJGRRJEEVBMSFWQNFQLETMDMPZGETRZATQUKUEAICCZOCTDWJHQMJWXFYNQXBLOWOSKRNBASMNXXLJXSEYALSIGLGNVCYQTKXMNZYUKQOOIDVZHYJPPVVAPUKYGIJKDGRFBGUVKHVTWICFRHKVGIXUFZJCPHHJCXNQA");

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
    msg.setTimeStamp(0.818766874554062);
    msg.setSource(30238U);
    msg.setSourceEntity(192U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(60U);
    msg.name.assign("KQMSBOPMUVAAOSDLZCZDISVUXRIJZJKMPIIFBEQNXPKVLPMNTXQQGLVUDENNJTXJKKXNZOLIGAUNISUZGQWHDISMUVRMXBNPOEFRF");
    msg.visibility.assign("BTZPIAQXLCAVONKKNMXEKONEIPSVJHKRMXOLFASYSJRLLLCJDUTMJEZGBAUZYMZTMXGUWZDZXJYRBWTIIWBRGEHIOXPQOWGRUGOADHJSIQOYMQXQDLQRREJCZIOVDZPFDKHQCAXWKAMTCTXSVTUSNYFHWEBCBPQDHFVRGFPLNADRBHMYINAFUUKPAFUKMUCYHFVIERFUPE");
    msg.scope.assign("PZCRWXCNQYQTQGSFIAFRPHQUTZBUTBVLJOBWDGKMODWMOVEDFTMDIJXUDZHEFXPRZPBSMJCXDGNEWBYFIKETCLUVWAENCMRQKEKGRNGHPLQUMFIXKMISTVONOQZIOYXKYUBLJONTDOMSXLACJ");

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
    msg.setTimeStamp(0.32229322311033237);
    msg.setSource(49790U);
    msg.setSourceEntity(25U);
    msg.setDestination(44579U);
    msg.setDestinationEntity(26U);
    msg.name.assign("NWBBSIEUPVDYCGKLQFDDIIQFMMCJZJVZBDPEKRKZBSUIMAALVLNJETXRVYHCVKQRWDODSEJLPSWPGYFEVJHCUWIWYNJMHPOMXDKLZWWAAJGNNLYWLMTOQMQITYENGUBQKBQOREKPRGCVRIZCFVUUNSCYRGQLIDQBHQHOPMHOPZXZXTRWKHEZXFFFATOGTUFABAKSVYSM");
    msg.visibility.assign("GNANEGJPTLMXRMNIHZBWCGOTRWPPVDZXMGQMWPYXAZLJTDMUDZSVOMVETCPIBOCHLELDQIGAJTJMARCQYLKWZEMYOPBEQXIANSGHDCFUGASWDIJLFXDCYUWCSJQSTVUBSWYGHSHVBQIGCLBVDHRKUOAEPFCUYQQMKSKHIBIPHGVJXZNZNRNQIFKEBHXZRORUYJNFJKTZUKLF");
    msg.scope.assign("IMHYECEBQAAUOSZIXJQXQHOIVJNTVREGMGTMDYDFYGYKODNTYPFKCALQMRSIVCQKCPOCPBHKHEPJERJIQKVJNPTAFLPTWNSGRWONBUABDOQQVOFCIZXFILFSYFWZOTUXUBDRNUCWZEKHNJXWTLHLGMAYSLERWYZYXZLQZSQFACDXSIHXRPYKDWVOVEBZJDFZBUBAHDERSZJEIVJFUMNLDSPGHUHTBLWSWNTKO");

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
    msg.setTimeStamp(0.1867521178750594);
    msg.setSource(21447U);
    msg.setSourceEntity(99U);
    msg.setDestination(3871U);
    msg.setDestinationEntity(32U);
    msg.name.assign("VLSNNWAHPENZAIRGAVHGUPVA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LDSPPFTGRUZVURWATFQJPUCOELHYWQGCMWCLGWUSONMNVIUFTCOXEQVFWCNAPGHADJHQUUOGSZRACOKRMHQILJ");
    tmp_msg_0.value.assign("LDEUHZTCBQNXHBMFZYLSXOGYTXBYRLMJIVTGOXWHNIOJXBXUDCPCNTEKPCQIIGDVGEUZLUKGRCQAJWCVBCLJUXXWQLXKMGWJPJESAPNEWVYHZRINSYIUZTBABGWQYPPHYUAEDGFIRBWTHOKODKHDMUZQGROMQAFAZCDNWWOYVZYSKSJUKWYEMSQQSTMAJVFDRQSBEFNKEFNRLSMABULLJEPLRMTFVHHHKGTSVIAOVZPZ");
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
    msg.setTimeStamp(0.7327367642797874);
    msg.setSource(36647U);
    msg.setSourceEntity(62U);
    msg.setDestination(280U);
    msg.setDestinationEntity(152U);
    msg.name.assign("HFBJJJZPGSUNPJIYZEOFSAYUCLBNAPCFMIMYKCLDOWJMVWYRVLZKAIIJVXUDDGNEGHOHWYSZGIVPXSGPQDRYHBAKMOKWMQACQCCNBWNBXXDRDETXVIQTLHDEZCBWDSMZYRNIEJULVBCOBWSUELZDKEHPJQKAPDJHRORLQUHCTOFSQQTFHPOKFSEYBMONFGGVNWSSRFYKAZUZMXHZREFQILXPBTXK");

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
    msg.setTimeStamp(0.34055748144822007);
    msg.setSource(21957U);
    msg.setSourceEntity(1U);
    msg.setDestination(59518U);
    msg.setDestinationEntity(120U);
    msg.name.assign("DQGOYYANCDTRMYIUFBAALIEELBEOSDOHJNSOAZUYZNOUIPLOKPJHYJGTKWUYBBEDZVVMIKCHEPXSQUBFNWJWQMHAZADGXJRQIUCUCAXBXWKSDWZEWTTPCHONCBMGYJEFCLRUKOIPTNFVZFWVCPMGIKXDMVQXIJHARXQTHZIRVENTEMZKXNDOFMFAWBZSPNVORCJHBHGRXEKXUYLJQLPGZBGLFGMSKSJFDLTAQ");

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
    msg.setTimeStamp(0.6079381617811872);
    msg.setSource(19786U);
    msg.setSourceEntity(223U);
    msg.setDestination(43850U);
    msg.setDestinationEntity(176U);
    msg.name.assign("RPZRFOUVJBMDFEYOSKIJHKTEYBSOZUAERUQBJRGUFDJENIKEFTQVMGGJMFNFQSWWYGCKSGDLPIADTICYNKXFYIHRUMICUJTDVAXECAZXBPZLXEPRHRPSKLZGHNORYPLHUULCEWBTTZGLHDOYOOQISCNCAHFFYJBVXBNUMBDOTANYKBZKMPQVYJQDNVGJATCSLEXARMASALLWS");

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
    msg.setTimeStamp(0.5572084426071299);
    msg.setSource(59608U);
    msg.setSourceEntity(193U);
    msg.setDestination(61078U);
    msg.setDestinationEntity(152U);
    msg.name.assign("LARFQLMLIETCWNWSZJWSFQSYHEZULDPAAHBPEVANNYINWQWZPODBXYZTARWRUWMCUMTXIJCHHCSQBEQOGVJRKMZZNTNQGGFKPNWMUCJEZFDGPIRYMKVPUVBAVGQOKYFLUXJTEMHXLDKBTUKYUGUFRRFXDOPRLOTYBGYBWTIJCKHJBFCVIMGXOTDVADXIAYZLSNNYHCWOLRPFEVMBJSSKDMXEXAEAHSKGEGSBICVCH");

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
    msg.setTimeStamp(0.43149082497031666);
    msg.setSource(29210U);
    msg.setSourceEntity(221U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(96U);
    msg.name.assign("JDBSGWRJFHPKOMSYSWXZLTHYLLMQTTLTUEAPIQLCHRPOHHKGLIXBXEJUHJXCFEWAMESQBVZDNTDDDSDUMKATSCZWIY");

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
    msg.setTimeStamp(0.06630090852633386);
    msg.setSource(25970U);
    msg.setSourceEntity(90U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(30U);
    msg.timeout = 1239759929U;

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
    msg.setTimeStamp(0.5905088761574884);
    msg.setSource(31338U);
    msg.setSourceEntity(155U);
    msg.setDestination(492U);
    msg.setDestinationEntity(96U);
    msg.timeout = 4114287915U;

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
    msg.setTimeStamp(0.5778955503365747);
    msg.setSource(46710U);
    msg.setSourceEntity(220U);
    msg.setDestination(33820U);
    msg.setDestinationEntity(234U);
    msg.timeout = 3575087422U;

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
    msg.setTimeStamp(0.19716552850029434);
    msg.setSource(51710U);
    msg.setSourceEntity(95U);
    msg.setDestination(31973U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1137995360U;

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
    msg.setTimeStamp(0.24820611773166668);
    msg.setSource(11288U);
    msg.setSourceEntity(153U);
    msg.setDestination(61917U);
    msg.setDestinationEntity(5U);
    msg.sessid = 1835773190U;

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
    msg.setTimeStamp(0.41750188917122055);
    msg.setSource(63374U);
    msg.setSourceEntity(226U);
    msg.setDestination(17500U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2224790438U;

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
    msg.setTimeStamp(0.4603739722965654);
    msg.setSource(63865U);
    msg.setSourceEntity(74U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(69U);
    msg.sessid = 1479571172U;
    msg.messages.assign("BHMYVBAJXNVPOKZFWGGEXKRIYACVBCLATWNVUQQVZZDNAXVCBGHEHICYLNKQCFJOJSDURPIYCRLWDEXMONCEIQMRTKZTNNFLDWFRGXULYPUKBYISPTSJL");

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
    msg.setTimeStamp(0.21318473592174036);
    msg.setSource(17024U);
    msg.setSourceEntity(210U);
    msg.setDestination(23853U);
    msg.setDestinationEntity(106U);
    msg.sessid = 3890955672U;
    msg.messages.assign("TNNHSTARQBKXAXLBANMTRNCAUBPUWLSKWDXLVQBHULPURRPHDPSHCHWIDNIPUKCWLMOQMZGZTYRYMZTIIBJFHWYTEDJGAXKYNZJDRPRJJQOMUXBJHKQHOZGLSWDTHVGEVGCCBEVEQTNPSZFFBMEDFUFOXVIYNYEGJOIYCMW");

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
    msg.setTimeStamp(0.4785393606412339);
    msg.setSource(65109U);
    msg.setSourceEntity(227U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(94U);
    msg.sessid = 3878892093U;
    msg.messages.assign("JQGASYGOMCRCHOWNNQDHELVOTKLWEYKJJQUNUOUXFRPELSEYBKVTVDWEHYZHJESQJWOFBENFOFQVMLUKMYBUFZFAEDSMGTZBPWUDIGHZZGPSJDGRQQUYIDAXYMWJVEPJUVTDTCYXXBXLZMKYSSRICIRLMBPKTIBMUDIWRPLZVPHIWJXFWKXTSAADTOBAFLHNGNKFAGJNKNIZ");

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
    msg.setTimeStamp(0.887229928890635);
    msg.setSource(8893U);
    msg.setSourceEntity(16U);
    msg.setDestination(8580U);
    msg.setDestinationEntity(8U);
    msg.sessid = 2315790788U;

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
    msg.setTimeStamp(0.045442845161151935);
    msg.setSource(39411U);
    msg.setSourceEntity(209U);
    msg.setDestination(30902U);
    msg.setDestinationEntity(171U);
    msg.sessid = 4045855148U;

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
    msg.setTimeStamp(0.8238904614562671);
    msg.setSource(23431U);
    msg.setSourceEntity(170U);
    msg.setDestination(40555U);
    msg.setDestinationEntity(200U);
    msg.sessid = 1909489056U;

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
    msg.setTimeStamp(0.22081427666972486);
    msg.setSource(40386U);
    msg.setSourceEntity(101U);
    msg.setDestination(34326U);
    msg.setDestinationEntity(2U);
    msg.sessid = 2626717839U;
    msg.status = 172U;

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
    msg.setTimeStamp(0.7608878447192747);
    msg.setSource(15771U);
    msg.setSourceEntity(118U);
    msg.setDestination(16305U);
    msg.setDestinationEntity(18U);
    msg.sessid = 3323380819U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.9582293105096847);
    msg.setSource(33894U);
    msg.setSourceEntity(164U);
    msg.setDestination(60499U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3183947542U;
    msg.status = 208U;

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
    msg.setTimeStamp(0.2841489078096642);
    msg.setSource(46416U);
    msg.setSourceEntity(85U);
    msg.setDestination(24377U);
    msg.setDestinationEntity(53U);
    msg.name.assign("LAWVXPAIQOFIWJYZHSAGBNZDCDLPRKYIETLRXFGRHBECTUBKJKUXFOJMRUYQASKHPOMBPZUCQZTWFVLJMCEBECSALANENH");

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
    msg.setTimeStamp(0.3324454045978559);
    msg.setSource(30201U);
    msg.setSourceEntity(238U);
    msg.setDestination(20412U);
    msg.setDestinationEntity(202U);
    msg.name.assign("IVIOKAEAECISTXFUBAQOGNOGBSJGPGEJQKEWGXIOQTEPDNSJPPCMORNCPBZTXTCGNYLRXIHCUUQVDKYHDAJFWMWTGMFDSEKYUKOABYIBIJCFQJYNMUULQXNVNVLJRBKEGQOPKNUMRYRZVTLBOHSLWYOUULCIHHZHKBIZMZXCEL");

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
    msg.setTimeStamp(0.3754181599664963);
    msg.setSource(63408U);
    msg.setSourceEntity(45U);
    msg.setDestination(64997U);
    msg.setDestinationEntity(140U);
    msg.name.assign("EGCZAXXBHZAEBQJXFPIXRYQWUZFWOPJRYNDLFPQAMUAQVPQFRTQKBXRZIGURKJFJYEKTZPXOBQBMUHLYUWGTKYRMDZDAPOGSHIJTZOYVXDSJFIGEGCDLOUMCROLNLAUYKHICALMFUBQATPRWQHZRBIPMAONJVHVISOOSKPLJMIHBNLEVSXSFHFVDECISYHULNKMPLEGXWUMTZJVDTZWYSWRKVNWDNTGKVCKCTCGAWSXEDCCNNMYQJEFGWO");

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
    msg.setTimeStamp(0.701204225855057);
    msg.setSource(49162U);
    msg.setSourceEntity(117U);
    msg.setDestination(26138U);
    msg.setDestinationEntity(162U);
    msg.name.assign("ITYNRWEFIWJLNZTCKIJAEQDFHOFPUMNBQQDZPFVJEUKFXOMFWOKQPKPUIWNFGGSUDARKOIXHIEERSAXBYEJSRYCPYOHAQSVAWDGMCGCZVZNSDNKJSBXPRXRNEFMUCUHGJMGTWLOMVIGULVBQXBTRDRAATWUHWLHBXWCIDYTBVVBALHJYLUQP");

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
    msg.setTimeStamp(0.8241636945031587);
    msg.setSource(63756U);
    msg.setSourceEntity(18U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(245U);
    msg.name.assign("CXPIYBTMMNCEANJMGDLQLYPIUFSYUXUSTSPBFTKUFEKXZHUUAJHDDRPWTJJXJLHNXYXIPSACMOCGRNOVWUHEDQYATAZOMFWVOLRKRLVXWPNAIKLYQHFWQGWNQGAXKQZVBYRECCYJBNOINZCCQGGOSHUSNQVCRTJMDRPVZWLEIEKBLGTZDJBFI");

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
    msg.setTimeStamp(0.09689655011906328);
    msg.setSource(39388U);
    msg.setSourceEntity(216U);
    msg.setDestination(41699U);
    msg.setDestinationEntity(58U);
    msg.name.assign("PLPNDNRMQYTRRJPCCDEJFFXDYFAEFMHWEZFVSNZDWXZOALNBBUPXYEAVQPZHMJWZEXVNLNVUSJADQBAQBWGJTNZIDXHDJIGOWYFKCTWWQUYCUMWGWSPVDYEGREIQKTTSIRUUBVZOLTMRWJVHFRAOISGSXKILZXSUYOHHIVHESHXNIGDPJUKORAKYNBMRKAKLJGFOMMUBATTZTROKAGDLBUSEYEKTPQXCQFCGQJBHXHCIOPN");

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
    msg.setTimeStamp(0.06153240634985935);
    msg.setSource(4817U);
    msg.setSourceEntity(10U);
    msg.setDestination(13766U);
    msg.setDestinationEntity(100U);
    msg.type = 175U;
    msg.error.assign("SZKCIKLLEGINCRHBMFYSBOFFTXIVKVVHJUEMZIQFYWOWWACZRAYUFMMLPXOAEVUWDQKKUKYEIRGPHQQSZCNTHJBRPWHPSSKAKYXRGIICWDEPGGICQUDXGVTHUPXWODOOADSUIBLLBFM");

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
    msg.setTimeStamp(0.5175788947801885);
    msg.setSource(51722U);
    msg.setSourceEntity(132U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(164U);
    msg.type = 227U;
    msg.error.assign("UENCESTYOJHKIUSTWKPQEAVSJFGWYTXZKNZEZLDROGJKYHUKIVYQPVYAFZHVFOMBQVGTBRGLNCEMTCMXDWJVIJUAASVPAAGRNAIEOBIZTDUASBNUQWBKSCDXCPOWRTPNKPHDVQMXFINUQRVGVYGPYKCEJDPXMNFOQZGWXSLEYKGIDWJLUFIENFMPZRHOWAORBHCTYFHQHZRTBMUCJGHXORXTLRXLLJJQBHLYDFQBIMMIPLWDFCKNCSBDWAXL");

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
    msg.setTimeStamp(0.8247943878133094);
    msg.setSource(64675U);
    msg.setSourceEntity(73U);
    msg.setDestination(5172U);
    msg.setDestinationEntity(2U);
    msg.type = 238U;
    msg.error.assign("BWLDKQYSJNECNCGMNFNONIVDJJUXODGEELJGUIGJYKZALVRVDMXLZHSFNHQPPBWSIMPMVAHTJRJQWJRTVTYEYDLHCKVHYBVFXJVBGUFTAUPXCRTQUMKYAEFYQWSLHDQGMKHDEIFLCAOKABSOVNZECKCFAKIBUZCUEITIMLBQFQQRZBURMLFJRNGPPXOCIMWDOHTZARPOPZXSPITORWWYXKWZISCAGWYGWZTDXORYNUXT");

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
    msg.setTimeStamp(0.4720041338963943);
    msg.setSource(27542U);
    msg.setSourceEntity(100U);
    msg.setDestination(35438U);
    msg.setDestinationEntity(252U);
    msg.seq = 45999U;
    msg.sys_dst.assign("ZYBWRZTXBONANQXYLGRLITDXZXGZSGOFGIHQCJEIRGHOAFFUKSIRPBPUEP");
    msg.flags = 85U;
    const char tmp_msg_0[] = {-67, 6, 54, -7, -99, -37, -78, 94, -93, -69, 39, 55, -113, 37, 112, -7, 79, -116, -69, -34, -74, -25, 112, -52, 115, 51, 90, -121, 73, -117, 11, 31, -91, -119, -81, -59, 74, 16, 101, 115, 36, 18};
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
    msg.setTimeStamp(0.13066880967446282);
    msg.setSource(29250U);
    msg.setSourceEntity(55U);
    msg.setDestination(44453U);
    msg.setDestinationEntity(117U);
    msg.seq = 9076U;
    msg.sys_dst.assign("OZCXKRALVVONUHTUQBXAPJBSGXGRLVSQTGGPUDEGBIEL");
    msg.flags = 228U;
    const char tmp_msg_0[] = {22, -22, -106, 74, -108, 94, -119, -40, 121, 9, -34, -128, 2, -34, -55, 82, -29, 118, -40, 101, 21, 102, 99, -65, -126, 18, 95, -84, 6, 119, 21, 93, -115, 74, -18, 45, 55, 82, -34, -17, -113, 21, -41, -91, 86, 64, -62, 1, -104, -123, -53, -16, 51, 106, 94, 66, 21, 57, -15, 86, -86, 60, -125, 35, -15, 90, -56, -124, -9, -81, -89, 105, -101, -113, -81, 46};
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
    msg.setTimeStamp(0.0468478769815307);
    msg.setSource(15052U);
    msg.setSourceEntity(250U);
    msg.setDestination(25459U);
    msg.setDestinationEntity(247U);
    msg.seq = 42917U;
    msg.sys_dst.assign("BZUWDXDBMTSPQGMWRLEHSTEEBAOICYJRGHYCLJVIZQDVNKIIOMAYHROFYLXAMQRMYLDPANJBPCAMTPDZKNTQJJOLPGFUHDYRDVXNMHLZICBBWFATGPWWYWSZKAEJSZXGVTBUFQLZRXFGUFMTNNERZKVE");
    msg.flags = 147U;
    const char tmp_msg_0[] = {-111, -108, 83, -88, 7, -125, 106, 54, 29, -48, -26, -38, -78, 40, 60, 100, 112, 93, 71, 62, -125, -8, -40, 122, -88, 6, 55, 54, -6, 33, 111, 70, 107, -39, 99, -112, 57, 25, 80, 113, 3, -117, 36, 14, 39, 17, 105, -85, 71, 111, 45, 126, -116, -113, -84, -118, -59, -108, -80, 123, -110, 42, 98, 56, -107, 117, 15, 86, 16, 108, -73, 104, -28, 30, -20, -20, -13, 82, 55, 54, -54, 25, -87, -16, 4, 57, -99, 35, 102, 23, -64, 5, -44, -67, -51, -35, -111, -36, 57, 27, 84, -72, 15, 13, -128, -119, -60, -16, -66, -62, -105, -94, -124, -119, 107, -94, 30, -83, 74, 7, 24, 65, -44, 113, -123, 120, 89, -49, -9, -27, 108, 95, -6, 122, 106, -90, 126, -88, -83, 76, 63, -76, -56, 40, 101, 115, -117, -61, 96, 95, 33, 121, -23, -102, 26, 117, -21, -110, 118, 102, 39, 26, 78, 51, -82, 124, -20, -73, 24, 1, -20, -18, 29, -18, 85, 42, -108, -90, -79, 8, 79, 121, 16, 121, 35, -109, 51, 3, -78, 29, 109, -1, 9, -83, -63, 72, -86, -98, -84, -37, 119, 21, -9, -33, -90, 75, -10, -91, 57, 98, 13, -128, -97, 11, -79, -41, 117, 106, 40, -93, -66, 47, -77, 56, 100, 82, 104, 125, -16, -17, -40, -24, -57};
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
    msg.setTimeStamp(0.19713195088081903);
    msg.setSource(13205U);
    msg.setSourceEntity(176U);
    msg.setDestination(29085U);
    msg.setDestinationEntity(233U);
    msg.sys_src.assign("RAMZWUPKQPVBBLJXDBHWVJAQLXRYPROOIXNQTQEYZKLBCSLHWVDPWBAWGDSYEXSQVQGKSNJGCBJNLJLAVILTSZQPANKZBHVNVEMKZHBWNOEDVCK");
    msg.sys_dst.assign("RGJVKNHLFLXQWGCRYGOYLZZDVSCBAYOIANKJBFVIKHRKZLOGDUDWQGFKESEKF");
    msg.flags = 203U;
    const char tmp_msg_0[] = {-31, 89, -76, -7, -64, -53, -12, -54, 98, 80, -29, 73, -13, -102, -51, 1, -27, 90, -57, -121, -55, -72, -128, -85, -124, 25, 71, -19, -6, 2, 96, -85, 88, -102, -123, -101, -85, 125, 60, -65, -88, -109, 23, -94, 18, 8, 60, 58, -100, 6, 33, 19, -67, -36, -127, 57, 52, -100, 65, -89, -14, 34, -33, -94, -29, 28, -5, 25, -36, -41, -99, -67, -83, -91, -5, 11, 113, -5, 10, -10, -18, 10, -69, 23, 50, -23, 28, 110, 107, 72, 34, 20, 90, -74, -14, -38, 9, 95, -37, -9, 47, -84, -56, -44, -93, 53, -10, -79, 62, -11, 68, -29, 54, 108, -98, 66, 104, 91, -110, -76, -63, 21, 64, -19, -14, -99, -85, -107, 86, 40, 1, -113, 64, -51, -116, 91, 108, -7, 33, -47, -15, -35, 115, -47, 117, 24, 5, 120, -118, 82, 66, 11, -104, -8, 15, 38, 94, -108, -16, 15, -84, -53, 103, 82, 2, -33, -59, -111, 42, -99, -52, -115, 49, 36, -82, 80, 97, 123, -63, 83, -43, -119, -19, -85, -123, -123, -41, 110, 95, -31, 55, 87, -117, 62, -14, -126, 106, -111, -48, 13, -123, 6, -46, -60, -30, 99, -90, -89, -122, 44, 62, 103};
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
    msg.setTimeStamp(0.845260493839555);
    msg.setSource(6504U);
    msg.setSourceEntity(54U);
    msg.setDestination(47475U);
    msg.setDestinationEntity(67U);
    msg.sys_src.assign("LBFUIKPTNYWAVHUOOSFCIPZJIUTCFHKYWEEODFMIMXQBNZWMEBDNEHWJPYSUNBHTHKIUKLVGECVUNCYGPVTBXVALNTXEGSMONMWVQYDGCDXTOLKAHGC");
    msg.sys_dst.assign("OXUPZITNGVWWTEKZSZBTRQXYTVYPZRTNRUOAUYXDYLHOCPDLWKRALWRS");
    msg.flags = 120U;
    const char tmp_msg_0[] = {78, 94, -14, 18, 101, -38, 35, -95, 39, -71, 12, 59, -27, 65, 73, 14, -63, -66, 62, 113, 75, -126, -6, 56, -103, -102, -128, -64, -112, -59, 19, -90, -5, 69, -22, 9, 78, 8, 79, -89, 86, -102, 91, 95, -3, 53, -114, 24, -36, 92, -49, -100, 15, -81, -5, -97, 84, -81, 74, 122, 12, -41, 94, -127, -13, -93, -30, -97, -17, -62, -109, 122, -14, -99, -121, -96, 38, -100, 68, 34, 114, 23, -46, 90, 80, 82, 0, -67, -127, -18, -25, 65, 26, 106, 0, 21, 91, -54, -78, 99, 119, -20, -34, 32, 22, 109, -75, 101, 13, -80, 53, -98, -85, -59, -9, -61, -40, -104, 20, -32, -112, -91, -52, 71, 115, -53, 97, -92, 99, 22, 113, -87, 45, 98, 42, 25, 95, 64, -81, -79, 40, -93, 125, -87, -96, 34, -8, -87, 9, 115, 83, -48, -103, -108, -97, -35, -7, -75, 92, 117, -121, 0, 73, 126, -109, 51, 99, 111, 99, 52, 16, -31, 21, 73, -62, 92, -47, -94, 55, 112, 2, -45, -51, -47, -9, -27, -73, -29, 16, 49, 48, -9, -126, -55, 77, 44, 124, -30, 80, -27, -100, -62, 90, -99, -82, -110, -64, 113, 74, -70, -78, -97, 37, -56, -33, -101, -65, -80, 81, 5, -2, -54, 125, -100, -11, -48, -81, -90, -116, 80, -90, 48, 120, 97, 118, -29, -96, -5, -73, 69, -39, -68, -27, 47, -114, 79, -114, -68};
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
    msg.setTimeStamp(0.1436409391451704);
    msg.setSource(32265U);
    msg.setSourceEntity(115U);
    msg.setDestination(37914U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("EWPEHYPPWQQZVAIRGHFMGFTUMCJBZEEDYGXSF");
    msg.sys_dst.assign("MJVZKWKZWLQRDAEKIOTPOXSJOCVIAQMKYGPNMHFEJHWDULEGENUYUZYXLGNXISONRQCBHJVXMPNTIBWBIMXDLURPBQGIHBXVCFAAVVRVEPUHLUEOLLTYOKPVTTBCXPXFTUZCMSPPZISTAMJBEH");
    msg.flags = 108U;
    const char tmp_msg_0[] = {-92, -32, 111, 85, 89, 123, -88, -5, -102, 21, -15, -113, 112, 6, -80, 95, 0, -39, -24, 7, 121};
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
    msg.setTimeStamp(0.14860556371819578);
    msg.setSource(13396U);
    msg.setSourceEntity(240U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(54U);
    msg.seq = 52419U;
    msg.value = 206U;
    msg.error.assign("SYDXBPDUAINHRQEFRINBCEDHPRKVPCVPQXJAPOUCCWYOUTFTTVLZZFAZHZUKNVETSGPOJAJLTMHCLTEKSSCNAIFKSEIROEDTENJULWNFKQQFYMGARQCLMLYZSRGKBFGCXULOBNXMGDVBEIRFZFHBVRQBKOYPANDGURDOZGTEHWCAH");

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
    msg.setTimeStamp(0.882719727829507);
    msg.setSource(7726U);
    msg.setSourceEntity(33U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(13U);
    msg.seq = 11575U;
    msg.value = 162U;
    msg.error.assign("QJBYRGQDUPIXIKVORZTVJQVMJFSSWNCAWKGHTMJLEAYHNNMFBKAZLXPQRHCXNPZLKWENCHPTIAYONTOTZCQNBOHLXPESYTOEVDNDHFKMGHLBOLGAQQBIRHUVJAOHPBJULCDDYEHAGKUMUGSFAZOZRXIQCWQEPEGATIVSDIXLSIYPPKLUNWUUMWDYXWFDFZGVKCBNIOVJSMFMQOYREEEKPRTD");

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
    msg.setTimeStamp(0.8330261155816926);
    msg.setSource(12799U);
    msg.setSourceEntity(157U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(73U);
    msg.seq = 48395U;
    msg.value = 230U;
    msg.error.assign("QAQHLOCIRGAMTARUFSLDSAJETGWZTY");

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
    msg.setTimeStamp(0.6240730265662054);
    msg.setSource(53990U);
    msg.setSourceEntity(254U);
    msg.setDestination(43473U);
    msg.setDestinationEntity(235U);
    msg.seq = 54789U;
    msg.sys.assign("DDJQSVLKCHEYUIGTFDLWCLHKZEZPDXEYYHLDYPJRWHRYMCOFHKKIKNITZOLOAVVKXJEOEWNNTCAESCGWSIZAAZIGFUQGDBPRBHKKNTRUWMUVXLQSJYSLSMZVRZEBOWYJROYLDNMGQHQTFAULCPEOBFVHVNDMXTTRGKVGQQJSPYVZUFFRAM");
    msg.value = 0.3653511330182979;

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
    msg.setTimeStamp(0.8897608184326513);
    msg.setSource(45256U);
    msg.setSourceEntity(84U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(176U);
    msg.seq = 5620U;
    msg.sys.assign("HGFKQGVDDQFXVPDXBNXZFWXBHHTMCPGKKOWGRJYSUPBXTPYFBDFFHOTLTHXQLYVAUDRPPGMGMGBAZRTMJLHWBIZVQSNJUWUFBPNVNTSYQSFQNQOJUMRKREZIMOEANNKYHAFLWAFXOLAEYEJYMVTKBZUVZAOOCKYWSBIQLJWIXIJVIUDEILUPDPNDNKZWXSVWOHVGJJQSRGOPCCRHCZGDI");
    msg.value = 0.07764845563189082;

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
    msg.setTimeStamp(0.8143973514712269);
    msg.setSource(61850U);
    msg.setSourceEntity(238U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(97U);
    msg.seq = 46773U;
    msg.sys.assign("KBVCTRLOAXHRZXPSSCOSPRWLLIBKQTUZJQHRBGPFEHYTUHNXORDGRBWUTOICAUJDAGBCZUXJKHVLCEPWYFRTDKOEZOYMIEHJIFEKGNYQZUHGHYZGODFKNQDVUPWVBQRXYOABLCNMSXDPIWMLVNEEUMCJKTKDJBLVCVRTPTFQLRMGUNWQPFAIJFTNPMSHIFVJWZNMXCSJSALYWTMCGFDODBGZIQQWYOYNVJMXISEESN");
    msg.value = 0.4605749696745768;

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
    msg.setTimeStamp(0.022835030142298818);
    msg.setSource(35284U);
    msg.setSourceEntity(252U);
    msg.setDestination(20237U);
    msg.setDestinationEntity(70U);
    msg.action = 20U;
    msg.longain = 0.59975304315838;
    msg.latgain = 0.5559987412389179;
    msg.bondthick = 2079666912U;
    msg.leadgain = 0.5547204121610679;
    msg.deconflgain = 0.5260357766777304;

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
    msg.setTimeStamp(0.9619022360291801);
    msg.setSource(29276U);
    msg.setSourceEntity(178U);
    msg.setDestination(1161U);
    msg.setDestinationEntity(23U);
    msg.action = 29U;
    msg.longain = 0.5630959086613108;
    msg.latgain = 0.9407086934414147;
    msg.bondthick = 4193073068U;
    msg.leadgain = 0.35202875304544123;
    msg.deconflgain = 0.46659154379631107;

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
    msg.setTimeStamp(0.9249696198096945);
    msg.setSource(48074U);
    msg.setSourceEntity(137U);
    msg.setDestination(18758U);
    msg.setDestinationEntity(240U);
    msg.action = 76U;
    msg.longain = 0.9637190223231319;
    msg.latgain = 0.014423593351733044;
    msg.bondthick = 2784908282U;
    msg.leadgain = 0.24923226574495905;
    msg.deconflgain = 0.16372816465886375;

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
    msg.setTimeStamp(0.6269891183679436);
    msg.setSource(49676U);
    msg.setSourceEntity(64U);
    msg.setDestination(19930U);
    msg.setDestinationEntity(212U);
    msg.err_mean = 0.4554395038063115;
    msg.dist_min_abs = 0.7556691489983614;
    msg.dist_min_mean = 0.15845895755955353;

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
    msg.setTimeStamp(0.33746389074041505);
    msg.setSource(45885U);
    msg.setSourceEntity(105U);
    msg.setDestination(29119U);
    msg.setDestinationEntity(38U);
    msg.err_mean = 0.8462959890818614;
    msg.dist_min_abs = 0.5119339468232936;
    msg.dist_min_mean = 0.07691191424797528;

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
    msg.setTimeStamp(0.5487064481244726);
    msg.setSource(17262U);
    msg.setSourceEntity(204U);
    msg.setDestination(62084U);
    msg.setDestinationEntity(84U);
    msg.err_mean = 0.39123657491631125;
    msg.dist_min_abs = 0.8448737682882048;
    msg.dist_min_mean = 0.25488600884116697;

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
    msg.setTimeStamp(0.5366269979686015);
    msg.setSource(25204U);
    msg.setSourceEntity(64U);
    msg.setDestination(42138U);
    msg.setDestinationEntity(59U);
    msg.action = 234U;
    msg.lon_gain = 0.7507679393707727;
    msg.lat_gain = 0.5902989803193988;
    msg.bond_thick = 0.47768573024317695;
    msg.lead_gain = 0.7971072151502828;
    msg.deconfl_gain = 0.7081390514332012;
    msg.accel_switch_gain = 0.09284263119711811;
    msg.safe_dist = 0.5526664628175535;
    msg.deconflict_offset = 0.05224702677077764;
    msg.accel_safe_margin = 0.5302841771341037;
    msg.accel_lim_x = 0.09736111021797578;

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
    msg.setTimeStamp(0.48750440441190257);
    msg.setSource(41711U);
    msg.setSourceEntity(91U);
    msg.setDestination(24258U);
    msg.setDestinationEntity(231U);
    msg.action = 33U;
    msg.lon_gain = 0.13630565882176915;
    msg.lat_gain = 0.8379584398866876;
    msg.bond_thick = 0.29715988061006404;
    msg.lead_gain = 0.47167179383008395;
    msg.deconfl_gain = 0.9115331843362456;
    msg.accel_switch_gain = 0.9459716789216827;
    msg.safe_dist = 0.6344401965103192;
    msg.deconflict_offset = 0.5842176064379999;
    msg.accel_safe_margin = 0.08860717761859349;
    msg.accel_lim_x = 0.4008819205929589;

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
    msg.setTimeStamp(0.19717662135298142);
    msg.setSource(3710U);
    msg.setSourceEntity(40U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(5U);
    msg.action = 242U;
    msg.lon_gain = 0.5895450757240854;
    msg.lat_gain = 0.9136187253065138;
    msg.bond_thick = 0.15192355152906545;
    msg.lead_gain = 0.8832848535808888;
    msg.deconfl_gain = 0.4497371288388099;
    msg.accel_switch_gain = 0.7010566950953411;
    msg.safe_dist = 0.11474617213312277;
    msg.deconflict_offset = 0.4027461045114191;
    msg.accel_safe_margin = 0.17282813782545203;
    msg.accel_lim_x = 0.272108298257167;

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
    msg.setTimeStamp(0.6629685426404971);
    msg.setSource(42560U);
    msg.setSourceEntity(121U);
    msg.setDestination(49399U);
    msg.setDestinationEntity(232U);
    msg.type = 17U;
    msg.op = 98U;
    msg.err_mean = 0.8669862616006978;
    msg.dist_min_abs = 0.4955031654387617;
    msg.dist_min_mean = 0.48080027779454027;
    msg.roll_rate_mean = 0.9062023133148722;
    msg.time = 0.73180745649023;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 155U;
    tmp_msg_0.lon_gain = 0.7248632935730929;
    tmp_msg_0.lat_gain = 0.8322253233629152;
    tmp_msg_0.bond_thick = 0.7940204905418962;
    tmp_msg_0.lead_gain = 0.6844530084205377;
    tmp_msg_0.deconfl_gain = 0.6527143587589275;
    tmp_msg_0.accel_switch_gain = 0.4818098562000187;
    tmp_msg_0.safe_dist = 0.7600198533025277;
    tmp_msg_0.deconflict_offset = 0.0920588306881247;
    tmp_msg_0.accel_safe_margin = 0.8169332137937907;
    tmp_msg_0.accel_lim_x = 0.514320229329405;
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
    msg.setTimeStamp(0.543469697161476);
    msg.setSource(27794U);
    msg.setSourceEntity(49U);
    msg.setDestination(57320U);
    msg.setDestinationEntity(94U);
    msg.type = 188U;
    msg.op = 253U;
    msg.err_mean = 0.09689995824771847;
    msg.dist_min_abs = 0.8658558064496552;
    msg.dist_min_mean = 0.1534035434434553;
    msg.roll_rate_mean = 0.23985131932218595;
    msg.time = 0.42924567175603334;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 139U;
    tmp_msg_0.lon_gain = 0.5182640523175228;
    tmp_msg_0.lat_gain = 0.30263778706866773;
    tmp_msg_0.bond_thick = 0.9360428874115508;
    tmp_msg_0.lead_gain = 0.7472662402217152;
    tmp_msg_0.deconfl_gain = 0.4437780003303987;
    tmp_msg_0.accel_switch_gain = 0.8635649814357808;
    tmp_msg_0.safe_dist = 0.3159369662551281;
    tmp_msg_0.deconflict_offset = 0.2613676174675229;
    tmp_msg_0.accel_safe_margin = 0.4140424438394109;
    tmp_msg_0.accel_lim_x = 0.7208937301238117;
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
    msg.setTimeStamp(0.15101533370005404);
    msg.setSource(63719U);
    msg.setSourceEntity(28U);
    msg.setDestination(64950U);
    msg.setDestinationEntity(234U);
    msg.type = 114U;
    msg.op = 117U;
    msg.err_mean = 0.409432476417264;
    msg.dist_min_abs = 0.5914433221194322;
    msg.dist_min_mean = 0.7409215288209473;
    msg.roll_rate_mean = 0.43438555320408867;
    msg.time = 0.09764164345195214;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 189U;
    tmp_msg_0.lon_gain = 0.7697248478459683;
    tmp_msg_0.lat_gain = 0.4092035772885856;
    tmp_msg_0.bond_thick = 0.5355008632816866;
    tmp_msg_0.lead_gain = 0.7933197233888696;
    tmp_msg_0.deconfl_gain = 0.008417944625631057;
    tmp_msg_0.accel_switch_gain = 0.9709429105678276;
    tmp_msg_0.safe_dist = 0.9655219285066476;
    tmp_msg_0.deconflict_offset = 0.7590518826070923;
    tmp_msg_0.accel_safe_margin = 0.41418184673429626;
    tmp_msg_0.accel_lim_x = 0.8769529335649001;
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.5885208608567408);
    msg.setSource(38786U);
    msg.setSourceEntity(100U);
    msg.setDestination(36178U);
    msg.setDestinationEntity(1U);
    msg.uid = 21U;
    msg.frag_number = 172U;
    msg.num_frags = 241U;
    const char tmp_msg_0[] = {-83, -34, -81, 81, 103, -27, 121, -22, 66, 59, 48, 111, 72, -29, -48, -71, 119, 83, -99, 116, -11, 11, -70, -94, 101, -108, -104, -74, -91, -38, 23, 7, -90, 104, -123, -83, 45, 119, 14, -100, -44, -126, 83, -104, 119, -17, 76, -127, -64, 83, -11, -128, 2, 54, -109, 125, -18, -30, -15, 80, -38, -44, 57, 41, -32, 82, -62, 34, -77, 85, -81, -126, -72, -4, -9, 37, 96, 114, -56, -4, 87, 35, -108, 117, 95, -12, -5, -37, 106, 83, -71, 55, -19, 2, -49, -123, -25, -128, 9, -5, 102, 103, -110, 123, -88, -77, -127, 93, 88, 33, -53, -24, 120, 99, -111, -1, 125, -12, -102, -108, 114, -83, 117, -25, -19, -71, -7, 82, 31, 25, -87, -22, 103, 58, -88, 117, 103, 33, 36, 109, 96, 62, 8, -73, 81, -35, 52, -1, -83, 16, -20, -61};
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
    msg.setTimeStamp(0.1492727338201888);
    msg.setSource(50272U);
    msg.setSourceEntity(48U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(22U);
    msg.uid = 100U;
    msg.frag_number = 106U;
    msg.num_frags = 149U;
    const char tmp_msg_0[] = {76, 112, 27, -21, 66, 58, -115, 95, -99, 117, 82, -17, -79, -25, 93, -97, -84, 119, -114, 69, 5, 79, -44, 39, -29, 100, -65, -118, 48, 62, 28, -75, -19, -31, 50, 38, -63, 102, 75, 24, 106, 7, 2, -25, -55, -25, 55, 105, -79, -121, -16, 58, 101, -65, -44, 49, 103, -66, -82, -71, -40, 118, 47, -120, 57, 103, 116, 8, 45, -40, 53, -69, 67, 61, 96, 86, 106, -16, -69, 85, 5, 121, 6, 103, 76, -37, -11, -3, 45, -119, -33, 75, -75, -87, -29, -123, -9, 112, 67, -77, 53, 115, 118, -22, 69, -111, -75, 4, 98, -3, 92, -51, -59, 117, -51, 39, 55, -6, 82, 14, -31, 61, -83, 45, 46, -88, 107, -17, -50, 103, -24, -28, 89, 79, 108, 100, 21, 95, 79, 7, 50, -91, -3, -54, -53, 70, -127, 54, -43, 51, 18, 36, -54, 77, 9, -92, 40, -9, -123, 6, -35, 47, 36, -15, 26, 6, 99, -103, 82, 36, 122, 65, 82, 48, -104, 47, -61, -70, -26, -27, -85, -63, 28, -92, -99};
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
    msg.setTimeStamp(0.018299256375863826);
    msg.setSource(63345U);
    msg.setSourceEntity(34U);
    msg.setDestination(62613U);
    msg.setDestinationEntity(117U);
    msg.uid = 78U;
    msg.frag_number = 91U;
    msg.num_frags = 123U;
    const char tmp_msg_0[] = {6, -16, -54, 43, 91, 45, 35, 3, 99, -19, 61, 27, 119, -33, 83, 69, 31, 116, -105, 90, -117, 61, -20, -7, 110, 38, -44, 11, -121, 83, -72, -51, -86, -23, 15, -40, 9, -83, 58, 79, 76, 11, 74, 81, -45, -105, 21, 33, -75, -33, -32, -86, 32, -44, 90, 5, -93, 33, -60, 52, 37, -55, 27, -11, 126};
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
    msg.setTimeStamp(0.32019456314635253);
    msg.setSource(42445U);
    msg.setSourceEntity(91U);
    msg.setDestination(25033U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("MOOWJQITXUBTDLIOFYSPRTCFJFKGQJHBRPQNTAYLEKZVOHHWKCMFLSWEVMXNWONVCKGDBEYOVJRJYIQPXFHHEJREUGXUDFGBDUJRZDCDEUUOGGHRASJJGOQQYVKBYRTXMCAMHZBESFBWLFKZYLWPPALUCYC");
    const char tmp_msg_0[] = {74, 5, -36, -127, 22, 20, -95, -121, 55, -48, -102, -104, -20, -37, 91, -16, -83, 61, 53, 57, 15, -29, -2, -64, 42, 117, -45, -78, -128, 41, 17, -16, 76, 125, 2, -31, -29, 102, 10, 112, -99, 1, 52, 29, 113, 113, 61, 70, 116, -15, 119, -26, 10, 64, -19, -68, 59, -84, -71, 43, -100, -61, -39, -113, 92, -37, 13, -65, 111, -2, 57, -14, 54, -36, -29, 60, 11, -46, -28, -11, 82, 5, -22, -13, 74, -25, -77, -97, -18, 4, -128, -7, 43, 60, -26, 8, 51, 65, 90, 0, 51, -57, -8, 60, -102, 83, 57, 52, -106, 97, -24, 37, 107, -35, 100, 23, -110, 6, 22, -64, 54, -87, -51, -53, -21, 49, 72, -61, 73, -110, -107, -112, -61, -109, 19, 19, 108, 70, -126, 99, -32, -57, 104, 19, -60, 87, 42, 9, -112, 21, 29, 104, -57, -65, -122, 123, -51, 74, -86, -47, -51, -87, -37, 112, 61, 33, -38, -62, 19, 41, 6, -110, 97, -94, -52, -119, -124, -57, -76, -37, 62, 89, -107, -34, 23, -16, -26, -34, 124, -33, 92, 13, 83, 41, 72, 50, 56, -8, 108, -99, 16, 94, -111, -108, 119, 82, 122, -72, 1, 110, -115, -35, -37, -3};
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
    msg.setTimeStamp(0.42691843817169606);
    msg.setSource(36718U);
    msg.setSourceEntity(81U);
    msg.setDestination(15249U);
    msg.setDestinationEntity(250U);
    msg.content_type.assign("ZNZIXGPPRSATLWFCVGAOYCAXNGUYFOPDSLQCMSNTHLT");
    const char tmp_msg_0[] = {54, 66, -126, -127, -30, 6, -85, -87, -69, -21, -113, 101, -88, -20, 99, -17, 7, 91, 76, -125, -124, 122, -40, -1, -43, -128, -22, -42, 26, 25, -88, -91, 44, -123, -1, -69, -80, 68, -114, 96, 68, 48, 65, -69, -59, 46, 90, -124, 9, -25, 103, -24, -83, -9, -91, 100, 122, 19, 51, 32, -6, 46, 43, 61, 42, -78, 89, -7, 112, -31, 110, 85, -39, -8, -94, 2, 93, -38, 40, -22, -87, 112, -24, 77, -111, -39, 14, -124, 42, 14, -86, 112, -2, 23, 58, 64, 55, -3, 92, 118, 119, 74, 78, -78, -81, -68};
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
    msg.setTimeStamp(0.5736504376818177);
    msg.setSource(15583U);
    msg.setSourceEntity(119U);
    msg.setDestination(1268U);
    msg.setDestinationEntity(13U);
    msg.content_type.assign("WZOLXICYPFBXOYVRIC");
    const char tmp_msg_0[] = {113, 64, -20, 9, -63, 18, -5, 85, 32, -116, 112, -76, -106, 91, -82, -119, -28, -105, 43, 41, 59, -126, 99, 86, -100, -79, -85, 66, -19, 100, -32, -103, 106, -60, 56, -98, -81, -26, 64, -43, 3, -108, 88, 77, 112, 13, -128, 96, 14, -58, 98, -7, -31, -127, -37, -98, 106, -41, 109, 71, 108, -125, -36, 122, 106, 30, -63, -71, 114, 66, -103, 106, -30, 17, -120, -14, -61, 49, 123, -75, 70, 78, -2, -27, 4, -90, -109, -99, 104, -74, -97, -120, -117, 58, 119, 115, -94, 71, 106, -15, -91, -31, -90, -13, 74, 102, 119, -19, 94, 83, -88, -97, -61, 107, -11, -95, -26, 55, 112, 88, 0, -3, 76, 18, -33, -56, 113, -119, -51, -69, -93, 66, -112, 95, -97, -101, -122, 27, -63, -18, -87, 104, 108, 90, -125, 18, -55, -44, -21, -112, -60, 123, -109, -23, -83, 65, -61, 4, 113, -127, -124, 80, -58, 64, 74, -86, 64, -102, -80, -18, 91, -50, 74, -83, 62, 51, -56, 49, -13, 86, -72, 106, 101, -104, 67, -103, 53, 46, -99, -42, 12, -128, 101, 3, -67, 20, 87, -111, -25, 103, 36, 69, -52, -55, 24, -107, 47, -61, 122, 125, 120, -75, 67, 33, -78, -104, 58, -18, -65, 67, 46, 67, -36, 9, 68, 46, -25, -118, -37, -51, 28, -60, -92, 5};
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
    msg.setTimeStamp(0.0033682890965477386);
    msg.setSource(3594U);
    msg.setSourceEntity(46U);
    msg.setDestination(57842U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.20558316469936044);
    msg.setSource(44948U);
    msg.setSourceEntity(44U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.5559014499132323);
    msg.setSource(13662U);
    msg.setSourceEntity(124U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.14231070179813365);
    msg.setSource(22882U);
    msg.setSourceEntity(29U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(120U);
    msg.target = 39064U;
    msg.bearing = 0.2975815221096376;
    msg.elevation = 0.787937665615921;

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
    msg.setTimeStamp(0.9088362098853274);
    msg.setSource(23515U);
    msg.setSourceEntity(192U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(156U);
    msg.target = 61283U;
    msg.bearing = 0.5860156936600751;
    msg.elevation = 0.8107053637573672;

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
    msg.setTimeStamp(0.4062181705146658);
    msg.setSource(18877U);
    msg.setSourceEntity(127U);
    msg.setDestination(42157U);
    msg.setDestinationEntity(228U);
    msg.target = 14718U;
    msg.bearing = 0.8919377820659002;
    msg.elevation = 0.08003715467071904;

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
    msg.setTimeStamp(0.9158578015841023);
    msg.setSource(36548U);
    msg.setSourceEntity(3U);
    msg.setDestination(63915U);
    msg.setDestinationEntity(87U);
    msg.target = 29101U;
    msg.x = 0.37577081245310784;
    msg.y = 0.5189017514922672;
    msg.z = 0.1851720649249432;

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
    msg.setTimeStamp(0.7285081651220573);
    msg.setSource(25078U);
    msg.setSourceEntity(192U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(124U);
    msg.target = 55492U;
    msg.x = 0.011300853720233373;
    msg.y = 0.7931885395878855;
    msg.z = 0.4340560259975965;

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
    msg.setTimeStamp(0.866806577830636);
    msg.setSource(2789U);
    msg.setSourceEntity(229U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(70U);
    msg.target = 39442U;
    msg.x = 0.7438303103033975;
    msg.y = 0.5553380847518278;
    msg.z = 0.5793923488728036;

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
    msg.setTimeStamp(0.4230529593346666);
    msg.setSource(19958U);
    msg.setSourceEntity(24U);
    msg.setDestination(58214U);
    msg.setDestinationEntity(8U);
    msg.target = 26852U;
    msg.lat = 0.99759375291791;
    msg.lon = 0.945636368606918;
    msg.z_units = 111U;
    msg.z = 0.44838496721431564;

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
    msg.setTimeStamp(0.620294730845231);
    msg.setSource(26699U);
    msg.setSourceEntity(39U);
    msg.setDestination(60745U);
    msg.setDestinationEntity(81U);
    msg.target = 48261U;
    msg.lat = 0.9450721695170575;
    msg.lon = 0.623797457843978;
    msg.z_units = 228U;
    msg.z = 0.04894721563451776;

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
    msg.setTimeStamp(0.28933806760870395);
    msg.setSource(53127U);
    msg.setSourceEntity(120U);
    msg.setDestination(60145U);
    msg.setDestinationEntity(46U);
    msg.target = 59427U;
    msg.lat = 0.8939904963131308;
    msg.lon = 0.30710601819201944;
    msg.z_units = 46U;
    msg.z = 0.12586521292538333;

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
    msg.setTimeStamp(0.10085228218763731);
    msg.setSource(2463U);
    msg.setSourceEntity(219U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(175U);
    msg.locale.assign("JQIFMOVDBMLWMPS");
    const char tmp_msg_0[] = {-10, 28, 6, -52, -126, 113, 31, 29, 1, 100, -102, 0, 16, 78, -4, 59, 103, -109, 34, -87, 106, 67, 53, -100, 122, 45, 109, 72, -42, -13, 20, 2, 29, -81, 69, -90, 57, 31, 31, 107, 68, -34, -18, 103, -67, 67, 119, 115, -85, 116, 84, -105, -100, -91, 45, -69, 45, 94, -37, -78, 0, 19, 120, -24, -20, 66, 14, 126, 17, 94, -22, -103, -5, -105, -106, 25, -112, 21, -125, 71, 48, -7, -91, -19, -77, -89, -51, 74, -105, 121, 70, -46, -89, 97, -41, 26, -127, 123, 97, -4, 122, 64, 12, 113, 46, -31, -29, 117, -92, -26, 59, -80, -82, -127, -119, 106, -109, 113, -72, 17, 122, 27, 20, -32, -25, -2, 21, 40, 114, 68, -120, 123, 61, 29, 55, 73, 117, -59, 10, 42, 105, -116, -102, -6, -125, -28, -29, -114, -14, -57, 81, 17, -23, -20, -62};
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
    msg.setTimeStamp(0.029313857889069483);
    msg.setSource(29622U);
    msg.setSourceEntity(72U);
    msg.setDestination(46388U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("PMRUIQCKYXEUNARFDENNZVUJPJAATTPFFGKZUFMTFNPCVIBOBQXLQUPWBRSALJSVETNKKWFDNCMRMOSIYFLOPRGEAHUVUYVDLGQTGWLIIWFHZEROBLWDBOSQLPHWRMRMTVKZXYGCZVVHJADMKETHGGMQZADEPIAQYBEWYOONOWBIL");
    const char tmp_msg_0[] = {-25, -128, 58, -119, 57, 16, -20, 78, -97, 66, 14, 125, -70, 28, -59, 28, 11, 111, -16, 118, -42};
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
    msg.setTimeStamp(0.4416153307854803);
    msg.setSource(27717U);
    msg.setSourceEntity(166U);
    msg.setDestination(61599U);
    msg.setDestinationEntity(92U);
    msg.locale.assign("FJWPAPWSUSIUVPFRVHYRJLOIZMJXNEGJOLBXRRIAMHLDMECBTHMNGDQESSQTOPOAWHJITQXHJMTHXTXOAPVWTGMSBUDPARTNTYNVCVFLZYMTKVCNOKHDVASZFLWUXBQCRLKJKZXDKVFWBWEIWHKBVBUJBZMAQWNYLDGPEIDSYKDDYZLWFYYCGGYNIMSXHAFZFSIPRDICRZKBCJLVLQPCECGAJCEXEMQUHKBUOQZUQFO");
    const char tmp_msg_0[] = {101, 37, -65, -74, -89, -70, 98, 113, -4, -7, -101, 106, 58, 86, 39, 98, -33, -120, -97, 77, -106, -9, -35, -125, -90, 28, -119, -77, -91, 1, -93, 39, -114, 114};
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
    msg.setTimeStamp(0.43472283309534365);
    msg.setSource(64938U);
    msg.setSourceEntity(173U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.37899324581263427);
    msg.setSource(28262U);
    msg.setSourceEntity(106U);
    msg.setDestination(23354U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.7998152807246071);
    msg.setSource(45888U);
    msg.setSourceEntity(223U);
    msg.setDestination(62244U);
    msg.setDestinationEntity(200U);

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
    IMC::NecMsg msg;
    msg.setTimeStamp(0.18116160067442666);
    msg.setSource(48941U);
    msg.setSourceEntity(16U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(214U);
    const char tmp_msg_0[] = {107, -74, -120, 47, 53, -28, 1, 43, -118, 20, 28, 88, -127, -87, -67, -65, 1, 112, -54, 21, 79, 113, 101, 63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.7915469389853858);
    msg.setSource(11015U);
    msg.setSourceEntity(21U);
    msg.setDestination(38169U);
    msg.setDestinationEntity(234U);
    const char tmp_msg_0[] = {73, -98, -16, 8, -46, 73, -89, -112, -31, -109, -96, -121, 14, -31, 10, 84, 17, -97, 48, 95, 113, 20, 50, -67, 116, 53, 121, 15, 113, -29, -97, -4, 118, -70, 8, -120, 19, 9, -15, 4, -96, -35, 64, 115, -57, -99, -90, 41, 12, -18, 114, 94, 66, -25, -118, -115, -60, -43, 122, 105, 39, -122, 60, 80, -32, 65, 71, 6, -91, 86, -117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.7005124518132514);
    msg.setSource(8305U);
    msg.setSourceEntity(98U);
    msg.setDestination(26425U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {48, 54, 20, -119, -43, -49, -89, -24, -69, -120, 38, -108, 90, -114, -81, -62, -98, 17, -121, 64, -91, -6, 73, 114, 123, -127, 10, -27, 20, -89, 39, -68, 79, 55, 19, 13, -63, 108, -25, -18, 118, -112, -88, -70, -6, 15, 114, -103, 52, 16, -104, 61, 52, -69, -6, 49, -90, 2, 115, 78, 106, 103, 111, -82, 114, 19, -54, 47, 15, 96, 107, 55, -120, -90, 55, 106, -61, -69, 21, 116, -69, 46, -115, 83, -93, -43, -39, -111, 126, -54, 12, -87, -85, -87, -70, 28, 8, 91, -38, -128, 39, 19, 64, 37, 79, -81, -20, -80, 28, -31, 64, 109, 79, 57, -19, -70, -31, 53, -9, 92, -122, 45, 122, -68, 110, -88, -24, -15, 33, 101, -103, 19, 44, -101, 100, 115, -79, -15, 119, -108, -118, 37, 14, 25, -32, -111, 99, -111, 107, -34, -5, 114, 4, -11, -6, -14, 48, 27, -118, 119, -12, 54, -108, 89, -120, 9, -9, 60, -43, -3, 113, -35, 24, 18, 55, 42, -76, -51, -7, -70, 0, 43, -71, -61, 45, -57, -114, 25, 111, -46, 39, 117, 12, -4, -50, -96, 114, 106, -68, 95, 59, 28, -85, -111, 119, 103, 106, -125, -26, 99, 81, -56, 57, 47, -24, 89, -37, 82, 12, 58, 17, 54, -105, -20, -55, 99, -3, 35, -19, 55, 106, -14, 116, -51, 100, 53, 93, -62, 118, -34, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.10772284703487167);
    msg.setSource(43899U);
    msg.setSourceEntity(130U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(118U);
    msg.json.assign("FWXQOXBYUOLDLOLSZQLXVWBKKURKPICPOWJFZXGSJKQVCXQYEDVAMWTGHAHEVYBBCQMXVZLSOPHNRDPAZULFJTNVRDGTTYWDJTAINVGLYEWQXQKPMVRIAWIATCMQMVEIDUJHBZNTCJDIFZPSHUTHJGNKNLZFQBDXHCTSLFYWKOJYEIGFCIYKEBJQLMZICRBBDOGGACOHEMTNXZXRFYERSMWGKUBRPPSCHFMRHAKJONYUUDEPAEOGAMZPUIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.32057253561630517);
    msg.setSource(50874U);
    msg.setSourceEntity(0U);
    msg.setDestination(48914U);
    msg.setDestinationEntity(180U);
    msg.json.assign("YCEBKNHKLZJTDIJBSXWIAJLGTQMVVEGCIZWPGCZVLHPNQHFZWLIBUELQMFMENKXIUBITDOFGVFRDQQPYZHJSQTKCGALDEVATLRTZVYCOUTKPGRDROFQMFZPVLUCBPKNVWMBKWANEEKSXMZNDXBWWACMDOWAJAYEXQPQRYMPBPSXWSEZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.1667469260495298);
    msg.setSource(37945U);
    msg.setSourceEntity(80U);
    msg.setDestination(59869U);
    msg.setDestinationEntity(215U);
    msg.json.assign("ONFMDIJPVKYSAKUXTOHZMDDMRVODGCUMURPZTDFALNPGZXKNPRSZIXHFGYXFEFQDAVNLEKGCJTYRQCUBZBAZNVMTUTVFEGBKUIMXVANCAXYXZIMHBGUYBWNHSTHSEWEDFTPPCJRZWCRLQJIJLPPSMEJLNGNALBQLTPVLODDOHUAVEAHWGOCDRWGQIKKEPBEBXSTIFKYGZFQIHXWSOCILORSYBEKHQRIHUYTJXLNQQSJZAUOMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #2", msg == *msg_d);
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
