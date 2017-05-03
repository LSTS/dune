//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: d08b157cacb896cb7dad642ae4a077e5                            *
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
    msg.setTimeStamp(0.965168149639);
    msg.setSource(10617U);
    msg.setSourceEntity(21U);
    msg.setDestination(7730U);
    msg.setDestinationEntity(199U);
    msg.state = 224U;
    msg.flags = 120U;
    msg.description.assign("QPJNYOVWXZRWFREOYBQGBCXFIGSBXGPFZMTESECUTWYZDDMGDFBIQRJINOQUWKXSHOVKLSDCLSBZCTISDRDKNTRXJOZDNQEMAKIDMMUFBSPRYIWTOKFKCDCGCZXXTZRYJVGYJHQVJWGMAFPZWATVODOHVAYKTVELICUAA");

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
    msg.setTimeStamp(0.750789762983);
    msg.setSource(7382U);
    msg.setSourceEntity(186U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(226U);
    msg.state = 173U;
    msg.flags = 211U;
    msg.description.assign("ZVSKQTLFRAZMQBSHOPNAAMFKPKCXHDPWYUGTKO");

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
    msg.setTimeStamp(0.846985470269);
    msg.setSource(15219U);
    msg.setSourceEntity(174U);
    msg.setDestination(55933U);
    msg.setDestinationEntity(75U);
    msg.state = 176U;
    msg.flags = 53U;
    msg.description.assign("RVISNEGPTBOMVLCPJPFZDRPJJDENOSSKALZNMTPTIWHHWHOFXKGYHPYZFGBRERCVYTMXZVAKRIUBDHNSMAARAUMOSEQOLLXYGNLLKWEFEXPHZCEICDEEQZNXZLWYQVARGQBIRYUNFYISKXQVDCQTCDCYQJJKOFHAUPUKGTDMMGAZDLJSFVYXNSEVIOSMYCAIBGZMUCTJHKHBWXBIDKBKWVXWQSFJORBWJTUZMLIRUUGFATVPO");

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
    msg.setTimeStamp(0.422561085132);
    msg.setSource(46359U);
    msg.setSourceEntity(53U);
    msg.setDestination(4000U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.953934725711);
    msg.setSource(22964U);
    msg.setSourceEntity(142U);
    msg.setDestination(2856U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.285228745405);
    msg.setSource(22165U);
    msg.setSourceEntity(0U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.690330326732);
    msg.setSource(38357U);
    msg.setSourceEntity(29U);
    msg.setDestination(63564U);
    msg.setDestinationEntity(54U);
    msg.id = 106U;
    msg.label.assign("NKMRPGOYAJWRGBPZXPDGPHQCIVCHXEELXRHZYANIKTPXFJDQWAAX");
    msg.component.assign("JPNEGMFKWBXTWOESBRDZDZOJYBSPMHVBJVOSZNCEIPVIQXRXNKHPFUFQLGCHIVZIYYMDICRQIPWGWBIDORDXQWLDRMSKQZOBTSV");
    msg.act_time = 16657U;
    msg.deact_time = 11211U;

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
    msg.setTimeStamp(0.834899646683);
    msg.setSource(38191U);
    msg.setSourceEntity(118U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(21U);
    msg.id = 101U;
    msg.label.assign("XPJNPZUWRBXSJFLOBUWFDMLDQVHCRTOCXZMFNOCSVJGGEKRBMXEZEYHBNDWCLLICVRSFFCKVUEQJYORMVBGPDOONHZYTAQLOQSOGVTLPHZOAARUGHTYXBFMLQNDFQTDKIMCDI");
    msg.component.assign("IWEZXTVEUTOGPRRNTJPNIVJWEUGCWGNZGHTMEQKXQVXZCFHVDXBWRSSAHGGUWPQYPDOBOYDCLCMAOJKPMELBWCAQWOWBQXUPNTYTJKKMVOTFQHCJEXQOUSIYKFFSKHMDSRVNLYZNPEWAUCBLFXKSFLAFUJMHILEKSHIYQNYHSDLMCHXAXOTCRSBIGUUAIRAJFZIFZMGRLQWOZMHOVDVADLDDYJSDUJPRGVNQBYILXPBZZ");
    msg.act_time = 14362U;
    msg.deact_time = 31964U;

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
    msg.setTimeStamp(0.147367009764);
    msg.setSource(51063U);
    msg.setSourceEntity(151U);
    msg.setDestination(19866U);
    msg.setDestinationEntity(152U);
    msg.id = 66U;
    msg.label.assign("ACFOKEBETPDBCOYVRBRCQUEQTPAUDITVNXHZAIVVGMFXPEEUARBTRJICXGTDHUWUUBRZHPXCGTYFTWMQDGCKZGVQJSBSEYNAJKLLWSIQMVYPCLNFPOMLSGFOZFMSMUFDJHOXNIZGIKIVJPZYTABIULPSNRHSIALDYMAZRZJFNUABCHZHVGQKOBYTSRLKQSXPNEXKVNCKNIDJHFHFKUDMDJNJORPWWBLKW");
    msg.component.assign("MSDMZDRSIYZWTBVAVNXLXTLLYPUADUORZGDXTNQQLGKMZPKCFOCRHEGYLEWNECHUIWBHYPJDOXAWLIUIOINTKTTJXZOJOYYAYSHJBVFJTQKCYFIMPTSOQFNJPSBXUHJXXGDZQRVAMFPMKZOIBNKPUIVBCCHWUZJXVGEBAGWBN");
    msg.act_time = 25988U;
    msg.deact_time = 63090U;

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
    msg.setTimeStamp(0.253844102576);
    msg.setSource(14387U);
    msg.setSourceEntity(138U);
    msg.setDestination(27753U);
    msg.setDestinationEntity(85U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.435208875402);
    msg.setSource(42324U);
    msg.setSourceEntity(46U);
    msg.setDestination(31539U);
    msg.setDestinationEntity(170U);
    msg.id = 150U;

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
    msg.setTimeStamp(0.74837285738);
    msg.setSource(15382U);
    msg.setSourceEntity(117U);
    msg.setDestination(65412U);
    msg.setDestinationEntity(54U);
    msg.id = 223U;

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
    msg.setTimeStamp(0.569787125254);
    msg.setSource(56746U);
    msg.setSourceEntity(164U);
    msg.setDestination(20270U);
    msg.setDestinationEntity(219U);
    msg.op = 112U;
    msg.list.assign("LUICGRUGBDPPJSAHSOFSKHOGAMYOYKHQDVSBBXVGITGBAFYKDCYZUVKBLJRNYRCVDFJAJUZCKPSTEHXJHMAREGPJDNIQLUVMNCINVEQLVSHDQZIHWLBLCKJWOQFAOTTXNYHRWNSJSVO");

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
    msg.setTimeStamp(0.438971275182);
    msg.setSource(32543U);
    msg.setSourceEntity(145U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(44U);
    msg.op = 205U;
    msg.list.assign("DPYRUEGOYJRLTMFBNPTZYAQBQLNDXKOEEDBNAMIYXJGRUVDNPMVANWJHIUPHERGLLLMDNJKTZQOLDDZYMHVFZTFZBKZOSBJJCRNUNHOISSIFBKKAUXCHXKKHUJOMWOFKBISQQCSLUTZIVSKSYGPYWHAUFEYQRHUP");

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
    msg.setTimeStamp(0.153847313024);
    msg.setSource(35189U);
    msg.setSourceEntity(222U);
    msg.setDestination(6349U);
    msg.setDestinationEntity(65U);
    msg.op = 135U;
    msg.list.assign("APIOQNVINFHMNPPXESGOWKYDSFSFLRQYFLMWVQKNFDTCEQRTKYHCGUBT");

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
    msg.setTimeStamp(0.454940046458);
    msg.setSource(20650U);
    msg.setSourceEntity(73U);
    msg.setDestination(46107U);
    msg.setDestinationEntity(138U);
    msg.value = 251U;

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
    msg.setTimeStamp(0.773994273547);
    msg.setSource(10077U);
    msg.setSourceEntity(187U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(84U);
    msg.value = 101U;

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
    msg.setTimeStamp(0.856075041474);
    msg.setSource(55064U);
    msg.setSourceEntity(253U);
    msg.setDestination(9067U);
    msg.setDestinationEntity(234U);
    msg.value = 166U;

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
    msg.setTimeStamp(0.952164254638);
    msg.setSource(30160U);
    msg.setSourceEntity(213U);
    msg.setDestination(63063U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("RAIFHCXFYNACTJRLJMXCWIADBYUPYERGSHMTQCYIRSEBXRABYIFQOWZFJPBKGHLWIWOSQHNKUMLBYCCQATKJVBWWSVFMFFLYVNNTBIBMJDP");
    msg.message_id = 46824U;

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
    msg.setTimeStamp(0.117200564865);
    msg.setSource(42133U);
    msg.setSourceEntity(6U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(40U);
    msg.consumer.assign("KGFPPHIQBJUEQBZBRHGYATZVLALBHPFATQMAMFIGLUNZAHJWBQCSOPQGONXCFUOSHASFRKKWXONTRXZDBYVQJDGFVHGBEICTCZMWSNXJIZG");
    msg.message_id = 21881U;

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
    msg.setTimeStamp(0.005937424119);
    msg.setSource(58449U);
    msg.setSourceEntity(153U);
    msg.setDestination(21667U);
    msg.setDestinationEntity(182U);
    msg.consumer.assign("JYLCYQRMVHLITKCQWAATVPKXOQAXDJZHVQZAVXNHGBDAOEDGYUFWKHZMFFVBCODGHPUZNQMQUMPFZEBNOYWKWRZUXQGDXDYIJOZCBJVLDESWLXSPETMAITYKKAGRQNLQIWIWHRNFBSWAISMBYSZNTEQHNUNSNFWRVTCULGKDUMGKPBGGURSYHCCKVOUETIVGPJYBRVK");
    msg.message_id = 44120U;

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
    msg.setTimeStamp(0.979976785237);
    msg.setSource(56913U);
    msg.setSourceEntity(210U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.46576734202);
    msg.setSource(39358U);
    msg.setSourceEntity(98U);
    msg.setDestination(11740U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.6207445299);
    msg.setSource(40058U);
    msg.setSourceEntity(170U);
    msg.setDestination(14193U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.915306349129);
    msg.setSource(26237U);
    msg.setSourceEntity(104U);
    msg.setDestination(11650U);
    msg.setDestinationEntity(239U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.573813119856);
    msg.setSource(8899U);
    msg.setSourceEntity(109U);
    msg.setDestination(5613U);
    msg.setDestinationEntity(230U);
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
    msg.setTimeStamp(0.244005061384);
    msg.setSource(62993U);
    msg.setSourceEntity(188U);
    msg.setDestination(34476U);
    msg.setDestinationEntity(116U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.991153891909);
    msg.setSource(6261U);
    msg.setSourceEntity(34U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(217U);
    msg.total_steps = 253U;
    msg.step_number = 241U;
    msg.step.assign("CLBHBJSJACFXTUECGGDHKRLJWRAIVZMPLPEWZFDPAQXEAVEKUKBVQBCNUODOEZUDCRFNQECMYCXAGHMRAMBGXUWKMOVVTHXRYYRDTGGCSEPOMKPLLSICVOYTJWILMANQAILQUPNKKGEQDAVIOYBTLRQFSASVPNTTCBUUKPDJSJEEIMXFTTSXHZWIYNY");
    msg.flags = 247U;

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
    msg.setTimeStamp(0.82816720308);
    msg.setSource(53673U);
    msg.setSourceEntity(155U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(186U);
    msg.total_steps = 146U;
    msg.step_number = 2U;
    msg.step.assign("DMIETLEJUKWRIZJHXWMZNBXKYXYYJLRMRCBSXHKGNMLEBCFMIPAWPOUVRSKCJJDTMXDPNIBUINHWQYJGHUWYWEXSWKCRJRXJYSLZRBCGHDIVEOCDEBFQGCFDSTGZQWBGLIHOLNNGAENIGYEGVLAUASZDMTAWQDPVBVSOQTTOQVUAYSHKRHOTKJKXOSAKGOAPBUUFPJAZBVZODFWZVZLCMFPQHPSNTFUZRLNMYKCACXTVEILNETFYIQR");
    msg.flags = 2U;

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
    msg.setTimeStamp(0.459934118729);
    msg.setSource(39070U);
    msg.setSourceEntity(40U);
    msg.setDestination(21591U);
    msg.setDestinationEntity(81U);
    msg.total_steps = 85U;
    msg.step_number = 49U;
    msg.step.assign("ROUHJFMTLXJCSAHBJZBZOZJZBLZZZZUZIMEOMAWYTWYOKROCVPWMOIERCPWGSNIGMTC");
    msg.flags = 107U;

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
    msg.setTimeStamp(0.124622913847);
    msg.setSource(54032U);
    msg.setSourceEntity(104U);
    msg.setDestination(61260U);
    msg.setDestinationEntity(241U);
    msg.state = 128U;
    msg.error.assign("EDSNBKYASVTPYRCHGIHWLYDXCYDLQWVGGCFREQUPKXQNOUMVOZDRCBZGXVWIOOZSAWPXSYFBICRJYGLWLFBEUPAKKQKKIIOQMVUBXNZWACKCZETDANSXXFEXHZKMRQOREHMBDNBRMHVAKBAULJCVDKDNIJDHMJCGLHEDFULETWNGFHUBQIJSZJHPPIAAGNJRUTVFTYUFSTYYMMXMBEJPJTRSPAZWLZJLQIFGTNLOHGUNQOPRX");

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
    msg.setTimeStamp(0.727288339272);
    msg.setSource(54113U);
    msg.setSourceEntity(134U);
    msg.setDestination(8522U);
    msg.setDestinationEntity(73U);
    msg.state = 101U;
    msg.error.assign("ECVPRAUQWSKYJGHJIEAXPCAYLUIYXAEIAQYPOSYDICEQFHOIIGJRCGHOPXOQYHQIEMSUKDQOMSYUZLMDJBCQUOVDXFCMUSTKNHWZJLKOHGVDTVLFBFJTZQW");

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
    msg.setTimeStamp(0.0130068807768);
    msg.setSource(18954U);
    msg.setSourceEntity(164U);
    msg.setDestination(222U);
    msg.setDestinationEntity(170U);
    msg.state = 54U;
    msg.error.assign("WKEDSAXTIEYRHATDBBDGBKGVXOSOOIWMEQALNWKHYIAHCRJYOVIEPFNQNLWZPXKCBWLAWYNTYXNMDJFIBLZOUKDKIRERXLBJJZUUOESXCRWFVHDHBWCREQCQPVNADJPVLLZQGRSZEXBVJTFITVL");

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
    msg.setTimeStamp(0.267209685839);
    msg.setSource(26734U);
    msg.setSourceEntity(188U);
    msg.setDestination(45095U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.153154516301);
    msg.setSource(21624U);
    msg.setSourceEntity(38U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.963494628477);
    msg.setSource(41984U);
    msg.setSourceEntity(225U);
    msg.setDestination(7513U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.134338146042);
    msg.setSource(59946U);
    msg.setSourceEntity(50U);
    msg.setDestination(14311U);
    msg.setDestinationEntity(31U);
    msg.op = 140U;
    msg.speed_min = 0.41191858095;
    msg.speed_max = 0.855417120774;
    msg.long_accel = 0.642774113327;
    msg.alt_max_msl = 0.0254370820804;
    msg.dive_fraction_max = 0.817484187246;
    msg.climb_fraction_max = 0.959541242081;
    msg.bank_max = 0.389400883391;
    msg.p_max = 0.964253614802;
    msg.pitch_min = 0.223462582219;
    msg.pitch_max = 0.236994515216;
    msg.q_max = 0.332268709641;
    msg.g_min = 0.694496853733;
    msg.g_max = 0.451347296724;
    msg.g_lat_max = 0.921420263869;
    msg.rpm_min = 0.709714395105;
    msg.rpm_max = 0.327818053518;
    msg.rpm_rate_max = 0.281253711999;

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
    msg.setTimeStamp(0.20581763003);
    msg.setSource(32527U);
    msg.setSourceEntity(25U);
    msg.setDestination(43073U);
    msg.setDestinationEntity(183U);
    msg.op = 182U;
    msg.speed_min = 0.0962308017455;
    msg.speed_max = 0.050740516685;
    msg.long_accel = 0.788843877514;
    msg.alt_max_msl = 0.723876886959;
    msg.dive_fraction_max = 0.65531210305;
    msg.climb_fraction_max = 0.705171253676;
    msg.bank_max = 0.339414343956;
    msg.p_max = 0.00604772458663;
    msg.pitch_min = 0.596188168202;
    msg.pitch_max = 0.403893982617;
    msg.q_max = 0.973332755312;
    msg.g_min = 0.935904911136;
    msg.g_max = 0.828349902693;
    msg.g_lat_max = 0.168843766405;
    msg.rpm_min = 0.390145136647;
    msg.rpm_max = 0.538557395049;
    msg.rpm_rate_max = 0.0369502350413;

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
    msg.setTimeStamp(0.745074914833);
    msg.setSource(44865U);
    msg.setSourceEntity(170U);
    msg.setDestination(24869U);
    msg.setDestinationEntity(223U);
    msg.op = 176U;
    msg.speed_min = 0.82505984244;
    msg.speed_max = 0.357239274768;
    msg.long_accel = 0.0699780749048;
    msg.alt_max_msl = 0.748490654341;
    msg.dive_fraction_max = 0.634165554108;
    msg.climb_fraction_max = 0.490617171712;
    msg.bank_max = 0.142260967606;
    msg.p_max = 0.943999345706;
    msg.pitch_min = 0.956915245;
    msg.pitch_max = 0.709586472607;
    msg.q_max = 0.828593472323;
    msg.g_min = 0.0380385703772;
    msg.g_max = 0.632600248695;
    msg.g_lat_max = 0.224572454387;
    msg.rpm_min = 0.358028614207;
    msg.rpm_max = 0.649501210841;
    msg.rpm_rate_max = 0.346389771345;

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
    msg.setTimeStamp(0.471513026182);
    msg.setSource(50255U);
    msg.setSourceEntity(30U);
    msg.setDestination(14011U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.747438773731);
    msg.setSource(55464U);
    msg.setSourceEntity(112U);
    msg.setDestination(31543U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.437501464962);
    msg.setSource(15123U);
    msg.setSourceEntity(176U);
    msg.setDestination(35708U);
    msg.setDestinationEntity(5U);
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.161434789972;
    tmp_msg_0.v = 0.79945903793;
    tmp_msg_0.w = 0.269995020433;
    tmp_msg_0.p = 0.784736973726;
    tmp_msg_0.q = 0.674216158567;
    tmp_msg_0.r = 0.133934755394;
    tmp_msg_0.flags = 71U;
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
    msg.setTimeStamp(0.752272052621);
    msg.setSource(39728U);
    msg.setSourceEntity(162U);
    msg.setDestination(63357U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.895802014116;
    msg.lon = 0.407156256348;
    msg.height = 0.577241880387;
    msg.x = 0.541182683234;
    msg.y = 0.770113955727;
    msg.z = 0.345559145211;
    msg.phi = 0.00896709484373;
    msg.theta = 0.853195390738;
    msg.psi = 0.705418377416;
    msg.u = 0.171019349304;
    msg.v = 0.866884001746;
    msg.w = 0.0201226291598;
    msg.p = 0.0247660424293;
    msg.q = 0.987214042658;
    msg.r = 0.773097195476;
    msg.svx = 0.873838600663;
    msg.svy = 0.432408417777;
    msg.svz = 0.545800044015;

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
    msg.setTimeStamp(0.47136597788);
    msg.setSource(58431U);
    msg.setSourceEntity(170U);
    msg.setDestination(26309U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.691952343899;
    msg.lon = 0.075322856723;
    msg.height = 0.697584855522;
    msg.x = 0.368971412933;
    msg.y = 0.415071256434;
    msg.z = 0.465861988294;
    msg.phi = 0.191471866702;
    msg.theta = 0.741345302627;
    msg.psi = 0.876458439294;
    msg.u = 0.485791032949;
    msg.v = 0.581083602502;
    msg.w = 0.559992429048;
    msg.p = 0.885814669316;
    msg.q = 0.645368993359;
    msg.r = 0.362456490028;
    msg.svx = 0.643688539632;
    msg.svy = 0.950039302281;
    msg.svz = 0.34856715952;

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
    msg.setTimeStamp(0.279453079585);
    msg.setSource(3920U);
    msg.setSourceEntity(43U);
    msg.setDestination(49282U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.987814205288;
    msg.lon = 0.777071725497;
    msg.height = 0.0522044972941;
    msg.x = 0.0734131071191;
    msg.y = 0.757620496744;
    msg.z = 0.965069522492;
    msg.phi = 0.34755870371;
    msg.theta = 0.352163514361;
    msg.psi = 0.489543046431;
    msg.u = 0.839278337145;
    msg.v = 0.396940460534;
    msg.w = 0.796763614416;
    msg.p = 0.521739967993;
    msg.q = 0.519678861726;
    msg.r = 0.173771427454;
    msg.svx = 0.921170337897;
    msg.svy = 0.150438759985;
    msg.svz = 0.830865916082;

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
    msg.setTimeStamp(0.0803077109345);
    msg.setSource(47408U);
    msg.setSourceEntity(251U);
    msg.setDestination(7122U);
    msg.setDestinationEntity(1U);
    msg.op = 234U;
    msg.entities.assign("SJAPGCJZFHBAZOQOHDISMMVJXCQPWGEEIICNDVEESGVWSRSOJTJTPCDYWPEWKMQUPNWADKO");

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
    msg.setTimeStamp(0.746673401777);
    msg.setSource(12140U);
    msg.setSourceEntity(228U);
    msg.setDestination(53862U);
    msg.setDestinationEntity(150U);
    msg.op = 97U;
    msg.entities.assign("POXGBWRWRAHQOJISOUWCRLEFERGUZVTFCZDMFVUZXBQENYUZHAFFTXUPQQWLELPYENCMLVPTRTEEYIQJAOMTYWQDRXHDNLJVKIFABWXKSIIJCLFGYADZRDZXUAJLGTBIWNXKZYOYJWZVHKCNBBQZDOJHXGYUEMKIUNINTIRNHYRSSVNQAMKKNAPLDKISZCBCTJSVHODRGU");

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
    msg.setTimeStamp(0.508714367406);
    msg.setSource(6120U);
    msg.setSourceEntity(214U);
    msg.setDestination(63119U);
    msg.setDestinationEntity(100U);
    msg.op = 230U;
    msg.entities.assign("YYFSVAGUMDVHZPQQNAGCXEWTQMUBEMKCOZBIIORNHJKWIXEJLDAMBYUYSQPOFYOAICMNUF");

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
    msg.setTimeStamp(0.315959142001);
    msg.setSource(44916U);
    msg.setSourceEntity(169U);
    msg.setDestination(1450U);
    msg.setDestinationEntity(44U);
    msg.type = 131U;
    msg.speed = 18552U;
    const char tmp_msg_0[] = {-90, -118, 78, 23, 65, 71, 39, 66, -21, 50, 34, -63, -74, -121, -38, 126, 1, 42, -23, -44, 85, -85, 80, -56, 119, -99, 49, -118, -47, -81, 118, 3, -28, -54, 80, 122, 65, -4, -113, -104, 55, -70, -97, -43, -63, -93, 53, 45, 12, -115, 50, 67, -65, 74, 66, 77, 95, 89, -118, -77, -99, -18, -53, -5, -83};
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
    msg.setTimeStamp(0.824726452352);
    msg.setSource(3879U);
    msg.setSourceEntity(228U);
    msg.setDestination(62340U);
    msg.setDestinationEntity(181U);
    msg.type = 12U;
    msg.speed = 21020U;
    const char tmp_msg_0[] = {11, 79, 40, 78, 5, -48, -53, -56, -23, -30, -122, 112, 38, -60, -109, 68, 57, -127, 76, -63, 21, -40, -50, -120, 100, 27, -117, 103, 82, -47, 112, 22, -105, -118, -91, -11, 94, -56, 121, -81, 41, -103, -34, -23, 12, 36, 70, -21, -4, 39, -40, 71, -78, -74, 64, 75, 47, -53, 55, -119, 20, 126, 39, 109, 104, -27, -17, 116, 46, 113, 54, -107, 46, -85, -110, 115, -86, 4, -124, -68, 31, 77, -53, -3, 25, 89, 119, 53, 97, -26, 99, -10, -35, -115, -10, 10, 114, 21, 18, 5, 60, 64, 26, 81, 13, 44, -86, -91, -118, -42, 62, 11, -44, 44, 42, 90, -55, 84, 121, -124, 31, -81, 20, 53, -82, 120, -72, -40, -22, 89, 61, 1, -113, 8};
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
    msg.setTimeStamp(0.470131507184);
    msg.setSource(9190U);
    msg.setSourceEntity(190U);
    msg.setDestination(32764U);
    msg.setDestinationEntity(253U);
    msg.type = 2U;
    msg.speed = 61925U;
    const char tmp_msg_0[] = {-52, 12, 89, -7, -18, 56, 10, -103, 21, -101, -39, -47, -55, 1, -122, -115, -93, 38, 84, -11, -56, -59, 89, 22, 68, 34, -98, -102, -56, -118, -103, -57, -76, -114, 75, -69, 68, 64, -89, -90, 20, 72, 99, -53, -125, -48, 74, 104, -14, -116, 23, 12, 85, 43, 29, 2, -11, -5, 53, -52, -119, -22, 119, -53, 101, -14, 15, 20, -84, 6, 11, -90, -114, -34, 55, 72, -124, 86, -14, 38, 81, -48, -122, 71, 118, 114, -6, -113, 113, 8, 38, -58, -18, 116, -13, 86, 98, -65, 60, 45, -90, -101, 37, 107, -111, 109, -28, 66, 107, -56, -30, -36, 124, -1, 96, -93, 65, -62, -128, -88, -19, -67, -78, 53, -83, -39, -99, -108, -107, 48, -123, 69, -124, -67, 11, -42, -96, 8, -83, -26, -60, 58, -98, -96, 121, 4, 5, 67, -23, 115, -81, 103, 66, 116, -85, 23, 95, 61, -118, -65, 53, 41, -79, 2, -116, -107, -92, 88, 119, 1, 15, 9, -50, -61, -77, 113, 105, -59, -51, -83, -113, -3, -72, 7, -57, -66, 98, -54, -75, -13, -47, -89, -31, -51, 33, 56, -13, 92, -47, -16, 92, 108, 124, -12, 75, -2, 14, -12, 123, 51, 46, 51, 24, -21, -4, 67, 7, -119, 104, -32, 23, 94, -111, 47, -72, 35, -125, 88, 78, 76, -67, 20};
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
    msg.setTimeStamp(0.919688927316);
    msg.setSource(62542U);
    msg.setSourceEntity(26U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(111U);
    msg.op = 200U;
    msg.tas2acc_pgain = 0.417185799843;
    msg.bank2p_pgain = 0.421066688736;

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
    msg.setTimeStamp(0.487604533799);
    msg.setSource(64535U);
    msg.setSourceEntity(185U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(54U);
    msg.op = 10U;
    msg.tas2acc_pgain = 0.0913370537479;
    msg.bank2p_pgain = 0.615470183244;

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
    msg.setTimeStamp(0.617574557176);
    msg.setSource(64086U);
    msg.setSourceEntity(218U);
    msg.setDestination(23021U);
    msg.setDestinationEntity(9U);
    msg.op = 222U;
    msg.tas2acc_pgain = 0.929931255576;
    msg.bank2p_pgain = 0.25751054884;

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
    msg.setTimeStamp(0.989015642704);
    msg.setSource(33744U);
    msg.setSourceEntity(147U);
    msg.setDestination(5705U);
    msg.setDestinationEntity(198U);
    msg.available = 3167925899U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.360568823771);
    msg.setSource(58308U);
    msg.setSourceEntity(135U);
    msg.setDestination(37540U);
    msg.setDestinationEntity(75U);
    msg.available = 1481701469U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.118090045901);
    msg.setSource(28966U);
    msg.setSourceEntity(16U);
    msg.setDestination(16507U);
    msg.setDestinationEntity(232U);
    msg.available = 2843704515U;
    msg.value = 83U;

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
    msg.setTimeStamp(0.827727868547);
    msg.setSource(25649U);
    msg.setSourceEntity(56U);
    msg.setDestination(44313U);
    msg.setDestinationEntity(3U);
    msg.op = 34U;
    msg.snapshot.assign("PUMPSYXOITNGUAERJKYSQCJLEORXEBZUVQPWKFHGPONQGVKOBAJCZCDXUDQVSTGDIGIXOARWEOZFONVPCCKQEKHWTNKGMJTRLYBHCDANWAI");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.378113697298;
    tmp_msg_0.confidence = 0.204582345121;
    tmp_msg_0.opmodes.assign("FNUPGDLKTSMJZESBRGLDSGFCGIIUZLPPHV");
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
    msg.setTimeStamp(0.442526199699);
    msg.setSource(43903U);
    msg.setSourceEntity(156U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(4U);
    msg.op = 214U;
    msg.snapshot.assign("WDJGXGZWWYUVJQDCIPFJOGFTEBJKHDZEBQOHZVKWKPHUQDCTWXMKTACLGPADVPBZKEDAOUSMSIEOPWDTVVTYTYASFWEPRCUSOAHKZFZSLSISAHGNY");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 178U;
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
    msg.setTimeStamp(0.626253498789);
    msg.setSource(61681U);
    msg.setSourceEntity(103U);
    msg.setDestination(55327U);
    msg.setDestinationEntity(245U);
    msg.op = 85U;
    msg.snapshot.assign("GBJMLIMQCLJYZFLYCPXMMXWYEKWTEDTNDPGBYPFCZQNBVUIGCBIZOQEOAUCZOACIFVPLMHJOEICWARKUDFSAJUAUBKFRRVYZPEXORIPJYSUWHTBHHUKCSJHKKGD");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.error.assign("AVZRLBNNATYBOUZXCIIOMWDLCKLEWMMIROGXEJUVVMJBIOHJBQSZNMCCZPGHOTWRRRTGEBKTDWMYBMGMACRSOWHLUSTVQNXALYLJRJCZJFNGUIVWXGOPDQEEKETWEZHPRLXNZCPDOSDMITOXPHEUWYSEHPYFFQFDVJAYKHGAKPYQLYPISYMSQXNVBFUDSXFJZUKFDKKAWBUGWTHKXAQDJVTVCORHFQSDIFZQBCNQZNUAJBFP");
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
    msg.setTimeStamp(0.72492490279);
    msg.setSource(31507U);
    msg.setSourceEntity(108U);
    msg.setDestination(31903U);
    msg.setDestinationEntity(231U);
    msg.op = 226U;
    msg.name.assign("GOKTAYXDEMZAAUWPVDCRBZGYKKGBZTVEDTLILJULOHGPNVYEKKFTNMRHXFSFDOQXHJDXQCCGOKVVMZLWMRNCUQWUBPWXAMWTGVFYEEBRFXQRPRPENCJGUFBKCARDPPOXP");

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
    msg.setTimeStamp(0.388915060107);
    msg.setSource(37048U);
    msg.setSourceEntity(93U);
    msg.setDestination(21209U);
    msg.setDestinationEntity(17U);
    msg.op = 41U;
    msg.name.assign("EZHFLXLZSMGEVJNKXYFHFJQTRNVWZQHEXBCTSBIMKHNGJOPCQFRPTYENQHCKKQNZVFSUFHWBUUSAKOJDWBHEUBROXPGONSYEIAMGFLXLVMEMCADSKDDAGMM");

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
    msg.setTimeStamp(0.5874101377);
    msg.setSource(15404U);
    msg.setSourceEntity(131U);
    msg.setDestination(55504U);
    msg.setDestinationEntity(142U);
    msg.op = 58U;
    msg.name.assign("FYNPWKPAWXUWKKQBCEUUKDZBIZRTALTEZZHLWEXESJDUOQRKVQMHI");

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
    msg.setTimeStamp(0.497277274209);
    msg.setSource(15855U);
    msg.setSourceEntity(54U);
    msg.setDestination(2667U);
    msg.setDestinationEntity(151U);
    msg.type = 172U;
    msg.htime = 0.128512816629;
    msg.context.assign("UMWYILSSCIOSWUFKZTDLQJXGOMJAWYGTCMMPZBLZGSKPCBYIHVXWIDTUFZVVOKNXMJEQFJAKQRGMDOQ");
    msg.text.assign("GSUFXHYYWLPGRDPWMXWWQNFGVZNJKTGVOX");

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
    msg.setTimeStamp(0.728742163977);
    msg.setSource(32098U);
    msg.setSourceEntity(33U);
    msg.setDestination(45788U);
    msg.setDestinationEntity(140U);
    msg.type = 140U;
    msg.htime = 0.323848453011;
    msg.context.assign("MMIJSRCXFPVCQJENUUTLTEYWAZFRGMBYOCHYNFANUZXZSQORNBVGPIYGIMIEDLTBAHLSYAHDKPLGY");
    msg.text.assign("DAMNCDVUWHZFEHEFSRHXQDUZLVPWU");

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
    msg.setTimeStamp(0.0963054451653);
    msg.setSource(62043U);
    msg.setSourceEntity(179U);
    msg.setDestination(17987U);
    msg.setDestinationEntity(9U);
    msg.type = 93U;
    msg.htime = 0.00352223298757;
    msg.context.assign("CADPBKCRWYAVHQOUANNY");
    msg.text.assign("TQZEXOEZNFNCTSDVOFAHUOILPHACVTPNOTISWEQZBLXDDDZKRIYYBUWBVGJQTQXACYGRONMJHWDUEGZVMBHNXBRASCIAMDKTUEJFMNPJUVPCYYWFSCHYPDQDJBKKOEVUYSIFGTLRBGIHHKIPCRDKIVRMAZCTZIZYGWLMAAXOARQUEXLWHZKHLXPQSWTOMVQBSKXGZWKB");

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
    msg.setTimeStamp(0.761159549945);
    msg.setSource(28803U);
    msg.setSourceEntity(188U);
    msg.setDestination(48228U);
    msg.setDestinationEntity(49U);
    msg.command = 79U;
    msg.htime = 0.225831094724;

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
    msg.setTimeStamp(0.598558790064);
    msg.setSource(17310U);
    msg.setSourceEntity(20U);
    msg.setDestination(62292U);
    msg.setDestinationEntity(143U);
    msg.command = 159U;
    msg.htime = 0.900477645924;

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
    msg.setTimeStamp(0.838261186477);
    msg.setSource(13838U);
    msg.setSourceEntity(88U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(110U);
    msg.command = 144U;
    msg.htime = 0.761073291723;

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
    msg.setTimeStamp(0.563649219092);
    msg.setSource(18839U);
    msg.setSourceEntity(244U);
    msg.setDestination(33429U);
    msg.setDestinationEntity(29U);
    msg.op = 94U;
    msg.file.assign("YGGIFCRUXTAXWTMEBJROKKRDMOLYSHLSZCHLEOBKXKZGBFJWIIROHYSVHBCFADQANZHJLRZUPLYFTWACVOUFMKLHVIYNVPRPNQETWBIRRJ");

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
    msg.setTimeStamp(0.574746375795);
    msg.setSource(18694U);
    msg.setSourceEntity(87U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(48U);
    msg.op = 104U;
    msg.file.assign("RFINAWSKFEHFGTSDEEOLARLJSODPIZANFSGYHTBJVERIHTWFUUWLJTYFXHMTNHDVEFZPMQJZUTIUCAYZEKDPCUXIBJWBCENOCOMDBLQODULPTQK");

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
    msg.setTimeStamp(0.951047940817);
    msg.setSource(26836U);
    msg.setSourceEntity(79U);
    msg.setDestination(35125U);
    msg.setDestinationEntity(133U);
    msg.op = 78U;
    msg.file.assign("WCWRYSRFAWWHSAOXALHJMQHKGFYKMBXILGXVQSVBRQQSHKMWADZDSXRHWABYGLKQNDKZNDFIQGPJQFPKHUCLNYUUNTZBVEMUIDEOAINABRNRVEETJZEPQTPDUCNOTTIQYORCSEZXYKOSGOHFRWMSICTDLKJPLYGWBDACEUSLCVCTMZJTNNOBJHPBEZVFOGMRLXUVFZGJQFPZXWVXDYPEKEVIODWSFUOXPJMHLAIAYMH");

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
    msg.setTimeStamp(0.538006194198);
    msg.setSource(6119U);
    msg.setSourceEntity(136U);
    msg.setDestination(37665U);
    msg.setDestinationEntity(177U);
    msg.op = 190U;
    msg.clock = 0.568378856393;
    msg.tz = -76;

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
    msg.setTimeStamp(0.193067864333);
    msg.setSource(34747U);
    msg.setSourceEntity(229U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(42U);
    msg.op = 253U;
    msg.clock = 0.221793537683;
    msg.tz = -50;

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
    msg.setTimeStamp(0.257168257242);
    msg.setSource(5724U);
    msg.setSourceEntity(233U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(238U);
    msg.op = 56U;
    msg.clock = 0.616832539064;
    msg.tz = -10;

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
    msg.setTimeStamp(0.779626861577);
    msg.setSource(28194U);
    msg.setSourceEntity(2U);
    msg.setDestination(5083U);
    msg.setDestinationEntity(112U);
    msg.conductivity = 0.657229982476;
    msg.temperature = 0.472571338866;
    msg.depth = 0.208704087561;

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
    msg.setTimeStamp(0.431265226239);
    msg.setSource(11239U);
    msg.setSourceEntity(202U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(214U);
    msg.conductivity = 0.963655048876;
    msg.temperature = 0.523404760497;
    msg.depth = 0.82221244184;

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
    msg.setTimeStamp(0.116132444205);
    msg.setSource(50473U);
    msg.setSourceEntity(140U);
    msg.setDestination(52315U);
    msg.setDestinationEntity(169U);
    msg.conductivity = 0.965465425324;
    msg.temperature = 0.944333964255;
    msg.depth = 0.463327054375;

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
    msg.setTimeStamp(0.253064881684);
    msg.setSource(58734U);
    msg.setSourceEntity(188U);
    msg.setDestination(23559U);
    msg.setDestinationEntity(188U);
    msg.altitude = 0.416440497604;
    msg.roll = 52513U;
    msg.pitch = 429U;
    msg.yaw = 54290U;
    msg.speed = 15241;

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
    msg.setTimeStamp(0.143462712064);
    msg.setSource(61731U);
    msg.setSourceEntity(11U);
    msg.setDestination(44717U);
    msg.setDestinationEntity(234U);
    msg.altitude = 0.286482478307;
    msg.roll = 50079U;
    msg.pitch = 38053U;
    msg.yaw = 42064U;
    msg.speed = 22271;

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
    msg.setTimeStamp(0.663485072378);
    msg.setSource(54474U);
    msg.setSourceEntity(62U);
    msg.setDestination(61519U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.413246321878;
    msg.roll = 21167U;
    msg.pitch = 53404U;
    msg.yaw = 23549U;
    msg.speed = -14075;

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
    msg.setTimeStamp(0.562107453183);
    msg.setSource(22652U);
    msg.setSourceEntity(240U);
    msg.setDestination(1617U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.780008074786;
    msg.width = 0.989997404613;
    msg.length = 0.990213064761;
    msg.bearing = 0.899590537418;
    msg.pxl = 3318;
    msg.encoding = 88U;
    const char tmp_msg_0[] = {5, 38, 35, -122, -5, -42, -83, 118, 33, 82, -52, -126, -127, -112, -7, -6, 78, 71, -94, -77, 54, -15, 98, -20, 80, 107, -125, -98, -8, 114, -64, -5, -38, -87, 35, -119, 115, -95, -1, 117, 124, 62, -77, 12, -99, -49, 0, -25, 40, 82, 18, 98, 112, -26, -72, 3, -19, 53, 94, 13, -8, -29, -74, 62, -61, -1, -124, -4, 77, 24, 66, 43, -98, -83, -82, -19, -60, -66, 22, -37, -38, 47, -14, -77, -34, -15, -88, -94, -109, 86, 12, 14, 35, 29, -36, -115, -86, 53, -56, 82, -60, -9, 87, 45, 94, 115, -84, 85, 46, -17, 46, 70, 69, -61, 6, 122, 104, 88, 40, 5, -113, -64, 77, 25};
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
    msg.setTimeStamp(0.399174144613);
    msg.setSource(58573U);
    msg.setSourceEntity(162U);
    msg.setDestination(52487U);
    msg.setDestinationEntity(234U);
    msg.altitude = 0.385410002077;
    msg.width = 0.496486435805;
    msg.length = 0.905266214262;
    msg.bearing = 0.721320929547;
    msg.pxl = 13279;
    msg.encoding = 82U;
    const char tmp_msg_0[] = {55, 52, -65, 13, -120, -46, 53, -36, -54, 48, -116, -37, 99, -34, 108, -46, -128, -63, -3, 51, -88, 64, -103, -17, 69, 53, 74, -116, -18, 125, 85, -11, 21, 101, -58, -15, 22, -18, -76, -98, 82, 25, 84, 26, 81, -21, -110, 63, 76, -80, -29, -76, 87, 22, -15, 113, -50, -11, 47, 109, 51, -107, -106, 38, 62, 99, 30, 89, 51, -63, -20, 117, 4, -24, -86, -16, 57, -104, -72, 6, -104, -114, 23, -7, -76, 97, 64, 91, 22, 8, 126, 116, -119, 16, -88, -106, 120, -32, -75, -105, 104, 111, 58, -122, 0, -87, 14, 104, 58, -124, -25, 54, -125, -51, -43, -74, 114, 0, -3, -67, -97, -98, 33, 55, -25, -102, -51, 123, -106, 62, -47, 96, -89, 123, -58, 123, -30, -102, -11, 39, 6, 108, 63, 96, -4, -31, 38, 22, -4, -80, 51, -36, -1, 56, -126, -91, -51, -33, -52, 69, 2, -34, -28, -27, 106, -70, 81, -18, 81, -2, 95, -105, -44, -60, 118, -111, -56, 26, -2, -59, 125, 80, 104, 41, 64, -13, -83, 23, 118, -33, 16, 100, -33, -82, -111, -34, 34, 54, -123, 91, 104, 19, 74, -22, -53, 112, -73, -13, -60, 4, -128, -8, -104, -107, 22, -93, -61, 23, -35, -47, 119, -121, -10, -120, 54, 50, -128, 80, 53, 98, 39, 70, 44, -54, 80, -60, 108, -8, -44, -119, 82, 90, -75, 28, -75, -127, -3, -88};
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
    msg.setTimeStamp(0.219027605375);
    msg.setSource(3815U);
    msg.setSourceEntity(125U);
    msg.setDestination(61941U);
    msg.setDestinationEntity(244U);
    msg.altitude = 0.152631152269;
    msg.width = 0.228911378801;
    msg.length = 0.825533666971;
    msg.bearing = 0.230457648651;
    msg.pxl = 19437;
    msg.encoding = 182U;
    const char tmp_msg_0[] = {-41, 33, -93, -69, -89, -112, -30, -124, 9, -88, 82, 50, -109, 73, 90, 15, 62, -8, -94, -64, 52, 95, -8, -5, -15, 87, -99, 78, -34, -103, 42, -23, -42, -1, 37, 32, 71, 83, -17, 65, -15, -14, 3, -43, 50, -101, 44, 14, 12, -58, 118, 13, -116, -29, 77, -17, 83, -25, -74, 69, -8, -99, 9, 104, -83, -59, 82, 31, 37, 112, -38, -57, -23, 89, 72, -34, -34, -6, 1, -42, -39, 72, 105, -118, -18, 12, -38, 122, -94, -53, 72, 35, 91, 27, 80, 125, -10, 10, 95, -69, -117, -39, -55, -88, 34, -59, 10, -114, 53, 4, -87, -81, -59, -25, 73, 99, 60, -111, -95, 35, 12, 111, -92, -26, -99, -56, 91, 30, -5, -15, 113, 78, -113, -98, -84, 88, 33, 68, -112};
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
    msg.setTimeStamp(0.375596537402);
    msg.setSource(37582U);
    msg.setSourceEntity(13U);
    msg.setDestination(25117U);
    msg.setDestinationEntity(47U);
    msg.text.assign("RAWRWRQLSKUUGYTDOMHHLVJLDQTMIVXJFNZMUKSTBHUDWVQWANCAAVUDYWOPUZNEXCTLUDSJJPZKVIQUFTKMRPCNIXCQYSNGOBSYCBANMFXYJSTELPFKGCFMOHRNHGZMPBITADWORBRKJFBKWEPZGFXHLPAZSAKDZXEIVGMLBDETGGOEVRIIGQMVHDJIZI");
    msg.type = 110U;

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
    msg.setTimeStamp(0.818021289896);
    msg.setSource(19952U);
    msg.setSourceEntity(14U);
    msg.setDestination(33848U);
    msg.setDestinationEntity(198U);
    msg.text.assign("DMXJWNRXRYFCRJWEADLTPHQDJZPIKDIRNADIZNTPRAUKHEDHTHCSCANWCYSGMRLAHZXVGAYTYHPLMGCJJQFQDIIUYZDGKBBS");
    msg.type = 221U;

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
    msg.setTimeStamp(0.77219417888);
    msg.setSource(40044U);
    msg.setSourceEntity(127U);
    msg.setDestination(27701U);
    msg.setDestinationEntity(60U);
    msg.text.assign("VETQYWBFHWUTIYSTTMKBVIXERVCPBYVYXGTTHJXELZWONCBJGMLAQSIABUILNOLBXIRRYIDYOWMDQJSDAIJNXJYMJPFGCOOERLVFFURSUUPGPUWXQVGWHIOLDAOKFYHARKMHCNHMREKWLGCWDXUFXENUXSKHPLCNHZPMJQYZYHDESCSNRFTMACDCGIFTSWAQZXZFBGUTKLLEJPKSZBQMARVJNZVPPRENIOAHAPQZDMGDBOJZGQVVDUBOKFCKZE");
    msg.type = 44U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.691807057837);
    msg.setSource(50627U);
    msg.setSourceEntity(196U);
    msg.setDestination(35215U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.234840386545);
    msg.setSource(31180U);
    msg.setSourceEntity(81U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.965543492389);
    msg.setSource(14284U);
    msg.setSourceEntity(168U);
    msg.setDestination(59373U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.647724907517);
    msg.setSource(34760U);
    msg.setSourceEntity(23U);
    msg.setDestination(40027U);
    msg.setDestinationEntity(120U);
    msg.sys_name.assign("DSAGHIQIVHGVFVUOLMYHKCANKHDV");
    msg.sys_type = 202U;
    msg.owner = 37745U;
    msg.lat = 0.624202603551;
    msg.lon = 0.755048421902;
    msg.height = 0.487941895448;
    msg.services.assign("SXSKUSGIYBIHMYSYTDTNRPAPLREBZOMPXSAMPKJRNKKVLFQ");

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
    msg.setTimeStamp(0.0266891084895);
    msg.setSource(34374U);
    msg.setSourceEntity(206U);
    msg.setDestination(52051U);
    msg.setDestinationEntity(10U);
    msg.sys_name.assign("HRGQGRLYWNSSXTFKPTXUCDYHYVNUKVJLBOLDBHSVEVIDLMDRWTUMBOFGQVSBKEOLIZFDJVNCIDMSYMZXRSFCMECHFNZOSRNYHAJNTPJRMTO");
    msg.sys_type = 69U;
    msg.owner = 18873U;
    msg.lat = 0.539576028451;
    msg.lon = 0.41150370275;
    msg.height = 0.30909987668;
    msg.services.assign("ZKTUJNBATRCXYLVQMVUIGTBPWHGWGEFXPBCUPEQHPDSGPNEPBHMTICFQLVXVNOUIBDQAADZ");

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
    msg.setTimeStamp(0.0899244258026);
    msg.setSource(29412U);
    msg.setSourceEntity(155U);
    msg.setDestination(37405U);
    msg.setDestinationEntity(67U);
    msg.sys_name.assign("ITWWYFLZVVIGPXUWFUMWVWFEABXYZOUDCTMNLNGKXQEPLQSE");
    msg.sys_type = 10U;
    msg.owner = 28013U;
    msg.lat = 0.0545112063094;
    msg.lon = 0.440428357507;
    msg.height = 0.915293799622;
    msg.services.assign("EZDGQYHPUJDPSECDCQIVHUGJUFGTFZCDNFHSBPMHYKFMWRPFSDYNKZVRIBTIRAOLUUAXSLLWKTUGTQKYGXIQNOOBSNLYPJLGXLXCTONUVSWCMEFRNXRZWCLQAP");

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
    msg.setTimeStamp(0.928008475514);
    msg.setSource(44660U);
    msg.setSourceEntity(141U);
    msg.setDestination(64126U);
    msg.setDestinationEntity(120U);
    msg.service.assign("CNRMXVTSLYHDIIKKAPLGBLQZEZLCEEKQUBNJYUSDMQGSWISMNTIVUQJFUHSSCTEOFUTWOHPLHSGTJRKVHPXABTLHDFXWHRQYDBZGMEDGXFZQFZNTYDJQUOKINKUJQNPURIMEWNVRXRAZDSPCCNPOAVMJKBMIKCIANVBJWBXASCGFZXHWEUJWOPFMFQYOTLHMKECTBDPATVLYFFKWOAJQPIDGZCBRWXROVEMYAOVZCZIHEUGNR");
    msg.service_type = 195U;

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
    msg.setTimeStamp(0.327499520121);
    msg.setSource(25029U);
    msg.setSourceEntity(195U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(189U);
    msg.service.assign("ZDTWEVXTELKCKIHJXEXJUOZSNAYMBBUDEDZUMYVNUMPUWVCABPJTQNLPAXOCVJRFSOVDDTOLTTEDJBXSILIMPQ");
    msg.service_type = 226U;

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
    msg.setTimeStamp(0.940966695153);
    msg.setSource(14607U);
    msg.setSourceEntity(52U);
    msg.setDestination(40007U);
    msg.setDestinationEntity(218U);
    msg.service.assign("QJZJUBKWSJWUEHCEIBNDLOVNLQROKELIPVAYLGBVXCWMESXGNRTHTZLCSCVPVPZYDEVFKKAGBTOVZHIDCPOMXKFSKTSFMABQCWNBPZRJJSGFNTUDUJOCBPHFTWGFGPMGIICXRYZGSZBFRXGWUIMXRAJQBKULYMUQEOUXLNMLTDWIBEYUVLZWMMDFTAAOEY");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.831817174097);
    msg.setSource(29297U);
    msg.setSourceEntity(118U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(129U);
    msg.value = 0.199822565857;

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
    msg.setTimeStamp(0.359537815687);
    msg.setSource(60326U);
    msg.setSourceEntity(220U);
    msg.setDestination(983U);
    msg.setDestinationEntity(157U);
    msg.value = 0.255605108487;

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
    msg.setTimeStamp(0.447504143496);
    msg.setSource(18186U);
    msg.setSourceEntity(43U);
    msg.setDestination(44059U);
    msg.setDestinationEntity(248U);
    msg.value = 0.227990726384;

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
    msg.setTimeStamp(0.977720147691);
    msg.setSource(41909U);
    msg.setSourceEntity(90U);
    msg.setDestination(8246U);
    msg.setDestinationEntity(58U);
    msg.value = 0.72810464593;

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
    msg.setTimeStamp(0.269091146762);
    msg.setSource(23319U);
    msg.setSourceEntity(131U);
    msg.setDestination(54204U);
    msg.setDestinationEntity(189U);
    msg.value = 0.489622127972;

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
    msg.setTimeStamp(0.133052566711);
    msg.setSource(60049U);
    msg.setSourceEntity(88U);
    msg.setDestination(48095U);
    msg.setDestinationEntity(179U);
    msg.value = 0.636535095212;

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
    msg.setTimeStamp(0.670883401804);
    msg.setSource(43948U);
    msg.setSourceEntity(112U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(86U);
    msg.value = 0.915399374207;

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
    msg.setTimeStamp(0.555120272073);
    msg.setSource(792U);
    msg.setSourceEntity(200U);
    msg.setDestination(41498U);
    msg.setDestinationEntity(29U);
    msg.value = 0.552788318482;

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
    msg.setTimeStamp(0.301110887643);
    msg.setSource(10240U);
    msg.setSourceEntity(210U);
    msg.setDestination(5979U);
    msg.setDestinationEntity(186U);
    msg.value = 0.178025702561;

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
    msg.setTimeStamp(0.44722005022);
    msg.setSource(39443U);
    msg.setSourceEntity(76U);
    msg.setDestination(30371U);
    msg.setDestinationEntity(245U);
    msg.number.assign("ZXAYQGMEFDWQBIYUPTYAYKVWVOOJPRIFGDLGSRSPSTHSENEUQPJUHPLNYNQIYFZHGWQPGKKCGHULTKVCBAKZBJNHZINGRROWOUDCNXTYXMXNRFSLXOPWJOSPBKDD");
    msg.timeout = 55424U;
    msg.contents.assign("RRLWNLDFQHLCHPKXVLHJOUVNZITRHMEFKJTUPPHGCDSIEYUOPBTZSIWEVNXAIOAUBFZDFYKOPQMQMCJZQWCXRFGTYFWDTN");

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
    msg.setTimeStamp(0.791594133959);
    msg.setSource(9014U);
    msg.setSourceEntity(71U);
    msg.setDestination(20467U);
    msg.setDestinationEntity(171U);
    msg.number.assign("ICODNRXCPLULJLKLMDHQRTKIGBXBMTHIESXSSLPHMRIDETXWXQIBRNOLOKOZVYLZVWCQLYFDTWGTOAZMARKWGFKFRHKBXTJPJTBBZTMJFFUKIZIGEMBDZVCFCDYAPDBYZKUHOTEHMNVCAQFWEOGHJKXJLFEDYNGGOVZGDJHWJZOXRYWVMVSDXBNTHUNEYUWARPNSHUYIXSMUOQRBPUMCAWSVVZSAWAUAQPKJIYVGRPPQYUENFIEQGNCA");
    msg.timeout = 46376U;
    msg.contents.assign("GYIKIXNUZWFXFQOABDWNXBMCVLGZCRSAOGHUARGJKEXRANVVNMTBVYNTHHRRTDLXSSFFVNZQOBLITJXEYEEHNDBIXJHZAAWQIUVLBPTGBEGMIZRCMFXKZKXEKGNIWKQKDHUJDAQLWPCCMAIVCTEUBUUJJOFHZLOQSMPKTJGPRHVYTPDCZMWDMBSVNYYCKKJWMPDZHSG");

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
    msg.setTimeStamp(0.0076268962441);
    msg.setSource(19758U);
    msg.setSourceEntity(65U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(142U);
    msg.number.assign("VXMNPCRGAYMLEDOGTOEVNMCLTVFXGEPFILVPKJZMEMXGAJOCBZMOJLDRWZYAFGRESWSLLILTHHIRCPPZAPPRZNLWRSSYURWKUAUBAHFKRIAJTVWONZQCHYDOUMQZCPXWAQSOSIFSMFLSAXKBIQLEQIZYVDDUWBOFTHFKKHUSZTKFQQWNQKIYTHNCRUUNYGBYDDQJYDEPBSMPCUMTJOGVZKXCAHJXXVRYNBCFUW");
    msg.timeout = 49310U;
    msg.contents.assign("SRPCHBJDNWBYSOVDJEDCGTCTPWFKWXUOUKQYNOJTMQAOEYYQIYJGMKVUXAIUIZMWZPLDEISLXCFCVLZEAJRJQFREPPLVBDWFXIUTZJEKGOYRFXMDGYVXOH");

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
    msg.setTimeStamp(0.446344057102);
    msg.setSource(64033U);
    msg.setSourceEntity(43U);
    msg.setDestination(20377U);
    msg.setDestinationEntity(187U);
    msg.seq = 2482514305U;
    msg.destination.assign("TKDEVFVHCUCZUPHHIKZIUTMDYYANHANMQSMBXYWQTMIOZBKPLKGDTYGUSURILXCHTAKXRXKRSJBASOCFQXIBZWOQUVSQYBDTLREPUWRWAJMTYJSJIUGZHPMWLOXVNRFYDXXJDTQTMPZEAHC");
    msg.timeout = 63356U;
    const char tmp_msg_0[] = {51, 54, 112, -50, -90, 43, 60, 109, 90, 108, 14, -61, 117, 81, -104, 76, -1, 90, -31, -109, 121, -68, 26, 46, -123, -106, -24, 80, -53, -59, 96, 124, 51, -109, -97, -127, -3, 121, 45, 46, -86, 23, 81, -67, -105, -17, 35, 110, -117, 17, 83, -39, 106, 40, -74, -91, 83, 110, -29, -29, -118, -122, 14, 23, -38, 89, 117, 46, 75, 15, -82, 118, 98, -11, 37, -23, -22, 52, 29, -118, -45, 32, 18, -88, -15, -61, 71, 117, 6, -85, -81, -121, 104, -84, -31, 50, 93, 112, -125, 108, 99, -15, 39, -50, 26, 113, 79, 92, 32, -69, 103, -25, 38, -96, 34, 29, 26, -65, -128, -82, -127, -92, -86, 7, -31, -110, 103, 45, -74, -58, 73, 81, 0, 10, -80, 19, 76, 56, -117, 36, 82, 102, 91, -15, 81, 6, -55, 55, 78, 73, -84, 23, -5, 49, 81, 46, 59, -105, -88, -89, -17, -90, -62, 25, 85, 116, 26, 36, -20, -114, -37, -110, -106, -7, -27, -104, -29, 43, 122, 6, 52, -85, -54, 89, 79};
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
    msg.setTimeStamp(0.259749997748);
    msg.setSource(14494U);
    msg.setSourceEntity(36U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(132U);
    msg.seq = 709470965U;
    msg.destination.assign("ZWUNBIKZFZGSQRWFDRTANGHGYDARLTQVBBYKYGTZVVCQSAKIAEOJSRQULBQXOPLJXUFEUUICGTVAOMRPTICGGWMRHKMJXADUXZEBADY");
    msg.timeout = 15831U;
    const char tmp_msg_0[] = {119, 122, -17, 68, -68, -123, 54, 52, -98, 55, -121, 59, -50, -31, 50, 17, 9, 28, -106, -53, 105, -59};
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
    msg.setTimeStamp(0.942286460316);
    msg.setSource(27633U);
    msg.setSourceEntity(70U);
    msg.setDestination(6465U);
    msg.setDestinationEntity(239U);
    msg.seq = 797897071U;
    msg.destination.assign("SAENIMGATRIICVYHJDBASBHZDQXAVIEQKPPNRBSCXDHNQZOSKQYRZQZPSQYFGMTBKVOPPQWCDBAVGWVLQXOBRMNMJVPBGYPUNLOXGEVMOJTZISSAIBURKWILJBUOIERDWVPHHUZHJMGAWDRVDKFEHSWMIPKFXLCGFBYCSWYSZKCCXREUNWOFOAY");
    msg.timeout = 37810U;
    const char tmp_msg_0[] = {90, 32, 101, -21, 104, -128, 68, -59, -5, -98, 1, -87, -59, -107, 92, 113, -9, -100, 63, -102, 98, -61, 87, -36, 95, 90, -66, 20, -62, 12, -9, 66, -72, 66, -13, -18, -21, -33, -60, 74, -50, -73, 116, -2, 28, -68, 58, -57, 102, 21, 48, -31, 15, 62, 23, -7, 7, -48, -56, -67, 44, 28, 33, 50, -9, -90, -20, -32, -99, 42, 10, -71, -64, 74, -119, -110, 25, -88, -94, 94, -34, -84, 12, -73, -18, -46, 104, 62, 32, 33, -28, 70, 13, -62, 26, 27, -46, -18, 58, 72, 106, -38, -118, -30, -26, 50, 56, -44, 123, -43, -71, 45, -13, -117, -82, 117, 7, 12, -89, -98, -61, 76, 83, -27, -18, 47, 121, -76, -111, 45, -81, 122, -83, -10, -1, -5, -48, -41, 9, 78, -41, 73, -2, 122, -41, 73, -97, -29, 120, 99, -2, -2, -18, 62, -115, 9, 0, 67, -110, -21, 111, 88, -37, -83, 116, 10, -12, 52, -82, -91, 126, 69, 86, -115, 39, 57, -116, 55, 116, -44, 112, 77, 47, 15, -33, 96, 95, 68, -83, 68, -87, -105, 46, 94, 120, -74, -20, 64, 67, -113, 69, -3, -123, 63, 12, -40, 102, 8, -79, -3, -69, 61, -27, 105, -2, 20, -118, 33, 27, -111, 18, -123, -123, -17, 26, -4, -12, 68, 54, -77, -101, -8, 24, 23, 50, -71, 24, -71, -101, -110, -62, -70, -25, -79, 61, -41};
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
    msg.setTimeStamp(0.770062734709);
    msg.setSource(48300U);
    msg.setSourceEntity(76U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(96U);
    msg.source.assign("KDSXAYGWSNHOIRUDMSYMPBCQTUVOWLCKQEZIUHYATIHQOYLZQOABARKUEWLKZLWPRMLTEAFTQDIBMZVFYRGJSNCLAFZVHBOCQGRWRRXPNSHVDIQHOOMIUGUHH");
    const char tmp_msg_0[] = {-59, -92, -62, -10, -38, 84, 107, -86, -97, -115, 113, -83, 13, -65, 100, -94, 42, -77, -33, 113, -84, -37, 94, 49, -4, -20, -13, 105, 81, 81, -33, 22, -106, -52, -98, 6, 2, -79, 58, -54, 49, 17, -76, -69, -11, -36, 7, -55, 35, -96, 1, -26, 20, 60, -70, -19, 103, -56, 55, -128, 6, -73, 95, 113, 27, 42, 105, -8, -37, 111, -49, -102, -56, 107, -45, 37, 23, 24, -126, 67, -105, 44, 46, -81, 84, -80, 110, 55, 0, 17, -78, 110, 85, -3, -61, -70, 39, -72, 45, -79, 37, -113, -62, 95, -123, 113, 31, -5, -69, -32, 120, 52, 85, 76, 117};
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
    msg.setTimeStamp(0.000756592179741);
    msg.setSource(59379U);
    msg.setSourceEntity(30U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(43U);
    msg.source.assign("UWLTLGRWQYFUDXFBDIUIXBEBCBRTU");
    const char tmp_msg_0[] = {4, 76, 19, 78, -110, -84, -74, -21, 87, -6, -31, 33, -123, -104, -122, -38, 14, 12, 12, -121, 79, -40, -84, 41, 49, -122, 110, 71, -86, -93, -7, 106, 92, -39, 52, 47, 57, -63, 104, 45, 113, -90, -94, -91, -117, 34, -10, -75, -57, 94, -48, 81, 0, -105, 91, -121, -112, 93, -95, 64, 37, 37, 74, 19, 94, -45, 53, -59, -90, -33, -92, 82, 58, -37, -96, -14, 33, 38, -100, 5, -63, 8, -4, 65, 31, -27, 0, -3, 7, -50, 89, -33, 2, -127, 61, 39, -17, -123, 25, -105, -74, 66, -68, -120, 85, 100, 88, -89, -10, 53, -58, -73, -47, 80, -14, -91, 40, -58, -3, -101, 116, -91, -39, -17, -62, 112, 53, -47, -73, -42, -35, -101, -58, 43, -18, 75, 6, 72, 116, -106, 58, 89, 42, -13, 82, -32, -125, -66, 23, 41, -94, 55, 69, 100, 74, 119, -21, 62, 97, -71, 42, -5, 124, 121, 26, 74, -96, 49, -9, 53, -16, 0, -1, 61, 108, 115, 50, 76, -85, -57, 97, 94, 73, -63, 39, -86, 113, -90, 67, -40, 105, 45, -123, -63, 18, 74, -76, 57, 41, 69, 90, -54, 83, -71, 15, 64, -51, -6, 9, 67, 108, -66, -35, -95, -57, 2, -73, -102, 59, 117, -43, 113, 30, 69, -59, 73, -21, -40, 96, 68, 117, -112};
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
    msg.setTimeStamp(0.368253621706);
    msg.setSource(25831U);
    msg.setSourceEntity(135U);
    msg.setDestination(52055U);
    msg.setDestinationEntity(187U);
    msg.source.assign("BGHXNMWEOUUWASOBAQKADBOSXCECDXEZTPIJYZPRJBISKVOPRDXJQSHZXFKHQILFXZXGLFRXLAAGAPWTRVOINRQKDWNCHYJFMREJCFVVBTUHCUULXGWWSBTSDKTEZSLHSCYPMMASOPZGEQGOJDPJXRIBOWMUNKMNFRWVHFMBIYYVZUOMIEDPCZZIBCQPGUVMHWGCTKYTEMGHUNRIYVKAQFNT");
    const char tmp_msg_0[] = {103, -67, -29, 107, -78, 89, -78, 108, -95, -50, 76, -118, -82, -81, 114, 112, -32, -70, 40, 33, 106, 121, -95, -124, -37, -55, -14, -16, 67, 87, -109, -122, -2, -128, 20, 93, 86, 75, -96, -77, 74, -15, -93, 54, 74, -58, 107, -53, 72, -119, 2, -59, 51, -102, -11, 50, -40, -76, 52, -1, 88, -59, -52, 10, 92, -19, 59, -66, 0, -35, 37, 117, 115, -59, -86, -45, -116, -76, -27, 2, 62, -89, -117, 92, -12, -20, -122, 112, -12, -53, -22, 42, -110, 119, -7, 82, 111, -29, -11, -115, -78, -19, -42, 108, 105, -88, -76, -48, -83, 35, 36, -48, 20, -70, 16, -54, -48, 19, 126, -14, -48, 110, 126, 66, -78, -70, 113, -67, 43, 35, -70, -91, -80, -65, 126, 1, -53, -8, -99, 125, -93, 49, 35, 105, 72, -81, 84, -91, -27, -44, -120, 69, 14, -80, -108, 25, 118, 89, 48, 29, -81, 3, -37, -44, -18, 76, -75, 53, -51, 10, -55, -7, 124, 8, 30, -7, 98, -5, -101, 23, -14, 1, 60, 9, 92, -77, -29, 111, 28, 111, -30, -78, -13, -82, -53, 115, -116, -82, -124, 2, 48, -27, -102, 54, 96, 101, 25, 13, -48};
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
    msg.setTimeStamp(0.379531329371);
    msg.setSource(4327U);
    msg.setSourceEntity(136U);
    msg.setDestination(44637U);
    msg.setDestinationEntity(221U);
    msg.seq = 539385944U;
    msg.state = 36U;
    msg.error.assign("UDBLZEJDSEBVTWTELWIGVJZMLVUPRMUARQDWDCHQIKHGRRJFACTBAPBPICAUZCUNLHSDZSISQLKVNXFYRKHELQYUUDQMBCENGLXJUODEFSPRVGWGNIJWXAWNUBSVHSOJ");

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
    msg.setTimeStamp(0.108314217361);
    msg.setSource(52282U);
    msg.setSourceEntity(178U);
    msg.setDestination(47816U);
    msg.setDestinationEntity(10U);
    msg.seq = 3322433172U;
    msg.state = 153U;
    msg.error.assign("IKSIJFVZHUVYXJLOYKXFQNYCNCQDAKNGTEWIRGSGRFGQSIZOZIIPOZLIANGUUWSEBCARVOVCMZAYGTBWM");

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
    msg.setTimeStamp(0.0112940939446);
    msg.setSource(52207U);
    msg.setSourceEntity(112U);
    msg.setDestination(28297U);
    msg.setDestinationEntity(133U);
    msg.seq = 275441742U;
    msg.state = 109U;
    msg.error.assign("ORWIQXROFKFMSTOFNDOZWULPSFHVKJHUSFNQCAEPGUZNYYYCPZONWEZRLMJKTMLKGNTBVDQLKNLZLZGCLXTKEYSSAMOGZGEHRMIVCIKDKHEYSTZULWEXWBARVTYPNAQVVURARYUPIVPTPETEBJXXYOQAGDVJHXHLNMYMMCAZIJGSXKFRERHBVUVJQOXOUDXJQXWQJAKBHFFGSSMPNDAUBGWBPCQW");

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
    msg.setTimeStamp(0.877691894796);
    msg.setSource(53667U);
    msg.setSourceEntity(228U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(108U);
    msg.origin.assign("VSTTYTRLBUHGFFHYIRAPMSNCNVJQOJQVGGFGJXAOUPETXEWCJSYWCQRUUKHR");
    msg.text.assign("AVICPWDXOGJLPSLSUTMOHOBHTIUGHRSERZEWWAGCRGYPTPINCGLYJNNEQJKUYKNVBAFLMXNARWOIUMVNMHZOHRBKBPVYYOOOZDKVOACFRJZADILCOWXJDCTJSMGQKKXEQLC");

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
    msg.setTimeStamp(0.884954866346);
    msg.setSource(62000U);
    msg.setSourceEntity(143U);
    msg.setDestination(38571U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("DAKXHRUASLHLPIIBORPTAHIWCKECYTKYVOBSVGWXNLCHVAIJHIMIMFRZBXRVSQSNNAJAUJDHPQLDSZRFMCEQGHNTWYXJVAKVDAVQZJUUOMYXLUOWUYCGSZLTGPKQEZFEFPBSQZBDVDKCYKXNLPITMFJRRDHMHXGSIEQEGWPGWPRVFU");
    msg.text.assign("ALIHVAPJRKYIZFOCNTQRCTWSXZTJPMCIWLSWTNHXXXDRAPWYCFUFPJLKCQQGJWDIUBGEXGWBHCPMPUXMPNVYSMWQKVZDRNIGMFFSAZVZWRJAGYQEYHERDYINNIAOFUJNVRHIFNWJBKFHGELGIKOUDMOZUJLBALRCXDSMEGVHMEXLTBRKZVKFPORYGQEKGTBBHYHJSTUNO");

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
    msg.setTimeStamp(0.240154192693);
    msg.setSource(49869U);
    msg.setSourceEntity(63U);
    msg.setDestination(28757U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("MBIRTKOLRATPYOUVSIZRQVGGBIQODFCFYJIBUVOUSAFYIHORSSAQLXAEVGXWPNLYHSTXPIEDHZZVHWFUZRJEMNSENCLMBABOHCQIAKCJ");
    msg.text.assign("EKTPSDUFLMFIHEKRMEDUCOGNTSFZHWQ");

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
    msg.setTimeStamp(0.0202591769548);
    msg.setSource(567U);
    msg.setSourceEntity(43U);
    msg.setDestination(51716U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("CWIGPJKXAEVYRJTIODRCTHOLSWPFVGAQNHKKGDXU");
    msg.htime = 0.633252938105;
    msg.lat = 0.29352732521;
    msg.lon = 0.607473869;
    const char tmp_msg_0[] = {-56, 80, 89, 102, -97, 123, 57, 58, 8, -22, 43, 30, 48, -64, 66, -21, -57, 122, 76, -73, -59, -87, 83, 41, -33, -114, -109, 101, 65, 108, -59, -23, 15, -24, -78, -50, 114, 96, 96, 125, 123, -21, 28, 79, 11, 44, 119, 51, 88, 22, -14, -55, -29, 89, 88, -118, -10, -89, 1, -2, -62, -68, 22, -118, 106, 97, 0, 89, -10, 44, -116, -31, 88, 25, -56, -73, 41, 87, -112, 9, 3, -99, 114, 108, 109, 94, 93, -43, 76, 51, 23, 11, 55, -19, 35, 25, 112, 50, 90, 6, 22, 11, 9, -48, 98, 90, -104, 104, 54, 21, 45, 43, 88, 55, -79, 15, 12, -103, -80, 2, 50, -16, 15, -16, -36, 97, -93, -19, -2, 77, 54, -78, -79, 96, 86, -49, -99, -2, 33, -75, 49, 89, 3, 9, 126, -33, 85, -121, 15, 102, -80, -25, -3, 35, -109, -128, 90, 30, 21, 51, 91, -84, -105, -124, -90, -5, -24};
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
    msg.setTimeStamp(0.500631409931);
    msg.setSource(48768U);
    msg.setSourceEntity(3U);
    msg.setDestination(16464U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("AKJFIIICAQPZLCUBQJMTRMRZDRRLLLIIFIWWDISWFXUEIHPTLTOABEWTMHMENUXHLYVRGPOUQCGQRQN");
    msg.htime = 0.308152249573;
    msg.lat = 0.46975953515;
    msg.lon = 0.648146929821;
    const char tmp_msg_0[] = {15, -74, 8, 103, -50, 74, -128, 5, -48, 46, 29, -112, -77, 18, -112, -74, 61, 88, 69, -7, -117, -3, -20, 68, 36, -121, 96, 19, 78, -25, 20, 86, 109, 83, 94, -6, 124, -28, 116, 30, -86, -123, -74, 57, 122, -9, 43, 122, 98, 32, 1, -116, -26, -44, 90, 124, 49, -57, 97, -17, 36, 8, -73, -53, -111, -64, 47, 44, -80, -19, 87, 80, -76, 26, -26, -43, -33, 33, -14, -29, -88, 26, -24, 22, 99, -21, -50, -119, 2, -112, 93, 116, 99, -82, 73, 14, 82, -44, 64, -89, -46, -61, 29, -17, 30, 30, -68, 7, -89, 1, 87, -51, 6, 53, 116, 2, 7, -20, -107, -114, -41, -122, 111, -27, -36, -34, -21, 13, -124, 90, -32, -21, 52, 66, 79, -9, -54, 118, -94, 78, -86, 33, 34, -45, -84, 4, 62, 4, 61, 80, -110, -123, -121, -94, 114, 21, 6, -104, 79, 73, -97, 45, -55, -118, 20, 31, -114, 19, -105, 64, 74, 70, -77, -10, -125, 104, -10, 88, -41, 60, 34, -26, -31, -102, -3, -50, 57, -94, -62, -82, -37, 117, -109, -125, -1, -73, -78, -24, 73, -41, -41, -97, -83, 44, 91, -119, -109, 89, 93, -3, 99, 116, 37, -23, 57, -125, 98, -20, -115, -5, -120, 42, 123, -14};
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
    msg.setTimeStamp(0.520577043773);
    msg.setSource(26142U);
    msg.setSourceEntity(228U);
    msg.setDestination(17061U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("OUFYATDRKWATEOOZCBOMMAYSVJEZNGIWJMRDLGHEABXHRIQYRVXNLGEJIDPWPMFTLJNHOKREYIIRVZOADQAUSUQNIWDMBCEGRFYGIGPOZZUKLBMAFXZCHUIBPRJSYTKBKBVLL");
    msg.htime = 0.327816809371;
    msg.lat = 0.538212531306;
    msg.lon = 0.7385579429;
    const char tmp_msg_0[] = {42, -17, -79, -40, -115, 99, 71, -9, -104, -16, -88, -46, 124, 84, 27, -38, 74, 119, 2, -69, 80, -60, -4, 35, 99, -47, 26, 41, 3, 37, -59, 71, -7, -31, 32, -28, -60, 20, -41, -86, -57, -55, -78, -105, 57, 64, 45, 62, -94, 114, -120, 32, -76, 30, 55, 66, -91, -90, -34, 114, 24, 71, 116, -35, -83, -42, 44, 7, -110, -52, -41, -38, -90, -70, 23, -63, 33, 37, 125, -4, 70, -89, 90, 89, 115, 15, 67, 102, 68, -87, 58, -65, 44, 18, 93, 10, 64, -104, -19, 17, -55, 83, 43, 115, -98, -59, -96, -65, -31, -124, 14, -90, -119, -14, 33, 42, -90, -71, 117, 45, -31, -41, 74, 12, 30, 16, 17, 18, -117, -23, -68, 26, 0, -115, 116, 16, 50, 56, 32, 32, -122};
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
    msg.setTimeStamp(0.352534515216);
    msg.setSource(55290U);
    msg.setSourceEntity(13U);
    msg.setDestination(3754U);
    msg.setDestinationEntity(236U);
    msg.req_id = 17355U;
    msg.ttl = 26983U;
    msg.destination.assign("KOBNCGMIMRIJUVVHUNQDBAPXNTVRLTHFRLJZXSJNVKNSRRGGCFGXLEPWBJBTPEPOAPCLCMKNSXOLHIDTRMFGSUQPPKIKYSWQGKDTWGIJXFYYDDEVBZINFDB");
    const char tmp_msg_0[] = {-60, -19, 7, -113, 98, 27, -16, -20, 39, -61, 89, 81, -125, 84, -58, 77, -86, 20, 35, 6, -92, -79, -118, -60, -30, 6, 120, 42, -53, -121, 47, 48, 116, -81, 100, 73, 116, -4, -30};
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
    msg.setTimeStamp(0.301414424472);
    msg.setSource(42407U);
    msg.setSourceEntity(185U);
    msg.setDestination(59892U);
    msg.setDestinationEntity(29U);
    msg.req_id = 26697U;
    msg.ttl = 18007U;
    msg.destination.assign("ACYZAZRPWOXABZLYPJMRWJFVERADIADFXKADXEEEHQTYKXZOCIYNDOBFFMQGTCSUEFPMGTJXOIQLVCAHXGNGVULDIUGXMHIKJRDIUSRQFEPKLDIWSMMNEWUVZEJISXBSJTCUYOBWOMIMCWBSNRNRQGKHVHHIQPLFRWEBLKHN");
    const char tmp_msg_0[] = {9, 90, -109, -48, -84, -26, -15, 16, 35, 126, -6, -33, 111, -35, 105, 36, 118, 119, 39, 12, 101, 86, 109, -30, -53, -98, 109, 32, -15, 100, 66, -27, 14, 67, -17, -21, -12, 88, -8, 30, 102, 101, 21};
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
    msg.setTimeStamp(0.766834755263);
    msg.setSource(6671U);
    msg.setSourceEntity(244U);
    msg.setDestination(48371U);
    msg.setDestinationEntity(249U);
    msg.req_id = 6832U;
    msg.ttl = 2115U;
    msg.destination.assign("CKSLQGVVQHLJNNSLTDNFCIMQIHWVOZERFDPSBHKAOPTCRVBFKJBYGJWCSWHLXPZVUZEXNXYJGOYMBAISSEUROHJJGFZNQBTQEIJZEHLWYMAAAONBFPJIXCZRNWIF");
    const char tmp_msg_0[] = {34, 99, 9, 24, -52, 73, 1, -82, 31, 118, -96, 67, 17, 119, -35, 80, 45, 46, -122, -33, -11, 32, 116, -60, 8, -125, -84, 50, -12, -51, 121, 80, 113, 99, 57, 27, -86, 29, 67, 10, 106, 77, 85, -94, 123, 100, -128, -37, -20, 61, -52, 104, 77, -1, 114, -73, 46, -126, -77, -102, -31, 121, -77, -107, -18, 23, -126, 80, 14, -27, -29, -60, 38, 37, 113, 9, -30, 65, 59, -82, 103, 30, -85, -27, 125, 81, -88, 64, -109, 55, -58, 84, 99, 5, -81, 75, 104, -32, -21, 4, 76, 71, 28, 116, 95, 82, -34, -76, 113, -115, 47, 59, 35, -128, 18, 56, 56, 15, -72, -80, 49, -125, 3, -46, -71, -14, -127, -89, -124, -119, -128, 48, 25, 75, -43, 104, 0, 38, 7, 11, 1, -124, -5, -122, -70, -125, -120, -64, -36, 80, -106, 21, 66, 11, 109, 119, -55, 94, -95, 29, 54, 112, -13, 49, -70, 99, 103, -16, -28, -118, -85, 63, 126, 87, 71, -50, -89, -34, 87, 63, -73, 3, 44, -54, 71, 99, 17, 56, -96, -36, 57, -85, 117, -35, 43, 6, -114, 94, -11, 91, 2, -88, -80, 64, -123, -109, 34, 25, -102, 108, 24, -100, -6, 97, 38, -37, -128, -111, 25, 121, 6, 18, 74, -60};
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
    msg.setTimeStamp(0.796399194291);
    msg.setSource(50170U);
    msg.setSourceEntity(242U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(245U);
    msg.req_id = 53146U;
    msg.status = 8U;
    msg.text.assign("UCFKGRJPHNKSOJXPMHUZWCUBCCBSMIJMVYYTZKZTLMSQODLBYWIHASVXWMLGIZGINWGFLPZREBLACUUVNJXMMBDGORCFAJRIQEHR");

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
    msg.setTimeStamp(0.813201720088);
    msg.setSource(62818U);
    msg.setSourceEntity(113U);
    msg.setDestination(9236U);
    msg.setDestinationEntity(187U);
    msg.req_id = 38992U;
    msg.status = 15U;
    msg.text.assign("IAUPRGOQJVZBDTINBFOPLDECBLATNOWTPZPDOHXPJHPGJGJJGMUNXOGUZETLUHSABMBFTNJXTCSOSCYDECZQSRVDXIYKAPFYTFNBRJGXAQLSELYRCAGXLLOIMHPCKURXKNXRQIAWOKQUHVMDYKTKHWVISODQMJDIWEBXBIKCYZVFWZSIYPFJMQEDNZFAQNSLFSRWJMEZQCLRHNLVQVCSDEGVMMUWXAVWZEKHT");

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
    msg.setTimeStamp(0.412659188079);
    msg.setSource(21843U);
    msg.setSourceEntity(148U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(229U);
    msg.req_id = 8023U;
    msg.status = 115U;
    msg.text.assign("WWHVBQFRILCWIMQYRGHXWXEPFGZYHNDRSERXZJZIKHYOESWWRPRQICV");

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
    msg.setTimeStamp(0.435934334115);
    msg.setSource(63648U);
    msg.setSourceEntity(9U);
    msg.setDestination(52658U);
    msg.setDestinationEntity(164U);
    msg.group_name.assign("SZYGKSAOCFBMKMRZWMENRCEUBGPOQKLIRFVGEYSJUFDLMYZZUHWHAXFQZCILRTDDJVZZGAPWMOJTYLCURNCAFTIPEJDJOEKBKLASFPD");
    msg.links = 1436014709U;

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
    msg.setTimeStamp(0.589845988688);
    msg.setSource(36990U);
    msg.setSourceEntity(34U);
    msg.setDestination(36663U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("PPRLJVRQENSRCBWAKXPPITJOFTZAIPMJGNMKWVJQBBDIYFMTCKSE");
    msg.links = 1586778757U;

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
    msg.setTimeStamp(0.0659575054461);
    msg.setSource(32660U);
    msg.setSourceEntity(95U);
    msg.setDestination(12714U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("KZDFBBSZDVJFNYQKEAICVFBALQYKLOKMOLSDCETTTKCKZMPTJISDPZYMZCCHIEZDRLAJFFEFRUKTLMEHHVQDURZUNMPYSHVQPHRQJBXSEHUYBETVRPOUNJLGAYXYJGYIV");
    msg.links = 3496349142U;

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
    msg.setTimeStamp(0.984402752031);
    msg.setSource(7503U);
    msg.setSourceEntity(181U);
    msg.setDestination(2518U);
    msg.setDestinationEntity(5U);
    msg.groupname.assign("TDUPBCZJCGFNDVUTPLTGUQS");
    msg.action = 72U;
    msg.grouplist.assign("TGBGBMENEKFZJPRKYOEGZSATYLKTVCQMXORHHIUDXSZACHAJWFEQFQATNBFJPOAUZSVTQUSKVVLRHUDONQIC");

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
    msg.setTimeStamp(0.635958106567);
    msg.setSource(59044U);
    msg.setSourceEntity(39U);
    msg.setDestination(42975U);
    msg.setDestinationEntity(84U);
    msg.groupname.assign("IEYLDESCJVGOZKTSYWIVAKUQTETVXGESOVHVJRYDNGOOSHLEPNHJEUISIBEKILDMYFAJRWMCRVCAQEWWFMDPAYGNUXIMSVKCBTXKHCURSYIMWUXJNAVHOUBOBQYPGBV");
    msg.action = 185U;
    msg.grouplist.assign("DZXNJNEVMPKRDKJJIZVN");

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
    msg.setTimeStamp(0.569361800901);
    msg.setSource(18125U);
    msg.setSourceEntity(218U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(104U);
    msg.groupname.assign("QMMPZWHRKEKDOVCVOSLQYPPQSIWSPTMDEXUAFUTEZTGFVCCTFVFBWEMSTANWSDAZOPVVBLQYKWCVEXBMXZROENOTLFRNLWXSBZDGXWRYOUIEYMRPAGZULCBJWYZNDLODKJIETYJJRDAFNEAWICUXQHFCXVKXFHJENRAGMJQIMOXKQQISUHZYQYSMHKRBLOJKIDTUPHNCQIUNJINHLLVXIVBSPGAFYPJDHAW");
    msg.action = 251U;
    msg.grouplist.assign("CFXYPPAZEHCVCDHOLKCIFQXIPPJVLRARDNIQLEZNIZJXKSEYSTFIIXSZRQWBCHHQAMUEUUSRYWOH");

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
    msg.setTimeStamp(0.148556596065);
    msg.setSource(39351U);
    msg.setSourceEntity(231U);
    msg.setDestination(45690U);
    msg.setDestinationEntity(17U);
    msg.value = 0.973562402909;
    msg.sys_src = 50175U;

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
    msg.setTimeStamp(0.860250871257);
    msg.setSource(2784U);
    msg.setSourceEntity(43U);
    msg.setDestination(32810U);
    msg.setDestinationEntity(132U);
    msg.value = 0.640615720963;
    msg.sys_src = 62093U;

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
    msg.setTimeStamp(0.282189534586);
    msg.setSource(4252U);
    msg.setSourceEntity(242U);
    msg.setDestination(47372U);
    msg.setDestinationEntity(36U);
    msg.value = 0.329526055064;
    msg.sys_src = 33165U;

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
    msg.setTimeStamp(0.0994941510322);
    msg.setSource(10299U);
    msg.setSourceEntity(45U);
    msg.setDestination(1821U);
    msg.setDestinationEntity(119U);
    msg.value = 0.780177029958;
    msg.units = 206U;

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
    msg.setTimeStamp(0.709761204155);
    msg.setSource(19151U);
    msg.setSourceEntity(34U);
    msg.setDestination(38537U);
    msg.setDestinationEntity(42U);
    msg.value = 0.942405275869;
    msg.units = 88U;

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
    msg.setTimeStamp(0.533990946936);
    msg.setSource(64808U);
    msg.setSourceEntity(8U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(172U);
    msg.value = 0.553147281643;
    msg.units = 206U;

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
    msg.setTimeStamp(0.434816277113);
    msg.setSource(58811U);
    msg.setSourceEntity(189U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(251U);
    msg.base_lat = 0.290356769773;
    msg.base_lon = 0.0399746445436;
    msg.base_time = 0.977115451997;

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
    msg.setTimeStamp(0.0187180469779);
    msg.setSource(29440U);
    msg.setSourceEntity(146U);
    msg.setDestination(44877U);
    msg.setDestinationEntity(233U);
    msg.base_lat = 0.72999576415;
    msg.base_lon = 0.872119146216;
    msg.base_time = 0.445570408224;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 48126U;
    tmp_msg_0.priority = -106;
    tmp_msg_0.x = 31347;
    tmp_msg_0.y = 9946;
    tmp_msg_0.z = -10589;
    tmp_msg_0.t = -4967;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 85U;
    tmp_tmp_msg_0_0.htime = 0.699137841746;
    tmp_tmp_msg_0_0.context.assign("EESTADYNBXTMTOCEZQECVWLUAPZYJYIARRLGTMYTTQGVIFXZVHKDEFMNYKDABLHJHZZWUMGCMZGEGILLXJJVOWIVDSGRKMXOCDUSGMNVWDOOPQCKPRFFXKFFYMNPUKUBRLVLSUHPSDUMAXBSYZBXJYQEJWDSIBFHJJBPQNAKNOAPWRGFMHALODAOVPTJRGTBIIXSQXWIRCHZBEJULYVSTNDQKOPN");
    tmp_tmp_msg_0_0.text.assign("PYKQZBUAJADMAMDVUCVSYQPQTUTTLWPIQQHLUVSCJMGRRCDKXNYHXGXVUNCEXRUELTKRJBAENIBKTMZRVOZTRWIVXZFEJGMUVNO");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.876517773188);
    msg.setSource(26687U);
    msg.setSourceEntity(29U);
    msg.setDestination(52216U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.574817354059;
    msg.base_lon = 0.722050287724;
    msg.base_time = 0.582040234258;

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
    msg.setTimeStamp(0.918110403076);
    msg.setSource(60894U);
    msg.setSourceEntity(75U);
    msg.setDestination(53701U);
    msg.setDestinationEntity(149U);
    msg.base_lat = 0.405254116719;
    msg.base_lon = 0.452291143659;
    msg.base_time = 0.951590767733;
    const char tmp_msg_0[] = {118, 31, 121, 103, -122, 115, 88, 125, -50, 69, 121, 90, 32, 63, 2, 0, -51, -35, 9, -112, 71, -94, 61, -115, -14, 53, -127, -46, 48, -86, 88, -121, 88, -67, -32, -117, 55, 76, 76, -94, -38, 124, 23, -106, 102, 6, 119, 122, 87, -1, -12, 25, -92, 111, 110, 10, -107, -112, -21, 63, 101, 105, 114, -10, -82, 14, 82, -82, -62, 5, -49, 15, 27, -83, -7, -75, -128, -102, 12, -25, 33, -38, -21, -70, -103, -51, 40, 74, 35, -92, 32, -105, 96, 7, 67, 26, 100, 36, 116, -87, 8, -82, 67, 108, -111, -109, 110, 53, -56, -38, 8, -89, 60, 10, -91, -106, -96, 70, 79, 50, 70, 57, -38, 126, -114, -28, 57, -90, 57, -93, 56, -84, -39, 31, 72, -67, 67, 23, 58, -18, 103, -114, -85, 5, 83, -42, -30, 86, 85, -65, -112, -100, -39, -120, 115, -17, 116, 38, 126, 116, 41, 78};
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
    msg.setTimeStamp(0.0924743948271);
    msg.setSource(50735U);
    msg.setSourceEntity(153U);
    msg.setDestination(34265U);
    msg.setDestinationEntity(116U);
    msg.base_lat = 0.771000009013;
    msg.base_lon = 0.406028206405;
    msg.base_time = 0.378340146662;
    const char tmp_msg_0[] = {-32, -7, -77, -22, -19, -52, -38, -114, -118, -89, 78, -116, 86, -100, -54, 117, 16, -30, 24, -34, 79, -32, 28, -72, -62, 9, -111, 114, -39, -58, -116, 54, -73, 50, -80, -114, -20, 30, 47, 17, 70, 14, -56, 8, 79, -69, -53, 76, 23, -8, -30, -100, -82, 77, -37, 100, 96, -84, -34, -39, 13, 109, -3, -63, -114, -75, 23, 64, -28, -99, 51, -22, -128, -90, -25, -49, 1, -17, -22, -99, 64, 83, -84, 23, 109, -22, 40, -27, -1, -96, -95, -9, 69, -53, 65, -125, -107, 21, 121, -102, 52, 113, 0, 5, -126, 0, 108, -121, -13, 108, 41, -13, 11, 6, -92, -22, 54, 120, 40, -60, -21, -41, -8, -85, -19, -90, 116, 95, -25, 17, 104};
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
    msg.setTimeStamp(0.467355707449);
    msg.setSource(14701U);
    msg.setSourceEntity(7U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(184U);
    msg.base_lat = 0.285773238264;
    msg.base_lon = 0.12693168498;
    msg.base_time = 0.505987854513;
    const char tmp_msg_0[] = {-114, 43, 122, -71, -48, 32, 46, 35, -17, 11, 45, -62, 122, 116, -67, -114, 126, 75, -114, 5, -15, -57, -77, 85, 32, 70, 42, 101, 79, 114, -91, -89, -4, 29, 60, -28, -105, -18, -80, -105, -110, 12, -9, 82, 53, -42, -115, -114, 84, -48, 117, -22, -84, 88, -98, 113, 68, 70, 18, 15, -92, -30, 68, 38, -124, 19, 59, -67, -119, 90, -40, -126, 24, 83, 123, -40, 54, 14, 78, 65, 62, -95, 99, 66, 35, 71, -84, -46, -99, 19, -40, 120, -10, -112, -90, 126, 87, -122, -93, 1, -25, 121, -46, -106, 94, -32, -14, 50, -111, 31, -8, 7, -99, -55, -72, -12, -104, -5, 37};
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
    msg.setTimeStamp(0.588762765832);
    msg.setSource(51565U);
    msg.setSourceEntity(14U);
    msg.setDestination(62811U);
    msg.setDestinationEntity(7U);
    msg.sys_id = 50022U;
    msg.priority = 122;
    msg.x = 26623;
    msg.y = -11586;
    msg.z = -21261;
    msg.t = -32014;
    IMC::AcousticMessage tmp_msg_0;
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 22U;
    tmp_tmp_msg_0_0.angle = 0.0258945718592;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.111407574213);
    msg.setSource(1787U);
    msg.setSourceEntity(88U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(3U);
    msg.sys_id = 19711U;
    msg.priority = 102;
    msg.x = 29386;
    msg.y = 20931;
    msg.z = -26185;
    msg.t = 12570;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("CXAPDOJDCGXPDBHOZFNDRDWZZMHKMCFYGCKIVVMLZCUUDIYNTJVWABQXJVBWWOUOINNKYMBCJPDOHTLPFTUAQEEKNPYYMTDWGNXOCJBRROLDSTBVQJRXFGUSHZAMSEEVQUIIITWJSIXXSBXZOYMTHIESPQTBFTY");
    tmp_msg_0.message_id = 34024U;
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
    msg.setTimeStamp(0.0567786764648);
    msg.setSource(9357U);
    msg.setSourceEntity(73U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(43U);
    msg.sys_id = 40849U;
    msg.priority = -28;
    msg.x = 12104;
    msg.y = 23756;
    msg.z = -5353;
    msg.t = 10393;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("BQCJBQEAWVNSFDHRELESFVHCGMOHROWLHEGINFJWYKVMTYIAHTZPAZUVFZYQQOQAMPLBADPTUVKKNELJOZDSPYKVUJTKGBSTTXDDWEGYCOACSUNHMVGWZCORXMPAOCVNZQZLPFCHHRYIMDPTIXRZXYDPDISRNBNOFPSAN");
    tmp_msg_0.op = 253U;
    tmp_msg_0.sched_time = 0.452286764349;
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
    msg.setTimeStamp(0.0398467951905);
    msg.setSource(33727U);
    msg.setSourceEntity(105U);
    msg.setDestination(35322U);
    msg.setDestinationEntity(39U);
    msg.req_id = 39497U;
    msg.type = 120U;
    msg.max_size = 51898U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.668997129288;
    tmp_msg_0.base_lon = 0.671157579484;
    tmp_msg_0.base_time = 0.611770654442;
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
    msg.setTimeStamp(0.279068842539);
    msg.setSource(16766U);
    msg.setSourceEntity(148U);
    msg.setDestination(62218U);
    msg.setDestinationEntity(1U);
    msg.req_id = 35753U;
    msg.type = 5U;
    msg.max_size = 47230U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.344453496478;
    tmp_msg_0.base_lon = 0.409216448413;
    tmp_msg_0.base_time = 0.861588589793;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 60878U;
    tmp_tmp_msg_0_0.destination = 47911U;
    tmp_tmp_msg_0_0.timeout = 0.712145929516;
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 22643U;
    tmp_tmp_tmp_msg_0_0_0.flags = 182U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.86196312437;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0273642439282;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.582278888297;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 76U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.591575978948;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 181U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.854299641063;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.705220125724;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 157U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UWMAGWROPJWFKBRWBYDZDGVMLQCVCRMMNXMTSSFZQFBUJLJHVYHNQOBUFOEHISZXLSXKPOACLLICCJIIBPXARAOICXACVYJKHBXRYQFOWREIKRXWPTZTCZGQVOCAUOUJTKYDWHLSKBGRMBEUPTKLDHBGNNXFLNPAVMQZJSTDAPBVWZNDJHIUG");
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
    msg.setTimeStamp(0.773291313083);
    msg.setSource(55109U);
    msg.setSourceEntity(84U);
    msg.setDestination(64363U);
    msg.setDestinationEntity(114U);
    msg.req_id = 37688U;
    msg.type = 82U;
    msg.max_size = 6778U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.737060876397;
    tmp_msg_0.base_lon = 0.757781866732;
    tmp_msg_0.base_time = 0.241027108178;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 25390U;
    tmp_tmp_msg_0_0.priority = 24;
    tmp_tmp_msg_0_0.x = -12766;
    tmp_tmp_msg_0_0.y = -24750;
    tmp_tmp_msg_0_0.z = -16889;
    tmp_tmp_msg_0_0.t = 20536;
    IMC::GpsFixRejection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.utc_time = 0.620292282495;
    tmp_tmp_tmp_msg_0_0_0.reason = 27U;
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
    msg.setTimeStamp(0.975571659536);
    msg.setSource(25608U);
    msg.setSourceEntity(243U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(19U);
    msg.original_source = 38U;
    msg.destination = 45810U;
    msg.timeout = 0.434867088129;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SZPNRDVALCHFSINZSISCGCWJYIJPPCQQDDALNMQJOWOQMUTNABFSEKIMDWXJMSGKUQMPNWRTNXVRSRCVBFDBHRXLVHDOTTXEKVCOYZTHIYIDPFGTESOWENZAAICHHIYMUJTULBWVABWGUXDKHXROJRQNGOBTYYFYSDKZBBCZEFNCQLVLHPMLZULRPKUPQPFYGDOL");
    tmp_msg_0.predicate.assign("NZTJEOJOBJNMPGIASTJCDHDBKDIVDHALQUNLXTYLBBKOGFHITEPFIVADYAWPPUUNJPUNWQJDAQKTCOZOFNZEWGNFYQFAFASEWJKNTKUSNRBBSGBEMEHXFQSRCWPUTHDYMRVDNESXOTT");
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
    msg.setTimeStamp(0.148000153739);
    msg.setSource(16718U);
    msg.setSourceEntity(97U);
    msg.setDestination(48014U);
    msg.setDestinationEntity(253U);
    msg.original_source = 17930U;
    msg.destination = 23117U;
    msg.timeout = 0.745037671338;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 96U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HZQEIGFNZYWELVCOHDQXBPBEWMTHQUWGGSYDXBQOBMBRTIYYZSLMQDZYSJADCCCDYGDPYQTRLHSVTCZBLRHKWKIFSUCKSXFMNTENLXWUQZTCTTUIWGUAFIPETRJVNVVKAJHOUPOESXKREXZENWPWOCJRSNWW");
    tmp_tmp_msg_0_0.lat = 0.322173627596;
    tmp_tmp_msg_0_0.lon = 0.62303165973;
    tmp_tmp_msg_0_0.z = 0.571828052113;
    tmp_tmp_msg_0_0.z_units = 44U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.792534646954);
    msg.setSource(51085U);
    msg.setSourceEntity(176U);
    msg.setDestination(37571U);
    msg.setDestinationEntity(50U);
    msg.original_source = 26564U;
    msg.destination = 41600U;
    msg.timeout = 0.686692211086;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 184U;
    tmp_msg_0.step_number = 240U;
    tmp_msg_0.step.assign("NFZONHSLFZMOKRMPVXDWGTTCFDKEWVZCQGCGPUIBUHSHNDXJAHDAXPRUCYINZFWIPKKCDETCIIRYIWGOAPXWICYXBTVTFDXJGGHNAMWARCMVESEYPBTEFKMFGALYDIFLWIAOTZW");
    tmp_msg_0.flags = 127U;
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.407105309268);
    msg.setSource(64953U);
    msg.setSourceEntity(127U);
    msg.setDestination(12995U);
    msg.setDestinationEntity(10U);
    msg.id = 108U;
    msg.range = 0.601971936239;

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
    msg.setTimeStamp(0.433591823043);
    msg.setSource(58814U);
    msg.setSourceEntity(220U);
    msg.setDestination(49838U);
    msg.setDestinationEntity(109U);
    msg.id = 225U;
    msg.range = 0.683927760233;

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
    msg.setTimeStamp(0.202156985864);
    msg.setSource(12372U);
    msg.setSourceEntity(68U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(175U);
    msg.id = 199U;
    msg.range = 0.200401583074;

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
    msg.setTimeStamp(0.987494515116);
    msg.setSource(37967U);
    msg.setSourceEntity(80U);
    msg.setDestination(4143U);
    msg.setDestinationEntity(127U);
    msg.beacon.assign("TKGYFRQBHSNVNBZUTAZSVCTMHJWZODJNRFEFIJOLBPDDIDGDVMJXAZQCIXRHMZPSYFGJSOXEXAEHBAEHYJLUHIGR");
    msg.lat = 0.72618205638;
    msg.lon = 0.639597830002;
    msg.depth = 0.596333856157;
    msg.query_channel = 26U;
    msg.reply_channel = 241U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.631736105343);
    msg.setSource(14219U);
    msg.setSourceEntity(52U);
    msg.setDestination(26640U);
    msg.setDestinationEntity(12U);
    msg.beacon.assign("YLASYSIFUBYGQTWHPJJMNYMAXGOWDYAOICVKHJSSHXBKGARQZGXGFKZ");
    msg.lat = 0.645709538159;
    msg.lon = 0.851140332878;
    msg.depth = 0.572874942731;
    msg.query_channel = 229U;
    msg.reply_channel = 175U;
    msg.transponder_delay = 180U;

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
    msg.setTimeStamp(0.842032155972);
    msg.setSource(10015U);
    msg.setSourceEntity(187U);
    msg.setDestination(28924U);
    msg.setDestinationEntity(168U);
    msg.beacon.assign("PWDCUZLLVEBYQIC");
    msg.lat = 0.845109174791;
    msg.lon = 0.787265379329;
    msg.depth = 0.964100795442;
    msg.query_channel = 25U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 111U;

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
    msg.setTimeStamp(0.0348109391459);
    msg.setSource(45983U);
    msg.setSourceEntity(237U);
    msg.setDestination(43646U);
    msg.setDestinationEntity(118U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.766948189672);
    msg.setSource(47325U);
    msg.setSourceEntity(219U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(141U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.557550430334);
    msg.setSource(29908U);
    msg.setSourceEntity(215U);
    msg.setDestination(50792U);
    msg.setDestinationEntity(34U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.108980414259);
    msg.setSource(49608U);
    msg.setSourceEntity(183U);
    msg.setDestination(19091U);
    msg.setDestinationEntity(126U);
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 13U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.564338549116;
    tmp_tmp_msg_0_0.speed_units = 31U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.67407513082;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.939318370599;
    tmp_msg_0.lon = 0.925817004425;
    tmp_msg_0.radius = 0.00653524776828;
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
    msg.setTimeStamp(0.237613609379);
    msg.setSource(56847U);
    msg.setSourceEntity(118U);
    msg.setDestination(37121U);
    msg.setDestinationEntity(82U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 167U;
    tmp_msg_0.mask = 315447340U;
    tmp_msg_0.scope_ref = 1644530337U;
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
    msg.setTimeStamp(0.653185437148);
    msg.setSource(1826U);
    msg.setSourceEntity(182U);
    msg.setDestination(65452U);
    msg.setDestinationEntity(158U);
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.1520790537;
    tmp_msg_0.i = 0.474067157449;
    tmp_msg_0.d = 0.837378842943;
    tmp_msg_0.a = 0.0339588160048;
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
    msg.setTimeStamp(0.204968874656);
    msg.setSource(38334U);
    msg.setSourceEntity(58U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(176U);
    msg.op = 142U;
    msg.system.assign("PUFAWIFKTCELGBUJKYGLUCQCAVGPCXZJJBQUWCSFYVDTILAAZDOESWDJVWITKNPOEHDSLYXSBMNXYZXWABWMYQBHDOEEJQVZKVS");
    msg.range = 0.390433463896;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.981334832254;
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
    msg.setTimeStamp(0.332476381386);
    msg.setSource(3768U);
    msg.setSourceEntity(0U);
    msg.setDestination(37034U);
    msg.setDestinationEntity(92U);
    msg.op = 62U;
    msg.system.assign("CWYNRMHBEUSWKEIKSCZZAYFYPCMREKYHWJEGMOS");
    msg.range = 0.726816794111;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.12860576761);
    msg.setSource(23877U);
    msg.setSourceEntity(189U);
    msg.setDestination(23148U);
    msg.setDestinationEntity(130U);
    msg.op = 72U;
    msg.system.assign("KNVQJTAAJSAVHDSUZWQHCMRJTWYTMGURCPEIMBNHSYBQFRBAXCEJKEQGMOFGZFOWJAMEOPMSXYVHMVCRDPXNEAFNWAXHNLMLNSOBJTNXPBLLNUYVBZOIAFXZLHIKYKCAVQMBEKSGTKDMIWCYGIHTHUFRUC");
    msg.range = 0.805238197527;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("VUFTYJPERVFMXINASJRRNVYYEDKCCCHXPEDCRQEYDSPDLHNXJZPWCYVYIPZKMERUZSYOZBOQKUCPSPEWJMAMXTWRWFOGGTFOUNAOQZOKBFEDACRWWSPLKJMVXMXVIOISANVIFSGAITKQKPUTZSHHLMKNJBHNBYRQIYNCKAZXLYLAG");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TJANJZBNDHTOGMOQZREITHXPYYAEXKEAITVAIGDLZVJWRHOGNPSFHJSRUZDPJOVLXFFQDYPOOCCFICEWUVUFXVOSKZEFTQCMQWRHMZMAWWHWWFGVBHYCRSIPPPMLZBBPOXAIMFJAALQJUYKXBYFLNEUTRTMITDYXMVVTXRQKHDPJKGPGKCDURXMKCVQNWSEELGKBOHTDLLLQGBUDE");
    tmp_tmp_msg_0_0.value.assign("YCBGULEVYQJRAIOZUXXRUMKPUUFQXEDKWRPINPNIPWLNLKGPOLJELYAXNQVFFGJVSTVERYASHIGTYZHIXHNDQPTAKECJDZWBOWIOAWSNIVRBHPSVBRKQLMNSTGYDHZRWSZRDAOYNQOCRGKMZTWBVUMMZDXESXKWIGVLBJFKGIBPKSMMF");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.944877935171);
    msg.setSource(13573U);
    msg.setSourceEntity(81U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.503989525588);
    msg.setSource(49497U);
    msg.setSourceEntity(42U);
    msg.setDestination(6152U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.752344255476);
    msg.setSource(59680U);
    msg.setSourceEntity(197U);
    msg.setDestination(20662U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.96761749528);
    msg.setSource(9890U);
    msg.setSourceEntity(141U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(219U);
    msg.list.assign("ADKCZYFRHPZOIFTGGNROJSLFRIJEGASBMZSCZJXGHBYGWHYVUCWHBSDEJALXBKPGBACHUPETJJFMYUPNQGFSXEROV");

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
    msg.setTimeStamp(0.953816228608);
    msg.setSource(48854U);
    msg.setSourceEntity(131U);
    msg.setDestination(36321U);
    msg.setDestinationEntity(142U);
    msg.list.assign("FWQSDUNTACRNUPHXAIWYBROYPUNZXLPXAVGUEXWRJLEZLVDAGPDMOY");

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
    msg.setTimeStamp(0.1948718544);
    msg.setSource(15395U);
    msg.setSourceEntity(227U);
    msg.setDestination(1340U);
    msg.setDestinationEntity(125U);
    msg.list.assign("DTNJWGECQVWPPBHMEPWGCQXFFOPKYLSPLWPANWGXULZZVDKKJCMHKOYTAAJFGLXVZIBYITABMHLFLDRJKANXVCHYKTSDPLKFBSMVQHZUEUZYQPNNLIRQKVSDRGTEMOWYQKDYJNMPPDSNRTCXFFSDZQAHRGVBHRWOOERRUMADGOCBFWOOMULJXRDVCIXASIOEHEETZSAWJGMBFJUVASYUUUQNCNQICVXFMLBXBZREC");

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
    msg.setTimeStamp(0.813650024382);
    msg.setSource(57339U);
    msg.setSourceEntity(154U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(190U);
    msg.peer.assign("RKDGWVJWDLVVZCBTXBIJWZNIODLKZAEZYSDZWKOJOVQHJXVO");
    msg.rssi = 0.65187907407;
    msg.integrity = 16868U;

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
    msg.setTimeStamp(0.796448452446);
    msg.setSource(59682U);
    msg.setSourceEntity(49U);
    msg.setDestination(42194U);
    msg.setDestinationEntity(59U);
    msg.peer.assign("TFAQXUODATFZNDXAIQRRSCZXIRKNWLZVRLHYWNCOYWVAGXEGXNTBHFKBPQRRDDGSPBJUVEKTRAGGYNUQDNBGFNWBKRWULJCHJLENBDKENSJSPMWIGTJWXAXSOFLYHJMRATIOMLQHVDKRXMMDLCVUPFAOYKUUHUEQFVVJIWLGNI");
    msg.rssi = 0.180171795485;
    msg.integrity = 39760U;

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
    msg.setTimeStamp(0.482489609961);
    msg.setSource(60186U);
    msg.setSourceEntity(89U);
    msg.setDestination(6416U);
    msg.setDestinationEntity(105U);
    msg.peer.assign("GMIJINJLNMFVRVDFKDOWBALSIOSOCXMPNHVTZCAEAZMNKPCZWRBHVWPVEWDLWKDTOXTZUJUUJSBGDEEJJETTSMOQHMUOEPPDFBKXSYJTWIZY");
    msg.rssi = 0.89843319544;
    msg.integrity = 53113U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.899996519493);
    msg.setSource(2200U);
    msg.setSourceEntity(60U);
    msg.setDestination(45288U);
    msg.setDestinationEntity(14U);
    msg.value = -17190;

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
    msg.setTimeStamp(0.896886204299);
    msg.setSource(50687U);
    msg.setSourceEntity(16U);
    msg.setDestination(36003U);
    msg.setDestinationEntity(26U);
    msg.value = -21495;

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
    msg.setTimeStamp(0.303800605703);
    msg.setSource(17436U);
    msg.setSourceEntity(127U);
    msg.setDestination(16659U);
    msg.setDestinationEntity(66U);
    msg.value = -10997;

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
    msg.setTimeStamp(0.241557682627);
    msg.setSource(21523U);
    msg.setSourceEntity(205U);
    msg.setDestination(30076U);
    msg.setDestinationEntity(2U);
    msg.value = 0.13963180574;

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
    msg.setTimeStamp(0.473667142332);
    msg.setSource(3461U);
    msg.setSourceEntity(97U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(80U);
    msg.value = 0.804655142288;

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
    msg.setTimeStamp(0.931304425162);
    msg.setSource(37910U);
    msg.setSourceEntity(78U);
    msg.setDestination(3081U);
    msg.setDestinationEntity(191U);
    msg.value = 0.574582308056;

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
    msg.setTimeStamp(0.0282644441879);
    msg.setSource(48184U);
    msg.setSourceEntity(2U);
    msg.setDestination(45219U);
    msg.setDestinationEntity(200U);
    msg.value = 0.00306249764459;

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
    msg.setTimeStamp(0.337340150489);
    msg.setSource(49388U);
    msg.setSourceEntity(217U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(231U);
    msg.value = 0.245781426655;

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
    msg.setTimeStamp(0.877184056503);
    msg.setSource(25722U);
    msg.setSourceEntity(104U);
    msg.setDestination(51193U);
    msg.setDestinationEntity(200U);
    msg.value = 0.60676831649;

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
    msg.setTimeStamp(0.104885632809);
    msg.setSource(35006U);
    msg.setSourceEntity(78U);
    msg.setDestination(16519U);
    msg.setDestinationEntity(172U);
    msg.validity = 23954U;
    msg.type = 208U;
    msg.utc_year = 42329U;
    msg.utc_month = 90U;
    msg.utc_day = 13U;
    msg.utc_time = 0.342769099471;
    msg.lat = 0.208765933403;
    msg.lon = 0.290648580444;
    msg.height = 0.268551219786;
    msg.satellites = 215U;
    msg.cog = 0.678141027349;
    msg.sog = 0.833528301667;
    msg.hdop = 0.270892667785;
    msg.vdop = 0.180600505774;
    msg.hacc = 0.386191211065;
    msg.vacc = 0.514590196697;

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
    msg.setTimeStamp(0.661342930364);
    msg.setSource(42483U);
    msg.setSourceEntity(80U);
    msg.setDestination(51736U);
    msg.setDestinationEntity(237U);
    msg.validity = 60388U;
    msg.type = 162U;
    msg.utc_year = 8366U;
    msg.utc_month = 98U;
    msg.utc_day = 78U;
    msg.utc_time = 0.453115623184;
    msg.lat = 0.318076104062;
    msg.lon = 0.314157638976;
    msg.height = 0.603308376397;
    msg.satellites = 88U;
    msg.cog = 0.92263205983;
    msg.sog = 0.971099146084;
    msg.hdop = 0.118176530696;
    msg.vdop = 0.535736410688;
    msg.hacc = 0.434407820908;
    msg.vacc = 0.830935698485;

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
    msg.setTimeStamp(0.732449884839);
    msg.setSource(11288U);
    msg.setSourceEntity(97U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(184U);
    msg.validity = 11682U;
    msg.type = 31U;
    msg.utc_year = 43401U;
    msg.utc_month = 182U;
    msg.utc_day = 4U;
    msg.utc_time = 0.966817329682;
    msg.lat = 0.820298725629;
    msg.lon = 0.225194530765;
    msg.height = 0.293473566623;
    msg.satellites = 158U;
    msg.cog = 0.70771088649;
    msg.sog = 0.108347056393;
    msg.hdop = 0.960205105197;
    msg.vdop = 0.0131358612612;
    msg.hacc = 0.420069613722;
    msg.vacc = 0.12629149192;

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
    msg.setTimeStamp(0.267224225788);
    msg.setSource(11527U);
    msg.setSourceEntity(48U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(141U);
    msg.time = 0.854943997699;
    msg.phi = 0.701546234731;
    msg.theta = 0.785631307267;
    msg.psi = 0.865259147607;
    msg.psi_magnetic = 0.182989208097;

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
    msg.setTimeStamp(0.637695597047);
    msg.setSource(58729U);
    msg.setSourceEntity(84U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(54U);
    msg.time = 0.311881132689;
    msg.phi = 0.134302402713;
    msg.theta = 0.281526942909;
    msg.psi = 0.437690894706;
    msg.psi_magnetic = 0.756257124241;

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
    msg.setTimeStamp(0.0907120344258);
    msg.setSource(50323U);
    msg.setSourceEntity(18U);
    msg.setDestination(63669U);
    msg.setDestinationEntity(108U);
    msg.time = 0.66543539467;
    msg.phi = 0.85082974536;
    msg.theta = 0.426445211534;
    msg.psi = 0.936970834472;
    msg.psi_magnetic = 0.958693337869;

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
    msg.setTimeStamp(0.709806596872);
    msg.setSource(50018U);
    msg.setSourceEntity(184U);
    msg.setDestination(27047U);
    msg.setDestinationEntity(162U);
    msg.time = 0.148003427136;
    msg.x = 0.628148033525;
    msg.y = 0.225057522163;
    msg.z = 0.526036820899;
    msg.timestep = 0.20790910427;

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
    msg.setTimeStamp(0.661221674052);
    msg.setSource(5735U);
    msg.setSourceEntity(108U);
    msg.setDestination(39691U);
    msg.setDestinationEntity(140U);
    msg.time = 0.992213385872;
    msg.x = 0.0769901257946;
    msg.y = 0.344477919201;
    msg.z = 0.678049661643;
    msg.timestep = 0.0575673391879;

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
    msg.setTimeStamp(0.585125816015);
    msg.setSource(41075U);
    msg.setSourceEntity(227U);
    msg.setDestination(15849U);
    msg.setDestinationEntity(135U);
    msg.time = 0.867758592616;
    msg.x = 0.311682929273;
    msg.y = 0.316487274614;
    msg.z = 0.589758172705;
    msg.timestep = 0.577908657306;

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
    msg.setTimeStamp(0.559574260683);
    msg.setSource(48373U);
    msg.setSourceEntity(214U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(63U);
    msg.time = 0.997140949694;
    msg.x = 0.174558239868;
    msg.y = 0.95093993443;
    msg.z = 0.283080766714;

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
    msg.setTimeStamp(0.665347828961);
    msg.setSource(62540U);
    msg.setSourceEntity(37U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(220U);
    msg.time = 0.411474611611;
    msg.x = 0.425831478285;
    msg.y = 0.554720557082;
    msg.z = 0.825720994554;

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
    msg.setTimeStamp(0.117574291829);
    msg.setSource(33359U);
    msg.setSourceEntity(175U);
    msg.setDestination(52042U);
    msg.setDestinationEntity(98U);
    msg.time = 0.134191090773;
    msg.x = 0.731914909545;
    msg.y = 0.345622547192;
    msg.z = 0.304182279233;

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
    msg.setTimeStamp(0.657861736269);
    msg.setSource(26367U);
    msg.setSourceEntity(242U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(36U);
    msg.time = 0.759395998753;
    msg.x = 0.0335615685166;
    msg.y = 0.455701607973;
    msg.z = 0.447966744445;

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
    msg.setTimeStamp(0.644503608114);
    msg.setSource(12749U);
    msg.setSourceEntity(49U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(173U);
    msg.time = 0.862242164531;
    msg.x = 0.444943372936;
    msg.y = 0.794348038079;
    msg.z = 0.464789284359;

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
    msg.setTimeStamp(0.0152785024166);
    msg.setSource(21654U);
    msg.setSourceEntity(137U);
    msg.setDestination(64778U);
    msg.setDestinationEntity(212U);
    msg.time = 0.427075512775;
    msg.x = 0.798669408725;
    msg.y = 0.321042008811;
    msg.z = 0.726684524445;

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
    msg.setTimeStamp(0.818407807095);
    msg.setSource(44956U);
    msg.setSourceEntity(184U);
    msg.setDestination(39132U);
    msg.setDestinationEntity(146U);
    msg.time = 0.455305581941;
    msg.x = 0.54370145817;
    msg.y = 0.6098003369;
    msg.z = 0.0739083571251;

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
    msg.setTimeStamp(0.371742309135);
    msg.setSource(47749U);
    msg.setSourceEntity(58U);
    msg.setDestination(34078U);
    msg.setDestinationEntity(229U);
    msg.time = 0.605405206951;
    msg.x = 0.229644803868;
    msg.y = 0.518912360953;
    msg.z = 0.185589865939;

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
    msg.setTimeStamp(0.40861649306);
    msg.setSource(54679U);
    msg.setSourceEntity(232U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(79U);
    msg.time = 0.114596387685;
    msg.x = 0.958086321978;
    msg.y = 0.676492850529;
    msg.z = 0.898601878203;

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
    msg.setTimeStamp(0.218773150448);
    msg.setSource(18865U);
    msg.setSourceEntity(241U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(235U);
    msg.validity = 153U;
    msg.x = 0.030470943773;
    msg.y = 0.0200771569775;
    msg.z = 0.540724095915;

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
    msg.setTimeStamp(0.120185218822);
    msg.setSource(37374U);
    msg.setSourceEntity(135U);
    msg.setDestination(55637U);
    msg.setDestinationEntity(249U);
    msg.validity = 229U;
    msg.x = 0.290112308705;
    msg.y = 0.530685597258;
    msg.z = 0.14508613202;

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
    msg.setTimeStamp(0.396943609033);
    msg.setSource(14125U);
    msg.setSourceEntity(94U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(226U);
    msg.validity = 197U;
    msg.x = 0.525227147872;
    msg.y = 0.741764914476;
    msg.z = 0.406047238476;

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
    msg.setTimeStamp(0.0769476186817);
    msg.setSource(61409U);
    msg.setSourceEntity(105U);
    msg.setDestination(17694U);
    msg.setDestinationEntity(169U);
    msg.validity = 131U;
    msg.x = 0.185253848723;
    msg.y = 0.981748659527;
    msg.z = 0.76102449156;

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
    msg.setTimeStamp(0.963636574183);
    msg.setSource(2074U);
    msg.setSourceEntity(85U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(57U);
    msg.validity = 44U;
    msg.x = 0.0998031293565;
    msg.y = 0.152614550588;
    msg.z = 0.238475642916;

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
    msg.setTimeStamp(0.4764726207);
    msg.setSource(43279U);
    msg.setSourceEntity(160U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(211U);
    msg.validity = 148U;
    msg.x = 0.0222976501793;
    msg.y = 0.451242363294;
    msg.z = 0.863035614757;

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
    msg.setTimeStamp(0.22658634536);
    msg.setSource(52324U);
    msg.setSourceEntity(152U);
    msg.setDestination(41255U);
    msg.setDestinationEntity(48U);
    msg.time = 0.773267866223;
    msg.x = 0.342067647864;
    msg.y = 0.757780305579;
    msg.z = 0.134469137344;

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
    msg.setTimeStamp(0.629713134514);
    msg.setSource(24757U);
    msg.setSourceEntity(200U);
    msg.setDestination(26096U);
    msg.setDestinationEntity(84U);
    msg.time = 0.999158156071;
    msg.x = 0.744835438213;
    msg.y = 0.976643831584;
    msg.z = 0.881372895494;

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
    msg.setTimeStamp(0.580178061048);
    msg.setSource(22316U);
    msg.setSourceEntity(146U);
    msg.setDestination(30173U);
    msg.setDestinationEntity(109U);
    msg.time = 0.260850053774;
    msg.x = 0.274424538014;
    msg.y = 0.368569920513;
    msg.z = 0.470389285049;

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
    msg.setTimeStamp(0.855514699013);
    msg.setSource(54527U);
    msg.setSourceEntity(29U);
    msg.setDestination(21980U);
    msg.setDestinationEntity(7U);
    msg.validity = 249U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.337563010359;
    tmp_msg_0.beam_height = 0.913379172702;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.474807060897;

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
    msg.setTimeStamp(0.640426244883);
    msg.setSource(10242U);
    msg.setSourceEntity(122U);
    msg.setDestination(49090U);
    msg.setDestinationEntity(191U);
    msg.validity = 185U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.164351382183;
    tmp_msg_0.beam_height = 0.520803111322;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.289213855051;

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
    msg.setTimeStamp(0.117557618891);
    msg.setSource(52184U);
    msg.setSourceEntity(195U);
    msg.setDestination(62791U);
    msg.setDestinationEntity(51U);
    msg.validity = 147U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0514109227667;
    tmp_msg_0.y = 0.223219680607;
    tmp_msg_0.z = 0.486710470217;
    tmp_msg_0.phi = 0.694313721529;
    tmp_msg_0.theta = 0.313602176242;
    tmp_msg_0.psi = 0.0711526826498;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.308439013888;

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
    msg.setTimeStamp(0.989584798767);
    msg.setSource(62285U);
    msg.setSourceEntity(72U);
    msg.setDestination(6754U);
    msg.setDestinationEntity(103U);
    msg.value = 0.710658371373;

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
    msg.setTimeStamp(0.562455973644);
    msg.setSource(40201U);
    msg.setSourceEntity(237U);
    msg.setDestination(30298U);
    msg.setDestinationEntity(89U);
    msg.value = 0.00818604628879;

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
    msg.setTimeStamp(0.976229987671);
    msg.setSource(8726U);
    msg.setSourceEntity(62U);
    msg.setDestination(1271U);
    msg.setDestinationEntity(169U);
    msg.value = 0.115689069005;

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
    msg.setTimeStamp(0.156816367176);
    msg.setSource(37224U);
    msg.setSourceEntity(185U);
    msg.setDestination(40815U);
    msg.setDestinationEntity(157U);
    msg.value = 0.95231403211;

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
    msg.setTimeStamp(0.916768264927);
    msg.setSource(57216U);
    msg.setSourceEntity(86U);
    msg.setDestination(59723U);
    msg.setDestinationEntity(80U);
    msg.value = 0.958648383116;

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
    msg.setTimeStamp(0.961169116355);
    msg.setSource(30204U);
    msg.setSourceEntity(233U);
    msg.setDestination(61807U);
    msg.setDestinationEntity(237U);
    msg.value = 0.936524634252;

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
    msg.setTimeStamp(0.0651855990437);
    msg.setSource(57475U);
    msg.setSourceEntity(44U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(86U);
    msg.value = 0.816436802953;

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
    msg.setTimeStamp(0.178453840728);
    msg.setSource(2756U);
    msg.setSourceEntity(41U);
    msg.setDestination(10468U);
    msg.setDestinationEntity(230U);
    msg.value = 0.478605492107;

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
    msg.setTimeStamp(0.421476760161);
    msg.setSource(24706U);
    msg.setSourceEntity(217U);
    msg.setDestination(17801U);
    msg.setDestinationEntity(147U);
    msg.value = 0.744963168112;

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
    msg.setTimeStamp(0.527752712209);
    msg.setSource(46010U);
    msg.setSourceEntity(48U);
    msg.setDestination(21578U);
    msg.setDestinationEntity(192U);
    msg.value = 0.524961608459;

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
    msg.setTimeStamp(0.69980944859);
    msg.setSource(7876U);
    msg.setSourceEntity(187U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(139U);
    msg.value = 0.365405460807;

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
    msg.setTimeStamp(0.537899719921);
    msg.setSource(38763U);
    msg.setSourceEntity(144U);
    msg.setDestination(22546U);
    msg.setDestinationEntity(132U);
    msg.value = 0.226635141503;

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
    msg.setTimeStamp(0.779059363283);
    msg.setSource(35475U);
    msg.setSourceEntity(77U);
    msg.setDestination(5939U);
    msg.setDestinationEntity(148U);
    msg.value = 0.834239207298;

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
    msg.setTimeStamp(0.778824150173);
    msg.setSource(42223U);
    msg.setSourceEntity(227U);
    msg.setDestination(61695U);
    msg.setDestinationEntity(88U);
    msg.value = 0.516327308114;

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
    msg.setTimeStamp(0.839625062348);
    msg.setSource(20319U);
    msg.setSourceEntity(141U);
    msg.setDestination(44303U);
    msg.setDestinationEntity(52U);
    msg.value = 0.759956231038;

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
    msg.setTimeStamp(0.991252529701);
    msg.setSource(29411U);
    msg.setSourceEntity(101U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0004864235442;

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
    msg.setTimeStamp(0.544309093506);
    msg.setSource(30294U);
    msg.setSourceEntity(130U);
    msg.setDestination(37644U);
    msg.setDestinationEntity(34U);
    msg.value = 0.447098188911;

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
    msg.setTimeStamp(0.330923719168);
    msg.setSource(38662U);
    msg.setSourceEntity(249U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(134U);
    msg.value = 0.439828046016;

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
    msg.setTimeStamp(0.914917222072);
    msg.setSource(50840U);
    msg.setSourceEntity(1U);
    msg.setDestination(45319U);
    msg.setDestinationEntity(10U);
    msg.value = 0.446630848295;

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
    msg.setTimeStamp(0.546669978508);
    msg.setSource(42939U);
    msg.setSourceEntity(243U);
    msg.setDestination(46495U);
    msg.setDestinationEntity(72U);
    msg.value = 0.57668926219;

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
    msg.setTimeStamp(0.16656499486);
    msg.setSource(19622U);
    msg.setSourceEntity(170U);
    msg.setDestination(26735U);
    msg.setDestinationEntity(97U);
    msg.value = 0.746938726887;

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
    msg.setTimeStamp(0.5611597635);
    msg.setSource(46373U);
    msg.setSourceEntity(223U);
    msg.setDestination(36052U);
    msg.setDestinationEntity(203U);
    msg.value = 0.678225737022;

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
    msg.setTimeStamp(0.19442070614);
    msg.setSource(65431U);
    msg.setSourceEntity(228U);
    msg.setDestination(21535U);
    msg.setDestinationEntity(2U);
    msg.value = 0.309276764661;

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
    msg.setTimeStamp(0.126839328753);
    msg.setSource(42480U);
    msg.setSourceEntity(5U);
    msg.setDestination(57889U);
    msg.setDestinationEntity(106U);
    msg.value = 0.817641334147;

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
    msg.setTimeStamp(0.645671301369);
    msg.setSource(1897U);
    msg.setSourceEntity(35U);
    msg.setDestination(64018U);
    msg.setDestinationEntity(116U);
    msg.direction = 0.885646591341;
    msg.speed = 0.752595760878;
    msg.turbulence = 0.938286593121;

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
    msg.setTimeStamp(0.737647408228);
    msg.setSource(65363U);
    msg.setSourceEntity(114U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(207U);
    msg.direction = 0.868993990507;
    msg.speed = 0.762207028217;
    msg.turbulence = 0.526347012985;

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
    msg.setTimeStamp(0.336754927465);
    msg.setSource(1565U);
    msg.setSourceEntity(45U);
    msg.setDestination(34751U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.743237627381;
    msg.speed = 0.240797729717;
    msg.turbulence = 0.577123122594;

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
    msg.setTimeStamp(0.550629226739);
    msg.setSource(26065U);
    msg.setSourceEntity(80U);
    msg.setDestination(65504U);
    msg.setDestinationEntity(243U);
    msg.value = 0.63441338795;

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
    msg.setTimeStamp(0.342890157552);
    msg.setSource(41337U);
    msg.setSourceEntity(119U);
    msg.setDestination(13444U);
    msg.setDestinationEntity(222U);
    msg.value = 0.734393072815;

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
    msg.setTimeStamp(0.726143225879);
    msg.setSource(21656U);
    msg.setSourceEntity(44U);
    msg.setDestination(42168U);
    msg.setDestinationEntity(13U);
    msg.value = 0.454430807045;

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
    msg.setTimeStamp(0.956974012659);
    msg.setSource(449U);
    msg.setSourceEntity(248U);
    msg.setDestination(47682U);
    msg.setDestinationEntity(70U);
    msg.value.assign("EKRIEWSITIDUJGRVLGJCSAVWPVYVTYOCIBCQYZXPRGPNRCQXKEBYMBDPRGHWHG");

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
    msg.setTimeStamp(0.107000663696);
    msg.setSource(58369U);
    msg.setSourceEntity(128U);
    msg.setDestination(24112U);
    msg.setDestinationEntity(31U);
    msg.value.assign("LWOKRQNPXQGXWFGBEGJKHIBYKYKQPSJXVVNCLQVOULTMIAUQSBCLJICHWUDULVUBKFIHPGMWVAZQPGZZOGUOKTRGMAWMLPEEHUZOVISFOGIYFAM");

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
    msg.setTimeStamp(0.101597153274);
    msg.setSource(41563U);
    msg.setSourceEntity(205U);
    msg.setDestination(4776U);
    msg.setDestinationEntity(9U);
    msg.value.assign("EAQDFVASOFTHAVRUODUASKBCSLGDOHZEUEQXCJXIPVLTLCVOURAWZBBPSEDWMJJVHXGQXMPNSRFBWKGJUZZXDEGQKTMXUIDGCRLGOEWHQDVOQXYDEBRYRBVQFNLLTINNFFEDGEIXDXPVKHRCPTPIBOZMWFAZZSBJJILAGLNTUKNYYGKYPMKOJVAWPHPBBMMGVIMHALYWCCNONZIUPQTCLICQF");

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
    msg.setTimeStamp(0.864842869613);
    msg.setSource(62261U);
    msg.setSourceEntity(115U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(58U);
    const char tmp_msg_0[] = {-9, 87, -49, 11, -92, -123, 24, 113, 39, 24, 92, -86, 58, 79, 81, 94, 57, -25, 68, 115, 8, 26, -113, -30, -70, -14, -74, 94, 9, -79, -17, -43, -18, -33, -81, 32, -92, -85, 48, -87, 41, 52, 122, 38, -79, -86, 89, -93, -39, 6, 62, -83, -87, 104, 55, -117, -75, -123, 89, 82, -19, 101, -50, 47, -106, 84, -13};
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
    msg.setTimeStamp(0.132844067587);
    msg.setSource(13422U);
    msg.setSourceEntity(125U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {76, -74, 92, -97, 118, 95, -109, 111, 116, 84, 108, -69, 92, -67, -35, -120, -95, 28, 109, 29, 31, 63, -47, 124, -106, 67, 21, 110, 111, 22, 3, 103, 19, 104, 103, 92, -72, 99, -74, 34, 86, -38, -107, -96, -64, 91, -40, 88, 100, -99, -14, -88, -5, -39, 19, 31, 65, 79, -56, -67, -102, 2, -6, 117, 8, -105, -90, -70, -55, -60, 13, -46, -92, -91, 124, -89, -60, -81, 81, -74, -34, 36, -123, -8, 34, 10, 75, -107, 83, 17, -31, 9, -24, -44, 79, -48, 8, 69, -114, -92, 60, -36, 3, 4, -15, -41, -53, -20, -94, -68, -63, -69, -61, 119, 48, -72, -105, -40, -81, -122, 79, 16, 65, -11, 18, 122, 4, -27, 51, -49, 72, 60, -6, -23, -32, -5, 57, -52, 11, 98, -39, 87, -1, -86, 29, -29, -92, -9, 38, 44, -93, 47, 42, -94, 50, 125, 8, -69, -33, -77, 48, -68, 24, -26, -123, -33, -68, 98, -32, 22, -97, -109, -82, 34, 102, -40, -93, -56, -114, 49, -88, -34, -73, 125, 17, 93, 40, 71, -35, 106, 71, 89, 34, 12, 106, -4, -123, -18, 121, 74, -90, 38, -22, 111, -75, 35, 94, -120, 42, 95, -9, -55, -82, 37, 113, 57, -115, 73, -87, 14, -24, -115, -37, 10, 63, 1, 98, -26, -22, -100, -56, -78, -30, -33};
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
    msg.setTimeStamp(0.355150882395);
    msg.setSource(5252U);
    msg.setSourceEntity(161U);
    msg.setDestination(8925U);
    msg.setDestinationEntity(86U);
    const char tmp_msg_0[] = {-107, -49, 58, -37, 8, 82, 69, -51, -115, 77, 114, 121, 4, 8, -30, 10, -98, -128, 88, 1, -101, -8, -79, -26, 8, 113, -102, 2, 15, 38, -127, -43, 22, -119, -127, -25, -8, 46, 44, -82, -56, -100, -38, 55, -110, 20, 89, 96, -41, -78, -15, -6, -90, -127, 76, 26, 23, -14, -52, -57, -80, 119, -76, -36, -112, -82, -59};
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
    msg.setTimeStamp(0.896808088638);
    msg.setSource(19267U);
    msg.setSourceEntity(184U);
    msg.setDestination(58121U);
    msg.setDestinationEntity(99U);
    msg.type = 122U;
    msg.frequency = 2733453472U;
    msg.min_range = 25219U;
    msg.max_range = 54848U;
    msg.bits_per_point = 96U;
    msg.scale_factor = 0.120334018499;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.333738184187;
    tmp_msg_0.beam_height = 0.82851191449;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {118, -24, 74, 2, 76, -127, -82, 65, -94, -14, -105, -49, -122, -89, 76, -59, -109, -95, -31, 116, -79, -114, -13, 9, -105, -25, -92, 20, 54, 37, 111, -67, -77, -85, 102, -25, 108, -89, 68, 99, -14, -115, -113, 44, -47, -84, -33, 60, -109, -122, -14, -77, -97, 44, 62, -60, -103, -13, -1, -123, -22, -31, 45, -26, 57, -116, -31, -32, 95, -59, -22, -93, 116, -24, -29, 0, 109, 21, -59, -65, -46, 119, -65, 115, -91, 105, 38, -8, 69, -3, -54, 110, 55, 74, -39, -107, 126, 2, 74, -6, 55, 74, -25, 101, -2, 44, 65, -109, -126, -1, -64, -80, 69, -39, 31, 99, -77, 2, -51, 56, -75, 71, -50, -89, 124, 89, -118, -11, -32, -91, 7, -26, 124, -3, -100, 49, 99, 65, 115, -102, 98};
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
    msg.setTimeStamp(0.361681954713);
    msg.setSource(23793U);
    msg.setSourceEntity(207U);
    msg.setDestination(16010U);
    msg.setDestinationEntity(29U);
    msg.type = 74U;
    msg.frequency = 2798864815U;
    msg.min_range = 40512U;
    msg.max_range = 3952U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.611418231369;
    const char tmp_msg_0[] = {-84, -95, 111, -78, 13, 8, -87, -37, -65, -47, 124, -35, 72, 71, -67, -85, 92, 109, 25, -66, 39};
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
    msg.setTimeStamp(0.167116113525);
    msg.setSource(56309U);
    msg.setSourceEntity(248U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(154U);
    msg.type = 181U;
    msg.frequency = 1633805333U;
    msg.min_range = 11854U;
    msg.max_range = 64114U;
    msg.bits_per_point = 51U;
    msg.scale_factor = 0.0311073807732;
    const char tmp_msg_0[] = {88, 79, 53, -8, 106, -12, 4, 112, -16, 122, 62, 58, -116, 76, 32, -55, 85, -93, -32, 38, -31, 58, -36, -65, -57, -28, 108, 74, -83, 32, -120, -48, 27, 75, 15, -5, -120, -69, -94, -35, -118, 126, 0, -116, -97, -2, -6, 83, 5, -84, -99, 9, 87, -8, 101, 112, 10, 17, 37, 74, 66, -35, 92, -104, 95, 107, 112, -15, 94, -91, -18, -108, -9, -77, -47, -82, -48, 95, -108, -27, -36, -66, 28, -104, -46, -55, 119, -95, -36, 28, 97, -101, -35, 85, -61, -78, 112, -71, 13, -95, -15, -25, -66, -8};
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
    msg.setTimeStamp(0.0860669043525);
    msg.setSource(44364U);
    msg.setSourceEntity(226U);
    msg.setDestination(42676U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.929580150189);
    msg.setSource(51718U);
    msg.setSourceEntity(179U);
    msg.setDestination(21465U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.978003631265);
    msg.setSource(64487U);
    msg.setSourceEntity(154U);
    msg.setDestination(52833U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.318935452534);
    msg.setSource(7115U);
    msg.setSourceEntity(254U);
    msg.setDestination(62855U);
    msg.setDestinationEntity(246U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.671677597567);
    msg.setSource(60108U);
    msg.setSourceEntity(108U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(51U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.282330773807);
    msg.setSource(38120U);
    msg.setSourceEntity(176U);
    msg.setDestination(11734U);
    msg.setDestinationEntity(114U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.657909380516);
    msg.setSource(51295U);
    msg.setSourceEntity(215U);
    msg.setDestination(22010U);
    msg.setDestinationEntity(92U);
    msg.value = 0.579998149339;
    msg.confidence = 0.736720565859;
    msg.opmodes.assign("CVSWSEADDDPJWHTQXICVBJYMHOGAABMOGFXAFKRXEBGLEWYQLBPIHDMPACVPOOLOSDSOIFNBVWRBMRAHKRTERRYNZPQCZNQ");

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
    msg.setTimeStamp(0.888098344151);
    msg.setSource(6422U);
    msg.setSourceEntity(151U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0870317404804;
    msg.confidence = 0.405565734112;
    msg.opmodes.assign("ZDYMWSUCYTSBMFYAHCFLIYESIRZLXZHYHKOMGDMWNTGDPTKDHUDOKGVJNWJDUWQBYAQKLBKHTRUIHSOTXRVOTSBZIMXAWOFXIXTYUWXUFPEMN");

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
    msg.setTimeStamp(0.729899395851);
    msg.setSource(528U);
    msg.setSourceEntity(198U);
    msg.setDestination(10702U);
    msg.setDestinationEntity(91U);
    msg.value = 0.49054619412;
    msg.confidence = 0.375592496965;
    msg.opmodes.assign("BZQLXCIIRPZIWVEFQYUITEQQRDNUYDTBOKOFFYBVLXJLZLUSUTMNCXASWGUVKYAIPLNNMSNDGKKJVTNZNPBKUFLMJVIDSMHAHJGNPMBQFYQHMHCCSVRPLAMQWCEYEMCSRHWHQVCOKDWQDXIHFGUXMYETJXGXZTZJJNGCOYWPS");

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
    msg.setTimeStamp(0.813664429659);
    msg.setSource(61283U);
    msg.setSourceEntity(22U);
    msg.setDestination(58288U);
    msg.setDestinationEntity(160U);
    msg.itow = 3953035509U;
    msg.lat = 0.550779545299;
    msg.lon = 0.0255829719398;
    msg.height_ell = 0.477971284009;
    msg.height_sea = 0.338911458417;
    msg.hacc = 0.623847934718;
    msg.vacc = 0.756242684481;
    msg.vel_n = 0.35085723609;
    msg.vel_e = 0.381384741088;
    msg.vel_d = 0.745444317662;
    msg.speed = 0.240805377191;
    msg.gspeed = 0.860484697626;
    msg.heading = 0.454499732906;
    msg.sacc = 0.121754446698;
    msg.cacc = 0.794111993879;

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
    msg.setTimeStamp(0.725640555874);
    msg.setSource(37498U);
    msg.setSourceEntity(1U);
    msg.setDestination(11681U);
    msg.setDestinationEntity(220U);
    msg.itow = 360222869U;
    msg.lat = 0.713443664559;
    msg.lon = 0.565261312541;
    msg.height_ell = 0.205024956919;
    msg.height_sea = 0.164302783042;
    msg.hacc = 0.43683109091;
    msg.vacc = 0.944447119084;
    msg.vel_n = 0.807805127678;
    msg.vel_e = 0.596669948633;
    msg.vel_d = 0.621646783991;
    msg.speed = 0.735023776365;
    msg.gspeed = 0.687875781957;
    msg.heading = 0.840300543159;
    msg.sacc = 0.492091690994;
    msg.cacc = 0.943777392904;

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
    msg.setTimeStamp(0.146291135747);
    msg.setSource(61414U);
    msg.setSourceEntity(186U);
    msg.setDestination(6858U);
    msg.setDestinationEntity(128U);
    msg.itow = 133777901U;
    msg.lat = 0.181826318832;
    msg.lon = 0.939948805286;
    msg.height_ell = 0.454011361739;
    msg.height_sea = 0.344901341483;
    msg.hacc = 0.943095257549;
    msg.vacc = 0.90207150188;
    msg.vel_n = 0.552206917505;
    msg.vel_e = 0.587150735315;
    msg.vel_d = 0.449375204437;
    msg.speed = 0.691271972484;
    msg.gspeed = 0.578013761267;
    msg.heading = 0.631528474395;
    msg.sacc = 0.304964997763;
    msg.cacc = 0.454257549142;

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
    msg.setTimeStamp(0.652700163159);
    msg.setSource(38792U);
    msg.setSourceEntity(254U);
    msg.setDestination(30784U);
    msg.setDestinationEntity(15U);
    msg.id = 237U;
    msg.value = 0.127469564261;

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
    msg.setTimeStamp(0.952694338824);
    msg.setSource(42470U);
    msg.setSourceEntity(46U);
    msg.setDestination(48271U);
    msg.setDestinationEntity(244U);
    msg.id = 249U;
    msg.value = 0.236065653076;

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
    msg.setTimeStamp(0.979143292075);
    msg.setSource(42168U);
    msg.setSourceEntity(185U);
    msg.setDestination(21356U);
    msg.setDestinationEntity(118U);
    msg.id = 107U;
    msg.value = 0.669353985977;

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
    msg.setTimeStamp(0.312018323282);
    msg.setSource(28482U);
    msg.setSourceEntity(30U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(173U);
    msg.x = 0.782549106878;
    msg.y = 0.10570848326;
    msg.z = 0.345435592201;
    msg.phi = 0.740168085361;
    msg.theta = 0.230765042764;
    msg.psi = 0.781983472371;

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
    msg.setTimeStamp(0.462429723631);
    msg.setSource(31526U);
    msg.setSourceEntity(53U);
    msg.setDestination(14434U);
    msg.setDestinationEntity(217U);
    msg.x = 0.795250525276;
    msg.y = 0.220769896223;
    msg.z = 0.477797102865;
    msg.phi = 0.480991225526;
    msg.theta = 0.148058594644;
    msg.psi = 0.91212484788;

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
    msg.setTimeStamp(0.12849934503);
    msg.setSource(63463U);
    msg.setSourceEntity(221U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(133U);
    msg.x = 0.0489805561389;
    msg.y = 0.0396747537217;
    msg.z = 0.629826609365;
    msg.phi = 0.0763752497044;
    msg.theta = 0.474944432749;
    msg.psi = 0.864539581412;

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
    msg.setTimeStamp(0.15736735012);
    msg.setSource(11072U);
    msg.setSourceEntity(175U);
    msg.setDestination(48008U);
    msg.setDestinationEntity(8U);
    msg.beam_width = 0.922237501681;
    msg.beam_height = 0.555292159464;

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
    msg.setTimeStamp(0.0545663235521);
    msg.setSource(30737U);
    msg.setSourceEntity(170U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(184U);
    msg.beam_width = 0.111444580235;
    msg.beam_height = 0.671222380486;

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
    msg.setTimeStamp(0.985763759242);
    msg.setSource(58915U);
    msg.setSourceEntity(53U);
    msg.setDestination(6760U);
    msg.setDestinationEntity(6U);
    msg.beam_width = 0.623329233047;
    msg.beam_height = 0.750452928512;

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
    msg.setTimeStamp(0.424429371722);
    msg.setSource(50914U);
    msg.setSourceEntity(27U);
    msg.setDestination(25224U);
    msg.setDestinationEntity(185U);
    msg.sane = 241U;

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
    msg.setTimeStamp(0.929930695158);
    msg.setSource(5783U);
    msg.setSourceEntity(126U);
    msg.setDestination(21964U);
    msg.setDestinationEntity(136U);
    msg.sane = 135U;

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
    msg.setTimeStamp(0.936835990936);
    msg.setSource(50787U);
    msg.setSourceEntity(254U);
    msg.setDestination(42968U);
    msg.setDestinationEntity(243U);
    msg.sane = 154U;

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
    msg.setTimeStamp(0.712612877287);
    msg.setSource(19171U);
    msg.setSourceEntity(59U);
    msg.setDestination(29334U);
    msg.setDestinationEntity(224U);
    msg.value = 0.195662951241;

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
    msg.setTimeStamp(0.822438637566);
    msg.setSource(61832U);
    msg.setSourceEntity(158U);
    msg.setDestination(60063U);
    msg.setDestinationEntity(215U);
    msg.value = 0.807672860489;

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
    msg.setTimeStamp(0.717079632145);
    msg.setSource(47570U);
    msg.setSourceEntity(27U);
    msg.setDestination(64990U);
    msg.setDestinationEntity(122U);
    msg.value = 0.278597760559;

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
    msg.setTimeStamp(0.565469228484);
    msg.setSource(29938U);
    msg.setSourceEntity(132U);
    msg.setDestination(23905U);
    msg.setDestinationEntity(12U);
    msg.value = 0.475903023234;

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
    msg.setTimeStamp(0.532876085726);
    msg.setSource(54277U);
    msg.setSourceEntity(173U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(48U);
    msg.value = 0.284678754907;

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
    msg.setTimeStamp(0.557785237716);
    msg.setSource(44436U);
    msg.setSourceEntity(149U);
    msg.setDestination(39123U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0199243793601;

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
    msg.setTimeStamp(0.355662121078);
    msg.setSource(27054U);
    msg.setSourceEntity(66U);
    msg.setDestination(40064U);
    msg.setDestinationEntity(106U);
    msg.value = 0.763040804725;

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
    msg.setTimeStamp(0.378836811322);
    msg.setSource(19897U);
    msg.setSourceEntity(135U);
    msg.setDestination(60171U);
    msg.setDestinationEntity(135U);
    msg.value = 0.772738645962;

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
    msg.setTimeStamp(0.847787566269);
    msg.setSource(49922U);
    msg.setSourceEntity(112U);
    msg.setDestination(1754U);
    msg.setDestinationEntity(217U);
    msg.value = 0.913194790854;

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
    msg.setTimeStamp(0.615285444204);
    msg.setSource(55596U);
    msg.setSourceEntity(12U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0254588845311;

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
    msg.setTimeStamp(0.731101807199);
    msg.setSource(30121U);
    msg.setSourceEntity(73U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(65U);
    msg.value = 0.180932207742;

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
    msg.setTimeStamp(0.578685931936);
    msg.setSource(32441U);
    msg.setSourceEntity(103U);
    msg.setDestination(52668U);
    msg.setDestinationEntity(71U);
    msg.value = 0.860342746502;

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
    msg.setTimeStamp(0.781319611739);
    msg.setSource(49768U);
    msg.setSourceEntity(133U);
    msg.setDestination(42002U);
    msg.setDestinationEntity(95U);
    msg.value = 0.443766798764;

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
    msg.setTimeStamp(0.955144803025);
    msg.setSource(11585U);
    msg.setSourceEntity(177U);
    msg.setDestination(35592U);
    msg.setDestinationEntity(188U);
    msg.value = 0.327669168042;

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
    msg.setTimeStamp(0.46715312553);
    msg.setSource(46249U);
    msg.setSourceEntity(188U);
    msg.setDestination(7771U);
    msg.setDestinationEntity(26U);
    msg.value = 0.0279482991552;

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
    msg.setTimeStamp(0.875902112942);
    msg.setSource(6088U);
    msg.setSourceEntity(234U);
    msg.setDestination(52369U);
    msg.setDestinationEntity(136U);
    msg.value = 0.892863529943;

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
    msg.setTimeStamp(0.714409745548);
    msg.setSource(54326U);
    msg.setSourceEntity(74U);
    msg.setDestination(51924U);
    msg.setDestinationEntity(235U);
    msg.value = 0.28433368236;

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
    msg.setTimeStamp(0.898216103763);
    msg.setSource(24861U);
    msg.setSourceEntity(55U);
    msg.setDestination(12133U);
    msg.setDestinationEntity(217U);
    msg.value = 0.198159637296;

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
    msg.setTimeStamp(0.360843050551);
    msg.setSource(53949U);
    msg.setSourceEntity(37U);
    msg.setDestination(48570U);
    msg.setDestinationEntity(22U);
    msg.value = 0.91676783673;

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
    msg.setTimeStamp(0.0364445765879);
    msg.setSource(37094U);
    msg.setSourceEntity(224U);
    msg.setDestination(54786U);
    msg.setDestinationEntity(253U);
    msg.value = 0.310609156569;

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
    msg.setTimeStamp(0.229080660854);
    msg.setSource(14029U);
    msg.setSourceEntity(165U);
    msg.setDestination(32091U);
    msg.setDestinationEntity(213U);
    msg.value = 0.715095765332;

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
    msg.setTimeStamp(0.715774675812);
    msg.setSource(21505U);
    msg.setSourceEntity(138U);
    msg.setDestination(61991U);
    msg.setDestinationEntity(196U);
    msg.value = 0.51162097732;

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
    msg.setTimeStamp(0.427854040241);
    msg.setSource(48728U);
    msg.setSourceEntity(56U);
    msg.setDestination(22492U);
    msg.setDestinationEntity(184U);
    msg.value = 0.283992688227;

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
    msg.setTimeStamp(0.504188115576);
    msg.setSource(59561U);
    msg.setSourceEntity(142U);
    msg.setDestination(38619U);
    msg.setDestinationEntity(16U);
    msg.value = 0.568479293666;

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
    msg.setTimeStamp(0.175283413873);
    msg.setSource(13747U);
    msg.setSourceEntity(124U);
    msg.setDestination(22994U);
    msg.setDestinationEntity(127U);
    msg.validity = 34208U;
    msg.type = 207U;
    msg.tow = 3395710308U;
    msg.base_lat = 0.954488718607;
    msg.base_lon = 0.175674296062;
    msg.base_height = 0.374982287071;
    msg.n = 0.626839630367;
    msg.e = 0.944286490823;
    msg.d = 0.734729004993;
    msg.v_n = 0.302298171019;
    msg.v_e = 0.501376346987;
    msg.v_d = 0.965646397118;
    msg.satellites = 230U;
    msg.iar_hyp = 44956U;
    msg.iar_ratio = 0.581659965531;

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
    msg.setTimeStamp(0.449599912114);
    msg.setSource(61269U);
    msg.setSourceEntity(18U);
    msg.setDestination(46929U);
    msg.setDestinationEntity(110U);
    msg.validity = 29599U;
    msg.type = 90U;
    msg.tow = 813779221U;
    msg.base_lat = 0.773269985819;
    msg.base_lon = 0.777014143257;
    msg.base_height = 0.109441871544;
    msg.n = 0.378998285144;
    msg.e = 0.693543280286;
    msg.d = 0.731724921346;
    msg.v_n = 0.778816283435;
    msg.v_e = 0.374371768288;
    msg.v_d = 0.875995469293;
    msg.satellites = 193U;
    msg.iar_hyp = 3858U;
    msg.iar_ratio = 0.694850697576;

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
    msg.setTimeStamp(0.851051913436);
    msg.setSource(62254U);
    msg.setSourceEntity(74U);
    msg.setDestination(37116U);
    msg.setDestinationEntity(250U);
    msg.validity = 9577U;
    msg.type = 60U;
    msg.tow = 3543450637U;
    msg.base_lat = 0.103923893291;
    msg.base_lon = 0.829750419842;
    msg.base_height = 0.506167674251;
    msg.n = 0.22265312478;
    msg.e = 0.191500970854;
    msg.d = 0.488719866039;
    msg.v_n = 0.703073397604;
    msg.v_e = 0.136778971366;
    msg.v_d = 0.376012041957;
    msg.satellites = 101U;
    msg.iar_hyp = 60959U;
    msg.iar_ratio = 0.97308785019;

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
    msg.setTimeStamp(0.0414775734644);
    msg.setSource(43594U);
    msg.setSourceEntity(213U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(80U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.860771403339;
    tmp_msg_0.lon = 0.176821928385;
    tmp_msg_0.height = 0.641680374039;
    tmp_msg_0.x = 0.597506338904;
    tmp_msg_0.y = 0.919477259712;
    tmp_msg_0.z = 0.909797299114;
    tmp_msg_0.phi = 0.341456543401;
    tmp_msg_0.theta = 0.979386425643;
    tmp_msg_0.psi = 0.709940177068;
    tmp_msg_0.u = 0.0630657666001;
    tmp_msg_0.v = 0.120550350732;
    tmp_msg_0.w = 0.436290683639;
    tmp_msg_0.vx = 0.657730962876;
    tmp_msg_0.vy = 0.104457099789;
    tmp_msg_0.vz = 0.780760770419;
    tmp_msg_0.p = 0.965817348485;
    tmp_msg_0.q = 0.459371398491;
    tmp_msg_0.r = 0.298665536811;
    tmp_msg_0.depth = 0.667182210799;
    tmp_msg_0.alt = 0.312164600034;
    msg.state.set(tmp_msg_0);
    msg.type = 155U;

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
    msg.setTimeStamp(0.422300925129);
    msg.setSource(58272U);
    msg.setSourceEntity(79U);
    msg.setDestination(19725U);
    msg.setDestinationEntity(190U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.368816757541;
    tmp_msg_0.lon = 0.675091216209;
    tmp_msg_0.height = 0.861695246701;
    tmp_msg_0.x = 0.587243103825;
    tmp_msg_0.y = 0.054002192028;
    tmp_msg_0.z = 0.111546669666;
    tmp_msg_0.phi = 0.0808151903054;
    tmp_msg_0.theta = 0.906403240814;
    tmp_msg_0.psi = 0.848116257832;
    tmp_msg_0.u = 0.274507307871;
    tmp_msg_0.v = 0.75045464075;
    tmp_msg_0.w = 0.283120174471;
    tmp_msg_0.vx = 0.131764219207;
    tmp_msg_0.vy = 0.345343987;
    tmp_msg_0.vz = 0.874098462794;
    tmp_msg_0.p = 0.518391398241;
    tmp_msg_0.q = 0.651212847568;
    tmp_msg_0.r = 0.957551603954;
    tmp_msg_0.depth = 0.877675014602;
    tmp_msg_0.alt = 0.763538918008;
    msg.state.set(tmp_msg_0);
    msg.type = 16U;

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
    msg.setTimeStamp(0.836628924551);
    msg.setSource(53132U);
    msg.setSourceEntity(95U);
    msg.setDestination(64237U);
    msg.setDestinationEntity(177U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.871238883939;
    tmp_msg_0.lon = 0.631361687214;
    tmp_msg_0.height = 0.599833605603;
    tmp_msg_0.x = 0.0687630496248;
    tmp_msg_0.y = 0.658533455882;
    tmp_msg_0.z = 0.386874591474;
    tmp_msg_0.phi = 0.452544426668;
    tmp_msg_0.theta = 0.906360472546;
    tmp_msg_0.psi = 0.739961162513;
    tmp_msg_0.u = 0.95100202482;
    tmp_msg_0.v = 0.132172832463;
    tmp_msg_0.w = 0.0640354038958;
    tmp_msg_0.vx = 0.435805631608;
    tmp_msg_0.vy = 0.97783531243;
    tmp_msg_0.vz = 0.617976694926;
    tmp_msg_0.p = 0.124984319818;
    tmp_msg_0.q = 0.684396651627;
    tmp_msg_0.r = 0.639735468868;
    tmp_msg_0.depth = 0.481557620599;
    tmp_msg_0.alt = 0.651910286061;
    msg.state.set(tmp_msg_0);
    msg.type = 55U;

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
    msg.setTimeStamp(0.144556775653);
    msg.setSource(43810U);
    msg.setSourceEntity(52U);
    msg.setDestination(41081U);
    msg.setDestinationEntity(10U);
    msg.value = 0.391627871817;

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
    msg.setTimeStamp(0.251254118096);
    msg.setSource(30282U);
    msg.setSourceEntity(32U);
    msg.setDestination(52376U);
    msg.setDestinationEntity(100U);
    msg.value = 0.0233518610765;

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
    msg.setTimeStamp(0.55569337277);
    msg.setSource(3584U);
    msg.setSourceEntity(37U);
    msg.setDestination(31266U);
    msg.setDestinationEntity(180U);
    msg.value = 0.163629938406;

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
    msg.setTimeStamp(0.69391802829);
    msg.setSource(45435U);
    msg.setSourceEntity(160U);
    msg.setDestination(49388U);
    msg.setDestinationEntity(59U);
    msg.value = 0.612308889431;

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
    msg.setTimeStamp(0.624238961925);
    msg.setSource(64610U);
    msg.setSourceEntity(25U);
    msg.setDestination(43736U);
    msg.setDestinationEntity(184U);
    msg.value = 0.332779619813;

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
    msg.setTimeStamp(0.462641772654);
    msg.setSource(12837U);
    msg.setSourceEntity(162U);
    msg.setDestination(62400U);
    msg.setDestinationEntity(131U);
    msg.value = 0.568862668949;

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
    msg.setTimeStamp(0.893281633241);
    msg.setSource(18805U);
    msg.setSourceEntity(155U);
    msg.setDestination(26383U);
    msg.setDestinationEntity(213U);
    msg.value = 0.606084557095;

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
    msg.setTimeStamp(0.684281280468);
    msg.setSource(12653U);
    msg.setSourceEntity(214U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(247U);
    msg.value = 0.739605959067;

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
    msg.setTimeStamp(0.721498862744);
    msg.setSource(2854U);
    msg.setSourceEntity(109U);
    msg.setDestination(47008U);
    msg.setDestinationEntity(215U);
    msg.value = 0.650070773212;

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
    msg.setTimeStamp(0.512124549071);
    msg.setSource(31907U);
    msg.setSourceEntity(172U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(115U);
    msg.value = 0.365466127468;

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
    msg.setTimeStamp(0.50527386613);
    msg.setSource(20691U);
    msg.setSourceEntity(18U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(30U);
    msg.value = 0.942554957722;

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
    msg.setTimeStamp(0.609033994675);
    msg.setSource(46319U);
    msg.setSourceEntity(187U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(248U);
    msg.value = 0.303306445656;

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
    msg.setTimeStamp(0.325668116452);
    msg.setSource(2285U);
    msg.setSourceEntity(220U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(149U);
    msg.value = 0.517419233888;

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
    msg.setTimeStamp(0.0475123745791);
    msg.setSource(38116U);
    msg.setSourceEntity(91U);
    msg.setDestination(12983U);
    msg.setDestinationEntity(126U);
    msg.value = 0.965194102513;

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
    msg.setTimeStamp(0.987429211167);
    msg.setSource(22744U);
    msg.setSourceEntity(36U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(143U);
    msg.value = 0.982559865715;

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
    msg.setTimeStamp(0.0891935348615);
    msg.setSource(44302U);
    msg.setSourceEntity(187U);
    msg.setDestination(51839U);
    msg.setDestinationEntity(249U);
    msg.id = 183U;
    msg.zoom = 128U;
    msg.action = 141U;

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
    msg.setTimeStamp(0.0403140532583);
    msg.setSource(4019U);
    msg.setSourceEntity(202U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(200U);
    msg.id = 147U;
    msg.zoom = 13U;
    msg.action = 95U;

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
    msg.setTimeStamp(0.632473908706);
    msg.setSource(47989U);
    msg.setSourceEntity(81U);
    msg.setDestination(35010U);
    msg.setDestinationEntity(251U);
    msg.id = 114U;
    msg.zoom = 17U;
    msg.action = 128U;

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
    msg.setTimeStamp(0.481680778386);
    msg.setSource(36777U);
    msg.setSourceEntity(215U);
    msg.setDestination(40408U);
    msg.setDestinationEntity(12U);
    msg.id = 170U;
    msg.value = 0.79028529791;

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
    msg.setTimeStamp(0.594282045958);
    msg.setSource(19024U);
    msg.setSourceEntity(163U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(240U);
    msg.id = 179U;
    msg.value = 0.671287217246;

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
    msg.setTimeStamp(0.795804858812);
    msg.setSource(18806U);
    msg.setSourceEntity(68U);
    msg.setDestination(18952U);
    msg.setDestinationEntity(181U);
    msg.id = 155U;
    msg.value = 0.460196390135;

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
    msg.setTimeStamp(0.0318317747005);
    msg.setSource(4053U);
    msg.setSourceEntity(106U);
    msg.setDestination(35776U);
    msg.setDestinationEntity(125U);
    msg.id = 49U;
    msg.value = 0.182077668033;

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
    msg.setTimeStamp(0.726270510245);
    msg.setSource(64725U);
    msg.setSourceEntity(168U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(54U);
    msg.id = 226U;
    msg.value = 0.361287318736;

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
    msg.setTimeStamp(0.452285593941);
    msg.setSource(2603U);
    msg.setSourceEntity(204U);
    msg.setDestination(3338U);
    msg.setDestinationEntity(189U);
    msg.id = 70U;
    msg.value = 0.143880418109;

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
    msg.setTimeStamp(0.09230272988);
    msg.setSource(39163U);
    msg.setSourceEntity(245U);
    msg.setDestination(56396U);
    msg.setDestinationEntity(115U);
    msg.id = 1U;
    msg.angle = 0.54663697487;

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
    msg.setTimeStamp(0.350933536309);
    msg.setSource(4817U);
    msg.setSourceEntity(26U);
    msg.setDestination(47344U);
    msg.setDestinationEntity(117U);
    msg.id = 105U;
    msg.angle = 0.888281962146;

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
    msg.setTimeStamp(0.836957956517);
    msg.setSource(17349U);
    msg.setSourceEntity(175U);
    msg.setDestination(16429U);
    msg.setDestinationEntity(39U);
    msg.id = 26U;
    msg.angle = 0.337751933509;

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
    msg.setTimeStamp(0.984278315528);
    msg.setSource(18303U);
    msg.setSourceEntity(45U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(254U);
    msg.op = 99U;
    msg.actions.assign("XUDLCUCWJSITYJEIAVLUIPEZYKGJIEHYWHXZSSNUOVFPSDTGVZIKMNJFQZLNORYMCZHTXBWTMCVWBLNJWFSVJEDZVHKLDGRKAZPPAVQQRTKANGXNIMLCQRKFYRKXQFEYGYYWO");

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
    msg.setTimeStamp(0.297438860765);
    msg.setSource(9434U);
    msg.setSourceEntity(104U);
    msg.setDestination(7015U);
    msg.setDestinationEntity(45U);
    msg.op = 48U;
    msg.actions.assign("TFNWIYSNAVYVZLIXWKTPWNGPQFONHORQQUWFEXIOZCIIG");

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
    msg.setTimeStamp(0.00296238583329);
    msg.setSource(37807U);
    msg.setSourceEntity(23U);
    msg.setDestination(52010U);
    msg.setDestinationEntity(231U);
    msg.op = 55U;
    msg.actions.assign("FUUGXCNSORZSJWZYKZDKVCKMWPGRXMBHMNTJJEIGHTNPPQLCKQYEYFJDEZAFSENLSDBZXOWQCTADWJEKMFTHABTPLRBKRQTIOMDLNTYOTHEBWGDCEVDFYGBVVFMXKARJUNIKPOMSLHCMCFXVRRNFPAXVLHFODQUEAQQOYPYSOHGIWECURLOQIAYJBAQRBPVHIBGHRKNVNTCSMDPZZJWIDNLWUTICLXGUGUPZHAFSOJIKJVBQYEWASZXLXSI");

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
    msg.setTimeStamp(0.524580462684);
    msg.setSource(53043U);
    msg.setSourceEntity(10U);
    msg.setDestination(43308U);
    msg.setDestinationEntity(120U);
    msg.actions.assign("HQYUAAMTEJKIJPIBNNDRYNCPWDAPUGEYGIAYBPZMCFRGTPKUDNPMSCNCAXQQHSYYCPVVYMCTH");

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
    msg.setTimeStamp(0.159788348428);
    msg.setSource(23580U);
    msg.setSourceEntity(252U);
    msg.setDestination(62210U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("YJAPXWUVLJGEELLNKFSKTQHIKASSACHHVEFUIXTYZUCIMTIUKKNNLAXCFBLBJSFGKEDOGNYVRKACJZVMRLTAKCQZWOSGCMTHPBVDWQZUBARVIHKOBTPVYXSJVNFFDMHPRJSRTXLODMZYLRYUEZGYQECANHRIIDNOQJJOZGTJMDQQUPASRXHWWFEOWVGBIAWYBZ");

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
    msg.setTimeStamp(0.736255054422);
    msg.setSource(32994U);
    msg.setSourceEntity(230U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(5U);
    msg.actions.assign("AWAPNZYDCZOOSYSWMCBHTXXTFVCEPZVQTVNHFZYRHUEMDDGXIPGOUTX");

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
    msg.setTimeStamp(0.0262759404744);
    msg.setSource(18132U);
    msg.setSourceEntity(100U);
    msg.setDestination(48747U);
    msg.setDestinationEntity(3U);
    msg.button = 248U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.83403112853);
    msg.setSource(9568U);
    msg.setSourceEntity(87U);
    msg.setDestination(20410U);
    msg.setDestinationEntity(60U);
    msg.button = 18U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.52242567438);
    msg.setSource(32713U);
    msg.setSourceEntity(183U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(128U);
    msg.button = 194U;
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
    msg.setTimeStamp(0.930273320131);
    msg.setSource(58760U);
    msg.setSourceEntity(121U);
    msg.setDestination(58381U);
    msg.setDestinationEntity(174U);
    msg.op = 9U;
    msg.text.assign("KDRWLSQRTMEWPRKEQSZRQXWNOTTMTUBPEPBGSAREYOGZLSVNKJKDUGRCGZHVFOJJJNDCMTJSYXBGCJMPSVIUYKYPONR");

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
    msg.setTimeStamp(0.337155989701);
    msg.setSource(37572U);
    msg.setSourceEntity(106U);
    msg.setDestination(54888U);
    msg.setDestinationEntity(9U);
    msg.op = 179U;
    msg.text.assign("RRXXFWXEPTK");

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
    msg.setTimeStamp(0.9908699392);
    msg.setSource(17153U);
    msg.setSourceEntity(187U);
    msg.setDestination(43961U);
    msg.setDestinationEntity(93U);
    msg.op = 61U;
    msg.text.assign("YCKPGKOXINMGPOJSDIAOYNMIQSTMLZYESGBSKCBFIXGIBLOFEWTQXCLNWLZDKJVTRFJDOZYZWCDLXABHENHVWBPLIKMOSCVQLYJFEQLPPZUUDGBHQRWJAAAJGGVUWSTHVFDPVQTUIAHIUFEQPNESNVUOQGDDCCYZKBERMFRYSCAOXPTHHBHLFBDZYWXWGXRCOAFUUZSMXNZRMBLKDRSKIXAOMYZXETVAKKVNUEHIETMJQJNY");

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
    msg.setTimeStamp(0.420342869155);
    msg.setSource(2163U);
    msg.setSourceEntity(6U);
    msg.setDestination(34645U);
    msg.setDestinationEntity(220U);
    msg.op = 26U;
    msg.time_remain = 0.168061160756;
    msg.sched_time = 0.12721323586;

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
    msg.setTimeStamp(0.602232227799);
    msg.setSource(12099U);
    msg.setSourceEntity(143U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(24U);
    msg.op = 201U;
    msg.time_remain = 0.10140469358;
    msg.sched_time = 0.633444290268;

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
    msg.setTimeStamp(0.140555653113);
    msg.setSource(32749U);
    msg.setSourceEntity(139U);
    msg.setDestination(19809U);
    msg.setDestinationEntity(143U);
    msg.op = 115U;
    msg.time_remain = 0.573256077054;
    msg.sched_time = 0.575694160529;

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
    msg.setTimeStamp(0.385616043818);
    msg.setSource(24201U);
    msg.setSourceEntity(118U);
    msg.setDestination(22951U);
    msg.setDestinationEntity(36U);
    msg.name.assign("MSMSIIJEEJBXTQZIGBWJCGBJCRZMREEAPRRERNNDFQSABAYDDCPOUEESTMTWRRMDQGHWBDBUTZOWDLLNVZXNGXUXAUCIQSKFMUJZQLTARYXKPUVUNGPTEKHAITKCVOOKXUDQOVYYPVZSXBBHAFFQVGVHMKULVOPANFLTNPCGY");
    msg.op = 248U;
    msg.sched_time = 0.444004209585;

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
    msg.setTimeStamp(0.943148228683);
    msg.setSource(62597U);
    msg.setSourceEntity(37U);
    msg.setDestination(13834U);
    msg.setDestinationEntity(115U);
    msg.name.assign("UPUAQTKKSIHBNDRSHCZRETJCYOTPZFYGILQCUVUGKQCVNTFZCMUQOEEWLGKDYBXKQNLYWJMSASLSFTVWCTKYRPFFVFBEGMJOMDKFRVMAWMJODHBXDVXHAWGJCDXDKFBSLCIHUZPNYEXXJXGTXCMZSJHERNSTYOLPIDRPBTVGBRWAFZMHSRIOAUIBPJBNVAXJYJBIWRLHPMZEEZPUGCOOZIQQSLAGDIE");
    msg.op = 132U;
    msg.sched_time = 0.844773775318;

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
    msg.setTimeStamp(0.164108070612);
    msg.setSource(32686U);
    msg.setSourceEntity(251U);
    msg.setDestination(14058U);
    msg.setDestinationEntity(166U);
    msg.name.assign("IGGTAWDMZHHVNIYJHFZNBEGMXUOTHTVSXYBHBWLD");
    msg.op = 225U;
    msg.sched_time = 0.36809989886;

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
    msg.setTimeStamp(0.883231678758);
    msg.setSource(35492U);
    msg.setSourceEntity(156U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.793462376373);
    msg.setSource(15001U);
    msg.setSourceEntity(254U);
    msg.setDestination(15722U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.84046606919);
    msg.setSource(45282U);
    msg.setSourceEntity(114U);
    msg.setDestination(34819U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.648071297855);
    msg.setSource(62967U);
    msg.setSourceEntity(227U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(41U);
    msg.name.assign("DNXTJEFPJTSWBNKAGZDFTHZWZPMFBEKXJBHYHFFOUFMVVURUKMIVDQFJGPDSLGTXDPRXI");
    msg.state = 232U;

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
    msg.setTimeStamp(0.447932545354);
    msg.setSource(64702U);
    msg.setSourceEntity(86U);
    msg.setDestination(38050U);
    msg.setDestinationEntity(9U);
    msg.name.assign("HWJJFZFEOCAPLDVOAQNDVUGQQBZNCYXGAIBPHNYFZHILFAASVSBRPVDYMCHWKTIHGPMSRQUFYOSKEBOTPFWRKEKGRZPNPDXLVKAYWRMMBECUPXEKXUGCNMDHZZBNNDJGSOYXLLIVKIJECUDLATQXYZJPGITPNWCTGOORNCMJTGXBQEWNETIVKFCMQZURUUDWAKVOUASYGDOFIWCQJLXSEXBJYMHSLHZTRWBKQIRUAZSXMMFOFLYTQHTDHBS");
    msg.state = 246U;

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
    msg.setTimeStamp(0.89822766171);
    msg.setSource(16745U);
    msg.setSourceEntity(80U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(124U);
    msg.name.assign("TDLUIIEDSBPTZPXANVOIJWDHRNMMWQOCLPHHDKWOGYSMSZOEJANVPOMFZBGJBBGEZMVYZFGVXQTG");
    msg.state = 66U;

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
    msg.setTimeStamp(0.157187662868);
    msg.setSource(5828U);
    msg.setSourceEntity(204U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(37U);
    msg.name.assign("QWTQBQRIALKOEORTIKHBZNUDHOGUASSAJFMZVSQBXDDN");
    msg.value = 49U;

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
    msg.setTimeStamp(0.870926228091);
    msg.setSource(45203U);
    msg.setSourceEntity(25U);
    msg.setDestination(29476U);
    msg.setDestinationEntity(204U);
    msg.name.assign("UCYWXAJLJCOSPHABDWZDCLHIJFLKLRKYXNSOAVXPEQNAKIIYQLECXGBFMFMPFNVKPXZYJHTEDAVCYBXMYRCDRQTINEVOISWR");
    msg.value = 14U;

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
    msg.setTimeStamp(0.649029297185);
    msg.setSource(45050U);
    msg.setSourceEntity(207U);
    msg.setDestination(52454U);
    msg.setDestinationEntity(182U);
    msg.name.assign("PZAWEEYIJNCZXRVNQDVXBRGJKSIYAOZEILUVHYLZPOYFILCGKWZTYLNNVQXARSYRUPUEIJQDXRGYGRQHOMUHVHOFHFKWVAATPZALPNSKOJMXVIJXCHKQBAFEFOEMIDHUWWLGBNGPOWSLDYBEWDHWSTLCRPCJTOTPTJTVYK");
    msg.value = 230U;

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
    msg.setTimeStamp(0.227474216803);
    msg.setSource(25794U);
    msg.setSourceEntity(10U);
    msg.setDestination(3332U);
    msg.setDestinationEntity(129U);
    msg.name.assign("OBDLHHQDITNFVCNDICBHLGWRYMAPZNEARQWVCMJFHJYLQONOEFFNRWRTEAMSRCYDULRBBQTOYWNVNSXZKQJRHSLVWOIMPMICQXAGDJVMUPUMRVEESZUOIANODEZEDQSDKVDPGSGIIIZOCHWFYJBJAGLXIXNOUKLJUY");

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
    msg.setTimeStamp(0.0227853046389);
    msg.setSource(23714U);
    msg.setSourceEntity(164U);
    msg.setDestination(37332U);
    msg.setDestinationEntity(221U);
    msg.name.assign("OOMZNZOTDOGPSDMOMQVRGWNLXUSUASRNWVBCBBKF");

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
    msg.setTimeStamp(0.271682357346);
    msg.setSource(14385U);
    msg.setSourceEntity(179U);
    msg.setDestination(63814U);
    msg.setDestinationEntity(195U);
    msg.name.assign("BOOYXYMWCVCJAPXJRQXRBENWYD");

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
    msg.setTimeStamp(0.0264558164686);
    msg.setSource(26898U);
    msg.setSourceEntity(165U);
    msg.setDestination(38781U);
    msg.setDestinationEntity(156U);
    msg.name.assign("GNVSMKUSWPJBHNIRFXKCBVTQOXUABHDVDHECGSDTRFJPGYWBAXIVOEFTXQTKPYUBJRCUGCASOLDL");
    msg.value = 47U;

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
    msg.setTimeStamp(0.303653976146);
    msg.setSource(18560U);
    msg.setSourceEntity(187U);
    msg.setDestination(27754U);
    msg.setDestinationEntity(248U);
    msg.name.assign("TOAGWDMONVDZQMZWOWLRLLXWNYOCBKUGRVZYFNYASNZFJZPUKOHYZVJYSMUTJLNXHWMKCIZQYJBRECNQZRFIJUBMCDPMVQUOBRPKOVQTEPFVYEBFIEXRGELHETSWIPNBPDZSDOECPPISNDURZTKJGXIHIVHVSGFGIKABRJXOJHYTSQXKAKCAULQLABTKAFDFJCWIRSFDLHDUYQEOKMQCJSBWGMNVAGERAICDHMTSLTUM");
    msg.value = 214U;

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
    msg.setTimeStamp(0.875455289113);
    msg.setSource(24528U);
    msg.setSourceEntity(2U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(17U);
    msg.name.assign("MUICMTGMKFYBOECYBU");
    msg.value = 228U;

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
    msg.setTimeStamp(0.808142124295);
    msg.setSource(20690U);
    msg.setSourceEntity(0U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(84U);
    msg.id = 46U;
    msg.period = 740693399U;
    msg.duty_cycle = 81720355U;

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
    msg.setTimeStamp(0.271714265296);
    msg.setSource(50649U);
    msg.setSourceEntity(137U);
    msg.setDestination(51889U);
    msg.setDestinationEntity(180U);
    msg.id = 189U;
    msg.period = 1667882591U;
    msg.duty_cycle = 3663749257U;

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
    msg.setTimeStamp(0.362076132674);
    msg.setSource(16390U);
    msg.setSourceEntity(94U);
    msg.setDestination(55771U);
    msg.setDestinationEntity(131U);
    msg.id = 135U;
    msg.period = 1167896775U;
    msg.duty_cycle = 180006184U;

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
    msg.setTimeStamp(0.669500910938);
    msg.setSource(60136U);
    msg.setSourceEntity(77U);
    msg.setDestination(37478U);
    msg.setDestinationEntity(81U);
    msg.id = 81U;
    msg.period = 3123651061U;
    msg.duty_cycle = 989545713U;

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
    msg.setTimeStamp(0.202617436892);
    msg.setSource(57410U);
    msg.setSourceEntity(141U);
    msg.setDestination(47925U);
    msg.setDestinationEntity(177U);
    msg.id = 141U;
    msg.period = 3345385724U;
    msg.duty_cycle = 894181426U;

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
    msg.setTimeStamp(0.72917564143);
    msg.setSource(8974U);
    msg.setSourceEntity(190U);
    msg.setDestination(60132U);
    msg.setDestinationEntity(194U);
    msg.id = 26U;
    msg.period = 1650530744U;
    msg.duty_cycle = 3306719039U;

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
    msg.setTimeStamp(0.894646657295);
    msg.setSource(43093U);
    msg.setSourceEntity(246U);
    msg.setDestination(42448U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.66329444058;
    msg.lon = 0.317376957116;
    msg.height = 0.0781356506129;
    msg.x = 0.594478995823;
    msg.y = 0.645639400906;
    msg.z = 0.826198508489;
    msg.phi = 0.895528467673;
    msg.theta = 0.25912766951;
    msg.psi = 0.989560544403;
    msg.u = 0.0241075114631;
    msg.v = 0.75327048818;
    msg.w = 0.373952856504;
    msg.vx = 0.234325717279;
    msg.vy = 0.349841797558;
    msg.vz = 0.113050643079;
    msg.p = 0.24048249791;
    msg.q = 0.295584976564;
    msg.r = 0.0640597321246;
    msg.depth = 0.891651220968;
    msg.alt = 0.654190195528;

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
    msg.setTimeStamp(0.792985887802);
    msg.setSource(54741U);
    msg.setSourceEntity(12U);
    msg.setDestination(10967U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.370434624491;
    msg.lon = 0.0900099252152;
    msg.height = 0.416183055817;
    msg.x = 0.02846986754;
    msg.y = 0.751389828951;
    msg.z = 0.295737163542;
    msg.phi = 0.326347190682;
    msg.theta = 0.93548107718;
    msg.psi = 0.537047984379;
    msg.u = 0.280031958677;
    msg.v = 0.663872535311;
    msg.w = 0.958917278011;
    msg.vx = 0.931467456794;
    msg.vy = 0.46777801304;
    msg.vz = 0.983059224731;
    msg.p = 0.796800168097;
    msg.q = 0.090866735541;
    msg.r = 0.731317621148;
    msg.depth = 0.266149423609;
    msg.alt = 0.162506597174;

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
    msg.setTimeStamp(0.189628473812);
    msg.setSource(895U);
    msg.setSourceEntity(86U);
    msg.setDestination(60182U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.645015073555;
    msg.lon = 0.0293515803879;
    msg.height = 0.647851778665;
    msg.x = 0.885817978916;
    msg.y = 0.789014859421;
    msg.z = 0.399852657994;
    msg.phi = 0.508556932038;
    msg.theta = 0.602172971549;
    msg.psi = 0.5173700657;
    msg.u = 0.343674829702;
    msg.v = 0.614700822533;
    msg.w = 0.157386869311;
    msg.vx = 0.795159669961;
    msg.vy = 0.622453735225;
    msg.vz = 0.372500161446;
    msg.p = 0.0873975918931;
    msg.q = 0.370412341031;
    msg.r = 0.215979203675;
    msg.depth = 0.329907795332;
    msg.alt = 0.817299344575;

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
    msg.setTimeStamp(0.288260970318);
    msg.setSource(33387U);
    msg.setSourceEntity(12U);
    msg.setDestination(61822U);
    msg.setDestinationEntity(201U);
    msg.x = 0.173157970988;
    msg.y = 0.59152893574;
    msg.z = 0.94991790939;

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
    msg.setTimeStamp(0.542403120296);
    msg.setSource(19812U);
    msg.setSourceEntity(83U);
    msg.setDestination(14637U);
    msg.setDestinationEntity(192U);
    msg.x = 0.185200924059;
    msg.y = 0.513418520632;
    msg.z = 0.269437759802;

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
    msg.setTimeStamp(0.681520280305);
    msg.setSource(25337U);
    msg.setSourceEntity(30U);
    msg.setDestination(1854U);
    msg.setDestinationEntity(236U);
    msg.x = 0.807046510646;
    msg.y = 0.12063185829;
    msg.z = 0.318310875349;

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
    msg.setTimeStamp(0.127324704495);
    msg.setSource(18290U);
    msg.setSourceEntity(80U);
    msg.setDestination(10780U);
    msg.setDestinationEntity(203U);
    msg.value = 0.297384636488;

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
    msg.setTimeStamp(0.947146103737);
    msg.setSource(55951U);
    msg.setSourceEntity(55U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(23U);
    msg.value = 0.131383053434;

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
    msg.setTimeStamp(0.730997885973);
    msg.setSource(11368U);
    msg.setSourceEntity(174U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(105U);
    msg.value = 0.31745864823;

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
    msg.setTimeStamp(0.440534957738);
    msg.setSource(868U);
    msg.setSourceEntity(26U);
    msg.setDestination(32773U);
    msg.setDestinationEntity(208U);
    msg.value = 0.988625712561;

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
    msg.setTimeStamp(0.141574040866);
    msg.setSource(43380U);
    msg.setSourceEntity(38U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(201U);
    msg.value = 0.443129523344;

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
    msg.setTimeStamp(0.243240800638);
    msg.setSource(20094U);
    msg.setSourceEntity(225U);
    msg.setDestination(37326U);
    msg.setDestinationEntity(149U);
    msg.value = 0.426772865151;

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
    msg.setTimeStamp(0.0421315020641);
    msg.setSource(47186U);
    msg.setSourceEntity(201U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(173U);
    msg.x = 0.250837756572;
    msg.y = 0.796441955798;
    msg.z = 0.242061337113;
    msg.phi = 0.652130966428;
    msg.theta = 0.12688255778;
    msg.psi = 0.241097373554;
    msg.p = 0.954873681319;
    msg.q = 0.358722865626;
    msg.r = 0.61429965309;
    msg.u = 0.212889002021;
    msg.v = 0.81758501495;
    msg.w = 0.258105192703;
    msg.bias_psi = 0.0882738697709;
    msg.bias_r = 0.703252683467;

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
    msg.setTimeStamp(0.157793707858);
    msg.setSource(21058U);
    msg.setSourceEntity(7U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(98U);
    msg.x = 0.867247218649;
    msg.y = 0.849515712985;
    msg.z = 0.471601532994;
    msg.phi = 0.413394916817;
    msg.theta = 0.383871932279;
    msg.psi = 0.684139158341;
    msg.p = 0.738825934852;
    msg.q = 0.941949947304;
    msg.r = 0.646948241411;
    msg.u = 0.595713164469;
    msg.v = 0.575465715669;
    msg.w = 0.73204224277;
    msg.bias_psi = 0.245783511094;
    msg.bias_r = 0.94422468341;

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
    msg.setTimeStamp(0.0844192235353);
    msg.setSource(14104U);
    msg.setSourceEntity(201U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(231U);
    msg.x = 0.0680658817448;
    msg.y = 0.43547923155;
    msg.z = 0.462871909625;
    msg.phi = 0.648933469775;
    msg.theta = 0.150870667868;
    msg.psi = 0.469314737815;
    msg.p = 0.2800835336;
    msg.q = 0.835994404929;
    msg.r = 0.166689445779;
    msg.u = 0.789085462517;
    msg.v = 0.0976855753822;
    msg.w = 0.676104549022;
    msg.bias_psi = 0.397463029039;
    msg.bias_r = 0.92420258278;

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
    msg.setTimeStamp(0.299301922685);
    msg.setSource(38206U);
    msg.setSourceEntity(67U);
    msg.setDestination(57212U);
    msg.setDestinationEntity(170U);
    msg.bias_psi = 0.0789611626758;
    msg.bias_r = 0.679442820868;
    msg.cog = 0.27944862069;
    msg.cyaw = 0.463142958736;
    msg.lbl_rej_level = 0.37458824216;
    msg.gps_rej_level = 0.68083564658;
    msg.custom_x = 0.321940528419;
    msg.custom_y = 0.673125297202;
    msg.custom_z = 0.615746478686;

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
    msg.setTimeStamp(0.423249628854);
    msg.setSource(43617U);
    msg.setSourceEntity(211U);
    msg.setDestination(26083U);
    msg.setDestinationEntity(50U);
    msg.bias_psi = 0.246248025499;
    msg.bias_r = 0.488767898429;
    msg.cog = 0.579667454294;
    msg.cyaw = 0.291882424749;
    msg.lbl_rej_level = 0.670271014715;
    msg.gps_rej_level = 0.203087399779;
    msg.custom_x = 0.216641924447;
    msg.custom_y = 0.0759007326757;
    msg.custom_z = 0.612229942045;

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
    msg.setTimeStamp(0.241200302761);
    msg.setSource(57600U);
    msg.setSourceEntity(227U);
    msg.setDestination(57541U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.457945927136;
    msg.bias_r = 0.11547750472;
    msg.cog = 0.9404678469;
    msg.cyaw = 0.602370151621;
    msg.lbl_rej_level = 0.226781676066;
    msg.gps_rej_level = 0.655179351269;
    msg.custom_x = 0.667096486497;
    msg.custom_y = 0.449367984631;
    msg.custom_z = 0.757812715588;

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
    msg.setTimeStamp(0.642915112685);
    msg.setSource(14716U);
    msg.setSourceEntity(157U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(23U);
    msg.utc_time = 0.956837825461;
    msg.reason = 135U;

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
    msg.setTimeStamp(0.840389495359);
    msg.setSource(10372U);
    msg.setSourceEntity(242U);
    msg.setDestination(50618U);
    msg.setDestinationEntity(41U);
    msg.utc_time = 0.957844473297;
    msg.reason = 19U;

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
    msg.setTimeStamp(0.247197808597);
    msg.setSource(28621U);
    msg.setSourceEntity(181U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(94U);
    msg.utc_time = 0.812823848037;
    msg.reason = 212U;

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
    msg.setTimeStamp(0.632233429801);
    msg.setSource(32250U);
    msg.setSourceEntity(120U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(208U);
    msg.id = 85U;
    msg.range = 0.902933407641;
    msg.acceptance = 135U;

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
    msg.setTimeStamp(0.460131778177);
    msg.setSource(19638U);
    msg.setSourceEntity(212U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(202U);
    msg.id = 75U;
    msg.range = 0.620714986868;
    msg.acceptance = 183U;

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
    msg.setTimeStamp(0.0350069314363);
    msg.setSource(61059U);
    msg.setSourceEntity(207U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(180U);
    msg.id = 196U;
    msg.range = 0.115872893856;
    msg.acceptance = 166U;

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
    msg.setTimeStamp(0.732994024307);
    msg.setSource(23709U);
    msg.setSourceEntity(43U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(109U);
    msg.type = 33U;
    msg.reason = 22U;
    msg.value = 0.00371746584523;
    msg.timestep = 0.0257180141054;

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
    msg.setTimeStamp(0.740354798808);
    msg.setSource(39154U);
    msg.setSourceEntity(10U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(32U);
    msg.type = 235U;
    msg.reason = 157U;
    msg.value = 0.927319786171;
    msg.timestep = 0.159298411136;

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
    msg.setTimeStamp(0.627267317717);
    msg.setSource(51916U);
    msg.setSourceEntity(254U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(170U);
    msg.type = 48U;
    msg.reason = 166U;
    msg.value = 0.314763155734;
    msg.timestep = 0.286565155346;

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
    msg.setTimeStamp(0.516422563178);
    msg.setSource(2066U);
    msg.setSourceEntity(223U);
    msg.setDestination(1916U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RGVESNZBIMOTGPWAQBTZMJHKYCKRCMKEGWSYAKXHWXENMDQOVBRHIHDOGYGZFDXSQJOLWGYAJAINMQFWMNTLKFRPGUZFCPJKVEADLHUCCSCEJQDRNPOQTIIEJLSZTAJTCLLGZOBGJ");
    tmp_msg_0.lat = 0.435519350593;
    tmp_msg_0.lon = 0.845089811273;
    tmp_msg_0.depth = 0.545932687744;
    tmp_msg_0.query_channel = 224U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 126U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.943926345512;
    msg.y = 0.710064714202;
    msg.var_x = 0.922377583958;
    msg.var_y = 0.00693686283277;
    msg.distance = 0.62215364242;

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
    msg.setTimeStamp(0.834395495498);
    msg.setSource(39600U);
    msg.setSourceEntity(34U);
    msg.setDestination(13038U);
    msg.setDestinationEntity(116U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OZDJYNHVSSTEUMLGYFWJPXYISCIPDKPASBLNLTFQQIZDFDAHOKOXXUEBPOCNKIYEHMGVJIFSWLNJJTBMTVFLOOUHZGSKODKYFFMAGURO");
    tmp_msg_0.lat = 0.934280245126;
    tmp_msg_0.lon = 0.0225693125905;
    tmp_msg_0.depth = 0.370127116328;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 17U;
    tmp_msg_0.transponder_delay = 38U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.174633234408;
    msg.y = 0.723031587092;
    msg.var_x = 0.453037384045;
    msg.var_y = 0.788124638387;
    msg.distance = 0.497566964739;

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
    msg.setTimeStamp(0.0828571154783);
    msg.setSource(43323U);
    msg.setSourceEntity(195U);
    msg.setDestination(40421U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KNJEMGJPQNPVHGBKUMJADQOXMPPGIXMYEQWRRURQZKKXDXNOYXUCQYKZIBZHZLFSPGRCXLDCXADVRQSFTPBDGKOETHPFMZJNZTZYVUUSNLLTUEGRUILNLSLOFVVVHZUAOIEMEOACITHMBQVFVLDCAXYJIKFCJZCTWJGCOPNBKJMOLSESXRTKJHBDGXJNHRBOVWIIKWNYNAFFBQTSWAMSWFLYSQCREAPGWMAWFPDHEDWCGDAQRIYT");
    tmp_msg_0.lat = 0.996142799993;
    tmp_msg_0.lon = 0.940152437976;
    tmp_msg_0.depth = 0.752815634731;
    tmp_msg_0.query_channel = 121U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 43U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.717584484861;
    msg.y = 0.711227947121;
    msg.var_x = 0.649113287144;
    msg.var_y = 0.8171076832;
    msg.distance = 0.960557274889;

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
    msg.setTimeStamp(0.445731161229);
    msg.setSource(41807U);
    msg.setSourceEntity(180U);
    msg.setDestination(62643U);
    msg.setDestinationEntity(222U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.980348493901);
    msg.setSource(2038U);
    msg.setSourceEntity(128U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(158U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.390889581119);
    msg.setSource(41691U);
    msg.setSourceEntity(16U);
    msg.setDestination(34546U);
    msg.setDestinationEntity(188U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.297028328535);
    msg.setSource(19486U);
    msg.setSourceEntity(58U);
    msg.setDestination(7646U);
    msg.setDestinationEntity(71U);
    msg.x = 0.887222042346;
    msg.y = 0.113507663227;
    msg.z = 0.0915704902507;

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
    msg.setTimeStamp(0.218767074391);
    msg.setSource(63949U);
    msg.setSourceEntity(196U);
    msg.setDestination(27563U);
    msg.setDestinationEntity(10U);
    msg.x = 0.316629100321;
    msg.y = 0.617745760991;
    msg.z = 0.695549045175;

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
    msg.setTimeStamp(0.558459225127);
    msg.setSource(10568U);
    msg.setSourceEntity(190U);
    msg.setDestination(5080U);
    msg.setDestinationEntity(143U);
    msg.x = 0.863023441349;
    msg.y = 0.622277321841;
    msg.z = 0.295580249788;

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
    msg.setTimeStamp(0.0767347762138);
    msg.setSource(47112U);
    msg.setSourceEntity(241U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(54U);
    msg.va = 0.340548416572;
    msg.aoa = 0.122098199202;
    msg.ssa = 0.210784283702;

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
    msg.setTimeStamp(0.0591500980162);
    msg.setSource(32019U);
    msg.setSourceEntity(232U);
    msg.setDestination(52934U);
    msg.setDestinationEntity(159U);
    msg.va = 0.688543844948;
    msg.aoa = 0.52186298004;
    msg.ssa = 0.167960849552;

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
    msg.setTimeStamp(0.457637065058);
    msg.setSource(12127U);
    msg.setSourceEntity(98U);
    msg.setDestination(45743U);
    msg.setDestinationEntity(119U);
    msg.va = 0.866120083413;
    msg.aoa = 0.282255715377;
    msg.ssa = 0.464163948915;

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
    msg.setTimeStamp(0.605205705578);
    msg.setSource(9270U);
    msg.setSourceEntity(98U);
    msg.setDestination(21837U);
    msg.setDestinationEntity(112U);
    msg.value = 0.869418926715;

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
    msg.setTimeStamp(0.874428415372);
    msg.setSource(39136U);
    msg.setSourceEntity(118U);
    msg.setDestination(1499U);
    msg.setDestinationEntity(159U);
    msg.value = 0.214711297721;

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
    msg.setTimeStamp(0.861156666859);
    msg.setSource(55341U);
    msg.setSourceEntity(42U);
    msg.setDestination(33492U);
    msg.setDestinationEntity(249U);
    msg.value = 0.308432066287;

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
    msg.setTimeStamp(0.890743073631);
    msg.setSource(32791U);
    msg.setSourceEntity(147U);
    msg.setDestination(37730U);
    msg.setDestinationEntity(158U);
    msg.value = 0.680059949437;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.687102622071);
    msg.setSource(54758U);
    msg.setSourceEntity(83U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(205U);
    msg.value = 0.181446723693;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.2148202008);
    msg.setSource(44072U);
    msg.setSourceEntity(208U);
    msg.setDestination(4608U);
    msg.setDestinationEntity(198U);
    msg.value = 0.943628113595;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.641359952474);
    msg.setSource(24008U);
    msg.setSourceEntity(61U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(228U);
    msg.value = 0.0272423641165;
    msg.speed_units = 27U;

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
    msg.setTimeStamp(0.607960990927);
    msg.setSource(29617U);
    msg.setSourceEntity(117U);
    msg.setDestination(29929U);
    msg.setDestinationEntity(127U);
    msg.value = 0.212505870815;
    msg.speed_units = 217U;

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
    msg.setTimeStamp(0.174628474531);
    msg.setSource(35143U);
    msg.setSourceEntity(14U);
    msg.setDestination(54397U);
    msg.setDestinationEntity(191U);
    msg.value = 0.517850010586;
    msg.speed_units = 162U;

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
    msg.setTimeStamp(0.102251548386);
    msg.setSource(56188U);
    msg.setSourceEntity(233U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(190U);
    msg.value = 0.613497471513;

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
    msg.setTimeStamp(0.0351964571283);
    msg.setSource(47264U);
    msg.setSourceEntity(77U);
    msg.setDestination(32070U);
    msg.setDestinationEntity(43U);
    msg.value = 0.605437180335;

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
    msg.setTimeStamp(0.768417767256);
    msg.setSource(37822U);
    msg.setSourceEntity(25U);
    msg.setDestination(1311U);
    msg.setDestinationEntity(144U);
    msg.value = 0.650365984923;

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
    msg.setTimeStamp(0.0778527931473);
    msg.setSource(4129U);
    msg.setSourceEntity(163U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(98U);
    msg.value = 0.47010729671;

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
    msg.setTimeStamp(0.32400653332);
    msg.setSource(28588U);
    msg.setSourceEntity(175U);
    msg.setDestination(39094U);
    msg.setDestinationEntity(4U);
    msg.value = 0.701137595291;

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
    msg.setTimeStamp(0.0748578717272);
    msg.setSource(14327U);
    msg.setSourceEntity(208U);
    msg.setDestination(9940U);
    msg.setDestinationEntity(11U);
    msg.value = 0.975068609734;

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
    msg.setTimeStamp(0.593504231463);
    msg.setSource(62447U);
    msg.setSourceEntity(96U);
    msg.setDestination(48547U);
    msg.setDestinationEntity(112U);
    msg.value = 0.840030131788;

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
    msg.setTimeStamp(0.758869775725);
    msg.setSource(16444U);
    msg.setSourceEntity(150U);
    msg.setDestination(28340U);
    msg.setDestinationEntity(95U);
    msg.value = 0.135993282259;

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
    msg.setTimeStamp(0.0325302637633);
    msg.setSource(2266U);
    msg.setSourceEntity(244U);
    msg.setDestination(28507U);
    msg.setDestinationEntity(114U);
    msg.value = 0.758619539057;

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
    msg.setTimeStamp(0.312228348516);
    msg.setSource(18916U);
    msg.setSourceEntity(60U);
    msg.setDestination(30851U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 3864341677U;
    msg.start_lat = 0.0738570521008;
    msg.start_lon = 0.0396030162822;
    msg.start_z = 0.76238556702;
    msg.start_z_units = 152U;
    msg.end_lat = 0.000849525305053;
    msg.end_lon = 0.102812953009;
    msg.end_z = 0.118333057656;
    msg.end_z_units = 26U;
    msg.speed = 0.697386983087;
    msg.speed_units = 105U;
    msg.lradius = 0.380415340833;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.919370212365);
    msg.setSource(51561U);
    msg.setSourceEntity(230U);
    msg.setDestination(14552U);
    msg.setDestinationEntity(110U);
    msg.path_ref = 2807634090U;
    msg.start_lat = 0.745812803057;
    msg.start_lon = 0.812535839359;
    msg.start_z = 0.947967674872;
    msg.start_z_units = 214U;
    msg.end_lat = 0.0705677886662;
    msg.end_lon = 0.332102572728;
    msg.end_z = 0.222868630999;
    msg.end_z_units = 35U;
    msg.speed = 0.368233321763;
    msg.speed_units = 36U;
    msg.lradius = 0.136770074245;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.136646488518);
    msg.setSource(49555U);
    msg.setSourceEntity(74U);
    msg.setDestination(22982U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 1011806087U;
    msg.start_lat = 0.653187253685;
    msg.start_lon = 0.960137936804;
    msg.start_z = 0.170823282816;
    msg.start_z_units = 37U;
    msg.end_lat = 0.0414908085839;
    msg.end_lon = 0.966310880626;
    msg.end_z = 0.566252129824;
    msg.end_z_units = 163U;
    msg.speed = 0.206029265841;
    msg.speed_units = 21U;
    msg.lradius = 0.809596686724;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.556007494458);
    msg.setSource(17703U);
    msg.setSourceEntity(146U);
    msg.setDestination(41783U);
    msg.setDestinationEntity(60U);
    msg.x = 0.533421654191;
    msg.y = 0.444237726152;
    msg.z = 0.87552613486;
    msg.k = 0.665975962062;
    msg.m = 0.70979033167;
    msg.n = 0.620894872109;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.904569950115);
    msg.setSource(54886U);
    msg.setSourceEntity(141U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(177U);
    msg.x = 0.327527189793;
    msg.y = 0.282153405356;
    msg.z = 0.259153586536;
    msg.k = 0.662073507745;
    msg.m = 0.28507318113;
    msg.n = 0.760339814153;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.741577951311);
    msg.setSource(9293U);
    msg.setSourceEntity(185U);
    msg.setDestination(24041U);
    msg.setDestinationEntity(35U);
    msg.x = 0.425345616445;
    msg.y = 0.79207111433;
    msg.z = 0.892840809098;
    msg.k = 0.65053918999;
    msg.m = 0.331676738404;
    msg.n = 0.295952865641;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.176775314881);
    msg.setSource(56712U);
    msg.setSourceEntity(177U);
    msg.setDestination(55649U);
    msg.setDestinationEntity(195U);
    msg.value = 0.905489534518;

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
    msg.setTimeStamp(0.734961430089);
    msg.setSource(33870U);
    msg.setSourceEntity(190U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(204U);
    msg.value = 0.213520624629;

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
    msg.setTimeStamp(0.629095483257);
    msg.setSource(1847U);
    msg.setSourceEntity(201U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(141U);
    msg.value = 0.354884475371;

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
    msg.setTimeStamp(0.342609233462);
    msg.setSource(60043U);
    msg.setSourceEntity(162U);
    msg.setDestination(12216U);
    msg.setDestinationEntity(130U);
    msg.u = 0.439457866269;
    msg.v = 0.654221268932;
    msg.w = 0.984425745377;
    msg.p = 0.648009703862;
    msg.q = 0.408081675864;
    msg.r = 0.67354315011;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.152861846086);
    msg.setSource(20006U);
    msg.setSourceEntity(231U);
    msg.setDestination(17970U);
    msg.setDestinationEntity(203U);
    msg.u = 0.277483120679;
    msg.v = 0.335986694025;
    msg.w = 0.794190805167;
    msg.p = 0.351112789876;
    msg.q = 0.215683209407;
    msg.r = 0.805732540814;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.906327411377);
    msg.setSource(13438U);
    msg.setSourceEntity(251U);
    msg.setDestination(34895U);
    msg.setDestinationEntity(63U);
    msg.u = 0.953858384729;
    msg.v = 0.287697161301;
    msg.w = 0.448713226809;
    msg.p = 0.189772739117;
    msg.q = 0.79678128849;
    msg.r = 0.221063904744;
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
    msg.setTimeStamp(0.651846485406);
    msg.setSource(19221U);
    msg.setSourceEntity(130U);
    msg.setDestination(33234U);
    msg.setDestinationEntity(110U);
    msg.path_ref = 3036714997U;
    msg.start_lat = 0.427579833791;
    msg.start_lon = 0.767685117907;
    msg.start_z = 0.880806842649;
    msg.start_z_units = 82U;
    msg.end_lat = 0.81529722011;
    msg.end_lon = 0.973420500825;
    msg.end_z = 0.441225516682;
    msg.end_z_units = 16U;
    msg.lradius = 0.327910005413;
    msg.flags = 232U;
    msg.x = 0.853215618726;
    msg.y = 0.406245810056;
    msg.z = 0.529401158049;
    msg.vx = 0.0196492579599;
    msg.vy = 0.556210260669;
    msg.vz = 0.510096246773;
    msg.course_error = 0.645813286572;
    msg.eta = 30246U;

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
    msg.setTimeStamp(0.221704996138);
    msg.setSource(36394U);
    msg.setSourceEntity(103U);
    msg.setDestination(38743U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 416985639U;
    msg.start_lat = 0.685354417479;
    msg.start_lon = 0.694964083019;
    msg.start_z = 0.773656004725;
    msg.start_z_units = 104U;
    msg.end_lat = 0.802103316702;
    msg.end_lon = 0.737464337999;
    msg.end_z = 0.972552820958;
    msg.end_z_units = 63U;
    msg.lradius = 0.819393031102;
    msg.flags = 188U;
    msg.x = 0.817967170973;
    msg.y = 0.466987801392;
    msg.z = 0.333540428389;
    msg.vx = 0.880738469721;
    msg.vy = 0.671328922133;
    msg.vz = 0.231405693308;
    msg.course_error = 0.841841276993;
    msg.eta = 18569U;

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
    msg.setTimeStamp(0.222930805965);
    msg.setSource(63641U);
    msg.setSourceEntity(42U);
    msg.setDestination(2725U);
    msg.setDestinationEntity(153U);
    msg.path_ref = 2534725342U;
    msg.start_lat = 0.273310222187;
    msg.start_lon = 0.35232230881;
    msg.start_z = 0.285991985267;
    msg.start_z_units = 132U;
    msg.end_lat = 0.720412336071;
    msg.end_lon = 0.512494203254;
    msg.end_z = 0.654695501287;
    msg.end_z_units = 48U;
    msg.lradius = 0.523723958937;
    msg.flags = 81U;
    msg.x = 0.699435593164;
    msg.y = 0.810291589616;
    msg.z = 0.932953842315;
    msg.vx = 0.926641344869;
    msg.vy = 0.824609041538;
    msg.vz = 0.483888973683;
    msg.course_error = 0.598771657662;
    msg.eta = 16429U;

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
    msg.setTimeStamp(0.549871555767);
    msg.setSource(41598U);
    msg.setSourceEntity(185U);
    msg.setDestination(21683U);
    msg.setDestinationEntity(175U);
    msg.k = 0.385708416864;
    msg.m = 0.162736252697;
    msg.n = 0.951520305821;

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
    msg.setTimeStamp(0.140829308725);
    msg.setSource(4827U);
    msg.setSourceEntity(203U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(33U);
    msg.k = 0.809142018473;
    msg.m = 0.423926417354;
    msg.n = 0.935536318592;

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
    msg.setTimeStamp(0.81748595282);
    msg.setSource(4589U);
    msg.setSourceEntity(11U);
    msg.setDestination(34855U);
    msg.setDestinationEntity(188U);
    msg.k = 0.21976511559;
    msg.m = 0.103624671041;
    msg.n = 0.741753339806;

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
    msg.setTimeStamp(0.939483185037);
    msg.setSource(28336U);
    msg.setSourceEntity(235U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(180U);
    msg.p = 0.113691425437;
    msg.i = 0.0387233351206;
    msg.d = 0.507401845141;
    msg.a = 0.0168936308117;

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
    msg.setTimeStamp(0.231338527839);
    msg.setSource(46736U);
    msg.setSourceEntity(174U);
    msg.setDestination(35122U);
    msg.setDestinationEntity(53U);
    msg.p = 0.578712625444;
    msg.i = 0.914371271956;
    msg.d = 0.964452896541;
    msg.a = 0.709735760348;

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
    msg.setTimeStamp(0.668139479458);
    msg.setSource(59286U);
    msg.setSourceEntity(130U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(234U);
    msg.p = 0.403869455905;
    msg.i = 0.704113890259;
    msg.d = 0.555064971234;
    msg.a = 0.910988191878;

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
    msg.setTimeStamp(0.815049646281);
    msg.setSource(5613U);
    msg.setSourceEntity(178U);
    msg.setDestination(5884U);
    msg.setDestinationEntity(1U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.356728249215);
    msg.setSource(65182U);
    msg.setSourceEntity(112U);
    msg.setDestination(53692U);
    msg.setDestinationEntity(104U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.84399657625);
    msg.setSource(26030U);
    msg.setSourceEntity(160U);
    msg.setDestination(5043U);
    msg.setDestinationEntity(216U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.41492964803);
    msg.setSource(51111U);
    msg.setSourceEntity(149U);
    msg.setDestination(29458U);
    msg.setDestinationEntity(25U);
    msg.x = 0.00642326332133;
    msg.y = 0.404535231937;
    msg.z = 0.240321237075;
    msg.vx = 0.97772355477;
    msg.vy = 0.439227750442;
    msg.vz = 0.231049284751;
    msg.ax = 0.156253695275;
    msg.ay = 0.195430908736;
    msg.az = 0.214819453759;
    msg.flags = 64531U;

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
    msg.setTimeStamp(0.455654120281);
    msg.setSource(34088U);
    msg.setSourceEntity(202U);
    msg.setDestination(49036U);
    msg.setDestinationEntity(198U);
    msg.x = 0.571077740937;
    msg.y = 0.162064335098;
    msg.z = 0.293436756703;
    msg.vx = 0.451558039383;
    msg.vy = 0.018223136758;
    msg.vz = 0.108259000248;
    msg.ax = 0.863979695059;
    msg.ay = 0.753181207944;
    msg.az = 0.710568037443;
    msg.flags = 49323U;

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
    msg.setTimeStamp(0.616115407944);
    msg.setSource(33012U);
    msg.setSourceEntity(36U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(49U);
    msg.x = 0.566598589099;
    msg.y = 0.425735130377;
    msg.z = 0.911151005145;
    msg.vx = 0.0254626995319;
    msg.vy = 0.667007926205;
    msg.vz = 0.211980155141;
    msg.ax = 0.432775714535;
    msg.ay = 0.740010750598;
    msg.az = 0.468810469374;
    msg.flags = 30483U;

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
    msg.setTimeStamp(0.660325723696);
    msg.setSource(63956U);
    msg.setSourceEntity(125U);
    msg.setDestination(11124U);
    msg.setDestinationEntity(37U);
    msg.value = 0.97359039869;

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
    msg.setTimeStamp(0.317428401369);
    msg.setSource(17672U);
    msg.setSourceEntity(103U);
    msg.setDestination(16626U);
    msg.setDestinationEntity(104U);
    msg.value = 0.516910586885;

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
    msg.setTimeStamp(0.923513129184);
    msg.setSource(50207U);
    msg.setSourceEntity(29U);
    msg.setDestination(11249U);
    msg.setDestinationEntity(145U);
    msg.value = 0.111027274255;

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
    msg.setTimeStamp(0.133295715169);
    msg.setSource(4057U);
    msg.setSourceEntity(104U);
    msg.setDestination(1549U);
    msg.setDestinationEntity(142U);
    msg.timeout = 64935U;
    msg.lat = 0.52045162458;
    msg.lon = 0.532257713171;
    msg.z = 0.59469620874;
    msg.z_units = 6U;
    msg.speed = 0.960354006057;
    msg.speed_units = 1U;
    msg.roll = 0.47849545118;
    msg.pitch = 0.543563047505;
    msg.yaw = 0.876813367934;
    msg.custom.assign("JKKETGSYRCHDRAHAWCUHXRIGKYCLFTVVYSYTVQFTECZHVRDWETYLXEQBMRGCWIIKAOZNPKFFWLENVCKPIURUOUKHUIJEKZGJMAVMLFYAEDMIUSYXPYVMLQMDLLIXPN");

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
    msg.setTimeStamp(0.444578174194);
    msg.setSource(28221U);
    msg.setSourceEntity(242U);
    msg.setDestination(44952U);
    msg.setDestinationEntity(14U);
    msg.timeout = 62223U;
    msg.lat = 0.0607468753372;
    msg.lon = 0.433170816883;
    msg.z = 0.929322669213;
    msg.z_units = 133U;
    msg.speed = 0.0720906143026;
    msg.speed_units = 59U;
    msg.roll = 0.751860461873;
    msg.pitch = 0.353441255583;
    msg.yaw = 0.660201801848;
    msg.custom.assign("PLPUXEZZMWSATBFLDQNCAARSSNYZYRAYLSTGCHIXKVRMTPJYDNNWVIHLGTSWLOCTGZNGWHJVXKPJPKPMMEHAEQFAZDOQBHEZMLBQQWMMNUIPURTVWHUEXAPCOXRIGMATKBYOSCRBSZJPHCLLIWFEV");

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
    msg.setTimeStamp(0.304824249619);
    msg.setSource(26569U);
    msg.setSourceEntity(27U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(103U);
    msg.timeout = 23444U;
    msg.lat = 0.557612399033;
    msg.lon = 0.764910515245;
    msg.z = 0.221711496807;
    msg.z_units = 6U;
    msg.speed = 0.340973884238;
    msg.speed_units = 117U;
    msg.roll = 0.288642450644;
    msg.pitch = 0.23951610907;
    msg.yaw = 0.231989988977;
    msg.custom.assign("UEJZWPEOHYXUCRTMTJGCTIKLKURPWKFLSXDGZAIYIIAPVLBNFOFPGXJHCSBBREDEELMDYBUFGTATUAXIDYXONBLMKTUSJPACHQFUJREZMDYDPXZFFHRJAENGWLSWVJVOIMTDIUBKZYGQYLNDOCHVSVHWHRRJSAAYHQDBEAQVOGUXTDWNOPKKNB");

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
    msg.setTimeStamp(0.90094807355);
    msg.setSource(65292U);
    msg.setSourceEntity(94U);
    msg.setDestination(46790U);
    msg.setDestinationEntity(232U);
    msg.timeout = 26131U;
    msg.lat = 0.177921541267;
    msg.lon = 0.758769252695;
    msg.z = 0.0873906727424;
    msg.z_units = 102U;
    msg.speed = 0.233022483205;
    msg.speed_units = 226U;
    msg.duration = 32448U;
    msg.radius = 0.168172948765;
    msg.flags = 220U;
    msg.custom.assign("AKWIUQNAEVRLUGXAHUIDIDJCLPUHZZANHULQSKLGXVCOUIEBDKZSFGJMAUDZZPXZQLABORWFMYHCREPKFPDYQQRJDFEOPUTGWFBJ");

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
    msg.setTimeStamp(0.65969586004);
    msg.setSource(47937U);
    msg.setSourceEntity(46U);
    msg.setDestination(49916U);
    msg.setDestinationEntity(119U);
    msg.timeout = 32939U;
    msg.lat = 0.699486773469;
    msg.lon = 0.811322289172;
    msg.z = 0.223970317791;
    msg.z_units = 3U;
    msg.speed = 0.596861187435;
    msg.speed_units = 181U;
    msg.duration = 25962U;
    msg.radius = 0.292714280871;
    msg.flags = 46U;
    msg.custom.assign("OFEUURXMBMVEZMYAQOBAAKEBYOZDCXLPZZLVJZFXZDIVXRWIOMXJWMFADBEDVIQPKLHPOKBNOFKTTROHWJLCLQILLDSXRRAJERYDQJYGOYJXNSXRJUGVDSWEAEBZTNHPNHHCNKUALBACYDKWZVUKTFCBGFPRLMCVCBGWFECQLOHMKC");

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
    msg.setTimeStamp(0.721114428062);
    msg.setSource(24688U);
    msg.setSourceEntity(103U);
    msg.setDestination(37755U);
    msg.setDestinationEntity(99U);
    msg.timeout = 65135U;
    msg.lat = 0.603786638514;
    msg.lon = 0.46530433348;
    msg.z = 0.0365359444503;
    msg.z_units = 98U;
    msg.speed = 0.888617154166;
    msg.speed_units = 135U;
    msg.duration = 57448U;
    msg.radius = 0.0364419521255;
    msg.flags = 254U;
    msg.custom.assign("NFIDYEOLTLBWERLRBGFHCZVSPQIOYLSIQIDRSCUSPQHTJMXYIEBNUMENEPJPXHXLJDJWOGRIQBYKYGJHPGBWDVCMUK");

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
    msg.setTimeStamp(0.966245697124);
    msg.setSource(54075U);
    msg.setSourceEntity(208U);
    msg.setDestination(32602U);
    msg.setDestinationEntity(145U);
    msg.custom.assign("DEAZYXUWWGAMPJWIWJIVDMRLCJHQJWPSSKKVZMOLKFFFVRZKRIOIDCLHFGBSMNWTJKFEWINRPHTLSPVCVHWSKHAEJYNLFIZBDAAEANLQHNNIRMQNXYUQQGXPXJTJNPRDGTRMLPDACCCQJCKHSMXZAOXSTCBXAULCUVHQHUZDMOAWKUODIPGGYVTRMUETZYQJGYOYPTHTFVRBOYBEXKNIBTPUXFQBRUZCOGLIBFYVFDNEEZDSMWBOYG");

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
    msg.setTimeStamp(0.29184359992);
    msg.setSource(22020U);
    msg.setSourceEntity(15U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(135U);
    msg.custom.assign("PKVWXFPIFMXSZFZBKQMLQDHHCVKRICNHDVLYUAYTBHPXLDDJHWAABGGBNZWXNLPSTZQDMPJOPNKRERLDVXFFYZCHBGNTYGSYMEMJHTHTXLUIAZMEHMGGCSXFARWYKJMCKOHVIGTIJYZOBCLFTEPBGVNMJQWSYXSKNYEJOXZVBJAVMWEUERNOVWAISEKGWWRQOURVWJZUTLPRDFJKUBUDUOEOC");

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
    msg.setTimeStamp(0.997805812718);
    msg.setSource(21121U);
    msg.setSourceEntity(97U);
    msg.setDestination(62721U);
    msg.setDestinationEntity(212U);
    msg.custom.assign("RJTMKYYGIXFQZASTYUYDLMYUPSDFGJYWEFVOSGBVQFVZIBTHZJETMGZNSHCUGQPDIWQMXZTBJOMRPCUCQCUJQPRMOYDLKUGAVDIKEOLHIAPXLXCNABRPWFZZNDEXRAZAFGISSXLGWQIFHSDVSOPKCRTRQCAEEDQYLKFXHUUJVNWLEINFPOJEIKPUCCVWLBKXJKNTHSLBHONVCNEDRHVWEAI");

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
    msg.setTimeStamp(0.309427614966);
    msg.setSource(53625U);
    msg.setSourceEntity(128U);
    msg.setDestination(40016U);
    msg.setDestinationEntity(33U);
    msg.timeout = 45387U;
    msg.lat = 0.675013301609;
    msg.lon = 0.992829441575;
    msg.z = 0.75347058275;
    msg.z_units = 113U;
    msg.duration = 34655U;
    msg.speed = 0.143439338784;
    msg.speed_units = 213U;
    msg.type = 231U;
    msg.radius = 0.90241112698;
    msg.length = 0.983802802141;
    msg.bearing = 0.744651009759;
    msg.direction = 228U;
    msg.custom.assign("WTDEMJZDPTPZRLALFXTRFUOAJFUVVCBIGMYQOUTFATNGEVZBGDNMIEDDONOEVDIQSELTLZNRSHNCIRZRLNHUKXMIJJGVWXCKPPAUDCZXMYUGHNNOSMSZQPEBHVQSBFFRULLHJGRLYKJ");

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
    msg.setTimeStamp(0.705367470323);
    msg.setSource(46431U);
    msg.setSourceEntity(22U);
    msg.setDestination(36572U);
    msg.setDestinationEntity(68U);
    msg.timeout = 32073U;
    msg.lat = 0.137433006666;
    msg.lon = 0.223161035775;
    msg.z = 0.439396925315;
    msg.z_units = 171U;
    msg.duration = 26006U;
    msg.speed = 0.620752329833;
    msg.speed_units = 212U;
    msg.type = 58U;
    msg.radius = 0.238248501782;
    msg.length = 0.977991450718;
    msg.bearing = 0.439950596537;
    msg.direction = 15U;
    msg.custom.assign("SOUCMJEGAYFJYHNNORLXQWVEGFEYXPBZULFLYWIQGGGVPXFBBSHOQZSUVGWNBPPSOJJRQU");

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
    msg.setTimeStamp(0.0324820230476);
    msg.setSource(64890U);
    msg.setSourceEntity(175U);
    msg.setDestination(50920U);
    msg.setDestinationEntity(101U);
    msg.timeout = 30897U;
    msg.lat = 0.628899084301;
    msg.lon = 0.658390434922;
    msg.z = 0.0227024752952;
    msg.z_units = 186U;
    msg.duration = 24431U;
    msg.speed = 0.309182557805;
    msg.speed_units = 182U;
    msg.type = 106U;
    msg.radius = 0.101017197433;
    msg.length = 0.725456688722;
    msg.bearing = 0.875364167621;
    msg.direction = 146U;
    msg.custom.assign("ZCOGOVLQSVJRBKAELKTILUTOSSGUBTJRHZLLQNWDRGOZBGBUXEQXZQYADWTPIHFMSGZVHNELKIHRJAKEBNIARBKRXTJSJJYYNAXTQOVHXYEZVPVMJIZFAFBPDDWNNRIMCGUMJRPJXEQQVGKXHCETFPCGYYMZAOMIOMODICFUBTHSSIYNWWCYMITMQLNNHJRFKAYVBTDLLEKVLZDPXCKUWKDFPCCCQGGFPPZUAPAOOWDWFQHSRXYB");

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
    msg.setTimeStamp(0.556140933214);
    msg.setSource(10707U);
    msg.setSourceEntity(114U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(94U);
    msg.duration = 46762U;
    msg.custom.assign("ICMHTCBJBWXLFLPGNUQTFJVYJPOWPHYBBZZBLAXEGERLGKKOSTOBHYSUCFAKZOEGWJEDDKDJWZDJMYWXSIOMEQIAIOHBHYRJNALAJMYNHX");

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
    msg.setTimeStamp(0.943109693042);
    msg.setSource(791U);
    msg.setSourceEntity(116U);
    msg.setDestination(576U);
    msg.setDestinationEntity(21U);
    msg.duration = 64532U;
    msg.custom.assign("RSSEJQJHCTNHXRLUQEBSVFBQXWZSKIYGUFTACJXFPETLZTRKQGRAGJLHLQGCAKCWJNMUFPMXBBEOOOMNDFBEQTPNYJWGIITQJZYDWZQJOVZTUHFJDXBVFHXNENLACYLPLNMYHRPDEFUSKY");

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
    msg.setTimeStamp(0.991783151587);
    msg.setSource(56705U);
    msg.setSourceEntity(179U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(212U);
    msg.duration = 37519U;
    msg.custom.assign("HOSZXMXKLSKBADYPKCMIJOPNIJRIICXBERAQNOGGHQEJNXAYEZOBVYZWNGOIHUFWAMZPTQOOCFYCPRGBCQM");

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
    msg.setTimeStamp(0.634205511358);
    msg.setSource(60310U);
    msg.setSourceEntity(118U);
    msg.setDestination(51677U);
    msg.setDestinationEntity(71U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0500521071591;
    msg.control.set(tmp_msg_0);
    msg.duration = 58892U;
    msg.custom.assign("LIEAHVUOZQKSPNNDYDKMYPGFGQCXDBQUWQRSMJWFDKIHYDAIQKLKRXBZIUXGTUHPINDWJIWEMNYHYLPZUZXGECZGAFVQYPUAMDVIJTZJFGSCM");

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
    msg.setTimeStamp(0.51115995174);
    msg.setSource(56487U);
    msg.setSourceEntity(61U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(71U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.988203086376;
    msg.control.set(tmp_msg_0);
    msg.duration = 63758U;
    msg.custom.assign("JACJKCSKSOYTNALFDNJODIAPPVUFHXVBOUCTTHQXHQX");

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
    msg.setTimeStamp(0.357233140568);
    msg.setSource(1058U);
    msg.setSourceEntity(246U);
    msg.setDestination(632U);
    msg.setDestinationEntity(217U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.664609949451;
    msg.control.set(tmp_msg_0);
    msg.duration = 18406U;
    msg.custom.assign("IGUZCCWTZOTVTSRXCURPWHLLIJNXLYFBZRMEIMGXIFOQQVHKDEGEVCCLYROKMIEMVTWUUPCZUSLYEWDEXKRABLKQROOAHLHABESRWJLQWSIDVJEFWBSJSBFNVFNBBCQIMUHKLDYXBSEYYFZGKZVDOGYXXBHPJJANTXZVSKTOJTM");

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
    msg.setTimeStamp(0.808684586145);
    msg.setSource(27168U);
    msg.setSourceEntity(177U);
    msg.setDestination(35315U);
    msg.setDestinationEntity(192U);
    msg.timeout = 38163U;
    msg.lat = 0.512683609269;
    msg.lon = 0.814037000725;
    msg.z = 0.141930941428;
    msg.z_units = 44U;
    msg.speed = 0.291271514561;
    msg.speed_units = 189U;
    msg.bearing = 0.00841043567049;
    msg.cross_angle = 0.728481338252;
    msg.width = 0.517746554051;
    msg.length = 0.241805823104;
    msg.hstep = 0.661838297451;
    msg.coff = 195U;
    msg.alternation = 169U;
    msg.flags = 204U;
    msg.custom.assign("ZEBPTBRIKKZISAEPUGSMHLYORYIWFGXVDZWARSLTSCQVAVMAIYXFQETKMRXHUUZLTBMGALXZIHJDHDNDMEWDLRIITFQPJDQUIYTNDSESPVSOQRCWTGQWVRSNZJGNXOEYLDF");

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
    msg.setTimeStamp(0.821397612566);
    msg.setSource(45281U);
    msg.setSourceEntity(79U);
    msg.setDestination(24315U);
    msg.setDestinationEntity(144U);
    msg.timeout = 42620U;
    msg.lat = 0.633811359064;
    msg.lon = 0.127520367018;
    msg.z = 0.778108386328;
    msg.z_units = 145U;
    msg.speed = 0.693362889764;
    msg.speed_units = 4U;
    msg.bearing = 0.43693387056;
    msg.cross_angle = 0.819646566431;
    msg.width = 0.503227985409;
    msg.length = 0.491270931091;
    msg.hstep = 0.255756462802;
    msg.coff = 51U;
    msg.alternation = 52U;
    msg.flags = 102U;
    msg.custom.assign("NLZBKEYSQMFRSIWDISHTUACKDRUJFSGPUGTDFEAKCRCYTWJIMLJVRQNOBPVPJHQXPPBLS");

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
    msg.setTimeStamp(0.987003412849);
    msg.setSource(49860U);
    msg.setSourceEntity(54U);
    msg.setDestination(12301U);
    msg.setDestinationEntity(103U);
    msg.timeout = 29133U;
    msg.lat = 0.717544992847;
    msg.lon = 0.531118810689;
    msg.z = 0.883441382952;
    msg.z_units = 138U;
    msg.speed = 0.393501162903;
    msg.speed_units = 19U;
    msg.bearing = 0.469007449676;
    msg.cross_angle = 0.0203421280957;
    msg.width = 0.376515543911;
    msg.length = 0.12232021428;
    msg.hstep = 0.215046202407;
    msg.coff = 76U;
    msg.alternation = 250U;
    msg.flags = 157U;
    msg.custom.assign("NJZEXUVKWKBGASVIFYNQOMBQEGQTZZOMCDKZXQHPLHQJOTAGKJVPMYTXWPMBKDRFUKNXASRLSINSD");

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
    msg.setTimeStamp(0.819048213907);
    msg.setSource(24294U);
    msg.setSourceEntity(19U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(18U);
    msg.timeout = 46204U;
    msg.lat = 0.473935622798;
    msg.lon = 0.176325420531;
    msg.z = 0.792692006254;
    msg.z_units = 27U;
    msg.speed = 0.60480659341;
    msg.speed_units = 112U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.897434879876;
    tmp_msg_0.y = 0.923673345433;
    tmp_msg_0.z = 0.13428244595;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RLPWITZQYKAFKDKWMAUWUVOKLNRGBHAFGGJUZKIJZDDRJYKBJYGAZPQBHWSSEBVENTGOHOPBSMMNCFMYTAMEMCXVUCJNANTPXOLNNVAIPXVHXGZWGOSWZHPMQLFRDJNJQCLL");

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
    msg.setTimeStamp(0.451744619923);
    msg.setSource(45651U);
    msg.setSourceEntity(110U);
    msg.setDestination(5996U);
    msg.setDestinationEntity(49U);
    msg.timeout = 32502U;
    msg.lat = 0.186102517175;
    msg.lon = 0.900916626738;
    msg.z = 0.305130021402;
    msg.z_units = 253U;
    msg.speed = 0.249599804351;
    msg.speed_units = 96U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.146545632199;
    tmp_msg_0.y = 0.574798736492;
    tmp_msg_0.z = 0.265418888617;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZVISKNBVFVVKYVXDFDYXOXCEOBYOLAEMWHYXNJOIRYXQIUGBUKVYNLXQJUSFSIBXQRNRJVOZRJHPRBZYNZHKCOAHWMGWASWKOTEFIIR");

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
    msg.setTimeStamp(0.172259366794);
    msg.setSource(19410U);
    msg.setSourceEntity(58U);
    msg.setDestination(10143U);
    msg.setDestinationEntity(16U);
    msg.timeout = 54313U;
    msg.lat = 0.663456237384;
    msg.lon = 0.535095140103;
    msg.z = 0.7845844656;
    msg.z_units = 188U;
    msg.speed = 0.40653263971;
    msg.speed_units = 79U;
    msg.custom.assign("ALMPUMUJHONTXAYTWCAGEXNBMHYDPVDDFYZNIAQZOAPFODHLSDRKZSKIBCRUBSRTRUFTJODHROYCEFQYQKBW");

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
    msg.setTimeStamp(0.0217712829274);
    msg.setSource(14567U);
    msg.setSourceEntity(239U);
    msg.setDestination(17318U);
    msg.setDestinationEntity(143U);
    msg.x = 0.546264775365;
    msg.y = 0.660010069434;
    msg.z = 0.150292214473;

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
    msg.setTimeStamp(0.754703359261);
    msg.setSource(34323U);
    msg.setSourceEntity(164U);
    msg.setDestination(9680U);
    msg.setDestinationEntity(79U);
    msg.x = 0.649964515191;
    msg.y = 0.482369897329;
    msg.z = 0.81480835738;

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
    msg.setTimeStamp(0.845399553348);
    msg.setSource(40655U);
    msg.setSourceEntity(39U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(202U);
    msg.x = 0.775859285321;
    msg.y = 0.263493849268;
    msg.z = 0.883594560537;

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
    msg.setTimeStamp(0.274758421453);
    msg.setSource(11140U);
    msg.setSourceEntity(182U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(169U);
    msg.timeout = 62932U;
    msg.lat = 0.521519432564;
    msg.lon = 0.68601734393;
    msg.z = 0.65892088847;
    msg.z_units = 148U;
    msg.amplitude = 0.89661718885;
    msg.pitch = 0.377696130682;
    msg.speed = 0.087624619699;
    msg.speed_units = 221U;
    msg.custom.assign("CYJQCIPJTKVFRQHFWZUVNCPJFZSINVZSWPBJOXKTIBN");

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
    msg.setTimeStamp(0.0669743558967);
    msg.setSource(43295U);
    msg.setSourceEntity(210U);
    msg.setDestination(45142U);
    msg.setDestinationEntity(133U);
    msg.timeout = 32470U;
    msg.lat = 0.590496559138;
    msg.lon = 0.474648619548;
    msg.z = 0.879376518026;
    msg.z_units = 93U;
    msg.amplitude = 0.413312299548;
    msg.pitch = 0.136280441395;
    msg.speed = 0.705668879477;
    msg.speed_units = 174U;
    msg.custom.assign("MGTFHOLUNNKAYQKKIFORGDKQHNVYCXIPUSDFNBEMHACVRVIERBTYXVYOKUGKZOXGWGFCFZTSAMPVTLPTBAJWMJGIVFIQQYWLNIJOPUHBLEGCSLCWZQDGWIXMMDZLOVYOWUKTUMXJUPCWEEQQXBRTZQOPJSDETQP");

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
    msg.setTimeStamp(0.467241064902);
    msg.setSource(52436U);
    msg.setSourceEntity(145U);
    msg.setDestination(61167U);
    msg.setDestinationEntity(110U);
    msg.timeout = 30488U;
    msg.lat = 0.112851724633;
    msg.lon = 0.798665818827;
    msg.z = 0.1722383718;
    msg.z_units = 163U;
    msg.amplitude = 0.322846284585;
    msg.pitch = 0.925209864124;
    msg.speed = 0.784141623666;
    msg.speed_units = 197U;
    msg.custom.assign("PSNWQRYDRVZTAJFVKPDFRRBSBOVIEOUXACCUHMMJZPSLXESNPJGEOCLQGOJQHKTMWFAXNZECHBEDU");

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
    msg.setTimeStamp(0.0886795856496);
    msg.setSource(31352U);
    msg.setSourceEntity(130U);
    msg.setDestination(21894U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.400882311069);
    msg.setSource(5370U);
    msg.setSourceEntity(138U);
    msg.setDestination(19868U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.90968337962);
    msg.setSource(50755U);
    msg.setSourceEntity(206U);
    msg.setDestination(4269U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.300430998359);
    msg.setSource(20806U);
    msg.setSourceEntity(50U);
    msg.setDestination(14326U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.936025177407;
    msg.lon = 0.0406416030288;
    msg.z = 0.0643920660844;
    msg.z_units = 18U;
    msg.radius = 0.557090559804;
    msg.duration = 63644U;
    msg.speed = 0.173374637915;
    msg.speed_units = 28U;
    msg.custom.assign("CSPOVEYTTZXQMRXHITBVUHFNJOVIZGUCBDJQVIVNRFVNAUWMGXLMSGEMLVZIJRUOYLYOZYFEKNWECFVINXILJLKBKWXKMCKLABQZDERZGXQPPWKPUWSTTIQPGKQJUWHKPPTJ");

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
    msg.setTimeStamp(0.198771592324);
    msg.setSource(4849U);
    msg.setSourceEntity(166U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.712538194336;
    msg.lon = 0.972381303384;
    msg.z = 0.376278352565;
    msg.z_units = 25U;
    msg.radius = 0.753217741331;
    msg.duration = 800U;
    msg.speed = 0.196728756852;
    msg.speed_units = 3U;
    msg.custom.assign("MXACUVJUTUIPCOXQQ");

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
    msg.setTimeStamp(0.950247477582);
    msg.setSource(53723U);
    msg.setSourceEntity(86U);
    msg.setDestination(52516U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.631110187852;
    msg.lon = 0.486570987441;
    msg.z = 0.850278331251;
    msg.z_units = 84U;
    msg.radius = 0.849657691265;
    msg.duration = 30908U;
    msg.speed = 0.795807959289;
    msg.speed_units = 131U;
    msg.custom.assign("CCPFLABFZUEEAYBUVLPMTFNRLVNXZHAIAITWTKBHQRRZOKYNVUOIHRCPMUQOBXIRHHKMWJOMLXLJZFXLVWRYGDXOPFTWAISBTPXSAVVXVEQHBGTGLSTQ");

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
    msg.setTimeStamp(0.36860932944);
    msg.setSource(17827U);
    msg.setSourceEntity(174U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(95U);
    msg.timeout = 20008U;
    msg.flags = 80U;
    msg.lat = 0.859476823179;
    msg.lon = 0.468505477339;
    msg.start_z = 0.00918103232066;
    msg.start_z_units = 153U;
    msg.end_z = 0.254176670887;
    msg.end_z_units = 233U;
    msg.radius = 0.277109965732;
    msg.speed = 0.105771038386;
    msg.speed_units = 65U;
    msg.custom.assign("KRUNBNYXQDEXUBSQQXUBEBCHGEVWCMAMUVPNMRYWDXRJOWQKGNRAQOSTTQFSSSJWEZJIRLXLDIHHQOGWDOITWEBCMNJFHTUZBYVAOIPMPRZAGRMLXPGTBLZCEKVQDDZKVOKVLAFSSZHCONLVLECPDKXAFFEVFXWFSJDIFEVRVYZGJOTNNGDJHTXSOBR");

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
    msg.setTimeStamp(0.515413221309);
    msg.setSource(54397U);
    msg.setSourceEntity(162U);
    msg.setDestination(50947U);
    msg.setDestinationEntity(249U);
    msg.timeout = 27586U;
    msg.flags = 68U;
    msg.lat = 0.244881167047;
    msg.lon = 0.206039625103;
    msg.start_z = 0.708958606895;
    msg.start_z_units = 52U;
    msg.end_z = 0.418268118294;
    msg.end_z_units = 82U;
    msg.radius = 0.1167882629;
    msg.speed = 0.251994592406;
    msg.speed_units = 74U;
    msg.custom.assign("ZITIUZLCUDPLWYMAVEYRSEVLVZMJMRQFWEDBSNRTAPJOCSBMZDOUPNIKPPPVXFCHGRDNLHOTXGBSUUOJKRVBZMXUMSBQGQFACCAAEHDGSWLVCKFIYEMPYJ");

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
    msg.setTimeStamp(0.325622834887);
    msg.setSource(32043U);
    msg.setSourceEntity(158U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(17U);
    msg.timeout = 54455U;
    msg.flags = 224U;
    msg.lat = 0.448189568239;
    msg.lon = 0.614166787556;
    msg.start_z = 0.482736187199;
    msg.start_z_units = 95U;
    msg.end_z = 0.749454259616;
    msg.end_z_units = 144U;
    msg.radius = 0.272032858614;
    msg.speed = 0.0803371431596;
    msg.speed_units = 145U;
    msg.custom.assign("RIPSNDCGSLFAZAOQCEUKCZHYEZSIJYZKNYWCHIFVJRDOSBVQZYWNDQGQNJSFVIILZCMRRTVKKXLWGGVEQAPIHPSHYHLFQEXVMPUEHXBEGACMKXJBABOMJBFVDTPOLDBWQRLDKENVZFNQIPMTPSOUESAYHEJXRWMUTDNTTBRGZKCOWFBAXFYWKAWHBYLSHOGXENIKDJXNURRVZLYXMMTUTPMQFTCYWAGUUPWXCIJRUGGJM");

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
    msg.setTimeStamp(0.36653811102);
    msg.setSource(8604U);
    msg.setSourceEntity(96U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(106U);
    msg.timeout = 8129U;
    msg.lat = 0.94128557887;
    msg.lon = 0.0501275011907;
    msg.z = 0.705752757694;
    msg.z_units = 174U;
    msg.speed = 0.958817917378;
    msg.speed_units = 187U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.332060138351;
    tmp_msg_0.y = 0.371417038188;
    tmp_msg_0.z = 0.819490332965;
    tmp_msg_0.t = 0.485229957092;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VHXRUIYFOYCKVNKRHRAQTKZDGSWGKCBJPJOYPUOWYOBTAZCMOHUIKNIXGWDBFQQOJQUZCXHZLCLEERQYRWNWXGGHBXREIEPNUHFLQEYDOTUZXKASXIYPXBSQWVGKVUPVZDFSVLKPHJAFRPNFUGNXOORJASRMEDAIFMSMGIFNSLNDYTLCTWOVTTAICTKMDZUTABNXWWPFMMZYKDNEJMHDAHUYZVQBEGQFBJSV");

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
    msg.setTimeStamp(0.448238079122);
    msg.setSource(17518U);
    msg.setSourceEntity(113U);
    msg.setDestination(35649U);
    msg.setDestinationEntity(223U);
    msg.timeout = 17171U;
    msg.lat = 0.786507261728;
    msg.lon = 0.347334260815;
    msg.z = 0.151262763111;
    msg.z_units = 197U;
    msg.speed = 0.879372014929;
    msg.speed_units = 97U;
    msg.custom.assign("HXCPXCVIGKBBYDTHGDBKZKFREHKDYOOWTDJUOTORV");

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
    msg.setTimeStamp(0.145338109049);
    msg.setSource(35359U);
    msg.setSourceEntity(133U);
    msg.setDestination(35886U);
    msg.setDestinationEntity(32U);
    msg.timeout = 8281U;
    msg.lat = 0.450849099772;
    msg.lon = 0.887853632566;
    msg.z = 0.205926141885;
    msg.z_units = 25U;
    msg.speed = 0.162768890267;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.359876601671;
    tmp_msg_0.y = 0.49973657224;
    tmp_msg_0.z = 0.0344955234178;
    tmp_msg_0.t = 0.01125323241;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OBPGXYOHHNQFPINACBCYTFYHVEGYFQDMJFLQAQJNSIZVSSHLGJPFMWJRNCSJZAUBBDNYDYVQUEFRUMKXRGTCSHUBQEUDVUWQAHDMWGWTTLXYOZALBRSTOGAJZKYGGZETMODTXVWFJSVRWTMNKKRKFEPHPMZIMEXPBYVIDUOMLAPLAFUWZECXXRZBBKPVVIQCK");

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
    msg.setTimeStamp(0.89601857186);
    msg.setSource(63734U);
    msg.setSourceEntity(183U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(234U);
    msg.x = 0.87799154412;
    msg.y = 0.722341945123;
    msg.z = 0.316901398415;
    msg.t = 0.853854127121;

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
    msg.setTimeStamp(0.41310093379);
    msg.setSource(22221U);
    msg.setSourceEntity(202U);
    msg.setDestination(18621U);
    msg.setDestinationEntity(140U);
    msg.x = 0.61864910211;
    msg.y = 0.3040479099;
    msg.z = 0.244271052413;
    msg.t = 0.01604750268;

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
    msg.setTimeStamp(0.890001816869);
    msg.setSource(20520U);
    msg.setSourceEntity(81U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(137U);
    msg.x = 0.472112434334;
    msg.y = 0.247076337523;
    msg.z = 0.490944951322;
    msg.t = 0.503464946395;

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
    msg.setTimeStamp(0.138690267826);
    msg.setSource(48140U);
    msg.setSourceEntity(30U);
    msg.setDestination(25754U);
    msg.setDestinationEntity(158U);
    msg.timeout = 34481U;
    msg.name.assign("VFGXZGWJVCFZQZZURTJILWKCVCBOYYAZGEWIXBSNLSRCTUQWQMGDKCUMQHDYFVMHUOMYDUKRTTSMPHCEZSIKXLPVRXVROPLWDKKQVMWYFQUBNHQZDICOLVYNYZLFLOSLYTJDXIILODABYASWJJWOCNUAPYMJJPUPXAHAUEQFDHIPCKEVHBHCX");
    msg.custom.assign("PQUPFBLACIZHGTPBOMSEOEMMRDUTSCWXGNHQHKIZQXXDSZTUDWJSNVESIZNTLQMOGRBTAYFX");

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
    msg.setTimeStamp(0.0532812002912);
    msg.setSource(59887U);
    msg.setSourceEntity(157U);
    msg.setDestination(57755U);
    msg.setDestinationEntity(86U);
    msg.timeout = 49913U;
    msg.name.assign("EKJJZCDQUGSMAZYJOMPEOABEXIEFMCWGNSTVDITTYBFIQNKPOCKBLTVLUFKIPQZELHRYORXFQTPZIPFZABPGQLDPGYPLLDVNAYURQAMWGTWCHWHHENSHJEVVJXUXWGZNLYTFWVSILHIONAOKOHIRXYRXKGCQAWDDDOBLAXR");
    msg.custom.assign("AASOVDONGZEWDLFDFRKXSDTFIYBFGQSNJWUOYRXQXXLNTZUBYVTNBTXAHZUSCSLPWKZRCMKULYKPJVUIBFXSGGXVBGFXLMJWAHJAKNBBRPKEHGLOKPUCSOZGZDN");

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
    msg.setTimeStamp(0.693441909448);
    msg.setSource(9568U);
    msg.setSourceEntity(143U);
    msg.setDestination(20872U);
    msg.setDestinationEntity(145U);
    msg.timeout = 52357U;
    msg.name.assign("RBCVBPNCKZHZNGQUKCMBASJUGPWXQKWLDLGHYMRLPSYHOBPSGHGMOFCEHCVIJGEAQLREPGHTYFEOATXTRWNMLWDZONLITIXKEFPPXGNYZHHVDBIBIUJTANZILUDVMAD");
    msg.custom.assign("XMGFPCXXFJ");

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
    msg.setTimeStamp(0.553472198522);
    msg.setSource(59799U);
    msg.setSourceEntity(108U);
    msg.setDestination(42841U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.751194105544;
    msg.lon = 0.00310263590003;
    msg.z = 0.423381386316;
    msg.z_units = 37U;
    msg.speed = 0.750353171303;
    msg.speed_units = 204U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.69210293602;
    tmp_msg_0.y = 0.508813881042;
    tmp_msg_0.z = 0.227007313678;
    tmp_msg_0.t = 0.170617500917;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.221121068724;
    msg.custom.assign("XZQPUPSFWUBUJNIMHPFGSBMUVCGFILLABHBNFJIHDGXEXLGKXYZCQNFUQVDAEVSFAVQXSBELPTJNOWTOWKGFYZGUQVRQZBPTMRNQZYJOQUAMUBMDTTKLDDOVMJOHRRCODCCLSCCWILKRVEXKYBH");

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
    msg.setTimeStamp(0.582721568213);
    msg.setSource(11350U);
    msg.setSourceEntity(254U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.0283824808527;
    msg.lon = 0.940262311674;
    msg.z = 0.912256224606;
    msg.z_units = 55U;
    msg.speed = 0.9078865347;
    msg.speed_units = 141U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.879435052828;
    tmp_msg_0.y = 0.388876700722;
    tmp_msg_0.z = 0.912805464775;
    tmp_msg_0.t = 0.302685936372;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5081U;
    tmp_msg_1.off_x = 0.436198701987;
    tmp_msg_1.off_y = 0.32712064683;
    tmp_msg_1.off_z = 0.969244476027;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.848522950742;
    msg.custom.assign("GNKURSDLSZORQGTOVMEAKVFPGZLQZKXSMVIPTUFVZOSHTWVAYXGMKZUOMATWQKXKKQZWGPUMJINPJNHIWARIRADDOKCYYPGDBYOXOEPHEMVIHEFCTEBFNDOITBIWHDHFZQLXGQCDACCCTWCLIQPYUDJWTYPDIJEOMLSULUEYFRXBUJNZYFVRYXSTKKSFGEBMPVDSASBWQVBCSHXQRZHNAATPMJIJRBWGAJQCF");

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
    msg.setTimeStamp(0.997078421622);
    msg.setSource(41470U);
    msg.setSourceEntity(19U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.866774334934;
    msg.lon = 0.377330796329;
    msg.z = 0.955460180604;
    msg.z_units = 65U;
    msg.speed = 0.621458575716;
    msg.speed_units = 128U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41302U;
    tmp_msg_0.off_x = 0.644486137082;
    tmp_msg_0.off_y = 0.358627248913;
    tmp_msg_0.off_z = 0.613504036502;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.967762784298;
    msg.custom.assign("YWGEBLIYNNAMXUTULCDXBWUTFSBXRLMSXPLOOJTQFMLRHSKWNYWPWVAHSOBHJOQPGQTWZNSDKENLFSUPVLNDKRCMJATXRSMIDIDEXJBOEYWRZMRIAMNTNDVHSVSZCOGVYCQJHQOFFYMWJALFGAEUSDAJRGV");

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
    msg.setTimeStamp(0.0887889111174);
    msg.setSource(7470U);
    msg.setSourceEntity(124U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(51U);
    msg.vid = 2618U;
    msg.off_x = 0.128755679768;
    msg.off_y = 0.00662321534024;
    msg.off_z = 0.576935300261;

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
    msg.setTimeStamp(0.344946522128);
    msg.setSource(44833U);
    msg.setSourceEntity(176U);
    msg.setDestination(27566U);
    msg.setDestinationEntity(41U);
    msg.vid = 128U;
    msg.off_x = 0.684351875301;
    msg.off_y = 0.841360591451;
    msg.off_z = 0.47396988309;

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
    msg.setTimeStamp(0.136395332597);
    msg.setSource(59913U);
    msg.setSourceEntity(162U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(46U);
    msg.vid = 56854U;
    msg.off_x = 0.514348215716;
    msg.off_y = 0.265029270117;
    msg.off_z = 0.458504756072;

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
    msg.setTimeStamp(0.628439390873);
    msg.setSource(48469U);
    msg.setSourceEntity(224U);
    msg.setDestination(34221U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.0701229224644);
    msg.setSource(40705U);
    msg.setSourceEntity(133U);
    msg.setDestination(5759U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.292865793387);
    msg.setSource(23672U);
    msg.setSourceEntity(165U);
    msg.setDestination(10573U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.910763240712);
    msg.setSource(24101U);
    msg.setSourceEntity(150U);
    msg.setDestination(17955U);
    msg.setDestinationEntity(212U);
    msg.mid = 51003U;

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
    msg.setTimeStamp(0.381493164155);
    msg.setSource(7357U);
    msg.setSourceEntity(39U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(225U);
    msg.mid = 63697U;

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
    msg.setTimeStamp(0.552577880409);
    msg.setSource(59399U);
    msg.setSourceEntity(103U);
    msg.setDestination(54097U);
    msg.setDestinationEntity(34U);
    msg.mid = 15171U;

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
    msg.setTimeStamp(0.397790400032);
    msg.setSource(46992U);
    msg.setSourceEntity(192U);
    msg.setDestination(6824U);
    msg.setDestinationEntity(181U);
    msg.state = 162U;
    msg.eta = 25734U;
    msg.info.assign("SRJSKHMUGRUIGJMKONKNZUSABEKGYCASBDXZQDYEQWEXLOEGRRIZWZSKJTHOYLNLBNALQPOWFPEAUVYEIMXJNJCDPEBZOQBJVIVDHHPCLITCZVYKULTDADRISLFQDVWSIALWZQCCKPDPXFRAVNKVTHHHLIPHADYMWNN");

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
    msg.setTimeStamp(0.723628151822);
    msg.setSource(4820U);
    msg.setSourceEntity(145U);
    msg.setDestination(10150U);
    msg.setDestinationEntity(32U);
    msg.state = 213U;
    msg.eta = 38899U;
    msg.info.assign("HNCBCPOEWMLEZOCKJMTZCRMJMPORSLIHKPASWSGVVADGRYTURYBRFKKTUMLBDPJYTEOJQRZNYFAYGPIWLVQIFFEKBOHCYJLBRNYAXNUCSNZAVLXBEAWPWDLZIXUWZIBGCWZVHEVKOSDWIFAQFBJQRYCXGFGSJPZEJYQTDIHLBTKCEWOUONNCNVLDXHPQXAGERKSDJVPKZQQFNHRGOXUILDTGSEMQSTTNAHUHXSMZMWU");

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
    msg.setTimeStamp(0.25958599371);
    msg.setSource(20502U);
    msg.setSourceEntity(42U);
    msg.setDestination(25194U);
    msg.setDestinationEntity(202U);
    msg.state = 232U;
    msg.eta = 30356U;
    msg.info.assign("UOHJYROPTNEXAIYCQGYKYZYMVEDTPCSNATCIKKHPSQWIINXDQETNUWFOHTPHOJVRPBCNROXQAZIQKLBOKVVXEWJONMBSFZAQMBIWIODTSZNKLSGEDHQYAFBLJPRZBMZIWWWCYWXGRGXDUOYBAJULZUMUKEEMLEZRUYGIBPKFLGHTFHCGHSVSNFMQCVXSJCGMFBAUSRCVDTZKJITEPXAXRDFVWVRUJNFAGNOLLDYZWHHRJLFSKMQDCJBX");

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
    msg.setTimeStamp(0.822686321399);
    msg.setSource(17481U);
    msg.setSourceEntity(60U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(144U);
    msg.system = 7048U;
    msg.duration = 63594U;
    msg.speed = 0.60081367702;
    msg.speed_units = 207U;
    msg.x = 0.799825188579;
    msg.y = 0.229263138778;
    msg.z = 0.778416487616;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.71532459158);
    msg.setSource(41899U);
    msg.setSourceEntity(148U);
    msg.setDestination(12383U);
    msg.setDestinationEntity(40U);
    msg.system = 28455U;
    msg.duration = 57470U;
    msg.speed = 0.500436553622;
    msg.speed_units = 152U;
    msg.x = 0.583163053895;
    msg.y = 0.364454230222;
    msg.z = 0.609888875711;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.776394700931);
    msg.setSource(62947U);
    msg.setSourceEntity(92U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(160U);
    msg.system = 36859U;
    msg.duration = 5214U;
    msg.speed = 0.911808627819;
    msg.speed_units = 116U;
    msg.x = 0.516616545742;
    msg.y = 0.410814281095;
    msg.z = 0.653572427263;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.495331143761);
    msg.setSource(9384U);
    msg.setSourceEntity(51U);
    msg.setDestination(4775U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.392370679444;
    msg.lon = 0.818544056314;
    msg.speed = 0.488730902492;
    msg.speed_units = 49U;
    msg.duration = 52950U;
    msg.sys_a = 6253U;
    msg.sys_b = 25086U;
    msg.move_threshold = 0.721197666622;

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
    msg.setTimeStamp(0.70880974489);
    msg.setSource(37009U);
    msg.setSourceEntity(84U);
    msg.setDestination(59466U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.416254685538;
    msg.lon = 0.628488251059;
    msg.speed = 0.0946089935886;
    msg.speed_units = 164U;
    msg.duration = 30806U;
    msg.sys_a = 45168U;
    msg.sys_b = 47988U;
    msg.move_threshold = 0.893513215499;

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
    msg.setTimeStamp(0.608795912293);
    msg.setSource(25615U);
    msg.setSourceEntity(206U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.589638143535;
    msg.lon = 0.629074803922;
    msg.speed = 0.202940229685;
    msg.speed_units = 208U;
    msg.duration = 34712U;
    msg.sys_a = 844U;
    msg.sys_b = 27487U;
    msg.move_threshold = 0.898484038316;

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
    msg.setTimeStamp(0.665468495048);
    msg.setSource(50027U);
    msg.setSourceEntity(16U);
    msg.setDestination(62981U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.658130717836;
    msg.lon = 0.505462837945;
    msg.z = 0.221870707035;
    msg.z_units = 113U;
    msg.speed = 0.740842156832;
    msg.speed_units = 101U;
    msg.custom.assign("FDSRHOYWGVSGRAYRLHFUONDGIABZTTLAOPIMRBVLDVZKEOLBYNXWCZFQISQDUVPKIX");

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
    msg.setTimeStamp(0.471704567163);
    msg.setSource(62892U);
    msg.setSourceEntity(0U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.430041665672;
    msg.lon = 0.643220649182;
    msg.z = 0.580264208907;
    msg.z_units = 120U;
    msg.speed = 0.463819979287;
    msg.speed_units = 185U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.712131147882;
    tmp_msg_0.lon = 0.0992119093558;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LUVURRWDCGHLINGCOHHPFFOKCNDZQZTRBJIWCCSZPGMAZSBSYTNDYALFJIKRNCCMBYYFTGHQFDVMQMCQHJ");

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
    msg.setTimeStamp(0.686001215235);
    msg.setSource(17421U);
    msg.setSourceEntity(217U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.238632788766;
    msg.lon = 0.330665226667;
    msg.z = 0.875041267481;
    msg.z_units = 126U;
    msg.speed = 0.595576089012;
    msg.speed_units = 66U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.678738376244;
    tmp_msg_0.lon = 0.44153523386;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QUJLBHEPBEYFAXIFFNXPSUWPMFMHGLJKLNLFIKSJEZBOCRPILENRCJZMWLAYC");

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
    msg.setTimeStamp(0.523643458645);
    msg.setSource(36186U);
    msg.setSourceEntity(224U);
    msg.setDestination(52318U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.642562790212;
    msg.lon = 0.983423428107;

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
    msg.setTimeStamp(0.58300217175);
    msg.setSource(43276U);
    msg.setSourceEntity(157U);
    msg.setDestination(33929U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.480522190566;
    msg.lon = 0.378379266605;

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
    msg.setTimeStamp(0.157316349434);
    msg.setSource(6065U);
    msg.setSourceEntity(198U);
    msg.setDestination(4109U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.155877283562;
    msg.lon = 0.606015598833;

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
    msg.setTimeStamp(0.309680691666);
    msg.setSource(47188U);
    msg.setSourceEntity(235U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(78U);
    msg.timeout = 59629U;
    msg.lat = 0.510871112293;
    msg.lon = 0.824366228174;
    msg.z = 0.18046396373;
    msg.z_units = 153U;
    msg.pitch = 0.716484775542;
    msg.amplitude = 0.192905320581;
    msg.duration = 45764U;
    msg.speed = 0.501971614408;
    msg.speed_units = 254U;
    msg.radius = 0.486836341413;
    msg.direction = 158U;
    msg.custom.assign("CZFHOXEVCRGRCLANPUVVVCCIYCBRPEYEAGMXOOYABFOTWSJYPYUJSWUDSNOUHXBFNRNMLZDBMKGLZRZTTWSIRDHOQSPLNIRYQBTTFPPJ");

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
    msg.setTimeStamp(0.634672106726);
    msg.setSource(13703U);
    msg.setSourceEntity(20U);
    msg.setDestination(26572U);
    msg.setDestinationEntity(220U);
    msg.timeout = 1549U;
    msg.lat = 0.151995237711;
    msg.lon = 0.296379211167;
    msg.z = 0.845198972626;
    msg.z_units = 199U;
    msg.pitch = 0.120575463992;
    msg.amplitude = 0.171355360374;
    msg.duration = 54182U;
    msg.speed = 0.41594868761;
    msg.speed_units = 41U;
    msg.radius = 0.714182571831;
    msg.direction = 127U;
    msg.custom.assign("YKVVZTMNURFPEVIWY");

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
    msg.setTimeStamp(0.366792412865);
    msg.setSource(45221U);
    msg.setSourceEntity(90U);
    msg.setDestination(44696U);
    msg.setDestinationEntity(146U);
    msg.timeout = 11412U;
    msg.lat = 0.482967102588;
    msg.lon = 0.37819684195;
    msg.z = 0.167463030205;
    msg.z_units = 179U;
    msg.pitch = 0.98388716423;
    msg.amplitude = 0.836720124412;
    msg.duration = 39714U;
    msg.speed = 0.335757527925;
    msg.speed_units = 241U;
    msg.radius = 0.166026559361;
    msg.direction = 169U;
    msg.custom.assign("REHXBVUTFKYWKJLAAFQGHVAPQOYWXMOSRNXHWMSUPHSZNVMSTZHUWIITVMULUSLCOBGFGDFVZKZPYDCEMTX");

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
    msg.setTimeStamp(0.729225827973);
    msg.setSource(26361U);
    msg.setSourceEntity(118U);
    msg.setDestination(54525U);
    msg.setDestinationEntity(163U);
    msg.formation_name.assign("IXBOJYWIRZKXJJCTFSGNXQTMUSRRUOEDSGAOFGMDJUAIOUEOLRARDDJKASCGAPMZUWFVPRNWCKLRHWDHCSQUCHYOIGKXKVSDDX");
    msg.reference_frame = 134U;
    msg.custom.assign("ULDEJLFEDPNIZNEIQARVXFSWQUVHZOSXWEOKCQUYBJDUNYHIPSQRLZINPWBKRSBMEPCGVXZKWQO");

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
    msg.setTimeStamp(0.534824859851);
    msg.setSource(45795U);
    msg.setSourceEntity(145U);
    msg.setDestination(18616U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("TANYIYPXOYCTESPGZFWCZBQSTLGKMXEVDDUDLBHDAUWGUYNECOSIPUTKHCQXVOGBGRPJCZISKNPGVDFRQRHSYIMYWGMJTLOKOZMHAGBCFYHLWMVQYOPZSOCIXBEUYEWUWQDGKSQKMDXZRZFEJFOGLISVZKHLXMRPQONXNHFIVJJM");
    msg.reference_frame = 121U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38908U;
    tmp_msg_0.off_x = 0.275623699599;
    tmp_msg_0.off_y = 0.199331561724;
    tmp_msg_0.off_z = 0.238472724137;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UIZNZDBAGKDVGWQBOIBLCE");

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
    msg.setTimeStamp(0.666901741585);
    msg.setSource(7420U);
    msg.setSourceEntity(228U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(202U);
    msg.formation_name.assign("CERWTIOIWCVHXOHRJZGMENMDWQRLZNBCZEHFATBHEZXZDDOIQTYHYAJVRPXPBBNULVFRWGYNIKUBJFTXVMKHOFSNYPXDPNMQE");
    msg.reference_frame = 89U;
    msg.custom.assign("BSBJCEQKCGEDLRYIFJGYAMVNRLTLRJZPRF");

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
    msg.setTimeStamp(0.281348417614);
    msg.setSource(21619U);
    msg.setSourceEntity(170U);
    msg.setDestination(35762U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("DDQFBUDYTCYUVRJMHRULEJTSJPSLTUSHIHGKFNSLEGAIQKCSKZKTSFEWKJNWVXBDREOSANOQMOVSWGRCMJAPTCPVYWMBJCOFHHIZXETPKLZUBMYEFMXABIWLLGPHDPMPNAXDGQDOGADWXGTAVJCVZNOYFUQTRNSXWCQFODUGTISLKR");
    msg.formation_name.assign("JVNUNRPRRIOJGHALITNWHYKFSFEYNSQMEIZZVQUASQXBKXYRKKKXMDJDYOVGXXSJKIWFWBPDLLZLHDQCBUBLAMPULACUEQZNEIHWGZUTJUOZHBJTFKGWWXMNKVDMMZTSKSSPMBERRYOLYGVMGYRQGRSJ");
    msg.plan_id.assign("TBIYDHBTNXOEWANNXJDFKJGNQLTDXECFFTJHFYSWEFVAXKFQIDZANAJJXYDTWBBCSQK");
    msg.description.assign("ZMQDCVJEWXZRNFPTYPQEOJWHCOMHIAYGZTJOHDKJVFJTUHIXPPXNXCEJDUZQBPATVSEILGLDUYJJSNQTNIQAZUDGGZQGQSAYPVSFWMGFNYVMWJKAWVIDB");
    msg.leader_speed = 0.771085917647;
    msg.leader_bank_lim = 0.75844821132;
    msg.pos_sim_err_lim = 0.26987047866;
    msg.pos_sim_err_wrn = 0.602007536937;
    msg.pos_sim_err_timeout = 6666U;
    msg.converg_max = 0.273856210475;
    msg.converg_timeout = 64357U;
    msg.comms_timeout = 60213U;
    msg.turb_lim = 0.788646958328;
    msg.custom.assign("HIIPRKSAVYFPEDPZUUMFLEWEVRNKTLOBCMOVAXUFVMCATXYGGWLMUTUXDFLLFWCYSBRQMMKRDEBQPFBOHEATJSUHSHIQKNIGNSCDWNOWCANAOVZEOJZGVQSTSPISMQZMKZQGAJVFPILQWYNOGAPIITNFTNORCTGQEDJVGDXXZRBPJXEXKYKKWNSKDZLHRAFNMEYCYERWBQVLKZWJULGBVZCMDIJULCQHXUCPFDTGYHAPTIDBZJ");

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
    msg.setTimeStamp(0.382302332119);
    msg.setSource(14977U);
    msg.setSourceEntity(187U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("MLAOIEJCXSIBTWBIPJRILRJXYVYKQTWPNKUFNGMTPRAMWIWCVRDQUERNQNABUFMOBVNPHKSZQMBLBYXKEFOAEPASZDUBSFFZGMLMXINFIKSVZPJEFGRDOLNVZYCBYCHOEVOWMHTLJQRXEDEMWSCXSZXRE");
    msg.formation_name.assign("WGLNFPSKDATLWOMQUXZUPARFYMSHXMAJHFHHFRFBQMEMJGIJWDKOCVUHJQGJGIIPTCGMVVYTQRNZWGYZAIXLCRVEVPHUMZLPEFBIKEBVGOOSDYFWZVCKEEYXIDAQLYSUBRNUNPWTEWWCQUHEXAEKCCKISQRDTGRMXLEUTWJSYDCVIMAUKDLSXGFRDYBGLOBOKPTCBFJSDZHFBNXSYJRWYRDBBPHAJKLNJPTMOKZA");
    msg.plan_id.assign("OYUFKQFFPEAUOQXVIRELSGXKBVVFVCSEBOTPEMKAQQLWIJT");
    msg.description.assign("CGBCQOHNXOJCISMJADOTRWUWBYSORRUHQGLHEJXCLHXMKCLFTEY");
    msg.leader_speed = 0.849280573255;
    msg.leader_bank_lim = 0.0275175824514;
    msg.pos_sim_err_lim = 0.104945107658;
    msg.pos_sim_err_wrn = 0.495732135283;
    msg.pos_sim_err_timeout = 45383U;
    msg.converg_max = 0.514508121641;
    msg.converg_timeout = 2656U;
    msg.comms_timeout = 21613U;
    msg.turb_lim = 0.907604165861;
    msg.custom.assign("BLPHUDFGMTUFSNQSVTTVVCANJXPKEYIIEWSQIHJIKBYGYKTVSQLELFKQJMPRKFKOORFPZHJNXCDUQXRH");

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
    msg.setTimeStamp(0.546397617026);
    msg.setSource(18408U);
    msg.setSourceEntity(161U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("LGWCYNWVBONUTZKGAIFWDFKIGPCUOSFVFFWSAFHLJNZZSWHPTDFKCGKAYVSQ");
    msg.formation_name.assign("OIUXCAOTAWMAMTXYTKREJEVVNTZKTLUCSOELWFSWLWBXHQYTMGEHDBBKADVEAQKLYGNGWZFMIUFKPDWQTWBSGFLSSFWASZLQKZNNQYECPUHFSBJYOSCAJDCCQZYRZEBDVIEVOPRMQJUFUDSTHLRHIXMDAWHPJUGVJMHDZGWZRCUJINPOYOIJKEIOMUFP");
    msg.plan_id.assign("YJOOSVXKQXZVEQEETTZFRCLZPTWHPPKUSYIFIHTMKFINZRCZZNYBRDDPQYJBQIWXBHSRAOPLFQGTKAGJFJMSCCGMSTDUVOHCQMKDCRPXWTILLVVDAA");
    msg.description.assign("EVNRPAHDHBZCXSEYWFWDVTOJFNOGNTJGDUIIJDOWVRTYLFBV");
    msg.leader_speed = 0.128716544076;
    msg.leader_bank_lim = 0.15262149993;
    msg.pos_sim_err_lim = 0.648467504719;
    msg.pos_sim_err_wrn = 0.981125784357;
    msg.pos_sim_err_timeout = 31278U;
    msg.converg_max = 0.191437222784;
    msg.converg_timeout = 35709U;
    msg.comms_timeout = 19513U;
    msg.turb_lim = 0.246569715479;
    msg.custom.assign("DCHDEUSMVVXLSCMOWZRXCNWXLNMEYSALRNLUYWTUWYFFAVSPKMAQLPUFHZFIUETILMTKHWIVQRNSINECSHVCWLOVWRPGEGJUGIJGGBUXYJOAMOHPWYFXGAKLJYMEPPDKKYXSVR");

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
    msg.setTimeStamp(0.564611975701);
    msg.setSource(18945U);
    msg.setSourceEntity(37U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(56U);
    msg.control_src = 28515U;
    msg.control_ent = 31U;
    msg.timeout = 0.361365354024;
    msg.loiter_radius = 0.287683395969;
    msg.altitude_interval = 0.97084526816;

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
    msg.setTimeStamp(0.448914199025);
    msg.setSource(20116U);
    msg.setSourceEntity(158U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(146U);
    msg.control_src = 56143U;
    msg.control_ent = 144U;
    msg.timeout = 0.20948396568;
    msg.loiter_radius = 0.0391388590187;
    msg.altitude_interval = 0.462084606098;

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
    msg.setTimeStamp(0.0394193744997);
    msg.setSource(30115U);
    msg.setSourceEntity(101U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(8U);
    msg.control_src = 36676U;
    msg.control_ent = 110U;
    msg.timeout = 0.989276874868;
    msg.loiter_radius = 0.751460947825;
    msg.altitude_interval = 0.43529772474;

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
    msg.setTimeStamp(0.0479353413393);
    msg.setSource(27169U);
    msg.setSourceEntity(71U);
    msg.setDestination(31695U);
    msg.setDestinationEntity(133U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.53454544748;
    tmp_msg_0.speed_units = 157U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.38519957198;
    tmp_msg_1.z_units = 91U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.952802974132;
    msg.lon = 0.913946697463;
    msg.radius = 0.292903467614;

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
    msg.setTimeStamp(0.37203030865);
    msg.setSource(32903U);
    msg.setSourceEntity(173U);
    msg.setDestination(56962U);
    msg.setDestinationEntity(94U);
    msg.flags = 157U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.143434206524;
    tmp_msg_0.speed_units = 218U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.431491735005;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.781223047496;
    msg.lon = 0.615269688459;
    msg.radius = 0.320008326758;

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
    msg.setTimeStamp(0.103491818615);
    msg.setSource(50221U);
    msg.setSourceEntity(159U);
    msg.setDestination(29264U);
    msg.setDestinationEntity(237U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.401700603;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.387085777701;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.776246697165;
    msg.lon = 0.221406930465;
    msg.radius = 0.498038013633;

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
    msg.setTimeStamp(0.671781351053);
    msg.setSource(49323U);
    msg.setSourceEntity(139U);
    msg.setDestination(43596U);
    msg.setDestinationEntity(51U);
    msg.control_src = 12511U;
    msg.control_ent = 149U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 181U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.814025066456;
    tmp_tmp_msg_0_0.speed_units = 223U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.469340528108;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.908181715955;
    tmp_msg_0.lon = 0.446669352976;
    tmp_msg_0.radius = 0.396711382363;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 39U;

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
    msg.setTimeStamp(0.229940549858);
    msg.setSource(29499U);
    msg.setSourceEntity(2U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(57U);
    msg.control_src = 7315U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 149U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.532362694753;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.547272213524;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33014677541;
    tmp_msg_0.lon = 0.142939811437;
    tmp_msg_0.radius = 0.457296636005;
    msg.reference.set(tmp_msg_0);
    msg.state = 186U;
    msg.proximity = 18U;

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
    msg.setTimeStamp(0.959850635208);
    msg.setSource(63620U);
    msg.setSourceEntity(64U);
    msg.setDestination(45178U);
    msg.setDestinationEntity(49U);
    msg.control_src = 26608U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 12U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0603860028769;
    tmp_tmp_msg_0_0.speed_units = 71U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.411341494351;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.981978662433;
    tmp_msg_0.lon = 0.463760735589;
    tmp_msg_0.radius = 0.688367290904;
    msg.reference.set(tmp_msg_0);
    msg.state = 139U;
    msg.proximity = 117U;

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
    msg.setTimeStamp(0.741624166265);
    msg.setSource(60941U);
    msg.setSourceEntity(236U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(133U);
    msg.ax_cmd = 0.529481362279;
    msg.ay_cmd = 0.356387768351;
    msg.az_cmd = 0.325711707668;
    msg.ax_des = 0.206827100968;
    msg.ay_des = 0.382902696577;
    msg.az_des = 0.538345087835;
    msg.virt_err_x = 0.828318885877;
    msg.virt_err_y = 0.906449922322;
    msg.virt_err_z = 0.346618102992;
    msg.surf_fdbk_x = 0.39359841876;
    msg.surf_fdbk_y = 0.263059154391;
    msg.surf_fdbk_z = 0.204868488513;
    msg.surf_unkn_x = 0.65839951829;
    msg.surf_unkn_y = 0.973816864809;
    msg.surf_unkn_z = 0.946304122173;
    msg.ss_x = 0.355724525026;
    msg.ss_y = 0.00598703860444;
    msg.ss_z = 0.09913253268;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CSDVUSADPVFEVAOJAIOYOR");
    tmp_msg_0.dist = 0.720272889575;
    tmp_msg_0.err = 0.106615558802;
    tmp_msg_0.ctrl_imp = 0.157072743885;
    tmp_msg_0.rel_dir_x = 0.378503922783;
    tmp_msg_0.rel_dir_y = 0.557075297381;
    tmp_msg_0.rel_dir_z = 0.606342757832;
    tmp_msg_0.err_x = 0.935674272528;
    tmp_msg_0.err_y = 0.633428346481;
    tmp_msg_0.err_z = 0.533080167006;
    tmp_msg_0.rf_err_x = 0.523385331225;
    tmp_msg_0.rf_err_y = 0.886666033451;
    tmp_msg_0.rf_err_z = 0.24097106712;
    tmp_msg_0.rf_err_vx = 0.619806194884;
    tmp_msg_0.rf_err_vy = 0.469580192435;
    tmp_msg_0.rf_err_vz = 0.92601700669;
    tmp_msg_0.ss_x = 0.432275483952;
    tmp_msg_0.ss_y = 0.665571513057;
    tmp_msg_0.ss_z = 0.67207916968;
    tmp_msg_0.virt_err_x = 0.590528401655;
    tmp_msg_0.virt_err_y = 0.79261890971;
    tmp_msg_0.virt_err_z = 0.4000733397;
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
    msg.setTimeStamp(0.230770933062);
    msg.setSource(55002U);
    msg.setSourceEntity(13U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(46U);
    msg.ax_cmd = 0.573692636347;
    msg.ay_cmd = 0.822273290681;
    msg.az_cmd = 0.777744051353;
    msg.ax_des = 0.953274810374;
    msg.ay_des = 0.0103203999345;
    msg.az_des = 0.891795980204;
    msg.virt_err_x = 0.834082258523;
    msg.virt_err_y = 0.560277996806;
    msg.virt_err_z = 0.258253310603;
    msg.surf_fdbk_x = 0.862516581646;
    msg.surf_fdbk_y = 0.933650116944;
    msg.surf_fdbk_z = 0.380337604974;
    msg.surf_unkn_x = 0.118761318367;
    msg.surf_unkn_y = 0.617117110859;
    msg.surf_unkn_z = 0.262262677171;
    msg.ss_x = 0.575168143277;
    msg.ss_y = 0.857621826326;
    msg.ss_z = 0.0036919723001;

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
    msg.setTimeStamp(0.03260211946);
    msg.setSource(34663U);
    msg.setSourceEntity(4U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(95U);
    msg.ax_cmd = 0.579067979505;
    msg.ay_cmd = 0.749325696989;
    msg.az_cmd = 0.0822039654198;
    msg.ax_des = 0.591131491487;
    msg.ay_des = 0.82327312399;
    msg.az_des = 0.803800261875;
    msg.virt_err_x = 0.536856025432;
    msg.virt_err_y = 0.537618544205;
    msg.virt_err_z = 0.359112479766;
    msg.surf_fdbk_x = 0.191353398393;
    msg.surf_fdbk_y = 0.455842611417;
    msg.surf_fdbk_z = 0.871930647279;
    msg.surf_unkn_x = 0.321527873363;
    msg.surf_unkn_y = 0.630586255948;
    msg.surf_unkn_z = 0.707555643034;
    msg.ss_x = 0.357246598537;
    msg.ss_y = 0.81418649292;
    msg.ss_z = 0.263190288676;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KIWTFNXXDUUBKBBNXGVFATIPBIBZHLTCTESUZEEGPXQVJCKTNRNQKONQMDUDLLCRRSEVJAQKPQDQCTTYWHNIPVZFDOJRYFPJXZVRMHXLJIISOLSGYTBZIVUINVSJAYRMNMDXJBUMSPGLMUDJFHHEOCZJAVMTEOAIOFKNZSCSRZDSYOY");
    tmp_msg_0.dist = 0.116336127838;
    tmp_msg_0.err = 0.0499102911301;
    tmp_msg_0.ctrl_imp = 0.678714410432;
    tmp_msg_0.rel_dir_x = 0.509939361814;
    tmp_msg_0.rel_dir_y = 0.586538208706;
    tmp_msg_0.rel_dir_z = 0.0791431814119;
    tmp_msg_0.err_x = 0.338599582419;
    tmp_msg_0.err_y = 0.462826214808;
    tmp_msg_0.err_z = 0.874951535345;
    tmp_msg_0.rf_err_x = 0.552668609202;
    tmp_msg_0.rf_err_y = 0.294001581023;
    tmp_msg_0.rf_err_z = 0.91346036837;
    tmp_msg_0.rf_err_vx = 0.277973227666;
    tmp_msg_0.rf_err_vy = 0.185719785689;
    tmp_msg_0.rf_err_vz = 0.722343708585;
    tmp_msg_0.ss_x = 0.228385963539;
    tmp_msg_0.ss_y = 0.81496007842;
    tmp_msg_0.ss_z = 0.0757785275113;
    tmp_msg_0.virt_err_x = 0.747906216322;
    tmp_msg_0.virt_err_y = 0.739480109676;
    tmp_msg_0.virt_err_z = 0.689565381671;
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
    msg.setTimeStamp(0.112841513947);
    msg.setSource(39577U);
    msg.setSourceEntity(11U);
    msg.setDestination(52271U);
    msg.setDestinationEntity(36U);
    msg.s_id.assign("VMHLHREALZBRQOXVSRSQTSYRJUHRICTSFQBIWJXRYBEJESZFILNADXIMIVACIGJEDUVFNAFITQHMKBNKOVTQCSJPRUMLQZARHLPYPAIKBFOGPPNJMGDIEGDCQZYWXMCJO");
    msg.dist = 0.422170302459;
    msg.err = 0.727710515714;
    msg.ctrl_imp = 0.928868928235;
    msg.rel_dir_x = 0.348193991855;
    msg.rel_dir_y = 0.579377247775;
    msg.rel_dir_z = 0.848110983729;
    msg.err_x = 0.323019945456;
    msg.err_y = 0.558562128166;
    msg.err_z = 0.573901086571;
    msg.rf_err_x = 0.659357605141;
    msg.rf_err_y = 0.383755250758;
    msg.rf_err_z = 0.414389731582;
    msg.rf_err_vx = 0.884204865823;
    msg.rf_err_vy = 0.507534062055;
    msg.rf_err_vz = 0.203744878725;
    msg.ss_x = 0.187361735717;
    msg.ss_y = 0.435140409954;
    msg.ss_z = 0.820402228663;
    msg.virt_err_x = 0.477980647255;
    msg.virt_err_y = 0.267381271444;
    msg.virt_err_z = 0.587093453887;

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
    msg.setTimeStamp(0.370028848801);
    msg.setSource(33783U);
    msg.setSourceEntity(93U);
    msg.setDestination(48576U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("AIAKDJEGGWMDRTPNYSWQNSBCDXPBMIZBLBQJOHYLQKDLGUCJCPARNWZPCJKKIZEORNOTIFVNKOLUAANIJBJWIFOYXMYVRHFMUCUPYTMZSHKXOHOGLVBWGPXRQVFQLRKTFWDZPTQMGXLPXKIOGVSXQAJUTKZYNSVCSRGLQLOYTZMWHCTBCVENDVEMEWITSAJIRKREZEDYDNEHPMYSUANVUHFCOLEZMXJCGRB");
    msg.dist = 0.254541743377;
    msg.err = 0.107883324221;
    msg.ctrl_imp = 0.0250519889261;
    msg.rel_dir_x = 0.953233190504;
    msg.rel_dir_y = 0.908752726393;
    msg.rel_dir_z = 0.0023070895597;
    msg.err_x = 0.770505826441;
    msg.err_y = 0.81526906826;
    msg.err_z = 0.516797651343;
    msg.rf_err_x = 0.594226734167;
    msg.rf_err_y = 0.653259256534;
    msg.rf_err_z = 0.232084807106;
    msg.rf_err_vx = 0.400188970139;
    msg.rf_err_vy = 0.808188786732;
    msg.rf_err_vz = 0.138374174758;
    msg.ss_x = 0.909252768592;
    msg.ss_y = 0.145078684607;
    msg.ss_z = 0.841371755401;
    msg.virt_err_x = 0.362532010102;
    msg.virt_err_y = 0.061615162889;
    msg.virt_err_z = 0.162713831582;

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
    msg.setTimeStamp(0.62959229579);
    msg.setSource(22912U);
    msg.setSourceEntity(26U);
    msg.setDestination(145U);
    msg.setDestinationEntity(186U);
    msg.s_id.assign("ZWUBSENWHNEPLDKMIMKQCIYEZYUSHCNHJUPGNTMJHUTYFBOAVZCDVNFPGOELJCMOVLZXGMLJVXTKDKSQGGORRBZPKDTZWUXMAXIUBETGFKICCMFHYBZHVQAHQKAXATLNIADCLAKBJZOGSROVXAYXQLWSERPGPUWNRSQSUYNFDQWWDEXVUBFPFRBMVCDADKRBXJVAJTIQGIPKSPHMQOJZLWYLHLJPIOSHUYXBNFGEIMJ");
    msg.dist = 0.0748324817046;
    msg.err = 0.530964290158;
    msg.ctrl_imp = 0.454528643003;
    msg.rel_dir_x = 0.706353028782;
    msg.rel_dir_y = 0.487116382471;
    msg.rel_dir_z = 0.316266550968;
    msg.err_x = 0.370011485647;
    msg.err_y = 0.480290039022;
    msg.err_z = 0.438968598001;
    msg.rf_err_x = 0.0353224654381;
    msg.rf_err_y = 0.468610217107;
    msg.rf_err_z = 0.839954646887;
    msg.rf_err_vx = 0.0643023775161;
    msg.rf_err_vy = 0.278727552263;
    msg.rf_err_vz = 0.175274285589;
    msg.ss_x = 0.423827770678;
    msg.ss_y = 0.518225541364;
    msg.ss_z = 0.544554312551;
    msg.virt_err_x = 0.788402554112;
    msg.virt_err_y = 0.0680553543218;
    msg.virt_err_z = 0.67003618411;

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
    msg.setTimeStamp(0.984402984695);
    msg.setSource(57647U);
    msg.setSourceEntity(77U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(20U);
    msg.timeout = 43983U;
    msg.rpm = 0.219069627872;
    msg.direction = 128U;
    msg.custom.assign("CKWNTOWCIQZUMGUXCHKSHTPJYHLRYXEJFPGJKBFDFGBNDATBZQREKDABPJWCRRSNIHPFEOGYFHXZTTRZFENPEHCYXFPRNSCOZJVEFWLCWHLHNIXPUTSTAXBQADRIKLYJMYOILEOVQTQAUDDVFMLBSURJKUVPGAOUAIVXLPGXXKZDOGYIYZLNQNNUCVEOMGWHSVCQBMLOWYDKTYF");

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
    msg.setTimeStamp(0.436556682126);
    msg.setSource(33888U);
    msg.setSourceEntity(122U);
    msg.setDestination(45495U);
    msg.setDestinationEntity(18U);
    msg.timeout = 33472U;
    msg.rpm = 0.66271159072;
    msg.direction = 221U;
    msg.custom.assign("LZNJJEKXBQEDRAHXGUATIYVGEEEXHZLROUVBDSPFDHVJAEFPTJXBRUMOCJRE");

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
    msg.setTimeStamp(0.384756365608);
    msg.setSource(39369U);
    msg.setSourceEntity(77U);
    msg.setDestination(31469U);
    msg.setDestinationEntity(161U);
    msg.timeout = 28575U;
    msg.rpm = 0.818973246555;
    msg.direction = 106U;
    msg.custom.assign("ZZQBTXQNAPSWTEGEBGNWSVDAUAASBSYJPZFKRWXFSDCVAWFWOXFLEJXVEWACAEPNCQVOFIQURROINFYUTYANKDXIK");

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
    msg.setTimeStamp(0.939546689595);
    msg.setSource(21839U);
    msg.setSourceEntity(43U);
    msg.setDestination(46892U);
    msg.setDestinationEntity(65U);
    msg.formation_name.assign("BTXDOQETTUIGBLXULSYUJVASJLNEKSPMXJBJKAFRDCLTXBLGXETRRQRNFFANSEDJAPURGGHAGCKGMEPFQXTLGKBCZSSIZVDUWDMCQOIOBEOWWACPKWYMKRZMMGOHNYND");
    msg.type = 235U;
    msg.op = 61U;
    msg.group_name.assign("ZBLYYHHDZFPDDPWEUXNVASYAOGTDGUTZCXRMCQPRKUIDSUIMTZPJNAKSHGDKEJRFBIKNBVSQCEVATCDZQWGDBINQAFMVKKKOMHLPKMV");
    msg.plan_id.assign("SFCTJETTBYORWMXCPNGIQWHMXNFPPJLKVFBVDUWUPNJMTBZOVDZJHRQASGXIFDKNPMJYLVRTZXJDSIEHNP");
    msg.description.assign("JDUNUVCGOAEQUBZYAHWIVVOZBLMJESBEFDYCXKLHRBZYXRWWJLHNSLAVVFNOJMNDFPIQFXETKNMJEVWKGIOWGRQZBQLKORHGXGMIVGGCCCHUNLACHFPSRIXUDC");
    msg.reference_frame = 59U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59587U;
    tmp_msg_0.off_x = 0.0881102658706;
    tmp_msg_0.off_y = 0.473851646198;
    tmp_msg_0.off_z = 0.0849230864741;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.805039729808;
    msg.leader_speed_min = 0.912370881204;
    msg.leader_speed_max = 0.698509936151;
    msg.leader_alt_min = 0.807568679897;
    msg.leader_alt_max = 0.739063455276;
    msg.pos_sim_err_lim = 0.473534013913;
    msg.pos_sim_err_wrn = 0.857436038247;
    msg.pos_sim_err_timeout = 36662U;
    msg.converg_max = 0.089885281179;
    msg.converg_timeout = 21762U;
    msg.comms_timeout = 52850U;
    msg.turb_lim = 0.142036372888;
    msg.custom.assign("QXMZTGBXSJHAIEGYAIZBOUVTBXYXAFINISWFHYERLHHDGGUEGMWOCVVMKFLSQZIRVRCQECHETKULPGSYJWSZFYDKHSYKFNVHKJORFJQDTSTDHJTOPCWCQMDUQILVMFCLRCAWLECKSPAPLAKENWBUMJXIBWRSNARAZBLXNZPUDZMMBODGDZNEIALRUFPJZONNDYCGQTMPPAVOPUVYOGJQOIWKYFUVXXXGQRMKTBLU");

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
    msg.setTimeStamp(0.940760008142);
    msg.setSource(269U);
    msg.setSourceEntity(45U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(27U);
    msg.formation_name.assign("NEKQNNSHHSTRHAISFGZZRSBYKMOMHGEMORHLLQQPIBP");
    msg.type = 171U;
    msg.op = 213U;
    msg.group_name.assign("IPVTYZDZUYMZDDNNGLRRYJHEBFTMHFXPFNUMHETBEJQQCESKKSLUQCOWPZHXVWVUDGKIFBNIWYOVXZJIXJMFRXRBQWCIDXCPRGKGOJHBOUAGSEMIKAMNGKUKJPEZDLCGZJWAXRVALCITCOVCWWGFVNRNLHOXVHYIRKNIMYHJQCWSVMAXTSZZOSMJBUPEOXQLPAQYSTYTDADKP");
    msg.plan_id.assign("ZHPXCUJBQSTPUHSLSKOZKFRUSHQVCXNZNLVUDYZWFNPGILLQFRYBKNLYJULFLAUDGAXHQEDHONCJZJPKTMYETJDEIGZYEBWRPDNFTIJKIXMAPCTAZWJYVOAYREANBPTGQEXWQKNFSAGBCRIISDCBRXEWOULGFZYHHEOIYUCGHHKVQCG");
    msg.description.assign("WJUMQPVRKJPZSXGTKYUMEFBTEZUQMAJFDHFYJHNKHMXZDFHLXYSODLWQMUFBGIUXVGPRGYGKTLKXVCRDBJRFCCGZNWELNASYLBWQPZLOAJSOLDAOYEDAXXKNBAGVRUTSQWPYFPJYIBZVUZKYRKUENZLKUCAGWABDOWERBOHKMHNTTIHIDMONBGEVTFPLIIRCJVPCZJFTOIEXTXSQJQOMVDBCSWAUNHVPW");
    msg.reference_frame = 84U;
    msg.leader_bank_lim = 0.378794656099;
    msg.leader_speed_min = 0.895468661913;
    msg.leader_speed_max = 0.899063037968;
    msg.leader_alt_min = 0.916172381062;
    msg.leader_alt_max = 0.98778466263;
    msg.pos_sim_err_lim = 0.911791250351;
    msg.pos_sim_err_wrn = 0.0395373951841;
    msg.pos_sim_err_timeout = 1732U;
    msg.converg_max = 0.192910633306;
    msg.converg_timeout = 11129U;
    msg.comms_timeout = 32401U;
    msg.turb_lim = 0.918271309754;
    msg.custom.assign("JEKVLNSJNKKSTGBBCOBIIFUTRXCFRYUKPWONLBQOEJMUOPFBGBDFZFDTCVBZUXVXPIITDG");

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
    msg.setTimeStamp(0.108425905266);
    msg.setSource(40838U);
    msg.setSourceEntity(230U);
    msg.setDestination(34716U);
    msg.setDestinationEntity(108U);
    msg.formation_name.assign("MWNSCZAAMQNTWGKCCQLDLOSJFUFFYCUHXZENHVREIDOAEYRGVMYUSMERGCFKJZHYGXRAEQAHDPDIBLZWKBPALTBWKWXFZZIDYSLHRFVXOPWRGVEWHMKTUEISMXUQTJGVMXTUYIPFMTQZHXWOKBRCVFOKVTLNDCJGRHINWSCYCSNTYWNFLXBODZQCABSSNIHGAJEBRXLTOKIHPVJINQKBLKEYZG");
    msg.type = 106U;
    msg.op = 166U;
    msg.group_name.assign("SNTAXLSINEEBLVOEQWZTOFGNZWOFMQLZCKFHEAWBDNURJRDPAGJJPIWJQMTPITKDJRHMZUGXSAYXCHECNFCWFZGLQOSJCEIYYGWDVPIBMQCTSIRUNOXGBRAOCQMNZREVOSHTBVCEFTXZXUQPMNEBGWIWGLFGK");
    msg.plan_id.assign("HPUNFENWOWRFASXVPNIBDKWHNECUDDJUIWQMJRRBYGWJUQTUHBAPKZSCGACEHBJZADOKXICLZFSKMCISOSICDZLLZYIOANZQRLEGTYKJVQGJYRTFALQPUVAGMMHWTBDFNXBRFSXZTOYKLHCOPWCLTCZMOL");
    msg.description.assign("QMGEVYNOWFKDXEIUQPOWXUAHUXYKKYTDSQDOABSWTFNIUOSQZHCTPIHLNARLBIHQNSEEDKWKUMHRPVJVVRENDRPMJGZMMWNZYQSLDVJFVPNQJNCQAIAUTGLZJOWLRLDGYGEFCDTHYGVSRXYAWBFNIIUYRZHZZPAWUFVWIBOKV");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25214U;
    tmp_msg_0.off_x = 0.756049217595;
    tmp_msg_0.off_y = 0.803124045415;
    tmp_msg_0.off_z = 0.198939396282;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0877580580503;
    msg.leader_speed_min = 0.713308618892;
    msg.leader_speed_max = 0.520348630054;
    msg.leader_alt_min = 0.469346708868;
    msg.leader_alt_max = 0.289187580218;
    msg.pos_sim_err_lim = 0.697787071479;
    msg.pos_sim_err_wrn = 0.0843394004295;
    msg.pos_sim_err_timeout = 23752U;
    msg.converg_max = 0.242286615006;
    msg.converg_timeout = 41858U;
    msg.comms_timeout = 51307U;
    msg.turb_lim = 0.456972093246;
    msg.custom.assign("SLIAUCNPGVSEYONBTYXHTMILDZCGWAHUFZPJMLGTYQUILQDWXKJLJAEMFVLKBKRTZXPFKAGTVIWEHMBDWAWNNNWZRKXRBHPFUFKVKLJJQPEIKQVCVSKODAMUDXSBNAYUAQDFJAFQIBBZCJGNUOQNINIHTDRYYRVTWOEFPHRMZIAKDOMRTFOZYMRLCHJIOTP");

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
    msg.setTimeStamp(0.0928033778029);
    msg.setSource(42368U);
    msg.setSourceEntity(126U);
    msg.setDestination(3016U);
    msg.setDestinationEntity(224U);
    msg.timeout = 62812U;
    msg.lat = 0.77852422221;
    msg.lon = 0.213439097111;
    msg.z = 0.588901985256;
    msg.z_units = 146U;
    msg.speed = 0.667050694522;
    msg.speed_units = 16U;
    msg.custom.assign("PSVHVZGGCJWZTONYYGODJQDUIWPRQBATKXNYNDCNWBZVBZHGUNEHUBHCLTHJMPLCJNWGVGOZODPSWEKJKOZKTMPUCXSYEQVXEBOKRTBXQQTMVZQQSNHBIFIADQUMSAONVXBRRZIELNFBYCEKMLLPYDI");

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
    msg.setTimeStamp(0.283254088122);
    msg.setSource(59463U);
    msg.setSourceEntity(77U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(222U);
    msg.timeout = 60436U;
    msg.lat = 0.177590035808;
    msg.lon = 0.891095629203;
    msg.z = 0.903650577539;
    msg.z_units = 27U;
    msg.speed = 0.742189538289;
    msg.speed_units = 111U;
    msg.custom.assign("MPBPTXUGGGTNZGQRYIESFJBNOQOGIQSBIXSKRMTHHDGV");

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
    msg.setTimeStamp(0.467550900161);
    msg.setSource(34008U);
    msg.setSourceEntity(11U);
    msg.setDestination(45136U);
    msg.setDestinationEntity(162U);
    msg.timeout = 8793U;
    msg.lat = 0.522127499735;
    msg.lon = 0.933925063991;
    msg.z = 0.392421483457;
    msg.z_units = 204U;
    msg.speed = 0.829076080117;
    msg.speed_units = 24U;
    msg.custom.assign("JXVDSRXCDSBOOJA");

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
    msg.setTimeStamp(0.012914257373);
    msg.setSource(54913U);
    msg.setSourceEntity(216U);
    msg.setDestination(2240U);
    msg.setDestinationEntity(167U);
    msg.timeout = 62822U;
    msg.lat = 0.991843927574;
    msg.lon = 0.745692960522;
    msg.z = 0.0887632892229;
    msg.z_units = 101U;
    msg.speed = 0.783220668006;
    msg.speed_units = 68U;
    msg.custom.assign("JKBPQFQUMGBRIEBIZQIMHYLQYCJTNOAKWYCAUNKYIVRJTQHCWOJFMAWXXWVWOPTIHOBSYTFHMYCWWSFAXYEEDDRRESPKHPGLCGSHTYMQRDQJFIUMKOZLDARAAZGVICWTXFZNOMZBHDPEJUOZQQRKGFCFUXNZGCPYLTPSDLKOTNWXSOBLMSEANBEXRCJVHDBELCVUTHUONMYSSPBWNZDHPBZLXUVUMVFVNIEUJJANVQGPXSDEKIZGKF");

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
    msg.setTimeStamp(0.400216613154);
    msg.setSource(46234U);
    msg.setSourceEntity(47U);
    msg.setDestination(32896U);
    msg.setDestinationEntity(237U);
    msg.timeout = 28165U;
    msg.lat = 0.481938646446;
    msg.lon = 0.243003572397;
    msg.z = 0.192621310153;
    msg.z_units = 51U;
    msg.speed = 0.989529517199;
    msg.speed_units = 213U;
    msg.custom.assign("CBZNREAKKLBXHIHILSDVX");

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
    msg.setTimeStamp(0.502148141772);
    msg.setSource(19194U);
    msg.setSourceEntity(238U);
    msg.setDestination(3752U);
    msg.setDestinationEntity(236U);
    msg.timeout = 5176U;
    msg.lat = 0.122916314084;
    msg.lon = 0.00945976876615;
    msg.z = 0.101935447865;
    msg.z_units = 108U;
    msg.speed = 0.945423604135;
    msg.speed_units = 28U;
    msg.custom.assign("PMRFMOBSTBEESPDHGDHTRSKNUGFKKIBRYZKQHWIVTIXDQDIRHTXJIWZXTIAOLYAPIEWRLAVOTASZJGPMYOGAFNUWFSRXJTWGVFYLAYJSPFFDHCXSCYINCWHLCANDQZCMKXGOCMAFRLJNMXLFUZDKVQVCHGXQXQQQJCEHYQJLCNFBPVILBKOVRERBHZRGBUYTKOWAZJV");

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
    msg.setTimeStamp(0.524090558154);
    msg.setSource(40055U);
    msg.setSourceEntity(252U);
    msg.setDestination(57642U);
    msg.setDestinationEntity(111U);
    msg.arrival_time = 0.105323290385;
    msg.lat = 0.672004800331;
    msg.lon = 0.157340782495;
    msg.z = 0.00754154374055;
    msg.z_units = 104U;
    msg.travel_z = 0.998757199969;
    msg.travel_z_units = 181U;
    msg.delayed = 90U;

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
    msg.setTimeStamp(0.668746897486);
    msg.setSource(52530U);
    msg.setSourceEntity(155U);
    msg.setDestination(51998U);
    msg.setDestinationEntity(172U);
    msg.arrival_time = 0.345940512295;
    msg.lat = 0.839615682245;
    msg.lon = 0.822018230321;
    msg.z = 0.0237729575703;
    msg.z_units = 21U;
    msg.travel_z = 0.0974042531988;
    msg.travel_z_units = 15U;
    msg.delayed = 154U;

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
    msg.setTimeStamp(0.0362400930968);
    msg.setSource(49676U);
    msg.setSourceEntity(251U);
    msg.setDestination(1078U);
    msg.setDestinationEntity(204U);
    msg.arrival_time = 0.934911366394;
    msg.lat = 0.26830831729;
    msg.lon = 0.0483698679681;
    msg.z = 0.71846283804;
    msg.z_units = 98U;
    msg.travel_z = 0.8122689342;
    msg.travel_z_units = 86U;
    msg.delayed = 22U;

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
    msg.setTimeStamp(0.324095381241);
    msg.setSource(6807U);
    msg.setSourceEntity(14U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.384178165105;
    msg.lon = 0.514256383995;
    msg.z = 0.00234987691821;
    msg.z_units = 43U;
    msg.speed = 0.146210258313;
    msg.speed_units = 16U;
    msg.bearing = 0.054898052818;
    msg.cross_angle = 0.108752495141;
    msg.width = 0.197484374463;
    msg.length = 0.655138964717;
    msg.coff = 66U;
    msg.angaperture = 0.405513934085;
    msg.range = 5852U;
    msg.overlap = 43U;
    msg.flags = 240U;
    msg.custom.assign("QLWOXAYCSSYWLVOKQVMYUZHRJLFIUBMDPOCNJWFETALSUXZIJCOGXPBGMKTGMFKZVTMXSGAXEPNZYYYENBUOTDXDPUCAJUMLISQDMJNCLFSKAMQT");

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
    msg.setTimeStamp(0.264228971798);
    msg.setSource(8056U);
    msg.setSourceEntity(216U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.134708245254;
    msg.lon = 0.865039866273;
    msg.z = 0.287658950445;
    msg.z_units = 35U;
    msg.speed = 0.885685353689;
    msg.speed_units = 190U;
    msg.bearing = 0.605705462839;
    msg.cross_angle = 0.294081910903;
    msg.width = 0.520672666714;
    msg.length = 0.784111936417;
    msg.coff = 206U;
    msg.angaperture = 0.582494256089;
    msg.range = 13579U;
    msg.overlap = 31U;
    msg.flags = 59U;
    msg.custom.assign("SQLNFLHMZCLDAUYTPZZKGZUTYAFSAHEDVHJVIZXZPDBGXJYJVNEFYEOVHCONFQMLKJGDFIQIQQXCEZUONBDHTLCMSWQXNVLRIKDBBIACKERGPRBOHDTWTJWEQNOMUVGVOGBIERRBPTWOCUMXCKSPFHEWPYUMCWYA");

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
    msg.setTimeStamp(0.819618358012);
    msg.setSource(19323U);
    msg.setSourceEntity(54U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.182936036067;
    msg.lon = 0.850389906476;
    msg.z = 0.236957242867;
    msg.z_units = 51U;
    msg.speed = 0.842824722516;
    msg.speed_units = 249U;
    msg.bearing = 0.405161013011;
    msg.cross_angle = 0.049571003715;
    msg.width = 0.203364517933;
    msg.length = 0.551642531852;
    msg.coff = 187U;
    msg.angaperture = 0.926356549378;
    msg.range = 3139U;
    msg.overlap = 246U;
    msg.flags = 181U;
    msg.custom.assign("TXUTTLLCNISZVBSMLRBIZPPEQNJVOGRS");

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
    msg.setTimeStamp(0.0939221605541);
    msg.setSource(42718U);
    msg.setSourceEntity(233U);
    msg.setDestination(38766U);
    msg.setDestinationEntity(25U);
    msg.timeout = 21173U;
    msg.lat = 0.446321802511;
    msg.lon = 0.292610302661;
    msg.z = 0.984697808967;
    msg.z_units = 169U;
    msg.speed = 0.654817052235;
    msg.speed_units = 235U;
    msg.syringe0 = 26U;
    msg.syringe1 = 159U;
    msg.syringe2 = 39U;
    msg.custom.assign("CNBWYLIPDFOHRMFURBFRKSWOSFRJNUUTJXWLPOBVIOHHXYXZBMNNRPZCMRVCAWLDUPSPGO");

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
    msg.setTimeStamp(0.852937596161);
    msg.setSource(45116U);
    msg.setSourceEntity(201U);
    msg.setDestination(63728U);
    msg.setDestinationEntity(37U);
    msg.timeout = 21552U;
    msg.lat = 0.133238509754;
    msg.lon = 0.234723794956;
    msg.z = 0.6411266716;
    msg.z_units = 214U;
    msg.speed = 0.649362368307;
    msg.speed_units = 192U;
    msg.syringe0 = 117U;
    msg.syringe1 = 250U;
    msg.syringe2 = 147U;
    msg.custom.assign("PSRYHZWLJAJIBUBOPNRJZIZGVCOCFVPVUUMKFLQVARPUDZTZQDSBSGAMEZRAWRLPCZM");

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
    msg.setTimeStamp(0.792380329157);
    msg.setSource(26184U);
    msg.setSourceEntity(44U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(62U);
    msg.timeout = 7799U;
    msg.lat = 0.320062112077;
    msg.lon = 0.83327112998;
    msg.z = 0.555992496944;
    msg.z_units = 173U;
    msg.speed = 0.0267265028284;
    msg.speed_units = 43U;
    msg.syringe0 = 88U;
    msg.syringe1 = 60U;
    msg.syringe2 = 246U;
    msg.custom.assign("CBFMAHIZFFHARTJBGSBSYTVDXLRAJLTMGPTTCEZZAQNPENWOVKMESCXVQXRMRCJYCYYHWHCLCKSTVBOFSGJIPPPWLEINLDAHYBMSWUZNUOUATNSYXFYPKXZKDPZLPJTFEPRLJDBQUJYWMZEEYMJMZQDAKURZMOWUD");

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
    msg.setTimeStamp(0.0178258509327);
    msg.setSource(33035U);
    msg.setSourceEntity(116U);
    msg.setDestination(603U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.805529544617);
    msg.setSource(15178U);
    msg.setSourceEntity(175U);
    msg.setDestination(34378U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.402400538406);
    msg.setSource(44664U);
    msg.setSourceEntity(189U);
    msg.setDestination(37463U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.752658856364);
    msg.setSource(7318U);
    msg.setSourceEntity(163U);
    msg.setDestination(49871U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.934547949245;
    msg.lon = 0.454555442332;
    msg.z = 0.487767813961;
    msg.z_units = 201U;
    msg.speed = 0.153599395124;
    msg.speed_units = 118U;
    msg.takeoff_pitch = 0.862107538246;
    msg.custom.assign("OYVGQAPLJIGMBQFNWDTZFDREUMFKNEHYJPRHPVSYRDXPJYUOMIHZNRKYIJALJLWCOVWYLACVRUTJXEEIVZOBJFBNFCFAKXHSBDLREWIAUWFMTXJNGZKENL");

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
    msg.setTimeStamp(0.709252921763);
    msg.setSource(31719U);
    msg.setSourceEntity(248U);
    msg.setDestination(22113U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.468397091607;
    msg.lon = 0.649559037894;
    msg.z = 0.0591972653616;
    msg.z_units = 213U;
    msg.speed = 0.399527453471;
    msg.speed_units = 136U;
    msg.takeoff_pitch = 0.766319767865;
    msg.custom.assign("IKHTKEHVNJRXCWSSBISGOZCDAMJUKXBOIJOQBXRBQPGWKNMQQXVDSTAKIYZNMEXHZVTQFWSEWIBACWLLELFNZRTVMOQHYQVLTNVXISDYOCLGINRQVPKFMFEWANGUCYHZNXPNWZZUVMORZIDTXJKGBTUNALPXAMCPEIFESFLEFGPDLRKGEJEUYDBUKHTGAOGTCJJPYJUMHRDQPZUYZFQIACOXRBMFYLRMHYDSDPAVSG");

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
    msg.setTimeStamp(0.983885383045);
    msg.setSource(16U);
    msg.setSourceEntity(243U);
    msg.setDestination(21920U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.370496594943;
    msg.lon = 0.338206190701;
    msg.z = 0.465872353977;
    msg.z_units = 249U;
    msg.speed = 0.659202180665;
    msg.speed_units = 53U;
    msg.takeoff_pitch = 0.986071969024;
    msg.custom.assign("ERXRTWLDHNFRILOZUJTLGAZSBNZKYCNPQWTPHYRSGBOLGFLTSAWKBDHHMYXJZPSAFMTUCYGKHHDUFFAJDTOUCJJZIQDVQIWDCAWYCOBXEYRSHQECCJQKVWELGD");

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
    msg.setTimeStamp(0.673095689217);
    msg.setSource(36638U);
    msg.setSourceEntity(154U);
    msg.setDestination(471U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.969704941416;
    msg.lon = 0.65414897431;
    msg.z = 0.4568314848;
    msg.z_units = 25U;
    msg.speed = 0.464985905682;
    msg.speed_units = 208U;
    msg.abort_z = 0.859934970703;
    msg.bearing = 0.331574857441;
    msg.glide_slope = 207U;
    msg.glide_slope_alt = 0.303739473881;
    msg.custom.assign("DAPHWWAURFYXMGADVUCWGOSIRFHBVBCOPWFBLNHAEZTKMKDBXYYVVMMUPBMGUNBDPRIUMCNELHZSLWVGPEWPWCGNHJZFBSASLXUXWKWKDNKBMNETETOQXSIREJJJLOKJFLZOBENAIVOQGCRKQDDITIMNCKIRHTYZCURSPAERDTQWCQTQZGYZLJGMBKXASI");

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
    msg.setTimeStamp(0.78623404433);
    msg.setSource(56762U);
    msg.setSourceEntity(114U);
    msg.setDestination(16814U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.301866036056;
    msg.lon = 0.24082826143;
    msg.z = 0.572557281233;
    msg.z_units = 102U;
    msg.speed = 0.799245216061;
    msg.speed_units = 40U;
    msg.abort_z = 0.219726129348;
    msg.bearing = 0.061934972398;
    msg.glide_slope = 26U;
    msg.glide_slope_alt = 0.896410448426;
    msg.custom.assign("YUKLXMHGTKEYHFZPUXHHALPMTJSQHPLFWMTGZIFVVJFAGEWWIYVNRTBEKNULAZBMJLCUJMOQPRSBAJVYRKYSDRCVUKJGWTJ");

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
    msg.setTimeStamp(0.780563799421);
    msg.setSource(18804U);
    msg.setSourceEntity(179U);
    msg.setDestination(30121U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.244623557626;
    msg.lon = 0.928748770908;
    msg.z = 0.148705985701;
    msg.z_units = 58U;
    msg.speed = 0.398952653887;
    msg.speed_units = 162U;
    msg.abort_z = 0.408632862857;
    msg.bearing = 0.580804079203;
    msg.glide_slope = 3U;
    msg.glide_slope_alt = 0.888110879696;
    msg.custom.assign("TFIUWXQTQKBTOWWUYSXZIFDZYOTLVJXYZNSZPLNHWDJSJKCTLNJIMOSKGRCSGSIDKWFHKMLSVNTBPCECHICQGRWSHPJDLEALGXFSKEBCYRPUOQUWOGAVKGVVBCDCAEOJODUHVYZTDPEASNRFBHDVBXQJHUMRIFEUGHOUAXDRZGCPXWMVKMKLPZMML");

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
    msg.setTimeStamp(0.9181652802);
    msg.setSource(27576U);
    msg.setSourceEntity(228U);
    msg.setDestination(6177U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.842838023553;
    msg.lon = 0.263931977515;
    msg.speed = 0.612509059641;
    msg.speed_units = 87U;
    msg.limits = 91U;
    msg.max_depth = 0.216593375324;
    msg.min_alt = 0.113657331185;
    msg.time_limit = 0.731912283542;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.869537991713;
    tmp_msg_0.lon = 0.349420618045;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MMQODMJBFSEJVQGODRXTFTANJUTOGUCCQBAHPWYNBHLIJZADPMGWHWYXEXVWYZKEUZJERTMUQDXAKWUNSGUQMIQOQINFNVLQWEAKAEECRNBGPRYXKCHPSGPABXVTKPATEFKOQDZNZSNSIGRNHXIWTYYLHPCJRUVODCVGTOIWBDLOYNUTZZBPCIEMDHZMEZRGFXJKFJROIFIXJSVIOCBVUQKPHDAYBSXYLVGFDKSHWUVMLYKZRCFPAL");
    msg.custom.assign("NXFOZNHRPTHUZSOCEKEMZKSBORZLTFCHFHCEORBHBGSVGXDYXITFAWSGEKQSXFEGUYYPPRJGLSSIYNNLIPOJTMDNAVBIWKRLPWPLZWJVUYAHVQRPLUARJTTUBUVFBFUJEDNMJGLMZINZZXYOQMNEFCOCMWCTHAJTECQZYKMUXVQXRHUIRGGCGHIKJOWAVFVLPSISPADSABNDYJNXQDO");

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
    msg.setTimeStamp(0.768183337243);
    msg.setSource(21291U);
    msg.setSourceEntity(132U);
    msg.setDestination(16174U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.5668560998;
    msg.lon = 0.175151244288;
    msg.speed = 0.214763451747;
    msg.speed_units = 143U;
    msg.limits = 24U;
    msg.max_depth = 0.884230663302;
    msg.min_alt = 0.429748457918;
    msg.time_limit = 0.501551090954;
    msg.controller.assign("OFGUBLFBTZTCTIBIUHOJIJECYNLQPDKMRQSXRVLGQPYSZIPYDHSAYDNARMWIBMILNOUZWXOXGVXGXUEQSZSONHXEVFCYPWHS");
    msg.custom.assign("EVLLGHZENEDHOMGDEMYXYDZMWPWSXYVJRYPYOLUGIWNPJFKMABWDGTATNECNTTVUQIZYHHKHVAIQDOCXONRQLETBQMHSIZTHKFUXGAVQDBJSEIIARBGKFZYAORJVKUBJNSDPUVQFFFGJOXXPPCXNLQTAOCHJZRISBZWKGZUKRBWSTZXUCUFDQYMOESAVW");

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
    msg.setTimeStamp(0.774314274999);
    msg.setSource(48655U);
    msg.setSourceEntity(15U);
    msg.setDestination(340U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.51628576745;
    msg.lon = 0.785690747483;
    msg.speed = 0.386844269552;
    msg.speed_units = 210U;
    msg.limits = 228U;
    msg.max_depth = 0.858729225574;
    msg.min_alt = 0.47501542877;
    msg.time_limit = 0.423712143121;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.334100252069;
    tmp_msg_0.lon = 0.676353982488;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EOEUTFMKUHDNTCSGJZLICSJGGELVBBRUIKDHUZMVXNZVEPIRYPWOQJSELODKLSZRDRTKQOJNPFGSIINSOTHRMMJ");
    msg.custom.assign("JWWXOVMUOCGYMGEEOXVRDNJGWLPGXAVKBKYYHMOAPIXPKCWYHTGDYBGHEHBVYOQTRFJUCOOKSWGRXSVPFVURPTHPUNBMUHST");

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
    msg.setTimeStamp(0.184025279561);
    msg.setSource(37657U);
    msg.setSourceEntity(86U);
    msg.setDestination(50645U);
    msg.setDestinationEntity(20U);
    msg.target.assign("MMVZPCJIFVHDXRIPNLVWNAO");
    msg.max_speed = 0.867715602772;
    msg.speed_units = 48U;
    msg.lat = 0.358434254334;
    msg.lon = 0.632043327014;
    msg.z = 0.0467888894986;
    msg.z_units = 96U;
    msg.custom.assign("UIBVDWPKBNGXNCSPAFQWXAXPXCPIYMATGEGKVDXIJONCDOIKSSHYSFSEWYNUGOZUQIAMXRTKCHWCKOMWFTPEE");

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
    msg.setTimeStamp(0.392422330432);
    msg.setSource(61498U);
    msg.setSourceEntity(101U);
    msg.setDestination(39228U);
    msg.setDestinationEntity(153U);
    msg.target.assign("OAXZDMKGLELPWBTXKHJYNRRGPDDEVOUCEHYWUGTUEXGSAGGIAVLAJOHUQWZLJKOGCRVWZPORVXPNINUACGQJNXFLXIEKB");
    msg.max_speed = 0.825441338383;
    msg.speed_units = 242U;
    msg.lat = 0.350214963295;
    msg.lon = 0.272939880504;
    msg.z = 0.942855101475;
    msg.z_units = 184U;
    msg.custom.assign("ZEEJOJNFBVAEBELFBHJKVUMXHLULCNVSZHBWFEXDOSZGXWDYHYRLYJSQVTQBODCWGSYIPJBNFMVKBIHWMWACUTGXAZTDHWJZTQLUOINKJBVJOGMPPKYXDNYSFZLPLGSFCWFUOZIBWKMLPUZLMDDXIEHCBYQRRCUAVXEVRHGNIOERPFQMUKOAEGUNLACKAURRQATYKTVKZWQNTFMHTRCZSOIQTTPIQ");

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
    msg.setTimeStamp(0.413213782856);
    msg.setSource(45575U);
    msg.setSourceEntity(83U);
    msg.setDestination(24793U);
    msg.setDestinationEntity(161U);
    msg.target.assign("LWVEVSNXMYCJSXGYEXTSHKRXTTRFAHSFCIOAFDIRHQCBDDLCLAFQZTTNUITBOCGDJZGAWOQJRRUYQ");
    msg.max_speed = 0.286980400741;
    msg.speed_units = 180U;
    msg.lat = 0.949919269021;
    msg.lon = 0.612429749782;
    msg.z = 0.134657517112;
    msg.z_units = 53U;
    msg.custom.assign("WOZRXWXIQBXBQTELAIIUVOLJMCFWVKMZNUSZLHKADYDJDKEHALDYSXRTNSTYTJRIRFROPGZJKBDAGBDSBHIDXVENXLPCWPKCNYWMVUESUFVUPGBMCRVHWOINFCLKRDJZGSLDDPWTMYQIYXGYASCNCYOPZHEAHCUVKEBQQFBJMLXLKYVLPAFFTWIEQYFQHXFGXTEZNEUANQGMWBUHJVSGOPAMOFMIIRGTQMKUAZETPCJNOGZCHTPJOUROSBR");

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
    IMC::Docking msg;
    msg.setTimeStamp(0.121386044964);
    msg.setSource(3508U);
    msg.setSourceEntity(173U);
    msg.setDestination(52481U);
    msg.setDestinationEntity(200U);
    msg.target.assign("OADVUSGQSXHCSEJLVS");
    msg.max_speed = 0.107033264762;
    msg.speed_units = 9U;
    msg.lat = 0.242082996425;
    msg.lon = 0.448112176901;
    msg.vehiclefunction = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.24575827639);
    msg.setSource(51595U);
    msg.setSourceEntity(148U);
    msg.setDestination(13347U);
    msg.setDestinationEntity(237U);
    msg.target.assign("VKFFSCKIASJFZHTLWFBCBVFUROGIDPFAKPUGY");
    msg.max_speed = 0.155129159864;
    msg.speed_units = 89U;
    msg.lat = 0.74255341987;
    msg.lon = 0.456457534755;
    msg.vehiclefunction = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.624727714219);
    msg.setSource(30673U);
    msg.setSourceEntity(160U);
    msg.setDestination(34893U);
    msg.setDestinationEntity(197U);
    msg.target.assign("EAGUGBMVDUKKRGKPBANODHIJPQRNFUWTRFDLBGMIEJYTMDQXMRCSZBZHSAPFZOOSHDLXKMNXIGEGNWYNYLUQQZPCJZIGOMCJFEYTAUEOCKRCZMJJCGFTBKOWYYPSVFQKVDNUWAYMCWQJRLELZRRFLHTVHBLVVONUFCVPNQIHDXHAFDKRZPOVASJCBWSXLHPLEOYATYPKBUJSGVRESSQWXZEGFUXTWXDXHNTKIHBJUIBILDI");
    msg.max_speed = 0.54560424742;
    msg.speed_units = 12U;
    msg.lat = 0.76979757324;
    msg.lon = 0.0658921677641;
    msg.vehiclefunction = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #2", msg == *msg_d);
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
    msg.setTimeStamp(0.920683448481);
    msg.setSource(50944U);
    msg.setSourceEntity(199U);
    msg.setDestination(33896U);
    msg.setDestinationEntity(190U);
    msg.op_mode = 221U;
    msg.error_count = 112U;
    msg.error_ents.assign("IVYECJSTWLNVNNADWMFMEDGAFMHUXEYZOHLAIWWORCRZQYYPQAOOCMXKYKPFVXRS");
    msg.maneuver_type = 33315U;
    msg.maneuver_stime = 0.825075785088;
    msg.maneuver_eta = 44328U;
    msg.control_loops = 2090885086U;
    msg.flags = 136U;
    msg.last_error.assign("QDRCLQUSIXZVIWETAKMWXDPQPZELHDTLGJY");
    msg.last_error_time = 0.0321345523529;

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
    msg.setTimeStamp(0.686498586855);
    msg.setSource(38150U);
    msg.setSourceEntity(58U);
    msg.setDestination(53894U);
    msg.setDestinationEntity(99U);
    msg.op_mode = 68U;
    msg.error_count = 139U;
    msg.error_ents.assign("WHBURZCTXFEONZLLKNCDMESIQUBWOJGLBAARWIBVGOCRMCLHACLGKKUWRZITYNWQHKHDGTEVYEPTXJSUXEWDJPDSHIZLYMISFPPXRAIWOTYADUTEAVWUKOGBYXCBHXIOBMHQJKONJQLVFOMTZUQYRWDYQNQJFJCPP");
    msg.maneuver_type = 1445U;
    msg.maneuver_stime = 0.948690971771;
    msg.maneuver_eta = 1149U;
    msg.control_loops = 547487112U;
    msg.flags = 12U;
    msg.last_error.assign("TYHYDNSHNPQIHTZYAIWQRVOUNRTRGOEOUKDKWIXUNWCHBGAYFBTLERUGLDLZQZWOQFKMSCQLDPUSNWSRHGMWLGGGMBKWIVICJWFFKQEIOLRIJEYDBJXVCMLKAAMCCTEXKUQQTXSHVELRJBHBZHBUXBVNVHNFNPBQJSTPFVIMTDRIAPWMVXBJIENCXWJ");
    msg.last_error_time = 0.215271308539;

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
    msg.setTimeStamp(0.504869426204);
    msg.setSource(28076U);
    msg.setSourceEntity(120U);
    msg.setDestination(13476U);
    msg.setDestinationEntity(95U);
    msg.op_mode = 100U;
    msg.error_count = 240U;
    msg.error_ents.assign("NOPXUMEBTSLLICEOPRWYSLQVFMINBJXQVOULXOGFJMGXKUXLZVVUPVPTRRCCBSTPWAMWAZENWFMJIDMTBRDQQGYXJCQSGQBUAUEEEYKLIZKDAHHKBVQKOLJKCHTCUOWDGNDPKNRYLXOHYPWTBDHMZOMVXZFZCYDGMRHCSSIXBRNIJQDAAYPTCJJXHCSKISFISRWGJAZYEVQWFJUHHFKTYFDVEUBNSA");
    msg.maneuver_type = 49051U;
    msg.maneuver_stime = 0.503506380254;
    msg.maneuver_eta = 21243U;
    msg.control_loops = 681819766U;
    msg.flags = 172U;
    msg.last_error.assign("EEOXZUMSYBDYPGTQZSWAIKGIDEBOOTNRAPNRDTHAKIKQQLHOOAZCYCHHBKRUNPNYJTAIRBMQWLIZ");
    msg.last_error_time = 0.95522943982;

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
    msg.setTimeStamp(0.234421496906);
    msg.setSource(47583U);
    msg.setSourceEntity(99U);
    msg.setDestination(36190U);
    msg.setDestinationEntity(195U);
    msg.type = 162U;
    msg.request_id = 56601U;
    msg.command = 54U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.558619233732;
    tmp_msg_0.lon = 0.739313265947;
    tmp_msg_0.z = 0.825718862778;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.798392862905;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.takeoff_pitch = 0.436715335388;
    tmp_msg_0.custom.assign("RWHXGTRKEOLVLTKYEJVSBXRPPDTXOJEGBDFONRREDMZNUFMFLEUNMNXKVFTMFNGVKLLCOTAXQASFCMCTZBHZACMKSPVAULXINAAVUZUFVZSAUHWJHDTSXGWOUZWVSWIPHNLPIOSJWXFQHI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57029U;
    msg.info.assign("CHHBFSTCWBJJFIJSZGBGEMYKOLFNOSYTVVEJQMXCHPASUDFXKD");

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
    msg.setTimeStamp(0.287467608108);
    msg.setSource(55744U);
    msg.setSourceEntity(247U);
    msg.setDestination(17877U);
    msg.setDestinationEntity(73U);
    msg.type = 142U;
    msg.request_id = 11855U;
    msg.command = 33U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.685331235489;
    tmp_msg_0.lon = 0.535543756915;
    tmp_msg_0.z = 0.649872403898;
    tmp_msg_0.z_units = 97U;
    tmp_msg_0.speed = 0.473458327982;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.abort_z = 0.565519170312;
    tmp_msg_0.bearing = 0.0370631958019;
    tmp_msg_0.glide_slope = 121U;
    tmp_msg_0.glide_slope_alt = 0.240371244172;
    tmp_msg_0.custom.assign("AAULIZXFCJLXUHHFPWRRFKTHLVRRKILPCHHHCLCXJTEKFMJYBEVMSXQYTUIVMV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32361U;
    msg.info.assign("BLKHIPMQYWSOVFCZGALYICMDLQTPHWBLCJTJZIGEYWZQNMRSXIBXUULHFYKGQNOYQPQVPFUQOSHNKVWYWHNIYFIDPHRXXSJCRXBFVRAHRECTVAYMXCUWDGKGXDSDAOLPCMMOBFOSIXINKDUBTGAIFZVWMABPJTOTKSMHGZEKDYLCUUDVSNFMFLEMDBLKZHHAUURADOCPFGJEKTEWNQENPLXJSRZJIEZYR");

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
    msg.setTimeStamp(0.447481892289);
    msg.setSource(26095U);
    msg.setSourceEntity(133U);
    msg.setDestination(55103U);
    msg.setDestinationEntity(196U);
    msg.type = 236U;
    msg.request_id = 25383U;
    msg.command = 163U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 34777U;
    tmp_msg_0.lat = 0.215625371959;
    tmp_msg_0.lon = 0.674667722888;
    tmp_msg_0.z = 0.551656012373;
    tmp_msg_0.z_units = 15U;
    tmp_msg_0.speed = 0.190385510344;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.bearing = 0.737584044587;
    tmp_msg_0.cross_angle = 0.291195652092;
    tmp_msg_0.width = 0.137850921117;
    tmp_msg_0.length = 0.313135890933;
    tmp_msg_0.hstep = 0.233082003384;
    tmp_msg_0.coff = 60U;
    tmp_msg_0.alternation = 98U;
    tmp_msg_0.flags = 63U;
    tmp_msg_0.custom.assign("XLETHXKQGNJXISRJBLNLEHJAZRNWFCTSLHVDTPOBRGEUDQDIBAUDMSVCAOKYWWMMKCPRVCSCVOEIPDKAOMPLXUDEABXGJKHUYEFRHEHMKFMYOLYTUKCPXCJQLSZXQRMIAVPAVWKMPNTQVHBGHNLNTSUWWDTIVOKPFQNNQDPGWOXDTRXTDGIGBCUFFYKJGFSOFJFHVBQXMUSNNWJFYURIWYBAZBLZQOOBJJZZACSYVIECESMPRAGHZEG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6761U;
    msg.info.assign("BLWQOTZNHKWSJIVXUATWNOSVZQYRIWKCFEMKKJKCUHGJCLBBKSYLVYFPLQQAMIJVRPHEOXNDLRTQFCYNPRVRMMSACPXTHTQQLNPZDQGIKFMGPZWJYGBHEGDYGAVUEE");

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
    msg.setTimeStamp(0.198882718739);
    msg.setSource(18996U);
    msg.setSourceEntity(141U);
    msg.setDestination(18216U);
    msg.setDestinationEntity(219U);
    msg.command = 195U;
    msg.entities.assign("WGFKSGNWROTBQVCVAFJUAVSMPQOYNZIMQGISIOTYOZBWLZTZRUMQNWVMPCFGAWXLSVKCCHDSEJEHJDVZYPXEXBUXAGGTDIF");

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
    msg.setTimeStamp(0.803991980541);
    msg.setSource(62963U);
    msg.setSourceEntity(202U);
    msg.setDestination(2615U);
    msg.setDestinationEntity(26U);
    msg.command = 228U;
    msg.entities.assign("XBCGQQLGJUCWNSXPLVQAUPBCDFPOIPSZQVYFVIKGHFUQBKBBLHICZSZASJRMTEHELXUNSHGKHOYSKADWTNAQOMEAQJWUCKYPPXAWMXVNYIJEOFWBTVALVMGNHSFHFELHDOYJSIAUDWHNBLMZCREMVZTYIJGZYTWOUZOMACGISTXWFVTXRDSZKYROPEUIWKRTPURNZXYFJLXZJDMEGLFC");

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
    msg.setTimeStamp(0.835565470805);
    msg.setSource(44444U);
    msg.setSourceEntity(38U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(253U);
    msg.command = 195U;
    msg.entities.assign("MAOZAQZHCJPZGJBQJPPRAGPGQPCWKMKMSZTAJOJMDH");

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
    msg.setTimeStamp(0.216411653142);
    msg.setSource(30292U);
    msg.setSourceEntity(133U);
    msg.setDestination(39051U);
    msg.setDestinationEntity(28U);
    msg.mcount = 82U;
    msg.mnames.assign("WMLYCKOEBRITATNPXYNCDIJIGLQGFOIAEMYSAWWGIKXDYGQLXUQ");
    msg.ecount = 14U;
    msg.enames.assign("DIHZLEYYZUEAWSDHRSQUKUJYLARKOMPFXFULGEBIXLZ");
    msg.ccount = 77U;
    msg.cnames.assign("JXRXYIQNGMGFXUWCIWNMTKVDJPVVEZLXCUWCXTHWDLUWHTBOTRZKUFGJLJVOHOPZLBJACFLRP");
    msg.last_error.assign("WTNRNRSGCDOPQMPKQBUMULRGIATZEQSUUVDBPGWFLIEZSZBMOUODGTVGXMINPFRWOANKYPFLIPKHQNWAYVTCISCXVJPGMWJBDPAQTVRTAZSGKKUMXEBSFLZLORDHQHAVGNJKFHHXHJXMQAMFNTKCPXNXXYODZRZ");
    msg.last_error_time = 0.96986323455;

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
    msg.setTimeStamp(0.40822866845);
    msg.setSource(3857U);
    msg.setSourceEntity(185U);
    msg.setDestination(502U);
    msg.setDestinationEntity(13U);
    msg.mcount = 116U;
    msg.mnames.assign("JWLCWKCWITOXTNQKXIM");
    msg.ecount = 223U;
    msg.enames.assign("SIPKOHKUQMTFZRNXWPJEKQFMUDOQSKYEIGRFHNVWWZIYGDDGTCWUYZWHNHGARMLNUAKFPESWHSZCJPOLLDYYWTDCLCTBNMOXNIZVLDFNLPJQCXADMRIJBOFBSW");
    msg.ccount = 32U;
    msg.cnames.assign("YUXXLPNLOIDZYJLBVUSAORHQYTYVSNXFYTBUONEEDNFKVWAWQQWRZITOXUIPGKEJAMTYNWANGKWFMJFRHSWTAKFLVSMSMLKYIAKOGULSVQZPIDWCFFMQDPEEHRARPDCZPQGABPTZCIJVZLNDQBGHZXTSHDWTHRUIDUBXRWP");
    msg.last_error.assign("UEDBSJBDMHPKCNZDTTSRVXVVHAYWRQRZPTVYLBXKWXSTFQMKMPVEWVWFLGCKL");
    msg.last_error_time = 0.717607034414;

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
    msg.setTimeStamp(0.177774036745);
    msg.setSource(56139U);
    msg.setSourceEntity(157U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(38U);
    msg.mcount = 223U;
    msg.mnames.assign("ZNXJNFJMLLOJGYZEAAOOTKSYJILDB");
    msg.ecount = 233U;
    msg.enames.assign("AHSMMSJIASCSBFSYYEQPUUDWBPXQZOJJOOYYVVBIBBRBXCZDGHQDCNRKODZNSDACCFQRKMVRDIMMCLUWAXL");
    msg.ccount = 77U;
    msg.cnames.assign("YPBCXWJYWNWEMXCYGQOHLFNBZLVVYXQEXOGJUPEKNSSYDARWCJBPBUOIIUVAVKLEDADXTGRVK");
    msg.last_error.assign("KRGWBXXXRGTPVIRRLLESFBTORZPYJTHKKTENGPKHTAOXPGMNNBARWEABWQTFEHQAVTIOWKJNNCCKROOLMONXLCYFMIIZJCFNBILTJXZGSBQFYKRPCHKXUQZMMHDCMLFFVIUME");
    msg.last_error_time = 0.247947914338;

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
    msg.setTimeStamp(0.733892792977);
    msg.setSource(57804U);
    msg.setSourceEntity(204U);
    msg.setDestination(63045U);
    msg.setDestinationEntity(34U);
    msg.mask = 214U;
    msg.max_depth = 0.831344532527;
    msg.min_altitude = 0.0565659743929;
    msg.max_altitude = 0.518780551373;
    msg.min_speed = 0.677773356683;
    msg.max_speed = 0.616218657034;
    msg.max_vrate = 0.207129582024;
    msg.lat = 0.614038299407;
    msg.lon = 0.0381090350612;
    msg.orientation = 0.953293979534;
    msg.width = 0.982571392333;
    msg.length = 0.392759841647;

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
    msg.setTimeStamp(0.373426626897);
    msg.setSource(38088U);
    msg.setSourceEntity(175U);
    msg.setDestination(41076U);
    msg.setDestinationEntity(150U);
    msg.mask = 87U;
    msg.max_depth = 0.955467948202;
    msg.min_altitude = 0.161714762822;
    msg.max_altitude = 0.535324934265;
    msg.min_speed = 0.833866111995;
    msg.max_speed = 0.0119120135294;
    msg.max_vrate = 0.0798337734299;
    msg.lat = 0.395141380079;
    msg.lon = 0.0484427896404;
    msg.orientation = 0.311637555798;
    msg.width = 0.965277812051;
    msg.length = 0.456315048844;

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
    msg.setTimeStamp(0.57211450107);
    msg.setSource(39764U);
    msg.setSourceEntity(32U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(195U);
    msg.mask = 166U;
    msg.max_depth = 0.762063603687;
    msg.min_altitude = 0.112977611644;
    msg.max_altitude = 0.118740965508;
    msg.min_speed = 0.257222073922;
    msg.max_speed = 0.999403734522;
    msg.max_vrate = 0.914907695981;
    msg.lat = 0.561811230546;
    msg.lon = 0.275308289757;
    msg.orientation = 0.298171948138;
    msg.width = 0.363504046302;
    msg.length = 0.319624975664;

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
    msg.setTimeStamp(0.624654574615);
    msg.setSource(11801U);
    msg.setSourceEntity(81U);
    msg.setDestination(18018U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.0322968526981);
    msg.setSource(52040U);
    msg.setSourceEntity(26U);
    msg.setDestination(50779U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.439995515772);
    msg.setSource(53053U);
    msg.setSourceEntity(201U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.486002609434);
    msg.setSource(56210U);
    msg.setSourceEntity(253U);
    msg.setDestination(41943U);
    msg.setDestinationEntity(17U);
    msg.duration = 15288U;

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
    msg.setTimeStamp(0.836128156662);
    msg.setSource(10427U);
    msg.setSourceEntity(179U);
    msg.setDestination(17400U);
    msg.setDestinationEntity(159U);
    msg.duration = 27984U;

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
    msg.setTimeStamp(0.411571361036);
    msg.setSource(7690U);
    msg.setSourceEntity(27U);
    msg.setDestination(34050U);
    msg.setDestinationEntity(14U);
    msg.duration = 60041U;

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
    msg.setTimeStamp(0.673923783263);
    msg.setSource(59509U);
    msg.setSourceEntity(201U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(234U);
    msg.enable = 108U;
    msg.mask = 3300316248U;
    msg.scope_ref = 857121934U;

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
    msg.setTimeStamp(0.623032659052);
    msg.setSource(63227U);
    msg.setSourceEntity(63U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(162U);
    msg.enable = 14U;
    msg.mask = 3607211088U;
    msg.scope_ref = 2931507715U;

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
    msg.setTimeStamp(0.0046104297719);
    msg.setSource(16643U);
    msg.setSourceEntity(208U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(132U);
    msg.enable = 177U;
    msg.mask = 2496079923U;
    msg.scope_ref = 3466602905U;

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
    msg.setTimeStamp(0.774640162767);
    msg.setSource(28290U);
    msg.setSourceEntity(237U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(130U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.329549273917);
    msg.setSource(22449U);
    msg.setSourceEntity(103U);
    msg.setDestination(8785U);
    msg.setDestinationEntity(228U);
    msg.medium = 175U;

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
    msg.setTimeStamp(0.940361825006);
    msg.setSource(56006U);
    msg.setSourceEntity(180U);
    msg.setDestination(60284U);
    msg.setDestinationEntity(86U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.853906421287);
    msg.setSource(63774U);
    msg.setSourceEntity(242U);
    msg.setDestination(55624U);
    msg.setDestinationEntity(35U);
    msg.value = 0.591631433028;
    msg.type = 250U;

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
    msg.setTimeStamp(0.537382410462);
    msg.setSource(62101U);
    msg.setSourceEntity(53U);
    msg.setDestination(1780U);
    msg.setDestinationEntity(112U);
    msg.value = 0.635661922795;
    msg.type = 50U;

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
    msg.setTimeStamp(0.606669215295);
    msg.setSource(18223U);
    msg.setSourceEntity(101U);
    msg.setDestination(14413U);
    msg.setDestinationEntity(11U);
    msg.value = 0.555854955033;
    msg.type = 82U;

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
    msg.setTimeStamp(0.493253140293);
    msg.setSource(59714U);
    msg.setSourceEntity(244U);
    msg.setDestination(1539U);
    msg.setDestinationEntity(61U);
    msg.possimerr = 0.360985160836;
    msg.converg = 0.256911850748;
    msg.turbulence = 0.267344741492;
    msg.possimmon = 189U;
    msg.commmon = 40U;
    msg.convergmon = 130U;

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
    msg.setTimeStamp(0.410038860268);
    msg.setSource(37721U);
    msg.setSourceEntity(0U);
    msg.setDestination(902U);
    msg.setDestinationEntity(147U);
    msg.possimerr = 0.0993308317542;
    msg.converg = 0.609554345595;
    msg.turbulence = 0.696830912117;
    msg.possimmon = 179U;
    msg.commmon = 233U;
    msg.convergmon = 143U;

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
    msg.setTimeStamp(0.428924043112);
    msg.setSource(65439U);
    msg.setSourceEntity(187U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(17U);
    msg.possimerr = 0.408697726552;
    msg.converg = 0.188521194562;
    msg.turbulence = 0.272656817212;
    msg.possimmon = 252U;
    msg.commmon = 32U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.775918262422);
    msg.setSource(38671U);
    msg.setSourceEntity(38U);
    msg.setDestination(20512U);
    msg.setDestinationEntity(179U);
    msg.autonomy = 27U;
    msg.mode.assign("WEMNQTWVMINPKQREKLUDLBXHEQDXAWUKCAJOZXOXSBNFOCFYMIYNROBYRKLJAIDHSHIUYCGZDVFXGPXQSWKSVXPCWCXNTFCOTRBKIPFBEYKPMKGTOPGUSQCHERNRQSBMJADUFYZGRVOYMJALHPT");

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
    msg.setTimeStamp(0.388426957374);
    msg.setSource(54569U);
    msg.setSourceEntity(100U);
    msg.setDestination(21720U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 0U;
    msg.mode.assign("XGJEUSHVWBBSJUKBADNNQTAUEFCTPOLQCCVFPOMQHMPJWTWWUBXKFDUYPJRBTQSYKZYEXMXXLCGPOTFAJGHZUDJHOBNWZOQKWFSGXCTSYCPSBL");

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
    msg.setTimeStamp(0.0437011224344);
    msg.setSource(55336U);
    msg.setSourceEntity(166U);
    msg.setDestination(54225U);
    msg.setDestinationEntity(218U);
    msg.autonomy = 181U;
    msg.mode.assign("SQTHBVAMQYBEBLEWHCKAXXGZJPFYJULESXTDVAITRAEDEXLWLORPLHDCNYYNWGATCDVQGKYQGPFVRAYLRYWOOJIMCPWXITDXGFWBNLKRKPDHWTUQZHZJQMFKUMEGMZJFRZBASIHETUZDNRCENFFEGAOSIDVVILUVOGRSBKMBCSZWCWZIAOBSMJJMKNUFXSVBVHIPPYDPPMIDGUUYQBGSCRKJFCZTILUCNQOTFNQTNRAHKPXXUJVOKMZWSYLQ");

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
    msg.setTimeStamp(0.128982928336);
    msg.setSource(58661U);
    msg.setSourceEntity(101U);
    msg.setDestination(47321U);
    msg.setDestinationEntity(173U);
    msg.type = 79U;
    msg.op = 129U;
    msg.possimerr = 0.138129759181;
    msg.converg = 0.25805409714;
    msg.turbulence = 0.323404665913;
    msg.possimmon = 16U;
    msg.commmon = 68U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.271052838765);
    msg.setSource(12282U);
    msg.setSourceEntity(182U);
    msg.setDestination(28672U);
    msg.setDestinationEntity(65U);
    msg.type = 222U;
    msg.op = 149U;
    msg.possimerr = 0.59057925143;
    msg.converg = 0.385765167287;
    msg.turbulence = 0.215329898968;
    msg.possimmon = 242U;
    msg.commmon = 196U;
    msg.convergmon = 169U;

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
    msg.setTimeStamp(0.920013398747);
    msg.setSource(43100U);
    msg.setSourceEntity(48U);
    msg.setDestination(5177U);
    msg.setDestinationEntity(35U);
    msg.type = 247U;
    msg.op = 171U;
    msg.possimerr = 0.0417784292729;
    msg.converg = 0.841057206485;
    msg.turbulence = 0.0727489918016;
    msg.possimmon = 159U;
    msg.commmon = 80U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.788966714713);
    msg.setSource(22601U);
    msg.setSourceEntity(191U);
    msg.setDestination(52285U);
    msg.setDestinationEntity(83U);
    msg.op = 30U;
    msg.comm_interface = 171U;
    msg.period = 27677U;
    msg.sys_dst.assign("SMCYKWFBKFHPFNXAFFLTHYTEFOCRPESNATODTMLJQIMOUZWWGKAANKTEBLGWSIXVPWAVABFOITMGVNKZBPQPGUPKWELGXYDMCEVBIJZQXIRQXRUAQCSHISFDJNVSCXHBDUSBHOWEHIMROKRPVJGARWBMGUPQIWUZYYBCNRCAJZMDJOYEXOAYDLDMJHEUQXUNOEHLVICNSGOYXCVVHDYDYCRGKTZLQKPXFLHRSBKS");

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
    msg.setTimeStamp(0.156016695937);
    msg.setSource(16706U);
    msg.setSourceEntity(155U);
    msg.setDestination(33590U);
    msg.setDestinationEntity(154U);
    msg.op = 131U;
    msg.comm_interface = 60U;
    msg.period = 16947U;
    msg.sys_dst.assign("HTIDUNMXIACOBYVHMUSEOKCSEIFGSODLBALIYORGRHZZPSSEPEHLWBLYBKTAGBXQVNHTZACRQZRNHGKYNW");

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
    msg.setTimeStamp(0.355778729191);
    msg.setSource(57247U);
    msg.setSourceEntity(90U);
    msg.setDestination(8025U);
    msg.setDestinationEntity(244U);
    msg.op = 208U;
    msg.comm_interface = 94U;
    msg.period = 11975U;
    msg.sys_dst.assign("LITIRHZNIOXYOMCKTMGUYKFHNOHLYEWWNBFCERCNTKZBFFEYMXLPVBKLDCUQQFZELQESRZNAJQDWACAVWJTJYCPGNJPALGPHQXJUNVPUUZRAZVYR");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.452250230472);
    msg.setSource(58365U);
    msg.setSourceEntity(91U);
    msg.setDestination(45901U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.605029123203);
    msg.setSource(8554U);
    msg.setSourceEntity(35U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.539839297166);
    msg.setSource(60550U);
    msg.setSourceEntity(77U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.889112212735);
    msg.setSource(12947U);
    msg.setSourceEntity(233U);
    msg.setDestination(37255U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("SCRRNUCVLSSMUDHAABNHFVOEOXHCFGVPLMUPWVTQEZOPEYLRXXPFIZXXECLUALQPDATGNYXJSRUQMTCDVIYEYWPRGDUFGRSKGYQWVMUOMWQYZICCWJLFNFUJXXWNVIZNIQIOYWJMNPDFCGP");
    msg.description.assign("TTIBXDCTQGALZKKXRECQBIYPVBDQQNURZBJMDVAVWSJRENNTQXBMPWUOAUOMIYYURQRNKXUZPJTYMLCZWGEFFJNPTXYMOFVSLLLMIABFPQDHTYGJTXIGSOFLDARMKJPYLZRKBEFFOEOELIWAODEWCSNNOZOHFQWXZDUGCBAIUKWUJQHYSGZPELPHHYJMHQNEKUISVDAZRCSGUKP");
    msg.vnamespace.assign("BBBCDFJNDMGUOIAXTIKSYPAFTQSAOQISLLTVNCJMQAJBERCCLQBSDILVYWOGDYBQNWZXVHYWUUYXOAFHRJPFVKYQCENIMJKGMZHHYETWHEQHV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KUDPJEYAUDSYGAFVWSSXCMJEPKSDJXJSNSCNHKBVRIIDONADGZALZJRPCMMQBRBOUQLDXWROCZMQNJTSYKNQMQTHERTTMMXHIYKWOILVVOGGAWFAOWVNGWBFCCGLKYZZALQAV");
    tmp_msg_0.value.assign("WHRKAWEBPHDQQJCGOVMKMYJDNIELEZTXYIXFLVLEBPKBETCACPOOUEVJGLHDSWTTQZRGCYFQVMDFZBNOPVOKRWXNKIVPTWDYPHDQSQYTNVLGBUZLXFZTSUCKUUJLUYFWGGCGQFIPMYRFZDIAUXJSMJBMK");
    tmp_msg_0.type = 18U;
    tmp_msg_0.access = 139U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UBNKJIJKLAKHQSNOKZLUYHGESVFASQSFOIGPRXUOHR");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YMZVDHNMKULJYAMFMENWLEVLWIPBHYONQZDVUKIRAGXIFBRIAWGKZEGLUUMDQTBGZBOGHTURUVEVIVXJNTSJQEOCUXGRCBAWELYIEBKFVDZLHWKPCOHVH");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::GroundVelocity tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.validity = 196U;
    tmp_tmp_msg_1_1.x = 0.295195338748;
    tmp_tmp_msg_1_1.y = 0.428161579299;
    tmp_tmp_msg_1_1.z = 0.867762749908;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PathControlState tmp_msg_2;
    tmp_msg_2.path_ref = 583806169U;
    tmp_msg_2.start_lat = 0.565474639405;
    tmp_msg_2.start_lon = 0.213778531071;
    tmp_msg_2.start_z = 0.457006331862;
    tmp_msg_2.start_z_units = 18U;
    tmp_msg_2.end_lat = 0.599368771956;
    tmp_msg_2.end_lon = 0.521519380574;
    tmp_msg_2.end_z = 0.263177912293;
    tmp_msg_2.end_z_units = 111U;
    tmp_msg_2.lradius = 0.523898269006;
    tmp_msg_2.flags = 80U;
    tmp_msg_2.x = 0.609559801543;
    tmp_msg_2.y = 0.885201617195;
    tmp_msg_2.z = 0.988493918673;
    tmp_msg_2.vx = 0.974963269813;
    tmp_msg_2.vy = 0.438079534553;
    tmp_msg_2.vz = 0.418197954836;
    tmp_msg_2.course_error = 0.492895508101;
    tmp_msg_2.eta = 17475U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.171455792808);
    msg.setSource(26785U);
    msg.setSourceEntity(247U);
    msg.setDestination(39421U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("XIRONVLGZURDWGIPZTLRYFAQBEKOASAYGOJULTYLBOYJGLLLNTTXDOCLZUFOHTZJKRQVYCCIAVKQCXPSEKBPHTCXPZTNHSFBCHPSWXRFRQVADERMQWEGQTFPOAUAKWMBIENZNLLNWPXVEBGHIDQVYYFVNQFUWVZEMEUJHJHUMXWRNJKFPXSBDZUKRJBYMENBNJAYHTWVDSCIQXJBVMMAMWIGICKUDOCKOXAOQSGHPDM");
    msg.description.assign("GBZYAIGNHT");
    msg.vnamespace.assign("JAYPPEELCGPDEHRVOHCTNURNZOHGGRQOTVSKQRKUBXULZHFVGKDXEYXJKFQSQVWGLWLVRAZDYPBBQHXIEIJGRNRLPXZOXGMIADEBFIGFXLWOJSAGKQUMZAPSSCMCFTWDSNXCRTPRJZWVMFNBYIKPSYWANLTB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NVXKUKTDFTUOIGZTTZLOLFNPLWEFCPGGAPYURMEXFWLIYGDGRPIQMXMDGWDIRIFCIOBMSGLIOCXAYRRNOBAKRUVXPOBYCJDMNECASETIZSKQVBJFZQNXVHMYEAUWSWWFJIKQDBDVAOTMAQGMXCP");
    tmp_msg_0.value.assign("ZGQSROCVJPSYJHDRSKHLQHUNNBEXMAWSMGSBNITZAAIXXSKXGZBGIZFLFFVKRWWJISCDGCJYKGUVHMEDVBLLRJXAOYEURJOMZWINYNYGEROUHHZLPAUTDYKRQMTOCUVSHZIVRMVAYZIXLMYUEWMMCZBFXLXNEXPOFFPPOQXESWDLSLPBHNCJYATRQWJFNBDUETBDKVEDAPFNPT");
    tmp_msg_0.type = 39U;
    tmp_msg_0.access = 240U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FGJNLPBHQOYHZBKXREQXQUKCFEMCAMMPPOGBODXWZHHTNLDPTYQDVCFRROAZJDFPIQITVGGGNXMGPGWUAOFUVLDYRWCTXWUUQLHJLXF");
    IMC::Docking tmp_msg_1;
    tmp_msg_1.target.assign("GLVWNRVMDWDNHMTABITYITYPOHJLULFYBAWFUBAOVNIGWVWCXCVCINBDJEMESTBWLXVEPODMMDAAQYIPFGYMORSWTS");
    tmp_msg_1.max_speed = 0.928494872805;
    tmp_msg_1.speed_units = 16U;
    tmp_msg_1.lat = 0.54431920104;
    tmp_msg_1.lon = 0.610701100028;
    tmp_msg_1.vehiclefunction = 134U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CoverArea tmp_msg_2;
    tmp_msg_2.lat = 0.660249621759;
    tmp_msg_2.lon = 0.329012210395;
    tmp_msg_2.z = 0.832619137472;
    tmp_msg_2.z_units = 94U;
    tmp_msg_2.speed = 0.956919624619;
    tmp_msg_2.speed_units = 116U;
    IMC::PolygonVertex tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.224381919235;
    tmp_tmp_msg_2_0.lon = 0.494968791771;
    tmp_msg_2.polygon.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("KKVDXMUUGMHTQMNPAGRJFWEEBYRROTSLTDOSNWUVPPXRZBIAHWCDCGMPLSRCABKMXVYNSZDAYZKDYSOUJLVALZRGYOAWZMXKKEUKYNAFPIJYSBUCQJMFLZLYEAUV");
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
    msg.setTimeStamp(0.0479207639069);
    msg.setSource(51846U);
    msg.setSourceEntity(205U);
    msg.setDestination(31647U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("IDGPHWZQRXUCRKIILYESYDZLPPIBAOCNXRWFKUQEAVBIFNSMGLZPZMKWQYFSNDYMCQVNKHUYEIKMXOCCTWTFVSIGSBZXFZWEJTMRTKDFUCSHOVKZSUDFPYESADYLE");
    msg.description.assign("IAINGEEFAVKGYVLHCHJLXWENQCNPAHDEQEJGBUKZUNAZGADWDNUMHDJWZSGGUMJAMMGNLGIITUOQOSMTWYTNRPLTUPWXIUFLCPHZYXCKWLDXVBQTZSFXJOYLYVFFIFSBBZOYTOLWRZPDVEZSEKEHAFAQBNSOCWSJYCEAO");
    msg.vnamespace.assign("URBWZJEFIEQLJQYTOKGGQLWZPDGPJWHYAMZXYVMHITHWTSNIJOPCRMUKMCFPXHHLUDYLVDKUCXUYDZXZZOWGPOAFJSWBNSAJSVKANLKDABUQIJKJHOCJEKCLVZXSEWVIXVXNGYCMKBOTPULMUORONMAIETCIDKLTNFXBTGPNSTCEDBDSIGVSREHPAFDK");
    msg.start_man_id.assign("MSGVCYXBZDPRYCXUTSPNSKMHXMJGRPPJIPMEIGRIWASDBZIZAAUGLRWVTONMOECQEURTGFANNVFOHDCLUGFBGHWNXQTASUWXARLJHBBKKIKNRNTBCYVLAFCRQSUDCAAZPLQTEODHUYFQJTLDRCTOYBKCGIESIXSHDEWUIVNLOKVHMTNVSWUFFZTEQYPEYIWSYFGOMXJQBQYDYGPAIXKEHWPHLVDLRD");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YNHQLKXGVHQCPIRVLGSINMXTNXQDFDCZFOPWZAJEPVUJSSYHSDIKIMRFIAFASQJHFKJWTWNTBQEPUXMVHTLCAPPBGBMGBEGOZMOCAFUQZZVENARVBODNYAXDXJFKFCJTUDPBZZLTDHRSBCBGXRYKTOLEJMONVUEPMWMRTJTY");
    tmp_msg_0.dest_man.assign("JRZXZOAWMHDSYNIXP");
    tmp_msg_0.conditions.assign("YCSNBRDYRJKELZXTCLRPJBXJDPUFRMJMFVUDGWTIOEFZPEEHRZIAJNNMIM");
    IMC::TrexPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.reactor.assign("IMMKBPOTNCIDDXBITURMWRMGWDJEUFERLFFDRZOITQPQGDQNWDKHHSFAXQCHKFLWRYXE");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::RemoteActionsRequest tmp_msg_1;
    tmp_msg_1.op = 11U;
    tmp_msg_1.actions.assign("AICQZWKGQRPHTPRBAZLADSADRKVJLPUYOXXKHHVCYSJSFIZGWDOKLXIFNOPRQFPJYKBDNTDCSHCXQZQMMBYPACKMFINWOZIHGZWUEKUAKQCEICBRGOD");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PH tmp_msg_2;
    tmp_msg_2.value = 0.243046635467;
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
    msg.setTimeStamp(0.186706266604);
    msg.setSource(29732U);
    msg.setSourceEntity(130U);
    msg.setDestination(20181U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("DJOITERPZYCBINOAXWVIXPLMKUDJWUKYFZJLBDKAPIWKSOCSCHHEOLNLVBVRCSJJZPEORZUCTQOGCZIZYRTTMWHSHFXBXFGDHTGHOWBWJEQXFGPJFAUVMYLTEWNSTTYPVUFPWRBTHLYQSNKYJBVMQCA");
    IMC::Docking tmp_msg_0;
    tmp_msg_0.target.assign("PHNZOLGVVKZKDGOKITWMDSVZKHHXJXSORRDNNIM");
    tmp_msg_0.max_speed = 0.953847457064;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.lat = 0.604565183326;
    tmp_msg_0.lon = 0.369123388078;
    tmp_msg_0.vehiclefunction = 111U;
    msg.data.set(tmp_msg_0);
    IMC::GroupMembershipState tmp_msg_1;
    tmp_msg_1.group_name.assign("UADALOTJMWTJAKRGJMMN");
    tmp_msg_1.links = 1597348441U;
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
    msg.setTimeStamp(0.178288689222);
    msg.setSource(40926U);
    msg.setSourceEntity(199U);
    msg.setDestination(292U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("CVSUXGWNXTBPBRMUXDDIJXVGRAFDPYYLACKHRNX");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("FIPVLLRXXSSBXYPADYPNLCFIBEHAMOCECLNIGTMUSQUGRKSEWFCPEIHYEMPPIJWTWSEMFLOYMGJHQBOGZORRFXMROHPIHAXHZWMOKEBDMNSHXVCTXKNJQIVBLDFAKDOQMENTGYAKCVFUESRKQIVRLSJTYZUBHZEUNYR");
    msg.data.set(tmp_msg_0);
    IMC::AcousticLink tmp_msg_1;
    tmp_msg_1.peer.assign("UDYTUPWRTLAHLGYPYMPESAOKNRLUIJPKJZHLHFCXDLQTTJHIDXNIBAYEFNAPSHHPADVVSJPVLWILJRNJIXTKJZHHVFDBXRMZGLILWGWGFCBRYNTYGZMFKNSOBEEUZCUAZXKJYDGFXJYMVFDQGBZUKUSCPELFBVOEQEICONQSTJWNTAIPWXEDUNUMISXAOQQRZIQGFXDOMSQCKRBWYGKBCOGNMOUCMXHQFRZAZDMMVVCRTBVWROHYEB");
    tmp_msg_1.rssi = 0.16396223238;
    tmp_msg_1.integrity = 42718U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleMedium tmp_msg_2;
    tmp_msg_2.medium = 232U;
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
    msg.setTimeStamp(0.464069707023);
    msg.setSource(10637U);
    msg.setSourceEntity(49U);
    msg.setDestination(37215U);
    msg.setDestinationEntity(205U);
    msg.maneuver_id.assign("MIDRUFKQTHUUWTHNPDLAFMQMWOSELAKONTBIJVQRCHWOXFQYZVJHSCYAWFDGOGBATCMPAHMXZRUKLEGOJPJUSQDOKSZZZBNIYBWUMYYPDHAOWECDJXVEVJDBGXOKKRARHXCPQUSMZXUEVOYVTBDHXJXLEGQGBYZEPNRINEFSYSGYIIGQNVCBATE");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.617486560118;
    tmp_msg_0.lon = 0.965878233423;
    tmp_msg_0.speed = 0.368831059346;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.duration = 46527U;
    tmp_msg_0.sys_a = 52309U;
    tmp_msg_0.sys_b = 64563U;
    tmp_msg_0.move_threshold = 0.928239028987;
    msg.data.set(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.573086367555;
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
    msg.setTimeStamp(0.30788843423);
    msg.setSource(50032U);
    msg.setSourceEntity(27U);
    msg.setDestination(54579U);
    msg.setDestinationEntity(206U);
    msg.source_man.assign("XFJIBORPLAKYCRRZJF");
    msg.dest_man.assign("VXIOIFGTZGAGXLPKNATHIOFTFBKVIRDTCMEKTVDCOHKLXQF");
    msg.conditions.assign("BZLANIEUJFPEHLAOWUYUSMOCDNLPGYRGGTYQJPJUSTBDFWKVQQQOVHFPXCSKLCEGRDO");

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
    msg.setTimeStamp(0.382408223258);
    msg.setSource(13932U);
    msg.setSourceEntity(83U);
    msg.setDestination(47451U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("PZWCVGIZRTTBPCMETYOBAHVRQJDFDDOUERCSQFSAUBQPXRCWFUYAIXEFHKZXPGQGIDQYLIAEJZSSBIKIKAXMBGFVWBYHGTTHJLSGKLOQOL");
    msg.dest_man.assign("EOJMKJBUPUFAOJAMKHIEDIZJEYRIISFCPTYMSQHAQWCO");
    msg.conditions.assign("TFSATVXZLMXOMVDOHYZYBVWQYAIMODOILVNSCUXWYFREBJNEBEKRWSTCIHFDXGFPKULJNXZXLWVGEROEJRUPELFINCTDMQWHGMQQLZNTHTWPDTLZEGZSHPRLPVGCPHVXTKOQSJZVIDJUPNIAFNBOBQEQQBXIYJKGWQQYOMJKFKNZCDZLVILHRACROBSGURWASAPUYUKCMRTNCSBIUEUKHJCGWYPUYBDMAXHFKAHZ");

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
    msg.setTimeStamp(0.992832277748);
    msg.setSource(50452U);
    msg.setSourceEntity(169U);
    msg.setDestination(35715U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("XWERWJXQGIFLOSWIQPQTAVUZINFDTPCXESTFVCMHYSNYBNONHDWABNMUKYUURXLHYOXIELSHKHWAFHOBNYSBEVXJRZORXIHADHQSATEOZLVPRBANMQRSUSNOVWJBFVLHMDEVJZVOGWZMTCSCEKGFWGBXJGAEARUGKOLTXQKBTLUEQZSCRNDVPADMMLMDZCCZKGUOJUDLKPCWAEVGFYIJINPUTCMKPT");
    msg.dest_man.assign("EYTWQVFAALIFMWCENBPEVMULKMETFNEKIKICBUGRZSWZDMOOICGFAXWCLUOUZNOVADVDHHQPZOTQYBOYMRDXOUQECMUJBRNRGQBZHJ");
    msg.conditions.assign("BERQBVUWKNLITRZKYSPGWATQJDBFOMGLKEWJPDDOCAWHGIUSFVKAAXCJBZIERTFUWQKWCWZTVULBNJYFZYKYAPVFIMFKBMATQFODZQRXZPOJICPHUPIQZHXRJAYTOYADURVRNLFSHQMUTMIEFALOUGDLLZBNDMPPMIXRENXMSXGVXWOKEUYQPKGX");

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
    msg.setTimeStamp(0.581704224052);
    msg.setSource(39021U);
    msg.setSourceEntity(213U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(183U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CZGEUFMIQKFFMHNXJCNEVAGHJHLKBFDCWTDBAXJHSGSMFHTIPPJSWOZPYNTLNOGPNPFLKAVIDZLRQFRUBXEQAZMHXLUJZLXCSKGXIQMSVEWNACPIKJADBQGPOHKQWACMDSVRYBVMUYRE");
    tmp_msg_0.description.assign("UEKXPHCDYP");
    tmp_msg_0.vnamespace.assign("IBXOIMCAYWFLGKPHMWRWHZLZUTYEDJLDZJGDHXSAANBNEOEUVQVULGIHEXWPNBTCJVQFNVAGDNCRFJYWTCXLLBZHMIQSPPLTJESGAHRXXRHZGOAOQVEBGUXYMBCHEUWPOFICNSKMTVRUAQZLQRCKFQQXDUXNMKEYDPFPRRTSOWPZGKOIN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JGCYIJYWYKIEFQIOGOIQDGLFWETBIWISCMGGGZVTZHJCMYYCGQUDOZKSSCKKDMNXVRADHQWJXLNSVBQLGFWHQADSATCBUPRKLYPLKKVVWOAEYTFULHHEPXNNIXHZDOMMECPTHORKIZOFDHZNJRAPMNWPFWAKOLXGMZZTLJXBUCUVSD");
    tmp_tmp_msg_0_0.value.assign("NOPMVGJIJFRBQNCMZPAVRIYKQHAFVFWFAOMLVCLOOKQUQOYQSKAOBIDFQDUDODMJSXGKTRLQBZWSBRXWEGLPBLWXZSHBSZIZOCZXDWGSXXGGCUUTYFTMFJLPJIHFYKLBJETHILZLGEHA");
    tmp_tmp_msg_0_0.type = 185U;
    tmp_tmp_msg_0_0.access = 92U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ATPBXEBSKLWOQLTDUZHVEXZKKJATGLJCCYDFEZYRQPJPSGRBFYWXTWWNIOFCWQPHKZCITEVUWCUBEGDRNTYSCOXAOXVBZLYUKJEKUFHKIHBLNSJKSAOZFVFUOZGRIPOMZGMBLMXFDPQYD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IKHECVGYXNHHVFOCVBFQLVRMWSXHGJSKRRYHXZQQBJDQDESMLQKNMMRJOSVREAECGPUNULZALDGZIYPQBWASVDWSJWPPGBCFJPBYJFEZOIXIKBDDKGEBNNXDJWIUTWZTZTEHCECIPWCTPVHFUXRJTYWO");
    tmp_tmp_msg_0_1.dest_man.assign("FREWZPDIGPGSVBEVCDRPKVSCNWOJLFCCDSAIXRTPVEDEMTUQTBHNMFOFOGAFREKNWRCOMJDJBLPSVKZNUXJPZAMHIREELQCYFRTYJUSBXQZJYVAZUXAMDFHVMXBWYDZLKVUQADPNOOHOMYACGGNNLEK");
    tmp_tmp_msg_0_1.conditions.assign("AJUWAPDUBWUPJIGXKVIGF");
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
    msg.setTimeStamp(0.149067865954);
    msg.setSource(18456U);
    msg.setSourceEntity(244U);
    msg.setDestination(61972U);
    msg.setDestinationEntity(39U);
    msg.command = 197U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LTGKAYUIRKVOAWZNOLDHMBEPHUUEDLCBTXRGMCYZYEQRUVJHZDHPSOWYACRQFNKPSXJRBDNPKQTNBPWDJQMSRMHBYKENIYHATGOZBFVYWWTLFEXHJZXJIWSQEWCHEVXAXABXKUREZPUZBRFKZCCMCMEYNVGKSJFTZGTDIUJZUQIFTCLLEGLVMFMHNCSUBPAFSUOSWPIGDOPQADLIVJOHGVGIQGAKYXIFOOABLODNXQSFYVWKTWNN");
    tmp_msg_0.description.assign("ZDUPYKRWCUGXPHWBAQFSNYBMOSIVNIUZWYINCOMEVFXTWUTEACZKHLEUJGQSZUEVYJGKJSSDRURQKAYJ");
    tmp_msg_0.vnamespace.assign("FFYYAOKECPIRUZXHROI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FSCFHPRJZGVDDEINBUUROTCXCJIMHBLIMZZZZCAIYVWZLUNGNMQFCCZLNHWSMBQBUKYUAOALLOLXQEDPBVGFCEVOOBBKYYLEXYEGQLTHWLHHWZWX");
    tmp_tmp_msg_0_0.value.assign("CKZWWAJBUXHZVYGUQRPPZQHKILCNHDUETOBAS");
    tmp_tmp_msg_0_0.type = 89U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZZRLJVOSATEQEFAICRAJKQWNMBOIPPCCCCJXXUUTGLYTRKZYYEZSJAWBQSGEHRVSMOBJJGPHRALNKLDLFFZXDTIFNQTHYXLVUBLZHBLUAGDBZCZPASQFKKRFSOUHXUWJJPQMFQKNUEUVDXNVCDKMNVUWTKCDGIHWYTDAYVAGFCPOGNHRXXNL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LEAMIKEVPBLWUBXOUTRVCQITHDFUMWBGFTTRTSACKRXJCBDBLQPDOWUQYLMCEGJZBPPQWHLGUXNORFZASWGOLMAMSGRARAHBRTGSHIXXNAQISADZYFNIMAVJFJIOTCEWSZHDUZOHWXXVMCIXDBUGOVCHNWYDQVCJXPKYIEKLZKYJRWERZQPY");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("XGFFYRFYTHUONDGJAIWEQZQAMUXAIHVBJEIUESLYLYDOAGSTBYCYPS");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("MUSNNAYGSWGUOHASJEAPECCSLSVCZXIJASQKTPHVLAGJQDDFMIREFWZLNEELXMWTGYTNWKVTRKJYBYDCBOFRKPHPLPYEDJDGLMQKXTZZQORIINDKJ");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("IEEHFHJGSHNENCTMFCBMSVYPPCYMVFAXFHWTQVXFTCOOVYPL");
    tmp_tmp_tmp_msg_0_1_0.description.assign("WSXKYSKMTMTMQBHHBOLVEPTRGSZWAAESPKXUNHDGPNEKZLCBSECJZARYGONORTLTTVOHIRECLXEIVSLIFMONYWRBJHNFPWUJQAFIQMAHUCOSADYFZVBWKXEYWHKZGDTRIUDSLMCAKIVNPXHJRPAMBJZJOICXEFNZTCFBEGIQYJELWLVPGTCNKOQQNZDQBDIQWLYBFVUAKXMSGGHUFYCOLWSXMPVVFVHXUPDMQFUKDPYXQDWZINJ");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.498005989481;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.0508123405112;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.81623769082;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.0151922772331;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 51786U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.86635971362;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 9086U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 50800U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.357613700282;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZTNBIFOIKUPGNJSNARDJBRFCDINFDHAVIOPYUAZBUQUQYREYMXXVJMGUHNDLIKMESTCBKFIEMMRCSWODSYRHQHZPPRZLWDYXCTICCAYOLHYVERWTGNJXCLEYMZCXPJBGBTUNIAMXWUPFOWOXQLRQFZVGNJZKAIAJWTGWAKVKWQLEPOBSSDAYFGZBOKVXFUWKDOANZELDHCDSHHKTUGGMIFURQXEZVVYGVQMSBHTJLLTSJPSJOLV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ExtendedRSSI tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.259298879874;
    tmp_tmp_tmp_msg_0_1_1.units = 114U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Formation tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.formation_name.assign("WTZYRUCVBDRIGURQMONRBAQKXYHVVHBHEJOIKCETOCAAGYGKMOWMJSJTSDHQDXXWDKUVPGHNNPDFNCTARELHMTQSEDEBSVIIRYEMFAQAUSNBSJBPVAZG");
    tmp_tmp_tmp_msg_0_1_2.type = 221U;
    tmp_tmp_tmp_msg_0_1_2.op = 225U;
    tmp_tmp_tmp_msg_0_1_2.group_name.assign("ACMNFXBONQJTWYFAQBBAQAOPG");
    tmp_tmp_tmp_msg_0_1_2.plan_id.assign("GUFDLXPOKTAMCHMEHVVJKNNWAQTPJDYKPGNVRYVNVSQM");
    tmp_tmp_tmp_msg_0_1_2.description.assign("DGYAUATHBUEAFWFVFPCFIDYFIDMYAGMRTESXTKYIGMKHLOVHRJXWWMVRWHXHHUWGIJLNEDBRSTQPORGOIAUBFSAEJKSNYWEURFXSBQHQNJKNPJAIZSOCGQDJKURFUGIVJVQLZTZLUW");
    tmp_tmp_tmp_msg_0_1_2.reference_frame = 37U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.vid = 42322U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.off_x = 0.233424371281;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.off_y = 0.211383719985;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.off_z = 0.0082210510566;
    tmp_tmp_tmp_msg_0_1_2.participants.push_back(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_tmp_msg_0_1_2.leader_bank_lim = 0.769518525341;
    tmp_tmp_tmp_msg_0_1_2.leader_speed_min = 0.285158836073;
    tmp_tmp_tmp_msg_0_1_2.leader_speed_max = 0.312793872034;
    tmp_tmp_tmp_msg_0_1_2.leader_alt_min = 0.84518649817;
    tmp_tmp_tmp_msg_0_1_2.leader_alt_max = 0.84872780997;
    tmp_tmp_tmp_msg_0_1_2.pos_sim_err_lim = 0.927184155793;
    tmp_tmp_tmp_msg_0_1_2.pos_sim_err_wrn = 0.720199296648;
    tmp_tmp_tmp_msg_0_1_2.pos_sim_err_timeout = 49804U;
    tmp_tmp_tmp_msg_0_1_2.converg_max = 0.878967125205;
    tmp_tmp_tmp_msg_0_1_2.converg_timeout = 34154U;
    tmp_tmp_tmp_msg_0_1_2.comms_timeout = 18021U;
    tmp_tmp_tmp_msg_0_1_2.turb_lim = 0.930333565333;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("VHRZASTGDBPGKZQSWNXUKQRLTOYNHHGRTZQSEKYPSBCMNUEDKXXVXEYZSQIFJWRLIAOPBXEPFDLLZNBBIYOTGSCESCEPSCQCKDCNXIASWMNAKWQAHOGDMHATHPRLQGTZODMVTYLTOBBDQLCJJTUGNUIPWMIKPUTRPWDWDBQFJLWVLLJUFYHFMOWNVBRIYFKCMJVCNMRKUIIKYUAYOVVBEJXXHFYQGAEGNXMZWSECAFIEXHOVOFGFPJJ");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleFormation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.0102139985153;
    tmp_tmp_msg_0_2.lon = 0.13646682066;
    tmp_tmp_msg_0_2.z = 0.818541658822;
    tmp_tmp_msg_0_2.z_units = 21U;
    tmp_tmp_msg_0_2.speed = 0.490438190559;
    tmp_tmp_msg_0_2.speed_units = 18U;
    tmp_tmp_msg_0_2.start_time = 0.946430133429;
    tmp_tmp_msg_0_2.custom.assign("TXVWHDRFLYXKCQLIBPMPWARZKDWWNBPIEIKAFACVQLAGGKQSPLROUCJRYQTUSUR");
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
    msg.setTimeStamp(0.27843821848);
    msg.setSource(3263U);
    msg.setSourceEntity(148U);
    msg.setDestination(61170U);
    msg.setDestinationEntity(172U);
    msg.command = 176U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ERPHSDNKHWSSGEEIZBPVNCCKIGNWRWKXWBEVAPQAXHIMLWKFPGXKLDVUOUHOMTXBSGYZZQVINQOQUFCKGWOTLBYUBBVXUGWMLNRRYDETNNQPDPGKGEMXOZUNDKADYEMYSYAUZQTEYJCTFUWOHTZDZXRVGFOBJZZSRJGAMDJKPUYXLEIFDZAIRCPACTLYORBPV");
    tmp_msg_0.description.assign("MLXAEIIJKPTFZSRMNBXOIYDIJKFOYWOVRDDYTPPMFGKFISZXABEQQUJEGRNEIHKWCMWJSNGRUGMQCOJWPSFVGVQTHHOTQDSJLBDGQLVCLBKPDAUHBNSTFLXKLMUELKJPQXSQUFUWAOZKWPBDOGBYXTBCUHDZXRXAVEEOAYAXECRPNWCAKBHGQNBTIWYYHDDGLLHFMWMSYYZJSOSONIFHGVUZRZTNJCEMRXKZCNHACVWVAPIC");
    tmp_msg_0.vnamespace.assign("ESQBONIPMKVHKSJZTVMNMNAMTEQTLEGZCJPGXGZUBLVUCYCYWDTQZPYBRLQMWNPOJGWFRDHPUCVFECJUDCTBKGQYRBVZOMPCJAJTSSNUAIHTSFKRLPBHMBSOVFXIKJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DDAOKIUDKYBGUBLHWIGAIXGVHHRBZJTXCCCPMMSRIFKZSQZRYULBJJGMTJWKEQKNUCKFOYOJISQDRADNPNMFBLYTBANPNNTFQZGEQKXRNWEIXVDZMNUSHJHRPQWGSLAROOYTQTLIRLXAWPBEZZUDZHXTCSHFFBCFFXLCUCYSVSTPWGYXJGIVRPEWSOP");
    tmp_tmp_msg_0_0.value.assign("EPLALHFIWKCCULYQAOVXDMZBTDEPWDHPFZRQEWTOXX");
    tmp_tmp_msg_0_0.type = 13U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RNTTMVNUFRHJVRBICXXPAXZDOYIWQWZCKBGUOFQKYBRVDLZPYUSSBWLHDOYPEJWNBMMJCHUFNPPXORQIKWFBCSNRUUQILMJZAESLIFGPZIQSLFBATKQUKOFOQDMTADCDCTUIZXNIYWVDJGWBGKEKHLXATEPYXSWJNHZLMFHYTLJJG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ASOJNKBVDWQCZFHQNDXUKDWZFVESOFHEMDISWOUXTKARKNTIKSXFRKSYAAXUUBFBRJVNGLLGQUAQFJQMTXBECADIDUNYAXYTMLWIM");
    IMC::Land tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.50469431692;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.693590858545;
    tmp_tmp_tmp_msg_0_1_0.z = 0.793033520137;
    tmp_tmp_tmp_msg_0_1_0.z_units = 101U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0557778489584;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 226U;
    tmp_tmp_tmp_msg_0_1_0.abort_z = 0.365051736935;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.924272716646;
    tmp_tmp_tmp_msg_0_1_0.glide_slope = 155U;
    tmp_tmp_tmp_msg_0_1_0.glide_slope_alt = 0.997043875591;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IJQYZEDEOBMHMFYXWSUCCTFPZXYNVCKWHTFXLHIOOWPVEZXCCQEHPMLADGAWRZIMRMNUCMMOGTHIRQVFOJGGGPUXBGRKWZWEXATCYKNJUJGDCOWLURFLSNNQCY");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Abort tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::HistoricTelemetry tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.altitude = 0.214287806531;
    tmp_tmp_tmp_msg_0_1_2.roll = 63221U;
    tmp_tmp_tmp_msg_0_1_2.pitch = 42436U;
    tmp_tmp_tmp_msg_0_1_2.yaw = 36414U;
    tmp_tmp_tmp_msg_0_1_2.speed = -9630;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WGPLCJLRLJCHKSOEIBXRBZAVWCGOWQFOFHMZENOAJJYWFOMDUELUPSRENKBMDBHZNHPIKAICOGHJGERBIKAQDLPQUQNHGFVZELDGHASRSAORLVEKSHXYZTQLF");
    tmp_tmp_msg_0_2.dest_man.assign("LFUAAVHQBMESAKMVMYBGSNQERRMMKXHMNBSQNLCFVOHNNHFJBLCBXHTPBHUKIHATNKWPDOEGIGYCJOUPHXEXCWLTQJFBBFQNGIFRYDQEOCEAWAKQRIAXXFTKPMGAUPCDIUPVYUSWFIPVVVRJDKWOZVNHZUALRVZDPURNGJQSOZEM");
    tmp_tmp_msg_0_2.conditions.assign("MWMRPAMJXGYXKINBJPVSNDHVFUUCINRYFKEQNEPPONJJRRVWJR");
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.789804682881;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Phycoerythrin tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.414261244651;
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
    msg.setTimeStamp(0.444165740181);
    msg.setSource(51060U);
    msg.setSourceEntity(7U);
    msg.setDestination(20327U);
    msg.setDestinationEntity(188U);
    msg.state = 163U;
    msg.plan_id.assign("HCKSXLYGWQGQDTBFYYLQEEPQSAVBGCYHPYTXYLPRSNDBVLWDSAISIIBUOCEWBJKQYMZNNSKAEKRFNTHWZOVJSIZNJBQOFVMECIHBFBMJOVNAIGLDCFHXAUPPLRQOMJDYJOOALNMDAXXWTXMFWEWSHZBVKGCOVURMKPURUXCZKDRWYJFIIJLHQUHIQKTGDXERDPSI");
    msg.comm_level = 237U;

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
    msg.setTimeStamp(0.870918381594);
    msg.setSource(53446U);
    msg.setSourceEntity(179U);
    msg.setDestination(55106U);
    msg.setDestinationEntity(49U);
    msg.state = 115U;
    msg.plan_id.assign("RYIFNWELRMKJFQWAVUTSCKDSISGYQCGGWPIREXLVGMONLIAUW");
    msg.comm_level = 185U;

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
    msg.setTimeStamp(0.77906084294);
    msg.setSource(17426U);
    msg.setSourceEntity(126U);
    msg.setDestination(34735U);
    msg.setDestinationEntity(94U);
    msg.state = 51U;
    msg.plan_id.assign("LIFCIFTYDLEMYRNBXQZAGZGZHTYRBEJNZMZFJFQDGLEYHOWIQFOFJGDVXVFGZWQWUWRSPFUYSHSIAOJLAIBTVWBXKXKLPADQTHVKNJVYXMGHXXIOMGBOMHDAUWPNNUCHYNOKSXSLOMJKJGARDQCCVQCPKPINQHUJPQYGHWODABQKPRNVRVTECXZGUWJUU");
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
    msg.setTimeStamp(0.0318423971877);
    msg.setSource(55100U);
    msg.setSourceEntity(112U);
    msg.setDestination(28702U);
    msg.setDestinationEntity(30U);
    msg.type = 24U;
    msg.op = 81U;
    msg.request_id = 1136U;
    msg.plan_id.assign("SMENVUSEZPZNIJYPCJWJDDIFIWYPALAFHYXJTTKYVWNKARDZDJLIWRLFVOBZQKVLAADQSAUROPNKCKZUUBGORCERRFPZQZEXHWDGXLJDMOTVFZQJANCQVYSQG");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WETILMLAFGQWPUTOCIZDXBUDKFFPOSIXQEBPRBIIJEBSRCUNKEVJYTYSAGXCBFORXDUBKRVWACXVTTDOYJJINIWEWEEQSIQCN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IMVHAGRMEGBKQSEKZBHWEBJCGRVDFFZVCFNTKLFYZNHLDMDBBXWHPAIAVGZQZSOTUCPMWKNIIYIWZFHFPLTTPSAOSDHDCMBUGLWBWRCHOXBBMZAJPMNXYQJQIAPXOYLNVXMQROXYDPDHNDSAJVMWNQOTVCWGJCMUJJZCKROROLR");

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
    msg.setTimeStamp(0.677124686988);
    msg.setSource(6669U);
    msg.setSourceEntity(27U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(162U);
    msg.type = 78U;
    msg.op = 250U;
    msg.request_id = 54473U;
    msg.plan_id.assign("TTRMIBTJYABIGGQJRVZMOEIEHHWFXMEVGADPCIDXBXZDPODNCOFHAJWETINDWKICTOSCUKLAXELFSAJWIJLWSYDYVQZCQUTRZLNETVNKQXIMSLRXSFOQTMHRKMHBCGJQRHFZWBQ");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("EVJJQJOKZJFKLHIWSPKHIWPGJBUPJQSREXEDZQDZCOKVDHDCGSCUQTAJUBLOZKWMBCWXHLTMPLPDBRWNWTNSCDRXBKYWMUCIBFNQGQYXCFCVMFRSMHGHEQUWVICOYGTBFDLRLGMTFMULTO");
    tmp_msg_0.predicate.assign("EACDZPBRMIACUTYTAUJQFLOYSQLCXVMBNMDDJ");
    tmp_msg_0.attributes.assign("FNPLLLHIRXSOWIJGCCMBWLZKFEBCBSUKFNEDOGZICPHZFJSIKAJVQRPLALWUDQXRBJVUWYFTFMBCDHSCKEYEZXABESNJMJGKVKPUXHOREXDYYNIDZAQZKNTEIDHBRDEZHGJPQTSRUMHNQIMGWRYPTVBIUNSUYTZETXVLUHRROPGGQMUPZABPIPWQGTDQFLOOHSLWMHXKGOJJVZAKJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IBGAJJOVDNJXYXN");

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
    msg.setTimeStamp(0.0488752851321);
    msg.setSource(14396U);
    msg.setSourceEntity(124U);
    msg.setDestination(17660U);
    msg.setDestinationEntity(162U);
    msg.type = 27U;
    msg.op = 161U;
    msg.request_id = 50154U;
    msg.plan_id.assign("PDEOGODBGHSALTQFLDUHITDNWSJYMBVAKJVXKFNXMGFIMKLKQHQZMUMAYEBCAIFLIPEVVFJUNOBXENHZCQCGKFGTGXCLUZQKDRNPXIVTJUJPUZWUABMQECRNOTSVNHCDIISTNPMRDENLUZPMYDCYTKYHKKZWWTTXWQIRRJPCSHPPYAJVBXWPZSWLXYHXRSOZSNMDGTVBFWEQEHFBUZKBAGHRVLOYRSY");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 60596U;
    tmp_msg_0.sys.assign("BWFLNTVZASZACHKHBVMGMDPPBJLJNIGYNXHIKHTXAYQRSE");
    tmp_msg_0.value = 0.641134887887;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WUEVFDWBGWKISHOVDXQBKODBCQZZLC");

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
    msg.setTimeStamp(0.554063834518);
    msg.setSource(1043U);
    msg.setSourceEntity(167U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(115U);
    msg.plan_count = 39612U;
    msg.plan_size = 480674226U;
    msg.change_time = 0.60767459822;
    msg.change_sid = 17280U;
    msg.change_sname.assign("ZALCFHPDMQTPVNBEUOZVJSUUURREKSWETNCYJBAXHTOMVJAGWZTIVSLRNGQBQQJLQSKMOQIDXLDUKIXTQVUWKZMPJHWWABGRDWAMCPLLZWPCBFUUNQTNEUGEWCPELESXZMHZGVMONAYHEGDUVBKSFDKBBFIJPMGTFVADIOYNGFEERWADSDIHTHRJKMFOXBCJIJAXNYZSFRXIBTAORQQSNYCWOHVYVSHCXZYXZLPPLO");
    const char tmp_msg_0[] = {93, -64, 60, -65, -117, -19, 70, 6, 46, -25, 10, -125, 71, 99, -17, 86, -67, -112, 33, 126, 38, -72, -25, 1, 86, 5, 95, -57, 8, -69, -29, 120, 23, 105, -62, -7, 33, 95, 80, -67, -75, -98, 34, 89, 94, -17, 27, 117, 48, 98, 102, -10, 69, 15, -123, 112, 121, -7, -121, -18, -85, -114, 24, -77, -43, 117, 73, 42, -37, -29, 25, -105, -11, 36, -5, -76, -103, 76, -19, -61, -117, -11, -64, -32, -42, -52, 70, -62, -76, -35, -64, -119, -64, -114, -63, 28, -3, 31, 16, 118, -92, -99, -62, -61, 93, 45, -22, -58, -100, -12, -105, -24, -110, 31, -1, -36, -72, -12, -94, -44, 111, 89, -97, -117, 73, 22, 26, 23, -117, 16, 106, -71, 98, 58, -30, 56, -59, -121, -52, -47, -87, -75, 76, 71, -68, 65, -110, -26, 109, -70, 54, 8, -48, -105, -92, 1, -33, -57, -46, 102, 62, -83, 46, -91, 123, -122, -33, 43, -80, -68, -103, 79, -106, 13, 98, -113, -34, -62, -80, 0, -45, -67, -83, -26, 65, 7, -36, 118, -16, 2, 98, -125, -11, -100, 5, -9, -58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PEFHRJOSINCKXVIFGIBIQDSZCHKOJMUNGRMATGTJUZZYAFEHCXRHGRBGLUWESXTIVUUHTVSLEICEKODCTBLYYXF");
    tmp_msg_1.plan_size = 29447U;
    tmp_msg_1.change_time = 0.851607097309;
    tmp_msg_1.change_sid = 58615U;
    tmp_msg_1.change_sname.assign("EHDODUGLNMJAGQXR");
    const char tmp_tmp_msg_1_0[] = {-89, -54, -71, -33, -51, -56, 93, -77, -4, 5, 24, 17, -63, 58, 66, -27, -92, 48, -91, -65, -63, 22, 10, -39, 75, -26, 0, -75, 121, -57, 22, -30, 124, -37, 101, -112, -36, 6, -109, -31, 77, -5, 71, 110, -71, -123, 89, -86, -82, -74, 20, 22, -128, -30, 39, 112, 108, -9, 3, -105, 79, -84, 91, -83, 19, 120, 34, -22, 126, -114, 40, -59, 50, -107, -63, 90, 72, 60, -120, 71, 61, -79, -78, -19, 29, -100, -21, -106, 110, 54, -4, -38, 119, 68, 49, 122, -126, -81, 92, 38, -39, 40, 90, 19, 100, -100, -62, -64, 122, -116, -80, 0, 33, 116, -108, 92, -5, 7, 75, 115, 62, 79, -46, -3, -40, -11};
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
    msg.setTimeStamp(0.703286144563);
    msg.setSource(8809U);
    msg.setSourceEntity(49U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(53U);
    msg.plan_count = 10831U;
    msg.plan_size = 1243711421U;
    msg.change_time = 0.872033601141;
    msg.change_sid = 7863U;
    msg.change_sname.assign("TZTHTIHKJMVLPAKMOCOUGBEMSHAKQPOJEXBYILOIWWXLBMKFIVCXGHNJAENUUIUXMQWVMKTAZGLCQQDTRFFWCNJZJYOZXFVOXNZACYWOBVARSXKQCJGLPWIANEXMULHVGYDFSMJJDUUYQZOGFUDHGQPRUFOSESTNZCKBMLHVPTMNHPDEIAWSEFXRDYJKKQPWDBIQPYQWDNCHDTSUTLWDPNLLIYBPESORYGAVRGREBBENCIKZFXFYRCRZV");
    const char tmp_msg_0[] = {-37, -33, -108, -61, 82, -37, 113, -126, -49, -123, -123, 18, -14, 0, 48, -38, -107, 102, 45, -104, -22, 88, -114, -100, 49, -108, -3, -45, -104, 63, 67, -105, 19, 102, -64, 125, -37, -48, -6, -59, 53, 123, 75, -113, -100, -99, 85, 94, -41, 75, 25, -44, -67, -53, -55, 1, -28, 62, -41, -12, 58, -65, 55, -20, 85, 122, 60, -20, -115, -62, 35, -49, 43, -62, 45, -90, -80, -38, 46, 103, 10, -70, -117, 28, 27, 74, 19, 46, -82, 38, 19, -52, -20, -52, -15, -55, 85, 108, 62, 94, -21, -37, -44, -125, -101, -5, 23, -74, -60, -43, -126, -34, 80, -114, -77, -128, 124, -116, -105, -65, 81, 71, 121, -78, 83, -33, -20, -58, 106, -57, -105, -88, 123, -104, -88, -77, -119, -60, 112, 54, -120, 101, -26, 1, 96, 8, -14, 87, -67, -7, -7, -20, -23, 48, 95, -7, 59, 29, 112, 56, 95, 88, -111, 47, -114, -96, -5, 82, -70, 81, 42, 60, 102, -29, -73, -56, 51, 27, -29, -110, 116, -82, 10, -95, -58, -1, -63, 51, 12, 104, 2, 31, -109, 87, 46, 37, 4, 108, -105, -44, 38, -28, -85, -69, 64, 65, -71, 95, 90, -24, -22, -6, 93, 48, 121, -72, -55, 59, 58, 112, 52, 35, -82, 3, 67, 14, 115, -110, -115, 54, 50, -64, 99, 61, 109, -45};
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
    msg.setTimeStamp(0.0725687975992);
    msg.setSource(16475U);
    msg.setSourceEntity(164U);
    msg.setDestination(31415U);
    msg.setDestinationEntity(37U);
    msg.plan_count = 22333U;
    msg.plan_size = 3675581061U;
    msg.change_time = 0.33717762189;
    msg.change_sid = 59760U;
    msg.change_sname.assign("UOTRGXSZQHMFZZQSCLFBNHWUBCDRQLXLRHYWDVUJDIALFSKMKEPTKIQKMESEIQUSCGHPBCAFMRXJULPRTFTOYJSMWWABGACZLKODIAFTNVRIGVRCPNZBUZXPSYGOKXODJKMIIEYWVWFTXZYTNYKQCGWUHXPDHZECSNQKTHNSEVJVNDQVYNIMBXDKBJOVBGGFLAQPNGAMJ");
    const char tmp_msg_0[] = {-127, -2, 60, 30, 87, -47, 73, 50, 118, -64, 109, 40, -87, 120, -113, -58, -79, -22, -84, 114, -98, 16, 125, 4, 81, 91, -58, 1, 40, 51, 16, -115, 92, -31, -73, -65, 4, 113, -80, 16, 105, -35, -41, 69, -45, -66, 58, 33, -127, -72, 104, -24, 85, -108, -19, -47, 75, 84, 55, -121, 97, -21, 43, -46, 15, 14, 110, 55, -112, 41, 98, -85, 96, -25, 6, -34, -99, -108, 95, -117};
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
    msg.setTimeStamp(0.134433230133);
    msg.setSource(30978U);
    msg.setSourceEntity(205U);
    msg.setDestination(64355U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("ANYYRKCAUBXENGOYYYLIQLFPQVZRLSTDQ");
    msg.plan_size = 45512U;
    msg.change_time = 0.498255946308;
    msg.change_sid = 49226U;
    msg.change_sname.assign("JVSPRDEXQGDDOACKEKEYTKWRISCVCMYYISVRNSDVCEAPTHAMMMKCHBLNOFNFPWSWXIQEYZJWFNHDFHSOCCANOTGGFZIRZLKNRDTPWPHZOXTJOANQZHATETQZHKQSYYIMSWVRFGVFWUJIVIBLZQRDNPLBLQMYTZAJHUBECLUUAYXLGWAMMJZHLQMBPXUGETNFPU");
    const char tmp_msg_0[] = {-3, 30, 44, -47, -76, -38, -101, 8, -100, -24, 91, -110, -66, 83, 66, 26, -81, -18, -69, 33, -126, -53, 7, -10, -74, 1, -120, -15, 94, -102, -64, 47, 85, 101, 32, 52, -23, 39, 14, 15, -55, 81, 37, 99, 14, 37, -75, -73, -59, -31, 75, -39, -22, 100, -17, -80, -30, -46, 15, -102, -100, 31, -82, -6, -32, 90, -9, 19, -9, -12, -93, -128, 75, -65, 29, -69, -59, -49, 24, 13, 10, 43, 90, -49, 0, 77, 67, 49, 45, -94, 53, 19, 79, -35, -40, -33, -72, 4, -62, 43, -24, 88, 52, -71, 41, 71, -42, -82, 68, -58, -49, 58, 65, 105, -55, 83, -115, -14, -8, 33, 125, 24, 49, -9, -19, 2, -56, 26, 108, 35, -29, -21, 91, -102, -109, 77, -67, 57, -37, -89, -104, 76, -19, 47, 106, 117, 118, 68, -92, -115, 83, -123, 58, 107, -100, 105, -45, -49, 12, -107, -96, -40, 45, 126, -98, 69, 48, 70, -95, -69, 53, 65, 105, -6, -85, -21, -18, -4, 71, -88, 46, -36, 38, 41, 77, 101, 40, 115, 111, -124, 98, -23, -49, 27, -31, -115, -122, -21, 31, 11, 109, -109, -55, -45, 108, -20, -106, 64, 59, 97, 14, -66, 12, 114, 18, 100, 75, -1, 15, 10, 21, -103, 99, 53, -123, -52, 6};
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
    msg.setTimeStamp(0.817847031411);
    msg.setSource(30662U);
    msg.setSourceEntity(9U);
    msg.setDestination(57210U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("IJPVSHOQXUOSCQFLEAYWDDPYVOJRIJJOBCPIWAUONNBBXRHUAUCAJAYBCGGJKYCXQRSGGQBEKSNCIMPHLNBHAWSUENKIUJRKEUTGBUNEFHKPIVZKEXAYFQUNTOHDYXLZWRFKDPHSDOYZIMPTFYCAZBXMEKDVALTXMVLHTJNIDYTVMWHDQYRZRISOSQGNEMTFXOMFCDWUSBZPXTVJGWBKPVLZEZRWDMOFINRPLWGFTLVRGVKQLLZCWQMF");
    msg.plan_size = 41960U;
    msg.change_time = 0.765302403879;
    msg.change_sid = 25732U;
    msg.change_sname.assign("KTMJURLZDJW");
    const char tmp_msg_0[] = {-57, -75, 33, 122, 106, -23, -95, -3, -50, -42, -91, 97, -65, 82, 86, 19, -38, 33, -94, 112, 126, 55, -31, -43, -66, -121, 95, -35, 42, -124, -114, 31, -26, 93, -113, -19, 34, 108, 33, -72, 21, -122, 48, -70, -92, 52, -77, -110, 38, 46, 2, 82, 58, 102, -64, 123, -73, -16, 39, 3, -109, -60, -19, -51, 119, 29, 15, 30, 16, -54, -106, -62, 87, -8, 87, 104, -122, -18, -34, 113, 11, -77, -96, -99, -16, -77, 75, -7, 61, -25, -14, 94, -95, -64, 101, 50, 80, 89, 51, 106, -89, 43, -74, -9, -111, 2, 119, 37, 20, -89, 15, -37, 9, -123, 26, 106, 39, -61, 63, 19, -8, -56, -113, -69, 52, 41, 116, 6, -41, -70, -67, 106, -123, 14, -37, 83, -49, -64, 62, 126, 98, -16, 35, -96, -3, -16, -4, 110, 25, 84, -83, 20, 70, -88, -23, -117, 96, 68, 8, 2, 112, -61, 115, -110, -20, -82, 42, -18, 63, 64, 116, 31, -4, -35, 17, -96, -65, -67, 69, -87, 78, 66, -63, 117, 1, 90, -31, -117, 19, 69, 100, -61, 76, 94, 110, 3, -67, -53, 111, -80};
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
    msg.setTimeStamp(0.349611764171);
    msg.setSource(30055U);
    msg.setSourceEntity(214U);
    msg.setDestination(15948U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("CMLFPLBUVLPGLORKVXRLBCJMUHOMMWDCIQXZASQLPYBWBINCOWFZNONRHBWPTFAOAGFZZLVGKGPYCEDGHJQGNFKOTPXTAYABXYZXSZYEOMPNWTHUOZBDDZGKIFWFMVVPIDSKARSRKNLVUFBRVHDNJFDWHBWYEEOUDTQXSWYAYEQVIGIJNSRYUKYDZCETAHISJTXQNNCVJMIHGEBELS");
    msg.plan_size = 13999U;
    msg.change_time = 0.0785049310115;
    msg.change_sid = 20147U;
    msg.change_sname.assign("SNHJNDYMBTTILBZDPYZYPERVBZVHQGNEORAFUWIYMZTKYYQXXVTWPGPKQEUJZXLRAHWFLUFFIWDTLDSILQONQCNOTXRYXIIEXKUYCRUDVIORMLMSAFVIKPF");
    const char tmp_msg_0[] = {-45, -45, 48, -57, 25, 13, 100, 110, -38, -33, 44, -11, 62, 54, -13, -113, -18, 2, 49, -13, -13, -56, -26, -25, 62, -59, 10, -11, 27, -111, 2, 109, -57, 17, -89, 1, 125, -49, -81, -70, 124, 61, -66, 94, 23, 63, -35, -125, 36, -9, 68, -36, 1};
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
    msg.setTimeStamp(0.454475671174);
    msg.setSource(54522U);
    msg.setSourceEntity(218U);
    msg.setDestination(58789U);
    msg.setDestinationEntity(171U);
    msg.type = 173U;
    msg.op = 86U;
    msg.request_id = 45743U;
    msg.plan_id.assign("KIXNPVCBDZRDFVMAHWRSAPLOBMXTQSPICKPKWUBXSGCVNFVMEJKHJPRKDANQFKPTAJUGGEOZTSUIWUHWZMBTNCEOWCPT");
    msg.flags = 40466U;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.238778094738;
    tmp_msg_0.y = 0.832573221457;
    tmp_msg_0.z = 0.62471777765;
    tmp_msg_0.phi = 0.563070476332;
    tmp_msg_0.theta = 0.628591789265;
    tmp_msg_0.psi = 0.481877289522;
    tmp_msg_0.p = 0.772286145815;
    tmp_msg_0.q = 0.412077084357;
    tmp_msg_0.r = 0.866656337362;
    tmp_msg_0.u = 0.102185802636;
    tmp_msg_0.v = 0.00522561916725;
    tmp_msg_0.w = 0.531713831807;
    tmp_msg_0.bias_psi = 0.546071358455;
    tmp_msg_0.bias_r = 0.139474921854;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YLUKYIMZTDVOLNXSGVZWQQTPJLUEJBOQQOIJRCTFKVRGXAYZASYKNLCAJLEJIDIYZTMJRDIHJBFZARVFCFPXUGROPDKEOIFPDFMXXPLBZSICACFGQCYAHLXNHRSAWOKKDSTZBYXGMHAKTHOJEZPSIBWUUWSMEXCHKUINQYWTDGSWBWENWLVORJBVTSEALDBQUPXHVCRUQKQNBRMLEPVNEFGGNQVHXMWHBMZ");

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
    msg.setTimeStamp(0.784844199324);
    msg.setSource(4275U);
    msg.setSourceEntity(86U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(222U);
    msg.type = 112U;
    msg.op = 82U;
    msg.request_id = 45299U;
    msg.plan_id.assign("YZVLLRCNWTRSAHEEUODOZRCXEJSSJXHDWPNWYMPMTMAJIUXKFLAZTKEGKPSBYRCWZVVTDH");
    msg.flags = 39891U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.0573297993391;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RXBDYGQQETLTTW");

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
    msg.setTimeStamp(0.668925314694);
    msg.setSource(58337U);
    msg.setSourceEntity(218U);
    msg.setDestination(26963U);
    msg.setDestinationEntity(58U);
    msg.type = 242U;
    msg.op = 87U;
    msg.request_id = 27235U;
    msg.plan_id.assign("GIRMZNJYMQTMZDVOOGJDNZPZWFVNIXPAETYAIVEQAXLRGAQYSLRYOLOSJHIMNRPNIQMNHCXZIANBDFISURKLHUCHEPCBKPUMUGEYGJUQIXIZWQCTUDJEPXJLLOMMQTKCHHFXDLDEJKPBPWUOHVSAVBGKMUWVATEAXQTSDOEYJGFHFKEFCSUZEOWOTLTUTDAFSAWZSHCIPTDLYWFZBJBKQRSVZBFBNJCRBHOSQDKGBWCKMWX");
    msg.flags = 52321U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6143589343;
    tmp_tmp_msg_0_0.speed_units = 47U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.932835753999;
    tmp_tmp_msg_0_1.z_units = 73U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.352546310595;
    tmp_msg_0.lon = 0.793713062308;
    tmp_msg_0.radius = 0.539636689801;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YBJPSEGKXWCINACHBLCMGVPPZSZTWQYDDKYELEQSFMICQRWRVSKLOMHJAZZGMXULUHRGJUOCXOQSKNHOZYYISVABAJPUPPFWRXKTQFXVILEUWZINQAFEAEMVPUSFVZDJXGFGOWFJMDTXRREWEMRXYLCTHHBUOTSJTNVGNRDKMSJXPVQY");

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
    msg.setTimeStamp(0.0257316649731);
    msg.setSource(18171U);
    msg.setSourceEntity(190U);
    msg.setDestination(8313U);
    msg.setDestinationEntity(20U);
    msg.state = 40U;
    msg.plan_id.assign("ASJZLKDTWDMLTQOWJPKOEETUXWZGAQFDDJUCKOPLIOKWRDFGBYRBMAH");
    msg.plan_eta = -400241585;
    msg.plan_progress = 0.026834480712;
    msg.man_id.assign("EVTDNRDPXSMHFLUUFMGTSRSODXEHUKLCIIYIATCWKYFYBCRQMEUAHJVUTFQQYXKXGHSRWBBZMJBFKVOEGGCSMTOQJZWCYTWVPOHTVKYXQRSNOOWGWJXAUBSJPHTVYDEGICVASJABDXIPCNCKNWTRURVLHAHZFMVZCAQMPLNQARLPLE");
    msg.man_type = 33171U;
    msg.man_eta = -1369226199;
    msg.last_outcome = 48U;

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
    msg.setTimeStamp(0.184921125199);
    msg.setSource(29668U);
    msg.setSourceEntity(123U);
    msg.setDestination(50317U);
    msg.setDestinationEntity(150U);
    msg.state = 10U;
    msg.plan_id.assign("NVLQSUZSAIYCESDAPJBVQNNCQAJFCFGWHANMXKTEDIXPHLTMECGNNYVOPQCHYEDRRGSSPXADYDDJKXOLIOCDYHOIGLEQWUIB");
    msg.plan_eta = 565639011;
    msg.plan_progress = 0.967571134166;
    msg.man_id.assign("BPZUACORAVWYSQGGXKEYAVCDDANYXYQIIPJSIFXWUUKFHBYUNXQHZNFCKTOHVPQPRXJKSEDBADSJWHSJOTWGBAV");
    msg.man_type = 13959U;
    msg.man_eta = 130830330;
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
    msg.setTimeStamp(0.77052688443);
    msg.setSource(20949U);
    msg.setSourceEntity(48U);
    msg.setDestination(38165U);
    msg.setDestinationEntity(141U);
    msg.state = 218U;
    msg.plan_id.assign("WUIDGXGKEKXFAKIYWEUBONNQZMBXCRAZCQJSAACVIHHQHMLTVTVVBPJNFRERZNIDTMJTUKCLPOHLZYHCQTVCDUF");
    msg.plan_eta = -1794014603;
    msg.plan_progress = 0.537595111861;
    msg.man_id.assign("FUCGBVNSLUHKORUFIR");
    msg.man_type = 63440U;
    msg.man_eta = 479321267;
    msg.last_outcome = 30U;

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
    msg.setTimeStamp(0.520042131738);
    msg.setSource(5434U);
    msg.setSourceEntity(155U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(213U);
    msg.name.assign("FNCKVXNJYREUNPHYLNQGVJRIFBCACXTMQNSBJKRQMPGEWSRMAYPDVRFBHBVCWTBCWFMEUAMWPFDFGHZZCQPSHLOVFPNIROTSZMOJFQUPDXKUVOZOLKETUJMXYOFEHVCZEYNSDEUOAXSLJOZGIIUUDYYWMNNVHWAWJCYYTKGRYRDIJXZDPBMGBEJTNMDPBIGIAXCITTVIGHKRHJAHWHFXLADOPAWKLASLRQDEUVEUTSQQBZXGLZBTXLSZ");
    msg.value.assign("XCILWAWHMFQYJXVWBNXYUBUCFFXTQAIMDKGLJBBQJYATKXEJVZNCDZQUHDHHMYMFMKYNDZYEFPLDFJUJGNISZDHALAPOPPEGGRSXPSCWVEPTFGSJBRNHYDLOCBPUECNGLBTRVKXINSGDFOLPWZQAKQHORLPJKWRHRRXSIJVSFLTMTZOIOXAWMAMIVVOUUUMIIZVNKFCBWRTVOZTYWSUQAJ");
    msg.type = 231U;
    msg.access = 151U;

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
    msg.setTimeStamp(0.705205534901);
    msg.setSource(20923U);
    msg.setSourceEntity(69U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(196U);
    msg.name.assign("SAPODMKSLWVIXNLHJJDKYWTVTPJUMNQZNVEFPLASKCR");
    msg.value.assign("EJRXWOYHTDNCIVCFQAKFLVUXPLBRXZKPMTSXBLBKWTJPOYZNRNWXBFNMQIEQTTPWODVLKDVWOIYRVDAVHKFTM");
    msg.type = 3U;
    msg.access = 28U;

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
    msg.setTimeStamp(0.165835333572);
    msg.setSource(54151U);
    msg.setSourceEntity(118U);
    msg.setDestination(29110U);
    msg.setDestinationEntity(126U);
    msg.name.assign("YXRTHPDRLXHQGIOGZFJJTTAWVJOMMASCREMGQABWWRGDDOUCVJWEBIWQABTRGHKCBYZTYOGLPUDRFIQVLQSGKPKPCH");
    msg.value.assign("YGIMOTUFANQWDCVOLEXWUSKBJBGDWHWDDBBMBSTGPAHZEMMNFFJLAGKFUGCHFTCZDCUIYCHOOQACTZJWBPTPWAXIKCDKBNMZAHEXXCPSGFABYTMVLYWZKPOOLZPKPXHLRFOERJZAGIROEVSQKGUJQNXBLKNQWJILIYSTXRIJDPVUHYNQMVDGORJDXNANEPSQQLTZVSKEVYPHECUMMYVRXMLHRWFKFURIGJYSAECFHNDSLVYNBROTZIW");
    msg.type = 144U;
    msg.access = 198U;

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
    msg.setTimeStamp(0.312558468337);
    msg.setSource(51862U);
    msg.setSourceEntity(167U);
    msg.setDestination(40324U);
    msg.setDestinationEntity(43U);
    msg.cmd = 244U;
    msg.op = 227U;
    msg.plan_id.assign("MNQHUOYGPQZONJAWSQYXBEMFGDVIPPXHUCXWDWSJBPEPSUVAOEWVPZUSKNJLFFFBSZTEJNYHRIRBRMSAIZHUXIWXL");
    msg.params.assign("YTGZFUMZELUMOMCQAPDTSKANKWEQHNQCBZAZJBEGLKPHEJQVFRJOHALDSSWPAXICTVATYRQBZRIQAOTUSVXSVQFCXVGEYKEAPXYKIDWWUFDZLKTBZHPBIXLF");

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
    msg.setTimeStamp(0.265969225905);
    msg.setSource(12526U);
    msg.setSourceEntity(174U);
    msg.setDestination(19853U);
    msg.setDestinationEntity(162U);
    msg.cmd = 47U;
    msg.op = 91U;
    msg.plan_id.assign("XXASJYTQQRELADJIYWURDAKKBSOUONMTXQMBHOCSHAWNXIEDPISFECJMXVTLJEDYFFBREVPTLWHHWEQNHPGEDQOTBSXBSHIQIKVZHIWNYZSGIJWAYDHACKDCVKFCYQZJLYFKBKLZZAOFJMLSQNVXNUUPVUTZYRACTHADOUBNKLSQOPUGJGGEZBQPUVIIVZPGMZPHTNNZJRKGWMGLCCOFGOK");
    msg.params.assign("KSFNATEYTACXAYPTEHBRYRSZFTOBZOFWYAMHGBPOQYZKNZKCZWSYVAQQPJFILTNQDSWQXMAVNRUQGTOLLEXVIFJKPRDDYLFVCDLZHRQZHPKIJRRTNWCDUVOCBUOTPPIGNBOVTWGLKNJYXGGIQMSLCQMNIFJHHEEHEWWKOKYZENORWLJDUAUSNXJPEVBMMGUVSDJAXCKXFCVAYLUJUPGEISRAOXMQPRKTHFXBMDZCULHSIECDJGIIWZXFW");

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
    msg.setTimeStamp(0.390889186627);
    msg.setSource(1931U);
    msg.setSourceEntity(36U);
    msg.setDestination(12127U);
    msg.setDestinationEntity(13U);
    msg.cmd = 212U;
    msg.op = 189U;
    msg.plan_id.assign("QOGRRKDHXJMAJUCETGKWPSQGDZABCNWBUTZECLGYSKZWOXCTJDUFXTDQRAJXAGYRWJOZTNYKI");
    msg.params.assign("HGCZKXPTCGBGUATYWRDAIETZPXUMWMLEMJKOJHFQOKNIUQTGICLUJKGQWBBMRBSOEXVQA");

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
    msg.setTimeStamp(0.276942168025);
    msg.setSource(53551U);
    msg.setSourceEntity(222U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("DPDMYHQEUPCUXPSJUSKHSDMKTUIHBHUESEKKVOIAAPYNSSILNQCERJKFOKFEBRYIDYXRZR");
    msg.op = 120U;
    msg.lat = 0.540327771106;
    msg.lon = 0.583897210988;
    msg.height = 0.382795759646;
    msg.x = 0.818531138684;
    msg.y = 0.0166439170586;
    msg.z = 0.117833146198;
    msg.phi = 0.412153490758;
    msg.theta = 0.326537133271;
    msg.psi = 0.970020866878;
    msg.vx = 0.740068710598;
    msg.vy = 0.353595802663;
    msg.vz = 0.659913223212;
    msg.p = 0.63985919211;
    msg.q = 0.72825798904;
    msg.r = 0.0818244627037;
    msg.svx = 0.134248678098;
    msg.svy = 0.0965580217429;
    msg.svz = 0.206362475876;

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
    msg.setTimeStamp(0.354797452129);
    msg.setSource(30694U);
    msg.setSourceEntity(66U);
    msg.setDestination(28211U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("OUDVFAWLVDEVDTRCHXPYXRMCGNUROGODQMZSYWZWANURZHTELTRGBLMCZPBBZHEHGCGYHNRLHEIFBQDTMQUIWXZFMOQXID");
    msg.op = 106U;
    msg.lat = 0.0882065968443;
    msg.lon = 0.661314489319;
    msg.height = 0.196631135041;
    msg.x = 0.291197743915;
    msg.y = 0.3624485617;
    msg.z = 0.929350351426;
    msg.phi = 0.154649069863;
    msg.theta = 0.732117383967;
    msg.psi = 0.563652359469;
    msg.vx = 0.820717873756;
    msg.vy = 0.122423471147;
    msg.vz = 0.277170704792;
    msg.p = 0.479294983324;
    msg.q = 0.874908478209;
    msg.r = 0.148320605221;
    msg.svx = 0.785515433083;
    msg.svy = 0.0240166155623;
    msg.svz = 0.590053516106;

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
    msg.setTimeStamp(0.169130438031);
    msg.setSource(39003U);
    msg.setSourceEntity(179U);
    msg.setDestination(21496U);
    msg.setDestinationEntity(232U);
    msg.group_name.assign("QRJNCWJBFSJOPBDEBPICJLEUOHFVWPAHKDYSDZCDHMVXFYXTIGHETALREYBBWUQMYLDRVHXKUZXGIJETZWSWDVNHJIUCCVNCDYOCCBTFWOGWGNHRSVAJNBKGKGHQUKUQRMSYJHQVUXLYJIFLCPPFMOBYAEPQXGZFSDSEDALOTMOZMUKKLPTZIAZZVM");
    msg.op = 84U;
    msg.lat = 0.300511725382;
    msg.lon = 0.427712848415;
    msg.height = 0.764670134846;
    msg.x = 0.0387882798601;
    msg.y = 0.530899256262;
    msg.z = 0.831216173373;
    msg.phi = 0.838961529623;
    msg.theta = 0.0655833027571;
    msg.psi = 0.587187111919;
    msg.vx = 0.459926161751;
    msg.vy = 0.527362929537;
    msg.vz = 0.794031452046;
    msg.p = 0.939233419238;
    msg.q = 0.106150939557;
    msg.r = 0.454497538566;
    msg.svx = 0.962581299918;
    msg.svy = 0.230609560578;
    msg.svz = 0.603916584741;

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
    msg.setTimeStamp(0.468627011562);
    msg.setSource(3086U);
    msg.setSourceEntity(56U);
    msg.setDestination(51573U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("BYJXXRVOUVMAJCYOQFRVYUPFLSINFEPNKUWCGVFTQUZVFROAPGGUYDZIQBBEPALRWQTQSZVOUONAWWSBYPXKQPINAXXVICLBKSZJECZVDKKNDBRBTNJCODMJBMMLMOECAEDTKDWRIUSRLTSHJEZFFXVPLKSUWIFGGFIIJCEZYXZHVNHHNCMQMTPHBRIUDQWLTJYTLJYADCAXPGSLTWKFCNZQWHDGHLHWYXANEXZHOMJREBTPKSAOQHGM");
    msg.type = 218U;
    msg.properties = 111U;
    msg.durations.assign("LXFHYJZSGBDMOXDUFBRVJHVWNGGZHNXSWNUSBWNBPGKIXYNCEXKFCVAIPLIFGZLYPZYXHPOALUOJQELCCFJQULXWCUTRZMTBXDCSTDGHMROWTFXIGAZYLJMOMBTIQMSVNRAUBMSRVKKUNBKPTIUPQHDTVYBVA");
    msg.distances.assign("RIBEXYUKEVMHSQZEJVLFNGBXHMVIYNQHTCDVFVUMVGWKQDINQYRLNFZOIIZXWRCGGHZGXZDCTAPBQCABRWPQKILVWSIFMODNCRTHBHPSHUTGMEAJDFYLGLKYVUKJJFCUOOZYWPPRAWVTIUOAAUOKSJAJPTWEYPBDXCOE");
    msg.actions.assign("SKAIEOOEBXLPDFXSQYSBHPUZEBBIGFXIBOUPSLLTKMLLLOCUAMPLOJDUTCNINLQBXEZHGJKYZGCGVOZWEAIVQFTJBNGUIYZMPRDVWE");
    msg.fuel.assign("NJXVGACSTWMQVZAZJWRHMCDMISALXJCNUYWXLKHQRJZFVZWGROUAKPIUIQDMUPULHXASHVGSTADXOGMQWQXCUBYGAZKYELINFYRCWONXKEPDGTMTOOEKTZNJXVHBLQYGWDOBRMILKDYCOKBUEVNWVGNBIOBUTN");

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
    msg.setTimeStamp(0.972225167161);
    msg.setSource(38095U);
    msg.setSourceEntity(203U);
    msg.setDestination(42220U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("QUVWFDTYZRIGBRRGGTHJTXLUHZTHFMEIEWWKCQOXJAPAFGUSFECTCZOLEQZLNMPZYTJLBYDCIYSDKANDDVVBGRMDXAAAEKNYCDKVWMZGELMSKUMVYKWNETCYLQKJRWXMOEPFPELNBPOMJWPTNJOYUVLIPMOHSDWRCIHKVVCFVSURH");
    msg.type = 11U;
    msg.properties = 163U;
    msg.durations.assign("IXLTQBQUWMISDPTKTRNJYJPYFABMZAETZVYMLUSMYRZLNAAFVMRPBHWQAWLBUPDKGJRNYBHODENXDHCEENDGSTCQNLBLKDMUJOKHIYFWSKUYDXRVMIOQMZQWUJUCWORVHWBFDLIIZSNXEBKLLHJOSGZGFTLAFIREIXFOOHXGCIPWWUNIOGXCZKNXVRRFSTZZGVKWTMEBRGPFQQJCYQPGOJVHE");
    msg.distances.assign("GNDLCCRLCSTPQJDUPUDZXWWGVJDVKZKOTJJNTDVAXBWOZFHRDHENYUIKGTWMPELMYSIMDKGPRARUFBMTPCHAZDCBMMPVBCFGVQYEJXBIZJLNEDXUNTROWYVKQURRELQBLKLXNJHYAWHXLIFVQBGYWOVEOIYYATSBSOHGFPALGOXABBAEIISZXZQPJKMSLQMMCQUSUCHNRGZHSPITKFWSCVW");
    msg.actions.assign("WDXKVCLFPDOVDRFIBIQCAAIYNHZUROHSDUXAJCYXCDVTUWSLAJXLABNBJWIFCKRDFYWGBMPCFQWLCIFYTSQBHETNRBNMVIZKGQAQLLSRDASOQEQEJAPDIMIOUIXMHBCXOVXKPKNTLZKMMOAUNRNWTJTSGVRCVHYWK");
    msg.fuel.assign("GYMIHKWPXZDMQEAYLHKRPXESOJSWMMCBLVGWQKFCIUJCPTBVPCOORXUQNTFPBYXKAIEUVOXRIMGUUVJBIZTNLHRBNGAQOTQWNWNZCHYEZLGIR");

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
    msg.setTimeStamp(0.676829047614);
    msg.setSource(1624U);
    msg.setSourceEntity(235U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("KIRCNHQGVKYXWLERGTMEOWPYKHDJANWOMMBWUVSDPIQOTOSIYBQOCUYUOBRNAJKTEZGIJCYGBQQDLYTNOWXHQOJZJCGETPTIEETIFTDWFZGSQJMSABBHZCJRNEHNVUHRNRXXCAGVADSJLPAZLVLUSVFAQTVUPDZFRKOUKZKNVCRZXSYFQQXFFIYHPZHPDLBKKCNLHWNXMPRMUVKIELXFDMUID");
    msg.type = 187U;
    msg.properties = 0U;
    msg.durations.assign("PNLBXFUUUUYQLGCIDCGPFBJQEQGDHMBPLJICWUPLPGBFXUZPLESYOVIBDIACKAOTGARPZCOERGHXRMVYDCHFAEOKROGQNHEYSGMRPYOXEQJKVJSUBXFORTALDVFWREAJKNIEGBJMWSACGRTQCUZXMDHTXKWDRKQCVJYQMDOZVFNWZKVTFIDNXUJNXPSZZMNAHTELTLRSWTHWLJLEANWMYP");
    msg.distances.assign("WTSJGPVPNSDNUWVLNVQNFFYLQZUGCSLXEFWORKCIGTIACKNEDXFXNVLSMWPOXTFURXVZYBJSVKPTIADHAPUADIWQWMSHHAUYMPVGWUSHFOETYMLLDOMRYBVYCETQ");
    msg.actions.assign("DMRHGWETLERLAOFJLJCXBJYTVCWSEMUPOWINZERWNTQMDSQBTDSLLGYKXJGVAYGFAELGQNZRHSGXKBXJWYNCO");
    msg.fuel.assign("DSVLOUOMZTJBDYYOKLECDYHIMXIFBTAYVXOKKNEUZSVFAHTJBRQEODPWQRNMMPYUUULBG");

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
    msg.setTimeStamp(0.287999236006);
    msg.setSource(10964U);
    msg.setSourceEntity(174U);
    msg.setDestination(31049U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.762032135839;
    msg.lon = 0.583024361526;
    msg.depth = 0.041387526175;
    msg.roll = 0.526062910407;
    msg.pitch = 0.906433065982;
    msg.yaw = 0.214014232113;
    msg.rcp_time = 0.375587520739;
    msg.sid.assign("AUQFVJDCPNPGBDQWHAAOKPOAXUWJQRRIKNEXBAAWWMFLYBBYSRKULMEYLBHMPJXCSKMLQSKKHGTNBRSGZLSAQOFHBBZGDLNCGSMOMXYXBBVTMCANJZRNRFIJKYRPIIDOGSAXZGIFCSZF");
    msg.s_type = 188U;

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
    msg.setTimeStamp(0.320180126059);
    msg.setSource(29315U);
    msg.setSourceEntity(67U);
    msg.setDestination(8483U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.460276488373;
    msg.lon = 0.716934401082;
    msg.depth = 0.759524345353;
    msg.roll = 0.933662748535;
    msg.pitch = 0.47016970023;
    msg.yaw = 0.808541890654;
    msg.rcp_time = 0.536726508328;
    msg.sid.assign("YKGGTFJSJHCLZQREZBFAIKMSCPNEUCLZALTURYCTOLUAWPLBTOZUNSDXIWYWODKCQGAVUMPQRAJIZGIPSZYTYVMNVZZINFKDCTSNPGKIFRXPPLHPTDQEJQWDNWJYFKCRUHPEADIGXELQAXRVHFLKQCKOBZ");
    msg.s_type = 12U;

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
    msg.setTimeStamp(0.997037296978);
    msg.setSource(24739U);
    msg.setSourceEntity(115U);
    msg.setDestination(44089U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.439731979776;
    msg.lon = 0.19672216369;
    msg.depth = 0.455738912468;
    msg.roll = 0.0638833614194;
    msg.pitch = 0.151295203906;
    msg.yaw = 0.0517262232648;
    msg.rcp_time = 0.990707874313;
    msg.sid.assign("XFFNXGYCEVFXLUABOEMOAIQTDZPLYMFQLIBXUHNDTWREBIFNVJORDYKPBSSNVMPVAJHSCUMYGVULRJYGZPTTWUWWEBRHXQQFSTKGQVHKIEGVXAQILMIHVXSTZGMDQFZIJBDGDBWSUOALZOLNXJPJRKMWSZWNTPAKCCEFNKECHNDHJLMPICGHZYCAQNMTFHDBRA");
    msg.s_type = 252U;

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
    msg.setTimeStamp(0.554691834037);
    msg.setSource(45413U);
    msg.setSourceEntity(68U);
    msg.setDestination(16443U);
    msg.setDestinationEntity(21U);
    msg.id.assign("HBUKANKGGRTBGOJCQVORKVRCOUDPPCMLKCNVEJGVJVXIDWG");
    msg.sensor_class.assign("HXBNYOKXVEWRYXGVILSMNPBNDSDQDBRRKESJHUBNLBFSZJCFGPYIBURMGLKJRWLILSLFZRDDSQAJUXWEYTTXOQZJMEAVHMSWEPFKJDQUNLHOPZCIRFZAH");
    msg.lat = 0.102289419401;
    msg.lon = 0.192650675353;
    msg.alt = 0.152328318194;
    msg.heading = 0.206973299456;
    msg.data.assign("FVGZLCHKFTSXRDIVPUOCFASYOXLIWRZIEJQRAKSBGMRAEEWIYQPDXYTQJNVTVJCTZXUKHLVELWPUYDWMAMDEKLOQVBVHBLEUFDEMRUGJNRPDPVFMPSCKKHNZXDIGWNHDZXFKOZSYLYNRYQZCJREFFILSVBSNPWNAKGNBMHCRQFGZHIBBJUZUJAWBJHKXYRQLWHU");

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
    msg.setTimeStamp(0.388992558191);
    msg.setSource(41802U);
    msg.setSourceEntity(149U);
    msg.setDestination(59586U);
    msg.setDestinationEntity(140U);
    msg.id.assign("VLNASSPNNBZFEVGNVEANZHNQOZILFMZIVJSUTVYGHJPZCJKQXUKLMJLXOKHICBJPMKTAGVUIDKERADXLYTYIWPINTMUKQXQVXICKBMCDEMWGZEYHQYNHATHEOAKOGZQBECQTFSGYXHUABQYCPFTRWUDXDVCXWHHLIGXABSKWOLPSEWUMICOTLBFKDMZEWTPUDOARVJLYGCOAZGRYSLWBZFEJRRXQOMJDNIN");
    msg.sensor_class.assign("TWKVCAYEWEBMDZRUUJZHITDOJBPFTXIFSLBFBNWPVQWIBBVZWYRKUPSHVHTIQKUFALGHBGZOKVIFPRGVMRCNMOVSXFFKALXQYIHATLEAJPDPNDYKCEQJEGZCCKVLEARXISQSXNPXQTGSZZRSMPZJMTBW");
    msg.lat = 0.43073316369;
    msg.lon = 0.879656515966;
    msg.alt = 0.474543913451;
    msg.heading = 0.427002336187;
    msg.data.assign("ZBIDNIQFXIUDLMRBSLSXWCMKXUTONXZTOEESAYARLDPYNPIVZAMNWNVZMJEJEEPYFYPSXUFQILPZDGOQCYQHJOGRMMIDPPONKVAKWXUSQVSCGMVHASDCRGYBJUTFWKUERQGUYKTJAJQFJLJUDCXSXENNLOBPJZFWTLMHLTKXBOHTPMVBYWRNOBICHWQKCGZFTUGSFGHGCCWKHGVFAOWLWTFEABDEDANZP");

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
    msg.setTimeStamp(0.839147230364);
    msg.setSource(27067U);
    msg.setSourceEntity(99U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(151U);
    msg.id.assign("RFOTJRJXFYMUYXCINBZUTBXCGXQASBOGOUWAJUCJVXDMEZTHSLJQLEOAHZDEKWBNKBUGUXKWPPIOFJMIEWHERFYLFGRQJPNVOZKSUSMFFVVSYBEIEDBKOIWSSGWITQJLIFTTGKZDALRGOODQWHQDJIBEHPCSYAYMKPACM");
    msg.sensor_class.assign("UNDUSYUALBWPRKXCOZQBZKATDGMPPVVZNNGRXGRJSRQWABGRPXEHBQNHISKVBAIGDHMIUCQHNFKILPPFPJHWWJJAEODBFUWUYZSESGHESFQOTZFFDYTPHYIJAIXMMOYKRUYPNJICAHECMMREWMOOVJCBTBTVKLMLUWQENRBQGEWXYVZORLFFDMOCSENHVXTNSXVXCPDKWLLHGDLZQJUXIRGALNOKTFQCJMKDGAXI");
    msg.lat = 0.745379654465;
    msg.lon = 0.937991650392;
    msg.alt = 0.661829428885;
    msg.heading = 0.677003862367;
    msg.data.assign("XCDLNXEIZRWYGBYFIDEEKDUKEDTLJWGGMTAPPPKQNVDEZSIXUOZEYTGSODBPKQXEOEMCIMBOHHFQLCISURLAMYPZFCGOJVUWMLOCVFSWJCABWTGKCLOABSWHPBJSOTDBYQWKAGFRSWUJHFZLXRUGJFJYDSLNN");

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
    msg.setTimeStamp(0.289566507576);
    msg.setSource(27559U);
    msg.setSourceEntity(116U);
    msg.setDestination(37477U);
    msg.setDestinationEntity(189U);
    msg.id.assign("ZAGOOHZOTMJWLGXJNVUMXYTCELGOCDBQHTUTEFSADDKBBEIFWQNIYCIXBVSUNWFLMQVGKAJFORTDZEPIWDVYUCMEFHELGJJLUBKAFWGPYBXQSDUZJHWXRWULYACZXMGWRSSICOFIUGNGXNMZIQLZDQYJDSVQGSYXRRSHPKIAANFTYPPRZRKDHNEBXAWTNVARXUT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VIADXHFRBHAFTEBJRWWLZKFEKATHHCYVNDVVMOXOYCGWQMLWOVQSMLCJJULADXZJMTNYHTPCDVKEWPLSAWANRNCEZXS");
    tmp_msg_0.feature_type = 38U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 49U;
    tmp_msg_0.rgb_blue = 216U;
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
    msg.setTimeStamp(0.974169505803);
    msg.setSource(56696U);
    msg.setSourceEntity(2U);
    msg.setDestination(56286U);
    msg.setDestinationEntity(60U);
    msg.id.assign("ZBMEBLIAYUGHNNIDCZNXMFARAJTJXFWUHHQEVHOVPEXVAMNYLQLTGOQHSFLPMUGBPWOKCCMRSESRYWGHUZDFFECJVPSIRRNXQBSPWMQZWYMBSADOJYRNLDAYXQCYUZVUEMWODDCBVYIOWJPFXVGLDZLHGORTOXFFSKISYVJKJWINCCOXKBPGAXH");

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
    msg.setTimeStamp(0.967122984175);
    msg.setSource(2703U);
    msg.setSourceEntity(143U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(145U);
    msg.id.assign("KZMUCQJPTFJUXWNDBBVSLEWIUZHCNF");

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
    msg.setTimeStamp(0.367812165926);
    msg.setSource(12919U);
    msg.setSourceEntity(77U);
    msg.setDestination(24243U);
    msg.setDestinationEntity(138U);
    msg.id.assign("JDIWXSJQNXEQKOLLRCPFUTPNLEGZPSMRWEOZUSENBQBMKVKJ");
    msg.feature_type = 87U;
    msg.rgb_red = 98U;
    msg.rgb_green = 76U;
    msg.rgb_blue = 29U;

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
    msg.setTimeStamp(0.488193831096);
    msg.setSource(29581U);
    msg.setSourceEntity(253U);
    msg.setDestination(52316U);
    msg.setDestinationEntity(121U);
    msg.id.assign("ITXQHNPPFOJGLZXISPJFJFOZTBVGAKLBXUKDCFNDUJYLJEZZDET");
    msg.feature_type = 10U;
    msg.rgb_red = 21U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 141U;

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
    msg.setTimeStamp(0.0256240668687);
    msg.setSource(64795U);
    msg.setSourceEntity(85U);
    msg.setDestination(38738U);
    msg.setDestinationEntity(206U);
    msg.id.assign("HTQFOTTCBDORCSCNLLYWV");
    msg.feature_type = 105U;
    msg.rgb_red = 149U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 182U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0443479226767;
    tmp_msg_0.lon = 0.717505681519;
    tmp_msg_0.alt = 0.675742977892;
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
    msg.setTimeStamp(0.336772892337);
    msg.setSource(20859U);
    msg.setSourceEntity(240U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.048730542106;
    msg.lon = 0.382804378245;
    msg.alt = 0.379392299303;

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
    msg.setTimeStamp(0.0438468518428);
    msg.setSource(57788U);
    msg.setSourceEntity(216U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.998208576609;
    msg.lon = 0.256047515722;
    msg.alt = 0.333395832031;

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
    msg.setTimeStamp(0.439348620487);
    msg.setSource(13504U);
    msg.setSourceEntity(0U);
    msg.setDestination(10701U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.260665518293;
    msg.lon = 0.509493342146;
    msg.alt = 0.806249161837;

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
    msg.setTimeStamp(0.415054677197);
    msg.setSource(49004U);
    msg.setSourceEntity(164U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(224U);
    msg.type = 46U;
    msg.id.assign("NCBLLXRUHUVCMEVWTHMSSHIODYHXWBKGRAUYXADKVXWYBBTCECZMWWOOTQJGFLVKEYINCPNHWNVPODFKLEUQWIPIXUYDYJKTEIQIQQMPALQFRNRQZXIZAXKLGBTOGDPFUZGNAEZFLPSIRBXVGRFPURKMCFGDMRSTEPYLFKPNXNYSVEKBBRJWVGOQYBMOFAOZCUTZKBHDSMWLCVZNYTAJALNRDHSJDJ");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.523887329963;
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
    msg.setTimeStamp(0.836810309018);
    msg.setSource(33360U);
    msg.setSourceEntity(114U);
    msg.setDestination(36198U);
    msg.setDestinationEntity(101U);
    msg.type = 87U;
    msg.id.assign("YGOSUOCPGZQTMLQQGNWITASPIJSCPNOWFVZIUGVOBLZKWHEBFVFNDRBZYOUBRIKOMETSTCXRTFPBLRFUUOVZWDLXERHXDIUCISQRLYYSKKNUGWNVWKFHUWZJETBJBADDOHCJVFQYAEKMAJMXPSVQUMDTNZAFAHIEZGWJBCILCLKQBGEMKTQENLNAZBWLTIXOMIPYPAYFJPPJXRXTQXKCCVJHVXCMMXSDYLJADRRNHSMFH");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.347321231061;
    tmp_msg_0.base_lon = 0.309638503915;
    tmp_msg_0.base_time = 0.617085139694;
    const char tmp_tmp_msg_0_0[] = {-71, -74, -85, -123, 0, 71, 17, -100, 12, -9, 92, 31, 97, -71, -29, 26, 73, -36, -121, -107, 25, -23, 104, 69, -104, -16, 68, 51, -58, 26, -2, 123, 67, 72, -128, -114, 58, -39, 27, 87, -91, -100, -88, -14, -95, -110, 88, -39, -74, -57, 109, -32, 38, 119, 83, 71, -71, -92, 35, -114, 88, -88, 31, -18, 92, 4, 112, -28, 82, -106, 16, -2, -106, 107, 92, -37, -106, 26, -3, 93, -72, -3, -72, -62, 21, -126, 17, -18, -105, 7, 63, 42, -111, 108, 29, 54, 119, 95, -9, 58, -78, 70, 51, -11, 103, -21, -110, -93, 11, 126, -18, 31, 55, -4, 92, -73, -82, 108, -43, 102, -120, -41, 119, 85, 65, -111, 86, 113, -95, -61, -63, -8, -74, 95, -119, -106, -44, -3, 21, 27, 49, 82, -84, 88, 61, 87, 59, 89, -102, -25, 26, -68, -126, -12, -87, -40, -50, -124, 11, 48, -20, 104, -40};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.876356247254);
    msg.setSource(40076U);
    msg.setSourceEntity(172U);
    msg.setDestination(46151U);
    msg.setDestinationEntity(243U);
    msg.type = 228U;
    msg.id.assign("BGTWQNDFZZOOERHHFWWXTBDYGTSCDIIULRNCMGSQSFCUSAHTTMWYYJGZJSQIQREACHERQ");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.749970486663;
    tmp_msg_0.z_units = 186U;
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
    msg.setTimeStamp(0.339658317512);
    msg.setSource(32500U);
    msg.setSourceEntity(129U);
    msg.setDestination(45455U);
    msg.setDestinationEntity(28U);
    msg.localname.assign("ISLXONFZZVFPQSWAESLILTTHHGHPRDZGIVCLEDXBNYKCXRKJWBLHEBBXKOSNCAMKVGBLQVTUTPFYHNDMALGEPGQSCRNEVMJYQPLJRZOWUYTDCFUMBWAWSPZHUVKSKPITMDFCJMVYRAAWYETUYCHQNTFPJEIRILKDDGGOON");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RXOUDCEXNGWKPVBJVVERQVNCFSXNVLWSGFTYJXCNNPHGLEHFSXRITIYFZC");
    tmp_msg_0.sys_type = 160U;
    tmp_msg_0.owner = 14322U;
    tmp_msg_0.lat = 0.793648561558;
    tmp_msg_0.lon = 0.0293959434147;
    tmp_msg_0.height = 0.150245143034;
    tmp_msg_0.services.assign("DDLHNRYNTUYDOZTAQCGBTRSNXYYIBWCUHCOUEHAKFGLKFJJUTXHJLEMNJVEVKMMPXBSSPVGFYZIBBWELYHHXNEREUHSWIXODOVWTQKQGVIXWMPWQKIKTBFNPLDRUYKGZQCY");
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
    msg.setTimeStamp(0.159263292387);
    msg.setSource(10530U);
    msg.setSourceEntity(145U);
    msg.setDestination(40666U);
    msg.setDestinationEntity(85U);
    msg.localname.assign("RRKJNGOXPVGERJUYYWURCSFMXYDPDXVPEEAHKCDGWWNGGGZFGLTQDXEZBUDULTZWVYRZDQESFXDLBMCQVJAZZOBAOIXTAAWAVHPIFZKHZPJSMYWTVAKAIKIPCYWSLBRCKMQHYJMEUAHIDUTUHQBJXZHFUPUEKLQOLCTCJYMECFVCOIVRCTSTOVTEEOOKNYMQSJMHMHLWABNWQIIDRBGLBLNNQTIVSJYBRKN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SVSGTTIHWMHTACHDWTUTQHWBLEIJUDWDBOKMBVDGUUWRMSRZUWULFQSOLGQRNFGEYZ");
    tmp_msg_0.sys_type = 53U;
    tmp_msg_0.owner = 16844U;
    tmp_msg_0.lat = 0.189669803487;
    tmp_msg_0.lon = 0.833022385503;
    tmp_msg_0.height = 0.166325367141;
    tmp_msg_0.services.assign("MNWASSKIDMRHLCKDBILMCOFINUBQVVENTLQAANSPZFJICEQMZVEHEUQLVLFQNCGOCGKTNZXTKADDHSGHSFUKHWSLMOFACTAYXGJZYGXKBFXYBCYFVSWBDKPRTNSAJRCWRXTYZXBZQDVMGERUBPDOWQJWEADGWLMKUTVIIYGXJLOAUUBVJTYYEPGFCWPLXPAVBMROYNTRXQPJZXPIEHJOLFDURQZROOFZRMZNVSDGKOEUTUJYM");
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
    msg.setTimeStamp(0.559930256032);
    msg.setSource(32828U);
    msg.setSourceEntity(38U);
    msg.setDestination(33681U);
    msg.setDestinationEntity(201U);
    msg.localname.assign("UKDOVNHIJPNQMYHLIDUJDLXYNANARFZLDTHZVOKBPWBRATRSUJJKGHKZZBFVMUNORGBBTNMZCZEMDHAWBZVKQPYCXMYJEWIZBVPIJWFSUTYVAESSWXMVMOYUAPNONNCFLKDEDBBVGIKPEIFIHNCXPFGMUSVSAPCLQTWRYKTFHO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QTOGFVWNNUBGGSHPLRUDGFAOCEZRMKBOASNAELXSUHJJJBPFULGMGLGKIEJSAWTUECARVZNTNWOKMNCKMZYJYZVWDXTDQDFZHVKNCTCLG");
    tmp_msg_0.sys_type = 215U;
    tmp_msg_0.owner = 32814U;
    tmp_msg_0.lat = 0.371598161646;
    tmp_msg_0.lon = 0.907378655413;
    tmp_msg_0.height = 0.861514428396;
    tmp_msg_0.services.assign("KZGSWXIYMHCLJEQVNHUDPHBZNBTWKNTKQBQLDMUXZMQECAJPZGEOWDINAERBYZYRVDSCOTXTTWIYAPVYFQAIEBGGLHXMMZFAUUPWUZLJTYRCMYWSOAJDORJCPPBPLABEUDXSWTF");
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
    msg.setTimeStamp(0.915087580233);
    msg.setSource(38137U);
    msg.setSourceEntity(179U);
    msg.setDestination(46256U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("NJIBCJERXPMDKWWTXSWLNKVNAUASSPSPORMEBGXHYTHGOEZYYDBMOQUMSREQSDHKDNHAWSVIFJIHQULXSVVDRUFPTGDZKIITZGFOEVAMFOTCJNCKHGMNTLGOYBIBDKSAMJMKRMXVYHTLXPVZYHCCUUTUDKXBQSGFCOFVKREX");
    msg.predicate.assign("FGZARWVGJZMMGPVQVCKENKXOPQGWFNYVHJEEFKABMZAXOCDRKLOPBWWULCMTSNJLUSMLWAXIMR");
    msg.attributes.assign("JBYDJWAFAUGSPBAXCCIKVKGIVFWOONMKXLKBXFDIYMYAXUZGPYPWHLRKUFEBUSKCPRNTZAMFEPSLRDXQMJLTSPS");

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
    msg.setTimeStamp(0.0955693570872);
    msg.setSource(26719U);
    msg.setSourceEntity(150U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("OGMCMAJAEOCWFYVQZIVCKHRRIIOKCXPVAOCZKGFIHTBDDOGBPPVCFTUKAXUVZKZQJEDHPJWIXWGHGORQJFCLQFAAIEXKZBA");
    msg.predicate.assign("PAPNNNXUOTLSCOGQUYBKCWOBTDFJLJIMEVNOOWECKFJERHRAUOFVTHRLRQVFMMHDWPTYPAZLFAZCIQQKITDVTNPKSPPQBMQZZKFSYAEXXJCORJVIYEVWZQCHGSPXLERESDXCQKMDFXZHWXYTAYOIKVMOSFWUDEICMNZZIKLJRFAJMOLRVLUDYXTHGBBINGLGKSKGNIBUJHSCRUSWPUBYMWZUAXTHBGCANHGEMVYRXJED");
    msg.attributes.assign("NYKXUSRPLIHNQJMDPPYMZNNZUZHDOUJGCCWCYBWIBUXI");

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
    msg.setTimeStamp(0.051597804973);
    msg.setSource(46769U);
    msg.setSourceEntity(109U);
    msg.setDestination(17216U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("DBTAOKIQNNLEXCYKSSYHFVRXOKYGPOLZJOKHCBTAMQZQCFPINGEGWNDIHPISESLVIMDYZQUCNJMKDSSGXGTSLWPVVLFIJCXTEBMFOVPTYTIQJVRAZPHKHEJFQJRNYRBWRMYICXVQ");
    msg.predicate.assign("MMGHOYNLVRZFSMFCXXTWPVSUMNHEYSXUXUXFYQGCKEYBVSNJEIGFBAUHBOBTAYLVCDQBKLTQGPWEDCQQTDUHUPMYRJVHBKEHOJNGAGEGYJPTKTIZMTAGFWJZKSRRDSQBENZ");
    msg.attributes.assign("BOEDCWLQYCHOPZNEHNMEEVYLIYPCZYSOIVOMVMREUAARMWDVMKIOIPHKTWPLMLTNZOLIXSXDCQ");

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
    msg.setTimeStamp(0.419971309516);
    msg.setSource(38352U);
    msg.setSourceEntity(194U);
    msg.setDestination(34271U);
    msg.setDestinationEntity(139U);
    msg.command = 45U;
    msg.goal_id.assign("PZFWRAWMQHHEWKUKGBMDAJLGICILGQMZONNGRKJSJOBUMEPQCXRKESBXYCWREOINNHGSIEIDRIJMGKHUFWPDYVSTHXQZBQHDZXFLSIWJWTEHRVOVPRSPBAVYBTJNLGDSFCUTVLQMPATYXFMZCNUPUKODAZXLNXOTTOGHCBWAVFSMEOLRFCBZVAYZ");
    msg.goal_xml.assign("WJSIDNBHCEODYVKPKEMOEJEAGHWBGYFBZKOCFQXDOUXBNRZARJAOJYUZSMSITRTAFNRPCOQPQUGWGHYNCUCKIIMDIZHOXXSMUDZTJSDGABMXHMQUCTYPVTEPDQPKGAFYPUWRAJETBFOOWUZFGHEKJVXALIEIXONGTQCRXNYVHIAYHKBSKXSBVLPKJZQXLWLRWRLBLSQCYFPZWAMGELMDWHPZVBFFTUVVCJHJZUYVDGRNSNNLELF");

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
    msg.setTimeStamp(0.230035198594);
    msg.setSource(28845U);
    msg.setSourceEntity(103U);
    msg.setDestination(23270U);
    msg.setDestinationEntity(197U);
    msg.command = 213U;
    msg.goal_id.assign("ACFVOKPRIWNMKLWKYSYMIIEUDNQOKKSSIENZHMNGSPUEBZPUTQVICJABXJJEUPZIWTZHKKPVNSDLLUVPHOYRTTVCAFBANUHWTEWLNLBOIDGBMHBMJJVYRKPJDJZXPGDFQOSLJTUUECLWYEFKFMBNJIXTERXEZYBQDYGXQKAFRHSFXPUHRIFDCTVLGXZCOALQGCSCCGXYSAYSATVWORTLDBZVJMCRMNRQGQAHWXGV");
    msg.goal_xml.assign("UCJAGUJGKSAZNSABFWCULXWEJJPFOINROVWWLVIISKTTNYMOXGLSTLZTHR");

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
    msg.setTimeStamp(0.512011657242);
    msg.setSource(14695U);
    msg.setSourceEntity(222U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(201U);
    msg.command = 88U;
    msg.goal_id.assign("TIZXSNVHFKCHULTGNNGAFGKPRUSSDDXIDOBXMYVXAHJPWSDKLLBTFFTTZKVTOVZCPAVQUNGUAGYRCSRPYUPFXB");
    msg.goal_xml.assign("EWCHKNPZLLLIKDYUTXMUFDQNJLTMQBMKHCCFJYYFTQUOVZZDRZURWNGAGTTVPBRXOSEMQZAUPMKPSDPZJFHGIADFIXYEDXGUNVHBVMKKJOJJZNSWFVKIEQFXLWCWGNAYYAGANJRNLJTLSQQSRDJFVCIFBIEBEPIHUUNVRVKBKZDUWSIOQPEYXZOB");

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
    msg.setTimeStamp(0.25511006407);
    msg.setSource(2461U);
    msg.setSourceEntity(182U);
    msg.setDestination(54270U);
    msg.setDestinationEntity(184U);
    msg.op = 87U;
    msg.goal_id.assign("IEXCIAWGQAPKXBRYSZCSNFPQMOGTGGNEZTODZHWDVMVCWMRSCCSFELYFVOQLNJLBUTVOZYSQUDGIHKBJTMLWIXPEHGQUUIRWBA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IDGROHTTOZVCQGDMCXPHTSVYUSRHZFSXOCEYZEPDWPXTGJUEWXPDTJRBQVWHJJAXUNKYPCCEKWQLMNJFHIOFMHGJDPLABMPLHLQYOVGKDACSMUQDOBYAWLJXKEMVLAZTKIZOVBOJAGCNGSZMTLMRMGBEUHIAYGRFZRIUQVRTCKBWSLQISWUUKYPIIRWZOJPBWBOQFYEACJBDNVZEMNFNEACT");
    tmp_msg_0.predicate.assign("HWLTNXBHCOZFCDHAOIYZKLQMVTGRVFFPMRJIZGDARKWKJLRXLIPQYNWCYVZSPIEQFWRMPSORSSYPIEVWKPAZXDWGLIPHZFXVQYGUYKABTERCKWTQKUJJBLSAJIKEXXUUDZAXLFDDNDWFCVGOSQETNRLPCZVFMQALBJOIPY");
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
    msg.setTimeStamp(0.633013029806);
    msg.setSource(19648U);
    msg.setSourceEntity(106U);
    msg.setDestination(63542U);
    msg.setDestinationEntity(106U);
    msg.op = 55U;
    msg.goal_id.assign("HCVQIDDZVCGBNGIXTORPKSMLYQCCHHNONOXSRVJBMOZRMIHAXLOMUZKTFSXZQMIORMFCFUQDJYURHQLEKNGYEAKUIVNKIMWYDTEUEAGBGNTHBCMPLDY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CMFIPFUSEKBXMLWAOTBHFHILOPVPLKKJDZKXEUACYRJUWYBFPUCNDPQYXEUWQ");
    tmp_msg_0.predicate.assign("BEEYJWKHRDTTFRZNUPLUPUWHFBGEQBTSLHKNHQDIRBWQVURFRHKVUESAQCIIIGQFCWHNQSGGASAYMKTIGCIWXJMOPHDCNGGDSPXYCZZZQWEOAYVCXCDMBGDOXNAGMTSVYJNPXJTZPOXCJOYWBIDKCEUEXNFWKFOXRYYTLOXHDUNLMFHXJPFODZZEWVJSQJISMUMAVIRMVKOTNBPHULZKNARLAFVDBCOEAYMWIPKPBGTZQYS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RIPSLGIMUFMIOWXHZRATYTEOJDKB");
    tmp_tmp_msg_0_0.attr_type = 251U;
    tmp_tmp_msg_0_0.min.assign("ROVZIVIVTNAHBGCDQIZDZUSFAIQHYZVXODANJMXHDSMKBTUIZMFRMNLXEYIEKCHWJZPRLVWOWGDIEIHFYGWGQLLRZKROGFYGKKPCUXSPBUKBRMBQZCZKOQUQGGDPADLSYHUKKFDEIMCOSFNJSSJYZHMWJTJXXXKENMOEUVBJMDVUTXEWTYBNYLCSJPJTWWMBYGQHARRPEFICAOLPVGLHPCVXQTHWEEAL");
    tmp_tmp_msg_0_0.max.assign("YWTMZFCZNUJBILUXQOFHZGSTFVWOPCACJKRVGNCYCCRYWPUODAHLAFARLSBAYELBUKMEPHCKMUDFFZNOJGDWCMVGSSRLSNZGIQ");
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
    msg.setTimeStamp(0.330720685043);
    msg.setSource(44592U);
    msg.setSourceEntity(83U);
    msg.setDestination(41836U);
    msg.setDestinationEntity(225U);
    msg.op = 41U;
    msg.goal_id.assign("QFFPFCOVBPNLBBUJBDIBJTXZFULBDRVCAQGRUKAYCTHPCWRKILFRSZMGLGZAZNYSNBEILBVCAHGDSBOAKVLREXLPLQPOGFYSRXWDIXMFOJXCJKVPKKDWJBADMYIFZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GZLFRXZQQEZQRKAOOYLORMTMQWGAPOHUXLJESSTVWPXFQBKSAUPIXPIGJZOUENTJEXXYQTHAEBPJJZBHFLPZQPZEGDRFIVVNYQGCCFOBJDHMIFKMICAZMATJKPGKVYBFDNNVUNQNYSKWNVVRNYCZFCNYSISAEELCQGWRHAGWPFCMBTYNDJMXRHTRSJRUBCOXKWZLWWXWBSALDLDSDXUMIUHPLCTOBTDUAGWYOLVUSOKVKYIJHIM");
    tmp_msg_0.predicate.assign("CCGGLSXRGTFLRBIXQONIHZEFYPMVKCQZHPWNAMJHFJSGXWTWCHUQXFJYTLNJGMOCCVOFMNKVYAVEEDXXHZJTDPNEGGJTCKSBQEWKIMVKGODQSACDBZWGFBRPVABHNTFAIBNOEBELFQLKIKOOEYANPQMKIYVBVHRWRGDJEJVAZATU");
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
    msg.setTimeStamp(0.431680308492);
    msg.setSource(55845U);
    msg.setSourceEntity(216U);
    msg.setDestination(53700U);
    msg.setDestinationEntity(202U);
    msg.name.assign("KYWAVFUIQGCZEXUBHSSSELOEDSWKYRWGSNXOAPDUXPKSRQHOZPHBOUIEHVUF");
    msg.attr_type = 203U;
    msg.min.assign("VNWOQDWRMMKSDXPEKYZZLAVPHMLFESTGTTZGSJHVELTBVUOBAFPUXTGORDBMXHLQVZFFLVQUSZPUFTIOYABAPETJGOQ");
    msg.max.assign("FWRBTVTZYCHIWCXMNFFXPXVMHNSKNJVXKHYJAHJMBORCVQBKOHJJSFUZIDHFSPTJNNUOQCTRTWUDUSKROZFLKPRALVJATQDBDSYUWPAXFRENUVFIOZMLYEYCIIUMHCIKCNVQYXIXBAZ");

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
    msg.setTimeStamp(0.372143531671);
    msg.setSource(49178U);
    msg.setSourceEntity(232U);
    msg.setDestination(30117U);
    msg.setDestinationEntity(139U);
    msg.name.assign("IMHVTSVXVEBDAGKDECSTHRJYZTUCVGTHIPDRFLSPFSLRXOZRTQAKAUC");
    msg.attr_type = 28U;
    msg.min.assign("URNVNNPLPBBPNTKLDMWZHYHCUSWBHFUIKZCLSWTJPSNZNOZYYDK");
    msg.max.assign("RURUKWUUMMNKIHITNQSZSJFLJNLPCLHCRRXZNTYJBJRUZ");

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
    msg.setTimeStamp(0.517358519262);
    msg.setSource(16624U);
    msg.setSourceEntity(128U);
    msg.setDestination(1850U);
    msg.setDestinationEntity(226U);
    msg.name.assign("LIQQZEGDORULRCIRJNLLKVZQGDUTMOCRBSVNUYFGMLNIOOZWVVGVRXGHVYDMCWKOQUUWXAAIBWIQMNXHKENIHQIMNFZOVUTYJVXLKOXRFFJYSOETZAHNTGNBCPEJXAPOQEAWTFBOZBYKKHGPATDUHUBCPZIJCEHTPHURBZTWDETNRBWSKMIYWCKSPVJGJAWXCFHBDXY");
    msg.attr_type = 119U;
    msg.min.assign("YXCUTXHMADTESYNMQOLMXTQYWCHXASJHQPYJSSQJPOZIVVZKIK");
    msg.max.assign("MYBWGHSNPTAKCKZVBUGWKPDFSZOEMVBXGHFBAIJNGJQTSCWGYIUKDBGKCIEURLJBZJHXUAXJTUQDFODHRPEH");

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
    msg.setTimeStamp(0.847925521326);
    msg.setSource(17355U);
    msg.setSourceEntity(182U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(103U);
    msg.timeline.assign("PSNMYKYTXJMFHVSBZZCUITWQGJILNLAOVATAAEORHEWDDYNGXUBKGBZJI");
    msg.predicate.assign("HUSEOKHIKWMQAUKQIWEWRTUFFHFTNGEGNEDTXXGGOVHBQFLPZDUOVSS");

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
    msg.setTimeStamp(0.913200049499);
    msg.setSource(39119U);
    msg.setSourceEntity(68U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("HSQKQJYXMJCEQKBZIXNCGYDQAPUSGMPFANGSXLFTOPS");
    msg.predicate.assign("WTTZZKVPLLCFBSRPSIRRXVKQEBWZEHISFHBHPPPAABUAIXTCKPGLYTNGMJZHMQWOXESFIOFVWQQJGPVBHIRZFFFQNCGNJHXIJVDMSGAXQEEVBEDJQOGNOCCRQMNUEIRLK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TKNOREXJVAHFGRLDDYRY");
    tmp_msg_0.attr_type = 144U;
    tmp_msg_0.min.assign("VHVUTPEXLDWWPNNGMOSYYNNPIEAFNPJBOFPEQSZGCDVSIVMAZNXGLZQXEXWLXTCVQKFWHAXGMZJMIVKDZYKFRDDSPFIXWUDUZRBFNTERRWQSFEYKEFGIIXLQ");
    tmp_msg_0.max.assign("NZEODFREDMCASPTWATWLZYQY");
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
    msg.setTimeStamp(0.347209471879);
    msg.setSource(42951U);
    msg.setSourceEntity(207U);
    msg.setDestination(9606U);
    msg.setDestinationEntity(46U);
    msg.timeline.assign("MTZEZEWJBQFOLMQGDEQHIJFBPLYRDJGNKHNQGJFGNTGVYXWIQVKVNKBWCSTFSIHWLRTUCUJZXIKKWTTPLRUJVLYSQXOHJBZDZPJDORAKVOHMFMLUSMPRSJUIKEQVBOQKWYZRDCUTFSIYINGXUPGCDHLYACGOQSXERMOGWSIKAPIWUBAEXBFJPANUPNZLTGCMHDTSYXZNRNEMECEAORXBWBOSQRCBYXFCAVTPDEY");
    msg.predicate.assign("RYOOPNSSDQYUECTGGDADSZUPNFEMYQTWJHFBCBTRCNDKSRWBKZQPLMWIPKYRQQPDXZEBOACWGFNEUOQVCEZRGZTGYPVRQOXPVUEAGZMGSAIILMLHQIAPQVSJHIFXZHBNTKLVKYHVDTBILMTYUHBJNWAJGBDLBMCCKYYPISSFRUUMBWVVUNOSHZUMWZAHAJLQNIMJEAXEHXLOPTXGXWKKHONF");

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
    msg.setTimeStamp(0.445469792761);
    msg.setSource(571U);
    msg.setSourceEntity(201U);
    msg.setDestination(20307U);
    msg.setDestinationEntity(155U);
    msg.reactor.assign("NKXZJPVBKXEMAMFAQYDGUQHMRZQBOSCXQKJVCRAHHLZVHRIJHUFWTLYXUDSIMRTNWOWPGJDZUJSMXXLEOTPPSHDCYJPVKUHGCPGQBIMPEFASWNVRBDMQYFFJAREIWVWVLUUHKFCDPYTOOYDNKSUQAWEIAIGOGDECCLTFQAWLVXHBCPYAENZGNWZRCLBB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GXKBXIOUESEAZQJFPGUSHSMZIMFIRAGHYBEKRBEWKJOZHZLLAPTCOQNRISTJPVTFPPKBQOSDHHVTDDPQIUJENRQBRDOGYGJCVINBEWWWAOONUCWPYDANCWCYNZRHMKLQGDLXCTSMXUXAPKFXWHSBKZBRENKNYVSVFHIX");
    tmp_msg_0.predicate.assign("ZLEDVMOUEIWANAWBTATLAZXDDUFJSYCGJQXOWIINPJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KJKYHTSQFVNUROOSLKIGMDMVSEPBCHCWAOZNDPEPHXYWEIOTPPNOQHUZMGATKGCKNJLTIQWR");
    tmp_tmp_msg_0_0.attr_type = 61U;
    tmp_tmp_msg_0_0.min.assign("CIZOKOKTPQJAXMXRWCOXRCFLAXVCUBLEOJUPUQBMLBTVPYWZAAQUWRYEEVUJGDPKKXHQKNKIZTHREVDGBJTDSHEGRUNPOVRTKPFMHYVNSAAMFNUEMGILLPVYMQRNSDZFOWWWEGNOEUQH");
    tmp_tmp_msg_0_0.max.assign("DIJBNDWAINKECRLCRIEIEZIMQXUBYSGEFZDOHZSZTPKAULUJYQFFTYXMMLKFUAYXRSPRVNMLWWNVWPVJIIJHGWBDFFPWOVAOSGVH");
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
    msg.setTimeStamp(0.730801784601);
    msg.setSource(6676U);
    msg.setSourceEntity(219U);
    msg.setDestination(50084U);
    msg.setDestinationEntity(7U);
    msg.reactor.assign("PUFYYUPBXQLZLLXDVWBGPJJXETZQZSMOKSDXDNNFSLOTWAWWTJHFDPNMZKCQMON");

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
    msg.setTimeStamp(0.196699304061);
    msg.setSource(29981U);
    msg.setSourceEntity(253U);
    msg.setDestination(57720U);
    msg.setDestinationEntity(5U);
    msg.reactor.assign("AIMFABNIKBYMSDKERHXF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PFJNXKNIGUMTLWAUNIVAITHKISXONADIFKJFKHBHYKAJMETLZNNTUGLCZTFYXIZJTTBDVHIAJGHRQBXYUYLNXLVEDOUSYZYECFQFSGBMAXHUMGVQOAAWYOOPPXKSEKJXJBW");
    tmp_msg_0.predicate.assign("JXLCAQALWPSIHYNDCOBCWEQRTEIKUVWRFRMQBVOTERBTYGPZXBNEOWGBDNILJYFDXXKWFICVCDYXTGVKSHBIZXYOUNFKNEODRXMSOPIMEHJCBWTYMCQAWKCDHUVNRIHGRUZYNESLXPZTJBWGURAZULLFLQSJBORTSGAUZGAOKVJUSNSZFHJQJHDHCDJIOHFZUNAWKTFFFT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZJOJHFZIYUBSQKCXLPHTWMTJVAOXXITLWYSYTWJUBRCKDFHDARTOQQUUHQYGGSDNRVSIRGAQNELUIFTCKIRWHRPPXNEUVYL");
    tmp_tmp_msg_0_0.attr_type = 27U;
    tmp_tmp_msg_0_0.min.assign("BXLXSZYNRUKQXYAVKYCUIEOMNRQWXPMPFJLCYGZVAWBNUHUMHUQBSOITUHLXZVFVDMYPNDAWBITWILRTSHREYAIHSXGOVIALKSETKJDJKCHRMRQZUTGDJONWCZNKMGUBYDSIBDFCKMCNNBXRRGJFAPITQWKLTCODLH");
    tmp_tmp_msg_0_0.max.assign("MEWQFQSSYMWTIKRSVCVHYNOEEQFFOWNQVJJRYJYNXXUQFSARZDVOUEKHKJKMEZNBFTJYUXVZZPBXXAYIPTRRAHKDGKHBLMBORBGZPCTSASIWHBZCQIXA");
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
    msg.setTimeStamp(0.790632051179);
    msg.setSource(50385U);
    msg.setSourceEntity(118U);
    msg.setDestination(11575U);
    msg.setDestinationEntity(216U);
    msg.topic.assign("PFNMFLSKWDKEUTDDCBFPKCJPFOECVWGRYAFTXMMROHXMAOFGYXKKAGIFVAVJELTMAYUZXUYCUP");
    msg.data.assign("OAYIKWKBZWGXLIEOAVWQJJSHOIAEMAJXXPGJTVWHSETAJLBVEYPBONMGOMZPRASTEQXNS");

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
    msg.setTimeStamp(0.576023967911);
    msg.setSource(45254U);
    msg.setSourceEntity(215U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(205U);
    msg.topic.assign("JAEKNPKRSHNVISAQUGPSGFDPTKIQHGJIQHDDFAKWMLYIAVJZYODYVLWDDXEIVR");
    msg.data.assign("GFKSKUBNEWTFARGXJAEDOGZIBTFTUOJLZEPQQYNRLQWWXURDHGTKCJFOMIBYYQVNUJVBHHXHHDKKAOVWVGRIQPNXSJRXNDILZSFOKYQCIFVSLHULLAPSRRAMNJYCQFYCWLBPTKMGJEFPKELUNBNCIWTGMWYORTWQYVBLXOVBCMXJGNEZYLPESDPSYIDKGPDARVEIDIMZCUU");

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
    msg.setTimeStamp(0.0999544745034);
    msg.setSource(23499U);
    msg.setSourceEntity(137U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(13U);
    msg.topic.assign("YTXQGQIVWZMKLNBFCGNCWPFDACRFROLETUVOXYKPLYUFRYQDYGGAGEM");
    msg.data.assign("GRMINODGZYUYFMAILSBCZIKLVRMFBBRTYDSQWHPQGHCAVCLWREGISGQTZMPNPNJTUTLIVNLOEEMRCWMQYZMFUJNKROWDQRHPFFKTUGJDUYFJCZLCSRNEAVIQUKZSVEBHSONRJQZLSVFJQXESXJWRBDBAONYXFGIJFJQOHNHZKCHATPBGICCBKPAUTHADYJXVEAELMAYOOTOXPKYVWKT");

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
    IMC::DockingState msg;
    msg.setTimeStamp(0.490810457381);
    msg.setSource(25534U);
    msg.setSourceEntity(161U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(85U);
    msg.sys_name.assign("ISIWBVQATWLLULPJLHLPOKHTMNJIAGKJ");
    msg.state = 60U;
    msg.availability = 215U;
    msg.vehiclefunction = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingState msg;
    msg.setTimeStamp(0.381146389767);
    msg.setSource(47394U);
    msg.setSourceEntity(186U);
    msg.setDestination(63308U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("QVPQWPEWUGWNZMITENHDMAFMVBDZRJKILUJFDEACFNMWAGAEDSMDVGOCXUBECAZYXEVNBQTUJWZFXVVQPRGMJIEQPTTPBRRCDFJKNLBRIXUHSILJYAYFUZNINXURDLHKOKKXHCHKOQVDNSBPZCKQTLAOMOGWJLVSROBSHXEJHCWKYIBLNQFPLYUOYFSZGAXYTTRQPIJCVYTGFWUHYEGMSGXDSURYLCTTAVZHSQJFZWHWDIAKRK");
    msg.state = 4U;
    msg.availability = 173U;
    msg.vehiclefunction = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DockingState msg;
    msg.setTimeStamp(0.391998977296);
    msg.setSource(7948U);
    msg.setSourceEntity(21U);
    msg.setDestination(425U);
    msg.setDestinationEntity(16U);
    msg.sys_name.assign("XWAEBEZNIVMHLSQJQROCYDBHLSEZPKUJKDNEXXPZUZTHACQMXCRCLFMSTBTKSABNUGERBYXGSZEQKAIIVWNURBPTWBEFGQHVMVWIAMVOUTVKGIDS");
    msg.state = 6U;
    msg.availability = 239U;
    msg.vehiclefunction = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DockingState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.466817104957);
    msg.setSource(18879U);
    msg.setSourceEntity(55U);
    msg.setDestination(32673U);
    msg.setDestinationEntity(21U);
    msg.frameid = 144U;
    const char tmp_msg_0[] = {-57, -82, -29, 34, -42, -126, -16, -121, -84, 115, -125, -51, -37, -39, 50, 79, 57, -17, -68, 30, 18, 87, 15, 93, 32, 14, -67, 118, 96, -65, 43, -107, 94, 120, -99, 18, -27, 49, -1, 37, -7, -50, -17, 45, -112, -68, 23, -70, -94, -65, -118, -16, -1, -19, 93, 124, 44, -11, 79, 23, -16, -23, -70, -53, 70, -68, 64, 7, 81, -49, -80, -125, 46, -62, -115, -58, 34, -118, -98, -72, 59, -48, -103, 35, 93, 42, 58, 91, -22, 92, -104, -122, 0, -79, -88, -21, 110, -41, -80, 65, -95, 4, -107, -126, 91, 18, -70, -43, -86};
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
    msg.setTimeStamp(0.00149833432163);
    msg.setSource(59867U);
    msg.setSourceEntity(159U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(88U);
    msg.frameid = 65U;
    const char tmp_msg_0[] = {-67, -115, 122, 29, -104, -124, 121, -99, 2, 48, -9, 42, -22, 47, 65, 31, -65, 6, -4, -61, -94, -35, 85, -49, 28, -122, -46, 126, 22, 44, -47, -57, 18, 109, 47, 19, -52, 38, 81, -37, 101, 15, -74, 60, -82, 69, 30, -33, 101, 20, -54, 126, 95, -37, -127, 23, -26, -9, 126, 65, 79, 38, -39, 114, -81, -95, 41, -105, -13, -18, 59, 37, -55, 5, -50, -99, 94, -51, -17, -10, 121, -80, 12, -89, -119, 9, 49, 79, 48, -8, 122, -25, -20, -48, -116, -59, -67, 49, -22, -102, 111, -84, -120, -118, 66, 0, -89, 19, -41, 64, 115, 65, -58, 74, 118, -76, -110, 59, -64, -126, -115, -83, -100, 50, -34, -113, -2, 81, -101, -125, -73, -34, -58, 5, 71, -15, 66, -42, -89, 110, 51, 10, 86, -102, 102, 24, 62, 97, -88, -9, 96, -20, 122, -52, -101, 76, -52, -66, -33, -79, 51, 59, -49, -50, -52, -5, -119};
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
    msg.setTimeStamp(0.945709925276);
    msg.setSource(22865U);
    msg.setSourceEntity(117U);
    msg.setDestination(9382U);
    msg.setDestinationEntity(65U);
    msg.frameid = 85U;
    const char tmp_msg_0[] = {29, -104, 67, 29, -82, -85, 22, 96, -97, 32, 51, 44, -127, 7, 77, -33, 1, -102, -96, 117, 114, -119, -5, -114, 21, -13, 96, 54, -68, 53, 93, -110, 55, -16, -117, 112, 73, -87, 25, -84, -69, 11, 6, -46, -31, 52, 31, -19, 85, 55, 75, 120, -59, 79, 0, 96, 28, 45, 64, 101, -110, 110, -100, 71, -83, -128, 61, 116, 47, 106, -95, -22, 70, -38, -99, 34, 42, 24, -110, 89, 102, -107, 97, 52, -72, 92, 5, -18, 44, -74, -31, 75, -105, -4, 95, -58, -71, 20, -5, 66, -58, -56, -95, 38, -24, 38, -20, -67, -113, -10, -40, -105, -6, -34, 53, -55, 101, 74, -1, -81, -26, -24, -24, 80, -82, -74, 125, 112, 40, 55, -83, -7, -6, -103, -76, 87, 49, 5, -56, 58, -50, 43, -100, 63, 30, -53};
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
    msg.setTimeStamp(0.0646418103743);
    msg.setSource(49665U);
    msg.setSourceEntity(186U);
    msg.setDestination(64723U);
    msg.setDestinationEntity(132U);
    msg.fps = 224U;
    msg.quality = 249U;
    msg.reps = 173U;
    msg.tsize = 170U;

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
    msg.setTimeStamp(0.794176922115);
    msg.setSource(5745U);
    msg.setSourceEntity(205U);
    msg.setDestination(44199U);
    msg.setDestinationEntity(236U);
    msg.fps = 16U;
    msg.quality = 196U;
    msg.reps = 37U;
    msg.tsize = 155U;

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
    msg.setTimeStamp(0.321796405326);
    msg.setSource(51536U);
    msg.setSourceEntity(166U);
    msg.setDestination(29675U);
    msg.setDestinationEntity(36U);
    msg.fps = 34U;
    msg.quality = 97U;
    msg.reps = 12U;
    msg.tsize = 26U;

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
    msg.setTimeStamp(0.269310502417);
    msg.setSource(15148U);
    msg.setSourceEntity(109U);
    msg.setDestination(5367U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.0435194933685;
    msg.lon = 0.736266710303;
    msg.depth = 247U;
    msg.speed = 0.392849882431;
    msg.psi = 0.734501380129;

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
    msg.setTimeStamp(0.230626374389);
    msg.setSource(5371U);
    msg.setSourceEntity(218U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.380129512193;
    msg.lon = 0.394742591991;
    msg.depth = 70U;
    msg.speed = 0.680398933242;
    msg.psi = 0.637770026405;

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
    msg.setTimeStamp(0.601222266645);
    msg.setSource(43460U);
    msg.setSourceEntity(247U);
    msg.setDestination(54742U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.336904486756;
    msg.lon = 0.512890405856;
    msg.depth = 186U;
    msg.speed = 0.00182839621199;
    msg.psi = 0.382068817624;

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
    msg.setTimeStamp(0.144538137459);
    msg.setSource(53067U);
    msg.setSourceEntity(58U);
    msg.setDestination(25595U);
    msg.setDestinationEntity(18U);
    msg.label.assign("RHCIHNFKWBAGEWWJUOMYBAJNFYPIIERLTDZZXYPOECYGRHEJXYMNRLRJUKMWTGZTSJBYVUXGHQJUQGXNDMMBTCYKQFTUMSSJOZBSJLAASGNESCIMPHRLNFXIUVVPGCSKDDQMWKQHLIZAAHCBOWDELQBMUVHJRISNANMWSILKQVEQGNQDIOAWYCSAFXTCZNWBRQK");
    msg.lat = 0.150375235134;
    msg.lon = 0.520691812885;
    msg.z = 0.0679429111908;
    msg.z_units = 210U;
    msg.cog = 0.262623152648;
    msg.sog = 0.851859263937;

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
    msg.setTimeStamp(0.453029283806);
    msg.setSource(63001U);
    msg.setSourceEntity(167U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(35U);
    msg.label.assign("ATUGMPBTSHUQYCRCBOBRT");
    msg.lat = 0.782494533001;
    msg.lon = 0.928153368813;
    msg.z = 0.565297445313;
    msg.z_units = 212U;
    msg.cog = 0.306211851131;
    msg.sog = 0.263917049657;

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
    msg.setTimeStamp(0.0678267802083);
    msg.setSource(50442U);
    msg.setSourceEntity(141U);
    msg.setDestination(10387U);
    msg.setDestinationEntity(11U);
    msg.label.assign("RZAWAXLGUHGAJUJOEVJKLGYBUBVALYNFBYXLMLNSQQZDYRJFQHJJUEHDARFGWPVKQDNSAMPMCDEVICIXWWRUPPHXIGSLVIZKLTGTHBVFWXHPXDSLNDBHHCOJRIAQPOVZCVFLHOEOQWYIXMCTZGRZZSYZOHFXMJCQGIJRJEBRZUKKIPNOFTPXELPKBTEDMEKYFQCDBSVDEQMOGSTNIQUVPMUW");
    msg.lat = 0.291779159316;
    msg.lon = 0.576825657284;
    msg.z = 0.297402883302;
    msg.z_units = 103U;
    msg.cog = 0.624775279605;
    msg.sog = 0.841106074829;

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
    msg.setTimeStamp(0.110038316449);
    msg.setSource(13453U);
    msg.setSourceEntity(251U);
    msg.setDestination(58068U);
    msg.setDestinationEntity(39U);
    msg.name.assign("WLMYETWVUCSHRPOHNLJEYCBKXOTVWNIDGNXDJZFALRFXSTJZAEYGXWFGFXTJQURUEDZLLWYLZAEOPKZSXTRKQRSFLVOTRWYCDFYINHTYEMPRKWEUORVKSWLQZ");
    msg.value.assign("UHBQSOXCXQQJXRNVQYGD");

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
    msg.setTimeStamp(0.352087991068);
    msg.setSource(35090U);
    msg.setSourceEntity(80U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(98U);
    msg.name.assign("BPWKMOIFHWXWCAZTZDNZVYFLOVAICTZTJVIBDTSQZQQRJMDNHXXRAVIJYMSBMKUULGVMGLPIXUEHUNDPFHWXGYZYAGNGDXWEZESCSLMNIRORXMVHGWKDIBEDFCQKFAPERLFTQUJOVYSKIZXJGOBRBQBLQICBCOYYPTPYSENRHOO");
    msg.value.assign("TXZLFPZENWHSDFRQQAVREB");

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
    msg.setTimeStamp(0.403771258209);
    msg.setSource(58618U);
    msg.setSourceEntity(159U);
    msg.setDestination(33237U);
    msg.setDestinationEntity(115U);
    msg.name.assign("EZGCVAHFYYERDDQSVHOZAUGQRRFBZVWNDWISMPFYTJNSMTBIPKLXIDAOCQNIXCGNKVTYIKUYZNVLTXBGDSUAKGXNUIFWRHRHWAE");
    msg.value.assign("MEHPFAIFKLL");

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
    msg.setTimeStamp(0.505040164407);
    msg.setSource(9550U);
    msg.setSourceEntity(210U);
    msg.setDestination(37959U);
    msg.setDestinationEntity(52U);
    msg.name.assign("CZVWOARDGYENWDPRTY");

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
    msg.setTimeStamp(0.518903304694);
    msg.setSource(48900U);
    msg.setSourceEntity(110U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(179U);
    msg.name.assign("LPFPVMITHFYVUVLBYHCYDVWQOMBDQMZHKGZDXDQHEPWEIBPJGOWMPKMIGSSAFNHVSSPNTAQSQXGFZETGFDCWCURJYFWMLAJQPURTEVKAKDXGICRKYXXIFWWXAGJLBKHRHYOQZRTIALXPDIJCZCOKVRQFKRBZYBOYSJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PFKNGEOHINPAKMLGUBNJCYADYKVNWJUKNPHCQWZWLWRZEIMZVAQPBNEPKSXDFDQYKIBSMONSXJAOLBGB");
    tmp_msg_0.value.assign("HYNKLQDOCOLIJKQELTWZMUNMSOBMVDVPUXJPNRENIJZARGKVJYRPTDCBPBINACSSBCHAWZSXOFFFLJZATCOSVYWOVREADQCUVGUHBXKKVESDGMTSDCGDHFRDYPQRQFZQJFWMEMWPBCHOIY");
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
    msg.setTimeStamp(0.325193894872);
    msg.setSource(45273U);
    msg.setSourceEntity(173U);
    msg.setDestination(55772U);
    msg.setDestinationEntity(107U);
    msg.name.assign("TNKHEKGFJRHSUMJIPZBKCMMSDJAZLPZLUEJUWNTLOGCWJXNCCYICPFVNMQPDZDVCXNDGOBPRTKOTTEANQPIHYUGRSLGUGYLIFRHSDYHCQIWFMYSOEUQQDFBYJQTQLHVLEHAUIFOEZAJZPGWBAKVPNRARTOOCYYFXPHOXJVNIXMDXJIRLLLQWTXUKBVFAAMEDSEZREVFOUSWVKSWBNHADSKXTGF");

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
    msg.setTimeStamp(0.0784504905807);
    msg.setSource(10118U);
    msg.setSourceEntity(1U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(39U);
    msg.name.assign("EXITTJRWOJYLVKHBTIKOQBTTLARGNNIBFFRUKRIKKUEDYOZFRUDHWDTPZUESLYBJOCSTWZSMXOMPLSLHDAQFOWIDWWYEAOEKKKDVDHAPMZLFUMXPIVVCAWNBRSPRBJHNXPWYGAVQQQOJCTCVPUGHNCRUBFLTKAMYYJVZBQSTXGOGUVBGIAUELXZDYKLXXGVAMNCGMHFFEJFZR");
    msg.visibility.assign("AJYOOPZONPKCYLBEHGRKJWDTQYUGVWDPSW");
    msg.scope.assign("YFFLSPQORDILOWLBJZYWXZCLKAXYNWEIWAGMDVBEFCHZBJCRPJMLHFJQTOPGLWWCREWXXPIMNSRMISYSKGDDYELSUIMZFQHTQIHTCHEMFDGEDTROZPBCZNPCOJXYNPWHKJNMGMUXEOIBTCKZKUJEINHQVYVTCAMMFJVPQ");

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
    msg.setTimeStamp(0.792486945761);
    msg.setSource(15626U);
    msg.setSourceEntity(136U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(241U);
    msg.name.assign("CFKSEFDBXTIUVRMTFZUC");
    msg.visibility.assign("JWDCRQGUFUYSCAISKB");
    msg.scope.assign("WRBOULDYRIDLCJJDMWGHHQSOJEUCSBACCFJOLLSEZUXVJUIZCZKJITQVHHBXRMEIMUJNBBGDNYSAZWKAGQEBPMMPGPNBFGJJCLNCDYTYONXIMXFLTTFUHZICR");

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
    msg.setTimeStamp(0.0479095990829);
    msg.setSource(47129U);
    msg.setSourceEntity(182U);
    msg.setDestination(62553U);
    msg.setDestinationEntity(46U);
    msg.name.assign("SGEOCHXRGWENASMRZSKRAJQNEZPXZQNFIPDLUUBKFODPAJGOGFPYKIULLYDIPCHJCDVGMAMDQRHFOANXUSWLULJXIIHTYBWBQWPKJIKBSARENZMHXOOUOUUUTAUTGVEVERNWZBXZXNIWWAADDBJROLISMWCMQ");
    msg.visibility.assign("DMGRDKTQLJUOZYJDDKYRSIMAISKJIIHSCGBLXAQPPNBBOECFKOHELQPVZVPSMEVOYXPGBJLAIRYELJGPCZNZHGQFUDBQYZTTAJKZRGGSHUNBSEUQFHCWWTETHNXNDKLAMHMJXYJXZUSRFWUCNFOYQVMRXVWXSNIFVYFTIPDTBWNUXANIPEJUZAFMYFLBM");
    msg.scope.assign("JMRFVIAJBFQCBEMCQBTAJZJTZAWOTXWPDEYYXPJVLYCLXSBSNINBFKXKQDPGTFQAMZFDUBNSCKCEDRLIZOB");

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
    msg.setTimeStamp(0.872138045165);
    msg.setSource(9434U);
    msg.setSourceEntity(51U);
    msg.setDestination(17478U);
    msg.setDestinationEntity(40U);
    msg.name.assign("AIBNEFTAZXXEVEQVGAFPMFBGRKJMUCRXJVUETBJHJCDCFYNEVSBYHWWFOCUWCQKVHKGZZSRBSPRGXKLKZLLEEXBDYJWDFEIDXWSXMWDYFYBQGCUTNMHNIUJKWJIIMAKLGGWVOOQNDLERXQRDISQDANZWOPOQPQODXYUNKRTCNYNYJFSAZSEHJZOTRHRQBDPQMVTKOANUIAVTCUOTXVWPGGFRCA");

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
    msg.setTimeStamp(0.783065066168);
    msg.setSource(29081U);
    msg.setSourceEntity(16U);
    msg.setDestination(33260U);
    msg.setDestinationEntity(232U);
    msg.name.assign("DJQPOPGVGTHLNLFOBKYJDNOAWFKQIQLQJNNURCTVGIFHFMHYHQWBZTSAZPSNIGWISTLFEXTBBVUMAEXDSBQGDBHX");

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
    msg.setTimeStamp(0.078430963372);
    msg.setSource(42788U);
    msg.setSourceEntity(223U);
    msg.setDestination(9347U);
    msg.setDestinationEntity(151U);
    msg.name.assign("AXQZVABPMSORE");

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
    msg.setTimeStamp(0.916660576238);
    msg.setSource(32712U);
    msg.setSourceEntity(34U);
    msg.setDestination(37824U);
    msg.setDestinationEntity(65U);
    msg.name.assign("UKWZSPFGIJXBWJFZNEPIWVUYSDYKCLJHYQSTJDNURAEVRTCXUMXQOKMEKGPGDVXUQVFJHFRCHZFXIOSKXPAXAMUOPPXTZCKBAFKLWPROCNTBTLJYWIKQDADQRVBOUBETBRBEGYHMHFEKQNOETTENW");

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
    msg.setTimeStamp(0.846290309234);
    msg.setSource(30766U);
    msg.setSourceEntity(46U);
    msg.setDestination(22874U);
    msg.setDestinationEntity(36U);
    msg.name.assign("GZSWTOJPDNLK");

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
    msg.setTimeStamp(0.150461642945);
    msg.setSource(27592U);
    msg.setSourceEntity(120U);
    msg.setDestination(5800U);
    msg.setDestinationEntity(119U);
    msg.name.assign("PRSLMNGYOUKGJAEPZBWNMKKTBEVRIBOTPNYPGDEUGZNOIQOTDLZWXBCPBCAQAKOUZHERXZTLIMCRHEJYJKZFSINGBIUPDCDWHVMKKBFMBVSZRWAHLVWFFPXJPCJAHQANSJXXFBLQGMLJCZTVLWQVNYVLSBYMAKUWJTRMOOGXAXZFQNGJAHCYHEEIYVEKHCCDDUDIWYDOQUDFUUCLMGKDIRIFESOQTSVYLJGINTUFW");

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
    msg.setTimeStamp(0.237205022025);
    msg.setSource(28216U);
    msg.setSourceEntity(213U);
    msg.setDestination(15074U);
    msg.setDestinationEntity(117U);
    msg.timeout = 415179436U;

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
    msg.setTimeStamp(0.377380376576);
    msg.setSource(27153U);
    msg.setSourceEntity(239U);
    msg.setDestination(47648U);
    msg.setDestinationEntity(141U);
    msg.timeout = 1453669799U;

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
    msg.setTimeStamp(0.809479345452);
    msg.setSource(6773U);
    msg.setSourceEntity(192U);
    msg.setDestination(17221U);
    msg.setDestinationEntity(80U);
    msg.timeout = 3853382507U;

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
    msg.setTimeStamp(0.583780667485);
    msg.setSource(10440U);
    msg.setSourceEntity(49U);
    msg.setDestination(26256U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3044564671U;

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
    msg.setTimeStamp(0.801220514958);
    msg.setSource(24684U);
    msg.setSourceEntity(123U);
    msg.setDestination(28875U);
    msg.setDestinationEntity(159U);
    msg.sessid = 3208384625U;

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
    msg.setTimeStamp(0.215472884564);
    msg.setSource(45525U);
    msg.setSourceEntity(124U);
    msg.setDestination(12375U);
    msg.setDestinationEntity(69U);
    msg.sessid = 1333957380U;

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
    msg.setTimeStamp(0.063846406842);
    msg.setSource(17360U);
    msg.setSourceEntity(105U);
    msg.setDestination(26705U);
    msg.setDestinationEntity(197U);
    msg.sessid = 1303921947U;
    msg.messages.assign("SXKSNREDMDSPTLAWZREJDIWTLRNXCBLZYKIBRBEHBAGVLRHNQUJPPKCWWPJHOEGVSHIUPIVVFTIUTVCCEPUDXKHTFXUAJYLJXQJOZSIYVXGMUQDM");

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
    msg.setTimeStamp(0.388398109036);
    msg.setSource(8853U);
    msg.setSourceEntity(153U);
    msg.setDestination(37402U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1653220116U;
    msg.messages.assign("IUAEWVIAHCLNNEXGUDQRANCPRBMDQXMOCYMBZYDWAZYSBDDZGPKMBZILDSXXJHETPROPZXUETRHOAVUZCHXBFRNAIITSDICHAPLPMTLMWBYRT");

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
    msg.setTimeStamp(0.357828454329);
    msg.setSource(8771U);
    msg.setSourceEntity(193U);
    msg.setDestination(21150U);
    msg.setDestinationEntity(213U);
    msg.sessid = 2855335889U;
    msg.messages.assign("YNMADBCMIZXEYJUGWOAZOWPQLZRDBXPEKHXWHPVRYPZKNALAMFCFRAIVYWQXFQTVCNSHOHERHCBZJXWBDJZHKVPXQUXBGBAGGXSDYVTRJUJFNIEUJDYCGNOEBOSHLPNLKAIYBCMYLHTWDKTSPQYZJATOFQRQIIVVLNSFRNURFGJVFHUGAQNIGWLOVLTADPTKCDZBOSOP");

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
    msg.setTimeStamp(0.228976752622);
    msg.setSource(51965U);
    msg.setSourceEntity(192U);
    msg.setDestination(25276U);
    msg.setDestinationEntity(152U);
    msg.sessid = 41638046U;

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
    msg.setTimeStamp(0.00123190837083);
    msg.setSource(61935U);
    msg.setSourceEntity(137U);
    msg.setDestination(6786U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3777620072U;

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
    msg.setTimeStamp(0.126487661908);
    msg.setSource(62250U);
    msg.setSourceEntity(188U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(108U);
    msg.sessid = 590834788U;

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
    msg.setTimeStamp(0.388314280279);
    msg.setSource(51067U);
    msg.setSourceEntity(112U);
    msg.setDestination(39158U);
    msg.setDestinationEntity(240U);
    msg.sessid = 3395842639U;
    msg.status = 185U;

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
    msg.setTimeStamp(0.389587991215);
    msg.setSource(38175U);
    msg.setSourceEntity(70U);
    msg.setDestination(37322U);
    msg.setDestinationEntity(150U);
    msg.sessid = 3256008890U;
    msg.status = 154U;

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
    msg.setTimeStamp(0.404043479135);
    msg.setSource(44453U);
    msg.setSourceEntity(181U);
    msg.setDestination(30605U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1704036229U;
    msg.status = 186U;

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
    msg.setTimeStamp(0.540878016262);
    msg.setSource(39264U);
    msg.setSourceEntity(247U);
    msg.setDestination(46496U);
    msg.setDestinationEntity(232U);
    msg.name.assign("KXKFNFEFAMMORVAAYOGMBOEXVSWQBYUYYQRMDTMPIWPJISTUSPZCTFUOU");

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
    msg.setTimeStamp(0.404219598905);
    msg.setSource(11027U);
    msg.setSourceEntity(83U);
    msg.setDestination(60501U);
    msg.setDestinationEntity(152U);
    msg.name.assign("BHUUKVKPJJWRSOUXZRBTXHXMULYUDMYDJGOQTJIJYTLEORMIYCNPAFPCIPXKMBIULHXMVAHAEMTHWTZGCXPHFTWOFRQGEBTZKZYBFMEDBVNCMGZOKGSZA");

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
    msg.setTimeStamp(0.503179141759);
    msg.setSource(38409U);
    msg.setSourceEntity(15U);
    msg.setDestination(17858U);
    msg.setDestinationEntity(122U);
    msg.name.assign("REMHGUCIWQXHYWDDMJDGOZJXMAIFNSBVWQKPKTQBOLFWKSWJKZSWFALBGAFTRWCAZRMUPATRVRYDEMRVKVLYQAIENUFJOOIJTPJAFHYYRPZXECVEXVXXGTCFDOHPFUBQSQIQWOAMEGSP");

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
    msg.setTimeStamp(0.0552124210172);
    msg.setSource(51992U);
    msg.setSourceEntity(129U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(203U);
    msg.name.assign("PFCKJOSSVGUKQZGTFGQEFOKZYNWAPXEAHTHXFZUGQRJMYPWUQPSYAAMIMDXWJQROUDNOGWAUDLFBIPRVBUHZZINMSONLNIQHFBMGHLWUTNLAZXBWLDHGOMDSPMDHQMZSKBZLWDRFECHCNXWVBRVNBYMGQZPUKNVYFQXEHYRLDYCLXEIKJOVZBXJOATRFJ");

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
    msg.setTimeStamp(0.238402861895);
    msg.setSource(9667U);
    msg.setSourceEntity(80U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(104U);
    msg.name.assign("RYFXTMMUKELPACJEQDKGCKIDFPEMUQAHSGYRBFRPJGOZHUELYLTJQBUBVXICVZXHHSWOMSVPWSKNLBLGVPVPKYXXLYNAZVYLPIGXSYPYDCXOFJBWCZOLURPQNADTGRZHTBHSRNSHNLNOMGJBVOGKEILCQJWHQDBCGMWAAOFXOIREFWDNEZJFECKV");

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
    msg.setTimeStamp(0.63299088911);
    msg.setSource(53350U);
    msg.setSourceEntity(230U);
    msg.setDestination(50788U);
    msg.setDestinationEntity(31U);
    msg.name.assign("BZNSMIMCRNMDEPQWSALCOPLVETRWMLYLTBAOEDNCQJYOTRKDADKANDCXXCECDBZLJOKZIVIHPSEIUZVMMFTXDSMAFSQHF");

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
    msg.setTimeStamp(0.863106400835);
    msg.setSource(18626U);
    msg.setSourceEntity(202U);
    msg.setDestination(52993U);
    msg.setDestinationEntity(162U);
    msg.type = 195U;
    msg.error.assign("SICFFYSJSLBPGGBYRVFTIYDQYIPUNLBJYMQVKUOJDDYJELJARTEKKFG");

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
    msg.setTimeStamp(0.160955738325);
    msg.setSource(9908U);
    msg.setSourceEntity(235U);
    msg.setDestination(13398U);
    msg.setDestinationEntity(123U);
    msg.type = 228U;
    msg.error.assign("XBDYEQRDNASOWCEQTSDOINALJAZITIULNGYRUFCKASZUIKXJDICHSETRQMPZXHZWHCNDYJXDYWTEKJIWWHYNPVCYDCPWDOOKBEGSBFAFMNAPPZLIOYURVHTQQLRJVAQGVJMZINXSJCFOPJKPUKTGKSNZUOMEJXLUGFQUIWDFMFBXTLPSRXBYFPYMVLXAYULUCBTGVDMGBFKKFHSVZQHEMWBOHEQRMNTQPALRAHZKZBOGVW");

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
    msg.setTimeStamp(0.530910012859);
    msg.setSource(4617U);
    msg.setSourceEntity(221U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(112U);
    msg.type = 245U;
    msg.error.assign("GCVRSSTJXTWDQBQVLPGRGXCFBMXHJIZNBOQHRAHMAXIUXQWNXZTLZESPBDJXFLDNWIFFZHMHOGITHJOCTGFDKUZLZSKUEMDFYSTCXDYSMBNJGUJZUOAARCPBCDQHTWTRSZLDNBFEIVDPUCFEIFNZWHPECUOPVWV");

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
    msg.setTimeStamp(0.170726386312);
    msg.setSource(10657U);
    msg.setSourceEntity(106U);
    msg.setDestination(21934U);
    msg.setDestinationEntity(248U);
    msg.seq = 44960U;
    msg.sys_dst.assign("KZJOPVOVHUETCNGEZFMNHQVMQRQUZBEJNLUFIFRSKVWEQSWDYYLNURWCOSLXYDPDGIRTPOHEWTDITUGACLIJPBRFUFTMCCJEPRRIYBDVQNLBNBMPSACHOAQDOTJTQB");
    msg.flags = 208U;
    const char tmp_msg_0[] = {119, -101, -127, 25, 62, -54, 76, -93, -56, -28, -19, 34, 83, 77, -124, 7, -11, 27, -110, 118, 23, 48, 78, -12, 56, 17, 58, 65, -76, -76, -24, -111, -97, -8, -105, -56, 29, 101, 49, 23, 85, 65, 29, 50, -65, 108, -37, 7, 86, -111, 19, -6, 114, -52, 65, -42, 63, -22, 64, 118, -102, 121, 36, 110, 82, -49, -98, -83, 43, 103, -95, -79, 115, 75, 26, -58, -71, -28, 109, 3, 71, -18, 58, 55, -110, 74, 102, 120, -105, -40, -19, -116, 44, -19, -33, 94, 23, 87, -123, 95, 58, -41, -61, 68, 123, -19, -36, 13, 79, 28, 87, 88, -70, -10, -11, 70, 119, 81, -6, -8, -44, 15, -74, 118, -40, -48, -127, -124, 14, 111, -42, -81, -7, -118, 108, 36, -8, -8, -12, 50, 27, 73, -75, -101, -55, 55, -11, -24, -10, 41, -127, -110, 98, 2, -77, 17, -116, 105, -21, 109, 3, -20, -95, 106, 124, -33, 87, -124, 119, -3, -57, 7, 74, 79, 73, -110, -34, -33, 67, -70, 58, 89, -114, 13, 96, 89, 106, 87, 112, 76, 6, 16, -105, 113, 3, -37, -80, 17, 4, 119, -14, -13, 122, -60, 18, -52, 107, -99, 111, 10, 93, -88, -60, -120, 60, 4, 99, 86, 53, 19, -58, -108, -111, -72, -34, -125, -51, 69, -89, -99, -65, 6, 27, 93, -125, -119, 7, 94, 11, -83, 24, -16, 57, 8, 118, 107, -5, -93, -50, -22, -128};
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
    msg.setTimeStamp(0.0093048316904);
    msg.setSource(24721U);
    msg.setSourceEntity(86U);
    msg.setDestination(46184U);
    msg.setDestinationEntity(236U);
    msg.seq = 61016U;
    msg.sys_dst.assign("RBUOJNWCKFUWITUHVGWYMGRHEVYHDJNIWUUIZAAHQJKDEAXUGTZHZIOSIFUDOXTLXLPWRPSLHRPMUCNBZQFMRQGYPILSEXQRBEFZIOBVTEMLFKWIAJXNEAXBDCFMAEDEQQKXJRKMJDXMCSGPZXZLLAGPQJZVZYBTP");
    msg.flags = 136U;
    const char tmp_msg_0[] = {49, 10, -77, 51, 30, -116, -91, -91, 55, -111, -58, 84, 65, -19, -91, -103, -45, -73, -93, 65, -100, 39, -95, 28, 87, -93, -125, -14, 107, -35, -106, 29, -41, 50, -20, -84, -65, 98, -33, 122, 69, 77, 126, -127, -66, -122, -65, -94, 37, -14, -35, 96, -78, -128, -124, -92, -31, 73, -75, -11, -65, -66, 88, -76, 72, 69, -101, 55, -3, 11, -82, -81, 15};
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
    msg.setTimeStamp(0.672209062359);
    msg.setSource(12995U);
    msg.setSourceEntity(177U);
    msg.setDestination(40544U);
    msg.setDestinationEntity(166U);
    msg.seq = 64945U;
    msg.sys_dst.assign("JKMUQXYQYQEWXZGYCWOYUFCFNERRWEAOHSV");
    msg.flags = 218U;
    const char tmp_msg_0[] = {-26, -99, -71, -64, -13, 110, -44, -39, 115, -82, 97, -14, 121, 89, -37, 106, -31, 83, 11, 28, -9, -42, 104, 48, -127, -73, 3, -56, 85, 95, 99, -112, -116, 54, -86, 41, 44, 84, 52, -66, -116, -24, 92, 76, 24, -49, 74, -108, 47, -108, 76, -74, 46, -89, -101, 48, 83, 21, -62, 13, -83, -101, -114, -97, -113, 80, -126, -125, -101, 68, 69, 75, -90, -80, -48, 17, -17, 114, -64, -127, 116, -10, 118, 117, -115, -55, 112, -16, -51, 37, -63, -69, -58, 22, -78, 59, -38, -25, 105, -97, -49, -104, 121, 110, -28, -102, -120, 40, 107, 14, 99, -20, 85, 44, -25, 17, 103, 71, 40, 81, -76, -38, 101, 110, 7, 40, -11, 103, -95, -27, 77, 36, 57, -101, 28, -99, -30, -91, 24, 74, 15, 8, -5, 99, 115, -4, 62, -5, 8, 57, 31, 123, 89, -123, 111, -59, 84, -28, 15, 117, -32, 36, 117, -57, -71, 4, -73, 50};
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
    msg.setTimeStamp(0.326170632342);
    msg.setSource(43546U);
    msg.setSourceEntity(40U);
    msg.setDestination(25498U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("VXNXMXBOXSLLROJLYMBEWFKHQSOMOPBVDMTOEAJPYUKARXBVOVVUKPNYULFCRSLCIUDMQDAHAKDCEWQUWZKGCXEETLRTMTQGHXNJIUN");
    msg.sys_dst.assign("XSQJSVBLOBWTBTDBTECFQRQJCPFHESQQVRYKJXISRGENWHPMQZMSQNELCAINNXRHZJXLRVWPPLXWIUTRFCYHXDEZFCVZWNNGGVGHLYCJSALWGSUXBAOVPFEBNJTKKVMMRAYFKFLYGBMBAUJONLZQXQIUPTPDLOPOPKWHRWVTRDZUZZXLEEKETHSKJFTKMIAT");
    msg.flags = 200U;
    const char tmp_msg_0[] = {-117, -125, 9, -54, -48, -127, 109, 32, -16, 100, 38, -74, 80, 126, -124, -29, -39, -19, -104, 73, 92, -103, -27, -49, -10, 85, 73, -79, -49, 103, -16, 7, 118, -101, 74, -88, -9, 90, 103, 114, -35, 24, 104, -10, 6, 105, 119, -8, 71, -82, -29, 120, 38, 46, 88, 16, -65, -35, -61, 103, 107, 99, 110, 0, 1, -115, -31, -67, 105, 3, -28, 123, 13, -84, -41, -46, 0, 31, 10, -28, 0, 46, -43, 30, 23, 73, -65, -89, -90, -32, 67, -32, -127, 51, -39, -77, -112, 101, 32, -63, -107, -38, 65, -2, -69, -128, 86, 74, 70, 3, 20, 66, -80, -13, -53, -11, -52, -120, -44, 56, 10, 78, 98, -119, -79, -98, -91, 78, -10, -89, -28, 2, 109, -42, 18, -30, -38, -68, 119, -65, -105, 30, 126, -48, -86, 107, -33, 52, -19, 15, 117, -66, 44, 12, 18, 34, 31, -78, 78, -51, -37, -75, -59, -114, 30, 10, 72, -128, 69, 13, 10, -101, 58, -96, 94, -16, -116, 68, -19, -76, 40, 44, -67, -103, 0, 14, 110, -26, -70, 63, -47, 85, -108, -5, -62, 43, 78, 15, 79, 24, 29, 120, 121, 88, -8, -14, -2, 87, 74, 80, -71, 68, 59, 15, 103, 116, -127, 30, -39, 34, 115, -22, -29, -42, 108, 38, 102, 21, 118, 38, -93, -45, 19, 59, 64, -46};
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
    msg.setTimeStamp(0.266083513431);
    msg.setSource(36795U);
    msg.setSourceEntity(161U);
    msg.setDestination(41101U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("YFCWIUAJPEUEKMKTAJSIHDIWFFSBGBGPOMVJEQM");
    msg.sys_dst.assign("FFWGRZSCYLGDDLBLFC");
    msg.flags = 123U;
    const char tmp_msg_0[] = {-27, -94, -1, -12, 76, 49, 26, -49, 53, -120, -53, 106, -3, 65, -59, -119, -23, 86, -6, -96, -82, 119, 113, -67, 68, -115, -88, 10, -15, 42, 39, 63, -55, 77, 53, 106, 73, 2, -12, 122, 30, 37, -85, 106, -50, -59, -66, 6, -92, 77, -124, 71, -78, -11, -125, 112, 51, -1, 115, 103, -99, 21, -11, -4, -62, 45, -7, 79, -85, -93, -29, 0, -73, -114, 48, -47, -120, 103, 81, 101, -12, 14, 77, -82, 29, 79, 96, 49, -88, -63, -16, 32, 13, -97, 79, 80, 72, -87, 23, 66, -118, -13, -10, -109, 90, 9, 23, -84, -80, 64, 6, 3, -108, -16, 58, 91, 119, 45, -109, 52, 111, -15, -103, 2, 114, 95, -105, 101, -71, 100, 25, -48, -11, -51, -116, 1, -104, 69, -100, -89, -34, -81, 42, 122, -71, -34, 83, -114, 26, -111, -102, -5, -128, 35, 43, -75, -88, -100, -72, 43, 26, -69, -53, 76, -107, 21, -59, 63, -53, -93, 38, 100, -114, -83, -119, -120, -24, 117, 53, -28, 109, 15, -121, -22, -73, -13, -58, 55};
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
    msg.setTimeStamp(0.702130298562);
    msg.setSource(3172U);
    msg.setSourceEntity(87U);
    msg.setDestination(24984U);
    msg.setDestinationEntity(183U);
    msg.sys_src.assign("IFSKXPXXDLSNVQPOUSJLTFBSSPYPXTQQRRHNYEJZYOGVCIGAVJRIYUQIAPUVTXOTWNQBFKQOGLUEKVVYGJZWXMFTRPNUDSFDGFSHUCDDJSCQICUAZMBVIENMD");
    msg.sys_dst.assign("EJZTDZRZMJBAMQGBDVIDWVLOVRLKLGZPXJMYYJABJIHTFNCFMBKAFKXRZXBXCQYGZPPNJBMRWPSQUWCTAMKVDVJOLRYPSUJDXVSVEDOEDFNOZQROJRZEHAGUHCKRKSUCSPYHNKFEMQDIFIGERHALWGVYCFYKEFIHSY");
    msg.flags = 22U;
    const char tmp_msg_0[] = {50, 61, -48, -82, 59, 84, 7, -25, -28, 78, -25, -27, 56, -28, -39, 66, -120, -84, -24, 2, 25, -24, -56, -127, -96, 5, 20, 49, 112, -122, -2, -24, -75, 31, 93, -55, -108, -128, -128, 115, -127, -69, -37, -47, 52, -121, 116, 1, -28, -12, -34, -67, -26, -17, 74, -108, -85, -102, -123, -32, 98, -14, -10, -8, -6, -11, 113, -93, 73, 88, -78, -10, -27, -125, 0, 32, 96, -23, -89, -27, -69, 115, 50, 67, -88, 13, 4, 103, -49, -75, -13, -92, 107, 22, -49, -5, 25, 15, -36, 111, 88, 94, 2, -18, -110, 26, 7, 86, -15, -46, 52, 125, -120, -123, 71, 96, -13, 42, -41, 97, -19, -16, 66, 73, -123, 65, -78, -126, 40, 27, -92, -62, -121, -37, -99, 41, -44, 31, -98, 71, -67, 43, 78, -29, -18, -124, 6, 106, 23, 110, -78, 63, 81, -32, -19, 125, 20, 117, 62, 60, -74, 13, 46, 1, -73, 105, 32, -120, -84, 63, -99, 60, 57, 51, -18, -61, -38, -3, -97, 15, 9, -91, -17, -102, 102, 20, -28, -72, 64};
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
    msg.setTimeStamp(0.154039195629);
    msg.setSource(42278U);
    msg.setSourceEntity(107U);
    msg.setDestination(60310U);
    msg.setDestinationEntity(196U);
    msg.seq = 49018U;
    msg.value = 203U;
    msg.error.assign("ZDYHIBCRMVUYDYZOHVZFIEIFAASCKMWEFPSVLUTVMCXOBBWMVIYNRZQWDJULYCSTDRVAFRPXRLLGGZRNGFJXYHQPTKNLCFIIZUXRFWEGJIOAHMJTNBJPWXYTBHERCOXBJGVJZDCQAGUUHGHVYEUABGTSLQSNQMWXQKLODSBPSVKEAUNGPTMKHKQRPHWEQMSOLEWTKSPMACCDNDLNADRZNGTIYCUXOEZTXPVOOXJFQFMBZUOKHSKIJPADFYKNJ");

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
    msg.setTimeStamp(0.537390199566);
    msg.setSource(15833U);
    msg.setSourceEntity(62U);
    msg.setDestination(54511U);
    msg.setDestinationEntity(174U);
    msg.seq = 51292U;
    msg.value = 125U;
    msg.error.assign("BSYJQOJWSBLTRHTBRMBNGKMJVDUFDIPWNAOPBVMVGWBHKUGZUWAWQDEHRXFCIOVKVNTYWEQVYQRAIAUNMTH");

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
    msg.setTimeStamp(0.759423123653);
    msg.setSource(25111U);
    msg.setSourceEntity(181U);
    msg.setDestination(50460U);
    msg.setDestinationEntity(134U);
    msg.seq = 31356U;
    msg.value = 187U;
    msg.error.assign("BJAJUDCXNGCBSPKCNBBTMAXEPFTVDANRJXUVHEWLNECSOIPHLNKYSBCFWIVAWOHPCVZIDSVRKPEVOHJIWHBRZWEZBUZSXDPEVAQJGGGOKZCTVUZHCFFQINEATVB");

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
    msg.setTimeStamp(0.872018133639);
    msg.setSource(23488U);
    msg.setSourceEntity(92U);
    msg.setDestination(56864U);
    msg.setDestinationEntity(35U);
    msg.seq = 40349U;
    msg.sys.assign("HWXCFLKJLKTICKCINXIZWEBYQCZTIOLBPGXGJGAMFRFMVBSMEORNDMFKVHSSHHROQCBTPWYQZDIYPQPTFZTRDQVWCXURYPLHTIKBFXYNVWPSDRVSBJDEOLJVVHMGSN");
    msg.value = 0.803766059818;

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
    msg.setTimeStamp(0.345479442287);
    msg.setSource(12410U);
    msg.setSourceEntity(165U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(192U);
    msg.seq = 21746U;
    msg.sys.assign("VVIZHMWYMFALGBDWZSRVDXZJJXSWDKUGXKNMJLPHKFFWTRUSMQNQMPAVOQUZAEJVMOIAHEBEIGDTYQLRLPQYNZPOZYFWHOXAOJWEHCKECGVJIPIEGXFXZDPIFBRMLH");
    msg.value = 0.49365003091;

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
    msg.setTimeStamp(0.465782560038);
    msg.setSource(12062U);
    msg.setSourceEntity(5U);
    msg.setDestination(52011U);
    msg.setDestinationEntity(79U);
    msg.seq = 30003U;
    msg.sys.assign("MELWVFZMZXOHWBASWIUQSLMJABPGDAIDZFMTNLHORYCTXDZVKICNURQKWDMGUVUEHJMHTXHIGFDQZPLHPTPIOTRSINOMAEVUV");
    msg.value = 0.641580805655;

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
    msg.setTimeStamp(0.66907462581);
    msg.setSource(63449U);
    msg.setSourceEntity(165U);
    msg.setDestination(38885U);
    msg.setDestinationEntity(5U);
    msg.action = 34U;
    msg.longain = 0.774091780762;
    msg.latgain = 0.194336797957;
    msg.bondthick = 406710045U;
    msg.leadgain = 0.31342934727;
    msg.deconflgain = 0.0728432248491;

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
    msg.setTimeStamp(0.537821471803);
    msg.setSource(28121U);
    msg.setSourceEntity(19U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(91U);
    msg.action = 192U;
    msg.longain = 0.914052271537;
    msg.latgain = 0.127249024008;
    msg.bondthick = 3214281773U;
    msg.leadgain = 0.014585409194;
    msg.deconflgain = 0.753759134845;

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
    msg.setTimeStamp(0.0576711143448);
    msg.setSource(28780U);
    msg.setSourceEntity(31U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(3U);
    msg.action = 203U;
    msg.longain = 0.358252557795;
    msg.latgain = 0.539734321909;
    msg.bondthick = 4171172147U;
    msg.leadgain = 0.837774724457;
    msg.deconflgain = 0.261233885819;

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
    msg.setTimeStamp(0.551527507422);
    msg.setSource(20935U);
    msg.setSourceEntity(163U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(119U);
    msg.err_mean = 0.790906226203;
    msg.dist_min_abs = 0.500440159138;
    msg.dist_min_mean = 0.190784036637;

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
    msg.setTimeStamp(0.065608972322);
    msg.setSource(59826U);
    msg.setSourceEntity(141U);
    msg.setDestination(19612U);
    msg.setDestinationEntity(89U);
    msg.err_mean = 0.792649507122;
    msg.dist_min_abs = 0.678533492014;
    msg.dist_min_mean = 0.161808526746;

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
    msg.setTimeStamp(0.89697382751);
    msg.setSource(44593U);
    msg.setSourceEntity(220U);
    msg.setDestination(4068U);
    msg.setDestinationEntity(67U);
    msg.err_mean = 0.99313209095;
    msg.dist_min_abs = 0.132873533188;
    msg.dist_min_mean = 0.737986119282;

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
    msg.setTimeStamp(0.294081316236);
    msg.setSource(17722U);
    msg.setSourceEntity(119U);
    msg.setDestination(55925U);
    msg.setDestinationEntity(199U);
    msg.action = 154U;
    msg.lon_gain = 0.73396045441;
    msg.lat_gain = 0.415224223044;
    msg.bond_thick = 0.203061674787;
    msg.lead_gain = 0.556749266835;
    msg.deconfl_gain = 0.926373259482;
    msg.accel_switch_gain = 0.731985637746;
    msg.safe_dist = 0.222342564714;
    msg.deconflict_offset = 0.870338140871;
    msg.accel_safe_margin = 0.73707608284;
    msg.accel_lim_x = 0.747302754699;

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
    msg.setTimeStamp(0.256645747992);
    msg.setSource(39217U);
    msg.setSourceEntity(181U);
    msg.setDestination(36947U);
    msg.setDestinationEntity(191U);
    msg.action = 177U;
    msg.lon_gain = 0.0631585773854;
    msg.lat_gain = 0.860479609247;
    msg.bond_thick = 0.982912877955;
    msg.lead_gain = 0.40473361378;
    msg.deconfl_gain = 0.980531086316;
    msg.accel_switch_gain = 0.238081417945;
    msg.safe_dist = 0.815972743138;
    msg.deconflict_offset = 0.137329004592;
    msg.accel_safe_margin = 0.230310568955;
    msg.accel_lim_x = 0.399498919866;

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
    msg.setTimeStamp(0.934177573464);
    msg.setSource(34855U);
    msg.setSourceEntity(98U);
    msg.setDestination(41423U);
    msg.setDestinationEntity(80U);
    msg.action = 176U;
    msg.lon_gain = 0.269003971095;
    msg.lat_gain = 0.753759296938;
    msg.bond_thick = 0.807069306718;
    msg.lead_gain = 0.586496060178;
    msg.deconfl_gain = 0.918630351843;
    msg.accel_switch_gain = 0.332193000711;
    msg.safe_dist = 0.933051817116;
    msg.deconflict_offset = 0.0389558670531;
    msg.accel_safe_margin = 0.385284643437;
    msg.accel_lim_x = 0.951442367567;

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
    msg.setTimeStamp(0.82746289545);
    msg.setSource(11162U);
    msg.setSourceEntity(151U);
    msg.setDestination(41699U);
    msg.setDestinationEntity(10U);
    msg.type = 137U;
    msg.op = 74U;
    msg.err_mean = 0.836914696815;
    msg.dist_min_abs = 0.83556307776;
    msg.dist_min_mean = 0.794400476861;
    msg.roll_rate_mean = 0.0142510425305;
    msg.time = 0.725905450714;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 69U;
    tmp_msg_0.lon_gain = 0.768699688942;
    tmp_msg_0.lat_gain = 0.503202960819;
    tmp_msg_0.bond_thick = 0.610055502925;
    tmp_msg_0.lead_gain = 0.594846634254;
    tmp_msg_0.deconfl_gain = 0.138281377051;
    tmp_msg_0.accel_switch_gain = 0.736448061931;
    tmp_msg_0.safe_dist = 0.118479026036;
    tmp_msg_0.deconflict_offset = 0.153429856079;
    tmp_msg_0.accel_safe_margin = 0.741082202453;
    tmp_msg_0.accel_lim_x = 0.824422976856;
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
    msg.setTimeStamp(0.838697194233);
    msg.setSource(25263U);
    msg.setSourceEntity(2U);
    msg.setDestination(55820U);
    msg.setDestinationEntity(241U);
    msg.type = 252U;
    msg.op = 236U;
    msg.err_mean = 0.515480032005;
    msg.dist_min_abs = 0.851703591442;
    msg.dist_min_mean = 0.147092979884;
    msg.roll_rate_mean = 0.851369315672;
    msg.time = 0.747790681447;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 198U;
    tmp_msg_0.lon_gain = 0.0450371759368;
    tmp_msg_0.lat_gain = 0.715862889773;
    tmp_msg_0.bond_thick = 0.238721791629;
    tmp_msg_0.lead_gain = 0.538333621234;
    tmp_msg_0.deconfl_gain = 0.0187619535874;
    tmp_msg_0.accel_switch_gain = 0.688945739367;
    tmp_msg_0.safe_dist = 0.250730315441;
    tmp_msg_0.deconflict_offset = 0.578687691872;
    tmp_msg_0.accel_safe_margin = 0.929565033097;
    tmp_msg_0.accel_lim_x = 0.619974734976;
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
    msg.setTimeStamp(0.0676877403591);
    msg.setSource(29578U);
    msg.setSourceEntity(120U);
    msg.setDestination(466U);
    msg.setDestinationEntity(65U);
    msg.type = 233U;
    msg.op = 27U;
    msg.err_mean = 0.705695613862;
    msg.dist_min_abs = 0.523823975101;
    msg.dist_min_mean = 0.517473400435;
    msg.roll_rate_mean = 0.569791446338;
    msg.time = 0.945833702444;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.502945161995;
    tmp_msg_0.lat_gain = 0.452009234041;
    tmp_msg_0.bond_thick = 0.792539353469;
    tmp_msg_0.lead_gain = 0.959426424113;
    tmp_msg_0.deconfl_gain = 0.293841292747;
    tmp_msg_0.accel_switch_gain = 0.217089569801;
    tmp_msg_0.safe_dist = 0.252255161191;
    tmp_msg_0.deconflict_offset = 0.00104020653336;
    tmp_msg_0.accel_safe_margin = 0.379080079946;
    tmp_msg_0.accel_lim_x = 0.879131703974;
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
    msg.setTimeStamp(0.0975043245694);
    msg.setSource(53026U);
    msg.setSourceEntity(127U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(208U);
    msg.uid = 110U;
    msg.frag_number = 210U;
    msg.num_frags = 172U;
    const char tmp_msg_0[] = {-105, -82, 4, -12, -74, -74, -91, -105, -49, -44, -128, 77, 26, -93, 123, 119, 56, -59, 76, 68, 86, 95, 30, -22, 65, -49, 44, -121, -85, 28, -91, 35, -92, -14, -38, -56, 0, 57, -5, 123, 49, -77, -55, 12, 42, -13, -17, -124, -46, 31, -88, 100, -99, -125, 26, -80, 100, -36, -26, -5, -37, -94, 61, 120, -32, 99, -53, -88, 72, 2, 13, 68, -94, -61, -90, 27, 26, 34, -67, 7, 29, -24, -98, 95, -15, -63, 12, -42, 34, -46, 52, 42, -33, 96, 85, -104, -113, 72, 40, -11, 17, -114, -32, 25, -61, -31};
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
    msg.setTimeStamp(0.905933047244);
    msg.setSource(8145U);
    msg.setSourceEntity(233U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(167U);
    msg.uid = 136U;
    msg.frag_number = 148U;
    msg.num_frags = 134U;
    const char tmp_msg_0[] = {68, 22, -33, 90, 92, -69, -112, -3, 84, -35, 94, -59, -91, 125, -77, -41, 104, 22, -32, -2, -114, -48, -2, 95, -1, 3, -83, -30, 75, -92, -47, 116, -108, -9, 88, 45, 53, 65, 59, -34, 87, -10, -34, -80, 49, -101, -74, -25, -58, -119, -87, -65, 111, -56, -82, 1, 32, 36, -16, 20, 96, 17, -44, 0, 125, -112, 5, -42, -108, -76, 23, 21, -116, -41, -122, 66, -123, 111, -70, -18, 64, -52, -3, -120, -55, 13, 44, -70, 125, -52, 58, -58, 44, 3, 110, -10, -56, 17, -41, -49, 29, -36, -84, -14, -64, -4, 36, -67, 4, 71, 90, -121, -14, 87, -2, -90, -55, -30, -105, 120, 41, -39, -86, 11, 1, 78, -65, -24, -66, 118, -26, 41, 36, -74, 126, -33, -113, 105, 62, 38, 33, 47, -66, -68, 92, 92, -14, -62, -12, -125, 19, -97, -56, 23, -89, 9, -6, -62, -8, -124, -29, -96, 66, 28, 97, 104, 10, -88, -2, 45, -23, 111, 35, -33, 72, -48, -53, -5, 64, 45, -6, -101, -43, 26, 6, 82, -16, 119, 23, 27, 41, -14, -91, 9, 123, 80, -34, 17, -81};
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
    msg.setTimeStamp(0.51439378296);
    msg.setSource(47993U);
    msg.setSourceEntity(104U);
    msg.setDestination(6637U);
    msg.setDestinationEntity(132U);
    msg.uid = 128U;
    msg.frag_number = 78U;
    msg.num_frags = 112U;
    const char tmp_msg_0[] = {6, 72, 94, 83, -49, 74, 5, -31, -49, -104, -22, 109, -89, -113, 36, 101, -71, 94, 68, 93, 52, 32, -119, 4, 24, 121, 34, -110, -92, 54, -85, 16, 37, 20, -72, -109, -25, 0, 118, 67, -52, 123, -85, 24, 90, -8, -105, -48, -127, -13, 27, 73, 119, -80, 49, 58, 61, 47, -127, -75, -8, -17, -98, -59, -91, -108, 7, 0, 114, 110, 18, 55, -72, -4, -85, 9, 4, 89, 47, -93, 51, -90, -40, -40, -67, 109, 100, -69, -116, -118, 29, 104, 23, 0, 41, 52, -113, 7, 35, 4, 35, -15, -57, 34, 79, 38, -105, -96, -110, -39, -96, 55, -17, 87, 100, 118, -120, 99, -81, 1, 77, -99, 13, 93, 102, -110, -63, 18, -8, 42, 42, 40, -25, -6, 94, 67, 1, 87, -15, -30, 11, 55, -113, -95, -52, 36, -90, 58, -11, 94, -93, 119, 68, 26, 30, -37, 81, 90, 61, 116, 14, 62, -106, -72, 5, -69, 92, 28, 116, -59, -91, 118, -102, -20, -64, -106, 114, 69, -33, 44, 91, -90, 23, 26, -41, -114, 52, 70, -112, 35};
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
    msg.setTimeStamp(0.233441469282);
    msg.setSource(43272U);
    msg.setSourceEntity(173U);
    msg.setDestination(1952U);
    msg.setDestinationEntity(191U);
    msg.content_type.assign("CUJCZVMOMSEHZXNJFFLCNVKHUXVRXGCJZKWAOAQEDUYCLAFREVPUIKPJYQRGPQPXTIXIWCDOEPEDVPPFVNSDMGWAIZDCZTMHYGWFQOQTKWQTBNPLYGQRMZJJOHUDIMVSCJNJUMHBSGURTTBIGKELLREKKKVNYBXZAIZFNKASLHBFRFLBDLLB");
    const char tmp_msg_0[] = {-67, 83, 15, 43, -64, 25, 69, 55, -29, -128, 65, 124, 20, -4, 97, -90, -68, -2, 81, 29, 91, 109, 119, -47, 6, -72, 100, -75, 99, -21, -26, 32, 51, 3, -17, -75, -22, -112, 124, -73, -4, 52, -5, 119, -79, -2, 44, -79, 61, 58, -1, -19, 2, -67, 35, 36, 71, 17, 80, 3, 51, -114, 105, -85, 91, -45, -106, -75, 125, 49, -104, 120, 7, 100, 119, 72, 60, -116, -65, 17, 67, -46, -81, 2, 60, -32, -113, -97, -79, -76, 51, 44, 101, -89, -39, -83, 30, 89, 24, -94, 28, -66, 122, 15, 70, -95, -20, -78, 92, 84, -79, -12, -121, -20, 100, 66, 5, 42, 30, -87, 87, 16, -50, 9, 55, -62, -80, 93, -2, -74, -51, -26, -88, 103, 25, 62, -33, -27, -107, 25, -23, 108, 79, -103, 52, 23, -125, 31, -50, 12, -78, 64, 109, -52, 14, 119, 4, -102, -103, -101, -40, -10, -114};
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
    msg.setTimeStamp(0.293660663017);
    msg.setSource(60052U);
    msg.setSourceEntity(56U);
    msg.setDestination(4191U);
    msg.setDestinationEntity(22U);
    msg.content_type.assign("SBDDRXCNZSQBZAMNPJJAIVKGQJVOSFKVSNEOBYRNLBXPCDOGJRNHIDHYVHMFZMX");
    const char tmp_msg_0[] = {-10, -105, -50, 51, 119, -90, 34, -102, -111, -87, 24, 40, 20, -49, -122, -37, -42, -42, -71, 46, 46, -112, -112, -12, 103, 125, -37, -96, 57, 37, -43, 52, -39, -28, 10, -65, -113, 89, 53, 72, 102, -69, 88, -29, -55, -9, 104, -32, -111, -96, 43, 115, -30, -65, -43, -12, -25, 9, 122, 58, 111, 58, 68, -78, 59, 94, -43, 75, 104, 108, 123, 34, 94, -42, 72, -75, -33, 9, 50, 106, -101, 17, -32, 52, 40, 124, -56, 7, -116, -105, -16, -126, 10, 68, -86, -77, 121, 119, 93, -96, 95, -116, 70, -92, -61, 64, -73, -57, -125, 117, -58, -112, 46, 68, 105, 83, 12, -72, -122, -97, 35, -3, -46, -105, 120, -122, -100, -68, -56, -85, -10, 36, -125, -35, -125, -71, 67, 0, 50, 89, 121, -59, 54, 10, 126, -65, 51, 25, 11};
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
    msg.setTimeStamp(0.260009062552);
    msg.setSource(43988U);
    msg.setSourceEntity(238U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(8U);
    msg.content_type.assign("OLSBNBIFKQCZOLYBUISFWZPXRIDOWWZVVSGESJMKTURTHWDOCVVHQFHCLRHTGJNZINBJXLJVINRRGOYZLQPTPASXOVNWPZTONRTUULMGBEXCVZNKSDPATJWABKMBKLFGQUBRFCCNHTBZEJXYEUQGYSKFMQOLPHZCPEZMDSCWQAIFUFYIQAHJFETWLYARHEWWCMHYJSBYENMQDNTISKUGEKXOGYXVVJ");
    const char tmp_msg_0[] = {-44, 45, -79, 99, -39, -2, 4, -72, 52, -40, 99, -28, -128, -41, -64, 38, -12, 76, 113, -26, 4, -29, -56, -66, 118, 98, 114, -42, 19, -20, 92, -16, -123, -98, 93, -84, 6, 69, -50, -120, 114, 17, -27, -109, -99, 65, -23, 11, -120, 39, -115, 110, 12, 19, 98, 100, -82, -97, -118, 21, 27, -45, -93, 12, -103, -47, -44, 84, -14, 7, 90, -17, -109, 27, 27, -26, -4, -83, -53, 20, 13, 75, -16, -99, -123, 59, 76, -93, -4, -114, 116, -65, -68, -80, -56, 36, 90, -60, -18, -27, 70, 45, 119, 110, -29, 126, 68, 77, -48, -23, 68, -14, 106, 103, 116, -24, 64, -72, 14, -78, -68, -114, 42, -117, -107, 46, 13, -109, -10, 114, -29, -64, 115, 120, 77, -30, -113, 49, 25, 32, 35, -17, -78, -20, 119, 125, 98, 9, 11, 94, -21, 33, -83, 76, 88, -2, -41, 45, -106, 9, 101, -62, 80, -89, -1, -27, 38, 69, 105, -75, -109, 5, 126, 122, -21, 9, -11, -120, 2, 55, -30, 92, -73, -48, 71, 86, 105, -128, -55, -21, 24, -108, -20, -118, -39, -36, 43, -27};
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
    msg.setTimeStamp(0.626581126134);
    msg.setSource(43687U);
    msg.setSourceEntity(100U);
    msg.setDestination(38237U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.997087446414);
    msg.setSource(56152U);
    msg.setSourceEntity(177U);
    msg.setDestination(59456U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.498893970748);
    msg.setSource(11169U);
    msg.setSourceEntity(206U);
    msg.setDestination(41030U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.5044471995);
    msg.setSource(1158U);
    msg.setSourceEntity(81U);
    msg.setDestination(23291U);
    msg.setDestinationEntity(207U);
    msg.target = 13312U;
    msg.bearing = 0.175065703735;
    msg.elevation = 0.849621043501;

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
    msg.setTimeStamp(0.371266331936);
    msg.setSource(63148U);
    msg.setSourceEntity(133U);
    msg.setDestination(1526U);
    msg.setDestinationEntity(203U);
    msg.target = 562U;
    msg.bearing = 0.460059864794;
    msg.elevation = 0.58845010447;

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
    msg.setTimeStamp(0.0990143610296);
    msg.setSource(173U);
    msg.setSourceEntity(215U);
    msg.setDestination(57126U);
    msg.setDestinationEntity(80U);
    msg.target = 61412U;
    msg.bearing = 0.238654320634;
    msg.elevation = 0.870169115549;

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
    msg.setTimeStamp(0.595137187343);
    msg.setSource(41929U);
    msg.setSourceEntity(243U);
    msg.setDestination(12271U);
    msg.setDestinationEntity(105U);
    msg.target = 37314U;
    msg.x = 0.148703915816;
    msg.y = 0.889765123816;
    msg.z = 0.891903583097;

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
    msg.setTimeStamp(0.517892248515);
    msg.setSource(17946U);
    msg.setSourceEntity(186U);
    msg.setDestination(6537U);
    msg.setDestinationEntity(35U);
    msg.target = 34456U;
    msg.x = 0.690316073282;
    msg.y = 0.765177320034;
    msg.z = 0.743158837207;

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
    msg.setTimeStamp(0.563968152087);
    msg.setSource(21206U);
    msg.setSourceEntity(150U);
    msg.setDestination(40897U);
    msg.setDestinationEntity(169U);
    msg.target = 39261U;
    msg.x = 0.484265659104;
    msg.y = 0.866909571863;
    msg.z = 0.811580773021;

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
    msg.setTimeStamp(0.715818743321);
    msg.setSource(58976U);
    msg.setSourceEntity(102U);
    msg.setDestination(18546U);
    msg.setDestinationEntity(152U);
    msg.target = 47899U;
    msg.lat = 0.502579711314;
    msg.lon = 0.470128188099;
    msg.z_units = 124U;
    msg.z = 0.869639709533;

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
    msg.setTimeStamp(0.59358728091);
    msg.setSource(5405U);
    msg.setSourceEntity(123U);
    msg.setDestination(9738U);
    msg.setDestinationEntity(58U);
    msg.target = 56634U;
    msg.lat = 0.629969226059;
    msg.lon = 0.417640988387;
    msg.z_units = 252U;
    msg.z = 0.520350229752;

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
    msg.setTimeStamp(0.811425582061);
    msg.setSource(29091U);
    msg.setSourceEntity(68U);
    msg.setDestination(26387U);
    msg.setDestinationEntity(123U);
    msg.target = 63388U;
    msg.lat = 0.367167092668;
    msg.lon = 0.333992931948;
    msg.z_units = 12U;
    msg.z = 0.558098939507;

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
    msg.setTimeStamp(0.410368676317);
    msg.setSource(25491U);
    msg.setSourceEntity(177U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(165U);
    msg.locale.assign("TWAKHKQZHSAHYBUBQIXKGDQGGRSBNAJEEEIYTVCGEYNMAWFVYOCDOOASQCAFGENVYVAFSBLLLCRUEUZWZQUBLJREQSRVXYBPZLYDQURZOUOKOMFGVKSCFRZFBZMZPGYJRSJAPOPWTKKGLSLICWDHQVMOWUNWNHKXKUKMTLLJYZOHRHCPXTDCPWBJXEHIXRMDLJNMWIUFVHDYNTHJMPNSGJITXMFTDAWMECZIFXBDRQJIADNPCUSPNTVBXT");
    const char tmp_msg_0[] = {-60, 99, 48, -83, -27, -96, 28, 111, 8, -28, -2, 95, -39, 41, 25, -32, -125, 96, 47, -105, -98, -92, 66, -96, 13, -2, -106, 37, -2, 37, 65, 76, -111, -31, 97, -16, 120, 52, 58, -21, -121, -115, -54, -57, -13, -46, -97, 126, 103, 23, 58, -98, -124, -108, 97, -61, 41, -57, -5, -4, -104, 27, -32, -97, 10, -127, -17, 3, -48, 28, -54, -121, 33, 66, 122, -60, -95, -20, 82, 85, 84, -65, -113, 121, 46, 31, 66, 41, 76, -60, 2, 97, 2, -32, 77, 19, 27, -7, 30, 18, -59, -28, -25, 83, 39, -56, 53, -25, 43, 109, -71, -97, 124, -123, 75, 23, -30, -102, 83, 80, 117, -86, 125, -11, -128, 92, 24, -11, -83, -66, -6, -16, 78, 29, -3, 85, -93, -24, 109};
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
    msg.setTimeStamp(0.306006183003);
    msg.setSource(11247U);
    msg.setSourceEntity(98U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("KGQOOLEMDP");
    const char tmp_msg_0[] = {97, -49, -48, -78, -16, -32, 59, -34, -7, -102, 21, 73, 118, 90, -125, 91, 124, 19, 60, 123, 15, 96, 72, 90, -2, -32, -63, -92, -77, -68, 90, 11, 70, 5, 31, 74, 40, -78, -87, -15, -33, 80, 32, 93, 79, -91, -56, -104, 78, -4, 7, -80, 5, -73, 73, 100, -64, 27, 27, -97, -54, -42, 97, -54, 96, -9, -35, -109, -75, 57, 107, 74, -113, -38, 53, -46, -89, 12, 124, -47, 74, -77, 106, -44, -122, -24, 114, -47, 74, -30, -14, -24, -120, -71, -55, 24, -16, -62, -12, -98, 89, 39, -110, -70, -86, 21, 6, -73, -106, -99, -32, -62, 116, 39, 68, -94, 124, 125, 18, 19, -88, 126, 19, -68, 117, -56, 24, 43, -121, -28, -46, -122, 15, -27, -117, 90, -82, 10, -13, 57, -41, 92, 118, -118, -14, 59, 24, 99, 41, 115, -97, -94, 1, 38, -121, 49, 85, -114, 65, 66, 57, 36, 79, 45, -61, -120, -102, -23, -118, -27, -83, 114, 95, -38, -37, 4, -118, -119, -105, -12, -50, -26, -47, -115, 17, -74, 38, -79, 74, -23, 12};
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
    msg.setTimeStamp(0.457492941217);
    msg.setSource(36104U);
    msg.setSourceEntity(214U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(169U);
    msg.locale.assign("JPHELTBLBVVBXFZIWCJKGAZFGCAEAPOCEORDSQMHTJMUMRPXUNRDMOLNVTRONHXXUZJVUFSWXKUXGIGOPCQBMYEWHQAZRNZIPKYIMWDFYLJZLDOHVHVNOAIIHYDOYUJVREWAKJSQRFVXZMCCHUBFSWFPZSYZNQEUFTDGCDTYGKTQTVBOZJKMTIWJHSQEACFWFELNDBLKSKGYIPAWGSGMPGDQRITINURAYLNEPUMSXYKBQNP");
    const char tmp_msg_0[] = {114, 21, 39, -119, -34, 105, -10, -55, 72, 103, 93, -3, 28, 99, 69, -6, 7, 11, -124, 6, 124, -48, -94, -65, -104, -54, -4, 49, 18, -31, -49, 124, 95, 47, 112, 1, 88, -5, 73, 95, -83, 54, -54, 38, 124, -96, -3, 86, -60, 40, -85, 34, -124, 9, -102, -86, 13, -7, 115, 18, -32, 94, 52, -109, 108, -48, 78, -12, -108, -96, -27, -97, -98, -98, 15, 90, -36, -100, -33, 60, 103, -114, -40, -74, 84, -41, 97, -116, 75, -113, 74, -25, -4, -55, -119, 28, -106, -117, -108, 51, 19, -119, -89, -28, -123, 105, -57, -87, -18, -15, 18, 81, 126, 120, 33, 83, 17, -93, 64, -81, -59, 82, -118, -31, -106, -66, -117, 87, -105, 61, 43, 99, 103, 108, 46, -53, -51, -61, -29, 59};
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
    msg.setTimeStamp(0.433337231759);
    msg.setSource(60687U);
    msg.setSourceEntity(251U);
    msg.setDestination(20259U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.66873968231);
    msg.setSource(62468U);
    msg.setSourceEntity(209U);
    msg.setDestination(54335U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.262266772719);
    msg.setSource(3307U);
    msg.setSourceEntity(64U);
    msg.setDestination(14764U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.664966262475);
    msg.setSource(5418U);
    msg.setSourceEntity(119U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(87U);
    msg.camid = 61U;
    msg.x = 54821U;
    msg.y = 44528U;

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
    msg.setTimeStamp(0.34023437947);
    msg.setSource(15740U);
    msg.setSourceEntity(134U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(26U);
    msg.camid = 179U;
    msg.x = 45087U;
    msg.y = 20876U;

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
    msg.setTimeStamp(0.318976994397);
    msg.setSource(29410U);
    msg.setSourceEntity(2U);
    msg.setDestination(20051U);
    msg.setDestinationEntity(99U);
    msg.camid = 112U;
    msg.x = 5976U;
    msg.y = 47350U;

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
    msg.setTimeStamp(0.850549453148);
    msg.setSource(12033U);
    msg.setSourceEntity(86U);
    msg.setDestination(43304U);
    msg.setDestinationEntity(133U);
    msg.camid = 253U;
    msg.x = 25667U;
    msg.y = 46139U;

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
    msg.setTimeStamp(0.63511611287);
    msg.setSource(2462U);
    msg.setSourceEntity(127U);
    msg.setDestination(2259U);
    msg.setDestinationEntity(199U);
    msg.camid = 159U;
    msg.x = 19541U;
    msg.y = 59815U;

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
    msg.setTimeStamp(0.135042967478);
    msg.setSource(51226U);
    msg.setSourceEntity(221U);
    msg.setDestination(28331U);
    msg.setDestinationEntity(184U);
    msg.camid = 176U;
    msg.x = 35735U;
    msg.y = 12622U;

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
    msg.setTimeStamp(0.615046242292);
    msg.setSource(20668U);
    msg.setSourceEntity(65U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(18U);
    msg.tracking = 87U;
    msg.lat = 0.488153668627;
    msg.lon = 0.296065579592;
    msg.x = 0.195980937104;
    msg.y = 0.940897027238;
    msg.z = 0.587993154682;

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
    msg.setTimeStamp(0.141988299724);
    msg.setSource(15985U);
    msg.setSourceEntity(113U);
    msg.setDestination(16756U);
    msg.setDestinationEntity(60U);
    msg.tracking = 125U;
    msg.lat = 0.762503275397;
    msg.lon = 0.952917670499;
    msg.x = 0.769528683071;
    msg.y = 0.0198441046792;
    msg.z = 0.781144616015;

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
    msg.setTimeStamp(0.602707684198);
    msg.setSource(9338U);
    msg.setSourceEntity(128U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(191U);
    msg.tracking = 132U;
    msg.lat = 0.816541258921;
    msg.lon = 0.577169745626;
    msg.x = 0.528729668393;
    msg.y = 0.516436837428;
    msg.z = 0.427451766693;

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
    msg.setTimeStamp(0.765711643754);
    msg.setSource(35595U);
    msg.setSourceEntity(79U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(65U);
    msg.target.assign("UXZPGIWSYQIFEQDTJYAVYDWHXBFIGCEVEKIKHMKUALLSPNLVQTLNROCNPXJXTGWFTKFKYPHODZZFTZNQGBYSRRMRJHQQLXSMYFBIAOCTJPJOJMWGXBOGUKWLIRXNNXQCEKUMEGZVVJSCOJNIWCBRFN");
    msg.lbearing = 0.237138712633;
    msg.lelevation = 0.276558144168;
    msg.bearing = 0.4483741289;
    msg.elevation = 0.684931075673;
    msg.phi = 0.957746466006;
    msg.theta = 0.592968192224;
    msg.psi = 0.865942004529;
    msg.accuracy = 0.137869195652;

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
    msg.setTimeStamp(0.540667291987);
    msg.setSource(12762U);
    msg.setSourceEntity(113U);
    msg.setDestination(24101U);
    msg.setDestinationEntity(26U);
    msg.target.assign("GSASBPELJNWGDHHSPHPYOASSEDWUDPNGOIHMDKXMYVXXXYNYTHVZFBRHDXKROMERKWYLJKZFSJEVPDPBWTQQDQUCCF");
    msg.lbearing = 0.811366726616;
    msg.lelevation = 0.972288178193;
    msg.bearing = 0.77026648974;
    msg.elevation = 0.162106348614;
    msg.phi = 0.199981114183;
    msg.theta = 0.9187347988;
    msg.psi = 0.490914542362;
    msg.accuracy = 0.0187273674724;

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
    msg.setTimeStamp(0.838063344723);
    msg.setSource(15215U);
    msg.setSourceEntity(138U);
    msg.setDestination(29254U);
    msg.setDestinationEntity(7U);
    msg.target.assign("ECXKFDEPZMLFRPKHDXXSSSWYQDUATYHUBXTWVNPDJIIGEEKLRCMUHJ");
    msg.lbearing = 0.826958115297;
    msg.lelevation = 0.0509813424406;
    msg.bearing = 0.861220551037;
    msg.elevation = 0.599313437178;
    msg.phi = 0.0722210542836;
    msg.theta = 0.353619640398;
    msg.psi = 0.672702088545;
    msg.accuracy = 0.745521304218;

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
    msg.setTimeStamp(0.637549117097);
    msg.setSource(19464U);
    msg.setSourceEntity(85U);
    msg.setDestination(21681U);
    msg.setDestinationEntity(80U);
    msg.target.assign("QAVZZJWONMZLQXQUSNCOPRZBJOCHYHGMVETUVGMFZHRLUYSZJWTMGDJAXJKFKLITYKGBRAXPNHWQTGQMHBTUWUQIIHBCTBXQDNTXWLKHFNGVZNHILTWAQMUUFOSEEPMNCBJSFSBBRMDSNORYPPPHTYOEIGEUWCSRFPARKCIWLRDGLDSFRXQSJAVNEXKKA");
    msg.x = 0.931064263267;
    msg.y = 0.664432378692;
    msg.z = 0.215214227927;
    msg.n = 0.938047731894;
    msg.e = 0.692302682876;
    msg.d = 0.724512007909;
    msg.phi = 0.107084876581;
    msg.theta = 0.455981986126;
    msg.psi = 0.35737104861;
    msg.accuracy = 0.262144118972;

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
    msg.setTimeStamp(0.28971410966);
    msg.setSource(28619U);
    msg.setSourceEntity(13U);
    msg.setDestination(33975U);
    msg.setDestinationEntity(219U);
    msg.target.assign("FBVLUYIRAMJEHJWWPDWBKSIJGVEKELQYBIMXWSYRUOGJYTFRPHCHWMPFNYRVGXUGOHAVAXMLDZABVGUNZMQTHKIDATJNEMNSSGTPRUKYCOZ");
    msg.x = 0.0456699181216;
    msg.y = 0.153690855235;
    msg.z = 0.0687688640959;
    msg.n = 0.827785116516;
    msg.e = 0.879362408303;
    msg.d = 0.0257980197337;
    msg.phi = 0.266291516296;
    msg.theta = 0.0219644223814;
    msg.psi = 0.463587076364;
    msg.accuracy = 0.662237350128;

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
    msg.setTimeStamp(0.478402565173);
    msg.setSource(25795U);
    msg.setSourceEntity(150U);
    msg.setDestination(5965U);
    msg.setDestinationEntity(99U);
    msg.target.assign("CCNSQPIFSSGEADEL");
    msg.x = 0.46172586018;
    msg.y = 0.231879487821;
    msg.z = 0.341724147098;
    msg.n = 0.513479428258;
    msg.e = 0.399795245826;
    msg.d = 0.0939088293451;
    msg.phi = 0.30052519393;
    msg.theta = 0.761254550953;
    msg.psi = 0.993716493975;
    msg.accuracy = 0.371769836579;

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
    msg.setTimeStamp(0.935490242989);
    msg.setSource(26948U);
    msg.setSourceEntity(28U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(85U);
    msg.target.assign("NGPMHOSTMLSBCGTFBSPBXIRIJAWSZHYIXKKPANVNXUIVLATXFWKKCLZFFYAMDRZHXZRTDUROAQWUIEGYJEOCOOBGZKFHGHKDOLIMD");
    msg.lat = 0.266194292262;
    msg.lon = 0.554963201153;
    msg.z_units = 91U;
    msg.z = 0.883044541179;
    msg.accuracy = 0.112720915851;

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
    msg.setTimeStamp(0.801555103806);
    msg.setSource(21985U);
    msg.setSourceEntity(126U);
    msg.setDestination(47540U);
    msg.setDestinationEntity(143U);
    msg.target.assign("CGHRCYKCNWMOLRHCVEFYDSYEKYUCBXELYWVNBQTAVKHMFEQKAPVKQBJSGGTWCDURTBJASDNCVBQTLOHYDVPMJVWUEHNEWRNULJSPMCNGLFISQLKFYKLDGMAJOTHSESVMZFXMZMPAGYAVWJOJRIBZDOPJHZUZSTFZPQQXPPAAUNPFRZGDYXMKHREFUKYDCBXIGFRKLDOZOBTOHAJWNIWWVXJLBRHLNDQZTSOUEXUXPOMGIZIQ");
    msg.lat = 0.945834374766;
    msg.lon = 0.991254144329;
    msg.z_units = 244U;
    msg.z = 0.191324638917;
    msg.accuracy = 0.487699798571;

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
    msg.setTimeStamp(0.183653889177);
    msg.setSource(19579U);
    msg.setSourceEntity(172U);
    msg.setDestination(47719U);
    msg.setDestinationEntity(70U);
    msg.target.assign("GXZJSTGCDPTQWVZNHDHRZJWDRPPWTIZISNFXAPHICTLYEVTSENYFXEZZEAGXTYOPNTWCRRSCDAUBCHMXDQYUNBQGLKSIMWJTPZIVJTMEKXKBELNQJFKUGMBQFODOMHQXLFUNYAOKYXKMGQVOYVELLAPCFREBKPDSWZGIGVRIVUWYAZFDMKMQBHJAVXPSEFULUBRAYCKAHB");
    msg.lat = 0.350567653007;
    msg.lon = 0.645081612453;
    msg.z_units = 190U;
    msg.z = 0.304933870548;
    msg.accuracy = 0.430299341867;

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
    msg.setTimeStamp(0.507963217635);
    msg.setSource(17902U);
    msg.setSourceEntity(160U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(20U);
    msg.name.assign("HFXVYRZNBKRDJJOYEVINWTPZBMEBWSAFLSIZGJSGBICMCQCOATGDGBVHDRXTYVXNPYWZTVRFCIQQEIEDKHUECLYBKRETTOWDOICFXMURXLVVMXANBHXCELDKOUJGVBRUAHKKPRSJGNIQIMSITVUZMMALJPMRQOJUPWKLIFDJYLPLWHNSGLZPNXGAFSOHAQFBLQXMOQZSFOUAUJXVZEDWZWAPCSCKNMH");
    msg.lat = 0.69749662587;
    msg.lon = 0.104381187327;
    msg.z = 0.189068233993;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.521119866147);
    msg.setSource(40326U);
    msg.setSourceEntity(229U);
    msg.setDestination(2679U);
    msg.setDestinationEntity(103U);
    msg.name.assign("GZUXMMSKTGAJABGPHUQCLCTBLZTYVFMWGGCOHLJCIXFUSVTRWXDKCDIURSJVFQHNOPHPHZDYWXBMFIQRULVQPYNFZEYTEQKYTSERKZJUAAFKSBKSUMGAPEWUIQLECMVVSKRBXXEWMWLIJNPLAYJOPNKLQNLSCBWTNIZLJCPAXZMPENYEQ");
    msg.lat = 0.386261295059;
    msg.lon = 0.942577998102;
    msg.z = 0.749609223044;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.541789459347);
    msg.setSource(713U);
    msg.setSourceEntity(186U);
    msg.setDestination(46556U);
    msg.setDestinationEntity(125U);
    msg.name.assign("SITMWPEHNRORIGEHMROFUYBJDMKMHPXHVQYQNJSJPIKKJQJVZMRHXEZDNAKNOOPLIJVAACWLWJDECNSXZKDNAUFOYGCBSAYBYFYKHAOZHWOOUYBTHWTLGCWQXEDURLNZSGNGAZCNYGIHLAUGJVXPRGQVIS");
    msg.lat = 0.480349521778;
    msg.lon = 0.732850890809;
    msg.z = 0.216476813552;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.0867118036468);
    msg.setSource(7441U);
    msg.setSourceEntity(36U);
    msg.setDestination(10481U);
    msg.setDestinationEntity(201U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.486368304097);
    msg.setSource(16751U);
    msg.setSourceEntity(137U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(90U);
    msg.op = 140U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OSFEEBGNQKSKCORNJPMSGMBJNHCTRJXJAMFQQSVIEWHCNPPRXBJCDTHJEUYVKMYGGZVMZSHDXAZTVTYDIWLWRMXUWFKVKBUBFIOKBZMNPFXOTOYQABQPDEFGZTIXTVASHYGWPUDDWXLKOKINQEUVGWGLUSEYEKJFIJDZMLFZIRLPOHURYJVLCOAYCWB");
    tmp_msg_0.lat = 0.540965869634;
    tmp_msg_0.lon = 0.252145554588;
    tmp_msg_0.z = 0.540100982065;
    tmp_msg_0.z_units = 240U;
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
    msg.setTimeStamp(0.455706620105);
    msg.setSource(18682U);
    msg.setSourceEntity(26U);
    msg.setDestination(18596U);
    msg.setDestinationEntity(151U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.588163377613);
    msg.setSource(34160U);
    msg.setSourceEntity(83U);
    msg.setDestination(21340U);
    msg.setDestinationEntity(67U);
    msg.value = 0.67283759424;
    msg.type = 248U;

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
    msg.setTimeStamp(0.202796901192);
    msg.setSource(20183U);
    msg.setSourceEntity(213U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(80U);
    msg.value = 0.876278365183;
    msg.type = 177U;

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
    msg.setTimeStamp(0.193727427251);
    msg.setSource(43545U);
    msg.setSourceEntity(218U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(59U);
    msg.value = 0.131502896402;
    msg.type = 222U;

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
    msg.setTimeStamp(0.554173293122);
    msg.setSource(26654U);
    msg.setSourceEntity(82U);
    msg.setDestination(35007U);
    msg.setDestinationEntity(191U);
    msg.value = 0.10548499271;

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
    msg.setTimeStamp(0.926055038881);
    msg.setSource(17104U);
    msg.setSourceEntity(254U);
    msg.setDestination(9618U);
    msg.setDestinationEntity(193U);
    msg.value = 0.156804095047;

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
    msg.setTimeStamp(0.11814386756);
    msg.setSource(34252U);
    msg.setSourceEntity(13U);
    msg.setDestination(18827U);
    msg.setDestinationEntity(2U);
    msg.value = 0.0361826264554;

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
    msg.setTimeStamp(0.485520782118);
    msg.setSource(49779U);
    msg.setSourceEntity(2U);
    msg.setDestination(2778U);
    msg.setDestinationEntity(19U);
    msg.timestamp_last_service = 0.557069823926;
    msg.time_next_service = 0.976615408214;
    msg.time_motor_next_service = 0.0831293457123;
    msg.time_idle_ground = 0.662438491999;
    msg.time_idle_air = 0.830439820888;
    msg.time_idle_water = 0.077316210173;
    msg.time_idle_underwater = 0.892833650726;
    msg.time_idle_unknown = 0.453660711917;
    msg.time_motor_ground = 0.898171676455;
    msg.time_motor_air = 0.527349265122;
    msg.time_motor_water = 0.194767009428;
    msg.time_motor_underwater = 0.744302177946;
    msg.time_motor_unknown = 0.725560550569;
    msg.rpm_min = 29260;
    msg.rpm_max = -13274;
    msg.depth_max = 0.107344391924;

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
    msg.setTimeStamp(0.342027821248);
    msg.setSource(15115U);
    msg.setSourceEntity(115U);
    msg.setDestination(59510U);
    msg.setDestinationEntity(54U);
    msg.timestamp_last_service = 0.730817659873;
    msg.time_next_service = 0.368950983827;
    msg.time_motor_next_service = 0.926750273744;
    msg.time_idle_ground = 0.161081415711;
    msg.time_idle_air = 0.733498268855;
    msg.time_idle_water = 0.612888414314;
    msg.time_idle_underwater = 0.183860125822;
    msg.time_idle_unknown = 0.675309928452;
    msg.time_motor_ground = 0.568728526293;
    msg.time_motor_air = 0.551073188933;
    msg.time_motor_water = 0.495804517471;
    msg.time_motor_underwater = 0.211948790593;
    msg.time_motor_unknown = 0.762251936134;
    msg.rpm_min = -7369;
    msg.rpm_max = -10430;
    msg.depth_max = 0.280352144174;

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
    msg.setTimeStamp(0.283656440855);
    msg.setSource(33459U);
    msg.setSourceEntity(72U);
    msg.setDestination(22683U);
    msg.setDestinationEntity(82U);
    msg.timestamp_last_service = 0.926914958944;
    msg.time_next_service = 0.113751851677;
    msg.time_motor_next_service = 0.904729606069;
    msg.time_idle_ground = 0.702119121017;
    msg.time_idle_air = 0.266396523518;
    msg.time_idle_water = 0.385041306654;
    msg.time_idle_underwater = 0.53803462984;
    msg.time_idle_unknown = 0.156245821615;
    msg.time_motor_ground = 0.482228319494;
    msg.time_motor_air = 0.865923861562;
    msg.time_motor_water = 0.292461038238;
    msg.time_motor_underwater = 0.366769482351;
    msg.time_motor_unknown = 0.113177620564;
    msg.rpm_min = -27191;
    msg.rpm_max = 20625;
    msg.depth_max = 0.459742097638;

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
    msg.setTimeStamp(0.93496845557);
    msg.setSource(62009U);
    msg.setSourceEntity(166U);
    msg.setDestination(50160U);
    msg.setDestinationEntity(53U);
    msg.severity = 83U;
    msg.text.assign("RSYCCIJNKBWAKAILLAPVEYQIXDKTSYVWTHXMJEOYWNBHYVESCTGWRDJHWBKDWJTARPFVXSEARPXNDISYEZEOUZGFNHSGHFGBXZOWSNMMFFIKMFPIBQZBMALGPCVJNCGBSFTZLCMPBRCZJLVOVEODUDPMEPOKUQYJUNQLXTPEXWACHGXMPOLQTJDAKDOISCUEMZNRJVQVYYHTQIXCLLYTUNUXWFRUHARBQSKGKOIRJ");

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
    msg.setTimeStamp(0.623857945611);
    msg.setSource(64854U);
    msg.setSourceEntity(57U);
    msg.setDestination(15377U);
    msg.setDestinationEntity(253U);
    msg.severity = 147U;
    msg.text.assign("NWOAFDVAVUWDQRIFKXTKDYKAXPRMEJLVYCEANNUEZKPYQHJLXMYYCSSNDBCUBOASHDGADLGMSLGZOKQWRLTINMECPFILEROQAEBUJJGZQOWTPMWAGHYQFUNNUDFJGEKKAFYTBEFIDXZNPOTWMSTMG");

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
    msg.setTimeStamp(0.402765311765);
    msg.setSource(1709U);
    msg.setSourceEntity(153U);
    msg.setDestination(25619U);
    msg.setDestinationEntity(216U);
    msg.severity = 29U;
    msg.text.assign("GGAPLOLFQWICYCTEALJITCMSANOKZKHKYVAQEOFRIDEMWSYZHSGSOIXDVWGJSMCVOYFASLXJSHHQ");

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

  return test.getReturnValue();
}
