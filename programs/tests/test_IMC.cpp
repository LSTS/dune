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
// IMC XML MD5: 6c347cdacbdacce16be764ef407e717b                            *
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
    msg.setTimeStamp(0.8732994112629905);
    msg.setSource(17932U);
    msg.setSourceEntity(61U);
    msg.setDestination(17544U);
    msg.setDestinationEntity(92U);
    msg.state = 168U;
    msg.flags = 168U;
    msg.description.assign("QEYYSTGRNDMLXVVKCEYNHDLRWUHMQBQKIEUVOMQIGATGNCSQTIOCLJCIZIKKYVFBGRCAPDMUJUOYLUEHCIMZJSBLPANKRXSWHREVJEVUPBQOFSBRQEDWOSETXT");

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
    msg.setTimeStamp(0.430064601174146);
    msg.setSource(38539U);
    msg.setSourceEntity(136U);
    msg.setDestination(13471U);
    msg.setDestinationEntity(114U);
    msg.state = 205U;
    msg.flags = 45U;
    msg.description.assign("HRINULROVTTYFTSZPAVURTMSHQPPMCDCHOFIGVBKXDIRSNYFOSJIXAGHFXWCOVTMEUYHQPAMNNVRWAGXKYUDBCXXXBYACZWVICISBUARMXQLAWUIJRZKCHYTWWSOHLEBAQCSFGGKZWGELXIXQ");

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
    msg.setTimeStamp(0.24690050508822803);
    msg.setSource(48224U);
    msg.setSourceEntity(151U);
    msg.setDestination(52327U);
    msg.setDestinationEntity(129U);
    msg.state = 6U;
    msg.flags = 17U;
    msg.description.assign("MHLTVBQOYBU");

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
    msg.setTimeStamp(0.2857506329088413);
    msg.setSource(30259U);
    msg.setSourceEntity(159U);
    msg.setDestination(31660U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.2220907516399141);
    msg.setSource(27982U);
    msg.setSourceEntity(112U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.7838263407281811);
    msg.setSource(43843U);
    msg.setSourceEntity(202U);
    msg.setDestination(50485U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.002388786302179202);
    msg.setSource(50572U);
    msg.setSourceEntity(247U);
    msg.setDestination(9221U);
    msg.setDestinationEntity(205U);
    msg.id = 142U;
    msg.label.assign("QLIUFZDJCOUDVULP");
    msg.component.assign("QUPLSJLZCRUSMHOUGWNXRLYIOUYHMKO");
    msg.act_time = 26206U;
    msg.deact_time = 55612U;

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
    msg.setTimeStamp(0.953644885475196);
    msg.setSource(41052U);
    msg.setSourceEntity(36U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(21U);
    msg.id = 100U;
    msg.label.assign("XQTJVQIHTXLFJPLLIUEH");
    msg.component.assign("VTVYBVRLMROSKMHQTNIZGFSWDXXJZAEKBPITNPNENSJHIFMENNKBEXKTHQWSHSJALM");
    msg.act_time = 34028U;
    msg.deact_time = 1380U;

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
    msg.setTimeStamp(0.9980673574849089);
    msg.setSource(23349U);
    msg.setSourceEntity(108U);
    msg.setDestination(5898U);
    msg.setDestinationEntity(150U);
    msg.id = 169U;
    msg.label.assign("IHTGALHEYTISWECDYAJQCRFIFDOUKTHVBRBTZNJWDDRXDLYVYBCREGFNVWLFZHNQNFCIVBMYDXGRLMZEVLBKKXCKOZPYCZHGYNAMQBSAU");
    msg.component.assign("JAZSIEZLEBNJBVVJDZCSGCPJQRRWQLRAMDRFKJGMQRXWWXZLMCXSNDXMPKGXIXTMINWPEKFWWYVSQNCHMZTBGHYOSOBVSEULXIHMNKYRAQUEBYK");
    msg.act_time = 24240U;
    msg.deact_time = 29268U;

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
    msg.setTimeStamp(0.47304183945155187);
    msg.setSource(19184U);
    msg.setSourceEntity(100U);
    msg.setDestination(57626U);
    msg.setDestinationEntity(136U);
    msg.id = 93U;

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
    msg.setTimeStamp(0.006494278595772562);
    msg.setSource(36337U);
    msg.setSourceEntity(61U);
    msg.setDestination(2152U);
    msg.setDestinationEntity(224U);
    msg.id = 118U;

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
    msg.setTimeStamp(0.8095888246775467);
    msg.setSource(55593U);
    msg.setSourceEntity(84U);
    msg.setDestination(38545U);
    msg.setDestinationEntity(10U);
    msg.id = 226U;

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
    msg.setTimeStamp(0.7449928545238582);
    msg.setSource(2314U);
    msg.setSourceEntity(26U);
    msg.setDestination(5758U);
    msg.setDestinationEntity(84U);
    msg.op = 165U;
    msg.list.assign("ZXVKQDPEIFGBRNGWCYLVMFSODXSSYPBIPRIBNPIPHTCYPXLDKNLVHJBGSQLRYHGTWIAHOXLTRWZBAOXYCMVBZMYNISBDEXCGJFPTBGHOODASDVACGAXNUNHXKFTSFTZIPZJWTMNOLEHRMTCQMCWNFKQHEQIEYJUSZUHXZGEJAWIZYXTKJIKZRJOWQPONUFEYQLSGAUKEWMMLWJUDDFOVOYBMLVJGQRRKKR");

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
    msg.setTimeStamp(0.30821722555659337);
    msg.setSource(49298U);
    msg.setSourceEntity(19U);
    msg.setDestination(48661U);
    msg.setDestinationEntity(168U);
    msg.op = 174U;
    msg.list.assign("NRDHXNEPTHAJVAMSLCKQZWAODHOBHLVFAGXLZXYBRMZURFEXEZAMEPPHTQUNYDGUYUVYWTLBWGLFFDWLAEDVOJIIQSPLIHRUQRWAQUTYWSNRFZB");

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
    msg.setTimeStamp(0.9633264668027421);
    msg.setSource(19247U);
    msg.setSourceEntity(222U);
    msg.setDestination(14417U);
    msg.setDestinationEntity(216U);
    msg.op = 186U;
    msg.list.assign("PEZPWEZWEBRDIKWTCZYWBJRAQSFQJLMCMKVMSQFJIZGGYNBJEHUJVACODCYMPZMDFTBKMYZPLIWDDGIAQOXLLHOXFKVJDQEQCCOSTLWAXOPTIKRRXTYEWYSKKGATPHROV");

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
    msg.setTimeStamp(0.1701203974632196);
    msg.setSource(35414U);
    msg.setSourceEntity(78U);
    msg.setDestination(41671U);
    msg.setDestinationEntity(46U);
    msg.value = 163U;

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
    msg.setTimeStamp(0.9768031986636067);
    msg.setSource(10390U);
    msg.setSourceEntity(60U);
    msg.setDestination(30185U);
    msg.setDestinationEntity(172U);
    msg.value = 123U;

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
    msg.setTimeStamp(0.306981022807292);
    msg.setSource(35392U);
    msg.setSourceEntity(13U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(99U);
    msg.value = 219U;

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
    msg.setTimeStamp(0.4298548132142711);
    msg.setSource(59921U);
    msg.setSourceEntity(228U);
    msg.setDestination(5491U);
    msg.setDestinationEntity(27U);
    msg.consumer.assign("ETDCFJNPLWHPCXNRGEQIJMCVCAALRFKFTZGZVKXUPSYDKOX");
    msg.message_id = 43695U;

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
    msg.setTimeStamp(0.16157890764076566);
    msg.setSource(46700U);
    msg.setSourceEntity(216U);
    msg.setDestination(64321U);
    msg.setDestinationEntity(254U);
    msg.consumer.assign("YWNMLKBADNUBAYSWKRBNITCPKHDAUWAYKYCNZABLJROFBDGZIMUIRKLBYGYEXVJYHIIKPHYHMALQSQFTNHHZXFIRPJSJCFDECAMOKGNPMCBXLEGMJTQNHHETTTSDZDRVTCQYEVSWLGNDEAOTWGMZLQOVVIFDFDOECSQQBWMROBKKRGDZNUJXWIPGCPVXRPVLNJUVVXEFUU");
    msg.message_id = 40919U;

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
    msg.setTimeStamp(0.5300618272098966);
    msg.setSource(16221U);
    msg.setSourceEntity(19U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(110U);
    msg.consumer.assign("MSDINBNALEJQAKBTDKUHNXPZYXBWWYYWRBSKECIYNVDDUPMXLKRRXUKTFFFZCIQOQNARGNPAPHHGLBQHPHVHSCIVSELSZSAGDNOJIEALRTOTORYXICVAVGPTGBKZE");
    msg.message_id = 15915U;

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
    msg.setTimeStamp(0.422593675527555);
    msg.setSource(42571U);
    msg.setSourceEntity(154U);
    msg.setDestination(50165U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.6701755878644061);
    msg.setSource(9983U);
    msg.setSourceEntity(7U);
    msg.setDestination(41537U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8733989901352466);
    msg.setSource(40109U);
    msg.setSourceEntity(196U);
    msg.setDestination(26019U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.07313153467804745);
    msg.setSource(56886U);
    msg.setSourceEntity(253U);
    msg.setDestination(43900U);
    msg.setDestinationEntity(52U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.6389249560830608);
    msg.setSource(31653U);
    msg.setSourceEntity(53U);
    msg.setDestination(24958U);
    msg.setDestinationEntity(231U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.5658565950382568);
    msg.setSource(50115U);
    msg.setSourceEntity(237U);
    msg.setDestination(51184U);
    msg.setDestinationEntity(108U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.6974337270577842);
    msg.setSource(35829U);
    msg.setSourceEntity(166U);
    msg.setDestination(12630U);
    msg.setDestinationEntity(105U);
    msg.total_steps = 182U;
    msg.step_number = 146U;
    msg.step.assign("BERLTVFKZOWVKFGSINNEUJAWJDMPWLOXGZPQBIOFYJAGKDCSIRCIZMAALHEOUANUXINUAVHJBTNSQTGGTQHPXMHEPZOHYBEQFPWRCFFXBPOAGRMOYLCWMYXRTZGCRPDZLQGKTZLQJHYCUNSWKKUJNFLIYCXSABXMIPBQFBDEQTDRBOFJAXKHSZRDSVUIVYEEVSJNKDSNOMLQMDXHUNR");
    msg.flags = 13U;

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
    msg.setTimeStamp(0.8220937944174027);
    msg.setSource(8392U);
    msg.setSourceEntity(55U);
    msg.setDestination(4733U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 208U;
    msg.step_number = 236U;
    msg.step.assign("CUNTRWEZMYZTFNGAJDQJOAPFBTORWCKOSQJSRJGCUXNUDZRLQSELRZDMQLBIKXJTKNQGYKIAHXHYNWHGWYFIRSACRHMZBAAVMWEGMNWOETTHGYNCBNMAEXVPKVUAHWWBKPFKVDGVIYARYXJECILPZWEYXCDFMGXPCBUVPLKLICVHIAZLUBBQYDGHOXIDHDRGFJFLEZSJSXVTVQOMWBOBUSNCSPVFUIJKKFOFENOEZSTZ");
    msg.flags = 228U;

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
    msg.setTimeStamp(0.20722329225007652);
    msg.setSource(56738U);
    msg.setSourceEntity(46U);
    msg.setDestination(29009U);
    msg.setDestinationEntity(122U);
    msg.total_steps = 14U;
    msg.step_number = 13U;
    msg.step.assign("SZALNMCKCKTGKLGQHAZLEASEMHCOXVQLNJITKEFKEPLQRCFLGRQXKNWXJMUXXVACIIGUSOPEZXFVADEDTRHEGIQPHYVDENEPWCTIHKQJFRWQBDBPLYPBJDMBOJUPFUZAJTZGLHBIWJVMBIWSSVWTRXBZNNCFUOAIHSGZYAOTKGMMBVYSYNRIURQNCGWMMRODZBTNVHFYZXJSYU");
    msg.flags = 184U;

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
    msg.setTimeStamp(0.835760317793888);
    msg.setSource(62482U);
    msg.setSourceEntity(44U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(93U);
    msg.state = 205U;
    msg.error.assign("RNCWQWMDHUOHLAPYSRDZZOBAISH");

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
    msg.setTimeStamp(0.55357180687005);
    msg.setSource(8861U);
    msg.setSourceEntity(234U);
    msg.setDestination(56799U);
    msg.setDestinationEntity(104U);
    msg.state = 77U;
    msg.error.assign("PFUNIZVWOGPPIMTHPTPAHWTEPTNHLLORLHMIXWJURBWDVGHOGYSNXHDVTCYURRIJSPUIMNKMOOQWAKQGNJBLQWBTSDLSHLFIGUAHVCNLBJMKUKTSQAHRBLXCEDAOVZXDNEXEIMWGBED");

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
    msg.setTimeStamp(0.6120411216053305);
    msg.setSource(48832U);
    msg.setSourceEntity(182U);
    msg.setDestination(42111U);
    msg.setDestinationEntity(14U);
    msg.state = 252U;
    msg.error.assign("AKXUFBLTGEYU");

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
    msg.setTimeStamp(0.09656985223981751);
    msg.setSource(1326U);
    msg.setSourceEntity(219U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.4670254916725821);
    msg.setSource(38952U);
    msg.setSourceEntity(151U);
    msg.setDestination(27806U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.1095914018842451);
    msg.setSource(5386U);
    msg.setSourceEntity(142U);
    msg.setDestination(34053U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.9352805938408976);
    msg.setSource(24372U);
    msg.setSourceEntity(187U);
    msg.setDestination(32696U);
    msg.setDestinationEntity(180U);
    msg.op = 188U;
    msg.speed_min = 0.7007719130734866;
    msg.speed_max = 0.6235910273123738;
    msg.long_accel = 0.462126606437787;
    msg.alt_max_msl = 0.8488391249555053;
    msg.dive_fraction_max = 0.0204105066472966;
    msg.climb_fraction_max = 0.4279280884095049;
    msg.bank_max = 0.1863859344213108;
    msg.p_max = 0.02973813113130308;
    msg.pitch_min = 0.2706316831911253;
    msg.pitch_max = 0.7720828193382188;
    msg.q_max = 0.8021547654656386;
    msg.g_min = 0.060728090064134044;
    msg.g_max = 0.8141063690746995;
    msg.g_lat_max = 0.6378381282015956;
    msg.rpm_min = 0.11546419630983029;
    msg.rpm_max = 0.23690309725216507;
    msg.rpm_rate_max = 0.5048928929439811;

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
    msg.setTimeStamp(0.40185286949747756);
    msg.setSource(16470U);
    msg.setSourceEntity(80U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(120U);
    msg.op = 35U;
    msg.speed_min = 0.6796199286687212;
    msg.speed_max = 0.7439100608260893;
    msg.long_accel = 0.3741264417106366;
    msg.alt_max_msl = 0.43214798402329746;
    msg.dive_fraction_max = 0.5078653365382403;
    msg.climb_fraction_max = 0.6183946668689213;
    msg.bank_max = 0.537153321460979;
    msg.p_max = 0.5160223900135359;
    msg.pitch_min = 0.8835229715068569;
    msg.pitch_max = 0.013257833058683333;
    msg.q_max = 0.6792999953624769;
    msg.g_min = 0.64669725252846;
    msg.g_max = 0.32885326353990507;
    msg.g_lat_max = 0.6757564410263167;
    msg.rpm_min = 0.8201692365176095;
    msg.rpm_max = 0.7720511241806949;
    msg.rpm_rate_max = 0.3454328887024959;

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
    msg.setTimeStamp(0.16943317643938538);
    msg.setSource(10799U);
    msg.setSourceEntity(38U);
    msg.setDestination(56951U);
    msg.setDestinationEntity(240U);
    msg.op = 121U;
    msg.speed_min = 0.956054306694406;
    msg.speed_max = 0.36785843643874394;
    msg.long_accel = 0.6398853765374711;
    msg.alt_max_msl = 0.5785367593474798;
    msg.dive_fraction_max = 0.5979406275392438;
    msg.climb_fraction_max = 0.9414491736958792;
    msg.bank_max = 0.6459262286745646;
    msg.p_max = 0.9751873877248166;
    msg.pitch_min = 0.45103582696412614;
    msg.pitch_max = 0.6937084454455743;
    msg.q_max = 0.9836059902701707;
    msg.g_min = 0.7588273917267986;
    msg.g_max = 0.8302621430806066;
    msg.g_lat_max = 0.5742035277476777;
    msg.rpm_min = 0.059818753163745964;
    msg.rpm_max = 0.5171982069588619;
    msg.rpm_rate_max = 0.3557621632589203;

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
    msg.setTimeStamp(0.89072972840473);
    msg.setSource(28221U);
    msg.setSourceEntity(137U);
    msg.setDestination(52172U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.18526234302425604);
    msg.setSource(37899U);
    msg.setSourceEntity(51U);
    msg.setDestination(22345U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.5631101186340022);
    msg.setSource(25908U);
    msg.setSourceEntity(220U);
    msg.setDestination(34015U);
    msg.setDestinationEntity(79U);
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.19733279396793413);
    msg.setSource(11490U);
    msg.setSourceEntity(119U);
    msg.setDestination(62275U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.03273858744858438;
    msg.lon = 0.9377718870053761;
    msg.height = 0.1783139246394846;
    msg.x = 0.7010538118979701;
    msg.y = 0.5051472243769053;
    msg.z = 0.5584599479819601;
    msg.phi = 0.2120817176501535;
    msg.theta = 0.2809883108820004;
    msg.psi = 0.5515294945174103;
    msg.u = 0.28815395254947085;
    msg.v = 0.8036772951375577;
    msg.w = 0.6315157255552684;
    msg.p = 0.270663174779292;
    msg.q = 0.18016896585995568;
    msg.r = 0.18888711152872417;
    msg.svx = 0.27832808383607266;
    msg.svy = 0.8640307124155092;
    msg.svz = 0.9325492131276838;

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
    msg.setTimeStamp(0.585206434509097);
    msg.setSource(4617U);
    msg.setSourceEntity(80U);
    msg.setDestination(48849U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.10630840292318888;
    msg.lon = 0.2420933050132903;
    msg.height = 0.46636315218920055;
    msg.x = 0.6372582970223237;
    msg.y = 0.7934414342819411;
    msg.z = 0.655355726845708;
    msg.phi = 0.9806570202262501;
    msg.theta = 0.02450614381046612;
    msg.psi = 0.6557494810761958;
    msg.u = 0.44915854304521075;
    msg.v = 0.22993674402910724;
    msg.w = 0.12228965612716913;
    msg.p = 0.34108909555915323;
    msg.q = 0.701748116197385;
    msg.r = 0.2749298796341988;
    msg.svx = 0.7186164591553615;
    msg.svy = 0.14942184923905721;
    msg.svz = 0.10173725321520133;

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
    msg.setTimeStamp(0.9476941401330108);
    msg.setSource(53798U);
    msg.setSourceEntity(55U);
    msg.setDestination(51100U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.2494073773392872;
    msg.lon = 0.7515515679583806;
    msg.height = 0.06532738052724885;
    msg.x = 0.7804020013722902;
    msg.y = 0.6311830217936367;
    msg.z = 0.6391816460097844;
    msg.phi = 0.728126584237745;
    msg.theta = 0.4987528783528471;
    msg.psi = 0.8809180041987723;
    msg.u = 0.1994049443194198;
    msg.v = 0.39591534871314715;
    msg.w = 0.2124464957097213;
    msg.p = 0.503874836176673;
    msg.q = 0.1027486221846231;
    msg.r = 0.6437190633442016;
    msg.svx = 0.3371194516524052;
    msg.svy = 0.4623440921028793;
    msg.svz = 0.26129514540573195;

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
    msg.setTimeStamp(0.8224910422781223);
    msg.setSource(50977U);
    msg.setSourceEntity(105U);
    msg.setDestination(31675U);
    msg.setDestinationEntity(181U);
    msg.op = 38U;
    msg.entities.assign("VNLQTOZKSUKQQTZQEXMMWUMTCCBOLKMRXJTPOANINHDEGSQCVFAKNPDDDXTXYYKBLPURRBNGYKHOJLXNQJWNEUVUZAAPPMMFCWFXGXUERSJY");

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
    msg.setTimeStamp(0.19634467204004835);
    msg.setSource(42844U);
    msg.setSourceEntity(82U);
    msg.setDestination(41900U);
    msg.setDestinationEntity(129U);
    msg.op = 87U;
    msg.entities.assign("STVNIPXIAJKNSJJNYCVFWUGPYWXHRBJZBCCDECNVDEHBYDNJVWHYXALUDMDHRAZYGQFVJXSWLKCOWQASHEERPBIXZKHJYLRDYGMZUWGJADPSLVRAEPTYVQERIRSDTMGQG");

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
    msg.setTimeStamp(0.6150023933118902);
    msg.setSource(54977U);
    msg.setSourceEntity(112U);
    msg.setDestination(39950U);
    msg.setDestinationEntity(119U);
    msg.op = 91U;
    msg.entities.assign("APCNYIOUDGOGRBUSUIHIFJQFRNPCCYJESPQIHHSUWGRSMPRTFKSIFQZQLUAFTIKJQLECHDMEHNWILQJEXKKUVXJYCLBCLOZYVXDFONXNSTZADBMNWQUFGNAZRNXGPBXMBMQVNEIBCLSZHVEPJFJHCTQXGYAZDIAZDBMZDWSKBOGXURRXYKVAXYWRL");

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
    msg.setTimeStamp(0.28976208786650215);
    msg.setSource(27336U);
    msg.setSourceEntity(134U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(201U);
    msg.type = 28U;
    msg.speed = 45215U;
    const char tmp_msg_0[] = {64, 111, 55, -57, -35, -58, -82, -64, -113, 56, 61, -59, -73, -97, -27, 50, -37, 99, -92, -54, 72, 23, -31, -71, -9, -59, 117, 77, 109, -79, 71, 121, 65, 111, 43, -69, -72, 77, 70, -101, 121, 71, 10, -70, 86, -114, 95, 81, 36, -105, 18, -36, 113, -47, 122, 0, -19, 117, 92, 76, 27, -87, -40, 72, 34};
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
    msg.setTimeStamp(0.2873350060846822);
    msg.setSource(5962U);
    msg.setSourceEntity(184U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(172U);
    msg.type = 226U;
    msg.speed = 24726U;
    const char tmp_msg_0[] = {71, 60, 115, 81, 124, 37, 120, 121, 101, 92, -28, -61, -56, 5, 113, -100, -108, 53, 80, 95, -101, 23, 111, -112, -99, -85, -96, -45, 55, -50, -66, 25, -121, -104, 62, 24, 121, 104, -10, 16, -70, -67, 67, -94, -39, 72, 53, 104, -36, 39, 33, -90, -76, -116, 58, 99, 46, -75, 90, 42, 60, -40, -89, -12, -2, 95, 122, 83, -52, 119, 14, -23, 57, 17, -18, 6, -60, 114, 48, -12, 126, 123, 74, 125, 7, 15, -127, -37, -126, -38, -10, -82, -37, 27, 69, -113, 109, 33, -21, -58, 96, 17, -84, -95, -2, 120, 2, 123, 86, -37, 73, 90, 117, -17, 31, -12, -23, 58, 84, -11, -40, 93, 55, -94, -76, -23, -44, -22, 61, 13, -44, 118, 67, 38, 40, -100, -32, -97, -103, 56, 120, 126, -1, 105, 46, 42, 85, -46, -79, 84, 122, -114, -67, 42, -48, 79, 89, 78, 66, 55, 45, -14, 66, 27, -93, 109, -104, -7, -126, -79, 53, -108, -15, 110, -47, 80, -122, 15, 100, -83, 16, 88, -87, -96, 42, -17, -112, -2, 95, -22, 70, 96, 26, 82, -99, 56, -26, 58, -3, 27, -89, -83, 19, -57, -30, 109, 111, 114, 110, -128, -111, 3, -23, 27, 37, -14, 117, 18, 101, -96, -81, 48, -46, 89, 112, 48, 88, -92, -2, -98, 41, -55, -103, -67, 76};
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
    msg.setTimeStamp(0.3688710359723214);
    msg.setSource(26582U);
    msg.setSourceEntity(178U);
    msg.setDestination(64685U);
    msg.setDestinationEntity(192U);
    msg.type = 22U;
    msg.speed = 1708U;
    const char tmp_msg_0[] = {78, 62, 71, -45, 93, -7, -37, -103, 44, 79};
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
    msg.setTimeStamp(0.30083174969249704);
    msg.setSource(25748U);
    msg.setSourceEntity(128U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(92U);
    msg.op = 114U;
    msg.tas2acc_pgain = 0.805145429416616;
    msg.bank2p_pgain = 0.6938150787318667;

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
    msg.setTimeStamp(0.809253004472816);
    msg.setSource(2779U);
    msg.setSourceEntity(121U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(239U);
    msg.op = 75U;
    msg.tas2acc_pgain = 0.34754366433111916;
    msg.bank2p_pgain = 0.9003207187424043;

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
    msg.setTimeStamp(0.35067595192802226);
    msg.setSource(63821U);
    msg.setSourceEntity(186U);
    msg.setDestination(59150U);
    msg.setDestinationEntity(246U);
    msg.op = 60U;
    msg.tas2acc_pgain = 0.5542308793941179;
    msg.bank2p_pgain = 0.7922034953689875;

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
    msg.setTimeStamp(0.3553197236581892);
    msg.setSource(46177U);
    msg.setSourceEntity(114U);
    msg.setDestination(24582U);
    msg.setDestinationEntity(31U);
    msg.available = 196382023U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.030447126878468844);
    msg.setSource(62383U);
    msg.setSourceEntity(129U);
    msg.setDestination(40677U);
    msg.setDestinationEntity(160U);
    msg.available = 3499142141U;
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
    msg.setTimeStamp(0.2384857306036905);
    msg.setSource(47147U);
    msg.setSourceEntity(44U);
    msg.setDestination(59214U);
    msg.setDestinationEntity(12U);
    msg.available = 2586373666U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.4758028768655589);
    msg.setSource(9107U);
    msg.setSourceEntity(136U);
    msg.setDestination(12072U);
    msg.setDestinationEntity(66U);
    msg.op = 72U;
    msg.snapshot.assign("RWCFBISEFFDPNDDSKTNPLZWXLZVMRDJCMCSKMDSGDEJTTMRQPEYPPAMQVOQWSXKZBONGOKEXGCWNJJRYUFGXNCCRVAGAQWKNQZQUFYKJAFSLJXFHKGIZZIARPLPYSTNUHVIRMHZVNTXBHIVEYSWQOWYLZIOHDQOMZMVPCUYUIRWGWBLOFBJVJXGWYFCHRRBCKUUATNETHVEGPJEAVHMDJLSATUNKMQEUPYEII");
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 19351U;
    tmp_msg_0.bearing = 0.5490673919473188;
    tmp_msg_0.elevation = 0.5259443379348279;
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
    msg.setTimeStamp(0.9259964284947203);
    msg.setSource(1814U);
    msg.setSourceEntity(148U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(99U);
    msg.op = 58U;
    msg.snapshot.assign("MQNVDKLLBGCDTWRYASNI");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 15768U;
    tmp_msg_0.lat = 0.7716279716914405;
    tmp_msg_0.lon = 0.8997658421518453;
    tmp_msg_0.z = 0.793129333950452;
    tmp_msg_0.z_units = 208U;
    tmp_msg_0.speed = 0.692412465680219;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.custom.assign("MZGKFWHGSNQBWZIAOLNKGDLBLBQKFVKWUCOZCHHPEUJGSMQNGEK");
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
    msg.setTimeStamp(0.03581467681629702);
    msg.setSource(57561U);
    msg.setSourceEntity(71U);
    msg.setDestination(64440U);
    msg.setDestinationEntity(62U);
    msg.op = 135U;
    msg.snapshot.assign("JRXOCSGECUTBMQTSYHZBYKYOGUAUVLJIVFAYOMGWBACNVVXGDJZPEDHRATNBLFPMRNDWITZJLQBNLZANFNPFWGTMCRJKUBPNKOMIFCSLDYFXRYTIOXLKZKQQTITYUHOWWXMMZEIAEOQNJDIQVCJJKSXHPVXEORGPEP");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 14U;
    tmp_msg_0.lon_gain = 0.2406981600017556;
    tmp_msg_0.lat_gain = 0.1649390024253229;
    tmp_msg_0.bond_thick = 0.6942347999488195;
    tmp_msg_0.lead_gain = 0.8313098524798963;
    tmp_msg_0.deconfl_gain = 0.45605845113694476;
    tmp_msg_0.accel_switch_gain = 0.5595755283181648;
    tmp_msg_0.safe_dist = 0.17027704951991807;
    tmp_msg_0.deconflict_offset = 0.9766762722299162;
    tmp_msg_0.accel_safe_margin = 0.43377655009254357;
    tmp_msg_0.accel_lim_x = 0.9280078068702383;
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
    msg.setTimeStamp(0.3933452974344065);
    msg.setSource(23817U);
    msg.setSourceEntity(124U);
    msg.setDestination(52225U);
    msg.setDestinationEntity(175U);
    msg.op = 125U;
    msg.name.assign("UPNKINYNSCUPXBWDPJEJVTFTAGBFEVPGFOVWKNDXONKXWQKVJKZDYWNIXOYJCCLFZOHHAPUMLFCFQXWOAZEWKEUMRCXYVADGVRJYMMPBAYZILSHRTQVWAQWGCDARSRZQRBCSZDFLOPLJSPNXHWBMHHFUWCISZVTOJFHQIIOESADGEDJUXGTYSCDTLKHTSUIEUYGZBIOUHYCTTKINIRYERKSMMOVGNMPEXRJRDFABZBJKN");

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
    msg.setTimeStamp(0.4062781260819407);
    msg.setSource(19551U);
    msg.setSourceEntity(75U);
    msg.setDestination(41040U);
    msg.setDestinationEntity(128U);
    msg.op = 94U;
    msg.name.assign("XEHWKMBJGNLQPRDYFXGQHLLAIIPTUSOTNIBHKQVPEGTXYNAUHQNSASGGSVZNDUHBFHBOBLDPMNHETMIYNPIWJZQKAKKMWXUGISBTXRKOVWJXBPPLCOEKHKWIVHYCCDXJJZQFIQFVBFXMDJRTSROVEYOZYLPEDRBEVVFSWNPQUUSGTRWEFCAZZHCAMQNZJDZIYO");

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
    msg.setTimeStamp(0.2572065258774827);
    msg.setSource(4522U);
    msg.setSourceEntity(37U);
    msg.setDestination(399U);
    msg.setDestinationEntity(71U);
    msg.op = 230U;
    msg.name.assign("VUOHDCGEOUXTVXNRJZMFUTYNCLDJWAEKTMDYTNOBUDNHYYHWNTBCRVCSMRAUXAOVKYKZVTPUDQZFSWJUNLZLIUXSRTQOWWGHLBKBAFIJIJEKUAXGMKVAFQDXHUITFTCOVOPIPAYHSRSWCDPSBMEPQZLEHDOFKQ");

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
    msg.setTimeStamp(0.10927040466076154);
    msg.setSource(39679U);
    msg.setSourceEntity(50U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(249U);
    msg.type = 58U;
    msg.htime = 0.9210582862496288;
    msg.context.assign("RROAQNOLBFVKHZRZFTKXSXFMXDDUWNDCELEYEQCLKPHBZORMUEJPJMTPQPSNAZGVJUVWMGTDPSDGTIUAZYUFCXVHMTYKBWAWKBSAIJDLBXRYKRMWWYWFXDAGRQHNJGBNXMMOJSBRCZFHZLZPEADQICNEYLIZOEXUVJSJMXZCOSUIBTWIO");
    msg.text.assign("EBLCPTGWYAIIREFQOOZRGOKWBGVQPFHRQKOEVZODCMPBBVZKDSZQOUWHJHRGZFDTJFTQJDCKPEPSBXSWQAKHBWFOMAXLDXFNJIGUMQPSHWQUIPSNKMVNDVULGYBVLIATUCJJTEFZYTMSCNGNOMZVXXJJUNBADOFDGYAIXYTJAYFMCKALMKWSHLAXYBLIBNMUYLGRZTTJUTVWIEWUIMN");

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
    msg.setTimeStamp(0.24406801349108032);
    msg.setSource(46556U);
    msg.setSourceEntity(87U);
    msg.setDestination(9027U);
    msg.setDestinationEntity(166U);
    msg.type = 108U;
    msg.htime = 0.863783518708636;
    msg.context.assign("LBUUNZQRDTEWLXORMWAZNNOTVXINSWBCFHYJPBTQCKYRUMAETFJGT");
    msg.text.assign("SVKVXVXJGTLTMUCOJXIIDREPYACULWPRMKIQZSMEBXXLPWBTIHBQZWKNWFASUORUPKLURFNFMYTNOEIATICYHAWFEXJSSLKTNOR");

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
    msg.setTimeStamp(0.8254281098056806);
    msg.setSource(53705U);
    msg.setSourceEntity(242U);
    msg.setDestination(7332U);
    msg.setDestinationEntity(213U);
    msg.type = 102U;
    msg.htime = 0.20605346007521352;
    msg.context.assign("TQKNXBZIVLSUJFGRUQDFKKNMJYFMVDIFXBWGRCGXOUG");
    msg.text.assign("DCKYKOMYEXTVZIDLBQHFTKMJOSWVCTFPINKYQUAFSQRDSCXWHVHJFPKEFEGCNHPMLLTCHVTRXXEMEWTRDNKMOWZJOR");

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
    msg.setTimeStamp(0.05234179832984298);
    msg.setSource(35625U);
    msg.setSourceEntity(134U);
    msg.setDestination(7505U);
    msg.setDestinationEntity(87U);
    msg.command = 192U;
    msg.htime = 0.8303055209147858;

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
    msg.setTimeStamp(0.9314753182768457);
    msg.setSource(1911U);
    msg.setSourceEntity(3U);
    msg.setDestination(24000U);
    msg.setDestinationEntity(10U);
    msg.command = 66U;
    msg.htime = 0.5884124095515072;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.htime = 0.49521673992747217;
    tmp_msg_0.context.assign("DDEPOOSYBRGQOFLIYTJHHBFBIOKFKHQWIWKWKYRJMBLLRVGBODODSIKIEJILNMWYSMSBMPGFKTDTLYGZNEMLTWPEPCVNTUVRAQWKLSFUCXJKJZGQI");
    tmp_msg_0.text.assign("CKKMCWVWNSMFHRSKPOKCLNQYFTOJINLQKSQXCLLSUMQWUBPIJYJMTZTSOHKFZGDLFJMGZTPGNFAPIOIURUVNTEDVSEMPWTWVUYECYHXGOAQJYSAVJPDQBXOTCQ");
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
    msg.setTimeStamp(0.7435268540498735);
    msg.setSource(13562U);
    msg.setSourceEntity(188U);
    msg.setDestination(5433U);
    msg.setDestinationEntity(15U);
    msg.command = 101U;
    msg.htime = 0.5769048325863475;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 208U;
    tmp_msg_0.htime = 0.7338701914216449;
    tmp_msg_0.context.assign("HUUIBNBNNJJFZFLPKYZUIWQACGAXZFLVQ");
    tmp_msg_0.text.assign("FFWLVBISYVKE");
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
    msg.setTimeStamp(0.12170989241311092);
    msg.setSource(5452U);
    msg.setSourceEntity(147U);
    msg.setDestination(24122U);
    msg.setDestinationEntity(118U);
    msg.op = 168U;
    msg.file.assign("DZEBIRHQDAIALLLNWOSDYNVXMKIEPXANUZQBVZHESNNLRXCQ");

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
    msg.setTimeStamp(0.25329218731164926);
    msg.setSource(45299U);
    msg.setSourceEntity(222U);
    msg.setDestination(33758U);
    msg.setDestinationEntity(15U);
    msg.op = 47U;
    msg.file.assign("ZWCWHUXERFOYCJGYOBZNRDIENKPDMFGAXEQKSMBKNPIMUS");

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
    msg.setTimeStamp(0.2289420767564141);
    msg.setSource(44118U);
    msg.setSourceEntity(125U);
    msg.setDestination(37097U);
    msg.setDestinationEntity(55U);
    msg.op = 53U;
    msg.file.assign("XJCEUOVMWLZBBDGQZ");

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
    msg.setTimeStamp(0.9351704108792434);
    msg.setSource(38916U);
    msg.setSourceEntity(18U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(19U);
    msg.op = 156U;
    msg.clock = 0.1531241741874103;
    msg.tz = -68;

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
    msg.setTimeStamp(0.28922489025200515);
    msg.setSource(32498U);
    msg.setSourceEntity(153U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(197U);
    msg.op = 179U;
    msg.clock = 0.48807233945560424;
    msg.tz = -85;

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
    msg.setTimeStamp(0.1979492894811672);
    msg.setSource(63872U);
    msg.setSourceEntity(4U);
    msg.setDestination(24389U);
    msg.setDestinationEntity(52U);
    msg.op = 73U;
    msg.clock = 0.9922519464863276;
    msg.tz = -82;

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
    msg.setTimeStamp(0.21635918152372746);
    msg.setSource(59576U);
    msg.setSourceEntity(81U);
    msg.setDestination(59980U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.028186307193079685);
    msg.setSource(34133U);
    msg.setSourceEntity(114U);
    msg.setDestination(31097U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.5552040271676341);
    msg.setSource(24180U);
    msg.setSourceEntity(71U);
    msg.setDestination(51363U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.6254572157581504);
    msg.setSource(5202U);
    msg.setSourceEntity(193U);
    msg.setDestination(60447U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("NPSXFDXTCGSPSPSWEOFIPPGMNKECQLOLIIWARZNAFVCGEFVNKAZVKBBMJKDKNPCGACJAWWUDFMAAQYCLGTTAQCZGQIPUCD");
    msg.sys_type = 75U;
    msg.owner = 59023U;
    msg.lat = 0.6805021505844221;
    msg.lon = 0.6029493189529335;
    msg.height = 0.7274570939763534;
    msg.services.assign("YPHULVMMATROBSFIJKGYSZFCPJHXNJYAYROLQVKRTGIBKKPUAFFACHPEJIOARZ");

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
    msg.setTimeStamp(0.7302297837115647);
    msg.setSource(17315U);
    msg.setSourceEntity(130U);
    msg.setDestination(1910U);
    msg.setDestinationEntity(214U);
    msg.sys_name.assign("MUBNGGFRPBJZHRDCCRQFB");
    msg.sys_type = 208U;
    msg.owner = 16578U;
    msg.lat = 0.5488628209103179;
    msg.lon = 0.9758725298843517;
    msg.height = 0.39751604905077076;
    msg.services.assign("FESPLOOVHIKWXDQNDEFEQEDSVKRHUDCQUBH");

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
    msg.setTimeStamp(0.8761720268337635);
    msg.setSource(7597U);
    msg.setSourceEntity(137U);
    msg.setDestination(12581U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("JWUIYMQFFJIKBSJDILQYVAQEKHNSPCALKHITIVSJORZDFHXJGKDSMTDEALPIIOSUGCMDGAMERJRGOEWPCWLYFSZIJCMMEQTOZPUKRBXERQSEALQWANWBROKMTNVGOBXRPMEXANDNHUGVBBKMU");
    msg.sys_type = 24U;
    msg.owner = 16423U;
    msg.lat = 0.09766197154525158;
    msg.lon = 0.3147510591232422;
    msg.height = 0.3874186202325166;
    msg.services.assign("BEAWZRBPOYRXAHSXQDAIKFXAGVIVRSHMANSBLNWYEAKFHFWCXNRDVYQBYUMXLVZDOWDYUTPMNHNTHPIQPOUWURRPXLYKLEHZZOCYSGLFDTVZQXZHGKKQBJMPUGCIKSRUVCJTPHVANMCNJIFDFDOBJSPUCGQEXILYCBCMTIFELFJWWVJSQPJZFOTKMZXROAPEOZ");

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
    msg.setTimeStamp(0.3331711447145177);
    msg.setSource(35198U);
    msg.setSourceEntity(97U);
    msg.setDestination(19475U);
    msg.setDestinationEntity(241U);
    msg.service.assign("OCPWZWVNFLJHBINQETIRVPZZCPRPXYHJYLHCWGQQNXSIEBFACUXWUZZMQZVYKMGZNQGWSPKEQAAKPUDJSXLOQCBXTLYHXNNHBMGWKVMRGRAOQFFFWJBNRXHZKVZWCPGIASTUCJSGSICEXCADOUOAMZVYRJBGPDSKNRTOREYIELEETPRSKTQMGAYFDLIBWMQFEDANOVH");
    msg.service_type = 201U;

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
    msg.setTimeStamp(0.5052500911089911);
    msg.setSource(16281U);
    msg.setSourceEntity(17U);
    msg.setDestination(25617U);
    msg.setDestinationEntity(102U);
    msg.service.assign("MIDAQYCVFHKIGAVYBTGPMVKPBMFUNWRLCZBPNFZTONXMADHKIQTEXXOSKQLLDHLKALAUZNJCWYUJYAYAFCFFNABYEDRSKSOEQGVMUHXROGVJSTAYFNZHBRPBOCSJBCJLUOWIDYJKZVBPTTPPPWHDGWRWFSKZHRUTCXZGGIDWQSTISPXNHWZJIRQVJLONDSEZK");
    msg.service_type = 170U;

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
    msg.setTimeStamp(0.5281614211068437);
    msg.setSource(23044U);
    msg.setSourceEntity(165U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(45U);
    msg.service.assign("YZIMEGHTJABTFDRKXFZYIMZWEILFDMSSDAEAAHR");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.3381889856340593);
    msg.setSource(24175U);
    msg.setSourceEntity(27U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(155U);
    msg.value = 0.15608043312529063;

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
    msg.setTimeStamp(0.7790992880526496);
    msg.setSource(37091U);
    msg.setSourceEntity(39U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7187646377992066;

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
    msg.setTimeStamp(0.6033409863916426);
    msg.setSource(8743U);
    msg.setSourceEntity(158U);
    msg.setDestination(20853U);
    msg.setDestinationEntity(8U);
    msg.value = 0.9733624831697427;

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
    msg.setTimeStamp(0.3336210513214204);
    msg.setSource(681U);
    msg.setSourceEntity(29U);
    msg.setDestination(56782U);
    msg.setDestinationEntity(215U);
    msg.value = 0.3694725175639745;

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
    msg.setTimeStamp(0.613016096647359);
    msg.setSource(20399U);
    msg.setSourceEntity(210U);
    msg.setDestination(6056U);
    msg.setDestinationEntity(39U);
    msg.value = 0.5781247518596001;

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
    msg.setTimeStamp(0.9374443870795494);
    msg.setSource(1128U);
    msg.setSourceEntity(203U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(93U);
    msg.value = 0.2836223133613426;

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
    msg.setTimeStamp(0.9612290365579663);
    msg.setSource(3634U);
    msg.setSourceEntity(220U);
    msg.setDestination(14783U);
    msg.setDestinationEntity(27U);
    msg.value = 0.01839116357570636;

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
    msg.setTimeStamp(0.5525443572075845);
    msg.setSource(49172U);
    msg.setSourceEntity(157U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(167U);
    msg.value = 0.3031930387841829;

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
    msg.setTimeStamp(0.2778668604915512);
    msg.setSource(6207U);
    msg.setSourceEntity(141U);
    msg.setDestination(2159U);
    msg.setDestinationEntity(43U);
    msg.value = 0.6122810344981239;

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
    msg.setTimeStamp(0.6160907071864171);
    msg.setSource(18804U);
    msg.setSourceEntity(177U);
    msg.setDestination(57974U);
    msg.setDestinationEntity(98U);
    msg.number.assign("HMBLCUFFBXMDZMWSPGUXNETIUQZGIHZBCBVJQLWIKWLXUOTMCAMVMVPTXMODGEOHVZOFOHKQODAXEJPWKTVWHSUWVAYTXSSVYOJWTCAMQFDDLMRWNZLZGKCKYERYYQZNXFXNOJPSDTUDYZEVPPLJMBIRHKANNLGCZCSPIQJQQGRGNIPYJVKUQDDGNQ");
    msg.timeout = 36252U;
    msg.contents.assign("EXFLNUMPEHUKIDGDIUCMFHRQXUCLXCYZUOEKEYSWPDFWERQBITFPSVIJAYGPISMFUCTSKBYKZCXCMLLKZAJCYSQGTBVBVHFTSAZOOLDZOJGBSQORKQKDJLRDUFIFDHWWAUYTQLGJYKPWJRMZEVCMMNWQXMRNRWJZQTXBTDNDAXEPVYICXAKOHNPGIQIUAGWNLBEWPDRHOGURLQGVXTMEXAJYHOI");

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
    msg.setTimeStamp(0.2429098630401647);
    msg.setSource(1804U);
    msg.setSourceEntity(154U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(7U);
    msg.number.assign("GLFHVQVEZTQCPTELHNFEVHQHRAKADCZIMVWBYTALCUGYIDHSYHN");
    msg.timeout = 12408U;
    msg.contents.assign("CWSHITKGWYFZKALAFBYILIWDUKCFHHVXTOCTPVVJGASBNGXBUNAFCLPLUBPLUPVSKATTXCYSEGNEIKSMYITAIDKDNDIQORYBMBYZRREQZEXNJSMFTMZGUVGUPLZPKINZDJCKXRAIDZYOOCB");

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
    msg.setTimeStamp(0.3828847691501034);
    msg.setSource(47214U);
    msg.setSourceEntity(217U);
    msg.setDestination(55354U);
    msg.setDestinationEntity(88U);
    msg.number.assign("UNLHEPCNZXOKSDVDJQIZYOURKHXUMTTFNGGKXLNMAPJKVTEJOFSJMZHYJJJUQWDBWXQQFCCPLCRMCFWDINSPKFIIXYOXKEHSOLVGRSEZYTPVQJAYVWBZARGOQTPMYTOAROFSHPRIDUGCGKLUGIBOBENREEOFUUDDJNMTCBVEYWKQFBWTGLTUFALVIDXZ");
    msg.timeout = 42538U;
    msg.contents.assign("FAJPTQPHWXDYRYMTXQCLQZMFVPSKCJVWYNDLXEVZZBZUUMEWEQZIWOHSOGBRSBBYUPBHNJLJYHPFOVFOCUAVJKLFMYWNOXKOIFOJLIFWELAGCRPMBNHSFJDXZTSSRIIPGFIEGUJSLGDQNOGPEBSMCWDTDKTNHCBCGVAYHJAUD");

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
    msg.setTimeStamp(0.10249973241313315);
    msg.setSource(3149U);
    msg.setSourceEntity(71U);
    msg.setDestination(54802U);
    msg.setDestinationEntity(6U);
    msg.seq = 670905087U;
    msg.destination.assign("DUIFPVMPGUXTUXKKRYMFZONPDWBAAARLAOZUDYPWVDJBKHJMWLVLNTJRROAGSVMHWFMRIQHEHFHCQUCGCHQIBMFXSPNNGEZTBQSTGHCYUVWCGBNZVCMLPEAMRIXOLZCIQSAYJZBKSJEFUQVQOJROAVOZOBNCANZNEJVTRGLNIODXYQFMYRVMDZHTSCKTXTYFBFPEDCDBDXYQGDIKQLLSX");
    msg.timeout = 14049U;
    const char tmp_msg_0[] = {-59, 125, 109, 5, 111, -49, 108, -118, -91, -8, -9, 120, 92, 46, 61, -24, 69, 92, 91, 40, -3, -99, 10, -64, -16, -35, 54, -124, 99, 110, 4, -109, -26, -40, -99, 101, -71, -28, 32, 29, 27, 100, 36, -94, -30, -83, -15, 33, -33, -16, 110, -62, 36, 12, 87, -57, 45, -108, -28, -73, -128, 117, -41, 54, -1, 12, -114, 93, 116, -71, -22, 60, -118, -95, -54, 64, -84, 23, 11, -90, -70, -108, 16, -124, 63, 17, 23, -86, -21, -27, -125, 73, 118, -35, 110, -124, 69, 114, -30, 126, -4, -6, 85, 70, 94, 34, -36, 3, -81, 5, -56, 10, -86, 88, 26, 81, -87, 69, 50, -64, 36, -60, 44, -116, -8, 28, 30, -53, 69, 84, -51, -102, 43, -122, -37, 126, -38, 43, 40, 35, 62, 88, 96, 79, -125, -127, 90, -64, 81, -87, -35, -36, 123, 74, 112, -122, 41, -46, -70, -93, -16, -101, 115, 70, 10, -54, -118, 68, 71, -44, -85, 71, 78, 72, -14, -105, -46, 55, -124, -115, 84, -111, -122, 77, 18, 13, -29, -18, -80, 105, 65, -113, -91, -105, 11, 13, 107, 111, -91, -101, -98, -35, -12, 72, 43, -38, 15, 67, -9, -8, 10, 25, 27, -115, 91, 46, 30, -46, 42, 86, -59, 67, -71, 72, -53, -106, -69, -78, -14, 77, -98, -13, -103, 38, -89, -68, -17, -17, -16, -34, 56, 99, 82, 28, -120, -115, -15, -7, -86, 13};
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
    msg.setTimeStamp(0.9465131520837597);
    msg.setSource(60151U);
    msg.setSourceEntity(242U);
    msg.setDestination(37425U);
    msg.setDestinationEntity(202U);
    msg.seq = 1590902339U;
    msg.destination.assign("SLFYBEAWACUEVRTOAFIY");
    msg.timeout = 60747U;
    const char tmp_msg_0[] = {79, 1, -73, 17, -9, -94, -87, -95, 10, -45, 46, 64, -91, -72, -67, -32, 45, 20, 67, -121, -3, 89, -54, 2, -66, -26, -87, 109, -120, -45, -63, -104, 49, 35, 0, -20, 15, -79, 126, -20, 14, 8, -4, -11, -97, 115, -21};
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
    msg.setTimeStamp(0.0392353355174756);
    msg.setSource(18241U);
    msg.setSourceEntity(17U);
    msg.setDestination(15062U);
    msg.setDestinationEntity(137U);
    msg.seq = 1203672279U;
    msg.destination.assign("IICPBOKSPCBXVEDCHMRTPLQCOQQBBEMBTQGAGDPCQMWOOEEYSVYXEEVNHGJS");
    msg.timeout = 19377U;
    const char tmp_msg_0[] = {-63, -73, 23, -70, -94, -66, -39, -34, -7, 50, 125, -124, -111, -104, -75, -54, -41, -90, 87, 49, -64, 97, 117, -62, -36, 33, -26, 117, 0, -118, 51, -8, 108, -9, 21, -13, 31, 30, -26, -97, -50, 57, 108, 20, -113, -115, -18, 57, -78, -108, -73, -24, 72, 33, -75, 28, -91, -122, -33, 106};
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
    msg.setTimeStamp(0.2942769834626884);
    msg.setSource(46838U);
    msg.setSourceEntity(204U);
    msg.setDestination(36403U);
    msg.setDestinationEntity(175U);
    msg.source.assign("XALCILCFJMDWIDMTBTVSNAEAROOULKCKQUHHVAWRZJQPYZFYRRFLNFNYDXJZWQCSWWBBNZURQLGOJREGUGOLTNSBMEX");
    const char tmp_msg_0[] = {-36, -7, 51, -11, -94, 0, 45, -31, 13, -41, -79, 11, 0, 83, -73, -101, 107, 125, 121, 23, -124, -70, 102, 79, -24, -121, 71, 78, 112, 27, -55, -43, -13, -53};
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
    msg.setTimeStamp(0.21649764563356522);
    msg.setSource(30253U);
    msg.setSourceEntity(191U);
    msg.setDestination(49877U);
    msg.setDestinationEntity(36U);
    msg.source.assign("XIKDVUJPBMVDNFVZSYRDXZTNWRUFXZFNEPRLAHNWGPMNTLIYSTWHKVKLRVWJHIJDOMQGXCYHNTBNZPOCYGLKZFPSJJWXGJOXGMEHMFLQGXUFJIROQLZYF");
    const char tmp_msg_0[] = {-9, 25, -91, -79, 90, 58, 79, -73, -30, 97, -10, 43, -118, 114, 114, 120, 101, 79, 27, -106, -18, 117, -88, 101, -90, 47, -91, 82, -23, -89, -13, 113, -27, -60, 83, -118, -117, -22, 0, 22, 56, 125, -86, -38, 116, -41, 10, 66, 8, -53, 99, -98, -26, -82, -110, -96, -128, -62, -118, 8, -121, -44, -5, -3, -19, 29, 42, 113, 90, 34, 88, 8, 116, -95, -74, -28, 34, 125, 38, -31, -19, -118, 105, 16, -31, -3, -60, 121, -64, 31, -74, -68, -81, 58, -21, 123, 33, -105, 13, 13, 10, 116, -48, 73, -126, 99, 66, 44, -107, -61, 91, -74, -5, 55, -87, -19, -19, 50, 62, 114, 101, 116, -83, -81, 19, 52, -84, 116, 103, 42, -94, -29, 70, -126, -107, 4, 120, 91, -116, 20, -98, 69, 121, 119, -115, 94, 45, -101, 86, 21, -25, 98, -83, 68, 38, -127, 102, -100, -22, 71, -66, -16, 32, -56, -103, 34, -5, 40, 96, -21, -82, -71, 24, -106, 7, -62, -21, 67, 91};
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
    msg.setTimeStamp(0.39771377033393895);
    msg.setSource(18517U);
    msg.setSourceEntity(90U);
    msg.setDestination(28866U);
    msg.setDestinationEntity(25U);
    msg.source.assign("PJLXRXOQHRURPWYBONKBXZGVFVIEHMHYDMBEJASTIEJUAXATVTWWZACASCAYRVPBSCQKYRHMKJEUYPOOGAZCOPODZWBDUMQTPPUGOOFSCPHWKZTJASXDVWEMTCUIKGSRK");
    const char tmp_msg_0[] = {83, 47, 36, 10, 42, -18, -27, 43, -45, -8, 72, -29, 92, 9, 109, -55, 48, -29, -49, 41, 27, -44, -99, -100, 24, -106, 35, 51, 63, 112, 49, 85, -32, 71, 43, -36, -31, -48, -41, 106, 37, -119, 125, 70, 74, 111, 5, 107, -111, -13, 84, 23, 82, -121, -60, -60, -85, -109, -43, -60, 76, -126, 89, -87, -69, 81, -114, 20, 64, 19, 8, -72, -99, 4, 38, -123, -60, -114, 72, 78, 11, 9, -89, -34, -52, 8, -25, 70, -80, -19, 57, -76, 62, 47, 47, 57, 0, -24, 21, 38, 89, 32, -73, 56, -63, 1, 124, 68, -13, -24, 46, -38, 107, -60, -80, 41, -116, -47, -66, 77, 77, 38, 99, 29, -105, 55, -40, 23, -73, -65, 56, 13, 78, -101, -105, -42};
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
    msg.setTimeStamp(0.34305707528041773);
    msg.setSource(53503U);
    msg.setSourceEntity(16U);
    msg.setDestination(30889U);
    msg.setDestinationEntity(124U);
    msg.seq = 3742925914U;
    msg.state = 157U;
    msg.error.assign("SDBQRGCHDFQFVEGUOZFIDPOQLCLNWATGNDFPAKRRYFPLBCSDDRWQERUNIYIBTZQVMAKFFVHUSMJAGTKSGCJVOCVNBPCNERNLTUEBZETVBSYQDMIITAFQZIGKPJVJXLXBEXUJOKJYGMZFEQNNPUXRSZBMSLMVTOYHIHCDWLPRXVWWBYHAAASOCGOPTAYVKQIWYXDLPHKYLUKERXMOGHWBSUKJUWZHTJNOITUXMOFZXIZDAGEM");

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
    msg.setTimeStamp(0.9095255421491906);
    msg.setSource(34418U);
    msg.setSourceEntity(7U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(31U);
    msg.seq = 1537896198U;
    msg.state = 252U;
    msg.error.assign("OCJNWDHHETKMJSCUGYG");

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
    msg.setTimeStamp(0.9026906445160465);
    msg.setSource(1256U);
    msg.setSourceEntity(57U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(167U);
    msg.seq = 1551268450U;
    msg.state = 211U;
    msg.error.assign("AGRARGNHYZPCSVANPBSLICXHMLRAVUOEDXUIYNJZTKFOSQHQSYKCPRCSOZIJHFVRNUDBFPDELGEICWCSUVLCDHPFOTQFFQUFMRTCWHBVGGJFWWKXUKGMDBQPCROFJMX");

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
    msg.setTimeStamp(0.1387424187755485);
    msg.setSource(48757U);
    msg.setSourceEntity(126U);
    msg.setDestination(57283U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("FFWUCFXQVFVYQNGSKRSAEGPYOLSYKA");
    msg.text.assign("LEQGMQUTMHSFJFCPOFJDBQEBORWUUVYCUWQMVWHYPHRACSPSDPFYKTJFYMETLWUZQGFOTUYWQMOMZOWAHKALIKWTIFOYMNVGDNIVYIQQBRIYZERZHZUM");

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
    msg.setTimeStamp(0.021817195191021654);
    msg.setSource(23386U);
    msg.setSourceEntity(72U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(252U);
    msg.origin.assign("YOWPRDRDAJEWFCJLVQSOQYDWSFBVCFYSEELMVRTKWARGEHVHQPXTYTKIRDJRPGCZNUSXJPWFFBZBCQTSPCXMWJUHITNPTNPSFAVUVRHLKOELUQXNTQHVWTEGXWVIQLKVQZKOOOEPKSABMMBSGJGFYAENZUCLAICJPYBCZAOUKXCHZPCBNFMUWSLDNDMHFAUZUOHJRMYKQBGTVNLOLRKINGXRIX");
    msg.text.assign("SAUJBLICXVDRWUTXVJTHYEPATVQNFYSZBTUREVDRRFLSLIFANLMPBEPVOJREKISHFCHQKHXOGIYFCKQPGCYUZGOFGHMXWUCMBBEGBUAAQYQDHDXXGKWKQOUIRLSFFZLPNKBYSIWJXUQUGJZLOWHMXAVTYVTBMCQHSLLDRGZMZBWWB");

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
    msg.setTimeStamp(0.7249594903257829);
    msg.setSource(2120U);
    msg.setSourceEntity(222U);
    msg.setDestination(2554U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("RFYWWXDHJVPKRLRUXPXCQQB");
    msg.text.assign("GKQYUCDBGHXQMTHLONUYFFYCJSFCNZALVTJRUJOEOMRFSUGGBXVKORQTAOTDZFIEWXKRXCNTYPSHIZMDXHNZIBCXQYEEPULBCWAKRVMVWXMCLNNTSKZPSTEMOGEWBVPBPLDAK");

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
    msg.setTimeStamp(0.9377280571190243);
    msg.setSource(8481U);
    msg.setSourceEntity(178U);
    msg.setDestination(7597U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("HFIBDAFEDGHGZUCYXRJEAGMRTJWXVVJOPWTOPCRZBRCQIFPSXAAYYIBNCMUNBVLZJORBLEMSJXNTVPWLSTHHHNARBOGWYWLTKFQKBVGWDKZLRKUNIOAZTLIQFKZCVOMBONCCFUYFELXLBDGSJWJEAWIKKAVUGXXCGWFSSDHMXUMCRT");
    msg.htime = 0.6681575510866137;
    msg.lat = 0.12085686097531312;
    msg.lon = 0.7684476616122697;
    const char tmp_msg_0[] = {24, 5, 108, 14, 96, -87, -117, 79, 22, 13, -126, -121, 66, 86, -48, 113, -54, 100, -119, 14, 34, 81, -57, -128, 96, -103, 108, 121, 44, 10, -117, 62, -46, 90, -110, 18, -12, 89, 74, 5, -68, -106, 23, 63, -33, 35, 120, -58, 0, -84, 25, 32, 0, 59, 94, -51, -30, -72, -8, -36, 86, 38, -63, 65, 13, -59, 80, 80, -26, -10, -12, -8, 56, -85, 10, 36, 96, -85, -116, 99, -12, 4, 50, 61, -12, 100, 122, -39, -70, 35, -78, -69, -51, -39, -93, 70, 94, -124, -54, -98, 49, -36, 124, 29, 1, -102, -27, -61, -117, 70, 95, 4, 78, 61, 93, -4, -73, 69, 124, -51, 28};
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
    msg.setTimeStamp(0.8287848319762788);
    msg.setSource(40143U);
    msg.setSourceEntity(175U);
    msg.setDestination(21693U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("COEDFFRHXQOTSQAXJSYPHOGVILYFUPJQIXCQGWXMIAZCQDWDRNXAHDUZPHTHEOPADMDSMSVBYPERGKDLRJPGKDUAGBFVYKMDNEENBKEBHCQOSLKBJKNHLULJMJJUCTIESMVKHLKFFNDCRJXLFTGTIRINFTWXTOVVLZUQWPAMVF");
    msg.htime = 0.1549582855298095;
    msg.lat = 0.12035689207450717;
    msg.lon = 0.6097090799609731;
    const char tmp_msg_0[] = {-29, -111, -16, -95, -53, 48, 40, 49, 49, -26, -95, -81, -63, -109, 29, 83, -85, 112, 10, -12, 99, 87, 122, -113, 42, -110, 17, -43, -46, -85, 117, 18, 113, 56};
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
    msg.setTimeStamp(0.5735472455926601);
    msg.setSource(13100U);
    msg.setSourceEntity(95U);
    msg.setDestination(309U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("PNKBEJHSWOQPTFGWXUSNVZPDLJAGUJWVNHILLOFKHWEFAVZERRZSICNWTVLFMPCKGHEODAYSWSOXTTOIHEMZWMOFPMBYKFPVHQEOUJCEKDIKDJNHRP");
    msg.htime = 0.010965912500136121;
    msg.lat = 0.49415768395791615;
    msg.lon = 0.2570983865222155;
    const char tmp_msg_0[] = {35, 21, -112, -86, -33, -66, 55, 29, -116, -24, 100, 102, -52, -94, 13, 99, -122, -56, -23, 12, -126, -60, -77, -104, 16, -69, 60, -55, -3, -38, -94, -37, -94, -34, -97, 3, -122, 14, 76, 94, -108, -13, -33, -84, 48, -105, 18, -53, 120, -16, -126, -29, -122, -52, 24, 24, 119, -49, -112, -88, 97, 17, -34, 34, 14, -101, 118, -108, 94, 101, 16, 101, -64, -43, 83, 55, -16, 4, -121, 70, 111, 116, 124, 114, -50, -51, -14, -64, -20, 86, -7, 115, -7, -48, -4, 44, 16, 48, 123, 114, -73, -71, -7, 35, -6, 36, -124, -82, 102, 29, -122, 110, 104, -92, 53, -9, -45, 24, -101, 83, 69, -121, 39, -69, 65, -88, -127, -34, -73, 85, 41, 62, -28, 102, 63};
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
    msg.setTimeStamp(0.9927048382399817);
    msg.setSource(8408U);
    msg.setSourceEntity(93U);
    msg.setDestination(19742U);
    msg.setDestinationEntity(11U);
    msg.req_id = 30669U;
    msg.ttl = 59471U;
    msg.destination.assign("NZTXEMSJBTDGONLGACUXEFYNMTYBTVXZY");
    const char tmp_msg_0[] = {-49, 95, 71, 114, 119, -113, -47, -95, -83, 108, -108, 15, 124, 112, -104, 74, -87, 39, -36, 44, -98, 80, -29, -65, -61, 2, 53, 117, 56, -26, -121, 107, -70, 70, -40, -61, 2, 36, -38, 35, -19, 65, 81, -114, 115, 55, -61, 79, -43, -122, -25, 0, 57, -94, 120, 82, -104, 75, 45, -101, 90, -72, 70, 59, -104, -100, -69, -68, -90, 78, -1, 95};
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
    msg.setTimeStamp(0.38466912420395216);
    msg.setSource(31590U);
    msg.setSourceEntity(21U);
    msg.setDestination(59647U);
    msg.setDestinationEntity(146U);
    msg.req_id = 59316U;
    msg.ttl = 19928U;
    msg.destination.assign("FGKKQSYFYVYNBEVNUDDTYLDDCHLLOYVTKHREMBXWQRULVDUWRAAPYCEUNACVSTIFFNGHBRKGOPEOAPCIPJVRWFSXRRIDZHOXMFXGDKAQKNISNCGURYNLVWNZNFMAXFBOQXWIDBSZTYIPMSLOTAMWGPITVYCZHZLQKXVSMHBKOAUJOQE");
    const char tmp_msg_0[] = {31, -11, 90, -80, -94, -82, 119, 74, 17, 67, -63, 102, -89, -61, 105, 58, 37, 108, 90, -13, 23, 79, 12, -91, -83, -99, 76, -96, -97, 19, 107, 93, -39, 53, -32, -127, 104, -55, -32, -85, -80, 99, -15, 82, -8, 81, 114, -98, -117, -45, 45, 51, 26, 74, -92, -73, 94, 18, 102, 59, 23, 70, 79, 60, 122, 10, 25, 68, 56, -7, 1, -108, 72, 89, 123, 53, 91, 13, -56, -56, 83, 110, 5, 14, 38, -47, -66, -14, -126, -96, -81, 76, -19, -116, 75, 86, 39, 17, 85, -31, 79, 6, 46, -40, 122, -33, -100, -58, 11, 21, 32, -56, -71, 108, -26, 58, 14, -7, -74, -66, -128, -29, 46, 6, -23, -127, 70, 63, 91, 29, -39, -20, -39, 106, 107, 5, 18, -14, -58, 121, 98, -71, -29, 2, -83, -62, 59, -58, 54, -126, 120, -39, -69, -4, -94, -100, -90, 97, 11, 102, -49, 2, 117, 110};
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
    msg.setTimeStamp(0.21864198262852952);
    msg.setSource(45237U);
    msg.setSourceEntity(247U);
    msg.setDestination(60586U);
    msg.setDestinationEntity(125U);
    msg.req_id = 26873U;
    msg.ttl = 5401U;
    msg.destination.assign("DJTBQUEEVDEUIZEOFVUNMVYGPMGHJRWSFYRYXMGOXJVYATTNYHAFMUNKSEIGACTYPDKZFIMUMQOXTDLQWOBHCPVEHSGXGPGRPVHKVJGFNVPKMMTSGRHKCLMITLPWBDJEWRNANPWLTIYOSUCQNSVKOJAFFZZODTTWCCXXBKIARZZBBEHVSJLQUQL");
    const char tmp_msg_0[] = {57, -16, 16, 34, -39, -90, 91, -9, -28, 104, -10, 44, -87, 63, 38, -61, 66, -60, 107, -80, 53, 69, 48, -82, 24, -52, 1, -59, -64, -16, 31, -2, -50, 9, 13, 68, -108, -121, -74, 80, 86, -10, 113, 9, 0, 40, 98, 83, 36, -17, 5, -35, 2, -49, -95, 94, -121, 99, -124, 108, 12, -90, 8, -83, 17, 118, -88, -66, 64, 56, 37, 70, 27, -14, -15, 112, 58, 59, -127, -8, 16, -50, -65, -91, -84, 76, -124, 111, -104, 55, 125, -105, -122, 50, 124, 39, 65, -12, 113, 85, -26, 10, -69, 75, 125, -26, 32, 71, -43, 6, 86, 27, 85, 64, 71, -116, -17, -67, 78, -87, -101, -24, 64, 4, 5, 111, 27, -1, -22, 38, -128, 65, 125, 14, -50, -121, -82, 115, -10, -48, -19, -43, -25, 77, 59, 61, -61, -107, -94, 124, -49, -54, 29};
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
    msg.setTimeStamp(0.1702544617530285);
    msg.setSource(8976U);
    msg.setSourceEntity(113U);
    msg.setDestination(59371U);
    msg.setDestinationEntity(142U);
    msg.req_id = 33306U;
    msg.status = 40U;
    msg.text.assign("ZMLGEQOLGKFGUGRCYTAQFMKXYHMZUYQVUHXHZRXJHSVAMADVDZISAEBWWTPQBLTNBHD");

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
    msg.setTimeStamp(0.16173373791450296);
    msg.setSource(20637U);
    msg.setSourceEntity(6U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(246U);
    msg.req_id = 223U;
    msg.status = 95U;
    msg.text.assign("EPVGBRTREMYMFGCWYYSOVZRAPPWANJRTWEQCKEYRXXPFAKDFGEDCLZLWUXTCAJ");

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
    msg.setTimeStamp(0.8335378997842249);
    msg.setSource(2788U);
    msg.setSourceEntity(99U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(167U);
    msg.req_id = 28116U;
    msg.status = 37U;
    msg.text.assign("IDKZBEFRMFPHDENQBNFOOCPXGMIPWGVRAQZMXWEDUXUYCEWWLZNKVGYVCISEKPKHVNJIKHAHQYDHSXBOLSLYKMTQZIKRRNPUWEYJJALGFDXGYWZEXZDPTTSXQNPNUKQJQSITHRPGRUZBUOCWDCTAVSJSZCYVFGYNRRRAOOFEWDFOBYAOHIFKJWQZHEULZCYLAJOEDAQLVNCMBSTUUXULISMBNJTPKGG");

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
    msg.setTimeStamp(0.3597493685622425);
    msg.setSource(57462U);
    msg.setSourceEntity(19U);
    msg.setDestination(13992U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("HDFBIUCETGDWHHSJTMXWMHPBLUVRCCARKHFAQIHZXVAAENTLKDNGOTKZXWNSHTV");
    msg.links = 3870734322U;

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
    msg.setTimeStamp(0.021166754967388512);
    msg.setSource(15414U);
    msg.setSourceEntity(32U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("QKBJHRCDDTBWHQYMBFXXOYFPRECLYIJKJEEOOJAKZHQJZYXTRMTLGECSALIDUAYDXYQKGCLBIIYAWYLQSTQCIWVNORGZULBFQIFXPWLOGUAXTTKSVXSANLREUMOYJTGBBUSVMZPVKJNIMGNAVXBFPSRJGFOKSRIBJHUAJGDUHACZWKZPPKPXNLHTQEXDLMOFHSISEGNRAMSVDZHHVODBKZWYUOEZFNDWQWNUNCGHRTPECDWCCMUVFZ");
    msg.links = 3122393758U;

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
    msg.setTimeStamp(0.3156883447255546);
    msg.setSource(25416U);
    msg.setSourceEntity(9U);
    msg.setDestination(9023U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("YIJNKYHPFTTLGTZIIYJPLKSUDERDEALWJNGSLZOGUPAYRRHDSIJUSWQZYSRDMYBPOGGBFLCBEVXDQXFLQFWSFTEPTVCHDNV");
    msg.links = 2941140417U;

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
    msg.setTimeStamp(0.18618779812619846);
    msg.setSource(41659U);
    msg.setSourceEntity(0U);
    msg.setDestination(9674U);
    msg.setDestinationEntity(229U);
    msg.groupname.assign("FIOCOOGTTXPLRHKRWZUEHITZHPOFUZIEDWKILBLYVECJJKRIIBSGJXVLHWPOXNVDCI");
    msg.action = 77U;
    msg.grouplist.assign("NDDDYKRZLTDTFORKAVHLHKJXHGURYVEPLUVIBFLRMFRRWWCLJGSOJNMJHHZSECYGXSZPIUOJYIITPEQPWWTSWUNBVUSVHCNADCDQZCGATDVHGXQMGNLLTSJOJG");

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
    msg.setTimeStamp(0.44546227044846254);
    msg.setSource(49100U);
    msg.setSourceEntity(6U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(108U);
    msg.groupname.assign("OXPFBKPTNVWGYSDCEPRTFABYCOTXTIMCNDQRLUGUORYAQMIPJEFSANVRXNBKEMYFQYJHHCRDFVZZQTHDZNXLZUDWPSKLKBGBXKFRWZKRIYYEAYIEGKUJRXOTIOGOLJWSWOCHNLUGPAKPCTQBLVZDUXAU");
    msg.action = 142U;
    msg.grouplist.assign("LCRCPGRIGJUDTRLJHXUFTCVESTKIBIYRBTRHATFXFGXEEUOEUGWKMADEDNIZVWDSLXBHKANYMXHFDXVYEPFFMQOTWLQIZAHYDOCXMLHUWWHDFIHBJSWBQLIBYNSLJSVPLZNKMGSFMAXVRPOCKJRAPEVCDSJQBFWZ");

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
    msg.setTimeStamp(0.8328846127559271);
    msg.setSource(37485U);
    msg.setSourceEntity(131U);
    msg.setDestination(24450U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("UQWTEHABOYHLBICZHTQNFDLECEKGKYHAPMRRZVJZJCHNIRXNWAYFYUHFNAQDBOCQFHWBKAVAXVGEKOVUGRBXOSYPKRAGEPGMFYKXXOLNQDVIULSPZVBJJQEYURMFUNRSJTURTIJWDNSXIESVMXROAQDAZWKGTBQDUFWGSMBVNTXTJFMQYKVXQOPPMCIFHGLUICTG");
    msg.action = 122U;
    msg.grouplist.assign("WVCSJLBEDMKPLLSXZIOQTPZDERGOUICTMWPKAXUBRO");

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
    msg.setTimeStamp(0.10391417746346243);
    msg.setSource(16588U);
    msg.setSourceEntity(148U);
    msg.setDestination(5977U);
    msg.setDestinationEntity(161U);
    msg.value = 0.15168825458506618;
    msg.sys_src = 37693U;

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
    msg.setTimeStamp(0.4186688245918633);
    msg.setSource(18343U);
    msg.setSourceEntity(22U);
    msg.setDestination(1645U);
    msg.setDestinationEntity(216U);
    msg.value = 0.08465379367577686;
    msg.sys_src = 2572U;

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
    msg.setTimeStamp(0.312432764740039);
    msg.setSource(10595U);
    msg.setSourceEntity(224U);
    msg.setDestination(25836U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9433316922940477;
    msg.sys_src = 15451U;

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
    msg.setTimeStamp(0.268131021583524);
    msg.setSource(26888U);
    msg.setSourceEntity(50U);
    msg.setDestination(21770U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9908198778385737;
    msg.units = 15U;

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
    msg.setTimeStamp(0.005851848651896696);
    msg.setSource(63629U);
    msg.setSourceEntity(92U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6932063994169715;
    msg.units = 3U;

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
    msg.setTimeStamp(0.8045532325635759);
    msg.setSource(53105U);
    msg.setSourceEntity(104U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(133U);
    msg.value = 0.02204686265611444;
    msg.units = 65U;

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.8970601541465267);
    msg.setSource(9072U);
    msg.setSourceEntity(153U);
    msg.setDestination(44314U);
    msg.setDestinationEntity(16U);
    msg.id = 19U;
    msg.range = 0.26121285216121426;

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
    msg.setTimeStamp(0.4023631918836864);
    msg.setSource(53806U);
    msg.setSourceEntity(47U);
    msg.setDestination(13824U);
    msg.setDestinationEntity(54U);
    msg.id = 238U;
    msg.range = 0.3046309760379844;

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
    msg.setTimeStamp(0.5815324897336548);
    msg.setSource(26850U);
    msg.setSourceEntity(29U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(134U);
    msg.id = 55U;
    msg.range = 0.9216420279078189;

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
    msg.setTimeStamp(0.4736194396301495);
    msg.setSource(52891U);
    msg.setSourceEntity(172U);
    msg.setDestination(41172U);
    msg.setDestinationEntity(251U);
    msg.beacon.assign("RIVNUJPOUUERXMHZJSIPUZCDVMIKROURXTKBFBVMHUBLUXKAYMFCTNQPYIVPDBTJERSDRHGCFTVSBIFGOSMAMEDJGXEQROJALLNSCWISATNSJVOEFKKWQRTUBECNBGNVQGFQKCQDXZHEXONZUIV");
    msg.lat = 0.523547095618481;
    msg.lon = 0.48369253692442515;
    msg.depth = 0.2780201974772971;
    msg.query_channel = 105U;
    msg.reply_channel = 118U;
    msg.transponder_delay = 74U;

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
    msg.setTimeStamp(0.029178221246966562);
    msg.setSource(13184U);
    msg.setSourceEntity(150U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("BIDCSLJECQTWOOYMFSHSZAUXFTFULCGLEIEYJJVKWIPDOZSEPPNNPPNJNVYXRHTZMHJPNKDCLRWBOZYMSGDQLNTGZFYAOWIDGYGLOMPVVQDWSMISTJECOZIKUHFVSGRUMFMRAEBEKDHCFKDRHIENRQIQHVWQABJZTWUOFREPXHLOKDAATULAHWPKVROLXNSQCBTJHXRBNYBYVKYTCFWAVJMGAQFIUXXNPUXSCX");
    msg.lat = 0.36590658190024183;
    msg.lon = 0.7700045474334456;
    msg.depth = 0.5149330222059956;
    msg.query_channel = 62U;
    msg.reply_channel = 247U;
    msg.transponder_delay = 227U;

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
    msg.setTimeStamp(0.35937717952886816);
    msg.setSource(19951U);
    msg.setSourceEntity(224U);
    msg.setDestination(35236U);
    msg.setDestinationEntity(12U);
    msg.beacon.assign("LENDQCAWWQMZLCAFNBIWUJVMLBLBJBYSDGSNXGGEZHCRWZTTCVCPDXFGJLLXVQVVBEEHMTRFTDPFDUQEKYUFOJBQKOJXHKFPWESVCLIAKQRTXSZWBNNRUTZDFNNSRXYAGGORDCDYONGOSPTSXZFLUKMJOZMJKUPDISERHSYXNJZMZWIVJRATUOAYCYAYPAHVQLPQTHBWNHIFXGOEVBCSQPMIPWIYGTFMDBVHKAUECPUQMEJOHIKHYWLIMR");
    msg.lat = 0.6152552626488765;
    msg.lon = 0.8442353962676086;
    msg.depth = 0.6720273972576508;
    msg.query_channel = 206U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 144U;

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
    msg.setTimeStamp(0.7603836579359691);
    msg.setSource(63758U);
    msg.setSourceEntity(248U);
    msg.setDestination(59652U);
    msg.setDestinationEntity(190U);
    msg.op = 31U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QUCFHOLCVNOJBLFLEPDCYWCMMCJAAVQADHICGENUSEGJVXANYDRDWKFXTLMQUXZZNSTJOENTQYASGKRENKOSGZPCANCNOOAQIYITVLMXYGJPXIFWUUKOMBVRBXFFTRWNGQMRESBDBPWUELGIDFTHVSHKDVWZGNZELHOFLQRDFJDSXAHYIQTPQUPBYBKHATMKGBHMKJYIUVWESBGTWZRPZZY");
    tmp_msg_0.lat = 0.27620576337802805;
    tmp_msg_0.lon = 0.010614961612247065;
    tmp_msg_0.depth = 0.501603023850403;
    tmp_msg_0.query_channel = 94U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 59U;
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
    msg.setTimeStamp(0.5369095255559514);
    msg.setSource(42175U);
    msg.setSourceEntity(247U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(29U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.29499260187191745);
    msg.setSource(48987U);
    msg.setSourceEntity(189U);
    msg.setDestination(54325U);
    msg.setDestinationEntity(106U);
    msg.op = 216U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UFIPNFIEXHRG");
    tmp_msg_0.lat = 0.1977422939586433;
    tmp_msg_0.lon = 0.5452589235959794;
    tmp_msg_0.depth = 0.5985601033291301;
    tmp_msg_0.query_channel = 19U;
    tmp_msg_0.reply_channel = 198U;
    tmp_msg_0.transponder_delay = 50U;
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
    msg.setTimeStamp(0.19816904821953552);
    msg.setSource(11742U);
    msg.setSourceEntity(91U);
    msg.setDestination(15243U);
    msg.setDestinationEntity(78U);
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("LRVJEUBDEJTSTWSPBFTKVUAWNBZJMDBQPZEHOVOGTNQNDOEVOSLVHAEKOYCJKU");
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
    msg.setTimeStamp(0.3534671481990075);
    msg.setSource(21120U);
    msg.setSourceEntity(85U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(96U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.23956100660708213;
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
    msg.setTimeStamp(0.6751283124882946);
    msg.setSource(36402U);
    msg.setSourceEntity(151U);
    msg.setDestination(4341U);
    msg.setDestinationEntity(8U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.011553718705904048;
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
    msg.setTimeStamp(0.7484962627542733);
    msg.setSource(27795U);
    msg.setSourceEntity(197U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(12U);
    msg.op = 210U;
    msg.system.assign("QVDSLPKSSXHBQGZTTMANRTFYBVJMATVIREYYQPRLHXBEUNKKEFYMVMWAKXGJEVPWACGZRCACBXFFOD");
    msg.range = 0.9024967981581521;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.1475161626527688;
    tmp_msg_0.y = 0.060386789687299824;
    tmp_msg_0.z = 0.5375318044692451;
    tmp_msg_0.k = 0.629767454603136;
    tmp_msg_0.m = 0.9211282474964699;
    tmp_msg_0.n = 0.798074735656699;
    tmp_msg_0.flags = 124U;
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
    msg.setTimeStamp(0.1838471245104758);
    msg.setSource(35399U);
    msg.setSourceEntity(163U);
    msg.setDestination(45649U);
    msg.setDestinationEntity(34U);
    msg.op = 169U;
    msg.system.assign("RTEJUKKMABXKSYJDLKRQUYJXXZQPHDFKTPDVYJRHWMFHUZFITXSBJZK");
    msg.range = 0.9105010189278663;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 222U;
    tmp_msg_0.error.assign("BSJDUZTDYMQSQTNBFCULHETRELKAJ");
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
    msg.setTimeStamp(0.6934929274554135);
    msg.setSource(8853U);
    msg.setSourceEntity(235U);
    msg.setDestination(49086U);
    msg.setDestinationEntity(195U);
    msg.op = 60U;
    msg.system.assign("SHAEFXWBASKFUCFQLTPKVUHETVNNWBJNRBNFUHZMDLRAIUUHBIKPMRCXDEZSXYSTYDIHFTMJJKWHKFRNJUFMGMKQACQLOEBNXCODTDCZLSVPRCWOKHLSUGRVKZMOIXOPEDVPNBYUCQMEFGHODPLJNJQWIZGLHMVCBRVDJFORYYMEKAGJOXOASWXEATGXTSBKVWZFPGIQWLABITQQZLXZDIUNSRNWVEYPGRTLYMCWVXJQPGYZSTIGUAQA");
    msg.range = 0.0439287942474097;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 20765U;
    tmp_msg_0.flags = 34U;
    tmp_msg_0.lat = 0.3108934610095918;
    tmp_msg_0.lon = 0.5723437779757058;
    tmp_msg_0.start_z = 0.7567508589692128;
    tmp_msg_0.start_z_units = 247U;
    tmp_msg_0.end_z = 0.039750694287968735;
    tmp_msg_0.end_z_units = 37U;
    tmp_msg_0.radius = 0.42233501806624696;
    tmp_msg_0.speed = 0.5200394790585691;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.custom.assign("AYKSKKVPJCHIDSTGVOXQRPXFUBDLOIGHECWEGEXTFIMASRLANEFJNVHIHFHYMJQTZKDWUYVKEECECLMWFULLRFYQUJLRTVSGOMTANHFPAYGJQKKVNTJYDKPZLDDBXUQNBXOBWIDMMXOEAMNLZASVTMNBOOBZFHYZJWIUHRBVNGIQSCXPQDKIYWTQGUDIGBHIJVCUUWNCYPFUXLQJOXWSKAOZ");
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
    msg.setTimeStamp(0.697804716481192);
    msg.setSource(23111U);
    msg.setSourceEntity(72U);
    msg.setDestination(53922U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.7530490391665321);
    msg.setSource(17887U);
    msg.setSourceEntity(76U);
    msg.setDestination(43646U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.4916082879781193);
    msg.setSource(11315U);
    msg.setSourceEntity(152U);
    msg.setDestination(39186U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.32712127075774766);
    msg.setSource(52654U);
    msg.setSourceEntity(173U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(170U);
    msg.list.assign("ASLLCPWWHMYBHEGLXMAZMIQOHOQUYAZPVJCRGYTWHWGKJQTFRXBPUNOLFCRNECEGBTYMKPLXTGPMAOWKKOJJMRAZZCMUDFPVSKWLBIDHWUSIESPPJQAIFCSUYIEPTDBFUOHBNDAIOQTXUSTUQFVRZFKXECHVZYYJVIBQNKHVXCFFNMDXZBDASHNMLRBGADNGCTUGEDOIH");

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
    msg.setTimeStamp(0.06585390454317397);
    msg.setSource(12308U);
    msg.setSourceEntity(253U);
    msg.setDestination(54742U);
    msg.setDestinationEntity(86U);
    msg.list.assign("TQJZTKDSMRSKJIVFHGRECZQWXMTQMTFNNINQGRUCDERLXUJCQJOJBMYPLLECKMFNQAFPTZVWQBADOSULVGDUCILWDYVJGWALTUHCIWSZJMRHRZGKINQZOYAQFPPHTZKWZSAYBJLFPASMXBCEXDKTRKVOU");

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
    msg.setTimeStamp(0.08373920885550756);
    msg.setSource(47056U);
    msg.setSourceEntity(35U);
    msg.setDestination(2397U);
    msg.setDestinationEntity(206U);
    msg.list.assign("IEHWKORGUORKQVNPXSGZVUFVOQJDELHYLYEPTCXMDHOIMKBPEZKKBTZCNJEPCCVZLNSZMQWWGYWMUEBCUYFSQFPKNDLCXTEZXJFRIQTJSUBOVYSXOFRNTSLWCAXZJIPQUWNOTQUJBMAXIGBEWISDKHDQOMIXNMKGYHQAVSAVICXIUKZJHJDBCXZCNFDOWVUHATYGADIEGSGFDTLETWMARFPOYALHRTPJPFUBMQF");

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
    msg.setTimeStamp(0.5605442714334558);
    msg.setSource(11862U);
    msg.setSourceEntity(188U);
    msg.setDestination(35015U);
    msg.setDestinationEntity(91U);
    msg.value = 9633;

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
    msg.setTimeStamp(0.789052146417371);
    msg.setSource(8685U);
    msg.setSourceEntity(164U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(164U);
    msg.value = -8689;

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
    msg.setTimeStamp(0.3518272933451366);
    msg.setSource(34803U);
    msg.setSourceEntity(42U);
    msg.setDestination(48613U);
    msg.setDestinationEntity(172U);
    msg.value = -7787;

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
    msg.setTimeStamp(0.3384386614462548);
    msg.setSource(43477U);
    msg.setSourceEntity(32U);
    msg.setDestination(29613U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6519775753367297;

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
    msg.setTimeStamp(0.7980462300283051);
    msg.setSource(64019U);
    msg.setSourceEntity(193U);
    msg.setDestination(60167U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7828307563471909;

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
    msg.setTimeStamp(0.7739045597043459);
    msg.setSource(6500U);
    msg.setSourceEntity(45U);
    msg.setDestination(24795U);
    msg.setDestinationEntity(12U);
    msg.value = 0.23688426673217544;

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
    msg.setTimeStamp(0.9874413876955231);
    msg.setSource(4341U);
    msg.setSourceEntity(149U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6936712935659424;

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
    msg.setTimeStamp(0.9440383725378066);
    msg.setSource(31028U);
    msg.setSourceEntity(66U);
    msg.setDestination(15243U);
    msg.setDestinationEntity(5U);
    msg.value = 0.46492109527135983;

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
    msg.setTimeStamp(0.5266073108591751);
    msg.setSource(4242U);
    msg.setSourceEntity(20U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(14U);
    msg.value = 0.08066181789576932;

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
    msg.setTimeStamp(0.2870836763409088);
    msg.setSource(36890U);
    msg.setSourceEntity(19U);
    msg.setDestination(39218U);
    msg.setDestinationEntity(36U);
    msg.validity = 6828U;
    msg.type = 17U;
    msg.utc_year = 10101U;
    msg.utc_month = 64U;
    msg.utc_day = 37U;
    msg.utc_time = 0.5344140359028382;
    msg.lat = 0.9238489880328686;
    msg.lon = 0.4325023587400063;
    msg.height = 0.680464915240628;
    msg.satellites = 94U;
    msg.cog = 0.9568436304728642;
    msg.sog = 0.27681686361868296;
    msg.hdop = 0.7712806370239602;
    msg.vdop = 0.4620034976403443;
    msg.hacc = 0.4093592993831864;
    msg.vacc = 0.974875416212054;

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
    msg.setTimeStamp(0.44486210004611804);
    msg.setSource(55391U);
    msg.setSourceEntity(70U);
    msg.setDestination(45912U);
    msg.setDestinationEntity(10U);
    msg.validity = 3122U;
    msg.type = 12U;
    msg.utc_year = 30728U;
    msg.utc_month = 217U;
    msg.utc_day = 234U;
    msg.utc_time = 0.5062295795076563;
    msg.lat = 0.08634108504562787;
    msg.lon = 0.8294282152668013;
    msg.height = 0.8188080356818862;
    msg.satellites = 130U;
    msg.cog = 0.3336448859810628;
    msg.sog = 0.24459358763247652;
    msg.hdop = 0.23239822513529396;
    msg.vdop = 0.22483787935855115;
    msg.hacc = 0.7622696810239872;
    msg.vacc = 0.9268618553664011;

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
    msg.setTimeStamp(0.3069196057277095);
    msg.setSource(23440U);
    msg.setSourceEntity(206U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(198U);
    msg.validity = 28719U;
    msg.type = 188U;
    msg.utc_year = 27995U;
    msg.utc_month = 106U;
    msg.utc_day = 227U;
    msg.utc_time = 0.8056443850695376;
    msg.lat = 0.6589829655292303;
    msg.lon = 0.20159098342889847;
    msg.height = 0.2838718116257197;
    msg.satellites = 111U;
    msg.cog = 0.10487008302985501;
    msg.sog = 0.09462032969654044;
    msg.hdop = 0.9640651912381487;
    msg.vdop = 0.07245305057937013;
    msg.hacc = 0.7736221655813666;
    msg.vacc = 0.16553661495542304;

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
    msg.setTimeStamp(0.5801221742655197);
    msg.setSource(28926U);
    msg.setSourceEntity(237U);
    msg.setDestination(1160U);
    msg.setDestinationEntity(87U);
    msg.time = 0.6218113854419829;
    msg.phi = 0.8315880583920601;
    msg.theta = 0.9517145809473112;
    msg.psi = 0.030013809735959907;
    msg.psi_magnetic = 0.5436423369064015;

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
    msg.setTimeStamp(0.9184782501900554);
    msg.setSource(30387U);
    msg.setSourceEntity(187U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(203U);
    msg.time = 0.9748564084128957;
    msg.phi = 0.9743620879221802;
    msg.theta = 0.7023526994486033;
    msg.psi = 0.7670574224901908;
    msg.psi_magnetic = 0.43106712219820775;

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
    msg.setTimeStamp(0.59666944612283);
    msg.setSource(26450U);
    msg.setSourceEntity(235U);
    msg.setDestination(30241U);
    msg.setDestinationEntity(35U);
    msg.time = 0.28399724471704657;
    msg.phi = 0.6989412998907288;
    msg.theta = 0.12103752454738748;
    msg.psi = 0.25560833512082703;
    msg.psi_magnetic = 0.5143579588166609;

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
    msg.setTimeStamp(0.0877217745098049);
    msg.setSource(3613U);
    msg.setSourceEntity(45U);
    msg.setDestination(7672U);
    msg.setDestinationEntity(69U);
    msg.time = 0.7426461012636352;
    msg.x = 0.5747056262168359;
    msg.y = 0.27772923435084895;
    msg.z = 0.6033137490123116;
    msg.timestep = 0.10471551911675603;

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
    msg.setTimeStamp(0.47801783422509914);
    msg.setSource(61416U);
    msg.setSourceEntity(187U);
    msg.setDestination(33314U);
    msg.setDestinationEntity(196U);
    msg.time = 0.25408153974956194;
    msg.x = 0.43998730096005145;
    msg.y = 0.643002263784706;
    msg.z = 0.02063275939863185;
    msg.timestep = 0.7094949461855254;

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
    msg.setTimeStamp(0.28807661024516873);
    msg.setSource(5063U);
    msg.setSourceEntity(183U);
    msg.setDestination(43064U);
    msg.setDestinationEntity(226U);
    msg.time = 0.7977410146188433;
    msg.x = 0.685329694187898;
    msg.y = 0.20346594342893232;
    msg.z = 0.10912696917796305;
    msg.timestep = 0.516333037172546;

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
    msg.setTimeStamp(0.767856836666795);
    msg.setSource(55850U);
    msg.setSourceEntity(20U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(92U);
    msg.time = 0.6100503071890623;
    msg.x = 0.6365655254677149;
    msg.y = 0.6364191537110911;
    msg.z = 0.006944459688732918;

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
    msg.setTimeStamp(0.4352251830065301);
    msg.setSource(33759U);
    msg.setSourceEntity(147U);
    msg.setDestination(25624U);
    msg.setDestinationEntity(69U);
    msg.time = 0.6594880385578323;
    msg.x = 0.019823835879020035;
    msg.y = 0.4723897140869543;
    msg.z = 0.048124085442207365;

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
    msg.setTimeStamp(0.10011720979650263);
    msg.setSource(27987U);
    msg.setSourceEntity(193U);
    msg.setDestination(11781U);
    msg.setDestinationEntity(189U);
    msg.time = 0.8318531365732521;
    msg.x = 0.1791133221459108;
    msg.y = 0.04825106952923086;
    msg.z = 0.015829365598078016;

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
    msg.setTimeStamp(0.6011289989628595);
    msg.setSource(563U);
    msg.setSourceEntity(231U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(216U);
    msg.time = 0.1313047197657301;
    msg.x = 0.6371227858323489;
    msg.y = 0.3550918399702968;
    msg.z = 0.6846347002458478;

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
    msg.setTimeStamp(0.7945875875742355);
    msg.setSource(51287U);
    msg.setSourceEntity(159U);
    msg.setDestination(13600U);
    msg.setDestinationEntity(48U);
    msg.time = 0.7563079357962139;
    msg.x = 0.6760942176045486;
    msg.y = 0.09173215560305881;
    msg.z = 0.9439526106181901;

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
    msg.setTimeStamp(0.18858854281381443);
    msg.setSource(49896U);
    msg.setSourceEntity(195U);
    msg.setDestination(6562U);
    msg.setDestinationEntity(87U);
    msg.time = 0.44803332634794957;
    msg.x = 0.08307662832952034;
    msg.y = 0.7872899282840068;
    msg.z = 0.032163690569424475;

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
    msg.setTimeStamp(0.11445897263582994);
    msg.setSource(30029U);
    msg.setSourceEntity(4U);
    msg.setDestination(26981U);
    msg.setDestinationEntity(123U);
    msg.time = 0.0018349597673152918;
    msg.x = 0.23545336884786572;
    msg.y = 0.32335228892924384;
    msg.z = 0.3773557044215491;

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
    msg.setTimeStamp(0.7020973256732096);
    msg.setSource(31399U);
    msg.setSourceEntity(189U);
    msg.setDestination(38530U);
    msg.setDestinationEntity(226U);
    msg.time = 0.6020569817849667;
    msg.x = 0.7500240934503088;
    msg.y = 0.5004869503932893;
    msg.z = 0.739093997817183;

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
    msg.setTimeStamp(0.9666626968837226);
    msg.setSource(32582U);
    msg.setSourceEntity(174U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(166U);
    msg.time = 0.816501241485363;
    msg.x = 0.14535858526691214;
    msg.y = 0.023335067212813865;
    msg.z = 0.7549000731919321;

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
    msg.setTimeStamp(0.7554456591381199);
    msg.setSource(28352U);
    msg.setSourceEntity(11U);
    msg.setDestination(36885U);
    msg.setDestinationEntity(195U);
    msg.validity = 140U;
    msg.x = 0.2396746367851209;
    msg.y = 0.6421215312516751;
    msg.z = 0.5223318734874359;

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
    msg.setTimeStamp(0.4490541972718195);
    msg.setSource(35854U);
    msg.setSourceEntity(84U);
    msg.setDestination(46731U);
    msg.setDestinationEntity(173U);
    msg.validity = 21U;
    msg.x = 0.2861559803214304;
    msg.y = 0.3269932704745434;
    msg.z = 0.3533000814575794;

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
    msg.setTimeStamp(0.9709285577538972);
    msg.setSource(30849U);
    msg.setSourceEntity(1U);
    msg.setDestination(27950U);
    msg.setDestinationEntity(187U);
    msg.validity = 139U;
    msg.x = 0.3740896838505463;
    msg.y = 0.35970785606598255;
    msg.z = 0.4269717715077326;

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
    msg.setTimeStamp(0.6278928702663843);
    msg.setSource(58096U);
    msg.setSourceEntity(29U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(89U);
    msg.validity = 251U;
    msg.x = 0.07116271388844553;
    msg.y = 0.9142593890178596;
    msg.z = 0.7035921936768991;

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
    msg.setTimeStamp(0.19078148212210944);
    msg.setSource(3342U);
    msg.setSourceEntity(156U);
    msg.setDestination(6231U);
    msg.setDestinationEntity(172U);
    msg.validity = 18U;
    msg.x = 0.9064802342362196;
    msg.y = 0.5708677355723327;
    msg.z = 0.013574918740099973;

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
    msg.setTimeStamp(0.8660407776706025);
    msg.setSource(55511U);
    msg.setSourceEntity(184U);
    msg.setDestination(19706U);
    msg.setDestinationEntity(158U);
    msg.validity = 12U;
    msg.x = 0.31922668872247506;
    msg.y = 0.7471267950933955;
    msg.z = 0.9296212089682125;

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
    msg.setTimeStamp(0.09175371390052411);
    msg.setSource(44553U);
    msg.setSourceEntity(245U);
    msg.setDestination(28149U);
    msg.setDestinationEntity(28U);
    msg.time = 0.9967417126080619;
    msg.x = 0.24147018855646407;
    msg.y = 0.5565438008380656;
    msg.z = 0.5515092146769652;

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
    msg.setTimeStamp(0.6810850274977741);
    msg.setSource(13967U);
    msg.setSourceEntity(105U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(240U);
    msg.time = 0.13432977174562577;
    msg.x = 0.4670296911374261;
    msg.y = 0.3236330056839264;
    msg.z = 0.9217019106650142;

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
    msg.setTimeStamp(0.24626658292523573);
    msg.setSource(63259U);
    msg.setSourceEntity(28U);
    msg.setDestination(3935U);
    msg.setDestinationEntity(126U);
    msg.time = 0.6753592783683258;
    msg.x = 0.053065462211621894;
    msg.y = 0.8842306080323553;
    msg.z = 0.9425181095698476;

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
    msg.setTimeStamp(0.47295996402941387);
    msg.setSource(58214U);
    msg.setSourceEntity(190U);
    msg.setDestination(48519U);
    msg.setDestinationEntity(119U);
    msg.validity = 201U;
    msg.value = 0.7549572145528471;

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
    msg.setTimeStamp(0.20758024722989532);
    msg.setSource(9453U);
    msg.setSourceEntity(211U);
    msg.setDestination(34881U);
    msg.setDestinationEntity(208U);
    msg.validity = 194U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.34644204942293066;
    tmp_msg_0.y = 0.15660325151872945;
    tmp_msg_0.z = 0.16577261282366818;
    tmp_msg_0.phi = 0.5282009061295976;
    tmp_msg_0.theta = 0.39645760265010954;
    tmp_msg_0.psi = 0.9461859407215467;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.37427089556703586;

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
    msg.setTimeStamp(0.10522779942029215);
    msg.setSource(323U);
    msg.setSourceEntity(66U);
    msg.setDestination(13689U);
    msg.setDestinationEntity(46U);
    msg.validity = 197U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.11571232363564588;
    tmp_msg_0.y = 0.3906671991977342;
    tmp_msg_0.z = 0.21159486801347338;
    tmp_msg_0.phi = 0.1855558700605715;
    tmp_msg_0.theta = 0.30136749731855306;
    tmp_msg_0.psi = 0.5965415198302633;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.31283921594720776;
    tmp_msg_1.beam_height = 0.5417514549313782;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.28940157289981117;

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
    msg.setTimeStamp(0.940588476236021);
    msg.setSource(3088U);
    msg.setSourceEntity(92U);
    msg.setDestination(51741U);
    msg.setDestinationEntity(203U);
    msg.value = 0.1929802422286313;

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
    msg.setTimeStamp(0.20820359547510547);
    msg.setSource(56380U);
    msg.setSourceEntity(29U);
    msg.setDestination(7296U);
    msg.setDestinationEntity(58U);
    msg.value = 0.5246477876683424;

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
    msg.setTimeStamp(0.5869123905017534);
    msg.setSource(64157U);
    msg.setSourceEntity(224U);
    msg.setDestination(40443U);
    msg.setDestinationEntity(150U);
    msg.value = 0.633496586823482;

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
    msg.setTimeStamp(0.17350270881682317);
    msg.setSource(44198U);
    msg.setSourceEntity(173U);
    msg.setDestination(61490U);
    msg.setDestinationEntity(221U);
    msg.value = 0.05807376511400009;

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
    msg.setTimeStamp(0.7027584990434426);
    msg.setSource(10054U);
    msg.setSourceEntity(154U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(227U);
    msg.value = 0.35022284617901667;

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
    msg.setTimeStamp(0.7888066199822885);
    msg.setSource(737U);
    msg.setSourceEntity(89U);
    msg.setDestination(55828U);
    msg.setDestinationEntity(70U);
    msg.value = 0.30567214967648104;

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
    msg.setTimeStamp(0.4952569116010208);
    msg.setSource(21044U);
    msg.setSourceEntity(188U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6820153286581856;

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
    msg.setTimeStamp(0.7115055269043618);
    msg.setSource(51826U);
    msg.setSourceEntity(59U);
    msg.setDestination(29913U);
    msg.setDestinationEntity(253U);
    msg.value = 0.25846694675967186;

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
    msg.setTimeStamp(0.970263321021681);
    msg.setSource(11475U);
    msg.setSourceEntity(43U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(2U);
    msg.value = 0.44378663059298196;

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
    msg.setTimeStamp(0.4587597576722079);
    msg.setSource(24093U);
    msg.setSourceEntity(242U);
    msg.setDestination(58757U);
    msg.setDestinationEntity(76U);
    msg.value = 0.6693606305429446;

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
    msg.setTimeStamp(0.3906086836373276);
    msg.setSource(51588U);
    msg.setSourceEntity(129U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(176U);
    msg.value = 0.30679472732825497;

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
    msg.setTimeStamp(0.5554682539616571);
    msg.setSource(6397U);
    msg.setSourceEntity(134U);
    msg.setDestination(43286U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8699192709846255;

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
    msg.setTimeStamp(0.8974930914141889);
    msg.setSource(13556U);
    msg.setSourceEntity(232U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(144U);
    msg.value = 0.9675912747724486;

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
    msg.setTimeStamp(0.6960184436801475);
    msg.setSource(19632U);
    msg.setSourceEntity(199U);
    msg.setDestination(15865U);
    msg.setDestinationEntity(167U);
    msg.value = 0.1952145492643842;

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
    msg.setTimeStamp(0.3020075495413874);
    msg.setSource(54130U);
    msg.setSourceEntity(72U);
    msg.setDestination(43963U);
    msg.setDestinationEntity(71U);
    msg.value = 0.12666982129356796;

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
    msg.setTimeStamp(0.20210434339765548);
    msg.setSource(53662U);
    msg.setSourceEntity(242U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9581368759876955;

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
    msg.setTimeStamp(0.007989838211593825);
    msg.setSource(17440U);
    msg.setSourceEntity(25U);
    msg.setDestination(58186U);
    msg.setDestinationEntity(153U);
    msg.value = 0.7476477836641423;

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
    msg.setTimeStamp(0.9151497057243907);
    msg.setSource(23957U);
    msg.setSourceEntity(232U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6623933332600923;

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
    msg.setTimeStamp(0.5233346726024238);
    msg.setSource(49371U);
    msg.setSourceEntity(116U);
    msg.setDestination(57888U);
    msg.setDestinationEntity(129U);
    msg.value = 0.8825574135391707;

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
    msg.setTimeStamp(0.6330124089378167);
    msg.setSource(41001U);
    msg.setSourceEntity(197U);
    msg.setDestination(713U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7543712953160953;

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
    msg.setTimeStamp(0.7985873565299692);
    msg.setSource(10461U);
    msg.setSourceEntity(219U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(137U);
    msg.value = 0.1639469316426413;

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
    msg.setTimeStamp(0.11106288041146617);
    msg.setSource(17304U);
    msg.setSourceEntity(236U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(121U);
    msg.value = 0.19782009375078813;

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
    msg.setTimeStamp(0.2714553635032567);
    msg.setSource(58789U);
    msg.setSourceEntity(8U);
    msg.setDestination(5217U);
    msg.setDestinationEntity(97U);
    msg.value = 0.5264494101636606;

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
    msg.setTimeStamp(0.140016032455628);
    msg.setSource(35133U);
    msg.setSourceEntity(66U);
    msg.setDestination(25313U);
    msg.setDestinationEntity(123U);
    msg.value = 0.49293328464726693;

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
    msg.setTimeStamp(0.18757961733803263);
    msg.setSource(64605U);
    msg.setSourceEntity(124U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(136U);
    msg.direction = 0.2085314861010099;
    msg.speed = 0.050532535822544355;
    msg.turbulence = 0.6679800611401865;

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
    msg.setTimeStamp(0.14917963383430777);
    msg.setSource(7721U);
    msg.setSourceEntity(70U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(127U);
    msg.direction = 0.9878093386859405;
    msg.speed = 0.028129587734256778;
    msg.turbulence = 0.2883047688953755;

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
    msg.setTimeStamp(0.35698204944980005);
    msg.setSource(32258U);
    msg.setSourceEntity(75U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.453444257651778;
    msg.speed = 0.9820348047230693;
    msg.turbulence = 0.34319465430608265;

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
    msg.setTimeStamp(0.6582716584776714);
    msg.setSource(8009U);
    msg.setSourceEntity(42U);
    msg.setDestination(27255U);
    msg.setDestinationEntity(208U);
    msg.value = 0.23438000174003315;

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
    msg.setTimeStamp(0.22589891694783992);
    msg.setSource(1118U);
    msg.setSourceEntity(104U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(144U);
    msg.value = 0.9034148952239855;

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
    msg.setTimeStamp(0.40067054764812327);
    msg.setSource(51917U);
    msg.setSourceEntity(96U);
    msg.setDestination(10003U);
    msg.setDestinationEntity(184U);
    msg.value = 0.032732788534053814;

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
    msg.setTimeStamp(0.8168154744044727);
    msg.setSource(28309U);
    msg.setSourceEntity(42U);
    msg.setDestination(50750U);
    msg.setDestinationEntity(93U);
    msg.value.assign("VTJPFYHTJZLLEWIXSBUABWYFKBWKMTKFCTFQNDVXAMCUWYGJPNGWKQOSGZRYQNESNDBEXKAZUDOIDVTXKZCVFHPUXOEIMJVIBGSVYGQTUHBYEZCTGNAPFUYJHEZYDOIQDCWREGGFFMARHTXNEOWCLPWJA");

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
    msg.setTimeStamp(0.5973052624464822);
    msg.setSource(48796U);
    msg.setSourceEntity(118U);
    msg.setDestination(57852U);
    msg.setDestinationEntity(59U);
    msg.value.assign("TTRFCOSQNAXAXTIHUKQOTCRDSGROFANXPTFCPBLTCYKLHSMWMILZHJGJBEFJUVRQH");

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
    msg.setTimeStamp(0.38915849969908556);
    msg.setSource(9763U);
    msg.setSourceEntity(234U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(200U);
    msg.value.assign("SQVOTLETDCCQOFKZAWSUWCFPCBQNJULKUAUDNXHZVLATCPCOJGLLDXCGFNYIJBJFDKQZHMOJKTGMFTPZHYQZARESEVRBBSRRINDRNWUMGGJQEABEXUYZWFFYIZRBABKKGUQMAQCGTAMFSLICHWDPYNDPEBTZRKOVOHZILIBPYIUMMEFCSIQRXGHAWNPUNSBWNWLXVSXOIDVOO");

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
    msg.setTimeStamp(0.2744619292761967);
    msg.setSource(49362U);
    msg.setSourceEntity(72U);
    msg.setDestination(9477U);
    msg.setDestinationEntity(218U);
    const char tmp_msg_0[] = {-125, -33, -20, 45, 87, 65, 123, 35, -128, -25, 124, -4, -80, 52, 10, 65, 117, -103, 118, 8, -14, -100, 99, 98, 54, 7, -110, 7, 35, -80, 10, 101, -19, -63, 46, -96, 4, 50, 33, 121, 9, -19, 38, -76, -37, -102, 57, 39, 76, -58, 62, 120, -45, -112, 11, -7, 89, -73, 97, -41, -82, 116, 106, -125, 80, 115, -94, 104, 35, 71, 122, 24, -9, 30, 29, -42, 62, 56, 11, -110, -118, -11, -57, 59, -16, 41, -56, 73, 39, 7, -110, -126, -77, -116, 113, -12, -26, -99, -55, -63, 70, 59, -35, -123, 71, 71, -14, -12, 29, -118, -63, 2, 110, 5, 112, -54, -57, 9, 126, -84, 48, -27, 80, -74, 104, -103, -115, -61};
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
    msg.setTimeStamp(0.1914793701882751);
    msg.setSource(58874U);
    msg.setSourceEntity(210U);
    msg.setDestination(62857U);
    msg.setDestinationEntity(161U);
    const char tmp_msg_0[] = {-33, -85, 117, 3, -58, -126, -48, -21, 21, 61, -74, 41, -5, 9, 42, 2, -15, 17, -62, -78, -99, 70, -117, 4, -91, 78, 4, -34, 90, -75, -59, 50, -15, 98, -56, 17, 109, -119, 65, -117, -58, -112, 79, 74, 82, 119, -119, 72, -53, 5, -96, 68, 80, -112, -58, 47, -22, 76, -88, -127, 35};
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
    msg.setTimeStamp(0.22597643141627022);
    msg.setSource(54663U);
    msg.setSourceEntity(20U);
    msg.setDestination(13481U);
    msg.setDestinationEntity(14U);
    const char tmp_msg_0[] = {-29, -31, -109, 105, -119, 120, -117, -97, -75, -56, -29, -81, 18, -115, 56, 92, 114, -99, 117, 13, 22, -50, 42, -113, 60, -15, -43, -2, -46, 55, 43, -14, -14, 98, -45, 103, -97, 21, 95, -6, -53, 95, -125, -48, -40, -44, 86, 28, -19, -58, -37, 37, 94, -25, -77, 72, -7, -9, -38, -9, 112, 27, 67, 52, -92, -118, -13, -119, -18, -59, -6, 19, -111, -61, 60, 88, 95, -26, -35, -6, 106, 73, 30, -11, -66, -63, -48, -48, -80, 56, -105, 78, 105, -124, 22, 40, -56, -68, -67, -76, 69, -49, -46, -63, 38, 8, 24, -29, 112, 34, -14, 98, 5, -51, 62, 123, -122, -67, 43, -12, -42};
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
    msg.setTimeStamp(0.5513203346903359);
    msg.setSource(14587U);
    msg.setSourceEntity(40U);
    msg.setDestination(40996U);
    msg.setDestinationEntity(237U);
    msg.type = 216U;
    msg.frequency = 3455356047U;
    msg.min_range = 34663U;
    msg.max_range = 5186U;
    msg.bits_per_point = 180U;
    msg.scale_factor = 0.8764629292249022;
    const char tmp_msg_0[] = {-13, 22, -94, -49, 43, -42, 123, -25, 35, 11, 97, -101, 55, 16, -4, 30, 32, -128, -108, 46, -122, 50, 12, 36, -89, 33, 106, -19, -50, 19, -11, -74, 126, -6, 62, -77, 100, 56, 81, -67, -97, -63, 6, 123, 53, -101, 58, 7, 67, -83, 64, 18, 71, -88, -100, 34, 18, 101, 22, 50, 96, 20, -31, -22, -95, -128, -5, 46, 29, -77, 18, 117, -59, 25, 78, 42, 37, 46, -20, 38, 126, -53, 111, -3, 48, 23, -39, -28, -110, -76, 5, -115, 58, -124, -97, -24, 108, 12, 71, -46, -59, 25, -3, 121, 69, -99, -15, 125, -34, -15, -81, -115, -42, -32, 34, 93, 66, -64, -19, -74, 98, 27, -13, -9, 18, -58, 46, -54, -58, -47, -38, 98, 93, 49, 38, -75, -20, -55, -80, -121, 44, -4, -3, 35, 5, -80, 61, -16, -70, -71, -29, -107, -95, 106, 52, -13, -19, -7, 110, -123, -47, 103, 50, 67, 50, -114, 63, 113, -73, -86, -121, -36, -117, -30, -61, -24, 2, 101, 115, 113, 50, 4, -93, -59, 0, 72, 103, 64, -48, -1, 7, 103, -84, 79, 6, 51, -100, 116, -120, 85};
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
    msg.setTimeStamp(0.2330757572825901);
    msg.setSource(34817U);
    msg.setSourceEntity(145U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(148U);
    msg.type = 109U;
    msg.frequency = 2458259547U;
    msg.min_range = 33612U;
    msg.max_range = 2347U;
    msg.bits_per_point = 183U;
    msg.scale_factor = 0.24233767134559614;
    const char tmp_msg_0[] = {82, 62, -67, 11, 50, 124, 117, -39, 30, -92, 101, 53, -114, 1, 53, 104, -24, -58, 52, -97, -77, -60, 76, 71, -111, -98, 71, 61, 114, 87, -46, 62, 12, -122, 125, 100, 20, -117, -124, 104, 89, -108, 11, -56, 121, -78, 92, 87, -22, 122, -66, 60, 110, -10, -68, -45, -34, -80, 5, 40, -67, -107, -126, 0, 61, -82, -66, 74, 82, -115, 49, 120, -10, -85, 63, -8, -117, 109, -12, -17, 26, 83, 26, 69, 109, -107, 79, 68, 39, 60, -17, -67, 56, -90, -78, 77, -21, -80, 65, 102, 75, -75, -99, -94, -43, 7, -59, 117, 6, 107, 107, -51, -121, 97, -59, -125, -77, -74, 70, 68, -121, 76, 5, 28, -127, 85, 45, -41, 94, 114, -123, 74, 83, 72, 57, 41, -55, 34, -19, -84, 85, 119, -99, 44, -34, -82, 81, 105, -7, 103, -71, 65, 4, 104, 121, -126, 10, -110, -84, 101, 104, -127, -19, -119, -20, 124, -18, 110, 25, 65, -79, 100, -44, 72, 17, 5, 63, 93, -113, 49, -42, -99, -45, -29, -60};
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
    msg.setTimeStamp(0.848700108548365);
    msg.setSource(53953U);
    msg.setSourceEntity(37U);
    msg.setDestination(40234U);
    msg.setDestinationEntity(249U);
    msg.type = 74U;
    msg.frequency = 3238140374U;
    msg.min_range = 45798U;
    msg.max_range = 42974U;
    msg.bits_per_point = 216U;
    msg.scale_factor = 0.02180360333224618;
    const char tmp_msg_0[] = {-12, -115, -127, 88, -91, -88, -41, -87, 46, -24, -81, 73, 102, 61, -22, 12, -96, 50, -20, 67, 32, 13, -69, 22, 56, 54, 119, -77, 45, 115, -77, 103, 80, 17, 108, 67, 24, -80, 67, 92, 62, 42, -99, -106, 109, 93, -120, -124, -116, 45, -39, 40, -68, -127, -25, 105, 111, 10, -70, -103, 18, 17, 24, -64, 51, 31, 111, 5, 89, -124, 21, -106, 11, -62, -109, 94, -25, -112, -35, -114, 108, 9, 17, 27, 114, -62, -63, -51, -98, 106, 99, 33, -97, 59, -103, -16, -32, 25, -99, 62, -86, -81, 101, 96, 11, 99, -83, -88, 29, 14, 61, 36, -71, -72, -24, 107, -35, -97, 4, 66, 55, -95, -51, 58, 93, 41, 10, 103, 107, -88, -42, 4, 47, -73, 8, -112, -6, 67, -114, 34, 31, 51, -20, 32, -116, -108, 85, -48, -125, 62, 91, -11, -7, 40, 11, 121, 44, 86, 65, 51, -20, 103, 35, 79, 30, -81, 20, -19, 104, -110, -68, -110, -95, -88, -18, 2, -40, -112};
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
    msg.setTimeStamp(0.6322908962963518);
    msg.setSource(57671U);
    msg.setSourceEntity(222U);
    msg.setDestination(36519U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.4930612758721008);
    msg.setSource(47709U);
    msg.setSourceEntity(57U);
    msg.setDestination(60827U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.43279046110118846);
    msg.setSource(15307U);
    msg.setSourceEntity(3U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9778864149369529);
    msg.setSource(3249U);
    msg.setSourceEntity(166U);
    msg.setDestination(27843U);
    msg.setDestinationEntity(123U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.9062741070986027);
    msg.setSource(1963U);
    msg.setSourceEntity(190U);
    msg.setDestination(1766U);
    msg.setDestinationEntity(253U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.5288734162752056);
    msg.setSource(43241U);
    msg.setSourceEntity(103U);
    msg.setDestination(13426U);
    msg.setDestinationEntity(47U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.21475848309231405);
    msg.setSource(63947U);
    msg.setSourceEntity(166U);
    msg.setDestination(15439U);
    msg.setDestinationEntity(249U);
    msg.value = 0.2886676997521802;
    msg.confidence = 0.1885397279220261;
    msg.opmodes.assign("RNNQJJZWFGOEWHYFTOWJKEHZHTCYWBPTAPG");

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
    msg.setTimeStamp(0.5602602378144733);
    msg.setSource(30536U);
    msg.setSourceEntity(12U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7072367878277207;
    msg.confidence = 0.6000435400363289;
    msg.opmodes.assign("NUYGAYXDDLPMLETPGZ");

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
    msg.setTimeStamp(0.059588716383714546);
    msg.setSource(52017U);
    msg.setSourceEntity(160U);
    msg.setDestination(10927U);
    msg.setDestinationEntity(100U);
    msg.value = 0.4057169893426674;
    msg.confidence = 0.7337705684966594;
    msg.opmodes.assign("REBLRKILQLGSWUZVKGAPAOPZIVNJHWMBUEEBBCOZNWQBONOMTWWSXHMTLHDDEJKRMDQJTMIKXTMYVUTOVNNSDMSHHAYRFJBWDFZGUBQFOQCTZJKYVKNXERURHFTPSJQVSUACWNRGRISAZBCRZEHNAYPIHFGFIJFLOMUXCVWPSCPOUYHESRYDQBIXYOEYAWTQCDGIEDCSDNFLZQLUYJVXVGMVLXLGPNKYEJXGCPKLZDMHWCQAIPOGTFBX");

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
    msg.setTimeStamp(0.026027497258522936);
    msg.setSource(44501U);
    msg.setSourceEntity(48U);
    msg.setDestination(32312U);
    msg.setDestinationEntity(1U);
    msg.itow = 3416906898U;
    msg.lat = 0.6733108919835227;
    msg.lon = 0.589771562302298;
    msg.height_ell = 0.2130030300045841;
    msg.height_sea = 0.20489858501690927;
    msg.hacc = 0.8209323066740448;
    msg.vacc = 0.8995839515136642;
    msg.vel_n = 0.19123552799845123;
    msg.vel_e = 0.5497068525921235;
    msg.vel_d = 0.8988036858220481;
    msg.speed = 0.49240704501213894;
    msg.gspeed = 0.8860393525038719;
    msg.heading = 0.4614810203827965;
    msg.sacc = 0.20405314812397923;
    msg.cacc = 0.9886711632756606;

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
    msg.setTimeStamp(0.8243945126513549);
    msg.setSource(23910U);
    msg.setSourceEntity(178U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(88U);
    msg.itow = 494741661U;
    msg.lat = 0.9811692392723894;
    msg.lon = 0.13227698192713488;
    msg.height_ell = 0.413724393186222;
    msg.height_sea = 0.47473422375837215;
    msg.hacc = 0.3707221847109603;
    msg.vacc = 0.3745540079602473;
    msg.vel_n = 0.9025828453658157;
    msg.vel_e = 0.7808768398843202;
    msg.vel_d = 0.2597442625395042;
    msg.speed = 0.33491114938073485;
    msg.gspeed = 0.7135256165036605;
    msg.heading = 0.9576161742667371;
    msg.sacc = 0.5273828296999038;
    msg.cacc = 0.3359625102569421;

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
    msg.setTimeStamp(0.895236001839191);
    msg.setSource(57114U);
    msg.setSourceEntity(88U);
    msg.setDestination(61890U);
    msg.setDestinationEntity(168U);
    msg.itow = 1870239008U;
    msg.lat = 0.11613142003568888;
    msg.lon = 0.25990606567106556;
    msg.height_ell = 0.535691332960289;
    msg.height_sea = 0.7124401971136988;
    msg.hacc = 0.7078451941100314;
    msg.vacc = 0.03627850438245517;
    msg.vel_n = 0.7171737564040168;
    msg.vel_e = 0.6430256714219773;
    msg.vel_d = 0.8338215967877345;
    msg.speed = 0.9183715721870084;
    msg.gspeed = 0.852771671857406;
    msg.heading = 0.1460630073946808;
    msg.sacc = 0.4651071195673606;
    msg.cacc = 0.757452533070511;

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
    msg.setTimeStamp(0.4078594518046601);
    msg.setSource(14200U);
    msg.setSourceEntity(158U);
    msg.setDestination(35330U);
    msg.setDestinationEntity(77U);
    msg.id = 213U;
    msg.value = 0.330177437509134;

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
    msg.setTimeStamp(0.39967787608714267);
    msg.setSource(8398U);
    msg.setSourceEntity(142U);
    msg.setDestination(20485U);
    msg.setDestinationEntity(152U);
    msg.id = 240U;
    msg.value = 0.07396393469064788;

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
    msg.setTimeStamp(0.3524940503537902);
    msg.setSource(11785U);
    msg.setSourceEntity(216U);
    msg.setDestination(5848U);
    msg.setDestinationEntity(6U);
    msg.id = 39U;
    msg.value = 0.9868414673089017;

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
    msg.setTimeStamp(0.7636386724383605);
    msg.setSource(22564U);
    msg.setSourceEntity(78U);
    msg.setDestination(39284U);
    msg.setDestinationEntity(3U);
    msg.x = 0.7858677076849299;
    msg.y = 0.18610382367060463;
    msg.z = 0.19580803125308577;
    msg.phi = 0.02334553324800892;
    msg.theta = 0.685657926354641;
    msg.psi = 0.9945127854902724;

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
    msg.setTimeStamp(0.38550560754137153);
    msg.setSource(33433U);
    msg.setSourceEntity(177U);
    msg.setDestination(58711U);
    msg.setDestinationEntity(109U);
    msg.x = 0.02518303300632585;
    msg.y = 0.8023045010825695;
    msg.z = 0.45409362539232556;
    msg.phi = 0.6028304577631016;
    msg.theta = 0.5724566865185043;
    msg.psi = 0.07183948210250535;

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
    msg.setTimeStamp(0.7016178590126491);
    msg.setSource(8690U);
    msg.setSourceEntity(35U);
    msg.setDestination(31560U);
    msg.setDestinationEntity(188U);
    msg.x = 0.2163965783759224;
    msg.y = 0.15113024754663706;
    msg.z = 0.6149147967341662;
    msg.phi = 0.5818495697218693;
    msg.theta = 0.9819199676581403;
    msg.psi = 0.011184831075155222;

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
    msg.setTimeStamp(0.3433505417172138);
    msg.setSource(21939U);
    msg.setSourceEntity(253U);
    msg.setDestination(19655U);
    msg.setDestinationEntity(254U);
    msg.beam_width = 0.7497956752618535;
    msg.beam_height = 0.5589658295276356;

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
    msg.setTimeStamp(0.5035249485969028);
    msg.setSource(42940U);
    msg.setSourceEntity(121U);
    msg.setDestination(466U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.08813936328711014;
    msg.beam_height = 0.6517377446546783;

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
    msg.setTimeStamp(0.6625488739223329);
    msg.setSource(59665U);
    msg.setSourceEntity(74U);
    msg.setDestination(57868U);
    msg.setDestinationEntity(221U);
    msg.beam_width = 0.24015669018257313;
    msg.beam_height = 0.1604131497477872;

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
    msg.setTimeStamp(0.951194734750217);
    msg.setSource(46433U);
    msg.setSourceEntity(60U);
    msg.setDestination(26157U);
    msg.setDestinationEntity(166U);
    msg.sane = 142U;

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
    msg.setTimeStamp(0.009880264347710388);
    msg.setSource(40902U);
    msg.setSourceEntity(45U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(252U);
    msg.sane = 2U;

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
    msg.setTimeStamp(0.3080398717882792);
    msg.setSource(10507U);
    msg.setSourceEntity(73U);
    msg.setDestination(32718U);
    msg.setDestinationEntity(144U);
    msg.sane = 244U;

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
    msg.setTimeStamp(0.2500888130999299);
    msg.setSource(27945U);
    msg.setSourceEntity(197U);
    msg.setDestination(48384U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6700075754241631;

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
    msg.setTimeStamp(0.9431120152821628);
    msg.setSource(18762U);
    msg.setSourceEntity(78U);
    msg.setDestination(31559U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7247483197041695;

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
    msg.setTimeStamp(0.48363010614550284);
    msg.setSource(56819U);
    msg.setSourceEntity(225U);
    msg.setDestination(46152U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5342672941137439;

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
    msg.setTimeStamp(0.620832197225581);
    msg.setSource(47547U);
    msg.setSourceEntity(247U);
    msg.setDestination(64613U);
    msg.setDestinationEntity(251U);
    msg.value = 0.22731443211788305;

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
    msg.setTimeStamp(0.4377596314573804);
    msg.setSource(6160U);
    msg.setSourceEntity(134U);
    msg.setDestination(8777U);
    msg.setDestinationEntity(124U);
    msg.value = 0.701241327581974;

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
    msg.setTimeStamp(0.12252759246006129);
    msg.setSource(1187U);
    msg.setSourceEntity(201U);
    msg.setDestination(54192U);
    msg.setDestinationEntity(80U);
    msg.value = 0.923939669944265;

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
    msg.setTimeStamp(0.15252765950432068);
    msg.setSource(3252U);
    msg.setSourceEntity(228U);
    msg.setDestination(55390U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8499168411345263;

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
    msg.setTimeStamp(0.6706482578236957);
    msg.setSource(41344U);
    msg.setSourceEntity(249U);
    msg.setDestination(39176U);
    msg.setDestinationEntity(73U);
    msg.value = 0.7222420414792747;

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
    msg.setTimeStamp(0.5626615414030081);
    msg.setSource(52940U);
    msg.setSourceEntity(139U);
    msg.setDestination(63847U);
    msg.setDestinationEntity(50U);
    msg.value = 0.06612162175842462;

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
    msg.setTimeStamp(0.9455778190693446);
    msg.setSource(17597U);
    msg.setSourceEntity(17U);
    msg.setDestination(59816U);
    msg.setDestinationEntity(171U);
    msg.value = 0.12063368959461152;

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
    msg.setTimeStamp(0.11972731730505515);
    msg.setSource(619U);
    msg.setSourceEntity(84U);
    msg.setDestination(54629U);
    msg.setDestinationEntity(190U);
    msg.value = 0.29790521182664453;

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
    msg.setTimeStamp(0.23002259462712804);
    msg.setSource(39902U);
    msg.setSourceEntity(175U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(99U);
    msg.value = 0.06378555941583508;

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
    msg.setTimeStamp(0.37747915851508784);
    msg.setSource(22863U);
    msg.setSourceEntity(56U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(158U);
    msg.value = 0.05143313069778721;

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
    msg.setTimeStamp(0.5812312250946865);
    msg.setSource(45389U);
    msg.setSourceEntity(178U);
    msg.setDestination(9364U);
    msg.setDestinationEntity(51U);
    msg.value = 0.21222062932092667;

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
    msg.setTimeStamp(0.7635183864092686);
    msg.setSource(14103U);
    msg.setSourceEntity(41U);
    msg.setDestination(25261U);
    msg.setDestinationEntity(1U);
    msg.value = 0.36629598498435445;

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
    msg.setTimeStamp(0.16648138688811454);
    msg.setSource(31619U);
    msg.setSourceEntity(132U);
    msg.setDestination(25928U);
    msg.setDestinationEntity(166U);
    msg.value = 0.006230681716482445;

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
    msg.setTimeStamp(0.06342971987429857);
    msg.setSource(39808U);
    msg.setSourceEntity(231U);
    msg.setDestination(36503U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7195342934454978;

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
    msg.setTimeStamp(0.7042231679141934);
    msg.setSource(24308U);
    msg.setSourceEntity(217U);
    msg.setDestination(17199U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5699573441909165;

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
    msg.setTimeStamp(0.34771198867549313);
    msg.setSource(49690U);
    msg.setSourceEntity(62U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9557174985798306;

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
    msg.setTimeStamp(0.9484750119842561);
    msg.setSource(3291U);
    msg.setSourceEntity(213U);
    msg.setDestination(9832U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7551465746196867;

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
    msg.setTimeStamp(0.13894334730691638);
    msg.setSource(60912U);
    msg.setSourceEntity(79U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(94U);
    msg.value = 0.8902713495498401;

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
    msg.setTimeStamp(0.5954597787293336);
    msg.setSource(50346U);
    msg.setSourceEntity(104U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(53U);
    msg.value = 0.09984571174534429;

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
    msg.setTimeStamp(0.5652721717447241);
    msg.setSource(60385U);
    msg.setSourceEntity(110U);
    msg.setDestination(54088U);
    msg.setDestinationEntity(58U);
    msg.value = 0.28669892164905253;

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
    msg.setTimeStamp(0.29946237466222503);
    msg.setSource(22702U);
    msg.setSourceEntity(48U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(46U);
    msg.value = 0.04211106782079277;

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
    msg.setTimeStamp(0.2070639692481463);
    msg.setSource(55341U);
    msg.setSourceEntity(57U);
    msg.setDestination(45048U);
    msg.setDestinationEntity(61U);
    msg.validity = 41879U;
    msg.type = 51U;
    msg.tow = 1315692831U;
    msg.base_lat = 0.7609205936998981;
    msg.base_lon = 0.5151153467940986;
    msg.base_height = 0.9686560163896155;
    msg.n = 0.11213832076576302;
    msg.e = 0.11735054063838102;
    msg.d = 0.3573482143959349;
    msg.v_n = 0.9646705507545313;
    msg.v_e = 0.33784498594996504;
    msg.v_d = 0.6767179143497972;
    msg.satellites = 46U;
    msg.iar_hyp = 5837U;
    msg.iar_ratio = 0.11445166844640176;

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
    msg.setTimeStamp(0.6197886973527296);
    msg.setSource(5268U);
    msg.setSourceEntity(11U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(55U);
    msg.validity = 24238U;
    msg.type = 13U;
    msg.tow = 1644020716U;
    msg.base_lat = 0.8025437416879246;
    msg.base_lon = 0.14947705060021887;
    msg.base_height = 0.5652566581188339;
    msg.n = 0.48389471880542534;
    msg.e = 0.8236228545120385;
    msg.d = 0.2958009897314956;
    msg.v_n = 0.006314628553122148;
    msg.v_e = 0.8926491913483073;
    msg.v_d = 0.41953941845414155;
    msg.satellites = 6U;
    msg.iar_hyp = 17778U;
    msg.iar_ratio = 0.535741605118211;

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
    msg.setTimeStamp(0.2809493541008006);
    msg.setSource(12083U);
    msg.setSourceEntity(6U);
    msg.setDestination(46719U);
    msg.setDestinationEntity(124U);
    msg.validity = 22582U;
    msg.type = 60U;
    msg.tow = 3373712132U;
    msg.base_lat = 0.285895425625159;
    msg.base_lon = 0.8226745993776764;
    msg.base_height = 0.46482806284799727;
    msg.n = 0.7396566574160572;
    msg.e = 0.33739835488203795;
    msg.d = 0.32767490168936764;
    msg.v_n = 0.21738192319944638;
    msg.v_e = 0.3053096860389708;
    msg.v_d = 0.15244929551910402;
    msg.satellites = 49U;
    msg.iar_hyp = 31248U;
    msg.iar_ratio = 0.24963443243101868;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.15060394361019003);
    msg.setSource(53065U);
    msg.setSourceEntity(126U);
    msg.setDestination(19411U);
    msg.setDestinationEntity(104U);
    msg.id = 198U;
    msg.zoom = 215U;
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
    msg.setTimeStamp(0.09306165372181052);
    msg.setSource(28670U);
    msg.setSourceEntity(42U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(189U);
    msg.id = 184U;
    msg.zoom = 10U;
    msg.action = 208U;

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
    msg.setTimeStamp(0.17509587312833907);
    msg.setSource(62231U);
    msg.setSourceEntity(210U);
    msg.setDestination(38857U);
    msg.setDestinationEntity(223U);
    msg.id = 212U;
    msg.zoom = 167U;
    msg.action = 91U;

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
    msg.setTimeStamp(0.14428790570785555);
    msg.setSource(37346U);
    msg.setSourceEntity(186U);
    msg.setDestination(21674U);
    msg.setDestinationEntity(129U);
    msg.id = 197U;
    msg.value = 0.48171915633798656;

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
    msg.setTimeStamp(0.5178319721691587);
    msg.setSource(36741U);
    msg.setSourceEntity(13U);
    msg.setDestination(25902U);
    msg.setDestinationEntity(126U);
    msg.id = 73U;
    msg.value = 0.06511384205388815;

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
    msg.setTimeStamp(0.8029429980151265);
    msg.setSource(31121U);
    msg.setSourceEntity(220U);
    msg.setDestination(41689U);
    msg.setDestinationEntity(65U);
    msg.id = 82U;
    msg.value = 0.975002582833775;

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
    msg.setTimeStamp(0.42354083663937403);
    msg.setSource(14181U);
    msg.setSourceEntity(174U);
    msg.setDestination(34309U);
    msg.setDestinationEntity(117U);
    msg.id = 170U;
    msg.value = 0.9353048665049896;

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
    msg.setTimeStamp(0.8039783759558956);
    msg.setSource(48467U);
    msg.setSourceEntity(9U);
    msg.setDestination(16059U);
    msg.setDestinationEntity(48U);
    msg.id = 42U;
    msg.value = 0.29211020969118995;

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
    msg.setTimeStamp(0.13539439604684123);
    msg.setSource(42904U);
    msg.setSourceEntity(198U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(3U);
    msg.id = 130U;
    msg.value = 0.13918765327655513;

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
    msg.setTimeStamp(0.5016581238091726);
    msg.setSource(16085U);
    msg.setSourceEntity(85U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(128U);
    msg.id = 158U;
    msg.angle = 0.9829655481792353;

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
    msg.setTimeStamp(0.011523101019846438);
    msg.setSource(27456U);
    msg.setSourceEntity(231U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(104U);
    msg.id = 107U;
    msg.angle = 0.6053469590610329;

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
    msg.setTimeStamp(0.6590232368862571);
    msg.setSource(27719U);
    msg.setSourceEntity(150U);
    msg.setDestination(11215U);
    msg.setDestinationEntity(34U);
    msg.id = 52U;
    msg.angle = 0.4256714924596867;

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
    msg.setTimeStamp(0.762980905222242);
    msg.setSource(45509U);
    msg.setSourceEntity(22U);
    msg.setDestination(33593U);
    msg.setDestinationEntity(22U);
    msg.op = 70U;
    msg.actions.assign("OKZRUPFXHKK");

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
    msg.setTimeStamp(0.9715940764369634);
    msg.setSource(64720U);
    msg.setSourceEntity(207U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(88U);
    msg.op = 179U;
    msg.actions.assign("ONHZHDOSVPDAOOERNTRITRRLZJHIZWAPLPTLPVMZGQGZLOUTWAGGULSANLMDEWFBREQKSKUFYIKYNADVWVEILFYRXCHUAJVHMG");

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
    msg.setTimeStamp(0.20053839776474114);
    msg.setSource(48333U);
    msg.setSourceEntity(54U);
    msg.setDestination(55933U);
    msg.setDestinationEntity(163U);
    msg.op = 119U;
    msg.actions.assign("KTSJDHCZXSAIVKLEERTAVRHYGYHAIYTQWGTMLSNJLROEJZFIUYPZBXPOTD");

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
    msg.setTimeStamp(0.23711599090352165);
    msg.setSource(62526U);
    msg.setSourceEntity(95U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(241U);
    msg.actions.assign("RJTUHWJPGXMITSYZWUCNVQSFVNEZBCPXOPDTOUXTEDLWOCMQPODBYCVXFDGIVQHTWTVSNYACBJOYCLUFSAGEURWHIKRFXJRSWDEOYNKHCFUPXSCZDHEDRMDZIOBAWVLQAGCZNCSMUGLNKVLQABIQJMPZEMSRUAMJPZEBOGQRYBNNLKWKVAFJKLPXZF");

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
    msg.setTimeStamp(0.8400552523081232);
    msg.setSource(39225U);
    msg.setSourceEntity(70U);
    msg.setDestination(10334U);
    msg.setDestinationEntity(194U);
    msg.actions.assign("HWCYWGGHTPMFJRNZXJMLSONMZDLXLRHWFMDNWUIBFNHIUKQJRIGOHBPXEOWPWOENBAKUEXYVFVIORTIJHSQRFLUIKERYVRGMQXYDTTTMGDVPHMDWGXSGCBXTQOSSACCVATWXVOGROJFESZSFO");

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
    msg.setTimeStamp(0.5830320455862529);
    msg.setSource(23010U);
    msg.setSourceEntity(237U);
    msg.setDestination(9092U);
    msg.setDestinationEntity(133U);
    msg.actions.assign("MTYCTJBSXRXSGRRRGBMEDOYDWTHRAPKKDYAQOHCUKIYDRXNYYMMCEALJPDWZVTGPPJYIWPWLQEKHCWJUHTGNKXNIXAXMWDLOLHPIRRQSFGFVPEEWEYUNCPHGQOTLDSIOJMWAMHAZZOPUFUDJNC");

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
    msg.setTimeStamp(0.9581110528918371);
    msg.setSource(40073U);
    msg.setSourceEntity(86U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(144U);
    msg.button = 196U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.16617580396433718);
    msg.setSource(48305U);
    msg.setSourceEntity(57U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(175U);
    msg.button = 135U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.2928310397673288);
    msg.setSource(45450U);
    msg.setSourceEntity(251U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(59U);
    msg.button = 206U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.8212132879355575);
    msg.setSource(45869U);
    msg.setSourceEntity(106U);
    msg.setDestination(49607U);
    msg.setDestinationEntity(220U);
    msg.op = 10U;
    msg.text.assign("RZEXASXWDFTNXWJFTQTWTSKCHOMKIGYPOKBZJBO");

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
    msg.setTimeStamp(0.8028565479114446);
    msg.setSource(23653U);
    msg.setSourceEntity(227U);
    msg.setDestination(31526U);
    msg.setDestinationEntity(194U);
    msg.op = 87U;
    msg.text.assign("UIKVWRKNSDSSZVOAQEHBOMBFLRZLVJVPWBOJCMUKVZMNVFMKVKINRCYGOSDYXZFFELIVWQEONOXEUIVJJKGLORRJCNZQE");

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
    msg.setTimeStamp(0.3898404389289144);
    msg.setSource(39287U);
    msg.setSourceEntity(143U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(172U);
    msg.op = 71U;
    msg.text.assign("IGZZFJJLDDPARNTOIKCFRKBTVNDXAQBICQLJHDHXQJINZLEXUTWKIWBEURUYFLMHVEGGPFDJRDDVUPCITCDEAVOBXWPQBBPEKJGNEKSOLPHACVZRFXWIQEOZOFMAFGSFNBVEYAMGLGXGPSRRUWU");

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
    msg.setTimeStamp(0.3762271076707694);
    msg.setSource(14675U);
    msg.setSourceEntity(34U);
    msg.setDestination(8478U);
    msg.setDestinationEntity(213U);
    msg.op = 2U;
    msg.time_remain = 0.7564933355821274;
    msg.sched_time = 0.4029438275967647;

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
    msg.setTimeStamp(0.9711400224891246);
    msg.setSource(31357U);
    msg.setSourceEntity(33U);
    msg.setDestination(31200U);
    msg.setDestinationEntity(219U);
    msg.op = 76U;
    msg.time_remain = 0.7920948081787897;
    msg.sched_time = 0.0906978027747608;

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
    msg.setTimeStamp(0.628716693756843);
    msg.setSource(50663U);
    msg.setSourceEntity(45U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(60U);
    msg.op = 54U;
    msg.time_remain = 0.09213870009298919;
    msg.sched_time = 0.8882253869497775;

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
    msg.setTimeStamp(0.8523240132418057);
    msg.setSource(37111U);
    msg.setSourceEntity(92U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(108U);
    msg.name.assign("EJDMIDTGRIEZRAHSVRCMXPFCVWGOCSPSUNGKFPQUPKVXOLMCAGYVNXIAHTBLUTMEI");
    msg.op = 159U;
    msg.sched_time = 0.14723874494609068;

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
    msg.setTimeStamp(0.6140764438976827);
    msg.setSource(53695U);
    msg.setSourceEntity(84U);
    msg.setDestination(4497U);
    msg.setDestinationEntity(108U);
    msg.name.assign("PYGQJHNLJEPGFDIDRJDGNZRHXKSCIVRFLZEQILSPBIMTWOQJYJFKOZWMKGRZPKTEMWULEOYSPTSYPHBQQWFIZMGOAAYVECPGNHOQVIIWOSLRXOKRVQXFOFNJSXJVWFCWGAZLLBMDJDUFXBZNDJNOZAMVXBHWMPRDHAGCCJTOUBTEXTHCLKETUSLIBCNWCYBQZRATEUUPFVKSYNDQBMUCD");
    msg.op = 112U;
    msg.sched_time = 0.902975140580431;

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
    msg.setTimeStamp(0.852236781670954);
    msg.setSource(63491U);
    msg.setSourceEntity(238U);
    msg.setDestination(30117U);
    msg.setDestinationEntity(243U);
    msg.name.assign("AXIFCZRBNETSMTKOUBHGALWDXLSTYUBOYNHZDQIKRCFONFHANHJXDVNLDLDHJZORSPGGPXHFGWRQLBZCKETPOXIXIVFBDDIYISUGGLWXASVMAURLABMCXKSMFHRLTLMJDHJBVUUKMYRFNCXBPGQAEUFFEKQMFHPQUKMIMVCCYZKOJOOWWYCSSTENENBJSWCQEQPVVPXJVALVOENMNRGJTTYTIZPZPKSWWATGKCBWVOEDARUIQWJYDEZYHYJU");
    msg.op = 141U;
    msg.sched_time = 0.9190379227046898;

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
    msg.setTimeStamp(0.29616566656802124);
    msg.setSource(2137U);
    msg.setSourceEntity(124U);
    msg.setDestination(40507U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.9471065978625439);
    msg.setSource(19524U);
    msg.setSourceEntity(96U);
    msg.setDestination(60441U);
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
    msg.setTimeStamp(0.4740579988432124);
    msg.setSource(17450U);
    msg.setSourceEntity(119U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.7704415401435434);
    msg.setSource(5365U);
    msg.setSourceEntity(59U);
    msg.setDestination(53734U);
    msg.setDestinationEntity(45U);
    msg.name.assign("HZBFFYBSJSTCTDODDREFMNJURWQLAKHHRVXXYLTKLKYKGJQYLZUSNRCTVVIEOVSFQDRGVJZRDOLZAPYMDKHHLIPKMOEVZIDEQUMNBETUACJKIHLGSJXXXFNGODQFWGAGBCPQAHAUOPXVHBQPIZTLGGRMEKUQLVOMGNTZXUSYKBPQWNIIZMGBYXIRTRZASHWCDASVJA");
    msg.state = 61U;

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
    msg.setTimeStamp(0.5898203990742079);
    msg.setSource(64033U);
    msg.setSourceEntity(170U);
    msg.setDestination(5457U);
    msg.setDestinationEntity(106U);
    msg.name.assign("EWNFYAFSRIVPBVXIBIMRMNPPYREFWTVSGRRCOQIEJMQGINPYOBZQBPBVSWCLKJOJNCUWKZHDAVJSNHLTSLWJDQNGKXKEIGPLQPMUGHUUXEZPHOODDQAGZJDFFDGYAQYNFZWYLRMLMICVXCGXMKVBCATCMSXEQPNZTBPUSVLFAUCUXTBINZHKYUAEQOSOLJKRAHHOZKUUHEQRAFZFOTJDGMDTWTTRVDRXBHEMCJS");
    msg.state = 208U;

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
    msg.setTimeStamp(0.1614732933047971);
    msg.setSource(64265U);
    msg.setSourceEntity(232U);
    msg.setDestination(1972U);
    msg.setDestinationEntity(205U);
    msg.name.assign("GMQSJLPRVEHUQAONYQTVMFXLKDLSWZKVDBXWCXKXJHZCHSAG");
    msg.state = 238U;

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
    msg.setTimeStamp(0.532260712403797);
    msg.setSource(46685U);
    msg.setSourceEntity(179U);
    msg.setDestination(33239U);
    msg.setDestinationEntity(89U);
    msg.name.assign("XLKBYJPOXIVHSSXVGQEEHBCNGHWRNLZTQLDKMDCRGEKVLTCVLFTYGQNUSAFSMALAPVZIFFJLWZTPMCQWDLAHIOJPIUXLDAZFJUOCHWQNCBNUUPKFXTNHXD");
    msg.value = 111U;

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
    msg.setTimeStamp(0.6842288776458079);
    msg.setSource(29199U);
    msg.setSourceEntity(161U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(96U);
    msg.name.assign("PRIWECKCWVGNQZSKJPCBGVMZOERIUHGBOJIJNCMQPQWTZHZOWZPYAHPCYTFKSSBXDVCCPLOXUDGXEWLKTHBDUFCQBTIMHGXGMHMNJMBELFEXPNRWOFSIXIVBSASGUAOGUEYNLDKHTBZYLQBNURUSYVRJMQKODFEUJFHEPMZZZLXXRVWMLAJTWIELAFJGKTCPG");
    msg.value = 98U;

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
    msg.setTimeStamp(0.19351007144678967);
    msg.setSource(58224U);
    msg.setSourceEntity(102U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(1U);
    msg.name.assign("JVAYMNVLIUYFIKMMQLBJNLXTBPNPCMNZPFOIDPLOOJBRFTLBEGQEXIHKWJRZZFYOCMSBARUYZUIDEUJYBOCVUWSYZANSSXKTWHIFSAJRH");
    msg.value = 194U;

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
    msg.setTimeStamp(0.4461782941617569);
    msg.setSource(54285U);
    msg.setSourceEntity(25U);
    msg.setDestination(34209U);
    msg.setDestinationEntity(166U);
    msg.name.assign("STDAZHLJDISVOATIDCDVGLNGFCNMNTDKPMVGSNRGYLGRMFQMSEJBCYQLJXUSTKUKQMBCRBERZSHCDRCWWXFOHOHHEJFFWILTTBHTWIXSLIPYUKIPEWJHZLQGEHXZVAZEWNETZQSX");

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
    msg.setTimeStamp(0.5414396657522115);
    msg.setSource(50313U);
    msg.setSourceEntity(100U);
    msg.setDestination(18029U);
    msg.setDestinationEntity(72U);
    msg.name.assign("LTLGVOCCUBWCQMGUZFRPIOTPGSRSGHOGAAULVQEKDOWLSRVFKJDJILMTGXUPFYYIMYMZNTYPRKTCUURDDZASVIVTTCTIZOYXJJEMGJZOPDRBWNUDJNNQFSZPFE");

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
    msg.setTimeStamp(0.44832291158629045);
    msg.setSource(10051U);
    msg.setSourceEntity(53U);
    msg.setDestination(45497U);
    msg.setDestinationEntity(249U);
    msg.name.assign("MGANWSEHZEGVOAUTOWVBMCWSPOKG");

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
    msg.setTimeStamp(0.18424872484634425);
    msg.setSource(37434U);
    msg.setSourceEntity(168U);
    msg.setDestination(51552U);
    msg.setDestinationEntity(224U);
    msg.name.assign("QYZBQPKJMNPVYIQXUXEDTEZYKJIKLKRIOMPKBALSRDOFNZZ");
    msg.value = 234U;

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
    msg.setTimeStamp(0.2717045510193449);
    msg.setSource(3176U);
    msg.setSourceEntity(236U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(148U);
    msg.name.assign("QPUYFONHVKNKGCLSEDWSJNSIGFXSABEYIQWBDAMELZKXZRBRNLJFKYKTDCPVPGHVONYYQYUWTGXVLGXIRAKTSSAOPUHAOVTUEWMCBAJUHJMDMFQBILQBFIAJXKPUXROOVMWUVXTCSCIQTOOIMNGVCBZZTGMRDQHLTNYIXHBPJMUKNQEGVCRWCZFUFUERAJSLWJEFGDYLKXDHLNZAITQYZPDZPWICDTLFKESABGHSJWENWMDMPOOQZRVH");
    msg.value = 28U;

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
    msg.setTimeStamp(0.9617172466728903);
    msg.setSource(63415U);
    msg.setSourceEntity(5U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(29U);
    msg.name.assign("QHFRHBQCZWXJSAPMQFFGWRNOBYGHNSSQFYPLVRPRWECDIOCSGSDJDVDZFEOAGHYLMKJNCLXSQVZTVAGMJYLILEGWNITUHWMOPKEBKUWPXATDFBKVXONXKUEQCIAYEUDRTBUXUXSFNPIHJPOWIHHMKRCJPILXZLBEZRRZGAYCIEOSDQCHWUTZJIXAZBBDRUNHRLFGIWGVNKVBJSTZCQJGDKU");
    msg.value = 83U;

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
    msg.setTimeStamp(0.8450553350047865);
    msg.setSource(44767U);
    msg.setSourceEntity(69U);
    msg.setDestination(40099U);
    msg.setDestinationEntity(7U);
    msg.id = 41U;
    msg.period = 2794653643U;
    msg.duty_cycle = 3551358539U;

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
    msg.setTimeStamp(0.6837912906397174);
    msg.setSource(46427U);
    msg.setSourceEntity(213U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(141U);
    msg.id = 156U;
    msg.period = 1040954442U;
    msg.duty_cycle = 82830159U;

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
    msg.setTimeStamp(0.9739399135845165);
    msg.setSource(3775U);
    msg.setSourceEntity(197U);
    msg.setDestination(34689U);
    msg.setDestinationEntity(15U);
    msg.id = 174U;
    msg.period = 1721542386U;
    msg.duty_cycle = 3655538822U;

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
    msg.setTimeStamp(0.15489998512767533);
    msg.setSource(7486U);
    msg.setSourceEntity(249U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(236U);
    msg.id = 119U;
    msg.period = 1187273682U;
    msg.duty_cycle = 2330593021U;

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
    msg.setTimeStamp(0.66881922691808);
    msg.setSource(29158U);
    msg.setSourceEntity(18U);
    msg.setDestination(1574U);
    msg.setDestinationEntity(182U);
    msg.id = 83U;
    msg.period = 2474832343U;
    msg.duty_cycle = 1718404109U;

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
    msg.setTimeStamp(0.4799700777307113);
    msg.setSource(12377U);
    msg.setSourceEntity(64U);
    msg.setDestination(17097U);
    msg.setDestinationEntity(28U);
    msg.id = 50U;
    msg.period = 3756427601U;
    msg.duty_cycle = 957919057U;

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
    msg.setTimeStamp(0.9148980113432799);
    msg.setSource(46736U);
    msg.setSourceEntity(83U);
    msg.setDestination(37885U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.17557674454069505;
    msg.lon = 0.11353170565498472;
    msg.height = 0.9393863828300288;
    msg.x = 0.8280732839162529;
    msg.y = 0.3913065698959334;
    msg.z = 0.053568591169347646;
    msg.phi = 0.574389244989991;
    msg.theta = 0.834630399668965;
    msg.psi = 0.5470136781451335;
    msg.u = 0.6387073911164984;
    msg.v = 0.3524398161410234;
    msg.w = 0.6050931896047542;
    msg.vx = 0.42242851473360976;
    msg.vy = 0.3411643316254225;
    msg.vz = 0.06298482136962968;
    msg.p = 0.907347644119865;
    msg.q = 0.49119045934617134;
    msg.r = 0.5309137742002029;
    msg.depth = 0.5948695840249288;
    msg.alt = 0.9599157954093083;

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
    msg.setTimeStamp(0.6701734202031528);
    msg.setSource(54991U);
    msg.setSourceEntity(223U);
    msg.setDestination(42363U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.12607041993871715;
    msg.lon = 0.46672848398171596;
    msg.height = 0.045644754005127686;
    msg.x = 0.9770612789459453;
    msg.y = 0.7123761500682806;
    msg.z = 0.6019763381771717;
    msg.phi = 0.32767234789843513;
    msg.theta = 0.248271688255559;
    msg.psi = 0.6788095717282431;
    msg.u = 0.7384607366763767;
    msg.v = 0.9671411831458613;
    msg.w = 0.3259366650472927;
    msg.vx = 0.2570634232884522;
    msg.vy = 0.9308344932620689;
    msg.vz = 0.47526260160142864;
    msg.p = 0.8531366647007125;
    msg.q = 0.07608621529345838;
    msg.r = 0.1711793535717493;
    msg.depth = 0.7327488714495805;
    msg.alt = 0.35550068216727015;

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
    msg.setTimeStamp(0.40355085809437063);
    msg.setSource(61648U);
    msg.setSourceEntity(141U);
    msg.setDestination(37683U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.021697689916730156;
    msg.lon = 0.3045198265508401;
    msg.height = 0.6186905340706204;
    msg.x = 0.16204774824304635;
    msg.y = 0.16309344606584275;
    msg.z = 0.5861057880938422;
    msg.phi = 0.4891904853108737;
    msg.theta = 0.7481553566061321;
    msg.psi = 0.009515778742733239;
    msg.u = 0.708171202452487;
    msg.v = 0.7471700978627462;
    msg.w = 0.5006499264905365;
    msg.vx = 0.9548946005896404;
    msg.vy = 0.3659156298788545;
    msg.vz = 0.8977781819501928;
    msg.p = 0.9285981871912945;
    msg.q = 0.8188801294917215;
    msg.r = 0.24963670673556593;
    msg.depth = 0.7682704060155424;
    msg.alt = 0.6131160425278205;

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
    msg.setTimeStamp(0.7225834925165635);
    msg.setSource(54561U);
    msg.setSourceEntity(5U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(84U);
    msg.x = 0.1030102746386371;
    msg.y = 0.023932871518713594;
    msg.z = 0.9208570477032993;

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
    msg.setTimeStamp(0.9400027805129143);
    msg.setSource(37861U);
    msg.setSourceEntity(136U);
    msg.setDestination(5921U);
    msg.setDestinationEntity(9U);
    msg.x = 0.9859174223624061;
    msg.y = 0.9213749802566032;
    msg.z = 0.8375555521370927;

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
    msg.setTimeStamp(0.333228512395504);
    msg.setSource(18476U);
    msg.setSourceEntity(62U);
    msg.setDestination(45121U);
    msg.setDestinationEntity(112U);
    msg.x = 0.4864371543459337;
    msg.y = 0.8695766323620369;
    msg.z = 0.8300447931213717;

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
    msg.setTimeStamp(0.4486157021404259);
    msg.setSource(60578U);
    msg.setSourceEntity(115U);
    msg.setDestination(38379U);
    msg.setDestinationEntity(211U);
    msg.value = 0.920360599519142;

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
    msg.setTimeStamp(0.40959980719524425);
    msg.setSource(15370U);
    msg.setSourceEntity(247U);
    msg.setDestination(23542U);
    msg.setDestinationEntity(130U);
    msg.value = 0.04910726131062115;

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
    msg.setTimeStamp(0.25795486809236945);
    msg.setSource(9574U);
    msg.setSourceEntity(32U);
    msg.setDestination(47589U);
    msg.setDestinationEntity(211U);
    msg.value = 0.15333882787539221;

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
    msg.setTimeStamp(0.4725261861272534);
    msg.setSource(11443U);
    msg.setSourceEntity(210U);
    msg.setDestination(26413U);
    msg.setDestinationEntity(249U);
    msg.value = 0.3254168903046476;

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
    msg.setTimeStamp(0.09266063484317988);
    msg.setSource(13894U);
    msg.setSourceEntity(140U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6214323919120426;

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
    msg.setTimeStamp(0.7225400735238079);
    msg.setSource(37419U);
    msg.setSourceEntity(183U);
    msg.setDestination(31246U);
    msg.setDestinationEntity(18U);
    msg.value = 0.1648678580918309;

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
    msg.setTimeStamp(0.7623889753000355);
    msg.setSource(64874U);
    msg.setSourceEntity(106U);
    msg.setDestination(30845U);
    msg.setDestinationEntity(63U);
    msg.x = 0.3302708769023591;
    msg.y = 0.9767245400678353;
    msg.z = 0.760745789524273;
    msg.phi = 0.15353141083454624;
    msg.theta = 0.21123155504958002;
    msg.psi = 0.9551751393567556;
    msg.p = 0.3394803299017075;
    msg.q = 0.8217344733220326;
    msg.r = 0.37400628774058264;
    msg.u = 0.5651860160832519;
    msg.v = 0.36456037110296624;
    msg.w = 0.3102253775991233;
    msg.bias_psi = 0.0025986227867289546;
    msg.bias_r = 0.7981410010765349;

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
    msg.setTimeStamp(0.9027274385393697);
    msg.setSource(22504U);
    msg.setSourceEntity(13U);
    msg.setDestination(9793U);
    msg.setDestinationEntity(1U);
    msg.x = 0.19870204916736578;
    msg.y = 0.4428380169506735;
    msg.z = 0.0017849157494600476;
    msg.phi = 0.5011255748306335;
    msg.theta = 0.7440579258782545;
    msg.psi = 0.4720312923722718;
    msg.p = 0.5905442956340384;
    msg.q = 0.04551579748129475;
    msg.r = 0.13866970886247187;
    msg.u = 0.4721538170543875;
    msg.v = 0.875152676416542;
    msg.w = 0.17417891605119384;
    msg.bias_psi = 0.9595107599880209;
    msg.bias_r = 0.6911556586264795;

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
    msg.setTimeStamp(0.8092344997724275);
    msg.setSource(1683U);
    msg.setSourceEntity(184U);
    msg.setDestination(9850U);
    msg.setDestinationEntity(2U);
    msg.x = 0.7260494008633478;
    msg.y = 0.8579296790634051;
    msg.z = 0.4814623312823655;
    msg.phi = 0.5722214545013637;
    msg.theta = 0.5222606821423379;
    msg.psi = 0.8167080737757656;
    msg.p = 0.15293082876136666;
    msg.q = 0.3383865874522939;
    msg.r = 0.9448769695995323;
    msg.u = 0.21482775090289308;
    msg.v = 0.48495954551709186;
    msg.w = 0.411942620967061;
    msg.bias_psi = 0.7570096908600025;
    msg.bias_r = 0.22408421628288655;

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
    msg.setTimeStamp(0.22871315156105887);
    msg.setSource(22099U);
    msg.setSourceEntity(212U);
    msg.setDestination(21570U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.2983346855761536;
    msg.bias_r = 0.701889068212602;
    msg.cog = 0.141793392695991;
    msg.cyaw = 0.774993242539906;
    msg.lbl_rej_level = 0.8975823265852074;
    msg.gps_rej_level = 0.37001175602946945;
    msg.custom_x = 0.8668703822486526;
    msg.custom_y = 0.4949718598080798;
    msg.custom_z = 0.8853548249127866;

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
    msg.setTimeStamp(0.6312627150073181);
    msg.setSource(34799U);
    msg.setSourceEntity(240U);
    msg.setDestination(16022U);
    msg.setDestinationEntity(172U);
    msg.bias_psi = 0.08357460637754743;
    msg.bias_r = 0.6990663997114402;
    msg.cog = 0.29873411061199706;
    msg.cyaw = 0.6587874995778498;
    msg.lbl_rej_level = 0.2791518305863194;
    msg.gps_rej_level = 0.622590462794079;
    msg.custom_x = 0.18804502818227498;
    msg.custom_y = 0.21542212113968395;
    msg.custom_z = 0.9812581961807305;

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
    msg.setTimeStamp(0.9426278700601161);
    msg.setSource(23273U);
    msg.setSourceEntity(19U);
    msg.setDestination(65327U);
    msg.setDestinationEntity(87U);
    msg.bias_psi = 0.5558688038485551;
    msg.bias_r = 0.11667474666773958;
    msg.cog = 0.1814771084302439;
    msg.cyaw = 0.9390320807085211;
    msg.lbl_rej_level = 0.39422392654839167;
    msg.gps_rej_level = 0.033603822579076126;
    msg.custom_x = 0.5844258832865693;
    msg.custom_y = 0.6291390550094939;
    msg.custom_z = 0.05396095892091801;

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
    msg.setTimeStamp(0.6771214234546299);
    msg.setSource(13836U);
    msg.setSourceEntity(190U);
    msg.setDestination(4453U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.7436539721122788;
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
    msg.setTimeStamp(0.06469765120752113);
    msg.setSource(52912U);
    msg.setSourceEntity(249U);
    msg.setDestination(9061U);
    msg.setDestinationEntity(247U);
    msg.utc_time = 0.9418244760895491;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.1717859974104604);
    msg.setSource(7130U);
    msg.setSourceEntity(25U);
    msg.setDestination(51702U);
    msg.setDestinationEntity(229U);
    msg.utc_time = 0.04233090350341917;
    msg.reason = 190U;

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
    msg.setTimeStamp(0.7995226012581177);
    msg.setSource(29453U);
    msg.setSourceEntity(196U);
    msg.setDestination(26853U);
    msg.setDestinationEntity(192U);
    msg.id = 228U;
    msg.range = 0.6319395076717427;
    msg.acceptance = 185U;

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
    msg.setTimeStamp(0.4455313531299955);
    msg.setSource(43603U);
    msg.setSourceEntity(122U);
    msg.setDestination(34687U);
    msg.setDestinationEntity(221U);
    msg.id = 71U;
    msg.range = 0.5812812518932148;
    msg.acceptance = 43U;

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
    msg.setTimeStamp(0.38554594110981);
    msg.setSource(9439U);
    msg.setSourceEntity(170U);
    msg.setDestination(5792U);
    msg.setDestinationEntity(34U);
    msg.id = 16U;
    msg.range = 0.25692090976384485;
    msg.acceptance = 246U;

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
    msg.setTimeStamp(0.5720923450190895);
    msg.setSource(17700U);
    msg.setSourceEntity(99U);
    msg.setDestination(19750U);
    msg.setDestinationEntity(128U);
    msg.type = 153U;
    msg.reason = 228U;
    msg.value = 0.5713001732456714;
    msg.timestep = 0.7203604103688462;

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
    msg.setTimeStamp(0.7402602561087834);
    msg.setSource(45917U);
    msg.setSourceEntity(31U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(243U);
    msg.type = 89U;
    msg.reason = 20U;
    msg.value = 0.39811910448698007;
    msg.timestep = 0.5691703052441637;

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
    msg.setTimeStamp(0.456239418549342);
    msg.setSource(4379U);
    msg.setSourceEntity(188U);
    msg.setDestination(62608U);
    msg.setDestinationEntity(196U);
    msg.type = 233U;
    msg.reason = 36U;
    msg.value = 0.4281220670281082;
    msg.timestep = 0.030553994637235404;

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
    msg.setTimeStamp(0.713691261433176);
    msg.setSource(50926U);
    msg.setSourceEntity(53U);
    msg.setDestination(56970U);
    msg.setDestinationEntity(25U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZUBZPXLAWZVDHUOIXMJIJCXTTERZWMT");
    tmp_msg_0.lat = 0.6299758211096835;
    tmp_msg_0.lon = 0.5722441199165604;
    tmp_msg_0.depth = 0.6835037671451774;
    tmp_msg_0.query_channel = 66U;
    tmp_msg_0.reply_channel = 123U;
    tmp_msg_0.transponder_delay = 80U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6763178086162573;
    msg.y = 0.379394714659674;
    msg.var_x = 0.9888347865668653;
    msg.var_y = 0.4147544731634447;
    msg.distance = 0.2325900570240883;

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
    msg.setTimeStamp(0.1695069876351426);
    msg.setSource(35505U);
    msg.setSourceEntity(106U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(24U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VFSYDWSBDZWQBEVXTMJOZUHGHAZRMFNSMAOPJPGPFJBPBPDEPXIOGCUZCYMHRWQOZUMJVOACRHXHFSDSUDLDTFMZLLBXAYEIQOKBRTAAHQHIFOEWWIIVKLXYTKTCKDIXECCPFUKRV");
    tmp_msg_0.lat = 0.06729156941333281;
    tmp_msg_0.lon = 0.43824455967459053;
    tmp_msg_0.depth = 0.7009699653067213;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 214U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5687337411308383;
    msg.y = 0.4533847643237844;
    msg.var_x = 0.2289320932020501;
    msg.var_y = 0.5489278961845317;
    msg.distance = 0.6434059177583904;

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
    msg.setTimeStamp(0.18726626548339387);
    msg.setSource(58730U);
    msg.setSourceEntity(20U);
    msg.setDestination(50179U);
    msg.setDestinationEntity(189U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GJOPATSEBOXBIAVHFNUZNUACNZWLSTOXMVZYDBMRDVFPSXNKPFKRWBOGCIKEDVKNBDGMNAYJJXRPPUTHJCLDKUPBFFZBAGWLYPJIZRXUWQIYASTCZPNRKHEMVKWLYHQGMMROCYHYHXBEJHHX");
    tmp_msg_0.lat = 0.7598763552029941;
    tmp_msg_0.lon = 0.8729757585625605;
    tmp_msg_0.depth = 0.9222174998514517;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 221U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9049107372844306;
    msg.y = 0.685661764410748;
    msg.var_x = 0.9453089137200246;
    msg.var_y = 0.12669153965357083;
    msg.distance = 0.5920596310002804;

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
    msg.setTimeStamp(0.9169700626325906);
    msg.setSource(4399U);
    msg.setSourceEntity(254U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(65U);
    msg.state = 111U;

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
    msg.setTimeStamp(0.47483569697543127);
    msg.setSource(24084U);
    msg.setSourceEntity(163U);
    msg.setDestination(15954U);
    msg.setDestinationEntity(150U);
    msg.state = 207U;

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
    msg.setTimeStamp(0.5516352484355603);
    msg.setSource(50852U);
    msg.setSourceEntity(128U);
    msg.setDestination(62101U);
    msg.setDestinationEntity(112U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.27226472043826155);
    msg.setSource(64330U);
    msg.setSourceEntity(177U);
    msg.setDestination(59387U);
    msg.setDestinationEntity(127U);
    msg.x = 0.4441725962642945;
    msg.y = 0.27089826209265855;
    msg.z = 0.7700885373662723;

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
    msg.setTimeStamp(0.6415779039647863);
    msg.setSource(48215U);
    msg.setSourceEntity(70U);
    msg.setDestination(39523U);
    msg.setDestinationEntity(220U);
    msg.x = 0.22071137963514975;
    msg.y = 0.456695133842149;
    msg.z = 0.7890959487179011;

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
    msg.setTimeStamp(0.2104962660943599);
    msg.setSource(56463U);
    msg.setSourceEntity(31U);
    msg.setDestination(3345U);
    msg.setDestinationEntity(172U);
    msg.x = 0.05141547365947996;
    msg.y = 0.395788116938552;
    msg.z = 0.5110294699985728;

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
    msg.setTimeStamp(0.751181668863863);
    msg.setSource(45008U);
    msg.setSourceEntity(125U);
    msg.setDestination(22277U);
    msg.setDestinationEntity(159U);
    msg.va = 0.9329176816501343;
    msg.aoa = 0.4443383121105946;
    msg.ssa = 0.9859424837396991;

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
    msg.setTimeStamp(0.9106180487892068);
    msg.setSource(27479U);
    msg.setSourceEntity(133U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(103U);
    msg.va = 0.8688119801134853;
    msg.aoa = 0.4569325781519097;
    msg.ssa = 0.40030377794397765;

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
    msg.setTimeStamp(0.43898386881059637);
    msg.setSource(42619U);
    msg.setSourceEntity(45U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(231U);
    msg.va = 0.7498928714951884;
    msg.aoa = 0.2349949871121766;
    msg.ssa = 0.8882538425327423;

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
    msg.setTimeStamp(0.0023342926798081143);
    msg.setSource(37534U);
    msg.setSourceEntity(250U);
    msg.setDestination(48887U);
    msg.setDestinationEntity(142U);
    msg.value = 0.0021461261300351753;

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
    msg.setTimeStamp(0.6524310259221763);
    msg.setSource(47144U);
    msg.setSourceEntity(42U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9088497213154212;

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
    msg.setTimeStamp(0.5614441677132811);
    msg.setSource(35961U);
    msg.setSourceEntity(50U);
    msg.setDestination(8078U);
    msg.setDestinationEntity(216U);
    msg.value = 0.22537670341303861;

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
    msg.setTimeStamp(0.3857999188700919);
    msg.setSource(30085U);
    msg.setSourceEntity(164U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(98U);
    msg.value = 0.47814010325791645;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.4343354814064636);
    msg.setSource(12448U);
    msg.setSourceEntity(216U);
    msg.setDestination(56563U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6234947404853074;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.37307129809884665);
    msg.setSource(6021U);
    msg.setSourceEntity(130U);
    msg.setDestination(63632U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7254183143351473;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.3207490426278492);
    msg.setSource(47029U);
    msg.setSourceEntity(198U);
    msg.setDestination(9247U);
    msg.setDestinationEntity(164U);
    msg.value = 0.871312759819367;
    msg.speed_units = 140U;

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
    msg.setTimeStamp(0.8980495171318861);
    msg.setSource(63711U);
    msg.setSourceEntity(140U);
    msg.setDestination(39996U);
    msg.setDestinationEntity(121U);
    msg.value = 0.39112058783349746;
    msg.speed_units = 173U;

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
    msg.setTimeStamp(0.006378649436967199);
    msg.setSource(54653U);
    msg.setSourceEntity(62U);
    msg.setDestination(4816U);
    msg.setDestinationEntity(168U);
    msg.value = 0.07922398122966723;
    msg.speed_units = 219U;

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
    msg.setTimeStamp(0.5461148497963382);
    msg.setSource(41147U);
    msg.setSourceEntity(82U);
    msg.setDestination(25175U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8121508731630059;

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
    msg.setTimeStamp(0.7330917821779929);
    msg.setSource(368U);
    msg.setSourceEntity(165U);
    msg.setDestination(17274U);
    msg.setDestinationEntity(220U);
    msg.value = 0.5838357931027742;

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
    msg.setTimeStamp(0.7202261057585237);
    msg.setSource(10877U);
    msg.setSourceEntity(138U);
    msg.setDestination(31966U);
    msg.setDestinationEntity(252U);
    msg.value = 0.715573299876316;

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
    msg.setTimeStamp(0.556106434020677);
    msg.setSource(21143U);
    msg.setSourceEntity(11U);
    msg.setDestination(45377U);
    msg.setDestinationEntity(231U);
    msg.value = 0.2303723341066466;

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
    msg.setTimeStamp(0.6067506445896054);
    msg.setSource(14420U);
    msg.setSourceEntity(182U);
    msg.setDestination(57200U);
    msg.setDestinationEntity(166U);
    msg.value = 0.1368629060988511;

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
    msg.setTimeStamp(0.9895269141561365);
    msg.setSource(61720U);
    msg.setSourceEntity(131U);
    msg.setDestination(7684U);
    msg.setDestinationEntity(45U);
    msg.value = 0.8176296646012402;

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
    msg.setTimeStamp(0.321128290840603);
    msg.setSource(54730U);
    msg.setSourceEntity(75U);
    msg.setDestination(27203U);
    msg.setDestinationEntity(170U);
    msg.value = 0.42498595837933906;

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
    msg.setTimeStamp(0.7162623042354831);
    msg.setSource(53706U);
    msg.setSourceEntity(171U);
    msg.setDestination(15527U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5512639940554878;

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
    msg.setTimeStamp(0.9298384922222783);
    msg.setSource(60492U);
    msg.setSourceEntity(140U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(67U);
    msg.value = 0.2734371059820069;

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
    msg.setTimeStamp(0.04756293098441566);
    msg.setSource(50376U);
    msg.setSourceEntity(55U);
    msg.setDestination(33021U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 2406670730U;
    msg.start_lat = 0.010507072776240856;
    msg.start_lon = 0.8317677987653481;
    msg.start_z = 0.35427341709260307;
    msg.start_z_units = 206U;
    msg.end_lat = 0.5330166914114097;
    msg.end_lon = 0.295931938645395;
    msg.end_z = 0.314631393566001;
    msg.end_z_units = 63U;
    msg.speed = 0.6100537112341441;
    msg.speed_units = 80U;
    msg.lradius = 0.481657168993452;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.7100159857559509);
    msg.setSource(4817U);
    msg.setSourceEntity(121U);
    msg.setDestination(39178U);
    msg.setDestinationEntity(242U);
    msg.path_ref = 1154708091U;
    msg.start_lat = 0.861052834395982;
    msg.start_lon = 0.6818062151716605;
    msg.start_z = 0.523172865815859;
    msg.start_z_units = 243U;
    msg.end_lat = 0.05469012771246007;
    msg.end_lon = 0.9810693744268337;
    msg.end_z = 0.2130037512722639;
    msg.end_z_units = 100U;
    msg.speed = 0.747818126347258;
    msg.speed_units = 65U;
    msg.lradius = 0.8909840560253949;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.5262832415622651);
    msg.setSource(21195U);
    msg.setSourceEntity(185U);
    msg.setDestination(41918U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 2870638647U;
    msg.start_lat = 0.009712457398528329;
    msg.start_lon = 0.8762800347533263;
    msg.start_z = 0.5068254405734445;
    msg.start_z_units = 148U;
    msg.end_lat = 0.31599329816811117;
    msg.end_lon = 0.9247999746499297;
    msg.end_z = 0.2311628865293348;
    msg.end_z_units = 125U;
    msg.speed = 0.6115924418028035;
    msg.speed_units = 251U;
    msg.lradius = 0.3343544369539122;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.4610015521992511);
    msg.setSource(47170U);
    msg.setSourceEntity(222U);
    msg.setDestination(16780U);
    msg.setDestinationEntity(150U);
    msg.x = 0.049307470202888726;
    msg.y = 0.7663892351227166;
    msg.z = 0.736640286401978;
    msg.k = 0.5433880684057608;
    msg.m = 0.06876104651146475;
    msg.n = 0.5005788457971965;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.5097918632312464);
    msg.setSource(29146U);
    msg.setSourceEntity(45U);
    msg.setDestination(603U);
    msg.setDestinationEntity(242U);
    msg.x = 0.7588090919814003;
    msg.y = 0.8117343452688172;
    msg.z = 0.9517870095973084;
    msg.k = 0.2546144834152647;
    msg.m = 0.4734465020362201;
    msg.n = 0.9061142083691233;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.873666907935944);
    msg.setSource(64986U);
    msg.setSourceEntity(144U);
    msg.setDestination(16939U);
    msg.setDestinationEntity(240U);
    msg.x = 0.1708468465404812;
    msg.y = 0.9773111534473237;
    msg.z = 0.37549374345854525;
    msg.k = 0.8105542186625947;
    msg.m = 0.24354231392645598;
    msg.n = 0.8181759542472624;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.8980721968893268);
    msg.setSource(5014U);
    msg.setSourceEntity(127U);
    msg.setDestination(47783U);
    msg.setDestinationEntity(194U);
    msg.value = 0.26086128271981124;

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
    msg.setTimeStamp(0.7137074553122239);
    msg.setSource(29851U);
    msg.setSourceEntity(128U);
    msg.setDestination(34114U);
    msg.setDestinationEntity(216U);
    msg.value = 0.30503809782779456;

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
    msg.setTimeStamp(0.3622383328868093);
    msg.setSource(19001U);
    msg.setSourceEntity(180U);
    msg.setDestination(64968U);
    msg.setDestinationEntity(7U);
    msg.value = 0.214733188197209;

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
    msg.setTimeStamp(0.4477194282431014);
    msg.setSource(28609U);
    msg.setSourceEntity(105U);
    msg.setDestination(50158U);
    msg.setDestinationEntity(161U);
    msg.u = 0.1316798089553891;
    msg.v = 0.6748931506657692;
    msg.w = 0.002700779071197368;
    msg.p = 0.10672256405274738;
    msg.q = 0.5513568585922662;
    msg.r = 0.4482080779083304;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.45081339312014634);
    msg.setSource(15825U);
    msg.setSourceEntity(79U);
    msg.setDestination(23048U);
    msg.setDestinationEntity(216U);
    msg.u = 0.06173628207502724;
    msg.v = 0.22070635628747615;
    msg.w = 0.538316565674523;
    msg.p = 0.9327178355662706;
    msg.q = 0.8366219668696234;
    msg.r = 0.4076923233528511;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.9020719598641475);
    msg.setSource(42153U);
    msg.setSourceEntity(34U);
    msg.setDestination(40590U);
    msg.setDestinationEntity(46U);
    msg.u = 0.839105889813778;
    msg.v = 0.7573092954295199;
    msg.w = 0.6070337024992478;
    msg.p = 0.6658696770969602;
    msg.q = 0.7285872887562259;
    msg.r = 0.6805545853523713;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.8693325765337252);
    msg.setSource(28462U);
    msg.setSourceEntity(146U);
    msg.setDestination(26663U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 3899166529U;
    msg.start_lat = 0.014722755994588055;
    msg.start_lon = 0.9842156516250017;
    msg.start_z = 0.6020425300531196;
    msg.start_z_units = 82U;
    msg.end_lat = 0.31319024441049415;
    msg.end_lon = 0.6298700425050711;
    msg.end_z = 0.5115914113516312;
    msg.end_z_units = 25U;
    msg.lradius = 0.20594073679868297;
    msg.flags = 225U;
    msg.x = 0.8489124057606756;
    msg.y = 0.9446939085550391;
    msg.z = 0.2705065240698177;
    msg.vx = 0.44060329495753126;
    msg.vy = 0.08534115715021029;
    msg.vz = 0.9687015005327579;
    msg.course_error = 0.6464775337303353;
    msg.eta = 2035U;

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
    msg.setTimeStamp(0.22605675355625943);
    msg.setSource(49202U);
    msg.setSourceEntity(175U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 2227840252U;
    msg.start_lat = 0.3812055960270463;
    msg.start_lon = 0.3751423777853913;
    msg.start_z = 0.4040119677422431;
    msg.start_z_units = 125U;
    msg.end_lat = 0.7657700308532812;
    msg.end_lon = 0.037137638883496304;
    msg.end_z = 0.419926446386499;
    msg.end_z_units = 146U;
    msg.lradius = 0.3390355247308846;
    msg.flags = 157U;
    msg.x = 0.8324372604821102;
    msg.y = 0.7106875338133453;
    msg.z = 0.5226959083533707;
    msg.vx = 0.7784002633324089;
    msg.vy = 0.9993019964334922;
    msg.vz = 0.6719482281947058;
    msg.course_error = 0.9900260496386742;
    msg.eta = 3617U;

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
    msg.setTimeStamp(0.44616794441755114);
    msg.setSource(16036U);
    msg.setSourceEntity(17U);
    msg.setDestination(43446U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 3635999895U;
    msg.start_lat = 0.01970831303304932;
    msg.start_lon = 0.43165094255199055;
    msg.start_z = 0.904510189121137;
    msg.start_z_units = 90U;
    msg.end_lat = 0.9307844166332905;
    msg.end_lon = 0.7510737641208256;
    msg.end_z = 0.5053852698720562;
    msg.end_z_units = 12U;
    msg.lradius = 0.5539839412981911;
    msg.flags = 138U;
    msg.x = 0.8964287721022542;
    msg.y = 0.08738542163373986;
    msg.z = 0.9801861395989945;
    msg.vx = 0.41204499996736754;
    msg.vy = 0.9039414533103777;
    msg.vz = 0.741186538492273;
    msg.course_error = 0.42657371532731336;
    msg.eta = 48477U;

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
    msg.setTimeStamp(0.040674676496440854);
    msg.setSource(22503U);
    msg.setSourceEntity(94U);
    msg.setDestination(63319U);
    msg.setDestinationEntity(153U);
    msg.k = 0.2952749791878152;
    msg.m = 0.554300179523747;
    msg.n = 0.03849301370762981;

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
    msg.setTimeStamp(0.5935560481246875);
    msg.setSource(18064U);
    msg.setSourceEntity(101U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(212U);
    msg.k = 0.2820000828367304;
    msg.m = 0.5506644520519323;
    msg.n = 0.4897995833559494;

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
    msg.setTimeStamp(0.8926089508590928);
    msg.setSource(53518U);
    msg.setSourceEntity(36U);
    msg.setDestination(65214U);
    msg.setDestinationEntity(1U);
    msg.k = 0.6807740177097408;
    msg.m = 0.505698903026857;
    msg.n = 0.8027843659575565;

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
    msg.setTimeStamp(0.06358416156811353);
    msg.setSource(44328U);
    msg.setSourceEntity(138U);
    msg.setDestination(45404U);
    msg.setDestinationEntity(187U);
    msg.p = 0.4004058205291008;
    msg.i = 0.06079454460283806;
    msg.d = 0.17165303164887025;
    msg.a = 0.7133633296445266;

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
    msg.setTimeStamp(0.512733470695486);
    msg.setSource(42818U);
    msg.setSourceEntity(66U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(147U);
    msg.p = 0.4400812272332;
    msg.i = 0.2210439756055974;
    msg.d = 0.483853093858455;
    msg.a = 0.14298861114324823;

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
    msg.setTimeStamp(0.6575678576327452);
    msg.setSource(901U);
    msg.setSourceEntity(67U);
    msg.setDestination(23264U);
    msg.setDestinationEntity(186U);
    msg.p = 0.46362968603672416;
    msg.i = 0.9943865341768926;
    msg.d = 0.28244898000294705;
    msg.a = 0.8803587610229946;

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
    msg.setTimeStamp(0.07693390101292796);
    msg.setSource(25873U);
    msg.setSourceEntity(35U);
    msg.setDestination(8809U);
    msg.setDestinationEntity(6U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.7116848865059099);
    msg.setSource(9766U);
    msg.setSourceEntity(163U);
    msg.setDestination(6545U);
    msg.setDestinationEntity(134U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.550837365143607);
    msg.setSource(7755U);
    msg.setSourceEntity(23U);
    msg.setDestination(9219U);
    msg.setDestinationEntity(69U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.45058448793734907);
    msg.setSource(9916U);
    msg.setSourceEntity(192U);
    msg.setDestination(43627U);
    msg.setDestinationEntity(64U);
    msg.x = 0.37049671110516336;
    msg.y = 0.9631037642776654;
    msg.z = 0.6789625870091746;
    msg.vx = 0.7852397243932219;
    msg.vy = 0.14093771895187523;
    msg.vz = 0.969720507847812;
    msg.ax = 0.1021561178958782;
    msg.ay = 0.6663052419355368;
    msg.az = 0.015181937522725009;
    msg.flags = 5219U;

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
    msg.setTimeStamp(0.909211999749164);
    msg.setSource(27286U);
    msg.setSourceEntity(240U);
    msg.setDestination(44838U);
    msg.setDestinationEntity(232U);
    msg.x = 0.41905284185566716;
    msg.y = 0.21288976804304083;
    msg.z = 0.22595283915510322;
    msg.vx = 0.04441759106425047;
    msg.vy = 0.22599753932407007;
    msg.vz = 0.37287749249506563;
    msg.ax = 0.3798425278741817;
    msg.ay = 0.5956931144807147;
    msg.az = 0.5559639566751856;
    msg.flags = 38430U;

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
    msg.setTimeStamp(0.3125767449346133);
    msg.setSource(23138U);
    msg.setSourceEntity(53U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(116U);
    msg.x = 0.29977763881680153;
    msg.y = 0.8540033134248475;
    msg.z = 0.0020437886459304666;
    msg.vx = 0.19715870554420978;
    msg.vy = 0.6892234164535532;
    msg.vz = 0.6769152123598138;
    msg.ax = 0.23879055283943829;
    msg.ay = 0.12755958323215888;
    msg.az = 0.07404057706263745;
    msg.flags = 30U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.1684965539142248);
    msg.setSource(18498U);
    msg.setSourceEntity(4U);
    msg.setDestination(38462U);
    msg.setDestinationEntity(50U);
    msg.timeout = 42992U;
    msg.lat = 0.8966779798626515;
    msg.lon = 0.29986966522082115;
    msg.z = 0.37000656734454784;
    msg.z_units = 205U;
    msg.speed = 0.7682861889623485;
    msg.speed_units = 95U;
    msg.roll = 0.49662584092489115;
    msg.pitch = 0.7633258037628369;
    msg.yaw = 0.855496582977438;
    msg.custom.assign("CBYXROHKCVSDAZDXTDNWKDAIAARPDUWBGYJYFEIMOFFYATQJULQDHMUHKZXNGKUJEBTZMSTQI");

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
    msg.setTimeStamp(0.7582727936336975);
    msg.setSource(64660U);
    msg.setSourceEntity(147U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(140U);
    msg.timeout = 17590U;
    msg.lat = 0.5343243672068317;
    msg.lon = 0.45444140003077604;
    msg.z = 0.8832941400911175;
    msg.z_units = 11U;
    msg.speed = 0.907065192049419;
    msg.speed_units = 38U;
    msg.roll = 0.9697832232240523;
    msg.pitch = 0.004930794143022776;
    msg.yaw = 0.0884075812753562;
    msg.custom.assign("XXDMEOWMGCOEOWQLMDAZHWTPDZXITXJUSUHLRZRWCTNUVKPFRCQMBNPFJRQZRHJWWNVLLOUZGQMYUVBBEMCKOPEYIFGFYIVDSSOITPJNANRPSOCHJQZEGCRSXHXYWKGMYRQFYWBJGVYTTLARY");

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
    msg.setTimeStamp(0.9739427804791202);
    msg.setSource(64813U);
    msg.setSourceEntity(94U);
    msg.setDestination(22427U);
    msg.setDestinationEntity(57U);
    msg.timeout = 64050U;
    msg.lat = 0.7013597920554125;
    msg.lon = 0.7358425059652614;
    msg.z = 0.5962332478030977;
    msg.z_units = 241U;
    msg.speed = 0.47525828789936875;
    msg.speed_units = 185U;
    msg.roll = 0.31915630997056665;
    msg.pitch = 0.8561962302016227;
    msg.yaw = 0.6889302596189558;
    msg.custom.assign("DFBWZDNCOKHFLJGVDJAUNYRUSZIYCXMESXUGPNDFBWXSHQOKNPGOTZXLLBOGXHRZWTGYBRQZJTMXWSKCTJTPNWMFYWBYQSSMOQTKGDUFVYCESTGZPVEAPKEFGKLVVBOWAHJQMAIXAKXDNMSHLYPIXYUKEAVSCALOLAFPZLJMYDBRAMEIUSXZLPZEGRUIUR");

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
    msg.setTimeStamp(0.5047252015019645);
    msg.setSource(61650U);
    msg.setSourceEntity(101U);
    msg.setDestination(45157U);
    msg.setDestinationEntity(233U);
    msg.timeout = 28529U;
    msg.lat = 0.8995752935569405;
    msg.lon = 0.8203384980220946;
    msg.z = 0.9286340362021817;
    msg.z_units = 130U;
    msg.speed = 0.11724916075911629;
    msg.speed_units = 113U;
    msg.duration = 46155U;
    msg.radius = 0.3921484048227182;
    msg.flags = 101U;
    msg.custom.assign("JEUAPZRZBMRHBQHKPJJHNURGJXWEGLPNMTXVDAPMXCGIKYIWVFXLFMYNOGVSQQOTGEVXZPYQWMLWUUQFIEKKOASSHHDNTHQLHE");

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
    msg.setTimeStamp(0.45202390397514935);
    msg.setSource(1414U);
    msg.setSourceEntity(111U);
    msg.setDestination(9062U);
    msg.setDestinationEntity(173U);
    msg.timeout = 11652U;
    msg.lat = 0.8076336001705994;
    msg.lon = 0.9413809856291466;
    msg.z = 0.5011051605764433;
    msg.z_units = 47U;
    msg.speed = 0.9451282084645147;
    msg.speed_units = 241U;
    msg.duration = 6264U;
    msg.radius = 0.5691370222311564;
    msg.flags = 10U;
    msg.custom.assign("CDZWVFIYLXBOXIYAPICIOJUHSRRPYWSRPJBIZVSOIDLZMRIVTAAGFLNBKEPUHAFYPMMTYCOETEGVFDNAKHJQXNZTGZHJSFBDRQTXWGPMJOPMUNMDJWFKSGUETDWLTTWHQHBOJVECQAQZLCQYYCHXUAYEHLBVBKQNLYUDZGWLKUY");

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
    msg.setTimeStamp(0.35509363414465134);
    msg.setSource(29964U);
    msg.setSourceEntity(7U);
    msg.setDestination(16022U);
    msg.setDestinationEntity(232U);
    msg.timeout = 4680U;
    msg.lat = 0.26094344528834745;
    msg.lon = 0.17929813738358646;
    msg.z = 0.334148476026349;
    msg.z_units = 37U;
    msg.speed = 0.9096583111799796;
    msg.speed_units = 196U;
    msg.duration = 26801U;
    msg.radius = 0.5894522408256757;
    msg.flags = 5U;
    msg.custom.assign("CMSIBOOZDOSHIDZUXDKESYVCHKEMXJGEWZGBHJEPNTJHOAVISSQRHNNRZAKJCZOPEGKLWDLDGBVPYSFNWQGPUJEGLVUUADQINWNGCWPJOQMPYYLBZTORLQOVW");

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
    msg.setTimeStamp(0.782822494658403);
    msg.setSource(34198U);
    msg.setSourceEntity(39U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(217U);
    msg.custom.assign("NMUQKEZXMPCCPUGQSHNSMRRAMYTJCNKLTDMHNZFFVKYIIUFSBHSANZFIBWJVGTAVHBJXRRSZJFBPVYGWDAZDDGVUESILEVHQYWAOCWSFAQICXNIMQGFTHPTUZXIDTBDMPQPCEUZLVHYYGKUQXAZFJTIWKJOMEWYXDRELESORLRQKKLZRPXLOPNXGIADCWQLSHAWBJVCKDTEPCABRLNBONXUGBMFKXOOELOVNYI");

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
    msg.setTimeStamp(0.009405222679241598);
    msg.setSource(16185U);
    msg.setSourceEntity(138U);
    msg.setDestination(2832U);
    msg.setDestinationEntity(219U);
    msg.custom.assign("FSDUXHKQAHCZEHPSNJGIFHQKLFMKUMUREUNGIQPDOBAUXODNAPIGCIQXMJZLEWKKWFHJMRIWLEQTPOOPJVKSLVZOSZBKAZJMRTPMSWFGEJLVRCCTIARMSLZJBXQBJLNTDFTCYWAQDUTLZKRXBWURVGXZAUPEWBCENTVNNEYHRPTICMDPZRSWIYMJFRVGSTOYC");

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
    msg.setTimeStamp(0.3411817502940748);
    msg.setSource(63297U);
    msg.setSourceEntity(137U);
    msg.setDestination(4390U);
    msg.setDestinationEntity(37U);
    msg.custom.assign("XFIMLYMERNIWLBCDMZVFVJGZPXKJRZEEWBUOXAPTOQNMGWNQVOSWWTIMSECCYZULCLZNNSWXOAMDFBKKXPGSJEHTHPFNIZVBTAJRMIEHR");

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
    msg.setTimeStamp(0.9204144130652767);
    msg.setSource(45540U);
    msg.setSourceEntity(144U);
    msg.setDestination(46021U);
    msg.setDestinationEntity(180U);
    msg.timeout = 45801U;
    msg.lat = 0.1246176984255406;
    msg.lon = 0.8981042828461818;
    msg.z = 0.6741401784396119;
    msg.z_units = 133U;
    msg.duration = 56570U;
    msg.speed = 0.5654191655180392;
    msg.speed_units = 249U;
    msg.type = 231U;
    msg.radius = 0.1416961944185955;
    msg.length = 0.3718341029327772;
    msg.bearing = 0.10724586490854016;
    msg.direction = 114U;
    msg.custom.assign("RZMGVBYCHNGRILJBHZDXDAFRBBONENQDINDROMPPLPVMUUSLJLIXFGPM");

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
    msg.setTimeStamp(0.8572650256385194);
    msg.setSource(33265U);
    msg.setSourceEntity(246U);
    msg.setDestination(8563U);
    msg.setDestinationEntity(143U);
    msg.timeout = 58956U;
    msg.lat = 0.1311706089523551;
    msg.lon = 0.08153435725198621;
    msg.z = 0.42939974983412554;
    msg.z_units = 152U;
    msg.duration = 33051U;
    msg.speed = 0.2420346658322018;
    msg.speed_units = 18U;
    msg.type = 135U;
    msg.radius = 0.7741336417537822;
    msg.length = 0.14411743128482313;
    msg.bearing = 0.3380249419933684;
    msg.direction = 227U;
    msg.custom.assign("ODBRPSMOIEHKWJVHGZXGCHELBYWCBGOPMQZTJHGYCZIZDXFNRFFHARUTAW");

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
    msg.setTimeStamp(0.7469144320764715);
    msg.setSource(53821U);
    msg.setSourceEntity(209U);
    msg.setDestination(61559U);
    msg.setDestinationEntity(74U);
    msg.timeout = 40822U;
    msg.lat = 0.7157803964075529;
    msg.lon = 0.012215219103933084;
    msg.z = 0.26128205287901585;
    msg.z_units = 26U;
    msg.duration = 21302U;
    msg.speed = 0.24196190399534712;
    msg.speed_units = 78U;
    msg.type = 68U;
    msg.radius = 0.13928536202026176;
    msg.length = 0.6346907213545635;
    msg.bearing = 0.3709680766690795;
    msg.direction = 75U;
    msg.custom.assign("VUHLZYYFSDHJDBJWHVZKGGSJFAJBXMRQPLJNZSRZLFIOKZWZHICGHMCZXNYABXRMLHRIDYSZWWUKMGVQNUNDNPFIOXPTQLCDAPXCASRWEXAIDMVVWDKQPDWTMEBYHOOVOATRQAIGIJNJCFBDPRTMBEXPBKPHOIYWDQNNVERCEYCSPTOKFOYLL");

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
    msg.setTimeStamp(0.6944584234012257);
    msg.setSource(56013U);
    msg.setSourceEntity(76U);
    msg.setDestination(64922U);
    msg.setDestinationEntity(242U);
    msg.duration = 6211U;
    msg.custom.assign("YWYUWEHRVVTOYDZCLXHKGELDPAIEZTQLCEBTGVOUZZTPLOQUDBXPCRIANPKPHXPJFGIJNMWCQPIUPOXYTRZHSAMKUVJCRSRRNMGQHFPOCZSSELBBSAWOLJXMTAMWACYYXKUAVUBJLEHYAIQHMWUWQROKBIQSJIGDJEVLYKFFVJDDCWCGJGSMXXZKEAYHRNNZBOFNYOMURXBRZVKEWOWEVTBNDMQZ");

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
    msg.setTimeStamp(0.3136367989463966);
    msg.setSource(63838U);
    msg.setSourceEntity(240U);
    msg.setDestination(24261U);
    msg.setDestinationEntity(235U);
    msg.duration = 41947U;
    msg.custom.assign("TMKBRNTRTLXMNZFYGVIKJGHQXZNPDSYBFKEXHAEWYYKCVJPNUSEOUWIIAVWNAGWAXLWEXDVYYEXRDKCYLHDQTJWJSRHCOHISRPWFIZBKZXJIXFUCBBEQLXCVLNTDBQEYXJUQOLVCOMNMANREOFKQQPJCCAQLMMQTDGE");

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
    msg.setTimeStamp(0.4912401548237394);
    msg.setSource(40294U);
    msg.setSourceEntity(32U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(125U);
    msg.duration = 49108U;
    msg.custom.assign("SNXZPMUSPFJLDIJDJNRWZASQQYOKITJZOHAVUUBCDAGFRVAJNRAQDDJNQRBTAGFHMCQTJKEPPDSHBLEQLFUKMVZEMPHJRK");

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
    msg.setTimeStamp(0.27524157430244967);
    msg.setSource(33884U);
    msg.setSourceEntity(13U);
    msg.setDestination(42156U);
    msg.setDestinationEntity(198U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7748963952331381;
    tmp_msg_0.speed_units = 138U;
    msg.control.set(tmp_msg_0);
    msg.duration = 13490U;
    msg.custom.assign("LJKDTBQNMQOLPYEXBFVRSHYLXIQEQAKWYCATZHKMCONAACMNYRGUHNPZZKBCWSICBWORFGGXILYZKISJYQXYIXPOVUYIJVWWOQODBBIMDWUVGZZFEKKBIVVDDUAHHVDGDORRJCASUAKQRPERLEXGRUQJATLXZNPIUSGBTCJKYCSCAVWKIOLGMMNESFTNWPLTJSJZNEVHOJUZQC");

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
    msg.setTimeStamp(0.00276785141988678);
    msg.setSource(39539U);
    msg.setSourceEntity(6U);
    msg.setDestination(17241U);
    msg.setDestinationEntity(13U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7768591184957423;
    tmp_msg_0.speed_units = 147U;
    msg.control.set(tmp_msg_0);
    msg.duration = 13409U;
    msg.custom.assign("EULPZKVWQWAMGYUJJPDIZCBKFOABZIPEYOLQPEAKJMFOYJYMTSWWOPAVDSVQZAKGGHLZRDPVPDBRQBLTUXQBLKKSGYKEWDWESFIPNNSNLEQOXBQWEHFHDWMAEWTKXJEUHCIFNXYCCHHBRCQLINURMCOSMDRGMQHUGVUFNDUVYUYRZARRXJITTSUCMBCZQTXJGXYHNAVVPZISOHRHTLL");

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
    msg.setTimeStamp(0.7088180769259586);
    msg.setSource(59681U);
    msg.setSourceEntity(41U);
    msg.setDestination(36470U);
    msg.setDestinationEntity(22U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.23896321300018786;
    msg.control.set(tmp_msg_0);
    msg.duration = 31204U;
    msg.custom.assign("VIKDPJCITMWSL");

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
    msg.setTimeStamp(0.2885376813960989);
    msg.setSource(2494U);
    msg.setSourceEntity(242U);
    msg.setDestination(58243U);
    msg.setDestinationEntity(177U);
    msg.timeout = 52869U;
    msg.lat = 0.9588674360635806;
    msg.lon = 0.8720961423052843;
    msg.z = 0.008781810011986746;
    msg.z_units = 170U;
    msg.speed = 0.5940692419363025;
    msg.speed_units = 181U;
    msg.bearing = 0.15795066908563216;
    msg.cross_angle = 0.9292169404431662;
    msg.width = 0.14929528338852538;
    msg.length = 0.9243673472382348;
    msg.hstep = 0.8141071277662061;
    msg.coff = 124U;
    msg.alternation = 86U;
    msg.flags = 222U;
    msg.custom.assign("VCFYLFPAUUAUMQFDWDCFRQUBOUQILHYAUUKQLBXBCIGJHEHDSKJZNSGRKDRLAPFDLZVNZZJKAIVNWYUQPSFREMKIYAGKBN");

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
    msg.setTimeStamp(0.4044424865752667);
    msg.setSource(51798U);
    msg.setSourceEntity(66U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(196U);
    msg.timeout = 20997U;
    msg.lat = 0.7584617422719024;
    msg.lon = 0.06694127683637519;
    msg.z = 0.15355859517115866;
    msg.z_units = 130U;
    msg.speed = 0.7055027014407741;
    msg.speed_units = 185U;
    msg.bearing = 0.6547155215160968;
    msg.cross_angle = 0.11152758803762242;
    msg.width = 0.39519574674539537;
    msg.length = 0.717018110653389;
    msg.hstep = 0.6780008604537894;
    msg.coff = 132U;
    msg.alternation = 237U;
    msg.flags = 39U;
    msg.custom.assign("SHCKWWRABWFXWOXQKMZIXZICIYVJXUPLCODEGXVZGCRKYHIZIXNSYLHQNPTRRUPSQJOHSNYMLYRSJPVAOGEHZKQNATAOATQCIPDHWRBVTFAMELDTFBXUBLLREUDZEIUSXMBGKBZTHEMRBHBDVBYUVREUCITXICGDKJOEPCEVDTDJFKQDPMAYNUSXKRVFMFKLOFGJYJBHAHNPWCNQCEVLOYVMQQSNWJ");

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
    msg.setTimeStamp(0.6057975752738914);
    msg.setSource(45084U);
    msg.setSourceEntity(135U);
    msg.setDestination(29904U);
    msg.setDestinationEntity(229U);
    msg.timeout = 59715U;
    msg.lat = 0.45482812601305156;
    msg.lon = 0.9547537988894869;
    msg.z = 0.3180858446798648;
    msg.z_units = 175U;
    msg.speed = 0.31553955630704433;
    msg.speed_units = 79U;
    msg.bearing = 0.8966923424285962;
    msg.cross_angle = 0.95895451498434;
    msg.width = 0.7689312151189398;
    msg.length = 0.06589781157677155;
    msg.hstep = 0.7888916371077477;
    msg.coff = 241U;
    msg.alternation = 249U;
    msg.flags = 96U;
    msg.custom.assign("ZTBQZORNQOOUUXVVDWQIHOYLMUXJAPNAFEPLFHSHBCCRITPQQGMJNYDVFFHGIJQFAFLGTVPQZGS");

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
    msg.setTimeStamp(0.005521152612036118);
    msg.setSource(6625U);
    msg.setSourceEntity(173U);
    msg.setDestination(62591U);
    msg.setDestinationEntity(165U);
    msg.timeout = 54444U;
    msg.lat = 0.49720587374709957;
    msg.lon = 0.7849577306243642;
    msg.z = 0.7754438666723903;
    msg.z_units = 19U;
    msg.speed = 0.3637499891416711;
    msg.speed_units = 246U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.15990294711702158;
    tmp_msg_0.y = 0.9367343267194728;
    tmp_msg_0.z = 0.44997400812682453;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SNCFABXQRFONCANZLOVSIQZLDHYGVVJBMPPIEYNXGUZFGYSEEFAOVWIALXDKKQHMSNUJRPEMAGKPNQZQQZCXXGCLIFMCVCSOITFCIKAXOTDCUORPSRBHUDFZDWJWFMEAABSQHBHWMJXKUADOSKMDBGYAJJGZNWTHZBKTKCHPTWRQMESGLRVRFTHWGTJZUHERYXHMUYDKIFBBQLVPNYJYYQPETXCWVLKUMRIYLXEUEVNDOUGOLIPNT");

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
    msg.setTimeStamp(0.08179143258049182);
    msg.setSource(51899U);
    msg.setSourceEntity(201U);
    msg.setDestination(34247U);
    msg.setDestinationEntity(189U);
    msg.timeout = 53654U;
    msg.lat = 0.4789869165983357;
    msg.lon = 0.7479447983498189;
    msg.z = 0.9081555682332856;
    msg.z_units = 107U;
    msg.speed = 0.7082348925401027;
    msg.speed_units = 135U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.15538310698190005;
    tmp_msg_0.y = 0.0879307112050538;
    tmp_msg_0.z = 0.5674424545375742;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WPGMIDNPKUTHFXPKVKSTMYWQJXHWH");

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
    msg.setTimeStamp(0.6059571525268215);
    msg.setSource(33044U);
    msg.setSourceEntity(114U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(102U);
    msg.timeout = 3218U;
    msg.lat = 0.9024415427570424;
    msg.lon = 0.11242262236432266;
    msg.z = 0.8182810053414503;
    msg.z_units = 208U;
    msg.speed = 0.29303537480838404;
    msg.speed_units = 159U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.27933335115380453;
    tmp_msg_0.y = 0.7862340501090391;
    tmp_msg_0.z = 0.5963059651869024;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MWPNLDLCLFMVKTHAHRHMKSVLAUCGKVNVDUBCWYLJMBPHEKMDTHMEYCYOIIGREQALVTIKVEBXPWTODFMOEZPDLZKUBMAWAZJMLEYWHSXRDSGSQQOQJJKCVJJRZUCIEOQGRGTWEVNKSRODPWXUSXDWPQAXNDZYLJOETWTTEQJUGQSNTHKXOKXZAYZUIIFGNXCYUFWDFBYUFOTZZRXBJORHNQUJCGYBBSRAVBHFBVIGFZHNIIPFAGMCNF");

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
    msg.setTimeStamp(0.9795652484268178);
    msg.setSource(59829U);
    msg.setSourceEntity(203U);
    msg.setDestination(59193U);
    msg.setDestinationEntity(61U);
    msg.x = 0.42715124996587817;
    msg.y = 0.22390941820824806;
    msg.z = 0.8824234912279251;

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
    msg.setTimeStamp(0.7802621559162606);
    msg.setSource(60131U);
    msg.setSourceEntity(39U);
    msg.setDestination(59817U);
    msg.setDestinationEntity(94U);
    msg.x = 0.7471706162446582;
    msg.y = 0.5958554913336676;
    msg.z = 0.2549718613041765;

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
    msg.setTimeStamp(0.7264594946513199);
    msg.setSource(53985U);
    msg.setSourceEntity(172U);
    msg.setDestination(39315U);
    msg.setDestinationEntity(43U);
    msg.x = 0.1260172117425138;
    msg.y = 0.2164544844318531;
    msg.z = 0.7156332604170812;

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
    msg.setTimeStamp(0.060706464736810406);
    msg.setSource(63520U);
    msg.setSourceEntity(78U);
    msg.setDestination(35619U);
    msg.setDestinationEntity(22U);
    msg.timeout = 7414U;
    msg.lat = 0.5351683381621272;
    msg.lon = 0.645454253803518;
    msg.z = 0.12141376465833631;
    msg.z_units = 39U;
    msg.amplitude = 0.38667312960556666;
    msg.pitch = 0.9753925272510781;
    msg.speed = 0.6815201474935131;
    msg.speed_units = 85U;
    msg.custom.assign("MFWLEKHKKGEROBVMGXYJMJNIGPBKBBRWSJHIYNPONLQFITCOWGSCPGULTPHMUNMGEPEICQZKITHVUURNCUZFQEWUOHVKWANAFZMIBXJCMQJAUPIUFARPJLVETBXKLXMPRVMLXV");

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
    msg.setTimeStamp(0.2907514068484591);
    msg.setSource(61600U);
    msg.setSourceEntity(4U);
    msg.setDestination(37314U);
    msg.setDestinationEntity(202U);
    msg.timeout = 2421U;
    msg.lat = 0.21387914744934733;
    msg.lon = 0.21496840372914106;
    msg.z = 0.6858942320421024;
    msg.z_units = 217U;
    msg.amplitude = 0.48044692517228016;
    msg.pitch = 0.3755619567266252;
    msg.speed = 0.5007491919817515;
    msg.speed_units = 203U;
    msg.custom.assign("TRLYBBVMRGZCRLHAVOQPXVZGDWCEGWRHCYSJARSBXNQWVLPYGCDGJLAILTKPNXSIESDCFOGEWPJLINLWUWSTHIRJDKIDHDZHZMUJVSECYAOECFEIJDAMOGUZBWXYNFUDYVQBGQQRATZNFUFMHNTAPLEFDEZLVWBMXPXTSBGKJFQYPWUKMXTNSOIVPROVITKHNOOKZCBUYJEFUGM");

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
    msg.setTimeStamp(0.9778517461605972);
    msg.setSource(13928U);
    msg.setSourceEntity(192U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(70U);
    msg.timeout = 42171U;
    msg.lat = 0.14930372366569944;
    msg.lon = 0.16760249883183587;
    msg.z = 0.9508441592828298;
    msg.z_units = 91U;
    msg.amplitude = 0.25898358414546685;
    msg.pitch = 0.9441497409883959;
    msg.speed = 0.5830592093953182;
    msg.speed_units = 68U;
    msg.custom.assign("KQDGJASTNVLCHIAEVJYSXAKKIU");

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
    msg.setTimeStamp(0.32438538870075395);
    msg.setSource(41971U);
    msg.setSourceEntity(145U);
    msg.setDestination(21513U);
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
    msg.setTimeStamp(0.585641203931046);
    msg.setSource(4554U);
    msg.setSourceEntity(104U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.7604346735295711);
    msg.setSource(23368U);
    msg.setSourceEntity(135U);
    msg.setDestination(31758U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.27062738852046253);
    msg.setSource(13603U);
    msg.setSourceEntity(240U);
    msg.setDestination(58104U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.851612426911472;
    msg.lon = 0.9866141238798095;
    msg.z = 0.22998004095749724;
    msg.z_units = 218U;
    msg.radius = 0.5679517350174563;
    msg.duration = 22530U;
    msg.speed = 0.8604843857806876;
    msg.speed_units = 192U;
    msg.custom.assign("FCYGOJIXGPZOYHBGKHTEJSXLYTPRAPQFIWUMQZHW");

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
    msg.setTimeStamp(0.39977903936116455);
    msg.setSource(46208U);
    msg.setSourceEntity(116U);
    msg.setDestination(47868U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.5900507084278686;
    msg.lon = 0.449225999858618;
    msg.z = 0.5946663439918606;
    msg.z_units = 171U;
    msg.radius = 0.2752322617463119;
    msg.duration = 48642U;
    msg.speed = 0.7241594673974987;
    msg.speed_units = 84U;
    msg.custom.assign("DIUFRUIHBKIWMTKSVBYMOFAKZXFLYJMNJXJJYADXBUZETFBOWIZBHSOWNQWXGBOMDWGAKOWYGHLFYMPZO");

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
    msg.setTimeStamp(0.004041192806460203);
    msg.setSource(32174U);
    msg.setSourceEntity(223U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.6123319397775113;
    msg.lon = 0.7628227964919765;
    msg.z = 0.7293986449867214;
    msg.z_units = 121U;
    msg.radius = 0.04873791446321496;
    msg.duration = 12374U;
    msg.speed = 0.5761914680952412;
    msg.speed_units = 88U;
    msg.custom.assign("OSQMFXTNYZABEDFEVGZTHJZKHUTYHEVLFUPNRRTMCMQYYWEHGPXLSPMBNLMVI");

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
    msg.setTimeStamp(0.3115921872765054);
    msg.setSource(3956U);
    msg.setSourceEntity(101U);
    msg.setDestination(23219U);
    msg.setDestinationEntity(140U);
    msg.timeout = 61568U;
    msg.flags = 45U;
    msg.lat = 0.27701642890674105;
    msg.lon = 0.11467078394173302;
    msg.start_z = 0.5988051907374519;
    msg.start_z_units = 107U;
    msg.end_z = 0.7887922652946635;
    msg.end_z_units = 65U;
    msg.radius = 0.027741748194205162;
    msg.speed = 0.09458400771732023;
    msg.speed_units = 130U;
    msg.custom.assign("MWKYELNIUFGYDOOTRLNHWMJUWNOCHPLRSPPCJZKARREPQXLOJDKVWDERDUAVTVUQAEWXYCWBAOQKMMRTWTAGTZJEPLYPKQTYGNHLVLMIUEVYEROQGIKAQGAVGDLUAIUSCSJFMUXMTGQMHCYLCVIKBJMOVKKSBXPEIQUNFHJTAOSSWZEXTZDZWSDORYJXCSNOGLCNDPUHGCVMXIGDA");

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
    msg.setTimeStamp(0.5440659042599901);
    msg.setSource(411U);
    msg.setSourceEntity(142U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(66U);
    msg.timeout = 55764U;
    msg.flags = 4U;
    msg.lat = 0.16103437656527808;
    msg.lon = 0.21546590183773073;
    msg.start_z = 0.455504718311069;
    msg.start_z_units = 220U;
    msg.end_z = 0.15957259085674114;
    msg.end_z_units = 6U;
    msg.radius = 0.15205728996150913;
    msg.speed = 0.05514278012857965;
    msg.speed_units = 170U;
    msg.custom.assign("FIFMMCHSFLJHPZVDCEUTSXNFRNBIREYJWNKIUFKFBHXBTJJVLWAQRSPUGZFAIWLXMJIYSWNWZMUQBXFQCAKXYMHYWAIRKRETLEGYJRDBMVQJGBUSNAWCYFXLRPSODUOBOEBZCGKLPDKOCXPPTGSTVQUDZIYIMYZKMVELPABGNDZLABLOXHHNDVSKEGFRDGQRMOP");

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
    msg.setTimeStamp(0.8257329330139769);
    msg.setSource(53862U);
    msg.setSourceEntity(0U);
    msg.setDestination(971U);
    msg.setDestinationEntity(159U);
    msg.timeout = 62278U;
    msg.flags = 110U;
    msg.lat = 0.6378135385044005;
    msg.lon = 0.1309865865211448;
    msg.start_z = 0.44001954403280796;
    msg.start_z_units = 132U;
    msg.end_z = 0.5148439680690517;
    msg.end_z_units = 129U;
    msg.radius = 0.1595701798829866;
    msg.speed = 0.4595341996250054;
    msg.speed_units = 35U;
    msg.custom.assign("QZWGENIKOMZTGBHECXHQHWXSAGMSEIGGROTFCN");

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
    msg.setTimeStamp(0.27228776944269983);
    msg.setSource(38248U);
    msg.setSourceEntity(80U);
    msg.setDestination(37636U);
    msg.setDestinationEntity(67U);
    msg.timeout = 51995U;
    msg.lat = 0.878092300163261;
    msg.lon = 0.9585245980641718;
    msg.z = 0.2779851949281329;
    msg.z_units = 153U;
    msg.speed = 0.20217657488442053;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5113533046466611;
    tmp_msg_0.y = 0.1655183295356525;
    tmp_msg_0.z = 0.6354553350457764;
    tmp_msg_0.t = 0.3337035135348563;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MMIQYJFPXNOJGQDQHYCXTZVDKLHWAEPGGKSUKDSBFACMHEELPJHSEWNSBTQHSOXTWCGLRKYGIJSDZFNVFJDADRSJNVUCQCMAXNWKZYOICDMBEXBRMCNMNJRIAUVTPAXPJSUAWBNPGQRPGHYTLBIUPTDGBAGRUQPYBFFJYWCZWYZOWZOHIDSIIEQLYMAQVUFNEL");

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
    msg.setTimeStamp(0.06024345941274134);
    msg.setSource(21401U);
    msg.setSourceEntity(108U);
    msg.setDestination(55734U);
    msg.setDestinationEntity(130U);
    msg.timeout = 62558U;
    msg.lat = 0.3947651620577517;
    msg.lon = 0.6402612017848277;
    msg.z = 0.8067894661952487;
    msg.z_units = 144U;
    msg.speed = 0.8905713593355539;
    msg.speed_units = 87U;
    msg.custom.assign("ILMXXRGPVUSLVAHJENYZCEISBSWWGFDUPAZDIVTHIVOHZHGPMPVSZSVBNRUWIFAEPQLOLTJZTZGBPGAGTJMUYSTHMYWHMHXIOPGLZOJEKKEVLKSNACOJCQQRDJBDCUODPKSFMDMYENRRAFLBNABQZJHCXNMSVTNXYWOLIKERWCECBQUFEZISDBAQJXURNUJWAX");

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
    msg.setTimeStamp(0.8458939540319779);
    msg.setSource(41647U);
    msg.setSourceEntity(173U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(187U);
    msg.timeout = 43824U;
    msg.lat = 0.9372060973433072;
    msg.lon = 0.593043715623273;
    msg.z = 0.4426154303904244;
    msg.z_units = 228U;
    msg.speed = 0.18788930533752413;
    msg.speed_units = 223U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.14259832164872377;
    tmp_msg_0.y = 0.5868547730314169;
    tmp_msg_0.z = 0.4544115476413282;
    tmp_msg_0.t = 0.06026518486900745;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JOZGSFBQPMSOQKPFYTAXUZTIYDKAULBTPKXXBWHVDDFFCGOODJGLQRQXIZWUHKXPRGIDTHZVNANFBYUCWF");

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
    msg.setTimeStamp(0.8742876743572223);
    msg.setSource(42496U);
    msg.setSourceEntity(80U);
    msg.setDestination(17594U);
    msg.setDestinationEntity(86U);
    msg.x = 0.7128329103140477;
    msg.y = 0.5915796768357706;
    msg.z = 0.16669463170226817;
    msg.t = 0.2200774691262124;

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
    msg.setTimeStamp(0.44260662255836203);
    msg.setSource(26857U);
    msg.setSourceEntity(166U);
    msg.setDestination(45158U);
    msg.setDestinationEntity(242U);
    msg.x = 0.9704209170630411;
    msg.y = 0.3857917502011228;
    msg.z = 0.09984839865449735;
    msg.t = 0.5688608641124391;

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
    msg.setTimeStamp(0.9162514467122068);
    msg.setSource(26294U);
    msg.setSourceEntity(108U);
    msg.setDestination(24770U);
    msg.setDestinationEntity(53U);
    msg.x = 0.2895286876969533;
    msg.y = 0.169023334738588;
    msg.z = 0.2524185147764755;
    msg.t = 0.5652526811805603;

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
    msg.setTimeStamp(0.9231580043259529);
    msg.setSource(58657U);
    msg.setSourceEntity(176U);
    msg.setDestination(10979U);
    msg.setDestinationEntity(198U);
    msg.timeout = 18194U;
    msg.name.assign("VFLPOMHOOOXKDKQCEJZXYWFBYUVYOMQHKACOJIAIFZVNUESSRMIQSYPWQFFSIBBLJLNPZEIDLQBUQPRZKAUOLVQVPELEPSTXIMZWJEBGSWUDJFXTGZKGKLRUIMXUAHHAONUHYMRTQXMNWWSJSUJRFFWCAYLNHWQYBGEYJXIZKVLBXKGMTAEDHCMTTDGNVNJDCZPT");
    msg.custom.assign("WLTRBEGZDAPCMFRGEDKFGCMBSPUFDVIZXIFQIYPZQPTMVEOCBZQLK");

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
    msg.setTimeStamp(0.049661763545708504);
    msg.setSource(46804U);
    msg.setSourceEntity(218U);
    msg.setDestination(18064U);
    msg.setDestinationEntity(151U);
    msg.timeout = 58722U;
    msg.name.assign("CHQHVIYBFWHNSUJZIANHKCPIMSMQKABHVHSGUNVOBOOUIKYKTIWUTFDWCCRTVWMGSQSZXRBFEMBVYLFMLA");
    msg.custom.assign("WDGVXASPJOM");

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
    msg.setTimeStamp(0.5914058845535495);
    msg.setSource(62437U);
    msg.setSourceEntity(122U);
    msg.setDestination(43696U);
    msg.setDestinationEntity(254U);
    msg.timeout = 8463U;
    msg.name.assign("DXESDGKYEDTUMEQUKZQGVGXOWNADWCKXGXTYFRPQLTNNHRFCZXHGGQVAPZRIBHUPMIYEQYZNTWUFPSINZAOKJMXYCMSBWLUBGVDBHXHNCVSSOQRPUZPAUBCKJFBGLTJRRQCLDYIUGJSHSUOSQFCHNZVDYRQJOWELMHNEWVPIOVWXPBKAIGBHWQ");
    msg.custom.assign("DHICBIFTSZNSN");

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
    msg.setTimeStamp(0.29905315981012504);
    msg.setSource(32578U);
    msg.setSourceEntity(108U);
    msg.setDestination(31676U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.13655145682062808;
    msg.lon = 0.938068774422575;
    msg.z = 0.056355905886022906;
    msg.z_units = 250U;
    msg.speed = 0.44904492721625056;
    msg.speed_units = 9U;
    msg.start_time = 0.946011171764233;
    msg.custom.assign("EDGVOMUROHVYVERJLEOCSSTVLCQXMATQUZBNHSXKDNQOPJXBAQFZPWSAQNOIPTWHCRCYTKFHYWGPLHDUIYTREBIMCGBYDFJZZTUWHKJ");

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
    msg.setTimeStamp(0.9071675599402431);
    msg.setSource(63895U);
    msg.setSourceEntity(102U);
    msg.setDestination(58810U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.08144623490502267;
    msg.lon = 0.04494892589731214;
    msg.z = 0.09526004177272795;
    msg.z_units = 23U;
    msg.speed = 0.7845049050571271;
    msg.speed_units = 232U;
    msg.start_time = 0.12291905852820506;
    msg.custom.assign("ITDTSNJTXCCQSGVPMFRNITIXQHSZPSIMYEVJZUMBMIEHSNJIBWNXHJBGKRZRWXGOWUHWPWFYLCGKXJBJAVOPEMYGXELLLVNYIOCERVFLIDRWOTTYGAZEYTGWHIHVXMSOFRFGSZZPAYBQQUODCPNHUZRLKOYZZKQOQABNFVWQSAANJPDCQQCAWYKVUTKEVSTFCEDDOTBNRLJCMGAJNDEVQSYXUDUBJXRPLZKMEPCKIBF");

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
    msg.setTimeStamp(0.6127741712541481);
    msg.setSource(42035U);
    msg.setSourceEntity(142U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.23170599355525534;
    msg.lon = 0.8491506928135109;
    msg.z = 0.9593328599576991;
    msg.z_units = 12U;
    msg.speed = 0.3449487296259437;
    msg.speed_units = 193U;
    msg.start_time = 0.9685565178980639;
    msg.custom.assign("VXUQOLXDCHQYSMIOJRRMVRQJAMXPETQFH");

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
    msg.setTimeStamp(0.5199926210809543);
    msg.setSource(890U);
    msg.setSourceEntity(139U);
    msg.setDestination(46360U);
    msg.setDestinationEntity(123U);
    msg.vid = 28876U;
    msg.off_x = 0.27265536091736486;
    msg.off_y = 0.6605873732211628;
    msg.off_z = 0.3321059725890765;

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
    msg.setTimeStamp(0.03110169378289429);
    msg.setSource(52309U);
    msg.setSourceEntity(83U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(250U);
    msg.vid = 21681U;
    msg.off_x = 0.7818395987092098;
    msg.off_y = 0.4611187179812818;
    msg.off_z = 0.0048492311349994655;

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
    msg.setTimeStamp(0.741389737749974);
    msg.setSource(35528U);
    msg.setSourceEntity(102U);
    msg.setDestination(43501U);
    msg.setDestinationEntity(128U);
    msg.vid = 6911U;
    msg.off_x = 0.4905411680795687;
    msg.off_y = 0.8473603103811093;
    msg.off_z = 0.11437952179772204;

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
    msg.setTimeStamp(0.030368714968945998);
    msg.setSource(42529U);
    msg.setSourceEntity(127U);
    msg.setDestination(60520U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.13479921080218926);
    msg.setSource(48769U);
    msg.setSourceEntity(185U);
    msg.setDestination(43669U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.9151581867238169);
    msg.setSource(55072U);
    msg.setSourceEntity(47U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.1806363955389907);
    msg.setSource(5583U);
    msg.setSourceEntity(188U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(79U);
    msg.mid = 18795U;

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
    msg.setTimeStamp(0.0015679223682210086);
    msg.setSource(5279U);
    msg.setSourceEntity(45U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(113U);
    msg.mid = 60243U;

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
    msg.setTimeStamp(0.6014135943357807);
    msg.setSource(27347U);
    msg.setSourceEntity(88U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(227U);
    msg.mid = 55027U;

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
    msg.setTimeStamp(0.12702018325968378);
    msg.setSource(46307U);
    msg.setSourceEntity(157U);
    msg.setDestination(14370U);
    msg.setDestinationEntity(223U);
    msg.state = 216U;
    msg.eta = 21431U;
    msg.info.assign("PWDMHMIPVMXCPTSBQFTZUYPNMNAVQOLRKRTOQUZZRHEODCYQLYWNOTBCFGZNLPWFWOAXFQANWGVRMRATVTLPGISDXBLEJIUZBIJBWGRVYORLSSJRACZKULDXUSHKSXJJYXXTZQPEIYKJCOGCNMQ");

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
    msg.setTimeStamp(0.9842494361185984);
    msg.setSource(43544U);
    msg.setSourceEntity(196U);
    msg.setDestination(16376U);
    msg.setDestinationEntity(217U);
    msg.state = 200U;
    msg.eta = 39748U;
    msg.info.assign("POYHRCSYQSDNMONURPLMJADNFXHQZRKQLWOYMJKNXMZUPIVWLM");

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
    msg.setTimeStamp(0.6832114418462859);
    msg.setSource(8004U);
    msg.setSourceEntity(59U);
    msg.setDestination(54978U);
    msg.setDestinationEntity(192U);
    msg.state = 200U;
    msg.eta = 10161U;
    msg.info.assign("EANYVFBDNKKKOMTIQLXNBCJYGBOXONYHEEMZIVKWBAJXSJTTKQCGNKZYBFFMMCWYNTHRZRPUQJPCZEUUWLJCSETQWKUGCIXIAONDCIHDWLRVMQOOHXXXVAVMJNXQAAMAPOTGRWTBAHDKOLNGSFPGILIRDPZISSSYUZJTHYBWTSBGPEJGCFDYVVRYJPIWR");

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
    msg.setTimeStamp(0.5687108528058982);
    msg.setSource(6791U);
    msg.setSourceEntity(124U);
    msg.setDestination(38398U);
    msg.setDestinationEntity(40U);
    msg.system = 59259U;
    msg.duration = 28043U;
    msg.speed = 0.8597963576291523;
    msg.speed_units = 254U;
    msg.x = 0.31493522080063785;
    msg.y = 0.14621316052752542;
    msg.z = 0.2998161630939512;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.7572132788226694);
    msg.setSource(43870U);
    msg.setSourceEntity(62U);
    msg.setDestination(23857U);
    msg.setDestinationEntity(91U);
    msg.system = 56815U;
    msg.duration = 33485U;
    msg.speed = 0.256709444894034;
    msg.speed_units = 211U;
    msg.x = 0.6550163057129116;
    msg.y = 0.8589924491925425;
    msg.z = 0.3726415442621067;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.9465605059027841);
    msg.setSource(5859U);
    msg.setSourceEntity(65U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(240U);
    msg.system = 61175U;
    msg.duration = 38016U;
    msg.speed = 0.7500779737754724;
    msg.speed_units = 163U;
    msg.x = 0.27072362146625784;
    msg.y = 0.3100500737138784;
    msg.z = 0.4047145996739534;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.6506322369499892);
    msg.setSource(38935U);
    msg.setSourceEntity(68U);
    msg.setDestination(60675U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.49922079621307713;
    msg.lon = 0.5509795075067608;
    msg.speed = 0.9170179297624047;
    msg.speed_units = 242U;
    msg.duration = 40338U;
    msg.sys_a = 56659U;
    msg.sys_b = 30599U;
    msg.move_threshold = 0.001660713063953767;

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
    msg.setTimeStamp(0.13595709103568465);
    msg.setSource(55531U);
    msg.setSourceEntity(22U);
    msg.setDestination(19272U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.34369360223019174;
    msg.lon = 0.14125370763262568;
    msg.speed = 0.20896240761475304;
    msg.speed_units = 6U;
    msg.duration = 15972U;
    msg.sys_a = 63964U;
    msg.sys_b = 39970U;
    msg.move_threshold = 0.5796083089647199;

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
    msg.setTimeStamp(0.560149807547865);
    msg.setSource(16655U);
    msg.setSourceEntity(24U);
    msg.setDestination(48260U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.4950108404220571;
    msg.lon = 0.18005777662681766;
    msg.speed = 0.685416926046954;
    msg.speed_units = 61U;
    msg.duration = 63951U;
    msg.sys_a = 53648U;
    msg.sys_b = 18889U;
    msg.move_threshold = 0.24604797893474095;

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
    msg.setTimeStamp(0.9315804767127308);
    msg.setSource(24065U);
    msg.setSourceEntity(90U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.11685426479589389;
    msg.lon = 0.13388743649712675;
    msg.z = 0.8973505737881057;
    msg.z_units = 91U;
    msg.speed = 0.08918621760756595;
    msg.speed_units = 224U;
    msg.custom.assign("PAQIAGZISQHZPVGEWNANUJFLLBWOJCPTNCBVRZLYSDILBIOMDCMYSDAIUTQMNQAGDHJKVTZDDDKYKUXZRNTIETCPRSPWTMGKKXEEO");

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
    msg.setTimeStamp(0.12326740192590824);
    msg.setSource(57823U);
    msg.setSourceEntity(203U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.08852288664386243;
    msg.lon = 0.19152944663711924;
    msg.z = 0.12364859194148403;
    msg.z_units = 218U;
    msg.speed = 0.8718327774638326;
    msg.speed_units = 231U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.23903279694315815;
    tmp_msg_0.lon = 0.14820207447229805;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KHFPEHRGMRIGPVOGLAIRJFCOYCKFZWWNRBLLVHMTINSHDBEQQHRPDVKTUTOWZOMOKAUYLPUYKACGTQVJTMALNFBANQWPMVXOHCTJNXMCSBTEGGIOCSUYHGYMURHBPZYCKDDWDPVWNDZSZSDBNACEAYDFIHKMUBITBKSKZJUPJQEECXQXOEUUGJZNAJPGWYUSZMG");

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
    msg.setTimeStamp(0.15642783755143075);
    msg.setSource(37282U);
    msg.setSourceEntity(127U);
    msg.setDestination(22992U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.0701681499512089;
    msg.lon = 0.7938853514771627;
    msg.z = 0.13195890841590419;
    msg.z_units = 177U;
    msg.speed = 0.03247788781530969;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7794856273117772;
    tmp_msg_0.lon = 0.33351173440697535;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EQUDTJFAGVASNNOUTVPQBALWTGCNOWERCUESZQBXHNHNZJXOTKZRADDCRLLICAHHVDPLBQKYD");

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
    msg.setTimeStamp(0.8929584904267917);
    msg.setSource(33525U);
    msg.setSourceEntity(63U);
    msg.setDestination(33743U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.24993966500186526;
    msg.lon = 0.23466199435012736;

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
    msg.setTimeStamp(0.6316660472194551);
    msg.setSource(6742U);
    msg.setSourceEntity(82U);
    msg.setDestination(26676U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.4912284258272166;
    msg.lon = 0.6186953122015463;

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
    msg.setTimeStamp(0.23061157212088113);
    msg.setSource(58752U);
    msg.setSourceEntity(62U);
    msg.setDestination(23648U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.8976325257724286;
    msg.lon = 0.2648110256529137;

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
    msg.setTimeStamp(0.7038698938401097);
    msg.setSource(41176U);
    msg.setSourceEntity(66U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(76U);
    msg.timeout = 18295U;
    msg.lat = 0.20847445531587794;
    msg.lon = 0.9768062799687911;
    msg.z = 0.6366258623187077;
    msg.z_units = 74U;
    msg.pitch = 0.396283033180602;
    msg.amplitude = 0.7297820009427655;
    msg.duration = 39863U;
    msg.speed = 0.9430506719586413;
    msg.speed_units = 225U;
    msg.radius = 0.7316158189977235;
    msg.direction = 188U;
    msg.custom.assign("WLSCPPCRLXHBCHLJMIBXITYJTSEYWIQVBUBRETGXXQDPIFWHCOIYXQMXDXIBATFTTUVFZUZ");

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
    msg.setTimeStamp(0.6295497818071312);
    msg.setSource(2827U);
    msg.setSourceEntity(34U);
    msg.setDestination(56143U);
    msg.setDestinationEntity(220U);
    msg.timeout = 42955U;
    msg.lat = 0.5398115016795563;
    msg.lon = 0.40513957911085874;
    msg.z = 0.4598297450649034;
    msg.z_units = 92U;
    msg.pitch = 0.08380827313718486;
    msg.amplitude = 0.7730403712812216;
    msg.duration = 11137U;
    msg.speed = 0.5442496563555761;
    msg.speed_units = 41U;
    msg.radius = 0.9336197072336119;
    msg.direction = 32U;
    msg.custom.assign("FSOHKVDBYFNECPMGEYIRYIEJBMQYZAIJDJCPJMEBDEMKQZKPGEUJUHMIFVPKGTZXSACYAZQQHNSLXFWYTVATJU");

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
    msg.setTimeStamp(0.9090977122775133);
    msg.setSource(38330U);
    msg.setSourceEntity(207U);
    msg.setDestination(12454U);
    msg.setDestinationEntity(22U);
    msg.timeout = 14222U;
    msg.lat = 0.8157244357543908;
    msg.lon = 0.12974343203706018;
    msg.z = 0.6238764082120102;
    msg.z_units = 219U;
    msg.pitch = 0.053999321421469126;
    msg.amplitude = 0.835728402260116;
    msg.duration = 55099U;
    msg.speed = 0.8065577672015974;
    msg.speed_units = 212U;
    msg.radius = 0.00414904232159552;
    msg.direction = 56U;
    msg.custom.assign("TNKEIACBYIFFSVMGJOQPVMLZEKNBMBHAYSYCMAVKJEDIESNBIPBIEPHWGFHOOYWWCUDVXVPYGLLHZLQEUXCFTQCZEWOWBJACCKDDCTUPESITVORITMRAHCMEQYIOUHFJPRKQNJVTNJZGGQO");

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
    msg.setTimeStamp(0.4381284129219578);
    msg.setSource(61923U);
    msg.setSourceEntity(239U);
    msg.setDestination(63639U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("YMUADQJPMAIAWDOEVTERAQUPSMFWWEO");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54210U;
    tmp_msg_0.off_x = 0.04995163419412685;
    tmp_msg_0.off_y = 0.6083054639160549;
    tmp_msg_0.off_z = 0.5267293523804863;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RGORKUHJXZLQMFEAVMFINEHVLYCUKTNTNKQWXPJXOMEUQWNABNKPLCXCZEUYRSQEVNDAOGDBVCCQVGEPJMIHZXVUKWAESZLSYDFCIDDDVZWKUVWBACTSFDTPENWMIFMKGPYKOHXRYZNTNWJINBKSBHORELVPOHVI");

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
    msg.setTimeStamp(0.5221522182526556);
    msg.setSource(15667U);
    msg.setSourceEntity(105U);
    msg.setDestination(44912U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("EXTRASJCQUGPYDPRZXGFEGQVKBOUUZZDAWFLMMWJWOYIIZRSCSHDREBDCMLPYBHOPKOUJMHEUMXZFYKRBYLPXJAZEHG");
    msg.reference_frame = 0U;
    msg.custom.assign("QJJVEZHUQWOXRTQCYWJDSLPMDYCWWALVBFRLITIJJCOCMVKNTJRANQCKBGSXUUQTCQXYRHVMHZFATMOSNXTMIUAGPFOGWPAUHKTIAKISRBHNZXEXUCDJUEFZWYESAGPWJRFNJVLRRGUBPHFLNFPDFBKDYDZQNWGAAOIVA");

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
    msg.setTimeStamp(0.4390236060780419);
    msg.setSource(25003U);
    msg.setSourceEntity(218U);
    msg.setDestination(13216U);
    msg.setDestinationEntity(235U);
    msg.formation_name.assign("DOUCSKLXTPKEZKZVERCZVFMGUPBYLDGEZTEBFAEYOAVYHXGQXNBQURUHBJVQBDFCLMBROLXKEJVWSCKKNPOUWUJQFJZDEHERCMJMIGKAOHYGEJILSYTAFNHHODPCPYQDSULSDSRRWIUNOPYUMLFNDMDQ");
    msg.reference_frame = 248U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45242U;
    tmp_msg_0.off_x = 0.5236159780821247;
    tmp_msg_0.off_y = 0.803079708190147;
    tmp_msg_0.off_z = 0.5527625761035175;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PECWEJDACLGKOGCMJWIIJFHKOVXMURSVBJRGODDYQPVPCWRJAUXZGQSGLAVOMKNESWIGZIQRMVNOADXTNNCNREUKAYOJXTKVMIFTAERUCFZIHJNDARMLBLFMQXVYMQLETQUXSGUXQCUCYPBPKPZPVSSWNPTQNFHKXMWUYBADABLDIPZFHDKZIEKUBBTFJBQTHHO");

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
    msg.setTimeStamp(0.01964807585568451);
    msg.setSource(11076U);
    msg.setSourceEntity(244U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(141U);
    msg.group_name.assign("DEFALPAQIAHVGYBWCAOGUETLPVXKMJHWFELVTIVJYBMVMNGZAHXQSJDUQJOGYCVNPKEBLUOHWNKNSYOIQIGPWBDTMRSQUCJSKZUBXBVARXUQEKOQMTGDXEGJONZHTHSQYDFPJVCYXWJZMRIKSDQDFMGNCEXYHSCIEASNMCIROUYNMKFFTC");
    msg.formation_name.assign("ULOMBLISLDTEPYIQFGZRHIJSCXWGNLOHBPBYWQIAYSSROQYTNGKZQJQBPJAIVPJBEOSXKDWDXOEFARHDE");
    msg.plan_id.assign("MVJOFXKIJQFQBCYVGCIBTBWC");
    msg.description.assign("BSHOMEEGKBCUEFMTVQLFHTOMITRMIQYLBLJBXEIWBQWSGZPQKRJDNQIRAZMFPFRGPVJDZJAJKXZLQCPLJNQHUKJIVRBYLOYKALKXXUCUOITDGREFAZ");
    msg.leader_speed = 0.4172856191230866;
    msg.leader_bank_lim = 0.6269413938981628;
    msg.pos_sim_err_lim = 0.14986397476347058;
    msg.pos_sim_err_wrn = 0.9926437309288499;
    msg.pos_sim_err_timeout = 6671U;
    msg.converg_max = 0.8093355542919541;
    msg.converg_timeout = 49757U;
    msg.comms_timeout = 12884U;
    msg.turb_lim = 0.6252031773547723;
    msg.custom.assign("UOYWXRJWQBVXAUMKZIWQORCWKNFCOEBPPCKCCIBNLJHADDHIFTZSURUPRVPZHFQYKCHHILIDETFBGOZTUGGXUTBLUPTEKNWQJVEXQYDATQWSLTJZJYVYOYVDMTGABDPOJANQLHMCQIAYMLHMVIVXDVBCRSXMOMBVSNDKPZPOZJNSAHYIFLEUBFEFXNKFWLJXVOPECMKQNBWHQRSOWFZGNZGITXDRG");

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
    msg.setTimeStamp(0.6941636970449886);
    msg.setSource(37725U);
    msg.setSourceEntity(22U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("UBCYADNEPASRCJKEVGBZWUUOXRHWPCVPQJSWLDCUOYMROJGHZLMHZMAJQLYLFKDMTAQILCDRXPOYZXCVYGZODEBEJOQJGRWBXEQPLUSXGRFUTKHPBWGOWWQTJNTZZECHIJHNIBVDSQZCO");
    msg.formation_name.assign("DXJKOPHRGBBVGNCYXJEHVQXURHFSUAAAVHSQQCLBCQOMSZAPOBAWFXVHQBIYHVFKMWMGNRIGZQWEZBWCLKRHMXUDQENAAKHUNJITERNGPEZTJZMZTYDTPCKQUBODFQYFZSCNOUWNSWYUOEENRRDAILTBGVLLGLTDEFROMOPPVNWKXQPDZMDLOFISFJIMGCULFAPFYUJCYXXZVYZSKHYCXMWIIMKKRWDPAIVJJINCHWETRO");
    msg.plan_id.assign("CDHAVFAJASBGEYADZBZAFANYDWCYWPUHOYVWLWKGOLKZVXQLZLKTPLUISSQLHKIXJCGWTRCBVGTJRPTUMIRUYRGOEGIU");
    msg.description.assign("JCOEQZZUXORIBQBUMINRBJDPMAAIFZRCIYILCGVZDRYKFTXPKEURGCEPWSLHLIHZSSTHNMOABKVWN");
    msg.leader_speed = 0.7634084840242273;
    msg.leader_bank_lim = 0.4621914376316403;
    msg.pos_sim_err_lim = 0.21456088565820242;
    msg.pos_sim_err_wrn = 0.8792165958701208;
    msg.pos_sim_err_timeout = 9003U;
    msg.converg_max = 0.11733239645839544;
    msg.converg_timeout = 13675U;
    msg.comms_timeout = 11733U;
    msg.turb_lim = 0.9567683354380703;
    msg.custom.assign("MDOZOWZCDCKSVIEFZGQEDJWUTANHWFTSODRIRWSMLMETVKRUIDSLXEBPKVHMOZUWZJCPUHIAXFUOTYIRYGRDIEQYIQDPEZQSBJQGFBOJJHFXRLGPCRFHEFYYJQFNMOYEQQVBVBMAHTNKATNIROKPGLLYFXVZVKMGBGZACFYDASOXAXIATWBQMCLKSJMNBLLNJUCNIWLXRCXTZNUJKHSGVJCWSHCVXPAZKVEYLUPSHUUPAO");

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
    msg.setTimeStamp(0.9816656063094423);
    msg.setSource(17018U);
    msg.setSourceEntity(44U);
    msg.setDestination(32632U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("JOFYSXCWLPGQUMIAPVCBLUUXTLVFOVIPWPADDNASZDJZYJNZNCTLJBFMGAEXVTAMRKLDZMDCXLUHNKCYNGYGQPKEEBIXYBQMDVCSLYISKGBHTSXLJQUTREQIPFZDNQHCJJEIVHRYCMHXPPABOUKGOHIMOWXBNLBYRDRXVETWWOZUWCWHXQQEERYOMZNMTUQAVKNJSGGTEKSUWKVEAFK");
    msg.formation_name.assign("AWSBHPPTPTNZKYADSQFJJCGNMBDIZIJZLHSDNYRSTYABUFNVQCYQUYYEEEWFLTHBJIKOTAEVRPZIRXQWRTCBZXYLWBAEFGENCHGXSSBPWHSHEVGLBKRYRAMFGPMNSICYLOEXADRNCCZIBUPVGXODULGKJKQKQOGWMNDPXVSVUWAIIKTCAJKLINUKQ");
    msg.plan_id.assign("IJKLUDEUHZSQLNSHIJAORYMKCQKXAOFGDBSVKLGHWRBAPFEVEVDIASMCPGUINOLBIBLGVZJGFTINWTOWDNSZYWRDGSSLPCCNQWODXLCUFJMGYIPTUCQHHEYYVPPTJQSQSYYMPKWMZMHKAJGXAEJNNAWEYTMLTXOGKKTAOBBXBZFCOZRFQJI");
    msg.description.assign("WQEYABQDNCLSGEZULQWZSKKXNBIOEPTDGGNVHYMSCDQINUYXKONGWFBFIVUQYUSPTBCFOTVJAKUXYWKLCZTDRDSTBLEHYCMTEQTROTEHWH");
    msg.leader_speed = 0.39347462042125336;
    msg.leader_bank_lim = 0.7327914902904291;
    msg.pos_sim_err_lim = 0.21057493881228795;
    msg.pos_sim_err_wrn = 0.9836568068346793;
    msg.pos_sim_err_timeout = 65415U;
    msg.converg_max = 0.2986770113067765;
    msg.converg_timeout = 59388U;
    msg.comms_timeout = 45830U;
    msg.turb_lim = 0.6331777237042002;
    msg.custom.assign("XATKZCIXTGRJNDESGPDLCGFOXKAJRGWAELTRQYJZI");

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
    msg.setTimeStamp(0.3892364114056087);
    msg.setSource(33629U);
    msg.setSourceEntity(132U);
    msg.setDestination(50151U);
    msg.setDestinationEntity(250U);
    msg.control_src = 41197U;
    msg.control_ent = 21U;
    msg.timeout = 0.03486579262921197;
    msg.loiter_radius = 0.1523976304627721;
    msg.altitude_interval = 0.7741405267417095;

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
    msg.setTimeStamp(0.41727405018256125);
    msg.setSource(6493U);
    msg.setSourceEntity(18U);
    msg.setDestination(9934U);
    msg.setDestinationEntity(143U);
    msg.control_src = 6693U;
    msg.control_ent = 197U;
    msg.timeout = 0.38407217080036615;
    msg.loiter_radius = 0.3947802111694073;
    msg.altitude_interval = 0.20227083972101345;

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
    msg.setTimeStamp(0.9979948862773143);
    msg.setSource(29050U);
    msg.setSourceEntity(70U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(104U);
    msg.control_src = 38834U;
    msg.control_ent = 238U;
    msg.timeout = 0.9701090635669269;
    msg.loiter_radius = 0.4352743027426541;
    msg.altitude_interval = 0.3324410789859006;

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
    msg.setTimeStamp(0.2417250746007762);
    msg.setSource(64776U);
    msg.setSourceEntity(223U);
    msg.setDestination(21971U);
    msg.setDestinationEntity(54U);
    msg.flags = 189U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.49404294461364606;
    tmp_msg_0.speed_units = 136U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.224021865904094;
    tmp_msg_1.z_units = 125U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5603097270844462;
    msg.lon = 0.8398653396653842;
    msg.radius = 0.5811190082203008;

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
    msg.setTimeStamp(0.08322052591139639);
    msg.setSource(209U);
    msg.setSourceEntity(148U);
    msg.setDestination(20937U);
    msg.setDestinationEntity(167U);
    msg.flags = 205U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5156017492169374;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.800529642714001;
    tmp_msg_1.z_units = 15U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6119616269455532;
    msg.lon = 0.789679973706688;
    msg.radius = 0.8453454562717673;

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
    msg.setTimeStamp(0.4225397096894855);
    msg.setSource(45071U);
    msg.setSourceEntity(80U);
    msg.setDestination(21232U);
    msg.setDestinationEntity(35U);
    msg.flags = 208U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9494051619681078;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.06829265046373967;
    tmp_msg_1.z_units = 147U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7908362250145196;
    msg.lon = 0.9690372017754719;
    msg.radius = 0.14553935025871068;

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
    msg.setTimeStamp(0.8094983574437417);
    msg.setSource(25492U);
    msg.setSourceEntity(223U);
    msg.setDestination(22539U);
    msg.setDestinationEntity(102U);
    msg.control_src = 57592U;
    msg.control_ent = 86U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9139883452302378;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9876692801263443;
    tmp_tmp_msg_0_1.z_units = 174U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5421386845179268;
    tmp_msg_0.lon = 0.8282546059503448;
    tmp_msg_0.radius = 0.03936414667025889;
    msg.reference.set(tmp_msg_0);
    msg.state = 243U;
    msg.proximity = 86U;

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
    msg.setTimeStamp(0.22669668932347875);
    msg.setSource(17639U);
    msg.setSourceEntity(9U);
    msg.setDestination(14881U);
    msg.setDestinationEntity(170U);
    msg.control_src = 18061U;
    msg.control_ent = 195U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 20U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8593618193659139;
    tmp_tmp_msg_0_0.speed_units = 98U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8666205490545843;
    tmp_tmp_msg_0_1.z_units = 152U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10579612535041671;
    tmp_msg_0.lon = 0.3933445532076545;
    tmp_msg_0.radius = 0.14263366410077183;
    msg.reference.set(tmp_msg_0);
    msg.state = 74U;
    msg.proximity = 131U;

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
    msg.setTimeStamp(0.12359897347058768);
    msg.setSource(39365U);
    msg.setSourceEntity(237U);
    msg.setDestination(34193U);
    msg.setDestinationEntity(159U);
    msg.control_src = 33006U;
    msg.control_ent = 50U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 9U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10390055463473713;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3160489616566532;
    tmp_tmp_msg_0_1.z_units = 101U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6899397519649685;
    tmp_msg_0.lon = 0.5247341594436162;
    tmp_msg_0.radius = 0.6610858084073571;
    msg.reference.set(tmp_msg_0);
    msg.state = 195U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.4981873765814462);
    msg.setSource(56988U);
    msg.setSourceEntity(133U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(66U);
    msg.ax_cmd = 0.381633705719552;
    msg.ay_cmd = 0.5472342943932161;
    msg.az_cmd = 0.020241103314253994;
    msg.ax_des = 0.1179994272361986;
    msg.ay_des = 0.10431166778039447;
    msg.az_des = 0.5015472913327715;
    msg.virt_err_x = 0.07514880764374576;
    msg.virt_err_y = 0.9832431252757183;
    msg.virt_err_z = 0.9521205696531808;
    msg.surf_fdbk_x = 0.2589138673465885;
    msg.surf_fdbk_y = 0.7375010942634778;
    msg.surf_fdbk_z = 0.2105287532271619;
    msg.surf_unkn_x = 0.8562481976970361;
    msg.surf_unkn_y = 0.7008899581177559;
    msg.surf_unkn_z = 0.5251313631226353;
    msg.ss_x = 0.25680244590346823;
    msg.ss_y = 0.6316609378426492;
    msg.ss_z = 0.35457849875797687;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PTRZYFIVEGOMMIATDSAKCTCEOPVWSZSSKUWRUZDUICNGZLBJJXEYVKNCPSLCDHSSGBMKZNTDODXELOKNGQMQRZBRXLIYPCZ");
    tmp_msg_0.dist = 0.9043149626703706;
    tmp_msg_0.err = 0.25926091809307217;
    tmp_msg_0.ctrl_imp = 0.7246125189096035;
    tmp_msg_0.rel_dir_x = 0.22015286589147642;
    tmp_msg_0.rel_dir_y = 0.00420220732536869;
    tmp_msg_0.rel_dir_z = 0.5496855872404545;
    tmp_msg_0.err_x = 0.7592671631698487;
    tmp_msg_0.err_y = 0.5779164525532605;
    tmp_msg_0.err_z = 0.7621319377750596;
    tmp_msg_0.rf_err_x = 0.918988888911837;
    tmp_msg_0.rf_err_y = 0.7427396477512614;
    tmp_msg_0.rf_err_z = 0.1861266977785998;
    tmp_msg_0.rf_err_vx = 0.06764111359141844;
    tmp_msg_0.rf_err_vy = 0.7926286633541584;
    tmp_msg_0.rf_err_vz = 0.5250175012502054;
    tmp_msg_0.ss_x = 0.2182989869808325;
    tmp_msg_0.ss_y = 0.9120205390954419;
    tmp_msg_0.ss_z = 0.9315240843450701;
    tmp_msg_0.virt_err_x = 0.6298267409585773;
    tmp_msg_0.virt_err_y = 0.7997291900148114;
    tmp_msg_0.virt_err_z = 0.49718254302419207;
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
    msg.setTimeStamp(0.37895731179381187);
    msg.setSource(58406U);
    msg.setSourceEntity(186U);
    msg.setDestination(44118U);
    msg.setDestinationEntity(36U);
    msg.ax_cmd = 0.2833405268958932;
    msg.ay_cmd = 0.11164174084175804;
    msg.az_cmd = 0.3391689124982715;
    msg.ax_des = 0.7918606316612252;
    msg.ay_des = 0.3266094013392383;
    msg.az_des = 0.2601920086752215;
    msg.virt_err_x = 0.14024664847566704;
    msg.virt_err_y = 0.6524407855317026;
    msg.virt_err_z = 0.1148712510083203;
    msg.surf_fdbk_x = 0.9781677273228789;
    msg.surf_fdbk_y = 0.1364337106306326;
    msg.surf_fdbk_z = 0.05524246287365764;
    msg.surf_unkn_x = 0.7216003453710341;
    msg.surf_unkn_y = 0.5226522107380307;
    msg.surf_unkn_z = 0.5468269963400988;
    msg.ss_x = 0.6065075357479192;
    msg.ss_y = 0.24009057804816503;
    msg.ss_z = 0.17305045237518302;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KVDDBJWUSNBSFRJIQYIGJASZVCHXDYDNPJKVNBLPOOXTYWPWKCKNSSTMIPHHAZDQCSQZMURIEQSCPXYZVUTYAEZRSFRBOLZURJOGONKGVDFKPETKPHAFPFILJVGCLNRDMYMHGNBYIWNFQFKILBDRSJXEYLRYDIELWWZGUJFVXLOMOFATHIOCYIGGHLDXMJZRVWCKOQQHBENEAWZUPWHGQGFUHAMXKELOWMZNTCTEUTTXBUQCSUJQRP");
    tmp_msg_0.dist = 0.6358691178592222;
    tmp_msg_0.err = 0.3389102212609627;
    tmp_msg_0.ctrl_imp = 0.16320262414819364;
    tmp_msg_0.rel_dir_x = 0.4324071054090507;
    tmp_msg_0.rel_dir_y = 0.28093260725208113;
    tmp_msg_0.rel_dir_z = 0.12568380443695482;
    tmp_msg_0.err_x = 0.4202891858617802;
    tmp_msg_0.err_y = 0.21388924563016154;
    tmp_msg_0.err_z = 0.776577476853071;
    tmp_msg_0.rf_err_x = 0.15919448858345242;
    tmp_msg_0.rf_err_y = 0.5124350195978854;
    tmp_msg_0.rf_err_z = 0.06051022499686076;
    tmp_msg_0.rf_err_vx = 0.26922741815536766;
    tmp_msg_0.rf_err_vy = 0.8832952795178737;
    tmp_msg_0.rf_err_vz = 0.09841267492763983;
    tmp_msg_0.ss_x = 0.040916861412362726;
    tmp_msg_0.ss_y = 0.9380211773791443;
    tmp_msg_0.ss_z = 0.3451131286875463;
    tmp_msg_0.virt_err_x = 0.576814362367253;
    tmp_msg_0.virt_err_y = 0.9687407167795695;
    tmp_msg_0.virt_err_z = 0.29655576476836487;
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
    msg.setTimeStamp(0.8326384649768979);
    msg.setSource(19645U);
    msg.setSourceEntity(107U);
    msg.setDestination(11403U);
    msg.setDestinationEntity(100U);
    msg.ax_cmd = 0.6047738612908112;
    msg.ay_cmd = 0.8349474492294653;
    msg.az_cmd = 0.5654245158088608;
    msg.ax_des = 0.07729868956471486;
    msg.ay_des = 0.6130637146400685;
    msg.az_des = 0.7796213069266703;
    msg.virt_err_x = 0.32821849493972;
    msg.virt_err_y = 0.7800778336103401;
    msg.virt_err_z = 0.4848915381881188;
    msg.surf_fdbk_x = 0.5173221953122938;
    msg.surf_fdbk_y = 0.9237275589288348;
    msg.surf_fdbk_z = 0.972191422972385;
    msg.surf_unkn_x = 0.7075126631401909;
    msg.surf_unkn_y = 0.5579825531252985;
    msg.surf_unkn_z = 0.6731559317888346;
    msg.ss_x = 0.1786756419183878;
    msg.ss_y = 0.38022961861039084;
    msg.ss_z = 0.7153812875035087;

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
    msg.setTimeStamp(0.6575824962163406);
    msg.setSource(64260U);
    msg.setSourceEntity(177U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(160U);
    msg.s_id.assign("BRWWPTHHBLJNMJUCYKCKMRUKOUQIOJZFYJIENZJQGAEISNXCUWWGTNBKXBW");
    msg.dist = 0.24579244033287806;
    msg.err = 0.8463847522528871;
    msg.ctrl_imp = 0.08971977602634762;
    msg.rel_dir_x = 0.6945550341058331;
    msg.rel_dir_y = 0.31863887291264503;
    msg.rel_dir_z = 0.04049798066670207;
    msg.err_x = 0.967042742149021;
    msg.err_y = 0.7998759473947646;
    msg.err_z = 0.8567105278638849;
    msg.rf_err_x = 0.9163620724374733;
    msg.rf_err_y = 0.9704292240575145;
    msg.rf_err_z = 0.8223614176841637;
    msg.rf_err_vx = 0.609455407687394;
    msg.rf_err_vy = 0.024539511320665452;
    msg.rf_err_vz = 0.6875702690642354;
    msg.ss_x = 0.32586780223216416;
    msg.ss_y = 0.26344396625748234;
    msg.ss_z = 0.5754039213490634;
    msg.virt_err_x = 0.8276090436775666;
    msg.virt_err_y = 0.7053475471172109;
    msg.virt_err_z = 0.38677433288935514;

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
    msg.setTimeStamp(0.589266001087887);
    msg.setSource(7926U);
    msg.setSourceEntity(195U);
    msg.setDestination(59491U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("VPLFLCSARJDDWECURWZTIPDNKSBYKIFFSILCMAPNVOTOTQVXYOESBAECFMXXSXQPZQKCINFSRZAUOPFCMHVWHUNYKSBOVOLFPPCJWYRWCJXUHMEQOIFMTJKDWKKGBRBYYRMBYEYDRHNQRWVMWTGMGETCUEZILABENNHVNJTYYHOAOINGIALTDJXH");
    msg.dist = 0.2633572354415181;
    msg.err = 0.5319048594741135;
    msg.ctrl_imp = 0.4966610304645689;
    msg.rel_dir_x = 0.3555665018425417;
    msg.rel_dir_y = 0.682871591011865;
    msg.rel_dir_z = 0.799438689469749;
    msg.err_x = 0.6564736512295917;
    msg.err_y = 0.34030784026832483;
    msg.err_z = 0.9011335873447737;
    msg.rf_err_x = 0.7662733473804074;
    msg.rf_err_y = 0.7860426519529028;
    msg.rf_err_z = 0.37383191141790617;
    msg.rf_err_vx = 0.9826582084741617;
    msg.rf_err_vy = 0.8790963816396221;
    msg.rf_err_vz = 0.7889291283191748;
    msg.ss_x = 0.7471127701663176;
    msg.ss_y = 0.08975406927041729;
    msg.ss_z = 0.8233175579669896;
    msg.virt_err_x = 0.5449444000954693;
    msg.virt_err_y = 0.14168771311499273;
    msg.virt_err_z = 0.7330551797450578;

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
    msg.setTimeStamp(0.7442743411187112);
    msg.setSource(6338U);
    msg.setSourceEntity(239U);
    msg.setDestination(49717U);
    msg.setDestinationEntity(200U);
    msg.s_id.assign("XJRNSGGCUMNPHXJZWWFZRZACMBYRMBWLUADMERSDIGB");
    msg.dist = 0.6314222740767845;
    msg.err = 0.8985145010480343;
    msg.ctrl_imp = 0.4718083958914726;
    msg.rel_dir_x = 0.2556693052125514;
    msg.rel_dir_y = 0.1532313502104885;
    msg.rel_dir_z = 0.16902941676483862;
    msg.err_x = 0.8304453776222414;
    msg.err_y = 0.6095033325525216;
    msg.err_z = 0.9805490680876051;
    msg.rf_err_x = 0.07246565100145463;
    msg.rf_err_y = 0.6802634191702909;
    msg.rf_err_z = 0.8883100332000387;
    msg.rf_err_vx = 0.3542003769008585;
    msg.rf_err_vy = 0.6612700092999546;
    msg.rf_err_vz = 0.3040791762600672;
    msg.ss_x = 0.18824096649369126;
    msg.ss_y = 0.12291515909826622;
    msg.ss_z = 0.23802085102676152;
    msg.virt_err_x = 0.5218677005756291;
    msg.virt_err_y = 0.6946632809841785;
    msg.virt_err_z = 0.2214332206228029;

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
    msg.setTimeStamp(0.09800523522547366);
    msg.setSource(45886U);
    msg.setSourceEntity(142U);
    msg.setDestination(14941U);
    msg.setDestinationEntity(220U);
    msg.timeout = 43816U;
    msg.rpm = 0.3645219892237185;
    msg.direction = 19U;
    msg.custom.assign("BIIICFWBMRODHUGOOPHTENOUOIVKLTNQYESMKZLACOBYGDZMXWPIEFYBVQASCBHJQFONHJUPADIWKOZNUDQEAWREJCNYAD");

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
    msg.setTimeStamp(0.85905191573279);
    msg.setSource(5936U);
    msg.setSourceEntity(70U);
    msg.setDestination(54968U);
    msg.setDestinationEntity(245U);
    msg.timeout = 38944U;
    msg.rpm = 0.19467612939105483;
    msg.direction = 199U;
    msg.custom.assign("TFMKMBDECXTVOZOGVSNGYALIXGEOQLCWDFMAMTYNENOSIXDHKAXYYHCJFOIHXZKUBRPWN");

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
    msg.setTimeStamp(0.0978020332588806);
    msg.setSource(52430U);
    msg.setSourceEntity(199U);
    msg.setDestination(34207U);
    msg.setDestinationEntity(112U);
    msg.timeout = 63216U;
    msg.rpm = 0.9765266483875938;
    msg.direction = 157U;
    msg.custom.assign("VFEPUDWYKIKSKGOJSRUCRFQGPPTUIYJDWRPKPLADPIVUGEMGSXZIEHNRKBCZYYASZIILCPTOKMPDSBPVXBNCHFMICQORMCHNQXWCOCUTQGACJNLGJAEOHUKNSEQTOMTDZPSEBFDSILLSJTBFHWFGNQJYRRXVMFGJITASUVVOTANFQYNKEYWDXGMHJVREUALBXAEQWAQJDHXJZQLBNDMHYLZRZNHBULTWHWKMVLIZOCFWAWOB");

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
    msg.setTimeStamp(0.5567941062968119);
    msg.setSource(63239U);
    msg.setSourceEntity(13U);
    msg.setDestination(20789U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("GCUERNXXSHDYGKSFCXGYKUEEJGAFDANRULPGIKCZXIEYQFLQMOBXHEXMNPLFWJFPUTTXUZTMRDRUXKDGODDFOCVMCCSAKZIIGBVCOPYLUCFKVNMZONGRVGJXSPPLVATZATRNYWRMTBOSJUULNVFJCBVRKDYKTKWBEFWHIIEUHYZPPSKAQVRLRLBIHEHXQOMBANFBSS");
    msg.type = 146U;
    msg.op = 158U;
    msg.group_name.assign("HIRVTEPDKGCOFBKLBDHXANCBKRCTHKPJNCVCKTMLGEZVFTQNRWFHYKFEPJCXQUHWVCSYWCLYDKOHZWJABUFYWUMLAXQNGJCJJRIFXZGUKRRTHSJDDOTODQLXEFDQIISPBNBYSITMAIQG");
    msg.plan_id.assign("PVGNFSHVCRSJXWFZ");
    msg.description.assign("HHKRPWTBUMDMZNKAWJRMYJCSBAOHOYFNNLVKQBQTMQXUFUKOMDJ");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16462U;
    tmp_msg_0.off_x = 0.16141261157121067;
    tmp_msg_0.off_y = 0.5465669326181741;
    tmp_msg_0.off_z = 0.053767126022502776;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7598254727258065;
    msg.leader_speed_min = 0.6552206573189968;
    msg.leader_speed_max = 0.5633932662317881;
    msg.leader_alt_min = 0.6539007299707166;
    msg.leader_alt_max = 0.1554242025902458;
    msg.pos_sim_err_lim = 0.38507026722648985;
    msg.pos_sim_err_wrn = 0.915347056670724;
    msg.pos_sim_err_timeout = 8214U;
    msg.converg_max = 0.8809415865445305;
    msg.converg_timeout = 43557U;
    msg.comms_timeout = 62541U;
    msg.turb_lim = 0.12292741349818448;
    msg.custom.assign("BNKLQONTUJSVKZTHA");

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
    msg.setTimeStamp(0.5717920768736243);
    msg.setSource(19740U);
    msg.setSourceEntity(237U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(96U);
    msg.formation_name.assign("VQXJFYCYJHVMBMWBLDRLTQKADYQULERQIMZSYAO");
    msg.type = 78U;
    msg.op = 188U;
    msg.group_name.assign("HNVWBSOQYHGYJOIQOYJKKMMBAUNUCOCUDSIEXNPFRZWJAWYWXPBNFFEBMTCGQJZMQFPFDHSPHWLUH");
    msg.plan_id.assign("CRKGMJJLADLLDFRAWHCNKNSKOLGRYBATBJPEKCQYDCWNACHTVLUQVEMBPOODEQIUQZJWPGBBKOXEURIQYMFXUDHFYNVGOXEVFMOOUFVDNFYJJIGMKVJMRAXFZZHLEXSXVSRCZDWLUNSZXKSXCZHVJDHBW");
    msg.description.assign("YDNSZGZLNTYSEYMKLLHDMQWMCLZHWPBVETBOXICKBMZGBFCPYQKIMJDBBRXSQVLEMGXVWORUBRXUPLFZVLTYZYESSYEEMOCCJNAXFVHNWBHGDCTJADAYXQUGJVJIFRAVREMOKHUDJATNGKUOVOZIUOJFDSKJQRSTIWORQPQPVGPPOUAFIKKCUIXKHACBMFPBIYEIASPWVHPRNCUGWKLSGEWMXXDYCFN");
    msg.reference_frame = 72U;
    msg.leader_bank_lim = 0.3419435715378507;
    msg.leader_speed_min = 0.16368294591740873;
    msg.leader_speed_max = 0.9330612852610038;
    msg.leader_alt_min = 0.8581766115454685;
    msg.leader_alt_max = 0.006014607115975346;
    msg.pos_sim_err_lim = 0.20899389941903668;
    msg.pos_sim_err_wrn = 0.287845501532357;
    msg.pos_sim_err_timeout = 1334U;
    msg.converg_max = 0.36208181774875703;
    msg.converg_timeout = 18364U;
    msg.comms_timeout = 26949U;
    msg.turb_lim = 0.43320478381476046;
    msg.custom.assign("BXKWCFZUXEPJNGSIOXWJHDKHYQLSOVOUNZCBNMZVTANNBZTGMRRXLQDKANYHQKUIIDGMCTWJPWODPCBYKMCDQRGJJUOESSO");

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
    msg.setTimeStamp(0.8782793851742897);
    msg.setSource(45554U);
    msg.setSourceEntity(46U);
    msg.setDestination(61834U);
    msg.setDestinationEntity(15U);
    msg.formation_name.assign("TRKETDENPTIFDQKGNFMAOCVGJQHZOWSMZLDPZVFWIXRZYRGYXYMXXKGBNSKDYDDVUTLPALVTIEUDDLXMVQHCBLSJMJWIESYWJIZCSKNHIFGHJJPVUCUZTCLKICFBRHLTPXFWOGAHSMZUQRFJETGVOWAQQMKCPLPXBHCRUAZUBAPQNKCWONXFIEN");
    msg.type = 185U;
    msg.op = 8U;
    msg.group_name.assign("GAYCGRUTELYANFERIIBSAPFSHFMMMJKPSNUNEIXBRNIIDPGRIWOCLLATNKTHRARCRZBPGUNAQGFCZSQDCJACKMXZGIYCPDWIPLTTGJMOPYTOVLEVQECFGHYYMHYTMVTJFJUUQBDXRBUVYIPOWEVXSHXBPFGUXX");
    msg.plan_id.assign("SWSNKIGXHRUMJVCOBVOAQCMUEQDUCBRTGNPOPDEOXJCZUQMSRSWORAUBGVWENXKHBHPVNRYJIUIWAEDDPWIOAFGFAMQKJXMWQKYLMKNJSFOFFEHWQADXJEIIBTNXNHWZGSGQCTLOTTTHLCMIZRLDVYCAUPSSHDVQHEPKBZLKRQWFYVZRJGFDFQZRELUCOLZYSMAGIJVDZBBKUFLIGPYYLFYUXEATGTVWPDSTCVLABKNX");
    msg.description.assign("RHUNHWFQNI");
    msg.reference_frame = 25U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32070U;
    tmp_msg_0.off_x = 0.8530219248458033;
    tmp_msg_0.off_y = 0.8918785894454228;
    tmp_msg_0.off_z = 0.7134502422620154;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9865090669694967;
    msg.leader_speed_min = 0.34051796431197556;
    msg.leader_speed_max = 0.045008349618284926;
    msg.leader_alt_min = 0.6742791616745847;
    msg.leader_alt_max = 0.5034129726768999;
    msg.pos_sim_err_lim = 0.3357482742358653;
    msg.pos_sim_err_wrn = 0.27328252029058975;
    msg.pos_sim_err_timeout = 13772U;
    msg.converg_max = 0.27260962615308826;
    msg.converg_timeout = 48438U;
    msg.comms_timeout = 62057U;
    msg.turb_lim = 0.7025525863105953;
    msg.custom.assign("ABKQNVSJPGUKCNUOOYHNRFQMNYETYVBBPZZNAUCSRUTQJDMFOOEAYPJWUYEDCLJBFBJBCGLXSBGIJLSMFPQMKPKMGVARQSSOFOUWMEKLYPGHSRWZDLWXWKQEPALJXWNKBIKQTVXIHAWHGYPRHEGGRAZPDIJHCKLEUFILUZJSZJBE");

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
    msg.setTimeStamp(0.5747053836291203);
    msg.setSource(28713U);
    msg.setSourceEntity(79U);
    msg.setDestination(60330U);
    msg.setDestinationEntity(191U);
    msg.timeout = 60468U;
    msg.lat = 0.15795004053626038;
    msg.lon = 0.4187577263458002;
    msg.z = 0.5439507761320808;
    msg.z_units = 236U;
    msg.speed = 0.6797796169530155;
    msg.speed_units = 212U;
    msg.custom.assign("PMVAGKYEDLMWZSAFXERMHMSYVHQSBKISRZGENFTJOVWGBZCCJBG");

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
    msg.setTimeStamp(0.2963100044007292);
    msg.setSource(37284U);
    msg.setSourceEntity(8U);
    msg.setDestination(13418U);
    msg.setDestinationEntity(26U);
    msg.timeout = 5974U;
    msg.lat = 0.05620630678731864;
    msg.lon = 0.2933281421366326;
    msg.z = 0.09882502518867853;
    msg.z_units = 101U;
    msg.speed = 0.9322353997895708;
    msg.speed_units = 128U;
    msg.custom.assign("KMCFBAYRSZQZOEEYQUSBCPUXRHADETFBCVNXLRCETULWJDTETUPTBJRQVYVAVYSFLRIOSDPTTMQHUHANZSBEMYUMOANJFXZIGJNKSPYGTFQFIZPQRQXLINBKFKIDNOWSXLGLXZCHNLMOQXMEUKHCIFMWGPAAHZJZSOCMWIGRDSXJRUZWWOYKBPOVHIPXWRKLJLAEWXNEMPDVWJVIBFPEYCUZHWCGHFQTLGMKKBBJYJVO");

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
    msg.setTimeStamp(0.6625571834023967);
    msg.setSource(51554U);
    msg.setSourceEntity(118U);
    msg.setDestination(55228U);
    msg.setDestinationEntity(13U);
    msg.timeout = 42712U;
    msg.lat = 0.10879397310909;
    msg.lon = 0.6384345945714115;
    msg.z = 0.6805566784290663;
    msg.z_units = 102U;
    msg.speed = 0.9795883776662118;
    msg.speed_units = 28U;
    msg.custom.assign("WZUEPYRZNBBNCFJRJTCHOZGLOHJGLKOWWVRVVNVMASKNMQNHLSEFWGGZQBOJHEYQHXDQPF");

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
    msg.setTimeStamp(0.7348622878922028);
    msg.setSource(34341U);
    msg.setSourceEntity(5U);
    msg.setDestination(58905U);
    msg.setDestinationEntity(119U);
    msg.timeout = 33295U;
    msg.lat = 0.025526160876774062;
    msg.lon = 0.12174488889657376;
    msg.z = 0.2939090475603662;
    msg.z_units = 200U;
    msg.speed = 0.7140021080501252;
    msg.speed_units = 242U;
    msg.custom.assign("PQSEIGQWDLBCKDJERUNACDGJBLSOHMXLFVMRWQBNSJOTGYIUXEIURXYVCUSOFKYLNQWTVIFJYMAIWKVFTXEDBALVTBMPHQZBESJSNRMFIHYYNRRBZXLJRPKKVPTCDLWXAQNHAAQAMZGZMYSJZN");

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
    msg.setTimeStamp(0.5227817577341878);
    msg.setSource(59025U);
    msg.setSourceEntity(65U);
    msg.setDestination(53686U);
    msg.setDestinationEntity(171U);
    msg.timeout = 57945U;
    msg.lat = 0.07844693602002994;
    msg.lon = 0.5844417008129908;
    msg.z = 0.5071358568362916;
    msg.z_units = 58U;
    msg.speed = 0.710586536304652;
    msg.speed_units = 245U;
    msg.custom.assign("AGAXDBNCBGUSLBLWBEUFSHARNPRHORQBODIATUJDQIZKSEKFCKWYWRKKFCWCRMIFVSEDTHRMIAURYZNROCPFVLTTLEHIHJOPGOBMQCIIYWPJHDSJSG");

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
    msg.setTimeStamp(0.0742379111541378);
    msg.setSource(35666U);
    msg.setSourceEntity(48U);
    msg.setDestination(54406U);
    msg.setDestinationEntity(71U);
    msg.timeout = 45669U;
    msg.lat = 0.6350598921433039;
    msg.lon = 0.44163506415035203;
    msg.z = 0.460803185783898;
    msg.z_units = 73U;
    msg.speed = 0.7213929146686279;
    msg.speed_units = 13U;
    msg.custom.assign("XSWWHVNSSAWSJLDVOUUAHRMQVMHXUJFOPKVVVWUIJEVYDGJFQSRLZG");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.6580502763655629);
    msg.setSource(19363U);
    msg.setSourceEntity(159U);
    msg.setDestination(31345U);
    msg.setDestinationEntity(150U);
    msg.op_mode = 116U;
    msg.error_count = 214U;
    msg.error_ents.assign("ALDOLHZIAIRWEEEXVUCYSHARJMGCAHFSSXGRAJEDIBCZEBTBCPRVUAMKNQRDXUGHYUJRANLSJTPYQAPSQTIKFLMHUDINZLTFZKMJZVZDBFIIAOGZUSORCFRUQQJYEMNVWHTBFGUGMXQDTLFHHGNSIMVFEQWXPYHOUYKLXJMZOVXVKWDPQYG");
    msg.maneuver_type = 4591U;
    msg.maneuver_stime = 0.9663857814166247;
    msg.maneuver_eta = 39220U;
    msg.control_loops = 809666658U;
    msg.flags = 31U;
    msg.last_error.assign("DWROWBOJRMOONIHNEDAEYTLSUVRKNWSHTAQJEGBPPSNQTOVFFAMRGVGKCKQPMSKXOGFUBQYVQXAJLBYGVPLJFUYHCNTGXLBCUXNZCHHGHOFDAATHCCRIBYUIGMTVKJOYYWAWWYINRMXCXEFDLIDETBKPAZLMSIWWXRWSKPQIVEXVQZMKLQWZLSTDFKDZDZUZSCFSDJEJM");
    msg.last_error_time = 0.015450167430458128;

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
    msg.setTimeStamp(0.06483263772729198);
    msg.setSource(40761U);
    msg.setSourceEntity(97U);
    msg.setDestination(29840U);
    msg.setDestinationEntity(90U);
    msg.op_mode = 37U;
    msg.error_count = 161U;
    msg.error_ents.assign("MEHTFAAQDZASBLVHLCBNYEWZAFXCHLJVXCTHAAZRICKJDUIEVIGXDIPMNBCXYPKRPCMHXYSXHBBQBUQIJLTVKUEGDNRSZMJGGQKIOWENLYPKSLBROVOGYCCMEKFWWESTJVNQSRFBIOOAQTMVSHR");
    msg.maneuver_type = 63895U;
    msg.maneuver_stime = 0.35618070571630134;
    msg.maneuver_eta = 52947U;
    msg.control_loops = 3380448494U;
    msg.flags = 45U;
    msg.last_error.assign("XIENXHLCSTZMPOSDFZTUKAUESIYWHVWCRUYTUXTAHEFRYBJQXPANCOUTXFHDLZJTRFVNDAO");
    msg.last_error_time = 0.09015187584303008;

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
    msg.setTimeStamp(0.47928561594160524);
    msg.setSource(22334U);
    msg.setSourceEntity(236U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(247U);
    msg.op_mode = 188U;
    msg.error_count = 12U;
    msg.error_ents.assign("XWJBMVPRUORGIZOIWQEQUMATMKNAAHOJBGDOGSPWVMTURNQTXCGSBFCRRFFKDDZOKASSDPQQSRVEIKNUSZM");
    msg.maneuver_type = 21096U;
    msg.maneuver_stime = 0.944852602677639;
    msg.maneuver_eta = 47306U;
    msg.control_loops = 3272275891U;
    msg.flags = 210U;
    msg.last_error.assign("WXZCHUVUCPBQSPWYLHYOVKLSDDIFWEOFIQRAWTWNJYSADETDNPYOJBRUIHZPLFUNITREBJCNEOWRZSVCUWSUGMFQQTANKVRAPUKQZPTIDCKGQAXSAOVMAJHRXAXKLXMPKIBTMHREHZOZPTOMECXCFKAZBFIGDMLVELVSGQMTBZLOBRFMRGBWJNYUHDENSJLXWZJIQFPROMEZCUBIMIOSKGBDQHTGXDJGYGDWXPEJTKJYVNHUACXSQCFHYVLKNG");
    msg.last_error_time = 0.6769345225283664;

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
    msg.setTimeStamp(0.05934188470803259);
    msg.setSource(35679U);
    msg.setSourceEntity(251U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(57U);
    msg.type = 138U;
    msg.request_id = 14379U;
    msg.command = 7U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("YBKLXCCYPINHCLREWGWWYNDPTUOIYNQXGGSSZTRJKFDPVLCZABFRZMHRDYKZJVDQPYGQXOOSBSESEROKWRLKJPXOCOB");
    tmp_msg_0.formation_name.assign("ZMPUTCTJKHCSMDCAOBCSKTFMTCEUKCRAFFZWYLNLGYRHSLDGYDJAPLXVNTGQYJFVMEPOHVRAWWTAEPDYAJWWXPFQMXCRAKIHTXBYRREZEIGOIROGDUYSODONQBQUOTPNVBFFMSYLJBQVXVUKRJVMNXNPOVBP");
    tmp_msg_0.plan_id.assign("CQDZHUVLEUTDYPMHGYFHZYWXYDQQOPXDRXYEUEKTANNBDMVENBYGMJYJSTSASKSMCXRIVROIHYXGGEANUPFQHHDOAZJDX");
    tmp_msg_0.description.assign("KWNGJAFOHQMAMTVTGDXHSLHMQYUMVAYNXWEEBXMPUZHWWDKJBRWPAXDLGMTVFBKCNGPZCKTQMRLGPGCXZTOE");
    tmp_msg_0.leader_speed = 0.9368795372903426;
    tmp_msg_0.leader_bank_lim = 0.4620520193511176;
    tmp_msg_0.pos_sim_err_lim = 0.2604855275339891;
    tmp_msg_0.pos_sim_err_wrn = 0.37776003771017763;
    tmp_msg_0.pos_sim_err_timeout = 33260U;
    tmp_msg_0.converg_max = 0.5448447940307171;
    tmp_msg_0.converg_timeout = 34812U;
    tmp_msg_0.comms_timeout = 14726U;
    tmp_msg_0.turb_lim = 0.9211926129875145;
    tmp_msg_0.custom.assign("MJBQJMIPIIQUUCIKK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44869U;
    msg.info.assign("LIQDLTSFCNHLXDVGBNXLRBOVTFPZKWNZGPOURKGYXRPWZXEQVFHNYFPJNYRZQWTMQBYTGCPBIFJIFZRTVUCSUPQMISROPYXETWEDJVDOTMELLOQILOZHGI");

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
    msg.setTimeStamp(0.25882561750156874);
    msg.setSource(29749U);
    msg.setSourceEntity(115U);
    msg.setDestination(119U);
    msg.setDestinationEntity(168U);
    msg.type = 18U;
    msg.request_id = 58645U;
    msg.command = 42U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 28554U;
    tmp_msg_0.lat = 0.561171563848976;
    tmp_msg_0.lon = 0.8033788208270998;
    tmp_msg_0.z = 0.7610498925556519;
    tmp_msg_0.z_units = 2U;
    tmp_msg_0.amplitude = 0.45614446303668366;
    tmp_msg_0.pitch = 0.08345245063734397;
    tmp_msg_0.speed = 0.11994852359319363;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.custom.assign("TFANJSLYVXUJNWZXLLXUWDLVTILMNUBBMEZSVLEQCTTHKSAZPYYRTIQFUAUCVEQDYZIFKBZSPAKBKGYDEIZRGBKYVZXPQQYNNFQMGAIUGUUEZPOHOBGXEBQSNTHDXYOIOZFEKDNJINBGFDJTCKVARDDWJHXOFRSCSECRDJRJQLNOMVNACMFXHKAOWUJWXOLJGTOHBVBPPCCVKRPMLFAFWTSEKZALQMWWOIXPWRHYUWMGPRCMIRHQM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19065U;
    msg.info.assign("RBKAGLCZJVESEMNONFSMGDNMUBXAXZFWEBSEZYCIYDROSDDQNVRTNNHXHPIXWYSMYUIBYSYNWDXFCUJSOJTGPQOKJAAHYWCQMKGOPGCHJGOMARDECKXLSUZJCUHLFVKLXROHZPTIQVGTELAAELQXNKQVPDUWWTWSYIVWHVQ");

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
    msg.setTimeStamp(0.2772056056975586);
    msg.setSource(53572U);
    msg.setSourceEntity(211U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(25U);
    msg.type = 19U;
    msg.request_id = 43624U;
    msg.command = 217U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.7875482728195564;
    tmp_msg_0.lon = 0.36404585370183096;
    tmp_msg_0.speed = 0.01366112774355932;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.duration = 59756U;
    tmp_msg_0.sys_a = 12825U;
    tmp_msg_0.sys_b = 45169U;
    tmp_msg_0.move_threshold = 0.7648522729913545;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44432U;
    msg.info.assign("MVNUGOFOCEJALLGFJWFPRYLZAYWECPVYRSXCDAEAGVOYDYDNOFHZJFKCZRHKTCZIPMNGQUBRKYQXJJIIBVHLLQMCMXTZOGHQTJXLIXCBIKFRWOMXRGLSRWKBIYHFKZXTYBBRRWBIPUYWPZATBVSJQJNNWUJLAVOKGFEUMGHLPVVWSDQIEONTGPGVCDXAETEPNSTDWN");

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
    msg.setTimeStamp(0.9862536309355217);
    msg.setSource(48758U);
    msg.setSourceEntity(147U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(11U);
    msg.command = 241U;
    msg.entities.assign("GELEGEXOAIVIYMSWWQAVMELGLOXTTPFUTMVBASKUCFNPNROIFYSIVAFJPTBIXYBXJSZSRZMYZGNTY");

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
    msg.setTimeStamp(0.5846754252951506);
    msg.setSource(5387U);
    msg.setSourceEntity(131U);
    msg.setDestination(1740U);
    msg.setDestinationEntity(194U);
    msg.command = 212U;
    msg.entities.assign("GFWQDBNWKIZLRZMREMAYXVYCGEGJVSXWMETXMFOHXKJCQDFALWJUWMCXYNHZCRHTDDWOIPKUYDNVOZSSVDQIEDUODLBPEOYGKIRUKHPSUYTFUVBLBLOUPBNOZQFGLZOZZMNKFOIRXVMRMHSXKLJPMTSCLXBAYRLRKAQSGTPMLSRJNGAJTVPFFPNDZJNIACGFCPUTGAKIQBWITAQFWYPUUGVOQBHHHDNJ");

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
    msg.setTimeStamp(0.8499337766402253);
    msg.setSource(43098U);
    msg.setSourceEntity(21U);
    msg.setDestination(18173U);
    msg.setDestinationEntity(82U);
    msg.command = 198U;
    msg.entities.assign("GRMXDKDTKNHLSEAIVFYXKDVBHSZWWJWGVTKLQJIHTZXMGCISXDUBYPAXMIAANKFJGVPFPRLHUGPNSRWABUQZOWLNRLCGOGROWZIWEITASVUUNUBAARRZVXRYQOQCTQDHZJMNMNHKLTEQVYLLBFDXOPISZTZEWEOHNEGHPQYKMOCMXUBYKNCOYCFOPVORCJ");

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
    msg.setTimeStamp(0.8183868807126647);
    msg.setSource(45807U);
    msg.setSourceEntity(82U);
    msg.setDestination(11696U);
    msg.setDestinationEntity(166U);
    msg.mcount = 227U;
    msg.mnames.assign("UDAFIBHKOUCMBASQMVBHNGWDHFLPBECWDTLYQBUXCGEWQDJUHPWJPTJIUSACQMYOXYJQRELYOOXZLTBKSNDHNQYISPDMSJMMTRBKGAPIICYEUVKDWKGOZGLATQVATPTHHBKYZVVVYPXKQZLECFLFDYGXNUZIFNJGAESIR");
    msg.ecount = 234U;
    msg.enames.assign("UTZAKIDFMAFRDHGFMVEXRJTPFLVBFZUQDPRXIYSWTUSGIXSEXTNZMOUXWZDBXHLISNSKCTKZTFRATNYRKCYZOQJIGOIFJLYEQQNBEJIVHHRGUBGKVXMGGXQFIWDLYVANSRENLHJLBQWCWWCCPSPEVPBCKHAILCEONOLNYAAZ");
    msg.ccount = 11U;
    msg.cnames.assign("GDTVILZMFFRKPZIZNOKPTUMRZTPJLDJKLCHQVQUOUNCVYWGGOJLBWMGAYMFQSACYZIBQORZHBPNEHJHLKCJWYUGXFBQZBQYODNHVSRRPTTFKPDWLGASJTHDXUKWHJBKXBYDDYSNWWILETFSWRIKURVEZCERCMVSFSICFDNNCL");
    msg.last_error.assign("HJDOSBTKQLYCTLNHKOWFYFWGXVIUQRMUNAMKNTZFWXJPBMCONFVWGGLPUGEQXLJHFCIUBEABOMXECGKERMEIMLISEJNADWUBYJQQQFBARZNVRIIWUTYAYVRZVZBQIBVMTZWXSSFXGGHCGSLIIJZFLHXZPXULHWQFYVORYDMTUCANKYRCPKZBPRJLAYHJOESYEWEGGHKPTZDWULHQDJCHADPTDCSVKOOTKS");
    msg.last_error_time = 0.21755467434576292;

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
    msg.setTimeStamp(0.739989547459621);
    msg.setSource(1007U);
    msg.setSourceEntity(96U);
    msg.setDestination(59231U);
    msg.setDestinationEntity(56U);
    msg.mcount = 89U;
    msg.mnames.assign("JJXRAWWFCDXRCIZVOPINITFFSXFFPEKGWDVPWONBKOTNAUTVBIBVMYMDEWZKNCAQFUKFMCAGOKIRRWGOSONZTGNRV");
    msg.ecount = 36U;
    msg.enames.assign("FXVVPYNIZOWKGJKMARBXAG");
    msg.ccount = 201U;
    msg.cnames.assign("UFAGFURJEQOATQDKJJLOZGVJTZXVFQCALEHTXMXHNJUDIPIFADKZSCWQRLNWCBL");
    msg.last_error.assign("RPJYTUFDQMJEMPYHPQCMJWGLUCBWYMSNEHKYLOFIHOODRAUKFVNGOIKFSHAQLMDTBXPSQJZTGTDIYMY");
    msg.last_error_time = 0.9218687770604815;

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
    msg.setTimeStamp(0.24772373469542075);
    msg.setSource(54078U);
    msg.setSourceEntity(166U);
    msg.setDestination(10666U);
    msg.setDestinationEntity(189U);
    msg.mcount = 193U;
    msg.mnames.assign("MIZHHTLUVVLRGKADCDTKIPRJUQGBMCBYREXEJEWPPAPSYTENZNSOYXYGNDLWAMWNYFOQZZNFBHQVIBOHVUTOLDAWYBAKVFWNGIMA");
    msg.ecount = 184U;
    msg.enames.assign("KEHIGPTSXVYTMWRZRYUDLSBLROGAKKXGNDTACKUDDFUZAEEBBXRZHEGKSLTSPNXWAVXPHGBIVWWTOGVNMRYTPRQPJISYUQNFWGDOMSCSOLXGPKTZKTNCUOUEZYFMCMMJGBNCHGYONHPAZBNJUHMOCRIHDCOLTDJCXQFVMQIZXIBZJEYLCFIPKQJVBYJXBZBHFLQWRODMWSELQYADKEOPSDIWQNSUYAUFKRIVJLNFZRQVVJUCQAHFTAFLEVXJIW");
    msg.ccount = 45U;
    msg.cnames.assign("WOGHWPILCDBXYVTNLFRXJPULVYQUYWKEQSSBTGUXTTCDGSPETARVARGYVKSVAQRBBQGEQTACDTBLPFVMZRZEQBDLOFFIJHDOHWZLKIXLFOGVPOBHK");
    msg.last_error.assign("VOHQCXOZBKZWGIBWYQRLOAJDEISVYZMFDDBSHIQNBEAQDHGKYWBCXJRZRLIZICYWMPYJOTTPSVMFFJVNSULZWPNOG");
    msg.last_error_time = 0.278888128781299;

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
    msg.setTimeStamp(0.41489276265858865);
    msg.setSource(21072U);
    msg.setSourceEntity(20U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(142U);
    msg.mask = 199U;
    msg.max_depth = 0.2999054122038254;
    msg.min_altitude = 0.6991906702119118;
    msg.max_altitude = 0.2971890172917233;
    msg.min_speed = 0.39631737290651503;
    msg.max_speed = 0.9678522826357852;
    msg.max_vrate = 0.2477752011928217;
    msg.lat = 0.5964623031117077;
    msg.lon = 0.29833247801704754;
    msg.orientation = 0.3883439533034089;
    msg.width = 0.7205371124706146;
    msg.length = 0.06971753191236618;

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
    msg.setTimeStamp(0.815901046381415);
    msg.setSource(55685U);
    msg.setSourceEntity(187U);
    msg.setDestination(51412U);
    msg.setDestinationEntity(54U);
    msg.mask = 242U;
    msg.max_depth = 0.29557558267034867;
    msg.min_altitude = 0.34535311105638977;
    msg.max_altitude = 0.47793590135736297;
    msg.min_speed = 0.7406909259806065;
    msg.max_speed = 0.5563694347246253;
    msg.max_vrate = 0.8379152479511376;
    msg.lat = 0.11047515544851993;
    msg.lon = 0.5850088341958443;
    msg.orientation = 0.14824839655139876;
    msg.width = 0.0650130751366974;
    msg.length = 0.9804745468458852;

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
    msg.setTimeStamp(0.8156892403182178);
    msg.setSource(49202U);
    msg.setSourceEntity(56U);
    msg.setDestination(15965U);
    msg.setDestinationEntity(145U);
    msg.mask = 249U;
    msg.max_depth = 0.9084474227101524;
    msg.min_altitude = 0.03495482625852797;
    msg.max_altitude = 0.4929870728185084;
    msg.min_speed = 0.3359612718202639;
    msg.max_speed = 0.29191090779698514;
    msg.max_vrate = 0.8879297781545035;
    msg.lat = 0.41261920446943745;
    msg.lon = 0.47167542364055115;
    msg.orientation = 0.2280487717738856;
    msg.width = 0.7018113926335551;
    msg.length = 0.21229644926948676;

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
    msg.setTimeStamp(0.15113345341667128);
    msg.setSource(32320U);
    msg.setSourceEntity(5U);
    msg.setDestination(41714U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.6656097162436501);
    msg.setSource(39339U);
    msg.setSourceEntity(167U);
    msg.setDestination(693U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.4025304729079059);
    msg.setSource(5895U);
    msg.setSourceEntity(0U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.48918008759908016);
    msg.setSource(40465U);
    msg.setSourceEntity(55U);
    msg.setDestination(59598U);
    msg.setDestinationEntity(110U);
    msg.duration = 13426U;

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
    msg.setTimeStamp(0.584983088080351);
    msg.setSource(60446U);
    msg.setSourceEntity(133U);
    msg.setDestination(65378U);
    msg.setDestinationEntity(233U);
    msg.duration = 39490U;

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
    msg.setTimeStamp(0.07265343547818881);
    msg.setSource(32019U);
    msg.setSourceEntity(180U);
    msg.setDestination(44554U);
    msg.setDestinationEntity(74U);
    msg.duration = 35619U;

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
    msg.setTimeStamp(0.2453017408693945);
    msg.setSource(40416U);
    msg.setSourceEntity(132U);
    msg.setDestination(28948U);
    msg.setDestinationEntity(245U);
    msg.enable = 222U;
    msg.mask = 3800099547U;
    msg.scope_ref = 4176614471U;

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
    msg.setTimeStamp(0.7063523868821041);
    msg.setSource(6045U);
    msg.setSourceEntity(248U);
    msg.setDestination(42500U);
    msg.setDestinationEntity(96U);
    msg.enable = 79U;
    msg.mask = 1752440081U;
    msg.scope_ref = 3825481527U;

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
    msg.setTimeStamp(0.969200732779899);
    msg.setSource(33764U);
    msg.setSourceEntity(153U);
    msg.setDestination(39749U);
    msg.setDestinationEntity(225U);
    msg.enable = 27U;
    msg.mask = 2329516465U;
    msg.scope_ref = 3674343020U;

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
    msg.setTimeStamp(0.5809902819034792);
    msg.setSource(28538U);
    msg.setSourceEntity(43U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(13U);
    msg.medium = 28U;

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
    msg.setTimeStamp(0.3928055948423922);
    msg.setSource(58027U);
    msg.setSourceEntity(225U);
    msg.setDestination(26377U);
    msg.setDestinationEntity(110U);
    msg.medium = 228U;

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
    msg.setTimeStamp(0.05826589893374312);
    msg.setSource(1654U);
    msg.setSourceEntity(54U);
    msg.setDestination(30194U);
    msg.setDestinationEntity(61U);
    msg.medium = 91U;

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
    msg.setTimeStamp(0.7031772569306138);
    msg.setSource(48482U);
    msg.setSourceEntity(163U);
    msg.setDestination(14547U);
    msg.setDestinationEntity(122U);
    msg.value = 0.3752934772672074;
    msg.type = 166U;

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
    msg.setTimeStamp(0.6174552513330118);
    msg.setSource(16465U);
    msg.setSourceEntity(161U);
    msg.setDestination(33377U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7033874666195712;
    msg.type = 135U;

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
    msg.setTimeStamp(0.8272705539897698);
    msg.setSource(13474U);
    msg.setSourceEntity(87U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9679337359344862;
    msg.type = 221U;

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
    msg.setTimeStamp(0.9014496790940502);
    msg.setSource(10712U);
    msg.setSourceEntity(85U);
    msg.setDestination(8191U);
    msg.setDestinationEntity(22U);
    msg.possimerr = 0.44499370958199136;
    msg.converg = 0.786475573110797;
    msg.turbulence = 0.17466130830425708;
    msg.possimmon = 253U;
    msg.commmon = 227U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.9349836214375234);
    msg.setSource(54030U);
    msg.setSourceEntity(160U);
    msg.setDestination(11445U);
    msg.setDestinationEntity(49U);
    msg.possimerr = 0.020703645604744914;
    msg.converg = 0.3321619921669098;
    msg.turbulence = 0.3044104950303389;
    msg.possimmon = 194U;
    msg.commmon = 126U;
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
    msg.setTimeStamp(0.7626980182309151);
    msg.setSource(12868U);
    msg.setSourceEntity(162U);
    msg.setDestination(20610U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.3458729268586236;
    msg.converg = 0.9011522275931031;
    msg.turbulence = 0.9165132258322788;
    msg.possimmon = 82U;
    msg.commmon = 7U;
    msg.convergmon = 189U;

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
    msg.setTimeStamp(0.7591987920174542);
    msg.setSource(13507U);
    msg.setSourceEntity(217U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(78U);
    msg.autonomy = 117U;
    msg.mode.assign("XRLHYFIGVYSMMUWIGURMAHCUSREPNUJFVPFNGAZYSVOEGSQDQCQDJSVFUDFGB");

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
    msg.setTimeStamp(0.30478794152646493);
    msg.setSource(43171U);
    msg.setSourceEntity(74U);
    msg.setDestination(37284U);
    msg.setDestinationEntity(22U);
    msg.autonomy = 128U;
    msg.mode.assign("HQWSLXPHGYEYLCXVWISGCBLRFPWSLFFNYKBAMBUEHRMUIHWZAFJDCRJKGKUIUETGVIAMUAEBKOSSVLWZRYPVYCLIOEJTZPZOKJGOFVYDRNBRTZRNTBXICOQZDAVIKGNKONBTPVQHUZDTDYMRCGQJEWTSPAWPXQVCNTKYEE");

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
    msg.setTimeStamp(0.5411321585884388);
    msg.setSource(43994U);
    msg.setSourceEntity(166U);
    msg.setDestination(1656U);
    msg.setDestinationEntity(204U);
    msg.autonomy = 153U;
    msg.mode.assign("NAEQLUOGYG");

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
    msg.setTimeStamp(0.5933938097605248);
    msg.setSource(3943U);
    msg.setSourceEntity(90U);
    msg.setDestination(31030U);
    msg.setDestinationEntity(141U);
    msg.type = 101U;
    msg.op = 132U;
    msg.possimerr = 0.575963780312107;
    msg.converg = 0.8953977421760032;
    msg.turbulence = 0.7906859685090705;
    msg.possimmon = 30U;
    msg.commmon = 227U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.6086880225355928);
    msg.setSource(49318U);
    msg.setSourceEntity(105U);
    msg.setDestination(3349U);
    msg.setDestinationEntity(4U);
    msg.type = 110U;
    msg.op = 87U;
    msg.possimerr = 0.72052664364625;
    msg.converg = 0.7479376558012417;
    msg.turbulence = 0.009746610265203293;
    msg.possimmon = 67U;
    msg.commmon = 194U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.22260677225891357);
    msg.setSource(8727U);
    msg.setSourceEntity(13U);
    msg.setDestination(21945U);
    msg.setDestinationEntity(0U);
    msg.type = 163U;
    msg.op = 202U;
    msg.possimerr = 0.6597985408523811;
    msg.converg = 0.5555353298312802;
    msg.turbulence = 0.41314642909650146;
    msg.possimmon = 202U;
    msg.commmon = 160U;
    msg.convergmon = 113U;

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
    msg.setTimeStamp(0.019337564848289968);
    msg.setSource(22162U);
    msg.setSourceEntity(238U);
    msg.setDestination(1210U);
    msg.setDestinationEntity(240U);
    msg.op = 3U;
    msg.comm_interface = 166U;
    msg.period = 39235U;
    msg.sys_dst.assign("XUIKJYHIUUHRSSXQTBDKWOEOLWYFMIGMRHOSZQWZQBUUXKBLCZVMPODDBCPSSGRDCLAQFMQOVHXASVEUPETGYNFJDOMWNZAFEWGANLFKITFNTTCOJVKSLCZXXOGNREYPB");

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
    msg.setTimeStamp(0.10645181380418112);
    msg.setSource(10313U);
    msg.setSourceEntity(54U);
    msg.setDestination(7493U);
    msg.setDestinationEntity(113U);
    msg.op = 9U;
    msg.comm_interface = 102U;
    msg.period = 31459U;
    msg.sys_dst.assign("RWMQDIQQELEWPKIGYSVZQDARWQIMIHPBBCESRAXNREGQONPFGISLUTC");

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
    msg.setTimeStamp(0.5389187148558202);
    msg.setSource(42054U);
    msg.setSourceEntity(248U);
    msg.setDestination(4593U);
    msg.setDestinationEntity(209U);
    msg.op = 215U;
    msg.comm_interface = 13U;
    msg.period = 18630U;
    msg.sys_dst.assign("ZSFPMEINCLUNLVEFVB");

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
    msg.setTimeStamp(0.7105561928791032);
    msg.setSource(37332U);
    msg.setSourceEntity(24U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.9192169136382347);
    msg.setSource(24730U);
    msg.setSourceEntity(152U);
    msg.setDestination(4715U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.13993248674348902);
    msg.setSource(10969U);
    msg.setSourceEntity(123U);
    msg.setDestination(25974U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.8031021671386988);
    msg.setSource(57514U);
    msg.setSourceEntity(27U);
    msg.setDestination(32598U);
    msg.setDestinationEntity(16U);
    msg.plan_id.assign("FCRHMIRRAUBHWYQNCIQSIVCSVPNQYAKNSDZZCLDTPBXJSEMMWDKQRFTVNVLYABBGOXWWSPTNAJTFLEFLAFKYXKTVMMIZONJHCGKUXTRPAIXDZHTLFKWQFHQTOIECGZUJIMYFLODCMXGYQWCOCKHTESGAEKOSVDLRGNNGDJUJJSWYHXJEYEUCUXFZGQUZTEXBRSPLUDVMUSBAPZWIXPBMFJZVGMWAGBULKJEYEOLIZRIVKDYBRHQONOHPBQP");
    msg.description.assign("XKMHRPYSKTLHZXBEXPFJRDXIRQPOAGGGJYJRDUJJWPJOGTBWURHDPWUKDGAUNIENQTEWSVVAQTELOQFECPVCBWHBAVBFLNVMXZSFNKAIXWXNOULMKLSNYOIVKCARSTJW");
    msg.vnamespace.assign("GQWBFLBBPQERPYHNXYLNJAZARYWIOTYEXTQXJPWANOXJCFTUBVQQDPEFHWJXMCBSFQZSRUJLVCZLIVKLYBWZHQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SDBLYDFUTGQOEBTUTPKVIDVPMVAUVCMFZWMZYGOGPEACNZDZAODJXRJCTVHJOMJZYDIKMHHBWRIGIWTCHSNPHCAAZCNVAYELIQYWPYAZRRVNZXLQRNMHTHFGORJKRDYFXBIAVTHMWWHLYKF");
    tmp_msg_0.value.assign("DWBVTUHRHQSFBFSGRJJHDUKKSRMGGOZQTLTJXLDYLTEAJCJYIXDWOAXQAQWUUMKCNPI");
    tmp_msg_0.type = 115U;
    tmp_msg_0.access = 11U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NPGSDVKGRTVFYPBDLNEOQBFXYBCGERWURHMCNDNVCPQWTQLGLKBESQDWUELWAGLTJBBXBSAXDSYAHPKCRZYOQAHFBORDPJAZJRGPNYSKSXNILFAUZYHAVGMVMNOXIFQIJXYYDXTWFOEHMHUWKJBJUPOKYBGOVAWUZPHULJUSMRKNLCITUHDDTKIIENOHVAPSZKTKZROWXVRTMRGNOEJEWJC");
    IMC::CloseSession tmp_msg_1;
    tmp_msg_1.sessid = 1289082020U;
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
    msg.setTimeStamp(0.2349320274833797);
    msg.setSource(13013U);
    msg.setSourceEntity(28U);
    msg.setDestination(48994U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("YNCDTIXVPHWMFHQEITOZBBEMCJCWLMJNEAJAHTHKIOOMENPLHBEPMFQSBVTTGHYABXQVFOGWFPGSUYXIGOOKVBAWYKKDVPKQCLNRVYLSSDREFRFUXQZLDOHKFXJNMKJCCKRWEFJMUYWBQDZAYLUTDECNTIDSNWJZDSMVNYEGGVRATQMAAGTXUWPUXVODUQYZMGXBRUPGVJAARIJXPQGNWQWHCZJFZOZBKKSIURLSSLIUIPLBDIHR");
    msg.description.assign("FOIEHMOUESQOXPRWFTLLTSUDKTNWAIJQGFIRVBYBTGZZDZAUGXZUVCLPMIAUMUVPQRWAHNNMNZOCECOKGUVCHTRFEVSBXTSQUHEFAVISJQPBGFWDBPJGHXLZQAOEHQSYMFCNWLYETDAXORMSGCZHFYPNEIJJSBRMJSNXXLZXVNRYKECWWRTWGID");
    msg.vnamespace.assign("GQAHBHARMKBRCCEIQVUBBIKKMBZCH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GKXCPJCDNTH");
    tmp_msg_0.value.assign("FYQBSZAZYYZDPCGDEECYMTYQVALFAJSBDHGRKCFOTNNIOL");
    tmp_msg_0.type = 6U;
    tmp_msg_0.access = 53U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QLSGZBKJCWKVFNAPMHVEHQDORXKGJJRWYOBVZIGQLJVIYOIPYTKFABTWDDOXCDGULOSRVCCVMEJTPUYQTUJKGBNDSRZAMYQUGLCIKKMAABWTESINFHLOXCXRNCQWZSIJBOFQPASLIGJPVEKYRDVGEXONWHLCHNFXPVIJFQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YJOLSWXEHODQCAYXYKKQXRJEYJGPPKLFRNVQRCPYBSYAGOEPZFSYASTIGCXMEJOWTMUQFMVWDZALLJPXEHPZAPWRBYXIMQVTOHMYCPMLCZNKIKHKEEJURGVNSZRQBUZWGGDCVOWSOAAWIDGBCDLUNFVBSQOHWZIFJEFJXATHVDJZVSBATCSIIMBPUKETGKLCNBUUXRRLBIEQMDTDSWO");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("TUERBPZNLIDUWLDTJQVYFYVNIQGQSHKBKHPXUXMLEVENGFTCUACLHIDSZJZHRPMZZSEACQMYCONCPJGCYYQIENCROZKBHTVKQUTWESEFPMSMYOAXGCPYWAEGIPYNWRKRAFUWNQVAZSJOUNJBXSLZFHGQUCJMBFPGRDESAAOIFLJDBHVPH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ReplayControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 229U;
    tmp_tmp_msg_1_1.file.assign("IPVTEHUUGGEFNRHWBAXJESDEUOLDOAMVBMGCCMSSRLVBFEJSHRYMCLOJHUIQEJDNZKSCKACCLNSTIVCKQMTPETQJSTLDTPMXYXBAPQEJEAWIFOKGWWXFOZAJZIFAGZKKUMTXWSXGNMZYFYGACBD");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7082611902246141);
    msg.setSource(31472U);
    msg.setSourceEntity(142U);
    msg.setDestination(13608U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("URGGSJUEMHXWYJAYNWTQXQTSISJCARGMFIWUNREUAAUUSFHBZLFJZMOYJOIPDPNYEKZGTKQWKPPYCMFACNGWJCHXJUMVILOZFRCQOZSIJCKASIYSGQNRCDWVBXCOKFHPWDTLDOADTFUIBTOEZOEGVKDNHYACRGBFBEKDQJBVZGUKVTABVMXHENDVRXLRPLQSMVDLX");
    msg.description.assign("IVNONGOLWAXBJGUMCDTANVLCUBSLJJYEJXIKDKECTQHVIZLFOMZMISGRTWSCKNZGYQZHNRATCSXKKWFVLQHGHAMHPBKFSPDAHSQLEULIUXZAOMSKDAGWIJPZCLERZQWVODQNKMVXBPOXCUOPNGSZWFHOJGRAXBAYWFSXPTYICBFQEPRFUQYTWNEJWVKRLUGPBBQDJTTENELIDMZDSDFYTTJIBCHPRUVOIEEGF");
    msg.vnamespace.assign("OFILDTYMQVSNMWDMVXBYGURVTNRJUJJIVYZTOQZJSFEMNZOVIAEICHPVIYUNEWPYAJFXQWQHF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PIQITRHRCAQUUZGOWBVMFONINTNOXSQAEOZVMTGQGYFJDSCZEZCJHUFDYCCGMNMVLKWKQSPEKSCEMYBKZHELKKHLXHHRKLBXDUDLVTXTTTYASOXUYSBRVIYYUUGNNRJOB");
    tmp_msg_0.value.assign("DHTAVRDZCFGDPJSREKNZOBZNRIYHJTNMENISGKELQVXBFOEEYZOCJHJTSXNBNBKZNEIWIPTRGDBCWHIIBPEKXKGQPUWYUFVCDJFRPHFXDMMTKPXUKCORUSUWHSDGLPGOSUAWWFREAYUGYJKQLJDQMQAMXZBXXTSQLONUXLTQPCBUIUYPLGRFXMKW");
    tmp_msg_0.type = 210U;
    tmp_msg_0.access = 244U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WSICVRZZAMHGXJESTPYUMBWSQKUYTJYLDMABCTBHRCDAPHIVNZLSZPAGMEINSOEGRQBWZTGAWEMPSD");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VGQDMSTGIWNMJMDLJGPYDRYDBONFRDZLJIGSIKPKASWIORCYEETTHAHFPHLFSQSFQSJXOMXPCFEATUVQRZKPYXPQXDQNZQRKWHDACJSBLGPVVRSBGVGZVLHRBVWWDUNHPXPXCJULAGJWWZMKEUTFIUGCDAYLXXPSFBDCLZMXEV");
    tmp_msg_1.dest_man.assign("DTLKNUSZSKTRYIFISUAXIPZPSYZGODVXWADNYIGXVXBOCJNHPMPURKCCNPGEUOXCYBEH");
    tmp_msg_1.conditions.assign("RZSJPUUDJHKKWQAGUCWXGUOJEKSMSAQSTTBFXYZETJBLYFBNXIMOMOVCSYQZRHWZXRKLPCWMFMVQJPTHMOXPJCADDEUARSNCEWVTMGDLWDZFGCOLXGQOBBTNGQZLRNSIFHMPCGNDDVWECINBAKAHO");
    IMC::LblEstimate tmp_tmp_msg_1_0;
    IMC::LblBeacon tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.beacon.assign("ANDSVVRFYMLNDUIWQJRWJLSQJBDYJYZBAUTJMMLIYOOXCACEKTSPKXSCOVRQYC");
    tmp_tmp_tmp_msg_1_0_0.lat = 0.4754252941349504;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.25133928251462545;
    tmp_tmp_tmp_msg_1_0_0.depth = 0.9003948058993418;
    tmp_tmp_tmp_msg_1_0_0.query_channel = 70U;
    tmp_tmp_tmp_msg_1_0_0.reply_channel = 198U;
    tmp_tmp_tmp_msg_1_0_0.transponder_delay = 64U;
    tmp_tmp_msg_1_0.beacon.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.x = 0.8136122792321946;
    tmp_tmp_msg_1_0.y = 0.05949331907927535;
    tmp_tmp_msg_1_0.var_x = 0.5575273595487029;
    tmp_tmp_msg_1_0.var_y = 0.8964417742635886;
    tmp_tmp_msg_1_0.distance = 0.5517948260787205;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PopUp tmp_msg_2;
    tmp_msg_2.timeout = 8862U;
    tmp_msg_2.lat = 0.6613752077430662;
    tmp_msg_2.lon = 0.11695459354774396;
    tmp_msg_2.z = 0.6009518890055109;
    tmp_msg_2.z_units = 180U;
    tmp_msg_2.speed = 0.8337388716262055;
    tmp_msg_2.speed_units = 94U;
    tmp_msg_2.duration = 5499U;
    tmp_msg_2.radius = 0.2993799593910095;
    tmp_msg_2.flags = 245U;
    tmp_msg_2.custom.assign("MGXFSWVZWJNECYWLJDYXRHUUPTVYPGMDFLEZXURUXQTNNEOAPPFUKYGMGYHHCPWHULLAJIGVKRCMCKCUSOJQZSLFVIZRFENPKMTOVZWIKTKBUZAMRANXRNOYXCXOJNYJUBRUQTBVKNJESWGYJEFQHAPLBAEEZXFDPBZGCXIQVOBADQNSGMGOHQTWIOFDITSEHOMFCPSDKMOWPGIDRVISHIYLWNWHBTQKAABLCJBRHQTSDTSBXZ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::EntityParameter tmp_msg_3;
    tmp_msg_3.name.assign("ZBOMROMUENOLSCGCTZAGUXBIYVQCZYMAYQIJKEFWFR");
    tmp_msg_3.value.assign("ZQDCFNKZYDWISJCGPMBAEKCXRRABWMIDAYALJLFXGZVJRPRTPIAPOGLYFVIYTUBILPVTSJFNIXJCVBZXHVEPTGTRQCHNFHVUGGMZWWMKSXHWTTJUROXWQOSMYFNCRDHQJLEUAIFNFHGOOQGXHOOAPRMYUQYKDXBFYBURYWNNVTCYSBPDDNESBNOLVIWNMZEESDXLUCMDWSOKDRKOMZUTUFKKXALUSKEZ");
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
    msg.setTimeStamp(0.12044140151587834);
    msg.setSource(11610U);
    msg.setSourceEntity(25U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(227U);
    msg.maneuver_id.assign("FGLQMWDWEYOBXXTEQYZWBWQKRQEFCABJENTHCOXKIDJMJUJYBJRSKINSFHDOHZFTFZZETPLYNETKKPYNIDSJPVDBNUAOORIIWGXD");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 30407U;
    tmp_msg_0.lat = 0.6440648397724988;
    tmp_msg_0.lon = 0.5189521643049619;
    tmp_msg_0.z = 0.4341418552968884;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.pitch = 0.5145239249088271;
    tmp_msg_0.amplitude = 0.4131388358865036;
    tmp_msg_0.duration = 10001U;
    tmp_msg_0.speed = 0.8620994067173339;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.radius = 0.2339634747729049;
    tmp_msg_0.direction = 199U;
    tmp_msg_0.custom.assign("JJRWNJDUSJMCIMSOFPHUDCYCTGSVIXPHBHCRSPBMBRIJLRKWVFEFQIQZWVXRDEPABRIEULZDXAFLAXDOGMSLMXHINNTYKTSYDXIHESVBSYYVOOAXYRWFC");
    msg.data.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9502804529596889;
    tmp_msg_1.z_units = 231U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FollowTrajectory tmp_msg_2;
    tmp_msg_2.timeout = 42095U;
    tmp_msg_2.lat = 0.5398856567769573;
    tmp_msg_2.lon = 0.16780426468411747;
    tmp_msg_2.z = 0.8492927824413805;
    tmp_msg_2.z_units = 52U;
    tmp_msg_2.speed = 0.7279458456086064;
    tmp_msg_2.speed_units = 179U;
    tmp_msg_2.custom.assign("QBBOPSFOVSITCEHLQVPIRIJYPPDREJSVHMMWJWDGYMTURNR");
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
    msg.setTimeStamp(0.7676127674814786);
    msg.setSource(27516U);
    msg.setSourceEntity(35U);
    msg.setDestination(44906U);
    msg.setDestinationEntity(95U);
    msg.maneuver_id.assign("YLETIBEETJMECGQZCQAMAQUBCIKGGRCAKEQHHSHYPWXVZWPYWWRHXOXKXCFXMAYEJCYOBLKWWIJJVFLKFZCLQRPWQSUMUOPRVLNFWOMNVDZKXUBEYSSJQGWUFIOORNMYRVGALDNPLLCUERCBPAIIKOHJWHNIXJSBTZTMHAVGHIIQVKUTSPRALFTNXDXIDJ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 3198U;
    tmp_msg_0.lat = 0.07462535278776505;
    tmp_msg_0.lon = 0.69578667199487;
    tmp_msg_0.z = 0.784193975301465;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.duration = 47031U;
    tmp_msg_0.speed = 0.9499662208279204;
    tmp_msg_0.speed_units = 51U;
    tmp_msg_0.type = 177U;
    tmp_msg_0.radius = 0.18037621466615106;
    tmp_msg_0.length = 0.5290406186905335;
    tmp_msg_0.bearing = 0.9063809736762463;
    tmp_msg_0.direction = 88U;
    tmp_msg_0.custom.assign("LQHXWLAITULVNIKPYKOYEAYMNSVJQPTICLGUXMSFJYZNOJTRQCFDAVTMGIEEZKHZUDHPVBFGVRBCPXMJAWIBNRWTVXVJIFCYSWXVQZUURLGHKZNWHQXKSQMICPGSCTQZOGCKCRFMNRZSOWUAEGZBEXGLRMYWVJWQUYELEZYOHDBPBIDESNYTJBJKFBPKRFFXUAPRBPZLGSAXTMNDTFOE");
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
    msg.setTimeStamp(0.9547131600967571);
    msg.setSource(8423U);
    msg.setSourceEntity(44U);
    msg.setDestination(22322U);
    msg.setDestinationEntity(160U);
    msg.maneuver_id.assign("WCLUGLNAFBQXTNVLVIOMIQDSHEXUJNZEYPCLAAHWZMNCQJHLWOUKOPARRGBQLSTTSDKXFBHNGFSTECNUBCFPSLQODTSADYXSBFZVJWIGUFLUHRQMLTORV");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.91181011676766;
    tmp_msg_0.lon = 0.1635184473004052;
    tmp_msg_0.z = 0.738012526388222;
    tmp_msg_0.z_units = 218U;
    tmp_msg_0.speed = 0.009327654342654035;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.custom.assign("AGWYMYXNEYVYDFRXGULFDJGXJVZQKAUMRWMNCQOIDZZKLFSHTHWLWBOXPLQZFEJINSUJUITKTUBPEZZAQMIOAVOCVXVGHPDXRZSUECQYCBPYATIGFBOTSBCUEMKDSYUISCATUVTVHRBWXLDZFILSZFDPACWWAEOJPRZPXANLBHJHINFQHQNFHPJTPIKYNETBVNOLOJM");
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
    msg.setTimeStamp(0.8705745261691386);
    msg.setSource(60993U);
    msg.setSourceEntity(215U);
    msg.setDestination(46506U);
    msg.setDestinationEntity(53U);
    msg.source_man.assign("CRUJLMSWJUHHRFHLGSAEFPLKMFWOWJVDLHKJGYAYBCAYKTHBQQBXHPRVCRPEIZTGKTWIDCOBUJVOOMNHSBZDOIRZFNLPLGWTBABDXUCVUYFNYFUDVXTFNKRYMQQCEDQEZPZPIAEWKKJCWHXYAPLCSPUVDSMEABQDQEYQEQVHMCTNBRYFWYRVOOTOJNFGSLPJSSRXBXGUNADKLNIOEGDHXKMXIVNTVZASIIEGZJLARSZGUWOMIQTZKX");
    msg.dest_man.assign("TIUTAKSZSQMCDQQETXLAILITCXGAUEBENHRVDMIHZYUNQNCUPVAATMREPKLADVLYVIVLPDSEDWINSHMJRAWZZLECBXWVZQUVNBBAXHLZZUYFMCRAYWZNFMXOJOCWERXMGWJVFJYHMB");
    msg.conditions.assign("GQUXCADUIMZCXNMYXQAENZKRBVLAFQPROJZBEGYBRIXAZVIUFGCLHTMQHOTRKBL");

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
    msg.setTimeStamp(0.0037217867363368295);
    msg.setSource(15360U);
    msg.setSourceEntity(133U);
    msg.setDestination(34620U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("VSCIPHPLGMQMGXSKMJBULBKMERFYTAWCDKGCGWHIODADTKZWAXFBZVZLGYDHVUFHZVINCBPQMWOSOJOVRICCLKOIDCSPYPBWJERRHAUEVRQNTEZTMCKUMKXJIOTVFGCEGNEFTVDLWMUPPXNIBQUDJP");
    msg.dest_man.assign("BEZWUSATJBYDAPGPYSKMDVLNWVKSJOBBWXGETHKGIJWL");
    msg.conditions.assign("NQXGITHPZLEHPJKDBVQUOFUFRWSSRNOPZBMVEGRYEMONFNMAKCHJRFTBQCXHGGPUHATNBWPZAZQPDAHZUDDPWCVNLWTLXEIEXDTIRCIKOWFBVYDCEMYWJVNQGAMTUHCEMAGTIBSASORCUKBYFNYLZXYJTEZAIISJUIRVLHKSIQSDZPLMMBSSLNJJYHWDENKBQARGMLUYCIPUWZKFGV");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.8384566384695109);
    msg.setSource(38637U);
    msg.setSourceEntity(175U);
    msg.setDestination(65062U);
    msg.setDestinationEntity(234U);
    msg.source_man.assign("PYNPSPBGSOMOCOKEQCLXCTJGTCKGZHADPVSNGJCBVELURPHZWQIJOOTFMSLGYHVJJGJSBXVQTFYDDQJXDEAKGMURIKSZMBBWFPVGCYUKZIRAMOUMILPFNCZRHECDIJUXFAVDBOIWALYJYNWWXFKBVHJWOKXIUXFZFSHMANXRLYIERETEASLISKYARNUUZVRFOQMQNCB");
    msg.dest_man.assign("WXZEBWNIOWHHAKSDKZAIVPHTJNNUWPWQKWMMHZYMKEQRGVOYQUKDHFNJGACPIZPYAGVTVIFJUFJJOPLSBDUNG");
    msg.conditions.assign("LKXHSQIEOFXVVPPOJPZGZCUAXYAGCOLILULSZMEQXLLIHLBVBBHHEVIOWXMHFCTBXQSFWUDVMDZJQQKYYBDYAOEMIDADEFUGSNRM");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("YUTRIHMUUTIDLXTIEMFMPGWZFMLWXTRDTDYRKSKDVQBUOYRU");
    tmp_msg_0.timeout = 48663U;
    tmp_msg_0.contents.assign("CDPANMLHESSMLKPOJGBXCTLGIBSVVNSOPUTUYEHKCTGRSPQOMBAFMMRWQQAFDGLXAWCDVJENKVLDPTYSXKKREVTEHSOGLXYIWBPGFFRAG");
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
    msg.setTimeStamp(0.2337685828216497);
    msg.setSource(9711U);
    msg.setSourceEntity(52U);
    msg.setDestination(7967U);
    msg.setDestinationEntity(53U);
    msg.command = 124U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZJPFMRNMFTKXWNZVARVCKSCJBORWFULNCIKYUVRVUUZBBQEAAGJTFODWSFPSCBJIIXTHYQXDUEHGYIHIRLUBEWSPWWOHXUEZOYGDXAWXRAVLJJGXGFVOQYTMLSFQGPO");
    tmp_msg_0.description.assign("CPDNIDKEAOYUFXOARBFBBULLVTHTFHMCHNCHGMWULKLNVPMGRNCVPXSAKLVQTAHWELMFSRGMRUDXIWNSVAMJOCDYVDLJJSORNXGRCWQVDTW");
    tmp_msg_0.vnamespace.assign("XVOZYKZVLHTDNSLLHWBBIVQIKIWNPQTJDZPUDJIXFVYVABJNUOKCNJRFLIKTXCOUEGPCCQKUMXBPNJNGWDHTRYSKYFZMBBRRRQOJXKQEFDMXVXUOQSMYIOPJEXHATPDQBPZBFGGGULMDYKHNGYZMFLSLTWVUCKXSQHCWMCSBZEAWHWIOZQXDTDEPOTBTZLKVOARDFECUGSEIAUPFJYRHAMSUYAYWGVWAEPJINVCNHETGIMQWG");
    tmp_msg_0.start_man_id.assign("BSNSPHJQZOXLDUXYXNJHATSMKVWUCBPZGWXAMOCANRMSLNKLJNKFNOAHYWFYVWZRMUKUDESQVUKLEUZSJDPGTTJRTBIDRBZBWEQFAGPFQJUBCQZRMHHQHFHENWNNOIEIVGAPVZMOGHAFNDEJKYGMGRTPCLXX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QLYLTVQWYTSIDWWJQGLVVQQYBISJKGDOHGFMLMSWZDEPYZUXPUUDYXCOJHEXOGUYBNVMAHUHNWHVKNIBWUZAKFSRDJXMGDFFYCVZGXAYIFRKIUKEGNGNNDJIAETBXMOVLPBOZDOUJVFDYJWOQAKXLNWCSGFCOXCRWZTQRTPTANBTXCMLVFGMONRXERHSEZRCSILIEHBAHTRCCEYMBMWJRPQADMHAKPKKCZNLPJFQIZ");
    tmp_tmp_msg_0_0.dest_man.assign("QILNAZNYAIXBNBJKJEBXISBFRGGKMDNGWTZUVJFIYKQRRJIUYZBSGIEALHMCEUYVBTFANPXCXOCFBUSXAUAPPVZSQOPLDWKIRXSTYPHWWPWKMDUFUSTBHSOVGLENZLJWJYERQGGVDHLMOMANNSYGCFDPXXFM");
    tmp_tmp_msg_0_0.conditions.assign("THPTLTXKZIXQNBWORTURFICXRMUUQGVVMEHTRMYBTFROBUIPYNJTWLMI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::GpsFixRtk tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 52719U;
    tmp_tmp_msg_0_1.type = 43U;
    tmp_tmp_msg_0_1.tow = 900195326U;
    tmp_tmp_msg_0_1.base_lat = 0.27652132575573896;
    tmp_tmp_msg_0_1.base_lon = 0.3532459933657609;
    tmp_tmp_msg_0_1.base_height = 0.06686024928242729;
    tmp_tmp_msg_0_1.n = 0.601975333836708;
    tmp_tmp_msg_0_1.e = 0.24549787102586706;
    tmp_tmp_msg_0_1.d = 0.8130342004517447;
    tmp_tmp_msg_0_1.v_n = 0.411781076564678;
    tmp_tmp_msg_0_1.v_e = 0.4402360141815642;
    tmp_tmp_msg_0_1.v_d = 0.0910511359338868;
    tmp_tmp_msg_0_1.satellites = 176U;
    tmp_tmp_msg_0_1.iar_hyp = 30006U;
    tmp_tmp_msg_0_1.iar_ratio = 0.16855813673562048;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5586528848824153);
    msg.setSource(5543U);
    msg.setSourceEntity(229U);
    msg.setDestination(29738U);
    msg.setDestinationEntity(21U);
    msg.command = 130U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KETSFTMRAEVGXCFEXMLGPBKBZEHDUMLXJZEPCLOHDKGVIYSKRDNZZVVIYIQUDOVZBQVBXKLSAWOJNHNTHWLBNXSWXWMMUZDPLW");
    tmp_msg_0.description.assign("LOUDXDZPCSSXZZCQODUGKHTWVINNOGZEWKHOBYLKDZRMYDBHUPVMMKLJRQELGFZAROPIAMOHXFQJBMQVCOMWYWTLNRYOPPCRQTMEWPAXORJIHDEAGVBXSABZQWCZUYGGTNEXQFSJSAMRCGNBQASUYIFYBNPUBDVIJLJTFSMFTUCZDKLAFDFHSVYEGWYXWHENZUKIATJNHSLKPYDKJLN");
    tmp_msg_0.vnamespace.assign("ILYXHBUMLPEKPAUSSGYMUIVUYARWLBTPXDWDFFVHTYQYYJDSDONJYDHLHCLXXEEMMLBVSVFGF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PANLPXDRHUCSFTGNDRHSSAYLPUEUGFGIWTKOYAHXZVLEKUAWQHQOHHMCQXIAOWLBTWCMHWZNVAYOFAFXTNBWZGTYDQFJKYCRZCRFKMQHMPTPWBSGFRFZENZFAJJXSLUSDSOVQDCXEBZDODPSEAUVOZLLTPNVVYOJYFZWV");
    tmp_tmp_msg_0_0.value.assign("MGUYNZNCPOBEXIZPHBMHGLNLBSJPSEWZLTGJTIFCVFRJZEDKHFYOFUTPMQMSYMVVLWBNAJXSBJXVYWQEHKYHZYEIKHLIELPWXTEDADZKXKTWRHAVJXIISOWBSOURACLLHIPMAUFDZBWFFVNJCIDEYESSTQMPRMKOTQOSRXYPDCAXPFQORUKOGTYDVLUXGXUGRRUIGBNEJUBZLUQRJSQQDHCGTAWPNKNBCQVONKKJAVODWFTHZ");
    tmp_tmp_msg_0_0.type = 66U;
    tmp_tmp_msg_0_0.access = 134U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MYHEENHKGPLWBKPYAFPASFDCTQGVDRVWIEEVCCFLSTLEMMOBWZJUOMDJJQJTGUUOBQQYUIDXCHDMBZMYFEZWKXXGNXNWRZYPCMDHWEXWXPSUQJAHTVZWSLA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("CJKRAMJPNTOTGLRKHLDOULYRFCPKOBWSHOUZZKPFVVJZMABJDXXBHRSUMPQOWEGJBGQFIHFCIXGDSYRSNFBENIIPKKNVNILDCVVGUVXTIYQHFQITAKPMJMLMYZAFLFHAMAFQHZZWAGLWRUKODCWARXWA");
    IMC::Drop tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 1121U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.41171280104494956;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.839701280446896;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6017997967691383;
    tmp_tmp_tmp_msg_0_1_0.z_units = 89U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.3231615275814177;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 196U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UKKJPGTHVWTDBUAPILIGVULVZADTZYCKDQVPZUSYLBDRRBXROLANUMSJGLXWYHGDXCSVPWEYKNHOQXRIKAOWFACYNVT");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Voltage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.649484903824065;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::AlignmentState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.state = 168U;
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
    msg.setTimeStamp(0.8727963486391648);
    msg.setSource(57313U);
    msg.setSourceEntity(70U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(251U);
    msg.command = 247U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SBNTBLKAXGLXLAOCJYLYESEYHDWHXUMKRNVFRNMDWWBKDYCWXSDJNZVPMVHPEIDOGSGVJLENUZQOTQOMYPNHKVIZYZZEAHBTPSQXUACKFGOVFXBRJRKWOBOVCMUWPHXCAQTWPGKOEMHGJUBIFDPKINSIQZ");
    tmp_msg_0.description.assign("ERJNMFSXJTGGIZMNXWXVGHFOOVVCZDDA");
    tmp_msg_0.vnamespace.assign("WEJQEUSZDQACGKYXUUMHLFFBRVWVTKTFLGORCYWCBHLXZPSIKJYWEKOIKOCMYEILVOXRKTMDHLANNJTTCCNBBFGIREWR");
    tmp_msg_0.start_man_id.assign("POPHGTRFVWVOLRWKQFEAXDGZCJWXONQYFLMSNCHKIIHMOEVWQKZSSFTVPZXLEYHYYUIKUDCGUE");
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
    msg.setTimeStamp(0.7924104810903754);
    msg.setSource(4374U);
    msg.setSourceEntity(141U);
    msg.setDestination(33691U);
    msg.setDestinationEntity(247U);
    msg.state = 4U;
    msg.plan_id.assign("QTBLOELUTRLNKFSPNWSRLWYHHZVEKSPEDZNDYVEJAAEFBOPQQCFEOPAOBSTWWOSLTEKFBSJUCWOJVQNFTAMJYISFIHIADDRZETPGGUZINRHHXYJZICUNTQYTFXLIOQQPAMYGHQMNVADGVXFIYTTKYVXWGSEDKLSMBKVDZGLRRPNLMFRIDNHQGXAUXKMKCSBGUCHXBVDWPMCCAMBECCCAORWXZHKQVVRZXHBNMUOWOMJKUJPPJYLJZRFJIIGW");
    msg.comm_level = 0U;

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
    msg.setTimeStamp(0.45636916805720973);
    msg.setSource(10344U);
    msg.setSourceEntity(230U);
    msg.setDestination(26511U);
    msg.setDestinationEntity(99U);
    msg.state = 213U;
    msg.plan_id.assign("PSDMVNZMMDCUONKNTMJOSVRJSNIOTSJICLFIQCXTJBFTDWYABTKGYJOHJYQEGPQTTDNSGAUWSSGFPWUBDVYPRQOVJUENHFHIXHSDWOBKVQCFAEDHKGF");
    msg.comm_level = 171U;

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
    msg.setTimeStamp(0.6805395120277942);
    msg.setSource(57625U);
    msg.setSourceEntity(175U);
    msg.setDestination(41323U);
    msg.setDestinationEntity(178U);
    msg.state = 227U;
    msg.plan_id.assign("LECNWZJIAWQQIUVQZGJVNGTPRAYZIGBCOTWKUIRPTPZQTXIZSHSAOTJDYGFEZHVLTBHBFAGATEPEIQCBMJLSESDOLDMXILOVAHWYWVDJTK");
    msg.comm_level = 203U;

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
    msg.setTimeStamp(0.9017281412470621);
    msg.setSource(46789U);
    msg.setSourceEntity(103U);
    msg.setDestination(17254U);
    msg.setDestinationEntity(133U);
    msg.type = 227U;
    msg.op = 50U;
    msg.request_id = 1333U;
    msg.plan_id.assign("PEUZBQXRXNNMFKKUPTCRZWAWYGPAWOGBSVIDWRMEWOZQFCLPJYAOIWALJTBPOQFKDHHWNFJDMXVSCUJTKXRZKZXFPSYGHVVHMTOGHIDYIHLHUNAUCBIHC");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("UBIDJAGTHPLQAVQLGMJTZNUSPTICNDMHFFFMUIFYQOSAYVRVKMSLUBPWRAYKCSHGYUQOFXEJWRQOPHHDFBAOVXESGQGLHDRBRXVSCCGRTHNFJSINDTZEXOWSJFZACDMQEBIOVWPANHCOZGTBYUYNRBDUZ");
    tmp_msg_0.sys_dst.assign("CHCAHCAYSOTJRVAQLSLCDKJZSUKRJRPAYQVULXSPVKBOUMWUCHKPPSIFJHEQFZVECBMWZRDREXQWXIOGOGEGTEHQNL");
    tmp_msg_0.flags = 207U;
    const char tmp_tmp_msg_0_0[] = {-15, -97, -28, 41, -74, -85, 69, 52, 76, 90, 102, 85, -36, 11, 80, -78, -105, -42, -112, 42, 58, -41, -62, -21, -86, 5, 26, -18, 7, -30, 73, -8, -31, 74, 35, 56, 95, 77, -82, -1, -69, -117, -36, -19, 28, -21, 112, -43, -2, 22, -79, -39, -49, 122, -41, -101, 126, -75, -46, 22, 62, -98, 82, 89, 94, -121, 121, 84, -56, 106, 61, -75, 25, 86, 53, -86, -122, -79, -24, -107, 64, 118, -7, 20, -82, -121, 117, -40, -65, -112, -44, -56, -14, -17, -127, -41, 73, 80, 99, 83, 88, 103, 7, 72, 86, -79, -62, 95, -75, 54, 91, -127, -42, 47, 63, -51, -115, -34, -26, -28, -103, 69, 6, 85, 64, -100, 78, 30, -70, -50, 4, 101, 23, -24, -25, 20, -128, 18, 114, -126, -4, 89, -38, -43, 105, -45, -101, 8, 61, -84, 52, -109, -65, -28, -92, 74, -7, 88, 90, 110, -63, -76, 108, 10, 107, -12, -70, 95, 87, -16, -74, -42, -53, -117, 62, -30, 85, 27, 52, 106, 57, 119, -24, -127, 62, 44, -105, 93, -46, 52, 112, 61, 102};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UAAXFLTRWBGETLIKDOXXOLPNZCPBVYEBWDH");

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
    msg.setTimeStamp(0.7616015485429529);
    msg.setSource(55431U);
    msg.setSourceEntity(222U);
    msg.setDestination(38843U);
    msg.setDestinationEntity(106U);
    msg.type = 18U;
    msg.op = 14U;
    msg.request_id = 40391U;
    msg.plan_id.assign("BQIYJWYVBNNJERTLSNALJHPTMWIZRDUACVOIGZVGPROYRRYMNOLFDVBOVVYSJSRPFBXTSZABQDZLSAKSSJLAINGYEOFNIHJGLWSTIWRMMPKNLRPQQKXUXVSEZTDUVOKDMKEBDGFCPPYYWFFQNCECWMVTUKOEUFBXAKCMPSOQTWEDLMABITOITUCCLBXRZQZREHMFQKN");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.8297373765792142;
    tmp_msg_0.x = 0.029847967489707083;
    tmp_msg_0.y = 0.32530856126078855;
    tmp_msg_0.z = 0.36898428394375793;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZJIHRBGQVKVBCXYOCDSOMJ");

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
    msg.setTimeStamp(0.8779716004712107);
    msg.setSource(21897U);
    msg.setSourceEntity(17U);
    msg.setDestination(6895U);
    msg.setDestinationEntity(173U);
    msg.type = 123U;
    msg.op = 56U;
    msg.request_id = 59558U;
    msg.plan_id.assign("MJRTTXKQSKGRESRWUPWOHXQDLXZAQWHUNIIAOTAFNGEPTNTVFKKFZVQDIJRLVOGFUYWHCIEDZUZLJBYPCEAHAYFPOJTBVCBGAGFEQWXV");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("IGHRVKKKIURPZMXZUYNZLVXHFWBTGRNJKEKZOMDRFYLNMWDKTMCSGGQBEDLLWYSVSNKJLLCPSWRFAPKZMWHMKKGEMVOTAYUCAVAZHINQPHTLOFGIDTXRHBTDQUOODBHUYBAXJVRSLIIFXATGVFBPASNQGHRSDAIWPTNXQTE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EGETMFQPSLBETQHEKOTSNEBDMWYPRFMHGIIACKOCONYMKEAZGUSCIKNLQPPLOMZLTOLQXYZQQFLURBCSDSARZDENVNZWZQPXWWSZWFGUTIJIJIWUUXKJGNBPUEGXGDYNSYMNBEWRXXAJXDYMZJMFCXHNRBAIDIJFRUWKYKLBRPSIYTPQVBTLIKHUJBSFACHWMZCHFD");

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
    msg.setTimeStamp(0.7549175527047219);
    msg.setSource(34920U);
    msg.setSourceEntity(152U);
    msg.setDestination(5014U);
    msg.setDestinationEntity(33U);
    msg.plan_count = 6798U;
    msg.plan_size = 1626966304U;
    msg.change_time = 0.27577056232322184;
    msg.change_sid = 63423U;
    msg.change_sname.assign("GHQHZKJBNSUHVSIXMBKKDZJQRDWYYZRQXOTPFTHIYRCRFPURIZQLWIANUEYLCBUOXFTINSHRGTYTXMLSNZEKPSKMDJNAJPEPQWXRIOHBLHWVBVJOUGIZRYMLXGEEYIYMKNEFXLDDFZADFHKRLAFWYUTPACSQIEJWXBUPSBVWTCLVMALGODNMFZGNODIEBQVNSJTVEQASYWDBUPWXSH");
    const char tmp_msg_0[] = {-26, -98, 67, 110, -30, -30, -121, -104, -47, 118, 54, 92, -122, -62, -117, -12, -128, 21, 124, 52, -80, -96, -82, -118, -124, -35, 29, 46, -30, -17, 78, -35, -54, 56, -119, -45, -62, 11, -25, 67, -120, -68, -33, 75, 87, -80, -91, -98, -73, -1, 17, 95, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NTWAZBGGMAHVDRQAPVXPSZVGNQYGRTPKFXQHYMFGMWBHLKQ");
    tmp_msg_1.plan_size = 20787U;
    tmp_msg_1.change_time = 0.16446745461154721;
    tmp_msg_1.change_sid = 13717U;
    tmp_msg_1.change_sname.assign("XEAVLIFOAKSWBFQWZEVCWJLPDMYGIRADVZWBWMZXHFIYIKEHRBFTKIBCFJTNNVBQBYSRBPETMPCKODLWPDMADTUHQMTTETVCG");
    const char tmp_tmp_msg_1_0[] = {90, -10, 54, 106, 31, 81, -101, 68, 104, 65, 50, -53, -43, 40, -90, -19, -49, 76, -107, 105, 44, -62, -47, -86, -74, -121, -99, -61, 116, 27, 18, -85, -20, 96, 93, 34, -34, 3, 8, -112, -55, 4, 44, -84};
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
    msg.setTimeStamp(0.0623989935987469);
    msg.setSource(18008U);
    msg.setSourceEntity(247U);
    msg.setDestination(29387U);
    msg.setDestinationEntity(234U);
    msg.plan_count = 27703U;
    msg.plan_size = 1859348019U;
    msg.change_time = 0.11232743350328545;
    msg.change_sid = 25200U;
    msg.change_sname.assign("DOJGNUJELPTXCRLUFMSUCKMFSLOKNMDFTJATKVRWIOQXVBPVHCCJHFJMGRQGHCUAVDFWIKDLDQGLAOZNTZVDPYTEIQBFRUBZHVLCBESSESAYSNCNKLQVHPSNZHRSMTKNAPXGZVHSNBTRVYQRBMYMPJIIELDDOYTKMIDVTPBWIUWPE");
    const char tmp_msg_0[] = {23, -33, -16, 42, 84, 125, 54, 117, 76, 49, 33, 57, 120, -106, -90, 126, -117, -65, 50, -105, 111, -50, 83, 76, 111, 121, 30, 58, 30, -44, -23, 44, 102, 108, -59, 121, 101, 90, 29, -70, -83, -76, 67, -127, 20, 92, 48, 71, -119, -112, 59, 109, -41, -113, -41, -80, -73, 7, 121, 101, 120, 49, 25, 7, -121, -8, -31, 46, -100, -76, 14, 68, -22, -38, 63, -108, -127, 120, -99, -96, -64, 97, -61, -101, -55, 104, -75, 17, -12, 30, 114, 57, 67, -7, 34, -120, -29, 69, 104, -50, -15, -94, -59, -30, 36, 95, -5, -28, -54, 100, 12, -70, -79, 40, 68, -77, 31, 62, -89, -65, -62, 104, 5, -128, 43, 12, -102, -102, 46, 31, 67, 15, -47, 11, -125, 28, -107, 7, -33, -66, -7, 17, 3, 84, 74, 92, -31, 15, -87, -15, 119, 74, -21, -23, -51, -62, -72, -64, -122, -16, -41, 51, 86, 7, -67, 64, -49, 69, -64, 5, -14, 120, -85, 83, -1, 15, 15, 65, 10, 34, 84, 17, -69, 74, -50, 104, -118, -94, 2, 100, 105, -38, -90, -35, -98, -3, -104, -109, -116, -70, 39, 112, -39, -72, -55, 83, 62, 75, -45, 43, -111, 69, -56, -62, 68, -104};
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
    msg.setTimeStamp(0.5805237804079106);
    msg.setSource(39240U);
    msg.setSourceEntity(122U);
    msg.setDestination(19626U);
    msg.setDestinationEntity(156U);
    msg.plan_count = 32574U;
    msg.plan_size = 2716451468U;
    msg.change_time = 0.44447412726208246;
    msg.change_sid = 33164U;
    msg.change_sname.assign("KQOSVPVWIANXGUJLWSWZHTLHLZTBDBSVFZHCLXXMVOCEFLDYICHCLGBTKTZEYPJZAUWAJPPVUYFFBENHQN");
    const char tmp_msg_0[] = {1, -74, -84, -61, -60, -17, -38, 10, 6, 37, 116};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NUEOZBQZHQVGRFWCRUTKAYJEAJMFDSDCYKIQSPNJVQTSKAJQPZNEZLVGEEGMBKKXWHYEXKMQRFMZUJOETASYXDSDWQNGYPVOOHNLWOLMUGMXZRFPLUCPTGTFDZOBHIJLTABIFCHFCDBXUWLJRABSRJZANVSOXCGIPZCLTYMSFNWPWRHKSELOPBWDQCIVXABGIGPXBDTHLWRQYQEPYMKAUNUJOIIJIRIVZDMVYGFVMHTYFOTSCLAHNXX");
    tmp_msg_1.plan_size = 18441U;
    tmp_msg_1.change_time = 0.5709614864327938;
    tmp_msg_1.change_sid = 63766U;
    tmp_msg_1.change_sname.assign("KJXVAYULEOU");
    const char tmp_tmp_msg_1_0[] = {-121, -80, -103, -29, -68, -98, -101, -120, 67, -39, -40, -38, -40, -104, -128, 109, 117, -89, -52, -95, -5, 97, -17, -98, 105, -106, -90, 75, 3, 30, -86, 98, 87, -28, 61, -14, -50, 5, 36, -93, 1, -61, -92, 21, -44, -77, 34, -111, -8, 36, -104, -83, -18, -10, 124, -77, 119, 7, 68, 51, -114, 0, 41, 35, -109, 3, -95, -63, 75, -40, -45, -63, 87, 65, 8, -90, 8, -86, -63, 22, 62, 71, -31, 20, -65, -75, 5, -16, 60, -37, 93, 86, 18, -51, 55, -102, -65, -79, -28, 95, 22, -110};
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
    msg.setTimeStamp(0.5753706679354275);
    msg.setSource(56879U);
    msg.setSourceEntity(173U);
    msg.setDestination(39272U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("ZXFJGUAIRFFQLDHXQCEPEQIJMVDSCSRUXBPIJGHGZKWWPFKIVVTAXCWRZDNFNTVHHHUKOEKDAXNTKQBTOFMMNOBRQNTZZ");
    msg.plan_size = 56186U;
    msg.change_time = 0.7377762511559464;
    msg.change_sid = 32259U;
    msg.change_sname.assign("UJKMGRNBGXTYLMJODLGWLDKOUVQWHNHFEYUIKYDPN");
    const char tmp_msg_0[] = {101, 89, 34, 82, 83, 58, -67, 124, -39, 51, 94, -54, -37, -68, -126, -21, -86, -24, 10, -16, -113, 73, -95, 93, -14, 8, 25, 88, -23, 65, -53, -70, -12, 100, -66, 41, -121, -113, 14, 54, -93, -43, 110, -109, -30, 115, -10, -24, -45, 37, 85, 39, 47, -99, 80, -59, -92, 26, 65, 87, -79, -62, -117, -94, 84, -74, -43, 62, -27, 68, 89, 12, -72, 14, 106, 107, 10, -107, -74, -121, -113, 76, -119, 94, -121, -76, -101, 25, -101, 9, 7, -51, -16, 88, -91, 45, 79, -114, -127, 66, 63, 47, -120, -107, -13, 47, 13, -93, -73, -30, 9, -84, 75, -74, 44, -60, 47, 52, 83, -11, -63, -117, 70, -19, 8, -32, -50, 25, -46, -101, -44, -121, -36, -42, -15, -93, 71, 16, -75, 69, 26, -128, 105, 96, 80, 105, 98, -92, 27, 40, -77, 48, 103, 115, 37, 73, -35, 66, 62, -5, 66, -20};
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
    msg.setTimeStamp(0.06802542062841266);
    msg.setSource(59414U);
    msg.setSourceEntity(104U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("IWYXSPCXZDTJFWELTQXXHJNNOKSPSIIEXEIFPAXMOHQRRYZOQVYRNARLJCBMGSFWIGUCTALGYXVRAHQHWAVXMZJWAPDIKNKSSGIYFBSZWRPDRLCVRRZSQAMOWDALYFVTPWGDTCOPUGVTPUONUHPCXEUSMIOVFCMSLKYVZLDQVCUGADJEBKKBLGBHEZZFTQMUFNJK");
    msg.plan_size = 42067U;
    msg.change_time = 0.05599432747163813;
    msg.change_sid = 25784U;
    msg.change_sname.assign("BONGIIJDMNASPXIKTXFNZPKUJNAVROETYCVYRMHNTIJLPSCZFLHUUWHSOKASRABEYXGOMUGUYWZGKEMWADONXWPLOQQWUZSIJZSYCMFAIXVETUGAFEJRQYHHLYHHDNKBFLXUWTVXTAELFPBPQBIXRKDGCHIIQAVXQAVUTNSKZNXVGSKRDCMWWBPQFRKNZPJKGBHUEDMQOZFSWTDFMTVIZOREZVMWB");
    const char tmp_msg_0[] = {-118, 100, -5, -119, -107, 68, 52, -65, -31, -73};
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
    msg.setTimeStamp(0.08323002437118054);
    msg.setSource(62958U);
    msg.setSourceEntity(56U);
    msg.setDestination(36293U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("CXISGFCAMFVPHBVNVTEUKKYWNNLWHUEQQHXABURTXU");
    msg.plan_size = 7709U;
    msg.change_time = 0.7531641994468057;
    msg.change_sid = 35262U;
    msg.change_sname.assign("KWOTQUKAPIUDLXSFWOUZSNUSWXLMEGOJZAKWNVYJIGPHHUBFMTPBKTXZDOOLTWPVHFENHYLQWJULMDZOKRCAQRKHXLMDGEGBHIROYIRKCARKTWAFFXGBXPTTWQJFEZGVSGVJPYAMOSQUGDUW");
    const char tmp_msg_0[] = {-56, -28, -31, -60, 34, 96, -70, -42, -83, -102, -29, -23, 44, -34, 82, -117, 76, 6, -66, -93, -45, 44, -83, 51, 99, -83, 81, -32, -52, 93, 48, -110, 126, -99, 11, 121, 83, 47, 35, -62, 22, 89, -64, 112, -4, -101, 99, 110, 103, -56, 126, 27, -88, -55, -7, 79, 13, -95, 80, 41, 61, 12, 109, -11, -111, 95, 87};
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
    msg.setTimeStamp(0.515838229144651);
    msg.setSource(24027U);
    msg.setSourceEntity(237U);
    msg.setDestination(1079U);
    msg.setDestinationEntity(33U);
    msg.type = 173U;
    msg.op = 173U;
    msg.request_id = 44842U;
    msg.plan_id.assign("MCQAILJXXKCVGUIDDXM");
    msg.flags = 28376U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 17337U;
    tmp_msg_0.flags = 212U;
    tmp_msg_0.lat = 0.026835415925226425;
    tmp_msg_0.lon = 0.6181210791609386;
    tmp_msg_0.start_z = 0.649384559271546;
    tmp_msg_0.start_z_units = 164U;
    tmp_msg_0.end_z = 0.5243792714390785;
    tmp_msg_0.end_z_units = 112U;
    tmp_msg_0.radius = 0.593565189172169;
    tmp_msg_0.speed = 0.23153792462118117;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.custom.assign("JPCHUMKJHJRARSUICTJVDRINSSFXQBNNTYRXRCGTRLIHZQSINHALQHOKCOGULCXPQWACYLPVVOGDWQETXFVZLEBLLPVTA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MYICSRKECAUREGTRWRBKGCBJAXZUCVWEVPXEZDRKPAWOHCCQNHMLVHTGKBVDFRUPKFDMZOAIETBAKJVF");

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
    msg.setTimeStamp(0.8357050938106929);
    msg.setSource(57885U);
    msg.setSourceEntity(31U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(100U);
    msg.type = 187U;
    msg.op = 168U;
    msg.request_id = 16221U;
    msg.plan_id.assign("PBLAKFMGYOQGBTLNPCFFBFQGDBYCVITMVSFCVLDXJZRYSKLZFEWNPCGMUSFTSLXENHHOQMUBSYVOUZCCDGHTWQKKLEJKJUGRPXNZRIMASOGBHTJENMHAXQNKPLOCAABIIRDPLROXNNODCRHSMETTPDXMYQAYKXNJUZHEFDEZVUPCXJFTHIMCVVUWJTAIABWKBVDRQQRXGIJBJSVZOZP");
    msg.flags = 63527U;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.32330998957321666;
    tmp_msg_0.y = 0.9130014560768261;
    tmp_msg_0.z = 0.560415416360999;
    tmp_msg_0.k = 0.3663758497875478;
    tmp_msg_0.m = 0.42630070378088847;
    tmp_msg_0.n = 0.5062866786366136;
    tmp_msg_0.flags = 147U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VONXVKOBJNVDCRQYGUYSQFPUHSLRKLPGQBBCLDRBTSMMLTQUXCRWLYNRDFNZKQZFMJZWPGRAWQRISXONJOBULHYGZRRTKFITSIEHRDVFUJISMICXFGYGTXIDYDWLFVQBZMSWSDPYXFUKKELGCCZOWTZEAEPGUIPGHUVHVQWQAMYIBXCGCEONUHZUEYNOBSLCJWVPAAYJKEJHXVZALPDOOXWWCEIMAMKJAEJHHMNMJSBDKXTFPZENBTHFVTKNIT");

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
    msg.setTimeStamp(0.22751140215111398);
    msg.setSource(50447U);
    msg.setSourceEntity(43U);
    msg.setDestination(24524U);
    msg.setDestinationEntity(71U);
    msg.type = 56U;
    msg.op = 185U;
    msg.request_id = 24430U;
    msg.plan_id.assign("VRCXEVQIJOSPQ");
    msg.flags = 20188U;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.08279581688435733;
    tmp_msg_0.phi = 0.9039616608805836;
    tmp_msg_0.theta = 0.19603940708128542;
    tmp_msg_0.psi = 0.7380480316607432;
    tmp_msg_0.psi_magnetic = 0.3173567744218062;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YFMTNSCLKOTCILRUICMZDDULRZEGXAZMTNVUVACSAKQPRLOSIKHJUPPIWSFXABQEBYCPBUJYEXOIBOWONJXFLKNZMBJEZWGIDUHSRGJUXITKGQRZXCLKFFKFSIGWTYJIFNJDPNGCQJBXPZZELBUTDKVRKXNHYHWC");

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
    msg.setTimeStamp(0.3350664060010944);
    msg.setSource(51744U);
    msg.setSourceEntity(240U);
    msg.setDestination(20267U);
    msg.setDestinationEntity(44U);
    msg.state = 222U;
    msg.plan_id.assign("UQVASQVBPXDIEESTWDPZBHZRWTYODDRCYQCPUJXALFGJSPNQAVMYYYKMWFLKLUMSMACLNRINCPFFYHJRWDJHOXLKPDNFWIGTDHZHDYFVSSDHUGQIATEVJCEUFGKJVXZXBSZGLQPGFOBSLDGSNMTTIOTREIPEGCXOJMPVMABWBUMGCKBCXUWHBUJXONOTVFKHARANECEMJZIZUGRNPIKOMKREW");
    msg.plan_eta = 1462871729;
    msg.plan_progress = 0.20147898793696306;
    msg.man_id.assign("AOLMYHSKQDJCATXPZWDEADBEPPBRGYUWBEZVLAQURMOYRWLFCFAHEXTGFTAPXXWLSISKQRDVRGFCNVJCORMLETQAGJDGMFMHAUZBOXOHMNCTSKAPHH");
    msg.man_type = 18683U;
    msg.man_eta = -1465679975;
    msg.last_outcome = 38U;

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
    msg.setTimeStamp(0.15200738675672099);
    msg.setSource(56954U);
    msg.setSourceEntity(231U);
    msg.setDestination(14377U);
    msg.setDestinationEntity(210U);
    msg.state = 10U;
    msg.plan_id.assign("SUJGOWDBPAEMNNSKHWWKBBXDCRVKKXBOVMENIVVCNFGLLXTUUPBINJWPDSWJCLKWIXYCHDUXSXPAHPQCPOXQRHTTORRVUBTPTOQIZXYDLRVFTFHUVMKZIFCWCGQEZNHPHMWYKE");
    msg.plan_eta = 41898677;
    msg.plan_progress = 0.6381127302109312;
    msg.man_id.assign("SZMNYBNNRWAKNVCZWZOYGUARDWBYERMGXLDIFYMEWHLWHBAPVTZOOGGKPLYRFQUWTMDKOZFDTZXBCWKDRNSBJQTDABDJOFHVTMECTRRLNKYVQUNJIKMVHMNRLFSTFPLJIPTIXPPZEOTPUALGCNUCVHJDQSQLBAXBSJGXSUJSRUPWQSIVSGDXEWKLPAYOEFMTQIVRXXAVGAZCJBGCZIFJKEH");
    msg.man_type = 48350U;
    msg.man_eta = -1986508253;
    msg.last_outcome = 146U;

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
    msg.setTimeStamp(0.5174696928321286);
    msg.setSource(61735U);
    msg.setSourceEntity(250U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(66U);
    msg.state = 84U;
    msg.plan_id.assign("XRIZHQBJHSQRVOZXPGURXNFUGCAJPYFHBLBUQFNTKHHPZVEIDYODCEKGQTKNIJBBDJMZMLEYDQMQJRRRK");
    msg.plan_eta = 677553037;
    msg.plan_progress = 0.6930569810476017;
    msg.man_id.assign("YFZLJWGVYDOKTISQVKNVAU");
    msg.man_type = 39483U;
    msg.man_eta = -1466290329;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.23712616900468586);
    msg.setSource(40088U);
    msg.setSourceEntity(116U);
    msg.setDestination(48261U);
    msg.setDestinationEntity(25U);
    msg.name.assign("OUCDBTWUUQRKTKXBXONZAVSMAJHVNSPXOIBGAENGUYEOHOFQYYPZSEZGYAHQONNJLHPIYVRTOZ");
    msg.value.assign("LUAIHDWTWKRQBOOBZRJFTVYSYADOZDTMNFSGWGVSRFPOLBCOGJYPQXFKQGKYBZNCPVSUUVPGNXVNWXBWTRYTHKRHOCUDQMEMILJBPCSSJGMFFZHVGWYLQOXEVEMABHRIIGILQJMSYTK");
    msg.type = 235U;
    msg.access = 23U;

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
    msg.setTimeStamp(0.0927442023180508);
    msg.setSource(7902U);
    msg.setSourceEntity(66U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(21U);
    msg.name.assign("AZCPQLSVAEENVEVGRYIGPBANMQSURUJUOKDSZKEVTCEXEPRBVBSHDASYQARUNZKDFUZPKMLZJLYXSIILYLSOOUXXBXJKOCAQRHTZJBIXJUDFPFWNPCMHBPHCOSLBFIONUBGLJOTQTPVDEYIPTKUIOYDRQWWNKHMCHCKSTJWQRGFRUXGTFVAZZJYVCDTXJLBMZCRYWGDGFEHYFMINGRDZPVIQFKHFAYCQQ");
    msg.value.assign("OKOVZSWMOYQCBLSWDZVZOWWUUFIVMJLBBKRTYFTNXJLDGUMTBCTKVVLHVOYPUBFFXCCQHISDZIPAYTHEZHIPDRAXMFTJHYLNQNVEUEXBXUFLGKIR");
    msg.type = 96U;
    msg.access = 92U;

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
    msg.setTimeStamp(0.22953534139942178);
    msg.setSource(2695U);
    msg.setSourceEntity(251U);
    msg.setDestination(14325U);
    msg.setDestinationEntity(49U);
    msg.name.assign("YPSFLGUOLKHPATDXSLKCDJHNDAHYEURGDNYMVZOBSKXPITLULZJMSWDHSHGKESUQQOJZD");
    msg.value.assign("PVIKHVYGAYJIPZSMJLPJLULTQVCHADQWUXWXZFBFNEUGNVRSDFMEYATASZRYOWYTCSPVXITKBNQQBAQKPCDZIQSKWTXMKDWZJLVJLXYKCGONLOALEOTEBHUEZDJRIEMFZDT");
    msg.type = 94U;
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
    msg.setTimeStamp(0.7624408260434713);
    msg.setSource(15415U);
    msg.setSourceEntity(174U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(193U);
    msg.cmd = 153U;
    msg.op = 95U;
    msg.plan_id.assign("THGYWOYVMBURWLPLSMPWVYFYLMZKCVLKRIYKJGRNEECAKSAEBDOCTFJDWEVBBNNMBRZEZKUCGUZAQJAIWOOUSSJYINULHHPTIGGISENAZSRSZXPACVVUHPCUKOZHUXFMQAYRKZLRMQ");
    msg.params.assign("LLRPAAHJURIVBOTFKNKVKZJJZOSBOGJPGDNCYCTDYSHSOUYXKIVDCUGEGUXVRLKWWPYHNJHKOIQVCYUXDOIMEYWPENSMYJSUREHMYNLCXMNLKSDULIFJTJHHTBJOBEZCVUQXSMZJAGMQFWLPWHZVEDTQXPWIAEFQNTCPHQZQWLEKDRV");

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
    msg.setTimeStamp(0.9548104386859568);
    msg.setSource(14922U);
    msg.setSourceEntity(167U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(240U);
    msg.cmd = 86U;
    msg.op = 43U;
    msg.plan_id.assign("RSKLNHXVUPHAIMGJUTNLWBHWBNTWTCVXSCNDPEDHXJSQCZXGQWJWGVOOSBDLCLZJBOITDOKGBTFXOJEICZZRRRUNWSRMUQISGKFILZFDKHHYKMHPJAFFMESMQESTHTAPUYYBCKFEPQUGAUUSLHVKLERPXPEYOPLFXWEVBDEYASZUIDOVUJDRRAYLNYTZVXAMTGGMIJQIWVYZWZLFNOCZVQPOXACQMXIKB");
    msg.params.assign("ZSNVNLAKCLHDGCUQCCDHPSPQWY");

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
    msg.setTimeStamp(0.9931692553424151);
    msg.setSource(18750U);
    msg.setSourceEntity(160U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(78U);
    msg.cmd = 22U;
    msg.op = 14U;
    msg.plan_id.assign("ZAMGMULEKGXQDREJWSMNTYQAYOHDFLWHUUZVPIBXKNOXUMASQIVOSQVRMGRAPTUQMNOICORCGTOPPKHYTMFQHAMLDHNIIUYRATWCFSWYVNSRUONTBLFOEEIMSEDZZVLGDDXHAHSG");
    msg.params.assign("ZAXKKHDRNVKLXJQUOKHYAIQWQIEQLOJDRJUUZHTXZEFROFUWOYYAR");

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
    msg.setTimeStamp(0.18822430283502967);
    msg.setSource(50208U);
    msg.setSourceEntity(57U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("PMFKERKVNLGUOMYZMJXWGVTGIPCPBUCHHJEAPFUHJCDKKPOWOYPXIANYKYTINRHMZDWHOANILHHXNWXBBCTARRBXWDCFOKJDBMNIRPQOGKFWGKURLWSJBCEAUHQAQCMFPGIQETZESRFUPFISXDVLJOLZMWJDBDWBETTSBLDJTSMZQAVXZAJRUMZACYEGTNCSQ");
    msg.op = 253U;
    msg.lat = 0.4864669910724305;
    msg.lon = 0.23275855192471995;
    msg.height = 0.12202491029727314;
    msg.x = 0.0061002151172104835;
    msg.y = 0.033573120681675284;
    msg.z = 0.4691217866281464;
    msg.phi = 0.5422241092948823;
    msg.theta = 0.08139405528890509;
    msg.psi = 0.2970980923432255;
    msg.vx = 0.5434333034619574;
    msg.vy = 0.06099951878909671;
    msg.vz = 0.47402621901795305;
    msg.p = 0.7230558542672072;
    msg.q = 0.5766309380214399;
    msg.r = 0.7122035696240685;
    msg.svx = 0.9022605179103397;
    msg.svy = 0.29320969589674106;
    msg.svz = 0.4999684389953184;

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
    msg.setTimeStamp(0.5190038449593514);
    msg.setSource(40995U);
    msg.setSourceEntity(200U);
    msg.setDestination(2181U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("LCGBIYNLFFKXYEUIODNFXVYNHROAEPRZYSWGIDZAAKCZCZVYIJPFASWMAQHKMGJTNAKRBHQDMWBUPXVSHSHT");
    msg.op = 109U;
    msg.lat = 0.9389982623993823;
    msg.lon = 0.7732198126253438;
    msg.height = 0.48486915661758656;
    msg.x = 0.46256444258810603;
    msg.y = 0.39595016613830436;
    msg.z = 0.44417567907895705;
    msg.phi = 0.891709059169916;
    msg.theta = 0.8377138271419933;
    msg.psi = 0.4665798194320814;
    msg.vx = 0.28422815925567113;
    msg.vy = 0.7999318403589708;
    msg.vz = 0.4587795290523531;
    msg.p = 0.23455829909235626;
    msg.q = 0.6193750213375561;
    msg.r = 0.17546465912837572;
    msg.svx = 0.6553785387464258;
    msg.svy = 0.07824143281394158;
    msg.svz = 0.9260094976541582;

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
    msg.setTimeStamp(0.6779354860778268);
    msg.setSource(33193U);
    msg.setSourceEntity(228U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("UFVEQJQXHOVONUDZKATDVUXZXGRMOHVJQAAVVPCTBKPEHTTJLGJTYWDCLECBFXASIRSIFWUWZXXDMJLXATNIRBUSGKQXVIHNSBGLSFORSYLQHHBVPMZETEFDKAQITLJGMNIHBGPQWEBBMJNCRCWRUYJKXMEYEEDQVYCLPYKGAVDBZXFONUSFFIROCFILOWZTOLYLAK");
    msg.op = 34U;
    msg.lat = 0.7824348193410453;
    msg.lon = 0.8965780568006103;
    msg.height = 0.2085081845837512;
    msg.x = 0.8610715527045296;
    msg.y = 0.9096288141372133;
    msg.z = 0.04686671154803701;
    msg.phi = 0.782783273880004;
    msg.theta = 0.7640422855200589;
    msg.psi = 0.14528768375116607;
    msg.vx = 0.8541868966177232;
    msg.vy = 0.6283923639576395;
    msg.vz = 0.16741311813974424;
    msg.p = 0.06084967040948652;
    msg.q = 0.4643474630698404;
    msg.r = 0.7274626267572013;
    msg.svx = 0.9654389396475839;
    msg.svy = 0.4263557681495813;
    msg.svz = 0.30335888834748714;

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
    msg.setTimeStamp(0.5465802627778513);
    msg.setSource(56475U);
    msg.setSourceEntity(199U);
    msg.setDestination(36890U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("VHSWWHXCVIVJZVCZIUUNPEMQPZLEZFGTFMATSUIXOTKDSPJXAJEEONWQTXSUIOLHQGRAMTRPCZOYJETMYNTAVNFKIUZSJX");
    msg.type = 195U;
    msg.properties = 56U;
    msg.durations.assign("RBKBWYLMUIHMDAPTVQURFJDIGZKPATPRNMEVGDWADNNLZOSGCXYKAIJJKUURKLMXYJMDOFYSZDYPENHGTIVVTGSTFINEAPIBQTUGWRPDCFNE");
    msg.distances.assign("NENVYWKSNEPVVOYKIHBNIEGDZLWPLAQCJIQNXBAVDAHCMWYJBPJAMVIGRDAFVAKTRXOLJIRFCPGMFXQXSLOOZCISKAIXPWIQQRERUKNQHADMKVYPRBHDCEDAFTFWOGDDCWAUESUTQGTMZOQGTOZGEQIPJMIGMHSWPXZYWDXZUBUCLSPTGRTEKYDBVHKPLNBBLEUNSMRNYZKLFCBUXSJQRZC");
    msg.actions.assign("HEWSWBZQSFFOMFHGMWPEKZCHVTOQKRSTYWVLDKHTMUHGHXPSUHCSLFBHCLIXVRABWATIWTKSJNLPAGD");
    msg.fuel.assign("LMNBZHQCUAHGGSEZSYOQEIRTAZFQDXHRRLJNVFYEUNSWQWMPNFDTZOLIXSSQWVBIXKTSIWKRPOAKVGZSTVWXBGAIGEHHWYNXWGUJOTCMOMEVPMACMIZHBFHFIUZGDYXBDBARDPNZRYRQMLEYYNBCHYKINGCTGCRCLJTPJXAMCZDLYYKJOLTNPOBVUGSNERBR");

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
    msg.setTimeStamp(0.33923673585934155);
    msg.setSource(13897U);
    msg.setSourceEntity(27U);
    msg.setDestination(12856U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("TBTCAXNIBEZPJKHGJOJFYCFALIPQHCGBXNKPYHJHR");
    msg.type = 209U;
    msg.properties = 90U;
    msg.durations.assign("JVZEQDQYSSNWOILJLMIMHNWUJVOMDFNGIJQIPHEENLFWHMSFZWUNPSJDGUSRXNIQTGYHCICPAGDTAZUBVWLTILZKKPBVXYFLHJYPFFSZCVHBB");
    msg.distances.assign("HKRRCNEIVBEGUWSUNUDOXRDVTCWHQLYAJTQPSVCHLZCMXOHZGPSCWRYHPSFEOREEKEBVTFZXQINPZMUHYXGAVWSQAMOMBGJTFPXAPRFVOYBQNRMANEUOALTMJDHQSSTNMNTLGIGOYCOHKKARPJXXA");
    msg.actions.assign("BFYKOWQWFQLIPMVQGLDBYJTNUOZPHFEVBBEAVIONZOPRGMGDHWEALXYFCVKZUCYPBLRKWHUTYWOVAZTXZHEXBSWCRVNZHONRTUKFGDIJJW");
    msg.fuel.assign("KLOUJCJSNRKXXZKKZMBREXNULTNXUJNGMKZRWRNGBXFANPSIZEJWSIWLHMOOVMTENRUYIAVDOGGZAVOBMARJJXVDYFXYJLUBSGHRDSPJZFEGQTKDDCPH");

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
    msg.setTimeStamp(0.724573043511388);
    msg.setSource(12386U);
    msg.setSourceEntity(233U);
    msg.setDestination(20472U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("OKXLUVYIWAOORJAZTQPKWIQNVJINCECMBTFSOJMTCUKFSPGHKJBMCHXTUHGEPQNWRPNUJSZYXQLBCYACEKBFVSDXZBCPLDAUX");
    msg.type = 177U;
    msg.properties = 33U;
    msg.durations.assign("RBMWFLQKIYFNOVCZJOCFQEEKKJOFXOSAXUVTBHSGTCBUGCLOUWJQLVFPMPFRNXITSSOGCROSNAIJVIJPADRSEMNBZQIYXCBLWBLAPDPWRJTGRVGQYZNZVYBDKRWKLGELHZENYXZLTNOYNTDAEPNHHINXCUGJVPWYXVSFMVUOMLUIZBWVRCDFJKPKFWAUSTDHJTACRKYMITEHDHGMEGTXEK");
    msg.distances.assign("TNTKGBFMQWDHCWRFQXWEZUGFVVQTPPAQDROMBVWMXPZUBCPRNPPHDZUONQIIOZKALPKYZHWTSMSWHASIKUXSBTOJJLOYVMDTUHSTBAMALRPHKFABILAXELYIYWUBJDOZKOSVDCFJBCTYE");
    msg.actions.assign("AHVNTSXCQFBILPZZWRTXEUHGAKWPOIRPLRJNFTTCOYWEMKGCRPGJJIQDHMXBMWNEUYDYOXGYGGSVAMXOTZSRBDLZZLOKRYXICZZILEFSZQLGUAZALAMHYYAIMEIJADMQJDQOVCMBTWMEFNXVOWOGNLPDDSZDVUHERTJJBHNYUFQKQWGQPVABEAHKKUHFCCHLPUYNSFSUNXMEVCKTPSTRVUIBUXXWKYOJJWLHNBEPCBJFIVFSSQNIRGKWDQOPF");
    msg.fuel.assign("MYCWFDZPRYPRQNUKSLIEQYNJDEMDKJGZAYTTTBZPVRZANDPOQGFNXJANOEIVAXRAPJPSSOEHYFGCILLNKLFAQUKCLMIVJEOQTYJMBBTZDVJIDVMSEQUUBHWHSGBLNWSNZJCVHXMCXFBGROHVRDEICAUFURRNHCOSLWPAEZAVATOJKGCPJKFSIQLVHQRLSDEXZHUKMYXKTMBOCGWIMBZYWUHXEKKLDQTOWTWBYGFPBXQGXVHSY");

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
    msg.setTimeStamp(0.30313323456302155);
    msg.setSource(14862U);
    msg.setSourceEntity(146U);
    msg.setDestination(64198U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.3870966789592982;
    msg.lon = 0.21749269804951676;
    msg.depth = 0.09135703965624298;
    msg.roll = 0.31851735674492043;
    msg.pitch = 0.03456631162416568;
    msg.yaw = 0.699398051693373;
    msg.rcp_time = 0.74236067806529;
    msg.sid.assign("CVHUJNAEZERBBXFUXKKJFHUMVRVFQEVJWSLVKBANJSVXPUOYRYQTZZNPWRHFIXEPTMXINAPSROMUWNFTNLRJQCNEPCAIIKDQZUOUEWYYOSFBSITXOZGTIDMGAZVCYCGPNPIRTLQXMRLQMAHOSVCQGEZDKBHKCH");
    msg.s_type = 181U;

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
    msg.setTimeStamp(0.8378544941042835);
    msg.setSource(4109U);
    msg.setSourceEntity(146U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8446579332356875;
    msg.lon = 0.4379405073607945;
    msg.depth = 0.6975423481584554;
    msg.roll = 0.5117665123646465;
    msg.pitch = 0.3220966893210594;
    msg.yaw = 0.8231842749725992;
    msg.rcp_time = 0.9893392651380996;
    msg.sid.assign("MNIUVMXAXIBZOWDZUSHGAITBULCLPPGSDLRNGFEAOKUBCXGSNHVYQYHNHXKFZFJYDQDGZDADMVDZDTI");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.4409228181118411);
    msg.setSource(51028U);
    msg.setSourceEntity(222U);
    msg.setDestination(48356U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.912544383954955;
    msg.lon = 0.441997399856878;
    msg.depth = 0.8733726802801487;
    msg.roll = 0.8051644690577806;
    msg.pitch = 0.5282714766084813;
    msg.yaw = 0.8864535917939866;
    msg.rcp_time = 0.958564861209582;
    msg.sid.assign("QDCXFCXBWUPXTVKXDSADHOOFWFBPENSDIIEZBMYJWGYXSCYUYTCZCYAHZQCYNHOUMAVZVLDWWOIIMZMIAGJONETMKWBRLESWHEQODLTIAXLORJKNMTOGEUZTNSQFKVFIKAXKUBEMQRGZRQJSWNYNFNJMLVEXTFCDOPMKHXLR");
    msg.s_type = 43U;

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
    msg.setTimeStamp(0.14161840200644205);
    msg.setSource(15176U);
    msg.setSourceEntity(38U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(23U);
    msg.id.assign("XQWTBFYRPUGIAIAIVPMQ");
    msg.sensor_class.assign("OXEZPBNIOMEPTLZAMGWSNEAKYTBQQJQLXWRKDOFOLXIQDHPKAPABEHZTSSZNDNPCNPIUHXWSIVHRDZRUDRVRZEDRTOHDCFKQWSVXUVCYKMFGHKSLFLZGCWKZBYJQRJVIUVFJUSJCNQMCGWWXXLAYJYASKYZKBZCOCBOVFG");
    msg.lat = 0.056854724169409065;
    msg.lon = 0.8378995177223199;
    msg.alt = 0.07551154185256792;
    msg.heading = 0.09036832621094915;
    msg.data.assign("RBBTBTTXRBLBFZLEHUSGYYJYQGPKOTVLOWMRCSLWANIEZSULSNRNBWJRSIUIDFIASILVWVNVPRAGNJXWZXLTAOEGDMUKJMZWHAXKOJVFMKXCITQBNUKLTEMGYFMPKXPWZYJTENEXMUEHQPDARQHYFCSXFHUAVKHEHIIOPJKUZYPLVSWQODZWFFFYERYIXN");

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
    msg.setTimeStamp(0.9796667666485384);
    msg.setSource(59995U);
    msg.setSourceEntity(43U);
    msg.setDestination(34534U);
    msg.setDestinationEntity(241U);
    msg.id.assign("WMDFJMTYDUQVSCWDKELNNYEPBXAJWQTAENZICMRJCNSOXHJNRXQDHPIWBZOKPLJTCZCIGKVSBARBMEBKHIOVOQXZKBJMPHFXECBUSMAZGRLBPUXNDGRNWVLJNGGEIUTASFSOYIEHMOPHLQLFLCIWUGKUAETAXRDGSVEDWQSTAWYFGQPJWGMBPFRTESDZGFKNUHXXYJIQZFPOU");
    msg.sensor_class.assign("NIYZFBZJAJEHRQNNVWDMNDECAQTSJGEUNINTMXUPXCHWTBQXKYYSWJDLEBKFOHVEAWMTRBLPHAWMGXBTOTBDZULSDAJTIFFNKA");
    msg.lat = 0.9529704893532478;
    msg.lon = 0.7863443269943301;
    msg.alt = 0.4530292935847784;
    msg.heading = 0.6768030536346133;
    msg.data.assign("IZCOHSNBQZCLPYFRVFZRWDKHUNMVQPDXENYEDYIPIASBLPSIYGWEFMIOCNGBHCKVGKYYQVWXQPPWTVUUMGELNQAZJLOOEZRSOFCUVQFMEWXCMMXEKTSDLNGOWANVJFXJKBQPKEDIJBUAJXIAHFBOPM");

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
    msg.setTimeStamp(0.4373263227268809);
    msg.setSource(44537U);
    msg.setSourceEntity(146U);
    msg.setDestination(51724U);
    msg.setDestinationEntity(134U);
    msg.id.assign("KYKXLOMJRHQSXNWJNMLABBHKPWJQUSTGICISVQIGUVZFFRKBGWNPHL");
    msg.sensor_class.assign("XMEXCYRIUWOFIMWQVSEZWYKHDRULZIOCXKBIWYNJASZ");
    msg.lat = 0.34766752134536294;
    msg.lon = 0.7751694949629144;
    msg.alt = 0.8289644543040297;
    msg.heading = 0.5022341394279817;
    msg.data.assign("FFPMKSOWHGWZCZPTDZLAGVXOUIDUQTMYOPEOCPTYREIBJVNFKDHHLCKGVCHJBNNRBEYULCKCIXVFQQOLGBKOHWKGRTFMEERROALSVXASYPJNPLHNWVIIYDNDQYD");

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
    msg.setTimeStamp(0.21084086497727728);
    msg.setSource(20838U);
    msg.setSourceEntity(236U);
    msg.setDestination(8384U);
    msg.setDestinationEntity(242U);
    msg.id.assign("EOMDROZUJCNSZXFRCGYPADKCXXNVNMJOVGFZDEGBEIYIHICBUKQZFXWLWKQHMQLAQDIJHEMYURVOPAMCUFGGBJPHTIEWDGPJZZWTLFMJYRFSCTHSPBSOASTVDXVQQBELEJUIFRJNIDYQOPNBORLWMAHBRMKDKWRHTUVPJVTIKSNSWGIFOZQVLFPWPKNTPBEOXAAEWSXETGNDVLNKWLYLHZAYYOU");

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
    msg.setTimeStamp(0.15418132050565003);
    msg.setSource(1050U);
    msg.setSourceEntity(173U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(216U);
    msg.id.assign("VLOARUUCEPDCXHJQSFSQLDGMXLBYOVDZKYABIIBFHNAWNWZSHLPRCLIWPOLTPVXQONWIOGAZGWDODQTTDYKIHBJFIYFPSCTHGFRRVKIRNPHKOQUUXIAWLKRSKMNJMPMUNICUYDZVZKWEJRGAGTCJRKVEMFAGYVCATMYXVDUBPELEXOSMQKBDYFFZWYAXWZXIDQSMTNFEABCNJMSBBKQMLVHQJVCSJGXZOOEUHPPRGHNLJFWEJZZTXTES");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RXKHDWRUSFQFYTAGVRUNCTQVVZZSQGXXMYQIOUXKMMEHWTAOJMCCAVKSGOYBLPKZHHHUFYDXCPMZZLETIFBOWJDSXEOEIKWKPWQRKXXARHRVHJEDIDTREFOVMAUYBLUBVPAIELISMWFQBRMLVCJABTSULUAZWPIUWJGOWMBOKHSTXYGCOFEQJVMGHILQCCQNQLGZPRKODNDUSCGNJCPA");
    tmp_msg_0.feature_type = 136U;
    tmp_msg_0.rgb_red = 43U;
    tmp_msg_0.rgb_green = 243U;
    tmp_msg_0.rgb_blue = 151U;
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
    msg.setTimeStamp(0.36309829436396557);
    msg.setSource(42161U);
    msg.setSourceEntity(46U);
    msg.setDestination(52487U);
    msg.setDestinationEntity(147U);
    msg.id.assign("QYONZJXCVZKMNMQTLHRARUTBSUGMKOXWQSVFPLZLJBKMDEOTXPOIKJBHYLDCLAUXXUGSWFNIOZWGEWAMFJVGBJDAGKEYVHZHMNXSLLUIJYDRRLCTSIOKQZPELKEJWYHMJHORUUPWHAWXENSVAXRFBADORTESCCFFYVQKJDZRAMAPXPFBGNNEIHOPTKSMZFLBYHPUFIQUOYMVQQIBVPGIAQCXDDNRGZDNTESBCIWWGGCEUHJVNWKTY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FYLRKJIHYRSTSAMZQGXSOBPSADHKVWVMWMMRNIYDWEAJQFWDFOCBJEBRUJQBAHZHKEQHZBLKVLCECXZPUFQAZOUCYVBOLOJGTDFAPTXGNXRCIVDHEXX");
    tmp_msg_0.feature_type = 33U;
    tmp_msg_0.rgb_red = 2U;
    tmp_msg_0.rgb_green = 95U;
    tmp_msg_0.rgb_blue = 218U;
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
    msg.setTimeStamp(0.9837986155469618);
    msg.setSource(28907U);
    msg.setSourceEntity(11U);
    msg.setDestination(57004U);
    msg.setDestinationEntity(240U);
    msg.id.assign("VZXIYSMOEZYTSEQFLECLQQGTFUEXKJDGLYWLHEHYZWSLNKHLFUMUOVENQVCASTVTBKJUKHDXGWVASERSIAACAZPLYACTFNMBFRBATFEKPRKRHLODGPQBCGXSNPZJWADUCNXGVKPHXTUIOTGYMIHJXAKSJBNDWONDKFPWJBNTORXZMYCSIPDROAILBBIOVQCPHLPDIMRHNQKMJWMEZBQBMEVDRFYJYPDF");
    msg.feature_type = 66U;
    msg.rgb_red = 48U;
    msg.rgb_green = 228U;
    msg.rgb_blue = 21U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5367209930643894;
    tmp_msg_0.lon = 0.38881912666583884;
    tmp_msg_0.alt = 0.8049087438763007;
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
    msg.setTimeStamp(0.8940056990765398);
    msg.setSource(20651U);
    msg.setSourceEntity(86U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(6U);
    msg.id.assign("MWCWKQCCDCFHODLTAFMLFNPEYNWQXXRPUOVLUUXJTTYRYKOIGAGHKOIMBFEONHALUECCRVIJWFAWSIDQUHIVYGGPABPQUIAQBTZLHKTTVAEPWHJMENGJBWONHRXZVNLQLMEYDOJZYJRIMDXIZBSLSRVPGRWKDKQGEAWSKRFILBEB");
    msg.feature_type = 220U;
    msg.rgb_red = 227U;
    msg.rgb_green = 204U;
    msg.rgb_blue = 197U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8070661974231116;
    tmp_msg_0.lon = 0.16806462112539322;
    tmp_msg_0.alt = 0.419327754650624;
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
    msg.setTimeStamp(0.020411269236493723);
    msg.setSource(43769U);
    msg.setSourceEntity(215U);
    msg.setDestination(20578U);
    msg.setDestinationEntity(42U);
    msg.id.assign("JAUREHUXIRMXFQXHMKZUJYEGYLDEGRNYFEWAHNVIILVTPCVAOJFXAENLMCNTWTQOZKOUCRJOBYB");
    msg.feature_type = 205U;
    msg.rgb_red = 20U;
    msg.rgb_green = 201U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.4971538598201726);
    msg.setSource(14985U);
    msg.setSourceEntity(87U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.70596572371645;
    msg.lon = 0.1670138339267705;
    msg.alt = 0.3936496543796034;

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
    msg.setTimeStamp(0.7069898716995661);
    msg.setSource(13897U);
    msg.setSourceEntity(179U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.9524028931435641;
    msg.lon = 0.09527614521876449;
    msg.alt = 0.9743200675065774;

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
    msg.setTimeStamp(0.26878629582518365);
    msg.setSource(13164U);
    msg.setSourceEntity(57U);
    msg.setDestination(8266U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.8302066289849929;
    msg.lon = 0.4641043804949748;
    msg.alt = 0.0298506055439286;

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
    msg.setTimeStamp(0.4162620000085562);
    msg.setSource(44884U);
    msg.setSourceEntity(225U);
    msg.setDestination(62960U);
    msg.setDestinationEntity(183U);
    msg.type = 135U;
    msg.id.assign("AGJNFUBECAVNYZHWWXGGSXKEMIFKLMRJSIPADBYNEJYZLHLAKXDIJQBSVERYPYVTHELGCDOKMNKOZZTIBXY");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1540187247U;
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
    msg.setTimeStamp(0.9168926211359619);
    msg.setSource(40077U);
    msg.setSourceEntity(118U);
    msg.setDestination(9880U);
    msg.setDestinationEntity(128U);
    msg.type = 37U;
    msg.id.assign("QLDUTHURJIKIJVIJOJMXAQWHXXU");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 206U;
    tmp_msg_0.period = 3784045358U;
    tmp_msg_0.duty_cycle = 3988685210U;
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
    msg.setTimeStamp(0.9981433256328711);
    msg.setSource(36332U);
    msg.setSourceEntity(118U);
    msg.setDestination(15308U);
    msg.setDestinationEntity(52U);
    msg.type = 213U;
    msg.id.assign("OHCFUWHLHRMYZHCQFELTQJEIVKBMYXWPYIACRBHVUWNGUGNSQCUUUOOLYQMXGFKFLPLSVUMGBRAIPPEQSJPTXQKEKGZQRVAJIJOYSDMNLDHLJNRSIDZUGBZTOOKTRRNXWNMHOVSDIFDSTZKWPCPVUZVEEBCQCFLYBBFXFWMTNAOIBRWRENMJXOIABTQ");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 964113131U;
    tmp_msg_0.destination.assign("WVMUJIJVPOIADGQRXMNHPLVBYGXBBNZAFRIVHRYPYCHWDKCITCFNBNZAFTUDTYIKWQHGGRBNUTFUXEYOUWZZXUBRRAFVEPRHDEJNPEXWHVOSWESXKXHCTDSQILCLKFWLPSSSLMKEVMJBYOUDQJDPLNDJOKFBZZZHOQIMSUYWV");
    tmp_msg_0.timeout = 34371U;
    const char tmp_tmp_msg_0_0[] = {-77, 3, 105, 70, 49, -96, -11, -24, -106, 11, 89, -7, -58, 14, -24, -93, 120, 73, 54, -110, -65, -60, 70, -61, -76, 98, 60, 11, -27, 48, 84, 8, -46, 95, -118, 88, -75};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.11264108663536598);
    msg.setSource(15571U);
    msg.setSourceEntity(221U);
    msg.setDestination(24446U);
    msg.setDestinationEntity(86U);
    msg.localname.assign("RMSTLEKPEQBFZSWMSOVTNQBDVDVQCFVNYLYLLAABIDVYOXJAZHWNZHZETADAEBOYEDPGQIAPVDOHXZMXQOGMNQKLNWNKKMORLLHMZUFH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VHCYUUCQCIWQSRIQ");
    tmp_msg_0.sys_type = 214U;
    tmp_msg_0.owner = 26728U;
    tmp_msg_0.lat = 0.6980329869781251;
    tmp_msg_0.lon = 0.6373772178806598;
    tmp_msg_0.height = 0.06409540633747035;
    tmp_msg_0.services.assign("ARYJAFYXTKVWNBQPSONCGYNIKJWNCVEGKVOLSICPXMKAUEEQMRQ");
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
    msg.setTimeStamp(0.021120470858988383);
    msg.setSource(61575U);
    msg.setSourceEntity(34U);
    msg.setDestination(2970U);
    msg.setDestinationEntity(176U);
    msg.localname.assign("VNOXKAKFNHICSJIQHFSYBRDATJAEKCPOZOUUMMKUTPULBDGMQLPYWZXGMLMNHQXSEWTJDSORZBLPEQCVYJIIATXPFUZBZFNXYMUYWOIXOCHJKTHDYBDFUNAWCENVLDLBXGXMIDQRJHQGGJSYCTTSPZWEGQXJLBTNIDSAKMLNAJHJUCTPXVVFWGOORHE");

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
    msg.setTimeStamp(0.5179632982349007);
    msg.setSource(16648U);
    msg.setSourceEntity(149U);
    msg.setDestination(63546U);
    msg.setDestinationEntity(190U);
    msg.localname.assign("IVAYVFISQXVFBHXIFKPACRVPQNHEIHZBCHPFBTYURYOUWRODMEVBIKWLDPAECYPAXHEJRCSNOKHXLQLRMSOJZAAYYDGRMSWRSVWMYOEJDLCLGMGSALEZBFFUVUJTCFMNWWQLKIIKYQJAGBJUUOICWSQTOJNTSVHCXTVDLPGXUWXRGRNTUYEWHMKUFNKTDZQTNMBQNRIJ");

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
    msg.setTimeStamp(0.6822043751116721);
    msg.setSource(55325U);
    msg.setSourceEntity(254U);
    msg.setDestination(17288U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("QFYBZZHOMDHYQXPWVYJTTNAFDMLWRRSQASODOKURIMZOOKNFWLG");
    msg.predicate.assign("ZKPCZULEMVFLJGTIETRKBNTOTMGCUNYXVNCMWDEPFIWYZXESJRKAWBXSXHBPTZPBOIDUONBLFYQWFAAKEAMIHNRUEQBAVWBYOJOCEXCACWHSEWZPKWDYJSYOMRGEPDTZHIQRGXKGTCHGASUTNNDDINOKLGHJJSRHPROXUOGP");
    msg.attributes.assign("DXBZOQWMRUJPKKVBHMTTNQRZHFLTIAEXURDWLEMKXEVOSRILDYVOKOJZDCYJ");

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
    msg.setTimeStamp(0.41383296423102356);
    msg.setSource(51348U);
    msg.setSourceEntity(11U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("WHEKTOHKEMQNLATZXOIWQDXCCVPAKLHBAUAJNSYZYCGTZGONLBFCSOXLVMJTBGOWJLRFZQLPQFPCIVUUBUMJQHSDNHKZYKUBHJFMDMPHDVBCWPGBDEDEVRMXIVYIQRMNFLWKDSAEUAWGRGCEELAPU");
    msg.predicate.assign("ZMKBWDEJRNQVMXVSJOLDVYEGBVXUWQVCXEYPFTIICLZKSDQGZAYPBEMOABTGLGCQJDGHNQJVJIDTPZWBHRSAAVXTCVLCCPUQNIRFMEMTRGSCOIWMPXJYMKMAUEXRHOWFOZAOYNCYKBDVIUPBOMINLADRUUYKKLSUFHFUZESWGASREMGKHODJBCELWZWAIGNOJXOYRSEF");
    msg.attributes.assign("OIFORWWAKZQJDDYPHZDLMODNSFNVHNGUGNXSRRHBRZPOZHJAPSLQLXFSDNVVUSMYNZRBEGWWIKHCUYVXLACNARJUBUCTPEAUTIEJMYSLKYCVAPHJXFHVZQWAVKUJKTVWMFFKQKQUDDKETNNJAWITMNFBRLCLJIAEOBXULBYDGUAOQEYWPVECIXGVRZGXJQIHGOX");

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
    msg.setTimeStamp(0.753967709595562);
    msg.setSource(54305U);
    msg.setSourceEntity(17U);
    msg.setDestination(27703U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("ECGRTEFVYCSSDHMHWJSSZO");
    msg.predicate.assign("DWFSRKTTIRKGYNIQBNAOEBFQBPXCEUFXRWQTLWLCPZZGUOWTGTYQIRBUIPDKFZVSQMYZTPINCAMCLUSJPJYVKTXHBSRKEONBMEZXHSUJPAVPEMHJVYBGQGJSUDMLNVOCBSWLOLHZHRQQMVREXCADFGZZNFBPFGRIAUZWJJNFIHJGANLCFQTCOAOVIYKCDDSWPVYLSBNIK");
    msg.attributes.assign("ZRCNERQEEDJOXPIJFZQZJQBOTBVZSLJZALC");

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
    msg.setTimeStamp(0.7888369416142281);
    msg.setSource(1945U);
    msg.setSourceEntity(158U);
    msg.setDestination(54856U);
    msg.setDestinationEntity(191U);
    msg.command = 166U;
    msg.goal_id.assign("WQMRUPDOCSITTORGHFAOAJHMXTJJJWJHMEKUYUECALPEPHBKWTLGFVXFPAXBYKLBJBNVQQMOYBVZBDHRNWQAUEESLTZBDJ");
    msg.goal_xml.assign("TONPTYQZYNFSVWYOYDHKLUJSOEZRORUQINCTOXJSTQWJEAVBLBJDUKLNB");

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
    msg.setTimeStamp(0.8854851180224812);
    msg.setSource(49333U);
    msg.setSourceEntity(123U);
    msg.setDestination(28904U);
    msg.setDestinationEntity(93U);
    msg.command = 182U;
    msg.goal_id.assign("QTXNHBIBEDVEZFWWOZZIWJQLTITHXEAHCYNWKAINTYLRXJWQOBPYOLCYBUQGNOTHGNEFRZPSGKFHDVYXIQQHCLASETFZAWMSVKVPXF");
    msg.goal_xml.assign("BFESIJZTSIWNUBSSEIUHASXFUTPYQVULNJMKVPKJHZCYAEBYGGBJMCJAQIDAW");

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
    msg.setTimeStamp(0.9643511320723014);
    msg.setSource(49930U);
    msg.setSourceEntity(252U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(131U);
    msg.command = 125U;
    msg.goal_id.assign("SQTIRNEERZLZSWURGAKZQPFBRMAXPOIXIGRUXSNKVPYVOZHUBCFSCJBV");
    msg.goal_xml.assign("SFTSIKQJQWDFSLNQUCKFCXBYENZYZHIYPGJABNOPEBEHVSGJANAYXTCKRPGULIABYFBRGPMBXKNRTCCODJXLNNZOTSHQCKBURLOMVLUUWQNDHDKDJLUJGRZOPQFDVHZWYTJDNTZMXLFEZFVMEETDGQOHYWWGPAEUNXOBFI");

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
    msg.setTimeStamp(0.37061255311288377);
    msg.setSource(17713U);
    msg.setSourceEntity(9U);
    msg.setDestination(13534U);
    msg.setDestinationEntity(86U);
    msg.op = 26U;
    msg.goal_id.assign("YBZBNYYAKBINWPJSELFDIWXBZCTNJZOJGVRFOLNCOHNHBDHCPXBVT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CFOASWYTXDYVIGVPGHATKIQPQIKALUPYSIBUUGTCKDOIFWQEEVHWACZRCVAWLISGEMKFBJRXQWXGMVUDPUARJOBBTBWXGKYHTSIHQSWTYFVZIAZVPLAZMZVBMDRORZOXMMSJZUCUGLLQKJBUODOSSJYULYMEDXQWJDNFAPMPXOPJLGNNNFTRCVRCYDYNBFLEEPGDTF");
    tmp_msg_0.predicate.assign("SOWWXAAGSSKWSSNZDRHLIOWTKCVLGMKEVEX");
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
    msg.setTimeStamp(0.5117632063810664);
    msg.setSource(11945U);
    msg.setSourceEntity(164U);
    msg.setDestination(5402U);
    msg.setDestinationEntity(33U);
    msg.op = 54U;
    msg.goal_id.assign("TYARTGZOGKHHWCDUYPNCYBKBCCOBTFLXWARVEUGMPIPLDXXQSZUUQAZJYJBRRLFCWXHEPNPRLHNQVFFOSEDBXQSWLKKWQTEKVEVEXDHUJSYTZXRMAKVLMIPRWNVGNNTSWTDASCDCCFMXIIVBGMOGAZDNIDBMSPFOQBKIVYLDAKSRFCMUQIIFXVSLZGZUIJNOBEEPYHKHBYRVJQWLMZHWJYOFHEAJROFTZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YYEOMKDXUJUFNHHBGXVJBXMGVAGDSMFFMRWBLZLWUJOGCATUZSWWGLGUSIFLOUFQALAFTAMPHSRMRNEFOTKSRBWPGPKEJ");
    tmp_msg_0.predicate.assign("LCQNXTRQMQYAPOVZYDUVXSEWTJUVEHAPOFQCKZVMRNXPDSZGLJXSHIOCPAMJIUCMBWGKYBFE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VJXIRONODZQMUKICDMQZJFNIWTKUXKILZGCXOV");
    tmp_tmp_msg_0_0.attr_type = 66U;
    tmp_tmp_msg_0_0.min.assign("CFACBSTYAZUCNPMHDNGQEFVIVI");
    tmp_tmp_msg_0_0.max.assign("JTMYERGWUDRUETAUNONKVWPFLEFLZENIAFDHAXZUMJQJTDPKOYMOVSJWKWIIXFWHZQCLGBPXDKMTZGZCYDAZNYDFPOMACQSOAZKYITIHLXCOHCUJHKRNXUPELPJQKBSHCBRGYTZMUQATBUNVMARSVLSNBIIEVJ");
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
    msg.setTimeStamp(0.19284673762012705);
    msg.setSource(27397U);
    msg.setSourceEntity(247U);
    msg.setDestination(19325U);
    msg.setDestinationEntity(226U);
    msg.op = 19U;
    msg.goal_id.assign("MHEPJCJRKOEVCIGBPMADQNKQDPXIJTOVBKSRYTWMFRLCSFGFNJKJFCIQZRUVCBZPLLDOJWDPCASQZDNGQEDARCHYBYSFEYVLWUZQZITEPHKUEOLNMGSGTNGWJWGTPFHUQYWCOYYMQOXUVPRHGTKBKWSMIRMVSLYRTTXPGMLIBALNIOFZBVZATHWJYBNHVKFIZVUBWDZDILHFPMEWKLAXQTR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IWDVSULZQFCYTWPPHPKNEJVQWXAZLDXAJNCHMRSVRYZBSXQEFOERRKNCGMOKTWWUDGTHITVNZUKRLLNXEVNYSLLQSYJTBDBLGISWMOBQYHJYDGXIGZAKNJNNBFKFDBCMCGLQFEVHENMRAOZCTBUCIAGVJXDWPWYIOKIKUSGMHBLJTVXDAP");
    tmp_msg_0.predicate.assign("QSLJJILKUUZOCZWCPLYHIDQTBKTSMQUOBNFZNBWMAFYAWIFWWNRWPNAAKGJMNXTOSDEVVYVRNPZCRBGEPSVXEGVIUHGXRKQRQQDCWZHXMQGKRLSDVQOZYAHNEPLADPEPOMYJJWWZJOUMOKSEACZLDXARHGRRBKILAXHYIGUVJNBFLHZXXDMVSBKSJWPCIQHPOIIIKCNJHCLTMUTZTVYGGTBBUDF");
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
    msg.setTimeStamp(0.5899961964821105);
    msg.setSource(42217U);
    msg.setSourceEntity(114U);
    msg.setDestination(53742U);
    msg.setDestinationEntity(130U);
    msg.name.assign("CXLEQRBKIVHLYUCDUSUCVXYINZIBOHGDJVNNFZVYLASANFRSIARVYAQEWEAZKSPDPJGEYFCZLKVAWTKUVKZZPFRQJHJQGDPNLIGJUZTIXXYGMSHJXORDG");
    msg.attr_type = 120U;
    msg.min.assign("UTLUYVNGLINJLBDG");
    msg.max.assign("CQUKNNXRPWDPOLZAJVIAMYYSAVZCMEIASHERYFXBHWUZBXZMECXDBMBGGZQKTHNVCSEIQYTTWKCUYGGPKILOTITMTFWOWKCOHFWWLWURUQCCBJ");

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
    msg.setTimeStamp(0.5009684596683515);
    msg.setSource(64722U);
    msg.setSourceEntity(241U);
    msg.setDestination(53955U);
    msg.setDestinationEntity(14U);
    msg.name.assign("FQJJXPSZUEMFXBWGOFWRVBKHFKDIMBAOCVPMVEQNUTIARDOWQCBPAJUHOABRVBYAHYXWOTHYLPGKRUPTSOWKQKYJTYYDZCIXCJVNFRENIIKSXYFISEOQGMXATIZWUTEVZYGZMZTHDDAMNMLEYCWWVLUSIENKJBWVDDHQTRQNSMNRKUAGRNJDFPGMLBOCZHCXTWPALVCXLPQQKHFIEJCZYLPSHZORAGSITMUFNRGUPEDZHDELSGNOKLCBLBJG");
    msg.attr_type = 48U;
    msg.min.assign("VSIFGRYGRSTGWCJFCIQSTPFUSARMBMDJSPOPKWNJBSPFYTOMVZRMCGXPELNZMHEKRFFQPKMZDRNHBXKATHGYAUSMEYNYPVVCLKGXKWWUYZBDQUEOLOWXUXSZHJDPSQTLRCYKGZQUHLIZIINQVZECHEBUKFEKNDDOOQRHHCYLBOXXANUTAIZGYWQWFAUADVXOJC");
    msg.max.assign("SBATJQTOYXVFRLTXRSNIITKJXCDQGVHQENZKNYNJWZBLIOMSHTDEPLSWARHACFDWQUDALWYEAPWLMJZMUSROGELVIHCUGAUQGIBOZQJHVKCNZKYSUNSZWBYPUOLACZXNOXAQEEHFIGTPKIRMBKVUTDPHWQLDYDDNHJYIIFWOQMWYXFRGFAKKONEUCUTEJEHCGRBUCXDFJIMPZGSRWTSOYQFPMHFVXXXRBDOVBMSMRVECZLJFNGGPVMVPCJBLY");

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
    msg.setTimeStamp(0.27534811893628897);
    msg.setSource(3173U);
    msg.setSourceEntity(33U);
    msg.setDestination(26971U);
    msg.setDestinationEntity(220U);
    msg.name.assign("NJLCAVKPMXADHQWYRZQBOLEEWNGSQIGXZOZMUAWBQRYUBURJKKWYWINGCJUQOVGCZYUHMSAGKRTARVUVQSOLCFLRON");
    msg.attr_type = 240U;
    msg.min.assign("NKOXYQZYCGNNPRHGWEDKQMNPDCLFQAHJCGTNTAQQAKLWLHVIWWWFTEKZFFYJDSBRXIKIPOVGIITUEXLCPYXPBIQRGYAUQAGAPJWBMEYLEJWILBZOAMFTQOVDHCHUBCNMZSPZUJFGARLXSTVZSEXXHHUYWRQYSTKSLHMKIPFYXEZFSHJDMLODUUOK");
    msg.max.assign("DOBIQRIBKNJWJSYXZWHQANRBNCTZWXFABCGSERZTSBJAINVZXCHUPGJNBRSFCIHGQYZXHNYPDNEOKPUGOZYFLCFKBOHFLTMMJWGHQYOIDZYWPXVCVRQJSVEDEVDFQYOKVXDFUBNTMTUBNMZATLMVPUKADSWSUZAMDXGPGNEKRJGXWLDAFKRHCYBI");

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
    msg.setTimeStamp(0.6458637713187657);
    msg.setSource(50129U);
    msg.setSourceEntity(202U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("AFLDQMAUGOQGKKLJBSVXUYVMMKEWKKSCVUTJSSLYENCFFFAJZMPOOPPPTGSRWRTTJOQDAYTJAWABNHTIQXDXGWIKHJOPWNCXREGKZPNHSVFIFDWMTVAPNJLBBVEXALXTQXYWKBYBG");
    msg.predicate.assign("PIBTXXYGSAEFWBJNSQVMDOXTQOJJTHNWXPLIDJQZGLEBQZELOWUAPJHDDVZXIWRAWRHNPPRIPIUNUGBUXDWJYGSYTUHNEFJVBIZRVLFYESCSWMCDAH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RNUPAABHTPBNHOVWICOXXYZNPMDNBFECWCYYVEZJREGDGRIKNIJAOETBQXFSDBD");
    tmp_msg_0.attr_type = 210U;
    tmp_msg_0.min.assign("AKKFANROJJKSPYKPEWUMCZEYVIQPTSONADHXVSGKRNWBHQMFCFRZYSAGJGZWYLSOALLZGPXMJZZREXYRITRGKBOHDVWDDHSTYPZEBCJWRCBUQWFTDQNCFOAPQLCEHMMYWMIQKAINUJTXBJOUAPTQZVC");
    tmp_msg_0.max.assign("FXXVYPWKJHUUQSBHADLJXPJCFTNRIJXUCJEZDCLATLONWGCBGAORDAFLQRWWGNUZEJTIWZVMGMKKFKVQDMEWPTPIIXHSNHDMBJOFRPQEPSKQVBVTAVONSULNVIMCJXUIPFYLYEAOFEIIYGUUNBLJZZKFDWQJSYHHCEHOSAQXAUAHROCNYQLGKMRURGMCMGAYHBKDZMONVQWSXHTDKCTSOGP");
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
    msg.setTimeStamp(0.36583739010468497);
    msg.setSource(12247U);
    msg.setSourceEntity(119U);
    msg.setDestination(12748U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("PKRVSYINUKOZTDSWVYDQUGYYVWAMJFSRYSLWCSVZGFEUPYDCXYXFLHBHDFXTHMOLGMATCJTEF");
    msg.predicate.assign("SUESOBQGGTMFXKAKCQJFMYMUGCWBDYQSNJNURMKSTXAVOHHQUBWLEDUHTTBJIVRCAZSVXNKWBEJXNORDTZLSRFZZIPLVGWWUNCHPLCQTNVJRCTFOZETVAVLOXZ");

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
    msg.setTimeStamp(0.5392010610581859);
    msg.setSource(56802U);
    msg.setSourceEntity(122U);
    msg.setDestination(54279U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("UVGQJJITCWHTMYSBDDDLDPFMLENHTPSMWWFZOXJUIYCRFBJZALKSSMQGLTTHXQVQKAONYEPFRXBMIAOJGVUWFGAUNSQAGTVRTEIXIRXDCEVPTWZFHFKOUOZPNOHLFDNDKYGXFWBRKVYOMWZXMUHLOBC");
    msg.predicate.assign("LJCMMKUOFZPVZGSSCNVDYGUGOYHKEWDIDBCTRDJXCXFCMUKFHRBRYFSZOZKABIWJPQHPATZFRHAMREQXJKMTQORCCBTSYWEMTYPDVRLUEXTVQPZDWNGQXNOAWDXBJIIQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GNTLNGQFDHQBURYYTYOIKWNLVBUUTEIJRJRFMHEHXWAISAOOBIRYPUDWZVVVLCXGPZJBCMRXORMTWBIWDQJSPXCGQZEIOUYDTBESZNLPGJZHDTDPPEMFAAZUSOLDFJPQMWDJGHPXFGPAUTWMXJOEDCGYOKKMAPNZYMKFRLVIZXWMSSFLVOBXCMHEFTTRGLVUZHNXHYRQXUCNSCAEIDFGK");
    tmp_msg_0.attr_type = 95U;
    tmp_msg_0.min.assign("RWFDSBPPVJSVUWVHEAQALDHCNXPCPUYXCOQTHLQFNPRFKEBDFOUCZTIISMMRVJTLRUGGMZFITBZYWUBCNIEZJGHUROAETSYIVUADWZJLLSCLCKEAJJYFIQNHZFXLJQGRDUA");
    tmp_msg_0.max.assign("WMTHSDQFDFQLDZJICPSNXVQYXOAEXUBYKVXOGRFKMIHOBPFDSNPAAJAINGQKVEBHRPWFFCWPWIEHUJSULYVDVXTDMDECOOLTRWVPDIBZOSYFRHRZIRQRJWWJMSXCUMGYNCEYXUHHNGITQNZEEZUNKTY");
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
    msg.setTimeStamp(0.834825466785262);
    msg.setSource(57564U);
    msg.setSourceEntity(197U);
    msg.setDestination(63595U);
    msg.setDestinationEntity(108U);
    msg.reactor.assign("ORPQQTGMPQRYLHWWJOMNWUOEXNBHHQNXGKTSFTDSFTAVIIAUOAMXUJOEGSVLGLCIYJQYNYBSKMCFYNEXZHKFIZWLNWVKXUXABZEITIBAJKPIRRMNGJFXDTSWTCHHSZYZCCDUPWCVQIUUNLNMMVTZORJQOFYOSGSQWSYJBGTAXAHIJYQMRUZKVCHLEWLKPSJIBJNLK");

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
    msg.setTimeStamp(0.3262211234513327);
    msg.setSource(33244U);
    msg.setSourceEntity(165U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(29U);
    msg.reactor.assign("ECHZNWOPGDQPCEVBLDJPTMMQCFGMCFDLJVWZOIAFCOLLSIVZUOPVRNKASHQOXKTDYZYDVCBRWYTEZOVYEFGKJQVJBUDAUMWTYISXRHXQKBMBYGEWENOGPQHUTCTYJAPRTKCEONIRZLNOWJPMQSHMAGUQSKRXBJZWTFRNKDLNSBGUTZM");

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
    msg.setTimeStamp(0.6306686377888551);
    msg.setSource(24923U);
    msg.setSourceEntity(245U);
    msg.setDestination(37646U);
    msg.setDestinationEntity(120U);
    msg.reactor.assign("TDGIVCGUFLTBWRQWJXWVRNEHAKAOPXRDBIQNAFBWCHDIIHJHZJOYSGEXAGAIMTALVVNCBXFYIDASPRRCYEAXYZSYBZDLBBYNKMUJTJVPSMOWIBUGFLOHXHAEKOFXWDJWVFMTPPRNZTPEFGJZGWDDCTVNYKIEODXYCGSSMTSQPLKSEBJBHRQXKXHAZCUZILMRJOEQOZOUQTDLWYELPIKVUNVQSTPHZLQFFNUVUKUFMNQJC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EMOFUPCFZULJAOXRFKXNZJSVSABKLZTUWXRZJ");
    tmp_msg_0.predicate.assign("SKQVRKIRAEDIBPWDPLOSOIIXJMGPDKMTCPOUCYIVLWTFM");
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
    msg.setTimeStamp(0.3332226804021674);
    msg.setSource(17533U);
    msg.setSourceEntity(220U);
    msg.setDestination(35515U);
    msg.setDestinationEntity(91U);
    msg.topic.assign("OJOSVYJNCQJYIEYQDUYUBPHCDAOXMYPGUKDRSZGWYAOPIXJVCXRPCXDKVCPAGPWUTHDBEGATYZQHUBV");
    msg.data.assign("SNJZYYGRQUNXUZEGVALCV");

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
    msg.setTimeStamp(0.29923536096399905);
    msg.setSource(25883U);
    msg.setSourceEntity(80U);
    msg.setDestination(28885U);
    msg.setDestinationEntity(197U);
    msg.topic.assign("MZGMTULZUKKKHSXBKYQQWAIADUXTJRFHJBGNHJCYLUJPZIVEPYCQBWJREWKSFFYUJUYLGQTEXIRNZNJHZACRKRLAALIZCEYWWWDLNGTWNHVTLEBJFOSUHYXRWCPHZKUTTDQFVOGKCQOFCIMIEQGNSPLODTNYDSIPDKYZCMHRMOXDGXMAPNCIHDSSZMOFMTEGRMLGQOVOXSSXQXPAAIEIBVBWFJBSFEAXGTAJONFNHRBOVBVVZP");
    msg.data.assign("UQZOUQEEAFWIIGWKLVWYMADYCMSTGAAVNDBCOPXXDULIAUPWFSIQFDLSFR");

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
    msg.setTimeStamp(0.5230432045627408);
    msg.setSource(63800U);
    msg.setSourceEntity(138U);
    msg.setDestination(27828U);
    msg.setDestinationEntity(212U);
    msg.topic.assign("TPVXNBISQXORHENJTTPBHDYAXDDNFUKYPNPWBGDJRSEQWJKTBAYLKHNUFJVHGKCGFBDSRCIVQELRAWGTHHLQXEMEBWREOJWRIFIMVUEKVXLWICVGOSWBDGGPJSMZZQA");
    msg.data.assign("BZNVJEIWNRLCWGMPDABKIFEJOOVQZIQSKCRTDPHHXOVKMTLUMRFXXCBGMYVZQDRCWPJNKLASMFVQXRTEWYUAJYTNVOPHWZTEKSDGQNVDLYLEQOICJKPLYRELGDOTGCTBXSFENFEBMQZULTWVXMFHUWYVPCRPRHFUTQZUZGSHACOADMJENRIKEZLWCQJBYXSPPLAXIAOYXBRWUJNWIHQAZYMUXFBOJKGYUTGDNDHCAKIUBSAH");

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
    msg.setTimeStamp(0.9960024531539802);
    msg.setSource(2242U);
    msg.setSourceEntity(18U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(99U);
    msg.frameid = 146U;
    const char tmp_msg_0[] = {-75, 74, 61, 39, -8, -76, 77, 71, -51, -118, -10, -60, 65, -104, -54, 76, 66, -82, 34, -3, -51, 72, -88, 97, 20, 57, 84, 89, -97, -66, -81, -59, 36, 22, 12, -60, -79, -92, 37, -101, -97, 27, -31, 37, 77, 91, -109, 108, 70, 71, -40, 111, -98, -64, -86, 50, 108, 117, -16, -41, -51, -53, 54, -50, -81, -52, 112, -109, -11, 79, -64, -113, 7, -10, 45, 51, 38, 44, -101, 18, -19, 79, 41, 79, -74, -36, 88, 13, -66, 41, 57, -47, -121, -43, -125, -80, -128, -79, -84, 9, -41, -113, 42, -67, -55, 100, -116, -60, 63, -65, -90, 88, -59, 8, 28, 42, 32, -60, 62, -90, -12, -52, -2, -34, 38, 44, -13, -50, 16, 15, -44, -48, 70, 2, 108, 92, 62, -42, 75, -52, 43, 118, -59, -26, 119, -30, -67, -97, 47, 19, 82, 122, 16, 117, 96, -40, -54, -113, -92, -56, -12, 31, 100, -57, 66, 11, -107, -111, 28, -2, -24, -126, -108, -115, -98, 39, 35, 35, 60, 62, 39, -15, -58, -122, -85, -15, 38, -85, -112, -76, -19, -89, -78, 82, 78, 108, 21, 54, -121, -126, -68, 33, -126, -102, 91, 126, -23, -60, 4, -80, 38, 7, -32, -104, 38};
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
    msg.setTimeStamp(0.8699514779862554);
    msg.setSource(63726U);
    msg.setSourceEntity(73U);
    msg.setDestination(24672U);
    msg.setDestinationEntity(4U);
    msg.frameid = 9U;
    const char tmp_msg_0[] = {-110, 113, -106, 57, -47, 77, 84, -49, 123, 41, 41, 109, -77, 42, -49, 116, 68, -94, 46, 112, 125, 12, -123, 32, 70, 123, 6, -76, -95, -123, 9, -59, -111, -119, 69, -14, -126, -42, -57, -9, -88, 110, 14, 110, -99, 91, 97, 84, -104, -39, 120, 12, -128, 37, 15, -107, -120, -16, 54, 65, -71, -37, -103, -41, -22, -60, 42, 28, -85, 94, -125, -105, 15, 41, -30, -17, -120, -89, -67, -63, 58, -84, 112, -120, -108, 87, -119, 107, 88, -104, 61, 25, -74, -99, -42, -117, -100, 26, -124, 120, 67, -68, -120, -121, 18, 69, -107, -74, -115, -121, 114, -58, 90, 45, 15, 65, -32, 72, 39, 1, 33, -9, -73, -95, -97, -105, -68, 49, -10, -6, 123, -11, 81, 55, -61, -97, -17, -37, 54, -99, -9, 55, -97, 100, 95, 46, -4, 26, -34, 71, -86, 86, -63, -8, -32, 15, 87, 92, 84, 1, 33, -116, -67, 103, 98, -128, -55, 68, -17, -74, 50, -33, -98, -36, -20, 80, -121, -2, 94, 116, 45, 125, -65, -3, 80, 29, -17, -120, 1, -115, 75, 34, -72, 48, 68, 118, 106, -63, -111, 88, 60, -65, -3, 68, -19, -89, -113, -3, 101, -102, -113, 29, -72, -51, -106, -125, 54};
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
    msg.setTimeStamp(0.2647830147433513);
    msg.setSource(38974U);
    msg.setSourceEntity(46U);
    msg.setDestination(6270U);
    msg.setDestinationEntity(130U);
    msg.frameid = 186U;
    const char tmp_msg_0[] = {97, 120, -3, -32, -78, -72, -28, 72, 74, 26, 110, 26, -28, 69, 97, 31, 64, 105, -27, 125, 51, -52, 24, 102, 39, -121, 0, -46, 108, 58, 1, -66, 13, 2, -103, -42, -38, 78, -87, 95, 78, -19, -6, -67, 30, -56, -9, -14, -6, -62, -23, -7, -48, 4, -30, -127, 111, -41, 107, -27, 48, 52, 53, -41, -32, 91, 83, -4, 108, 119, 35, 1, 57, -118, -108, 92, -68, 125, -106, -27, 92, 84, 4, -36, 91, -61, 66, -72, -11, -67, 1, 23, 7, 25, -56, 103, 62, -118, 86, -110, -62, 70, -72, -82, -27, -16, 12, 66, -86, -93, -18, 67, -120, 104, 100, -109, 51, 125, 84, -66, -12, -12, 9, -28, 28, 82, 25, -88, -101, -33, 54, 51, -72, -47, -32, -50, 121, -103, -57, -49, -18, -86, -9, -43, 26, -120, -81, 42, 64, -116, 120, -60, -49, 86, 2, -86, -99, 89, 8, -32, -65, -112, 31, -8, 63, 90, 99, 42, 102, -113, -62, 124, -79, -107, -77, -52, 14, 65, 13, 13, -58, -103, -83, 48, -12, -37, -62, -106, -114, -33, 126, -7, -78, -3, -118, -27, 126, 113, -19, 70, -93, -86, 124, 38, 126, 24, 33, 76, 100, 6, 107, -44, -105, 114, -99, -39, -38, -114, -62, 58, -29, 30, -14, 100, 5, -68};
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
    msg.setTimeStamp(0.5792436785910693);
    msg.setSource(16051U);
    msg.setSourceEntity(104U);
    msg.setDestination(36434U);
    msg.setDestinationEntity(92U);
    msg.fps = 41U;
    msg.quality = 250U;
    msg.reps = 52U;
    msg.tsize = 250U;

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
    msg.setTimeStamp(0.5214319122909581);
    msg.setSource(50116U);
    msg.setSourceEntity(82U);
    msg.setDestination(52308U);
    msg.setDestinationEntity(156U);
    msg.fps = 52U;
    msg.quality = 71U;
    msg.reps = 119U;
    msg.tsize = 215U;

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
    msg.setTimeStamp(0.7915913880037035);
    msg.setSource(64065U);
    msg.setSourceEntity(26U);
    msg.setDestination(29542U);
    msg.setDestinationEntity(245U);
    msg.fps = 241U;
    msg.quality = 101U;
    msg.reps = 103U;
    msg.tsize = 63U;

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
    msg.setTimeStamp(0.4956227834515744);
    msg.setSource(8489U);
    msg.setSourceEntity(214U);
    msg.setDestination(6470U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.413582189862416;
    msg.lon = 0.6463074339984857;
    msg.depth = 5U;
    msg.speed = 0.08559596184222262;
    msg.psi = 0.8231468984623054;

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
    msg.setTimeStamp(0.9420262613455217);
    msg.setSource(32547U);
    msg.setSourceEntity(62U);
    msg.setDestination(31538U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.7971387074436215;
    msg.lon = 0.5163419030934349;
    msg.depth = 117U;
    msg.speed = 0.9660686240877653;
    msg.psi = 0.24852335291637873;

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
    msg.setTimeStamp(0.9890903072924795);
    msg.setSource(19139U);
    msg.setSourceEntity(244U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.009159789659776707;
    msg.lon = 0.7770980122978206;
    msg.depth = 160U;
    msg.speed = 0.8588185272175954;
    msg.psi = 0.7933473888230449;

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
    msg.setTimeStamp(0.07887306700533647);
    msg.setSource(8327U);
    msg.setSourceEntity(68U);
    msg.setDestination(5101U);
    msg.setDestinationEntity(13U);
    msg.label.assign("QBSIDATWTCYVUTIIRIBXWYUIUBVXLOYCXMNLTHEUGHEAOODGCVFORDAAESGSNZNPZRKFVJXTZRAMGFMVNQEEAPJFKQUWLRUVMIPZMZGLFHJSWLNGFXNQYSKIPLBCDZWUMNYDOOIRCCLKRDYTHQTVJYGJMQWPYXYPZFAEOVCSQODHUBQJGIWICMSKCHBKADXDSKOKYKBNPFHKDPAHWZBPEGHBNCTALHSTFVXEXJQZMFEJUREZTUGMLSLBJPNR");
    msg.lat = 0.8576485470921812;
    msg.lon = 0.10310513237149388;
    msg.z = 0.7124958485348414;
    msg.z_units = 173U;
    msg.cog = 0.27709051711144994;
    msg.sog = 0.9697925946155629;

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
    msg.setTimeStamp(0.4771776352104722);
    msg.setSource(31597U);
    msg.setSourceEntity(84U);
    msg.setDestination(13862U);
    msg.setDestinationEntity(29U);
    msg.label.assign("XDHMLEFUFCRDKEXFRKACUIJKPHZNILLRYYMEDGGVYJYBGJXHMNWFNEFZYSWGVZYNGFXBMOSWSIHOTCJQHAAFGJQARRWZTQEKHPPZBLGAIPCPNKVLMOQGUEQTOHF");
    msg.lat = 0.13402762635870002;
    msg.lon = 0.10993657716136052;
    msg.z = 0.6139964404697522;
    msg.z_units = 30U;
    msg.cog = 0.47469587978494376;
    msg.sog = 0.16009193915295472;

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
    msg.setTimeStamp(0.7160102122945343);
    msg.setSource(59552U);
    msg.setSourceEntity(0U);
    msg.setDestination(21402U);
    msg.setDestinationEntity(254U);
    msg.label.assign("XXRKDYJMAFQOGC");
    msg.lat = 0.36918676662122973;
    msg.lon = 0.7469192075632763;
    msg.z = 0.33054882390041396;
    msg.z_units = 121U;
    msg.cog = 0.7934415481821926;
    msg.sog = 0.3206714234801169;

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
    msg.setTimeStamp(0.9828023968773753);
    msg.setSource(45197U);
    msg.setSourceEntity(125U);
    msg.setDestination(26596U);
    msg.setDestinationEntity(62U);
    msg.name.assign("GKIDPCSUKWOMUPKOMLEPSHYEYJFSIQHXMNOIYIWOVKNTHXPRLDAJSUXELUYFGUZFTWNGRICRDVTBFINSZDTZVESKTJMULFJTWARNMOTWDPHJWSVQZIVZXPPOMCGAOELLYMIFZTHJXUAZTFQFCJXGTOBWKACALAVBEURMJYZUPXPXLSRCHBLOQNFGERQCQHANRKCGERWWV");
    msg.value.assign("DDWQVGCXUTJGRXFBICXAAHAYNVCWQMTXISFMWEOPIPAJERYDBDOIJUHNJUTSTKXSBVQYMAHWLEZWQFONXZORBBCAPQRTSLNITQDRCPJPOFWZYTGNRGZVMDMTBILELGKRMBAGVWTSFGCIMPQHIEFUYBPHCOTDKUUCKMKRZXXXAZULUGLLJOYWY");

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
    msg.setTimeStamp(0.00943920594970915);
    msg.setSource(55772U);
    msg.setSourceEntity(28U);
    msg.setDestination(31552U);
    msg.setDestinationEntity(34U);
    msg.name.assign("KFSKHCYQVRAPHJQSQMMYLXGDZBOJGGMVUDNILIUNQAJPOJBEGOXPYPAPJYLYDZRXXYDWDCSQZRWOURRDIVWUQNWA");
    msg.value.assign("GNLMKSLGATQVPWWRMDLXTQVZYPZNRVFKSFMDPAHPNVTFUBOPIMOWGKXYFAIZNOMYRUJMEELTRSCPTHVBVQLJGZDPJHHZETODLTRDMRJYJHBQHTYKCUNRNMSXUGBZWGWZAOUOCQRAYECDWHDJEXQLKAOXENFFMXWGIASNWETIJRUJRACQOXXIHVCSPXLUYQOJVDYSYCXLBH");

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
    msg.setTimeStamp(0.14493012287837848);
    msg.setSource(17892U);
    msg.setSourceEntity(1U);
    msg.setDestination(41134U);
    msg.setDestinationEntity(195U);
    msg.name.assign("WLANMYKXVEBBUHJJGSHOALEI");
    msg.value.assign("CHGJJERCIJRWEFRKDFSGAUSZBQZGSFANGBXNOSXCVZJQPYLQIYDLSDOGVYZXNIZVPVUHUALJEPNNSLRPKFNGAFNQCCBIVRYMUORLWVXVKOQOJTMFWIUDLAYLKWCYAGKJRBKDTYOFHXMWHIKUUMMBBYEEDCQPZFHUJPHOEQDWVTSJAEATMET");

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
    msg.setTimeStamp(0.9701789154520357);
    msg.setSource(60414U);
    msg.setSourceEntity(158U);
    msg.setDestination(23363U);
    msg.setDestinationEntity(133U);
    msg.name.assign("WVEGZJIBKHDFQYLULUIQOMZVCEJFGNRMOCWQZEEYBMHSWCUFXKOFWYNIKPCIAKCKOUDOBTRHFXHGUKTQTGSRLNTVWCNYCYHDBSLQJNXZOFEBYVNXIPDJLULQFBKPGHPSTFCZGREMWVGIXXNWTIDSQLMDIVOAEZTMDAROISLPJAQDJJUSCPEDRGRVKOXBYZNWVSHWZIYATLBCUZXRNTUHKTELGYPQAGYVEMMDHPKRXSZVHAF");

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
    msg.setTimeStamp(0.2437541033162468);
    msg.setSource(15699U);
    msg.setSourceEntity(42U);
    msg.setDestination(17969U);
    msg.setDestinationEntity(102U);
    msg.name.assign("AUZRJHUGUDIPLTBGSKWVUJOLZBKROSTUTOVAQZPHTQKXLEFJPMNUMLMATABCXHKGYQFTSUFIEOFASOLSXUMZXFNRCXFKGNWLCMYEDNVDEQPJPMSWYYXBIDNDIFYRQMKNJESNCUTLBYULFHLVPDSWVCAIEBEISTEBYQPHAQGCGQRIVVWVBTIKRNBH");

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
    msg.setTimeStamp(0.05187629706694785);
    msg.setSource(31807U);
    msg.setSourceEntity(93U);
    msg.setDestination(38980U);
    msg.setDestinationEntity(111U);
    msg.name.assign("VVQFULMEOOJJXGENLEZVMSIWRUJGSGTPDJWYGRQKWYASMXCHUDVDMSSZEAFUAPQMYIYRKOBLKERFGWDPCGINLCOVFOPPVMUZAYHPEXBNOHZNBJFAUFBE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IRMKODFYFVLIDPHAAXMAKKFCRSGYWKFHGRMRAQJHCZEKPIELTVPQQNXQBOHZOINUWGYFYKEIJUTDTNSEYSWSCLXUQMRVYUEPKCFYSITGXWODHFOFITVWNEINNPTZDBHZNXLCRSYUBTJFMXSFGVDYWMEVDSNPZHQBMCMBABZADCJBXGNZGIRKBEJZVJKSDBHWQURMUALQJQXCJZWOORLAQLKCVOALZUPLNVPGOERPYMTCIDJTVXJUWTG");
    tmp_msg_0.value.assign("ERPHCDDXAPUWJWEEBLVQTRHMOQATVGHZFUAFXCRDKTFROESKCSFNPCSQGCUERGEZQLLZCHAMSABGYBUNYKXEKNFOTVJYAABDUNQBQIOAOHSYPLTHSVPOTPUMMTCSYPXYCJUEVNKIXMDVD");
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
    msg.setTimeStamp(0.5288602940029155);
    msg.setSource(13151U);
    msg.setSourceEntity(245U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(248U);
    msg.name.assign("SOCEICDFNLVVQSZWAOGIXSRAZDRPBBNSHSMQCLYNTTXPEWAWUXWERZRJGLPJLYXUOBYDEWZPVRKI");
    msg.visibility.assign("JGYPWFJINKYQKVOHVJXCMMXUQTUFDOETSSOWSZQBQSMPWLQLQWHNDHRSCIDVTJKCYLATDWUFGOGBHAODF");
    msg.scope.assign("ONFOFLSWEWLSFNTXXLPMMMRNDPSWGKDSVGZWNFPQHBCOALUSIBDVTUXGVJCVQVKFLDJVFEEZLKYOEQKRUTPQGCINSZOBKQTYQZYIRCJFCFPCMRBNGXOYHGAHETAQADUBIYAYUSEBHREQHIPJSTPADAJDZSOTVIOWBHRVCZEKVVGYZXHKAHRXLPWYXKBYDJANQMZUUNMGIOZPTMFXHOWZFCNHTXLULUMSWGBDCUJDRTRMGBWEIEMWJYRJPNQK");

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
    msg.setTimeStamp(0.43670817894456604);
    msg.setSource(16571U);
    msg.setSourceEntity(210U);
    msg.setDestination(5257U);
    msg.setDestinationEntity(18U);
    msg.name.assign("XDWSBIPINMFYTOHQKOMVHKJWUXDXRFWSUOVJAIJPCNSYJTHSYTLRPKKYIMQEAJUOIRXUFKCIEUZGYQGDJYEWSNPXZESKLXTVPDEEKZBRMOUUMMZFOGLACOZBLQQCAKBAGSNPQWLPYTFFSWXZLWNHUGGRDZHMPCEVHCUKYEVBCENGDWDLVRPWYHAJQOAVJHBCNQFFKIVTELTBTZGSANTIISIMBJOHLWRNDGXJBRAGBNXVQZHMDUCMX");
    msg.visibility.assign("LINKKJKAHETYWAGAPYCQMDJRFCVMDVAJMYFWRXNZQSKKZEBHILQXWLWWOHVAKEBOFVRXCQPNZHUHYVKAWJXGGESNSKJLOLEOTQISGSFIRDPWQXSQOSDAZIXQRCQBPDLZFZTYNNBYGRLERUCBBXFHUGYMCBDVYUPOTKOHP");
    msg.scope.assign("JDXBOHTFELPSZHIDBBUXNOWYSXRLMOJXJQMTOERCEAVRVWGSWOZAURWNENZPYMUFYAZXNKMIZVIGGUDTKKJKAKZFQDPYTFEGUDFNCQWQZFVBIHYHVDDTNKTBMJIGWBPZKEMPLGQYNSVJHTQSILLCND");

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
    msg.setTimeStamp(0.9002055249611658);
    msg.setSource(10694U);
    msg.setSourceEntity(194U);
    msg.setDestination(53966U);
    msg.setDestinationEntity(43U);
    msg.name.assign("HVGCEOMLDPPHDZOUUCMXAYENBXRTFZOVSGGLBZAMYLGEFXCJHRBPVKGEOQTILRKENKBWUQNFXHBSPQMYKOAARFQDEJIXUVSYWVUECPDARYZDFQMXKATWTKJROPJDWAKIGGJWSHLCHBOSJWHIKWIURMLFPTTHQMVWPJVACTLUYFFLNICMHLCLMGHYDVWPRTZASBDNSIXQNOXJZAIZERDNBZVJSUTNPIZSNQBUNEBDGFQK");
    msg.visibility.assign("NDSQEMAGHAQSXHSRYCQMDESVOXFLUKTJNOFOIECRHYOSNFIGLGJBVKLJZPDWFGJZQPAIXXCZQTFGWEQWTNKVWIBUPIAGDGYYGIRPUCPUVSSBBZ");
    msg.scope.assign("FHQNIETZPSQHJSTIFCRNVFZPVXWKETBONRDPTRCZADLWFZJEOIKNIWFRUEYWGNNMFRLKZZOBJHATUMMYXDPADXUIGNUAOREDYVEPMKLDNFAHQXLDPOVKRYEFSHJLQVPSJXPGQGB");

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
    msg.setTimeStamp(0.20750559368102806);
    msg.setSource(5387U);
    msg.setSourceEntity(147U);
    msg.setDestination(22492U);
    msg.setDestinationEntity(95U);
    msg.name.assign("TDEMFCKBKVDGGQWWBHENXOOYWNUZEDCSAWJFHDVHTEWQZXLALOKWNIDOEEPWHGIRAPUDJIRCNHLZRMDAZSCIGXDFZDBNIQTCZXPVVXSXUAERFEJXKBYQAMZQHYNOMJSBKWYPGVOXLNMIPQSDMFCUEQWKLUROSRJPWPLGCOPFLKYTMLVJVFYTQUUGTAIKJFQVSIGFXUJCZT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HKKDIGOHFVTLGFMAMHGHJQIONEJQNPBARSYNSKIIDKZOTGOJWYXWMRMMJEMLPZFQBIIETODEGHLCVCUIPSEWKXRDXURZZUMNCBSNEYUYFHVWLFQILVEUAONZ");
    tmp_msg_0.value.assign("WOLRBXOSLQUVHQRFKLHWRUZFAXKNAOMIUFIVAMDWZFJMXRFVXOLZYIWSVNGCDGVDTBZTGBCTGFGGHTJPQTFMNXNDSSOEHKWEANPADNHMHDEJYXPEPXBGULQTVEBJFRLCBUPMDBCOWNKLKUPXIOHZSXCYNMRVDQPAKZYTKCMQWFOKTR");
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
    msg.setTimeStamp(0.7004398419238517);
    msg.setSource(5244U);
    msg.setSourceEntity(44U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(143U);
    msg.name.assign("ZWERTPQCGDISCJPURRVMNQROKOEQLICXUTUWRPNGPYZGEVDCFCUQHSGTYAPOBFAJAXTBDMTAXCAEWXDEWJUFFDSSEWIJWHPIVVLSMVAZLMQXGIJMHIYVPVSNWBRSNIGJOLZXHUKZXDEQKQJQLHIDMKEIZMOLCFKBJPKQVKHNYMFIYRXOKZYZBDHTBBMGLAPF");

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
    msg.setTimeStamp(0.4733009816012852);
    msg.setSource(23303U);
    msg.setSourceEntity(136U);
    msg.setDestination(30080U);
    msg.setDestinationEntity(5U);
    msg.name.assign("UKBASPKPZCDVYCFUTEOMICWWSTMKLLBXICTNRFRWJVUIMXZNYPQSRSNVFANGGJDQPVBOYDQZCSAMBDTIMUNKZJNLIFREKTDISJFCTBNXHVBOOJGIMLYRLOXMCRGYTJDXHW");

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
    msg.setTimeStamp(0.9362491352871675);
    msg.setSource(3109U);
    msg.setSourceEntity(86U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(176U);
    msg.name.assign("KTYUHPQOTYWNDDJXIM");

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
    msg.setTimeStamp(0.3295923114650686);
    msg.setSource(47176U);
    msg.setSourceEntity(191U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(63U);
    msg.name.assign("BHHTRPHZWUXWKBHTVSYEQMIFCEZNDBXOTUTQSWCVLPOADWQFAMGRJAHOUWTINZTNZIMSNYIKDWYCXICWIUENVFOFSXTJCBDEDENOQEESJAGDSJUAMQYHTW");

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
    msg.setTimeStamp(0.11945241282678531);
    msg.setSource(30299U);
    msg.setSourceEntity(0U);
    msg.setDestination(19915U);
    msg.setDestinationEntity(211U);
    msg.name.assign("YNQANAHQBBRHDIGAKNPTXEVISTELFWJUCIYCIREDTMCBEAQFLFVCFVBJDBXMWPAJDBKSDHZFSZNKRQZOJSYNVHWIFIKYLJVEJOHQDYEXTESJPLUXRSMPYYQNPMNZWMWGTZU");

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
    msg.setTimeStamp(0.4210138141337312);
    msg.setSource(33173U);
    msg.setSourceEntity(229U);
    msg.setDestination(56621U);
    msg.setDestinationEntity(157U);
    msg.timeout = 852046860U;

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
    msg.setTimeStamp(0.16108784988531077);
    msg.setSource(8425U);
    msg.setSourceEntity(4U);
    msg.setDestination(62711U);
    msg.setDestinationEntity(235U);
    msg.timeout = 2551732165U;

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
    msg.setTimeStamp(0.6707424652388632);
    msg.setSource(34074U);
    msg.setSourceEntity(135U);
    msg.setDestination(13577U);
    msg.setDestinationEntity(38U);
    msg.timeout = 2887498180U;

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
    msg.setTimeStamp(0.08936841280643015);
    msg.setSource(61689U);
    msg.setSourceEntity(5U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3907328584U;

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
    msg.setTimeStamp(0.6022030819963083);
    msg.setSource(14886U);
    msg.setSourceEntity(226U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(125U);
    msg.sessid = 4142991101U;

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
    msg.setTimeStamp(0.6610167614926192);
    msg.setSource(59711U);
    msg.setSourceEntity(227U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3749992113U;

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
    msg.setTimeStamp(0.958948381442297);
    msg.setSource(43368U);
    msg.setSourceEntity(35U);
    msg.setDestination(36203U);
    msg.setDestinationEntity(202U);
    msg.sessid = 3193779374U;
    msg.messages.assign("ILDDCOSFYNUVSOPRSHZZUSNAFAQLXVEQDPNVTKLTPLPXFLAMBMQZMXMBMJTACCICBNJHVQWNSBLYBNOPEARMQQWKXOOHKTLSZAKBQF");

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
    msg.setTimeStamp(0.7265040437884742);
    msg.setSource(11530U);
    msg.setSourceEntity(209U);
    msg.setDestination(27100U);
    msg.setDestinationEntity(152U);
    msg.sessid = 2753020493U;
    msg.messages.assign("XSTXYRPBRGJRUZCVTFHMUENAKBDDWRVBKD");

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
    msg.setTimeStamp(0.5907776051153526);
    msg.setSource(48382U);
    msg.setSourceEntity(229U);
    msg.setDestination(62161U);
    msg.setDestinationEntity(94U);
    msg.sessid = 1211909050U;
    msg.messages.assign("UNTZNKVJQLZRXMQBLGKMVENXHCPRWSZRFKCVHSEDTEZQEDXLYABYPTOJNKUARVWEJHYAMJBBDIMIPDEULEGVKJEMNQUOWLVWUZMFFLCPASIIBNXVQQWRATIKAQHFPBXMZMIGKSZEIBLYSDNNORCOLJAVODPBVBGLXTRTYKUJVSFZIHUUAQOKIPJQAPYFWYUCTZXNWWCGMTCAGDTPSHXGTFBSXXOIWURJMYCSRHR");

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
    msg.setTimeStamp(0.028909502598256087);
    msg.setSource(24665U);
    msg.setSourceEntity(62U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(151U);
    msg.sessid = 2240795003U;

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
    msg.setTimeStamp(0.5191871513857607);
    msg.setSource(2463U);
    msg.setSourceEntity(202U);
    msg.setDestination(4220U);
    msg.setDestinationEntity(246U);
    msg.sessid = 3445351288U;

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
    msg.setTimeStamp(0.45629563847729004);
    msg.setSource(46875U);
    msg.setSourceEntity(140U);
    msg.setDestination(21258U);
    msg.setDestinationEntity(177U);
    msg.sessid = 3580304664U;

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
    msg.setTimeStamp(0.728148033510759);
    msg.setSource(28100U);
    msg.setSourceEntity(146U);
    msg.setDestination(815U);
    msg.setDestinationEntity(46U);
    msg.sessid = 284875020U;
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
    msg.setTimeStamp(0.5962217669657909);
    msg.setSource(37267U);
    msg.setSourceEntity(222U);
    msg.setDestination(35408U);
    msg.setDestinationEntity(3U);
    msg.sessid = 1240949221U;
    msg.status = 30U;

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
    msg.setTimeStamp(0.0827276765799515);
    msg.setSource(65267U);
    msg.setSourceEntity(204U);
    msg.setDestination(17936U);
    msg.setDestinationEntity(191U);
    msg.sessid = 744468042U;
    msg.status = 75U;

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
    msg.setTimeStamp(0.2734481162147837);
    msg.setSource(17761U);
    msg.setSourceEntity(21U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(51U);
    msg.name.assign("LXLJGNKXXYKCLZWEDVHTLJOOAKWWFMUCAVSLGRMMECDISMJWBIFDNUVUPZLBLIWQGPFGFHEQNZVUWBDNTZAKRPVZVVPMLTZOSFRCEAPOBSXXWTRDIECKBXQKIHJGARUHHZMFCYHJYWGARCKQHDYXXTFTKCOEGHYCQFDAIMJIJPVNXROGPNQSAKQTBIJSMSQYGFNBPZZUBMUBVEIYKPRNZRRS");

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
    msg.setTimeStamp(0.9246650811534113);
    msg.setSource(21828U);
    msg.setSourceEntity(67U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(115U);
    msg.name.assign("KSNTROGHWMWNRXCQDGUNOAWOKVQLLHJUUJMQFMPJPVRAILLQEOIYRJGRHSVGNDKMIUTNXLCMOYDFHWNUDSIOZCWRCBFEDCXEGMYIZAO");

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
    msg.setTimeStamp(0.5053736922822595);
    msg.setSource(61135U);
    msg.setSourceEntity(137U);
    msg.setDestination(38267U);
    msg.setDestinationEntity(38U);
    msg.name.assign("MWVFAPPJRICJYSTELVKJMPJVDSTCOZSWUCKDHWDRZYROHDPTTRTIQDSMPDOXGTUELHKKALKFBYCEHLOMRBZNJBWOXKZNZZFGCZEZGCLWXCEDDUFUOENXIXVAJDCBYWBLNEEGCYRVBQTBQKWXXYPTFGSNPHOSLERPMGYBQGSLSUMCFSHVIRAAQORMLEFWIAGAIHQJNIGKAZAKYZUHOBLJUNOIPNVYNDVNXJFYIIRGJUUQWQUFSKXQTBVTMHHPM");

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
    msg.setTimeStamp(0.27488297814769336);
    msg.setSource(50435U);
    msg.setSourceEntity(114U);
    msg.setDestination(61603U);
    msg.setDestinationEntity(56U);
    msg.name.assign("ACNCMQRSDRFSPVEIPBLSXZSZIXFMYRTAOPSBQGHAJUIVKCWSTJNFBBZHDAIDVFLYCWWPOMPYNPPINLKCBFTOBMKZVOOYLMEEYLLIFSFVPSZGIVDLZRJOEAJOHMDGACWTATNITKWVCBUEQCKFQUZHKEASEINXUWQDXVXKTHRXSNKUWDGZJYKMOQJNHFYUMLGNQXACPERHIWGGKOQCBEJLJYGXJDAEURZQDYTOTFBDXJHXBWGZUWV");

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
    msg.setTimeStamp(0.30521848531601337);
    msg.setSource(1945U);
    msg.setSourceEntity(218U);
    msg.setDestination(52328U);
    msg.setDestinationEntity(44U);
    msg.name.assign("LVKGKCMPTJHZCFRLHXYNFOOQBBEXFSZAYSEVTSIOZQNUWDYXJTEOXJZRSFCDVWBKIWSCZAALGQUPCIDTPGBIEDAKQMUXRZWCASLQFXLPNBGFSFVVNNERHOYIDOJKWOPWRNPQRXYZENMWOPRNJDVYVUESBHIMNRMXWCHAZVLMPCFMYUITGSUJAGVJPDIJOGGLMUYDDJBRUFJTCKLLXHV");

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
    msg.setTimeStamp(0.12887079798078216);
    msg.setSource(64681U);
    msg.setSourceEntity(152U);
    msg.setDestination(39999U);
    msg.setDestinationEntity(16U);
    msg.name.assign("THRBQTDGVYYRWMRBFMYXQBAHAWZPTNQJVDYRMAGVKSKPQFHPAECHJUKQEBVKNAYSOOWPZUKTSJHQXZXXHLUFSCLOEGLOTNJBJPGQQKOZJBWNSPPOJACWICQYZNPAMIMEPDTSRMLFTFKIYAVWDCDDVTBRHENYUGICDXIBYSJMEFFHVLLOIUDMRLKVV");

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
    msg.setTimeStamp(0.7415585513449923);
    msg.setSource(48685U);
    msg.setSourceEntity(31U);
    msg.setDestination(1524U);
    msg.setDestinationEntity(234U);
    msg.type = 134U;
    msg.error.assign("ILZLCNGKAJXYIYPSBOTZQYLTZEHDWWSPHMAJCICRWGHIMFLEUVQCYXRFJICAZKOVXDYYNMXRXVLJWPDPIENEBAMO");

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
    msg.setTimeStamp(0.029345468547866238);
    msg.setSource(29003U);
    msg.setSourceEntity(157U);
    msg.setDestination(20818U);
    msg.setDestinationEntity(242U);
    msg.type = 144U;
    msg.error.assign("GGNTJQFMYEFCRVTOHQELDBEFUXCERHZHVHLSQYFLBOPDMGXTBWNIFFSTVLLPHLRWNVPJWLUTIKTEKUNQGBRSDIDDOKYVYGJSPLAFMVROWQIMQMXIDXESYZQUAMWIISKAPWGKBQUFJUHXEPTCXCPCPCJSZRCXNVKARDMDKSVBKBGGJHLUKEIYAJGZCMRTQOTHZCHTAZWRJODWYS");

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
    msg.setTimeStamp(0.3579498331994213);
    msg.setSource(38065U);
    msg.setSourceEntity(194U);
    msg.setDestination(33296U);
    msg.setDestinationEntity(163U);
    msg.type = 50U;
    msg.error.assign("VFNBZIRBCZVIMYGGJDYKJKYBAHISQFLJWUBVVTGILUSGZXVQQSITTDMVRSQHVCBKKHA");

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
    msg.setTimeStamp(0.31470260218760304);
    msg.setSource(57749U);
    msg.setSourceEntity(131U);
    msg.setDestination(63846U);
    msg.setDestinationEntity(171U);
    msg.seq = 61986U;
    msg.sys_dst.assign("DHLDIEVCXCMAWYRSAKFDFMEXPYGVLWFQHTAEQBJGGOCANNZCZIVYMUDNWFXLCJEWUXYJ");
    msg.flags = 213U;
    const char tmp_msg_0[] = {68, 51, 58, 70, 40, -59, 14, -115, -24, -112, -21, -11, -78, 40, -85, -49, -108, 30, -47, 104, 76, 95, 21, -34, -33, -97, 37, 51, -110, -66, -67, -77, -31, -54, 82, -17, -117, -108, 100, -69, -23, 71, 66, 21, 60, -123, 26, 26, -123, -114, -32, 57, 46, -18, -58, 123, -45, 102, -112, 54, -33, -16, 4, 56, -100, 24, -76, 22, -62, -65, -10, -50, 86, 81, 19, -118, 60, -6, 100, 32, -105, 56, 38, 102, 40, 15, -58, 124, 33, -96, -126, -97, 108, -84, 125, 50, -128, 30, -93, 34, 91, 76, -98, 27, 18, 11, 51, -123, 109, -123, -55, -80, 108, -46, 18, 104, -114, -6, 96, -17, -64, 46, -75, 115, 49, -127, -61, 121, -53, -17, 30, 9, 91, -78, -122, -112};
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
    msg.setTimeStamp(0.8499039476210785);
    msg.setSource(29827U);
    msg.setSourceEntity(104U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(133U);
    msg.seq = 16379U;
    msg.sys_dst.assign("UFXNHDXBDRNXZFDVGWQWYMZOGYZLPPLTKZDMENQDOXNKUGBBAIAZYOAQWFMCEUSVVKNZALTORPEXZGSCSWLVGJSOIMMKWXWCLJTQXYJUDSJFEM");
    msg.flags = 50U;
    const char tmp_msg_0[] = {58, -44, -2, 23, 8, 100, -96, -78, -77, -38, 71, -97, 79, -76, 97, -4, 10, -102, 103, -101, 121, -98, -36, -72, -35, -48, -12, -79, -75, 117, -50, -64, 101, -3, -82, -128, -51, -32, -65, 110, 77, -87, -31, -91, 109, -118, 49, -20, 111, -111, 39, 74, 8, 92, -72, 8, -35, -17, -35, -85, 97, -16, -25, -127, 40, 46, 25, -54, 18, 7, -45, 1, 9, -115, 104, 39, 14, 83, 83, 123, 88, -49, -38, 111, -123, -82, 89, 56, 9, 3, 22, -58, -15, -50, 105, 86, -13, 116, -63, 83, 5, -11, 39, 4, -53, 29, 77, -80, -40, -87, -14, 24, -96, 120, -80, 126, -23, -49, 21, -1, 105, 97, 118, 26, -84, -29, 113, -97, 40, -122, 74, -23, 58, -17, -38, -11, 58, 44, -9, -26, 93, 22, 7, -50, 45, 109, 29, 94, -43, -96, -109, 33, -27, -83, -59, 31, 5, -38, -15, 2, -13, -39, -100, 0, 62, -59, 72, 78, 23, 119, -42, -50, -101, 81, -35, -31, 108, -82, 11, -87, 79, 34, 17, 85, 117, -13, -108, -7, -93, -18, 82, 12, -18, 5};
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
    msg.setTimeStamp(0.374073043955617);
    msg.setSource(48572U);
    msg.setSourceEntity(252U);
    msg.setDestination(12645U);
    msg.setDestinationEntity(173U);
    msg.seq = 30675U;
    msg.sys_dst.assign("KKAETATTHURGCHZZFBVOSQPVURHICHCWJUTBVGDKVDXSEFNOAIDJFLRJDYWLJQNBVHXEXSWBSXEICNOVNHCJPSXWRRPUXAFZLRFEZXAMYZXFGGYNCNJKIFRWBSOBTFSXTYYBUMCFMMUKPUMEDWZVLKGAOVTHAHOHGSZNKIZBNICLMGPXGFHJROMQW");
    msg.flags = 65U;
    const char tmp_msg_0[] = {18, -37, -30, -127, 111, -93, -67, -8, 125, 64, -108, 67, 72, 55, 80, 82, 6, -96, -110, 27, 81, -46, 63, -12, 1, -110, 124, -102, -30, 73, -115, -18, 96, 52, 105, -83, -73, 74, -34, 20, 51, -23, 122, -61, 19, -75, -125, 26, -57, 19, 2, 78, 86, 50, -81, -49, -126, 40, 36, -5, -124, 80, -22, 72, 80, 66, 13, 79, 78, -47, -74, -96, 57, 4, -75, 59, 55, 105, 108, 15, 106, 87, -52, -24, -111, -18, 119, -76, -92, 86, -32, -24, -75, -46, 124, -60, -51, 126, -38, 119, -78, -122, 75, -28, -19, -87, -80, -14, -114, 12, 6, 51, 110, -112, -122, 9, -119, 34, 102, -84, -56, -46, 54, 32, -76, -99, -49, 17, 91, 80, 30, -81, 11, -100, 42, 82, -108, -77, 74, -50, -63, 82, -109, -102, -94, 115, -5, 2, -86, 101, -90, 40, -11, 58, -3, 3, -113, 29, -9, 84, 36, -77, 32, 21, -21, 42, -97, -80, 86, 67, 70, 67, 75, 85, -18, -56, -63, 5, -69, 28, -19, -39, -16, 60, -118, 45, -21, 52, 41, -81, 27, -39, 69, 120, -41, -38, -7, -122, -24, -62, 118, 51, 13, -24, 15, 84, -123, -85, 96, -38, 86, -35, -31, -30, -52, 35, -86, -66, 3, 101, 103};
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
    msg.setTimeStamp(0.8704551826045436);
    msg.setSource(13159U);
    msg.setSourceEntity(200U);
    msg.setDestination(4165U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("CEBEHTXTKDUQTFESHZMCVSKFGVKYNQIOPJKQZHDRQVJGIFXRQWAAFIMSR");
    msg.sys_dst.assign("ZJQKKDRHMNGZYJEIREXANOCUCDWOWQGYVCGNNSPHNMXLZRN");
    msg.flags = 48U;
    const char tmp_msg_0[] = {13, 110, -39, -31, 95, 33, -115, 77, 0, 72, -39, -115, 87, -69, -6, -11, -34, -100, -92, -51, 112, -35, 107, 94, -52, 96, -11, -71, -45, -102, 27, -47, -88, -45, 16, 117, -20, 23, -109, -35, -22, -27, 108, 112, -1, 58, -11, 35, -126, -117, 117, 2, -4, -90, -78, -51, 119, -27, -57, -27, -16, -68, 22, 29, 79, -124, -97, -120, -71, -55, -98, -111, -27, -110, 59, 15, -114, 22, -17, -20, -30, -90, 84, 80, 99, 80, -70, -2, -39, -111, -11, 100, -112, -118, 87, 61, -36, -121, 85, 3, 91, -89, 64, 80, -119, 91, 92, -18, -113, 69, -56, 39, 13, 109, 124, -31, -124, -78, -54, 48, -125, 34, 77, 97, -76, 71, 6, -100, -11, -73, -86, -32, -69, -100, -47, 68, -61, 56, -54, 72, -126, -42, -107, -81, -43, 45, -117, 46, -21, -39, -57, -60, -100, 59, -3, 31, -75, 50, -123, -111, 28, -5, 109, 119, 114, -118, -21, -74, -43, 89, 53, -2, -25, 13, -73, 42, 0, -39, 93, 98, -79, -75, 60, -47, 36, 117, -39, -15, -59, 19, 6, 69, 30, 93, -88, -42, -1, 34, 80, -12, 96, -63, -115, -12, 26, 36, 106, -96, -122, -76, -66, 55, 14, -13, -31, -24, -85, -74, -107, 8, 60, 89, 6, 64, 49, 78, 61, -101, 22, -31, 110, 70, 8, 105, -122, -87, -39, 67, 21, -118, 108, -109, 109, 3, 100, 57};
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
    msg.setTimeStamp(0.6971359166968334);
    msg.setSource(52098U);
    msg.setSourceEntity(67U);
    msg.setDestination(22263U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("VDBZOGQXBTURJJAYEXFJOFRJPBZLWISYRVQJWYJLOVKEXYNGMPRIFUSKSHCMCRAYGZZQCLGNEHTSVGAR");
    msg.sys_dst.assign("PTKDMQPDHQNZBKYSWNUZCHLWTYGCBMPOHGCPHIMHDMHQSTTNUQAZYKVBRGTXEZPDXEIYZGPVFWKUEXLVIOSRRNAEMKQQZKEEFRSVGIXPWISIIHNAVJMXOBNFJWFJTJBCNXOLAQOAUFJHSCSVODJUSFESOUCRGXEEFCMO");
    msg.flags = 3U;
    const char tmp_msg_0[] = {70, -94, 1, 45, -81, 11, -115, -31, -97, -113, -60, 57, 48, -74, 106, 118, -94, 0, 10, 75, 60, -59, 16, 53, 68, 13, 102, -88, 5, 114, -105, 6, 94, -86, -20, -64, 113, -46, 80, -3, 5, 62, 29, -75, -102, -85, 110, 33, -16, 40, 105, 95, -83, -47, -33, -36, 109, 50, 107, -19, -58, 67, -83, 62, 117, -39, -81, 50, -67, 7, 100, -8, 34, 12, -127, 17, 88, -23, -90, 58, 75, 106, 94, -10, 15, 101, 117, -116, -7, -48, -37, 23, 40, -105, 5, 85, 45, 44, -72, -75, -92, -75, 46, 110, -51, -54, 33, -21, 115, 5, 49, 78, -31, 121, 57, 26, 33, 8, -109, -114, 108, -27, 44, -52, 90, 14, -25, -110, 16, 1, -97, 80, -56, -34, 87, -70, 97, 109, -44, 113, -110, -56, 58, 90, 45, 43, 116, 66, -51, -23, 10, -28, -101, 99, 122, 112, 73, -114, -65, 59, -80, 120, -119, 76, 95, 73, 120, 31, 11, -52, 39, -67, 56, -44, -101, -80, -81, -102, -87, -54};
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
    msg.setTimeStamp(0.8662101801833424);
    msg.setSource(51297U);
    msg.setSourceEntity(63U);
    msg.setDestination(27050U);
    msg.setDestinationEntity(205U);
    msg.sys_src.assign("SMIUQBNFXHL");
    msg.sys_dst.assign("VEPOQSZUYMBWOCSQYGRDMTXGAGKZLWKZFXXAVDFRTKYUGNLNNDMTCPBFNOUVDHVTTTZPDYUJUOAYCWGIKGHBCXHUVSOJMDVFRJQHWBFXYLWBHPFKOWQJTFPECAOFUISDQURDHFRVJIRRCORTJRZJBTIJYYIEHIBASMSLPMZLNVAEWISANAAASZMEWXUCGI");
    msg.flags = 210U;
    const char tmp_msg_0[] = {114, -36, -17, 62, -43, -94, 80, 37, -51, 70, -6, 113, -20, 90, -27, 40, 122, 36, -108, -82, -119, -38, 13, -1, 23, 104, -67, 89, 62, -44, -34, -25, 32, -58, 85, -99, -58, -125, -105, 41, -54, -43, -74, 108, -13, -91, 111, 36, 81, -107, 61, -92, 3, -79, -127};
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
    msg.setTimeStamp(0.3803548688848589);
    msg.setSource(34843U);
    msg.setSourceEntity(118U);
    msg.setDestination(1180U);
    msg.setDestinationEntity(178U);
    msg.seq = 33844U;
    msg.value = 153U;
    msg.error.assign("ZUKORDEFCYLETOFXLWIJCFYFTQZPVNKHQGZYARNVQUFSPNPSPEJIARGABVHBRLEGPXGOXXKQPDGCTDQMXOBRXCNEIHANHJSLNNLKFHRWAWKVSEFZYJLIKQDTFQDUCOVEINMPESUDRMYAZFMPWHRVCKGTBYMEXBZNHJIMKTGMHJRSJTEJAYVWXUZVADZBUVOUSBPVADCXNTLYLMOBQWAKMIYJGKDIPOIHSTCGWHBBYG");

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
    msg.setTimeStamp(0.3168207030250303);
    msg.setSource(6960U);
    msg.setSourceEntity(11U);
    msg.setDestination(58462U);
    msg.setDestinationEntity(113U);
    msg.seq = 10197U;
    msg.value = 143U;
    msg.error.assign("PYZWHASBAZLXRLNSQLVSPPYQQCAVCXJQPDYAJUQQSNKLJITOAJXGUVEOVDXBMKYSKKANXAFFIRXDBTGVGTGDUAHBCWELLAYCBFEHHLFPVBMISFHHOKTJJYOGEHBIRJEDSMCNVSDEUEWADZVXWERTDMNIEQOURJMBQMWSXWZLMIWQWZCJOUYBRMGKZCMDUHUM");

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
    msg.setTimeStamp(0.9238139964910138);
    msg.setSource(59852U);
    msg.setSourceEntity(131U);
    msg.setDestination(28163U);
    msg.setDestinationEntity(222U);
    msg.seq = 17272U;
    msg.value = 92U;
    msg.error.assign("DRJMNTOMWADZKIGRRPHNWPVZAHGZZRVWSOFQYBUUZSQCNFUF");

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
    msg.setTimeStamp(0.09978704519672432);
    msg.setSource(48530U);
    msg.setSourceEntity(4U);
    msg.setDestination(29987U);
    msg.setDestinationEntity(6U);
    msg.seq = 16439U;
    msg.sys.assign("PMUDBWIHZITOFDQEBKUUENRAFQEGFAPLJONWSDLUDXLROWPYYDYRKLMOADXPGCVJMBFNRDZZYKFCFCJGDXTZHP");
    msg.value = 0.13529835660362333;

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
    msg.setTimeStamp(0.7008280752477282);
    msg.setSource(31782U);
    msg.setSourceEntity(138U);
    msg.setDestination(60633U);
    msg.setDestinationEntity(190U);
    msg.seq = 23545U;
    msg.sys.assign("TMNPNOQRVODELKKNYTFFFFNUWMGWDUJTBJHGE");
    msg.value = 0.976947629387693;

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
    msg.setTimeStamp(0.2029595323947423);
    msg.setSource(51997U);
    msg.setSourceEntity(17U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(211U);
    msg.seq = 19546U;
    msg.sys.assign("JHSHDRRIEWPQBFJUCWKKUMSHJLVBTMVAWNXYHEFTETHFUYUXAEAQZZSINIMYBROWPDCGPGRKNDOVYXSNWMBGFDAFYPZTSOJTHJYJUHBWOJGBQUAYOURFYZWBDNGIRSCEADQOWRTYJVCTYUVOEAMIWTBRFMEOMNHLHGQSHIUZQCWGLFNNXQSGSTLKPJKZLZKACPCQBALXPKINBVSXKZPIXOGITMFIRCZCKVQEMD");
    msg.value = 0.8619824442519989;

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
    msg.setTimeStamp(0.6225300962275111);
    msg.setSource(33184U);
    msg.setSourceEntity(203U);
    msg.setDestination(12846U);
    msg.setDestinationEntity(12U);
    msg.action = 37U;
    msg.longain = 0.32014995859906104;
    msg.latgain = 0.1229576625423986;
    msg.bondthick = 2541278923U;
    msg.leadgain = 0.6019478586486264;
    msg.deconflgain = 0.5230731438670688;

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
    msg.setTimeStamp(0.7965831764634614);
    msg.setSource(16889U);
    msg.setSourceEntity(185U);
    msg.setDestination(24051U);
    msg.setDestinationEntity(185U);
    msg.action = 103U;
    msg.longain = 0.6812067827554723;
    msg.latgain = 0.4128678686480879;
    msg.bondthick = 2897474606U;
    msg.leadgain = 0.5120423975567695;
    msg.deconflgain = 0.6880755475443816;

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
    msg.setTimeStamp(0.14419124924410964);
    msg.setSource(29688U);
    msg.setSourceEntity(102U);
    msg.setDestination(59434U);
    msg.setDestinationEntity(182U);
    msg.action = 210U;
    msg.longain = 0.8726749205526096;
    msg.latgain = 0.42061031211570576;
    msg.bondthick = 2669334358U;
    msg.leadgain = 0.7418332614213283;
    msg.deconflgain = 0.5003996291639616;

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
    msg.setTimeStamp(0.26385779111984575);
    msg.setSource(48346U);
    msg.setSourceEntity(198U);
    msg.setDestination(52428U);
    msg.setDestinationEntity(248U);
    msg.err_mean = 0.9793622462951804;
    msg.dist_min_abs = 0.7299090958526868;
    msg.dist_min_mean = 0.8787601568328346;

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
    msg.setTimeStamp(0.5403648650311257);
    msg.setSource(34981U);
    msg.setSourceEntity(71U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(34U);
    msg.err_mean = 0.4555255258541375;
    msg.dist_min_abs = 0.890198869879635;
    msg.dist_min_mean = 0.5783743456170882;

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
    msg.setTimeStamp(0.8823036036010908);
    msg.setSource(15010U);
    msg.setSourceEntity(113U);
    msg.setDestination(60044U);
    msg.setDestinationEntity(143U);
    msg.err_mean = 0.12289990594975075;
    msg.dist_min_abs = 0.7398346106907286;
    msg.dist_min_mean = 0.9420541706323734;

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
    msg.setTimeStamp(0.3499380664738537);
    msg.setSource(63667U);
    msg.setSourceEntity(196U);
    msg.setDestination(45854U);
    msg.setDestinationEntity(157U);
    msg.action = 217U;
    msg.lon_gain = 0.030986449129772775;
    msg.lat_gain = 0.96690245846122;
    msg.bond_thick = 0.7298444629385357;
    msg.lead_gain = 0.6959163989443568;
    msg.deconfl_gain = 0.1387073284329633;
    msg.accel_switch_gain = 0.11554393502287474;
    msg.safe_dist = 0.6443680310684221;
    msg.deconflict_offset = 0.6805495266144549;
    msg.accel_safe_margin = 0.9382041947409188;
    msg.accel_lim_x = 0.7695717497053643;

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
    msg.setTimeStamp(0.12575454966645505);
    msg.setSource(43362U);
    msg.setSourceEntity(144U);
    msg.setDestination(24749U);
    msg.setDestinationEntity(74U);
    msg.action = 87U;
    msg.lon_gain = 0.5069298252604378;
    msg.lat_gain = 0.2238270162499919;
    msg.bond_thick = 0.8405069620793848;
    msg.lead_gain = 0.18432941238103806;
    msg.deconfl_gain = 0.07972145816133369;
    msg.accel_switch_gain = 0.4150061744042781;
    msg.safe_dist = 0.7270988411606131;
    msg.deconflict_offset = 0.6029649127245297;
    msg.accel_safe_margin = 0.6162667849560177;
    msg.accel_lim_x = 0.3217536557956977;

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
    msg.setTimeStamp(0.41184093046537884);
    msg.setSource(61080U);
    msg.setSourceEntity(191U);
    msg.setDestination(61159U);
    msg.setDestinationEntity(93U);
    msg.action = 74U;
    msg.lon_gain = 0.5096433379754692;
    msg.lat_gain = 0.570456700272967;
    msg.bond_thick = 0.6070231029904385;
    msg.lead_gain = 0.271721419303654;
    msg.deconfl_gain = 0.01969572654308538;
    msg.accel_switch_gain = 0.9130495439037063;
    msg.safe_dist = 0.4970781581068564;
    msg.deconflict_offset = 0.01682141206253729;
    msg.accel_safe_margin = 0.9718556224148249;
    msg.accel_lim_x = 0.33370238861775847;

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
    msg.setTimeStamp(0.6190503198872008);
    msg.setSource(17009U);
    msg.setSourceEntity(52U);
    msg.setDestination(8338U);
    msg.setDestinationEntity(31U);
    msg.type = 64U;
    msg.op = 131U;
    msg.err_mean = 0.8066944402350362;
    msg.dist_min_abs = 0.8520237395459467;
    msg.dist_min_mean = 0.17965311512867543;
    msg.roll_rate_mean = 0.9079391384742289;
    msg.time = 0.5861130227651578;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 20U;
    tmp_msg_0.lon_gain = 0.667327900912637;
    tmp_msg_0.lat_gain = 0.24564935687072165;
    tmp_msg_0.bond_thick = 0.9046924799852557;
    tmp_msg_0.lead_gain = 0.7968700211568063;
    tmp_msg_0.deconfl_gain = 0.8710311866293008;
    tmp_msg_0.accel_switch_gain = 0.9009547233445677;
    tmp_msg_0.safe_dist = 0.6205181518752593;
    tmp_msg_0.deconflict_offset = 0.9568312401204666;
    tmp_msg_0.accel_safe_margin = 0.6179768175963616;
    tmp_msg_0.accel_lim_x = 0.5351370509243839;
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
    msg.setTimeStamp(0.3700262897756541);
    msg.setSource(61287U);
    msg.setSourceEntity(228U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(228U);
    msg.type = 20U;
    msg.op = 71U;
    msg.err_mean = 0.5652178405038403;
    msg.dist_min_abs = 0.2346470218742177;
    msg.dist_min_mean = 0.8605932778898817;
    msg.roll_rate_mean = 0.7581322021934819;
    msg.time = 0.024205273528512983;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 3U;
    tmp_msg_0.lon_gain = 0.5478138006685016;
    tmp_msg_0.lat_gain = 0.7262548570470937;
    tmp_msg_0.bond_thick = 0.44341553068010686;
    tmp_msg_0.lead_gain = 0.876201981789786;
    tmp_msg_0.deconfl_gain = 0.31488206902362903;
    tmp_msg_0.accel_switch_gain = 0.14084764275501294;
    tmp_msg_0.safe_dist = 0.7683312574490412;
    tmp_msg_0.deconflict_offset = 0.282343393364734;
    tmp_msg_0.accel_safe_margin = 0.43447301972940233;
    tmp_msg_0.accel_lim_x = 0.21872818386793424;
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
    msg.setTimeStamp(0.48049108730056245);
    msg.setSource(55385U);
    msg.setSourceEntity(17U);
    msg.setDestination(43166U);
    msg.setDestinationEntity(187U);
    msg.type = 233U;
    msg.op = 15U;
    msg.err_mean = 0.673078906118997;
    msg.dist_min_abs = 0.6357834215242599;
    msg.dist_min_mean = 0.3726837077414129;
    msg.roll_rate_mean = 0.36986250184763125;
    msg.time = 0.6899228546794717;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 137U;
    tmp_msg_0.lon_gain = 0.744391259104565;
    tmp_msg_0.lat_gain = 0.37824303187230723;
    tmp_msg_0.bond_thick = 0.953999897123058;
    tmp_msg_0.lead_gain = 0.07808170858245411;
    tmp_msg_0.deconfl_gain = 0.9246018026328175;
    tmp_msg_0.accel_switch_gain = 0.9213388749571679;
    tmp_msg_0.safe_dist = 0.26363023360403415;
    tmp_msg_0.deconflict_offset = 0.22577665052821838;
    tmp_msg_0.accel_safe_margin = 0.4192661600878398;
    tmp_msg_0.accel_lim_x = 0.12924388738936743;
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
    msg.setTimeStamp(0.7251601803545252);
    msg.setSource(3818U);
    msg.setSourceEntity(21U);
    msg.setDestination(31976U);
    msg.setDestinationEntity(203U);
    msg.uid = 26U;
    msg.frag_number = 111U;
    msg.num_frags = 215U;
    const char tmp_msg_0[] = {73, -31, -67, 11, 106, -123, 98, -40, 18, -24, 43, 67, 67, 6, 109, 5, -6, -72, 76, -40, 97, 98, -100, 93, -67, -13, 97, 108, 120, 10, -37, -4, -11, 64, 77, -111, -85, 28, -52, -118, -109, 116, 100, -65, 109, 105, 114, 11, 44, -25, -115, 67, 116, 41, -52, 73, -128, 38, 86, -64, -23, 4, 23, 79, -84, -60, 21, -123, -128, 95, 66, -104, 68, -97, -52, -101, 94, 66, 98, 1, 43, -97, 88, 47, 110};
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
    msg.setTimeStamp(0.17288445541382358);
    msg.setSource(30868U);
    msg.setSourceEntity(214U);
    msg.setDestination(56596U);
    msg.setDestinationEntity(128U);
    msg.uid = 228U;
    msg.frag_number = 95U;
    msg.num_frags = 9U;
    const char tmp_msg_0[] = {104, 63, -108, -18, 72, 1, 109, 65, 124, 57, -103, -6, -19, -38, -79, -110, 19, 115, 45, -10, 46, -86, 78, -105, -33, -77, 62, -51, 77, -44, -111, 7, -11, -104, -63, 56, -50, 31, -117, -77, 23, -87, -46, -117, 76, -125, 67, -98, 46, 31, -95, -112, -78, 112, -99, -27, 85, 11, 12, -40, 56, -81, -53, 7, 85, -104, 23, 94, -66, -29, 9, -35, 45, -15};
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
    msg.setTimeStamp(0.34702373448219215);
    msg.setSource(49963U);
    msg.setSourceEntity(103U);
    msg.setDestination(63802U);
    msg.setDestinationEntity(154U);
    msg.uid = 10U;
    msg.frag_number = 96U;
    msg.num_frags = 121U;
    const char tmp_msg_0[] = {-68, 43, 113, -83, -79, 32, 87, -17, -5, -88, -80, -122, 80, -37, 27, -110, 7, 33, -65, -122, 47, 5, 119, 97, 123, -99, 24, -95, -77};
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
    msg.setTimeStamp(0.547552676122331);
    msg.setSource(52246U);
    msg.setSourceEntity(119U);
    msg.setDestination(528U);
    msg.setDestinationEntity(116U);
    msg.content_type.assign("QXNFQJLUFLHQFCCOSZLCWHDQINGULTYAYYZGQPYJFWUBOWEBXOSXGNVEWTWYJVBUFKENIBUWZOPEMAZXMOCWQVOHULHDUYLDVTMZKLIYZRH");
    const char tmp_msg_0[] = {-43, 107, 74, -71, 102, 26, 80, 86, 103, 104, -50, -74, -33, -67, 80, -48, -17, -78, 22, -102, 9, 7, 46, 9, -47, -19, -10, -94, -120, -77, 33, 108, 4, -93, 43, -21, -33, 109, -82, 105, -125, 54, 6, 114, -79, -72, 105, -76, -42, -101, 95, -60, -1, -106, 118, 36, 37, 44, -116, -7, 95, 50, -111, 125, -52, 125, -120, -30, -55, 34, -119, -25, 66, 63, 118, -73, 99, 107, -10, -7, -2, -94, -114, 75, -104, 76, -27, 50, -8, 19, 69, 47, 111, -61, 58, 124, -105, 122, -121, -92, 87, 45, -40, -23, 10, 87, -63};
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
    msg.setTimeStamp(0.4307964180128886);
    msg.setSource(29450U);
    msg.setSourceEntity(174U);
    msg.setDestination(38734U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("ZWXETGHOTJVDSGANOPPNUBIPTZFLABWFNSUEBXUEMKHMQXMJQEFVOCAUQSSCDZOUCCVLMIUIBAWGACKZXYDYLDRRCTGSJVXPM");
    const char tmp_msg_0[] = {-5, 68, 66, 7, -51, -97, 11, 77, 100, -91, 78, -87, 114, -98, -66, 73, -90, 5, -39, 2, 57, 10, -17, 2, -22, 88, 49, -71, 75, 87, -99, -128, -27, -6, -25, 108, -23, 13, -116, 38, -122, 3, -92, 12, 74, 83, -68, -83, -102, 53, 19, -88, 73, 60, -127, 41, 73, 64, 47, 98, 46, 9, -92, -27, -73, 95, -59, 113, 122, -23, 95, 66, -21, 116, 32, 79, -79, -28, 67, -59, 30, 70, 115, 72, -47, -86, 66, -50, 76, -73, -95, 86, -83, 17, -82, 36, 119, -40, 53, -74, -74, 11, -27, -127, 88, 19, -64, 113, 13, -21, 13, 61, -95, 82, -75, 3, 68, 74, 13, 42, 110, 74, -1, 64, 125, 45, 7, -55, -43, -2, -47, 78, 91, 20, 78, -128, -62, -10, 96, 123, -89, 61, 77, -66, 118, -101, 46, -10, -85, 73, 37, 121, 70, 90, -58, 95, 94, 36, 102, 25, -63, 85, 68, 2, -118, -62, -7, -67, 30, -2, 54, -63, 125, 45, 103, 104, 72, -56, 120, 27, -4, -95, 19, 101, -36};
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
    msg.setTimeStamp(0.677304540615843);
    msg.setSource(12484U);
    msg.setSourceEntity(235U);
    msg.setDestination(55905U);
    msg.setDestinationEntity(47U);
    msg.content_type.assign("FCUENLKOHJGWKQIJHWHEPIH");
    const char tmp_msg_0[] = {75, 121, -44, 34, 27, 113, -115, -27, -4, -91, -98, 86, -3, 62, 17, -41, -76, -76, -42, 123, -5, -77, -27, 50, 16, 73, -10, 57, -113, 9, 53, 100, -94, -23, 9, -65, -30, -100, 51, 62, 125, 21, 18, 85, -85, 62, 53, 52, -98, 77, 85, 60, 103, -70, -29, 50, 20, 101, -57, -110, 12, -123, -125, -117, 22, -57, -24, 8, -91, 64, -27, 66, -115, -11, -42, 10, -27, 116, 71, 50, -79, -1, 58, -88, -100, 91, 12, 24, -100, -58, -2, -28, 72, 66, 86, -2, -40, -111, 106, 88, -109, -56, 12, -105, 30, 4, 40, -109, -3, -1, -37, -47, -112, 52, 56, 26, 18, -13, -24, -86, -105, -31, -36, -6, 59, -67, -36, -66};
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
    msg.setTimeStamp(0.29707534451422213);
    msg.setSource(36394U);
    msg.setSourceEntity(184U);
    msg.setDestination(6177U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.5984904448905517);
    msg.setSource(15573U);
    msg.setSourceEntity(62U);
    msg.setDestination(21786U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.12643289800161261);
    msg.setSource(23790U);
    msg.setSourceEntity(205U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.5467929830937956);
    msg.setSource(44890U);
    msg.setSourceEntity(196U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(109U);
    msg.target = 42721U;
    msg.bearing = 0.4252053969145725;
    msg.elevation = 0.5330319165445241;

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
    msg.setTimeStamp(0.004848119635981529);
    msg.setSource(22745U);
    msg.setSourceEntity(214U);
    msg.setDestination(64357U);
    msg.setDestinationEntity(97U);
    msg.target = 45813U;
    msg.bearing = 0.6723660659049636;
    msg.elevation = 0.5516320414530022;

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
    msg.setTimeStamp(0.3976631146755919);
    msg.setSource(4542U);
    msg.setSourceEntity(51U);
    msg.setDestination(21594U);
    msg.setDestinationEntity(89U);
    msg.target = 25604U;
    msg.bearing = 0.16342449148421656;
    msg.elevation = 0.6298385724615093;

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
    msg.setTimeStamp(0.5208407638957513);
    msg.setSource(14875U);
    msg.setSourceEntity(78U);
    msg.setDestination(20637U);
    msg.setDestinationEntity(101U);
    msg.target = 54587U;
    msg.x = 0.49563476480884583;
    msg.y = 0.3525392306145645;
    msg.z = 0.9854100335766798;

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
    msg.setTimeStamp(0.2723820934021549);
    msg.setSource(3078U);
    msg.setSourceEntity(99U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(147U);
    msg.target = 12931U;
    msg.x = 0.03385119472531395;
    msg.y = 0.9669655698960031;
    msg.z = 0.535123459657002;

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
    msg.setTimeStamp(0.27179668217063535);
    msg.setSource(45985U);
    msg.setSourceEntity(99U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(189U);
    msg.target = 17985U;
    msg.x = 0.9471715053530769;
    msg.y = 0.012822229996737766;
    msg.z = 0.9988228372355803;

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
    msg.setTimeStamp(0.558092533460239);
    msg.setSource(6569U);
    msg.setSourceEntity(56U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(228U);
    msg.target = 31354U;
    msg.lat = 0.7363664814199374;
    msg.lon = 0.7791714455577472;
    msg.z_units = 76U;
    msg.z = 0.09815279405990363;

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
    msg.setTimeStamp(0.16219412465801397);
    msg.setSource(7086U);
    msg.setSourceEntity(72U);
    msg.setDestination(41189U);
    msg.setDestinationEntity(72U);
    msg.target = 6385U;
    msg.lat = 0.9974543454283596;
    msg.lon = 0.23136331245162212;
    msg.z_units = 252U;
    msg.z = 0.611402785156344;

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
    msg.setTimeStamp(0.9896915796413428);
    msg.setSource(34971U);
    msg.setSourceEntity(150U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(190U);
    msg.target = 27298U;
    msg.lat = 0.8299746157472895;
    msg.lon = 0.1349090327135043;
    msg.z_units = 131U;
    msg.z = 0.4258739063534164;

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
    msg.setTimeStamp(0.07080906654342511);
    msg.setSource(17837U);
    msg.setSourceEntity(128U);
    msg.setDestination(7917U);
    msg.setDestinationEntity(46U);
    msg.locale.assign("ARFLNBBVLFQKXFKLWOOEKXELZJKFTEUSSNUCLYWBXIFROEUBMOGKJOUEYXJSWDGDOJBBQAHWADTVVTALPWZPFAEMJIKEARITFCIMZJPDYKBMIEMYIHVNMRHLDSYSXGOJOJTVHTHXGQOZCFRDQXRRBSX");
    const char tmp_msg_0[] = {-70, -25, 88, 47, -120, -32, 27, 110, 41, 76, -57, 2, 118, -39, 124, 27, -104, 103, 72, 46, 0, 100, 118, 16, -55, 50, 107, 116, -82, -84, -48, 120, 61, -21, 78, 73, -99, -25, -127, -86, -31, -81, -17, -35, 112, 53, -7, 89, 79, 19, -59, -60, -76, 29, 44, -123, -95, -99, -72, 66, 88, -45, -103, -95, -5, 94, 104, 67, 47, 24, 91, 2, -39, 35, 55, 111, -58, 122, -119, 0, -29, -51, -100, 63, -39, 93, -9, -91, 79, 76, -49, 76, -23, -22, -56, 72, 42, -30, -42, 105, 119, 110, -37, -117, 33, -67, -88, -34, -49, -31, -127, 79, 60, 48, 75, -101, 121, -17, -19, -89, -85, 7, -41, 124, -125, 3, -6, -18, -53, -17, 77, 60, 14, 17, -80, 17, 67, -8, 116, 48, 72, -31, -108, 39, 65, 5, 49, -119, 89, 126, -89, -109, -21, 7, -106, -57, -6, 70, 44, 58, -38, -83, -73, -15, -119, 24, 107, 106, 117, 39, -3, -102, 100, 69, 56, 63, -99, 114, -45, -113, 31, 13, 99, -121, 76, -104, -49, -96, -22, 94, 111, -125, 41, 70, -7, -124, -67, -64, 124, 63, -4, -78, -104, 55, -63, 12, 60, 12, -126, -67, -125, 107, -86, -127, -107, 84, -71, -117, -124, 80, 102, 48, -76, 83, -13, -82, -9, 38, -48, 25, 53, -81, 30, 77, 89, 69, -58, -127, 76, -114, 104, -26, 40, -115, -55};
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
    msg.setTimeStamp(0.9956125929789582);
    msg.setSource(61859U);
    msg.setSourceEntity(22U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(136U);
    msg.locale.assign("CFZORUUPGPNBSGCFYCELBNZFPVKPJFEIOHYPSRNNMCEMXCJXBZPADXAAWTPCNKAHVIILRSHMAHQQHLJDXWSFZXTFMTJAGQYBUSLAMVODOXJZYGNVQUTMJ");
    const char tmp_msg_0[] = {98, 115, -45, -22, -115, 123, 80, 102, -41, -50, -57, 126, -58, 120, 5, -60, 66, 15, -117, 6, 38, -5, 65, -123, -20, 63, -28, 94, 64, -63, -52, -122, 37, -39, 31, -10, -78, 11, -87, -109, -109, -97, 63, -23, -26, -66, 109, 99, -63, -68, -76, -115, -1, -40, 16, -123, 69, -44, 105, -38, 88, -77, -53, -26, -54, -22, -52, -24, 55, -3, -111, 18, 110, -8, -128, 83, 33, -103, -12, 75, -70, -47, 73, -50, -128, 19, 110, -21, 125, 65, -113, 75, 92, -28, 93, -94, 109, -110, 56, -72, 78, 86, -43, 17, -86, -41, 102, 68, 4, 91, 77, 6, 1, -122, 78, -73, -73, 5, -112, 87, -91, -10, -98, 90, -38, 43, -26, -114, -65, -27, 26, 61, 85, -18, -16, -101, -112, -36, -36, -14, -46, 4, 56, -103, 109, -15, 10, -62, -30, 120, -96, -15, 69, -19, 20, 68, 35, 107, -1, -35, -125, -64, 77, 48, -37, 108, -3, -19, 47, -80, -29, -19, 77, -95, 112, -99, -26, -8, -36, 59, -44, 8, -81, -61, 77, 51, 36, 79, -99, 27, -45, 30, -78, -27, -51, 32, -62, -83, -116, -79, -85, 99, 51, 65, 16, -33, -57, 13, -7, -100, 10, -64, -63, 14, -11, 6};
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
    msg.setTimeStamp(0.9042177202028755);
    msg.setSource(20870U);
    msg.setSourceEntity(75U);
    msg.setDestination(6418U);
    msg.setDestinationEntity(62U);
    msg.locale.assign("IQIYXRJQIOHYMSGCSODLINHXDNWOAMARZFSLFUXYDEQIBNDKJYSPZZVYCZTDHXCSCIDKXJLMARUKJGVVHLJMZPUWEEEQWMUCGVPCGZYLTGMPSPCEFYKFHBBDMAQTVROXPQKNOHJXBHPDVJOOKAURQLNVFHIKF");
    const char tmp_msg_0[] = {-10, -60, -33, 106, 76, 56, 36, -88, 49, 71, -104, 27, 1, 87, -111, 65, 95, -88, 10, -38, 121, -74, -103, 30, -125, 17, 68, -126, -4, -116, 70, -23, 54, -86, 39, -31, -87, -108, 82, -116, -124, 51, 123, 82, -107, 6, 17, -85, 23, 45, 100, 22, -95, 63, -54, 101, 121, -31, -62, -31, 50, -27, -79, -3, -73, -7, -9, 76, -70, -62, -120, -52, 107, -126, 25, -30, 75, -91, 61, -46, 9, 90, -56, 80, 83, 3, 18, 68, -85, -78, 40, -38, -117, 121, -23, -118, -70, 76, -63, 75, 99, -47, -31, 46, 76, 113, 50};
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
    msg.setTimeStamp(0.6979457492269595);
    msg.setSource(57592U);
    msg.setSourceEntity(236U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.351756077090297);
    msg.setSource(6804U);
    msg.setSourceEntity(73U);
    msg.setDestination(64240U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.7884038350729939);
    msg.setSource(2220U);
    msg.setSourceEntity(247U);
    msg.setDestination(9018U);
    msg.setDestinationEntity(176U);

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

  return test.getReturnValue();
}
