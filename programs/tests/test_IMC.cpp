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
// IMC XML MD5: 039d5331842e120ccba019e00d9e3b75                            *
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
    msg.setTimeStamp(0.03838841973438878);
    msg.setSource(51015U);
    msg.setSourceEntity(251U);
    msg.setDestination(49791U);
    msg.setDestinationEntity(106U);
    msg.state = 77U;
    msg.flags = 178U;
    msg.description.assign("RUSTYIVYUSUEWOOLMEEDNMDPXOBZFNKJEPJYIBCOZVMRQPYCVFSDPQHUTRBLDVNMDGEIEJGXHEWNGZMRGTZQSMWFQZZAAAHKNLLIAFKAKXMKSRNTSCGJVJLNYRIPCCPLEVAQWDHLHSFGDBOHSVOXKRMTLBTZLXKERFIPIDOUWGXJHN");

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
    msg.setTimeStamp(0.19817234883934243);
    msg.setSource(16618U);
    msg.setSourceEntity(136U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(31U);
    msg.state = 31U;
    msg.flags = 191U;
    msg.description.assign("GVHSJRAEJTVENPYLAQPOGGXMFQCVXIFQMWSDQFQKTJ");

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
    msg.setTimeStamp(0.6168437496923499);
    msg.setSource(19632U);
    msg.setSourceEntity(143U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(195U);
    msg.state = 167U;
    msg.flags = 47U;
    msg.description.assign("JDGCDGPBNCIQZOUTQTNMURUHQXZZYCUWTHPKSBSIITOKGYECUCEDOERMQEEZYXFXOVMQALWBIYCWPWXVCKWWYABMGZCVMSXWAASKNIBGSXDSJYHHEUMPZHTPHGKDKLNSMVASQOPZJEGNRATHJTQFVNRDNUMZFINTTDLFDFJNISVVIJGBYDYXDQRMAPLLIXLFKLFVOOJCLATZMJFHQXEUYGKWKFFYOQJSKAOHRJNVOEPHUCVPBEW");

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
    msg.setTimeStamp(0.6717261506689705);
    msg.setSource(21996U);
    msg.setSourceEntity(150U);
    msg.setDestination(10674U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.9466630463941873);
    msg.setSource(25945U);
    msg.setSourceEntity(155U);
    msg.setDestination(65530U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.6287188532157852);
    msg.setSource(45700U);
    msg.setSourceEntity(168U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.09409512194706804);
    msg.setSource(27236U);
    msg.setSourceEntity(22U);
    msg.setDestination(57441U);
    msg.setDestinationEntity(75U);
    msg.id = 146U;
    msg.label.assign("IJOUNWXLWHCRQZARUUHMMQVLAPVBXBDYKVRPEFJCZFEBJTGDCLPGEGMAIKJQFUDHKRCTDDOJWZIHTFYLNNZXKSTZACDXUKRHDOOBQUVTNPPVHSNPIPWLQANIAMGZVULSAQASGLEWNKOTFICFKNXOGPFQUZEEJOAJWJETMEXSEYZTFEZMCYRTHSGYCRYHCBPWBUWSKHQIBYHMRBMJDWSLBSCKGYRVIQM");
    msg.component.assign("GQSKOVKLWTBPPQOXJGNKUXJVDMVEKDGZZFDCENSKUDAFAAHBEQDHXVLUMNWWBPUZZTTSFCIYQTLRORYWSZPTBUAYQGYQQAKQPEICZPNRSOSTHXRMFDDZZGVIXRDMJHUZXLJIWHBFHCVYLMEQHKKFUXCJPMTXAWPMJSCI");
    msg.act_time = 44835U;
    msg.deact_time = 14276U;

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
    msg.setTimeStamp(0.15294322289480933);
    msg.setSource(9580U);
    msg.setSourceEntity(121U);
    msg.setDestination(43408U);
    msg.setDestinationEntity(44U);
    msg.id = 99U;
    msg.label.assign("TLJHLMPNIYWGBIAUSEVOVBYGPSJXKMLPHKVVDHKYOVQNMJKDTJFBGQGZPTBSWSLCTNFWZHHNPMSIDRXAKUJYUKEQZFJNYGPJCUHWKEOJYYOQPLXKHBIMCONKMNHFKGWRCYGCVJFZXLNRBMVIIZODUZBZVSMCIAEFQL");
    msg.component.assign("LGBVJAWQZYTGZBTYCXSDDWEWNDINSIHUPXOVNQRDTMAOQFICTIASQAZHIWFNIVWKXIAOCVUYPLTUOXWTLGXMKMGWYRKMBUPBTEBTAMCDFPEQNLEPRHSSBAEYZKCJEWFDUTR");
    msg.act_time = 55807U;
    msg.deact_time = 27751U;

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
    msg.setTimeStamp(0.4002828140572928);
    msg.setSource(37802U);
    msg.setSourceEntity(96U);
    msg.setDestination(31206U);
    msg.setDestinationEntity(110U);
    msg.id = 160U;
    msg.label.assign("TONOWUFKUMYCIAJJUNSZMXGEZHKBHBYDPFYPODNPLMTBGKMUFCESS");
    msg.component.assign("RZARWDWEYJYDIZIKKWPWICWKSSTFUHMSPMRUEIBLQFYGCAOCJDHXUXKQQMOPPOCRGBDKHLGGADOQEJXJZGVDCNBLDIEVLOJFOXYLMSZLTUKSPTCYJZBFVVLKBNOWXQIGTFHCNNHZROLDDESPYYNGYZKLATHEMMBISJAFLEGEFMMSQTN");
    msg.act_time = 17459U;
    msg.deact_time = 19440U;

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
    msg.setTimeStamp(0.6821236702298955);
    msg.setSource(5983U);
    msg.setSourceEntity(28U);
    msg.setDestination(14790U);
    msg.setDestinationEntity(222U);
    msg.id = 187U;

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
    msg.setTimeStamp(0.6426807986388755);
    msg.setSource(38727U);
    msg.setSourceEntity(171U);
    msg.setDestination(7829U);
    msg.setDestinationEntity(43U);
    msg.id = 98U;

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
    msg.setTimeStamp(0.4998905860735443);
    msg.setSource(2529U);
    msg.setSourceEntity(148U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(42U);
    msg.id = 159U;

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
    msg.setTimeStamp(0.4214737850044231);
    msg.setSource(4411U);
    msg.setSourceEntity(64U);
    msg.setDestination(58161U);
    msg.setDestinationEntity(97U);
    msg.op = 153U;
    msg.list.assign("BCRUXPXYTZJKPMBRXHEGEVNVVTWFCLGSOPQBBSYUQQIMOFYVLUDKFYTPLEWGLHDBQPENOSYNALXKCDXYLURWUAWPLAKFWSEJZGCTWZHQIQBDODJLSWRFRGEHXAOGJYUQIIMWIEIJKXNJAXCMCBMGSVMDFIURURVAKCWPZAJZPFFKUTBNLSN");

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
    msg.setTimeStamp(0.446351602407562);
    msg.setSource(49300U);
    msg.setSourceEntity(230U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(181U);
    msg.op = 244U;
    msg.list.assign("YUAALINCICTHOGRGQPXSXOHCANSRIIXATYHZOEDVOMNQORMVLHZWKBLOKTCDGJECIBAFQFUPETWNFEBCHQZSETDAHLXDXIRYHVYDZMOBWUWXUJKSTVPNCQGBG");

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
    msg.setTimeStamp(0.18045443537004235);
    msg.setSource(20037U);
    msg.setSourceEntity(205U);
    msg.setDestination(13551U);
    msg.setDestinationEntity(155U);
    msg.op = 115U;
    msg.list.assign("RXIGHTEGMQGINDYGMWWBCVKTOBYFDCWHSCTDRHYJAFPAVTKWPXBIYPXCHIXWITTODUMMFWHJVPAZJIQIMNPMXRQUQOORSGRZDWNBOLZZRXNHOVNAEQAEXXBGCKDXDTKJLFAZBZHEGIKCSSFZQCBOALEYPPJQEJKUTGEZUUKEIOVCJYFGHI");

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
    msg.setTimeStamp(0.7505580827794763);
    msg.setSource(43581U);
    msg.setSourceEntity(74U);
    msg.setDestination(21058U);
    msg.setDestinationEntity(212U);
    msg.value = 231U;

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
    msg.setTimeStamp(0.08761365757280615);
    msg.setSource(22994U);
    msg.setSourceEntity(169U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(136U);
    msg.value = 137U;

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
    msg.setTimeStamp(0.2204918868222019);
    msg.setSource(14838U);
    msg.setSourceEntity(19U);
    msg.setDestination(62092U);
    msg.setDestinationEntity(108U);
    msg.value = 134U;

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
    msg.setTimeStamp(0.8756402612822355);
    msg.setSource(31959U);
    msg.setSourceEntity(15U);
    msg.setDestination(10911U);
    msg.setDestinationEntity(124U);
    msg.consumer.assign("DDYLMVUTJYLMOSHOHPTDVTRDNBJYNTBFIQJCRPDAVRSFEYJBCRCXKZABXLOCBQFUKGMUEMTLVTXIDGCIEYISGESPYAMOHYOQUSGPKANXVNQEZHEFTNRF");
    msg.message_id = 1783U;

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
    msg.setTimeStamp(0.9124390675573137);
    msg.setSource(49761U);
    msg.setSourceEntity(121U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(27U);
    msg.consumer.assign("BBKOHGHTBSVLATKDRGTLIBXXFVMDWNFSYPOFRQNEMOFYNZGJHDQJTANUFTUGKTAWRWQDCVGOQLAKQKESSHMWRPGTLDCFHVPYZBPZCSJEZQRIMCYCHGNDWSPMZXVT");
    msg.message_id = 1337U;

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
    msg.setTimeStamp(0.46362625616348374);
    msg.setSource(33729U);
    msg.setSourceEntity(231U);
    msg.setDestination(34751U);
    msg.setDestinationEntity(86U);
    msg.consumer.assign("YTYCZBHNDNJGQKDVZXMSDCLSMTRIXRTYJJJUHQRQQQRFFYRRTNFUSXHRFNXWGAUOLVEDSNGGYBCPUXGPHQCJDRPEQGPLKVOUBWGAACIEAIAWEPYDZHLIKNKWKODIIAGALMHCCEBVFKHWRFHBKZQJOBEASCLNYBXXPWPIYFMIAVZSKWBZTUYXOUZCDCSINRUOOVOUPESIZVEFMBWZPAMQXTOMGNJNVMVFWLHETOJSJEFM");
    msg.message_id = 62143U;

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
    msg.setTimeStamp(0.7573076220044823);
    msg.setSource(49660U);
    msg.setSourceEntity(197U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.0677100246387774);
    msg.setSource(47668U);
    msg.setSourceEntity(81U);
    msg.setDestination(10635U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.2673767412719774);
    msg.setSource(41086U);
    msg.setSourceEntity(166U);
    msg.setDestination(21152U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.4354359273077618);
    msg.setSource(53338U);
    msg.setSourceEntity(111U);
    msg.setDestination(38577U);
    msg.setDestinationEntity(135U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.8879307822474798);
    msg.setSource(40030U);
    msg.setSourceEntity(102U);
    msg.setDestination(31611U);
    msg.setDestinationEntity(223U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.48859830475217847);
    msg.setSource(11468U);
    msg.setSourceEntity(80U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(187U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.6523603488575739);
    msg.setSource(30298U);
    msg.setSourceEntity(205U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(140U);
    msg.total_steps = 140U;
    msg.step_number = 180U;
    msg.step.assign("RRPNSDYBICTLMMCJDEYAKYUEZKGSICINRNSDOYBYFYIIWXTHAUQ");
    msg.flags = 4U;

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
    msg.setTimeStamp(0.5822236999567407);
    msg.setSource(28051U);
    msg.setSourceEntity(37U);
    msg.setDestination(183U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 117U;
    msg.step_number = 143U;
    msg.step.assign("PLFVFPNQTIIAFBTCDUJIXHSYVBHKFMN");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.625417087262902);
    msg.setSource(38413U);
    msg.setSourceEntity(0U);
    msg.setDestination(24815U);
    msg.setDestinationEntity(245U);
    msg.total_steps = 18U;
    msg.step_number = 229U;
    msg.step.assign("RLATGTQZBDCNWYUBOJXRTVHSWMNUVGQBGJXPRWEDMMLNVIEZMJCKWKIYHUQZFTPEYHPQCIRRXDDCECZRFRQAGZHJKKGHBAFVUO");
    msg.flags = 99U;

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
    msg.setTimeStamp(0.691823989753746);
    msg.setSource(3502U);
    msg.setSourceEntity(69U);
    msg.setDestination(51149U);
    msg.setDestinationEntity(20U);
    msg.state = 142U;
    msg.error.assign("TGLCHWQHENQHGOGZFNUOKXAITSTFGOIQDMFLEALIQMYRDVCSMXTBQNJPFWXCOPYYHAVKEEMBDVJEROSCZPPRRJQPPYJCHMERWWVKBBULNDNLHUKCFBAIIOIYGRVTWLDPQWSWOQZSAQKUMYGTSSYAXACUIKXFGOJZLDUKRPWBMNNZTMVJSSFALIXHYBVVTACEQUUTOHAJDKNUUNDBHIJLYCVXY");

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
    msg.setTimeStamp(0.8514498747014246);
    msg.setSource(47472U);
    msg.setSourceEntity(190U);
    msg.setDestination(15831U);
    msg.setDestinationEntity(131U);
    msg.state = 60U;
    msg.error.assign("LYVXRPGRLMCAUAJZGGYBJFMSFMKSBHUAJEOOODASICLNVWRWDTSYIZYUDMZBQZSSEWZNOTRBRNBYSTIBKXDAORFJPWGXPTECRNMEMTTWLDBPMFKVIIFWCYXGLHADNLKRPXCWBEUKXPJKUPOVEQZIBIWUVGXNXFKLWQIAQV");

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
    msg.setTimeStamp(0.16895622762624685);
    msg.setSource(64208U);
    msg.setSourceEntity(116U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(88U);
    msg.state = 95U;
    msg.error.assign("FXDKFNOINJYGMTYEQEMHFUSQZMGQJDICTMUVBOQEOYPNHMIQOAKTKLEDTLNLTRAKKBSJTHCMZAUAPGWXCEFYMXKMSPVBXZGFYEKIWCSMSZQNWVPCLIOOIGLVBRWQYCPTAHVDEDVFUONFSWDGSCMYRZJYHKJHZLABNGWZW");

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
    msg.setTimeStamp(0.45648903951569475);
    msg.setSource(55038U);
    msg.setSourceEntity(115U);
    msg.setDestination(52017U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.12344571621017253);
    msg.setSource(33746U);
    msg.setSourceEntity(6U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9011692513327267);
    msg.setSource(53776U);
    msg.setSourceEntity(237U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.19795227573171004);
    msg.setSource(27560U);
    msg.setSourceEntity(26U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(246U);
    msg.op = 27U;
    msg.speed_min = 0.9024058695334245;
    msg.speed_max = 0.8173268672709898;
    msg.long_accel = 0.6152198490522699;
    msg.alt_max_msl = 0.16162106221000982;
    msg.dive_fraction_max = 0.5651789356926017;
    msg.climb_fraction_max = 0.5232237087190854;
    msg.bank_max = 0.6494396893231419;
    msg.p_max = 0.4293469367467919;
    msg.pitch_min = 0.964464957013732;
    msg.pitch_max = 0.7181183222842282;
    msg.q_max = 0.9531513545147406;
    msg.g_min = 0.9787939804323744;
    msg.g_max = 0.515275153165438;
    msg.g_lat_max = 0.05685301743541693;
    msg.rpm_min = 0.10958724557396093;
    msg.rpm_max = 0.17317029698686426;
    msg.rpm_rate_max = 0.12921414050300328;

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
    msg.setTimeStamp(0.12169832738272823);
    msg.setSource(43366U);
    msg.setSourceEntity(231U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(117U);
    msg.op = 253U;
    msg.speed_min = 0.3922612438248937;
    msg.speed_max = 0.10289836627925819;
    msg.long_accel = 0.6828215276862437;
    msg.alt_max_msl = 0.19883050396225188;
    msg.dive_fraction_max = 0.8048060723731746;
    msg.climb_fraction_max = 0.8984882014716586;
    msg.bank_max = 0.5286748053819956;
    msg.p_max = 0.5681757275656533;
    msg.pitch_min = 0.45883644652342725;
    msg.pitch_max = 0.9494327687962372;
    msg.q_max = 0.04079496672412031;
    msg.g_min = 0.9715754002820872;
    msg.g_max = 0.8171508838781512;
    msg.g_lat_max = 0.5217610219288732;
    msg.rpm_min = 0.27105477039397907;
    msg.rpm_max = 0.14154917572523362;
    msg.rpm_rate_max = 0.655630215673532;

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
    msg.setTimeStamp(0.049447958181075946);
    msg.setSource(60714U);
    msg.setSourceEntity(171U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(62U);
    msg.op = 246U;
    msg.speed_min = 0.12960331673060588;
    msg.speed_max = 0.05529372950718858;
    msg.long_accel = 0.8905399002721935;
    msg.alt_max_msl = 0.05324903877669973;
    msg.dive_fraction_max = 0.28799367638760254;
    msg.climb_fraction_max = 0.5786567034265059;
    msg.bank_max = 0.6215689708987585;
    msg.p_max = 0.01593737747235202;
    msg.pitch_min = 0.9087785374226307;
    msg.pitch_max = 0.13673912449066472;
    msg.q_max = 0.33615503776056865;
    msg.g_min = 0.26017128609269713;
    msg.g_max = 0.40884508140439524;
    msg.g_lat_max = 0.9313913828497165;
    msg.rpm_min = 0.02115873179857053;
    msg.rpm_max = 0.00044129624188893324;
    msg.rpm_rate_max = 0.9698518242684238;

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
    msg.setTimeStamp(0.747860857809547);
    msg.setSource(4935U);
    msg.setSourceEntity(156U);
    msg.setDestination(64179U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.19767704536452224);
    msg.setSource(17466U);
    msg.setSourceEntity(105U);
    msg.setDestination(56804U);
    msg.setDestinationEntity(147U);
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 8107U;
    tmp_msg_0.x = 0.728372779007406;
    tmp_msg_0.y = 0.3222589944766905;
    tmp_msg_0.z = 0.08690036694258618;
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
    msg.setTimeStamp(0.3582103489361437);
    msg.setSource(21230U);
    msg.setSourceEntity(229U);
    msg.setDestination(63798U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.20493931677869015);
    msg.setSource(57063U);
    msg.setSourceEntity(14U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.4513108812218445;
    msg.lon = 0.31466826946945525;
    msg.height = 0.6905536893465158;
    msg.x = 0.7726581587628758;
    msg.y = 0.679684383123873;
    msg.z = 0.35060593238208715;
    msg.phi = 0.4545569886548102;
    msg.theta = 0.9503102591146235;
    msg.psi = 0.7816054395066709;
    msg.u = 0.45192524329061023;
    msg.v = 0.4300706802041496;
    msg.w = 0.10427040656672892;
    msg.p = 0.9675686824351606;
    msg.q = 0.03332319196475175;
    msg.r = 0.005888606699655519;
    msg.svx = 0.9455365675952101;
    msg.svy = 0.9301888251069748;
    msg.svz = 0.7251825672547513;

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
    msg.setTimeStamp(0.051019022566858196);
    msg.setSource(2200U);
    msg.setSourceEntity(206U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.37985857622156183;
    msg.lon = 0.9114850381943622;
    msg.height = 0.33351940559384385;
    msg.x = 0.9253963872392713;
    msg.y = 0.3574985304890351;
    msg.z = 0.44718779057838476;
    msg.phi = 0.8708305509327983;
    msg.theta = 0.7501315847190271;
    msg.psi = 0.8197215644403942;
    msg.u = 0.28650414313909633;
    msg.v = 0.6856083956875708;
    msg.w = 0.40495304009190614;
    msg.p = 0.9042822955753189;
    msg.q = 0.9654133251163177;
    msg.r = 0.7885950425648017;
    msg.svx = 0.8424425250881021;
    msg.svy = 0.3622601487436099;
    msg.svz = 0.482602431239453;

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
    msg.setTimeStamp(0.6659851370724651);
    msg.setSource(51710U);
    msg.setSourceEntity(134U);
    msg.setDestination(16711U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.8530272067797627;
    msg.lon = 0.5758665411395738;
    msg.height = 0.29818698351035366;
    msg.x = 0.6521345143684458;
    msg.y = 0.6946681759998371;
    msg.z = 0.7796106521497674;
    msg.phi = 0.9892684336716911;
    msg.theta = 0.31219793845712773;
    msg.psi = 0.29753092808519943;
    msg.u = 0.6890077437450595;
    msg.v = 0.5438876535786479;
    msg.w = 0.45091466595868235;
    msg.p = 0.20805052984568384;
    msg.q = 0.9674533223640249;
    msg.r = 0.34674226107706063;
    msg.svx = 0.9613518189028244;
    msg.svy = 0.1631400395238165;
    msg.svz = 0.8449469887510651;

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
    msg.setTimeStamp(0.19637369387116077);
    msg.setSource(52824U);
    msg.setSourceEntity(216U);
    msg.setDestination(56445U);
    msg.setDestinationEntity(164U);
    msg.op = 103U;
    msg.entities.assign("HPWTFRQHBBDKWNGNLTXZGOCCEXPIMTKOEOXWMVQDFZGOVCANUUJUXJGZRVDUMHDRYTATOWGNNCKCEPEVPMCDTDJWVYXFPWFJJRNVOPSNAHEXTGRXODMZKHTEPHFJLJEAQLZSGMNFLHVIIKYLREDWYMXRAQKYBSSLPSPFAUK");

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
    msg.setTimeStamp(0.013987034838230383);
    msg.setSource(197U);
    msg.setSourceEntity(244U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(248U);
    msg.op = 132U;
    msg.entities.assign("HFYVWRQHWOJDKYMOEVYEGBGCDIQPCXBVAZLKWGUQXCXIIBZSCOXFQHDNSUYHGPIPVSDHIUBNVIZLYEOXSIRFQDVPHCELFTVMNCTLCLQNEKWLZBAETUOSROTOYGTUFKHWDXFTJKMXWFQTYJZREPEHKBPNAHTGSIZAZJBIKGJRYJDCGYDCJUAEOKOSKRQLNVLZRNGVRLWMPBAQURSFVADUWTSCMLZG");

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
    msg.setTimeStamp(0.41656618676009993);
    msg.setSource(48068U);
    msg.setSourceEntity(176U);
    msg.setDestination(57153U);
    msg.setDestinationEntity(48U);
    msg.op = 9U;
    msg.entities.assign("FPYNREKXRQKLDJARDJPALHQT");

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
    msg.setTimeStamp(0.12641924061271914);
    msg.setSource(62934U);
    msg.setSourceEntity(216U);
    msg.setDestination(8711U);
    msg.setDestinationEntity(195U);
    msg.type = 149U;
    msg.speed = 1085U;
    const char tmp_msg_0[] = {31, 51, -83, -80, -32, 41, 76, 72, 35, -26, -84, 84, 8, 16, -45, -51, 43, -85, 97, -69, -17, 108, 53, 1, -18, 80, -87, -104, -29};
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
    msg.setTimeStamp(0.1538435277138449);
    msg.setSource(4918U);
    msg.setSourceEntity(207U);
    msg.setDestination(62334U);
    msg.setDestinationEntity(114U);
    msg.type = 193U;
    msg.speed = 17162U;
    const char tmp_msg_0[] = {-13, 124, 56, -98, -22, 61, 18, 105, -74, -128, -72, 124};
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
    msg.setTimeStamp(0.6353026815305736);
    msg.setSource(62353U);
    msg.setSourceEntity(117U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(80U);
    msg.type = 221U;
    msg.speed = 41638U;
    const char tmp_msg_0[] = {-111, -109, -14, -81, -99, 28, 51, 22, -101, 42, -67, 83, 14, 17, 107, 121, -121, 30, -47, 92, 0, -66, 22};
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
    msg.setTimeStamp(0.8705301331046893);
    msg.setSource(41217U);
    msg.setSourceEntity(252U);
    msg.setDestination(16624U);
    msg.setDestinationEntity(8U);
    msg.op = 126U;
    msg.tas2acc_pgain = 0.8682881776081077;
    msg.bank2p_pgain = 0.16259322964811385;

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
    msg.setTimeStamp(0.7590078601245146);
    msg.setSource(9942U);
    msg.setSourceEntity(170U);
    msg.setDestination(2751U);
    msg.setDestinationEntity(219U);
    msg.op = 111U;
    msg.tas2acc_pgain = 0.3470149966002066;
    msg.bank2p_pgain = 0.27482615521986764;

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
    msg.setTimeStamp(0.9915719312347906);
    msg.setSource(37867U);
    msg.setSourceEntity(78U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(101U);
    msg.op = 139U;
    msg.tas2acc_pgain = 0.05138058191203254;
    msg.bank2p_pgain = 0.2645881194418027;

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
    msg.setTimeStamp(0.5138708253174604);
    msg.setSource(46976U);
    msg.setSourceEntity(238U);
    msg.setDestination(43950U);
    msg.setDestinationEntity(60U);
    msg.available = 4203271679U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.7821854890186085);
    msg.setSource(60964U);
    msg.setSourceEntity(31U);
    msg.setDestination(61042U);
    msg.setDestinationEntity(195U);
    msg.available = 3886618770U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.03560646267650658);
    msg.setSource(8534U);
    msg.setSourceEntity(68U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(9U);
    msg.available = 2606348884U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.9473150133999575);
    msg.setSource(54890U);
    msg.setSourceEntity(70U);
    msg.setDestination(14948U);
    msg.setDestinationEntity(67U);
    msg.op = 170U;
    msg.snapshot.assign("VJKXSRPDJUQLRCFGBGOFOPOHBYNUQXZUQTBRYFMTSVXHGJYUSSLIIDXOTHHCKLIQGAAANWSNSWZCDVVYOFUSZMAPQMXICXJYDQBTGIBKHDCNXONKWPPEOFDGZTMIFMKIQQRFZNAINUMBGLFJKKEXZDZHZZTVPAQTKVWRHWFMDBJPYRRHEWLLAEUWJGYVEYBPCKJAUXVRBECVPFEWESNHKSOLBILTJWUOENI");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 55388U;
    tmp_msg_0.plan_size = 1662887710U;
    tmp_msg_0.change_time = 0.17206881304477617;
    tmp_msg_0.change_sid = 56608U;
    tmp_msg_0.change_sname.assign("MAOTFOWLVDALASNTFRFHMNKCYLDSXUKMDWWYBXGYSCARSGUBRYUILXKNNL");
    const char tmp_tmp_msg_0_0[] = {48, 21, -73, -76, 83, -25, 99, 18, -43, 116, 73, -79, -99, -15, 49, 101, -116, -125, 46, 125, 38, -117, -65, 99, -125, 87, -62, 73, -104, -112, 13, -71, -52, -99, -115, -87, 15, -66, 53, -7, -58, -104, 91, -22, 13, 36, 54, 11, 50, -74, 108, 60, 67, 105, -99, 5, -125, 17, -48, 96, 5, 85, -76, 90, 67, -56, -60, 97, -19, -50, -40, 123, 48, 3, -94, -79, -86, -2, -125, -106, -48, 43, -19, -123, 31, -121, 66, -121, -50, 29, -65, -104, 110, -33, 46, 104, -124, 44, 56, 26, -61, -30, -18, -20, 123, -40, 42, -125, 18, -73, -31, 79, 4, -87, -102, 63, 57, 60, -72, 17, -65, -57, -25, -69, -8, 124, 39, 18, -38, 124, -121, -106, -70, -124, -94, -116, -17, -94, 4, -31, 54, 22, 66, -99, -57, -7, -122, 30, -98, -116, -79, 33, 125, 96, 83, 113, -59, 2, 105, 57, -27, -29, -44, 29, -20, 94, -102, -77, 80, 113, -66, 57, 74, -108, 53, -103, 68, 45, -38, -86, 115, 62, 37, -84, -86, 21, 2, 7, -13, -121, 24, 124, -68, -23, 60, 87, 36, 62, -62, 21, -72, 17, -60, 97, 25, -79, 25, -30, 0, 48, 99, -121, -34, 37, -43, 66, -94, -13, 75, 124, 58, -37, 89, -59, 6, -112, -93, -49, 20, 70, -109, -31, 112, -126, 15, -79, 108, -21, -68, 36, -57, 51, 105, 44, -21, 106, 87};
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
    msg.setTimeStamp(0.911913829248815);
    msg.setSource(14601U);
    msg.setSourceEntity(201U);
    msg.setDestination(63523U);
    msg.setDestinationEntity(88U);
    msg.op = 93U;
    msg.snapshot.assign("LPNMWGIYKQMTIIDHULNJGVHTZQKOKCRKGENZFNLSSZNOBBTIVUMRPYJAM");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6616016604297104;
    tmp_msg_0.lon = 0.8457932471246417;
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
    msg.setTimeStamp(0.6118164032679);
    msg.setSource(43547U);
    msg.setSourceEntity(214U);
    msg.setDestination(4274U);
    msg.setDestinationEntity(204U);
    msg.op = 6U;
    msg.snapshot.assign("BIOMPSNEWUYJGFLDCIGUJOMPUVOPHUXOUAKGYXNPBNRRSCOJYMBZMOHQLBAFCAGVFVBMZILHAYQKAILSDDDELWRBSVHTZNIZTQUBHFDGWKTRFQXYIIFJVKDXWSTFDSQEDIUXROCSTBZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SWPMOLLFOJRGOLZBPNDZIKGHYDKDVTXDBRFEVMHBYFJWOSRQIULTWFADZGSYTWZJNDWDOBEASE");
    tmp_msg_0.sys_type = 144U;
    tmp_msg_0.owner = 37043U;
    tmp_msg_0.lat = 0.5793866875739196;
    tmp_msg_0.lon = 0.5521816020481869;
    tmp_msg_0.height = 0.5726339972237849;
    tmp_msg_0.services.assign("XATVVKVXWJJRZBYERZYQWUGJWSNLCWCS");
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
    msg.setTimeStamp(0.46997645975123126);
    msg.setSource(57298U);
    msg.setSourceEntity(99U);
    msg.setDestination(24380U);
    msg.setDestinationEntity(213U);
    msg.op = 34U;
    msg.name.assign("TNZVIEXIUWUOMZNKSZZPPKVDBAOAWAEPGOKSQDLXIRWQGRUNSTCJDEOHTOYEFYWHQWYTLFWQLOXGDYQBSGIJDJPBCCRJRGJBRFLXHFCVMDTJNCNVIOWIVSVPIKCSMMDUTONGFNDHMQAMZUHMEKFEFZSMBNJUGBZCASUYNGOVYHBHYXQTIIRYMHUXUAAKBXFRELRYTBAWBF");

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
    msg.setTimeStamp(0.09879915493698821);
    msg.setSource(61234U);
    msg.setSourceEntity(162U);
    msg.setDestination(7974U);
    msg.setDestinationEntity(0U);
    msg.op = 83U;
    msg.name.assign("CVHEGTQAZSWOXKARPZVFJPQEDTXMWUBGUYXARCIJGCHNOWKDGYNLCZJJRENYZNLCSSXWOOHPSWMKTRXJVEPUVQDIUHSELBXOLIRHAPQCUDNLWMFQTNFKVVJEZXMUZUYOBHIDFCKLLOATFMEIVYHQYHOBUKPGRIITPMZSFYZWDJBUADXODYCERMAWIABFXMPGNRKJEISQVSECDXKWHRNSQFOPMCLTGBFUMYPGJKZQGVLHZJVYTBLNQAF");

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
    msg.setTimeStamp(0.7894269392733635);
    msg.setSource(59527U);
    msg.setSourceEntity(28U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(111U);
    msg.op = 234U;
    msg.name.assign("NEEMYBDYUFVSUOVOFYBUXNCEVAFXLNHYJRHDEYFRQDYHOWNTXKXCGCRMGOSIHSLYEZGZPUJQIMCSIHJNPVRDTDNCPJDLFIKAUBSFEHRKBZZTRVZRXOABKHPUJR");

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
    msg.setTimeStamp(0.06398477807211655);
    msg.setSource(29708U);
    msg.setSourceEntity(208U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(205U);
    msg.type = 9U;
    msg.htime = 0.7695657999973334;
    msg.context.assign("CBAUXYSBIHEZJKGTKUMDWQYPREVHTSQEOGFBJKCIZUXQGLLKVJRKZPRNPVIBQSJJYZVWZEJOGLKQCCWTOSXZTTDAYIPLHB");
    msg.text.assign("XFZDVBWHKEJTMEXISFFKHDIFIXLJABRFVRIXQBAOGCAGPDYPUOWRPZTPTGZLLVCVWOOBWXGZJSUFIWBPRHDWDDMXOTKUJIRCCUHHANQPYGHTR");

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
    msg.setTimeStamp(0.08740410102752494);
    msg.setSource(55065U);
    msg.setSourceEntity(29U);
    msg.setDestination(17280U);
    msg.setDestinationEntity(64U);
    msg.type = 63U;
    msg.htime = 0.04269075264790423;
    msg.context.assign("ZLSUQGWHMNANKVEIJVURFRMXUZFOZGNTZGFLEEQPPDNMBBXNRMYVGMNHLCZOOUCTAEKVUMAOWZHSCSPXQFXIV");
    msg.text.assign("PTRTNALKGYDOSGJFYBEZUVBEEMWCZURDVQBFWFQBFDIRXPFKICRBEAZOPDKSWMYFVEBSTIXLHZVWILWXGFAGXEQJGTIUJHZOKVEPXDCVLLQYHREQGIC");

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
    msg.setTimeStamp(0.6120076753695372);
    msg.setSource(17061U);
    msg.setSourceEntity(125U);
    msg.setDestination(34367U);
    msg.setDestinationEntity(225U);
    msg.type = 76U;
    msg.htime = 0.7847416610692567;
    msg.context.assign("FBICQIQGKZQFOGTPDREQZGJAYCMQRLKCJXDUJAPGSBDHDZIDIUQLAVOTSDFETFMUXASOLPOXYATRKOFIHUZNUCDWTGZJTZHKWUFWMXEQTCVBTCBANUYRPYWRIOOPLYVAJBMDGKWEJH");
    msg.text.assign("GANDQWUKKMNKTCJEREBSUGEHYEJOXPIPHQRCZOBWTZSICFHMVDGZABZWIHVDBUTLYFTPYJSJTNALRFSQGMRLCUNDPRUYMQANSAJDPKYYVWKVOBVHACSUD");

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
    msg.setTimeStamp(0.4027253668711347);
    msg.setSource(10815U);
    msg.setSourceEntity(123U);
    msg.setDestination(22260U);
    msg.setDestinationEntity(84U);
    msg.command = 143U;
    msg.htime = 0.8117112156561384;

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
    msg.setTimeStamp(0.8410665093842158);
    msg.setSource(34155U);
    msg.setSourceEntity(62U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(116U);
    msg.command = 69U;
    msg.htime = 0.776993511228595;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 187U;
    tmp_msg_0.htime = 0.7417164061308656;
    tmp_msg_0.context.assign("YDZIOBHWZELNPYCESOFOKCJNPFULZTWCCSSQIHAAFKRYSZOIXRWGAULBPLBTBKQIASMOIKEWPRCZGNVJWLMUTJAHQAJDRUUAXSWXT");
    tmp_msg_0.text.assign("AEBVRFEAXGJDPWGUTHUQGICDSEDRVJZKIKGWXBJPGASOLLDWLUXQKCPIWMVNEKYBRCQCVTMVBYZPOZQZOLWXLVXOUZGNMKIYTZCLTHYIVJDKSNHAMHOSSAIAVEJSJSPIGIRFSLEQQBUHEACMRF");
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
    msg.setTimeStamp(0.3077246229146199);
    msg.setSource(10529U);
    msg.setSourceEntity(216U);
    msg.setDestination(45610U);
    msg.setDestinationEntity(221U);
    msg.command = 159U;
    msg.htime = 0.28713044710063906;

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
    msg.setTimeStamp(0.14740078486316588);
    msg.setSource(36481U);
    msg.setSourceEntity(160U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(106U);
    msg.op = 210U;
    msg.file.assign("QYBBWHXSKQAYMPOPNSUVXCFVLMDQTNDIEJRWUFTRXGNUYCQYQKOSWWHPUQHXDBACDNMIPPINUOILKBWRCVMVLIUVCOUPWQINVGDSXKFNRAXMHMLOHYAAEDTZEJYGKCRZEWFUJTLXHUWJWATGKQZEJGGSQOSARCTFPAOZYFZFFSZRHQNCTCLOWVDZHERBBZTJZVDPYHPXKETPK");

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
    msg.setTimeStamp(0.5856988200076515);
    msg.setSource(6424U);
    msg.setSourceEntity(81U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(52U);
    msg.op = 74U;
    msg.file.assign("IJAXUDDIZWXKXAHBAZYNYMWJUUJEPLUJITCFKGZOCHDNKQRSHOGQBPWYBSRKLHRAOCHGVWJTOKAKTWHVRFUOAERSMGJPMAZPQSUGXZSSWIHHRLMZNTUIWCLCYJFYXUICAOEDCEYBDPTNLNIJOBJTHVLZXWLVSLONPIGESQRMTDYGVAXSBRG");

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
    msg.setTimeStamp(0.04927502994964417);
    msg.setSource(7163U);
    msg.setSourceEntity(152U);
    msg.setDestination(2794U);
    msg.setDestinationEntity(214U);
    msg.op = 17U;
    msg.file.assign("UELRTEBFCNHPVFHTSJSVCPDCHWWNCHAMUHTKAUZREGZAALHQFQNRDMWYDLVWXRIFNEYBDJKSAQWVXIIZTTUFFKKKLXLUEDPKJXAGMYTFWVAVOUDYRPXLBYYXHRODBTUEIEANMPZXPSMOFJJCRDBEIUNMKTISWLXIQZVLGCCAKHOYYUJPGOKQATSPBBGWYGJQNONMPBIZEGNFYZTZJIOSCFHONQZIULVZQVMSJSWCCJLBS");

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
    msg.setTimeStamp(0.013395604575487052);
    msg.setSource(36210U);
    msg.setSourceEntity(128U);
    msg.setDestination(21262U);
    msg.setDestinationEntity(84U);
    msg.op = 188U;
    msg.clock = 0.7331124552594774;
    msg.tz = 70;

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
    msg.setTimeStamp(0.18037621116783065);
    msg.setSource(2564U);
    msg.setSourceEntity(184U);
    msg.setDestination(46738U);
    msg.setDestinationEntity(171U);
    msg.op = 191U;
    msg.clock = 0.7687446941832313;
    msg.tz = 103;

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
    msg.setTimeStamp(0.07047526592492803);
    msg.setSource(17080U);
    msg.setSourceEntity(32U);
    msg.setDestination(34834U);
    msg.setDestinationEntity(108U);
    msg.op = 185U;
    msg.clock = 0.8969702760372922;
    msg.tz = -75;

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
    msg.setTimeStamp(0.3385894870719852);
    msg.setSource(42373U);
    msg.setSourceEntity(23U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.7671357798130821);
    msg.setSource(26595U);
    msg.setSourceEntity(39U);
    msg.setDestination(9767U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.5936113768115471);
    msg.setSource(809U);
    msg.setSourceEntity(44U);
    msg.setDestination(11362U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.9119278063760669);
    msg.setSource(40945U);
    msg.setSourceEntity(116U);
    msg.setDestination(24828U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("KHQTFZZMOUYWKSUBTNIUELNDOLYTRHXIWVNFRAPJGTAGOFMEOSXJBBZEQSHPNPGMBDVJLAJTMMECLHRBO");
    msg.sys_type = 247U;
    msg.owner = 5088U;
    msg.lat = 0.4261603773391408;
    msg.lon = 0.3805481321189298;
    msg.height = 0.1759520961775407;
    msg.services.assign("JXGTZILLRZVWOYDIGQJQVKMEKHOYCJNBSDSUQTWBPSAVQFLCNLEWHFFKHXEGWYATXEUMZADLKARCCPORRFSMNGTZDYLXRHHNOCSLQBZSUHNCJEZRCFYRUXKNCBADDICVYPKIDPONTPVVIOQYFSMHJWUJOLGBVRHEQEX");

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
    msg.setTimeStamp(0.8941231372632541);
    msg.setSource(10818U);
    msg.setSourceEntity(129U);
    msg.setDestination(58375U);
    msg.setDestinationEntity(14U);
    msg.sys_name.assign("VKWIWYFGKUEGUNHSMFIDHLKJMCKFOBSXQGYRJJTPQUGYTIMNLQQJOXTWHJJRQNFYYBGYFDALIJCMJBAKJJSSSKVZQKXDDTOIUPEREZBNRYWXRDDAXPWGPAFMZXASOQKHCZVRWGLDUZEAUNLTKNLQDZQPZVGYSIYUDFHWFCBOHAUOCOWGDVXYZOPHBLITPPORN");
    msg.sys_type = 196U;
    msg.owner = 19795U;
    msg.lat = 0.3840248161575096;
    msg.lon = 0.6164843300110834;
    msg.height = 0.8348493941927595;
    msg.services.assign("IHSUYACZMDWJKEXFICAKUAXLXLKVWBSWDSKGPSNBMIRDMTAGPEGHSTYGWHFTIRAQIDHYLRFAJDHZNNUMPPRCXQAXKSAFYCMJQRKLUJXZEKJKLRQPNFSSXFENOHVJJXEEMPNPPMZGHWDRDQJTITEFKMTBOCNBBITBSTNHDJUZEIYBWBRDVWXAWORGZGJKFOPZMVVEQFALYOFUBBHZDLETYNQVZQCL");

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
    msg.setTimeStamp(0.7333767522097083);
    msg.setSource(64390U);
    msg.setSourceEntity(162U);
    msg.setDestination(55766U);
    msg.setDestinationEntity(87U);
    msg.sys_name.assign("WKBAGCRPXLAMKABWUSSEFADBYRUSYXUQEJVXRXLNLHTKINWNQEDFPKFGBVSCHTUQCPTOHPWZLYBKZFQYZOMWJKHHTADXGORBNKDJCZTDLYRLMOEHCPOSIEOJIDHWNGPCEDTLJNXOBUNIEJJYZUULDIQNRTFUADFQVHYRFXPATLGGXPPKXSWRZMDAUPVBIFJCIVWWSLCIMEOTQJJFS");
    msg.sys_type = 97U;
    msg.owner = 37907U;
    msg.lat = 0.02177161272216277;
    msg.lon = 0.49492993374381133;
    msg.height = 0.8967456190082916;
    msg.services.assign("IRXTQUNXFVTVLPRWABICSAZDKTIEOCISRMRRPOHNOZNNLWQXCK");

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
    msg.setTimeStamp(0.601611581960366);
    msg.setSource(33738U);
    msg.setSourceEntity(45U);
    msg.setDestination(49557U);
    msg.setDestinationEntity(130U);
    msg.service.assign("VTAHPMYEIGZKVNTGHUKJTJLVPIFOEFFGJWZSYCDDJMBBCYX");
    msg.service_type = 57U;

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
    msg.setTimeStamp(0.49450237031150834);
    msg.setSource(2607U);
    msg.setSourceEntity(235U);
    msg.setDestination(1074U);
    msg.setDestinationEntity(205U);
    msg.service.assign("ZYQPHLYZTITYMLDGXIPZYIA");
    msg.service_type = 173U;

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
    msg.setTimeStamp(0.36926601087530597);
    msg.setSource(61882U);
    msg.setSourceEntity(153U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(59U);
    msg.service.assign("AHRNOXUVBJSALRMRCTDSSIBQOPSKWVWMYJELDEDZRUGUIJNLRHIRINWNANRQXXLONFVTCTSTMAFFDXLOCYKCSQBCTMZEWYTGJQRHKXAKOVMXBXITOXFSJHLGQQDVVHDLGUEBFEEKTYYCJGFUHEMWMBHJQPRSHCIKGPBYQYUKDZCEOMZNGPKJWTHSABWVZUQFMWUEAKPLDDZC");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.5195034588162097);
    msg.setSource(51173U);
    msg.setSourceEntity(59U);
    msg.setDestination(55690U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6722159518276747;

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
    msg.setTimeStamp(0.9305971092707809);
    msg.setSource(16319U);
    msg.setSourceEntity(170U);
    msg.setDestination(43996U);
    msg.setDestinationEntity(212U);
    msg.value = 0.13768354033515806;

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
    msg.setTimeStamp(0.2561185073087444);
    msg.setSource(26754U);
    msg.setSourceEntity(222U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(211U);
    msg.value = 0.06925797868067074;

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
    msg.setTimeStamp(0.9106455989683502);
    msg.setSource(46000U);
    msg.setSourceEntity(39U);
    msg.setDestination(57576U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8479666023039685;

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
    msg.setTimeStamp(0.03543238987702235);
    msg.setSource(59929U);
    msg.setSourceEntity(138U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3911197832818021;

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
    msg.setTimeStamp(0.3906909616187332);
    msg.setSource(21487U);
    msg.setSourceEntity(191U);
    msg.setDestination(49605U);
    msg.setDestinationEntity(200U);
    msg.value = 0.1265175061384778;

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
    msg.setTimeStamp(0.20844517554718822);
    msg.setSource(40495U);
    msg.setSourceEntity(28U);
    msg.setDestination(13623U);
    msg.setDestinationEntity(207U);
    msg.value = 0.23721267341450192;

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
    msg.setTimeStamp(0.7051554520022045);
    msg.setSource(16682U);
    msg.setSourceEntity(233U);
    msg.setDestination(34888U);
    msg.setDestinationEntity(93U);
    msg.value = 0.3511170847694649;

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
    msg.setTimeStamp(0.4669752960692358);
    msg.setSource(2356U);
    msg.setSourceEntity(238U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(68U);
    msg.value = 0.038860444874350586;

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
    msg.setTimeStamp(0.06162544946131221);
    msg.setSource(14802U);
    msg.setSourceEntity(104U);
    msg.setDestination(28735U);
    msg.setDestinationEntity(137U);
    msg.number.assign("ZSFJIXAMUOJEQDYBQZKXRNICWMVHXGURXMIDVPZQOVZYTDRAKPAULCGFOUIYHDNPBKVQHKFMUBCIYNRLTOLHQBMNSIMYJRRSNRZSIEWEASVGDELFX");
    msg.timeout = 61327U;
    msg.contents.assign("CBCNVYAWRAQGUXGKHFVYGAWLATYACBIWQYLICVCYQCSXLDSBFVKGWJBVCNMSTUIXKODPGXFJVFPNMKMUTAFJSPEAESKBIPNODFPZWMWYXVVQZZEDXEBTDUZQTHUDKIZXFDLHMRHOGBPRLRQSLPTBJUHQ");

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
    msg.setTimeStamp(0.7240385825017018);
    msg.setSource(35414U);
    msg.setSourceEntity(170U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(31U);
    msg.number.assign("SEWLPTJPCAAKDOIWGARVOHRSPNIKKOVLJRQFAMCHAMLPXVLRUEXXBSTAXZJBNVUFUTPLKLGZGYIVDLFDFWBRDQWPCDAXMDNRTSH");
    msg.timeout = 27064U;
    msg.contents.assign("VCFTAEDRQRXQARKKMOKCCQUZJYTNLK");

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
    msg.setTimeStamp(0.5923272888974834);
    msg.setSource(6398U);
    msg.setSourceEntity(33U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(39U);
    msg.number.assign("QVVNUATPNWOSJZCNXWMGQVXFXSHUDOMEVWILXJIWBAUYJKWVZWFPDHFVUVNTAEICHBQDJTSHOKRECCTIYGFIMYHESCIOGQTTUUTOXPBQFPTJLKYLASWKPRDMCDJWIHRXWKPBAXEFZ");
    msg.timeout = 58988U;
    msg.contents.assign("VKGHIDAFLSKNUPRQMASMCYAMWRFPEIQBHRWNOFCSPKZDITRZBBJGVMRXJAGLVBXWDOSMUTTZLMZNQDEVCQUWPXHKIGXLHGJPHUZXFKTHUJBJSQLFWXQFTESZZOWANDFGFNWYCOVEDKZRMKDQGOADTCRELPNYJAAFVSROGUSBUXCEDMYXYRVNULBFHGSIDNPHIKYVN");

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
    msg.setTimeStamp(0.420796466576258);
    msg.setSource(16252U);
    msg.setSourceEntity(238U);
    msg.setDestination(61984U);
    msg.setDestinationEntity(88U);
    msg.seq = 2004751151U;
    msg.destination.assign("EVZPNFVWBQXRJQBDKVEUOUHJKRMGLTRLCPSTIDQCMSGWRWVWBNJZPUHOJYFGXNELRNCJYYFYZEBMKIRTPEFDPURAWJHJXZYMAPWWXXDTQDAJASFZAYOGMYGIIVXTWMYNKCNHMFCTSGJLRUECXEAHQDMPUBVHZVDOPGTLNSILDFLZYXEVMLXCZWTUUMGIKHKJYTFSIOQNXDGOSU");
    msg.timeout = 28715U;
    const char tmp_msg_0[] = {-103, 76, 60, -45, 33, -120, -82, -52, 44, -116, -17, 64, -67, 33, -91, -104, -95, 14, 93, -98, -118, -5, 32, -118, 126, 58, -43, -7, 7, 9, -33, -120, -113, 94, -38, -41, -65, 48, -34, 120, 7, -111, 56, -109, 100, -48, 78, 86, 80, 23, -39, 124, -101, -56, 45, -90, 95, -19, 97, -76, 21, -87, -114, 96, -81, -39, 87, 58, 108, -73, 3, 4, 101, -90, 47, 28, -73, 95, -43, -15, 92, -20, 68, -97, -13, -71, -111, 56, 25, 120, -12, 67, -88, 96, -82, 70, 24, 47, 18, -39, -25, 75, 52, -119, -20, 53, 25, -33, 104, -58, 98, 5, -43, 3, 15, -117, 63, 121, 94, -81, 5, 24, -108, 28, 64, 46, -117, 46, 68, -55, 1, -43, 114, -66, -56, 20, 64, 43, -8, 74, 55, -65, -11, -91, 104, 8, 93, 103, 94, -20, -62, 125, 2, -2, 88, 63, 107, 115, -5, -26, -17, 87, 61, 87, -32, -72, -64, 75, -32, 19, 49, 114, 55, -79, 62, 30, 119, 14, -78, -119, -103, -86, 31, 56, 116};
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
    msg.setTimeStamp(0.6925918036220858);
    msg.setSource(28920U);
    msg.setSourceEntity(40U);
    msg.setDestination(42696U);
    msg.setDestinationEntity(228U);
    msg.seq = 4263085993U;
    msg.destination.assign("NMOBNAVWRHSSTXPOZEAQVIPGLEGPYICXTJMBHATCDUBJTWLJNQAKERBTDCDWZDOLXFPTIIUEIUMKALWDPZSOUWWFURELKMVEXCGIRZULLFOPVSWKKQSHJFWNFDQHSJ");
    msg.timeout = 38469U;
    const char tmp_msg_0[] = {68, -114, -23, -95, -110, -124, -62, 5, -79, 64, 49, 84, 108, 47, -25, -28, 53, -45, 2, 5, 56, 42, -32, 21, 42, -8, 51, -107, 71, -102, -30, -53, -61, 125, 36, 108, 117, -28, 36, 89, 94, -126, -53, 45, 62, 45, 46, -25, 62, -117, -50, -122, 120, -17, 9, -36, -4, 58, -85, -57, 34, 42, 29, 92, -44, -31, 95, -31, 30, 70, -65, 112, -28, -71, 87, 33, 10, -64, 28, 18, 23, -55, -50, -15, 12, -45, -77, 16, 95, -126, 92, 18, 12, 13, 71, -8, -50, 5, 83, -120, 76, 119, -16, -26, 73, -74, -25, -27, 1, -86, 18, 22, -96, 11, 67, -81, -7, -123, 68, -116, 10, 5, 95, -10, 6, -80, 108, 104, -59, -34, 9, -33, -83, -96, -118, 74, 125, -114, 60, 113, -49, -5, -70, -3};
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
    msg.setTimeStamp(0.5890541083778669);
    msg.setSource(2664U);
    msg.setSourceEntity(100U);
    msg.setDestination(64092U);
    msg.setDestinationEntity(85U);
    msg.seq = 2522924957U;
    msg.destination.assign("QZONWXDPYVHDVWNEFKKLSAJOGEFCOIRPWBVHYTQDIAZNGJWSCQRTTZFVXMGEYXFNYSEQUUYHCUPCAHAROJBQUNSJBVSXDGYTPKFCNZZULZBJIPJPCRFB");
    msg.timeout = 8154U;
    const char tmp_msg_0[] = {73, -43, -104, 81, -108, 107, 126, -25, -6, -22, -71, -104, 78, 119, 8, -7, 71, 110, 47, -98, -3, -76, -95, -103, 82, 16, 49, 46, 97, 76, 0, 92, 60, -91, -101, -128, -108, 19, 23, 88, -113, -57, 45, -68, -11, -37, -113, -108, 45, -17, 99, -39, 72, 63, 21, 37, 38, 51, 120, 118, 37, -122, -110, -19, -9, -69, 61, 78, 122, -18, 80, -95, -24, -78, -98, -76, -94, -94, 38, -126, 123, -101, -63, -63, -88, 10, -54, 121, -6, 79, -22, 29, 61, 18, -26, 35, 31, 35, 84, 118, -24, 76, -52, -11, -116, 9, 45, 16, -94, 62, -65, -76, 15, 117, 88, 120, 12, -115, 16, -52, 68, -119, -9, -91, 104, 56, -116, -13, 85, -105, -117, 101, -101, -58, -59, -31, 43, -34, -59, 103, 48, 46, 69, 90, -40, -53, 96, -120, 13, -13, -39, 85, 51, -62, -21, 48, -81, -72, 8, 42, 68, -35, -45, 7, 104, -90, 99, -102, 33, -115, 119, 54, 8, -117, 42, 15, 20, -60, 39, 9, 81, 95, 36, 67, -110, 113, -67, -24, -66, -71, 22, -50, -15, 97, -44, -8, 117, -35, -5, 58, -37};
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
    msg.setTimeStamp(0.4247155751983245);
    msg.setSource(48988U);
    msg.setSourceEntity(232U);
    msg.setDestination(61988U);
    msg.setDestinationEntity(230U);
    msg.source.assign("LWACUKVXPNKXZEBDQAJYGXIJJFEYINFAHOBVFNQVLRDYSIGSUQGPVWOWWBCKUAIEZTCARDGDOCTSFOPQXCZFLTGKGNTUPLQUTNB");
    const char tmp_msg_0[] = {-82, 30, -48, 40, 26, 24, -70, 103, 88, -57, -66, -103, -61, -1, -19, 100, -79, 91, 70, 24, -31, -32, -42, -123, -39, -47, -82, -113, -53, 86, -39, 1, -123};
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
    msg.setTimeStamp(0.23015112382338787);
    msg.setSource(37742U);
    msg.setSourceEntity(118U);
    msg.setDestination(36871U);
    msg.setDestinationEntity(254U);
    msg.source.assign("NMVDTEZBNHWJYDRWHGQPCYTVCKTECBRRDHZWSVUENGVJTSQMXCSUHNAXCWQNMFVKJPJATCDPLCNAKXXZQIALGUTNLPEIDBLDQAZYIAXSIIQJIKQUBOWFFGYYZPJTASKRLRANCRKNBLJIXUKPMSVVPUOQSUXMYFGPIHXORUYHDWMTKOLQSSGDPOYODEZWFQWBVTFPZERHEIUKCOBMRBTGDFIUGGJAOOJHBWLZWH");
    const char tmp_msg_0[] = {-86, -119, -75, -106, -40, -123, -87, -71, 110, -73, -124, -3, 53, 54, -67, 111, -62, -73, 59, -42, 77, 102, 60, -70, -64, 109, -1, 47, 38, -89, 8, 115, -91, 90, -98, 125, 54, 13, 2, 58, -115, -60, 108, 77, -71, 100, 48, -112, 38, -28, -128, 116, 14, 26, 126, -89, 12, 91, 16, -88, -13, 110, 80, 3, -28, -39, -34, -55, 117, 80, -121, 65, 24, -102, 84, -6, 58, 102, -75, -106, -128, 94, -81, -120, -49, 1, 124, -52, 60, 49, -93, -71, 114, -33, 92, 12, -82, 72, -79, 79, 2, -5, 99, 126, -97, 42, 78, 67, 68, -125, 60, 101, 10, 64, -74, -111, -37, -43, 15, 75, 56, 59, -43, 31, -17, 104, -105, 5, -9, -29, -104, -83, -99, -43, -64, -35, -53, -53, -33, -100, 101};
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
    msg.setTimeStamp(0.4056868348913991);
    msg.setSource(52569U);
    msg.setSourceEntity(169U);
    msg.setDestination(15393U);
    msg.setDestinationEntity(186U);
    msg.source.assign("GAIIHILRGVRXXJDXLWTOQRRYMRDFWCVLYAYKPAHFKYBEPSAOHTAXQJMMBHRNJQUCEOVRGBWJOPFZOFLQMIUEUSYLNEANJUCDDUSEDNIACJHXAKLOZUFWYKINQSQGCXDKNWBZKUPBSRTQGSVYOYJETWWMXTVPOZVGSQTHFBXRXEQGAHTQZIMFCFJKXGLPZGEWWKJHVYEHZMFGUHCZSNLTMVATPSKBMLBCUJPFRLIIKZZBSYDONCVDO");
    const char tmp_msg_0[] = {122, -10, -123, -13, -65, -57, 8, 113, 113, -103, -102, -97, -109, -53, -50, 49, -1, -31, -118, -54, -32, 22, -53, 66, -47, -84, -14, -44, 21, -36, 34, -106, -115, 92, 49, 102, -12, 55, -67, 121, -32, -48, 51, -122, 74, -39, 126, -105, -50, 9, 82, 72, 31, 80, 19, 115, 22, 72, 64, -62, -53, -10, -23, 126, 123, -128, -89, 88, 70, 53, -58, -1, 10, -3, 68, 56, 64, -55, -42, -127, 13, 52, 105, -75, -104, -118, -103, 38, -52, 81, -72, 87, 83, -25, 56, 118, 27, -13, -19, -83, 48, 39, -71, 106, -57, 108, 17, -40, -18, -37, -79, 12, -76, 53, 39, 78, 2, -100, 115, -119, 19, -30, -20, 50, 18, -6, 73, 79, -76, 80, -77, 34, 103, -1, 123, -127, -66, -75, -115, -65, -37, -36, 43, -10, 101, -15, 111, -110, 43, -10, -104, -60, -93, 123, 31, -80, 86, -101, 26, -80, 20, -84, 118, -76, 8, -74, -55, 99, 45, -110, 8, 92, 61, -57, -128, -8, -124, -90, 77, 79, 77, -108, -55, -91, 35, 55, 78, -39};
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
    msg.setTimeStamp(0.6084774601456965);
    msg.setSource(2902U);
    msg.setSourceEntity(14U);
    msg.setDestination(48940U);
    msg.setDestinationEntity(216U);
    msg.seq = 2441195064U;
    msg.state = 243U;
    msg.error.assign("HJWNBCIQOXICVOMSYKVOIALJNXRGNYVPJMSGCUPGUDUYAHTKBTJJQILCPXPZBSBPTBLFYLAWWLZBGHRTTMTKKKDDOISIMUJEIHRUFXQZQXFYLNILXWTMWCYAGHHBAQXOSDKZCVKNTGLQFHJJUPMKAWQUEKUDBTFNOQOVERWPY");

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
    msg.setTimeStamp(0.2667808021662954);
    msg.setSource(20933U);
    msg.setSourceEntity(9U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(58U);
    msg.seq = 262628485U;
    msg.state = 90U;
    msg.error.assign("CDMBXETKEYJBXCPEASRMSNJQJMPODOLVSKARFBSOTWIUFQLSHVKUSHJRVMVDENMZWBYHIBJNOJTXLKIEXZDUOPUZNJXOCEXPTULDMBTSFGDVNPFOPAZQVKZMYTACJNLRVZIGGHBWYFWTLOGVVFCSHIFPIPOYXWKEKYJOHXINNCCWTHARDZLMUWBYSRQZECYRNHCRQDGKB");

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
    msg.setTimeStamp(0.7812781370420587);
    msg.setSource(30983U);
    msg.setSourceEntity(125U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(76U);
    msg.seq = 1391104973U;
    msg.state = 242U;
    msg.error.assign("LPWPHXTOQBPGAXINMCGOHRQWJBMVLPWGKZDGPAOICXVFJXFWHMQHOMDQLZFSRRTUCGRBQXYHJFSXMUFCFBMUJYFOPNVZZEMNIKSUKD");

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
    msg.setTimeStamp(0.43338362464531444);
    msg.setSource(33338U);
    msg.setSourceEntity(101U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("BEQJWYFOFOMKIAHAZWCSPJDBNZUYSBJZMAUAQXXLUBAHWOMGWLHEZEHDRUEYMMUXGPUXZBHDQXXLTVZQRHVFPEOAZNEJLIVWXAOVSKYFRT");
    msg.text.assign("LHYHWGMKRFFBGAENOKLERBSWQUYTOMDGMTAJWNPJHJINGVBPQIZXREWTJK");

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
    msg.setTimeStamp(0.36555520766431193);
    msg.setSource(5650U);
    msg.setSourceEntity(76U);
    msg.setDestination(35047U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("MOFHTILEZLVCRKGZICAVBWOEDXRPWOALBRNMDQT");
    msg.text.assign("XRDZUETMPZNVQAYTFRFESNBELSAPVOYIHZKGRCSGPRCQYKIRUPBUSKJPQDMBBZUOLQXTIOXMSBWSBFILENTWFJOJ");

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
    msg.setTimeStamp(0.7667642740070745);
    msg.setSource(42581U);
    msg.setSourceEntity(106U);
    msg.setDestination(40856U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("TJPIUHLQEGYUNSGDSRWTLUZXGKMGHACDJSFXTBBZAFBYMHNVJLQQKTMOQYFWNUMIBDDOFDQPJYXHPMSOHVQJKUCRGLQZDXPWFZLZE");
    msg.text.assign("AQDAQASKMZWDKCETTGPJCBSQITFDNGNZGLHBQPUHQCCYTAJKTTVETPKTOJWJMEDLZFWUZGKRGQGOVSJWPXOIPNORFVFBSIHLBZYROVVWIEUHSXYHAZKAILPNWFIEDKCNSBIBDGRMHGXRNFGNJLTBDVHFKXEKYU");

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
    msg.setTimeStamp(0.17564036585971865);
    msg.setSource(51245U);
    msg.setSourceEntity(61U);
    msg.setDestination(58248U);
    msg.setDestinationEntity(7U);
    msg.origin.assign("SCISKEMFNOMJXAQJKYITBCMDFLOVFRXHPRVQQTUPUCYBDKFEHZJGLSXGUAYDXSJQFRTPEBGMCPUHCCWRDOZHWWXEXDDOFJSBNNNZVMYQBHDMGGRNGYSPUIMHKIAMBXHIJLAOASKADFNXNVUAAUUITKRCSVWWICYZGOTPEOVEYVIGZPTVRDYVWU");
    msg.htime = 0.20900945322236442;
    msg.lat = 0.8366787213944539;
    msg.lon = 0.7103280993244157;
    const char tmp_msg_0[] = {14, -88, 31, 58, 58, 75, -65, 21, -37, 108, -47, -42, 59, 69, 13, 79, 35, -48, -7, -12, -46, -94, 81, 105, 77, 56, -102, 125, -55, -29, -6, -72, 85, 67, 103, -82, -68, 107, -47, 93, -14, 30, -105, -72, 100, -128, -94, 79, 56, -55, 93, 2, 27, 29, -87, -118, -109, -74, -118, 72, 58, 109, -89, 106, 124, -92, 109, 70, 72, -31, 57, 18, -5, -9, -27, -2, 111, -79, -116, 42};
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
    msg.setTimeStamp(0.8180681409197137);
    msg.setSource(59198U);
    msg.setSourceEntity(3U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("HFJBEGXJEDOMIHKJKRBFMWAIYWETFYZFXWLLBJKOUUMVVXYMQDALRUDNQCMQDTHSOOTKHZGMPCOTWFACDATNLKZGZQUWCUYPZOONPABAZPYUZRIQUJIXSVSGCEPLHRWPPSCGVVPGVTJRRILVEEZJBTIFXKSCKHTTYFQKDIBARYNJKHBHMPGNOLFXKCVEZBRGEDUNWMEZODQAQGDYW");
    msg.htime = 0.8082391794238362;
    msg.lat = 0.1740041658536483;
    msg.lon = 0.4085436821455787;
    const char tmp_msg_0[] = {-48, 14, -6, -87, 64, 94, -77, -37, -123, -73, 48, 37, 10, -86, 63, -1, -63, 55, -39, 48, -59, 19, -36, 45, 120, 104, -5, 114, 73, -53, -10, 66, -82, 125, 83, 61, -58, -45, -52, 85, 1, 24, 28, 90, -101, 77, 96, 87, -15, 36, -59, -54, -62, -82, -104, -110, -61, 93, 10, 115, -72, -3, 125, -30, -30, -59, 116, 48, -107, 66, 124, -4, 76, 0, -77, -127, -24, 31, -96, -41, 30, 92, 32, 44, -119, -74, 124, -112, 121, -54, -53, 41, 121, 39, 0, -123, -47, -67, 65, 97, -1, 34, 41, 88, -75, 46, -118, -67, 35, 111, 41, -108, -48, 82, 123, 71, 41, 40, -9, 22, 112, 37, -8, 126, -63, -28, -77, 90, -49, 97, -34, 57, 102, -36, -94, 92, 58, 9, -106, 31, 93, -105, -36, -19, -123, 35, -95, 10, 14, -48, 55, 122, -46, -73, 30, 67, -47, -61, -97, -106};
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
    msg.setTimeStamp(0.5306592004747815);
    msg.setSource(3635U);
    msg.setSourceEntity(161U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(169U);
    msg.origin.assign("AXBTKYHBOMZJFQDLZKJVZQRFTGXCKWSZNQGWWINVANTTFRQNHFSVYDEXPLJXFOKSFAQOQUAGPCCJXAIXVPKRYUJSVBKMCUDCEATTOJPOBFCWAYUHRTRNYHJELIHBKXNAWZTKAMBZAXXWHPVQVJQSJIMYTZLHKPHNJEESLUGGIOBRZDGRDDOZYMGWKEPSICIHTBVSWFFUMODCIDPLNQSMMDY");
    msg.htime = 0.4599073402501027;
    msg.lat = 0.8037419940275294;
    msg.lon = 0.4946717679547896;
    const char tmp_msg_0[] = {-118, -66, -32, -41, -87, -74, -95, 99, 46, 85, -43, -53, 41, -65, 18, 52, -110, 75, -37, -120, 104, -86, -36, 98, -19, 88, -69, -47, 121, 117, 23, 119, -89, -71, 2, 18, 30, 89, -67, 32, -27, -113, -11, -37, 31, -125, -48, -93, 116, -93, 60, 26, 84, -94, -10, 106, -126, -111, -3, 43, -96, -4, 104, -60, 14, -26, 3, 112, 35, -93, -83, 18, 72, 88, -99, 73, -28, 9, -63, -106, -121, -74, -111, -99, -64, 22, -94, 6, -31, 7, -117, -9, 97, -128, 118, 56, -26, -45, 50, 93, 29, -52, -6, 77, -79, 125, -54, -36, 63, 33, -100, -61, -12, 39, -4, 7, -123, 103, -104, -68, 18, -70, 45, 11, 90, 23, 2};
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
    msg.setTimeStamp(0.15884151656548307);
    msg.setSource(8780U);
    msg.setSourceEntity(178U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(122U);
    msg.req_id = 10215U;
    msg.ttl = 17003U;
    msg.destination.assign("LHGKJSAIOPOLTHFVYDTNZCRXVQAZFCQIRSSVXEANLJOPSIQIBCOTFHOXKPFY");
    const char tmp_msg_0[] = {-123, 93, 2, -16, 71, 43, 71, 111, -37, -43, 102, 106, 43, -31, -23, -3, 18, -33, 58, 73, -104};
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
    msg.setTimeStamp(0.20227424461657106);
    msg.setSource(48309U);
    msg.setSourceEntity(198U);
    msg.setDestination(15989U);
    msg.setDestinationEntity(161U);
    msg.req_id = 23893U;
    msg.ttl = 7867U;
    msg.destination.assign("ZRXJRZZDGJIQZPJVEDRUU");
    const char tmp_msg_0[] = {-66, -93, 117, 126, -20, 87, 73, 44, 22, -107, 26, -20, -107, -43, -120, -108, 47, -31, 63, 110, 72, -56, 7, 100, 70, 53, 113, -92, 18, -84, -70, 105, 46, 86, 100, -36, 107, 69, 18, 80, 74, 45, 78, -103, -52, 65, 51, 60, 71, -54, -86, -58, -61, -65, -1, 67, 72, -109, 4, -6, -69, 111, 117, 5, -73, 16, -10, 15, -5, -60, -77, -36, -81, -19, 44, 20, -73, 122, -86, -22, -69, 72, 45, 12, -10, 106, 79, 115, 80, -23, -39, 17, -17, 35, -11, 14, -46, 19, 84, -72, 115, 74, 28, 71, 15, -9, -107, 9, -79, 111, 37, 120, 116, -76, -44, 16, -40, -63, 1, 45, 53, -67, -95, -120, 95, -11, 65, 25, -70, -117, 93, 30, -20, -125, -124, -36, -9, -116, -32, -63, 39, -105, 43, -35, -77, 110};
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
    msg.setTimeStamp(0.604311461889563);
    msg.setSource(3049U);
    msg.setSourceEntity(254U);
    msg.setDestination(813U);
    msg.setDestinationEntity(110U);
    msg.req_id = 34851U;
    msg.ttl = 32520U;
    msg.destination.assign("CYAYRLCJXYIFAJPAXETYZSCJWPJVXDKFQWPULTDCIDGQKVUQKDLTMVRGPGKHTXOCCUZDQMNEMLEABKXBMGGZZRYSFRPNXNKZQXZWOXCKPEINAIABELDUHJVVWFQWUWSTANIGSSTTSLZYQENBRZPYQYPNXJHRGMBKVVR");
    const char tmp_msg_0[] = {-23, -8, -2, -62, 120, -58, -76, -76, -3, 72, -100, -27, -85, 74, -109, 57};
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
    msg.setTimeStamp(0.5502759753631565);
    msg.setSource(22794U);
    msg.setSourceEntity(207U);
    msg.setDestination(57118U);
    msg.setDestinationEntity(14U);
    msg.req_id = 9920U;
    msg.status = 163U;
    msg.text.assign("CDZVTOMAHLLVFRAHXSPVMIEGOQQCQTQLPUGFUJBLEZBCWDUGQYEIVXZDBKLDHAXWWERZRSNUFDYMNBHJEQEJSASWKRQ");

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
    msg.setTimeStamp(0.923282718316457);
    msg.setSource(42890U);
    msg.setSourceEntity(46U);
    msg.setDestination(39556U);
    msg.setDestinationEntity(170U);
    msg.req_id = 30554U;
    msg.status = 216U;
    msg.text.assign("QJGJRPWYDUFRATIYXNWCSLGFCTAWTAJNWOHUVXMRPWWPHCHEXEZVPRKNJEUWDOZYUONORGFKWTNBOQSIJVASARYZVMMLZUEYRJWSQIKYFMNPUZLHEJPBHCGJUJGVRDKCXBX");

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
    msg.setTimeStamp(0.002565563176745833);
    msg.setSource(51883U);
    msg.setSourceEntity(205U);
    msg.setDestination(37094U);
    msg.setDestinationEntity(132U);
    msg.req_id = 41916U;
    msg.status = 175U;
    msg.text.assign("HITXHPUAZNORKDCPKCPABXTXWDFMSDULWBORDWPXECEFSBFJKXSHSRGORVEZMUCDGIHUNHLPQHDUWDBASECAGNUGMZGOKQIUZHXJPNNRBCYWEBYJMLSAYXHKINGUQVNJKYFLDFJJMIYEVKVQJGAMVSVDUPNRVMQKQMRZBTNXZFZIGQNLCYZBTVFSITTYMVZUPYEFSIXLIBWWJWRIQPJ");

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
    msg.setTimeStamp(0.319445680004509);
    msg.setSource(17028U);
    msg.setSourceEntity(96U);
    msg.setDestination(39357U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("YTCCXYJZUAPDPIHLTYFKVLVCFAGBQTSJXSVPMXKUNXDFKYFWOI");
    msg.links = 3105430250U;

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
    msg.setTimeStamp(0.6573594152429303);
    msg.setSource(60670U);
    msg.setSourceEntity(75U);
    msg.setDestination(5556U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("AINOLYHLRIZNNJYCTVOZBDSTZFEOKOCINTFAMQTUEDZQTJMGKKSHPDMHRPJGARBRQBYFVWUPXEFIDOSHWNUVWXCVCUVEORQMKZOEKUGUSVABNJGFUQPYTWWUWLPASDCSXMZXONKJYJDQPCJSDBPZHSDVAIU");
    msg.links = 2621427034U;

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
    msg.setTimeStamp(0.8863882759903425);
    msg.setSource(50345U);
    msg.setSourceEntity(202U);
    msg.setDestination(3623U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("DQAFCOILVGKSCXQYSBEPWFSQVNIWWKJWCBQMVXHYAUWFMPGCYHEYSEFWGXZDLHGMNWALGQJMKEHASHPUTYZACWMOUFNJVPIGZYXCFGUISJUKSDCMFRLQRVXMAKSLJGAOIZRDOFGBIRPZROS");
    msg.links = 3334381444U;

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
    msg.setTimeStamp(0.5717143706371118);
    msg.setSource(33571U);
    msg.setSourceEntity(34U);
    msg.setDestination(42432U);
    msg.setDestinationEntity(65U);
    msg.groupname.assign("TPTCPYSIOPYGKVTSZSZEOEOVYDCAGYGENIOMYDVXMZ");
    msg.action = 34U;
    msg.grouplist.assign("HHDKFSONVGNCELLKHHKFTQTDSBVZLEXWPCFRFZAPRWQJCYQZEYWODNTQJRTBCDGDSVXCTYFVRDNMZDKSIKXHNMGUIREJFDSBXWCWWLOTZCOXVRVHPSVZJEPNHVUJOWYLMNAXGGBIKIUPDZMUGIMYAZIGPXEXZOCUJSUBNEDQFCYQEAXOTOKYSIRUUHLJBJQLZ");

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
    msg.setTimeStamp(0.7508697172297449);
    msg.setSource(62459U);
    msg.setSourceEntity(239U);
    msg.setDestination(57097U);
    msg.setDestinationEntity(127U);
    msg.groupname.assign("RRKGDCEFWNQMUPAFYLHUBYRFJIDNQBQHPAOUJESTQHIEGVRZAXIJXLHETFOKNKDAYJLBYRLUTPKLTSMBFKOLSSGYFDXCTCRVGWWGFENANA");
    msg.action = 247U;
    msg.grouplist.assign("VGOVJXQZEXVRNUGDVOEATWOZVYWBKLNLBWLRPDLROFKZFUBTMIUBGVOKQCPTENIVDEHYSTHLDIRSUAAQPNJDMSGZMUENNCYGKILAKBELWXNRM");

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
    msg.setTimeStamp(0.6192233987366774);
    msg.setSource(48770U);
    msg.setSourceEntity(239U);
    msg.setDestination(51907U);
    msg.setDestinationEntity(203U);
    msg.groupname.assign("ZTOQDXIFVARMSMYCCKUOFVUGWPNQTLVSPLCJRPBDDINFHPISBCCHRTGVJKKIFEWJMETNGUQEORKLJIXDSGODPKA");
    msg.action = 217U;
    msg.grouplist.assign("HMXPUJCINKQBCEERANIHLDQXQQZKDTUBQNESUXSUTMJTIGLYAA");

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
    msg.setTimeStamp(0.7832922488874212);
    msg.setSource(41108U);
    msg.setSourceEntity(55U);
    msg.setDestination(35161U);
    msg.setDestinationEntity(155U);
    msg.id = 219U;
    msg.range = 0.664184520169743;

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
    msg.setTimeStamp(0.6647210965677162);
    msg.setSource(36055U);
    msg.setSourceEntity(176U);
    msg.setDestination(6866U);
    msg.setDestinationEntity(110U);
    msg.id = 96U;
    msg.range = 0.3277164947696698;

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
    msg.setTimeStamp(0.767789077846789);
    msg.setSource(38201U);
    msg.setSourceEntity(194U);
    msg.setDestination(53077U);
    msg.setDestinationEntity(221U);
    msg.id = 65U;
    msg.range = 0.7264422861176173;

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
    msg.setTimeStamp(0.8111957163498645);
    msg.setSource(8068U);
    msg.setSourceEntity(60U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(95U);
    msg.beacon.assign("YUNIZUWUQLWBJBFUTMVPJQDKDECYQTIUQRQOPVHINCGKHARLAEFTHEDASOZGCPHGOCRESRVSGLLJOMQABLRYNFJKYSPMETSPSVHYDBXROMGXCPWXKR");
    msg.lat = 0.49665799788469644;
    msg.lon = 0.23946975074931742;
    msg.depth = 0.8556355661514454;
    msg.query_channel = 152U;
    msg.reply_channel = 223U;
    msg.transponder_delay = 119U;

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
    msg.setTimeStamp(0.0221827721553417);
    msg.setSource(21132U);
    msg.setSourceEntity(116U);
    msg.setDestination(38803U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("JKFKRKXAGCJQWBTPPQOHYUWETCEFZPTEFANWUMNSVELQLYUQHMHEBMSMDWDZSHXFYBIDWQUERXDKHVKHDDTUFNDAAFUNPYQKBRAEYYZGQOZGIRKHBXZRGKMZWQTNINJFHCDCCJMOEMVLPSCRVCPJLSJYIRLWUPIZXOFOAHVTIEWTTPTLGOLNXKYIFHXXVABGKPBTOMGNNMUJOWUJOGFSOZVJNLIXCMYSASRQUICXBWDADLYPRVVGZ");
    msg.lat = 0.2920124114497832;
    msg.lon = 0.1613976034252137;
    msg.depth = 0.25361394905241363;
    msg.query_channel = 230U;
    msg.reply_channel = 174U;
    msg.transponder_delay = 45U;

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
    msg.setTimeStamp(0.84533260301366);
    msg.setSource(65514U);
    msg.setSourceEntity(25U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(139U);
    msg.beacon.assign("QKXIZZVVRQJQWLNFNNMEUAGVVDQSPEHGKOULKPKAZFBNEJXRHOCZOCTHODBYTVUKRTXKBTCNWBNCBFXITMRDDOIXIFJCICPOAFDVZEWYTZGKWBAKDZJYQLKAYRFHRJPSQMZRWLBGUAXAIILLEXNIFLGGIOEBCBAKHEPFUBYSQPMRWJQQGJMERVHTOM");
    msg.lat = 0.4183298847989799;
    msg.lon = 0.49475761113278605;
    msg.depth = 0.4265081674234643;
    msg.query_channel = 129U;
    msg.reply_channel = 125U;
    msg.transponder_delay = 39U;

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
    msg.setTimeStamp(0.513620621078957);
    msg.setSource(20203U);
    msg.setSourceEntity(42U);
    msg.setDestination(57774U);
    msg.setDestinationEntity(51U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.7216541886299453);
    msg.setSource(52001U);
    msg.setSourceEntity(157U);
    msg.setDestination(5114U);
    msg.setDestinationEntity(17U);
    msg.op = 35U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TSHUSPBSLLRMAP");
    tmp_msg_0.lat = 0.06174252097109889;
    tmp_msg_0.lon = 0.22110522147559142;
    tmp_msg_0.depth = 0.577259869036392;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 147U;
    tmp_msg_0.transponder_delay = 137U;
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
    msg.setTimeStamp(0.8358952631472664);
    msg.setSource(59655U);
    msg.setSourceEntity(188U);
    msg.setDestination(43773U);
    msg.setDestinationEntity(221U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.6044067009312724);
    msg.setSource(31192U);
    msg.setSourceEntity(239U);
    msg.setDestination(52477U);
    msg.setDestinationEntity(201U);
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 95U;
    const char tmp_tmp_msg_0_0[] = {55, 81, -66, 101, -111, -108, -51, 62, -79, 41, -78, -22, 93, -51, -50, -107, -49, -69, -34, -51, -35, 52, -14, -58, -74, 6, 12, 112, -5, -21, -118, -98, -77, -57, -95, 64, -69, -6, -93, 27, -88, -57, 86, -98, 100, 118, 45, -18, 35, 75, -53, -120, -117, -97, 68, -78, 25, 6, -18, 73, -48, 80, -59, -4, 36, 91, -51, -31, 98, 60, 93, -22, -81, 53, -22, -111, 76, -50, -73, 11, -47, -55, -119, 0, 19, -13, -51, 16, -81, -49, -101, 39, 105, 37, -103, -75, -92, -19, -75, 8, 41, 50, -119, -72, 33, 84, -54, -39, 102, 47, -33, -25, -31, -7, 48, 9, -8, -103, 98, -1, -118, 91, 67, -104, -103, 79, 96, 12, -32, 45, 1, -24, -66, 84, -26, 37, 62, -35, 64, -8, 100, 29, -116, -128, 64, 110, -115, -96, 5, -110, 49, 66, 123, -118, -95, 12, -56, 56, -91, 18, -71, -48, -26, 1, 65, -42, -90, -2, 39, 85, -70, -49, -49, 86, -32, 49, 91, 64, -67, 32, -79, 105, 76, 32, 11, -35, 45, -121, -37, -5, 86, 53, 47, 98, -109, -97, 18, -108, 118, -1, -59, -7, 102, 56, 21, -121, 50, -111, 78, -19, 49, 41, 69, -34, -50, -113, 55, 68, 118, -64, -64, -24, 122, 56, -89, 59, -4, -1, 75, -113, 100, 112, -72, 90, 74, 113, 57, 116, 109, -42, -99, -72};
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
    msg.setTimeStamp(0.12552234936969486);
    msg.setSource(43840U);
    msg.setSourceEntity(134U);
    msg.setDestination(4452U);
    msg.setDestinationEntity(6U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UEQJRHAAUHVOBRKWKFGEQKHPNWSNAX");
    tmp_msg_0.value.assign("NMCGAJALYTXGUTVMTRVLEWWBEYWIZVRKPRWSDWBTEVCNKNFTHPDMUGBSOKRVAJESQKCAXFBRDTZYTCCXNDJLNOEYFQHXXDKRYMHOHEFPLNJQZTHRZGSEWSFMSZYBPXJCIZUMAVJFXBDFMLJDMCUHQFNR");
    tmp_msg_0.type = 33U;
    tmp_msg_0.access = 56U;
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
    msg.setTimeStamp(0.26839578858175606);
    msg.setSource(52415U);
    msg.setSourceEntity(50U);
    msg.setDestination(27245U);
    msg.setDestinationEntity(182U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WIRZRTNAMAJTGLXKGFRGAFCBVOCBIFJOPZLVMJMKHQQTRHFEPUETUDUEJFRDSGCHERGKYVLNYPIBJUJJAQZDWTSWTRAJSSIOYVDDLUBKAEPPPZCWOQHMWXGGMFXLQCJLVMDXINECHWROOOQBYCINCEIHQLAHQVIXXJFEWKZZBSPPKUTLMWHVSTRNXYLPNADYUDASTD");
    tmp_msg_0.dest_man.assign("AHPLYAJPFKMUOIWLFBYCCKSWGUNXDAGXMAXMPLRTDEACLVEJZFAIEBSSVZFKBBQDYPTHWOWHOJIXQLNMOBIAFVGCNYWTGLSDAZDCKNTMMLMSEKBAXVWJIQ");
    tmp_msg_0.conditions.assign("HOESQEODDERUWMHCAYRRRZXKMCNENQBLSQBZOIUZYMDELKTAHI");
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
    msg.setTimeStamp(0.031091574343267148);
    msg.setSource(22795U);
    msg.setSourceEntity(178U);
    msg.setDestination(9456U);
    msg.setDestinationEntity(208U);
    msg.op = 252U;
    msg.system.assign("LWDOBRDGCDVEIBCBYRJTJKTALKGTGLNWJMOMLOXKTQLRTONFUAYNPYBPNULZQSVLVJFIPXUA");
    msg.range = 0.25997267884292274;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.plan_ref = 480029631U;
    tmp_msg_0.id.assign("TYIDJOFYKPUCJCAAUKSTYJOWIXEIXPJTUMXIASEAVVUYOUCXMMZOXOEAVVBQWVKZJCYTOMFHLNWVCGPTDFMTHESHNMRYJDKLUQLGGLKAOEKRECKDPMXNDAIAWSIIHSOBWTZEKFNGYUDQPBDGWDCOWLFHURMBEZGWSLBVLCZNREKRH");
    tmp_msg_0.memento.assign("IIKBAGUVPZUCKDTQYJAMCGKTZOCBOVRCTFIFIOOUEZWVEMWOGJYUEMJDRQHQSLLI");
    tmp_msg_0.lat = 0.1404061427506913;
    tmp_msg_0.lon = 0.8734788898623539;
    tmp_msg_0.speed = 0.6875107424235893;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.duration = 57813U;
    tmp_msg_0.sys_a = 62525U;
    tmp_msg_0.sys_b = 14693U;
    tmp_msg_0.move_threshold = 0.8555868338634377;
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
    msg.setTimeStamp(0.14631598843151217);
    msg.setSource(28722U);
    msg.setSourceEntity(92U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(117U);
    msg.op = 119U;
    msg.system.assign("IWKVZCTNUIORQFDNULDVVQQXTTZIAVTTEFYEMYQCDGZMPJEHYULIFPTVJOEK");
    msg.range = 0.8365384631759902;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.36648402104887046);
    msg.setSource(13381U);
    msg.setSourceEntity(66U);
    msg.setDestination(57911U);
    msg.setDestinationEntity(176U);
    msg.op = 227U;
    msg.system.assign("KZGWGCHPHLBUEVXYDKCWVPAUYZWZEWOHFTHQTJVOSLXOUINWBGYFDBNQMYHKC");
    msg.range = 0.3235835860401859;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.18078290917162765;
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
    msg.setTimeStamp(0.926611282901585);
    msg.setSource(41543U);
    msg.setSourceEntity(5U);
    msg.setDestination(37459U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.08418945872011463);
    msg.setSource(4552U);
    msg.setSourceEntity(78U);
    msg.setDestination(5020U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.7609420645365652);
    msg.setSource(1979U);
    msg.setSourceEntity(125U);
    msg.setDestination(50033U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.6963228531031381);
    msg.setSource(59733U);
    msg.setSourceEntity(238U);
    msg.setDestination(32748U);
    msg.setDestinationEntity(244U);
    msg.list.assign("NCNEVFXWHQZYDYORAFQGVVYIDABOHPQFVDVMOXAZMOTJCPEKUQJJOXQBUOPUOYUFOYLCGKYSAMIGTAPZXJBHVUONJAHSWHXRNJKVIRNLGDIXTMLSBZDTAUXLEKSPNWGSKKHKPNELIEUHRMXNAWYVPJGWMXTNSY");

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
    msg.setTimeStamp(0.8313430069641781);
    msg.setSource(39693U);
    msg.setSourceEntity(235U);
    msg.setDestination(24887U);
    msg.setDestinationEntity(138U);
    msg.list.assign("LYQMTZWKLZNTBRTXWFDIDBVXYFGRZLUDZMVOJCKXVREPPQNMHBFYQAFHENVPPNIWJGSEEYHSBHABXDIETSTPABOJQSLQOYTMJANULCZFFCDWFHRYWVFESBCMNMMOUIDMGVJINLXUKWJZYLJPCONSAKMUQDYOIWBRQUCGWITKXWHGVLXJEGLUPOBHED");

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
    msg.setTimeStamp(0.9998454053011446);
    msg.setSource(14482U);
    msg.setSourceEntity(188U);
    msg.setDestination(17768U);
    msg.setDestinationEntity(107U);
    msg.list.assign("WKRIISOBRTPFWHIXCDULHLLJEIRXBDVVZYUSHIMVLKYHTKZDMEQSNBCDGJSOAMJNRUYTNCMSKGATPQUUHWKMYTTLHJQCFCTNNGUXZQBGALRUEPBHXTVAVPMPBJIKGLFWNTWBYXCFSORDFORFENEYJSJFYVXWVNXYXHGQELOXPMMDI");

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
    msg.setTimeStamp(0.6702309701139418);
    msg.setSource(34679U);
    msg.setSourceEntity(191U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(206U);
    msg.value = -2726;

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
    msg.setTimeStamp(0.2450396373623237);
    msg.setSource(38575U);
    msg.setSourceEntity(181U);
    msg.setDestination(36297U);
    msg.setDestinationEntity(167U);
    msg.value = -21305;

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
    msg.setTimeStamp(0.7434322139415568);
    msg.setSource(2971U);
    msg.setSourceEntity(83U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(187U);
    msg.value = 5220;

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
    msg.setTimeStamp(0.1404476444779209);
    msg.setSource(48945U);
    msg.setSourceEntity(8U);
    msg.setDestination(37960U);
    msg.setDestinationEntity(118U);
    msg.value = 0.9128681593077712;

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
    msg.setTimeStamp(0.903552317043828);
    msg.setSource(50997U);
    msg.setSourceEntity(110U);
    msg.setDestination(43452U);
    msg.setDestinationEntity(160U);
    msg.value = 0.4463204011095022;

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
    msg.setTimeStamp(0.9079283330395077);
    msg.setSource(35756U);
    msg.setSourceEntity(193U);
    msg.setDestination(43042U);
    msg.setDestinationEntity(144U);
    msg.value = 0.18100328182638736;

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
    msg.setTimeStamp(0.87545868177194);
    msg.setSource(2257U);
    msg.setSourceEntity(37U);
    msg.setDestination(45U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9432966861703291;

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
    msg.setTimeStamp(0.3844832934523257);
    msg.setSource(8757U);
    msg.setSourceEntity(166U);
    msg.setDestination(58067U);
    msg.setDestinationEntity(137U);
    msg.value = 0.3895550572150064;

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
    msg.setTimeStamp(0.47754378009533527);
    msg.setSource(25412U);
    msg.setSourceEntity(249U);
    msg.setDestination(43950U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5084788665985304;

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
    msg.setTimeStamp(0.21152342856489892);
    msg.setSource(38403U);
    msg.setSourceEntity(3U);
    msg.setDestination(52436U);
    msg.setDestinationEntity(132U);
    msg.validity = 4100U;
    msg.type = 58U;
    msg.utc_year = 27792U;
    msg.utc_month = 114U;
    msg.utc_day = 5U;
    msg.utc_time = 0.9122636334132397;
    msg.lat = 0.11220743176098358;
    msg.lon = 0.0990795681423996;
    msg.height = 0.7524258596484256;
    msg.satellites = 109U;
    msg.cog = 0.42109574499006497;
    msg.sog = 0.9910327904910651;
    msg.hdop = 0.9221885694752101;
    msg.vdop = 0.1559731174027862;
    msg.hacc = 0.9188686431868937;
    msg.vacc = 0.7018642395413459;

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
    msg.setTimeStamp(0.876505080827717);
    msg.setSource(35101U);
    msg.setSourceEntity(131U);
    msg.setDestination(11949U);
    msg.setDestinationEntity(20U);
    msg.validity = 38376U;
    msg.type = 75U;
    msg.utc_year = 43882U;
    msg.utc_month = 135U;
    msg.utc_day = 140U;
    msg.utc_time = 0.21922841895569334;
    msg.lat = 0.7177478105116543;
    msg.lon = 0.9161652467996514;
    msg.height = 0.8718928652449793;
    msg.satellites = 35U;
    msg.cog = 0.36467208432158893;
    msg.sog = 0.9778417389997047;
    msg.hdop = 0.03857659114409695;
    msg.vdop = 0.2794702516561268;
    msg.hacc = 0.7148033380382287;
    msg.vacc = 0.12114097266246748;

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
    msg.setTimeStamp(0.5315154912234649);
    msg.setSource(45733U);
    msg.setSourceEntity(57U);
    msg.setDestination(21631U);
    msg.setDestinationEntity(43U);
    msg.validity = 23109U;
    msg.type = 135U;
    msg.utc_year = 23936U;
    msg.utc_month = 83U;
    msg.utc_day = 36U;
    msg.utc_time = 0.6747949718425466;
    msg.lat = 0.09865711262858234;
    msg.lon = 0.05282618222319957;
    msg.height = 0.19245139541826128;
    msg.satellites = 58U;
    msg.cog = 0.04537997757865564;
    msg.sog = 0.48661665453179226;
    msg.hdop = 0.8196970783832719;
    msg.vdop = 0.335697371182076;
    msg.hacc = 0.19102433891691206;
    msg.vacc = 0.48868522974240103;

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
    msg.setTimeStamp(0.18972827616570287);
    msg.setSource(5699U);
    msg.setSourceEntity(75U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(233U);
    msg.time = 0.15781201619810437;
    msg.phi = 0.4184171878207883;
    msg.theta = 0.8553483665732238;
    msg.psi = 0.9086477194481833;
    msg.psi_magnetic = 0.30417478827857447;

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
    msg.setTimeStamp(0.8916788660812931);
    msg.setSource(19767U);
    msg.setSourceEntity(5U);
    msg.setDestination(59657U);
    msg.setDestinationEntity(179U);
    msg.time = 0.30211617755090037;
    msg.phi = 0.7951768008558584;
    msg.theta = 0.17714252202824998;
    msg.psi = 0.3686980051458858;
    msg.psi_magnetic = 0.9845840429045204;

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
    msg.setTimeStamp(0.42123979744498086);
    msg.setSource(25107U);
    msg.setSourceEntity(99U);
    msg.setDestination(20955U);
    msg.setDestinationEntity(182U);
    msg.time = 0.3672134702627281;
    msg.phi = 0.7832391904018746;
    msg.theta = 0.7816086614360696;
    msg.psi = 0.6083350841408505;
    msg.psi_magnetic = 0.18085107559069968;

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
    msg.setTimeStamp(0.47584468508943933);
    msg.setSource(29679U);
    msg.setSourceEntity(96U);
    msg.setDestination(60377U);
    msg.setDestinationEntity(92U);
    msg.time = 0.18866236260324154;
    msg.x = 0.39695267867782513;
    msg.y = 0.20029427780879516;
    msg.z = 0.45947975113853656;
    msg.timestep = 0.07591675970749523;

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
    msg.setTimeStamp(0.4855156220802853);
    msg.setSource(30179U);
    msg.setSourceEntity(173U);
    msg.setDestination(36178U);
    msg.setDestinationEntity(177U);
    msg.time = 0.9417747383778176;
    msg.x = 0.02160059268298553;
    msg.y = 0.9011945073560029;
    msg.z = 0.17838434848903983;
    msg.timestep = 0.808593698637831;

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
    msg.setTimeStamp(0.9491254413713939);
    msg.setSource(51495U);
    msg.setSourceEntity(243U);
    msg.setDestination(17U);
    msg.setDestinationEntity(203U);
    msg.time = 0.7528115171918288;
    msg.x = 0.001430856214588161;
    msg.y = 0.73195497372965;
    msg.z = 0.8452995503721711;
    msg.timestep = 0.29591199483869346;

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
    msg.setTimeStamp(0.41313743922744695);
    msg.setSource(21944U);
    msg.setSourceEntity(217U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(157U);
    msg.time = 0.45386424419491633;
    msg.x = 0.9094485628050388;
    msg.y = 0.5371882824407318;
    msg.z = 0.15582273230873844;

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
    msg.setTimeStamp(0.10212701449316741);
    msg.setSource(24865U);
    msg.setSourceEntity(226U);
    msg.setDestination(4788U);
    msg.setDestinationEntity(178U);
    msg.time = 0.12891277408410362;
    msg.x = 0.6082814288774403;
    msg.y = 0.8082940040195454;
    msg.z = 0.40145968168367463;

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
    msg.setTimeStamp(0.9009291205791616);
    msg.setSource(24882U);
    msg.setSourceEntity(158U);
    msg.setDestination(54043U);
    msg.setDestinationEntity(192U);
    msg.time = 0.24703631903681011;
    msg.x = 0.43774485707165567;
    msg.y = 0.2314867414461096;
    msg.z = 0.08181065211587835;

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
    msg.setTimeStamp(0.04988979794612858);
    msg.setSource(53246U);
    msg.setSourceEntity(173U);
    msg.setDestination(55070U);
    msg.setDestinationEntity(113U);
    msg.time = 0.5353065986171148;
    msg.x = 0.5004331997854531;
    msg.y = 0.26493923251453333;
    msg.z = 0.5779808054016399;

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
    msg.setTimeStamp(0.17296000351484364);
    msg.setSource(41503U);
    msg.setSourceEntity(231U);
    msg.setDestination(46023U);
    msg.setDestinationEntity(166U);
    msg.time = 0.9024691022159579;
    msg.x = 0.42799653814705174;
    msg.y = 0.16295999271361106;
    msg.z = 0.014376379336527356;

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
    msg.setTimeStamp(0.5172782384581069);
    msg.setSource(12133U);
    msg.setSourceEntity(215U);
    msg.setDestination(11490U);
    msg.setDestinationEntity(43U);
    msg.time = 0.5587397730394504;
    msg.x = 0.5636923965466458;
    msg.y = 0.41315177967602756;
    msg.z = 0.06027014050473034;

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
    msg.setTimeStamp(0.9943212981559383);
    msg.setSource(53541U);
    msg.setSourceEntity(119U);
    msg.setDestination(12273U);
    msg.setDestinationEntity(218U);
    msg.time = 0.9609662143228683;
    msg.x = 0.8384694609426153;
    msg.y = 0.47524021110351866;
    msg.z = 0.040609149352615725;

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
    msg.setTimeStamp(0.3060239111152412);
    msg.setSource(7593U);
    msg.setSourceEntity(48U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(230U);
    msg.time = 0.3654069129655455;
    msg.x = 0.5825832278512509;
    msg.y = 0.2711378813181575;
    msg.z = 0.5187867077388206;

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
    msg.setTimeStamp(0.9646918539321422);
    msg.setSource(39214U);
    msg.setSourceEntity(229U);
    msg.setDestination(2681U);
    msg.setDestinationEntity(10U);
    msg.time = 0.5155621461666862;
    msg.x = 0.012660935836079079;
    msg.y = 0.25071125276634354;
    msg.z = 0.48983539734072834;

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
    msg.setTimeStamp(0.6231204580950229);
    msg.setSource(49891U);
    msg.setSourceEntity(147U);
    msg.setDestination(29981U);
    msg.setDestinationEntity(189U);
    msg.validity = 121U;
    msg.x = 0.9109909579833418;
    msg.y = 0.6804789700949667;
    msg.z = 0.8651484851898528;

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
    msg.setTimeStamp(0.025000694962539205);
    msg.setSource(38625U);
    msg.setSourceEntity(87U);
    msg.setDestination(55452U);
    msg.setDestinationEntity(235U);
    msg.validity = 248U;
    msg.x = 0.47078324121822546;
    msg.y = 0.7147414359390803;
    msg.z = 0.8659912089123064;

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
    msg.setTimeStamp(0.8126106948031014);
    msg.setSource(56733U);
    msg.setSourceEntity(117U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(252U);
    msg.validity = 0U;
    msg.x = 0.20441060243333375;
    msg.y = 0.42684575427544924;
    msg.z = 0.9983708999432035;

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
    msg.setTimeStamp(0.02404864032589793);
    msg.setSource(12108U);
    msg.setSourceEntity(113U);
    msg.setDestination(22926U);
    msg.setDestinationEntity(27U);
    msg.validity = 205U;
    msg.x = 0.4078418824753127;
    msg.y = 0.429779375642794;
    msg.z = 0.2988362786352621;

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
    msg.setTimeStamp(0.8636064466054593);
    msg.setSource(44783U);
    msg.setSourceEntity(99U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(189U);
    msg.validity = 23U;
    msg.x = 0.133122940284908;
    msg.y = 0.14118455809596997;
    msg.z = 0.5298935202890804;

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
    msg.setTimeStamp(0.4891506254095618);
    msg.setSource(33482U);
    msg.setSourceEntity(175U);
    msg.setDestination(44006U);
    msg.setDestinationEntity(202U);
    msg.validity = 92U;
    msg.x = 0.1068591332260358;
    msg.y = 0.3939653727590302;
    msg.z = 0.19237329543197135;

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
    msg.setTimeStamp(0.35170066490279017);
    msg.setSource(51020U);
    msg.setSourceEntity(112U);
    msg.setDestination(16284U);
    msg.setDestinationEntity(10U);
    msg.time = 0.4888582363544923;
    msg.x = 0.9834591018536332;
    msg.y = 0.5910270108827956;
    msg.z = 0.7504773000845253;

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
    msg.setTimeStamp(0.6490720457563186);
    msg.setSource(63951U);
    msg.setSourceEntity(182U);
    msg.setDestination(12056U);
    msg.setDestinationEntity(219U);
    msg.time = 0.5862505808585979;
    msg.x = 0.387461516506051;
    msg.y = 0.3414116860334312;
    msg.z = 0.7364741076494816;

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
    msg.setTimeStamp(0.9004009337944097);
    msg.setSource(4862U);
    msg.setSourceEntity(149U);
    msg.setDestination(49149U);
    msg.setDestinationEntity(150U);
    msg.time = 0.6661924734881993;
    msg.x = 0.22327591189686757;
    msg.y = 0.20478751743319834;
    msg.z = 0.8585424162185505;

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
    msg.setTimeStamp(0.787861581823872);
    msg.setSource(42941U);
    msg.setSourceEntity(215U);
    msg.setDestination(19339U);
    msg.setDestinationEntity(57U);
    msg.validity = 202U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.45711099191211046;
    tmp_msg_0.y = 0.6333945930988524;
    tmp_msg_0.z = 0.12832456524015656;
    tmp_msg_0.phi = 0.5536229249858013;
    tmp_msg_0.theta = 0.4689223226369357;
    tmp_msg_0.psi = 0.5244794071778598;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5258045344731811;

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
    msg.setTimeStamp(0.027394353195823173);
    msg.setSource(36221U);
    msg.setSourceEntity(204U);
    msg.setDestination(15390U);
    msg.setDestinationEntity(135U);
    msg.validity = 24U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8612981813428423;
    tmp_msg_0.beam_height = 0.9596943809286331;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.10747269755017663;

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
    msg.setTimeStamp(0.20886334443803312);
    msg.setSource(46597U);
    msg.setSourceEntity(56U);
    msg.setDestination(16175U);
    msg.setDestinationEntity(160U);
    msg.validity = 159U;
    msg.value = 0.7592874617000457;

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
    msg.setTimeStamp(0.3638854776911997);
    msg.setSource(48957U);
    msg.setSourceEntity(250U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(82U);
    msg.value = 0.23764567225710753;

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
    msg.setTimeStamp(0.8961058471066874);
    msg.setSource(4092U);
    msg.setSourceEntity(180U);
    msg.setDestination(64201U);
    msg.setDestinationEntity(126U);
    msg.value = 0.40833136613360854;

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
    msg.setTimeStamp(0.8033684921506642);
    msg.setSource(10971U);
    msg.setSourceEntity(106U);
    msg.setDestination(19217U);
    msg.setDestinationEntity(175U);
    msg.value = 0.843438977508011;

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
    msg.setTimeStamp(0.9741414716198749);
    msg.setSource(31774U);
    msg.setSourceEntity(30U);
    msg.setDestination(22357U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9124626073354366;

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
    msg.setTimeStamp(0.14210454630643532);
    msg.setSource(19858U);
    msg.setSourceEntity(39U);
    msg.setDestination(28971U);
    msg.setDestinationEntity(240U);
    msg.value = 0.7060245302240902;

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
    msg.setTimeStamp(0.47745806722269557);
    msg.setSource(2001U);
    msg.setSourceEntity(139U);
    msg.setDestination(44066U);
    msg.setDestinationEntity(234U);
    msg.value = 0.08812790482685617;

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
    msg.setTimeStamp(0.6272426823915707);
    msg.setSource(29139U);
    msg.setSourceEntity(174U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5420225009115929;

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
    msg.setTimeStamp(0.18044508303317763);
    msg.setSource(3092U);
    msg.setSourceEntity(111U);
    msg.setDestination(60948U);
    msg.setDestinationEntity(220U);
    msg.value = 0.645905705371631;

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
    msg.setTimeStamp(0.7642130327428345);
    msg.setSource(64633U);
    msg.setSourceEntity(22U);
    msg.setDestination(63547U);
    msg.setDestinationEntity(106U);
    msg.value = 0.9844880656913289;

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
    msg.setTimeStamp(0.10124850541131969);
    msg.setSource(44833U);
    msg.setSourceEntity(165U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5146383342568996;

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
    msg.setTimeStamp(0.9441886262492446);
    msg.setSource(10441U);
    msg.setSourceEntity(124U);
    msg.setDestination(30066U);
    msg.setDestinationEntity(187U);
    msg.value = 0.0900040081048048;

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
    msg.setTimeStamp(0.49289117037992525);
    msg.setSource(11665U);
    msg.setSourceEntity(50U);
    msg.setDestination(12292U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7960713994000623;

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
    msg.setTimeStamp(0.7690118989805002);
    msg.setSource(8380U);
    msg.setSourceEntity(207U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(253U);
    msg.value = 0.6984927312148309;

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
    msg.setTimeStamp(0.15577774542875578);
    msg.setSource(34438U);
    msg.setSourceEntity(201U);
    msg.setDestination(50926U);
    msg.setDestinationEntity(156U);
    msg.value = 0.02650719558075687;

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
    msg.setTimeStamp(0.3500070752530554);
    msg.setSource(28344U);
    msg.setSourceEntity(182U);
    msg.setDestination(8088U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7367138301140136;

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
    msg.setTimeStamp(0.07773755027807727);
    msg.setSource(13515U);
    msg.setSourceEntity(38U);
    msg.setDestination(50481U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5291253860570383;

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
    msg.setTimeStamp(0.0013194529924526188);
    msg.setSource(39325U);
    msg.setSourceEntity(228U);
    msg.setDestination(40051U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9463879682323109;

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
    msg.setTimeStamp(0.5861930971668312);
    msg.setSource(20313U);
    msg.setSourceEntity(191U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5859494740833194;

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
    msg.setTimeStamp(0.16797175231348582);
    msg.setSource(58434U);
    msg.setSourceEntity(39U);
    msg.setDestination(54003U);
    msg.setDestinationEntity(220U);
    msg.value = 0.8507793461182862;

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
    msg.setTimeStamp(0.9950986093829921);
    msg.setSource(46638U);
    msg.setSourceEntity(189U);
    msg.setDestination(22061U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7738966936024612;

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
    msg.setTimeStamp(0.9333128843401627);
    msg.setSource(46968U);
    msg.setSourceEntity(71U);
    msg.setDestination(14946U);
    msg.setDestinationEntity(26U);
    msg.value = 0.6282277512986219;

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
    msg.setTimeStamp(0.6965663321356074);
    msg.setSource(12912U);
    msg.setSourceEntity(82U);
    msg.setDestination(270U);
    msg.setDestinationEntity(178U);
    msg.value = 0.4464618926238889;

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
    msg.setTimeStamp(0.14859398767420195);
    msg.setSource(40279U);
    msg.setSourceEntity(185U);
    msg.setDestination(25829U);
    msg.setDestinationEntity(177U);
    msg.value = 0.8618544489858408;

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
    msg.setTimeStamp(0.6828407300036414);
    msg.setSource(27112U);
    msg.setSourceEntity(174U);
    msg.setDestination(31838U);
    msg.setDestinationEntity(123U);
    msg.value = 0.2560098742880297;

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
    msg.setTimeStamp(0.8828756728120764);
    msg.setSource(37951U);
    msg.setSourceEntity(36U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(22U);
    msg.direction = 0.21578614672523577;
    msg.speed = 0.920260154574564;
    msg.turbulence = 0.7546183485413654;

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
    msg.setTimeStamp(0.5309772684383992);
    msg.setSource(62310U);
    msg.setSourceEntity(114U);
    msg.setDestination(62676U);
    msg.setDestinationEntity(224U);
    msg.direction = 0.9808382093090193;
    msg.speed = 0.15299494387748624;
    msg.turbulence = 0.3967497819593122;

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
    msg.setTimeStamp(0.12119525993011704);
    msg.setSource(54845U);
    msg.setSourceEntity(141U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(222U);
    msg.direction = 0.9114791220220376;
    msg.speed = 0.47693089314334636;
    msg.turbulence = 0.3627361408716836;

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
    msg.setTimeStamp(0.833841389513892);
    msg.setSource(36794U);
    msg.setSourceEntity(23U);
    msg.setDestination(51496U);
    msg.setDestinationEntity(200U);
    msg.value = 0.7209506544897148;

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
    msg.setTimeStamp(0.5593287114665507);
    msg.setSource(54934U);
    msg.setSourceEntity(191U);
    msg.setDestination(14800U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8039367381026562;

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
    msg.setTimeStamp(0.23382191905832184);
    msg.setSource(8278U);
    msg.setSourceEntity(23U);
    msg.setDestination(15750U);
    msg.setDestinationEntity(147U);
    msg.value = 0.03505846092189535;

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
    msg.setTimeStamp(0.9478527114068525);
    msg.setSource(35571U);
    msg.setSourceEntity(204U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(231U);
    msg.value.assign("IJWOENSSACNXSVFTYNDFRSEAZZBINGCBCYIJDRHGLLAUYVVTGRPBNPBJAIYAQXQZZPXWJUIKFLGPMEFDZKBZXTNDTPHVLFSEJIRGMUFXLHFSQXNMTVAXURQZORJUCGSELNIFIOHMFYZNQNAELDXBCMATCHUDGWSOFQIRTMVJTBKRPMQOWYWSDPKGHBLQUUSB");

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
    msg.setTimeStamp(0.054451150454741915);
    msg.setSource(34339U);
    msg.setSourceEntity(182U);
    msg.setDestination(23116U);
    msg.setDestinationEntity(180U);
    msg.value.assign("MGQCBGZXLRZHMIJRECODHXWJPJOCV");

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
    msg.setTimeStamp(0.14855935175195378);
    msg.setSource(8058U);
    msg.setSourceEntity(33U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(36U);
    msg.value.assign("OUQYCRZBNRALNUGQSCKTGVHCTUANRRBENLAIVLVTVWQLWGNFOLTFWFVGWODKAHIHIRPHGRLQTBGXRIXOIKWZEHVYESZDBWQXJCXXBYTSVTFKJCKGMVMMUMPSXMDSFHQECZNRJZMEDAOMIDAUGGFNYJMXHCQOETRIJKALSDPNPOYKH");

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
    msg.setTimeStamp(0.05533160856873054);
    msg.setSource(17035U);
    msg.setSourceEntity(33U);
    msg.setDestination(37115U);
    msg.setDestinationEntity(86U);
    const char tmp_msg_0[] = {18, -128, 81, 63, 24, -99, -76, 101, 112, -124, 77, 11, 85, 42, -84, -112, -66, 21, -112, 91, 25, 18, -40, 24, 74, 117, 90, -122, -59, -45, -60, 64, 122, -36, 16, 89, 24, -41, 125, 24, -51, 31, -28, 114, 10, 105, 44, 124, 18, -86, 3, -74, -10, 93, -120};
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
    msg.setTimeStamp(0.9167675384790199);
    msg.setSource(7133U);
    msg.setSourceEntity(178U);
    msg.setDestination(2641U);
    msg.setDestinationEntity(234U);
    const char tmp_msg_0[] = {99, 19, 65, -14, -93, -113, 92, 89, -44, -51, 56, 10, 99, -20, 56, -88, -128, -75, -37, -4, -60, 33, 98, 125, 31, 118, -66, -78, -46, -13, 63, 109, 41, 116, 72, -91, 23, 24, -98, 57, -17, -58, 95, -115, 97, 109, -87, -29, 34, 27, -30, 113, -4, -126, -12, -70, 122, -2, -112, -85, -36, -45, 118, -45, -60, 7, 11, -104, 67, 46, 48, -52, 39, 98, -81, 75, -89, -68, -93, -30, -29, -122, 2, -12, -117, -40, -24, -9, 70, 76, -123, 39, -45, 31, 0, 25, 40, 66, 70, 73, 79, -8, 103, -118, -52, -113, 61, -13, -70, -11, 34, -91, -23, -49, -62, 104, -97, -91, 4, -78, -55, -99, 16, 82, -105, 67, -15, -85, 73, -50, -84, 47, 116, -4, -53, 38, 84, -89, -70, 57, 20, -60, 100, -49, -44, -115, 90, 55, 114, 55, 27, 99, 8, -75, 18, 45};
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
    msg.setTimeStamp(0.03053209612570007);
    msg.setSource(53465U);
    msg.setSourceEntity(198U);
    msg.setDestination(19940U);
    msg.setDestinationEntity(57U);
    const char tmp_msg_0[] = {93, -43, 92, 93, 62, 105, -44, 24, 76, -91, 116, -68, 10, 111, -106, 95, 23, 96, 93, -85, 70, -38, 41, 53, -118, 6, -15, 122, -17, 122, -45, 80, -102, 91, -59, -39, -8, -12, -99, 9, -125, 83, -2, 46, 109, 25, -14, -42, -37, 54, 51, -30, 2, 7, -108, 28, 17, -23, -12, 29, 31, 75, -23, 98, -115, -119, 125, -11, -53, -9, -49, 81, -122, 53, 84, -83, 102, 108, -101, 114, -20, -29, 50};
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
    msg.setTimeStamp(0.22208107857435333);
    msg.setSource(1775U);
    msg.setSourceEntity(229U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(105U);
    msg.type = 102U;
    msg.frequency = 1142779381U;
    msg.min_range = 15666U;
    msg.max_range = 8076U;
    msg.bits_per_point = 238U;
    msg.scale_factor = 0.06417790430683701;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2880787867970892;
    tmp_msg_0.beam_height = 0.6127505048165881;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {111, 67, -63, -117, 33, -2, -96, 107, 51, 55, -36, 81, 110, 121, 25, -70, -34, -27, 110, -102, 6, -104, 24, 107, -123, 11, 82, 68, -6, 45, 102, -31, 112, 50, 24, -61, 118, -27, -16, -83, -90, -120, -49, 89, -107, -60, 71, -46, 107, 109, -67, -52, -30, -29, -12, 18, 98, -18, -53, 39, -55, 41, -90, -7, -55, 46, -78, 106, 84, -104, -34, 109, -115, -38, 68, 60, -122, 125, 47, 102, 83, 50, -59, 5, -86, 61, 101, 70, -34, -128, -82, -29, -45, -52, 58, -121, -122, 57, -82, -115, -34, -56, 114, -20, -30, -124, 16, -29, -4, 15, -101, -19, 110, -69, 9, -4, -24, -97, -112, -66, -9, -25, -31, -121, 125, 88, 35, -72, 44, -96, -63, 4, -14, -106, 1, 93, 68, 6, -65, -29, 2, 53, -26, 86, -19, 56, 70, 46, 51, 107, 2, -19, -44, -59, -61, 16, -123, -22, -92, -2, -64, -28, 19, 69, -98, -125, 48, 126, -83, -120, -86, -116, -32, -59, 47, 12, 12, 26, 29, -113, 95, 74, -110, 0, -80, -3, 111, -7, 86, -97, 124, -105, 89, 121, 58, -111, 86, -70, 81, 97, -75, -120, -4, 73, 37, -121, -62, -8, 74, -59, 112, 52, -14, -59, 110, -4, -122, 111, -94, 92, 83, 80, -93, -111, 18, -41, 74, -80, -60, -88, -46, 40, -49, 97, 90, 103, -34, -1, 30, -17, -120, -63, 77, 80, 6, -11};
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
    msg.setTimeStamp(0.6359239389461934);
    msg.setSource(64471U);
    msg.setSourceEntity(97U);
    msg.setDestination(14817U);
    msg.setDestinationEntity(200U);
    msg.type = 136U;
    msg.frequency = 3012839250U;
    msg.min_range = 57457U;
    msg.max_range = 56834U;
    msg.bits_per_point = 145U;
    msg.scale_factor = 0.6459037192382029;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3855966285239859;
    tmp_msg_0.beam_height = 0.2908075536697463;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-123, 124, 36, -43, -117, -71, 104, 118, 11, 49, 52, -29, 24, -76, 48, 120, -111, 102, 106, 48, 105, 37, -6, 6, -2, 118, 86, 117, -123, -24, -32, 126, -37, 11, 2, -77, 54, 111, 51, -126, -108, -116, -94, 59, -62, -67, 108, -43, -128, -16, -59, -62, -55, 120, -62, 101, 82, 95, -13, 68, -85, 76, -102, -80, -122, 103, 41, 30, -119, 15, -31, -119, 82, 110, -85, -59, 43, -90, -62, -42, -78, 63, 1, -108, -41, -59, 60, -128, -114, 114, 123, -59, 4, 120, 53, -45, 56, 77, -128, 69, 88, 27, 13, -116, 117, -98, 76, -43, -79, 47, -59, 43, -12, -41, -31, 51, 66, 8, 17, -81, -114, 114, 11, -28, 97, 33, 85, -104, 107, 125, 92, -34, -97, -124, -42, 20, 60, 85, -65, -29, 68, 27, -67, -2, 125, -35, 74, 18, -46, 91, 57, -25, 8, -42, 53, 67, 111, -33, 123, -47, -121, -26, 122, -97, -49, -50, 59, 56, -5, -36};
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
    msg.setTimeStamp(0.6040557570634979);
    msg.setSource(52416U);
    msg.setSourceEntity(141U);
    msg.setDestination(52300U);
    msg.setDestinationEntity(192U);
    msg.type = 103U;
    msg.frequency = 509997412U;
    msg.min_range = 33974U;
    msg.max_range = 26740U;
    msg.bits_per_point = 134U;
    msg.scale_factor = 0.7493944442636997;
    const char tmp_msg_0[] = {106, -42, 85, -34, 75, -65, -108, -58, -110, 36, -23, 4, 98, -127, -2, -103, -63, 40, 31, -33, 99, -55, -39, -123, -68, 124, -114, 53, 83, -66, -110, -84, 15, 85, -116, 14, 98, -7, -62, -33, 4, 57, -16, -75, 58, -10, -67, 114, -65, -119, -24, 95, -109, -68, -106, -28, 113, 103, -5, 54, 6, 112, -68, -10, 81, -103, 27, -36, -61, -32, -65, 48, 92, 37, -10, -55, 108, -37, 10, 48, 93, 67, -29, -6, -58, -63, -122, 62, 74, -89, 107, 16, 54, -16, 53, -30, 73, 62, -39, -17, 46, 23, 113, -63, -111, -86, -111, -100, -107, 22, -66, -63, 40, 106, -93, 65, -90, -39, -100, -50, -61, -53, -17, -79, -7, -50, 63, 82, -64, 99, 107, 70, -14, 70, -43, 50, 6, -79, 14, -10, 18, -71, 60, 0, -96, -71, -86, -10, 67, -93, -72, 98, -67, -90, 3, 116, 106, 104, 126, -115, -79, 110, 51, -49, -68, -106, -46, 35, 91, -53, -44, 10, -60, -103, 64, -6, 38, 100, -120, -4, -59, 105, 103, -95, -29, 112, 119, 18, -80, -88, 88, -88, 104, 70, -12, -91, -75, 58, 31, -96, 65, 14, 59, -7, 117, -12, -43, 107, -92, -29, 66, -124, -91, 49, 43, 86, -30, 110, 29, 70, -120, 116, -123, 21, 101, 59, -31, 48, 74, -5, 2, -96, -20, -23, -76, 0, 0, 118, 102, 59, -68, 17, 80, -54, 8, -22, -55, -15, 57, 47, -16};
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
    msg.setTimeStamp(0.2692120789160948);
    msg.setSource(25971U);
    msg.setSourceEntity(191U);
    msg.setDestination(39161U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.4883344760597266);
    msg.setSource(46031U);
    msg.setSourceEntity(25U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.4114484963331678);
    msg.setSource(31061U);
    msg.setSourceEntity(223U);
    msg.setDestination(51641U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.8506811150365894);
    msg.setSource(35986U);
    msg.setSourceEntity(88U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(90U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.8319019507318332);
    msg.setSource(50580U);
    msg.setSourceEntity(198U);
    msg.setDestination(46449U);
    msg.setDestinationEntity(73U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.6021262885446043);
    msg.setSource(60830U);
    msg.setSourceEntity(57U);
    msg.setDestination(45996U);
    msg.setDestinationEntity(171U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.5824654662057744);
    msg.setSource(2641U);
    msg.setSourceEntity(185U);
    msg.setDestination(164U);
    msg.setDestinationEntity(70U);
    msg.value = 0.8674775591227033;
    msg.confidence = 0.5053002036268691;
    msg.opmodes.assign("LAYRUWOUKSARNQWYDHBPVSMUMNSGWSBEHPRJSEMFNBXHMZSCGEYGBWTKJGFZXGPMKQRNDOQLKIEOJDR");

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
    msg.setTimeStamp(0.4027520394612427);
    msg.setSource(13174U);
    msg.setSourceEntity(127U);
    msg.setDestination(15683U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6013988743571483;
    msg.confidence = 0.9766977914222421;
    msg.opmodes.assign("ZNUXZJWNUNIMRJPTWLDFREHIJBKIFVEUPTGYAGANXFJWDMAEMYISQDCYHBAHQFYAGP");

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
    msg.setTimeStamp(0.9509213667784245);
    msg.setSource(15394U);
    msg.setSourceEntity(235U);
    msg.setDestination(16066U);
    msg.setDestinationEntity(7U);
    msg.value = 0.12337699809262515;
    msg.confidence = 0.9875659559925798;
    msg.opmodes.assign("MVWRCGSLKEJYVZJSDFIBRRAIHEATVGNPWZFUORNPLEBQQXOTMKGAEPRUNMUMTJIOBXMDODMEKDYTLEVOERUKQWPRKWAYMURMFYFZZFXYPKICLIJSNLNDZSSNWGYKLHVJQCYKRQUCTEDQGWNSAAIBXFXCAHPHVLFUGONBUAOXFYVJGWZCUBXGWLEKLTLTMTTAFBAXPJPQBROFDYEUNBVVSXNQOSIIIZVCHZDPWDGPOQD");

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
    msg.setTimeStamp(0.7095652297555763);
    msg.setSource(10541U);
    msg.setSourceEntity(28U);
    msg.setDestination(13584U);
    msg.setDestinationEntity(18U);
    msg.itow = 1707616782U;
    msg.lat = 0.31129558965336435;
    msg.lon = 0.6660986631283832;
    msg.height_ell = 0.3365723547729954;
    msg.height_sea = 0.3695161797694735;
    msg.hacc = 0.8289946453587426;
    msg.vacc = 0.007543127215844603;
    msg.vel_n = 0.34212836178903183;
    msg.vel_e = 0.002049216890261718;
    msg.vel_d = 0.39668983175610495;
    msg.speed = 0.31206378966398685;
    msg.gspeed = 0.7972346872844907;
    msg.heading = 0.1680224704159219;
    msg.sacc = 0.18405540339229476;
    msg.cacc = 0.155498891626889;

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
    msg.setTimeStamp(0.969946664875627);
    msg.setSource(9573U);
    msg.setSourceEntity(151U);
    msg.setDestination(64320U);
    msg.setDestinationEntity(33U);
    msg.itow = 30817227U;
    msg.lat = 0.4679879703314994;
    msg.lon = 0.03031676982432363;
    msg.height_ell = 0.76246978545286;
    msg.height_sea = 0.24775369803152447;
    msg.hacc = 0.0975896097283746;
    msg.vacc = 0.11355220037576386;
    msg.vel_n = 0.9414873483327548;
    msg.vel_e = 0.07823639438300334;
    msg.vel_d = 0.416483189112817;
    msg.speed = 0.9735094443751877;
    msg.gspeed = 0.8827524835153807;
    msg.heading = 0.3598609305447017;
    msg.sacc = 0.9615505668122579;
    msg.cacc = 0.28020356230675936;

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
    msg.setTimeStamp(0.857274091770931);
    msg.setSource(50658U);
    msg.setSourceEntity(37U);
    msg.setDestination(4999U);
    msg.setDestinationEntity(236U);
    msg.itow = 1580095586U;
    msg.lat = 0.7844565734340189;
    msg.lon = 0.9195329160877855;
    msg.height_ell = 0.7679059924618254;
    msg.height_sea = 0.75722483038201;
    msg.hacc = 0.06952144834425389;
    msg.vacc = 0.25087804144314996;
    msg.vel_n = 0.8784654999499857;
    msg.vel_e = 0.7689095117946891;
    msg.vel_d = 0.34055044034475046;
    msg.speed = 0.683962064019644;
    msg.gspeed = 0.423911813911409;
    msg.heading = 0.4377060178061998;
    msg.sacc = 0.05141664575262184;
    msg.cacc = 0.4284468185673884;

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
    msg.setTimeStamp(0.20045042304498828);
    msg.setSource(10468U);
    msg.setSourceEntity(179U);
    msg.setDestination(32112U);
    msg.setDestinationEntity(190U);
    msg.id = 23U;
    msg.value = 0.7762714814722997;

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
    msg.setTimeStamp(0.653835647208048);
    msg.setSource(45710U);
    msg.setSourceEntity(8U);
    msg.setDestination(15808U);
    msg.setDestinationEntity(144U);
    msg.id = 151U;
    msg.value = 0.8917381072171562;

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
    msg.setTimeStamp(0.3194897474712627);
    msg.setSource(23044U);
    msg.setSourceEntity(200U);
    msg.setDestination(4166U);
    msg.setDestinationEntity(198U);
    msg.id = 90U;
    msg.value = 0.38128691484783084;

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
    msg.setTimeStamp(0.5774557498946564);
    msg.setSource(36986U);
    msg.setSourceEntity(237U);
    msg.setDestination(17820U);
    msg.setDestinationEntity(72U);
    msg.x = 0.9467304383640168;
    msg.y = 0.32895062294705457;
    msg.z = 0.24774918731564044;
    msg.phi = 0.9028756703526296;
    msg.theta = 0.1886517812408851;
    msg.psi = 0.18036123992833186;

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
    msg.setTimeStamp(0.6477917604569823);
    msg.setSource(2642U);
    msg.setSourceEntity(17U);
    msg.setDestination(33700U);
    msg.setDestinationEntity(40U);
    msg.x = 0.22809109922785742;
    msg.y = 0.29948669671914485;
    msg.z = 0.6385629795598818;
    msg.phi = 0.37354579090223805;
    msg.theta = 0.29262471626174347;
    msg.psi = 0.4579352291225426;

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
    msg.setTimeStamp(0.2843726556557319);
    msg.setSource(43973U);
    msg.setSourceEntity(0U);
    msg.setDestination(19986U);
    msg.setDestinationEntity(0U);
    msg.x = 0.2555139275104824;
    msg.y = 0.5719869890093263;
    msg.z = 0.9893516553571643;
    msg.phi = 0.15694802099932492;
    msg.theta = 0.7165907734154117;
    msg.psi = 0.25829337806950037;

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
    msg.setTimeStamp(0.1838924835344471);
    msg.setSource(46987U);
    msg.setSourceEntity(77U);
    msg.setDestination(11224U);
    msg.setDestinationEntity(6U);
    msg.beam_width = 0.5179870627651294;
    msg.beam_height = 0.24269330643529197;

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
    msg.setTimeStamp(0.33461119198508626);
    msg.setSource(65245U);
    msg.setSourceEntity(95U);
    msg.setDestination(7048U);
    msg.setDestinationEntity(170U);
    msg.beam_width = 0.8924532168123287;
    msg.beam_height = 0.8489018532202941;

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
    msg.setTimeStamp(0.1242346894073072);
    msg.setSource(35608U);
    msg.setSourceEntity(194U);
    msg.setDestination(6290U);
    msg.setDestinationEntity(49U);
    msg.beam_width = 0.29889563027681687;
    msg.beam_height = 0.8789906245027741;

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
    msg.setTimeStamp(0.8902035836931952);
    msg.setSource(58447U);
    msg.setSourceEntity(46U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(160U);
    msg.sane = 168U;

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
    msg.setTimeStamp(0.3844561933613506);
    msg.setSource(39249U);
    msg.setSourceEntity(85U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(34U);
    msg.sane = 84U;

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
    msg.setTimeStamp(0.7977331280493752);
    msg.setSource(2501U);
    msg.setSourceEntity(3U);
    msg.setDestination(7485U);
    msg.setDestinationEntity(167U);
    msg.sane = 81U;

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
    msg.setTimeStamp(0.9580888422620867);
    msg.setSource(61955U);
    msg.setSourceEntity(9U);
    msg.setDestination(50991U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5522300477241631;

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
    msg.setTimeStamp(0.010624020154455627);
    msg.setSource(6519U);
    msg.setSourceEntity(217U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9026172390371947;

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
    msg.setTimeStamp(0.5634310160649056);
    msg.setSource(62070U);
    msg.setSourceEntity(41U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(210U);
    msg.value = 0.09989047124830064;

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
    msg.setTimeStamp(0.003093569161889631);
    msg.setSource(30708U);
    msg.setSourceEntity(46U);
    msg.setDestination(16556U);
    msg.setDestinationEntity(80U);
    msg.value = 0.08799196179723578;

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
    msg.setTimeStamp(0.5043180921750998);
    msg.setSource(44381U);
    msg.setSourceEntity(234U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(170U);
    msg.value = 0.345330163697361;

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
    msg.setTimeStamp(0.5626275943181774);
    msg.setSource(14693U);
    msg.setSourceEntity(184U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(20U);
    msg.value = 0.3917110951246231;

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
    msg.setTimeStamp(0.23583753769409432);
    msg.setSource(37416U);
    msg.setSourceEntity(130U);
    msg.setDestination(18799U);
    msg.setDestinationEntity(211U);
    msg.value = 0.5444880455929764;

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
    msg.setTimeStamp(0.5553679501501775);
    msg.setSource(699U);
    msg.setSourceEntity(93U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7607559768987229;

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
    msg.setTimeStamp(0.4731544044678131);
    msg.setSource(6876U);
    msg.setSourceEntity(11U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(144U);
    msg.value = 0.3641324195775901;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.0884535293881118);
    msg.setSource(11238U);
    msg.setSourceEntity(82U);
    msg.setDestination(41278U);
    msg.setDestinationEntity(242U);
    msg.id = 74U;
    msg.zoom = 232U;
    msg.action = 30U;

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
    msg.setTimeStamp(0.45781137978629083);
    msg.setSource(36881U);
    msg.setSourceEntity(38U);
    msg.setDestination(2794U);
    msg.setDestinationEntity(32U);
    msg.id = 155U;
    msg.zoom = 186U;
    msg.action = 125U;

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
    msg.setTimeStamp(0.7070969558302);
    msg.setSource(1953U);
    msg.setSourceEntity(222U);
    msg.setDestination(13334U);
    msg.setDestinationEntity(243U);
    msg.id = 91U;
    msg.zoom = 179U;
    msg.action = 210U;

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
    msg.setTimeStamp(0.9872445506489493);
    msg.setSource(25365U);
    msg.setSourceEntity(247U);
    msg.setDestination(36426U);
    msg.setDestinationEntity(23U);
    msg.id = 158U;
    msg.value = 0.04356519978263629;

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
    msg.setTimeStamp(0.7604269259078172);
    msg.setSource(3009U);
    msg.setSourceEntity(187U);
    msg.setDestination(41117U);
    msg.setDestinationEntity(229U);
    msg.id = 146U;
    msg.value = 0.81929543458902;

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
    msg.setTimeStamp(0.685438101465631);
    msg.setSource(33064U);
    msg.setSourceEntity(119U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(205U);
    msg.id = 106U;
    msg.value = 0.5313363706190313;

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
    msg.setTimeStamp(0.1513456676808269);
    msg.setSource(42368U);
    msg.setSourceEntity(216U);
    msg.setDestination(64443U);
    msg.setDestinationEntity(248U);
    msg.id = 195U;
    msg.value = 0.363215785532228;

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
    msg.setTimeStamp(0.7922679401669769);
    msg.setSource(36707U);
    msg.setSourceEntity(99U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(137U);
    msg.id = 98U;
    msg.value = 0.5886817888192223;

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
    msg.setTimeStamp(0.08238197167814743);
    msg.setSource(28294U);
    msg.setSourceEntity(119U);
    msg.setDestination(40401U);
    msg.setDestinationEntity(8U);
    msg.id = 223U;
    msg.value = 0.48973272022886727;

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
    msg.setTimeStamp(0.2628060993426101);
    msg.setSource(1498U);
    msg.setSourceEntity(100U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(72U);
    msg.id = 177U;
    msg.angle = 0.35601141865695773;

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
    msg.setTimeStamp(0.4686169023333957);
    msg.setSource(46732U);
    msg.setSourceEntity(243U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(111U);
    msg.id = 208U;
    msg.angle = 0.5145653804431435;

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
    msg.setTimeStamp(0.23701183343998167);
    msg.setSource(24428U);
    msg.setSourceEntity(40U);
    msg.setDestination(39945U);
    msg.setDestinationEntity(164U);
    msg.id = 186U;
    msg.angle = 0.6870921904530484;

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
    msg.setTimeStamp(0.5363968444590428);
    msg.setSource(63249U);
    msg.setSourceEntity(86U);
    msg.setDestination(28712U);
    msg.setDestinationEntity(124U);
    msg.op = 95U;
    msg.actions.assign("CIOGRXPPQDCNUYLGMNUUGKDFJWVCAZCDEXAQRVSAMWKKTZIJHNDXPOQYPSTXKJFAGNFRGPVZXCQQSACZEBLCPOGMOVFIHACANLYJPIXBKJSHYLWNBBJFJDGVWCBVVJZG");

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
    msg.setTimeStamp(0.6255659953220942);
    msg.setSource(9212U);
    msg.setSourceEntity(212U);
    msg.setDestination(517U);
    msg.setDestinationEntity(109U);
    msg.op = 48U;
    msg.actions.assign("ZBLBUYTMJJKPJWXIGRCNHPPFOGVJMSXPOHJDDCSMYFIZNPWKGHLXLDYRZKERNOFUJKGRTQIGUATOOWSFQWVAPFSTZMDTYRFHMCYWRRFKAYJVSOGGMVMDPUASBZXNKQLLAJKQKMGGIRYNZCQEAXVNISUFTAZUECDHCYPWIRESQBXXPBXVELTWVNLUSEBOWULJZIDZEIBNEAFDWCVN");

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
    msg.setTimeStamp(0.2912136952182901);
    msg.setSource(23477U);
    msg.setSourceEntity(115U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(250U);
    msg.op = 152U;
    msg.actions.assign("GQSQMBCLPWFMMDAGCAYCZAFZVLDEGBIZJQUQYATBQYXHVALVVERKEYPEZCFVDIYXMLPGJNTEVUMDCXFODQSMEUZQTNSBFKOGNKGRLHUQWGBMDTDMAJHIUREVTDXLKXNWWKSORDHNSSYHBBSHHJAWUICGKNTPCLEBOJJMAXJSKPVFBQNXRVEL");

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
    msg.setTimeStamp(0.5581388928879575);
    msg.setSource(30500U);
    msg.setSourceEntity(114U);
    msg.setDestination(44582U);
    msg.setDestinationEntity(181U);
    msg.actions.assign("UXSOOWNYGFRSUSHKPRMIEAVOVGGVSCCNLPVYSWLDKWRODITXQTZ");

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
    msg.setTimeStamp(0.6691153187677178);
    msg.setSource(7105U);
    msg.setSourceEntity(223U);
    msg.setDestination(55860U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("NWIOJKQQPPRCGECULWZEMBJNQXLTLVUKIKMYIYQTHPXMZFNDEOXHVFJKSADFONLDXFEVTTVCRURBKUWPZLYAIJKLMWJHDFRLCATYNERGBLFOPWUDGKWCYTDCCBSOPVVNQASULTRDXWDBSNFLQIWAYQZBQMUHKQKKPAVIVFJZHUIXNMJGHCIIEPHGMBTPXXRSSSSERJSUDEMUBMZGNHMXOATYYGECOAOZRCISZZJGAAZD");

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
    msg.setTimeStamp(0.9719233446046855);
    msg.setSource(57885U);
    msg.setSourceEntity(150U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(198U);
    msg.actions.assign("FJXHWKSGWZAZMCFJTBPKUVYGIFRWCIXPMOXSLFNCMOSMVUEMQBIVTBKUTEGDQAMLQCJMVNWALRTPLIIJEHMFWDCDWJJAJLASZTSWYJZDOMEGCNNYRYXQJUZTMLWIIDBEQRRUDLZIIVVHVBYKXKSUPEKFEZG");

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
    msg.setTimeStamp(0.013150545719528894);
    msg.setSource(56029U);
    msg.setSourceEntity(116U);
    msg.setDestination(20044U);
    msg.setDestinationEntity(38U);
    msg.button = 69U;
    msg.value = 162U;

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
    msg.setTimeStamp(0.9817786098380238);
    msg.setSource(62775U);
    msg.setSourceEntity(199U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(43U);
    msg.button = 89U;
    msg.value = 70U;

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
    msg.setTimeStamp(0.7201096578534121);
    msg.setSource(25632U);
    msg.setSourceEntity(71U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(244U);
    msg.button = 30U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.9408163067675757);
    msg.setSource(7686U);
    msg.setSourceEntity(155U);
    msg.setDestination(36044U);
    msg.setDestinationEntity(73U);
    msg.op = 168U;
    msg.text.assign("TPIIWLTSXMDAVJDFWGAVCSDUPHHLTEQBTJPMTTQBYKUWEOWELNAAVUHIZBKIEOYIVBXSXJQHNFZKTSQLZADJNGNAKBJZKGQTCWOYWXNTECYRUHGFKVPPZQMJURCSXYAIBXRLEQKRERCDMKPKNQRBJHUJBHLEYNGWDXJUMXPNUXCHLWSAVOZQFEVNZRVCSILRFGCUXZOVROEFHYVFOAMRBPZWDTKBIYYOQSAIDGSCDPZS");

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
    msg.setTimeStamp(0.5999821338408432);
    msg.setSource(60157U);
    msg.setSourceEntity(132U);
    msg.setDestination(46730U);
    msg.setDestinationEntity(68U);
    msg.op = 246U;
    msg.text.assign("NQHMDFTHARCPAJLJQVNWPMDNRUZIGAZNLMVLJLBHOKUTYXIRHTWYD");

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
    msg.setTimeStamp(0.7058121676529325);
    msg.setSource(10677U);
    msg.setSourceEntity(197U);
    msg.setDestination(22100U);
    msg.setDestinationEntity(151U);
    msg.op = 44U;
    msg.text.assign("DVHGXDMZEYLVACVYJWINTXWXZDVOPXINIWEYJSNWUAPNJQOLVQRAERSGFKYGRHHQFCBELREAFDVHWGQQGHOBLMJEVLSGNEQHPBUWYDPPPAFRXLZCJDSFXIOOXCMVUTGRMUOLHQTIGMMSEYCSEIJOCQKITNZBKFPJMZJRCJWQIBKYBXOTNSS");

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
    msg.setTimeStamp(0.5629424919498364);
    msg.setSource(60735U);
    msg.setSourceEntity(101U);
    msg.setDestination(34623U);
    msg.setDestinationEntity(105U);
    msg.op = 28U;
    msg.time_remain = 0.3614204424593146;
    msg.sched_time = 0.5693971452731964;

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
    msg.setTimeStamp(0.7110227179005455);
    msg.setSource(26940U);
    msg.setSourceEntity(143U);
    msg.setDestination(45284U);
    msg.setDestinationEntity(126U);
    msg.op = 118U;
    msg.time_remain = 0.4273186144210822;
    msg.sched_time = 0.3797166886635581;

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
    msg.setTimeStamp(0.9799029045004828);
    msg.setSource(29925U);
    msg.setSourceEntity(214U);
    msg.setDestination(16257U);
    msg.setDestinationEntity(203U);
    msg.op = 40U;
    msg.time_remain = 0.19970245962201372;
    msg.sched_time = 0.16590094352389695;

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
    msg.setTimeStamp(0.1134085429664462);
    msg.setSource(44382U);
    msg.setSourceEntity(48U);
    msg.setDestination(39598U);
    msg.setDestinationEntity(203U);
    msg.name.assign("HAGFJFFXEVIOMQRSMUOXWJIRUOYLXPJHRTXMCKKZVEALSCBFKVBUBPZLTCRKOFWPPIFGIYMAORLFZFJUWYMXHAHKHGDCLFONJYSCIYUGURCWETNHZY");
    msg.op = 215U;
    msg.sched_time = 0.5885138554013153;

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
    msg.setTimeStamp(0.1671456596996017);
    msg.setSource(3944U);
    msg.setSourceEntity(9U);
    msg.setDestination(16312U);
    msg.setDestinationEntity(235U);
    msg.name.assign("IEUKVRQWVUHNPFJDIZYVDGYCQEGBTTJPNQLCOBNUZCLSLSFLHLBKZKFOGJSBOHSXXCWHICBNICLODFSMUTKSAGZJLQUODPJFJKXEGNWYWNRHSORVOIMNMKFZJECGAULVIHWFZJMXFAEMADUJVRIDAFUVITGIVOAPHYKGAPQSPXQXVTSHWVBRLNRZTMCRBCPABENAPHOTU");
    msg.op = 1U;
    msg.sched_time = 0.6164219674799528;

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
    msg.setTimeStamp(0.8012246292227755);
    msg.setSource(5232U);
    msg.setSourceEntity(141U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(84U);
    msg.name.assign("KGJXILSSVRWZGLYEIYYRCAXQDNUBUNFPPWUIPMSCQEDBPRYFAXIOJCLWYHUVLFIBUAKAWENQSULVNZHNDJUM");
    msg.op = 94U;
    msg.sched_time = 0.589103724879131;

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
    msg.setTimeStamp(0.8424916914451009);
    msg.setSource(47697U);
    msg.setSourceEntity(78U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.2240129903371999);
    msg.setSource(39381U);
    msg.setSourceEntity(77U);
    msg.setDestination(9560U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.9045059117105385);
    msg.setSource(59971U);
    msg.setSourceEntity(118U);
    msg.setDestination(20057U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.4919356362193533);
    msg.setSource(43482U);
    msg.setSourceEntity(204U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(224U);
    msg.name.assign("QHXJCPXYWIGGNXXLATUZVLVTBYNSHPVNOVDOLEWWVASZMOIGMRZZOGQOKNTYTVHMURNLXEEOWALFGJGZHUFWKGYBPEY");
    msg.state = 51U;

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
    msg.setTimeStamp(0.5028285623874238);
    msg.setSource(41000U);
    msg.setSourceEntity(122U);
    msg.setDestination(42404U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ZKZFZGUNVCWIJIKMPOBMPSTJMZBYERNKTBWDRRPZCYHKNNPDWPQSWIJXHAXXUIFZVMQSEEZDCRFVEMVFBWDVQXKGMMCYBXCLOTORWMGJYDLPHJEUBPHTWUIUOLDMDTDLNTOJRCFFZRLXELCJSADNRQXNQXKYVQLCHFLFOAYJZSIAULGNEAUSORCABMVSBIGTXIHXNUYIAAQSGKBVEQJYFKPPGEVJLIWFUWSBHANZRGCVKGYUKOWOTOSAHD");
    msg.state = 165U;

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
    msg.setTimeStamp(0.3520503594257852);
    msg.setSource(57172U);
    msg.setSourceEntity(43U);
    msg.setDestination(26438U);
    msg.setDestinationEntity(217U);
    msg.name.assign("CWHLLLEXEADRTZSIRRDNSPLCCKTAQOERGCZLKVVGXSZMRDGGRJTQYQNFOJCTUBGNPPQDFPFMEOYXKVUUFWKLKZOQPVRFINHXXHTHWIMSLVEJKBMOPNUWWJNISUDPETQBSYAYJGHVAQHXVXBZWTVBDPPMPEHSGAWIBJCUFDKOQMYZSLBDHWBOAKIUVDGHFDYCBNZTBRFXOGWAQFZLQAGRJCEKNL");
    msg.state = 216U;

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
    msg.setTimeStamp(0.405818628873968);
    msg.setSource(53350U);
    msg.setSourceEntity(168U);
    msg.setDestination(11955U);
    msg.setDestinationEntity(47U);
    msg.name.assign("BKMGSJAQUHAQNJIPTIGDAOXUHZJXQRWTYOWUMFYYGMCVLXLNOHEPTMDJPCGTREEVZBXNLCFQAYVFHSFNWOTWXDGQKCFMWMQAWMSVZUDOMODEHWSRZIQFCSRNUBHKVZTPDERWKISXNLYP");
    msg.value = 59U;

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
    msg.setTimeStamp(0.4538219750073441);
    msg.setSource(29989U);
    msg.setSourceEntity(89U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(59U);
    msg.name.assign("UCFXDHOJKHKBSQHHUVHAXXTGVCEXZTPOZGMVSWBCZYISGPDWAZKVJTKFYXATFQXMRNRIAGHLYMQXZVVCBSWFKODOUDYKSCDYQAAEWXVLMITCUISPJNGULPHWLWGOJWQINIZGLHYFSZRKTPBONVFEBCYTPZNPLOUCBYEDMDHAFFMKQPGBUXORUMRLRBNTNWQPIMORGEQZEWSIQSKXLNLJHMNGENBDVYJQCISTOMCAEAJFPIAFK");
    msg.value = 245U;

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
    msg.setTimeStamp(0.9789917494047647);
    msg.setSource(27703U);
    msg.setSourceEntity(223U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(35U);
    msg.name.assign("OGUOSRHYYCNQXBFUCUSVEFMPYAEKFVCSJWZEWKCNOQBDSZMCHKOXAXPYEQBKPXROLMTFXFJLTTVZRMFRAQSYB");
    msg.value = 79U;

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
    msg.setTimeStamp(0.8755749621066442);
    msg.setSource(20969U);
    msg.setSourceEntity(44U);
    msg.setDestination(13682U);
    msg.setDestinationEntity(114U);
    msg.name.assign("REINJWVZJHCSDBXZFRDTOGFTBCCPZSTWVIUOYCIHNCSFIKQKTMMLBWRTKBYSKDCMGXQJRFFWZDEEXPBVGUNPBKVUDJPAKXLGSCUWTQATNBUHJLCNAZSRMBPSGGMFNHOZDHWLHUJOVRYPVIXQLHF");

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
    msg.setTimeStamp(0.1607605309706479);
    msg.setSource(59879U);
    msg.setSourceEntity(115U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(190U);
    msg.name.assign("WPOLFSINRYODHQABGLLCWFHPHRJASWGHWQODESKMAOLJSXSUZRCTGVOXRCIGQMWFAWVHRBGUHBVGLSZUDEURAGXUEHEAFPYHMCJEINYPEUVKTOHMJ");

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
    msg.setTimeStamp(0.513065133907848);
    msg.setSource(49961U);
    msg.setSourceEntity(207U);
    msg.setDestination(39268U);
    msg.setDestinationEntity(170U);
    msg.name.assign("IXNSEZYDLYANCMIUCIZHQYFFAKLRFFNGRXYPCOWEXUWHENQYLIJAFVMVJJMSQTJCMHAOAHVRMWMIXCNLGNKLPHPBGCD");

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
    msg.setTimeStamp(0.6183612882265228);
    msg.setSource(35682U);
    msg.setSourceEntity(11U);
    msg.setDestination(9008U);
    msg.setDestinationEntity(226U);
    msg.name.assign("VAAWNOYXENYIKIQLYBMQIUJVSJWMUFDZVMPXPSXXZDQCEKXZFABHOZKDVRYTMEFGNDXVNXVLAOGCHCTNCNZECVQWYCKYQNSGCBSTRPFEQLCZITGDGBQALTJWPSMSCBQEWZURUOMXHOQUGBJDYVGRKFSHTMAKDAERRWWKGUEUJTMIKOYKTIUXVYHA");
    msg.value = 124U;

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
    msg.setTimeStamp(0.9272885474439283);
    msg.setSource(40889U);
    msg.setSourceEntity(229U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(235U);
    msg.name.assign("HERPEMDNXYQHRZMDESUEAYMO");
    msg.value = 140U;

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
    msg.setTimeStamp(0.5970277504277697);
    msg.setSource(44015U);
    msg.setSourceEntity(235U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(154U);
    msg.name.assign("RCJOKNEFVHENPQNKNWGDFKMTSCZOJSBESCMLOVVAZEGRXKDPTBURPSHVPLIFIACOTTINBSBEZNPLCSDAYPIAAPNZTXCVUIOMUOTIWCYFHZMEVZEKHDZWFGXJWXATVHABHOAEQOQOXQUYORNXMBUXQUWKFCDYICIRFKXQMAYFSVLWXHRAMRQRUGJPTIKHYHTUYZEGXWMWSYYQDJDVBLUNDLLZFJQJGWSBPZRIJJBEQK");
    msg.value = 11U;

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
    msg.setTimeStamp(0.987398961273056);
    msg.setSource(32019U);
    msg.setSourceEntity(118U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(42U);
    msg.id = 189U;
    msg.period = 511514516U;
    msg.duty_cycle = 3785381176U;

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
    msg.setTimeStamp(0.5115253654881647);
    msg.setSource(46615U);
    msg.setSourceEntity(57U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(219U);
    msg.id = 135U;
    msg.period = 3346221883U;
    msg.duty_cycle = 1871317424U;

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
    msg.setTimeStamp(0.2546492453818121);
    msg.setSource(27437U);
    msg.setSourceEntity(55U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(12U);
    msg.id = 122U;
    msg.period = 583167316U;
    msg.duty_cycle = 2120426745U;

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
    msg.setTimeStamp(0.38549886382999066);
    msg.setSource(41748U);
    msg.setSourceEntity(197U);
    msg.setDestination(42924U);
    msg.setDestinationEntity(253U);
    msg.id = 127U;
    msg.period = 1187040418U;
    msg.duty_cycle = 3519841336U;

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
    msg.setTimeStamp(0.2541335207928791);
    msg.setSource(33266U);
    msg.setSourceEntity(136U);
    msg.setDestination(37753U);
    msg.setDestinationEntity(104U);
    msg.id = 224U;
    msg.period = 1642778186U;
    msg.duty_cycle = 1876408127U;

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
    msg.setTimeStamp(0.9422908196156266);
    msg.setSource(57650U);
    msg.setSourceEntity(212U);
    msg.setDestination(12534U);
    msg.setDestinationEntity(0U);
    msg.id = 150U;
    msg.period = 3827922950U;
    msg.duty_cycle = 2847415716U;

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
    msg.setTimeStamp(0.7768044846384118);
    msg.setSource(56700U);
    msg.setSourceEntity(107U);
    msg.setDestination(5882U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.12036367674677118;
    msg.lon = 0.6026900718032757;
    msg.height = 0.8527811117787488;
    msg.x = 0.8112795715461407;
    msg.y = 0.7509793992426448;
    msg.z = 0.09582886062474805;
    msg.phi = 0.42597820899688843;
    msg.theta = 0.5004693835418835;
    msg.psi = 0.6290816173027518;
    msg.u = 0.9489061409814349;
    msg.v = 0.6145065808315039;
    msg.w = 0.7723487272570861;
    msg.vx = 0.19025849765446579;
    msg.vy = 0.5367690311796589;
    msg.vz = 0.5676826581167935;
    msg.p = 0.9492836805817074;
    msg.q = 0.5918209835278914;
    msg.r = 0.2632404662024559;
    msg.depth = 0.25521959196294564;
    msg.alt = 0.8582669094870269;

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
    msg.setTimeStamp(0.4351984241896243);
    msg.setSource(48367U);
    msg.setSourceEntity(15U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.1980075945480052;
    msg.lon = 0.74884467679801;
    msg.height = 0.10743289236449138;
    msg.x = 0.1970408071513139;
    msg.y = 0.3038418527244853;
    msg.z = 0.6092492487044929;
    msg.phi = 0.13618291886317158;
    msg.theta = 0.7743270269788753;
    msg.psi = 0.4477956625250401;
    msg.u = 0.5622054072854009;
    msg.v = 0.4711895754078065;
    msg.w = 0.1962583627814325;
    msg.vx = 0.9770368862415707;
    msg.vy = 0.6588135901267216;
    msg.vz = 0.6648109980484916;
    msg.p = 0.2968208568927726;
    msg.q = 0.9143910415134101;
    msg.r = 0.701401596321731;
    msg.depth = 0.2804849859462769;
    msg.alt = 0.9742303139120967;

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
    msg.setTimeStamp(0.9476981122925766);
    msg.setSource(3841U);
    msg.setSourceEntity(28U);
    msg.setDestination(26834U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.23886376115129238;
    msg.lon = 0.5829056748841664;
    msg.height = 0.3219192340536364;
    msg.x = 0.9134392747200597;
    msg.y = 0.657991780619533;
    msg.z = 0.4861486968048234;
    msg.phi = 0.4699848255528476;
    msg.theta = 0.3794034030296506;
    msg.psi = 0.15344784577427728;
    msg.u = 0.9105824532415148;
    msg.v = 0.6204575743258588;
    msg.w = 0.023336093494110033;
    msg.vx = 0.28432194392545196;
    msg.vy = 0.983836999034887;
    msg.vz = 0.5739964749924341;
    msg.p = 0.2864893921800814;
    msg.q = 0.17800959571680053;
    msg.r = 0.8178655293543362;
    msg.depth = 0.4538957803824871;
    msg.alt = 0.3606190831538584;

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
    msg.setTimeStamp(0.9743783211573367);
    msg.setSource(48773U);
    msg.setSourceEntity(72U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(186U);
    msg.x = 0.14119343075200164;
    msg.y = 0.32496074925637797;
    msg.z = 0.2518561471703812;

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
    msg.setTimeStamp(0.6549372597845409);
    msg.setSource(63611U);
    msg.setSourceEntity(2U);
    msg.setDestination(11889U);
    msg.setDestinationEntity(25U);
    msg.x = 0.7186365425271282;
    msg.y = 0.3429417687859504;
    msg.z = 0.9975815015580395;

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
    msg.setTimeStamp(0.537101056556507);
    msg.setSource(60417U);
    msg.setSourceEntity(86U);
    msg.setDestination(52055U);
    msg.setDestinationEntity(24U);
    msg.x = 0.2230675205155137;
    msg.y = 0.24638309475747477;
    msg.z = 0.3640688167695847;

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
    msg.setTimeStamp(0.24050848459903007);
    msg.setSource(12052U);
    msg.setSourceEntity(200U);
    msg.setDestination(53835U);
    msg.setDestinationEntity(189U);
    msg.value = 0.4087003972154124;

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
    msg.setTimeStamp(0.19842981477723753);
    msg.setSource(42841U);
    msg.setSourceEntity(73U);
    msg.setDestination(8729U);
    msg.setDestinationEntity(223U);
    msg.value = 0.4049154720010306;

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
    msg.setTimeStamp(0.9790206287958094);
    msg.setSource(52380U);
    msg.setSourceEntity(29U);
    msg.setDestination(23118U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3686495876340362;

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
    msg.setTimeStamp(0.10243207050372216);
    msg.setSource(33788U);
    msg.setSourceEntity(247U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(98U);
    msg.value = 0.6226587971117984;

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
    msg.setTimeStamp(0.18587879393733953);
    msg.setSource(20731U);
    msg.setSourceEntity(243U);
    msg.setDestination(35445U);
    msg.setDestinationEntity(164U);
    msg.value = 0.2084935976481519;

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
    msg.setTimeStamp(0.6716297983370391);
    msg.setSource(35219U);
    msg.setSourceEntity(61U);
    msg.setDestination(32696U);
    msg.setDestinationEntity(132U);
    msg.value = 0.2047225966915699;

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
    msg.setTimeStamp(0.49072930946510107);
    msg.setSource(42083U);
    msg.setSourceEntity(45U);
    msg.setDestination(20652U);
    msg.setDestinationEntity(138U);
    msg.x = 0.2869541743171169;
    msg.y = 0.4568566203249482;
    msg.z = 0.27708416603598707;
    msg.phi = 0.42287517917648954;
    msg.theta = 0.15367851934520815;
    msg.psi = 0.5118529082022798;
    msg.p = 0.23186376197097458;
    msg.q = 0.40976410868385305;
    msg.r = 0.0943904429589828;
    msg.u = 0.4853415634108861;
    msg.v = 0.7844391994808517;
    msg.w = 0.2291334623892186;
    msg.bias_psi = 0.643864243033413;
    msg.bias_r = 0.22620469901675988;

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
    msg.setTimeStamp(0.9716248019488091);
    msg.setSource(47552U);
    msg.setSourceEntity(205U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(203U);
    msg.x = 0.26512964878521905;
    msg.y = 0.8593443008188004;
    msg.z = 0.24603846512855299;
    msg.phi = 0.2513541837885649;
    msg.theta = 0.618029489811262;
    msg.psi = 0.7814534369051038;
    msg.p = 0.534356606150842;
    msg.q = 0.8507410619726974;
    msg.r = 0.7997837473458476;
    msg.u = 0.11489439251694278;
    msg.v = 0.9265875988639368;
    msg.w = 0.026232723346774733;
    msg.bias_psi = 0.5443665394671685;
    msg.bias_r = 0.9040552492346967;

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
    msg.setTimeStamp(0.4133375124515868);
    msg.setSource(1936U);
    msg.setSourceEntity(191U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(64U);
    msg.x = 0.8733478148181223;
    msg.y = 0.5808263724314031;
    msg.z = 0.46290592002501996;
    msg.phi = 0.027804367808093478;
    msg.theta = 0.5861073018644466;
    msg.psi = 0.16949538994970859;
    msg.p = 0.07698331736565212;
    msg.q = 0.7124996401804345;
    msg.r = 0.049852645364976245;
    msg.u = 0.9101558992456442;
    msg.v = 0.6320094035482801;
    msg.w = 0.8178859313853558;
    msg.bias_psi = 0.47177034673334384;
    msg.bias_r = 0.7229086768363634;

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
    msg.setTimeStamp(0.6405884801802452);
    msg.setSource(41205U);
    msg.setSourceEntity(136U);
    msg.setDestination(31728U);
    msg.setDestinationEntity(10U);
    msg.bias_psi = 0.9630637669383249;
    msg.bias_r = 0.6567106734744791;
    msg.cog = 0.2991089378161583;
    msg.cyaw = 0.9684923495074833;
    msg.lbl_rej_level = 0.4325416458880956;
    msg.gps_rej_level = 0.27774847216274245;
    msg.custom_x = 0.2356063148669092;
    msg.custom_y = 0.37698589554387607;
    msg.custom_z = 0.8482028987665998;

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
    msg.setTimeStamp(0.4567074313615891);
    msg.setSource(337U);
    msg.setSourceEntity(43U);
    msg.setDestination(61158U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.9752942229453835;
    msg.bias_r = 0.8766184147058624;
    msg.cog = 0.12075532764898944;
    msg.cyaw = 0.3194669142644637;
    msg.lbl_rej_level = 0.7813109924980813;
    msg.gps_rej_level = 0.3327997631914974;
    msg.custom_x = 0.13727265336907246;
    msg.custom_y = 0.7753101279196192;
    msg.custom_z = 0.014978643498832156;

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
    msg.setTimeStamp(0.7882713295358931);
    msg.setSource(24721U);
    msg.setSourceEntity(32U);
    msg.setDestination(43201U);
    msg.setDestinationEntity(22U);
    msg.bias_psi = 0.6187936221175565;
    msg.bias_r = 0.17072632240222274;
    msg.cog = 0.8279023882702271;
    msg.cyaw = 0.30454542692426856;
    msg.lbl_rej_level = 0.8082947736803092;
    msg.gps_rej_level = 0.2862970256068579;
    msg.custom_x = 0.10592590821142578;
    msg.custom_y = 0.8716233754238674;
    msg.custom_z = 0.41902138111542697;

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
    msg.setTimeStamp(0.7553600961288374);
    msg.setSource(62982U);
    msg.setSourceEntity(29U);
    msg.setDestination(53022U);
    msg.setDestinationEntity(19U);
    msg.utc_time = 0.22526380696170611;
    msg.reason = 63U;

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
    msg.setTimeStamp(0.793279288100151);
    msg.setSource(54444U);
    msg.setSourceEntity(41U);
    msg.setDestination(38854U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.18657133105339152;
    msg.reason = 129U;

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
    msg.setTimeStamp(0.16781616292879853);
    msg.setSource(47705U);
    msg.setSourceEntity(100U);
    msg.setDestination(52431U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.9819396309632008;
    msg.reason = 159U;

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
    msg.setTimeStamp(0.438560382829438);
    msg.setSource(20075U);
    msg.setSourceEntity(102U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(88U);
    msg.id = 222U;
    msg.range = 0.8531625295251328;
    msg.acceptance = 118U;

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
    msg.setTimeStamp(0.6339892669209668);
    msg.setSource(13699U);
    msg.setSourceEntity(65U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(241U);
    msg.id = 72U;
    msg.range = 0.6243288862787884;
    msg.acceptance = 76U;

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
    msg.setTimeStamp(0.18462731052986214);
    msg.setSource(15427U);
    msg.setSourceEntity(252U);
    msg.setDestination(20685U);
    msg.setDestinationEntity(239U);
    msg.id = 52U;
    msg.range = 0.2018542399217158;
    msg.acceptance = 211U;

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
    msg.setTimeStamp(0.6857065489678298);
    msg.setSource(9395U);
    msg.setSourceEntity(131U);
    msg.setDestination(42756U);
    msg.setDestinationEntity(102U);
    msg.type = 250U;
    msg.reason = 146U;
    msg.value = 0.1450617682822175;
    msg.timestep = 0.8110051940006061;

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
    msg.setTimeStamp(0.5548035218603858);
    msg.setSource(8190U);
    msg.setSourceEntity(241U);
    msg.setDestination(10575U);
    msg.setDestinationEntity(126U);
    msg.type = 12U;
    msg.reason = 72U;
    msg.value = 0.31067006838952027;
    msg.timestep = 0.23026912221212947;

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
    msg.setTimeStamp(0.08983220717656926);
    msg.setSource(42247U);
    msg.setSourceEntity(21U);
    msg.setDestination(20171U);
    msg.setDestinationEntity(173U);
    msg.type = 195U;
    msg.reason = 178U;
    msg.value = 0.10181389309784572;
    msg.timestep = 0.2128656418714634;

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
    msg.setTimeStamp(0.23836385837731322);
    msg.setSource(42881U);
    msg.setSourceEntity(22U);
    msg.setDestination(48220U);
    msg.setDestinationEntity(218U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OZKSQMITGRURBBYDGDBHBJPQECPGKDAQFVZLVFWLDTCRRCAFVNOKDMDMXAJZSVCQTUGHUJYPPUQPSEWQXPELVIOFNKLBSBONGHRVJTUHXKNHSYHYMEAFTAMRYXNJUWFPLDFWSADVEIVXSCZWCTZIMCZUGHTAEJHONBKBNLQJEIKHZERKJFXJG");
    tmp_msg_0.lat = 0.561557431024175;
    tmp_msg_0.lon = 0.5536720139660546;
    tmp_msg_0.depth = 0.3160139185263635;
    tmp_msg_0.query_channel = 54U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 204U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.43850132351859894;
    msg.y = 0.8425002941047278;
    msg.var_x = 0.9367506907868476;
    msg.var_y = 0.22641031649785304;
    msg.distance = 0.45387312945086244;

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
    msg.setTimeStamp(0.09436334909281308);
    msg.setSource(42380U);
    msg.setSourceEntity(251U);
    msg.setDestination(43813U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JCNWWRDGSUTXBENSIGZAZDVZYRK");
    tmp_msg_0.lat = 0.4310191971825773;
    tmp_msg_0.lon = 0.3901236623391223;
    tmp_msg_0.depth = 0.7420990735890122;
    tmp_msg_0.query_channel = 78U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 230U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7208599914532449;
    msg.y = 0.5371414812581041;
    msg.var_x = 0.577563863348559;
    msg.var_y = 0.38204465217264416;
    msg.distance = 0.507378234044671;

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
    msg.setTimeStamp(0.1341505139159892);
    msg.setSource(34167U);
    msg.setSourceEntity(16U);
    msg.setDestination(43853U);
    msg.setDestinationEntity(7U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UCBNHYJWOKHYQOEYSENEYBMOXJUMDSWVFPGTRWNDYDHZKMTUVQBBKOSCRUFHEDTJSKDSPYXUXKJNNMANEUBRC");
    tmp_msg_0.lat = 0.6333249883314542;
    tmp_msg_0.lon = 0.45506898342943913;
    tmp_msg_0.depth = 0.747758029309527;
    tmp_msg_0.query_channel = 98U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 208U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2403052291581459;
    msg.y = 0.6364722284394856;
    msg.var_x = 0.5346630305907556;
    msg.var_y = 0.046494564653485226;
    msg.distance = 0.9291016179788409;

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
    msg.setTimeStamp(0.5432135265491534);
    msg.setSource(13883U);
    msg.setSourceEntity(146U);
    msg.setDestination(14104U);
    msg.setDestinationEntity(18U);
    msg.state = 227U;

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
    msg.setTimeStamp(0.3607581461408813);
    msg.setSource(40005U);
    msg.setSourceEntity(220U);
    msg.setDestination(21520U);
    msg.setDestinationEntity(119U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.814859414221242);
    msg.setSource(58964U);
    msg.setSourceEntity(125U);
    msg.setDestination(28971U);
    msg.setDestinationEntity(101U);
    msg.state = 13U;

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
    msg.setTimeStamp(0.3441678062065512);
    msg.setSource(13658U);
    msg.setSourceEntity(132U);
    msg.setDestination(24970U);
    msg.setDestinationEntity(45U);
    msg.x = 0.9474848178406282;
    msg.y = 0.748043673262027;
    msg.z = 0.7525177312749235;

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
    msg.setTimeStamp(0.7904651150338015);
    msg.setSource(23918U);
    msg.setSourceEntity(197U);
    msg.setDestination(62879U);
    msg.setDestinationEntity(252U);
    msg.x = 0.5367599019701528;
    msg.y = 0.6767256671140949;
    msg.z = 0.7283316353183259;

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
    msg.setTimeStamp(0.11828793307423058);
    msg.setSource(40069U);
    msg.setSourceEntity(167U);
    msg.setDestination(63916U);
    msg.setDestinationEntity(170U);
    msg.x = 0.4590154778512143;
    msg.y = 0.13832089624184885;
    msg.z = 0.05661539855109743;

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
    msg.setTimeStamp(0.11690610179135197);
    msg.setSource(20449U);
    msg.setSourceEntity(60U);
    msg.setDestination(22531U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9883295073391164;

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
    msg.setTimeStamp(0.2054864377715898);
    msg.setSource(34126U);
    msg.setSourceEntity(54U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(28U);
    msg.value = 0.12345421366031406;

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
    msg.setTimeStamp(0.20744933714276803);
    msg.setSource(31392U);
    msg.setSourceEntity(20U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(222U);
    msg.value = 0.14514316097054536;

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
    msg.setTimeStamp(0.37236552035096937);
    msg.setSource(43795U);
    msg.setSourceEntity(25U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(193U);
    msg.value = 0.818926104037738;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.2715959787319898);
    msg.setSource(52672U);
    msg.setSourceEntity(253U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(214U);
    msg.value = 0.874868865495276;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.44089157983167193);
    msg.setSource(14757U);
    msg.setSourceEntity(112U);
    msg.setDestination(64890U);
    msg.setDestinationEntity(102U);
    msg.value = 0.06886684495237971;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.4098374579282096);
    msg.setSource(37482U);
    msg.setSourceEntity(25U);
    msg.setDestination(51006U);
    msg.setDestinationEntity(39U);
    msg.value = 0.35982676245798106;
    msg.speed_units = 141U;

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
    msg.setTimeStamp(0.6499776894685994);
    msg.setSource(15130U);
    msg.setSourceEntity(15U);
    msg.setDestination(22129U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3004882323802225;
    msg.speed_units = 223U;

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
    msg.setTimeStamp(0.9711161195633837);
    msg.setSource(40159U);
    msg.setSourceEntity(222U);
    msg.setDestination(13569U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7244421610391354;
    msg.speed_units = 194U;

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
    msg.setTimeStamp(0.27815371058528027);
    msg.setSource(12334U);
    msg.setSourceEntity(80U);
    msg.setDestination(53353U);
    msg.setDestinationEntity(28U);
    msg.value = 0.4057450083087729;

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
    msg.setTimeStamp(0.16902862645038164);
    msg.setSource(34852U);
    msg.setSourceEntity(168U);
    msg.setDestination(64781U);
    msg.setDestinationEntity(118U);
    msg.value = 0.20131162870373576;

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
    msg.setTimeStamp(0.8085870835820863);
    msg.setSource(61421U);
    msg.setSourceEntity(240U);
    msg.setDestination(56317U);
    msg.setDestinationEntity(67U);
    msg.value = 0.9140579556135026;

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
    msg.setTimeStamp(0.042812982547249856);
    msg.setSource(50389U);
    msg.setSourceEntity(75U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(42U);
    msg.value = 0.06228786928577734;

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
    msg.setTimeStamp(0.5146414891613026);
    msg.setSource(51919U);
    msg.setSourceEntity(217U);
    msg.setDestination(50247U);
    msg.setDestinationEntity(189U);
    msg.value = 0.9690532923605243;

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
    msg.setTimeStamp(0.83783540920353);
    msg.setSource(36744U);
    msg.setSourceEntity(78U);
    msg.setDestination(35780U);
    msg.setDestinationEntity(163U);
    msg.value = 0.4204995787001651;

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
    msg.setTimeStamp(0.6749288336361964);
    msg.setSource(7947U);
    msg.setSourceEntity(247U);
    msg.setDestination(46826U);
    msg.setDestinationEntity(8U);
    msg.value = 0.27268584593341727;

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
    msg.setTimeStamp(0.48368144942688385);
    msg.setSource(51079U);
    msg.setSourceEntity(163U);
    msg.setDestination(38858U);
    msg.setDestinationEntity(133U);
    msg.value = 0.41767857815770404;

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
    msg.setTimeStamp(0.9866270834171583);
    msg.setSource(5769U);
    msg.setSourceEntity(63U);
    msg.setDestination(40807U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3273291312542653;

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
    msg.setTimeStamp(0.3699122469317634);
    msg.setSource(45228U);
    msg.setSourceEntity(175U);
    msg.setDestination(55829U);
    msg.setDestinationEntity(158U);
    msg.path_ref = 3721850466U;
    msg.start_lat = 0.823778229590398;
    msg.start_lon = 0.12380742853801796;
    msg.start_z = 0.16221029237067364;
    msg.start_z_units = 250U;
    msg.end_lat = 0.8545812832799945;
    msg.end_lon = 0.9545920586043309;
    msg.end_z = 0.9039988124086031;
    msg.end_z_units = 165U;
    msg.speed = 0.7809625229272162;
    msg.speed_units = 129U;
    msg.lradius = 0.5770540290787719;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.6909825858526331);
    msg.setSource(15743U);
    msg.setSourceEntity(197U);
    msg.setDestination(2282U);
    msg.setDestinationEntity(110U);
    msg.path_ref = 3991183469U;
    msg.start_lat = 0.2967704169278863;
    msg.start_lon = 0.26934220891514327;
    msg.start_z = 0.8048232335732387;
    msg.start_z_units = 100U;
    msg.end_lat = 0.41117548236539025;
    msg.end_lon = 0.46356548804202535;
    msg.end_z = 0.19017436494507667;
    msg.end_z_units = 96U;
    msg.speed = 0.8298177367569373;
    msg.speed_units = 112U;
    msg.lradius = 0.07706059819588007;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.4488891770451656);
    msg.setSource(4953U);
    msg.setSourceEntity(253U);
    msg.setDestination(61707U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 3529854615U;
    msg.start_lat = 0.6524141222029844;
    msg.start_lon = 0.2835094398450334;
    msg.start_z = 0.39791716670120725;
    msg.start_z_units = 236U;
    msg.end_lat = 0.5740850037800255;
    msg.end_lon = 0.06955093670254942;
    msg.end_z = 0.9641394575445772;
    msg.end_z_units = 160U;
    msg.speed = 0.7367173265057188;
    msg.speed_units = 196U;
    msg.lradius = 0.6370162769990046;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.21219165908094406);
    msg.setSource(63347U);
    msg.setSourceEntity(75U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(54U);
    msg.x = 0.38067391592874456;
    msg.y = 0.21058034100296374;
    msg.z = 0.1769840837557406;
    msg.k = 0.8183401740264497;
    msg.m = 0.9308094921630179;
    msg.n = 0.7161051390772034;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.19722317829649194);
    msg.setSource(58888U);
    msg.setSourceEntity(153U);
    msg.setDestination(2856U);
    msg.setDestinationEntity(236U);
    msg.x = 0.3963436074181269;
    msg.y = 0.635964188990581;
    msg.z = 0.8999645916499733;
    msg.k = 0.6578667449420731;
    msg.m = 0.9979362184491014;
    msg.n = 0.7555505379266534;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.9068640393841715);
    msg.setSource(53760U);
    msg.setSourceEntity(112U);
    msg.setDestination(23799U);
    msg.setDestinationEntity(183U);
    msg.x = 0.1482190361731297;
    msg.y = 0.9146178336541883;
    msg.z = 0.6929545722980037;
    msg.k = 0.47892542448942643;
    msg.m = 0.5261802577796636;
    msg.n = 0.5987612480764962;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.32965090606908165);
    msg.setSource(21136U);
    msg.setSourceEntity(248U);
    msg.setDestination(35468U);
    msg.setDestinationEntity(189U);
    msg.value = 0.041360619712822344;

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
    msg.setTimeStamp(0.33380967315332);
    msg.setSource(20830U);
    msg.setSourceEntity(132U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(37U);
    msg.value = 0.5114994688323523;

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
    msg.setTimeStamp(0.67098643408708);
    msg.setSource(34601U);
    msg.setSourceEntity(188U);
    msg.setDestination(61009U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3784498513784763;

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
    msg.setTimeStamp(0.8661189375858858);
    msg.setSource(45309U);
    msg.setSourceEntity(33U);
    msg.setDestination(54798U);
    msg.setDestinationEntity(209U);
    msg.u = 0.07777690414804361;
    msg.v = 0.49441589273478137;
    msg.w = 0.535414218446246;
    msg.p = 0.6333712331362455;
    msg.q = 0.6597638193363262;
    msg.r = 0.7912364222527368;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.2174635909171092);
    msg.setSource(47679U);
    msg.setSourceEntity(241U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(12U);
    msg.u = 0.8409698984170297;
    msg.v = 0.9659230553831828;
    msg.w = 0.06391047899667823;
    msg.p = 0.852239571185409;
    msg.q = 0.6739881769643631;
    msg.r = 0.797223919119168;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.5173781870692115);
    msg.setSource(42660U);
    msg.setSourceEntity(248U);
    msg.setDestination(50344U);
    msg.setDestinationEntity(202U);
    msg.u = 0.38749926069766316;
    msg.v = 0.5493827928121441;
    msg.w = 0.22671825217505637;
    msg.p = 0.07070160724409524;
    msg.q = 0.5017039829440051;
    msg.r = 0.07373468321298038;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.6511195975223265);
    msg.setSource(50848U);
    msg.setSourceEntity(18U);
    msg.setDestination(18481U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 2869030686U;
    msg.start_lat = 0.8220718164948145;
    msg.start_lon = 0.25369156756553235;
    msg.start_z = 0.8940927923714295;
    msg.start_z_units = 62U;
    msg.end_lat = 0.18281744606614447;
    msg.end_lon = 0.2807588268769894;
    msg.end_z = 0.8055576472470902;
    msg.end_z_units = 60U;
    msg.lradius = 0.4767584831361865;
    msg.flags = 125U;
    msg.x = 0.23403172491894464;
    msg.y = 0.4132005611661361;
    msg.z = 0.38883960048990573;
    msg.vx = 0.9134609583913075;
    msg.vy = 0.6867152519215058;
    msg.vz = 0.36358313343942417;
    msg.course_error = 0.5215873313124796;
    msg.eta = 50154U;

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
    msg.setTimeStamp(0.09546028643750937);
    msg.setSource(15492U);
    msg.setSourceEntity(180U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(254U);
    msg.path_ref = 3513797086U;
    msg.start_lat = 0.35027565800182625;
    msg.start_lon = 0.44711250608228204;
    msg.start_z = 0.7404384148784688;
    msg.start_z_units = 28U;
    msg.end_lat = 0.7100044351733162;
    msg.end_lon = 0.46280250981974735;
    msg.end_z = 0.7645440974687021;
    msg.end_z_units = 192U;
    msg.lradius = 0.13063284039918854;
    msg.flags = 122U;
    msg.x = 0.5627701400661542;
    msg.y = 0.5194018575633276;
    msg.z = 0.00942121712434063;
    msg.vx = 0.9233793376496249;
    msg.vy = 0.7643827008471896;
    msg.vz = 0.9261335470620268;
    msg.course_error = 0.36961512704420096;
    msg.eta = 10711U;

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
    msg.setTimeStamp(0.5873964393565);
    msg.setSource(56419U);
    msg.setSourceEntity(139U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(171U);
    msg.path_ref = 617688903U;
    msg.start_lat = 0.08149156286817061;
    msg.start_lon = 0.037293350311237816;
    msg.start_z = 0.5138121617551985;
    msg.start_z_units = 138U;
    msg.end_lat = 0.5334261015032158;
    msg.end_lon = 0.6367557992555882;
    msg.end_z = 0.5794504465024585;
    msg.end_z_units = 234U;
    msg.lradius = 0.8778349600856581;
    msg.flags = 114U;
    msg.x = 0.054036359783082855;
    msg.y = 0.5162647409722085;
    msg.z = 0.07129849407077316;
    msg.vx = 0.4746311592924415;
    msg.vy = 0.8764663650799864;
    msg.vz = 0.8136492575408535;
    msg.course_error = 0.9384943648149641;
    msg.eta = 58496U;

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
    msg.setTimeStamp(0.30133730665866565);
    msg.setSource(4782U);
    msg.setSourceEntity(0U);
    msg.setDestination(26806U);
    msg.setDestinationEntity(134U);
    msg.k = 0.9018534992697229;
    msg.m = 0.7976424832199637;
    msg.n = 0.2277027798522686;

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
    msg.setTimeStamp(0.4535000683815006);
    msg.setSource(64710U);
    msg.setSourceEntity(235U);
    msg.setDestination(717U);
    msg.setDestinationEntity(13U);
    msg.k = 0.2636131442712173;
    msg.m = 0.7900253223828659;
    msg.n = 0.8398582960936064;

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
    msg.setTimeStamp(0.30671303716558607);
    msg.setSource(34903U);
    msg.setSourceEntity(101U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(52U);
    msg.k = 0.24487488214977782;
    msg.m = 0.8402744416405624;
    msg.n = 0.45105154756111976;

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
    msg.setTimeStamp(0.7720118568224326);
    msg.setSource(30602U);
    msg.setSourceEntity(85U);
    msg.setDestination(12702U);
    msg.setDestinationEntity(146U);
    msg.p = 0.11243733607983675;
    msg.i = 0.4804789581137434;
    msg.d = 0.7382309106302026;
    msg.a = 0.08516940159103614;

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
    msg.setTimeStamp(0.6504540975534661);
    msg.setSource(33078U);
    msg.setSourceEntity(134U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(200U);
    msg.p = 0.7347486861523457;
    msg.i = 0.7396548888920923;
    msg.d = 0.926443804465997;
    msg.a = 0.27932325344225606;

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
    msg.setTimeStamp(0.055961334200808954);
    msg.setSource(6214U);
    msg.setSourceEntity(153U);
    msg.setDestination(51532U);
    msg.setDestinationEntity(19U);
    msg.p = 0.960156377950173;
    msg.i = 0.23071898571298022;
    msg.d = 0.9461106027940382;
    msg.a = 0.4774714868413742;

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
    msg.setTimeStamp(0.7772430009213853);
    msg.setSource(34903U);
    msg.setSourceEntity(167U);
    msg.setDestination(20054U);
    msg.setDestinationEntity(216U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.7517238946550128);
    msg.setSource(29199U);
    msg.setSourceEntity(196U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(158U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.5977759899613757);
    msg.setSource(24879U);
    msg.setSourceEntity(244U);
    msg.setDestination(14314U);
    msg.setDestinationEntity(131U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.012838795998048935);
    msg.setSource(17457U);
    msg.setSourceEntity(185U);
    msg.setDestination(35586U);
    msg.setDestinationEntity(219U);
    msg.plan_ref = 219919581U;
    msg.id.assign("CDYOEBSJWHNKYURSGPOEZZTRNJQJUIHVCLZSXAECRRMSMTJJ");
    msg.memento.assign("YUUSCSAHYKWWELTOATOHCYVABFAVGTNFJLVEPYDRMUBWPJSMGSFZECRNYFPFEIINVNNXKDRRGJKDQUYODOCXWEVCFUIVGYWJROSOHTCLIAKQKRKCZSZQBOHXPPMRQGITMQLLVESASQLXDENYMUJLJBGB");
    msg.timeout = 34252U;
    msg.lat = 0.4776649342701905;
    msg.lon = 0.6212844943542547;
    msg.z = 0.06403554830685276;
    msg.z_units = 70U;
    msg.speed = 0.9517092145737722;
    msg.speed_units = 179U;
    msg.roll = 0.20206598962203592;
    msg.pitch = 0.6907993176279235;
    msg.yaw = 0.18511922128682778;
    msg.custom.assign("BPWREQOSIYQODJLKYZYWXFITVRCWCOERBSJJMRYVMWJBUKRZDXJKAVNPYIHMSYRANAIFLFCNWVSZOZBFPATYWIVELVCCWNHXQZTPMZSVDQOJKLFUJXKGJJGEYCOVQEKGQNQDPDRFUCSTMHZNKAEAU");

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
    msg.setTimeStamp(0.7983328352546826);
    msg.setSource(3810U);
    msg.setSourceEntity(5U);
    msg.setDestination(51078U);
    msg.setDestinationEntity(105U);
    msg.plan_ref = 1559295093U;
    msg.id.assign("FAJADGYAHSCPCVBKGZQNGAQILOKWDUNQUBARYOUKMAZDZKENDTZSZXXXLVYHHYIWCWTXVCEXMTUFVUQOMCNT");
    msg.memento.assign("BISLEVVOYVOAEVQRMYQEFHCMWZJPUMPKDSDNIDFUHQNEL");
    msg.timeout = 19868U;
    msg.lat = 0.172192895844703;
    msg.lon = 0.4892223979281295;
    msg.z = 0.17361159324680542;
    msg.z_units = 25U;
    msg.speed = 0.5637175321603605;
    msg.speed_units = 63U;
    msg.roll = 0.36069294051599965;
    msg.pitch = 0.2592676537502445;
    msg.yaw = 0.3032465729164433;
    msg.custom.assign("UCWGYNGMXBBAUTIDNFOPQDUQHNVDSIKIXKZJIIOEWFSJRCGFG");

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
    msg.setTimeStamp(0.4040913897272813);
    msg.setSource(27021U);
    msg.setSourceEntity(131U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(226U);
    msg.plan_ref = 639339767U;
    msg.id.assign("QCACXEQPJHKEZILXALIOSDZRPANIGYDVIVGJWGGOXIBPWNUZWWMVSDMYEZHHGFDUXFALHEBDOLSRMUYAHORTWWSFSVCGUJQIQQTHYFGJUORLEJLMVTLFJNBEKBCWWKCAPBNESRCHLPXIWJBCJSTFUYRKGQANOEZYPBUXMPCMYVROHZYJLHINEOKNVTCNJKYBQTDGODQASBPODRLZPZI");
    msg.memento.assign("UTJUJLHUDPTNYHSEFOIHBERCGLTRVGFTQFLWWOUMJMHHEZCZKQJBXEHHQSYTLYOCHHCNMQDNAWLREEWTCPXZXB");
    msg.timeout = 19607U;
    msg.lat = 0.9275124524650974;
    msg.lon = 0.03632477577712523;
    msg.z = 0.37360265222442146;
    msg.z_units = 251U;
    msg.speed = 0.767275602636511;
    msg.speed_units = 237U;
    msg.roll = 0.11621614631071431;
    msg.pitch = 0.275011786971332;
    msg.yaw = 0.62153249062995;
    msg.custom.assign("UOMTATRZOWIQCABTIOKAXAVISEAOGSIROLGGJPLJUGEWNCRNLAFUKBVXEOKCINKEYMPHAFGTEJHMIQ");

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
    msg.setTimeStamp(0.4795972362419535);
    msg.setSource(54286U);
    msg.setSourceEntity(111U);
    msg.setDestination(1638U);
    msg.setDestinationEntity(67U);
    msg.plan_ref = 3935413501U;
    msg.id.assign("HGCHQELUYBYNAJPJFQRWLMTAAFTATPVCSTDNVAPZJBFZTMSIPKFZXZREYIUOENRXWTBYIQLQJXIWQS");
    msg.memento.assign("YNXGSOMWGLTAAGVHYHCDKWYPECFKLPOEIURAYDBFBSEWVQXHMAMTUYVBROPKXCJJHIVNOSSEVRFTNT");
    msg.timeout = 54232U;
    msg.lat = 0.16647307191403515;
    msg.lon = 0.21767495324233432;
    msg.z = 0.005461326039220227;
    msg.z_units = 104U;
    msg.speed = 0.12290907770240866;
    msg.speed_units = 212U;
    msg.duration = 37903U;
    msg.radius = 0.26183744722828006;
    msg.flags = 114U;
    msg.custom.assign("JGTOPWLOQSFISVOBPRTAYLZHQZPDRYVEPVRPYXKETIRUCDOGTTJUNWCREQLWFOZQDIZISXWHXYGPANMKB");

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
    msg.setTimeStamp(0.8568945295622135);
    msg.setSource(54644U);
    msg.setSourceEntity(165U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(188U);
    msg.plan_ref = 2760088062U;
    msg.id.assign("DDYZHPWDQQYCERGBYFUPZAVEHALJUNGXGWBSSBFBKLWXRPFAFXHKOMJGOAQMFWIGWUELKBUCVABOQLYKZIZGTJETWXRLHAHGFQFYHTCYJHDWZHXUGOTRUTPWERVJSCVNCCMIYXIL");
    msg.memento.assign("TJEKUOEATZVAJBHFBOMIIXBGVIJZQIBTZHKKZPIZINFSYMLPOZMANJTQBDKXUWDKMSGJEYLLCNHURRMISVKFVKFNAFGFMQYUFZGPTIDQFQHDJOLYJTOYKCWYONRAXXDFCAQNDYGBVRPQWECHOUUGZBNCLOCUAVPRYXHMUWTPSOSGDBSEDLADPLSVYPMNEHRSJPXHREASCKLWLVTGJRBHVTBEACGKXZRGCNERQUIQWNXMISEVDJHW");
    msg.timeout = 15482U;
    msg.lat = 0.29835350830753327;
    msg.lon = 0.836655124172533;
    msg.z = 0.7956549767045018;
    msg.z_units = 102U;
    msg.speed = 0.2882398559674697;
    msg.speed_units = 247U;
    msg.duration = 6564U;
    msg.radius = 0.23184982612637028;
    msg.flags = 35U;
    msg.custom.assign("SJDPXWOCZYGATKEKEXBFFYGQVGVSOXSXONWHXCULQBMELLIVIRTNTIXDQPNZMMMDHBHCTVLBIWCZHGEVOOHQFUOHEWRCOPUKK");

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
    msg.setTimeStamp(0.8123450752639966);
    msg.setSource(27894U);
    msg.setSourceEntity(3U);
    msg.setDestination(421U);
    msg.setDestinationEntity(91U);
    msg.plan_ref = 1722371511U;
    msg.id.assign("UGWMEOYROHTQUWCCHWQBYPRKASLRSAKBZCYLAGLMMGFFZTOEPLMFDMAIIUOFUMXHNCDWTQBFKVXSGVIIVNXNIHMKQDXOJZPGEBNPSHCLHPVSALKNLIKFKVOXDZVTCRNSPZUFAOQNTVJIAXIKTGRWOJWEDWZBOSLMAXFQTYJMWZBI");
    msg.memento.assign("LVHFIOKFFQCAVEYBRDHZOJYSDTTEETNFYZNVUAWFLTPTQBSXRCKACAQQPWZYELSUCLHWMOGOBSBWHOYRAYUXDJZQMTMLUZTHAMKMEJSWIOIUVVOQTSPADIMHROMYGCWQJUNZRKMPLIIRPFYGRNRUEBBBVUKCWEMXHNHGISGJRDCPHJWMDEUQZNGQRCEPFBZXDXAOXVBPXELTCFAGDVWJWXKPIGNG");
    msg.timeout = 4179U;
    msg.lat = 0.2532616993454361;
    msg.lon = 0.21227477134319495;
    msg.z = 0.6802648526004978;
    msg.z_units = 9U;
    msg.speed = 0.6803044957056618;
    msg.speed_units = 239U;
    msg.duration = 6174U;
    msg.radius = 0.11383919479229987;
    msg.flags = 249U;
    msg.custom.assign("RVPBMMVRSCTLZDBZJMLEPWZQTTQBEWOMETYXYZAHSHFDDMTAYCYALUDGSGAKJFUFFWGSPVFCXOHNUILPQVEKIUIRWCXBDXBIEFITCHSUSLPLKCNHZZFEQTRAGROJPWFZHEKEJIIVNOBVTLJCGMPJKHTMVSORQXUDZBIJGLXNIUKROUVNAGFDTBGVVZRNXBMWRSAYBRZAGIQASYNJYXP");

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
    msg.setTimeStamp(0.6933885630050771);
    msg.setSource(19348U);
    msg.setSourceEntity(203U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(37U);
    msg.plan_ref = 2965794385U;
    msg.id.assign("DBFTXCHVOQIJUIUUAVWRQFMCCTBQEUOQJKDZVQVTWPAHWEFQNLEPYFAFRLRWEZGISPWDXIQGSJOQRVQGNULXZZBKI");
    msg.memento.assign("HQSFFUSRDYKUAEIPPDFIIXGNLBNSZCPTGJMBTBDVQGENUQRKUBADJFAQJZNCTZZNWOKZVDWLLTHTDRUPKSVBGYEMTVKTRGYYNAMSHPRGPIMFNHDJAUCAXWPJTLOLHMOOLXMNJIZAYRUKVMAHGVEXPWSHYOVTDZWBIYFYSXLTGAQROIKVXXKZWNWQGXQKCXLRHORLFEZJBSIECWZVEMWUJCOYBPWMHHRKECCMYOEVFAJXQBEDLP");
    msg.custom.assign("IDVLGYNZBGPLWFTDVHUEKSXWLZMLXOAFIDERSCYYGILGIXCAEPTHDSFLQMGCXYBXHVCNVAPFRQBOHQFHAYEPMTFLATHJNJDEONCMXLXIGKMFKVPNZOWNKGOSZQZNUGUSVITGUCQRJOPBEKRUHCMKXBVAWSAORHYKYAPWAZUZRQWJUQZEMCTGTALWETCIPODFDZVSTJQKBPBTFMSJNJDL");

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
    msg.setTimeStamp(0.2556453469707122);
    msg.setSource(48757U);
    msg.setSourceEntity(72U);
    msg.setDestination(28830U);
    msg.setDestinationEntity(170U);
    msg.plan_ref = 3880767657U;
    msg.id.assign("VVMRPTEFBMGJXWXODYZHTUSXNPTWFHEOXTVWXHCZADADHMVBBPIUQZCSJGFR");
    msg.memento.assign("SMFNYELRPRDNRWJWIVUTTUIFQPDDRLVNHPZPOLSZQHIUMLZN");
    msg.custom.assign("EDOZESEMKVMEOHSLNCLTSPXCEARJXPRXACZDCRJKFUSPGFSHRUIHSMEDAMWOOKGZOHGGIVRBTPVFBQQBXDNGBCAFBQHN");

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
    msg.setTimeStamp(0.3260411015014978);
    msg.setSource(40193U);
    msg.setSourceEntity(165U);
    msg.setDestination(32412U);
    msg.setDestinationEntity(26U);
    msg.plan_ref = 1584265214U;
    msg.id.assign("TSDNHHPBIKJZISBDUTUWDTQKVGOHULNRRIAZTGQSUEXHVEXPJVMEGCONETYNROPFMKSQEUGRWVLBQVIRYEFAYBOJQZSODMQCRCMIRAYJEJLNJHGQCKZKLUUCXYIDNPDWHIBMZGDIFZWODMRAZHXFFKVSZYDPBXQCJMAJQFYBSCNBP");
    msg.memento.assign("WPKAZGMIXONJVQOUSDNFIDZNJXWXUCWDZUNUWIIETFAHRVLKDYLPTBJRAMIGNVZERQLEZRHFQWFMWHFTZHYOKIRUEVXUEUMYVBCOUABODEPCHSLGLQHSQDSOKCLNSFZBODTXTYDKJKXGLETCJWSKAQFLKHYGRTRJPYRQBAVMMUCIAMWYCTPBNZG");
    msg.custom.assign("JWXYNKAMHIDMIMDVRHGKULPWWQZGGHEUMLUHAIDMFBLPYQUJDKNOUQETTYSSFXLVXGNSLJAOIIGAKNJYRGOVZCTKBXBQYSRTKPYBHECUWOCFHFOARJRHVMJRETROEENZUPOZAFOYONBHPEYTFGMCVCWZQKIUCFDSSGCDTVCCXHTUFNJEJQKPBQVARBOAKDBZLULNXAINMXRZPVHFKZGSWMSEQPX");

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
    msg.setTimeStamp(0.12131275792224283);
    msg.setSource(33079U);
    msg.setSourceEntity(152U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 3502266485U;
    msg.id.assign("AWHBRNOXYNTRJSOMLZBPBSZVMKJQWOBPUMLERYMMHGLNWBARYDKGCMGCKZPGAPTKFJALFUFNXQGHPINSBPOCDVVKMJGXKYGATXUNTLJDJZWJIVZKRAPOTBSXEQWSQBECFGLFJYVSSKQPIJLIVIUMCINCHUGZFFZFTAEWESDXJFWDQOLYIXYRTVFHQSIZKQMINXURBDSDYDQYDCPZHCXHUREAWAHZORPAEYLHTRNWOUEWQICTEBOEDVMLV");
    msg.memento.assign("NCQNUAZXOPKAGPBNVSRCAHHXFAIXRGSFJPUOAGLMLNTYSIXDU");
    msg.timeout = 11904U;
    msg.lat = 0.32630783394694496;
    msg.lon = 0.18893472103241615;
    msg.z = 0.5933085045761777;
    msg.z_units = 142U;
    msg.duration = 25863U;
    msg.speed = 0.4391681493364863;
    msg.speed_units = 142U;
    msg.type = 198U;
    msg.radius = 0.9784323247980707;
    msg.length = 0.08919788207495882;
    msg.bearing = 0.8541391093831272;
    msg.direction = 82U;
    msg.custom.assign("SRWTRWBZQCJXZANXNLFLHDTBIRZPYPCHEQFCRKQHZBMVTHUCCTDDWNXUMGAUFULIMENVJBDDDEYJSAXMLQNUIOIWMIYYFSJOQKMWPWHRPAWAZBJBOPKGLDLOZSJYHEXQIMYSPDXVABQGHTFLZJ");

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
    msg.setTimeStamp(0.3490386700293874);
    msg.setSource(55324U);
    msg.setSourceEntity(187U);
    msg.setDestination(42922U);
    msg.setDestinationEntity(13U);
    msg.plan_ref = 2569636129U;
    msg.id.assign("YBZAIHYRQLBMYRWACSQYUJADMFRNCXBTFJRXKSOSMDIHTUWIMCEVOLWSWOSHMDONHARZUKTYVETJSPSFMHDPZZABAO");
    msg.memento.assign("YBNDNMUKZBTLOGJTEHIUXQLVJDCLDYJRQGTVFEJSDGOTDKPKKACBMMFCCABEMSAWUAOWRNEBDKLTNBVFRFQPPXJQYFURABNQQOODJKXCEWYCPL");
    msg.timeout = 63070U;
    msg.lat = 0.3764472203078588;
    msg.lon = 0.27081247214621185;
    msg.z = 0.3744825949190108;
    msg.z_units = 26U;
    msg.duration = 31870U;
    msg.speed = 0.3215011881785895;
    msg.speed_units = 2U;
    msg.type = 90U;
    msg.radius = 0.3570489702633832;
    msg.length = 0.09343913061849773;
    msg.bearing = 0.09500339506823752;
    msg.direction = 99U;
    msg.custom.assign("IKMQFSAXBBFNZQZLUXMVTBQFTXSJLJCRPIGKYVSUNYAKGDECKDEYUWKMHWWJPBOJOQIDBYYCHJPOWYFREJHPQNIOKCZVZPWEPTENHDALHIHFAJCVPRRTRFGSEVTXGZZSWVUNZXNRURZOGMTYQKXS");

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
    msg.setTimeStamp(0.08265476612480216);
    msg.setSource(52544U);
    msg.setSourceEntity(214U);
    msg.setDestination(3118U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 3144796280U;
    msg.id.assign("RNWPQQBVGAYMTBHTAXCSECQUNJRCMXGIOGCSQLVHMUAFSIVOWEDYPUGOYVQUIFKLCHEPXLTUISJFJLUWPPCRYRFFWLGIDWHMTIZNLSXDKRKNNGXXBMIFZTIHVMMKGN");
    msg.memento.assign("BTBBFSEEEPBTNCEOLXMLYGPZIITNIOBCPZSZZSTURCGSHQKSNAOYMVOCHCZVKMLDOZIVAJXQCYNXB");
    msg.timeout = 36534U;
    msg.lat = 0.21886368597366535;
    msg.lon = 0.7960001033083992;
    msg.z = 0.13195656735297667;
    msg.z_units = 8U;
    msg.duration = 2897U;
    msg.speed = 0.8157812302468053;
    msg.speed_units = 124U;
    msg.type = 42U;
    msg.radius = 0.6560031524636686;
    msg.length = 0.3534662965742743;
    msg.bearing = 0.08712722834576969;
    msg.direction = 113U;
    msg.custom.assign("OQXFKSRNKFFJKOUMELELVYGWLSISRPDRNHZVMDUTFULSBDPXNWSNLWADAIPNGQZAVMZQYSPMATHWBRMILATPLCNPEPXWOETIGKIVEKT");

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
    msg.setTimeStamp(0.527579368422014);
    msg.setSource(27644U);
    msg.setSourceEntity(47U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(179U);
    msg.plan_ref = 1201899895U;
    msg.id.assign("PEGNJKCRNSHDGMUQTCZFRQKD");
    msg.memento.assign("CNRLVBMBJGUOVHUJPGRHZTQHETPAORDLVTKAMVYFWICHXAWEFLQBJPDPXDISJEPIWVNJODGHFNBCWTUWQRMQDPZIYEDZNCVRSMSIIFGEYSKEOLBBYMTQAFZYHFVJZMMWACOYULBRHJZDWSSFETLUMZPRAHKGGKIYXVLXXKFSNBMBSJPNULANURCPQOYKHNXRTOXGOIHEIKCEXZRTTZQLYJFQYCODGNUDGNUSOZGKVWPKMCWTEVASQIXWUA");
    msg.duration = 30239U;
    msg.custom.assign("WNVKIPBIDBSOYPXAYJAERKNHIFEASELQWTFYFCNHOFSIYQCJRRJEZLNZRWVLMRDZGFXZBEOKZUUCMQUODIYCQGAQPXBOVGBEUIGZKFXRFISAUQKDXQTPOUPGLXSUKJIK");

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
    msg.setTimeStamp(0.8181961573483728);
    msg.setSource(15390U);
    msg.setSourceEntity(46U);
    msg.setDestination(11928U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 2223439346U;
    msg.id.assign("PHEMMFBOJTTYRDSARSDNEAVMCXJXSJLACKKJVUZXVLXYUAFSYQNXUQKWTIKOGCIHHYESADYQQQDHRXOGWWGEJDTACQCOEJLMLUTWWIZNBZEFHNEMGPPFKPMXDNUOLNKZZOKBFUZCHWIXOPSXMVYTQNBZPQWFLPJYCRRTOALMNSRGVLWMYRAUIHAGHEGULRJCPFZTLSTVIMKWVSHBRGPTBWVGFDOFBUVEQJOJVUKHBG");
    msg.memento.assign("JZDHUDGDHBWOHCWISNXTHKRJYBZYVQBPCDTQCBGTZVIJLMOQLPKLYHUAKEVKUZZNYESFSIFQSPSKWAZHRKWAJGIFIERTVGYVXFRTBPMROLQUUIGIQLINRSJFZOWXTOQXGOFFCPRGLKYMRIMMNBYEVVBEPPSXNSDKFQDLYJMMIYVSEWOWBFNNLCUGVUSEZAJDRXNDWHO");
    msg.duration = 40822U;
    msg.custom.assign("FGHTGNSFEGXLRCXCWFBXHTDMGUOHEDFQXOUQJECIZKXQVDNOVZNLSVVTKASHDETDMATOMIGLEPQGDDOBXOBDPUHZUWXOYWVUCORMYCGPRUVLTNDPPEGJSJYYBGRMIIKEWCBNWWJHPMJYJZTIASLBPJSGWILUIRYZQYKKMTSARPAQWRMULKIBSWRYXBVLQRPKASNFFUZMCWOMIEYSCLHZAKEVFFZKXBVHLNJAJVCQRNFCFEBKTJUPHAH");

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
    msg.setTimeStamp(0.6419987543153258);
    msg.setSource(39478U);
    msg.setSourceEntity(253U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(14U);
    msg.plan_ref = 1790426730U;
    msg.id.assign("QEAKELTYGOJQUSCLNDJSZZAJEGLYAWMXPPRTPYOZWVVLIHGXXWBCQNWHXSSQCVBDABCBSTIRLJAFPHLNGXHJXVQDSTRBJAYHNPMTBRHSVHIQKDLWNMFGKYTGGICMYAEMBXDKLDVCRJKDILEW");
    msg.memento.assign("DINNKBXYIGFGPUXJLMTAHTSWQRBMOYCBLDXUKURQSHIWKPLSYVHNYMOOXZSVLCGPTJDZZXTEZMPFJSREKTUCAVYOLLHVIFAORQUSOTKMDYCFYYNLPJIHSLLVMACIAEUBGGEKMHWXOBENWAZDQNPVWSHFWCHCJPTNMC");
    msg.duration = 39399U;
    msg.custom.assign("DMQOGIWHRBZKNFRDSHIMHADDAINPSLWGDXYKEOMWIQUNRWZMYBPXRGAKPCZSNUVVLVNUSRWRYDJQXAXBDVGTJMYEVPOURTGOKCGTCYASZEMTBFLUTVSUFTZVZPBIJLKBHPGJXMEAEUSTCAXQLNDEZMFIOLKBOPZRKBWZOYFOEDKQFUNYXLOBQGUCHIVJQPZRPIXNSTJDTXUHKNASYPVWCWFQYHSAJYJVLHIGAJCMENHOBF");

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
    msg.setTimeStamp(0.6446016618177938);
    msg.setSource(50182U);
    msg.setSourceEntity(83U);
    msg.setDestination(39257U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 1212977183U;
    msg.id.assign("PKFAOFYTBBPMVIURTPIADLJPTLSYWMYNYSCQVRKHFXOYUTHGOGZNQSGIOXVVBUHBDNZSNNUZUKCLXRQZHHSGTLAXYVDFDBNEMYNMEQXQQJXVABNMJBGSEMWWHSCWJKYPKCFJUWXDOEKVJJZPHWEKPBESATEWFVMCIILXGPCFUFPKJABPLFMWDGCYOQDETOAJMEARTQOWCHIHRNINLSGGJZDDOQVZRDZQBCEGTRZTLZIAIROARVMHYWUSRUX");
    msg.memento.assign("NPLGTMQHVQFTDRFENWCQTGZLRCWBSUJRJHPKMKVJLXTXQOPBEEDVXMMSBDWDWTNOHUKKPAFVNOBYAZLNVCWZERQVIREOQLAFYMRLVHSRYIDNSCKXBAOIQKVZIYHSLKLEOFJEIBHWQMDDZTXXGJUDCGHNFYVEAYUXPPPYUAWPZKIHUHLXAJZXTPJM");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.21075219488399288;
    tmp_msg_0.z_units = 236U;
    msg.control.set(tmp_msg_0);
    msg.duration = 39675U;
    msg.custom.assign("HXOEQSVCEAYO");

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
    msg.setTimeStamp(0.43131382232562243);
    msg.setSource(33962U);
    msg.setSourceEntity(175U);
    msg.setDestination(10170U);
    msg.setDestinationEntity(52U);
    msg.plan_ref = 3701964640U;
    msg.id.assign("ZCRWBXPZTOSKVSWSSBBKVOUBFERVBWMXPEJSMPMWJEMAUWDHEEBZTZKHPGDDONZIOYJRQXENLOKNCFFLA");
    msg.memento.assign("EFCMVEUJCWHWQHOQBVARACYMPDG");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7120143240521003;
    msg.control.set(tmp_msg_0);
    msg.duration = 10505U;
    msg.custom.assign("PCNJOCLDGIWIILCKWDUEJRAZXAPBRWNAYLJKRAHTAOUZUQSILSHRFGJHVYMTFOAEBQAXDSZPVWOU");

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
    msg.setTimeStamp(0.7229079222287899);
    msg.setSource(26256U);
    msg.setSourceEntity(160U);
    msg.setDestination(40462U);
    msg.setDestinationEntity(197U);
    msg.plan_ref = 1270826530U;
    msg.id.assign("NOSEDSFFJIFKSHYFFERHIJAHIKYODZAOVQNMQMSULVZQBPOSIBGORBPZEDNPRBRIEGDUPXCFTAAXCGCVWHUYVLAJPKKJYKRRNEJYCWHQAXNIZUIYLLJXMZ");
    msg.memento.assign("LADJTIPYJFNXVGLJSYDGLGHHLOUDIBIGNGXWZAFTCIUPIMCAQZFRVNRJBFRDAYUZEOQCKNSOYAMBSHENFBVNDQEYTJPZUAQHXYEGHRIUWVLKOECGFDTZHZWEWJOQXISKWFMEXVLMHKWWBFHYSOSRFYILIPXCAMCDVTYREUUSBZNXPCLQJTOJJLRXRXBMMPEDDTJPAUVGPKHKGBCXPZZNOFSRMAQBNWNYZLA");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.2592245129439388;
    tmp_msg_0.z_units = 77U;
    msg.control.set(tmp_msg_0);
    msg.duration = 48370U;
    msg.custom.assign("JGWYNKGRJSELHMPPNJDOBBAKEY");

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
    msg.setTimeStamp(0.6433797866739815);
    msg.setSource(26051U);
    msg.setSourceEntity(80U);
    msg.setDestination(63743U);
    msg.setDestinationEntity(29U);
    msg.plan_ref = 997337133U;
    msg.id.assign("XHWVHSXLNWABUKYOXAUJMEYHDYCJQLSSKJLJSKHWNNSLGILYBAVHQBBFHUQRFNPKDZDFPCXQHRMLPKMTJJUXIOSCGPMWKPCTPXLRQXYVOWHUIKAEODTBURMTRWWICTRTNOLUSEVAEODPMMMFNAFIXFADMEZBQEVUPOVNCI");
    msg.memento.assign("MDOJBVKJRIVHKQCSQIUDXCNGYSVEOTKAZCTTLVGPLDJQNFEIXZSBTUHKNMYPAGOJRHAPWABAFWYTBKYYQTVZUHWDEBBCLXUQPICOULBMCJDJLKGAADBLRWXWOXMIVLGUMIFGQPPUSYLRHSZFTEMSHQKKYNOGGURWTVFXONOESFJRXTQGSACCJCWSWNXEDZUZZIPUZAMHR");
    msg.timeout = 10049U;
    msg.lat = 0.3511871228098066;
    msg.lon = 0.35045088700886473;
    msg.z = 0.670697039859555;
    msg.z_units = 194U;
    msg.speed = 0.33805934760907663;
    msg.speed_units = 147U;
    msg.bearing = 0.9566995248488149;
    msg.cross_angle = 0.4819189044234431;
    msg.width = 0.19165783484189447;
    msg.length = 0.2009491142694646;
    msg.hstep = 0.00911257855711689;
    msg.coff = 222U;
    msg.alternation = 28U;
    msg.flags = 162U;
    msg.custom.assign("IMTZGMTDGHCODZECHHVRUGOJUFTXPMMAPZMFCHBMKLNCRPPJSNOQTYOKIJWBNSAFVUCWCBJSTLNLEYMWXPXVJFULDOOGFRWPURWEFZUCSHOZTSLMEFJWTKDD");

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
    msg.setTimeStamp(0.6698660988552951);
    msg.setSource(35537U);
    msg.setSourceEntity(40U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(78U);
    msg.plan_ref = 3917631861U;
    msg.id.assign("WVQRCBHZCYVMDPIXHXLMMVNMPRLMCMKVONZJLFEEZFDXPKBDQIRYNDXEUURBWYKFCGNIOJYSPEKAXVHGRIHVYBUFPBSURCNLXHIBCSSNCHATUOJEPG");
    msg.memento.assign("PJKRSZOBDDOMPXITIXDVTCMXEIVOYSMHWCGULIMZLHOJKALZILVRBGOYUPSASNRYMPYZLNNUFGBATZFNKBHXJVJWRXVQDJWHQWOXBPRURCHNTITGIWTQTNQRYSQV");
    msg.timeout = 46876U;
    msg.lat = 0.42049223715742945;
    msg.lon = 0.32162833481537767;
    msg.z = 0.7753712418839507;
    msg.z_units = 184U;
    msg.speed = 0.8640407911370662;
    msg.speed_units = 94U;
    msg.bearing = 0.16282829185660075;
    msg.cross_angle = 0.6561498313551462;
    msg.width = 0.3887483055121157;
    msg.length = 0.4490244581095839;
    msg.hstep = 0.04067008889089485;
    msg.coff = 173U;
    msg.alternation = 220U;
    msg.flags = 232U;
    msg.custom.assign("TGZSYERWKJMNGBEGVUIFVPFCMLLAYW");

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
    msg.setTimeStamp(0.40213409921983145);
    msg.setSource(15977U);
    msg.setSourceEntity(219U);
    msg.setDestination(28692U);
    msg.setDestinationEntity(218U);
    msg.plan_ref = 3912943574U;
    msg.id.assign("JNRICYTNACVPCAFOYFDBZQQYTCPEXQRRWUDWEHDJGONBVBKUIWYBMQQONCZOOFLRRJJKHQNTHWI");
    msg.memento.assign("CSUAIABAWUPZXCLFJRZLOUOKDNXZQPNEFSNTQGSUTUDMMHICDHOIYVAUGLYXRZDWDOSEFNLJFHTWQNCJMKZGVXKMHRGMFVLFCEFETWYYHJFYTQURLSZPYILAZOTOZEXWQGCJQBLHBNYHAYONVGPHBKKNKVWHWRSJBLQYJRBSEIDBJVSBCTQPWKDEEGXTGCYIERPKRFNITVMWXOJSTZPBISKVKAIMMOPJMIWDUNXVLXAPBDERAXUQPQCGV");
    msg.timeout = 19322U;
    msg.lat = 0.06259314217619971;
    msg.lon = 0.16203425986052855;
    msg.z = 0.5190433248545439;
    msg.z_units = 10U;
    msg.speed = 0.4121601693563721;
    msg.speed_units = 9U;
    msg.bearing = 0.8802952438841477;
    msg.cross_angle = 0.2541436520605398;
    msg.width = 0.5474184394047618;
    msg.length = 0.35790853686485113;
    msg.hstep = 0.6887429074525587;
    msg.coff = 228U;
    msg.alternation = 14U;
    msg.flags = 11U;
    msg.custom.assign("XJXAABUCZHBXKFYIKXFXWEQDMYQEWCUVNOFGUXIODVNJQSGQKDFDPMWMRLFVBVEPEITHBCSNELFBYALUSPJWOTGCJJQMNMNJRGPSGEPFTQRKXSISMTTPNKTHIKAZOYRDHJ");

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
    msg.setTimeStamp(0.7563902022840341);
    msg.setSource(43323U);
    msg.setSourceEntity(180U);
    msg.setDestination(52687U);
    msg.setDestinationEntity(245U);
    msg.plan_ref = 2423000664U;
    msg.id.assign("OXMTUHADNGLDOMTZJILESUGKJTWIFCSAIKQDQBFMOMPKMAFFUMVYRWBHHNZEXLFCZITUBYVRQXHPKGMRJHPXICGCSWQMAOZEWDONEZBUTGKYUENPXLYURJDIIBRCGQHKJLGXPINKJSJWYQEGSSWDOYYEGXTTZSCVEALAXPQDQHTVEOSPVBRZYNKBOSLBNRKHVAFRYPOFKIDTWAQLBRNUCHSWFCNJMALZEVXZOUPVVMVJBCUWALHNTIQYJCZW");
    msg.memento.assign("RLEYWBPTOBYVAEQZZMPBOCLRWWKMD");
    msg.timeout = 32619U;
    msg.lat = 0.4340932259532557;
    msg.lon = 0.5869330927168559;
    msg.z = 0.8860141147800139;
    msg.z_units = 114U;
    msg.speed = 0.17645032786190473;
    msg.speed_units = 250U;
    msg.custom.assign("LKMBGWPGTCMNEECUFAKIHNYOQMUHHRADVRYJOABMLBFXZWWYDNDXJGJCAEHGZWZVNORTIYDSRLEDNTTIYZPNZRTSFIEJVUCJJRWOVLEBZAOPIGVCKXNZDPKKPJXVUQLIPTGOHTWLYLQWTMBRSOBMTMBXAASXIUKHKGCMWVAOFXZVQWCFGBJDLHNQQHJZOXWYTZUDVSGESLEXAPKFVKBIICJCGUSYQMFUUDSUYNPRQSCPN");

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
    msg.setTimeStamp(0.7814864055782735);
    msg.setSource(61930U);
    msg.setSourceEntity(175U);
    msg.setDestination(28788U);
    msg.setDestinationEntity(65U);
    msg.plan_ref = 2596040932U;
    msg.id.assign("ATOYMIVTLJURGYOOMAYWQALSQBYYUBNSLTJBNNIUWQCHGVXNGIMZSNGYLDFZADEZLZDJVKURSYXESVZBSVEXPHCTHHFAQXKZZSOPVKACDHRCQOOLARMUYRUQJMJEIVBNBBWLUEJCPNEKPZCJAW");
    msg.memento.assign("XYKVRHQYOGNKBSJDHAFFHCSIWIQKMCCLIRPNEUKHBKRYXVDRXXWVFCZMWEITRAOHPTKYNADGQTPZDPJNIPBWUUTPZYMLPDSYUGWBNGDUMLARIJELBVROKTEVSXNAWTMFCCAGLJQFKQXLOUBEBIOBNYZQFHOYTS");
    msg.timeout = 24276U;
    msg.lat = 0.21708223350263878;
    msg.lon = 0.34762850975310733;
    msg.z = 0.2198136889513922;
    msg.z_units = 184U;
    msg.speed = 0.656570172754479;
    msg.speed_units = 64U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7403090211585083;
    tmp_msg_0.y = 0.920731470553685;
    tmp_msg_0.z = 0.5994139257424403;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IPSVJTWNOWSIZYGDYDJDFPWDHPRBMFHIHANKUJCWWUUVJYRVGZCABUDCQTVKRBQLEANMMPACFJLCTEBFPSAXCIOVORITXDLBEQQVIYOYUTKCHJBGDTLEOXOOVHFGCLNHPNJAVTCKUVSESMMNQLXXUMXBXGWHBXOFIVKPMKLYZUQRGIOUSJEKLWQPHRITBG");

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
    msg.setTimeStamp(0.6398543829905021);
    msg.setSource(53770U);
    msg.setSourceEntity(183U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(243U);
    msg.plan_ref = 1055781308U;
    msg.id.assign("PHZNUBGDDDFEBPKEGFCZGQTWWFYXXNTNWKWJTCSQWIFRCUMNIUDYDVMICSCFMALBUOIORQHLEOVJBFVPCSXLHDPGIKBVQYSIAMSVZJWYQZHOZQQLFTBZKRDKAOLNYUAZGNVSERTXWYPZUKEGJBCEKSEAHUPJCOUWGDG");
    msg.memento.assign("SWOEYHKGMPXQPMEVOSXNMDAKHYFJUWKYQQROQJPPCXMFVQBGXUGYMJNLVEUZQXYBLEPIZITNPWFKWKRJGSVBSLNQATDMCLBZLBDGNESQFCHGQZFJCHYRRWJCDSWFAOYHAIUHRSOTECFBWAOTDHYIXZT");
    msg.timeout = 4175U;
    msg.lat = 0.15624091225487868;
    msg.lon = 0.4084944464849587;
    msg.z = 0.9906574647904692;
    msg.z_units = 166U;
    msg.speed = 0.5308503789483282;
    msg.speed_units = 123U;
    msg.custom.assign("OQQPOXVCTNPIZOZEIPWXTCYZNHIDJDUGSMHSZTTPMNWJGHHEFXSHGNNKRYCRYSGXKWFHNLKUIKHELYJRSCOUQLMTLLGJKEQRBCINRCFBMWAMLELGGHQWFQYLEEAGXSWZJBFSOGVKTDTBMJQEVHWZOAYFDZQFNQXRVSZTLCAWRIULXSUVJYIUZVKOUDDWZKVDCAKFFPVJBABEOXNCIYRMOSPMPXPPRGQE");

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
    msg.setTimeStamp(0.582012264561824);
    msg.setSource(31968U);
    msg.setSourceEntity(177U);
    msg.setDestination(54855U);
    msg.setDestinationEntity(191U);
    msg.x = 0.8697388708159939;
    msg.y = 0.7095579203904205;
    msg.z = 0.098818611981773;

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
    msg.setTimeStamp(0.6835282602144365);
    msg.setSource(8612U);
    msg.setSourceEntity(20U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(135U);
    msg.x = 0.22097826037430313;
    msg.y = 0.12749198369532921;
    msg.z = 0.4730959637655978;

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
    msg.setTimeStamp(0.9421356585344292);
    msg.setSource(48762U);
    msg.setSourceEntity(79U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(190U);
    msg.x = 0.7503099197498403;
    msg.y = 0.10033250352166612;
    msg.z = 0.725920633176607;

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
    msg.setTimeStamp(0.755107751348462);
    msg.setSource(55926U);
    msg.setSourceEntity(58U);
    msg.setDestination(53375U);
    msg.setDestinationEntity(164U);
    msg.plan_ref = 2861761105U;
    msg.id.assign("JKSMKWHPTSBJSXWXUDGEWWBHPILRZDOGPSQOURALMFDVZNCIDPQNJLDXKOSTPIWOKDZRTBXCIHKUUUALGPBRANJJLOGSXAUDAGZSVVLIVPXLKJZMKE");
    msg.memento.assign("AWPGNJCVTKYSAKAKEGSBIVDMLLEEGTGACYYQJVZFFUSIUSCZLEPAZDHVHN");
    msg.timeout = 54188U;
    msg.lat = 0.3116426429592598;
    msg.lon = 0.9161406970366852;
    msg.z = 0.015256533213862444;
    msg.z_units = 161U;
    msg.amplitude = 0.9350198135738481;
    msg.pitch = 0.03350148539704534;
    msg.speed = 0.024712875723626238;
    msg.speed_units = 250U;
    msg.custom.assign("MXSIHSLOUNOPZQJISVMZWQYP");

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
    msg.setTimeStamp(0.6003319510524874);
    msg.setSource(38856U);
    msg.setSourceEntity(104U);
    msg.setDestination(32639U);
    msg.setDestinationEntity(173U);
    msg.plan_ref = 2021412106U;
    msg.id.assign("GTLZMMIUCHAFOSLUWAXAXBJRIOXKJXWAIBYMGHUYFTZRJVRDGLQMOJIALCSTDDWSCFREKZTWXRLHHXYOGINFRZBCSBCDEFEUZXQOEHBQNWZMINQENSOPKPYMOPAYCRWGCNMUUKLJYYMXQAT");
    msg.memento.assign("OEUXVRNMNUJKKHROZEECGSOUIQZIDZRTTBZBNWHOZSBKVCXQEHDLJSMAUHRCTVUWGEQVAVZKJMLVHSXFWCEGLMVGYGNLHOPADPYBEIRJYYATWODEMTHDZXOGKZOKMQQLUJRFMPCSJHWQPISHDKCRICFLNBQXBJYXUKLLALDIWGWGFXTVXNMK");
    msg.timeout = 19221U;
    msg.lat = 0.5353868184608577;
    msg.lon = 0.454327064405169;
    msg.z = 0.28251114749475426;
    msg.z_units = 130U;
    msg.amplitude = 0.43235106446133786;
    msg.pitch = 0.06418931391466498;
    msg.speed = 0.04517200431422019;
    msg.speed_units = 231U;
    msg.custom.assign("KRWTTISAMKEKMKAKQVFLFLSFUJLOQECJSRRHRICDRNGDGCJKIJCGSVSIXQAKTAPYHGNLJVZHUUWGMHEPMFQCVDNBVHDCZWYSZKSXLFPLLBALMCEETUMYLKXMGOBYRTXMPVEPTZWPXGSZEXVVSAJIHWUZRNDILPNRQCQYIHARZGUOTBZTYTEAZHDNOFDFIQEQBODMNKVQNUDUFXWXYCWOYBOXYUN");

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
    msg.setTimeStamp(0.6560024973350941);
    msg.setSource(44777U);
    msg.setSourceEntity(34U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(45U);
    msg.plan_ref = 771652460U;
    msg.id.assign("OSPIMXLFULGZLWYPRFSCJACGWLRHOXKYJAGUXQNVNQUMZJSWEWJMYCMQUKEOBMHNFZPTDADAIJBSAPGFBVTIGYSAAEIEZJZCJXTTGHQGVNNDRKGYMHQAGSHOXDHSZWOIIVSNVXKLXEOSOTRVBKUTUPVXHFYKZQLGHUEWDTIKWFYIQJEBCPFRENWCYKMCPRZTUKQOVRCWLYWOFDDSZHCBRDCAI");
    msg.memento.assign("QFWVDFWHVYRLRVEYJTBMWRFDCRWQFOQDRZLPZUDVZJTAIUIXGDTYXQTBQEWSLPYJMFAPWMRLPJNIGOKBJMKAOLHGYXQIVXGXWIXNJSTCZUPBDNC");
    msg.timeout = 47389U;
    msg.lat = 0.7835057460463751;
    msg.lon = 0.9122661539284692;
    msg.z = 0.7208749479722464;
    msg.z_units = 10U;
    msg.amplitude = 0.08399625857248572;
    msg.pitch = 0.9164795815645896;
    msg.speed = 0.14577382677402662;
    msg.speed_units = 99U;
    msg.custom.assign("YSPTVJSBUUDVUXDERXTSQTDYMKJKXGDCJRLGVJZLFPLXFMUITKQDFSIQWGEKHCCIYAEAPAIUSHZDKHZHUUEYAZEYCSQAAYIX");

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
    msg.setTimeStamp(0.4223968947548684);
    msg.setSource(57931U);
    msg.setSourceEntity(19U);
    msg.setDestination(15118U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.4668055560356602);
    msg.setSource(29786U);
    msg.setSourceEntity(168U);
    msg.setDestination(60340U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.739587934147637);
    msg.setSource(35050U);
    msg.setSourceEntity(11U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.38328151402633837);
    msg.setSource(55548U);
    msg.setSourceEntity(198U);
    msg.setDestination(49354U);
    msg.setDestinationEntity(74U);
    msg.plan_ref = 1797879601U;
    msg.id.assign("RKLERRBPPHHCZJBDYQBSVQNTIAPQNYZCJFAZCVLDGPHUYLXOKXWATJFBEASGTLODIZQDHUZVOTFJTIJFXHEJTMBCFXEKHWZEZBYMJNWKYSOMBEOQHEAAUKMFXWGIUTCSTVLYNMNJGPKJMQLGGIUAPGBKUPLRPNQWDSSWBXYV");
    msg.memento.assign("YTLJDBHKNIGYKSNOVNFCSQZZIOMCOHWBZKGAJTFFJEJFVZNMPTEYGTCJFKHNTGAKYOCDQAMPSIPQOQVRIPKAZSXVBGOJOJNWFNCHAYEALXUXWYOCLVJMBUXSGLTQRPLCYLYKIZADGORULERWACWE");
    msg.lat = 0.6313286951187962;
    msg.lon = 0.7331728732391689;
    msg.z = 0.12772054230188912;
    msg.z_units = 148U;
    msg.radius = 0.767423032198868;
    msg.duration = 50896U;
    msg.speed = 0.7563782064254161;
    msg.speed_units = 19U;
    msg.custom.assign("OGFJBEDLNWDOYLXFMSHTQPQACZUZZNELACEJNJNB");

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
    msg.setTimeStamp(0.9895956497987397);
    msg.setSource(37770U);
    msg.setSourceEntity(141U);
    msg.setDestination(40012U);
    msg.setDestinationEntity(245U);
    msg.plan_ref = 870234943U;
    msg.id.assign("BIMZGEKIDKWYQMQSYXNVVJIQTODUIHZOBXXSSCFQVRQHAJMVHODKAPWRCUXOLHOROINPCBRXUCLCTQGMDEJLCXSTHIEHULODZGWZQRTXRIPBMAPGPZCLKSNCUVFKXYZTKFENDTQANEENJKADZKJJPVYUCYQAJGUMMHARGWNHFLPZGBVWY");
    msg.memento.assign("OKTWWXDAFPUEJ");
    msg.lat = 0.09942603372090153;
    msg.lon = 0.96018399932352;
    msg.z = 0.23779217274372233;
    msg.z_units = 28U;
    msg.radius = 0.3523525149983032;
    msg.duration = 55343U;
    msg.speed = 0.25295950013820645;
    msg.speed_units = 139U;
    msg.custom.assign("DGZZJKTLGSSQJXUQDYXEMPXXJFKOVZJDIUGUELPRTNXWAAGCLPQFGAYBRMSIBQKYHAOUQOZZBCWKPCCTINKHHAVUHFQFOAKCBKULGHMHRVPSWPIPAGMYTAVNVLQVBIUJWWJBMABYTWETFJCVCCYFEFTVDOUT");

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
    msg.setTimeStamp(0.9503347035450563);
    msg.setSource(42598U);
    msg.setSourceEntity(207U);
    msg.setDestination(53732U);
    msg.setDestinationEntity(167U);
    msg.plan_ref = 108787473U;
    msg.id.assign("XIZUEEASOZTMLQOPUNXPZDRFRJXHVRISBKCMNILBEFJNZCGDVTVYHQCTALYKYRDOBZHTDOTHKAKUWMTIKIJWSDABPFEGPTJRKIJCRLDQDVGOQYYGAQFVHEQA");
    msg.memento.assign("GLKQPFKCCQAXLMSIPREKDDNDTTYOMJVZEFFBSNMYVWAZBKZUCSSSJKVWOLLHQHKBUAIDEBXLYHOVGJWDVKAJZLWGORQQQBXZUVPGVCRNUADJTFFPSRTRBWEOXWYREKQLHHGUIVAISFYJSOZIUHTGTYINWYKALROGMKQXFIHPCTWCZENLMDEZDPADJMGZG");
    msg.lat = 0.05860313500680692;
    msg.lon = 0.450746820601198;
    msg.z = 0.5568592112815436;
    msg.z_units = 132U;
    msg.radius = 0.7128336968364425;
    msg.duration = 14007U;
    msg.speed = 0.39445918364228105;
    msg.speed_units = 7U;
    msg.custom.assign("TZDYTKFYCJDFUAEJDDZRIGRQKSSLNJZHVSCJWUXNMKSJLIDUYOBNJLYDVGSDICQM");

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
    msg.setTimeStamp(0.6560215426776326);
    msg.setSource(3190U);
    msg.setSourceEntity(26U);
    msg.setDestination(19706U);
    msg.setDestinationEntity(119U);
    msg.plan_ref = 1147336934U;
    msg.id.assign("FYSKRFJUYPNQXICOTNMINUQKNSSBVSUGFJDR");
    msg.memento.assign("PWLVYBOVUTZKEAVLYZBCOBQGYWLPPTTISLJNKTASPASLVNQLJZDIGQXNBQJQOIHJYHWTGXYMKVCBAMYJQEUUTZYUIFOIGINMCGELBNNNCMXYHDCEDULCHXXFFSQIQFJCSTKEDVHPEVYFFORJZBGZUAPPEHHWDMKDONTIUXSZJOGSBRPDEASENREARUVYNTIMRUGXWLUHZHORMQGDAVWKIMRXDPFOPMZAFKAWTJBRWSO");
    msg.timeout = 61092U;
    msg.flags = 56U;
    msg.lat = 0.7261708362886378;
    msg.lon = 0.924526110098342;
    msg.start_z = 0.4297026364217226;
    msg.start_z_units = 88U;
    msg.end_z = 0.07043535601839357;
    msg.end_z_units = 78U;
    msg.radius = 0.6922365814633539;
    msg.speed = 0.09978521458102185;
    msg.speed_units = 231U;
    msg.custom.assign("DLIFBMLHGIEEFCZIIEPKPWQXCSYLDHADAASABULEVNTAUTOYWZGSRZP");

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
    msg.setTimeStamp(0.3716535816495746);
    msg.setSource(48430U);
    msg.setSourceEntity(239U);
    msg.setDestination(16872U);
    msg.setDestinationEntity(207U);
    msg.plan_ref = 450717034U;
    msg.id.assign("BWEYEZCLSQPZFYZWVLFWARGKURUBTWSBODRJMTLOUDFSIRHSQKPOGUHOEMMMPMHSYQPBAHWQKAVOFZRNKNGIQSTBQFEKGYAWOHDCDGMYNBSLIKLFXNRTXCQGGMSRTXXVNZCZRTFADUDULEPYKMMUTLCTAAPTOOCCFMKTP");
    msg.memento.assign("RAWTKRZSRFYGSQIQFUWTPYXFTZXDRWDAAZNYNMFICXKFWHQSVBUUEUTDBGFQFOHOEOXLGNCPNRRHSMZDXSJAYSLHOLXWFUIJPQLIBCJDDHIJIWPBMHHXOYLKYRGCIB");
    msg.timeout = 47222U;
    msg.flags = 134U;
    msg.lat = 0.2275009938993625;
    msg.lon = 0.3070108585547471;
    msg.start_z = 0.9045419665054558;
    msg.start_z_units = 12U;
    msg.end_z = 0.02424016143649388;
    msg.end_z_units = 214U;
    msg.radius = 0.022578342916734218;
    msg.speed = 0.7556482518970896;
    msg.speed_units = 84U;
    msg.custom.assign("NBZKQKEKNPAXBCFIPZJJISSWRVXPWI");

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
    msg.setTimeStamp(0.3241844271038081);
    msg.setSource(30981U);
    msg.setSourceEntity(56U);
    msg.setDestination(30138U);
    msg.setDestinationEntity(234U);
    msg.plan_ref = 1840968592U;
    msg.id.assign("CGFYJNQMYPPWUCPELAFBARNKAFWCKTXUCEVOUGLMNNHYXZPCDIOYSDJTTKTICVIMTVIGPSDMRQLQXOVGEKQYBBVPTBNMOEDSRJGJQWWJFWYJSWJZSOQINTZLVIDFDWRCXBPIOLHZJUSKSOAGJIBLBKUFHYPY");
    msg.memento.assign("ZWWQUKCMLNLMTVPNDSYOWLBACGVNEKISIQJDNFMOQKHDVEGYNFJTCOTJHYBOZLUOFVOQPDASUSBWMWJLCHKZOIXUAJQTZTTHTCDXNBSAARRNYCKZXXXGVYFKDNCXUTTBNWFBWVRZFBNRUPWEREXEOILEMSUHVIJYYQVAAWOFMCJRPGQPJESDZPZHSDCEBIALRQWSKULAGPIUGXDRFKQMMPEYHPLFYUDJMBCJEKSHHFXVZQPZGKBG");
    msg.timeout = 37912U;
    msg.flags = 73U;
    msg.lat = 0.6163684451581021;
    msg.lon = 0.7819741456996024;
    msg.start_z = 0.18311484993490357;
    msg.start_z_units = 18U;
    msg.end_z = 0.590854977766049;
    msg.end_z_units = 222U;
    msg.radius = 0.8042320079159585;
    msg.speed = 0.10721180759378501;
    msg.speed_units = 223U;
    msg.custom.assign("ZUMTNBIAUGMWPVBJDZJRWQUFPUPNQECENSXCCNPYUCJASTYUCWXETKEOFZFKZNPIBVXKTXDKVWVCHTO");

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
    msg.setTimeStamp(0.08200005659272236);
    msg.setSource(2635U);
    msg.setSourceEntity(34U);
    msg.setDestination(36067U);
    msg.setDestinationEntity(17U);
    msg.plan_ref = 1660677754U;
    msg.id.assign("XCSJWGEHLVKTNEYQUITDNMGBTIRWUHRGHDFPULQQGBHLDYGMIHTBMWEHYYNUZLEJBGOIVCNAADDQSPBMVTFFABZUKJGIZNSMMUZMWPHKAXEHNQDKJUXPRAOWIVMPZTFDSLEWJOVKUYVSRXKUNBFLCZBKPDOHCCJVXQQFKXOKFSOCLSNPLQRYXTTFIAJPNEGECIQBZWOXWRVCEWFYJGUTPAGYPCMJALAOFXLQVMSSSZYRYRIKRDD");
    msg.memento.assign("EBZLBBJDQEKRPIQMWKSEHFYOGLAIJXZOPUUEXAFKJKXZMOKBGMEAHRRXVUVJIOQKRHFN");
    msg.timeout = 30215U;
    msg.lat = 0.6077380695556519;
    msg.lon = 0.7804701986513334;
    msg.z = 0.3747761021403485;
    msg.z_units = 29U;
    msg.speed = 0.6736259785489203;
    msg.speed_units = 249U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8424761681404354;
    tmp_msg_0.y = 0.8909347551695697;
    tmp_msg_0.z = 0.8974112293351141;
    tmp_msg_0.t = 0.09952231383649457;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TJCLOQIQFQELYWICEGHRGVOURIXGKEHXIKOKQRFBCQXFTOYRQYRJKZECZDONJJXLPEPBDFIGARLNHBUMAUNSPUJDBFTAIVWDWLIPZNCZWKZGUMGHHYJWMUMQAVPLHHMAXXDMWCYDIXSCXXSZAHXMMUPZAPESACWZBLLJGFVBCUBJSSVETGSFKJDYUBKTFOAZLRJANVYBTVN");

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
    msg.setTimeStamp(0.8324352746172781);
    msg.setSource(51436U);
    msg.setSourceEntity(24U);
    msg.setDestination(65509U);
    msg.setDestinationEntity(196U);
    msg.plan_ref = 3004797629U;
    msg.id.assign("MNOOEOILJGXXLXYFTMPLEZTCTQLCGQJPXGIBJBFUNVVDJKOYDFMQXQZTEKTYHUMWGSKXLQABZHBSQNEIVCIEAVNRYIBMWGYTPCOTPRBVHJBEXJZGJJWZDZLOGOCZBANVGOJRVYDMKWONIVSRHGIURUAYQLMKUQFLTDHZKKUAEMIAYEISSKVVSDLRPSUCNWRNCPFAYPFWXOFRWHRIYDGLUFWAEKPZPAXTRNCSD");
    msg.memento.assign("EAVWPZKWYVCJTHHVQNKTLUHYOAOEXLJCIISQNCYGBPKOSIMHXLOJOQTUJPXDYMUZWAXNRWZZQDBRUEVGADLBSHNWKZOPGDDJOXLIJGKHNUAKGKBKSSFYUXPCDGFMHQMHRIDNJFQSZBFTTYLVRSYREIDENTAMQLSDCTUZPGBSAVXRMLBHZOYM");
    msg.timeout = 26241U;
    msg.lat = 0.030057607901308847;
    msg.lon = 0.17424673522494538;
    msg.z = 0.4938155046985262;
    msg.z_units = 111U;
    msg.speed = 0.9355171960477874;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1815292360962517;
    tmp_msg_0.y = 0.5447585885997271;
    tmp_msg_0.z = 0.06446662168457429;
    tmp_msg_0.t = 0.5462319119330764;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OJUGFESCVWCDELPPTYDPQLNPIRKTMOJXQGDMDBKENGCTVLDVDBFJWNEZTQIPDPXZLBECTRQLXYIYTLGNYLLNEBCIFMBCKMAZRHKJDTPZSJQIXVOIWFOMAWXUJQWIQZBMCZFBHYXDKJNOPQASZ");

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
    msg.setTimeStamp(0.3062284372243139);
    msg.setSource(31014U);
    msg.setSourceEntity(7U);
    msg.setDestination(27067U);
    msg.setDestinationEntity(133U);
    msg.plan_ref = 3648952287U;
    msg.id.assign("BYZVGMXFSNTPXAGMCKUJMFHQYMGKFPPMYNCDROWGVWSXPTQCBIHHPJSFKBAWTURLQGVXHAVCUFQVBOSYTFPRHTUZMAWEHIZMBCGOVJNFJCQLREWJLOROGIVKIJNSITLBXEECBNSNNDTZKVJQQUVHFKCTRYZXPULJAEYFXDZQHILDBQXVOWATJUZOHPODDIJYLDMYZXKEPESMULAGDODQNRSHEKAAEINOBUUGWWRXSSEPACDGZTKWLIMZRBYRW");
    msg.memento.assign("EZDJTQYLRBOMWIXVTKCCZCUWRNIWDOOQRFMCHOGFZJEFVBJJASQTPNVFDSIZYCOSNOGZKCHMXPZDYFTVSPNXTTYSA");
    msg.timeout = 33226U;
    msg.lat = 0.377736568067909;
    msg.lon = 0.32357448200094874;
    msg.z = 0.6572844516878457;
    msg.z_units = 165U;
    msg.speed = 0.07492444887505889;
    msg.speed_units = 29U;
    msg.custom.assign("BWKSBXUNNFNKHOEOFZTHEEFZKDECOXVYIILYVDDGLKCOUSOAHATLURDQISVJBLZEKFGCSAPIASRSIYADWVUJDKHZOTMOWPLGPACHWCLUHFMYHPCWUJEBPXSQLJYIVBJUBVZPTGJNQYXMIAWVEAWSQMGQRUPCPWKHOB");

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
    msg.setTimeStamp(0.432814428486584);
    msg.setSource(38089U);
    msg.setSourceEntity(244U);
    msg.setDestination(44301U);
    msg.setDestinationEntity(105U);
    msg.x = 0.002613277339626796;
    msg.y = 0.3357965986877728;
    msg.z = 0.6019152173322683;
    msg.t = 0.8088932649438093;

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
    msg.setTimeStamp(0.32285061297849116);
    msg.setSource(4074U);
    msg.setSourceEntity(250U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(31U);
    msg.x = 0.38019923313868975;
    msg.y = 0.3844207232111314;
    msg.z = 0.1845303964046644;
    msg.t = 0.4752621443442304;

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
    msg.setTimeStamp(0.4168550159915374);
    msg.setSource(51533U);
    msg.setSourceEntity(65U);
    msg.setDestination(10999U);
    msg.setDestinationEntity(29U);
    msg.x = 0.5619784130636079;
    msg.y = 0.4458679535228438;
    msg.z = 0.5380045447388146;
    msg.t = 0.3243185766030098;

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
    msg.setTimeStamp(0.7373375702989309);
    msg.setSource(22466U);
    msg.setSourceEntity(72U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(6U);
    msg.plan_ref = 640025759U;
    msg.id.assign("HWEWWXRGDOFBGLKOBXDMORAITYTYCHQDPISCAUKBHIEPEUVVSYVALVFQTAPCIKUPEALHWHWYQUSWNDXXSQXUOAGGLEQZBJJPOQRYIGMQFFVZLBPQCNJSNBMAXUKRJDIWNJC");
    msg.memento.assign("WTLZRCBYPRQUTPPFCNJBYBKXHQVMMKTGECLUEFLRCGXVKGUIOPCAHLFLDNADOXRKNWPKFWJCFEXAOXBZKPEFIHOTHWPGNZXEMRLGGVNQMMKNDSAECCJJNTMQQALYGFJZVXCOUNLFSBBBDQXBJASRQZSDIJJFXVSCRUBAIWZZSDO");
    msg.timeout = 36061U;
    msg.name.assign("RZUQWQPMJXROILQFOXJACIBQHBNFKTDHHWUNZPDCMOTRKCVSKRXPZIZMFUDXWPVCGHHHINNEDEMBMACRKDTWSYCBGPEYSBGJLHNJDZFMOSSVTQ");
    msg.custom.assign("DVXWFUGWXTLTSQMUFYPBIQOVREKDAYWBXFBGJSDDDYRPJWAROVTQBKDALFGYVUMXWDBEQICJOAFKKWUZOAPHXZSDIISNCNPNRLYQXXMKEMYGBPEXHSJLUZZZAGGWYDFTNCZSVXQANSKNVEXTZSOGTQSCLCLKIBRUNIVMPTGOVKUYRIOZMEJTOERFCIUQQMNRCIMMHVDJAJHYPINHCWRJJVHOTGQJLACARNZLEPE");

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
    msg.setTimeStamp(0.31175582329189266);
    msg.setSource(44498U);
    msg.setSourceEntity(144U);
    msg.setDestination(962U);
    msg.setDestinationEntity(242U);
    msg.plan_ref = 1722081106U;
    msg.id.assign("IEOWZPQHVSJKFJXVMVHLQPYMRYBFPABSCZUNRZBUTVOYGFUPDPQKSEXACMZFQKTRFGYRERHKVWVTQJSIVRHZHYSUNYEWIWKDALOWWPCHXJMVNLXNPJNOKZGBMDLTXC");
    msg.memento.assign("JNQZJUMTUTVPDTDYMVDBZKKGZDAGMNVPUQCQVYRRHITDMQTNDOAEMPRZXXVFMVWFCLFPHOSEGSBRNQPIFCFPBEIVZSPRYEIQRHAZXJWKFJXWDKORGUGKEYISWHYYPXKPINNEUUOREGINYFZBGUAVBKYOLVSILFIGDWLJZZSPTVNYWWFEUCSSAWILSAKQYBRXEOHOBSALHHECXFOWDHXTMTNXCLLG");
    msg.timeout = 20784U;
    msg.name.assign("SLCJXDOURVLJHDFOMWYZQSFQASGTNGBMUAWRFVEUVTYFMUUHCGKXISQOHJTTBEMRFMZBFQOMYAREIXXLHVELGNECUNXOWAGBQTJNNTPSHFFJGWRIVUDYKTWUSSJQJIKPUOOT");
    msg.custom.assign("VEJSJBSLMWBNNSRTXMVBBFWHSYEUENUICSCKZNYKRDFDKMDABVOUCEBLUKIGAQPENOATLGDMRXJVLUAOMEZPLAGBYYNTICBSOCUVDLOACJWKQRLYCQZIXBXQZUWYQIGCHRZPFZCTAUIFVNAQDGWELZGRRHFINSTDKAHXOVYF");

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
    msg.setTimeStamp(0.6901937669440859);
    msg.setSource(63614U);
    msg.setSourceEntity(191U);
    msg.setDestination(14003U);
    msg.setDestinationEntity(231U);
    msg.plan_ref = 1221625360U;
    msg.id.assign("DEFVWIVENKLGBHOIKJWDSNMFMHWPUPNIATJEUPSTAJFCDLNFGAVZLTXXQEMBPUGVSMTLBHBAVDHDMPGOERJAASYOKNIORVWWVHKZEAWZQQRLPFFXGZWQYSHOKJRTBPRRSWFFVMXSEGSAUOVZZMB");
    msg.memento.assign("OPWZZJBEHIJIHOJKADBQLACFCTOJDLMQBQKMQYEADFQQJEYTAHXSPETI");
    msg.timeout = 50412U;
    msg.name.assign("AQOJCKBSTBPJDAYTILZWKQCRIBLKAQXWJEKWLXDLHZOJJIHBOSPTEMGRYJIDOESXZGFCNLBOBLXQWKLNHVNCMUACAQUWVZJLXYMYP");
    msg.custom.assign("CPPGHXHAVMPRYTAGQZEUVHAKZI");

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
    msg.setTimeStamp(0.767646146842529);
    msg.setSource(35348U);
    msg.setSourceEntity(52U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(25U);
    msg.plan_ref = 3007901489U;
    msg.id.assign("GRJEIPMYGJGLITQCYHUDORBUUTCMZVSGJDZFOKWZTAUDCKOGAMRNFEQBNXKCVLHDMPPAAZKFCADOJEBIMSNXXDTTCYLOBJOCXTHWWGKKMMHTUSAZHFFYGUMBYDENXIKUPLTNIBEXRBND");
    msg.memento.assign("DCPCXVOWSGCMFEQFWTOPSDPYJNRUAXSPVSBBJQIWIUZWBCEMFGCGEVKTGDMPOHLLHADTJKLTYA");
    msg.lat = 0.5506802735241515;
    msg.lon = 0.6987174066394142;
    msg.z = 0.6127574752565681;
    msg.z_units = 15U;
    msg.speed = 0.14000514451500112;
    msg.speed_units = 132U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9230324215517209;
    tmp_msg_0.y = 0.6814456862932783;
    tmp_msg_0.z = 0.0419619255307947;
    tmp_msg_0.t = 0.9717244774577276;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.43234688524656995;
    msg.custom.assign("ELPKRLLNTIIFBLJUSXSJMSYSQGFJERYBXERWWNEUQCGRVVLEFXCSWCYADNZZEKSORXGGWVTYLVTHKPQGOHMTGKRBOTSMFHXCZYMNPPNIDPKQNRLGHPMUOETOAPBATGAAYLJTCFZVFMVBGPXDHJTMSOFIWTGIHFEZIOJCSDUWVBKFBPOSUXEZBRDQDADZMQHWKRHQV");

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
    msg.setTimeStamp(0.2055888983231008);
    msg.setSource(44474U);
    msg.setSourceEntity(211U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(223U);
    msg.plan_ref = 1288546688U;
    msg.id.assign("ESLGCGMLNHDSXVGOUCLNCQIFELWUCZWHDKUEEMVSFKKZDGSMBXJNCQVPVMDBZUMACDJLHZZBEZHOQMRRQLNPPSVAKATSRDGXHIUUIMTGMPNTQPCWTXFZOUIUYKYEBZXPQAHRKIINYORMAQOHGBSRYZWAYIIBTFREBEOOPPJETXQQDUTRBGFALFJFSAVVVPYAJVHOLYNWQGFUCHIWAOJOKN");
    msg.memento.assign("JDFUFADMTKVIQGBQCQNHTLXJWZPYKLBFCZTQRKWAOVFZSTKMSWGNWZBIHETRSAVHLPDRNIBMDVOCJOCPANFKNQSZMEMGZMSSYGUOMGSOXXGEOCZQCVKH");
    msg.lat = 0.6849042634002976;
    msg.lon = 0.5558626930761025;
    msg.z = 0.06702027868106342;
    msg.z_units = 170U;
    msg.speed = 0.00478357701096932;
    msg.speed_units = 143U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3451046914053595;
    tmp_msg_0.y = 0.3751372408747179;
    tmp_msg_0.z = 0.36349261133492683;
    tmp_msg_0.t = 0.9441632267392892;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9135803682599145;
    msg.custom.assign("KJNCZKTCCEUEEJAJHWMZLZDAQXXWQFZBUTJIHVREDDUTFKUJWJTNGJBAYQNZWTLIPRLORLOYEDDWIGRLBOBAVIHHMKMELLGFBMAKPVUFFDRRYPPDXYBNTYVMXIMNQ");

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
    msg.setTimeStamp(0.2558108590092507);
    msg.setSource(20285U);
    msg.setSourceEntity(131U);
    msg.setDestination(59067U);
    msg.setDestinationEntity(184U);
    msg.plan_ref = 3517262193U;
    msg.id.assign("OWBIBVPQMYUKEVNUJSHONQGKLMOVOHUQENTPSSZXQWIIVOKQNXPTYGNRLDYTEJXTEEKWFXCYKDMYRZVMHCZCJICQMNMBFGDZDLYVJVHJAWFGBPFSEAURDDAMKSHAAZTJJLZDTEEVAQRRARHOOYCSJLBXRFJUIYQDPPFXIHXTDQB");
    msg.memento.assign("XVIBPTPYQKJWFAMPWUZAGXHEZGGHKOQESCGLVMYQUOJOTQBWUEGQMJJBKLXXSFRTDZYLYFEATVMAPCORNECBLCTAWUKIRBRNJIOQGBINHHOFFIHHVQSHDTDSZRWJSBSQECGROLD");
    msg.lat = 0.1275305820780348;
    msg.lon = 0.035980924490014665;
    msg.z = 0.228659247074949;
    msg.z_units = 207U;
    msg.speed = 0.10283864005331;
    msg.speed_units = 106U;
    msg.start_time = 0.52145393366265;
    msg.custom.assign("TIHHEIPLQMJRCHLVWZSXWKLDFHPSJJWYQAVDSVZRTQMTTXCWBAZHYLTIXOFPNXJMIFJZVKPXZTKFVEAYZUMREXIROBDTVOWCMIQBNGQPRJUPJLONHSMXGBQQAEWGDKFCQDLTFUYGHE");

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
    msg.setTimeStamp(0.7463897634782996);
    msg.setSource(52518U);
    msg.setSourceEntity(155U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(99U);
    msg.vid = 12311U;
    msg.off_x = 0.8573468664927536;
    msg.off_y = 0.15161658497910135;
    msg.off_z = 0.5078405926460828;

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
    msg.setTimeStamp(0.09022935023008294);
    msg.setSource(39982U);
    msg.setSourceEntity(17U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(13U);
    msg.vid = 34869U;
    msg.off_x = 0.9191425141236204;
    msg.off_y = 0.939876200152597;
    msg.off_z = 0.9286682437084203;

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
    msg.setTimeStamp(0.9152945614288378);
    msg.setSource(41791U);
    msg.setSourceEntity(6U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(175U);
    msg.vid = 22800U;
    msg.off_x = 0.08325942669406561;
    msg.off_y = 0.17185055674901784;
    msg.off_z = 0.04945460311449201;

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
    msg.setTimeStamp(0.9814527722973149);
    msg.setSource(45217U);
    msg.setSourceEntity(221U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.7907058112036331);
    msg.setSource(31032U);
    msg.setSourceEntity(98U);
    msg.setDestination(8220U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.2190932721327563);
    msg.setSource(57584U);
    msg.setSourceEntity(246U);
    msg.setDestination(3551U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.719353943843742);
    msg.setSource(36636U);
    msg.setSourceEntity(67U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(111U);
    msg.mid = 53128U;

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
    msg.setTimeStamp(0.15303601454392568);
    msg.setSource(486U);
    msg.setSourceEntity(12U);
    msg.setDestination(44299U);
    msg.setDestinationEntity(11U);
    msg.mid = 63977U;

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
    msg.setTimeStamp(0.1773191097981559);
    msg.setSource(46313U);
    msg.setSourceEntity(207U);
    msg.setDestination(40938U);
    msg.setDestinationEntity(88U);
    msg.mid = 11481U;

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
    msg.setTimeStamp(0.5070395397681132);
    msg.setSource(32873U);
    msg.setSourceEntity(26U);
    msg.setDestination(34476U);
    msg.setDestinationEntity(186U);
    msg.state = 172U;
    msg.eta = 43055U;
    msg.info.assign("GRDYMUBQKKWNAPEDDWXFQESRWNZKTZCRJSBICZYNNFTFWWOUCHDPVL");

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
    msg.setTimeStamp(0.8062158199116155);
    msg.setSource(13834U);
    msg.setSourceEntity(82U);
    msg.setDestination(1791U);
    msg.setDestinationEntity(253U);
    msg.state = 63U;
    msg.eta = 48656U;
    msg.info.assign("IZCLPGTOGSVDOVMAXFYEKVITIGZFKB");

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
    msg.setTimeStamp(0.5737613036424718);
    msg.setSource(53074U);
    msg.setSourceEntity(60U);
    msg.setDestination(52045U);
    msg.setDestinationEntity(217U);
    msg.state = 226U;
    msg.eta = 3965U;
    msg.info.assign("RSRBZZRTTHQNMAYUKBEZRIESKMJJFESRGVHQVCVFYBVCSFKQCEMTVTHVPLKYJGAWKXBRSYZPEGUDXGNKMJDILIFUJAWGKEHMWWOTSAVP");

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
    msg.setTimeStamp(0.644752306179332);
    msg.setSource(58501U);
    msg.setSourceEntity(197U);
    msg.setDestination(1220U);
    msg.setDestinationEntity(85U);
    msg.plan_ref = 91104016U;
    msg.id.assign("FSPSLIECDOVNAKMOKFNYWPDCKQKAWUOKARAGPTNBFUQGUHSLKUEBXQLXCLAIYOVMCPRCLWWJCQOEYJUEPLGXXRGWAZVEFVJCIFUDJPXDRRTHOJTVWSN");
    msg.memento.assign("JZDXCULGCJBFAOFWZXVRFQVDTCBGFTKGFLWSPSEFWGDSJRYMQUQPHVIMAWXELCZVETMNNNIIEXXHTBVSRFPSJYSY");
    msg.system = 46709U;
    msg.duration = 60759U;
    msg.speed = 0.9490914965124155;
    msg.speed_units = 205U;
    msg.x = 0.5933480222198023;
    msg.y = 0.4057288459705981;
    msg.z = 0.955498660644655;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.21240260493871754);
    msg.setSource(17261U);
    msg.setSourceEntity(78U);
    msg.setDestination(50016U);
    msg.setDestinationEntity(57U);
    msg.plan_ref = 1018761173U;
    msg.id.assign("BGDJROMXLWCGLPEUSUTJWATCH");
    msg.memento.assign("YVXCAWPWHUPTZRIUCUGGNQCYBZMYQUEXUDTIKVYPIHJTRNUDFNPEHRIFFMYNBXRZSSZLUQNBCFIHPDEUOWDPIRCVIAFFFDMMTEKEDVWFSFKNKVJOLJAOKSIXKLZHGXSVWRYOGHDXRAJTZKDRAXEWNVBDGDMVHIBQAOVL");
    msg.system = 24477U;
    msg.duration = 61666U;
    msg.speed = 0.7619451834653511;
    msg.speed_units = 75U;
    msg.x = 0.8126864428962719;
    msg.y = 0.957906279702649;
    msg.z = 0.45814868197689984;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.8705112731305625);
    msg.setSource(52863U);
    msg.setSourceEntity(167U);
    msg.setDestination(16377U);
    msg.setDestinationEntity(37U);
    msg.plan_ref = 3402873063U;
    msg.id.assign("AYVHKCAQHORAZGIEGEPSJHZAQFXMCEWBBLLJMWONPHXNNOKP");
    msg.memento.assign("KAKQUUXEACZVIOESTZLMDKMUEKVCDXQTXYSHNWFGCEUATQLIFGHPLSFBVMQDIWRXMJRFJOPGGSPQJLREDIXPWYDXNQLFZTYGHHAMFJNHLVCRYOAJRGFYSUACZVDEPZEIMPRXQEPJBCDONWVOPDRKVLEWJUTCOKHWKYNIWOGSBSDKTBFGXSMIHHBVTPRWINFVDCUYZLPZBHBSLKNNQHZOIMBWYASW");
    msg.system = 46277U;
    msg.duration = 53658U;
    msg.speed = 0.049075159517699585;
    msg.speed_units = 2U;
    msg.x = 0.4618332955491763;
    msg.y = 0.2880537061157631;
    msg.z = 0.41259610606110786;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.4314464932859874);
    msg.setSource(35858U);
    msg.setSourceEntity(1U);
    msg.setDestination(722U);
    msg.setDestinationEntity(52U);
    msg.plan_ref = 835203427U;
    msg.id.assign("WYOVHQTQETWKLIRRGLRKMGQOFXRUBJNFPDZQBYUAKHMBVHDVPNYBIQBEOZCUBUVRTENYPGCEPJMCGSEDLNHDFFSZCJYSIDZESWEGJARVHWDITSKTPIFOZNLGANSWNHWHSRXPGOCIUOYADYCVWYENBPAIUMVSYMXLPIPFVALBKALJOKJQWRCOMJTZEKGHTXUTZSPAVHXDGKFCWRTYLXUNUUXBBCQOMIKXTEQXAGQZJFZH");
    msg.memento.assign("JRJKKZQOVSINLTTKYUWPKFKFIFUVQGPOPKHBERNVNMHTVBWIXQYMYTIASYMMASVPCZDIMXHAYMEZL");
    msg.lat = 0.6561446153722035;
    msg.lon = 0.2605234752357076;
    msg.speed = 0.008309856589849285;
    msg.speed_units = 125U;
    msg.duration = 11292U;
    msg.sys_a = 52370U;
    msg.sys_b = 24174U;
    msg.move_threshold = 0.4296648394789352;

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
    msg.setTimeStamp(0.4001882922742894);
    msg.setSource(1744U);
    msg.setSourceEntity(215U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(162U);
    msg.plan_ref = 1367407175U;
    msg.id.assign("PJHHBKOVZSWNCGUCLOCDSQJPXEEGAIFNGDJZSTARHOLOUSMZQXCUKLKGHR");
    msg.memento.assign("IKJIRFBMROBSHKAUBQTWCSQGSEAKRZTMCLCEGUSYSUUZJMOXOZUEVYOZMOKMXZIJJDPNVDDVVNRBVPL");
    msg.lat = 0.34595335904500113;
    msg.lon = 0.15223017995792;
    msg.speed = 0.6644987736271327;
    msg.speed_units = 239U;
    msg.duration = 6050U;
    msg.sys_a = 60491U;
    msg.sys_b = 4445U;
    msg.move_threshold = 0.5635909937913451;

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
    msg.setTimeStamp(0.3580608170503654);
    msg.setSource(5951U);
    msg.setSourceEntity(129U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(51U);
    msg.plan_ref = 3575923986U;
    msg.id.assign("EIVRBCFKZNLOUBRVXYNJKGIMCOEYPSUPCZVWMFRIMCLJSIDCTFHJNPUIHJHMFJXYOLVGWINQPTMWTASMFIOJZJYVXBXIZYXVUXYYZSAWVBCTEFTOAAHMKCURQSPOINUOKRPTQWGLLKCVFLQINKDQSDTUGQSGXAGBOZFZXDWLNPHRYQGMADK");
    msg.memento.assign("CXOIGEZGNEYEKAVXSKFKGHYSJOZEQXTCVUFIRVCBFUWXLBSDNYPBVOEYANVIBZFBUMFYEAPKTAQHSKKMHEOTHLSJDWMDKBLWNYOIIJQJJ");
    msg.lat = 0.4940170646103328;
    msg.lon = 0.6633362363872415;
    msg.speed = 0.8595414441363567;
    msg.speed_units = 94U;
    msg.duration = 24093U;
    msg.sys_a = 4110U;
    msg.sys_b = 36127U;
    msg.move_threshold = 0.1531434621953538;

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
    msg.setTimeStamp(0.4716249987028396);
    msg.setSource(53347U);
    msg.setSourceEntity(132U);
    msg.setDestination(57762U);
    msg.setDestinationEntity(236U);
    msg.plan_ref = 2331759803U;
    msg.id.assign("VMWHQFINXVRJBZMPPMMNKAZMLRDCWURWTBGEBIAYARCONTSTYBLTKHOBSTVLOMLXSYABFMMQDJKHELUENWYDGIZFWNIBPWQJDSYJMCXGYNFAOJKHPUFQS");
    msg.memento.assign("OQEGNXMOSKZFEIAOIWWYDHYDRBRSBCXTBDXAPBCTFGJMLQAHRAMGLICKOVFZPTMHSDVDGMPZCUUNKKNICVJCWQWQKWMHDXGSPFSGXPHXSRJKZGQQWOFFXSOCKKEDUWJU");
    msg.lat = 0.4321794816520568;
    msg.lon = 0.7123545516859324;
    msg.z = 0.6909150908342465;
    msg.z_units = 66U;
    msg.speed = 0.11041095716225924;
    msg.speed_units = 79U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8208173442847618;
    tmp_msg_0.lon = 0.06621576663715145;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UHCXWYOZBGIBFOFCNSWTXILGCYTNRCQWMFYEIZXCPTRHFMDZABQTDVSJEKYBVQQMXVWTPHEEDFFQPLEKRGGVWPYUGJGSSLKYPQUMEBMKYAOM");

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
    msg.setTimeStamp(0.03316724789129144);
    msg.setSource(33946U);
    msg.setSourceEntity(106U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(43U);
    msg.plan_ref = 1394929734U;
    msg.id.assign("JOBCARDTINDRLOVPUYYWKHUKVSMJAEKAAFUVZSMJWPRXKATIVSMFTLHKOSFWWUHDIWQSQXKDNJIHJZZBZCDPPVBVGNAUFFFFHRZOLZEAGWIDSZMFQWMREMKZVCTRNBCJNDPYHUYBGLXPMXBLTRAGDQNAHECGKSEQXQDCOKHXCVOUGOAIEPWEWSXJOBUTXPYLHJPCBILQYLDWMGKFIYJMQNNOZL");
    msg.memento.assign("KTKLMFCDHZRNWCQDBJJUIBQVPPCVPXVVZYBSRSGHRIZJOLANTADYMMGIWJPUGGENRXZVJYUHWEIOXGWFVHJTHQNBKELQWMMTLIFFZEKATJHOMNQFIBGSAWUHQBPXLOBYYXNTLQWIXNUVADAGFU");
    msg.lat = 0.8497501389546972;
    msg.lon = 0.8478236619652548;
    msg.z = 0.29540553376200807;
    msg.z_units = 187U;
    msg.speed = 0.4074587025868722;
    msg.speed_units = 79U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7409087398519971;
    tmp_msg_0.lon = 0.698548443297851;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YDBKMKBYOYLAHEFDSDYCVRDPTHPXQXSQLTWJVJZTBBSRAKQLSRNWGMAWAHCSYPCOMHTACAVXLFTJKPIFKJVUGJPQOUZZSAMEOKIFYHIWELMVUHEMOQXYVRLRSFJEUSUFISDNWQTJ");

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
    msg.setTimeStamp(0.26791146543898736);
    msg.setSource(50084U);
    msg.setSourceEntity(24U);
    msg.setDestination(47308U);
    msg.setDestinationEntity(212U);
    msg.plan_ref = 2163533745U;
    msg.id.assign("ANDCGZQMETZNCVBLSLKTWOJQAVWXIXXNQQVFPIZSKJMBMBZPLUUYTLDGHOVGEZKKAYSMYS");
    msg.memento.assign("IMEFKVSLZPFPHLMQQIVTHIZSPNMPJXDGBWUWGQOTRFTJKSPHABFLGDIBJVCUBNSORQANABEYJECEHVDFXLOXJONROFWGQZXQIRMVUE");
    msg.lat = 0.2876484408567874;
    msg.lon = 0.4689022607754362;
    msg.z = 0.9087995860501217;
    msg.z_units = 101U;
    msg.speed = 0.8552494398779286;
    msg.speed_units = 143U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.25444510106161444;
    tmp_msg_0.lon = 0.2700514953905868;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LFSZKJPBRWOVNODELEBAGSYBHIPANZHOIAYVIZSZQFXUSMXSPBVIUGUNDHDBQRCKGDEJKXNYMVZLJOFPPJNTSXWJOWYVWLVDUGEVCOJOAEMWBXSGQSVWFLKEFTYKNQUUUAINIHYLNMVIBHXKLKTAQUJQWRTKDPNZX");

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
    msg.setTimeStamp(0.5573408237691083);
    msg.setSource(46107U);
    msg.setSourceEntity(149U);
    msg.setDestination(61589U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.9719073125999654;
    msg.lon = 0.3110609550017648;

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
    msg.setTimeStamp(0.34177317412338903);
    msg.setSource(11086U);
    msg.setSourceEntity(100U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.8628029739735876;
    msg.lon = 0.908516153224248;

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
    msg.setTimeStamp(0.8982105847790995);
    msg.setSource(55861U);
    msg.setSourceEntity(150U);
    msg.setDestination(10801U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.2726740996047886;
    msg.lon = 0.015567904988672665;

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
    msg.setTimeStamp(0.33194345580073303);
    msg.setSource(32461U);
    msg.setSourceEntity(251U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(185U);
    msg.plan_ref = 3919714965U;
    msg.id.assign("SEKGWDEXUGNZZEVEHQBETTMOSXCMXSHKBKNRUXILBONNGSVNDQZYBGPGCQEQCWYVFJVNUQZKPLLWACMSRXJDRBIHUSHYVVRLKAPMZFINCMJOTTWLFSOTKRVDFPNWTQOCCPOPHIVVPMSBAFMBKZOCQRIBTKFIUJRQMYYJEOQHLOWJHXWHTRXTAFYWIXYLRGUJJUDUFKYGBPLVCFEIYSHYPD");
    msg.memento.assign("DVTMQCWHKUAYKFJHCQNWFMOZVEHMAEGRVBYQFXCFMHFGTJIXHJTSBLEBRXIBPMYWJUXUWNQKSZMYDGZHXLNXPPGFVAXCLMOBIIJIIWCAPEFHWVULSZEXGHCVRLRUGQDHZTANBEBLJDYKYNEPSWTOAQMTJYSDOEUKDWWMCGNSCRY");
    msg.timeout = 58407U;
    msg.lat = 0.35997217449758956;
    msg.lon = 0.6119165597781823;
    msg.z = 0.9814839101480646;
    msg.z_units = 254U;
    msg.pitch = 0.16579881865012025;
    msg.amplitude = 0.16954719505721882;
    msg.duration = 3408U;
    msg.speed = 0.02605674595321794;
    msg.speed_units = 197U;
    msg.radius = 0.6403940796314312;
    msg.direction = 79U;
    msg.custom.assign("TQPVUDEXFOMRGPYKPMYVBAFEOOIKKALNGNZMXYWUIGHSCHACAKUZJLWRJVZALWWXSHETYDDIMPBEEMQHKPSRFIHLYKQMNGZJKQPVCFTAVDCVNALNNXXIVDIULRFSUYGCXAWTVGQKEWLVXDYJILBMUOPYQWJYPQZFFUUBCTDWUXZFZRDMMTCJZMNEEHBIHOISWKLYVXAGXRSHBBTGORBZCTPTQZCSJSGDGAQOOHPQNOJRUDB");

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
    msg.setTimeStamp(0.9611004230242126);
    msg.setSource(32453U);
    msg.setSourceEntity(208U);
    msg.setDestination(18442U);
    msg.setDestinationEntity(232U);
    msg.plan_ref = 3791092962U;
    msg.id.assign("SDTDUMZJNPJIVCKGFTBKUPBIZZAKQEMYFVAAHMIOYHYVEPLXHXMOOFFQJASXNAVAJLJIBZLFUIJJXGDRQMPKBLVKCWNHKEJPQSSPYNNNBTBLXPUYVDMKERRNQCFZAWBJXWCPALQWWFIBEMDHUQVTHGSUVMGOODGBOTQLDABFSCDXZVHNIHDKALC");
    msg.memento.assign("WDDHTXPEARBIMHIQIROYFSWOYKZNNUYJDURNNIBRGRLKFDUO");
    msg.timeout = 1114U;
    msg.lat = 0.34029958587061215;
    msg.lon = 0.4728295074326019;
    msg.z = 0.5771765219952195;
    msg.z_units = 4U;
    msg.pitch = 0.5270418725317574;
    msg.amplitude = 0.6703374100818047;
    msg.duration = 62234U;
    msg.speed = 0.11222459959020892;
    msg.speed_units = 159U;
    msg.radius = 0.8204030601915911;
    msg.direction = 83U;
    msg.custom.assign("QTCNOMQYBSBAHDRLJYMSSWSLEYZTKRDEYRWAGFDNPOGUOIIHVJKVLBRCLMAFUJUCTHDGPZVQISFNLHZVIOCJYLUKWVVFZPGSKSKQSZXNCOUZHTGJLDKVADJPKXQNFKFWYRGHBNPBUYAIQNQWMCIMSQAWYOMCTECJXZHMBERFZEIXHBDSIIEYRLADMWEVPTXJUXXQOXDDWIUGMRVHTVKOJG");

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
    msg.setTimeStamp(0.1090563460639441);
    msg.setSource(29063U);
    msg.setSourceEntity(121U);
    msg.setDestination(65527U);
    msg.setDestinationEntity(56U);
    msg.plan_ref = 4287608157U;
    msg.id.assign("ILOVFLXVEDYZNPLSEKGBEQYMMGBOUDTEKOWXKSCZFFCQTHFWZCEQKZRONICDJSLYISHZTJXLTJRPFCBBRPQXLJHMJAODNAOXNVRKUH");
    msg.memento.assign("ZCKABOOUBOMKFIKIFMEATGRFMMODETSTJZICYIJFNGYDCQUCMRCZZJRNBLDIYSTXBEFRGUVBALUNUAQMINRHIFDGHULHNHYXEWVFRBAVJEYWLNRVLPBEEFLKPNSXWZDUSDADQJCLRSXLMMKIIJVVVXOOHWKTCKFPNEYQEZTSUHJYGNXMTPMZHCCXISVCN");
    msg.timeout = 5934U;
    msg.lat = 0.8678043048550753;
    msg.lon = 0.6114495189593429;
    msg.z = 0.5345052473765937;
    msg.z_units = 17U;
    msg.pitch = 0.8256564508491794;
    msg.amplitude = 0.6707409940535809;
    msg.duration = 54544U;
    msg.speed = 0.981839843636056;
    msg.speed_units = 160U;
    msg.radius = 0.621809844569952;
    msg.direction = 36U;
    msg.custom.assign("OAXFBSMYQGNTABTRBJQGLPUJPVGIRPOEYROVNOQFPZJQALSEPKHWU");

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
    msg.setTimeStamp(0.8332660662729022);
    msg.setSource(47276U);
    msg.setSourceEntity(107U);
    msg.setDestination(10867U);
    msg.setDestinationEntity(14U);
    msg.formation_name.assign("GBNXVGZLUCJHTVDCLZVMABRWMRFTU");
    msg.reference_frame = 246U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27038U;
    tmp_msg_0.off_x = 0.49306232598746547;
    tmp_msg_0.off_y = 0.17412607491089316;
    tmp_msg_0.off_z = 0.9599513331431061;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WNYDDFAATCPUFZCMMAYEOCNLWLFDQIGUUQKDQFBXJIQUAGZGEVVMPGRJHKRTVTEHAWOPITOWUUTKCMGFNQLTTMAGZQIHKVYUWCCLTDZYIKHOVNETHJDBLEBRKPHBJNSFPYZSYBQDOJVZNRJKGFXSHWZRWBBDOSPJDQESQEXPUAWMJZXN");

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
    msg.setTimeStamp(0.9917558578806519);
    msg.setSource(3979U);
    msg.setSourceEntity(218U);
    msg.setDestination(16888U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("PBDDICVNJOACEEEFUSUVCIZZLMSHMDYTQVDOILDZIWCRVGBYGHAGKXPMBLGSAKJUVNNLQISQZYOISNANPAFXFFTWUBPMNSKHRRBVYORDPTJCFBAVPRXLXMZKGGWGHFWNIIEDOJTJJLKRHYSYCHECXLEMOHZULOHSQZPVPUKSRFDGXGFCTJDW");
    msg.reference_frame = 129U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52621U;
    tmp_msg_0.off_x = 0.054956103742746176;
    tmp_msg_0.off_y = 0.350471760355911;
    tmp_msg_0.off_z = 0.5984097578391756;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HIYSSXMJWRQLZCJDNZSOBVJZPQGHVRDRADYCDFXKUVLFJEMVYNCHQCGLVYKALBNZRDYHGEQTOVPNOOTGWPEEURXNSLFPVTPXJFBNCXNBTORXDARSOHHHSQTBBWZCE");

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
    msg.setTimeStamp(0.8268097187304618);
    msg.setSource(42927U);
    msg.setSourceEntity(106U);
    msg.setDestination(38556U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("SILWFDLWRZDHNICKFUOTASNUGZLHKURHMMGICNHQJQBZNRMCJLTJYHSBAKFJVDFODASGKYCWIGYEFEFPBNZEGRYWWMMVJSDJOXBALLDVVPDMDXPXYARREB");
    msg.reference_frame = 114U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20039U;
    tmp_msg_0.off_x = 0.8563423127048498;
    tmp_msg_0.off_y = 0.9108733418573878;
    tmp_msg_0.off_z = 0.19811525573358257;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YLGBHWBVHZEKTZYDNTQNEEHSMUGDUSIADNYVOJFQETRHIUVIUKALSUPVBBWMCCEWYNLIJKMUJJFYQJAWWDXVIESUCBXCRRDFYQJINWMSMMWCOIOASKGDANPIHKFXJCXQQRSYCAOZVRPPGUXHRVXSZBDRVROWNLQFLCXW");

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
    msg.setTimeStamp(0.41435030321290756);
    msg.setSource(24347U);
    msg.setSourceEntity(241U);
    msg.setDestination(29741U);
    msg.setDestinationEntity(232U);
    msg.plan_ref = 2401988544U;
    msg.id.assign("WTLSCIAQHGUHXZTDQDPMRGCTQEMLEFTEJDMSQDVDNCFAXNKCPGJSAXRCKKCQMFASZHYOYWSZGSPWPRZFHROAZLWBLBMIBAXQXLGUJNPOYESDCQENGCVAXIZYYBKHXBXXUHVVNOETAJTRMZMQNHLAEBNOUJKIFYLRVPGWBSUTZMY");
    msg.memento.assign("ICMHBKTHLGASQBMPVONLSOQQNIXIHNOFHOCWFLCLNYGUYTKUWXFCWETXJOSDYZSXIIALDKVJCZQTFLPJKSOMAJMAMU");
    msg.group_name.assign("LULIQJPSHSICFNFFWQOCOHJBYCECQMRAHJYGEIKAJYKVILYIGEVCZYOQMFHSBATCGDLUUITTKWHRHZKNVMYQQZEMONWJZQSGWTQUJIW");
    msg.formation_name.assign("GTZAHXEFEIFDMEAHEBNMNAROIVWWMTZXIDCXCHEEKSDYNQRZ");
    msg.plan_id.assign("UAYKFBDQVCVBPOIGCDBLTRHTOTCTBZTVLZHWPGAGIACQLIYMZBQEYEZUVLSVYZODXLPNRWUOKJEALSFRISWSFSHBKPKQAIPELZIMGJLDYQREJIJMGDAIARHFCGYAVMWNJRDNHHNFSIFFEFWEUZBNTJE");
    msg.description.assign("MLSIJMWXZGKPFIDMJVTBBAYCNJLQRFWTCVEBBFQTZJUFHQXBIWQCAPNWVUZNGNKVECMKRKSMZCPOGASZRQEAXYH");
    msg.leader_speed = 0.22717189914950342;
    msg.leader_bank_lim = 0.9817997072210694;
    msg.pos_sim_err_lim = 0.6541128621067421;
    msg.pos_sim_err_wrn = 0.31668803379524757;
    msg.pos_sim_err_timeout = 60291U;
    msg.converg_max = 0.5361045657775347;
    msg.converg_timeout = 52502U;
    msg.comms_timeout = 64553U;
    msg.turb_lim = 0.6507413328500612;
    msg.custom.assign("RZMTRSZDDARWPJDLPUASCJJNLSGZNQJVSBGOVDMMSYQPPGJLPDSHNEHKEETKDNIYTFWTFAXCRGHWXGOXTEUFPMPAWYEGPACWTEURKDZHXIHBBEYRZDBTQLATMCTATJZVKCIVLRXUILCMFXQIOIFSEHXHVGXNSYHMFIVFNYNALBJLUQKHGOIAKQYMJDZOLIYCKOPOYWWECUZSOQWGQKXVAJGRUNZFCVROXMWCQQBOKBFRFYBWBKBMZPSHEILDNU");

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
    msg.setTimeStamp(0.00903899179440315);
    msg.setSource(31201U);
    msg.setSourceEntity(117U);
    msg.setDestination(5600U);
    msg.setDestinationEntity(45U);
    msg.plan_ref = 1683556181U;
    msg.id.assign("UCFJUKODTPLPNDTJLIRZQNNFLMAIZEKXGKWOMVIQSUIHIAERJPUGWWLPKRIRXWXASXANJUNFUBXUZGFYBTPGZMFYNECYVTTOLUQUJDLTLHQQOJDVHWSKYWACJIJNHMOLKWYDABVFVOXQYVIXZYFAOTBBHSSFBTRBHBJYVCPTNBDGBWYHVCMGZYZPRSGMQZHFNCRXDAKCEEPEC");
    msg.memento.assign("DMGOGBEABRGDZLMFTXMDKBHLYNDXANXEKHCKEBNLDXIQGQKTDOQNZXURDTIIQMHAPTNFCFHPSRLFHCQRJCQKVGLGWMKAJFSYRXDEQCSPWSPSEWVBWIUBOWMJKJUJYEOJBGTIICPBPTSSFIMRHKBOAFIMZVAUUXNGLVZUFVSQOOMVGRMJJRYWHIXEGHWHYPWUWANVZTUBNQDZPRE");
    msg.group_name.assign("JRAQIBSVTRIDHAJPFBDSGDTMZCBAMPJIHAEFNKGHYEKQCVDNBEVNZQOGXSXRHLCWGALXTTWUIIKOLUDGVWXVRECPVBZPANGFKHRMQXHGKOFHIMUQQWRJUZJWFGNYQIPJKNFOQUJBYLMRNYBNZOYS");
    msg.formation_name.assign("HKTNNQHJYYHCUIMANZDVOFP");
    msg.plan_id.assign("FMDZRGSAOIIDOAMBSNCZOLEGIWZYCJQEBNQQPUGXALYHITHWHV");
    msg.description.assign("AGAVZPXDEVNJQWDZWPTFTAKJXRZDLHVWRIMOMRBXEGMEEMHBABHLYCURYNKFHDYFFPGGVKZGQBARQMUOKQSUCKPVALCMGRRVVWELOHSOTQJTLRRQQUXFDTWOAJZHEUBLMBWNOWAGECFOSCDMOTPIHJPPQBNUOYASIXUTJLRSVYITBIJIVKNNELYI");
    msg.leader_speed = 0.620990045308889;
    msg.leader_bank_lim = 0.9746361033093417;
    msg.pos_sim_err_lim = 0.9474986210083575;
    msg.pos_sim_err_wrn = 0.44450628265983605;
    msg.pos_sim_err_timeout = 53461U;
    msg.converg_max = 0.2892624983502501;
    msg.converg_timeout = 8573U;
    msg.comms_timeout = 9541U;
    msg.turb_lim = 0.07301090071752314;
    msg.custom.assign("NAVKDBACBAZULODASSFIIYUJOQATOBQEZKCTTXDHHHMPCLGRUDHKYPLWWDLCBVGOYRXGQKRESEXYTMULQEZXMWWVXENSRDSCFNIHEINLCJBZHPUQQMZEMSAVVKRMDGGTBVUNTRPVUOMGFTQXJYIUFJZJDAOEAGRRKXBIMWQNPZGX");

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
    msg.setTimeStamp(0.4179038686334551);
    msg.setSource(28614U);
    msg.setSourceEntity(173U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(225U);
    msg.plan_ref = 3010086471U;
    msg.id.assign("DMKOMKJKBIKPIXEPWBWXYEZVS");
    msg.memento.assign("VCFAXYHWGWKLEGJXQOXYLQTTTODYBEGLIONDDRHHDZTIFAYCRNATMMSBZQL");
    msg.group_name.assign("HCXKCZDHXVFBUKEAFJWUAKMEPMRCNSHBWCWKBONSBUQINKQRIQGQPQFWGANVGXXWCRTIXQTYYELWKMBPNYLKSMZJZPQEHXWYHICPVIDHSJDLRAVFIATFTJFUWTLXQVUVVWRJDNZJDPGEDOYIHLOFVLAECGNGOEAUYSLGPK");
    msg.formation_name.assign("ZBHPNIIGTZBXLQEWVFNWPHKBROUYTSORNJMOASEEJWWFOQYANJRQWLLTPBUMYQXEVADSKKRUZLJDPCFAQTTOUGXDMKFYVGSUNPYWHHIUYUCNBAUYJIKHKCXRZRPBWHMYGOHXXBJEQLDXLEAMXTWZPICJFCDMLJGTZPGEGISQMCBSURG");
    msg.plan_id.assign("IYVAYEQSIYZEMHNPTBTZD");
    msg.description.assign("CZESSVMFXROEIBKQEIGGVRPYMTFGDBWLDFVFZYUWNYBGVRPMTDDVLMIOZLBOIHUCJPETTFMOYIRWGRYAWNOMHQZJHLYUXGELJDINSQYSRAKNJ");
    msg.leader_speed = 0.10779807223051896;
    msg.leader_bank_lim = 0.5111153951738313;
    msg.pos_sim_err_lim = 0.13853790947951816;
    msg.pos_sim_err_wrn = 0.8770941933943759;
    msg.pos_sim_err_timeout = 28108U;
    msg.converg_max = 0.3445163566445112;
    msg.converg_timeout = 21598U;
    msg.comms_timeout = 36114U;
    msg.turb_lim = 0.08251658729254141;
    msg.custom.assign("PYUFNKYEKWYNKGFYDUBTVGQPQTFZXGODGNGORSELBOCMGJAYRJKIZINTKTHNCHOZEFQISOKXSNFCDAXKAAZWLWOXQVZSXYFICTJVGRANRURRJWVZQNGKLMCMZLPJDOVQH");

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
    msg.setTimeStamp(0.21032022920798155);
    msg.setSource(19474U);
    msg.setSourceEntity(163U);
    msg.setDestination(3191U);
    msg.setDestinationEntity(244U);
    msg.plan_ref = 3059489067U;
    msg.id.assign("YQVXZYYSIKQRZXIUCHHLFIGKOREJANIDZTNGEAISBUNDJRUCFHHVVFLNCRLJYDSBBMXUUZDAPVFMNJOECUGRCKWTVRIVGXVFJTBDPPZDMOVZCFAKTNXODOMNUUCGMWJZOKJYLVOTENPOCVLWAXGIQXFOQTDZEWWHMBFTRUSARZLSFLBYXAEPQRDPDTXMMLRAGEWBTB");
    msg.memento.assign("FNUSATTPIFQXOKSJUHSTRLRRCBNZGGVIDACXOIZWGYZMIQDEDXPUDHRRKQWJFBGATSFHBBDATLDMVXFVPIHWWJQXRRRSPYYSJARFNMHVKGKMDJQLTPZXYUKWONRIIYQESYAMUCQMNYLCGYZIGHEOTPJJELHOWIEBDXZOEQMWZBLOCFEAAEOBUQZABKXPYEQCOPWV");
    msg.control_src = 13755U;
    msg.control_ent = 42U;
    msg.timeout = 0.6405391543005174;
    msg.loiter_radius = 0.05422358435998276;
    msg.altitude_interval = 0.5127558416795099;

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
    msg.setTimeStamp(0.6560858492773141);
    msg.setSource(48698U);
    msg.setSourceEntity(45U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(171U);
    msg.plan_ref = 3864169005U;
    msg.id.assign("ELTPRFJENPVJVDWWOWWBHQPDQHPOMQSMCJSUMXFMKNSYPXHXHKAMYFICNRTLECOCHQGQADDKVUBSLSTFX");
    msg.memento.assign("UQPSDMXAHOZYWFLNECPAIOKFDHKRIUWETWLRMSOBBVQXCJJUAJQSDSDPU");
    msg.control_src = 64570U;
    msg.control_ent = 84U;
    msg.timeout = 0.6929732937960044;
    msg.loiter_radius = 0.4444559428772089;
    msg.altitude_interval = 0.9385468981661851;

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
    msg.setTimeStamp(0.23919061876222725);
    msg.setSource(10292U);
    msg.setSourceEntity(143U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(213U);
    msg.plan_ref = 4043205609U;
    msg.id.assign("KCZTIQDCOUAVRUDKRLDGGBPZZMSIIOCSGOIAWSOROZHG");
    msg.memento.assign("BULOAHGDETHAIOMYRQLERMPPYTAQNKERKEKVCLCCWDCUWVUQNZPPCZGJZNZM");
    msg.control_src = 1994U;
    msg.control_ent = 7U;
    msg.timeout = 0.6702860091779884;
    msg.loiter_radius = 0.3213731641554116;
    msg.altitude_interval = 0.2828092795125625;

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
    msg.setTimeStamp(0.6000851556073514);
    msg.setSource(47467U);
    msg.setSourceEntity(204U);
    msg.setDestination(10246U);
    msg.setDestinationEntity(89U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17631175106842023;
    tmp_msg_0.speed_units = 221U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18439791483822976;
    tmp_msg_1.z_units = 113U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2409875066634415;
    msg.lon = 0.5048115045268061;
    msg.radius = 0.9504179965701647;

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
    msg.setTimeStamp(0.6612827288088525);
    msg.setSource(32020U);
    msg.setSourceEntity(209U);
    msg.setDestination(42551U);
    msg.setDestinationEntity(70U);
    msg.flags = 164U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.36307069821908977;
    tmp_msg_0.speed_units = 143U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7275267692786931;
    tmp_msg_1.z_units = 137U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9772907290345098;
    msg.lon = 0.41844427066021816;
    msg.radius = 0.17490459804356173;

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
    msg.setTimeStamp(0.03311852010818639);
    msg.setSource(50135U);
    msg.setSourceEntity(192U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(46U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.159620867373243;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8729067776654338;
    tmp_msg_1.z_units = 56U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.22218388889830776;
    msg.lon = 0.693887995712906;
    msg.radius = 0.3072378250422523;

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
    msg.setTimeStamp(0.42759016246037207);
    msg.setSource(1414U);
    msg.setSourceEntity(63U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(210U);
    msg.control_src = 59608U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 164U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4564974016654094;
    tmp_tmp_msg_0_0.speed_units = 183U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.039451678570610715;
    tmp_tmp_msg_0_1.z_units = 253U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1668473671213686;
    tmp_msg_0.lon = 0.3475504760836924;
    tmp_msg_0.radius = 0.15460589283666049;
    msg.reference.set(tmp_msg_0);
    msg.state = 61U;
    msg.proximity = 221U;

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
    msg.setTimeStamp(0.7485098643416417);
    msg.setSource(22495U);
    msg.setSourceEntity(15U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(92U);
    msg.control_src = 52430U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 128U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7333110301306169;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.16850931214062992;
    tmp_tmp_msg_0_1.z_units = 148U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33370484968415903;
    tmp_msg_0.lon = 0.4069149155461488;
    tmp_msg_0.radius = 0.9942001648774365;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 75U;

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
    msg.setTimeStamp(0.7676551625462049);
    msg.setSource(50672U);
    msg.setSourceEntity(44U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(193U);
    msg.control_src = 20852U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 227U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10608218381983758;
    tmp_tmp_msg_0_0.speed_units = 234U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8232033548505825;
    tmp_tmp_msg_0_1.z_units = 185U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5525083044685452;
    tmp_msg_0.lon = 0.6315722925488276;
    tmp_msg_0.radius = 0.8648909325065577;
    msg.reference.set(tmp_msg_0);
    msg.state = 251U;
    msg.proximity = 76U;

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
    msg.setTimeStamp(0.8399546944178848);
    msg.setSource(22081U);
    msg.setSourceEntity(34U);
    msg.setDestination(57497U);
    msg.setDestinationEntity(64U);
    msg.ax_cmd = 0.7113843570740314;
    msg.ay_cmd = 0.9667708014135197;
    msg.az_cmd = 0.9834092552125421;
    msg.ax_des = 0.5724428427696717;
    msg.ay_des = 0.7471280570785426;
    msg.az_des = 0.8403348937756211;
    msg.virt_err_x = 0.9233475247647464;
    msg.virt_err_y = 0.6175329108982488;
    msg.virt_err_z = 0.5243016735974945;
    msg.surf_fdbk_x = 0.6238016593740476;
    msg.surf_fdbk_y = 0.35997572762319874;
    msg.surf_fdbk_z = 0.275896916281521;
    msg.surf_unkn_x = 0.7749817194381451;
    msg.surf_unkn_y = 0.31374572429699443;
    msg.surf_unkn_z = 0.20073236854235577;
    msg.ss_x = 0.54600475786762;
    msg.ss_y = 0.1714518857115095;
    msg.ss_z = 0.8499491214302277;

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
    msg.setTimeStamp(0.8999445783692397);
    msg.setSource(17672U);
    msg.setSourceEntity(0U);
    msg.setDestination(36721U);
    msg.setDestinationEntity(31U);
    msg.ax_cmd = 0.9586886700241389;
    msg.ay_cmd = 0.8222221956014307;
    msg.az_cmd = 0.6632586015130144;
    msg.ax_des = 0.5540515426327156;
    msg.ay_des = 0.19010102259742734;
    msg.az_des = 0.6918608217126448;
    msg.virt_err_x = 0.09413171567303102;
    msg.virt_err_y = 0.2559160508435129;
    msg.virt_err_z = 0.8368183059951841;
    msg.surf_fdbk_x = 0.98620018398093;
    msg.surf_fdbk_y = 0.05731049461771853;
    msg.surf_fdbk_z = 0.9372305242158285;
    msg.surf_unkn_x = 0.8702858534909513;
    msg.surf_unkn_y = 0.602827168655701;
    msg.surf_unkn_z = 0.8046415890484543;
    msg.ss_x = 0.9730704532344683;
    msg.ss_y = 0.3834816201914232;
    msg.ss_z = 0.6298775641396952;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IMDHAZEZIXBLHOKXXGMRXAVAPZYGKYYFSKTSGWEHYGFOBANCRLQATNKQHJRJGFDVSVSCHNUTXFVIWQPOHSMFBEMFGIBQIMKCPBBJQEKIPAWEHZCBDOMTEONVJZTYRHWJLBCRKKWLHFWGUCCNXENSNEDPXHQLEBLQXVIORAOPGFQUZYLUWZBRGRUGKXSDZMMITMTOUAODJTYYVADUWNLLZDTEJAZCWMXRRNJPUJJDYOKSW");
    tmp_msg_0.dist = 0.14500912897862384;
    tmp_msg_0.err = 0.236579820676598;
    tmp_msg_0.ctrl_imp = 0.9074489056963736;
    tmp_msg_0.rel_dir_x = 0.3638107869513314;
    tmp_msg_0.rel_dir_y = 0.26443509113638153;
    tmp_msg_0.rel_dir_z = 0.6243307404257162;
    tmp_msg_0.err_x = 0.7730653060939308;
    tmp_msg_0.err_y = 0.6004511447957267;
    tmp_msg_0.err_z = 0.9488656618566865;
    tmp_msg_0.rf_err_x = 0.5293141243052089;
    tmp_msg_0.rf_err_y = 0.3169145741181466;
    tmp_msg_0.rf_err_z = 0.2220198636577546;
    tmp_msg_0.rf_err_vx = 0.06171832223139995;
    tmp_msg_0.rf_err_vy = 0.5038642293487887;
    tmp_msg_0.rf_err_vz = 0.1809797287660535;
    tmp_msg_0.ss_x = 0.653847725719778;
    tmp_msg_0.ss_y = 0.5759495861696117;
    tmp_msg_0.ss_z = 0.5589057302712688;
    tmp_msg_0.virt_err_x = 0.7868283830464505;
    tmp_msg_0.virt_err_y = 0.9585805220334453;
    tmp_msg_0.virt_err_z = 0.03430304806823736;
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
    msg.setTimeStamp(0.9459958351808075);
    msg.setSource(45035U);
    msg.setSourceEntity(211U);
    msg.setDestination(19631U);
    msg.setDestinationEntity(0U);
    msg.ax_cmd = 0.26094498095442165;
    msg.ay_cmd = 0.6920123619797459;
    msg.az_cmd = 0.11652962223568097;
    msg.ax_des = 0.44562639600331977;
    msg.ay_des = 0.12432834169506202;
    msg.az_des = 0.9563175946978759;
    msg.virt_err_x = 0.42859272334006915;
    msg.virt_err_y = 0.30959871521709337;
    msg.virt_err_z = 0.3119721264246702;
    msg.surf_fdbk_x = 0.7258556919444618;
    msg.surf_fdbk_y = 0.8996903798948102;
    msg.surf_fdbk_z = 0.5348739749772541;
    msg.surf_unkn_x = 0.7913155158090223;
    msg.surf_unkn_y = 0.5497753054647615;
    msg.surf_unkn_z = 0.9688163326255923;
    msg.ss_x = 0.7912767701078426;
    msg.ss_y = 0.7227186640420554;
    msg.ss_z = 0.6713823658627398;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LSIGRSPPSEEXTUTSWKKLIIHPSKHZBSDBRDQKAWXVDIAQPTZWVYJAHUGOVJTGOKSEQNLDIEYFCJTLGEZMMPDYXTQYIHUVXWCJHFLRNAZAMMMOUNQUQHXZBCROKQKNTAXAIASENVOROZHGBNGPVHWXVTFPDMLNSZWCFOMVJYPJMPSRLRHTDLJFBVQVH");
    tmp_msg_0.dist = 0.9609766417108255;
    tmp_msg_0.err = 0.21237573071653282;
    tmp_msg_0.ctrl_imp = 0.36686584913457965;
    tmp_msg_0.rel_dir_x = 0.07240153125902282;
    tmp_msg_0.rel_dir_y = 0.9754726424889499;
    tmp_msg_0.rel_dir_z = 0.22861983317919143;
    tmp_msg_0.err_x = 0.022809288232708447;
    tmp_msg_0.err_y = 0.8051467879996188;
    tmp_msg_0.err_z = 0.7152840385246045;
    tmp_msg_0.rf_err_x = 0.8474200976771675;
    tmp_msg_0.rf_err_y = 0.9992815300257794;
    tmp_msg_0.rf_err_z = 0.25169327997896773;
    tmp_msg_0.rf_err_vx = 0.0284374542200716;
    tmp_msg_0.rf_err_vy = 0.3372502499769946;
    tmp_msg_0.rf_err_vz = 0.11265439260944266;
    tmp_msg_0.ss_x = 0.833619462985533;
    tmp_msg_0.ss_y = 0.9195304950255109;
    tmp_msg_0.ss_z = 0.06624977094562734;
    tmp_msg_0.virt_err_x = 0.758969857228948;
    tmp_msg_0.virt_err_y = 0.0780672306151704;
    tmp_msg_0.virt_err_z = 0.6913799604176778;
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
    msg.setTimeStamp(0.2627506193895426);
    msg.setSource(63667U);
    msg.setSourceEntity(227U);
    msg.setDestination(32834U);
    msg.setDestinationEntity(123U);
    msg.s_id.assign("GURHYDXURFSLVTQFOOKVZIXPEGNSKPMSBWXDJRGIUYDQKAWVZTO");
    msg.dist = 0.7676427091421398;
    msg.err = 0.848881877191105;
    msg.ctrl_imp = 0.9766490458956516;
    msg.rel_dir_x = 0.30777069035660964;
    msg.rel_dir_y = 0.9865962245916232;
    msg.rel_dir_z = 0.6539315160834894;
    msg.err_x = 0.9890265766050281;
    msg.err_y = 0.7725119149372095;
    msg.err_z = 0.07983286168953108;
    msg.rf_err_x = 0.4211849627610168;
    msg.rf_err_y = 0.7931603371480747;
    msg.rf_err_z = 0.9205598244289162;
    msg.rf_err_vx = 0.30068672604665747;
    msg.rf_err_vy = 0.530073476060374;
    msg.rf_err_vz = 0.6940015598450509;
    msg.ss_x = 0.7787360788724398;
    msg.ss_y = 0.9213829329751385;
    msg.ss_z = 0.6433178973695068;
    msg.virt_err_x = 0.42999978641846937;
    msg.virt_err_y = 0.06282927297259;
    msg.virt_err_z = 0.16998469583248876;

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
    msg.setTimeStamp(0.49647457453690846);
    msg.setSource(37277U);
    msg.setSourceEntity(188U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(23U);
    msg.s_id.assign("RVEUYGVAARAEFBWNITUUOWNDRVSCMREQCDNLBMHFUMYPFQWKFMTSCOFXDGTZIAGYFVVVRCPYSHZAGCIHSVNWTYSTXEHNPTXMDJWCKKZJJAJIVVBPHBTHOLAIAJASTXWTXYDSOQCGQJUOAEHB");
    msg.dist = 0.3431626570789661;
    msg.err = 0.8995828466775581;
    msg.ctrl_imp = 0.3662188955820035;
    msg.rel_dir_x = 0.45070765915812583;
    msg.rel_dir_y = 0.40351615657236084;
    msg.rel_dir_z = 0.9618482068508496;
    msg.err_x = 0.7777995684129786;
    msg.err_y = 0.45852117049978625;
    msg.err_z = 0.4931319814304179;
    msg.rf_err_x = 0.41910244597818813;
    msg.rf_err_y = 0.7447270094942953;
    msg.rf_err_z = 0.039305723515525304;
    msg.rf_err_vx = 0.6278884201207373;
    msg.rf_err_vy = 0.4867111779975891;
    msg.rf_err_vz = 0.037774763485054486;
    msg.ss_x = 0.7658642448543332;
    msg.ss_y = 0.14995655929293517;
    msg.ss_z = 0.9416586703291587;
    msg.virt_err_x = 0.009484363589649103;
    msg.virt_err_y = 0.4991348562140717;
    msg.virt_err_z = 0.7451953573941257;

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
    msg.setTimeStamp(0.7031876511830024);
    msg.setSource(4838U);
    msg.setSourceEntity(207U);
    msg.setDestination(57432U);
    msg.setDestinationEntity(248U);
    msg.s_id.assign("TAMSICZYZKOWJVNRSZSQCWOLYUHQFQEKWBOCWPFXDFPHYJUDZPPNOLCIR");
    msg.dist = 0.3241419541948547;
    msg.err = 0.331374671504007;
    msg.ctrl_imp = 0.5422765994437748;
    msg.rel_dir_x = 0.3861991100014648;
    msg.rel_dir_y = 0.6664097196227511;
    msg.rel_dir_z = 0.5801060240872831;
    msg.err_x = 0.3530943636714924;
    msg.err_y = 0.4629652890590171;
    msg.err_z = 0.6011582243540343;
    msg.rf_err_x = 0.318206834613625;
    msg.rf_err_y = 0.7593236829837962;
    msg.rf_err_z = 0.08387074090556323;
    msg.rf_err_vx = 0.9464542656629092;
    msg.rf_err_vy = 0.05265675370396483;
    msg.rf_err_vz = 0.19575993284602966;
    msg.ss_x = 0.054746496702384295;
    msg.ss_y = 0.04825399338365466;
    msg.ss_z = 0.6835845631045456;
    msg.virt_err_x = 0.2591509031564623;
    msg.virt_err_y = 0.3456543065168086;
    msg.virt_err_z = 0.2389071968899752;

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
    msg.setTimeStamp(0.15559000007885215);
    msg.setSource(28215U);
    msg.setSourceEntity(187U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(45U);
    msg.plan_ref = 3964285646U;
    msg.id.assign("AHGHMRQKZQUBSDHCUKLMYGREHNIXXHQKFKEAOTPEWJEOXUVEEUSISURVYIQBWZOJFECY");
    msg.memento.assign("LZLNAKWDUIDXQDJADUGWQBRSAFETISWKBPMPRNEPWGRXRXCVTGZOIJVFEQPMXECJJMSPZRLDACOCIBYXI");
    msg.timeout = 32308U;
    msg.rpm = 0.9971296320414752;
    msg.direction = 57U;
    msg.custom.assign("BYYYHKJHKGOBLLYKCHXPRTEBSQDVNJAIVTQFYGSKFMYSHJREDIMPQGX");

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
    msg.setTimeStamp(0.12486346698810225);
    msg.setSource(28327U);
    msg.setSourceEntity(20U);
    msg.setDestination(9426U);
    msg.setDestinationEntity(14U);
    msg.plan_ref = 3980887591U;
    msg.id.assign("YMNXRULJGHWOXSCVBAOKGVXIUQKDNOISNPHRUIAOZXZOEEBGVMHJKSKGDLDLMQZRRMIFSXIYRUOVVITBCJMFECRCWUHLBFUGWSCFXRYTPXIJDMJDUSRPCVTPNJYDA");
    msg.memento.assign("JVRNMAZBRVCTLHJTQVXJKZVCOKBBSETSXCVYQLQHGAGMTXOOXJJUGYRGSQDAHFYQCKMNFAZXPDSHU");
    msg.timeout = 29841U;
    msg.rpm = 0.08356246119068533;
    msg.direction = 9U;
    msg.custom.assign("GSBGBAQEPUDVDBKQUYXSMTYIKNTWYBQLSKKDSJDZXYDGHXZCUHEJZRMWAQPKLNEIEJOUUICIQUGUUXYMONZJEWRQSKPPCLRPJTFTLDXBYOWOCYABBFTJUMRFXEMVMIDCGAPEMYGZXIPMXALLRJVCSZKOTECBHFTFIIQDROAVDHWOGTWRZIHLFJXSNNVWGHPQARKTOXNBFKIEWNVYJFFACNPQLCJLZGNGUPSVHYBTODH");

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
    msg.setTimeStamp(0.24809418189751364);
    msg.setSource(19970U);
    msg.setSourceEntity(154U);
    msg.setDestination(59760U);
    msg.setDestinationEntity(43U);
    msg.plan_ref = 3998605467U;
    msg.id.assign("VXZVIOBPFVARFKAOAERCHXVXJSMVWSIFJOGSDPEDPYIHEJMIOUJTXGZEXCGKFJONAIZWUNRKNSC");
    msg.memento.assign("FWLPMIYXIESQPPWFOQNSNYMTHCLJFNDSOJQDXOFJKWULFOIAJUGKJWNWXGYJBCZHRUEGJHZFQRFKVEBTQIHKVGXDSVENYBXZLNKGNPIVXJORVGADEHGVGZTKHPB");
    msg.timeout = 24543U;
    msg.rpm = 0.783883195635122;
    msg.direction = 17U;
    msg.custom.assign("VSYCOGORUSGTWDEYCXERJHYBLSWHKWYRBLKSUYXQONAZALKPQWEPAYQZUZFOSRINAYURM");

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
    IMC::Memento msg;
    msg.setTimeStamp(0.7231570222888352);
    msg.setSource(59511U);
    msg.setSourceEntity(15U);
    msg.setDestination(34899U);
    msg.setDestinationEntity(2U);
    msg.plan_ref = 73955627U;
    msg.id.assign("RWUTBBTTWHWXDSQZLMFMKTPVGNNCDKCQDULLQEORVQFNWPCYNQSNGIHXPMHHMYLEOAYGNQGQWJGSUHXEHCAGKFRREVOLKFXBUYIKVVOPZAWOMUOZZASNUVJLUKESLQPZ");
    msg.memento.assign("GCHHJAWFIUTSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.07084677259516081);
    msg.setSource(24587U);
    msg.setSourceEntity(100U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 384173591U;
    msg.id.assign("ZNJBIWXQFQWYCDBOVWNPQMEGNMGWTBEC");
    msg.memento.assign("NWBBDYWKVSAKRLGIWQJVYJVQBHLCXLIMVZATTTOYCLPCLKYYXFNQDFBZVEUVYOOUMLDAXWISMASFJKGPDXRKJJVOKIQIKGWMWTYEMUDHFRBTWNGXUHBPMMUQFKNKHBQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.812354740019165);
    msg.setSource(43158U);
    msg.setSourceEntity(99U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(190U);
    msg.plan_ref = 1842273889U;
    msg.id.assign("GEETQAWATVHNARBDMKJJAJSUCXUYZWNRZPYMOYHHXWUKZV");
    msg.memento.assign("CHWMMZLWIUHYZBREJYDZBQMENLEOVCOWCHGTFHQSFWGYGLSEKKHSHAGFPLBWATEYXTKXLPAKSKDOOQOPASCAKBNASMJNIUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.716115887205056);
    msg.setSource(22248U);
    msg.setSourceEntity(165U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(30U);
    msg.op_mode = 141U;
    msg.error_count = 117U;
    msg.error_ents.assign("XMOTRLKZZPQNDVWEOTHGIVNZJXXQQNZRDTSBSMARGQKVVOVEUGMMSUQUKNMJLEJXTWGJLQOVHRNLAQJFXIUXXZILBOUFHAACTFJUCZLTCKGNNEIBDJAMYVPCWAIPXHYZDASXRFVYWORBMUHNSYRSIHHAIEQBGLWWKZYDHZTYSJGKVMOWBCDTCPQEYVBBCRUFYFCWNPTFHFXPTMAOSRUCSDGKEJPKZILAKPYDCBLQKOJDSLWEYPRUDFHIOPG");
    msg.maneuver_type = 55406U;
    msg.maneuver_stime = 0.882884743899267;
    msg.maneuver_eta = 20284U;
    msg.control_loops = 3542079755U;
    msg.flags = 87U;
    msg.last_error.assign("FRAZADZDEPJRQEWVNCEQNQWVVT");
    msg.last_error_time = 0.2771110119169431;

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
    msg.setTimeStamp(0.26994249520010327);
    msg.setSource(46017U);
    msg.setSourceEntity(106U);
    msg.setDestination(21945U);
    msg.setDestinationEntity(172U);
    msg.op_mode = 61U;
    msg.error_count = 24U;
    msg.error_ents.assign("VHIPCAAGDFOBIMFXEHJTUAUZJBBNMUFJQMEPXJSOZGKISQZWIFXVOKGVBDQBDCKWNIYKOPTGPYBWDCNCVHDGRQNQUDSULUZAVVNSPCSHGCMOIAYWPFLRHWAQLXIUGKDVHHOJIXRYXMHE");
    msg.maneuver_type = 33195U;
    msg.maneuver_stime = 0.45770980871347966;
    msg.maneuver_eta = 29441U;
    msg.control_loops = 519898578U;
    msg.flags = 56U;
    msg.last_error.assign("HLNRBTGVGRAVPJZEXYDNPEHKEZRZPSMLYAGHKANRSMPIKOGOFEJIOLNWHSQIDBJTXRCKYFUPFYSOATUNRVCCQANJOMZIPZKTGYLEXHATSFDTQMXAZMOMQVJCJCBCUUWFILCVSOSIJRYHUNXLXIHLFGVBNRQZFSYVQZBFTDCNFI");
    msg.last_error_time = 0.8877065302745216;

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
    msg.setTimeStamp(0.35705381612105924);
    msg.setSource(34234U);
    msg.setSourceEntity(28U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 107U;
    msg.error_count = 244U;
    msg.error_ents.assign("OTZXFMNMDBVFTPCKOJGRDEKMXWMHPEAPBGOXUFZUETYAQIBOIWUTHANTYCPELGEAIDMKCSZKIMBYFAMAIZQYDMBOXAQCPNKZKDVNLMWJTQCWGJWXTWLURCLJWFSWMVROLKQHGIIVQCUSNSAZHNXFVJDQJHJFJNRVPYIAYNGXPXRJBEXERRAQTJVTDPHSBFYVVWLQYRZOBSOELNHRRSIZGESUPXSSDFQKKUVPTKWZYCOHBGGUCFDCODHZYU");
    msg.maneuver_type = 39946U;
    msg.maneuver_stime = 0.8587026375292154;
    msg.maneuver_eta = 16860U;
    msg.control_loops = 726536956U;
    msg.flags = 166U;
    msg.last_error.assign("JZEBYURCDSZGCLBUSGUNVKPOWNLLYUXGFDDTOFMSS");
    msg.last_error_time = 0.45650340126140154;

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
    msg.setTimeStamp(0.9856284712320343);
    msg.setSource(4739U);
    msg.setSourceEntity(150U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(142U);
    msg.type = 121U;
    msg.request_id = 60827U;
    msg.command = 137U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.plan_ref = 3220725642U;
    tmp_msg_0.id.assign("QBHIWCCVXCTKBZEWHZSAKMMMXWNEOMPLCUZXDKIGXKUWFBLXRJGOCYGIJPUUDLSQMHHWDRZZQAEZOKYAVMXAJHXWUMSWENAWOYDLEYG");
    tmp_msg_0.memento.assign("SKNDXITJYDPSDZFYSHNLAJXWZXBTNCEZJMLIMXMREXXIYSXMZJPKOVOHBMGSNFIVKPOEKYQQORNLSUEGIFADUGCHCMTMUQHWQAQKABYRHFFCCYIWTYRWPUWXEPVTYIFUCCVOOJJQCARGLXVDKSPRUTLJBKQFDHKWARBVDRGLTNAUHMFAVICLGBBWWNPGFKIEATRJTEEHKQAQXZJHYGZOOGNF");
    tmp_msg_0.lat = 0.31005658376719014;
    tmp_msg_0.lon = 0.8146385442131101;
    tmp_msg_0.z = 0.9972148632390229;
    tmp_msg_0.z_units = 94U;
    tmp_msg_0.speed = 0.15160798774702555;
    tmp_msg_0.speed_units = 110U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5645079033057263;
    tmp_tmp_msg_0_0.lon = 0.8199940679871913;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PBXITENJMCBJQZFTAEBOHURDLPYGFLCOEITPQKHAENFKXRWBMFSYMOAIJSXSOEQPRDMYYBAVOJGEZXCYLEHQTKUHLEOACTBNPRQOWKUCPVKPMDVADRAQOEVQSIZWLTLJFUUMWNIKJXTIWVVKNDYXUGXZTFQOFVYSNTQMKHSFCIRVWJWVSLFEABGRZNGKHPXZZCGDGP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20684U;
    msg.info.assign("XCXEEKAHFQNXSTPGEYRUJMENLNGRGQQA");

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
    msg.setTimeStamp(0.10486084578610344);
    msg.setSource(57151U);
    msg.setSourceEntity(54U);
    msg.setDestination(55222U);
    msg.setDestinationEntity(209U);
    msg.type = 50U;
    msg.request_id = 48657U;
    msg.command = 240U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 3856970805U;
    tmp_msg_0.id.assign("HGEFZSCRNBYJUOIRJNAXITPFOZQLVCKZBZWMAUIJ");
    tmp_msg_0.memento.assign("KQRIPCHCVKGUOWRNKQSCXBMRFMEUSBFLNNQJCGKZMMFLRIXUTUDKVKMGNAYVAEZBYXIIUIMMTHAGZKTNLLSDGUSHZHPTOWWLXYJXP");
    tmp_msg_0.timeout = 572U;
    tmp_msg_0.flags = 0U;
    tmp_msg_0.lat = 0.43883641994175093;
    tmp_msg_0.lon = 0.3299849633767966;
    tmp_msg_0.start_z = 0.1079749340479147;
    tmp_msg_0.start_z_units = 30U;
    tmp_msg_0.end_z = 0.3400241842362314;
    tmp_msg_0.end_z_units = 189U;
    tmp_msg_0.radius = 0.09733449220321533;
    tmp_msg_0.speed = 0.004912568889966384;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.custom.assign("JMHVCENTQDYISMLSNRJWSUSKJKKAMVIZIBKTJAYERPDRXKXAJNGMRTUWFOFFFBBHEBIYPTSTCVSRZYRBSHEMWXPMBJTJHIIKOD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46882U;
    msg.info.assign("YRGYPKBXJASVDXEHUTQGCGQQSEGUHZNIIHCUZSEDOXQZROHIRNQHNXGRUEHSIMMJIFMWBHUVBNXWGSZLBKUFDJAZPOFGFRLSMRLYJZADCAPWCXDAPQEZAYCLOOIWYVZBKOTMHNBCRGMWPWOJLXTVFYACJATERYTYBKTJMYMGUSPJPGBMCQWMRKLBXALNEHPYSFOPQCIASUTVPFKETLLERQZFQVEXF");

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
    msg.setTimeStamp(0.9928744493714811);
    msg.setSource(39079U);
    msg.setSourceEntity(68U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(81U);
    msg.type = 157U;
    msg.request_id = 47880U;
    msg.command = 13U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.plan_ref = 4164612338U;
    tmp_msg_0.id.assign("RRHUWQIAVDGXALUANUUBDCYFJMUEAQPFWFLFKSIOLLGKEIZUGXJRECXSPPFEGGUHMFITZSYXSVPBJGJKEHDTCDPUYRNTEHSWRRAWTNQYGWPXHKCOAGQILVFOYNHKVVAQUMJLGLSZEPRZOHNQMVXWMBAZHQZREDERDKOXCHSLBYQWMOFZSKVTCPFJFICAIXBPNYWHWMMCLBVTOROZDIVKYTBMCZOONXICJYGSADKZDBXJQVJWN");
    tmp_msg_0.memento.assign("DPCPKOPHFBIJBSHOZTUSQWQIVKVBXVKSLQBCHMPRBJFWSHNCRIUXZJSEZAEDOROYXGEAUYFPWNQFSXCDJBLGDNNLADZRZARIUIVGBXTYTYXAEOTHRKGNAPTPPGIARVHHLVDQGIPCMKMZVSIABNIQKIGYMFHSVMPUSENJVODJKWOQGCKYHUNWBLFTZMYXJLCKOJZZXVTCWLQEUCHMFLZFRCMYWFW");
    tmp_msg_0.timeout = 23889U;
    tmp_msg_0.lat = 0.5738875252204976;
    tmp_msg_0.lon = 0.251211213452708;
    tmp_msg_0.z = 0.29018392261148973;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.pitch = 0.45815527803087297;
    tmp_msg_0.amplitude = 0.06203836551152886;
    tmp_msg_0.duration = 11059U;
    tmp_msg_0.speed = 0.43847256652066857;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.radius = 0.1567859960217015;
    tmp_msg_0.direction = 77U;
    tmp_msg_0.custom.assign("VXMRMIVGGMCNUPRFYCSBPISWBYGDVILZJGPJCEUVQLNJBTIJALETHPHOFHYMRTZAEOSKIXRDOMCUXAPHFOAECXIJNSMQZLUJKFWAIDBGATUCGLZXTSKAYBKRLBOQGHIVUDFAQULLSYQXNZOJDMGRQSEFDKVJWEKBATKQUPKMARDBIRFIPZHXNYNRCKNTNCMLHOFWYEBNWKEPJQOWTCXPLRWUY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57933U;
    msg.info.assign("GGNTTPDEYTHJUXPMRYHFJAAXOZWJUJNKEOHCPCBQCYNYQQXGNLLLIAMFVDYVYHTJSWZXRILRBOYRVQGXQDSBCCXNHGIGCPMSXLCIOIRYZUVMJFSWDVDWDJKNFVULWHQHJFICERDTNEHKXBPVQIDTBBQDMOSTXZUFSKMBWPAGKEPRVENOVEMZEBTKSSLTAYQIFZDPRCAFULWKNGWLKFJZRAZRBWHMKJPOEUMGLAAOUUTSN");

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
    msg.setTimeStamp(0.1049675996914462);
    msg.setSource(28395U);
    msg.setSourceEntity(49U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(214U);
    msg.command = 138U;
    msg.entities.assign("GBSVCLSPBIPHBAOKGBRMETEXHRGOXGOIAQMPJBRKJMWPPNDYZDYUCDLQHUCIYPBERBXDYMBGQIVLAERIPCFSWDJMMLZQKYJYZGWKXUZSRLIAZNSXXRUEGFIPFLHNCCNZFMTXNVPNOVAUHWVVJHKOTSTQKGBQOAVZNRICUQ");

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
    msg.setTimeStamp(0.9470313554794493);
    msg.setSource(17111U);
    msg.setSourceEntity(197U);
    msg.setDestination(62262U);
    msg.setDestinationEntity(214U);
    msg.command = 213U;
    msg.entities.assign("KUNFRVELSEQLXVLTSJUNJSPCTJLXVNWSFOOLBOVLOAMZZSXCRVWPBTHQGUJIAAHQCKUHFCUTQBWYCNLRIYBZDPOQOFSWDMSSFYNPWFZIMGMPQJMDARIAZREIEKCJUWIPTXKDORJXGPJWDKRTSZRPVIEGWETGGFEPQUIKMHXTQCLYQNYBZFZZITUHGWNDKIYAFKBRKHCBDMNYBNDYCYNVGDMWJASJAEVFHRL");

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
    msg.setTimeStamp(0.2365562813710731);
    msg.setSource(52909U);
    msg.setSourceEntity(254U);
    msg.setDestination(16775U);
    msg.setDestinationEntity(108U);
    msg.command = 126U;
    msg.entities.assign("ECEZKZAZXCGERFITFPQHBRRFUOQEVZSLQYVHSANVPRCXKXYSNPOLJFJQRXIRFGEIJGCYLMTWTDNJEQQHWEOGAJQJDHGYZVUBAPNVYNUSQXXUDMCSNGFHKGBBEAMLUKFGDWLYSJDJXPLTSIMTYVUBYIAYIDHPCCWTCWXPWQRUZDSLBKWSHGNYBDWXKEDMAEFJNWKOHOL");

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
    msg.setTimeStamp(0.16774712490874522);
    msg.setSource(57853U);
    msg.setSourceEntity(122U);
    msg.setDestination(7114U);
    msg.setDestinationEntity(233U);
    msg.mcount = 105U;
    msg.mnames.assign("QCZVFWYHGNFFRDHTNYKGDOTTSEWUOACMBQBXAPYJOJOJZFLCRBZYHA");
    msg.ecount = 94U;
    msg.enames.assign("QAHPATEBJCYZWPOMJEGQFHIKDYHKVWDWQTFUGXMBUUFRYFDFIFBDORMMIPNZSZUNPWICDIKKWMTWJLSEIYCJUMSNNZYEIBOJCUHWRQOSPRKSXWNDZHNHKPBEXZSOARMLGVJXJAHQLCGMTEPYACKNLHIVOVZYEVCHPDUTLAESLDFSXJADWBLWCBTMVNAYRGOJTRISVFXKBKBBAVQZLQTTGAEVYNXZCUGFERGUXMGKNLQOYTHJZP");
    msg.ccount = 238U;
    msg.cnames.assign("UCTFZVTMOTNJEULQNGQRKTVAZFSCUXNKPDZSVMSHCQVKBLWGIZLOSHSNWXETPMBYIBDXCHAGFQGJOCDLYVAKYMWLOGXGEPVYOCJFWPUSPDWCNMDKOYKIUJBPJYSLKAUMPQKUATTQJHIONYZZBJNKXWVDRNW");
    msg.last_error.assign("WNMHDIZVAFCEAOVAYVESDPRKIVRSRCXUOQLIZWOTIOYGVFFOZZDTFBCHEBHLYZBEYVACSJNWNITPXWVXLUAKUUJVEYXQTWJILMVOWXS");
    msg.last_error_time = 0.5713956143587483;

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
    msg.setTimeStamp(0.05407858366454876);
    msg.setSource(61968U);
    msg.setSourceEntity(27U);
    msg.setDestination(49189U);
    msg.setDestinationEntity(252U);
    msg.mcount = 171U;
    msg.mnames.assign("UEMJXCZKWOXTYUVYOAOAYFUNRDRBPJJYGMLSOXCVYIKBARZRLOGLXDZBSDO");
    msg.ecount = 87U;
    msg.enames.assign("NPEZJIZNUFVMLLBHKWYTIRXGHIRL");
    msg.ccount = 19U;
    msg.cnames.assign("CLGBAOHOSGMNWTZYPXJXVKVEFIEKJANZBGVRHNYTLTIFNRIOGPDQABAUTFCSNIWCDMRBUPILVUDCWZRSHYZSWTPLYKVDZLHEBKQQXTFUNEPOZIMREMXKYFZQBGJPVOYSBJOQNFOCAJSOVORMEFPULEUMQLIBLCANPZRJIYKYAADXHNGWEIDRUQHPHWHTNUBWUFUAPAJXHKVXCQDXZITMTGTLQXJKYCKSCVSSYQBVODWCGWMFMFLDHGZ");
    msg.last_error.assign("AKLQHVDPWQVFZVGKXWGHOIKYLYMEDZZMDSUBRQSCNCESXPXKBRJZHPFOOQJXIKBCJYGVJTAWTXFDUOIDNJDUUKESRDCIJJIXNQEOYETTHSPAZFMQLQBYOCILDBIILGFPMALTBVISRMVEVYLF");
    msg.last_error_time = 0.9294660286864853;

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
    msg.setTimeStamp(0.9148620755199687);
    msg.setSource(14146U);
    msg.setSourceEntity(42U);
    msg.setDestination(20479U);
    msg.setDestinationEntity(61U);
    msg.mcount = 25U;
    msg.mnames.assign("MCOEGDRFHMGFTJGECLPMQPXFEKUVZZNZCUYKHNGUDUOZDJZFNINACSPKBECQVKRHJMLWDSAFJUHNVDAQVCWDNXGXBDBBKFZOKNGEURGXZVOWBBKADBQOYOPLIFEUWAQRBJWSSYQUREPIHNIBHMAJCWAMTFLIRQCTNUOYFWIIVCMRILK");
    msg.ecount = 125U;
    msg.enames.assign("UJJNXDKYJDROANFMGCTFBTGYZSCMPCERFHZXXNJVJQKVYGCBUQKXSJFMCFNFVQPESCRKWXGLNEKAGYBSGWSLJFWDTPAPHNTNTZOSLEZXQYJPIDGLQBIKAYWKDKORRPXMUXMHUZUACUISVNPAHUEIQORHLPRTQCLVMRWHSDHSYSXXVMOJDNVOHBWFPIVUETKZZEWIMCKYVVAWZBDULFMCLN");
    msg.ccount = 241U;
    msg.cnames.assign("SYYGVHJJFNPTCIZYCTLBSWHXUMGQGTDRZEBOFUTIVWNKPLIQKEHRMWTZLOSMEUVNVJOAAFPLCZXDLCCZMESPRYBPKVHNNMHHDOWKHFFWPBDYXRTUIBNGQKXAMVRYLGCYISFRXTLAOXDEPJXGKJJFVOGCDAEPNBHUEQ");
    msg.last_error.assign("JVYWOKPECKQ");
    msg.last_error_time = 0.5632148634628723;

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
    msg.setTimeStamp(0.7303003537795401);
    msg.setSource(59952U);
    msg.setSourceEntity(127U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(44U);
    msg.mask = 226U;
    msg.max_depth = 0.6228211135507054;
    msg.min_altitude = 0.6882119503738855;
    msg.max_altitude = 0.871970226318728;
    msg.min_speed = 0.2284121034989005;
    msg.max_speed = 0.9498329235110741;
    msg.max_vrate = 0.34861073842558643;
    msg.lat = 0.41000985631273046;
    msg.lon = 0.5347246928890286;
    msg.orientation = 0.3572116773518109;
    msg.width = 0.08120413017777972;
    msg.length = 0.6700798315147997;

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
    msg.setTimeStamp(0.019283732636712902);
    msg.setSource(54102U);
    msg.setSourceEntity(165U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(222U);
    msg.mask = 71U;
    msg.max_depth = 0.3201863162243047;
    msg.min_altitude = 0.48466174644057236;
    msg.max_altitude = 0.1689591173574323;
    msg.min_speed = 0.4294782600460578;
    msg.max_speed = 0.32663547830776674;
    msg.max_vrate = 0.4331293443935763;
    msg.lat = 0.21840783514140616;
    msg.lon = 0.556178823863836;
    msg.orientation = 0.4179881110209256;
    msg.width = 0.4132516002879415;
    msg.length = 0.6145768571074797;

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
    msg.setTimeStamp(0.8711191704153111);
    msg.setSource(10464U);
    msg.setSourceEntity(109U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(0U);
    msg.mask = 131U;
    msg.max_depth = 0.19415483978997372;
    msg.min_altitude = 0.6628753471263463;
    msg.max_altitude = 0.08724559420903832;
    msg.min_speed = 0.003193176152248234;
    msg.max_speed = 0.2201033630117759;
    msg.max_vrate = 0.6901694579503945;
    msg.lat = 0.8441667710077458;
    msg.lon = 0.9939368728747288;
    msg.orientation = 0.25297255176601174;
    msg.width = 0.5111021009945341;
    msg.length = 0.47303258315226016;

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
    msg.setTimeStamp(0.2821396276699193);
    msg.setSource(694U);
    msg.setSourceEntity(15U);
    msg.setDestination(24389U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.7880080511638521);
    msg.setSource(7493U);
    msg.setSourceEntity(237U);
    msg.setDestination(52584U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.8240362572076178);
    msg.setSource(38725U);
    msg.setSourceEntity(226U);
    msg.setDestination(1737U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.6744108023738299);
    msg.setSource(33789U);
    msg.setSourceEntity(241U);
    msg.setDestination(28099U);
    msg.setDestinationEntity(120U);
    msg.duration = 62039U;

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
    msg.setTimeStamp(0.9432265255408369);
    msg.setSource(54012U);
    msg.setSourceEntity(202U);
    msg.setDestination(2857U);
    msg.setDestinationEntity(177U);
    msg.duration = 482U;

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
    msg.setTimeStamp(0.939851241555928);
    msg.setSource(50725U);
    msg.setSourceEntity(118U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(98U);
    msg.duration = 56827U;

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
    msg.setTimeStamp(0.2592698758074373);
    msg.setSource(14483U);
    msg.setSourceEntity(208U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(140U);
    msg.enable = 248U;
    msg.mask = 2541283489U;
    msg.scope_ref = 4250897965U;

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
    msg.setTimeStamp(0.44691564430386777);
    msg.setSource(51604U);
    msg.setSourceEntity(8U);
    msg.setDestination(15799U);
    msg.setDestinationEntity(91U);
    msg.enable = 30U;
    msg.mask = 2362366957U;
    msg.scope_ref = 2788287124U;

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
    msg.setTimeStamp(0.9974874000249742);
    msg.setSource(47524U);
    msg.setSourceEntity(69U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(148U);
    msg.enable = 18U;
    msg.mask = 2192416200U;
    msg.scope_ref = 1567113786U;

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
    msg.setTimeStamp(0.7553492642399928);
    msg.setSource(53669U);
    msg.setSourceEntity(87U);
    msg.setDestination(36068U);
    msg.setDestinationEntity(230U);
    msg.medium = 3U;

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
    msg.setTimeStamp(0.10468394518430779);
    msg.setSource(22819U);
    msg.setSourceEntity(107U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(31U);
    msg.medium = 127U;

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
    msg.setTimeStamp(0.7300008003710399);
    msg.setSource(48794U);
    msg.setSourceEntity(122U);
    msg.setDestination(32710U);
    msg.setDestinationEntity(142U);
    msg.medium = 0U;

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
    msg.setTimeStamp(0.5194481904980895);
    msg.setSource(47782U);
    msg.setSourceEntity(182U);
    msg.setDestination(27598U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6208840898504443;
    msg.type = 110U;

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
    msg.setTimeStamp(0.005382757726945742);
    msg.setSource(36484U);
    msg.setSourceEntity(51U);
    msg.setDestination(4339U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8019875895600108;
    msg.type = 80U;

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
    msg.setTimeStamp(0.3673588042057181);
    msg.setSource(37654U);
    msg.setSourceEntity(244U);
    msg.setDestination(64004U);
    msg.setDestinationEntity(21U);
    msg.value = 0.43380984968070335;
    msg.type = 136U;

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
    msg.setTimeStamp(0.5395879395687295);
    msg.setSource(2964U);
    msg.setSourceEntity(3U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.6469769718829792;
    msg.converg = 0.1812602527906816;
    msg.turbulence = 0.4258498883235553;
    msg.possimmon = 203U;
    msg.commmon = 224U;
    msg.convergmon = 143U;

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
    msg.setTimeStamp(0.36413486432393116);
    msg.setSource(43232U);
    msg.setSourceEntity(167U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(172U);
    msg.possimerr = 0.26508113278913803;
    msg.converg = 0.6830681307018093;
    msg.turbulence = 0.559424488378227;
    msg.possimmon = 134U;
    msg.commmon = 65U;
    msg.convergmon = 52U;

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
    msg.setTimeStamp(0.8613960371575814);
    msg.setSource(56143U);
    msg.setSourceEntity(62U);
    msg.setDestination(37340U);
    msg.setDestinationEntity(87U);
    msg.possimerr = 0.5048831461787922;
    msg.converg = 0.1751090300325322;
    msg.turbulence = 0.6932072524634136;
    msg.possimmon = 169U;
    msg.commmon = 9U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.16533554076129764);
    msg.setSource(10922U);
    msg.setSourceEntity(218U);
    msg.setDestination(10098U);
    msg.setDestinationEntity(103U);
    msg.autonomy = 113U;
    msg.mode.assign("YKPXNITNTWVRASEJJCUBYUUZSAFFJHDBSPGXNILQVHJZKPDRPUMKNXVEORMIYHFUGBRPZDVHZEHXFJJAFLEQQBFYTMAIERKCOOWGJSBLHXNOKOLVAYOERALLGMZHOODUWRIINSVDGCYHLKUTYWNNCQQRXWGPLFQZBMIACTSHWMRVSFACQYNELZEPKYGPIQABYQEVJDMMPXKGU");

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
    msg.setTimeStamp(0.3010378255740087);
    msg.setSource(37901U);
    msg.setSourceEntity(216U);
    msg.setDestination(29163U);
    msg.setDestinationEntity(159U);
    msg.autonomy = 218U;
    msg.mode.assign("THJNCVDHJGKSDTIVGJUAMCMAJDBXKGELZHEYDBKXDAJFURKTCUZPTAGRQAWNWPHMXPNAFBBXEIFOCQTTDVRNGPYETXXDYQAHUCECEZMGYKTJXQIWKRCQPILGUQOLLHOWYSSZBBMURWDXQIMOYZJPILJN");

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
    msg.setTimeStamp(0.5544937146804493);
    msg.setSource(57074U);
    msg.setSourceEntity(190U);
    msg.setDestination(60068U);
    msg.setDestinationEntity(62U);
    msg.autonomy = 208U;
    msg.mode.assign("JRBBEPYIMZXAA");

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
    msg.setTimeStamp(0.7603721126272657);
    msg.setSource(19081U);
    msg.setSourceEntity(198U);
    msg.setDestination(54070U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.8181241851206823);
    msg.setSource(4296U);
    msg.setSourceEntity(26U);
    msg.setDestination(6889U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.928690536257659);
    msg.setSource(36072U);
    msg.setSourceEntity(7U);
    msg.setDestination(11026U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.6591950354991519);
    msg.setSource(14655U);
    msg.setSourceEntity(21U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("COATLULGWWZCGXBYOICXOLBSFJGUJOVDELKPXEDITZFZRARPASZUNCVVOANMFOWHDVPVLIUCYAGAOQRIYFWWBXJBHMEJAWKLHCSIUTHBYDCOUIUNJSPYEKSRHZDVNUIPZDFRGXJVQMIBHREKMHQMTGXNPKJSKXUQC");
    msg.description.assign("FBKWHZAQSYBXPQAUVRJDAWIIMQSVFZZMNHXYVOEULBCZXYLCWMKKZSUXCAMJARPWHCJRMGAMEWEQIHVLEDFJICCSRWQGTTHKISYTLDAQGHPUKBYRUTJVXHAZUDENSGOPQMXGXCDCIGNALOENQEIUTFDJYEGIVVH");
    msg.vnamespace.assign("WPEKHOCQLEJBBZGNUDWJMIVKRZSTWEPYDEHKSHNIMCWTORXPHOXJCPXSIAPARRUNPNHFHKTGOYCEIEEVVJZJLTLYEPNUFHUAPTZYSOIMRCIUXBNMMBHAQGDXZUGOCFFYYZXDQRQJLFGQNULONVTWFKSRBKLWGEQSTCKDNLFFUWPVOROBDGXJTZDAEPIKJRDDAKGXTSVBJLBQMQOAXVGMZTBSWFVKRMQ");
    msg.start_man_id.assign("AVDBOWPFOALVDXKYCCHXDRUPYSIJGGOTLXSDMBGTOUEJLUMPSLOIXNGUIIIOAKDZHVOFMSANPPZXSEFHGRXCYJAFZQYLIUPPYPKRRZNWQYCCBJVDRTHVEKFXQUJRCWKGZTBMFBXOYFCEZQHMCWLQZGJYDRTJNVHGODJMAKIWVQATWQDNBJSFWPWEENXSGULTREQHZAEBKIPMABLYRUFWHCWT");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 127U;
    tmp_msg_0.error_count = 183U;
    tmp_msg_0.error_ents.assign("NIERHFULUIYTLBKOURJCHMAAZJDFGDJNLJWITAXOBHDNDQPBNMCVFWZUQTVHCKPLIXDBBYAOUWEEKYYDXYNHIVAEHZXKDLSMJMFTBMNFKBRKSSSIMO");
    tmp_msg_0.maneuver_type = 12371U;
    tmp_msg_0.maneuver_stime = 0.05915663813457872;
    tmp_msg_0.maneuver_eta = 43004U;
    tmp_msg_0.control_loops = 3437774133U;
    tmp_msg_0.flags = 197U;
    tmp_msg_0.last_error.assign("BVIFLBOYYGYPCMETEQPIMAVZUDMO");
    tmp_msg_0.last_error_time = 0.4644715898849936;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8433341981505085);
    msg.setSource(61272U);
    msg.setSourceEntity(15U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("DZHJAIRUFTTAHAYOXMQYTJKGKMGVEJWWXDZLGLVRATZRDPWDOMRUJQKDFCQPBUSGZEJEGMVAHJPKFMFDILZFUTDTSFWWCKCXTFNKWSHUALPVOZZBGZRHQSCIEUQPTLCLORMQ");
    msg.description.assign("GRVLKKBMXNJIXRZVKHUNVZSPGUZSFVRNFHFYANYCLTXOQRKIYOWBZMEXFCOLMFTMSMAPCQWVESDQIBOPHOUUHFLKRQDGXQEYQZZIXVYBUPLBYBFAWZTTAOKXCURTVOJLQCILKVCGRBGP");
    msg.vnamespace.assign("BFJNMOIPQBMGLUROZVYLLOQRX");
    msg.start_man_id.assign("JDFXJIZLHTBFOZUHHWYRBMGXIWWHJXISBIQIECSMIPNPTJFNURYCNFDPFEVGUEXBHPZCUOFIDLPWNNJGEDZVKZMUMYTEVRMDZOXWANQDENRLDSYATGJQYLLQNSUVNGQCUASVZWKUOGMIFFERGHBZEURWATACXAZGLQSEUDTSPDOYXCVXROCNPBAFKCKBLMWAJAHVOFPSMYCOGKOLTKJBSAYDXMLWBQ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YBWCTZQQIPKDCSOMFOXJPAAVZTWBWKMEAOKVNOWYDKZSFRXCPCIPVVQEFTNAOBBPHIGBUNLMBUZMIMJYJKRRCCCYMNYTZBFHNRVLWUFELZPAMDWRJWZEUDSGRFQKNDTSHTSBIAMFGVGCDZQITFNKRHIEJKYPVPUXQQTPJUHLVUUDMFILXP");
    tmp_msg_0.dest_man.assign("IOJKIZGQRSQBVLNPMXQCGKTIEVL");
    tmp_msg_0.conditions.assign("JQTPLJSVWBCISMXNBTSENBZQCMVXRBEDPSIAUFFWNFYBEAZXHKUKPRLCZIGKMPOSIJCXOJOMTDHDTHPZSKWFUGNIJCNREGZDTUBRINDPDKKXDOFFQHNHZPVCFPOIMUZXHODUJMZSWOBVYTLTXAQDWMAGVMIFAHJFRLLPKTVDJXYVIGWEKN");
    IMC::Abort tmp_tmp_msg_0_0;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7312689177029285);
    msg.setSource(21340U);
    msg.setSourceEntity(229U);
    msg.setDestination(14760U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("AUQTDOQPROPDXUMRLOSSRQIKHBFWBJTBJNEGSCVEKQJXILAHEGBVMGBDYFNOIQNDZVLYQWWVTYXINBZZYUBWDUWEALQKRZMJNMLRPGFCRGFUMJTXVPUYKQYKAAWLJTXMNSDITCBGUMHETLWMCJJHRDQOASUTAMPPFPKZELVDAHBXZSSBIZEKZFYISZLNHVGJDYCGPKQDXCLJSNPW");
    msg.description.assign("PRWAJPADMLKCAHVWCZLADXVWJHSJWGDFHYMKUIFDCBRZFPHIRBBQKLLOLYTYSCFGDEISTUCLIHDTMRZQJZZBMRNKUACEEUMYGVTXMBSCHLXNKKPJFVQENYYUETBWVKOECFCUQBIMWXLBDHFSYJXATTXROSPGHTNWDVRPCLHRODZXKZMRNUOWGFVJSQFGSNKMVXGNGMOOAXZPIJAGZVDKOQQOQRPILXTEAPOBNQSUIPYVJ");
    msg.vnamespace.assign("EKEKFATXYFIYBRNWUBJSUFNFSZQOSJFQUFVWHJIGBTLFDHQPLSNJZRDLRUTVGKVUSBOCUEPQRAIHVSTLNZVAWQITRPQZCHMZKILIGYHXMOMBACVTPNOXAUPEAHGNYTYOJDYHLTXCVHSBFNUIXLCQOUAJSPJGZRDNJCGITVECKXDXEPDRAJMVQZYXDJCFRAMWNMFZGDRGZMBXGMYWMWLORKKWQICWHMWPLNCKXOZYPEOQ");
    msg.start_man_id.assign("XAZYHPZOWCDJEFTRCTWXADPNBOZVSBPGNBVHQYJHQYJLUHIFYLBVLHAMIWFEAUAZLQKSZCXLXOLNGXDYOIJRKOORZBUJVDBUVFVJSLISTEAKBSUMCKYMUAJPJMMPFJWTQSUPPFKGHYHCCWKGLAONOECHEVIOXSIPKXSCWNZRMPUUMCGQUDPKZTLBBKNNVNSDEIFZEVGNK");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 237U;
    tmp_msg_0.value = 0.3574901437612743;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7498844817759516);
    msg.setSource(63937U);
    msg.setSourceEntity(53U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(238U);
    msg.maneuver_id.assign("WSOERYACRPLVSUQVDSMKTLFHTUNDHLRPGVFKUCNVKPKFINSZZLQWAUNMACMQGICJQMTHHXZAYSRSSDLBBZLJOGDIFUBEOLLBGTIQJWJCHFPDBPIEGXERYNJPTOMURVKZMLJIXDWPRPOVECVVSMZSWLCTKJYEOFBXXRUQTNBHCWAQEDBHGKJYTWZOXRZEYBWOIODKICFEXYCHDYFMNIXNHYAQNUZFGXB");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.plan_ref = 108904350U;
    tmp_msg_0.id.assign("KDHVKSXZJCPXIHOYPAZRSHECCWJRQYMWXEXWSZMNGYWBLSKJATDWJZOKFFRWHWOGBBFBHCKTFDHGAGETHRZMOIMCFMUZJVSTMGPYZPJFYANKFRISIIXQVJACQLXWVLDAKPEOYYOTLGELUZTUPTPPTJYASDJLXZWNMLIOCEMFVQCISVUBDDJLDURORUQENIYQOBFOBLRHBARUIUVNMNVNPFQDZAKQUVGCMYGHKPKVQESWDXNILHCBNXEE");
    tmp_msg_0.memento.assign("UTJUKCGZRKNBDSNSRVJPTFFMGQBNHXUJILHSBNAPTH");
    tmp_msg_0.timeout = 12652U;
    tmp_msg_0.lat = 0.5297802487161933;
    tmp_msg_0.lon = 0.28704167183671114;
    tmp_msg_0.z = 0.37257477906271075;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.speed = 0.4876798136303754;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.duration = 14607U;
    tmp_msg_0.radius = 0.6715428443961927;
    tmp_msg_0.flags = 6U;
    tmp_msg_0.custom.assign("KJFCNGREMLYRSAGTGANICUORHDFDUOCYGMZJFBRYFULNEQFJXSDWRSWEHXJDUVAESLIPVHNRBQSRPSQTMYBUTYOGMKQQOENZHOACXOJRJNCVGTUVZBHQWPXJCLBTF");
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
    msg.setTimeStamp(0.7666516664895126);
    msg.setSource(56387U);
    msg.setSourceEntity(157U);
    msg.setDestination(17557U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("XDUUPDJZAAWBCGOKTCUAJVEAFGGHIVFGEPWSSHPAZXHDNVHSOZJQWCDGXTQTSLOLIWCMBMCPJBFSRDNZAQWLNPH");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.plan_ref = 415513059U;
    tmp_msg_0.id.assign("CKQTUKLLYUYVFKYJCLCPDGAINBCVOPAYERKYTUNSNYWOIZXXRFBXMDWUD");
    tmp_msg_0.memento.assign("KHABNONEYZZLIU");
    tmp_msg_0.lat = 0.16014902552342014;
    tmp_msg_0.lon = 0.9793324464339266;
    tmp_msg_0.z = 0.8936138546315083;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.speed = 0.08546734300809966;
    tmp_msg_0.speed_units = 173U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3701702020284259;
    tmp_tmp_msg_0_0.lon = 0.5256790794664239;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VALHTNXESFOPJANGTQEQLDRFKDFIPTPCFSJXNJMUYISHWXVJDLNWWSKYHPWKVISPAMSHEAOMIYDTNTBQWXVOHYXWNKCBCCAARKPZIMWHVZWDRGYEGZRBTCMRJYGGGDQKEYMKZSMKCZRFHXIMPJNUCRQULJIEOCBRPMASJZDWWOXBUHCIQBGFEOKREZUEFPBDLUUBVQBTORUHSOSOJFDUFVVEQXLTYAVBYJIVKOHZT");
    msg.data.set(tmp_msg_0);
    IMC::GroupStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.7521134817760186;
    tmp_msg_1.y = 0.3355061011901257;
    tmp_msg_1.z = 0.8934132714136703;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5802036269413984);
    msg.setSource(55067U);
    msg.setSourceEntity(86U);
    msg.setDestination(2790U);
    msg.setDestinationEntity(0U);
    msg.maneuver_id.assign("HCOZQLTXPMUNHUBOZQUAWSVLZTIZDGMBPSUAMXAYUO");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 1770076801U;
    tmp_msg_0.id.assign("GTLOWYKYZTSECLUMZLWOZXKJSBJAFKWRUYYQHPIZTCLZTSTLDUACWCUEISVXKBVEWETOUSVMOWDAABYRQCFSMUJHHQPZFEKMVCGHYGSJVBCIERROGSFOLNJBXLNAHOGMPDDV");
    tmp_msg_0.memento.assign("WDOAWZCMKMSNTRYOFHJSJTTPLIYRXGUUVDKNULURJPGZKFYKMTHZYXEXIUQAOFWGEGWUMLJQNRJYWQZSYTLSHKOOCBYVMAUHBPVYMVCXRNNAEMDBHGOFTQHTEPZSKCJBOUPJLICINDHVGCD");
    tmp_msg_0.timeout = 50465U;
    tmp_msg_0.lat = 0.6894863488184318;
    tmp_msg_0.lon = 0.19159398830650487;
    tmp_msg_0.z = 0.6079967283420463;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.duration = 37205U;
    tmp_msg_0.speed = 0.894070267959359;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.type = 35U;
    tmp_msg_0.radius = 0.5393991420819658;
    tmp_msg_0.length = 0.009595531215562447;
    tmp_msg_0.bearing = 0.748244526238754;
    tmp_msg_0.direction = 220U;
    tmp_msg_0.custom.assign("BTEOJSNVZQBRQYKXEGBJCWKZMZHTFYFQIUPACMIUKVHFJDBSTSUWQGBHHKWUDMBGAQXBCCIBJYLKZNRHZGONKZNEKODUOHINLLJFVVDNWHJITVSEGWJAVXWWYUAAMXUIOAPEJJSLDKDPXMXTMYQRMFVFEBZNTDPYGGSDQRLIRHUATBCFVSPIIDVQVFYQFZSCPRXRLHISOGLMEJCMQ");
    msg.data.set(tmp_msg_0);
    IMC::Sms tmp_msg_1;
    tmp_msg_1.number.assign("JZVZNBAZZBSHICEHICSKVJDIWJFSGLOPSEISYOTLTGABTPHDKEDIIBGGLMTPRDALGPMVQHMEQQINPGHXBHXKMQMWNADSROEXUEYBCHVUMYZ");
    tmp_msg_1.timeout = 22809U;
    tmp_msg_1.contents.assign("GXRJKEIUYPCRVLFMOOPADEXMUIZUCJQSWZSFKPTRSXPERGUEWYQSNMBNKRDDQDFKXPEEUCAOOASA");
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
    msg.setTimeStamp(0.377676271409622);
    msg.setSource(35307U);
    msg.setSourceEntity(249U);
    msg.setDestination(33147U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("MBFVXEWILTDWDSEPNRIIGTFIXCGKTVQYNUJEIAHUCXLMTVCEDDYOBCQZLNIRKXYVWTOYRRGKVYMKPHJVVCGEOJUBIUYUHDSJFGAHBBBLURSTXOPSPMUZOQPLKTNEWABRLKOWKHDZOYDZABJGOENJHQWYAMCFJUZNMCQGRXMYAFLFFZDAXWPICWSHQGLMPOKQCDWPQDXXTKGNYNZHOCLHSZJMLUAFPRXPVNASBTQWJZMRQFASEE");
    msg.dest_man.assign("PBVLYDGYZUEZSDEJOANATFCEUMJMRLFWRHHZEJIWDJHORCPZRLBPJDAYWUDMOHIITFGVYXPDAOHWBVLDMOZTLDBOSOPGUERBVCXAHJMWSZHULJVFBIAPNSEFRARQZTXNMEMMCGQBWNR");
    msg.conditions.assign("BIPULAFYOINPWYXFNKTEJMTTQLCUFLYLOCMPXBOQJHULOUWILBSXHKAGDEYMPNJWFPOVDLZMPJESYCWLXUXGK");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13998589662309657;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6691656355717572;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8312234577059914;
    tmp_msg_0.lon = 0.9608727189206845;
    tmp_msg_0.radius = 0.08738818941221871;
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
    msg.setTimeStamp(0.9460388176694998);
    msg.setSource(6970U);
    msg.setSourceEntity(74U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(182U);
    msg.source_man.assign("JABDLGVLHXZQMXYPSPMOKWFZYFXHMYNAYISSPYKZOATGRQZHWPDXFVPXNAUADYYGDVAWSVRRBMJALECPPMJFMBVPVCCWKDMEBJSOJUKABRRCOWTVISFGQWTVBONNUGCOFWLDYSSKQOXQTEDZUWHBQIGUDJUWUOCNHMJIKTLXINEWQJEVSKHMZGRBI");
    msg.dest_man.assign("JIFKTLMAKUYODJQZNKXBKQTACJCCTSYJUDWDDPGOIVLSYBCVFCSGMZWQCYHYIFBRTQFHLNZIJRXBAQBHTVTJXVGOBQDVPHTAIXISMDVDWHAINHOYDVEZRWKGSZIOKFMEUOKSRSCRVEUQIPEEUNOCBMKXXGEXLAFTQKEULZMGSDWXCRPRW");
    msg.conditions.assign("VQQVPLFGMCTDHKIDNMGLSHTQEYJHHEIKPAIXTGZXVUBYQLMXWLBGUBVCRZJXZCOSODOHEOSUKYJPFHCFWPTIKZAQXRPOLWAWFALZDSGUUBUNTNTDBJMJSVRHPWEAJNPCADZCIVMYCBBAPICZSMLCRFNEGEHVDLLTNRNPYVYIUKQDWUGMJOZFFOQRRTIRKS");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("BJGZBZSAWHGIORQETUYKVJDFQUPLVSCJXVMKIXBQXVCLJAIDMEUANMBSWGKLPGCLPMRGMRNZDTEKRREHFWNULPPDDVJLQOYODZMWJZBQKTBTUTKEULZUHTHIZFQXATNTGIWURBPGENJWAOZGOMCRCLZELI");
    tmp_msg_0.op = 220U;
    tmp_msg_0.lat = 0.34656710758103726;
    tmp_msg_0.lon = 0.6768158666541523;
    tmp_msg_0.height = 0.13751103896515182;
    tmp_msg_0.x = 0.603421750140375;
    tmp_msg_0.y = 0.38054292042151827;
    tmp_msg_0.z = 0.013471446824676714;
    tmp_msg_0.phi = 0.6369715294982161;
    tmp_msg_0.theta = 0.31492172794351103;
    tmp_msg_0.psi = 0.6739033441318059;
    tmp_msg_0.vx = 0.49963047290563156;
    tmp_msg_0.vy = 0.4426092728769446;
    tmp_msg_0.vz = 0.519512401775342;
    tmp_msg_0.p = 0.2538989324486969;
    tmp_msg_0.q = 0.7448023528776396;
    tmp_msg_0.r = 0.9610535859725804;
    tmp_msg_0.svx = 0.01582289918362456;
    tmp_msg_0.svy = 0.25755420297125575;
    tmp_msg_0.svz = 0.2748736691785332;
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
    msg.setTimeStamp(0.5288406557582924);
    msg.setSource(22635U);
    msg.setSourceEntity(79U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(24U);
    msg.source_man.assign("NJWGAQUYZUVLNVKNSVCMOSWKLYTMQHYVRRJUAFVZZSEPRGZMRHIGFCPIUSNZTHOILXYDJEVUBTPVAQYCBHUAIKJVOTXXENZDXRORUJYNFSBQWXKNOIRSGIBSKTIAOBMWZQTMFLXPKTKMWKSPADCVEURDMDJODDYOECGZUWDLIXEJPYHCPPGETOBMDBZAHCDFKYFFFQWLEENQBXSQFPJTXFWONRHNXKMBHAWGCUSGQHLA");
    msg.dest_man.assign("QJCZBTAOYQQSZZIXZMJQFMDPEAXLJVRUJJFSWHVKLUADHFUOIARQNVRNAGRKEDFKUDPNMGFMBNHDYWYMCXBCYPVIBPABIQTYWVPUUKXUEDAGSGIXQOOICWUVHVHNKSKWIPJGULACLDEDRXJKZSRZNCYLXSHTSCTVUTNEQXBLSGDYKMGZHLSJRSMBZHERGMEANIFXEEZBNPLMYGTTFWOTMYWTJFXI");
    msg.conditions.assign("TKZLLOYBRBJFQSQGCOKEQEKTMLNEXRYWHDLUDWLVQCWHQVICCEFNCSEUPJNQLPAXUZXNZNMIHVPGWJYSXSWVQLMIICFKJLAGYDSHFZFPJKSRZDQTBPUGOOPHFDWTRVB");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 90U;
    tmp_msg_0.value = 0.8539244611347573;
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
    msg.setTimeStamp(0.7913537719758812);
    msg.setSource(62478U);
    msg.setSourceEntity(185U);
    msg.setDestination(61365U);
    msg.setDestinationEntity(179U);
    msg.command = 234U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VJJQXPOUCQQCMSFHLFHPJKHSCXAYDCWZYHMLEIJVNWODHNSWUKLHVWVRNOXNPCGTAINWZEKBWXZFTZDTMYAGNIDAMDMUTOFJYUANSPUJLYBUTYYQFTIIKKSQLLFMANCPKSLBPVHMEDCQSLDHVGYURVGPERRJNFWZPIZGHWVREGOXYCOQHAXRIISTESKE");
    tmp_msg_0.description.assign("QCSURZEFILEHLQHUMGUBCXZWDLSHYHIRBSTAOFVAXBFTIPYEIHPVDEUFUFLMKWAVSPNTRSYCTZIWKXPLYQMRCSHKMAVOIQBDXFOTAHGOIOBIWPERCRLKDWPOMUJNJGTKGIYJYCJQUZHGJMAPNRRZAQWSLOKNNVSYDEZJXDLPYCBFNPKX");
    tmp_msg_0.vnamespace.assign("AJICBRXOREOSPJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WRYFIFEOJKNLOSEGMKYKIOSLMLWJKACFDXMVRVRQABLQASXFEURDOBHRCREITQOUYNIYJAONLRFJTURDVOCPFROGZGYNDGWWBZTBCXCBNYXWXZMGWFHKQNDGJTSJBIXQEJKUTYHUABIURNAIPDCIMEUPPLJIMQDLXUVHLSZZSDVHPQHPZYNWHTWSMUSQWJUEQPJZACGXMNTKIFBMPNFVMAYGADGHLE");
    tmp_tmp_msg_0_0.value.assign("LITBQRUYZUS");
    tmp_tmp_msg_0_0.type = 130U;
    tmp_tmp_msg_0_0.access = 53U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FULNGDAFOELSLBWORXGNATYWRSNYZPUHCVFMAYKDCNBKURWRQLOKRUYWXBBTKWXPHSVIIIYOUJSOQLJRVQAJCAVPSDYWOIRAHXTSNDEELTJANMINPSFVZJFLEIJZHVSOTDRWZZESIFPUPQZJDVQKMXSAQFUFNCNXOVIDBBPGDEU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DOVIDBYMPQZJNZDJDMSFPTTCNVPALRXRQETNATIBBQLJSCQMGPLUAVEODMRDDLBRLPHWGTHLHMXDXUJBAPJHLYWYQVRXZDSPRJSZRSQGBMWOUYKVNAPJNCGOCEIIEUKCXUYHAQGCUFNUCSGSOJWIAVXWYFFOUNJTZVGKUHQWGTZOGGHHMEOFYVBKWTXEAPCWWWZECDKZVYRYQFKKFIJNKIMMFSTRLYBHAOKOSUCPXQNXIILEZIBTER");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 3369709693U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("NTASQFRRLEXAYEKKLEZNBGOHLGSVTP");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("APCIMJABWJIKJFFNWOOEFLRDJDFEOEEZUOA");
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6373888843830058;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6607890815115467;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8947994350447369;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 70U;
    tmp_tmp_tmp_msg_0_1_0.duration = 34615U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 25955U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 23541U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.37593533653979516;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PowerChannelControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("HFNEOOCSGTCNBVLFPHPIOREZDDKAPRQKTZHNQTISBANPXGTHEQHMFDRZQHUGOKXZVIAYLCBQGOLCDUEVXBRBJESORYQUWYSVSLYVWLJMQPTBXWYRDJSEGNSILTXEGZTCOVBRJFMKZUNUVKXQMAEIAAITIVKYCSWBOMMUDUUOGJZYNFWOPNXLHFTAIAAG");
    tmp_tmp_tmp_msg_0_1_1.op = 195U;
    tmp_tmp_tmp_msg_0_1_1.sched_time = 0.17813847131982208;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XPZZPSRACBDENGLVDHXJUDBIQPFRLIBAFTQPKWSSOFZRIUCFXDSFZUOEFGMPSCHRMSZCOWFHOBSDPRCGLMLIUYKAAKTBVRNVHOKUUYIVEQKDQ");
    tmp_tmp_msg_0_2.dest_man.assign("ZOHZNDJCAZLMCDKHAUV");
    tmp_tmp_msg_0_2.conditions.assign("YNKVXSHTQEZTNTFNWKVQRDZQWYJMURWAXOCTXPEQNHHTSSYSYHLNFLDIFBXTCJNBGFBLIZZPKKVZBGOBEFVBIGLNHUJILRKGMKIDHBCHSRMJUIZAMHVBAERZYWFBWADUTSEWQCJNLDOWBWNYXEOOFJGMHIIORFUJVTIETXJMGCVRGZKPLCDGDG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::MapPoint tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.6359526749444007;
    tmp_tmp_msg_0_3.lon = 0.19102664068453923;
    tmp_tmp_msg_0_3.alt = 0.49919888589859895;
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
    msg.setTimeStamp(0.5221742445024599);
    msg.setSource(14237U);
    msg.setSourceEntity(18U);
    msg.setDestination(11305U);
    msg.setDestinationEntity(210U);
    msg.command = 8U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NCFWFENKBRORQOHQGFULPFTZNKBTAZSLQMSPVMXBYHIJNHJMOIXOPDOBRDQ");
    tmp_msg_0.description.assign("NDWMOLCMGJRJPMCHFEKVJXRTLMDIOWKBAQXSVNFJZNELHGRDASVC");
    tmp_msg_0.vnamespace.assign("ABSGTVESGHJIHEMYZYOFMOAVLJRFEVIRXYZOKDWAEGLUSKCTBPAXTSIVGJYWXNWGZDALVRITMWBLTOCMQGXRSAODMUJBLHBXUPMOVUIILIUQKZWJUXHPHRFCAYSNPCFPEIHCOMWZPMJAXQSJNFKKZSUHLRVFPTHRJYYFLKAZBTSQZZKXRWUELQPQOKSC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MZNDFLOUBGBIMYYRSXZUGJTNHAVKMBRLPSUDRCPOIEJXHHNZAXWDJPBRERQKUMSLQUIGNDVACZKWEYCPXIGBBDSZOTTRZWCWLDYXNFAQFJLKQCSSTOWWJRBHYFYLPCOQMUWNPLCAXTEWYIHXEVE");
    tmp_tmp_msg_0_0.value.assign("DWBOEJRCIKGFYWEFFFNQFMCDCKUNZRURHOPGDGGWIXOXSTYUMZGHTQMACJIKAHNITVGMQLQNVDWRMILPOAROCVKVVKUZPAWQKSNRHXEAYYTNZUSBXUICHLVUZXTUBOXPFGQRSXMSYROFUDJPKPSWLECITBKCFEIRVSLHHWDBBCKPEJVTILHMPJSWBATAHDABOQBCUWEVNAKGZODOVNQLJYZELNSZDFGJGJYYXE");
    tmp_tmp_msg_0_0.type = 211U;
    tmp_tmp_msg_0_0.access = 251U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ITGMXPPHJNKGPATJDVLHUACDUTCWRQBHBNTQ");
    IMC::TrexOperation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 176U;
    tmp_tmp_msg_0_1.goal_id.assign("FNYYPDWBOOPJLFHIQ");
    IMC::TrexToken tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeline.assign("PZVDJSJEBYXYHGHGHNHUPJXWUFKPIYFBQGAUDNVGQTMSFQPXWECBQTMVMYNYRKQLUDFWCYPGYLTODTCSZMZXPNWCBXUTIIWRAAQAWRASPCERYDIPMVWPFIRXLOTTJZJVKWGABMSKJEVPZNVEYVAOGQONTIUJKULLXCCBDSKNHGKZCMBXFDRHOVJYSVDKNUZTLLSJBEWMXKQZBFZOGFGIJAUUOOEHESMZL");
    tmp_tmp_tmp_msg_0_1_0.predicate.assign("PELMPILHTXQKCQIBKPNARJPNGJEVOVZOROGYNKSLMBMRGCOOIUOCYAXINABQBXGMXCMPEEMYLOFKRNTIVQCUDZHP");
    tmp_tmp_msg_0_1.token.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.13973410574220013);
    msg.setSource(17548U);
    msg.setSourceEntity(23U);
    msg.setDestination(32453U);
    msg.setDestinationEntity(95U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("THEMOFBXRCPLHGCMPJIPIMIBRYPSXZLNONUQOYUOLALQNFUGOYOVRJRIBJDWZMDCFRMICCSXTDYNXZVUCXLCWEDSLNBVVKKGJEUFFWAQWRVMHLOSHEZUSPRFVYJGHVQ");
    tmp_msg_0.description.assign("BSKGZWUOUSQGLGGLAMMBHRALJHMENUWDPMTGXGDHYSMLJRUZDOPXSUPWZISYWFBYWAHIGYXYAJEODHZMRKQLKKKCOJTJMNEXKJHQIKAXTNOYQEXBPOWDNNQFZSTLTCCZBRCCLFMOHBZPGEBUXFEEAPLRBURCSVCDUZFVVWXFEIFVTOTZFXIVVPIVJDDJRCKTXPNUNANWSIDWBIIHRSJOMEPNYOALNPZRGSQEC");
    tmp_msg_0.vnamespace.assign("RLOPJBBCSIGHCTNNVMXSWIGYLXQWXFYPPDCOKAGVE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OPHWKMYHTQXOUACBGNKEIGSMARMMKWBHXVYTPTSCKEGXZTFJVZACMSSLYVHQJJLYCRRBJTRYJRXFIFBAAMKQLUWESHPULAFUWGODQEWVYYDGRPUCBGNKTFKYTEQRDMACBNKIDDUHYCPCMPRWBZLTUQWNISMHUADJGONISDYZFKZGOWTGWVEUWBNDSEXXIJZPMIVQBHFFLPBNOPUNSNQZVILX");
    tmp_tmp_msg_0_0.value.assign("UNZXPAOQKGRQXOZULVBZDTLOLFFSZEQFRKPAUNVPRPJDGBNNTUVXZKXMR");
    tmp_tmp_msg_0_0.type = 247U;
    tmp_tmp_msg_0_0.access = 205U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FITMUUBQXWQOYPIICOAWWZVJSCXNOWNJQPMVJADLTZPNEZVFBKTKIBNHYOAEXCXIDJMDWTYOAWYKJSKUZYVVVYDLAAUMIMFIHPBLHKVPTDNGESEQYBBZPAOSVEKCLNUWFQTHXXWLHGMTFXZCMIEZFNHOQSGOGURCCHDCJFQRLGDUGVLFSRJLHDCKUJQSARPBEQKBIXWGDPRUOVFEEXSRJPDETFSHYAJCLINSZWZGRBRAQNLGPKO");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YCQHIWPYGQYAUSSHPDDMXLLDLXALJMYJIUTVTGGYTNKEFFLRAEJITADDPCEENFZTPEICIDEHZGBXCSUIDLVNTKRBGRMEJVBBMWKSXFUSWYQMFZBVOXLPCOOVGJNSRNCSION");
    tmp_tmp_msg_0_1.dest_man.assign("TUBUMNNMWNJJCQLCTVLPRUKFHAPRUMXRAECIZUGLASTGBOUVQMGMNTUOISILCVYKGPUEHHIFIYSWFU");
    tmp_tmp_msg_0_1.conditions.assign("IXHLLNVSEDSKFAZNNNELXROWKQJTYIPQTDXFJYMRVARPBLUOGYSCBXBTWMAFPUJKKLCNHAYQWJGPCIMEYCUBNDDOFGMVZCMWXTTDOFPSDZGXVARLGGBCPJQKOJLHEYEFSKOZVUFWOFHQOVIHHHBIUCWUVPDSECJHVURHMDMEWATJPEWLKMTDQCYGMZQROOXRKVAKVXYWBRIZTEGZBAPMYQGXTGNAHTLIYXSFFSCUUZBZEUZKINS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5407120944111479);
    msg.setSource(20340U);
    msg.setSourceEntity(93U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(155U);
    msg.state = 218U;
    msg.plan_id.assign("ZPAVSPFWSHXHNSMKT");
    msg.comm_level = 76U;

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
    msg.setTimeStamp(0.40509620653234213);
    msg.setSource(40276U);
    msg.setSourceEntity(158U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(216U);
    msg.state = 132U;
    msg.plan_id.assign("DMLJFWXDCJAVHYVPSTZWDXMVGJSOIRDBVTUDQPBOSPHPUIOABALSFMCTOSKZALMXEAEEHPMKWMOGHNQANNRXYOGXXREVBQYICUYGYKBLHCKJWMPLJPAWMQKOSLCQENOGXNYMWJFJIUCSJHVUKTMFIDEQANOGWELVBSLKZFTPYRSNTTHHZQJUURRLSXUJIYIUGVYKCBGHDWRNKDFVZEFQXBGEQGZFZCUBNCCIIVDOEPRZATZWHYWKFZQTR");
    msg.comm_level = 118U;

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
    msg.setTimeStamp(0.6921984093303327);
    msg.setSource(59944U);
    msg.setSourceEntity(139U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(233U);
    msg.state = 144U;
    msg.plan_id.assign("XMEAYHCQROSDVIWIPYWRNUFTMCZKZABLYCQCWZMYGOBYBXHEFMTZJVMFTKAEZCCSHPWQCUIFSAKYUQPOQIJXRKEGUONBSDESXGGUEEUYELKHJMMGJGCWVODCALZOOGQJURRQXAFVLWXJPEVPDDRSIGWIHLPNQHKPJIRTOELDXSGLVNMHRKVFIZZBQUANOYSNZTYWNBLRTVPVRATYLKHDDILJPUBDFWMXKINMJOXAXPWTHKBCZU");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.6978922445617957);
    msg.setSource(48735U);
    msg.setSourceEntity(10U);
    msg.setDestination(62099U);
    msg.setDestinationEntity(223U);
    msg.type = 193U;
    msg.dt = 146U;
    msg.op = 157U;
    msg.request_id = 54876U;
    msg.plan_id.assign("LBFNPDTWGTJBKDHEIDLKIBDZGSIKQEWPOFHDIGTCKWAJTFUVNLWHFPNQBXPZZLTQQBTVMHTPL");
    IMC::TeleoperationDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OSDIPOGINPCOSYMLAKZTAPQXZQGBWISDRLRLLUAYBMKXVPLJUVZRZDEYGSTLNKGQMBZPVTYETJBSLMPKKGAFKJWFSLRWNRUETVCAJWRCEWMLAUZHOFBIZICRKH");

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
    msg.setTimeStamp(0.27314677076873883);
    msg.setSource(1497U);
    msg.setSourceEntity(200U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(169U);
    msg.type = 241U;
    msg.dt = 131U;
    msg.op = 53U;
    msg.request_id = 39239U;
    msg.plan_id.assign("NVDEWYSZEJBDRDPERCGKUYITXXAVDCJUXKBYIHWRRZOBNAJLCPSKIQOSKYQHXFTRMMDJODWFLGWYGCPTVTIFRBOAKXMCHQICUELXGUBHLBPUNNQBGEPTASQBQVDGLFAAJACIWVJM");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 2340437347U;
    tmp_msg_0.id.assign("XCCOHRXGDLDSTFLSWDTHSYRJAMNAMJRFFIDCQYPBFLBOYXIQRHBCAVUVMOCYHBGQGASZVWGNKOBMIHHUGPMZWUNHXAUWQYLPLJTJIODUVQPUGZELCGNUVVKEN");
    tmp_msg_0.memento.assign("WGDSXBHKNZVBPLVYBVXBAYTKNKFBKTZOZAIHAPRNFLNUOZABLSMFHCZFPHQKNIUOTFCDSKVYAGZWMPVRYAQXQRLVYDTJUNOWIQYUWDLJVYBNWWCVXTCGYAULDIMNTYIGJQCINJVWKGAJHOXNMCHHEOSKEEPUIGKEARJVWSWOQXTERUFDZTMILMODGGJBICKXMOQBMJAPSEQWRHDSXFSESYHHCPGCFREDMQQUMITZJRBXLTEDZULSLJXF");
    tmp_msg_0.timeout = 53747U;
    tmp_msg_0.name.assign("IRFCRAEPHBYZBBVMSWEZRXOSGIUMZESUKBCIMDWOCTMVSFDPFHBNVLZXYGMESFUAXRPMJKXZIHYNXJMOSFNTOFIBRANHAJRIIASDENDBTZLVLYLDQULEKCTJNOYWBSFTMQKDHQANZDEUXHPDONMMHQQPKZAGVYCUPOPUGIHVGDYKFUKCXYXQJILQEWKGJVKGGGJHJVAZRQETPIWAWWX");
    tmp_msg_0.custom.assign("ELRLCOMRRBALUMYFRQLJUNOCUSNNLAQAWMDTRDMZSQDZIAYPBFDETPCRIZQUNLUKERBUJOGKJQHXVBEGITICCKXBVWBHLWJDHFBCKLKRZUUEYZUZXOTDHCXEDPXTAMKGILTGKPGTINQBLPGYGQOJIQKFTOZSVMUWKSTNAPXWVHMFSMAFGQGHHYEHSPBWISOJVSMYKYNAFOXNDJYPNWZH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PQNXUODWAJPDGQAMVYLVISGVSFKEZFZOCUH");

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
    msg.setTimeStamp(0.4585841487208794);
    msg.setSource(28086U);
    msg.setSourceEntity(198U);
    msg.setDestination(56844U);
    msg.setDestinationEntity(133U);
    msg.type = 76U;
    msg.dt = 156U;
    msg.op = 109U;
    msg.request_id = 35580U;
    msg.plan_id.assign("JZYOYCXOSABTFQFCNXAMAGMXIGOHSRXELOAXREMZZRXLEMPTIHYVHUQKQITKLBKNGXWDNUSIEPJWPVQJYFFJNSYSFDRVYCCLTKEVZMBDMOJZRDVTCAKKMZQUFUERGSGIQQTSJDHYYXAWFPKVWWYCGQKNIWIFHFNZEUPMEVBDBPUUPS");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.863613521784776;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MWKOFTRVPIT");

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
    msg.setTimeStamp(0.4689922494102715);
    msg.setSource(53223U);
    msg.setSourceEntity(17U);
    msg.setDestination(29555U);
    msg.setDestinationEntity(2U);
    msg.plan_count = 35099U;
    msg.plan_size = 929357483U;
    msg.change_time = 0.7247995599785921;
    msg.change_sid = 34211U;
    msg.change_sname.assign("BUOVMCYWNPBIFHFGFVLELFZDAJWUTLPLXVJPXVLARDHAJQJKOCDUXNQCXLJDMMZLJPCTFZEQSGFCUDZNTFQXMTWBNSWERHIHYIRRZNXGOVWSEUWBYGKRWAYXEROURRTKOTSBIHQVCIHLZMWDWUTOYLJYBGUTSJKZAAJPINRMSQIEKPLYYQPTAZAQGQCFSBUMHZPXNBTDBAKNIOKDIZCMCADEHPDXGWYUINOHKESECYVNVOVG");
    const char tmp_msg_0[] = {23, -44, -58, -6, -67, 54, 62, 84, 26, -32, -94, 88, -12, 112, 98, -49, 63, 68, -85, -68, 44, 3, 8, 76, -42, -65, 46, -41, 33, 97, 68, -125, -119, -34, 121, -105, 0, 108, 114, -5, -116, -62, 52, -17, 89, 48, 66, 87, 15, -96, 119, 54, 35, -5, -118, 46, -48, 118, -80, -15, -103, 16, -123, 5, 25, -31, -112, -88, -32, -107, -93, -8, -88, -11, -55, 55, -41, -102, 46, 48, -75, -104, -68, -31, 82, 89, 44, 53, -22, 35, -123, 90, -2, 79, -39, 84, 113, -101, 103, -22, 19, 65, 118, 92, -70, 27, -59, -78, 53, -59, -92, 35, 72, -25, -61, 72, 41, 12, 109, 12, -87, 46, -71, 75, -37, -16, -19, 76, 98, -29, -118, 30, 11, 29, -66, 126, -26, -61, -97, -106, 8, -20, 121, 119, 77, -79, -45, -108, -61, -35, -100, 107, 57, 7, 74, 15, 63, -128, -34, 115, 50, -34, 89, 117, 38, 0, -127, 13, 79, 123, -82, 92, 17, -64, -7, 107, 98, -4, 5, 14, 55, -36, 106, 74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DOINTETGJMNCFTQOVICVWVMBXUCVUFUNHMZFKTSCEBEBOBPRWYYWPZSPGZRYAMVWKSALRLMUNCSIXYQQXHEGQQLDTKGHXMUBJYUXDWBYKMJFSLJZXLAPOYSGVZWUOYIOCZYWDZWBGAQWTT");
    tmp_msg_1.plan_size = 44455U;
    tmp_msg_1.change_time = 0.3513084831652191;
    tmp_msg_1.change_sid = 1795U;
    tmp_msg_1.change_sname.assign("IMEBEFMPULAXQENJCCIZIHEGJOQRCXVCQSRAFTOEUGAQKPPWASSICTFKUGFJWPPBYHLUQXJOCV");
    const char tmp_tmp_msg_1_0[] = {-28, 46, -17, 60, 32, 34, -28, -7, -91, -38, -17, 123, 79, 75, -115, 69, 118, -66, -56, -49, 70, -39, 76, -15, 2, 55, -113, -70, 54, -90, 11, -11, 119, -86, 22, -63, -71, 57, -127, -42, 22, -9, -47, -120, 74, 41, 60, 9, 64, -103, 115, -102, -44, -75, -9, 72, -124, 88, 65, -64, -47, 33, -55, -59, -126, 17, 32, 57, -60, -28, -109, 89, -120, -58, 69, 66, 124, 123, 2, 117, 40, 33, -82, 82, -114, -60, -96, -47, 117, -23, 93, 59, -116, -82, -34, 11, -3, 13, 75, 7, 92, -43, -128, 46, 106, 90, 57, -72, 81, -102, -21, -28, -24, -94, -101, -103, 87, -119, 43, 24, 99, -127, 116, 45, -92, -103, 8, -106, 123, 123, -45, 27, -4, 101, -26, -126, 95, -94, -103, -94, -39, -105, -46, -89, 65, -5, -124, -20, -23, 87, 16, -107, -97, -23, 112, -64, 42, 17, 122, -126, -117, -93, -125, -63, -63};
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
    msg.setTimeStamp(0.6664364534774212);
    msg.setSource(57657U);
    msg.setSourceEntity(153U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 31000U;
    msg.plan_size = 4158015824U;
    msg.change_time = 0.7253465885311797;
    msg.change_sid = 61240U;
    msg.change_sname.assign("MTZRTUAKHVNZMLMRWIAMSAWX");
    const char tmp_msg_0[] = {124, -112, -88, -18, 9, 8, -17, -48, -82, 71, 97, -77, 89, -35, 124, 30, 40, 65, 12, 79, -110, -51, 37, -20, -69, -44, 12, -90, 65, 10, -1, 118, -88, -81, -91, 48, 18, -22, 83, 48, 87, 35, 69, -78, 33, 17, 121, 103, 96, 19, 108, -72, 57, -69, -121, -68, 96, 78, 30, 95, 116, 2, 37, -94, 29, -70, 15, 56, 111, 83, -109, -5, -6, -37, 84, 23, 109, 30, -40, 6, -102, -54, 117, -100, -67, -71, -92, 91, 91, -27, 32, -110, -60, 78};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PPYWHCXLWADVYTOKERPDLAOWACCCYLFCFYYMZAKUFPGIXGQOINPGRDMUTZQPSUUXJQLYGVBSGREWMXVNEISUZVOEBNDKKJMWPODQTTSEZNDWCFIPJYLNZGJYDMXGJZUHQJKXCSBLEPNFV");
    tmp_msg_1.plan_size = 25935U;
    tmp_msg_1.change_time = 0.08085318606958858;
    tmp_msg_1.change_sid = 20010U;
    tmp_msg_1.change_sname.assign("YCCKKZJWFGLZDLFUAUXELUWFMSQSVSZIGZMHIOBDJBWKYXJYLVCPIDSIATPJSLVSCIJNNRQATOMWPXGNXAYZRPEXHJQOIUELAOMWCVWDIAZTVUVQRLOVCHUBGWECRTDZMROZPZXJPEGNNREQGNHSALKTQSDMYFDFPRISDKF");
    const char tmp_tmp_msg_1_0[] = {-62, -110, -118, -110, 106, -46, -97, -34, 95, -113, 43, -82, 89, -83, -62, -43, -94, 102, 44, -116, -19, -116, 76, 64, 121, -12, 7, 122, -49, 120, -28, 126, 1, -92, 22, -9, -70, 51, -80, 97, -54, 27, 103, -49, -20, 14, 70, 112, 65, -28, 20, 14, -61, -15, 117, -120, 102, 3, 78, -38, -57, -118, -15, -83, 16, 83, 64, 35, -103, 77, -70, -60, 17, 68, -74, -112, -120, -95, -48, -114, 106, 14, 46, 81, 64, -31, -46, 37, -62, 88, -47, 13, 41, 104, -80, -72, 52, 30, -27, 46, 103, -120, -126, -59, 86, -26, -68, -77, 68, -58, 22, -92, 113, -48, -92, -24, -19, 84, -80, 69, -106, 63, 22, -123, -98, -24, 92, -20, -122, -53, -47, -64, -22, -103, 5, -103, -63, 111, -125, 120, -67, 31, -102, -43, -28, 74, 35, 40, 71, 17, 91, 26, -55, -111, 97, 61, 98, -29, 92, 2, -20, -76, 74, -123, 79, -74, 124, -112, -105, -63, 25, 37, -53, 39, -21, -43, 46, 28, 110, -23, 19, 46, 109, 8, 87, 121, -31, -16, -112, -69};
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
    msg.setTimeStamp(0.8616308058357328);
    msg.setSource(54216U);
    msg.setSourceEntity(0U);
    msg.setDestination(29513U);
    msg.setDestinationEntity(227U);
    msg.plan_count = 54522U;
    msg.plan_size = 2552644298U;
    msg.change_time = 0.16707409277830132;
    msg.change_sid = 21497U;
    msg.change_sname.assign("VKHGBUEDAAAIOREBMCFJCIXSWSJLWGLZSFVETGCPDQVDLLYRIZGNSLUAOHPQJQDZDLSKAKUGNTXOSYHNRUXRWHOXCJBYFMBQDRESQJOTXCOOM");
    const char tmp_msg_0[] = {64, 62, -68, 37, -92, 83, -24, 104, -61, -74, -11, 105, 64, -91, 45, 90, 46, 109, 85, 28, -35, 96, 93, -48, -53, -24, 106, -51, -65, 11, 103, -17, 107, -84, 74, 112, -107, -125, -70, -54, -91, 69, -88, 16, -91, -2, 60, -50, -99, -123, -126, -30, -103, -102, -26, 115, 7, -60, -25, 98, -56, 19, -43, -83, -30, -82, -80, 27, -72, -62, -11, 91, 114, -6, -47, -114, -101, -32, -110, -56, -6, 46, -51, -59, -63, -64, 31, 99, 68, -98, 34, -90, 64, -88, -15, -40, 76, -97, -94, 66, 40, 26, 13, -10, -119, 33, -49, 14, 41, -87, -21, 48, -104};
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
    msg.setTimeStamp(0.651449833524143);
    msg.setSource(54862U);
    msg.setSourceEntity(106U);
    msg.setDestination(12004U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("ZGSHMZIHRJRHQGZWABQSWNUNLFUTDUUHCYHKFUPCCNWLAWKHLHOGZESYZYDKIVLODNGTIWAEJDYAVQMPYZLZWPJWRVJEDOEQOTGQNOCBVFSDYXUXPWGLVBMSLAPXXXCUMINICMEJBOIFPXFIQ");
    msg.plan_size = 29377U;
    msg.change_time = 0.4496212157612782;
    msg.change_sid = 28937U;
    msg.change_sname.assign("NKYFLMWIFEPHOQZEYQTNVKOQETZMCRUAHEFZJUSNGRNXRVWLGNHMYCEZBKZESHDMBPBYAGFOPNWGOFNFBCTQWBXSRUZTJAXXJHLLQUYK");
    const char tmp_msg_0[] = {-121, -60, 30, 77, -64, 73, -119, 74, 38, 73, -108, -52, 58, -89, -39, -24, 73, 121, -83, -84, 31, -114, 89, 0, 51, -84, -6, 99, 8, 114, -117, -18, -17, -108, 118, -37, -79, 13, -21, 60, -127, 67, 38, -15, 43, 27, -76, 120, 75, -87, -115, -106, -122, -128, 120, 67, -54, -27, 125, 38, -51, -86, 122, -35, -51, 34, 85, 73, -13, -45, 25, 18, 37, 77, 16, -115, 54, -114};
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
    msg.setTimeStamp(0.9057977957389703);
    msg.setSource(36794U);
    msg.setSourceEntity(201U);
    msg.setDestination(43995U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("KZTQEXHLICSVKSSPYVUKYULVVCJMYEBSGLWDHNTBDPFAULONJCGMRKKXZGULORWFRWJGJDCJENIRMDBMWEPKHAWUOKFNLBWQCFZHQSPXOJJXQ");
    msg.plan_size = 7509U;
    msg.change_time = 0.4430375915920266;
    msg.change_sid = 52011U;
    msg.change_sname.assign("HULKIEQOILSKRDDWEEEQQUCPPFOXSQVODLLBBNNXWTEGSIPQHGCJMKUKDJYBMYGCZYNGSTHAMRXULHMWVVCKYDANXOBQKCMZBCBRYMZYOBGFVWGKJDTCHOTREWUEMOMRDG");
    const char tmp_msg_0[] = {-72, -68, -17, -11, -4, 15, -8, 87, 26, -116, 16, -46, 7, -62, 17, 65, -93, -36, 20, -79, -14, 48, -31, -50, -62, -59, -76, 118, -24, -58, 22, -124, -75, -75, 78, 13, 114, 119, -82, -91, -90, -111, -15, 51, 86, 19, -119, -85, 21, -91, 71, 100, -6, -33, -74, -9, 17, 53, -102, 83, -125, 91, -105, -34, -105, -27, -5, -28, 63, -73, 25, -65, -121, 102, 118, -6, -105, -95, -80, -36, 0, 123, -92, -104, -7, -116, 3, 21, -22, 70, -88, 101, 126, 113, 107, 40, 99, 112, -14, -28, 123, 125, 27, 92, 42, 116, -65, 56, 126, -31, -126, -45, 121, 76, -30, -19, 126, 38, -58, 31, 0, -2, 70, -99, 100, -45, -40, -128, 2, 119, 48, 117, -56, -68, 101, 51, -99, -45, 89, -124, -95, 115, -115, 126, -67, -121, -91, -85, 6, 84, -39, -9, -13, 65, -119, 52, -50, -126, 117, -66, -59, 13, 122, -100, 26, 123, 1, -100, -80, -55, -58, 126, 111, -25, 5, -128, -79, -65, 125, 117, -98, -17, -27, -97, 40, 88, -50, 41, -128, -112, 121, -56, -88, -56, 22, -83, 16, -115, 34, -84, -115, 85, -3, -90, 114, 91, -66, 93, 15, 115, -59, -125, -115, 57, 52, 14, 47, -38, 12, 102, -127, 58, -128};
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
    msg.setTimeStamp(0.15674992229729023);
    msg.setSource(27451U);
    msg.setSourceEntity(218U);
    msg.setDestination(23152U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("BYPVMHYXRBACCQCOLGDKOLJBEKZKHSJQRLMHQDVGJJISGWKWKCNEUHASZZGNNZIPSGBHVJZVSRPKEZUPTQTYGEQZMRSFPANLCTEBOLODFQLXOMJAXBSVFNBCDJKJWHEXMYQPAFNTZOOOMRJHMRMHEXWWPFVHUGIIALAGBCWMQLIFDPQYCNTNUFUUGATVUKNNYUSOPXEIRFBFSKKDYRW");
    msg.plan_size = 13037U;
    msg.change_time = 0.1113186132824392;
    msg.change_sid = 61601U;
    msg.change_sname.assign("YHVKMBZAGRIAVMKUNQNKEUOOIXBBUYUMGKBQUADWLSGRWLXUQZLWOEIFCZ");
    const char tmp_msg_0[] = {-61, 74, 110, -34, -2, -25, -31, -43, 7, -57, 89, 37, -23, -37, -31, -20, -46, -8, -16, -17, 61, -68, -116, -107, 75, -105, 29, -48, 49, -37, 64};
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
    msg.setTimeStamp(0.30382575899447906);
    msg.setSource(63288U);
    msg.setSourceEntity(228U);
    msg.setDestination(9442U);
    msg.setDestinationEntity(91U);
    msg.type = 239U;
    msg.op = 144U;
    msg.request_id = 49892U;
    msg.plan_id.assign("QYNCJRZNNJMVNIBCOVACYGQLJMBJJKUFPYTSTRFGENRXVTMWBXTWXTMWGNJGQFRAQKMHSOFRKJLNZALFGCCKDYVORFDHALZQUOGNLMBPELIGWXZABMWDIEGNPSASHZHS");
    msg.flags = 14142U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 59419U;
    tmp_msg_0.lat = 0.5184748755239773;
    tmp_msg_0.lon = 0.7648395052073426;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.z = 0.35115856328212147;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GEJQQCOYINVDXGGBWSHJPAGMFEWHPQJIYKMIAHZHRURYQGADTQESPXYKBDYGVBOKZJUQMLMRMBLDWVOPLHQUWETRDVXTQCWNJAZTTGLRXZKCBCSAVAKXYZJKWUWLTIWLZJUGYANAJFQISXCELTDZMFKEDUXQRPILJNKBMHMHODNDVPZFNLCXCCFAOOPVUMBCEWFKPOAYSTBZLFUVX");

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
    msg.setTimeStamp(0.8425162662977296);
    msg.setSource(40316U);
    msg.setSourceEntity(73U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(211U);
    msg.type = 156U;
    msg.op = 167U;
    msg.request_id = 44268U;
    msg.plan_id.assign("LSETHTEQVUHRORUQYOEYVNMMTPXUYFHKAHRVJABYWJSFKSTWHAACFCBUDVDMMALSXNGZDMFVTRCDOZKAZMSELUIMRGZYLTFLWGCIIENOMXGZNPYPJTHBGDSJVHVCENXPLTIPBHXWJBQJDIEGDBCNYGOKGZQOJNXUYPIPACAWUWKJRZLTQDNAEWWOQPORQXIHKWLGVFQZBKQNRQOLBUFCOPMZGIYBJFYS");
    msg.flags = 42877U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.plan_ref = 1963519192U;
    tmp_msg_0.id.assign("BETDEXGCWVZSBEXRNMCVPEYQNJSBXOCIJRHIPDVUKWDBKGKPYRGRZKFYGTDNQBPMNHUBAVKSWHISSGLHECLLZIUMQDSAIWFPOATPNTUYIQPHYZUOTOBVGATITTXEOQXLMWHKIJRAHOCLFRHFMJASJNUQMLNEDSZJZKGCEMVIWXBKJOPHAQURNXLVDTQZXNAFDYYVWYFCENTPMKBGHQJEADFUSVRRYUZMRZYWG");
    tmp_msg_0.memento.assign("UNPSRDEIJCXGUHZTTTZRTPWBBDTAWJQFFLHRNCOBZLHGIQKXZUIESDBESBGLHZOQEMCX");
    tmp_msg_0.lat = 0.8579383678708216;
    tmp_msg_0.lon = 0.7635365415957489;
    tmp_msg_0.speed = 0.9637275739895583;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.duration = 30776U;
    tmp_msg_0.sys_a = 21168U;
    tmp_msg_0.sys_b = 56602U;
    tmp_msg_0.move_threshold = 0.6573857209260469;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LVSPDZFPHJYBXXXLOZMOTDGZQBVCZGDQOSBFNBVDFKNQYQNRZTGKWDPELRKESLNUQPGXJIDRPNGBTGPRPONHHWKEQSQXLVIJCBAXHMFZGWDCUVCWOBNFAESMDXMBJKKEAINSFPHZFAPTTYKXVRVINLRAYZZIGKTABMYTMYJCUFGESJLWELML");

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
    msg.setTimeStamp(0.20960098895965562);
    msg.setSource(51569U);
    msg.setSourceEntity(118U);
    msg.setDestination(45537U);
    msg.setDestinationEntity(120U);
    msg.type = 13U;
    msg.op = 218U;
    msg.request_id = 62824U;
    msg.plan_id.assign("WCDQQVXFTPXUNBSRUAEORDWNNPERVYJLDVPZHWSKIDOYVSGOTRNCTUBMNFAXQMCWIIHNPDKOCREKBMJGQUJHJADKQUYHB");
    msg.flags = 64783U;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.9940380068087677;
    tmp_msg_0.converg = 0.5529411943924474;
    tmp_msg_0.turbulence = 0.34355393670412426;
    tmp_msg_0.possimmon = 38U;
    tmp_msg_0.commmon = 234U;
    tmp_msg_0.convergmon = 85U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MAJZLOPXYHPHGAFXXFTKBRJFKLBBIFCPNQMEZUZIEYZDGGLCSWNJIZOKEXORNWKMXDBYENVIONXBPJSDIRKLRAZSOSUYPSGQNYMNPGXFIEDUFKTYULWTYHEQJYCHALIUWKIVSNPSCTKAZRQEGCADFJQABMHIRGVOGUQRIVAWOXDWOQQBCF");

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
    msg.setTimeStamp(0.20774994063037622);
    msg.setSource(34964U);
    msg.setSourceEntity(6U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(73U);
    msg.state = 43U;
    msg.plan_id.assign("QVKRLJAVSCRHAMHSQGAZJUIPCOYLWXUXPQFKYZVKUDPVKDIBXAESZZITXVXEVKLDDHPPBWVBFYWSDLYVXCUEZRCRGIBJSUFNBSKOFNXISQOFGTSRGZRRQWIJHZWJFWHGYKNNFNZIIMPYMWCGJULBGMMTAHPMBJCDBAQHUBXFGEHMATRQWXVNPZYODOMUACTUBODPGJDWU");
    msg.plan_eta = -628721217;
    msg.plan_progress = 0.6959573918818303;
    msg.man_id.assign("UQGJAUPSOMJXPYPBREUSHBICMNFBDNTRWSYEGCKFJRKQGDRFZNWTBDGXEVTGIGFGN");
    msg.man_type = 63920U;
    msg.man_eta = -845260450;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.7892503189838489);
    msg.setSource(62541U);
    msg.setSourceEntity(229U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(64U);
    msg.state = 154U;
    msg.plan_id.assign("ANWMRJMWXLQTWDDXRFNNUDSMUNCOUGOSKZLWEDFCGEZUBSHWHLGMUEBVXSCQRPZZRQIWKLVEBVHZJUKZHMMUQFSQORPDXMVVPUTAIZPHHHIGFFUCIHFIUBVNGJTZJOWSJKQQOTVKJXYHYNBLYFXXXPRIPICOLQKPEGYWGPYZAYJEJPBDTDRMEIOCGXETKCCAAKVNSYSEDLDYAVNWDGRASMLF");
    msg.plan_eta = -936376057;
    msg.plan_progress = 0.5422018352210827;
    msg.man_id.assign("KKITJJWDBTAYERNHLSHPGJRWBZNCUTKFEQWSDNQHDDRIVNJEDPAGLMZLCATEILKIBWIMNPKGZRFVGWQRUQPRQBEVKCTXUSOXXOLHYSIMIASZYVXGGZQKQFSJNUHIPYYIJJSTLYVVDMCMBFGEWZUQABNCXCTCPKVGZVARHFAZFOPWKGHEPCDDJUBFQHOANEUZQAHMOXPBXSYOOCNJNFBYVPRSMJMMR");
    msg.man_type = 32372U;
    msg.man_eta = 2100147210;
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
    msg.setTimeStamp(0.13612046854776816);
    msg.setSource(44393U);
    msg.setSourceEntity(57U);
    msg.setDestination(39228U);
    msg.setDestinationEntity(31U);
    msg.state = 244U;
    msg.plan_id.assign("ZQDOWFAOWPBUFGHAMYVVSKDNGXOGTEKBZMCAAHDSHJSJDMXXLKPFMKOYZCYXALUUPBNBARPQLYFQWNUGCLQVPRKLHMELEETEXYRWGXMZQQTFAGRLXFHTGNNPMZL");
    msg.plan_eta = 451442291;
    msg.plan_progress = 0.03511473833301981;
    msg.man_id.assign("BZUVWVTGQTHQHLHADATZCJXGWSZOEWTPVMKIIQEIBKNFNPKLJDP");
    msg.man_type = 25956U;
    msg.man_eta = 2029067164;
    msg.last_outcome = 133U;

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
    msg.setTimeStamp(0.5056547011632879);
    msg.setSource(45731U);
    msg.setSourceEntity(128U);
    msg.setDestination(24863U);
    msg.setDestinationEntity(174U);
    msg.name.assign("BVMTMFUXLLNXIBPLEWJWXEJWNLCGICZCQKDFBUGSVOMEQLAOKLDVHAJNUIEUNPLGTGZOPYABOAGQCNSJCTXSDLFOYPVZIIVZSTVJHWEYVCTPXIWQQHLTZLKFMRAKPBROUOUDXRYYNEHMDEQUJUYSTRJWWGNIRGKOVDKJIBFZRNUZEGKMBIAEA");
    msg.value.assign("LCTVQMBKPJSOAZZTHRUFEKLCDCZFKIYIGYTDTWUBHFSMIOGCHJBLOBFWXICOURCTZBAPBVZRVETOODMMPFWNDNZUQNLMQAHTSTNGUAMFQYZIBQFHKLEYPTOHDGZSUEERVCNAEPWVJAEWVWYC");
    msg.type = 88U;
    msg.access = 81U;

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
    msg.setTimeStamp(0.39295839910535757);
    msg.setSource(3690U);
    msg.setSourceEntity(20U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(102U);
    msg.name.assign("UTGWEPTMVEOPREEMWFWKGCRBDISZOBEAPLXNRKTUKIIDIKADYYJHBMYNNJGVPGBFYUDCEUGXDQWXFNBDOLFXKPSAARBXXVPGKMNELOTQHOJQJFACTXTIIJTORQIHBOSNTJGELVUIHHHDYSCILMLEMTWWFFCHZXOHYCJLYXSAQQEQCPSUBBOKHDVVRSCBW");
    msg.value.assign("TROAMIJSUGBMAOLACDWERKNKODKVHWPXXGMTULVHUCRPPMSBDXBLJBQOHPNDQYQHIYJYZVDHNCIOYDMSECF");
    msg.type = 190U;
    msg.access = 212U;

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
    msg.setTimeStamp(0.005206177546140944);
    msg.setSource(44291U);
    msg.setSourceEntity(143U);
    msg.setDestination(1439U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QIMHFDWEVLKGLTHBJPVUDVUVDBLEGATBQXRLMJLOCQCYTGSHTLFSZWFPKXUZALBXZPEUPSAGRIBPESFNHDTORJXZLBRZHMUFHIKJJJRWYMXJCLNNQRPKPDGFFVAGHZGYJAREQMYBBPVDOXUGNOCBVWOHNBSUYINZWYMWZGTWARKXKYIQCCJCOEFSPIZAYVDTESUCMONXUKLCMAPVETGEIWDTNIXQNFIEKZTQDQOQSADWYJMSOVKYOH");
    msg.value.assign("NSHXZQHHDNOULMKUGLIEBQZONBKBOAJDTLKBPPYIDDSRAUMYGHMOCGPHHOYWASLVMJHSYLMFVDDBCQVUKDRCYEITWIUPSNYFGFRXERFBUMTCAVCANAJTJCFTVKCJECJHNPGSRRUWQPWKWPOWBXLDCFKGXCNTTRXIPEKQOQFXVQETIJSWNUEPKIGGZJWELZNRBWMDKXYAZLYAZJLRTQASBMQTBIFFSIRMGEZVWOMHXLHUOYZIQZXGV");
    msg.type = 157U;
    msg.access = 235U;

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
    msg.setTimeStamp(0.37038288786691187);
    msg.setSource(62140U);
    msg.setSourceEntity(94U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(196U);
    msg.cmd = 187U;
    msg.op = 126U;
    msg.plan_id.assign("WGPTCCEJZLZHJWDDQOVCBDANTUVJWAEHDRHZSREDDPVBKJFGAIKZYTYRWPSMBLLATBVGECZVQWNZCKOPVLDOYAIMWIGYCGQTPPXBZCIUUEOJXKCBXFPJRMSFZBUWXVYNKOHBETMKUQGUPVHYHHMDSKPZQESWUSFKOL");
    msg.params.assign("YJNGVLPTFYKADKUZZSPBDHMYBDAFSMCVHVQCTKZJLIDCVEGLZVHPNLEUHBEYGDUCCXXVMNCQFXAUVOOYRHEITIIPHSKSUQFGHW");

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
    msg.setTimeStamp(0.5628071142568082);
    msg.setSource(54367U);
    msg.setSourceEntity(208U);
    msg.setDestination(10189U);
    msg.setDestinationEntity(70U);
    msg.cmd = 39U;
    msg.op = 84U;
    msg.plan_id.assign("CCGCNTYEZHUIYLYTJEKAAUGUOPHCOULZDRGVAGKEQZNGBBSYRKLBGFEVYH");
    msg.params.assign("IDNTOKYFOBTNAWBFKFCXNJBSGLKZSWCTNSLHHCGTPRGLIULUZFRGEKYBFRZWFPJIKDSPITALQUERHEXUJQKDCYRUPUZHTEDPFHCROGPPQUMCCXIPAMHEZQSOJJYQVLNDKWMXKVUEWMGSWITZDYBGJNGRCDZVVFTOEQWRSOKMVXRO");

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
    msg.setTimeStamp(0.46254448182192087);
    msg.setSource(18382U);
    msg.setSourceEntity(41U);
    msg.setDestination(4674U);
    msg.setDestinationEntity(254U);
    msg.cmd = 185U;
    msg.op = 139U;
    msg.plan_id.assign("EZPWZVEJPHCRQZKBZMKCKLROUTWIDQDQFOCLLGXCAKTLYAFFMJOOCDNLBJIWMJVQEWJNRLWHKUQBPKGPVUGHGBEQXDZSVSVPCUZKYYLSAZIGHZVTFXYQFJSESSRDOKIFANMFTEHIRYDWMRBHYMULNOPIJTRFX");
    msg.params.assign("VTWGNSUOHZHOPHJNRXGMQRFCUMUZIGLPLRLWQHRLKXSOZPLEGOYUEETIBVZQSLIOKHLSBVFQAXMCPROTOKQEHCFSIFDXHXTYECFAZZB");

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
    msg.setTimeStamp(0.528325189641785);
    msg.setSource(34160U);
    msg.setSourceEntity(142U);
    msg.setDestination(65381U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("WBIPMUBBECQIIKXMFWAUGOVSBZCITZUMLEEQOSPERTQPDUYZ");
    msg.op = 230U;
    msg.lat = 0.5415471381346593;
    msg.lon = 0.8330275495209827;
    msg.height = 0.6053631165349433;
    msg.x = 0.7772057733212493;
    msg.y = 0.6508393371950565;
    msg.z = 0.9468210461486458;
    msg.phi = 0.4870392734639435;
    msg.theta = 0.511405491965725;
    msg.psi = 0.9849825056827982;
    msg.vx = 0.2596795751512154;
    msg.vy = 0.9557015772626776;
    msg.vz = 0.11875985130721556;
    msg.p = 0.2600357893228057;
    msg.q = 0.8467521713556464;
    msg.r = 0.07080973157222459;
    msg.svx = 0.2216625990196226;
    msg.svy = 0.32654153500049377;
    msg.svz = 0.9448298905400302;

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
    msg.setTimeStamp(0.8760707809736028);
    msg.setSource(53722U);
    msg.setSourceEntity(59U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("AGELXWMYVBBETJRSELSQLKUWKJKEOMBHBAFVWKIXMSMISQUNSCGPPCFGFPTCNZOAKGKMCRLZBFRPASAQNQNQZMIXFWNNVIZWTYPJYYVPUXXPBJAOGHEYURUOYDYDRZKVVWHZNHJDEJNZQTNPPQLRDPYXCLHAAJFBFXUGGXTKZZEHFDCBJ");
    msg.op = 184U;
    msg.lat = 0.26420388275807083;
    msg.lon = 0.3242030683398752;
    msg.height = 0.4564299767188541;
    msg.x = 0.07840000862708674;
    msg.y = 0.963551519447507;
    msg.z = 0.8782627192309757;
    msg.phi = 0.9029095045149417;
    msg.theta = 0.3297717429421477;
    msg.psi = 0.9361478891072228;
    msg.vx = 0.75829898019852;
    msg.vy = 0.4054859082359956;
    msg.vz = 0.053937721304708974;
    msg.p = 0.4662264753843751;
    msg.q = 0.8011392717665798;
    msg.r = 0.07485681188491378;
    msg.svx = 0.29018665606488914;
    msg.svy = 0.8260921617880194;
    msg.svz = 0.5816634963944264;

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
    msg.setTimeStamp(0.04534321384000506);
    msg.setSource(57667U);
    msg.setSourceEntity(80U);
    msg.setDestination(4676U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("IBIWKDLSVBRONCTLMQOMJUHHYRKVVXFDAVKKNLAVPTAOYGJIOGAVSWRIREOSSQSXXNCSIWJECCYETMAGIUZQSRMFFIJVPTYZQZUBMPAQNPXDHDCRTNPNYONHAJWCIUKVFY");
    msg.op = 159U;
    msg.lat = 0.39853607240183764;
    msg.lon = 0.31544302011930647;
    msg.height = 0.6485602232536232;
    msg.x = 0.41049279430054464;
    msg.y = 0.5252161934533827;
    msg.z = 0.9502421808346386;
    msg.phi = 0.13292407077679924;
    msg.theta = 0.7827822293486305;
    msg.psi = 0.12019928603450392;
    msg.vx = 0.1100066896051547;
    msg.vy = 0.21671562734457062;
    msg.vz = 0.33231071063910267;
    msg.p = 0.46302966677684987;
    msg.q = 0.5488719962052689;
    msg.r = 0.6288742926545076;
    msg.svx = 0.22711223296881822;
    msg.svy = 0.13991671797887673;
    msg.svz = 0.02708824824986733;

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
    msg.setTimeStamp(0.061210665073096804);
    msg.setSource(15557U);
    msg.setSourceEntity(139U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("CBXGWMRVASNTPDEDNQSJUHRICGXUTPGAABFYFFSQVOOCUEGUIMWZBTZBCRVYRGDNHBIMXOGGTSQAURZWPOARRTCCDGZTRHLQBEQYFWELEBMCXKLBIOGHPFHKYJEJPLUDSQLKAXVFISZJUMLEJYAKNJVQWKTVDXKSUMJHZBPPNZVBVDDMFTQFPT");
    msg.type = 245U;
    msg.properties = 132U;
    msg.durations.assign("FTIKZPKRUIGVSHLRKVPNXNCEONHRDILESNDZQIJWTCIFMULDPFKHUYOFYWDOWEBOBLPJYHBMXMDEKLSCGXYZNVSGPOXMSRHSBWUGXA");
    msg.distances.assign("ICTTOPQUKNASNCXWGOMGNYJACUXNHHBQACZABETOKBYHDJDZASKJFKXRRHFLDJGETJIXOLLBEWLR");
    msg.actions.assign("SXJLMGLZROSSGTGLPRJIVSKPONHTISTRVWXVNXMIBQSAFALWAOPKGBFTBKAMVMPMNRZUFBOUQWEQZGGZLRLAHOYXMRGOBFDOCHLMQHANCTCVVCPJDKXCZYOPDVILXAGHKZHVJWWJZZVYREUYSKKKUUNJIJCFYEUHIFDWAMTTNDEPYJDHDWCOIKNXCREJEEPXBQM");
    msg.fuel.assign("LBJCMFYVBRXRXOIIORSEYNAJSAKWVLLUXEKRYPQRDTMDWRYETCGBKQFWKMGSSOCHEOYCYQJRZONZAGHAMZGJVMDCYNMPWILULPJYGVDIQCDZBZOEZHYCKBXNUTRTOLUBHMIWAQWTAZQKDFDJRIKNAL");

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
    msg.setTimeStamp(0.7654863221357207);
    msg.setSource(6468U);
    msg.setSourceEntity(224U);
    msg.setDestination(59465U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("TAPAXSBIJYAFZKMYWCWPYEPVNZHXNIVBVEQMKLHOKLOSLQCNIBTOMOYHQPFLRRNHAATHKXWXWYCKVBBDWRIGZVEQTAPGEIUFRWQUBBLQOUZWQSPSDVEAEKDXGJYIUE");
    msg.type = 137U;
    msg.properties = 153U;
    msg.durations.assign("MRBYNFLACNVZYJSGSGMXFPMMLUVEDHYYYSAAAMGPQFSPEJHOTRRXDCDWGZMKTJOEWOOWNJZBIBAMETCXTUIDEULLJFOCLNBRKHAIXSHWRNKLPSGWQHCYAYCKKQCVYUBKNFSIXKUXCDITLOBVEPGHZIVBUJRWHVAZPQEEGQQESSFZRFUOTJXDWWOMPHHJNCJOIELQNRQZTGXCBDQSAHUPKZQYI");
    msg.distances.assign("DQFOIEZAIREQEUTSTCUUPRTBZZXKMWSNZGVXJJYUVLUTISSNYMZQWELHIKJPLJAYGACCAVGSBFDOFSNVZTMEAGIVFDXJUGDQYDOWVDEZPHVGQSNHLPUXXWRLTMIWKHWRQHVZRDRSTFIDVNXWOXXWGPKORSFURBSQLWLHHRMXNCRDTOOLAHFICYONAQE");
    msg.actions.assign("UCQSKAWBFORHJACOTPYZGIUXFWQHMQSFFIGTNNEWUXYLOSROSQVRSNUADYAQTRCJSFDBJWOCJDVGKKBLZUBVAKPJXLLBOAQIZJELRIMPOHXRD");
    msg.fuel.assign("SNOAZMUHWYWAVUPQBZYJEPIWXKZNYXPGNOMDXRBYUTDKTAUYASPNCPYBBLAOZTQSJGVRKCGTGVWHPJTGUEZOFSH");

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
    msg.setTimeStamp(0.6430027803780061);
    msg.setSource(22619U);
    msg.setSourceEntity(224U);
    msg.setDestination(34706U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("CSNAGGCMHVCGUGUADSLTGECEFNTLLBBPBBWRNNERKZYIIGQXBBEOHIQHVAYWGMFDUUEJCKIIGHVWKYMSQYHJLWFMSSJPBXLTFVXTCEKO");
    msg.type = 242U;
    msg.properties = 231U;
    msg.durations.assign("KWPGDBVFEUHPDMBMMNWIETRLXZNCTWOZFIIIZHZRUKAWRPYDUMDNJTMYZPPKEKGQMJPNDXDVLVUXFJSXAOWKXBIQHIBCFBDFHU");
    msg.distances.assign("BOYILBKJXUDIGVZRFOKTHOBNCGKHETIBXGEMHJCQURISEYLRQBHYAMMQZJXJGREFJQAYHFHATYYGTKARIYNSNL");
    msg.actions.assign("DZXFIODGJGSGRCETABNIAOFPSVPREBWLIYVCJYWQOTAKYZU");
    msg.fuel.assign("PIJAQCBVMHQXTWQNHTRDOWUCAPVFOMLZFONPRDKWGVRYEUKZPMDLMAZEGXYFGOSUGQXVPBJJKTMQLMMPBSSJW");

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
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.256580205507286);
    msg.setSource(44797U);
    msg.setSourceEntity(251U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(177U);
    msg.id.assign("SDGGYPITBUSZQAQCKNAUOIWXEQRHLBWDFOONXALQHJMOOLOWZRTFATYPLNCVPFDLEQJNBGCYGSICKNWTDFK");
    msg.plan_id.assign("QYJOMFVEBFAZVCIAQMVRVRVUDZUXBPCXWKPAKZAYSETUNQAIYVIGGBHWEWQLYEHLWEVUTLPXRKBZQNLMZVEESTSYLBXHJRWLASDSHKGGTQJDDUMFNETIGXHZJCARTZTYLCJNSGMUFFUZTBOISYFRGXISLHLYBUXKOHOHQKMMNPOMIQCDPDJIKNACWDCUMRSWKPRGOYBIHFXZACNTJPGVN");
    msg.maneuver_id.assign("BSOQLHWTFZKUNDJZFIPBRVWTNJMSKHAFVWGDMIWEFBYEGLIHJDEOPYEXYADQNDCATAJEOMKHXLQMGSURGZWAJJTJBISCC");
    msg.memento.assign("VBBNLYCKVXWCEDIUUGMJSFKLMTZTOHCFWAGWNJEWSHLYOVZVFIWXDGVMLMXTPSOKSXQENXOJODJQRAXHGRKOWBDLHYASDBXUNUHZKJGVTYDVRVYSPTQFRKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.018089705167796954);
    msg.setSource(40278U);
    msg.setSourceEntity(191U);
    msg.setDestination(48883U);
    msg.setDestinationEntity(155U);
    msg.id.assign("QDWBJHCETLGYFCYLEVSDMKKCQBVDMQSPDFFTNRUWIZOGV");
    msg.plan_id.assign("XWEPBFMHNRLNEDECHSHZOCAEFRXFYQIZRJVEFYNGPCDASDWTPXMHHLFTPYRCIDIIXMKYLINPZJADKPXSZNRIMXWQUTSPHLYSJFDZZDKYXWKYUKDTZBPYYVJOJUCCUTAFBQFMNAOBJLWSRWUQAGMTTXITOAHLBXIELSKEQUNFROMOYEIOGMNGPCBBGFIMQGZKAJGKDJGVOUAUBGKELQJBQPRCLHS");
    msg.maneuver_id.assign("JYEWYOUTASMOTRVXGGXHKECBPWFNAGDT");
    msg.memento.assign("SFRUSAZGHENNZPWFYYLMTIDENYKXWJWUEYZHEBCBGJTCVBWOTRTJALJZFMXKFJODXTCAOEDFRRYDCNIHMHTDLQBOOSBBVQZPKSLLUXGCWGXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.33509498310485486);
    msg.setSource(21552U);
    msg.setSourceEntity(189U);
    msg.setDestination(10612U);
    msg.setDestinationEntity(104U);
    msg.id.assign("MHNXSFEPBVJWJTWRYAMIEOLPKGDFDQSNGZHCXMVKXSKCWBJPVXSUASHPIYOFOYNRCXAMUDLAJMNPYLOVDQOXRPLUBMRTBAHWFJUCSVGN");
    msg.plan_id.assign("SOBHXHMDCKSLAHYLLNGZIGHJRGPTKFMZUOHKITDVEYPNPMDYFIVRAZRTFKXDDXATCFZLJ");
    msg.maneuver_id.assign("BTUPUESWGNXZBPZVSDQHGUNMSOGUOGHSIRHDHWILRESQXXEJYHLPGGMZACMLFLWQIASZNLVJMXCLCSBGZUJZCCJVRUEAYTUDHJXFOZPOYOMWVXAWJJBHUGLEKVCQXHGBEAAMTSPKNWSRVABCL");
    msg.memento.assign("COUSKEQHFQOALFQULNYFRUIJTKBQNCHSXZODYOEYRBDUPEARVJXEJTZGUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3512052268759617);
    msg.setSource(37876U);
    msg.setSourceEntity(178U);
    msg.setDestination(16863U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.8776130664126474;
    msg.lon = 0.24219850771712959;
    msg.depth = 0.7136400405249497;
    msg.roll = 0.8268380739020554;
    msg.pitch = 0.3861695373915237;
    msg.yaw = 0.8449868738292183;
    msg.rcp_time = 0.13833423545881052;
    msg.sid.assign("PBQBEJMEFRIJBOUYGSNOPTMCHYJARNHBBLNDXNRDVVLDWC");
    msg.s_type = 41U;

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
    msg.setTimeStamp(0.7215475211028748);
    msg.setSource(279U);
    msg.setSourceEntity(26U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.5257891484692506;
    msg.lon = 0.022025245335695276;
    msg.depth = 0.7865896264757866;
    msg.roll = 0.49778897668707267;
    msg.pitch = 0.44116328845892816;
    msg.yaw = 0.7727321977859668;
    msg.rcp_time = 0.5796342969727742;
    msg.sid.assign("GBMKOMZGPMLJWBHXRFZIDPILXKCZYVTHRSXXTQMYJWIAHQSIKFVJJQARRFDVGKRNUOQBCCDRCIQIPZCXWNBGGEETUICJDAALHFBBZIGKTSNCGQZNOXHRWKOLCFGMUOAYYS");
    msg.s_type = 182U;

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
    msg.setTimeStamp(0.5109848937939572);
    msg.setSource(41895U);
    msg.setSourceEntity(181U);
    msg.setDestination(44389U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.7329252835711166;
    msg.lon = 0.009090060907628428;
    msg.depth = 0.2930426665967508;
    msg.roll = 0.5026423663190129;
    msg.pitch = 0.8999870556640134;
    msg.yaw = 0.9140650586277851;
    msg.rcp_time = 0.2911236871503823;
    msg.sid.assign("XZCOKGKPZGYZKUHLFUTFSZXSBSRPROQJCDEAYRQIBPVILFZECUYMMURJVOOXQSNWQICIDQDEAHPHXBQKNBFCLKHNPMFIWHZVYMQRUOMFBTBXRPNEVEAXSLTNSCKGEDSPEIUJRKEPJUTAIV");
    msg.s_type = 119U;

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
    msg.setTimeStamp(0.9974338960846698);
    msg.setSource(35928U);
    msg.setSourceEntity(151U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(206U);
    msg.id.assign("WOCDJIREWQOYTPFMOMLCYUAOVTCXNDMXNLIJRMDDZJPUKXQFMFVJTGUUOHYIONIVLICVDOOWLWWQHZZTYKFPZCUGEZFBWJVEYXYHHFJKBKNKVHRKKJFGAQOIRGWUMGLURIHXSEPFHSVAYESBYAHERPCGQBQYRTCGFNMUHVPEBABRTBLQADYNMWAJLZZXQDZTKZMQGLIKEENERRKXGIZIDCUPX");
    msg.sensor_class.assign("FJXMIVHMBXRRQHEYRRWAMESLHODEXXFSOSZETZRHININBVEPTGUMUBAXLLZBYCKMCDPSFZKHZIJNOBGWKOKTYGITVUFUUUP");
    msg.lat = 0.7653625258666388;
    msg.lon = 0.3691583266355464;
    msg.alt = 0.804498871942482;
    msg.heading = 0.5300790218236096;
    msg.data.assign("CQIYPRLNOYFXPVMEDEETVXJZPSHJNLMVYXXWDTLYXNHGDASUTHFZRTIFUPBTRGRBKNUVWOELZXJZQKJNEOO");

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
    msg.setTimeStamp(0.44205765859824864);
    msg.setSource(12401U);
    msg.setSourceEntity(94U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(64U);
    msg.id.assign("AYZYDWKXPYJTZAORMDIALPTHDQMYFBNUVTKUBETWNULSWVSECVVPO");
    msg.sensor_class.assign("KVAHPDREOTLPZZNFMQBBIXRBEDVQGRXMPSKQAFTTEQMZJUSUNTRTYLWXQKEUGGYIVQAKYDZLRPGNHVNANCAJUBKRGSDKSYXQOHNRBYJMWCTEPZEJBCQWZSKJYUGYIBTQMRHCEICYRIHBVKVUWDCPOEFIWPOGOFCWJMMFAHOVFCISPGXIWUNHACXGCUOLVKLIAVFYKERDNNZIWDJPJFXHGMXLZSLZOAM");
    msg.lat = 0.6417980935415923;
    msg.lon = 0.40832336652293877;
    msg.alt = 0.6888847670575409;
    msg.heading = 0.1758691373932828;
    msg.data.assign("JHYEOCXTFKYQAYLQWBOOVTTAFHODNFLXJMPCZHBJWQDNEWLOZHHJMIFNSPQDSRPPTIFVLBXLLONJQAZUAKJWGDZTXNSSPBZPTHUBWZCCGSUYESNETUGYGXVKCVOWIUDVYEDLEKKKJDMAEUBYKYGINSRIXCPBAGUVRURRMWIJSAYQLITEBIBMLCLAZTMGHREHQZDNUMBRII");

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
    msg.setTimeStamp(0.17772746753680724);
    msg.setSource(32063U);
    msg.setSourceEntity(139U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(28U);
    msg.id.assign("MBGMSJEESPLPEUJRDBMKACCPZUGZYTOZTHZFWZDQFNIOAVFGFZLBVUNKKNSFDUBLJIYXLTGBLPPHVNFOIQDVMWMVBAUMMLQXACNJKJUMOXJF");
    msg.sensor_class.assign("PUCGUDRXHTADPKWSXIMNTYKLKYBZYMJXPLXDTCLCWJMUBEFLWPRVMQYVLCHRPATXLIIHFINRQQBOFRDXCPXUNVR");
    msg.lat = 0.2665818910200868;
    msg.lon = 0.7126570843300671;
    msg.alt = 0.15389339430683469;
    msg.heading = 0.10890212290181578;
    msg.data.assign("TYKOMOIOZMUOGLAVAOGSZMKLXKPOEDNAYVEGRRXMJRXBSLTDKFOLQXKMTGQYLLBQJCMRFEZCSERJPYXZLTIHYCZ");

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
    msg.setTimeStamp(0.885731649821766);
    msg.setSource(58561U);
    msg.setSourceEntity(226U);
    msg.setDestination(3032U);
    msg.setDestinationEntity(218U);
    msg.id.assign("WRIGWXKLPWQKHTUTBJLKFUNYXYERUXLIZSHRPURMXSZDZMUJYJKKGPCQHKRTIMZDYXIDLIJARMFISXRMFAWMAVTXSCOTANFGQYHOXSGQSFCHEODCPNPBFOBBAHEOZBXYKVNBOBMCESWDDHMHILNJAEHLGRXTLAACGCKOBVYLYTVSYPUUSAFQUDGNTQCVZCNOMQGLVFJKIZYETMRBNVUNJVZVHTPPDWQVAWGDELJQRWZNGOIW");

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
    msg.setTimeStamp(0.76484904634419);
    msg.setSource(35388U);
    msg.setSourceEntity(187U);
    msg.setDestination(16356U);
    msg.setDestinationEntity(134U);
    msg.id.assign("HJVSWDPROTVKTYKROFDNMIEBTDOXJALESOCGREYRUMCSYJPEYQNXNLIIMFILKQHZMHKGCHFSLFOKUXGAJTWWGVBDEVKSJBZLKOPRFGPKNOMMWADLZJARWWKLYGJUVUBBRADUNGCR");

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
    msg.setTimeStamp(0.6259174112067328);
    msg.setSource(19057U);
    msg.setSourceEntity(39U);
    msg.setDestination(5334U);
    msg.setDestinationEntity(41U);
    msg.id.assign("TYFFVLACVZABVKOYQKLOKBXSJJZCWOPIKRIMAORBEBJCVZAKQFLCNTVIOPPFUPZWMHSKDVRBSVDTXJYITLIYRWIUHBNDWECTQGLHWTCQYGMXFAGOPVMRFLIZOBLMCEQAUODWBGCMEZKIKQUSJQNR");

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
    msg.setTimeStamp(0.6829252253408366);
    msg.setSource(13353U);
    msg.setSourceEntity(204U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(45U);
    msg.id.assign("SYBRONNBRYWGXIOAHIBADBWQTGOADKMUWFYRCFPYCVONAQXXSEQJHOKFVSXHOCRTRMJKVEEZDPVFAMGEFLMCPNUQELPXTZHFWIMRHE");
    msg.feature_type = 171U;
    msg.rgb_red = 32U;
    msg.rgb_green = 23U;
    msg.rgb_blue = 130U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6454156269798756;
    tmp_msg_0.lon = 0.5876042604150411;
    tmp_msg_0.alt = 0.9313587430303489;
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
    msg.setTimeStamp(0.4986280117317392);
    msg.setSource(42504U);
    msg.setSourceEntity(228U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(42U);
    msg.id.assign("QITAXAPKJYWUTRJRSTFJRIQXURFCECNUKWWOFICJXSUGPHNGAJYBSEHNATIEDLNLMNKMZOPGZKGINXZJFYOOPECXPSULALVYUQEWMDCXQZNHHJYSHKPUDQLAABGEVWQEHOFUYDBMWIBPQHIRSDCMBZPBLLRILPYZTKZVFDAGVYXWYBJKXCMKRAODBXNUFGWFMICVQKTOZDXGCHZQ");
    msg.feature_type = 118U;
    msg.rgb_red = 163U;
    msg.rgb_green = 117U;
    msg.rgb_blue = 126U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.14191165770128222;
    tmp_msg_0.lon = 0.18684140993535558;
    tmp_msg_0.alt = 0.6889567257716842;
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
    msg.setTimeStamp(0.032448617303192706);
    msg.setSource(28309U);
    msg.setSourceEntity(51U);
    msg.setDestination(10083U);
    msg.setDestinationEntity(14U);
    msg.id.assign("FJEPXLOROUPISX");
    msg.feature_type = 108U;
    msg.rgb_red = 215U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 213U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3666360177971679;
    tmp_msg_0.lon = 0.5593690924869752;
    tmp_msg_0.alt = 0.4609666157095441;
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
    msg.setTimeStamp(0.34398205743297616);
    msg.setSource(32096U);
    msg.setSourceEntity(36U);
    msg.setDestination(41135U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.8615227113149097;
    msg.lon = 0.32595613223046305;
    msg.alt = 0.49017049121164413;

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
    msg.setTimeStamp(0.33091008309578385);
    msg.setSource(17816U);
    msg.setSourceEntity(236U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.49437559701206424;
    msg.lon = 0.3277701099433078;
    msg.alt = 0.5738412303712881;

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
    msg.setTimeStamp(0.8549317766569183);
    msg.setSource(63841U);
    msg.setSourceEntity(225U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.8677365867833992;
    msg.lon = 0.9949172491652566;
    msg.alt = 0.9536434243731773;

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
    msg.setTimeStamp(0.6086403601518604);
    msg.setSource(4989U);
    msg.setSourceEntity(131U);
    msg.setDestination(12560U);
    msg.setDestinationEntity(48U);
    msg.type = 236U;
    msg.id.assign("BGGTLNVKVSRPXYCDGRDUTWFHAVCQGRJPJEEHOAVKQJRDWICBSWDOFMUXSZJDKNKJNNYFFPGAAAEDWCQGDMZEUJXLLMPPQPLCIZBQXZYODGXPBENVUCSPIOHVUWXEFJOUHIKLVZPXCNCS");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("ISJYRNUTAJQRLUPOOWSVRFURYVSIIGBEPNTZCNSMNCUZFAOYMCWFPGJLCL");
    tmp_msg_0.service_type = 228U;
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
    msg.setTimeStamp(0.3709795305024203);
    msg.setSource(22109U);
    msg.setSourceEntity(162U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(46U);
    msg.type = 227U;
    msg.id.assign("UPYUZZHFFBYXXGVJMJIZCYXATTHMZEOKVUFBIKLDABBYTTSWOCAZKQDCGHGTWLRKICVURPGCWKUFEEGIKJCNYDKSTCHONLPUIGOFDSAWMUJETZBQXBPAMUEYGSROPWWTZQHMJVXJTNOAHYKISAJAWQPPVNHHXMNVARRMXNGILYTPCJFQQJMXDBVFIUCLMDFNBZESXOQEVBILDQVOWRXPASYEWNRLQYBRKLJKGHCPWDOSGEEOV");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.plan_ref = 4145466162U;
    tmp_msg_0.id.assign("LQLGAZEYZXTMAAIUUSLIYVCBFXMXJUYRWMYWHWWBEQGMCCSNJRJAWHMUDQJJLZAVN");
    tmp_msg_0.memento.assign("BYLCSJSFPMMHTQLAEPNZYSIZAUQSXHZAMISOYTXEPIDCCNYGWADTBKMQWBEFRRTRJHQQGVNDNODMFNSHGOCIJGSVOVVWZLVUUWGPKMWIPJJMYWYIEDLPJDIROSVRBKLJYWCKJFOMZAZBWNTRPBBGCXUFZCXXD");
    tmp_msg_0.lat = 0.09305492825151473;
    tmp_msg_0.lon = 0.2578040833806794;
    tmp_msg_0.z = 0.1865594207427269;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.speed = 0.10718113384161099;
    tmp_msg_0.speed_units = 89U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 42543U;
    tmp_tmp_msg_0_0.off_x = 0.47904685091291;
    tmp_tmp_msg_0_0.off_y = 0.8107161498090223;
    tmp_tmp_msg_0_0.off_z = 0.377844318801701;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.810380492832698;
    tmp_msg_0.custom.assign("URDHXEGVKIBUQZMSPXGLBNOYBOZZVYMIFPAIPMYWEWESTZCYOXEJXADLVSQCHAARVWHFF");
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
    msg.setTimeStamp(0.9223983754331596);
    msg.setSource(6540U);
    msg.setSourceEntity(44U);
    msg.setDestination(48280U);
    msg.setDestinationEntity(118U);
    msg.type = 129U;
    msg.id.assign("WTULKFKPJXKYIBMAOEJUXLHQPQPNXDXNDNSQPZSTZMZAPNMYJQMWKZLLBYTWCYPLEZGCFRXAVMPOHNHAFJBCFQOGJAUBHZSWDULIBCK");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 163U;
    tmp_msg_0.snapshot.assign("GBIZISFJSTZSMHIMLOZLPBIRWYZKXFXXGXOWVQKBCTAYMEEYPHJWKEHCYPVNTXFMOZNIDXRRODGQMOJMBBGUHCTKUOROFGAEKDYTNIMFPEJFWQQAJAPLKSTRVGYONNFRIGVCKQBBAGWPHCXSPONKHIUPUMJTZLENGKYCBDHAFCLRLHSWMDIZRSWXOJZEVXREYJDIKACUDFLNCJFVWEAQXU");
    IMC::EntityMonitoringState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.mcount = 71U;
    tmp_tmp_msg_0_0.mnames.assign("BJPNXJAKJMBDGENZCRIVYAEHEXCOSYWRTSSNQIKQZELFSYLGWCXDHZIAMVATUKGDWIUCFJLJKCYEOWGLJQALHOPMFAYDNYQMWGOTUROJRCVBZQFVEPZTHNTPSHZAKDKCHHXWRLRQYA");
    tmp_tmp_msg_0_0.ecount = 184U;
    tmp_tmp_msg_0_0.enames.assign("CLNXVUDTKHYQUFZXDNBAWYANLGXMGVWVJFEZIRPBHGYDHQZAOBJXYVBNOXHRVINRJGLSYPNDDMXJSLPGMWDWKCFHPKTYHNKNFWBAAUSECSWVOKGTHUVTRPEZDQPFEJJOIQSYLBJGSRHATZTDNUWISMBRMBJPQZXSTZIACPZGACJ");
    tmp_tmp_msg_0_0.ccount = 190U;
    tmp_tmp_msg_0_0.cnames.assign("ONQSDBOHVNFMTCQGMVFBJOPRAGRLIZHALCJVDN");
    tmp_tmp_msg_0_0.last_error.assign("DOOQAUPXIZPEWNXMTDVXNGTYGBAYFOKEZCHEJIUPNLDLJRZLCOVRRHFKBDKMKIRLXDZQHZTSZLGTGSRSIOWQLHNGNMAFBMKDIFJMMFZPXWKUGPXBRQVSGCUOTZDJWOTFXVOWEBCCSQFPJHNSGAFBUVSIWABKMNJJFQZ");
    tmp_tmp_msg_0_0.last_error_time = 0.937921988826557;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.730672846695038);
    msg.setSource(18020U);
    msg.setSourceEntity(220U);
    msg.setDestination(44600U);
    msg.setDestinationEntity(14U);
    msg.localname.assign("STXNNRNERXKIQYEDCLQDYVVLXWLQLZYZUBBDQIBGUYUWFRCTKWHBSQJWJNSGTGOBFJTFAFAWNXTBOS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OERDMQPXJDUCGHQZNKMBYIUSZFNUKCBXDXMWBKHNTMBR");
    tmp_msg_0.sys_type = 3U;
    tmp_msg_0.owner = 62067U;
    tmp_msg_0.lat = 0.9513068034315019;
    tmp_msg_0.lon = 0.6538736117331532;
    tmp_msg_0.height = 0.009260171957556906;
    tmp_msg_0.services.assign("EBZRIAICPLXNKCPVFNURFKQIDZSJUXFLJZALBOBXTWIOCKDNLKIGEVGOWNACGVMYNEHXOGRZNTQSHADDLGCJSPRSVBFTQLUYTBZJQEDYQLKZRBFJNFPDBEYZJQVQJEYFSPAOYOIOBOGGFTLWZSTPAT");
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
    msg.setTimeStamp(0.37227258431156673);
    msg.setSource(23524U);
    msg.setSourceEntity(156U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(134U);
    msg.localname.assign("JLQKQXSXTFCEEXQMIPCGRTIUNZPGARMVHHGWKCKDSCEYMUFMGDPCNSAUFAJTXXLIUMFHPLAXNOHUISJZEXOMDAYNYNSRRSQKNVWRFWPBQHGWBHKADPPUKYBSKAOYOIDYBLZFSNXLTSDONEURTIEKBUJLCRIEGDBFVAZZKTJRIVZOGWSLMYOWICRCZHMYVQRVOTZVPVY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SBWKQEIURPZFRBCFLXEQGMZIQWXGDTPNWVPUWIAKHJRHKPFDKTTLJZHYZYKIFZQUITNPVDBSLXMNBWVMEPOLEDLRSNVLJJYJZVSOEFWOQPKBMXLDRFHITGVAAHQNXUMXCECKOAKTCSGIWKA");
    tmp_msg_0.sys_type = 132U;
    tmp_msg_0.owner = 25760U;
    tmp_msg_0.lat = 0.33827481897474665;
    tmp_msg_0.lon = 0.3533140169352057;
    tmp_msg_0.height = 0.7651079984121282;
    tmp_msg_0.services.assign("CSSBISPOVLUOMNQREWTBHPWMLUGACKDETRZQVFZXQYNRIYTNAZYGVUVNBBJKSCLZARQLXDKLQKIMEVBXGFRKXJNMPOGUCPQEPHTIBJTSSBAFNCILJGZDWOGFTZITVHUDXOREBEWEJRLWCJEAUZQLANSOMYWUIADOUVJHPDXYMYGZWFXGMQD");
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
    msg.setTimeStamp(0.26590274995020047);
    msg.setSource(51821U);
    msg.setSourceEntity(193U);
    msg.setDestination(40050U);
    msg.setDestinationEntity(144U);
    msg.localname.assign("MCFYGIULNDJGBTUXOJCITCSSKBRAPANDOEIORFZGZKWKNQPMILFTVEBZQNMEWQUPAAVGXTEHNWPGNLNTLBIKROUMEAHASRVTSEFAZISIMDCOLBGEU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XNMZBJXUNQDUUHGDRSPYMUTKYYPURJSUMKSJPDBPOIPKXBWRBMQXYVDPDMODJCKTJIYRCNDFBDEHVYJKAIQGLKVOGVJSWQRFNMZTUKYSIXHFEHLELKXUHBLEITSQGGNBLFUAWOLZYWMJHCGVWYWYCUNQZELRQAGJVEWLZTPIEAGHFKCMOHNVOWQAWDMSRZBZIZCZFSCBOMTTXAHPTLCEEIOBONAVFOFFSSGTNLCPRXXZC");
    tmp_msg_0.sys_type = 144U;
    tmp_msg_0.owner = 29110U;
    tmp_msg_0.lat = 0.3291948980497791;
    tmp_msg_0.lon = 0.7594841847146683;
    tmp_msg_0.height = 0.1889021916739434;
    tmp_msg_0.services.assign("GGTDJWWBICIRHSCXBXTOSXJAUTUIAWUQFZYLEUAEFCFLYMOMGYYIZPPOFVSNFZRUTFZJBHPPQBLDUZDMWFMZJCCOHALRVAEWCCIDOVUEBZAWLPSHKTSREMKMVGRRICPHYKJKORXKBDUQAFADBNKEJXECYGYKYHNHPVQSIXCVDJITUGWROTIPNPENOURSANNGSXMVEQIXDSBSEWTOLDNZWNXLTGGHYMVKJHVQLJAM");
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
    msg.setTimeStamp(0.45197591368965195);
    msg.setSource(19629U);
    msg.setSourceEntity(153U);
    msg.setDestination(37880U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("ZJPOKKKQGWVDLXTFDVRFTBCBCHXMURUGQBHCWTUOUQPWKJESEZXJVZSFT");
    msg.predicate.assign("SASTRONKTJOHYSNHRJWWVCMRXDBDLPBCKWPPOMBWICEJRMSBYKGQVIXUJKOSIZUJWYCLGYYBZFEXVEULHUQQTATVKW");
    msg.attributes.assign("ZFLJCGPVJXQTBVTGFJHFLGYENCGUNBDPJXYQCHYYSPHJKFEBWZEPHAOOLWXBDBPRHGFLUXZZXLNMUILHLOIBQWRMIRILEFMGSACWKEAMUKCGKMQPPL");

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
    msg.setTimeStamp(0.770901112627007);
    msg.setSource(9585U);
    msg.setSourceEntity(186U);
    msg.setDestination(30370U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("BNSUDZTNYAQEZAXEYCCKCFGCVPOWARLDPHESNAIMPOFZYQXHISLSJONNOWBVOVBRUXZSJSZQUTQGHRVQLMSJWKMGBFRGLDXLLEKEGNOWXXWRIOPZIYZYKUFVAUHNWUMKCUFAIGQMIEGNJZFJYDCAPLNECPMJWTHNLBXGRFRMKLUXHMXTZHPB");
    msg.predicate.assign("YAWTCLSALBGMDPMKKONUXXNYSQWIAUFO");
    msg.attributes.assign("HXOBGPYFFPDQMZMZVUZUNAOQVRBNJDTKGNWEMFZWEGSGEMJTKIGNALMUBORRGSVKQYABLSEIDZJFVPNXEASWMXLTGLIOXEASXPKXHNZIVJXCWDUTKYQMMKEAOECLCRCNDOSCXKBQHVSHPXTCQCJILYAJEIRQWVJLDHYJBWIHIVPGTNPZQNORUWSRVYYNPYUYRMCRWKCZGZWORHHOVEDBAIIBYTUGAZPSPDUKHSBTFUQXTFCDUW");

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
    msg.setTimeStamp(0.546003619324463);
    msg.setSource(33000U);
    msg.setSourceEntity(172U);
    msg.setDestination(34875U);
    msg.setDestinationEntity(82U);
    msg.timeline.assign("PSJTOWABWFWSMCOQKBFKVRLDYCDEQIGUODRSVICTUEYCGJGZNZADPJQVEGNBKDRANFPZOXVZJLOISMTFWVLWQKSVQTCOIPNZDFFGVHSYGEIHQZYHHFYAPCMIUHOFWZERIHILUHKJVQRLEUCPSXMEDMMUALNPYBMGUGWAIATCNLXJXKFTQKFNDBLHKTAGQNMRIXTSZRKXGOBMVJROZAUTCNYQS");
    msg.predicate.assign("YRHZPDAKAYECOQUQJBWGYYZMIHHTSLINVAKBWVBEHSDTUJVTQGDRYTETBRQODMXAPCKKUMONGKUCZZWDFBNWNCAHLGCRSHQBRFSELILWAXADXGOPIXNYEMZYOIAMRFYNAWYZZLEKJRCFKZPZTQPUUISCOYBTEPRKDMVGVHVXSTMDHKCOJHSMJBPUSLJCNTMVNFLXJJQIWZXLGQPW");
    msg.attributes.assign("ALYNMFEOHAFXVPWRZXWFJOYEETMGNEHSKD");

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
    msg.setTimeStamp(0.8952527805277812);
    msg.setSource(18132U);
    msg.setSourceEntity(50U);
    msg.setDestination(63393U);
    msg.setDestinationEntity(46U);
    msg.command = 236U;
    msg.goal_id.assign("IGQSRJVALSHHCHZBXGFKYAEAVJEJIXCXDPPGALUUPONXZHXTJOOFOESKGNITWTXGBWGPULSDQMMYTLKY");
    msg.goal_xml.assign("DWDAIDHEHURQXCWLUBGXAVSXXVGZDUZYOIPQUYVQHWUOKGVZXLJTFOGKZEPPQMHSIDSJBYPZMNJMAQNMFSCNCGCFOSIWGCDKKDKRFMQLFLNQCLWTDAXLXTIPMEIWTPRWEVHJRKYCEPAKRNAJZNAOJUOVSGTQEZSTMRDJASFKYRWMUXVTSBNPYBYADFPJGLTMBXMQBTYICFBFOEFWOURZLITOQHRZKPNRGUHJBVEELCBOHSLZJYAW");

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
    msg.setTimeStamp(0.08195260534166182);
    msg.setSource(19837U);
    msg.setSourceEntity(222U);
    msg.setDestination(47002U);
    msg.setDestinationEntity(189U);
    msg.command = 73U;
    msg.goal_id.assign("ZFGBLHGCEMBVJELWRXZBOMDNZGTMVTRDYRKKJUTNKCVMXZASFROYVHTFEGYWSOFYYPISHTQRYDQDN");
    msg.goal_xml.assign("LLMHEESYKTHJYPRDOSIUSIWQQFVCUKWDCCFDATFNRRJNHPUQVDOZOODPRYIPVHGNBYOOACACPPMNOKPQANLQXDQJJTUAQJKFUDTCYKMUXKFURBVBFDXBJKFGMXENIFMNCI");

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
    msg.setTimeStamp(0.42764229127659215);
    msg.setSource(42031U);
    msg.setSourceEntity(218U);
    msg.setDestination(57065U);
    msg.setDestinationEntity(21U);
    msg.command = 99U;
    msg.goal_id.assign("CDVAJGQGHFAKFVOFIBZVVJWYFCXKZKBMDEGWWRBKKBTHIZAIQTHZQXOSUPPASRSAMJYJKTJNVAPCMRTHITGWBEQDHMVFHUCZTNGZEYWONVEOYHDOMDWPDASPOGLSTNEPPSGKPKQMNXJULJQHZFAYXGBZLURJAEDTRZNBTLGPDIVLIOGBERNOFYYWHLLDUYCEBXMUZELNWSQKUYFHBIWW");
    msg.goal_xml.assign("IJIKZBGXCXBRRPVLUWJTXFBEFHZZEOAOQREOCZBLALXUIQPXTJORAQQCEQEKARVAZYQJPVEMDTOJKSAFDHAUDVXJWHMHWXFNSBDYNENFWYWOCPFZHRMVWAGFDYRVNLIDOTAKUFMQZPRIEEXULMIKNCNSHTYQNKHMUZBYYOSWQILNMABVLPHHKPZKVFDLIPVRNYXXHGMWDLSKYNIGBCWCKVFYPGTJDJTCUOCJWLSDZGB");

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
    msg.setTimeStamp(0.8133858938569708);
    msg.setSource(34355U);
    msg.setSourceEntity(224U);
    msg.setDestination(22779U);
    msg.setDestinationEntity(231U);
    msg.op = 139U;
    msg.goal_id.assign("SJIPMJQTKGUZIAQTLWTCUQWKEYNTWEFSRWQEQSIYHOCEFHBROKDWUNRODGFVBPDEBDZSHUVICKASHJXFALTLHXGGQPBFQWJFMJIXDZKRUKBYCTZZEINWTVDDSCOHXFPLXNFGOOWLTYWKPENPACNBMYRZNCYUPNOQXJILZIOXGLKQHUHDVSVJYMRRRDFAMAJGJTRGPVLOKBTHXBFDLCMEMWBPMGSEIIKGRLONYCXMUVHBQAYUN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XVBIFURHWGQZNLLGSKGBXREHQLOCHFKWBTMUTYJDOQSYEJSTGSYFNYHMLUGNOIEYCXAIWGBZKYLLUQGHXZNGZOQUOVKAUAJBNPZIQDJPMITSWQZCWDYSOPZPNASMR");
    tmp_msg_0.predicate.assign("YBQPDOIORLXATF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SXFWUONZTMNVAVIDQKONRDIWEHZBWRFGUQOYQMINVKPRSPAJTOEIZCVEKKEIFUPWBUMWTLYGSOPYEYRLBQHLLRZTNSTHZAAJFCHWHWVPVHBNIWVZODB");
    tmp_tmp_msg_0_0.attr_type = 253U;
    tmp_tmp_msg_0_0.min.assign("QFXSWJGPSGJAFHZXEDFEEKFKUVTOLGOCVMSFQNDQTZVIUMYXHLOYSTCGVZUMQOWCYEPWKZQGSJOQZMXLWPBONFEKFKONBRBUJSDGIGABUIXSETRTNHNVZNAFEPDHLVULXKEVRYCZYNHDTDABTSLBALINAXONPYVRYMWAJVPDCXQCWRERPHIZTCWMGJYE");
    tmp_tmp_msg_0_0.max.assign("NMFPZAMKYDXTVXGIYKIXNTFBRDOHNSJDURIBOLBFOA");
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
    msg.setTimeStamp(0.6332885789333071);
    msg.setSource(6589U);
    msg.setSourceEntity(183U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(229U);
    msg.op = 35U;
    msg.goal_id.assign("DSLDPLGQXDRYEEUJTKRBUEBZAVYSVNHKZKNYZHINPMDXIKNWGJBTBQRYRWMQOAWHHIWYRTPVXMCWHEVJFYOPZROGTXWDDTTJBPUISEQWDUPVSJWITAGIZVUSNJFZGNTCIHSFLMXHOFJJVPVCKSROLLOXLGMNYPUSDGAUETGYQOVUJZYOQCEHHFSXWQKO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IOKZJGBZTONYLTXIFHQODOXWFP");
    tmp_msg_0.predicate.assign("GPYVDAJKVQHFJNRALCQLQFMUAXTQBHEJMIKQSUBBBIGJCJAHOIXDIEBUJYWEFQMTNQYXNACOUOSYFOCRHPZSTEVUIFZHWJEUTHIKNFMXGVPTSEMDXDEWCOIZOFNSTRZADDKOWWGKFSWUKOSILAZSOEYTDPGBKXCYFJPGMRIMLWLUCGPZDSGMZTQLVIRXNNRGZDHCBSJJBOWCMLRWBQEPRKXVAMLVRCKXDYQHLLYENNVUTAYVP");
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
    msg.setTimeStamp(0.6706934990447843);
    msg.setSource(42744U);
    msg.setSourceEntity(234U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(146U);
    msg.op = 223U;
    msg.goal_id.assign("NGXFBFOZVNGVCRNHMENDBABZDOYZWBVLGRUQHDJOPXYBHQDLXAWGPHMINQCTEZMMSPOKPLMOIEJOIEMVCOXIHTZTSDQFLCEEATASIXALNJGGEJSRTCUMBKSLTWLAWLPFNUHQPASNLAFRCFDJBKCRMKUKUDIQTZUKTZWUVKOQTWHXCEYXMQRRJSUNIPAKFOJRGMYRZGVNVSZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EOJMDOIQZJYACWEOYAWQNMECGMNHKIYIMMHMNONMYPHPVUTQNJKIZILCEUTUIVSSMSXGJZALAZIVZROSWJJAXNAWHIDVUQSXSJRNGHRMLGNEPYASTPBQXLKDXUKOIRXWGYOVBYJVOBJCPHFEBRCAAUHCUTHCCRSKGFTBTGFFWQKYERPDGHOGBZYFBEVUXTFDWFDDRKJM");
    tmp_msg_0.predicate.assign("UWTPACBVLCODSQMUVIZUUHXLXROEQCTGPKNBFKJVSCJSWNMZPDMAPSYYDOMJRSLAZWWPORAQIIASEBMRLBJIFIGELGNFUNEKEHHEEYIGXFMTPTLRFKQBGGOMIGUBDQFHQAXRDEZYOZTVMHYRCOSOTQJNWBVMXTEOVJSALWHZIYYIHUQLCXNHQHGLPJZZYWNSZDBATRVFEVTFDPKHXACJXBKWIXJWKAKZYQL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QELANYWLXRSUMLVKWIEGHJPCZA");
    tmp_tmp_msg_0_0.attr_type = 192U;
    tmp_tmp_msg_0_0.min.assign("TVMRZRBTPIUGHAOFIWXVUAEBKETJRYZGV");
    tmp_tmp_msg_0_0.max.assign("SYLIYPNIWXKFDRKGEAFZSYNNPFAKAEYZNXNVBDUNHZLPVUKGQLLKPAHDVVDSSJJCXTFECG");
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
    msg.setTimeStamp(0.874047775208383);
    msg.setSource(46467U);
    msg.setSourceEntity(170U);
    msg.setDestination(25557U);
    msg.setDestinationEntity(120U);
    msg.name.assign("RTXSERISCUWJPUOULAJKIVOPMDGXWDGVDAFSSXWUACVJZKUHCLEZGSFMBBPBMHEWDIMGDOBOQTXVMJNDXLVQYVXDFQXVXIYGEHICEQDQUALSMTTRZEZJNBCGDRKYNQTOTBFIQJWQLKZNOSJZAGVECUBOKLGFRHPYHWJNAWTYHNCTEFJZZKDAQNTVACIYENEPSMYFYHWPMKORRGNLOXWHKSPXSFHZYKQRGALZWIPVTHNYRUBUMORCPI");
    msg.attr_type = 32U;
    msg.min.assign("DPUHISYAASRWIFFEOJSNWXVNTKZMQNACIDFHHVMTJDLTTXMYLBRZIYUGGMLUVQPBYJQEWGIORBHHQESPIXQKHCAZEYINQUJUTHASYPREMRGFXSBSZEIYTMEGJZZXNUADUFPGWRNCKRNCBFZOMVVNLEZTMOPAHCNTJVXOG");
    msg.max.assign("RNMKEUOCMUZJHGCQOJCQNDWOQVVFLLKYTTXIDNLIGWMCXWEXUSUMLRMDPNFMRHOUKNDUFDYKIYZNEJBSGBGRFDBVCMAKLSBDRAVFJIRGTYVVJHNOLAAMAZPTEOEJOIQBTHKVYXZVAZLSWRKXY");

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
    msg.setTimeStamp(0.35324283794363576);
    msg.setSource(9268U);
    msg.setSourceEntity(174U);
    msg.setDestination(39169U);
    msg.setDestinationEntity(103U);
    msg.name.assign("WLNDFBOMPZJQCVZLLYPACOFSRTROHJKGGWENDUAFAIFYAQAWUOCENPQDUGCGDKVRYMAHTJBTXHVJDJHNEWZFMMZTNYZMRZMGVSWMXWHYPFVTUITUBHLTVOXZXUNZILSJWEQXJIFBZTSYOBWPKVBDVSGOICEKXQMHWCPQPLCIMYNUGOAQFHCREHSTSSTKXKRHLNIRBXPXEXDPPEZRCKJDLQFYIMBKYKLYNROAURAAI");
    msg.attr_type = 164U;
    msg.min.assign("VZQAEYGFLUPUFOVEVTVUSMBRTGBOBNMEZEFBXTFBTBUSOYCNKPGLLPUIZAWZJHPXHJCJGIENUVWTCRKGXMHAJ");
    msg.max.assign("PMHGRDLWAWAKBUUJZSOSLLMDNCIFQSSVALQTSDPXNBEZCFEPLILLSJDATKUFPCVJACWKOEMRYFOGZCHKWXEUURNNECTUTPHXZJXYYIEHONACZVIQDMWINOTTSOHFMJHGUYWIERSOTVKBNVIPJYQDQXGPQZZYAWREKCRFNZQJVYKUUYOXWVGGYBFKRDFZDJWLEOQBHCLGIFGMJBASOKJMTKRHHFIDVXAATWP");

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
    msg.setTimeStamp(0.9173724403478807);
    msg.setSource(32367U);
    msg.setSourceEntity(236U);
    msg.setDestination(17548U);
    msg.setDestinationEntity(244U);
    msg.name.assign("VJTRSWXDTSAICYLRQKDJAMVTQAKJVEA");
    msg.attr_type = 71U;
    msg.min.assign("MRQTRCNVBVZFPBAAYVYIQMWKRJNNULEMOCXKAMQMEFTTAXOXDZQCSWLJIIHOMOSDEZCHUNSRMVBKJUGFIOPUFVGYALKOAIWPUNZBUSBTDFTNYHLRLPHSVZZSWPGOPYYJIPWJBIWRTZCWVTKCGZRSUHBWNCQONDCFFAEYTZAQJXBSGJNVUDTMPBPXIFPEGJLKIBLXRAHDEERJDUHEILCDSENWTYLGHQXKFQ");
    msg.max.assign("YKJDHMYFCQMIHJIIKRQEGQKBZSJAQDQAJZPTRHJTWDMSSHMGVWZAYRAYRNGXAWSGELEQSZOAP");

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
    msg.setTimeStamp(0.04465805720044713);
    msg.setSource(5971U);
    msg.setSourceEntity(215U);
    msg.setDestination(31677U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("KRJOXXZGFLDMNZROFMYPQLCVGMGTMIOJAQJPWZSHHHABSVYVXJZBFVPREEDFOTXWWIYTSCYKILTUGSQILQBQGIYANFD");
    msg.predicate.assign("OBTFCEVWDUTVQQVDIFGWNJWCAYMVPKTGKOIBBCYPZYRBUUSYXVIEUXDNXXHOVMVOPFDILMEZKNNMIHJAGUIKNRSGHHADBWBNZFWPJETORKPPDPGWCZONYCMXZZWIAISAXPRJQMDZTZOEXFYGXEJQBRGLJAAGHLRSNVCOLCTYRXUVOHSFZMKDJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CJEGRHTPNPKYGXWWVGEYSGVBPRYEXJZOMBIRRVTKAIQHQAFZJUCBZKDUDCLTUOPAOJNDWIUOYUIXGHXFNSCNUJX");
    tmp_msg_0.attr_type = 166U;
    tmp_msg_0.min.assign("VJOABCMGWPALJMEXBUUAQTGSRYJDDRNTEAIYJJWNKHSAIKBXXQPEDAOSVQHSTXNABNBICJHKWUSNFCTZXWLBYECMEKLFNJ");
    tmp_msg_0.max.assign("ZPXQKFIPTWJDZCXFSOBZDKSTNWYCEQJUBLKIZALHTGTZRYXVMOYW");
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
    msg.setTimeStamp(0.9103491523605656);
    msg.setSource(13918U);
    msg.setSourceEntity(237U);
    msg.setDestination(18313U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("HTTFEHVNHICYKEWRGVOKNZYMTDFJZWROHHDPVIMVRTGTRZIJPZHPLHIGBGIIJGAOPYNPVAXMNMEYPDFFYVAOEOOBUAKEDQISKFWUCWHFERXJJJRDVPUKBQUDGYYYFKMWNEZXQSUUIBKH");
    msg.predicate.assign("DGKIIRCQSCFEAMFEPGXZRDBWIJGEFKXJWBTHXYTGILSEYCJAHGQKMQVCEXCOYRDPNBEFGFFUUQUKJOVIRIRVCKSRNZLCXHXDNHZZLIJGMMIOHOVYKOSKAVCWRVHENPSUQPPBXAVPMDQZNUJNDBQWPDQUOANBLAYJZZYHETJMMNUEYXFKMTWCSFHZRSLQDVHTBFFXLGSBYPYBWAWBTYJWRDIOLZOTTTNSH");

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
    msg.setTimeStamp(0.14795762652111855);
    msg.setSource(20662U);
    msg.setSourceEntity(105U);
    msg.setDestination(41769U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("QUIBXMSOPHIPCQSKDCMIDPBHLUBQHXVAXTWIALZDXTRWURACAFWPDLJTODYCFJOFNDTKYMBXBJNQGEPFVZHJVJQYSASDPMNKYRHLJZYSUDCWELVZQK");
    msg.predicate.assign("EQVSFXGQDAMFIXFRMLPTQHUAUQNCTLGCPECTABDUBK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WTAXIJJJFFUCCOZBKQYIJHVSFIARFPGWHOOSWJVNWYQHLPUXIQTZQXRJJMVLLXIHBXMPWXEGUSWFHROLNWJGEOVSDDKDZVPNLNUYHPYKMUOYCZLACZBBSLXMMLRGRPJDQQHTKISHDPAIYPITERCDHNCOQPADNTCEFBBMATFTXZAIXATBTEVUKCRSKMFOANTCNEWWAOFXGSYZEDOMEDEKJQVGZERBZMMGNQKPSUK");
    tmp_msg_0.attr_type = 183U;
    tmp_msg_0.min.assign("EJKIYNVGCMMAZHJMVOGQLLVZDGICPEGRCPZXPUDUUMEZZKPUFCTAJWUHYRJNOWLJODNQFBWUIKNIXOFIOQXCFMCRILQRDTQXBPGWFRZGYVMFHURGRTJISESXHNTFQKGVTBBEKEMODLOW");
    tmp_msg_0.max.assign("PXSCZWMTQLPKFYGKBDAIYEFMNPHDBXBVBQLTRZJDVDQSAUYYCAYOURTQJUKMAMMOVXQWUEFZQIXVS");
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
    msg.setTimeStamp(0.8341252168845013);
    msg.setSource(1909U);
    msg.setSourceEntity(20U);
    msg.setDestination(22338U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("IURWCZBUJHFTDKIVDULXYIREUPAHFGDUMHFWGDHGONTPRFCREYMEOVFTWNGLPBQPUZLMONOQPYTPBCDWFWTBCINIPLJYOXXMVAQBMUAQSFUOVISTZAXSMWQKFXEBUKZKAJFRQGJDGNVZYVODNZBJCPTYYPLECTWAXLMGHKXKQWXRYMASHMHPDTZRIFISYLMNAQJOYWHNWISDSHUGJEJKBRJOZSCXZLIJVVZGEBONTAL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HMXPNAFXSCOEPFBBAVPSYVTFLMEOTDVBYDWCSCOWJTMAGKU");
    tmp_msg_0.predicate.assign("NVTFFYAYVQFYQLTJDUHDASHMCLVTJCGVHKMMJEUZDLYBWSWSISQXFCPZMTCLDFXAKHIUMXIQWNCRHHXQXSAFBDYDRGGJJRVMZEPZPKLSVEXQZPPWO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IWCPMTULCRV");
    tmp_tmp_msg_0_0.attr_type = 130U;
    tmp_tmp_msg_0_0.min.assign("ZJEYKHAHTIJUXJOVPOEPUUYPNTJDAWEKPPHXDZNWIOMEBR");
    tmp_tmp_msg_0_0.max.assign("DXNIKHTWPNYRGHJOVERBKRTEBOWNJQUMHIHHNMAVQYQTUTIGKBTOULNTUFQBAPMFKFLPYOAAUTYXGQSGZDWVCIVSMAMPMYXHUAAQIGTCTXCYSTDJJEENVDDBMQLRZRHWACEOUFKJQKBBEUYVOMOPVMRKKEZFOXCOVDJWGXLSCYLCPPNXPSBESJ");
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
    msg.setTimeStamp(0.7212815900318994);
    msg.setSource(33029U);
    msg.setSourceEntity(137U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(191U);
    msg.reactor.assign("RUXMUPTWBSJPUKWNXQZGELQUHWTCZSXVTQZFNSCJKTDIHYBCAHUJBSHPQIEGMGMQVNNANGMDJXCAQTAHIZXEKFALTCJYDYDORYTGYLAIWIHKOOAOPFFNAUXTZLWFRLJYWMDQUFWLYZOJBOEVCPUXJYUMRRBCBXVPDRIDKCRVOGTIDHFCVGWFSYMLSAQFBKRRBBKNEHJVIWCZKZRWJZOSIEEXPPPHQOMDXM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZHTSZDELJSZNDOQKPMWVTAPNWFNDMHTNCWVL");
    tmp_msg_0.predicate.assign("RYGRWJAQGQTBJATDI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DUNPEUWMVYJKRRLLPLWJXSLFTUOXCIVNJOHDZXISGSRTSBTQCCNQMFHQWTHCNMSFMIVDWKGYNLLNSOXHEEHGCAZLJHVEOGWXNYSTDQRZFIBTAVDGWMQTIZCEVCUJYRTAEK");
    tmp_tmp_msg_0_0.attr_type = 73U;
    tmp_tmp_msg_0_0.min.assign("UTFHUXJQAXCLDTBZCNSXTYAEAHFTWGGOBJIZIQKGDAYYIRPJHBZYVYTGDKOEICJMSQZPGLQLWKSPGYOEXCBBQRFIULNOAUNAFQVCPNUALBHWMCKZAQTVMJKTJPAS");
    tmp_tmp_msg_0_0.max.assign("YKWVXYAWAMIAUFDXDZLTIPNRAFOSHIDBMUDIHPRRXJRNHSVJPGCKESBYNPPZDXTEXSQWSRTPKQUIWHDTLJJWLKVBNCVVLDAVHGTJZQBXEMCRCOIMXDWOEGBFAAHMSCNLYSFREXFQLYGPEJYHXVKUDBPOFCYZWCEGQWIOTQZMCZKUOMLOAHNQNINTFEZHNRTTOWABKIUVWPGGVSLN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.18680922778732867);
    msg.setSource(60684U);
    msg.setSourceEntity(38U);
    msg.setDestination(36444U);
    msg.setDestinationEntity(74U);
    msg.reactor.assign("FMUPVTEYAASDWHBBLTSTFVVDNRBFHWIRGBXTHCJJXUCFJNFDQNBMYRYVADNYODISORUPKFNQPDPOTELAAKVUSCTUCTIHGNKZRQJOMMPOAZMKQPTETBLQXZLXAZHKFRQZGCNZXWDXGRZKOEGNJPPYVLWHOVGVMWLRJIVOQUZWSCELRHELYZKHSORDDIDJQCSFSK");

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
    msg.setTimeStamp(0.42032355630975193);
    msg.setSource(61404U);
    msg.setSourceEntity(107U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("YDMTAUQOJCVFGRJSVNYXRTRVFRXPWYDPOSV");
    msg.data.assign("GVLABRKJHYWAWCRL");

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
    msg.setTimeStamp(0.25470150870572095);
    msg.setSource(36727U);
    msg.setSourceEntity(160U);
    msg.setDestination(12674U);
    msg.setDestinationEntity(150U);
    msg.topic.assign("EEPVEGBRRGXV");
    msg.data.assign("IFXHEBPPTDXDFBZNBBEVJYSYXEGFCXFUVLWXCJJOALFFMIUQRHHIMOVJJTFVLHMAAQKDEMFAZPMWSHABINCDOACOGNPYLJLOTQQMCUFAZWNTKSHDWBHTBKBMGDRRUIAHERZNCWZKMCQMN");

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
    msg.setTimeStamp(0.01556680238456476);
    msg.setSource(16463U);
    msg.setSourceEntity(133U);
    msg.setDestination(18288U);
    msg.setDestinationEntity(250U);
    msg.topic.assign("PTKDZTPUASKSXIORSMASGRJJQRDAWRCXFGHYNUMWUCLXZNXFPNHXCZRRYFATIWLFSGUMJZBOZWBOTFYECXEAWVTIEHJMCLQBUTEENVLVBXZIVYVSGNCPEYBOXKK");
    msg.data.assign("BTRGPNQEHVTOCGNIEOYZDCVSCDXBPYQCZAYDVGHOGMNHEIFNRJJMSBDAMSXXEQNJOPYBRWBEVURMTQWMJUIWEIWAVPPSZOKXKWHDDIAKZMOTUZZEDFRPCGHOAYLFURFJTYMVUKLAIPAXYHQOQVVCNQVUKMADJJPULBHTKOXKZMJCUYSTWVSCGYRLGMESZNAFWBBKSZZBKLNSFCEIWXNRSRHLFPTNDJTL");

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
    msg.setTimeStamp(0.6466563840643036);
    msg.setSource(64643U);
    msg.setSourceEntity(249U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(172U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {-57, 30, -70, -8, 5, 1, -91, -32, 27, 37, -26, 19, -18, -76, -89, -111, -113, 46, 50, -78, 90, 100, 31, 76, -33, 33, 77, 95, 65, 116, -69, 103, -89, -20, -85, -28, -97, -125, -109, 27, 114, -106, 122, -27, -107, -115, -14, 65, 38, -126, -82, 60, -70, 72, -43, 12, 104, -90, 5, -37, 41, -8, 30, 94, 7, 11, -126, -31, 115, 62, -51, -20, -37, 35, -52, -30, 106, -106, -56, -84, 45, -101, 87, -107, -22, -32, -29, -110, 59, 27, -86, -97, 30, 78, -79, 89, 120, 63, -18, -111, 116, -51, -57, -33, -3, -77, 20, -113, -48, -16, -111, 20, 96, 74, -39, 80, 121, 58, -34, -94, 92, -44, 74, -36, -54, 64, -109, -120, 18, 85, 104, 49, -105, -2, -29, -98, -67, -67, 12, 14, 39, -92, -33, -26, 79, -3, 85, -43, -32, -70, -78, -122, 18, -22, -26, 88, 69, -30, -109, -31, -15, 67, 36, 24, 120, -80, -123, 9, 33, -11, -88, -50, -7, 17, -27, 20, -91, -95, 66, 36, 4, -97, -44, -15, 85, -18, 48, 17, -115, 8, 112, 120, -1, 40, 57, 91, -41, 116, -30, 38, -19, 125, 2, 32, 73, 122, -16, -117, -86, -29, 108, 15, 63, -87, -17, 93, 44, -75, -109, -36, -64, -117, 84, 110, -70, -11, -109, 72, -3, 36, -119, -84, -93, -63, -37, 48, -72, 71, 93, -120, 63, 79, -106, 2, 68, -36, -6, 42};
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
    msg.setTimeStamp(0.029809644862059614);
    msg.setSource(7635U);
    msg.setSourceEntity(99U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(118U);
    msg.frameid = 251U;
    const char tmp_msg_0[] = {-78, 88, -122, 19, -102, -122, -117, 116, 32, 12, 20, 59, -19, -102, -123, 68, -120, -76, -5, 110, 46, 10, -26, 92, 79, -64, 120, 69, -15, 41, 32, 74, -28, -77, -85, -45, 73, 58, -77, 73, -121, 6, -47, 49, -66, -123, -120, 9, 86, -63, -125, 2, -77, -16, -118, 87, -66, 58, 5, 5, -115, 2, -82, -16, 20, 1, -34, 62, -34, 125, 49, -69, -102, 65, 11, 86, -53, 41, -9, -83, 113, -119, 39, 58, -61, 35, 122, -121, 64, 107, -101, -72, 60, 39, -37, 85, -103, -36, -23, 81, 32, -121, 123, -73, 44, -31, -34, 6, -8, 73, 116, 38, 77, 57, -88, 7, 13, 37, -106, 17, 48, 34, -96, 46, -23, -98, -101, 50, -94, -44, 109, 84, 11, -107, -61, -96, -70, 114, 7, -45, 64, -29, 86, 7, -119, 13, -65, -25, 100, 87, -10, -38, 85, 95, 87, -84, -58, -29, -9, 55, -104, 80, -7, -11, -49, -65, -35, 89, 9, 123, -12, -55, -98, -45, -52, -21, -2, 29, -98, -12, -49, 83, 47, -57, 105, -90, -44, 66, 50, 61, 55, 112, -107, 12, -110, 88, -12, -14, 14, 54, -7, 110, 24, -75, 21, -79, 123, 103, 22, 76, -89, 30, -100, 106, -35, -13, -90, -72, 99, 36, -113, 107, -62, 8, -48, 125, -46, 95, -102, 48, -61, -46};
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
    msg.setTimeStamp(0.042040136737724554);
    msg.setSource(51609U);
    msg.setSourceEntity(109U);
    msg.setDestination(15138U);
    msg.setDestinationEntity(125U);
    msg.frameid = 95U;
    const char tmp_msg_0[] = {92, -84, 31, 50, 49, 24, -11, -76, 1, -92, -62, 105, -84, 121, 90, 93, 112, 44, -26, -4, 124, -82, 107, 16, 4, -95, 100, -18, 13, -37, -62, 38, 21, 5, 55, 126, -80, -121, -58, 106, 36, -21, -16, -73, -65, 112, -2, -6, 25, -91, -125, -39, 8, -121, -90, 100, -18, 108, 23, -28, -15, 6, -41, 10, 59, 51, -102, -31, 113, -70, -59, -72, 8, -25, -120, -41, -25, 48, 10, -102, -89, -17, 19, 106, 50, 99, 71, -37, 103, 27, -28, -45, 107, 122, 100, -124, 29, 24, 88, -39, -97, -119, 68, 111, -91, -41, 52, -49, 95, 112, -24, 45, 17, -19, 70, 29, -59, 48, 126, 122, -77, 94, 89, -49, 17, -98, 123, -108, 126, 17, 73, -101, -124, -18, -74, 49, -88, -68, -25, -99, -4, 69, 104, 89, -24, 97, -8, 83, 69, 125, -11, -44, 116, 91, 97, 46, -25, 10, 106, -54, 95, -111, 58, 35, 22, 78, 90, -49, -29, 108, -20, -114, 102, 120, -5, -125, -31, -102, -72, 103, -50, 122, -83, 97, -30, -23, -86, 75, -128, -73, 73, -108, -27, -82, -13, 24, -81, 53, -125, -10, 35, -121, 113, 14, 52, 101, 81, 111, 125, -63, 28, -2};
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
    msg.setTimeStamp(0.9063630948576481);
    msg.setSource(57866U);
    msg.setSourceEntity(39U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(123U);
    msg.fps = 129U;
    msg.quality = 174U;
    msg.reps = 209U;
    msg.tsize = 20U;

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
    msg.setTimeStamp(0.7787124055370986);
    msg.setSource(59470U);
    msg.setSourceEntity(201U);
    msg.setDestination(19875U);
    msg.setDestinationEntity(77U);
    msg.fps = 125U;
    msg.quality = 240U;
    msg.reps = 162U;
    msg.tsize = 55U;

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
    msg.setTimeStamp(0.7751819437543154);
    msg.setSource(47573U);
    msg.setSourceEntity(11U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(19U);
    msg.fps = 148U;
    msg.quality = 44U;
    msg.reps = 117U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.5302605940120158);
    msg.setSource(55114U);
    msg.setSourceEntity(157U);
    msg.setDestination(22552U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.8023309711755456;
    msg.lon = 0.8999445501448329;
    msg.depth = 239U;
    msg.speed = 0.5680332773407061;
    msg.psi = 0.9208154013825962;

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
    msg.setTimeStamp(0.9759677752258858);
    msg.setSource(48148U);
    msg.setSourceEntity(215U);
    msg.setDestination(42213U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.17128769031416535;
    msg.lon = 0.295160243548226;
    msg.depth = 137U;
    msg.speed = 0.029677715136510296;
    msg.psi = 0.996209905767624;

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
    msg.setTimeStamp(0.44246475077421743);
    msg.setSource(45255U);
    msg.setSourceEntity(167U);
    msg.setDestination(7923U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.007292656251830509;
    msg.lon = 0.23599314171480046;
    msg.depth = 1U;
    msg.speed = 0.13029244046593624;
    msg.psi = 0.0031391147846931977;

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
    msg.setTimeStamp(0.5518319512381956);
    msg.setSource(36872U);
    msg.setSourceEntity(252U);
    msg.setDestination(34267U);
    msg.setDestinationEntity(196U);
    msg.label.assign("RXGQYTQDCPSOHWBZXOECZCPKAAJTMAPIMXMLWZMWGVCUZGUDMHFMMDLAVDYIRSGECJPSLAZUPMJARDJPTTKBVNUPTXKJSDYFWKUUFNUKQXSZXLEOVYQEQJJKHVNHHBLRHFGASROOWZDORORQVNUTMCXVTAKIFNVZPYNDIIUIEUWGKGLIJBVFPNSXYSKOLZYBEAQKWECITLEOLBTBQWECNX");
    msg.lat = 0.4755193518675914;
    msg.lon = 0.8496258382477738;
    msg.z = 0.7177961706583833;
    msg.z_units = 6U;
    msg.cog = 0.7812385609029862;
    msg.sog = 0.16748849224846085;

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
    msg.setTimeStamp(0.13627793247023656);
    msg.setSource(38352U);
    msg.setSourceEntity(151U);
    msg.setDestination(63962U);
    msg.setDestinationEntity(11U);
    msg.label.assign("XWTDWFBZXESCILAWJBOTNZWCSHFCMIMINUATTYTSOHNEXFMLSXUQATWLCPLTJYKEIQEDMJTYKDXROPRPPGAOBAOYJBGBLRGJ");
    msg.lat = 0.08070908094390317;
    msg.lon = 0.9855742260684082;
    msg.z = 0.7630384251228319;
    msg.z_units = 172U;
    msg.cog = 0.30790723966275046;
    msg.sog = 0.24627734300840876;

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
    msg.setTimeStamp(0.5268805050876822);
    msg.setSource(35229U);
    msg.setSourceEntity(18U);
    msg.setDestination(4069U);
    msg.setDestinationEntity(195U);
    msg.label.assign("SPAABHMEXCSSKOFSROSICWGCJXKGVQKPEKQXBEMDUOPMWLDAXXCEFBYDDSXKIRZLHQHKWKJGDDBXGFCPVQTYOXGYZVPHDMUISZRSFCLNBJUJMYUGJVNUYBBLHNQDEGJBTSIIHIWMORGWPFLWVPRXJQMVOWJFNHACTQNNCQTBTZY");
    msg.lat = 0.08671994222632118;
    msg.lon = 0.4698293695388861;
    msg.z = 0.9967600162748802;
    msg.z_units = 67U;
    msg.cog = 0.6936596701827662;
    msg.sog = 0.8522865443611676;

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
    msg.setTimeStamp(0.7692234113358853);
    msg.setSource(29691U);
    msg.setSourceEntity(221U);
    msg.setDestination(13521U);
    msg.setDestinationEntity(13U);
    msg.name.assign("AMSUOKUEBRWLEIHFRSEXPJVTMCVIDPEXKANXLLAVJTIFLOGAQTZGSRJRHGKQHNPDIFOCBVZUNQJGHBWJEVKUTQQNGFJVFWDEXCEQKIOGRHCHXDWDWCNDBYTSGIFDMFYMOLRRKXAAOMYJDIWFSEMLDPCWBKHXYCAHSASZVJZ");
    msg.value.assign("YAKRIGZRZZMFGGSNANZDVVADHMCXPSBEYTDTUFPPWIETWHALEMTQXLOYNQMIEZHXXAZECQRILALKYGNQCSPMKXCYFVYXNJKHODSDLBPWXJYNWWRJUHQFIWCQJVKNGQPJGNOJKQFQXJFBJYOMPZLUMRJIXOUDUVRHZABNYURWWH");

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
    msg.setTimeStamp(0.17655032914572244);
    msg.setSource(39886U);
    msg.setSourceEntity(66U);
    msg.setDestination(40609U);
    msg.setDestinationEntity(35U);
    msg.name.assign("VOWTACUPEFIKNFFTLZMJPHQBENMZNNZDEOOVWGLMXUDDVLCZSUUIGIQADPXSCQLRDAUKALQBUPKSBTSQQGLSWJ");
    msg.value.assign("TEOTDGKEANMOVKEAXXQZIZCUDRQRFKDPIPSLMRXGJDINBHQOCYJEZJRTIAECHOCYSLFZAHYVCNUHRNFCYYMLGYRCPPBRVIFSSOVJDQBQUWSXOBWJJSHXCNTTPRWOENKRELPSXGZLMEGEYTXWSKGXXKTPWHQTDZMQMFJHVUDUHKMITDCHZIXYUJUNMLTEHDLB");

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
    msg.setTimeStamp(0.7445301401936871);
    msg.setSource(1116U);
    msg.setSourceEntity(95U);
    msg.setDestination(4378U);
    msg.setDestinationEntity(72U);
    msg.name.assign("JIKQTXLCLRSXJNHIIVFJCCOYEEPJLZPZRQPWEGMBRZWNYVMZS");
    msg.value.assign("PDZWZBIKDHQEBIRFENQPTVHNHYANJKUFSZOQXZIJFPKSYCFGSMBIVDAWQDTUOKJMLQYIZVCRKDGNMQBEXETTNHMAPHUWGAMYEXMIYRMWBBSNGXUSFHVASWCZCKYGHRUGDWRPPLUWWDYRZSPAEAILTBCURFVFJRQFEKYVWOZNHSNQNMOLBXFPOJCXLTPHXDTY");

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
    msg.setTimeStamp(0.9615838800436006);
    msg.setSource(5947U);
    msg.setSourceEntity(195U);
    msg.setDestination(15833U);
    msg.setDestinationEntity(163U);
    msg.name.assign("JQWQCYACZOZYBGUAKZBEIGVTKLBRSMKDKOHDXCMBNVLFOISPFMEWJEEPNMRWAUTJUEGEHFYPKKEFQGKAHRFZFLHMFYUOTWGYNJLDCPDRGNWQYJKEVZVWIOVCGFVXJULBQJSCQNHTPIPLJNGRWVABIMHUIRWXEPPXHSYNMTMWZNXRZITYCQRDYVQOOBS");

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
    msg.setTimeStamp(0.4102909278629733);
    msg.setSource(31102U);
    msg.setSourceEntity(169U);
    msg.setDestination(21977U);
    msg.setDestinationEntity(231U);
    msg.name.assign("HLWVSPCRGRPAUPPVVGMVHEEJITRSABZZTNYCHCQPBSRVTOCXMRXSYGUWELU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EGPYOIMQUVAGTSQLPBIMOIWXMYZYZCDSNDDDFNLWOPESEEDXURYCDOJMJPFFVFBRUJCGTBNDVKSBOYXWUWAZLKWSTYSVNXBACHJJPDVHQKRHBBPHZCLQWSQTZRILQCPTQWLCXZGKLOVGCR");
    tmp_msg_0.value.assign("CAUAGAXJRBENQOSFNVOYDCOSTMNYWMZMTN");
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
    msg.setTimeStamp(0.510214668541808);
    msg.setSource(32287U);
    msg.setSourceEntity(175U);
    msg.setDestination(28365U);
    msg.setDestinationEntity(173U);
    msg.name.assign("YNILIVVOYSNKJKRWQXKTDTMGHTEUZOLUOILJKDOAQWKATVTLKTZHLFXOMZXCXCAUGFUVJDQLMERCYEQZQGGNTSEUCGPHHPNVIEHLRPFNMFSBZEAJPMIZOSASVDGJFEPFEAHETBDTYRDNQBFRUEUUKBKHBFRDFYCRFISTPZWXPCLBJRHSXUWMYIOCVPRNWQSSVJYLOWKQHGGNJIABGKYDOMZBXDLQNCQWWPJMAGHI");

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
    msg.setTimeStamp(0.3276889866687328);
    msg.setSource(36580U);
    msg.setSourceEntity(162U);
    msg.setDestination(9708U);
    msg.setDestinationEntity(102U);
    msg.name.assign("TCMVUORUDWXSPSIUGBQTZBDXNKVLRHXJWJQMIOAKCAODELCMFMAHBIZSWANMITOFIBDLCWOYRSFZOY");
    msg.visibility.assign("CNGLQVJXEBXWDEHDBSRWWBDTHMKGZDPXWIOFKCORUGSVNOOOEX");
    msg.scope.assign("IOWDSCTNHFMOWTWNOHVIHKWRAHRQXJQYOMXUZJOFQXUFDOWCMCXHKSENNGMTJYQSKNTXYPYOKNMDJYEGUAUZCVBGWPYPGBPDUSZOHFMEXWLPQZUUKACTZRIHERALRWPJTSLVVNOEPBDNWLZFLMCBRYHQEYIGMGDJAODHFCKQBLTIPUKBNJQIIBAVGJHPXBKKERZANLIXTFGFSZVUBESSLAFRIQMIGRKLVDYMXZCDEWZYJ");

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
    msg.setTimeStamp(0.23162401735839688);
    msg.setSource(55344U);
    msg.setSourceEntity(123U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(41U);
    msg.name.assign("CYCUBKJBQEAMYJAIGABQTRNWVTOEHKJLXKDZSZMXCATRCVUXAFISWLADZPOJCDACNTYOELFHQFBHNRLCVELSBPZUVGESTRBVDVCEWKRWVYUINSNPIMLFHBFDJIPESFQRXMHPRTZKJCBLGOOQOQGFOQXQVJINQYFSBPDNGVLWNESTPRLZHGMJ");
    msg.visibility.assign("XWRXLICUOBXZSGNSVAUXUXVPWTYHIRUGKKHZHWPWJPOEMBTAFKHBEEPDZWPTJOISGSMNYAYDGQFZIRLZJQSYKYDCWKFQONLURCLXDH");
    msg.scope.assign("WRVHIEHBEAVMTEZEVIDLXGCSTZYOBYDJNOALPOFTIXEZSTGXGLTQCCPCBUIRGDBCYWKGB");

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
    msg.setTimeStamp(0.36356291748309544);
    msg.setSource(25010U);
    msg.setSourceEntity(253U);
    msg.setDestination(53986U);
    msg.setDestinationEntity(208U);
    msg.name.assign("XWLWFQMRFSJZEDGABHHPUBYONTMTFUIKSXDWIUAGMGVDSBXPHAZWSCINMZSKVAIPHYTSFPLUIVDXEBAOOZDSLFAKMJTACVEUGKGQRBOIBKATCVOKFZX");
    msg.visibility.assign("TKDAYTHCYKFYMKMBLXGEUXCQYZJNANSQUOWJLGATJIBNYTIEAWIQCGWDXVBZCRRCBOJUITVCSNXWVONJRZJUSOSLBPWGGP");
    msg.scope.assign("JTBSBRCZZBRYTLCBVZAGRFOQWYJNRZSHTRASJVMXYVMOJILIHHFKLIIUWNRUFEWKTAMBQFHUFWJUAMELPTQRKMYOAKDONEDZZBZPDQLIICDNUZKKDXAXTOHLKWICMNVRMHSYLGAPZDAUVJXFNEUPOIGVEWBKZYNPGJBHJFYEFMOITHODECEMUUBCGGPQECF");

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
    msg.setTimeStamp(0.5850640619292031);
    msg.setSource(39145U);
    msg.setSourceEntity(6U);
    msg.setDestination(51570U);
    msg.setDestinationEntity(218U);
    msg.name.assign("CDFKUXCZOFWKFXMFHNPPBQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FDBNUQSZQAJFSRMWYBLEITJZHPMDPVVDLOELBYLNUGPOUIYRQBQMPFFPKDJRZDYBNTDBCUPPVTZWAHAOWZACSTJBZZCTKWKQWHGYBOEXRRHCKEXNJDEWYIXKVJZMPNPOJDDYUHWFKVCETMSBJLRRAHACZEMLSXIVKSCEKVVQWOTKNOAIFUGNAUHCJAUFSXWFKEXRALVSFULSYHYNMIMGUGQOXQTGNOJIB");
    tmp_msg_0.value.assign("QMEKPRDKVHTZJVHFNBGQKAIINSYWVSUCGMEOSALHCIRSCXOSCYSWUPXLIMAEHGDRYZDOKYWCCQUUAJNRUAJJKAZVQWXPIDYIGZEXRGXKVHBATISTQDQOMPVKHLBNPWMEJOUDXDEKVALTXZWRGKUYQKGZOFNTIJJXVHFPSLBJQRPBWNVSEXMCDLMLZFNWYTOANGQFNURWOHDMOVFUEOLJNTCAJFCCIYUESZZBGBT");
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
    msg.setTimeStamp(0.20733973609374856);
    msg.setSource(45110U);
    msg.setSourceEntity(87U);
    msg.setDestination(18008U);
    msg.setDestinationEntity(25U);
    msg.name.assign("VAMPRSNHGLZRCCOCTKKCBYUHYJRWKCIWUNQMMEECIIBUSJBXDOKAVAXHFJXTZVTAMPYXUTZGBVOQH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VNVWAQCDTJLEOPPDJWQOYUCBTIGZTYVZNNBCCJCEQLTHFEQUGJZSQXPLIRRCXKSHWOHXIJSFKJRHOUOWFPZZAZDFNURKNJXE");
    tmp_msg_0.value.assign("HPVCOZKIZWIUROHKQYNVVISTVWCBHZOCWUWDSBRBFUQIGXVTJJKLHTXOVSPEXSVVPLGENBJFSOZIUYRYHGFMKRXXBZPXCUNZIKAGNLBDXMBQDGXIYTFXHQGNDECWEDXRZZFWLZEDLKACUZHAWAHTYELJGTAYEJCDYUAOCNMCKMVSMUQFRRDAKLYOFSOWMDTRAPHGIIWJPSONPBNMBRJLFGOQFDPQUWRL");
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
    msg.setTimeStamp(0.26502107840325584);
    msg.setSource(42533U);
    msg.setSourceEntity(183U);
    msg.setDestination(6425U);
    msg.setDestinationEntity(156U);
    msg.name.assign("OBGUTGVZEDJWC");

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
    msg.setTimeStamp(0.598648621699929);
    msg.setSource(26722U);
    msg.setSourceEntity(251U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(150U);
    msg.name.assign("UCRMUCGKLVMCDIRSYZEMVBMHZEDVQNBKNTUZOLZFKSEVTZFUPNJVEZWAKRTJKAILGJOKAWRFCDMPHPMGXEADCNSWBNTJCFFHYZQ");

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
    msg.setTimeStamp(0.33105658433286267);
    msg.setSource(12801U);
    msg.setSourceEntity(83U);
    msg.setDestination(20106U);
    msg.setDestinationEntity(130U);
    msg.name.assign("YICOTNBTAHFSYAUABGOEOQKTSDRLGHJVCERHVLDKAIJRFUQKRIJMFWDBNJLHTXYFJIOLIRNRUVLWYQQDZPQWXLIPSXAFDWAISDDGETH");

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
    msg.setTimeStamp(0.8560611321676127);
    msg.setSource(34543U);
    msg.setSourceEntity(5U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BKCYBFHCOBGUNCZWOUPMSPHWIIRMEN");

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
    msg.setTimeStamp(0.5714870482338487);
    msg.setSource(28459U);
    msg.setSourceEntity(158U);
    msg.setDestination(9795U);
    msg.setDestinationEntity(74U);
    msg.timeout = 2187299338U;

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
    msg.setTimeStamp(0.8191429973923019);
    msg.setSource(62940U);
    msg.setSourceEntity(186U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(60U);
    msg.timeout = 3218137859U;

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
    msg.setTimeStamp(0.6162842792098719);
    msg.setSource(60436U);
    msg.setSourceEntity(46U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(136U);
    msg.timeout = 1049154419U;

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
    msg.setTimeStamp(0.5252793397937017);
    msg.setSource(58909U);
    msg.setSourceEntity(212U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(186U);
    msg.sessid = 892268482U;

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
    msg.setTimeStamp(0.49693791917286534);
    msg.setSource(52834U);
    msg.setSourceEntity(242U);
    msg.setDestination(54171U);
    msg.setDestinationEntity(166U);
    msg.sessid = 525798270U;

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
    msg.setTimeStamp(0.3247538472076891);
    msg.setSource(54892U);
    msg.setSourceEntity(210U);
    msg.setDestination(25708U);
    msg.setDestinationEntity(161U);
    msg.sessid = 2976438061U;

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
    msg.setTimeStamp(0.9213190891659864);
    msg.setSource(54314U);
    msg.setSourceEntity(119U);
    msg.setDestination(63665U);
    msg.setDestinationEntity(88U);
    msg.sessid = 3340796156U;
    msg.messages.assign("EOLUBHROPGDDIOHJQNPJUICUVVCTXKNAUYHINFFPADBGTXRBPBYRDNTAGPT");

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
    msg.setTimeStamp(0.3184570419656356);
    msg.setSource(20696U);
    msg.setSourceEntity(144U);
    msg.setDestination(36325U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1685161390U;
    msg.messages.assign("DKBLIXROQZHWEVVUDFAHWQPJGRPEUHPMBPLWAKEEIFYVCPACICNIDXDDVBWTBDRLQKAFUURLNOMIGNDBHAOGSYWVOCJWDFMVQUISPODXFGARFHTTHGREQLNJLWYBZURJZCYOFAEQJJZHYIACJPBGPGTBSAMQNEZABJVTXUOZGMINGRMNGZRLBLOMCZYMVEWJKCVSKSHCQTXUOYXCTFERYOXUKIWZLZDKSFI");

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
    msg.setTimeStamp(0.8830065220324346);
    msg.setSource(31530U);
    msg.setSourceEntity(20U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(117U);
    msg.sessid = 3477220952U;
    msg.messages.assign("BLETFMYQKIHKRPPVVNDJEEBGOBSTMSPNRCJXLARXXUJCTSZNXFDCKUHQCPXXWQYWAIGISATTSDYWTTNPFUOGVACQFRPDCGUEOQLIOPHGNAZXDJHWKBCYORLIEETNWGPLLMZAWOJLAUJMRGXJUNIZJBAVBMMGDOOPNJTYDWQIJMNEIIIRLOUYWSQEVMSCUGVSUKKETHUMDAZBBYBZZHRNWFHZGAKCVSHYYLRLQFKZHQMFP");

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
    msg.setTimeStamp(0.4717799707288308);
    msg.setSource(61720U);
    msg.setSourceEntity(178U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(204U);
    msg.sessid = 4074699631U;

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
    msg.setTimeStamp(0.7711488849241812);
    msg.setSource(64149U);
    msg.setSourceEntity(18U);
    msg.setDestination(38496U);
    msg.setDestinationEntity(114U);
    msg.sessid = 4284236793U;

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
    msg.setTimeStamp(0.06570296706323087);
    msg.setSource(27686U);
    msg.setSourceEntity(206U);
    msg.setDestination(17269U);
    msg.setDestinationEntity(79U);
    msg.sessid = 2237508146U;

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
    msg.setTimeStamp(0.4006135812860616);
    msg.setSource(54206U);
    msg.setSourceEntity(86U);
    msg.setDestination(20738U);
    msg.setDestinationEntity(168U);
    msg.sessid = 2902001113U;
    msg.status = 93U;

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
    msg.setTimeStamp(0.9663090559745676);
    msg.setSource(28883U);
    msg.setSourceEntity(120U);
    msg.setDestination(22896U);
    msg.setDestinationEntity(110U);
    msg.sessid = 1123321171U;
    msg.status = 65U;

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
    msg.setTimeStamp(0.6588413618187061);
    msg.setSource(26789U);
    msg.setSourceEntity(76U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(91U);
    msg.sessid = 484852873U;
    msg.status = 24U;

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
    msg.setTimeStamp(0.19837971299457746);
    msg.setSource(9926U);
    msg.setSourceEntity(219U);
    msg.setDestination(46268U);
    msg.setDestinationEntity(138U);
    msg.name.assign("LESYCYRWBIDPZFTUDCTYXWSTVECIDVMUJ");

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
    msg.setTimeStamp(0.9756447561919561);
    msg.setSource(1916U);
    msg.setSourceEntity(113U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(174U);
    msg.name.assign("WYQDJPAFUIXHTNBSDEMIJWHAILALTVUGKRRFNZUVLVUPWEQPAVGQVBOCQDPLCCHHCRXHSWDNMZGOQNLOACENZDYEYYXQJJMAVVTQYWKXIDKKZNNXPOFHEBWKISGKWGRBOCVJGMEBCMHYDILGHBILWMTDSWKIXHFCANSTFRUYBRCFARGBJENNPBTAXSMGZSQZLVUSEPMJTJULQSCEU");

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
    msg.setTimeStamp(0.7903646952898915);
    msg.setSource(32067U);
    msg.setSourceEntity(146U);
    msg.setDestination(22686U);
    msg.setDestinationEntity(107U);
    msg.name.assign("EFFFTVQCALBIVKSLOMCLDMEZGJTOKLOBGLNHTPUMSZUCBPAWWPDGRMBXUFKAEPUXXHCHFPRJRQONYVGJXENSFSGKHKWNIDRRZJCEBQDIPDZFCKYAHNHRXAUYUBWQEUKUFQZMIQUCWRJZGBORAJEAGTTIIWDTITVESXLYNPNVPRWZXHOBPSLMJTELHLFNXDSYMZQNGZKFD");

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
    msg.setTimeStamp(0.33805184084345385);
    msg.setSource(17583U);
    msg.setSourceEntity(101U);
    msg.setDestination(59374U);
    msg.setDestinationEntity(6U);
    msg.name.assign("LFEANUKEHVAZLCOIDFGULTSUGSKHXAZUEFTPEOYRZRCPEWONGGXWQHDPTQRCDIQQRDALBLTNWSJOHXUVRJUAGDOPJDBYGQLNPZNUIJVRQKFCOBVVUPAZMIEKQXPMKBARKZTXBWJJDBCBNKFGTCZIFHVSYEIOMKSCBYNWSIRGVFQKYLMJMJVYCWDPDHAZGZCBEIFESOHEMHXLXJAUYW");

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
    msg.setTimeStamp(0.9631139536035909);
    msg.setSource(23289U);
    msg.setSourceEntity(230U);
    msg.setDestination(38578U);
    msg.setDestinationEntity(149U);
    msg.name.assign("BYNPOUCWTKLRANGFCSKKYJGZLGYIDNMQOTEDUBS");

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
    msg.setTimeStamp(0.4376837898029614);
    msg.setSource(26793U);
    msg.setSourceEntity(254U);
    msg.setDestination(45191U);
    msg.setDestinationEntity(166U);
    msg.name.assign("AZRYLUNZPCGJIAQWZDKGHNRURNSJERYHBIZCUYIRSPMMJBTJEXKYJLBITVZHJTVOCNMNOEQWBLTBFUGQKODWFLQOB");

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
    msg.setTimeStamp(0.30173590150199614);
    msg.setSource(20402U);
    msg.setSourceEntity(102U);
    msg.setDestination(36037U);
    msg.setDestinationEntity(164U);
    msg.type = 90U;
    msg.error.assign("LEDBVDLTYBOAFYOWBRDRWUZKBVVCOKFPFGSZTPBIUXHSFXMZDBOVMRUQGNDGKRABTIEDHQABDEMWAQPHYIQLQNWITMXOXYNCUCXEQCROWRIEPOWINFKATJNSANOEZNJ");

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
    msg.setTimeStamp(0.4469716100473393);
    msg.setSource(43641U);
    msg.setSourceEntity(231U);
    msg.setDestination(18905U);
    msg.setDestinationEntity(97U);
    msg.type = 102U;
    msg.error.assign("QRXHDHPKVZIOOYYCLKJFNIJOPHQAUNJEUXXMCIQOSTTBMBBVYFFWSYIBQGRTDGXNKHZCQGSKVBJLMPOJUOOVYYFQMYRSTQEIPLTYSVCDECEVEVFPKAJQWDWUHGGWULLCDSSVQXHFEJDJKMCZNREFRNZMIKWBJZXKXAGIZBEWRAIHAHNAYXGURXLOPULFPDMHCNFOCZLEIOWLNFEZNTKYMIUTWHMUAWPUABSVBLARGBXCP");

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
    msg.setTimeStamp(0.6502474437415962);
    msg.setSource(64900U);
    msg.setSourceEntity(158U);
    msg.setDestination(25928U);
    msg.setDestinationEntity(32U);
    msg.type = 105U;
    msg.error.assign("CRCJZHNXVFVXJPGUEMBJBMLRNCCLGYPOZUDSKSXIZSDVTOXDTHPFQQRCQSARBYZENGURRMANVNWQKHEUYXGWWAEPDIOFSGOINUYQJDHIXTKHNLGTYJTSOCQBFTHAFFLSVIMIMPUIIXBDLBWMYDLLTBWMZEXBTXQAHWZVHUCYFUOULYHGJAEDQOENEFJGCVJGSQEHRC");

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
    msg.setTimeStamp(0.7607212513699815);
    msg.setSource(6748U);
    msg.setSourceEntity(78U);
    msg.setDestination(40843U);
    msg.setDestinationEntity(33U);
    msg.seq = 45915U;
    msg.sys_dst.assign("WDHODURSABWMOZIXCLXZVUNDBNIJDGLYJIZKSOAEEGPACWQAPHUMSSLUEMXQONPKZSULVBVMCVBDASFJMIWUEHO");
    msg.flags = 82U;
    const char tmp_msg_0[] = {120, 46, 82, 21, 113, 126, -10, -107, -88, -74, -126, 11, 75, -88, -103, -15, -19, -53, -106, 84, 69};
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
    msg.setTimeStamp(0.6849288607564958);
    msg.setSource(28500U);
    msg.setSourceEntity(163U);
    msg.setDestination(54514U);
    msg.setDestinationEntity(102U);
    msg.seq = 40574U;
    msg.sys_dst.assign("CNKUKMSOZASITHWCSTJFCTBDJCJTEUTGICMMEDIGVK");
    msg.flags = 35U;
    const char tmp_msg_0[] = {90, -6, -94, 21, 52, 87, 116, 75, -9, -37, 27, 14, -92, 7};
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
    msg.setTimeStamp(0.36819341176761033);
    msg.setSource(48250U);
    msg.setSourceEntity(169U);
    msg.setDestination(64236U);
    msg.setDestinationEntity(17U);
    msg.seq = 58970U;
    msg.sys_dst.assign("EYNCJZXKAEWTEMWXAVGMCTJKBFLKPRGUHXMGJFMIEZWAQDSYLDESCZVBFNOPAYOPCSLYHRJVBWSQXISPIIVFWKSGZXEJBQCDQHFENBFBQSUZPXVOHRJDOU");
    msg.flags = 197U;
    const char tmp_msg_0[] = {-118, 43, -12, 35, -107, 19, 31, -47, 41, -90, 5, -23, 19, 74, -92, -69, -89, 117, -69, 113, 53, -74, 33, -25, -97, 113, 57, -57, 104, -40, -13, 102, 16, -65, 79, -24, 6, -104, 96, 65, -124, -86, 9, 9, 52, -1, -50, -71, -116, 79, -64, 126, 111, 116, -107};
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
    msg.setTimeStamp(0.0605013447855407);
    msg.setSource(55902U);
    msg.setSourceEntity(175U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(229U);
    msg.sys_src.assign("PTFBASIPQHGVTQPZRGAQKSIHKYQJNVISBLJTHKBMHRLFHPPUUAIZNOAEUNZDONDICVYXLOCNAGJSJLGYYCGJRHE");
    msg.sys_dst.assign("OBBUWJYDHYCTBBASEHLCKRQBDEUMMWTNJELSBPNKGHFKMKPYDIAQVQTEMCYOOMNHOFZZLJUHJPTHVEGVXKDWSSAHPRSRZUCUGJVIY");
    msg.flags = 193U;
    const char tmp_msg_0[] = {64, -101, 3, -77, 56, -108, -114, 121, -14, -33, -108, -57, -67, 118, 23, -14, -85, -98, -77, 40, 35, -15, 1, -25, 53, -84, 118, 124, -75, 97, 73, 63, -6, -120, -116, 64, -17, 13, -12, -69, -106, -60, 119, 14, -25, 8, -67, -92, -18, 15, 11, -120, -76, 3, 29, -76, 48, 27, 106, 96, -8, 78, 93, 45, -80, -79, -23, 107, 65, -9, 68, 4, -91, 9, -55, -105, 40, 117, 25, 101, 36, -6, 68, 90, 34, -111, 113, 110, 118, -40, 66, -51, 51, 94, 50, -63, 12, 18, 84, 77, 10, 45, 78, -124, -128, 2, 60, -122, 77, 68, 35, -51, -91, -56, 39, 95, -86, -28, -12, -68, 90, 17, 2, 17, -108, 74, -48, -51, 85, 43, 108, 18, -34, -22, 10, 54, 106, 43, -20, 1, -59, -8, -14, -92, 66, -24, -60, -99, 57, 71, 53, 125, 33, 116, -38, 79, 58, -55, -9, 71, -26, 114, -3, -96, 24, 46, -79, -17, -97, -38, 42, -82, 75, 4, 109, 125, 99, -30, 61, -69, -36, -40, -77, -46, 116, 30, -89, 64, -95, 58, -2, -22, 125, 19, -58, -71, -57, 100, 57, 121, -82, -121, 28, -35, -128, 47, -69, 113, -13, -64, -49, 111, -127, 70, 65, 29, 32, 66, 80, 116, -72, 26, -79, 111, 14, -111, -114, -100, 99, -118, 43, 2, -67, 27, 120, 61, 23, 103, 76, 91, -88, -62, 48, -49, -112, 9, 16, 47, -102, 42, -122, 123, -114, -58};
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
    msg.setTimeStamp(0.24949283827856727);
    msg.setSource(4030U);
    msg.setSourceEntity(64U);
    msg.setDestination(31224U);
    msg.setDestinationEntity(72U);
    msg.sys_src.assign("WZOWPFQMHJMMBKFIEEFXJMIIJEDTUCWQDEZGORVXVELGNRTWLOENTJRRYGQNPTDWPOCDFBNNPSGSHBOHSGZVAJLFRWBP");
    msg.sys_dst.assign("QLXSZGMJDDRWUITJZYQMHLVMHOTIQFSZDPDQCMLNJWRZUXBELCIFRKS");
    msg.flags = 14U;
    const char tmp_msg_0[] = {72, 91, -85, 126, 93, 107, 66, -49, 80, 96, -66, -97, -30, -68, 77, -72, -55, 80, -105, -36, -126, 50, -75, -65, 31, -120, -84, 62, -84, 11, -85, -43, -99, 106, 71, -95, -98, -112, -108, 25, 83, 8, 54, -38, -83, -62, 38, -55, 95, -41, -83, -106, -123, -8, -88, -56, -52, -124, -52, 113, 2, -60, 15, 53, -57, -104, -46, 30, -91, -41, 100, 35, -11, -69, -127, 66, 115, 98, 80, 15, -83, 48, -97, 88, 126, 11, 40, -9, -25, -40, 84, -76, -102, 60, 59, -13, 98, -29, -40, 59, -73, 25, -103, -83, -101, 46, 39, -30, 17, 99, 107, -61, -54, -117, -106, -69, -93, -117, 91, -51, -100, 87, 76, -51, 58, -118, -72, -91, 81, 103};
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
    msg.setTimeStamp(0.9548859170225449);
    msg.setSource(5986U);
    msg.setSourceEntity(231U);
    msg.setDestination(54880U);
    msg.setDestinationEntity(36U);
    msg.sys_src.assign("OTFQKVXHIJKIZUPUGNGTCKXTXKCBQUSGMVFSFXTHZVURVNRJWANMAXKBYUGRRIDBSAWOCYMMTPSHJXKNPTMPMLBCZIADJOUPYSXQANFGQEVCOAVSUMKDOGOIYGVYVBNQDLIFAYDZLRFIQSYBOESLWWEJCWOHMBWPDFTEOLTXHHRYYPNFBZBJPDIWXXMCWFJQJMZVQCAPRITKSQZFECDLERRBLTHLKENGU");
    msg.sys_dst.assign("WNMJXWGJHJRODQV");
    msg.flags = 162U;
    const char tmp_msg_0[] = {-89, -68, 102, 87, -43, 103, -52, -127, -117, -112, -65, 34, -113, -7, 110, 49, -103, -51, 67, 123, -104, -51, -93, -56, 43, -115, -55, 23, -6, -14, 114, 101, -122, -68, -127, -55, -25, -115, 3, -65, -13, -104, 94, 114, -82, 82, -35, 60, -111, -15, -35, -114, -40, -71, 48, -72, 27, 112, -110, 66, 112, -38, 59, 58, -120, 62, -68, -125, -52, 108, 6, -119, -6, 94, -95, -44, 92, -121, -48, 74, 108, -90, 120, 106, -24, -108, -74, -44, 79, 28, 79, 5, -68, -112, -94, -34, -36, 63, -8, -92, -73, 95, 123, -94, -35, -79, 54, -66, 121, -2, 19, -65, 110, -44, 20, -119, -105, -93, -31, -72, 5, -10, -101, -69, 74, 45, 38, 111, 38, 105, -1, 60, 79, 118, 122, -43, 3, 80, -34, -43, -97, -83, 118, 8, 79, 51, 42, -54, -3, 116, 53, 13, -53, 49, -69, 78, 34, -67, -19, -38, 39, 112, 85, -57, 7, -38, 92, 75, -82, -67, 9, -21, -52, 33, -40, -19, 105, 94, -104, 126, 11, 124, 104, -48, 61, 97, 19, -96, -13, 126, -77, 103, 54, -30, 113, 54, 92, 36, -26, 53, -5, 38, -72, -37, 4, 48, -96, 17, 10, -67, 1, -95, -106, -34, 120, 27, -87, -106, -60, 111, -119, 108, 1, 122, 7, 78, 47, 90, 18, -123, -126, -124, -48, -58, -34, 0, 89, 52};
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
    msg.setTimeStamp(0.18841736756582794);
    msg.setSource(58786U);
    msg.setSourceEntity(164U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(159U);
    msg.seq = 20892U;
    msg.value = 125U;
    msg.error.assign("REGEWTVDFIQUQAAQNLBRKKDZGIUCPASBRVPHBZASMLYFIAZQTHFDJWBLGEORESFDITJKSTEDZYKSNUJGOLXFIXBNFQBVFMXDVYGVRLZSRQMUHLKAYGXPMUWKLDAXGOVWNETJOZHBJPPSCYMRFCQXNWNXFTMMSVKYOACHQDNAOWRIW");

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
    msg.setTimeStamp(0.6418445550842191);
    msg.setSource(34832U);
    msg.setSourceEntity(244U);
    msg.setDestination(42607U);
    msg.setDestinationEntity(243U);
    msg.seq = 32861U;
    msg.value = 131U;
    msg.error.assign("CEREJTMERATNHOLTQHDYTHLAYRDPNHPTIXTKGRWKOTQUGVSMOWWALIJFGTSVEHCBBIJUZAKGXWNJQKAPKBLMOLOCRHTFEXMOSANDBUXKCDUBZYLQRBYRXVJRGNXWZSXYSIVDRE");

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
    msg.setTimeStamp(0.7314897539273313);
    msg.setSource(14881U);
    msg.setSourceEntity(37U);
    msg.setDestination(4354U);
    msg.setDestinationEntity(108U);
    msg.seq = 4319U;
    msg.value = 33U;
    msg.error.assign("EIATSDBHLFGDISMACYFZCLMXKQLTBBVQIJMOHAXCRC");

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
    msg.setTimeStamp(0.05533512850533173);
    msg.setSource(10974U);
    msg.setSourceEntity(249U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(69U);
    msg.seq = 3202U;
    msg.sys.assign("LJIUZVNBZJVMGXDGWOJUPIVHDXEISBBYLGO");
    msg.value = 0.1241368533046543;

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
    msg.setTimeStamp(0.2488861884359086);
    msg.setSource(39082U);
    msg.setSourceEntity(145U);
    msg.setDestination(22746U);
    msg.setDestinationEntity(219U);
    msg.seq = 34487U;
    msg.sys.assign("ZWHIKNUJSSBIWREIYSPJARHQXOBJKWXACFLQDXBWXIPJGLABZDCTUENFQFPYHEDWGKRBTGIXCZNMVNRMKMCOJDPLOQQUFCCZJEXQWRMHCMMIDERAEDKLSENVLESLHGSGGHYJTXZMINSKLYFDTRYQROCNZPPOMZYWHPFDIBIFXTCWLZUESALWPSFVUOKZKPNBVKHAUVYEX");
    msg.value = 0.3715780458124389;

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
    msg.setTimeStamp(0.08351994038203481);
    msg.setSource(23316U);
    msg.setSourceEntity(98U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(202U);
    msg.seq = 43120U;
    msg.sys.assign("CDLAXRKAOLEUOAUZWVICAGGEZNKLNZFDEJLPWVFBRNVGJIQXLVSCKBHMXFAHVTCQDYWCNYXTYMUANRNNHUJOAPMFAXSKCDUJDBJYQZEOZWFNSDGMWDFEBLSKXVFBN");
    msg.value = 0.12729390495974768;

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
    msg.setTimeStamp(0.5610248501914094);
    msg.setSource(48808U);
    msg.setSourceEntity(158U);
    msg.setDestination(40491U);
    msg.setDestinationEntity(98U);
    msg.action = 53U;
    msg.longain = 0.41369690531628256;
    msg.latgain = 0.7070028895196059;
    msg.bondthick = 456360291U;
    msg.leadgain = 0.8705733776205599;
    msg.deconflgain = 0.40620016086961763;

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
    msg.setTimeStamp(0.8528566307319186);
    msg.setSource(61346U);
    msg.setSourceEntity(240U);
    msg.setDestination(57182U);
    msg.setDestinationEntity(178U);
    msg.action = 46U;
    msg.longain = 0.8955358278652592;
    msg.latgain = 0.69873351690766;
    msg.bondthick = 3497466233U;
    msg.leadgain = 0.8970650377867242;
    msg.deconflgain = 0.8638489529548012;

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
    msg.setTimeStamp(0.4081953305034194);
    msg.setSource(1771U);
    msg.setSourceEntity(144U);
    msg.setDestination(20063U);
    msg.setDestinationEntity(8U);
    msg.action = 185U;
    msg.longain = 0.5142053040592547;
    msg.latgain = 0.4901949413891742;
    msg.bondthick = 3445197346U;
    msg.leadgain = 0.15118202018703286;
    msg.deconflgain = 0.09555865646178696;

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
    msg.setTimeStamp(0.9258680045954567);
    msg.setSource(344U);
    msg.setSourceEntity(156U);
    msg.setDestination(50252U);
    msg.setDestinationEntity(103U);
    msg.err_mean = 0.17194208066664174;
    msg.dist_min_abs = 0.09074584882632686;
    msg.dist_min_mean = 0.01173957574614759;

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
    msg.setTimeStamp(0.8347232080296504);
    msg.setSource(41473U);
    msg.setSourceEntity(93U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(76U);
    msg.err_mean = 0.8870669716018216;
    msg.dist_min_abs = 0.39744807782231384;
    msg.dist_min_mean = 0.9756218578825021;

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
    msg.setTimeStamp(0.33831402117549847);
    msg.setSource(30475U);
    msg.setSourceEntity(149U);
    msg.setDestination(31456U);
    msg.setDestinationEntity(151U);
    msg.err_mean = 0.9460111140673356;
    msg.dist_min_abs = 0.00964682164558206;
    msg.dist_min_mean = 0.7543140291320302;

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
    msg.setTimeStamp(0.10712426105714523);
    msg.setSource(47338U);
    msg.setSourceEntity(167U);
    msg.setDestination(54679U);
    msg.setDestinationEntity(154U);
    msg.uid = 67U;
    msg.frag_number = 209U;
    msg.num_frags = 36U;
    const char tmp_msg_0[] = {103, -92, -24, -8, 19, -58, 13, -6, -118, 88, 120, -118, 55, -107, 89, 45, -50, 115, 32, 80, -126, -66, 126, -79, -107, -110, 1, -64, 115, -122, 76, -87, -49, -12, 16, -8, -41, -29, 104, 118, 73, -49, 11, 87, -25, 93, -41, 64, 87, 61, -87, 46, -9, 116, -55, -1, 5, -28, -84, 92, -111, -92, 124, -35, 18, 15, 33, -101, 66, 19, -112, 125, 36, -8, -49, -35, -117, 101, 49};
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
    msg.setTimeStamp(0.3384630939780925);
    msg.setSource(60114U);
    msg.setSourceEntity(156U);
    msg.setDestination(18871U);
    msg.setDestinationEntity(92U);
    msg.uid = 34U;
    msg.frag_number = 231U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {85, -52, 19, 80, 72, 9, -28, 9, 112, 105, 86, 81, 41, -29, 118, -40, -110, 68, 112, 29, -74, -114, -105, -113, 3, -2, 103, 85, 26, -33, -66, -16, 51, -26, -64, 116, -33, 103, 118, 70, -27, -6, -33, -80, 28, 63, 65, 113, 42, 65, 71, -40, -2, 40, -52, -9, 96, -45, -102, -59, -10, -49, -120, -25, -114, -2, -76, -106, -128, -60, -100, -112, 35, -121, 65, 64, 29, 126, 29, -26, -54, -62, -110, 48, -10, -48, 26, 67, -13, 104, -90, 23, 105, 61, 14, -85, 8, 12, 123, -72, 120, -121, 112, -41, -102, -62, -83, 123, -106, 19, 97, -4, 126, -1, -46, -70, -32, 73, 110, -35, 35, -40, -87, -45, 111, 110, 118, -124, -1, -89, -113, -7, -117, 46, 125, 18, 119, -25, 12, -61, -124, 90, -41, 39, -87, -102, -56, 63, 71, 60, -109, -82, -71, -37, -9, -120, -67, 83, -79, -56, 61, 51, -86, -51, 109, -27, 3, -55, -24, 57, -30, -98, -112, 113, -73, -59, -92, -77, 25, -70, 97, -37, -23, 44, -32, 87, 23, -9, 118};
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
    msg.setTimeStamp(0.5287055340173741);
    msg.setSource(60232U);
    msg.setSourceEntity(51U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(253U);
    msg.uid = 212U;
    msg.frag_number = 15U;
    msg.num_frags = 108U;
    const char tmp_msg_0[] = {-91, 3, 6, 96, -53, -47, 126, 71, 57, -31, 47, -31, -101, -5, 84, -15, 33, 69, -28, -108, 87, 80, 3, 41, 42, 41, 38, -57, -121, 108, 106, -116, 101, -26, 93, -92, 104, -90, -126, 47, 23, 59, -125, -84, -71, -27, -28, 37, 42, -85, -4, -128, 0, -7, -17, -61, 19, -118, 0, 27, 37, 65, 24, 20, 10, -115, -106, -26, 72, -126, 45, -98, -122, -93, 93, 16, 40, 69, 67, -73, -124, -94, -120, -7, 65, -94, 70, 115, -13, -90, 17, 107, -102, 39, -92, 96, 51, -89, -39, -92, 43, 55, -44, -31, -35, 104, -34, -103, 121, -14, -19, -102, 77, -74, -115, 100, -2, -15, 33, -19, 51, -56, -123, -61, 92, 66, -119, 54, 39, -88, -73, -52, 14, -29, 13, 76, 102, -118, 122, -73, 81, 33, -68, 82, -74, -77, 58, -110, 83, -115, -97, -18, -39, 48, -45, 25, 21, 109, -124, -59, -118, -89, -2, -64, -20, 93, -105, 113, -100, -21, 21, 1, 93, 37, 105, -104, -88, -46, 102, 107, 30, 113, -75, 72, 52, -56, -28, -35, -88, 91, -86, 120, -40, 55, 75, -42, -7, 40, 45, -15, 27, 33, -49, -35, -105, -123, 91, -26, 90, -13, 47, -54, 46, 15, -125, 47, 13, -92, -18, 57, 19, -14, 31, 33, 9, 92, 19, 15, 123, -9, 104, -84, 92, 102, -94, -102, 56, 28, 94, 120, -81, 94};
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
    msg.setTimeStamp(0.07358227380025839);
    msg.setSource(27544U);
    msg.setSourceEntity(117U);
    msg.setDestination(542U);
    msg.setDestinationEntity(3U);
    msg.content_type.assign("LUBDIUCTUJWXXDBRQGNKHDDNFJTSNEZOFLMXPLVHANZARDFPMKZGRXDVOFNBOOPZVRHWZLSFLHZAQFTPTKLVYKWBCACCNUHRYUPSTNXVLIJDPBQSQMRUGNKIIUSRCVIYKWUSFOYYHTTZZJGMHBWGGYCOAQZCP");
    const char tmp_msg_0[] = {46, 99, -7, -79, -113, 97, -72, 100, 1, 90, -82, -93, 40, -31, 66, -126, -7, -2, -128, -43, 87, -29, -56, 34, 24, 4, -52, -94, 79, 78, 88, 103, -123, 123, -74, -76, 76, -82, -93, -54, -93, -25, -27, -97, -1, -65, -83, 53, -15, 91, 12, -18, 19, -50, 25, 101, -109, 55, -126, -47, 34, 79, 100, 23, 33, 2, -100, 60, -112, 89, -98, 112, -3, -59, -114, 18, -8, -20, 112, -123, -30, 27, -85, -4, -88, 23, -57, 47, -114, 33, -80, 89, -70, -82, 73, 9, 71, 86, -121, -22, 126, -100, 80, 113, 20, -47, -75, -108, -81, -42, 52, 55};
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
    msg.setTimeStamp(0.16203299483626066);
    msg.setSource(36643U);
    msg.setSourceEntity(15U);
    msg.setDestination(16307U);
    msg.setDestinationEntity(63U);
    msg.content_type.assign("DXMICPOGWPIRPGYDLHTCBWVMYTCOJZNKSIIKMLIAXJZUYEEZRSONFISMEQSCICAFLEGNWDRGPSKZGNYOVWVBIVWVZOHXUBHBXGUDYHZDOFIFHLJDGEKF");
    const char tmp_msg_0[] = {55, 113, -93, 30, 91, -82, 78, 119, 33, -54, -6, -42, -95, -114, 63, 73, 108, -74, 118, -84, 48, -39, -53, -99, 15, 2, 44, 24, -81, -104, -86, 120, -90, 54, 29, -22, -114, -49, 121, 36, 83, 105, -114, 103, -26, -49, -10, 81, 66, 0, 59, -93, -108, -94, -74, -77, 63, 60, -58, -100, -92, -119, -22, 30, -44, -28, 84, -57, -123, 48, 64, -69, 27, -123, 105, 80, 90, 122, 39, -28, -84, -62, 107, -37, -15, 105, -27, -85, 97, 79};
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
    msg.setTimeStamp(0.05855129436726292);
    msg.setSource(50877U);
    msg.setSourceEntity(134U);
    msg.setDestination(14329U);
    msg.setDestinationEntity(206U);
    msg.content_type.assign("JPCZTOZALDHBAHSEMJXPRHBLBVZWPQAIZAKQOXMPKBAWLATDLUGLYXCFENRXGTKTFFWYPWSTNQWHLWOSYXRZQFRNXIOWNUYDNDCEGJETBHKHDLAOIJKUFMYUERMCKFSWSSVVGIZFO");
    const char tmp_msg_0[] = {-65, -28, 115, -27, -81, 24, -97, 23, -10, -103, 69, 48, 92, 79, 115, -4, 125, 43, 64, -51, -3, 112, 97, 86, 62, -33, 23, 15, 41, -117, 5, 71, 15, -125, -69, 60, -41, -75, -12, 55, -48, -100, -110, -85, -98, -29, -78, -26, 83, 78, 58, 118, 56, 99, 52, 35, -37, 74, 73, 100, 88, 33, 13, 3, -72, -94, 72, -1, -61, 103, -66, -13, 17, -27, 28, 66, 88, -66, -43, 20, -96, -42, -8, -90, -121, -50, -118, -80, 5, 7, -60, -7, -98, -86, -84, -87, 65, -84, -122, 32, -23, -119, -31, 87, 61, -110, -100, -92, -58, 43, -44, -90, -76, 74, 29, 113, 4, 112, 118, -41, -30, -95, 34, 4, 56, 114, 86, -7, 109, -92, -120, 88, 2, 118, -82, 120, 6, -67, -35, 111, -121, 23, -104, -28, -7, 95, -94, 94, -101, 117, 54, -74, -78, -119, 118, -43, 76, 26, -5, 72, -79, 28, 72, -63, 78, -82, 38, 25, 118, 119, 105, 125, 9, -28, -22, -56, 47, -113, 44, 24, 63, -114, 70, 106, -29, 31, -35, 22, -74, 3, -83, 56, 28, 25, 45, 103, 100, -27, -8, 71, 62, 37, 69, 3, -11, 45, 13, -71, 22, 50, 41, 8, 71, -7, -114, 116, 75, 48, 112};
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
    msg.setTimeStamp(0.06484181201591166);
    msg.setSource(15267U);
    msg.setSourceEntity(47U);
    msg.setDestination(18365U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.4970165012141917);
    msg.setSource(23606U);
    msg.setSourceEntity(248U);
    msg.setDestination(50954U);
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
    msg.setTimeStamp(0.8174159258554617);
    msg.setSource(19749U);
    msg.setSourceEntity(176U);
    msg.setDestination(46352U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.5662167240130841);
    msg.setSource(64968U);
    msg.setSourceEntity(39U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(172U);
    msg.target = 18252U;
    msg.bearing = 0.010487841612815685;
    msg.elevation = 0.21088571793028155;

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
    msg.setTimeStamp(0.9501033652810448);
    msg.setSource(43818U);
    msg.setSourceEntity(166U);
    msg.setDestination(50098U);
    msg.setDestinationEntity(213U);
    msg.target = 17678U;
    msg.bearing = 0.5164127112927467;
    msg.elevation = 0.24888658660639518;

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
    msg.setTimeStamp(0.7264642183397584);
    msg.setSource(32372U);
    msg.setSourceEntity(189U);
    msg.setDestination(29574U);
    msg.setDestinationEntity(86U);
    msg.target = 26681U;
    msg.bearing = 0.16984380997510795;
    msg.elevation = 0.693360801701561;

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
    msg.setTimeStamp(0.49926918121753583);
    msg.setSource(12042U);
    msg.setSourceEntity(52U);
    msg.setDestination(36240U);
    msg.setDestinationEntity(253U);
    msg.target = 46987U;
    msg.x = 0.0775592656138735;
    msg.y = 0.6140368002072223;
    msg.z = 0.6477051966820463;

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
    msg.setTimeStamp(0.8155833567740693);
    msg.setSource(17388U);
    msg.setSourceEntity(125U);
    msg.setDestination(8867U);
    msg.setDestinationEntity(99U);
    msg.target = 26397U;
    msg.x = 0.6027362962859479;
    msg.y = 0.49473533421314286;
    msg.z = 0.001262625217013591;

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
    msg.setTimeStamp(0.11367460615421121);
    msg.setSource(58764U);
    msg.setSourceEntity(189U);
    msg.setDestination(58956U);
    msg.setDestinationEntity(24U);
    msg.target = 6739U;
    msg.x = 0.7424538556232012;
    msg.y = 0.7073914733350031;
    msg.z = 0.12773102637728784;

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
    msg.setTimeStamp(0.09352320415966786);
    msg.setSource(19505U);
    msg.setSourceEntity(94U);
    msg.setDestination(55562U);
    msg.setDestinationEntity(52U);
    msg.target = 45310U;
    msg.lat = 0.8904053536738187;
    msg.lon = 0.662757289757104;
    msg.z_units = 99U;
    msg.z = 0.17402178739143992;

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
    msg.setTimeStamp(0.8837084610577984);
    msg.setSource(16865U);
    msg.setSourceEntity(79U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(164U);
    msg.target = 15246U;
    msg.lat = 0.30320768025368416;
    msg.lon = 0.3122678360052019;
    msg.z_units = 163U;
    msg.z = 0.42390165289411863;

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
    msg.setTimeStamp(0.33274391023518146);
    msg.setSource(17387U);
    msg.setSourceEntity(108U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(1U);
    msg.target = 12668U;
    msg.lat = 0.01664994224118832;
    msg.lon = 0.13655214155174122;
    msg.z_units = 20U;
    msg.z = 0.6390896484909031;

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

  return test.getReturnValue();
}
