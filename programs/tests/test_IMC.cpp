//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 4c9dbd0e8271e97464c858f9d536d3f5                            *
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
    msg.setTimeStamp(0.7567203356023997);
    msg.setSource(26232U);
    msg.setSourceEntity(235U);
    msg.setDestination(4724U);
    msg.setDestinationEntity(210U);
    msg.state = 176U;
    msg.flags = 254U;
    msg.description.assign("FHMJHEDJKWFCHSQABFKVAXLETQDUMULKCBDPGRMLFLREBPAXRUMDIHDVUNNFXOQEIWMZPGNQRXQUQZHRYYWNPWGAYOTTDLISYAGLIRQTJEBBXGZECPTYLZFNSDKFCZROZPVXMIYUZLYVMBLAMJBVDTKPOAOFIVKJJBKNVGDLXWCEYTYEHIXNJXCNSNKBBSCZHTRIRGNQVSUWSKHXAWVCWCJE");

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
    msg.setTimeStamp(0.8277262975977159);
    msg.setSource(39281U);
    msg.setSourceEntity(138U);
    msg.setDestination(58116U);
    msg.setDestinationEntity(220U);
    msg.state = 197U;
    msg.flags = 183U;
    msg.description.assign("XAGLPLPUDYAUMLUSXFQXORCDQBELEMWVEIKWREKVVLTHEOPMBCATSMHWZSFHYSCSOJXBJRFGXQNDUVWEQXXBRNDGRJJSSZDBBEPZJNUCHKMTNTNFFRHFQBICVWOPQJYYQVZBUOEAWOMQLPKTWINYFLKYKKCODQHZHANJBTGRXLGYNIHBSHKGNAFCGLYHKXOTWVPEMGDSRILUV");

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
    msg.setTimeStamp(0.6861220859126347);
    msg.setSource(39597U);
    msg.setSourceEntity(228U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(31U);
    msg.state = 85U;
    msg.flags = 102U;
    msg.description.assign("SKOBLWKYAQINTYLZVMCOBMLCBBCLCOHYSMUWDEDJQIDZVONDSYDBNYMJTXEJRUIQPHZDZXYVVTKJPCWLXIUMRRCLFEEAHGNFZQGSHYSGOFELNRHCGIXADFSAAKOHAOCXFPEQIGAESFVPZVKBBPTXMKRVRYIMPNWTTVTQYMGXJUGBHGHKPLMSBLFZWNKOGCJEXXFIAVJQAQORWTTIDQPDEMHXUSRFFJURNNZZEJHUSWKYLAZGCVKI");

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
    msg.setTimeStamp(0.37665388415345324);
    msg.setSource(13405U);
    msg.setSourceEntity(224U);
    msg.setDestination(23506U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.1870650124236931);
    msg.setSource(33020U);
    msg.setSourceEntity(147U);
    msg.setDestination(34921U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.33477367728991714);
    msg.setSource(34252U);
    msg.setSourceEntity(252U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.9062798356368299);
    msg.setSource(60571U);
    msg.setSourceEntity(69U);
    msg.setDestination(3438U);
    msg.setDestinationEntity(240U);
    msg.id = 22U;
    msg.label.assign("HJRQVGCJFLMMNIDTEYPOJXATXGJOSRNTOMDKKHQZAPRTPLHIBLBQWUXGBPVFRSHVAPYLYBJMPLURHVKGCODPVNDACUEHTVSCRFUDLBQZCFMFHUPOIXAITKLKWVCIMEYOXYZHMZANUPOWSWFQMSEWAQIXW");
    msg.component.assign("HIKOVTJKGLZKXOZUQYYMDJUSKRMVPJTALBOSNQXCWUPKCWFJXMBNSWGZTUGWWTRNPOSQCZPQEPNSTXMZNAWBWPRJBBBLQDIDRKNYAAWCRZJLUHNXO");
    msg.act_time = 29164U;
    msg.deact_time = 34634U;

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
    msg.setTimeStamp(0.8299855209112791);
    msg.setSource(15668U);
    msg.setSourceEntity(235U);
    msg.setDestination(7416U);
    msg.setDestinationEntity(96U);
    msg.id = 102U;
    msg.label.assign("ZFSFRBNABIABDDPFPFQ");
    msg.component.assign("FWUPMEWMAWONCJAONFJSAQKTSJNHMSXGZILRCMPAYNDTHTQRWMAFQJVTTLPBPDHDXYZFQPJDIGXVGIGPLYQYRYHECGBEZILOGUCNZOTMSQCEHNRXODFOPDNBQCSGLNHWFZRUUAEWOWCJKHTBXJGXBTLDVINQBJXLZMHRSKIGYHSWEDFIMRPSPOYAGEKWUKBIKQAVTVZCVXKBKYFVUURXAPDZFIZYDOUV");
    msg.act_time = 28327U;
    msg.deact_time = 12341U;

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
    msg.setTimeStamp(0.5225025997099797);
    msg.setSource(38374U);
    msg.setSourceEntity(86U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(157U);
    msg.id = 215U;
    msg.label.assign("APHFUXFPORVBABRDKCJCULIIQVVVBJSJRSUDLGMESVYCQBTLYKBHGNYCDOCNOEEQEGSAITWEQGIAKWAXCKKTUVHQCDAPTYBPZVXRFORBSWGCQHZZGVOHPMLDKNKOSTXFYIUVCLKURYEAEKOZDPYFOIMMWZZHWXMJOQNJZHFFDQPGXSTQYJBFCDMEPUNRLUIAUOBQFSLIINENEW");
    msg.component.assign("ADIGZTURUHGSPNLGJTDXMSBSQIGOJRVPXFXTPSMXZFKWPJZDIGSMKJFJXCTSPGZVXSLJXCVBMBNMPCDNAOYHFFGWVELDX");
    msg.act_time = 88U;
    msg.deact_time = 28988U;

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
    msg.setTimeStamp(0.20729203862773737);
    msg.setSource(32685U);
    msg.setSourceEntity(243U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(244U);
    msg.id = 157U;

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
    msg.setTimeStamp(0.43715441269245126);
    msg.setSource(17298U);
    msg.setSourceEntity(117U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(175U);
    msg.id = 146U;

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
    msg.setTimeStamp(0.6910657191352846);
    msg.setSource(37046U);
    msg.setSourceEntity(25U);
    msg.setDestination(26591U);
    msg.setDestinationEntity(222U);
    msg.id = 8U;

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
    msg.setTimeStamp(0.8099893514426293);
    msg.setSource(15691U);
    msg.setSourceEntity(113U);
    msg.setDestination(48995U);
    msg.setDestinationEntity(20U);
    msg.op = 93U;
    msg.list.assign("FWUUDNAOZCRTTAMZKUTWCNPUTWMXSYGBCYVMIGBFDXZOPZYDJBCILGBNDIHJRRKLOHBHJFZKLCFSMJQHYV");

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
    msg.setTimeStamp(0.6090217079064184);
    msg.setSource(10829U);
    msg.setSourceEntity(131U);
    msg.setDestination(18010U);
    msg.setDestinationEntity(29U);
    msg.op = 77U;
    msg.list.assign("ZRCLKOXNQSEQNFQQBLSBGJNJURGXCZKCRGWNTMVHVWMTJALRGESRJJLUKILYAESSPBCYQWNMEEXONEDINFZCMYJYTPIJQGAXWBDODFPLOVNVYEOUWSKZPDCIFUPWMERQRESDMHDLUPLTIJUFPIPNOWRBFTXUQTJAHQFKAZHUTTDSICURXOYLGXMZSFBFNZHWGPAJHOOVPZCMXVTUDCFWEYHIGKGMIWCBAASAVIXYKB");

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
    msg.setTimeStamp(0.7606420998563711);
    msg.setSource(30049U);
    msg.setSourceEntity(119U);
    msg.setDestination(37577U);
    msg.setDestinationEntity(31U);
    msg.op = 202U;
    msg.list.assign("HUAQIJIELVMMAKWKMYSYBMAUWNJUTPZANJEXSFUFKVPKCQZGYRZPMSXLJDYYFQBDNHWXCPTRXSPWXTIZLRRWRXDS");

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
    msg.setTimeStamp(0.27193040952295433);
    msg.setSource(25221U);
    msg.setSourceEntity(230U);
    msg.setDestination(33742U);
    msg.setDestinationEntity(207U);
    msg.value = 78U;

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
    msg.setTimeStamp(0.765192867102729);
    msg.setSource(30392U);
    msg.setSourceEntity(79U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(13U);
    msg.value = 67U;

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
    msg.setTimeStamp(0.24833586255661344);
    msg.setSource(12304U);
    msg.setSourceEntity(60U);
    msg.setDestination(34257U);
    msg.setDestinationEntity(253U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.7542586468845952);
    msg.setSource(29611U);
    msg.setSourceEntity(203U);
    msg.setDestination(43900U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("VVEPIAUBHPLQATWSEZHDGQARVLDEEBRLPDYORSHQNAQZHUJVIAJZCECZVRYENINLRMDJFYXVF");
    msg.message_id = 55240U;

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
    msg.setTimeStamp(0.29016758394363507);
    msg.setSource(22983U);
    msg.setSourceEntity(150U);
    msg.setDestination(21626U);
    msg.setDestinationEntity(90U);
    msg.consumer.assign("YDDHZXSLSKRWSKDLVTBTTTFLPDKKVNEQFRSRRWXDGKRZEOOCP");
    msg.message_id = 40316U;

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
    msg.setTimeStamp(0.19125859673581103);
    msg.setSource(20730U);
    msg.setSourceEntity(202U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(174U);
    msg.consumer.assign("AYPEGLSKWQVWDISVTAMLNINZDNZPCYOLQFRFFSEOHYADRKQXRHORGBGQMNEXZOKXCSQXYKSZVIPBBNWRGVMCFDBNG");
    msg.message_id = 23487U;

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
    msg.setTimeStamp(0.9238736786651338);
    msg.setSource(55270U);
    msg.setSourceEntity(249U);
    msg.setDestination(40319U);
    msg.setDestinationEntity(10U);
    msg.type = 26U;

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
    msg.setTimeStamp(0.48914935754100675);
    msg.setSource(49569U);
    msg.setSourceEntity(55U);
    msg.setDestination(45407U);
    msg.setDestinationEntity(179U);
    msg.type = 184U;

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
    msg.setTimeStamp(0.6112299410763802);
    msg.setSource(31140U);
    msg.setSourceEntity(23U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(17U);
    msg.type = 187U;

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
    msg.setTimeStamp(0.2892887438220296);
    msg.setSource(14911U);
    msg.setSourceEntity(87U);
    msg.setDestination(53533U);
    msg.setDestinationEntity(170U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.08419472322789101);
    msg.setSource(39888U);
    msg.setSourceEntity(188U);
    msg.setDestination(31749U);
    msg.setDestinationEntity(149U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.035112730075909426);
    msg.setSource(55252U);
    msg.setSourceEntity(16U);
    msg.setDestination(42830U);
    msg.setDestinationEntity(21U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.5377525353124164);
    msg.setSource(15669U);
    msg.setSourceEntity(126U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 127U;
    msg.step_number = 245U;
    msg.step.assign("EMOQUFBKXQQBCOATZHTXTOWHJHODPYYUKYRFZXTILZNUITHLEQNRQXTHBPAXJOUZVDWJUKSGWIRZSBUCDTAPPJAFBCSMGFBJKBLIEMCJGEONFKVCMLNXZVYQSNIEHUVRTUZNKWDVYYHEAWYEOISYVQHEWG");
    msg.flags = 228U;

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
    msg.setTimeStamp(0.5669038854605437);
    msg.setSource(3996U);
    msg.setSourceEntity(122U);
    msg.setDestination(7812U);
    msg.setDestinationEntity(125U);
    msg.total_steps = 16U;
    msg.step_number = 182U;
    msg.step.assign("FZIFKJAWMVSPFXZSKVXAGJEXNMZQHIINLCLAITBMUPGJQSIRTTDMYHEVSBEMESELBMYUXCIWPYSDWQCGBUJMUJIKINYRVVNBDKCVRUTRPGFSEYTGVCXEARFHWYWFOQVZCAKNMRPZUQJYQULDQTLAYOPSXPGXJDYAOGHIURAEQQGGQLTXTCVSWLGPCCZNKWWHNKTWOBLCHXOENDRFJBFROBBWHOD");
    msg.flags = 92U;

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
    msg.setTimeStamp(0.22798608177076773);
    msg.setSource(60387U);
    msg.setSourceEntity(244U);
    msg.setDestination(3029U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 4U;
    msg.step_number = 215U;
    msg.step.assign("GDETVYFCALSFBIFIDPZNSTONYGKJHYRWQZWWZBALURMJHHREOPGMSAVPSKIVSMBPJGNQORKYLGJHTDXNDLQXQGHLXWEQNDRUFMHBBGJFWQAYSYCQNXHELFCIGKKPIIBKBIZULCXPVPFJWAPCMRYUDEZUZWAZUTKVEXOSNGJTFEXYIPBQEMXBDWSEVLYOMUOUTCCTCTCAGNHUZHWYAUIDQJLFBVMKFJOHCXZRWTNZJAROKDIRMXDRKEO");
    msg.flags = 210U;

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
    msg.setTimeStamp(0.0702660785371948);
    msg.setSource(35147U);
    msg.setSourceEntity(39U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(209U);
    msg.state = 170U;
    msg.error.assign("PQLANODLSULGTVIEMWHCGDBFPVAKWUXNYOHEZCKWKCQTGMSAFUFUZYIHFUDFJXZHNPNQDATHTZKKPYOPYZJSJEBHIOEVMTBJJYYXZIVGMDIKRGJPGEYHAIRVOUEJLOFGJVCKKNPA");

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
    msg.setTimeStamp(0.5242834646581361);
    msg.setSource(28604U);
    msg.setSourceEntity(170U);
    msg.setDestination(7613U);
    msg.setDestinationEntity(206U);
    msg.state = 108U;
    msg.error.assign("VNVFKFEFXTVLYAXSIVBDVJYYOGKCBEPFGGNQOGANOSDHVRLXAQYDIMQLUBNAYKDDNYEQBZYJTXACKTSLPIYKXWPZPQKMIVMEWBRYVCVRHOGSGOCUGXXUZWJQDMUACJWFTHILRBJOHKEXOECILFNZRHVDCNQUZSXWMOFRJPEUNNLAUXWAZBAJJTUKTPMTHAWPHIZGMHPQMZRIHSZDHSSCPNJUFJGSUELYKBODGCPRILTZEQIRFDOWMFMEWQTR");

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
    msg.setTimeStamp(0.9440301468878627);
    msg.setSource(37859U);
    msg.setSourceEntity(14U);
    msg.setDestination(2569U);
    msg.setDestinationEntity(16U);
    msg.state = 189U;
    msg.error.assign("FSVWDNIOHVJVCSUFZIWGLLTTGNVSJWKVPLJUQPHZEPQHZMMKS");

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
    msg.setTimeStamp(0.07484931142046547);
    msg.setSource(45150U);
    msg.setSourceEntity(114U);
    msg.setDestination(53495U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.6265046289049209);
    msg.setSource(45945U);
    msg.setSourceEntity(186U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.4025870985115554);
    msg.setSource(45666U);
    msg.setSourceEntity(208U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.6710804066292017);
    msg.setSource(41877U);
    msg.setSourceEntity(87U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(249U);
    msg.op = 225U;
    msg.speed_min = 0.39966313246775087;
    msg.speed_max = 0.9367022591632784;
    msg.long_accel = 0.24638767776599568;
    msg.alt_max_msl = 0.40755242610612774;
    msg.dive_fraction_max = 0.7027548752559151;
    msg.climb_fraction_max = 0.4960226182593024;
    msg.bank_max = 0.7291638181852661;
    msg.p_max = 0.7864073291191336;
    msg.pitch_min = 0.015076796420465333;
    msg.pitch_max = 0.043904106677010835;
    msg.q_max = 0.6571073835313676;
    msg.g_min = 0.1834865751397432;
    msg.g_max = 0.5285922171383748;
    msg.g_lat_max = 0.48535981642189063;
    msg.rpm_min = 0.8404110106436588;
    msg.rpm_max = 0.17726475044665047;
    msg.rpm_rate_max = 0.5542047907832441;

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
    msg.setTimeStamp(0.6496835492602503);
    msg.setSource(63552U);
    msg.setSourceEntity(42U);
    msg.setDestination(39000U);
    msg.setDestinationEntity(104U);
    msg.op = 216U;
    msg.speed_min = 0.03974131351444543;
    msg.speed_max = 0.5537576393610061;
    msg.long_accel = 0.05702839312788266;
    msg.alt_max_msl = 0.7558869271047203;
    msg.dive_fraction_max = 0.09632122064454118;
    msg.climb_fraction_max = 0.887730961598086;
    msg.bank_max = 0.9820574221338899;
    msg.p_max = 0.03730993848431008;
    msg.pitch_min = 0.49906131554598576;
    msg.pitch_max = 0.5280109839072824;
    msg.q_max = 0.01537023633202117;
    msg.g_min = 0.807166493757077;
    msg.g_max = 0.31157025306163455;
    msg.g_lat_max = 0.4432813482525175;
    msg.rpm_min = 0.007682213116765535;
    msg.rpm_max = 0.9304455573554142;
    msg.rpm_rate_max = 0.48833600751350237;

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
    msg.setTimeStamp(0.47033410220204286);
    msg.setSource(59149U);
    msg.setSourceEntity(29U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(249U);
    msg.op = 57U;
    msg.speed_min = 0.3941225082900506;
    msg.speed_max = 0.8838673813675882;
    msg.long_accel = 0.032083464982677556;
    msg.alt_max_msl = 0.8634387142180312;
    msg.dive_fraction_max = 0.16982740415936726;
    msg.climb_fraction_max = 0.1264259897531781;
    msg.bank_max = 0.4299304297426376;
    msg.p_max = 0.17566312710690812;
    msg.pitch_min = 0.41652257869439135;
    msg.pitch_max = 0.5046225921775389;
    msg.q_max = 0.05261769154452067;
    msg.g_min = 0.36504397378833164;
    msg.g_max = 0.5639158707584992;
    msg.g_lat_max = 0.2959659929795475;
    msg.rpm_min = 0.039592099473470865;
    msg.rpm_max = 0.6820240385473277;
    msg.rpm_rate_max = 0.32494510287667133;

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
    msg.setTimeStamp(0.2804361080658465);
    msg.setSource(50188U);
    msg.setSourceEntity(133U);
    msg.setDestination(3581U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.7413419619397408);
    msg.setSource(18593U);
    msg.setSourceEntity(22U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.12071699052924867);
    msg.setSource(15323U);
    msg.setSourceEntity(34U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.0886822415158639);
    msg.setSource(9853U);
    msg.setSourceEntity(123U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.6643032035796737;
    msg.lon = 0.7146957407923584;
    msg.height = 0.44837145412632307;
    msg.x = 0.8146534829012669;
    msg.y = 0.5525512860464805;
    msg.z = 0.35974421423211944;
    msg.phi = 0.63982739822357;
    msg.theta = 0.7575139734637317;
    msg.psi = 0.49258770949814834;
    msg.u = 0.05979224838922581;
    msg.v = 0.5632066423201668;
    msg.w = 0.8735991750987844;
    msg.p = 0.22022809108826868;
    msg.q = 0.42617290576446965;
    msg.r = 0.026456281611859866;
    msg.svx = 0.11850239491090275;
    msg.svy = 0.5055383311100413;
    msg.svz = 0.8568721803914267;

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
    msg.setTimeStamp(0.22260008529699726);
    msg.setSource(44245U);
    msg.setSourceEntity(86U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.515492329869087;
    msg.lon = 0.44058197931114207;
    msg.height = 0.6066486944932484;
    msg.x = 0.6211165970946336;
    msg.y = 0.8472915908867645;
    msg.z = 0.04794802029193623;
    msg.phi = 0.928759001209876;
    msg.theta = 0.07134228459050684;
    msg.psi = 0.272566807853057;
    msg.u = 0.009430558640721176;
    msg.v = 0.03154893967787309;
    msg.w = 0.2866644379037765;
    msg.p = 0.5407958812092197;
    msg.q = 0.5880541282313126;
    msg.r = 0.8106945857038492;
    msg.svx = 0.5094435850169277;
    msg.svy = 0.7539912060901648;
    msg.svz = 0.7574438397599598;

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
    msg.setTimeStamp(0.6290480159858436);
    msg.setSource(18311U);
    msg.setSourceEntity(103U);
    msg.setDestination(8326U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.9239630718991291;
    msg.lon = 0.034624129929182734;
    msg.height = 0.8695094200737573;
    msg.x = 0.23677158117263886;
    msg.y = 0.6761145824235307;
    msg.z = 0.8203995773542543;
    msg.phi = 0.6454242136434157;
    msg.theta = 0.8393501995093203;
    msg.psi = 0.13416978104640898;
    msg.u = 0.0917053988592248;
    msg.v = 0.05449897837406448;
    msg.w = 0.29462341772885814;
    msg.p = 0.8899135345300768;
    msg.q = 0.43142157556057215;
    msg.r = 0.05011061159040209;
    msg.svx = 0.0777271764702816;
    msg.svy = 0.2233755018368968;
    msg.svz = 0.7335150140698921;

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
    msg.setTimeStamp(0.9300033560305345);
    msg.setSource(40251U);
    msg.setSourceEntity(56U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(153U);
    msg.op = 94U;
    msg.entities.assign("NETNEYARNQMFAMOBBVGVHDZEDCTYKTGRWZPLHPOAKTJGVPQSISD");

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
    msg.setTimeStamp(0.2582919567681896);
    msg.setSource(22647U);
    msg.setSourceEntity(207U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(184U);
    msg.op = 11U;
    msg.entities.assign("GFMYSWERXRLYGGVDPEENIEGMLKJFLUJKQYYFMZLDDVBAHOLVGZHVKZLTFAGYMWXBOKDPYYCFNINCNGXJXDIEQRWNUQKL");

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
    msg.setTimeStamp(0.8967234996339966);
    msg.setSource(14588U);
    msg.setSourceEntity(194U);
    msg.setDestination(4302U);
    msg.setDestinationEntity(40U);
    msg.op = 135U;
    msg.entities.assign("CJIZBNKODYYWJBMEVRWBWLVFDPNEEQNPGPQGUTXWBMTAEQRLTSBPIEZLZAUNIAHHSSGAXTYAWRCVDMZDZJOIPOATKUCZVVNUDFERXDJRLXW");

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
    msg.setTimeStamp(0.939392231752164);
    msg.setSource(65072U);
    msg.setSourceEntity(89U);
    msg.setDestination(41371U);
    msg.setDestinationEntity(119U);
    msg.type = 46U;
    msg.speed = 30468U;
    const signed char tmp_msg_0[] = {-9, -1, 64, 4, 73, 8, 34, -26, -63, -28, -20, -36, -23, -92, -27, -76, 63, -22, -6, 63, -4, -103, 70, 11, 97, 45, -42, -24, -39, -99, 4, 63, 89, 44, -22, 60, -106, -12, 104, -112, 28, -127, 105, -77, -93, 102, -120, -15, -110, -99, 98, -92, 31, -92, 2, -5, 92, 35, 88, -84, 43, 109, -41, 117, 66, 126, 109, -46, 19, 95, -105, 113, -41, 58, -84, 60, 47, -80, -55, 64, -38, -2, -41, -55, -6, 52, -39, -126, 2, -65, 85, 120, -94, -96, 50, -69, 11, 73, 68, -81, -40, -106, 23, 27, -20, 44, 98, -89, -120, 18, -7, 3, 82, 57, -38, 1, -8, 5, -36, 60, -29, 43, -106, 81, -47, -70, -39, -66, 115, 91, 1, 2, -75, 5, 124, -80, -75, 25, -78, 80, -42, -54, 121, -105, -37, -125, 48, -123, 92, 67, 93, -90, -22, -85, 104, 91, -34, 114, -118, 64, -109, 47, 69, -57, -23, 7, -101, 47, -76, -62, -50, -56, 89, -126, 112, -28, 8, -30, 36, 19, 120, -84, -50, 27, -123, 57, 24};
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
    msg.setTimeStamp(0.8415044407936931);
    msg.setSource(21037U);
    msg.setSourceEntity(80U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(11U);
    msg.type = 155U;
    msg.speed = 41776U;
    const signed char tmp_msg_0[] = {-47, -55, 87, 96, -116, -5, -84, 23, 49, 74, 97, -54, 53, 56, 110, -7, -120, 50, 45, -44, -41, 12, -92, -24, -105, 87, 116, 57, -52, 95, -67, 121, 44, -2, 125, 83, -91, -85, -8, 39, 105, 48, 125, -41, -72, 72, -84, 126, 119, -8, -83, -7, -25, 63, -88, -75, 102, 113, -70, 6, -79, -50, 16, 40, -73, 76, 71, 61, 117, -25, 105, 79, 116, -90, -127, 52, 29, 80, -121, -31, -54, 9, 24, 121, 108, 126, 15, -105, -100, -62, 42, 101, -107, -70, -73, -23, -53, 50, -103, -67, -49, 55, -16, -112, -118, 87, 33, -46, -87, 108, 42, 106, 63, -121, 19, -33, -26};
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
    msg.setTimeStamp(0.16297671339056485);
    msg.setSource(41618U);
    msg.setSourceEntity(148U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(118U);
    msg.type = 163U;
    msg.speed = 40172U;
    const signed char tmp_msg_0[] = {105, -113, -31, 96, -30, -6, 22, 97, 33, 79, 22, 50, -103, -4, -116, -12, 47, -102, -45, 0, 40, -55, 83, 8, -16, -97, 103, 28, -31, -50, -86, 119, -77, -30, -58, -67, 77, 14, -64, 111, 113, 12, -65, 97, -100, -96};
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
    msg.setTimeStamp(0.7761481876988566);
    msg.setSource(7164U);
    msg.setSourceEntity(216U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(55U);
    msg.op = 36U;
    msg.tas2acc_pgain = 0.0454566067284482;
    msg.bank2p_pgain = 0.5215030304657838;

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
    msg.setTimeStamp(0.6025671288615744);
    msg.setSource(31830U);
    msg.setSourceEntity(71U);
    msg.setDestination(62845U);
    msg.setDestinationEntity(133U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.009153924841399763;
    msg.bank2p_pgain = 0.8917467146266665;

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
    msg.setTimeStamp(0.8377970621093367);
    msg.setSource(21661U);
    msg.setSourceEntity(101U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(56U);
    msg.op = 66U;
    msg.tas2acc_pgain = 0.6563729642049166;
    msg.bank2p_pgain = 0.8438772610151032;

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
    msg.setTimeStamp(0.8532664190637848);
    msg.setSource(57655U);
    msg.setSourceEntity(161U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(231U);
    msg.available = 420849210U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.6833562659501722);
    msg.setSource(48661U);
    msg.setSourceEntity(230U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(93U);
    msg.available = 3345477549U;
    msg.value = 203U;

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
    msg.setTimeStamp(0.1771332860419521);
    msg.setSource(61146U);
    msg.setSourceEntity(225U);
    msg.setDestination(1133U);
    msg.setDestinationEntity(3U);
    msg.available = 3255047942U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.9595882954193163);
    msg.setSource(19616U);
    msg.setSourceEntity(251U);
    msg.setDestination(60746U);
    msg.setDestinationEntity(160U);
    msg.op = 16U;
    msg.snapshot.assign("DJHCUSYJAVEAETVAOQZLZPWIWSYYITTRVQEUSKSSIFUHVRRGDQBMWNYFQBKQJJLUEGTJLKXGNHMGZNKXCIUUCWKNCNYL");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 7157U;
    tmp_msg_0.rpm = 0.7087887695831614;
    tmp_msg_0.direction = 59U;
    tmp_msg_0.custom.assign("HHFIGSCXFZCSAZNUYQKNLXJLGYTAAVWELMOBRPXUXQTZRCYLPJANGNGWFFMYIJOUPICXOMBIAVWODKVKVRQTOFKLLPTGEHZTNCOVNEEHRWEUCBMXYZBRXDCBALHLQYVWTLDSXSUJAQJUMMSXESHMYZQEF");
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
    msg.setTimeStamp(0.5593381969852256);
    msg.setSource(3239U);
    msg.setSourceEntity(75U);
    msg.setDestination(58396U);
    msg.setDestinationEntity(217U);
    msg.op = 53U;
    msg.snapshot.assign("JWEPFKRYYJXQZRYBEYNVMFNDCETILHNRWSQCBGHERSCSCUIDKZHPEGATLNPSXCFYGWFOBFUVKVDVTEOLBBJTVCAMXFXAQZBGLAJXHSXSR");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 45301U;
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
    msg.setTimeStamp(0.8476758805670871);
    msg.setSource(619U);
    msg.setSourceEntity(179U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(7U);
    msg.op = 99U;
    msg.snapshot.assign("UZXKYOCJPYBQBBRHFHFLLEJOLELXCEDUSQNCDGCXUSZIRYZIHZALBOKBBJYJMPEWTEPXKMNUZYAFQRKNSCD");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.5949358605060234;
    tmp_msg_0.m = 0.2031731185234512;
    tmp_msg_0.n = 0.9914409046560466;
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
    msg.setTimeStamp(0.08887940730062216);
    msg.setSource(20603U);
    msg.setSourceEntity(67U);
    msg.setDestination(36558U);
    msg.setDestinationEntity(128U);
    msg.op = 129U;
    msg.name.assign("FKXPBUCJDAWVFFRAECBGJQAEXLSICOJNULRKZQBREIHSMVDMUOGUXOLWOKYHNOCAVVEBDCTVQIFPMDLTQQINFUXLM");

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
    msg.setTimeStamp(0.39742537358219865);
    msg.setSource(2666U);
    msg.setSourceEntity(231U);
    msg.setDestination(44555U);
    msg.setDestinationEntity(43U);
    msg.op = 102U;
    msg.name.assign("SMRDGHSJPMEYJCWHRZQJTVERTNWDAZDGMDGIANBXXNMHQBPNOQHLVFSFVQJEGSLUUOGZHSYEGKAVARZAGLFJXSTIFUNYLIKMRMPBNJKQKICFTCFBZPCWQODSICRPUZWIFJVQZLODHZLZBBBEPNXEN");

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
    msg.setTimeStamp(0.46539307003206776);
    msg.setSource(24554U);
    msg.setSourceEntity(105U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(6U);
    msg.op = 246U;
    msg.name.assign("GAWHROCUJWTRLDTKWYIJIIMPLQGUPQUQYOCLKUJDUSTTRFZNALARMPGPWTDZBLSHQJXNGWTIOTDBWTBEPEHKCH");

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
    msg.setTimeStamp(0.17267775978040756);
    msg.setSource(57490U);
    msg.setSourceEntity(213U);
    msg.setDestination(15350U);
    msg.setDestinationEntity(208U);
    msg.type = 68U;
    msg.htime = 0.5779503041533531;
    msg.context.assign("VAUHHRGQPOYERWWTOLDDHPKCDFGYUYEZFSNBMUVTYLXSILJGZIBEQQDIDCFMXXGNWYNLRIQLBWJPXHICXGZHXUEQXYMQRNPOKSABATEBXNNJURMUCOUXDQPCROKYQ");
    msg.text.assign("WINMPCVSQOGTZUHOPVIDYWRTEQQJYVDRHISDUGZAKSPGKZMGUPFJXAVZLHXKLPXRYYKWAZPEMEMHUUWNCWQCOKEJYOGJQJIIZMHOEZYFANEWFTXUGITNCSBPEVDPP");

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
    msg.setTimeStamp(0.10811723450476185);
    msg.setSource(57703U);
    msg.setSourceEntity(33U);
    msg.setDestination(56258U);
    msg.setDestinationEntity(40U);
    msg.type = 97U;
    msg.htime = 0.3744909174986162;
    msg.context.assign("IOXGSPDZHBZAEDULPXHPWWJUKJGXQGWUGVEFUD");
    msg.text.assign("DTHLXDCOUZNNEXTFLXKGXERWZVTTOYWFFXNDCOOQROGPJCIXLMAIIQACEDDUYJAPJSYSBRKULRJBYTKWLYDQFCXSITFKADBWHKIMLNAEQCBRRBQGLZXVBINZAOQZEWUSWCQTPPLIMRCNXLYMNGYHSTWPB");

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
    msg.setTimeStamp(0.2256637669378211);
    msg.setSource(61381U);
    msg.setSourceEntity(79U);
    msg.setDestination(18910U);
    msg.setDestinationEntity(245U);
    msg.type = 34U;
    msg.htime = 0.8789283263108257;
    msg.context.assign("FMXELQZAFKMMNICPJGHQIXQFECZBAIDCHFTDBWUVLPYVABKNWQHGYUEKNUYFVDTNECTMWZUCUGDCFVHZOUKTGTOATBIYDKLGPCCWWEOLO");
    msg.text.assign("MIAYLIWBMQZ");

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
    msg.setTimeStamp(0.49437822210230975);
    msg.setSource(20621U);
    msg.setSourceEntity(31U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(155U);
    msg.command = 167U;
    msg.htime = 0.5854151220815438;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.htime = 0.7801935893911982;
    tmp_msg_0.context.assign("PRBFIYVUYMIFHLTBCIJTIWVCGEERSLRVKVKPQJXLYFCYGTAWKHXUBYFCQKTIFZEAUOGZHPBOKTXQDIZRXOTLZGPHHUNCRUOEAWBDFOLVRPMOBTSGMJXBZMNKRSOGAQPADPWSTWNZMZISJFEASJBCNPTYVDEHVCNURCKPHSBYMLXVVRNHDAMQNHFJNELKQXOXFEWHPZZEWUOTQYEQYBUDDAXGGIZSXODW");
    tmp_msg_0.text.assign("VHIZWGSIFBCWKMIJPRBOGXVBMCBFJGUNIGNQNUXLHISOGULYKTOQYJLNMNWXJAHJMLHSFSTEPZYPBLCNDEXQZNSDHVFTQEZVGHQHCMAZDRQAQQDORETQEIDOVASOUCBTYYYCYKNEVFMDTATUPMVYAENNJXEFYPSMPBIMOATPSLJBAMHSZRUPWRQFLFACASXUXIVURKVEPBWZDFULW");
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
    msg.setTimeStamp(0.5638310858125721);
    msg.setSource(18446U);
    msg.setSourceEntity(164U);
    msg.setDestination(51254U);
    msg.setDestinationEntity(149U);
    msg.command = 85U;
    msg.htime = 0.3085428306988648;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 9U;
    tmp_msg_0.htime = 0.023482039591382287;
    tmp_msg_0.context.assign("YXOCXUFJXVSSIYFVDMQJJWLGBYAWWKCLPLLDHFEMUCDUIBZAABLUIYPSFJMHDWPZKACTKRSSDNZRQMIQXBVVPKBPJVNAOCOSXLXCBAGENBNLJMRYPWTPFYWMJNTFXOHLQPQDJJZGRYQCZNYZBGERIKOIREWURCSVUWRQHTMTMHQCCXZOVEATZDTZOXHIFEWHRSUZJKVNQMFHGFKOUINREHSKIE");
    tmp_msg_0.text.assign("MLYMDBSGKFKZSERKFQLQPGCOMVKEFABNBAEOKVRQBVQQLJXGJZNOOQYVXPJLIVWMBGLXNNWBXGTCOLCAUCUICIEHFRTHEHTSNQNJISZIZITRKHKBMAAHDPNZFCLFPXPKYFSNWHHPXCOUVLTZENCJSWOGBZYXGFTJDDSWYMOEYMTALDVYQXPRAJMNUPUTFIAMGRPBJIESUJUWGHJHUUFVIDXOSRXDVYLQWWSIGEDROMRZRCACWZP");
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
    msg.setTimeStamp(0.6021690926318631);
    msg.setSource(16797U);
    msg.setSourceEntity(103U);
    msg.setDestination(6507U);
    msg.setDestinationEntity(38U);
    msg.command = 45U;
    msg.htime = 0.9186409678198538;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 244U;
    tmp_msg_0.htime = 0.27450360239512384;
    tmp_msg_0.context.assign("BASEUQTGOQHMDRWLBNDHWIKRGTQYZENWSLIVBPRUAYPJHVTAMOKUCGPOFMPEDZYBVKRAYGBOQKOOTSOICEMCIWNFZJJRSKHZVCRIUTMTOOVMQHFXIYAQBQPBRYMJPSKGCLEA");
    tmp_msg_0.text.assign("CVJJXUYZNUDQNWNIMIHKLNHJHDAOTZQWKOVQXBZENVGULHZHKMMNWTBWOVLYPVAAHGRZPGEIRLJBOOQAVYSFGXPJNFKEZIKEUAPKFOEIJYHTSRZSWTPVZYRXNZYQRKVTLTAHBGROHFYQWMDBFBCCFRLJTSLYVFFRCAQNCRUGWUMOUEMYIOD");
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
    msg.setTimeStamp(0.5198333885382482);
    msg.setSource(28790U);
    msg.setSourceEntity(127U);
    msg.setDestination(3416U);
    msg.setDestinationEntity(2U);
    msg.op = 251U;
    msg.file.assign("HYURVGIJAPRJKLBCYAQSWGZVUUBQGSNBIUOVHHNKXAQPMZFTLFYJPILTHMMFRNDBTXZYCLXEJEYONWVSVNVDDSVWHKCJCCISUITRGMFLJGNKWWDVMJSKWKHOYWZCTLQXRSJMPBMQREQHFAZYZEUDSEAUEJAMPMSUDRYASFWCLDMNGPXFZGQLOZXDTRCOBYREEFOXTFVKHXEXVOORLQGGZIKCFETBIPGWOCKILH");

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
    msg.setTimeStamp(0.6636703370555268);
    msg.setSource(40484U);
    msg.setSourceEntity(226U);
    msg.setDestination(64515U);
    msg.setDestinationEntity(78U);
    msg.op = 62U;
    msg.file.assign("IICMGZCUBHRGWCHVTLBGJDKNRNMJIVYNIOTRQABXIKKJAAFDYVCUWXOOQEBZYEWLSLERPWZHGSYUTFWAQCHKWYNWKSFHHJLERZCJMCTJDOXXZCFSTHLTPIBQKIOOXOOIGJMATNZLFKAQEVZAMYGVAUDJDREWWULSMZGNTSZMUBBUVFDPFPLNMDPMHAXQNVLXRUSRCNGQPGPCDIEVYDBDKBPRVKFTVZXPQYXGQBFNHRQEUM");

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
    msg.setTimeStamp(0.31545532322873293);
    msg.setSource(42720U);
    msg.setSourceEntity(11U);
    msg.setDestination(20772U);
    msg.setDestinationEntity(184U);
    msg.op = 209U;
    msg.file.assign("NKGQAHEJRUBKQFHJKZNYOFWQIJIOCFZKNXXVSYGTSEUPKFCLEUFZOJOMHCRDCYUIBMONHBLVJGWOTGREARLKGWTUWLKSGRURGLLUSUEWANIDDQJTBEMOXJPWSFLHYXAMZHDNNUMQFTSMPRVVVTQYCNESXAACBQYIPWFLPBWAYCHPVCKJBMIXZHBDDQNGEJEZPZTRIAMTMIZKYSZDUVHMFTXAADSSHIJPEBOKBPYQXCOCIDLGZ");

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
    msg.setTimeStamp(0.9385554281618699);
    msg.setSource(8090U);
    msg.setSourceEntity(112U);
    msg.setDestination(37915U);
    msg.setDestinationEntity(159U);
    msg.op = 54U;
    msg.clock = 0.1854976606184794;
    msg.tz = -73;

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
    msg.setTimeStamp(0.21835517311803088);
    msg.setSource(35534U);
    msg.setSourceEntity(204U);
    msg.setDestination(41822U);
    msg.setDestinationEntity(95U);
    msg.op = 189U;
    msg.clock = 0.690090643209555;
    msg.tz = -79;

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
    msg.setTimeStamp(0.7528204328749926);
    msg.setSource(41470U);
    msg.setSourceEntity(58U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(25U);
    msg.op = 251U;
    msg.clock = 0.12510831470644923;
    msg.tz = -43;

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
    msg.setTimeStamp(0.4948041476069085);
    msg.setSource(42644U);
    msg.setSourceEntity(90U);
    msg.setDestination(13922U);
    msg.setDestinationEntity(171U);
    msg.conductivity = 0.957480860940699;
    msg.temperature = 0.2966428760350044;
    msg.depth = 0.410644923226237;

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
    msg.setTimeStamp(0.6637158753723836);
    msg.setSource(31108U);
    msg.setSourceEntity(118U);
    msg.setDestination(61145U);
    msg.setDestinationEntity(183U);
    msg.conductivity = 0.5791883474737414;
    msg.temperature = 0.5926104908261846;
    msg.depth = 0.74609622293069;

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
    msg.setTimeStamp(0.38347223226514837);
    msg.setSource(34291U);
    msg.setSourceEntity(137U);
    msg.setDestination(50276U);
    msg.setDestinationEntity(85U);
    msg.conductivity = 0.315416002086533;
    msg.temperature = 0.08149480622462724;
    msg.depth = 0.033425385128098006;

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
    msg.setTimeStamp(0.057191929592904533);
    msg.setSource(42251U);
    msg.setSourceEntity(86U);
    msg.setDestination(20362U);
    msg.setDestinationEntity(181U);
    msg.altitude = 0.07965456083533495;
    msg.roll = 10284U;
    msg.pitch = 63727U;
    msg.yaw = 19267U;
    msg.speed = 2371;

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
    msg.setTimeStamp(0.7668843090523183);
    msg.setSource(57572U);
    msg.setSourceEntity(85U);
    msg.setDestination(63810U);
    msg.setDestinationEntity(219U);
    msg.altitude = 0.8122065542547812;
    msg.roll = 56457U;
    msg.pitch = 8217U;
    msg.yaw = 12455U;
    msg.speed = 4365;

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
    msg.setTimeStamp(0.62712258675738);
    msg.setSource(305U);
    msg.setSourceEntity(36U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(9U);
    msg.altitude = 0.32983057436384433;
    msg.roll = 19015U;
    msg.pitch = 3840U;
    msg.yaw = 42439U;
    msg.speed = 16765;

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
    msg.setTimeStamp(0.36222096041143437);
    msg.setSource(16660U);
    msg.setSourceEntity(0U);
    msg.setDestination(21634U);
    msg.setDestinationEntity(91U);
    msg.altitude = 0.4190252708266293;
    msg.width = 0.6417390067030142;
    msg.length = 0.8964174074329891;
    msg.bearing = 0.2263260230569475;
    msg.pxl = -17076;
    msg.encoding = 5U;
    const signed char tmp_msg_0[] = {-77, -127, 42, 59, -15, -85, 93, -60, 13, -58, -75, 9, 81, 86, -29, 9, -51, 21, -115, 28, -15, 78, -52, 116, 13, 12, 46, 11, -33, -91, 37, -46, -12, -102, -45, -126, -3, 80, -19, 39, -99, -1, 34, -118, 97, 116, 26, -94, 58, -102, -112, 23, 78, 89, -112, 42, -100, 59, 73, -11, 15, 115, 43, -53, 68, -98, -54, -69, 103, -43, -116, -127, 2, 0, 100, 119, -39, -45, 58, 23, -86, 26, -83, -15, 114, 104, -95, -60, 87, 119, -111, -103, -109, -100, -85, 72, -80, 110, -96, -118, -37, -125, 98, 29, 76, 58, -82, 42, 7, -53, 68, 33, -43, -24, 103, 25, 119, 32, -40, -122, 75, 40, 94, 11, 85, -32, 45, -42, 51, 7, -125, -33, 99, -66, 54, 126, 73, 72, -121, 69, 33, -19, -96, -95, 29, 78, 56, 97, 98, -104, -111, 111, 45, -117, -6, -51, -94, -34, 50, 98, -121, -10, -56, 87, -83, -37, 114, -38, 33, -62, -30, 110, -1, -84, -35, -17, -4, -68, 37, -16, 85, -9, -68, 14, -88, 47, 46, -47, 80, -88, -54, 107, 101, -37};
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
    msg.setTimeStamp(0.9976422551798511);
    msg.setSource(41005U);
    msg.setSourceEntity(244U);
    msg.setDestination(63073U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.08675856456268116;
    msg.width = 0.6295091061128588;
    msg.length = 0.14219526907069402;
    msg.bearing = 0.8283282919759033;
    msg.pxl = 7519;
    msg.encoding = 52U;
    const signed char tmp_msg_0[] = {-107, 64, 66, 87, 57, -92, 117, -124, -4, -71, -4, -67, -43, 29, -102, 95, -111, -110, 26, -78, -20, 35, 27, 92, -100, -96, -76, 23, 55, -36, -63, -34, 41, 29, 6, 92, -112, -27, 33, -77, 8, 60, 103, -101, -88, -49, 27, -28, 65, 74, 39, 19, 5, -58, -77, -106, -79, 105, 110, -91, -123, 50, 50, -110, 74, 12, -90, 100, 118, -78, -97, 70, -53, -73, 49, -114};
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
    msg.setTimeStamp(0.6478127622060944);
    msg.setSource(3911U);
    msg.setSourceEntity(117U);
    msg.setDestination(54023U);
    msg.setDestinationEntity(153U);
    msg.altitude = 0.8270684913514608;
    msg.width = 0.3065302769937768;
    msg.length = 0.8760471955759601;
    msg.bearing = 0.49960891398341056;
    msg.pxl = 5054;
    msg.encoding = 16U;
    const signed char tmp_msg_0[] = {-17, -68, 21, 88, 48, -28, 82, -35, -77, 111, 100, -107, -26, 4, 36, -112, -93, 27, -47, 65, -8, -95, -28, -110, -80, -86, -99, 71, -24, 113, 91, -102, 114, 111, 76, -30, -101, -54, 53, -44, -119, 112, -91, -94, -127, 19, -122, -127, 58, 2, -31, 122, -29, 4, 44, -77, 67, 122, -124, 29, -106, 57, -83, -21, -93, -57, 17, -110, 92, -79, -56, -8, 41, 99, 119, 63, 55, 98, 85, -94, -22, -103, -114, -128, -35, 80, 120, -68, 35, 84, 49, 2, 51, -114, 44, -100, -62, 60, -68, -102, 90, -71, 118, 14, 86, -9, -50, -73, 58, -96, -44, 21, 62, -89, 56, -77, 63, 37, 118, -63, 41, 33, -73, -88, -48, 104, -75, 70, 29, -40, -82, -20, -43, -73, -75, 92, 67, -80, 74, -9, 84, -56, -102, -83, 26, -79, -62, -53, -51, -79, -114, -97, -100, 105, 1, -99, -59, 5, -34, -94, -53, -116, -115, -61, 119, 48, 126, 76, 82, 67, 10, 80, -24, -96, -89, 104, -88, 9, 77, 13, -104, -9, 60, 33, -120, -93, -69, 78, -28, -126, -107, 114, -104, 1, 30, -92, 123, -53, 37, -75, -83, 12, -111, -50, -33, 0, -100, -46, 25, -101, -44, 37, -119, -24, 17, -25, 12, -113, 16, 120, 2, -48, 15, -128, 1, -101, 77, -26, -121, -88, 15, -106, 45, -25, 48, -104, -113, -32, 102, 13, -109, 17, 106, 100, 92};
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
    msg.setTimeStamp(0.0844207046217853);
    msg.setSource(8847U);
    msg.setSourceEntity(230U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(134U);
    msg.text.assign("QMTCWEUSDUKDXIBJJWKODVWTTAAGAZHPFCKTZRZZZBFRCLPSATUDNLKIRFJNMQOFXOPSGWBWCJAMMIEUYEHQHIXUQZJIGZBBELWKURIGMAPAODVRLUQXBQOGYVYIXAWNPCLDXIOBLCLSUBJECRFQFCYOLZWRABJAQNDNFSEJTDGHGVNZQRVKTLHSNP");
    msg.type = 193U;

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
    msg.setTimeStamp(0.7185133391736014);
    msg.setSource(39845U);
    msg.setSourceEntity(232U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(223U);
    msg.text.assign("XWMKDNRQJKBMQBULRDVGGROIBGYABXYDPZMIFSUHHRIHADZSLNDTWFPEILNSROBVLOQFJIHSRNGVGXPNEZLKUYUHSFBKXBTZBJEEKJFQBZTEIHXUQXMRGTNPLZTQCBLVDAJTEUXWAGNFMYTJJWASHWZYNPDUPUUECOWSILVQRXWMSQRVWCCMPYWKTVECGXZFOXCQYYPDHWVYLYEAIJNADOQZGKFTKVKOMRFSNKHIDMHOAGCUPJAPCMEO");
    msg.type = 254U;

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
    msg.setTimeStamp(0.7339051964803107);
    msg.setSource(3159U);
    msg.setSourceEntity(244U);
    msg.setDestination(35800U);
    msg.setDestinationEntity(72U);
    msg.text.assign("EDVZRXTZJWLJDZXIRFSXITLMCVKPCPQTCVUCIFHIVVIVNPVPBIAFXISGUNJGAYUNCHONZDDEYLZBPWUAQFXHJPJDABBBWPROKSOZYW");
    msg.type = 24U;

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
    msg.setTimeStamp(0.6056108425572131);
    msg.setSource(13451U);
    msg.setSourceEntity(142U);
    msg.setDestination(15006U);
    msg.setDestinationEntity(164U);
    msg.parameter = 70U;
    msg.numsamples = 107U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 53585U;
    tmp_msg_0.avg = 0.3217148078141725;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.4884494658284977;
    msg.lon = 0.1012154534245221;

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
    msg.setTimeStamp(0.5175589122126261);
    msg.setSource(2258U);
    msg.setSourceEntity(238U);
    msg.setDestination(25635U);
    msg.setDestinationEntity(52U);
    msg.parameter = 245U;
    msg.numsamples = 219U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62961U;
    tmp_msg_0.avg = 0.10598524656791664;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5369010633964719;
    msg.lon = 0.256041012932685;

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
    msg.setTimeStamp(0.6092997425398831);
    msg.setSource(30547U);
    msg.setSourceEntity(3U);
    msg.setDestination(13408U);
    msg.setDestinationEntity(246U);
    msg.parameter = 101U;
    msg.numsamples = 131U;
    msg.lat = 0.4078764690608806;
    msg.lon = 0.8245644468839545;

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
    msg.setTimeStamp(0.7084094070969651);
    msg.setSource(30892U);
    msg.setSourceEntity(200U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(240U);
    msg.depth = 27577U;
    msg.avg = 0.24178738106230457;

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
    msg.setTimeStamp(0.5024565917079907);
    msg.setSource(37600U);
    msg.setSourceEntity(14U);
    msg.setDestination(56670U);
    msg.setDestinationEntity(208U);
    msg.depth = 48723U;
    msg.avg = 0.8346038149763599;

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
    msg.setTimeStamp(0.2684402844252374);
    msg.setSource(61276U);
    msg.setSourceEntity(150U);
    msg.setDestination(35718U);
    msg.setDestinationEntity(4U);
    msg.depth = 2737U;
    msg.avg = 0.21234630399646803;

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
    msg.setTimeStamp(0.9675480653693338);
    msg.setSource(61700U);
    msg.setSourceEntity(163U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.0113013174085963);
    msg.setSource(41910U);
    msg.setSourceEntity(85U);
    msg.setDestination(15590U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.4072508426198259);
    msg.setSource(22966U);
    msg.setSourceEntity(65U);
    msg.setDestination(5756U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.894117127487138);
    msg.setSource(56472U);
    msg.setSourceEntity(59U);
    msg.setDestination(29867U);
    msg.setDestinationEntity(237U);
    msg.sys_name.assign("TRMMYAYZTDPZISSROWLKVETGFJFWNKDRTUKSJZQOINJAUFCWUUELGFUPHWBQEHCKAMWNOFMKRGPSFHUZCXKXZBMVBRORJGUYZVWVTIZHJQDIPCGXKYXPEJTOAGUVVAKUQBTEDHNWXNXSXYLXAOKBLINPFRTMPBCMBMNGELCVHCSQNKPSWNYFDQCXSHHDLAJSMDFDJLQTFHLOAEYCUOZAJOQQZXBRVQYIEMAYTIOBVIIBWGCEGHLG");
    msg.sys_type = 201U;
    msg.owner = 10918U;
    msg.lat = 0.8883586552616692;
    msg.lon = 0.2547830737868414;
    msg.height = 0.31110024170054573;
    msg.services.assign("MNIYAKZWQOESRYGOZWSLSPQAUNBJYMFOXHQIIHYGHPNLUSPACROS");

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
    msg.setTimeStamp(0.20780033228934103);
    msg.setSource(17195U);
    msg.setSourceEntity(200U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("ZJTUMFEAECRGSMGXSGYVVTHXLJVTOAVLYYNWYC");
    msg.sys_type = 221U;
    msg.owner = 15748U;
    msg.lat = 0.0826620246537979;
    msg.lon = 0.9404021678222051;
    msg.height = 0.49753162490394676;
    msg.services.assign("KWVSRPNGJDLSJOAMGHOBLHKHEODYEUSLLPFYAHKFFQVPOUZJSNYIXOBIMQLIJMGHTDZCXCVIYAZUBGYVZXAPWNRXQQOKGLZSFWWUFGFZEEOIQMTFJZPULKXEMMZDZPCCSUVUFHTQCYASZGDDIMOFXPJVHPGBGYIADDIEAWTKXCBUJDWNSKSABTMMORQPVWYOQTYCEAHEL");

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
    msg.setTimeStamp(0.8702606610969861);
    msg.setSource(38045U);
    msg.setSourceEntity(158U);
    msg.setDestination(38075U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("QTPSDQFHEXHSLAGBSTRQZUNYMXCFUWRVFLUMBLOTYUUVDRASXLFGCTJOPHREIAMMAYTEFLGDICYVDKBGDXSAUSJPCNWYICOZHSWUOKWKVRAZIJFKGVQAVMOCGHLSZKIYWCWUZZQVDSJJTHZUKLBRMFTXEOQJDSXOJWRBPTVINNWHVJNOJXFKQTCIDXBEQYABMLOFZGHEPXLIRORGNEKGYBWWP");
    msg.sys_type = 180U;
    msg.owner = 46492U;
    msg.lat = 0.6033604817889482;
    msg.lon = 0.25277140091159;
    msg.height = 0.7914609755126955;
    msg.services.assign("EHEAMWTKVPYRLSGQYUUFPZXGUUCZJPIPKPOJPLKVYTNP");

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
    msg.setTimeStamp(0.6505204634711385);
    msg.setSource(26150U);
    msg.setSourceEntity(179U);
    msg.setDestination(6352U);
    msg.setDestinationEntity(230U);
    msg.service.assign("JHFRCAMZRKEILCMYPLUZLRVVPRYYTXYDZWHNIXFGBGMMWXPOEFYSJVWKTQKZARXEQWOANSSGQEUIIBOUUODEVWMGKYHXQRMYBFTIDKVKBWQ");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.12993653533150706);
    msg.setSource(34464U);
    msg.setSourceEntity(190U);
    msg.setDestination(4000U);
    msg.setDestinationEntity(209U);
    msg.service.assign("RARHMZSREORNTVDLAVSQPUJYUITARBFTTQNFSJJNNENZOZMRELPBUXYGIBDHESDHYKCFCVDCMDALIXPOQEPKRFZJVLPHWHBSGPXXICOWYWUKATFLGCGCHHNZTOQ");
    msg.service_type = 36U;

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
    msg.setTimeStamp(0.44872883089504045);
    msg.setSource(7550U);
    msg.setSourceEntity(189U);
    msg.setDestination(18906U);
    msg.setDestinationEntity(6U);
    msg.service.assign("LDZUDWNNOIWRLPGEDFPTNAYWRCRQJTVBQRXFEUBLCHYDKEYEFJDABPQICTVBKAYYPSJPKSTIJUZSEGNKLCHDZMAVCXOUAMLUWWPNMZHVSBZFILRUOWZEXPIXHSZZRQAXLQHOMJMZUUFMYGOWYDBAQVEFTBTFHHXGUBJWMXYHOBRLHPDFMIOKGCQZJDNKKOTTIVNGSSAJRNRHNLXDMPCSMQCIIFRKVQQFGVBKTSJGTVAAUJ");
    msg.service_type = 168U;

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
    msg.setTimeStamp(0.8026034135819927);
    msg.setSource(18768U);
    msg.setSourceEntity(183U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(33U);
    msg.value = 0.4213370648187795;

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
    msg.setTimeStamp(0.5439335274098418);
    msg.setSource(32755U);
    msg.setSourceEntity(38U);
    msg.setDestination(14532U);
    msg.setDestinationEntity(112U);
    msg.value = 0.3823959042136089;

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
    msg.setTimeStamp(0.866332586565559);
    msg.setSource(30483U);
    msg.setSourceEntity(0U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(0U);
    msg.value = 0.3648160066392091;

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
    msg.setTimeStamp(0.22380566598096052);
    msg.setSource(38163U);
    msg.setSourceEntity(147U);
    msg.setDestination(31U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9636338491297375;

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
    msg.setTimeStamp(0.341894073609302);
    msg.setSource(56540U);
    msg.setSourceEntity(36U);
    msg.setDestination(35431U);
    msg.setDestinationEntity(174U);
    msg.value = 0.23100860320557226;

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
    msg.setTimeStamp(0.4770263442849605);
    msg.setSource(4945U);
    msg.setSourceEntity(39U);
    msg.setDestination(37720U);
    msg.setDestinationEntity(94U);
    msg.value = 0.2470749163664986;

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
    msg.setTimeStamp(0.3033658894916913);
    msg.setSource(34846U);
    msg.setSourceEntity(20U);
    msg.setDestination(30163U);
    msg.setDestinationEntity(16U);
    msg.value = 0.83084039295564;

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
    msg.setTimeStamp(0.9856324247175883);
    msg.setSource(14845U);
    msg.setSourceEntity(234U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9037627604322054;

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
    msg.setTimeStamp(0.7038561498560084);
    msg.setSource(16785U);
    msg.setSourceEntity(135U);
    msg.setDestination(41562U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8601511261262076;

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
    msg.setTimeStamp(0.778587776431167);
    msg.setSource(1867U);
    msg.setSourceEntity(18U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(231U);
    msg.number.assign("WWGMGZLOVSQPDWDBIQMHCTPYBPEFJTXDSYYFRCUSRKPEXHMNXTIBSJQTMNRAPVAKUGHOPKEIQULHXXMBCESGUHLWIYCGRMFRNOGSAHSLSKMVWGMHRRHLBQSILAAWZTVPQNFMVFJAEBLFAFZHVCXPJKRJBEEGTNNVZNNVVIDJZIFTXEUOOWUKWYCZFUKLZZYWRPQUOCIDKEROIIHXEBJQYDTVDXCZDYXALDJQPTANUJTBCZ");
    msg.timeout = 31890U;
    msg.contents.assign("SZZHRWLYRUHSEGBJXAWXOQRRGGPTDHRXACMXCMZYJPIGORWUILRACWVDMEZLYFQQVSNAIYLEHSUGDLELKNYUIJWTCENAP");

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
    msg.setTimeStamp(0.22322599348777117);
    msg.setSource(36732U);
    msg.setSourceEntity(219U);
    msg.setDestination(25196U);
    msg.setDestinationEntity(167U);
    msg.number.assign("KESOTDXAGDZUHIBDNWFRJELYBTZXTRXYCVZFSWFOFMIVYWEHBXAJDGQVJMNKUVXRFKZCYTMVIBPFAGMPYIAOSGCVRFWWOKJZYNUCRSALTNWBVSRQYBPQTVOSLILOTHJQLWIVDDTAAWDJMHUZUNEJJMQNJL");
    msg.timeout = 17431U;
    msg.contents.assign("VBGVMYPBIBXPZESAUTLAHXCLGMDYHGAQZDWJLMEEBWDRUREPKNQQJHQXJGBFBMPTXWFUCWPXUCWKLHFCFSUHZRHZIJQAQJGRIJVNFHGOYFUSKWAYOUXSDPHTTEBNAGZPPWYCHFJZOFSHRNNLDRLGZRIXQEOATCTNNOCEMRPVIXGSRWETKVKSKVMQJKOVLWAAEZXJFMOJZKINTDQPLOOLYMKOQIEDASZCBRCXSCYTIMYUIFDUDVMKGV");

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
    msg.setTimeStamp(0.6670179107303583);
    msg.setSource(26589U);
    msg.setSourceEntity(106U);
    msg.setDestination(44687U);
    msg.setDestinationEntity(174U);
    msg.number.assign("VQOYUZAWPJMYKPBELZDEMUFZRIXVNKUDUZISLQVHBCIBCKTURLWHQJIPSYOYICMUVODDAQOVGZLNHAWUGGQDTYFXASTXNTCORFKBBCBXRHRULLEJVVOPPIOPCWNPWGYGTECNZWCLHHNQBFHHNSQNHQLTXQFMDEGAJEAWKOMFAIZMKIFOFSYMSMWGTKYXTIYBRORINEPXLVMKPMQTETCDZJKRZCKRHE");
    msg.timeout = 24172U;
    msg.contents.assign("LLNXGJGBYXVONHQBFFUFCEJXLBOQELINPHHAYSVPNV");

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
    msg.setTimeStamp(0.15820294166462667);
    msg.setSource(31807U);
    msg.setSourceEntity(138U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(39U);
    msg.seq = 2401264695U;
    msg.destination.assign("QMLBSDKKNHYKJWAPKHYTYTHUVFIBEDGWDKMHOEHZYAAOWSOVRCPYWMLOQGRXYYUIMZINIPVAXSCXTUJGPNCOIEHADWRPUCMRGRPUEXDLNZRBJQBFLXPZZOQMEGDOXNYGTDKQXXTIUBCNLZOSB");
    msg.timeout = 42243U;
    const signed char tmp_msg_0[] = {11, -120, 100, -102, -101, -61, 3, -95, -69, 75, 107, 12, -121, 49, -35, 111, 68, 58, 44, 54, -44, -83, -45, 88, 67, 63, 41, 74, 36, 20, 112, 57, -44, -50, 61, 14, 109, -100, -27, -121, -108, 60, -2, 110, 26, 13, -79, -90, 88, 76, 27, 21, -14, 3, -11, 20, -57, 110, -123, -80, 20, 45, -40, 66, 69, 44, -32, -103, -53, 53, -93, -126, 12, 117, 72, 86, -108, 98, -41, -125, -36, -88, 84, -30, 10, 95, -34, -16, -5, 126, -100, -114, -2, 34, 116, -45, 107, -108, 96, 78, 37, 48, 81, -2, -71, 74, -94, -33, -128, 29, 37, 20, 95, 103, -100, -79, 83, -35, -47, -9, 123, 51, -23, -125, -67, 124, -3, 96, -71, -32, -126, 62, -32, 108, -38, -98, 82, -31, 46, -58, 5, 103, 64, -78, -128, 65, -82, 71, 89, 83, -21, -1, -97, -33, 29, 121, -19, 72, 103, 36, -128, 77, 43, -32, -79, 79, -62, 1, 17, -26, 116, -22, 31, 109, -98, 48, 87, 43, -44, -126, -41, 117, -87, 90, -74, 117, 44, 13, -23, 47, 38, -97, 64, -122, -115, -121, -67, -8, -100, -76, -70};
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
    msg.setTimeStamp(0.12914867724796864);
    msg.setSource(2248U);
    msg.setSourceEntity(39U);
    msg.setDestination(5695U);
    msg.setDestinationEntity(120U);
    msg.seq = 367828670U;
    msg.destination.assign("AJVTAIBQNUDCEWHASKIOPECVSHSBZTRQXSJQJNCQQAKRXVNBDXWZJHWDLMNVCAGNFKVKRSTRZEDEATVKXZZBPXHZKLPGYLQCYZLOTBTXBYIWZVOIUDNWUIX");
    msg.timeout = 34372U;
    const signed char tmp_msg_0[] = {-97, 111, 1, -76, 65, -46, -20, 100, 45, 12, -48, -1, -10, -96, 8, -89, 33, -49, -38, -10, 100, -88, 69, -106, -59, 8, 107, 17, 59, 41, 103, -120, -42, -101, -101, 101, 111, -76, 15, -126, 79, -48, 47, -115, -61, -24, -125, -37, 73, 32, -56, 90, 77, 30, -118, -15, 94, 56, 105, 124, -87, 66, -99, -75, 122, 77, -38, -95, 61, 18, -20, 65, -13, -31, 116, -38, -52, -25, 116, -91, 86, -90, 6, -82, -104, -33, 54, 46, -52, -98, -38, -20, 39, 93, -102, 91, -50, 18, 103, 64, -101, 16, 39, -20, 107, 63, 38, 56, 86, 112, 97, -122, -27, -76, -59, -97, 77, 42};
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
    msg.setTimeStamp(0.44591517447013396);
    msg.setSource(11699U);
    msg.setSourceEntity(204U);
    msg.setDestination(61600U);
    msg.setDestinationEntity(219U);
    msg.seq = 1321665229U;
    msg.destination.assign("ZJTFSQYVACFHYNZUAIHMHPMIMESRRUZXCVLKERFZFAOBJUTAGFDKNPDVMCGAYDJOVRIDWWWDQGZUZPLGKRCTCYHBBRNLYDFJNWNPELWDCCCVUZFWHNOQILMTSMLBNJWSXQTHYQLIKNSXJHPVTORSEIIPARZXEKBMQCAHPLDDRUUEILSZUVKRXTFAUVYYGGP");
    msg.timeout = 28129U;
    const signed char tmp_msg_0[] = {-76, -34, 19, 41, 33, -8, 103, -61, 28, 31, 48, 44, -100, 120, 31, 67, 85, -82, -18, 9, 15, -14, 17, -124, -53, 11, -5, 13, -120, -33, 64, -50, -11, -79, 14, 102, 87, -26, -79, -1, 9, -10, -96, 39, -64, -84, 96, 92, -125, -23, -109, 0, -121, 87, 98, -18, 37, -35, 79, -90, 26, 17, -28, -75, -8, 121, 36, 21, 14, -55, 19, -114, -21, 110, -33, -100, 98, -91, 50, 23, -46, -4, 119, -38, 123, -102, -53, -65, -60, 126, 96, 98, 36, -79, -124, -121, 45, 69, -116, -112, -55, -120, -63, -2, -24, 60, 89, -51, 40, -106, 73, 13, -15, -35, -41, -110, 46, 73, -48, 34, -42, -39, 6, -94, 1, 17, 66, -21, -115, 34, 113, 69, 59, -70, -9, 59, 18, -86, -54, -84, -74, 75, -90};
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
    msg.setTimeStamp(0.4431238290124464);
    msg.setSource(31992U);
    msg.setSourceEntity(110U);
    msg.setDestination(47024U);
    msg.setDestinationEntity(199U);
    msg.source.assign("XDQUFHPTZFTPVROOXOUYAMBICNGMZQUOBXWDONLREJVQYUYCFDRVKZJGKMKVAOWIBJKKHWRMDHRCWUNXALBUZFWBTWPISGFTNSDCGGMEBMQSHFGLPUZXCMRZSPTWIUXIJLLLRTRYKAABKGINPHQHTRVFYXSELWOFSSQZBEJMAGAHCQXQNT");
    const signed char tmp_msg_0[] = {79, -89, 27, -23, -3, -41, -125, -17, 54, -109, 48, 31, -121};
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
    msg.setTimeStamp(0.5930777516210051);
    msg.setSource(58163U);
    msg.setSourceEntity(148U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(217U);
    msg.source.assign("INBKFTOQSMHVOCFIUDTYJKVLLVWRYGBXSVNBUSHGVJEIQLVJDWATLCNSFELTMAYJESEKKRMMJHICDPANIQPZCEZRMENBDCYBSFKBWZRSOXORLBKCJPHMPUZTTLZVRYRAPEXTGQAKXGMYXXYWZNEWVQDVFD");
    const signed char tmp_msg_0[] = {-93, -84, -57, 108, 34, 72, -117, 67, -20, 112, 37, 122, 42, -30, -46, -56, -95, -37, -89, 20, -91, 100, 106, -113, -128, 31, -78, 69, 19, -55, 55, -10, 117, 107, -123, -97, -119, -113, -90, -25, 110, 77, -47, 114, -65, 80, 14, -114, -115, 28, -54, -17, -82, -65, -88, 44, -83, 40, -113, -1, 53, 27, -121, -108, 12, 1, 55, 30, 88, -126, -53, 45, -122, -43, -56, 34, 111, -70, -121, 59, 125, -78, 15, -31, -125, -88, -124, 39, 40, -60, 52, -126, 26, -4, 30, -74, 57, -76, 122, -107, -70, -17, -97, -91};
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
    msg.setTimeStamp(0.5696413719637278);
    msg.setSource(57944U);
    msg.setSourceEntity(239U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(77U);
    msg.source.assign("BOSLQNWUWOUYEBDUWCDIPZRQSMHFCULFROOAAYPCPZDYSXEXSUCL");
    const signed char tmp_msg_0[] = {-101, -13, -73, -110, -115, -19, -14, 56, 40, 20, 74, -1, 54, -114, 62, -19, -121, 101, 73, -96, 19, 67, 102, 44, 77, 101, 110, 85, 105, 109, 70, -6, 47, -4, 36, 61, 101, -77, -7, 13, 12, -39, -72, -87, 5, -79, -71, -70, 126, 97, -64, 57, 123, -7, 94, -17, -54, 113, -106, -81, -81, -116, -96, -22, -99, -128, -4, 99, -117, 15, -31, 71, 5, 35, 18, 57, 91, 55, -78, 83, 50, -82, 75, -7, 84, -49, -8, -27, 126, -25, -70, 93, 7, 119, -121, 85, 67, 48, -109, -126, 80, -64, -75, -113, -27, -4, -32, -50, -6, -56, -8, -117, 6, -40, 12, -41, -73, 4, 70, 0, -68, -95, 4, -3, -4};
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
    msg.setTimeStamp(0.1877532004485698);
    msg.setSource(23649U);
    msg.setSourceEntity(11U);
    msg.setDestination(34170U);
    msg.setDestinationEntity(164U);
    msg.seq = 3873523154U;
    msg.state = 176U;
    msg.error.assign("ODCCYINERFQKDBZAGWIMICJIMSSGNYS");

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
    msg.setTimeStamp(0.29997209041819173);
    msg.setSource(31965U);
    msg.setSourceEntity(96U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(115U);
    msg.seq = 2285933634U;
    msg.state = 150U;
    msg.error.assign("OKMLAWEDTLVPHXAELNGJKMFNHZCAWACRPFWRWHVWJPUBXHTYRFBVMITTDDHUXZFZGOOQKEYAFTCAREFEVDPHBQYJZVGXGRXUOTHNQRSEIYIKDNSIYHZXCKBGQVYATDGISDDNCQKMWDBUOWIBSJLRKLIAXOQXKZNMONFANFMHPMLSUPCCLEMFPSRCJSZLMEWUFHZLIODBMJTNBVWOOJUUTGCNSBYUYXTELJZPXIBUQPQE");

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
    msg.setTimeStamp(0.2381075948428918);
    msg.setSource(60919U);
    msg.setSourceEntity(96U);
    msg.setDestination(56972U);
    msg.setDestinationEntity(206U);
    msg.seq = 3761366730U;
    msg.state = 39U;
    msg.error.assign("PAHTOGFNXSKGSIC");

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
    msg.setTimeStamp(0.04414811155821685);
    msg.setSource(8918U);
    msg.setSourceEntity(183U);
    msg.setDestination(1936U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("CFDLYIRYDZWZXTSUJZZWNEMBRASBGVDAWFDEPQNMRUUIMUHVJJLNYJGQIMJODHHWZXLSCOOBLBBLUHOTSLXYHNXPCUEGIVVXWRAECJIBTGXPTVQPPQIVLCFUJTHOPDEIUGFYQNDIANWFHSQPETKFAVWEKSRZAPNEYRRXUZWKVFCJBDQKIAZMGOKXOSQKOPEIBHTJMBEBMGHGWAFCDYYSOLFLGNA");
    msg.text.assign("LZRLXGQJOEPIFZHXOZSGSJJMGCCIQNDXXUTFDEZ");

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
    msg.setTimeStamp(0.817003996473165);
    msg.setSource(49460U);
    msg.setSourceEntity(170U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("RGNZTEBGCNXJMMGARLSHVYGRVRQHDLTHOPZOPNQCFAZGJVNMPBYHDSQFEKQQFDJMZCUUVMVMBYHVMARZXVSNXIWJTWASGGHTOUSOISYIWBKMKRRIAYETNIQZFZAIFPFOXLFZLHTCOEPEPFAEPWUWTLUGYFN");
    msg.text.assign("NDOEURIKACSPMFYOSXPLNWS");

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
    msg.setTimeStamp(0.5439129509062006);
    msg.setSource(36180U);
    msg.setSourceEntity(55U);
    msg.setDestination(61392U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("VCLVDZFYTVRWCOYMXNPXHUJHOUWGQOVRJHIKLBWKTZJCGSZKWMEFWLASDICONIWTDMUCTDJQUNUGRIFJMBXVBUROEIXEGOULIRYNYWTSGSPSLHICBSYDHKYORZBXCTJBSNWUEHXZANSVKPZFONEABUK");
    msg.text.assign("ORIMISWYFRQTPQFCNYXORCLJCGKISDZNXGUDWRHPNOAGCVJOZYPSRRSJR");

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
    msg.setTimeStamp(0.3123544910938665);
    msg.setSource(63328U);
    msg.setSourceEntity(197U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("ARDSSYUPUYXTLDIPGHVOKREOICJUICHQKWTCRAWRYWGGTNMBINCFVKUONLHMVJZSBUTVRCYGATJLFKJOMAXXHCIBRBWWBAKQHTFQPYZYR");
    msg.htime = 0.320154002356695;
    msg.lat = 0.894289486273763;
    msg.lon = 0.10455853353640188;
    const signed char tmp_msg_0[] = {125, 24, -106, 83, -106, -94, 75, -95, 27, -43, -82, 24, -90, 13, 108, -81, -103, -94, -116, 12, 120, -90, -40, 119, 28, -76};
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
    msg.setTimeStamp(0.2003527475877438);
    msg.setSource(50951U);
    msg.setSourceEntity(50U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("KNARMOQKGFHBLPCLSPAXMYFMORVXOMGGQMDEYCV");
    msg.htime = 0.5700852884404789;
    msg.lat = 0.6894798090970051;
    msg.lon = 0.722467529636441;
    const signed char tmp_msg_0[] = {108, 37, -66, 43, -104, 38, -64, -64, 36, -95, 72, -34, 79, -1, -32, -31, 24, -128, 125, 50, -13, 54, -8, -82, 82, 107, -49, -85, 68, -92, -16, -30, -82, -36, -118, 30, -27, -27, 51, 33, 55, 51, -57, -80, 112, 81, 18, 12, 124, -65, -88, 56, -49, 94, 95, 81, -81, -16, 92, 86, 47, -62, -37, 40, -56, -5, -49, 115, -5, -117, -124, 67, 29, 53, -125, -122, -91, 42, -44, -46, -28, 73, -7, -99, 23, 15, 111, 111, 58, -99, -67, 62, -68, -83, 58, -70, -57, -60, 101, -51, 125, -44, -2, -53, 42, -41, -10, 70, -24, 84};
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
    msg.setTimeStamp(0.7873490813514358);
    msg.setSource(64124U);
    msg.setSourceEntity(111U);
    msg.setDestination(38388U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("CSZBAOWBZJXALJKXRRCUITMXKGSZMZEEWENXMSGEXKGJGUHQCVNIWTPDAUWDJETCLDLVVAAGOIVHFNIEFRFDEBFFYYZIMBODTLLBYHRLIMFPCEWLXDOSNGLIQMKUOVYJKYFNQVJHJOSCASOLQHRBXALDCPQIZRDDGAK");
    msg.htime = 0.323331842344188;
    msg.lat = 0.7870955359966739;
    msg.lon = 0.45280847622539944;
    const signed char tmp_msg_0[] = {-1, -105, 95, 53, 61, 123, 68, 2, -3, 24, -30, 60, -119, -21, 78, 86, 89, 8, -117, 85, -61, 124, 5, -103, -65, 87, -88, -13, 46, 92, -100, -40, 55, 47, 97, 89, -98, 86, 85, -49, -74, -11, 97, 71, 90, 87, 29, 119, -116, 73, 42, 40, 66, -73, -94, -48, -117, -92, -109, -75, -44, 21, -103, 99, -6, 58, 42, 17, -4, -100, -25, -92, 63, -109, -54, 67, 34, -83, -79, -10, -68, -10, 19, 93, -86, -93, -39, 80, -110, 47, 58, 52, 2, -42, -81, 67, 32, -59, -87, 84, -52, -83, 15, -27, -108, -73, -63, -20, -22, 7, -9, 64, 74, 37, -126, 75, 53, 102, 50, -66, -34, 28, -77, -128, -17, 46, -57, -65, 124, -82, -56, 53, 37, 59, 35, -115, -5, 103, 71, 70, 38, -58, -72, -112, -33, 103, -36, 81, -87, 87, 48, -55, 100, -82, -7, 65, -101, -16, -79, -54, 28};
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
    msg.setTimeStamp(0.1699527577702019);
    msg.setSource(24390U);
    msg.setSourceEntity(32U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(25U);
    msg.req_id = 41225U;
    msg.ttl = 64040U;
    msg.destination.assign("EJNJRBZRVWZVGMNKCLYXRWMHBUATOCLIPIJOBMDEEIWSYOKNDTAHHZUWLSPUHXCJEYWTUKIUFCSPDDKXVMOFORXXQZSGPQAONRFQKQWYQXRLLAABOWZTYEPHEIQGTVZVTVVGKVEUJPCGBUMSDSNSENNTFAXWAKNREIUFXMLUPKMLMXFJFZGIFHXWGCPCYTKRFDQQLIPHYJDQUYRMGDBJFZDHAQVILNJOGGBSYNCBZ");
    const signed char tmp_msg_0[] = {10, 11, 41, -88, 4, 8, -14, -6, -54, -125, -81, -50, 16, -77, -126, -69, 18, -78, -9, 5, 36, 57, -108, -71, 116, -7, 63, 0, 28, -62, 103, -105, 111, -62, -16, -110, 119, -24, -21, -55, 29, 91, 51, 12, 115, -44, 115, -102, -11, -85, 78, 16, 83, -75, 45, -24, -40, 73, 13, -85, -21, 66, -31, -53, 0, -49, 29, 9, 46, 9, -14, -87, 103, -48, -34, -121, -53, -89, -40, 4, 7, -24, 96, -11, -12, 56, -85, -85, 54, 2, 120, -101, -49, -113, -51, -36, 23, 73, -3, -42, 2, 37, -5, -1, -76, -61, -31, 23, 11, 98, -101, 1, -86, -75, -56, 65, -99, -75, -5, 83, 112, -105, 81, -46, 81, 0, 11, 101, -36, -14, 123, 92, 89, 111};
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
    msg.setTimeStamp(0.7031729854179202);
    msg.setSource(37701U);
    msg.setSourceEntity(170U);
    msg.setDestination(55300U);
    msg.setDestinationEntity(126U);
    msg.req_id = 62978U;
    msg.ttl = 39605U;
    msg.destination.assign("STZURMVACVHLEFKXMAEZOYVIOUOSCVOQIMUGLSQZKHFUKIPNWOXQDJZRBJBXADWFHGDVJRQEZRTBPLRRIQAPSCASIECPZNIGYQZHYBTZCIVXPHMGEANNHLGWFTMNYLZEUTUIJTFPNIKHBM");
    const signed char tmp_msg_0[] = {35, 31, 28, -95, 110, 64, -50, -66, 122, 58, -113, 21, -40, -47, 26, -64, 72, -44, -54, 123, 2, -6, 51, -70, -31, 114, 54, 28, -13, -40, -89, -61, -74, -124, 85, -5, -43, -23, 30, 58, 72, 73, -68, 54, -13, 125, 121, 92, -104, 39, 25, -96, 27, 76, 55, 31, 62, 50, -50, 87, -38, -3, 63};
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
    msg.setTimeStamp(0.5882116652785823);
    msg.setSource(46958U);
    msg.setSourceEntity(141U);
    msg.setDestination(5721U);
    msg.setDestinationEntity(145U);
    msg.req_id = 42728U;
    msg.ttl = 29293U;
    msg.destination.assign("ICGEAZXAFYGONITQXHGDFZAWTVUQJUBRSHOQVRPFEBMIHAUMZQZYONMROGHSPSJCLFEEQTKNGCXNOHZRGKD");
    const signed char tmp_msg_0[] = {-66, 10, -78, -89, 1, -65, 64, -82, -24, -122, 63, -57, 1, 100, -89, -13, 64, 75, 66, -24, 120, -46, -116, 79, -124, -103, -13, 16, -107, -83, 43, 31, 123, -71, 22, -90, -102, -51, 96, -81, 34, -38, 117, -95, 125, -79, 15, -77, -115, -12, 83, -92, 74, -78, 107, 19, -128, 72, -8, 90, 121, 64, 58, -101, 101, -96, 90, 55, 89, 50, 41, -41, 21, 53, -24, -1, 44, 110, -99, -105, -72, -46, -76, -73, 32, -48, -85, -16, -36, 80, -13, 67, 104, -113, 66, 114, 25, -38, -33, -75, 61, 39, 89, 36, -112, 104, -9, -97, -114, -32, -113, -83, 97, -74, -92, 105, -104, -88, 72, -43, -67, 78, -5, -10, 126, 112, 114, -107, -30, -127, 61, -49, 101, 69, 13, -9, 33, -95, 90};
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
    msg.setTimeStamp(0.9735302557650412);
    msg.setSource(20906U);
    msg.setSourceEntity(107U);
    msg.setDestination(36308U);
    msg.setDestinationEntity(11U);
    msg.req_id = 1096U;
    msg.status = 200U;
    msg.text.assign("PLFJXXMSAMNKYQXDFYEQPVFRVEKNUAVMDYPAXVKEVRFIWDQMGGHCWFADIUDLLCJOFCNVCHHSEABLNTOJHDYZTTSDQSBIOUTLADZELMURHIXWKBNWNOOGZEQQFRBCGPTWAWDRUWYIYVCJOGBKOBOPOAOYMJNESYFEHHGRQQPWYZKQXTIGXVLVNSXZXKWYSF");

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
    msg.setTimeStamp(0.9582291959634323);
    msg.setSource(9173U);
    msg.setSourceEntity(203U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(107U);
    msg.req_id = 53288U;
    msg.status = 69U;
    msg.text.assign("WPVMNHHSBEGGVJKDMSIMQZIEWYUEOTRXYKIMCSXNYDGSBQCWKKLOIPLFVWTXYJSNTVLMNDAIRUUEAZHCNCLMEPUDAKJQVYYTLRRJLTQHNZYRJIDOCPUGKVVJDBEBKTTXRPNXIDKXOGBGFQIXZHFHVYRWCNVQESWGLDHPGDFGQXABKOBFNNXESUYTCAUMFOWEUPLCXPBFBRTAMQZM");

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
    msg.setTimeStamp(0.27487885471013196);
    msg.setSource(28556U);
    msg.setSourceEntity(101U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(76U);
    msg.req_id = 14567U;
    msg.status = 85U;
    msg.text.assign("SYVADRHCHCEFZBBXCXPNTDVYODMWNPKHGGFRKVIQUQFQQWXGHXRJLBSYRWLLNIZIBFTWKXZRJONGFWDXGNVYFENLUTSMOWHSXDVEGCZJPGINIQVTWZUORDURTTZCHBKQJOXWYKLATLRQMGKPUTCZWVCGKLKIJALUPGTBEKRSUEP");

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
    msg.setTimeStamp(0.36828336442355447);
    msg.setSource(35932U);
    msg.setSourceEntity(213U);
    msg.setDestination(8042U);
    msg.setDestinationEntity(21U);
    msg.group_name.assign("TJVTCDQPRSYQQPVRLIKRGNGWDCCSPVPZLJAUNVAZFPYNNEDUWJIYXFAWIULHVGXGURWSEBOREDZXNZBHOIRLDPGKBNRVYMOOZQEXSBINGYDPVHJQTQMEALOCHITWFWHZPZW");
    msg.links = 1248480790U;

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
    msg.setTimeStamp(0.48979058467386727);
    msg.setSource(35814U);
    msg.setSourceEntity(166U);
    msg.setDestination(1710U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("OVYNVLMTRUHPUAAFHQDXZGZEGNNCNLTOGLYNRSJXPVUQLDAJPFHYKESGFZOEAJUATQPCOKCDXMKOFJKOSZKFEHRPUBNITXNGJBGUYHLPKTAPMOREYDIYSDIKGFKXTMZVBTCXUBEWSJALWBYGWJFYHIWSCCDLRZVBQXXSRSLHWGFVBSVISIUHJNMGOBCWATLZVVIMWZDCQRXEQQXWCMBYEFU");
    msg.links = 3537443818U;

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
    msg.setTimeStamp(0.6916017503299472);
    msg.setSource(21873U);
    msg.setSourceEntity(18U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(9U);
    msg.group_name.assign("INUDQXKDZLUOCXQOHZZURZKYHTVYNQEHAWIRZYDPEELOFXCMHVCSRUVYALAVWWZYBIQLTXTJRBSRQKESWYFUPNNWFEEKYWCGVODLYEHCLLGCDJBPZVQEOBQZTWIGNXDNJQBOMIM");
    msg.links = 2886334962U;

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
    msg.setTimeStamp(0.8933645109699166);
    msg.setSource(18213U);
    msg.setSourceEntity(28U);
    msg.setDestination(59913U);
    msg.setDestinationEntity(156U);
    msg.groupname.assign("CBRWZIUMGXKFXZDACSQEBMANRGUTDNLVWPVESBFOQHBSXCTLRYWHXJUQPWCUWTAWVYFKHZIUZDRJBGOBXQKFMGNKMIOVNFZCCMTSFAZLOMKAYJHYFCIPEPPJNOTYWVIQKUVAT");
    msg.action = 14U;
    msg.grouplist.assign("UGCWLMIGZZHVREKENHIBAXUXXKBZFLDZRKQLASLIKWXDDBCBCGEHSXSDWHZFTVTXEJDALGRMLLBPIWQVNQRAQYALMFEIOB");

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
    msg.setTimeStamp(0.0540986973502795);
    msg.setSource(58557U);
    msg.setSourceEntity(47U);
    msg.setDestination(21755U);
    msg.setDestinationEntity(129U);
    msg.groupname.assign("XGSRXFYGRQROQZADEBDKJOKPHELLKWJEMOQJPLAGIXZYIPCYUHMRIJFGSIVBBAICMMDBDGVOYNTRFLFVCDONMVIMKJNKAZOLZDHRGZZYONSPHXKAPBLMRPUWTFSLYCKKHTCBAJQSFNESJUCSBJXUIFAEBJGSQLVFWWUQDPXIKVM");
    msg.action = 241U;
    msg.grouplist.assign("XQTUZYVCZXSHWIJQYWQCCWGGLARTMSSNJKBIGSVYQWLNRWRLRUKYIDEKHZSUWIQXYKYIWEVZLPXYTRJSFJYBNUVLZMJDRHBEEXCTPBTLUNEQZVVLHBKFXDAHNLJPCJCKCRIDQXEQNBGVBBAFSMXTPQAEOAGOFIUPZANMPOHNPFONMALFNXMVIFFGYTHJSRDIJIOUMHDCTMKGSOKMKOABJDAUGWBOSFMEWCPF");

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
    msg.setTimeStamp(0.11688818688227642);
    msg.setSource(27886U);
    msg.setSourceEntity(86U);
    msg.setDestination(38917U);
    msg.setDestinationEntity(239U);
    msg.groupname.assign("YZUVDEHNKOMZQIRWOTSAZYJVTVGBOVJPQGAMYYKFMAUJLSJVBNKITENRMNXENVVDQAUWSJXGKIPKKDFRTMAUIZGOFHEATRLXRGBXCCPHMQHGEQAGEICNLZOTJISCURFQKDPSFBISVQRNFAKSQVWCMEHPXFCLYHDPAZLWPQOBWKNTFYUSKUPFEVGCCNLURJDIUZPXHWEDXHYOEGSIAWM");
    msg.action = 249U;
    msg.grouplist.assign("OGUDOQJNAHYHXRJPKBBVSGSSSKEER");

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
    msg.setTimeStamp(0.15531839739429276);
    msg.setSource(17218U);
    msg.setSourceEntity(78U);
    msg.setDestination(28014U);
    msg.setDestinationEntity(182U);
    msg.value = 0.3676624523639428;
    msg.sys_src = 17856U;

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
    msg.setTimeStamp(0.7957040182774666);
    msg.setSource(34906U);
    msg.setSourceEntity(182U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5475960570860071;
    msg.sys_src = 21326U;

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
    msg.setTimeStamp(0.6088027399532863);
    msg.setSource(37192U);
    msg.setSourceEntity(101U);
    msg.setDestination(20677U);
    msg.setDestinationEntity(53U);
    msg.value = 0.19367030121591755;
    msg.sys_src = 47722U;

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
    msg.setTimeStamp(0.5342911354241631);
    msg.setSource(5499U);
    msg.setSourceEntity(12U);
    msg.setDestination(29334U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7776546621061644;
    msg.units = 186U;

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
    msg.setTimeStamp(0.5073879911827159);
    msg.setSource(43291U);
    msg.setSourceEntity(168U);
    msg.setDestination(52334U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7887266365121295;
    msg.units = 7U;

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
    msg.setTimeStamp(0.2032908812495986);
    msg.setSource(3041U);
    msg.setSourceEntity(44U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(33U);
    msg.value = 0.7367685379231053;
    msg.units = 102U;

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
    msg.setTimeStamp(0.8759909300673301);
    msg.setSource(38836U);
    msg.setSourceEntity(51U);
    msg.setDestination(48762U);
    msg.setDestinationEntity(199U);
    msg.base_lat = 0.21513806605934938;
    msg.base_lon = 0.27369882845128457;
    msg.base_time = 0.8695421010147675;

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
    msg.setTimeStamp(0.08641995469430575);
    msg.setSource(33405U);
    msg.setSourceEntity(16U);
    msg.setDestination(49353U);
    msg.setDestinationEntity(111U);
    msg.base_lat = 0.7911063798918079;
    msg.base_lon = 0.5421284239867447;
    msg.base_time = 0.48550208840768816;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 59175U;
    tmp_msg_0.priority = 27;
    tmp_msg_0.x = -25881;
    tmp_msg_0.y = -6557;
    tmp_msg_0.z = -1436;
    tmp_msg_0.t = -10845;
    IMC::Force tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.04762872775129956;
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
    msg.setTimeStamp(0.7436253776294385);
    msg.setSource(23128U);
    msg.setSourceEntity(162U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(14U);
    msg.base_lat = 0.27157219998335225;
    msg.base_lon = 0.16976616575708103;
    msg.base_time = 0.494099600880447;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 718U;
    tmp_msg_0.priority = 21;
    tmp_msg_0.x = 7937;
    tmp_msg_0.y = 8172;
    tmp_msg_0.z = -23996;
    tmp_msg_0.t = -27655;
    IMC::UamTxRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 19025U;
    tmp_tmp_msg_0_0.sys_dst.assign("NYEEPOWCZSSMSUHCZCAIQITRAJCTJFOXPFXGIGTXHQWMBGNPJLFQMEKCKOSNBTZNAXCRNDBOQHABSWUPPUIGEWTCADQCZSLRVYBIWKDFFWAKHMHGMG");
    tmp_tmp_msg_0_0.timeout = 0.3083088977907432;
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
    msg.setTimeStamp(0.07892649874146362);
    msg.setSource(26489U);
    msg.setSourceEntity(174U);
    msg.setDestination(53063U);
    msg.setDestinationEntity(174U);
    msg.base_lat = 0.5954761611700614;
    msg.base_lon = 0.6706089647300146;
    msg.base_time = 0.1578678731883708;
    const signed char tmp_msg_0[] = {72, 51, -111, -28, -52, -10, -13, 59, 6, 34, 61, 98, -94, -106, 36, 108, 40, 71, -113, 45, -9, -46, 71, 38, -59, -114, 108, -27};
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
    msg.setTimeStamp(0.6001994954953542);
    msg.setSource(24608U);
    msg.setSourceEntity(81U);
    msg.setDestination(50493U);
    msg.setDestinationEntity(207U);
    msg.base_lat = 0.6567734626715894;
    msg.base_lon = 0.926154302396288;
    msg.base_time = 0.29105933616733426;
    const signed char tmp_msg_0[] = {59, 65, -62, 27, 62, -8, -9, -11, -54, -10, -19, 12, 117, 20, 68, 24, -124, 112, 57, 68, 96, 120, 120, 101, -81, -56, 120, 66, 56, 21, 74, 87, -10, -87, 92, 10, 88, -99, 66, 88, -96, 42, 90, 28, -56, -61, 85, -83, -77, 62, 106, -100, -69, 31, 118, -45, -67, -52, -36, -111, 123, -14, 38, -10, 96, -108, -45, -78, 99, 126, 90, 66, -56, 34, -7, 16, 119, -116, -6, 56, 106, -15, -2, -46, -20, -1, -94, 23, -29, 116, -117, 37, 86, 24};
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
    msg.setTimeStamp(0.9886675437729503);
    msg.setSource(10091U);
    msg.setSourceEntity(239U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(63U);
    msg.base_lat = 0.15241281906123227;
    msg.base_lon = 0.9619967594990209;
    msg.base_time = 0.49691744652558045;
    const signed char tmp_msg_0[] = {47, -93, 106, -30, 120, 107, -84, -41, -126, -99, -56, -23, -83, 98, -128, -20, 126, -97, -24, -60, 93, 117, 71, -50, 26, 11, 40, -18, 104, 90, -124, 70, -97, -102, 102, -22, -45, 14, -9, -22, 108, -127, 0, -63, 62, -78, 64, 45, 68, 125, -15, 1, -45, 122, 23, -124, 65, -92, 125, 77, 25, -66, -71, -122, 45, -47, -99, -78, -38, 103, -33, -6, -28, -15, 94, -51, -122, 0, 67, -76, -27, 64, -85, 16, 67, 122, 106, -118, -83, 63, -78, -52, -26, -83, 96, 86, 107, -91, -10, 86, -42, -41, 118, -71, 69, -19, -24, 23, 91, 39, -116, 120, -11, 79, -3, -104, 74, 39, -126, 109, -7, 49, 3, 97, 98, -82, 113, 107, 71, 19, -123, 118, 12, -87, 34, -42, -2, 28, 44, 22, 28, -60, 6, -21, 20, -29, 57, -74, 63, 19, 91, -81, -7, 11, 50, 94, 8};
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
    msg.setTimeStamp(0.2986172210060384);
    msg.setSource(22058U);
    msg.setSourceEntity(101U);
    msg.setDestination(10412U);
    msg.setDestinationEntity(167U);
    msg.sys_id = 25622U;
    msg.priority = -75;
    msg.x = -15905;
    msg.y = -1375;
    msg.z = -30166;
    msg.t = 11036;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 156U;
    tmp_msg_0.htime = 0.9672880607943443;
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
    msg.setTimeStamp(0.5308916381367513);
    msg.setSource(8514U);
    msg.setSourceEntity(227U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(162U);
    msg.sys_id = 47820U;
    msg.priority = -102;
    msg.x = -22411;
    msg.y = -28485;
    msg.z = 23484;
    msg.t = -11098;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 31873U;
    tmp_msg_0.sys_dst.assign("MUFTRCYIWQHXPXGESYACXXQTEAQIJUZKLTDLXPNOZJHTOUWBXFZBZCCVVYYTONRHSWIQFJALJPDHAARMKRSIISWPLTVNKYCPKJEDVOMENLDAXAIFDHROHUOGJDBYXRDPJNWSKBJGQBXBLNIGSNKERBAEKAQMAMYLWCISPUFGKVWQBRUZTCQVIYVNHMUFZSHMCXKOOZOVTFUIBKDLDFYWSPJMCZR");
    tmp_msg_0.flags = 100U;
    const signed char tmp_tmp_msg_0_0[] = {-45, 88, -87, -68, 19, 33, 77, 89, 13, 33, 69, 125, -3, -1, 29, 57, -68, -10, -127, -91, 65, -125, -123, 66, 32, 122, 99, 51, 95, 38, -55, -7, -126, -82, 97, -8, -48, 89, -63, 11, 41, 119, 4, 41, 106, 100, -8, -77, 101, -116, 55, 70, 56, 67, 21, -121, 30, 62, -121, -94, 123, 103, -8, -78, -84, -80, 59, 121, -82, 51, 5, 72, -81, 15, 58, 36, -94, -58, 123, 67, -73, 59, 79, 17, 71, -40, 117, -73, 97, -120, 38, -19, 9, 36, -106, 85, 7, 6, 82, -86, 71, 0, 20, -102, -76, 84, -70, -35, -109, 24, -77, -44, 62, -18, 39, 63, 2, 69, 92, -27, -64, -5, 24, -22, -91, 57, 65, -61, 113, 68, -3, -85, 10, 77, -70, -7, -125, -87, -64, -90, -89, 86, 19, 99, -71, 17, 122, 24, 58, -26, 84, -73, -119, -70, -50, 68, -76, 43, -10, 95, 1, 87, 7, 1, 28, -89, -83, 36, -122, -119, -5, -62, -7, -90, -67, -114, -97, 109, -12, -5, 19, -101, -4, -89, -36, 110, -32, 105, -109, -117, -43, -99, 124, -74, -127, 107, 26, -51, 75, -84, 76, 49, -43, 83, 25, -117, -69, 27, -55, 10, 24, 114};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.48693929258934954);
    msg.setSource(55474U);
    msg.setSourceEntity(133U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(25U);
    msg.sys_id = 60661U;
    msg.priority = 63;
    msg.x = -15;
    msg.y = -8636;
    msg.z = 2216;
    msg.t = -28417;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.7643265613951054;
    tmp_msg_0.x = 0.3450888224338572;
    tmp_msg_0.y = 0.9836646005111103;
    tmp_msg_0.z = 0.5187827645673456;
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
    msg.setTimeStamp(0.5965123353172944);
    msg.setSource(51507U);
    msg.setSourceEntity(124U);
    msg.setDestination(680U);
    msg.setDestinationEntity(91U);
    msg.req_id = 64944U;
    msg.type = 234U;
    msg.max_size = 21911U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4359826926914525;
    tmp_msg_0.base_lon = 0.25840295967267657;
    tmp_msg_0.base_time = 0.8758658668687838;
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
    msg.setTimeStamp(0.18024000152585562);
    msg.setSource(52116U);
    msg.setSourceEntity(152U);
    msg.setDestination(26539U);
    msg.setDestinationEntity(143U);
    msg.req_id = 18420U;
    msg.type = 209U;
    msg.max_size = 14005U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.04360892953184181;
    tmp_msg_0.base_lon = 0.6329471313309338;
    tmp_msg_0.base_time = 0.22666522159846003;
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
    msg.setTimeStamp(0.08181007579088595);
    msg.setSource(57348U);
    msg.setSourceEntity(129U);
    msg.setDestination(44862U);
    msg.setDestinationEntity(95U);
    msg.req_id = 16344U;
    msg.type = 197U;
    msg.max_size = 47626U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5281388785189355;
    tmp_msg_0.base_lon = 0.1579308324346369;
    tmp_msg_0.base_time = 0.9505662449171276;
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
    msg.setTimeStamp(0.373082692696983);
    msg.setSource(54322U);
    msg.setSourceEntity(77U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(50U);
    msg.original_source = 50832U;
    msg.destination = 22133U;
    msg.timeout = 0.8131213570835625;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.6790141618350627;
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
    msg.setTimeStamp(0.6713087489437504);
    msg.setSource(40039U);
    msg.setSourceEntity(223U);
    msg.setDestination(33727U);
    msg.setDestinationEntity(151U);
    msg.original_source = 776U;
    msg.destination = 22901U;
    msg.timeout = 0.5566973955420849;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 10685U;
    tmp_msg_0.destination.assign("XNXIUATAQWGHYGFZGZTUVUKDPMMOEEHSYSODABWHCGBJXRSACAXDHLFQBQJRSHVFMXIWOPNRBQGHPWIMMEJTKWIMYCXRNTBNYOAXJMFIVDMUEAFZLDXLOASUXDOHJTOIZEJLGKQLVCFIEDCTWTCVPDVFKOKJFYNLQNZPHSEEVBSSPX");
    tmp_msg_0.timeout = 0.6243185160349584;
    tmp_msg_0.range = 0.6199319534986544;
    tmp_msg_0.type = 244U;
    IMC::AcousticStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 65307U;
    tmp_tmp_msg_0_0.type = 1U;
    tmp_tmp_msg_0_0.status = 181U;
    tmp_tmp_msg_0_0.info.assign("TXVOABABBKYQUQQXFZPPMXJGCHDQKTNUYYRSLBRSXFHWOERUJVRQKGEUZNWATZMVGGANOLKZXBYOYZLRTLVWJEHVODSIIDBNBITPLDGPRMHIJQWASHJVKKUDPTHOSQBEMDLKLOCWYSNYIFRXHJRMJYENSZLGQNAMJJVZKPYGXMCGUTCAQGDXCESTNNFTCDNRQHIFTLEZVFFSVWOJDCPVIWCOFPHMSLFUZBUUWWYDPMCG");
    tmp_tmp_msg_0_0.range = 0.37556801204044243;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.19504915753604957);
    msg.setSource(44706U);
    msg.setSourceEntity(130U);
    msg.setDestination(7392U);
    msg.setDestinationEntity(234U);
    msg.original_source = 3789U;
    msg.destination = 21903U;
    msg.timeout = 0.8670638758122151;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 233U;
    tmp_msg_0.op = 81U;
    tmp_msg_0.possimerr = 0.8487657835494412;
    tmp_msg_0.converg = 0.2903707518712618;
    tmp_msg_0.turbulence = 0.27669063441237896;
    tmp_msg_0.possimmon = 96U;
    tmp_msg_0.commmon = 203U;
    tmp_msg_0.convergmon = 11U;
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
    msg.setTimeStamp(0.03812730690052357);
    msg.setSource(62386U);
    msg.setSourceEntity(174U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(91U);
    msg.type = 90U;
    msg.comm_interface = 42283U;
    msg.model = 11860U;
    msg.list.assign("OUVMBOUSNFTOIFBTCAPJGXUNNNJETZRVQPCLVV");

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
    msg.setTimeStamp(0.0569412051433551);
    msg.setSource(12160U);
    msg.setSourceEntity(50U);
    msg.setDestination(14839U);
    msg.setDestinationEntity(245U);
    msg.type = 224U;
    msg.comm_interface = 64542U;
    msg.model = 44843U;
    msg.list.assign("VPRDFCWZNHWJANQHHBCJHKPVJOFSYWFJBWPTXAKZUXNAKHDYCRMJJTLJISTVVHFYINICGWXMNGKEVVMFXVCRZXSLUAYBIXDHFTMMOINQPPXPDTRQBESSLUIGMQLBYSEDVTZAQAFGBTHQUCOLFRSPWJMCMPICRUIR");

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
    msg.setTimeStamp(0.803211489302697);
    msg.setSource(40719U);
    msg.setSourceEntity(200U);
    msg.setDestination(51272U);
    msg.setDestinationEntity(129U);
    msg.type = 140U;
    msg.comm_interface = 63704U;
    msg.model = 20615U;
    msg.list.assign("KQCVZJZKRXGHKRVZCSVKYENVWLMFIENEAUWWOPZAZDHXMXWJPFSQJBBNPPRRZOGHCSOORQPYEBCCBXGLNQFFKUOWYZVWMUTUUBEJAYTNRQHFAPYIDXYSAGZAUMLTIJCRMPGECMKXFJLEYNDTOKNHNDIQXFYEXETQWTLRUJHXIHTDSMEOSJDMACSLIVKLSZPTYWDPYGUJRVNGNDBTBDJFOHVHAHSMRLAMIIAIOBPXFWUKGCCDTVOL");

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
    msg.setTimeStamp(0.871242561340141);
    msg.setSource(34457U);
    msg.setSourceEntity(41U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(235U);
    msg.type = 52U;
    msg.req_id = 2165254410U;
    msg.ttl = 37551U;
    msg.code = 42U;
    msg.destination.assign("FEGXJNFNWHTMTEZWMKZOKXBPZPOMCZCZMNALEOPUPYDJGCSEAUKMBVIOKESWA");
    msg.source.assign("AUNTDWJAVULEHVCFBYWVMQLPNKNKDEFFBJYMNACAOPWSGBDUPSDZNSHNEHZVTIUFQGQTIDDDHMQSCVHJWHTSZOGZQVLYHYMKFXVKKEGVLCTIX");
    msg.acknowledge = 193U;
    msg.status = 40U;
    const signed char tmp_msg_0[] = {31, -125, 104, -34, 54, -111, 69, -111, 121, 124, -75, -93, 60, -9, -86, -28, -42, 12, -110, -122, 119, -8, 0, 89, 81, -93, 94, -49, -12, 92, -51, -24, 72, 4, 17, 97, -73, -105, 26, -5, -78, -98, 59, -112, 114, 66, -61, -11, 85, 80, -15, 77, -102, -84, 69, 91, -9, -57, 110, -53, 35, -98, 91, -61, 103, -11, -4, 113, 37, 121, 117, 95, -47, 51, 107, -80, 20, 4, 64, -128, 14, -53, -81, -26, -117, -71, 3, -114, 56, 64, 9, -63, 10, 77, 72, -55, 1, -122, 39, 31, 49, -10, -33, 30, -44, 119, -7, -116, -55, 14, 120, -51, 17, 47, -45, -107, -118, 70, 56, 113, 75, 113, -72, 100, 55, -31, -99, 16, -7, 62, 53, -105, -93, -28, 122, 126, -78, 126, 42, -57, -74, 47, 8, 125, -99, 119, -66, -12, 39, -70, -93, -78, 0, 52, 94, 1, -121, -37, -27, -68, -38, -114, -4, 15, 81, 51, -18, -2, 26, 91, 123, -115, 37, -34, -8, -42, 88, -97, 101, -37, 94, 52, -64, -89, -65, -15, 74, -88, -50, 126, 122};
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
    msg.setTimeStamp(0.2730348571874439);
    msg.setSource(999U);
    msg.setSourceEntity(163U);
    msg.setDestination(4283U);
    msg.setDestinationEntity(130U);
    msg.type = 15U;
    msg.req_id = 495400171U;
    msg.ttl = 4155U;
    msg.code = 192U;
    msg.destination.assign("XIAWTYAVZPMTYAUIHNJPBEXMZHMFMQYTSCGRVYCZTFQRPEMYWEWCONEBONKCOPJNNUWDHKQMPEDJDTFWMELVSPYSLKWBQBHBNZJZWIGSXPHQLJOBQBHTEIVGOGNLWQYFQKOTNXZCLSEVLBZUDGFQHCAXRAXBYDFFORVQEAJUXOEUGLDAKSMVGYCIUTSKXRRCZVRPVKXFBIGKIXSMHTGJARIDFDAJOSHRIIDWPNGAZVLULKMJCUDJSWZ");
    msg.source.assign("ZLIYXWJADSTQQDATNIINFRUKSSKMQIVANFVIIKPCZVYKFTOADCLJNDPVLTTYMDNHBOCWYXPMVPYHTZQJFBAOUIRFUJ");
    msg.acknowledge = 178U;
    msg.status = 175U;
    const signed char tmp_msg_0[] = {94, 0, -69, -63, -14, -112, 113, 73, -10, 64, 45, -91, 66, 62, 68, -114, 80, 24, 125, -70, 60, 96, -68, 118, -80, -56, 91, -6, 79, 103, 86, -102, 15, -74, -49, -16, 63, 18, 71, 62, 90, -1, -93, 8, -78, -53, 44, 19, -6, -86, 59, 40, 70, 69, -91, 28, -55, 41, -73, -1, 88, 91, 69, 26, 117, -56, 104, 88, -35, 124, 123, -88, -110, 55, 22, -95, 39, -58, -27, 60, -91, 24, 59, -107, -26, -114, -124, -75, -54, -61, 118, 21, 85, -23, -113, -81, -66, 72, -100, -24, 110, -13, -41, -35, -69, 51, 116, 126, 54, 30, 108, -32, -60, 3, 76, 67, -20, -74, -115, -9, -77, 61, 103, -120, -82, -63, -5, -122, -51, 78, -26, -110, 68, -16, -77, 3, 19, -29, -10, 44, -8, -85, 58, -74, -67, -72, -38, -106, -128, -52, 95, 116, -28, 111, -61, 48, 110, -29, 11, -62, -31, 19, 115, -25, -7, -120, -59, 11, -6, 107, 109, -79, -46, -40, 88, 62, -82, -87, -108, -81, 3};
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
    msg.setTimeStamp(0.6318526690562566);
    msg.setSource(12489U);
    msg.setSourceEntity(125U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(146U);
    msg.type = 183U;
    msg.req_id = 709822421U;
    msg.ttl = 1237U;
    msg.code = 223U;
    msg.destination.assign("FIZPKZISUYWDEOPNBIIBKRXZPWMVNVUUUPANFXLEKRCQKTGCKXNVTVHWAYAQCRMSYNOZRMALBYKPGNXWJQIKEHYFSOHBLNJGCMOJKSDGSRUCJWDFSCWDMOFO");
    msg.source.assign("ZENFKDFLYPMBBPYSNXFGCLCHTEBAMSVIJBXMXBZXVIWEAAFCYHEWARMUELQHJGJSCJJCUPTVOZWFIUERMEDYJNWLRDINYQXPMYQLGDO");
    msg.acknowledge = 59U;
    msg.status = 241U;
    const signed char tmp_msg_0[] = {-119, -103, -120, -7, 65, -69, 4, 90, -59, -65, -125, -118, 70, 119, -14, -55, 126};
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
    msg.setTimeStamp(0.1701415181536835);
    msg.setSource(24483U);
    msg.setSourceEntity(227U);
    msg.setDestination(16380U);
    msg.setDestinationEntity(184U);
    msg.id = 193U;
    msg.range = 0.24212313185487766;

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
    msg.setTimeStamp(0.08115925429525095);
    msg.setSource(24591U);
    msg.setSourceEntity(132U);
    msg.setDestination(32527U);
    msg.setDestinationEntity(89U);
    msg.id = 5U;
    msg.range = 0.5829524658135639;

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
    msg.setTimeStamp(0.30777587707845966);
    msg.setSource(24403U);
    msg.setSourceEntity(215U);
    msg.setDestination(44212U);
    msg.setDestinationEntity(18U);
    msg.id = 201U;
    msg.range = 0.9163961306324808;

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
    msg.setTimeStamp(0.7146150504530739);
    msg.setSource(36266U);
    msg.setSourceEntity(73U);
    msg.setDestination(61979U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("EQFFHCAAZQHAHXZOZIRGSNYMCBITJEPYQXUYYVCHTRMMPRNEGRQTZVUWSSAOQPNNSIMGZLMEWJTVFMYXKWVNYXYYBCJBGNCUHWDEQ");
    msg.lat = 0.1731274712183477;
    msg.lon = 0.3137254765184484;
    msg.depth = 0.7353326929110826;
    msg.query_channel = 108U;
    msg.reply_channel = 51U;
    msg.transponder_delay = 144U;

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
    msg.setTimeStamp(0.8067106633490998);
    msg.setSource(2413U);
    msg.setSourceEntity(183U);
    msg.setDestination(12616U);
    msg.setDestinationEntity(245U);
    msg.beacon.assign("QPLNAMIUUTM");
    msg.lat = 0.9307316772276005;
    msg.lon = 0.9154065895896524;
    msg.depth = 0.20836591758552359;
    msg.query_channel = 17U;
    msg.reply_channel = 59U;
    msg.transponder_delay = 29U;

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
    msg.setTimeStamp(0.7803254979091807);
    msg.setSource(26694U);
    msg.setSourceEntity(218U);
    msg.setDestination(17626U);
    msg.setDestinationEntity(32U);
    msg.beacon.assign("KLSCSYRIPGCESAIOAMFOJGNRICVXXRHXGAWFFHPPXPQGUEMNWVHJLWUBCQYYQLFOQ");
    msg.lat = 0.024895363043543117;
    msg.lon = 0.648344313870197;
    msg.depth = 0.7920252499821064;
    msg.query_channel = 84U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 137U;

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
    msg.setTimeStamp(0.6656268476932498);
    msg.setSource(50503U);
    msg.setSourceEntity(185U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(165U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.7265245794025481);
    msg.setSource(545U);
    msg.setSourceEntity(91U);
    msg.setDestination(10434U);
    msg.setDestinationEntity(147U);
    msg.op = 196U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RHOQTFZELAWVRNCFGRSCJPKZRUJSMEUYYYVOVHLFSAIJSLFDUTTUTKJRIVFXQBKJWOG");
    tmp_msg_0.lat = 0.23192178925094986;
    tmp_msg_0.lon = 0.9660242022539312;
    tmp_msg_0.depth = 0.14234986890438095;
    tmp_msg_0.query_channel = 83U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 29U;
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
    msg.setTimeStamp(0.819635584525133);
    msg.setSource(24915U);
    msg.setSourceEntity(37U);
    msg.setDestination(46380U);
    msg.setDestinationEntity(225U);
    msg.op = 54U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YFXPZRQXIFXCMLXZRROUBBMJNLUFKDZUCTONLTSOIRTQEGVDSKRUPIZRXVJZLLUBTWPCEGXZINZGKEMHEIAJCSPHVLPLDPYHBTKGWAMCVJEHDLNSAILKBQHQWBNCGAFIQWILKSNWQUDOVVMZVOPAJGTBFMSEQXVYRWSXOAJOOMUDGAFYUDYWRSPAMEPBAFOBTJXKTFEKJJGEBWNFIHRWQGCKUSVSDZFAMGZYJDCQHYQYRTMUXKDY");
    tmp_msg_0.lat = 0.9737848158813593;
    tmp_msg_0.lon = 0.9062516059272904;
    tmp_msg_0.depth = 0.46502315958228424;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 92U;
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
    msg.setTimeStamp(0.8931260434207284);
    msg.setSource(27052U);
    msg.setSourceEntity(60U);
    msg.setDestination(32333U);
    msg.setDestinationEntity(124U);
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 35840U;
    tmp_msg_0.lat = 0.8023270410955565;
    tmp_msg_0.lon = 0.8809049608281995;
    tmp_msg_0.z = 0.25845712712661495;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.speed = 0.9409347144940168;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.roll = 0.45447582953186394;
    tmp_msg_0.pitch = 0.43495259060822156;
    tmp_msg_0.yaw = 0.0855255181654464;
    tmp_msg_0.custom.assign("ZEJBAZNFCDINCRORIDBIDQFHPQPMUACNAZGQHUSKUJKVKWHDKDDRGTSYRGMILSWZELTXUDCNRKPMOCIZYQQRBXXPLYVGJSFYVAYBUTXEGXFPVIOEFMXERGGTNFPOWHDIEUFWCOVLWTYWNAEQXZZWJISWSHXOKLATUOLIZQLSQZKNJBTLNYDPYJACKRJUGMLZMEPVNHJHRVBVHMXIMLKXFQGJOHCTWMGSUNTVFBEBJWADFBPYAUOBASRP");
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
    msg.setTimeStamp(0.4186298876631386);
    msg.setSource(57020U);
    msg.setSourceEntity(59U);
    msg.setDestination(15864U);
    msg.setDestinationEntity(100U);
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.610868758706434;
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
    msg.setTimeStamp(0.31178614967101914);
    msg.setSource(3457U);
    msg.setSourceEntity(59U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(181U);
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 98U;
    tmp_msg_0.actions.assign("PNDAEYZPBEGWLGMOLYHZRBGODBEOTVFDNCVOQZDPRYKHJNBAKYSXYODVHRIJCKCUGSAHLVFAIZBLMZZHCCFQTU");
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
    msg.setTimeStamp(0.36026023339283886);
    msg.setSource(12642U);
    msg.setSourceEntity(3U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.11648184037585962;
    msg.lon = 0.7782878746707658;
    msg.depth = 0.8093870200748999;
    msg.sentence.assign("MCVWCRTFAJQNOLXYTVJLULJNQBVXLHKWSBBRCHDDPPVDGKPJENUDBBIQYRDGSSVLVBQFMBOTZTXIVQMCXRGMUPDZWTZFQIEJSCWKTNHHLBOGCFNALZYPRHYEQGRWFTLYXUGYMQZCRZKDIDAEXOCVRAGPIJBANONTZOESXOEGRWNZAYHIKHNGCOJWAJPXF");
    msg.txtime = 0.4688648910729909;
    msg.modem_type.assign("HWAQQTIJLJVFSFRCATGHNEQTPCSYOZGZZIYDVAXKIIUFVHROEQKULCFQKMYWWDRPUSYEYDBEYWCBYDNMHKUHAFTPISRRPEHHQQXJLJJLMDMRPMAOTAVARZMJXRJQFPPPSTOQEXZVTDNRZXKDGYPUKVMMXOFEYNZBWUXDXRTOICIBKNLKZOUDWFQELEFECJGVWTZPCGNBFUSVHJWBOIGBJTIKLMVUGGNYXILGMBAW");
    msg.sys_src.assign("ZMIEQFBGAGBKVJEAWKZHMADRWPNIYWOISOARXYTEQSVXMDRIGEQPMMHGYZLLNAOHVVTXNMEURHKSBXSZKGEQDMCOCFNPLUACFKKSXNSXEIDNHXLUSYYTYUWTRBPNUDHAOHHCZWIRMGBYCSIJPEMTVODWGRPFJSQDQLOOGFCKREZ");
    msg.seq = 48051U;
    msg.sys_dst.assign("UQBVGLMHJMHOGIPIYRNMBJESICBHLUTKCLQAXPP");
    msg.flags = 253U;
    const signed char tmp_msg_0[] = {-118, -63, -3, 123, 34, 72, -75, 94, -97, -53, -20, 110, 41, 20, -69, -69, -16, 70, 74, 10, 115, 5, 123, -26, 65, 101, -39, 67, 68, 24, -92, 101, 10, 89, -6, -75, -126, -73, 100, -127, -97, -98, -79, 37, -77, 115, 69, 36, 74, -72, 92, 33, -4, 45, 90, -102, -106, -100, 80, -123, 68, -66, 109, -49, 19, 27, -60, 26, 21, -50, -37, -98, -2, 112, 76, -12, -121, -54, -67, 57, -49, 93, 24, -9, -105, 114, 101, -37, -98, -48, -79, 94, -109, -85, -92, -39, -5, 55, 8, -127, 89, -26, 126, 4, 69, 38, -35, 113, -72, 94, 56, 42, -91, -109, -87, -87, -107, -76, 114, -45, -54, -35, -121, 41, 67, 5, 33, -100, 101, 79, -92, -87, 64, 55, 56, 126, 90, 78, -69, -127, 40, -13, -121, -97, 86, -87, -12, -9, 31};
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
    msg.setTimeStamp(0.1925495754412937);
    msg.setSource(61678U);
    msg.setSourceEntity(142U);
    msg.setDestination(7118U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.725137527610764;
    msg.lon = 0.6218842722134067;
    msg.depth = 0.5132990548512338;
    msg.sentence.assign("YAPCREYBPUSDCEEKGMLFAUTQUVABSQVKIQXTZLPAKIHSOHRKLJSTZCRFNKHKFKXOCPXKYIIIJEARVAWGSQZQDOOOFTUNMBRIIUEFCEUWZCFWUWAOUSTAUDUKRQXGTTPFBXVNGZCGZJAOMKEHFDLNVGQTWGXMEWMOCPHHGTRCMNBXRDNQILNVSDBTYHSMZPNSPJRYXGDLDBHOLYIJBPVOEIMYMEJBWVZJXMLDCYNVSGQWJAWP");
    msg.txtime = 0.03313676519260034;
    msg.modem_type.assign("LYTOGDYZDPJNABSYAVQDYRVBJNZSBGHPINPEWGFXJLXEARTCJSXEUOZMGIAZLFSEDGRNVEUDMYUFNMRTWGHIJCYCWTRQNSLRAKAKPGWUHWPHWFQDWDKTMBKVSIQPMWJNXOLTZCZBCRYFZKVUUPFTOGHXSVIMPYOKQEQMDSJCBASLFEEZSCWETRBLHICRWVLIOQYO");
    msg.sys_src.assign("HZPRLHMKZCOBUKWTDIUATASOFKNNFGEYMVHYBAZGBAWUURIYPJPRWHBQGYFZNPLEDSZJADGUIKYUSVI");
    msg.seq = 20668U;
    msg.sys_dst.assign("CBGUOHTHYSEZJKWEFEOQPQTAN");
    msg.flags = 38U;
    const signed char tmp_msg_0[] = {107, 65, -119, -92, -39, 22, -17, 2, 48, -105, 14, 11, -86, 99, -109, 93, -49, -70, -94, -96, 13, -73, -116, 25, -22, 7, 125, 16, 112, 33, 16, 112, -111, 32, -24, -93, -28, 10, -127, 88, 6, 46, -76, 56, -124, 82, 50, 76, 47, -11, -73, -55, -14, -93, 85, 99, -32, -110, 57, 8, -110, -20, 0, 92};
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
    msg.setTimeStamp(0.6281639414076424);
    msg.setSource(14103U);
    msg.setSourceEntity(215U);
    msg.setDestination(7054U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.90774202787943;
    msg.lon = 0.7794434189022866;
    msg.depth = 0.6876136867623731;
    msg.sentence.assign("SFDFOKDZXVMVTJTEHUF");
    msg.txtime = 0.6357674531489985;
    msg.modem_type.assign("XTZNVCGRYCJIJZOHDHHSWLMQATGWLJDVAVZRMUPZHEXGKGYNFIIORMYLTFPIZXAWOPAEBSHYLNOBPADRBIZTNPONWQVNHKOVSKQNSZCJFRCFCRUWBESAWVYJIFJQVLVMSXEGLOWCTAXFOEQKPFBQMJFWRMEPGYUECNSVDNE");
    msg.sys_src.assign("PQFDFDVIWROITOFZAOMDAUYLCPCVGOBEUSCLIPMTXSFYNKOGJYESYVZBKLRRWLQEGHBDTDUSLTLRMEWRTODEXHLCIKWRJSBHPAZGAKKGWJCJGIWRGMGIXVMAHHMGYTQNQOSIENWNCZUEMQWBFUHUNKPBJXXLZMULUXQVNDYQUXJPSYBEHDTVSPIQKYPFPWVAZOFUBOQCMZNOJXN");
    msg.seq = 18621U;
    msg.sys_dst.assign("NBWUFVRJDEUFGSJGUFLHSBSOLMNGCGXVUCLIKIZKHIXYBYQRZVPOSIXYSXFMPASWLMZHTTCBCALMZEKJXYDYTDUQEYVUCRRLMDADXJDAEPKDLWUPLZMQNGOWHJCRYKCHZAPFKJWGTATDJOPPFWTEOKAVIHOXVTHRPQIOXYBBXWIHXPDJFNQ");
    msg.flags = 246U;
    const signed char tmp_msg_0[] = {8, -71, 27, -121, -24, -106, 108, -15, -115, -13, 66, 81, -128, 108, 83, -18, 10, -8, 109, -30, 71, 40, 54, -90, 121, 7, 111, 10, 79, 8, 80, -60, 10, 59, 19, 49, -73, -7, -104, 34, 102, 99, 73, -16, 19, 2, 51, -69, 104, 77, -108, -118, -56, -127, 46, 95, 20, 115, 69};
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
    msg.setTimeStamp(0.8965142585355197);
    msg.setSource(61280U);
    msg.setSourceEntity(247U);
    msg.setDestination(12275U);
    msg.setDestinationEntity(254U);
    msg.op = 65U;
    msg.system.assign("REOFILHCOTJJAGCZHBXFPRXJQSJMGYKXAXUMGAPSFTQPCIDHFQIPIAECDWLYDJHFJWVTLROYBNQMRNUXBTLYXWPNFSDYBVXVTEAQESPWHMYKLYLGTBICQLSTYFTDUCNADKIZDLMFVDGEKIQWBTBQNYFZPMJWZVHDCSMFONILJEQSGVPIAB");
    msg.range = 0.09549531698257785;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.8962471152103454;
    tmp_msg_0.y = 0.19690044312155053;
    tmp_msg_0.z = 0.24998113526358867;
    tmp_msg_0.vx = 0.816731452437082;
    tmp_msg_0.vy = 0.9941273750988909;
    tmp_msg_0.vz = 0.012795473075655983;
    tmp_msg_0.ax = 0.5923217884119154;
    tmp_msg_0.ay = 0.3058160494047347;
    tmp_msg_0.az = 0.08729906307201685;
    tmp_msg_0.flags = 21086U;
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
    msg.setTimeStamp(0.08685377633170543);
    msg.setSource(33678U);
    msg.setSourceEntity(73U);
    msg.setDestination(29602U);
    msg.setDestinationEntity(207U);
    msg.op = 237U;
    msg.system.assign("UHDDFHOAYJBCZASQYQAMJXHZZRORIXCPFTBFEYCMNIVRIUKKEWEHXZBUSZAERYYSFWATGZLNJOVGXQCLUWSQGJGTTZWEONOKIUTHPXBPVPEDMVETGCQKJAROYDKRNIPDOUIRDHISFPZCFTBKQIETFUPLAWHLYFPMWMXTMOLZVDCMHLNGADGKYIGKDJXQVSSR");
    msg.range = 0.8882540641080923;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("WDZQFVCZVMVHXOQQXCSACZSAIYOZVFBWWJFPRWKEJNBUXIEGDGBNHELOWAMFQBRJRPPJZFSMFQCLAUYYCVLWYEYEBTBCCYHRWCLLUJRWERTXSASVVHFIUQLMGOWLBCFLUHAITEQQNIZKNFGMSDIPUUZBDJMTHGKNFKIRXBVZAX");
    tmp_msg_0.x = 0.7514338624192226;
    tmp_msg_0.y = 0.06610454368394081;
    tmp_msg_0.z = 0.7566581478662449;
    tmp_msg_0.n = 0.4453028443838689;
    tmp_msg_0.e = 0.3060160005923547;
    tmp_msg_0.d = 0.6759693144272454;
    tmp_msg_0.phi = 0.5692278060557682;
    tmp_msg_0.theta = 0.31996719484601766;
    tmp_msg_0.psi = 0.5563985182050102;
    tmp_msg_0.accuracy = 0.2540463052740308;
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
    msg.setTimeStamp(0.7126030413675977);
    msg.setSource(17691U);
    msg.setSourceEntity(72U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(151U);
    msg.op = 58U;
    msg.system.assign("PSGESFYCHNNBUTFQDDIBCPMTNWULZYLGWKAHWQTNZYOHXMPPEKJGNTXEICZUAXQBQOYDNLOMXNKQWSFLIJCHOGXRVIYVMPVLWHERULYKYJRXHTO");
    msg.range = 0.7429613513832451;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 88U;
    tmp_msg_0.mode.assign("IYCEQOJXWGAHCBHQYMBBYJRFGOIHDSPRBEFMZQKSRTMGUGCHQRCEOLRUXZBELLNJKTLFUFLFCNTVRSMGBEMHVNZVUMCKUNQOPUWMYNYCOSAVMEXRLPDLKNZKJVADWTAQCCCLOBRDMWPSYYWUBPZJFPAEQVMZBIAIJLRNEJZNVTSSOZTQFUHR");
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
    msg.setTimeStamp(0.8339924693825048);
    msg.setSource(61814U);
    msg.setSourceEntity(115U);
    msg.setDestination(1625U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.9264524299248019);
    msg.setSource(38748U);
    msg.setSourceEntity(238U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.8137510876161597);
    msg.setSource(48930U);
    msg.setSourceEntity(239U);
    msg.setDestination(30970U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.6018402503418468);
    msg.setSource(46682U);
    msg.setSourceEntity(168U);
    msg.setDestination(35400U);
    msg.setDestinationEntity(108U);
    msg.list.assign("UQIIWZVXQNDHFBIILZIZEAKGDPNBWJAMSKACFJUUWLZMDRGVENHGQCEKLINPMNFQLWEPVMORCQEWZDBHLBXJTEBBLDEROKURNZJMEVWBQVGXMKFTOACMFH");

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
    msg.setTimeStamp(0.9537364199937647);
    msg.setSource(59508U);
    msg.setSourceEntity(243U);
    msg.setDestination(22544U);
    msg.setDestinationEntity(192U);
    msg.list.assign("LTJKZTMXZDZAVKQWYJLGYISXCSVFGNWSZUGUCBNWQZXVLEZPJIOWFHXDQPNOBHOBGMFXSTDORXYQSLKGRULFNQGCUPXYEHIVWQELMCVRNDQENTHAMCIULODAQCVINKJEWLYUIBBHMDAURGOORTSFSAJKUWKDIXEWEREHFPIKEPHUKSZDCABMAJGBHWKZ");

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
    msg.setTimeStamp(0.8823550978804342);
    msg.setSource(61407U);
    msg.setSourceEntity(157U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(120U);
    msg.list.assign("KNGFGLXXBLHDNEXTMYBHGCQ");

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
    msg.setTimeStamp(0.021293127401164846);
    msg.setSource(6309U);
    msg.setSourceEntity(218U);
    msg.setDestination(32423U);
    msg.setDestinationEntity(84U);
    msg.peer.assign("OJHNCCSGLJOUPLZYQWCVIOMZILCCIZPQAOTGSBZXIHVQEILANHBEEUMDGWNWKSBGYGRKJRRZNRT");
    msg.rssi = 0.03335201176554703;
    msg.integrity = 10173U;

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
    msg.setTimeStamp(0.20679512192260996);
    msg.setSource(63641U);
    msg.setSourceEntity(14U);
    msg.setDestination(51915U);
    msg.setDestinationEntity(232U);
    msg.peer.assign("PKIVWXJKIFPONTMIFLQZXLCFZMQMBRRBYPHHSJWENCUKZSAHRAYEXQABUWLSLLCAQZTWTTBDUONRBVTPXHEJCKRHFGDSOIUXPDDRLUZBMDOSSVNZXPPEEZHVWVTXGYGKMUQAVSOCANZFNHIYJBUCMFFCXNWGILIBMKDVWPGEDOXOKLHQRQ");
    msg.rssi = 0.5967575557575829;
    msg.integrity = 8483U;

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
    msg.setTimeStamp(0.622402042138953);
    msg.setSource(2486U);
    msg.setSourceEntity(127U);
    msg.setDestination(31922U);
    msg.setDestinationEntity(153U);
    msg.peer.assign("VDBOLEYFYZCHCDDQRJJIHOGDCYIQMDNQUZH");
    msg.rssi = 0.15819770909038378;
    msg.integrity = 64299U;

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
    msg.setTimeStamp(0.46823439283272916);
    msg.setSource(58910U);
    msg.setSourceEntity(175U);
    msg.setDestination(38173U);
    msg.setDestinationEntity(117U);
    msg.req_id = 60889U;
    msg.destination.assign("DYQOSOZLPTBRFLCNKRPXBUJGBIUC");
    msg.timeout = 0.2103596907144757;
    msg.range = 0.6007241573599736;
    msg.type = 73U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 8454U;
    tmp_msg_0.control_ent = 241U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 100U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.009110931489964225;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 195U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.8653735086621339;
    tmp_tmp_tmp_msg_0_0_1.z_units = 41U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.3890034899525999;
    tmp_tmp_msg_0_0.lon = 0.33111399494570926;
    tmp_tmp_msg_0_0.radius = 0.6719577476238168;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 173U;
    tmp_msg_0.proximity = 52U;
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
    msg.setTimeStamp(0.13313225270251927);
    msg.setSource(65395U);
    msg.setSourceEntity(55U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(32U);
    msg.req_id = 31386U;
    msg.destination.assign("TPMZQFXMRGRPMAYNLNIDSDVLZSZBAJPVYGCTIYSUJAROQHWDQXNRJGFXHPBASQTQHCAHUPIXJDBEIOZAWGSUGITCPQRDTOIVDFOZNWNIGLKKNSTOWESHGLUJCKUSLVOYFCMMMEWWBKWGF");
    msg.timeout = 0.6312390085726339;
    msg.range = 0.9782894932974968;
    msg.type = 252U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 59303U;
    tmp_msg_0.lat = 0.4689991634433416;
    tmp_msg_0.lon = 0.9299566290665311;
    tmp_msg_0.z = 0.711587227246239;
    tmp_msg_0.z_units = 253U;
    tmp_msg_0.speed = 0.8717204299787801;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.syringe0 = 214U;
    tmp_msg_0.syringe1 = 59U;
    tmp_msg_0.syringe2 = 250U;
    tmp_msg_0.custom.assign("GYNXAVZPGPTLNOKGXMVFVDZATWNXWQNBOLLXKPBTXKYBGPSCQRWVKPJKJDFDYTJLIHZDQNPOIFBAMGDDLWHHWJQHJZEILRHTYEVJCVKCXLUOMEFIIYYGIGUUWWJRAHXPHUPTGWCZVFOKAIIZAWZIVNOCKEDESQDUSOWAHNSEMEBCBFRQJQSTSZDKMXTFPBSNGTHRUCQJMFQLRULSXCUUEABCOHJRFOBYETNPKRFEMQGMBRMDXAZZCMALVISVUN");
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
    msg.setTimeStamp(0.029245842183748927);
    msg.setSource(18611U);
    msg.setSourceEntity(238U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(162U);
    msg.req_id = 43569U;
    msg.destination.assign("LGQPCZRPNODAMDIHEXKGWYXISVSQS");
    msg.timeout = 0.08743276954362422;
    msg.range = 0.7402077767409438;
    msg.type = 142U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.42829269220669175;
    tmp_msg_0.lon = 0.1076535469282035;
    tmp_msg_0.speed = 0.5856835874353344;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.limits = 98U;
    tmp_msg_0.max_depth = 0.7538310678041369;
    tmp_msg_0.min_alt = 0.4796396448368445;
    tmp_msg_0.time_limit = 0.8190865727020924;
    tmp_msg_0.controller.assign("PJZDDUVIHWTHLEOTFGSWDUAPPSKKZCRSRBHOOMNFYOGQCURJMPFRASLACGNLYFTVTUVPW");
    tmp_msg_0.custom.assign("TGARXVIVDUFPBCNPXAIENBMOVOSMCPRVCJIRSMFBQOEYKQILMAGFTGUAWTFXZW");
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
    msg.setTimeStamp(0.6109428389702326);
    msg.setSource(63262U);
    msg.setSourceEntity(216U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(22U);
    msg.req_id = 10697U;
    msg.type = 57U;
    msg.status = 30U;
    msg.info.assign("ROFJDYJBQTGRAAWREMSYHOUKLKZHADGTBKDNSIUKTSTVEXXZI");
    msg.range = 0.6587844222790427;

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
    msg.setTimeStamp(0.059771697553007375);
    msg.setSource(10753U);
    msg.setSourceEntity(124U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(251U);
    msg.req_id = 34178U;
    msg.type = 236U;
    msg.status = 107U;
    msg.info.assign("PIWDGASZAMPJUPQOAORNDNZJXTLRCMXKOGKQSVLCFOGKBFKOVBBWFABPHEQWETVPVUSJTKKGMIFRQATJWCLUAVGYIJQIQYBIURCXDERFHUTSEVMFC");
    msg.range = 0.9302860164341741;

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
    msg.setTimeStamp(0.15614250465422352);
    msg.setSource(31324U);
    msg.setSourceEntity(200U);
    msg.setDestination(30824U);
    msg.setDestinationEntity(51U);
    msg.req_id = 7462U;
    msg.type = 140U;
    msg.status = 141U;
    msg.info.assign("TQHECFWYADIKAZVMCNSJCICNHSDGYDEADNQRVROLUOSXTPRQUDCIPNSTXSKHZGFVDLHWBUXYJFRSTQ");
    msg.range = 0.472107906731708;

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
    msg.setTimeStamp(0.45996848830391357);
    msg.setSource(31528U);
    msg.setSourceEntity(143U);
    msg.setDestination(7599U);
    msg.setDestinationEntity(115U);
    msg.system.assign("WBEVLFRDXHHBGBYYSZSEVSRMIPTIQJGCKGWLJGKHEMUAEYVGANCSXPRBVKKQKDABZPZCDQAMBTDGXRDPDQWOMABJHJYJDFAPZJBTQJOLGCFOLRNIXNCZRSQOGEUUMOXOTHNNWCIZODKPQEKXXVCHFJISIVZLTKQOUBZYYUNF");
    msg.op = 13U;

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
    msg.setTimeStamp(0.3620331525732845);
    msg.setSource(45182U);
    msg.setSourceEntity(114U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(248U);
    msg.system.assign("KXHLETNZXYGCAFHIGWWBKPSPJPWFBDVWHKGAHLYYEZNLVQOEGVZCYMRCEWXUDQISVMJFODAMCOITNLVWOBKQBNHEVQDRHFYISLTSJPBICLS");
    msg.op = 38U;

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
    msg.setTimeStamp(0.503185192995808);
    msg.setSource(12574U);
    msg.setSourceEntity(15U);
    msg.setDestination(20742U);
    msg.setDestinationEntity(127U);
    msg.system.assign("GWJUSZZQYMQLEVIAPYYMVBQCRPJNTAMFWJJJGUDOFPXGNDAZNPIGQBLRLSRVOPFYHLZHRZADVWBXWCINAYEPKTUVCMUAFOWZQU");
    msg.op = 240U;

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
    msg.setTimeStamp(0.30323909763849577);
    msg.setSource(5975U);
    msg.setSourceEntity(205U);
    msg.setDestination(11790U);
    msg.setDestinationEntity(26U);
    msg.value = -3741;

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
    msg.setTimeStamp(0.8503152583517725);
    msg.setSource(30125U);
    msg.setSourceEntity(209U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(136U);
    msg.value = 12510;

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
    msg.setTimeStamp(0.7034604718630577);
    msg.setSource(53524U);
    msg.setSourceEntity(99U);
    msg.setDestination(48472U);
    msg.setDestinationEntity(172U);
    msg.value = 1096;

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
    msg.setTimeStamp(0.41473813100018375);
    msg.setSource(29038U);
    msg.setSourceEntity(230U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(159U);
    msg.value = 0.2082364830744977;

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
    msg.setTimeStamp(0.2605903408406527);
    msg.setSource(10256U);
    msg.setSourceEntity(151U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(244U);
    msg.value = 0.6543448078201881;

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
    msg.setTimeStamp(0.9142760917425733);
    msg.setSource(2408U);
    msg.setSourceEntity(103U);
    msg.setDestination(57319U);
    msg.setDestinationEntity(73U);
    msg.value = 0.4983814452195311;

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
    msg.setTimeStamp(0.07889060101515677);
    msg.setSource(198U);
    msg.setSourceEntity(112U);
    msg.setDestination(23684U);
    msg.setDestinationEntity(238U);
    msg.value = 0.07645907423541765;

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
    msg.setTimeStamp(0.5676251842735539);
    msg.setSource(6703U);
    msg.setSourceEntity(189U);
    msg.setDestination(28533U);
    msg.setDestinationEntity(127U);
    msg.value = 0.8980509366659741;

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
    msg.setTimeStamp(0.2669714474639987);
    msg.setSource(19096U);
    msg.setSourceEntity(19U);
    msg.setDestination(46269U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6184952562089351;

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
    msg.setTimeStamp(0.15477700055395083);
    msg.setSource(16908U);
    msg.setSourceEntity(208U);
    msg.setDestination(9281U);
    msg.setDestinationEntity(88U);
    msg.validity = 7542U;
    msg.type = 77U;
    msg.utc_year = 43377U;
    msg.utc_month = 174U;
    msg.utc_day = 11U;
    msg.utc_time = 0.4709547383518997;
    msg.lat = 0.6353870378671813;
    msg.lon = 0.8102644584487366;
    msg.height = 0.9404536497622256;
    msg.satellites = 86U;
    msg.cog = 0.18473007607852998;
    msg.sog = 0.9379295069840567;
    msg.hdop = 0.8719396288501405;
    msg.vdop = 0.023522426219211412;
    msg.hacc = 0.09815820857708446;
    msg.vacc = 0.3006142171239292;

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
    msg.setTimeStamp(0.33765096202923117);
    msg.setSource(15729U);
    msg.setSourceEntity(63U);
    msg.setDestination(23404U);
    msg.setDestinationEntity(254U);
    msg.validity = 12223U;
    msg.type = 126U;
    msg.utc_year = 2169U;
    msg.utc_month = 96U;
    msg.utc_day = 106U;
    msg.utc_time = 0.9574444334085849;
    msg.lat = 0.4352797936335868;
    msg.lon = 0.630527533711369;
    msg.height = 0.5054347873111669;
    msg.satellites = 228U;
    msg.cog = 0.11810702545836671;
    msg.sog = 0.2649405102508777;
    msg.hdop = 0.640395093788178;
    msg.vdop = 0.029896205106809126;
    msg.hacc = 0.4028541041995187;
    msg.vacc = 0.544226316111904;

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
    msg.setTimeStamp(0.546648694659461);
    msg.setSource(40417U);
    msg.setSourceEntity(115U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(94U);
    msg.validity = 22271U;
    msg.type = 48U;
    msg.utc_year = 44842U;
    msg.utc_month = 130U;
    msg.utc_day = 32U;
    msg.utc_time = 0.23902368491967574;
    msg.lat = 0.031889486302959735;
    msg.lon = 0.8023605195580501;
    msg.height = 0.7377843034177468;
    msg.satellites = 94U;
    msg.cog = 0.8066911598492892;
    msg.sog = 0.424782153548647;
    msg.hdop = 0.4898098295521386;
    msg.vdop = 0.22270632525600442;
    msg.hacc = 0.22849156443065755;
    msg.vacc = 0.9800568926866247;

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
    msg.setTimeStamp(0.8381022479277905);
    msg.setSource(58629U);
    msg.setSourceEntity(240U);
    msg.setDestination(24586U);
    msg.setDestinationEntity(202U);
    msg.time = 0.6417144797731946;
    msg.phi = 0.8258483482594153;
    msg.theta = 0.05936563239778003;
    msg.psi = 0.4306286132458189;
    msg.psi_magnetic = 0.3121299899369737;

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
    msg.setTimeStamp(0.9385209873944322);
    msg.setSource(1990U);
    msg.setSourceEntity(30U);
    msg.setDestination(10899U);
    msg.setDestinationEntity(249U);
    msg.time = 0.01418494757037203;
    msg.phi = 0.6229277942835985;
    msg.theta = 0.985823217278206;
    msg.psi = 0.5897959592384421;
    msg.psi_magnetic = 0.9723221576235018;

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
    msg.setTimeStamp(0.18211800655191868);
    msg.setSource(60071U);
    msg.setSourceEntity(182U);
    msg.setDestination(34862U);
    msg.setDestinationEntity(2U);
    msg.time = 0.010074213202474258;
    msg.phi = 0.05706796039187867;
    msg.theta = 0.9747366418222055;
    msg.psi = 0.11302219756726173;
    msg.psi_magnetic = 0.7910417075570294;

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
    msg.setTimeStamp(0.69282824091947);
    msg.setSource(51694U);
    msg.setSourceEntity(101U);
    msg.setDestination(587U);
    msg.setDestinationEntity(48U);
    msg.time = 0.18423218309747091;
    msg.x = 0.24553358730647679;
    msg.y = 0.8311365923759947;
    msg.z = 0.07836189001546656;
    msg.timestep = 0.45913599075331646;

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
    msg.setTimeStamp(0.02358221884768874);
    msg.setSource(54572U);
    msg.setSourceEntity(13U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(206U);
    msg.time = 0.30649226560885434;
    msg.x = 0.4080525248580438;
    msg.y = 0.4470534226210543;
    msg.z = 0.07531618463341905;
    msg.timestep = 0.7394507563324171;

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
    msg.setTimeStamp(0.11646540071029454);
    msg.setSource(58808U);
    msg.setSourceEntity(225U);
    msg.setDestination(10530U);
    msg.setDestinationEntity(253U);
    msg.time = 0.7236148834281153;
    msg.x = 0.4497041198330046;
    msg.y = 0.2918396919366637;
    msg.z = 0.05702474064882457;
    msg.timestep = 0.8558316784199108;

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
    msg.setTimeStamp(0.31247983304335003);
    msg.setSource(46335U);
    msg.setSourceEntity(133U);
    msg.setDestination(37463U);
    msg.setDestinationEntity(190U);
    msg.time = 0.5096171052944478;
    msg.x = 0.8009203747236738;
    msg.y = 0.3806829034433118;
    msg.z = 0.3731127333346693;

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
    msg.setTimeStamp(0.4251336806753665);
    msg.setSource(11974U);
    msg.setSourceEntity(30U);
    msg.setDestination(58255U);
    msg.setDestinationEntity(241U);
    msg.time = 0.01959226144988191;
    msg.x = 0.4772228907886986;
    msg.y = 0.02931364636222744;
    msg.z = 0.5661919627927775;

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
    msg.setTimeStamp(0.8849927026826264);
    msg.setSource(62718U);
    msg.setSourceEntity(125U);
    msg.setDestination(19686U);
    msg.setDestinationEntity(160U);
    msg.time = 0.6770689500553696;
    msg.x = 0.7265180563518633;
    msg.y = 0.6900491680095404;
    msg.z = 0.4010029855248989;

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
    msg.setTimeStamp(0.6046136703168019);
    msg.setSource(33257U);
    msg.setSourceEntity(82U);
    msg.setDestination(14840U);
    msg.setDestinationEntity(223U);
    msg.time = 0.4513061992456108;
    msg.x = 0.5709124261166352;
    msg.y = 0.055624152257023995;
    msg.z = 0.11588028722499255;

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
    msg.setTimeStamp(0.4853279769918869);
    msg.setSource(50381U);
    msg.setSourceEntity(183U);
    msg.setDestination(14515U);
    msg.setDestinationEntity(38U);
    msg.time = 0.4360709591191825;
    msg.x = 0.004464130670577382;
    msg.y = 0.3368825148973493;
    msg.z = 0.1717841734884934;

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
    msg.setTimeStamp(0.8188510947564704);
    msg.setSource(65202U);
    msg.setSourceEntity(139U);
    msg.setDestination(52682U);
    msg.setDestinationEntity(125U);
    msg.time = 0.8672882876938438;
    msg.x = 0.4449746870147049;
    msg.y = 0.4555265059309199;
    msg.z = 0.38960353270963033;

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
    msg.setTimeStamp(0.11871526789874154);
    msg.setSource(64408U);
    msg.setSourceEntity(100U);
    msg.setDestination(3024U);
    msg.setDestinationEntity(227U);
    msg.time = 0.9040327525160804;
    msg.x = 0.4042518807262653;
    msg.y = 0.11641432201417123;
    msg.z = 0.2810046345830699;

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
    msg.setTimeStamp(0.3795342340058101);
    msg.setSource(53151U);
    msg.setSourceEntity(169U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(62U);
    msg.time = 0.17070072095746702;
    msg.x = 0.8858958212863809;
    msg.y = 0.7363369085506689;
    msg.z = 0.43819898435407334;

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
    msg.setTimeStamp(0.3551922710818258);
    msg.setSource(31866U);
    msg.setSourceEntity(187U);
    msg.setDestination(29488U);
    msg.setDestinationEntity(78U);
    msg.time = 0.6846107729550444;
    msg.x = 0.8118979822632698;
    msg.y = 0.8305883211423972;
    msg.z = 0.7570297956691069;

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
    msg.setTimeStamp(0.9246121504029073);
    msg.setSource(13911U);
    msg.setSourceEntity(67U);
    msg.setDestination(51342U);
    msg.setDestinationEntity(10U);
    msg.validity = 166U;
    msg.x = 0.6069537931443302;
    msg.y = 0.13620625209224746;
    msg.z = 0.1517084275733056;

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
    msg.setTimeStamp(0.806306972303693);
    msg.setSource(8656U);
    msg.setSourceEntity(192U);
    msg.setDestination(9037U);
    msg.setDestinationEntity(134U);
    msg.validity = 203U;
    msg.x = 0.05304693188686582;
    msg.y = 0.23341747542253932;
    msg.z = 0.9657510394286212;

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
    msg.setTimeStamp(0.01196721860912664);
    msg.setSource(42830U);
    msg.setSourceEntity(59U);
    msg.setDestination(10298U);
    msg.setDestinationEntity(137U);
    msg.validity = 57U;
    msg.x = 0.970028064737682;
    msg.y = 0.4491607359615808;
    msg.z = 0.051184218733801856;

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
    msg.setTimeStamp(0.3850444296118736);
    msg.setSource(9625U);
    msg.setSourceEntity(60U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(42U);
    msg.validity = 68U;
    msg.x = 0.8539583202877336;
    msg.y = 0.5795577407029481;
    msg.z = 0.34655132520936416;

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
    msg.setTimeStamp(0.32547475213662136);
    msg.setSource(36180U);
    msg.setSourceEntity(187U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(9U);
    msg.validity = 146U;
    msg.x = 0.7560940932094733;
    msg.y = 0.06480583144633212;
    msg.z = 0.3320695283917968;

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
    msg.setTimeStamp(0.894821503192723);
    msg.setSource(8260U);
    msg.setSourceEntity(133U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(180U);
    msg.validity = 158U;
    msg.x = 0.5930203441686277;
    msg.y = 0.33016594358921336;
    msg.z = 0.2126096162653155;

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
    msg.setTimeStamp(0.4161634462353101);
    msg.setSource(38840U);
    msg.setSourceEntity(240U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(175U);
    msg.time = 0.27083849538657556;
    msg.x = 0.6082288407592856;
    msg.y = 0.853494823796982;
    msg.z = 0.22524099628673333;

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
    msg.setTimeStamp(0.3475475834555838);
    msg.setSource(23148U);
    msg.setSourceEntity(42U);
    msg.setDestination(14228U);
    msg.setDestinationEntity(221U);
    msg.time = 0.4477483782135223;
    msg.x = 0.8326254792249465;
    msg.y = 0.9690874192429182;
    msg.z = 0.986253358156007;

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
    msg.setTimeStamp(0.09262059938063882);
    msg.setSource(17948U);
    msg.setSourceEntity(242U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(175U);
    msg.time = 0.18036574217111256;
    msg.x = 0.32290627040457265;
    msg.y = 0.8685585122497304;
    msg.z = 0.5230829838233144;

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
    msg.setTimeStamp(0.5524077593729458);
    msg.setSource(47629U);
    msg.setSourceEntity(2U);
    msg.setDestination(62993U);
    msg.setDestinationEntity(121U);
    msg.validity = 153U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6353598476892931;
    tmp_msg_0.beam_height = 0.5093939923505852;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4305368556737915;

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
    msg.setTimeStamp(0.5449244627328054);
    msg.setSource(54424U);
    msg.setSourceEntity(158U);
    msg.setDestination(65129U);
    msg.setDestinationEntity(98U);
    msg.validity = 121U;
    msg.value = 0.6841264954634549;

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
    msg.setTimeStamp(0.9951525737013104);
    msg.setSource(51857U);
    msg.setSourceEntity(183U);
    msg.setDestination(46105U);
    msg.setDestinationEntity(40U);
    msg.validity = 76U;
    msg.value = 0.5541180874643439;

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
    msg.setTimeStamp(0.7724564384072751);
    msg.setSource(21785U);
    msg.setSourceEntity(2U);
    msg.setDestination(22064U);
    msg.setDestinationEntity(99U);
    msg.value = 0.11426131682906304;

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
    msg.setTimeStamp(0.07794566598404151);
    msg.setSource(51907U);
    msg.setSourceEntity(190U);
    msg.setDestination(61648U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8046094597575549;

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
    msg.setTimeStamp(0.3778338583601679);
    msg.setSource(30239U);
    msg.setSourceEntity(249U);
    msg.setDestination(52419U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4206973844652361;

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
    msg.setTimeStamp(0.29516138071411446);
    msg.setSource(51765U);
    msg.setSourceEntity(93U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(42U);
    msg.value = 0.76199303643361;

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
    msg.setTimeStamp(0.2438165428766197);
    msg.setSource(20208U);
    msg.setSourceEntity(15U);
    msg.setDestination(36287U);
    msg.setDestinationEntity(79U);
    msg.value = 0.17470119514646376;

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
    msg.setTimeStamp(0.6253433149234982);
    msg.setSource(59010U);
    msg.setSourceEntity(234U);
    msg.setDestination(54321U);
    msg.setDestinationEntity(248U);
    msg.value = 0.8195109277572306;

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
    msg.setTimeStamp(0.8615876295086474);
    msg.setSource(27092U);
    msg.setSourceEntity(10U);
    msg.setDestination(44408U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9833651648875541;

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
    msg.setTimeStamp(0.8163776536094156);
    msg.setSource(45582U);
    msg.setSourceEntity(80U);
    msg.setDestination(58033U);
    msg.setDestinationEntity(126U);
    msg.value = 0.08203688583293833;

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
    msg.setTimeStamp(0.9247750353321055);
    msg.setSource(35611U);
    msg.setSourceEntity(52U);
    msg.setDestination(62395U);
    msg.setDestinationEntity(47U);
    msg.value = 0.5696544602231648;

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
    msg.setTimeStamp(0.8300562943861561);
    msg.setSource(40038U);
    msg.setSourceEntity(137U);
    msg.setDestination(47194U);
    msg.setDestinationEntity(56U);
    msg.value = 0.6979078808997302;

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
    msg.setTimeStamp(0.331776053278549);
    msg.setSource(48707U);
    msg.setSourceEntity(35U);
    msg.setDestination(12743U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9373115390206788;

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
    msg.setTimeStamp(0.9942576677972036);
    msg.setSource(27787U);
    msg.setSourceEntity(137U);
    msg.setDestination(41644U);
    msg.setDestinationEntity(191U);
    msg.value = 0.267976366491544;

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
    msg.setTimeStamp(0.7723242759158174);
    msg.setSource(46011U);
    msg.setSourceEntity(92U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(159U);
    msg.value = 0.8021619323050722;

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
    msg.setTimeStamp(0.27271786307604307);
    msg.setSource(39030U);
    msg.setSourceEntity(48U);
    msg.setDestination(30796U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8847611397626584;

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
    msg.setTimeStamp(0.9915305133236889);
    msg.setSource(2984U);
    msg.setSourceEntity(158U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(201U);
    msg.value = 0.587244692711823;

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
    msg.setTimeStamp(0.5541246469691796);
    msg.setSource(59219U);
    msg.setSourceEntity(94U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(72U);
    msg.value = 0.9867700426478904;

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
    msg.setTimeStamp(0.018193800053765585);
    msg.setSource(60235U);
    msg.setSourceEntity(176U);
    msg.setDestination(38553U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8071715575468426;

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
    msg.setTimeStamp(0.7897733096473284);
    msg.setSource(35779U);
    msg.setSourceEntity(233U);
    msg.setDestination(45216U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7261660134874947;

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
    msg.setTimeStamp(0.3579550931191976);
    msg.setSource(25594U);
    msg.setSourceEntity(176U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(30U);
    msg.value = 0.9326307748640175;

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
    msg.setTimeStamp(0.2961767943452258);
    msg.setSource(40597U);
    msg.setSourceEntity(143U);
    msg.setDestination(14274U);
    msg.setDestinationEntity(14U);
    msg.value = 0.853682941970095;

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
    msg.setTimeStamp(0.11873580007154849);
    msg.setSource(22333U);
    msg.setSourceEntity(80U);
    msg.setDestination(16348U);
    msg.setDestinationEntity(209U);
    msg.value = 0.7527179615228856;

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
    msg.setTimeStamp(0.02334882433355434);
    msg.setSource(49217U);
    msg.setSourceEntity(134U);
    msg.setDestination(16346U);
    msg.setDestinationEntity(118U);
    msg.value = 0.30301260625208126;

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
    msg.setTimeStamp(0.2591260051171995);
    msg.setSource(13858U);
    msg.setSourceEntity(127U);
    msg.setDestination(61891U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5119746846392415;

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
    msg.setTimeStamp(0.35398978976585915);
    msg.setSource(32809U);
    msg.setSourceEntity(7U);
    msg.setDestination(52503U);
    msg.setDestinationEntity(231U);
    msg.value = 0.02377789010960296;

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
    msg.setTimeStamp(0.25503260305415476);
    msg.setSource(6495U);
    msg.setSourceEntity(234U);
    msg.setDestination(30236U);
    msg.setDestinationEntity(124U);
    msg.direction = 0.08481198143402979;
    msg.speed = 0.80372135547092;
    msg.turbulence = 0.6889011079925671;

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
    msg.setTimeStamp(0.9360140705015464);
    msg.setSource(5215U);
    msg.setSourceEntity(1U);
    msg.setDestination(10748U);
    msg.setDestinationEntity(249U);
    msg.direction = 0.5866473938691406;
    msg.speed = 0.4820861829121177;
    msg.turbulence = 0.6131765198088542;

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
    msg.setTimeStamp(0.7979652302512844);
    msg.setSource(18668U);
    msg.setSourceEntity(125U);
    msg.setDestination(17627U);
    msg.setDestinationEntity(88U);
    msg.direction = 0.3628166431030534;
    msg.speed = 0.5724055744855325;
    msg.turbulence = 0.5223837442857763;

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
    msg.setTimeStamp(0.5270562360196722);
    msg.setSource(54813U);
    msg.setSourceEntity(185U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9927541714533528;

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
    msg.setTimeStamp(0.7856175903620675);
    msg.setSource(65148U);
    msg.setSourceEntity(249U);
    msg.setDestination(8795U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7664092724618312;

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
    msg.setTimeStamp(0.7525039779597487);
    msg.setSource(55405U);
    msg.setSourceEntity(25U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7692159749351134;

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
    msg.setTimeStamp(0.24025787987831138);
    msg.setSource(7721U);
    msg.setSourceEntity(20U);
    msg.setDestination(17204U);
    msg.setDestinationEntity(178U);
    msg.value.assign("EDBCFXYPUTGONKVMYTAIWGLIWLBEXZRCFXGHBLRETOCZTTORSGPDXYSKSUWVLCWVXIRQQBABMDNDXBMQHUSXGZILSHYRGAABSHEJFIEMKQWXFUEJHIEWHVDEYWYZITQNVITQQJJYOOPROGJTRNUKATH");

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
    msg.setTimeStamp(0.3121878181385246);
    msg.setSource(210U);
    msg.setSourceEntity(164U);
    msg.setDestination(55894U);
    msg.setDestinationEntity(19U);
    msg.value.assign("THGQRIMSJHPIFFIDMSFLQPHCNFDWBQFZBZKYLKYHNVOXJDMOFCBSBYZNIAGZKDKCUOCKASRWTPPURNAAELOFYWWKQDMEGSGEIAQDZIVXWGCOXRUMBZLVNYSVQNUTSSOEQGRUJBLZHB");

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
    msg.setTimeStamp(0.057958759845109786);
    msg.setSource(59928U);
    msg.setSourceEntity(238U);
    msg.setDestination(39165U);
    msg.setDestinationEntity(99U);
    msg.value.assign("LNZCPXFRHSBAHVVAWKKDORNEDOHQBJYIMJDRQDSLRZVZWXXOYVSIDNILFYUGDEBJQOZQYUNGAYNLKMERMOFZHRUEWSYSBIGQJZPFXDJEKYJGVDZMCZCAAFPXBKENGEP");

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
    msg.setTimeStamp(0.11097698889177421);
    msg.setSource(2147U);
    msg.setSourceEntity(225U);
    msg.setDestination(35949U);
    msg.setDestinationEntity(112U);
    const signed char tmp_msg_0[] = {-77, -38, 64, 104, -116, 67, 98, -65, 40, 81, -85, 62, -116, 106, -67, -115, 115, -23, -78, -1, 54, 15, 13, 90, -42, 25, 98, 83, 47, -11, 52, -94, -53, -61, -53, -54, -48, 104, -13, 51, 103, -121, -107, 32, 102, 63, -61, -34, 111, 120, -35, 51, -117, 35, -47, 18, -38, 92, 84, 56, -17, 107, -92, -33, -79, 115, 112, 74, 40, -45, -71, 29, 25, 126, -2, -23, -93, -104, -90, -58, -101, 60, 119, 5, -44, 30, -17, -66, 116, -97, 105, 57, -58, 112, -90, -41, 93, -124, 47, -58, 46, 103, -22, 94, -72, 44, -65, 61, 78, -26, -6, -41, -100, 8, 82, -111, -38, 117, 11, -75, -74, -9, -111, 9, -71, -40, 125, 55, -36, 48, -78, -52, -65, 93, -8, -98, 91, -41, -65, -16, -113, -72, 38, -70, 17, -41, -1, -84, 60, 39, -112, 63, 43, -30, -46, 16, -116, 87, 33, 72, -23, -32, -10, -47, -46, -40, -100, 115, -105, 83, 10, 37, 5, -67, -3, 109, -39, 94, 65, 70, 94, 48, 47, 64, -128, -66, 84, -119, -20, 21, -6, 71, 110, 80, -114, -55, -12, 28, 85, 11, 22, 51, -43, -70, -18, -67, 106, -49, 53, -54, 41};
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
    msg.setTimeStamp(0.1334835417339344);
    msg.setSource(5002U);
    msg.setSourceEntity(178U);
    msg.setDestination(12327U);
    msg.setDestinationEntity(143U);
    const signed char tmp_msg_0[] = {122, 32, -125, -20, -33, 62, 20, -95, -13, 87, 122, -84, 100, 6, 42, 25, -43, -43, -93, -94, -38, -102, -97, -6, -79, 42, -50, 102, -12, -102, -35, 111, -67, -56, 1, 48, -61, 60, -90, 95, 100, -128, 81, -3, 77, 56, -57, 0, 87, 11, 34, -119, 123, 22, 92, -2, 1, 31, 68, -44, 121, 13, -31, -94, -119, 81, 76, -84, -25, 64, -100, -9, -115, -77, 114, 112, -54, 86, -99, 105, 41, 109, -94, 60, 117, -93, -93, 104, -18, -32, 26, 6, 113, 20, -1, 57, -60, -42, 98, 6, 8, -119, -104, -72, -26, 41, -120, 21, -116, 4, 32, 14, -40, -112, -67, 44, -13, 107, -25, 68, 20, -59, -27, 84, -89, -110, 74, -92, -20, 36, -33, 123, 67, 62, -22, -128, 92, 83, -52, 67, 91, -7, 8, -69, 97, 35, 114, -46, 13, 104, 116, -80, -83, 8, 87, 7, -8, -125, -5, -72, 16, -74, -21, -75, -108, 67, 26, 54, -78, -113, -36, 93, 38, 115, -77, -61, -71, 121, -104, -117, -15, 73, -22, -81, 6, -33, -98, -34, -28, 1, -40, 48, -68, 59, -56, 65};
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
    msg.setTimeStamp(0.77155518558796);
    msg.setSource(58425U);
    msg.setSourceEntity(166U);
    msg.setDestination(61460U);
    msg.setDestinationEntity(81U);
    const signed char tmp_msg_0[] = {-55, -102, 77, -109, 121, 86, 105, 65, -70, -112};
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
    msg.setTimeStamp(0.8801381473275047);
    msg.setSource(49198U);
    msg.setSourceEntity(22U);
    msg.setDestination(1829U);
    msg.setDestinationEntity(169U);
    msg.value = 0.3182466427301114;

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
    msg.setTimeStamp(0.4955010404727722);
    msg.setSource(42489U);
    msg.setSourceEntity(182U);
    msg.setDestination(48615U);
    msg.setDestinationEntity(223U);
    msg.value = 0.26595675997239476;

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
    msg.setTimeStamp(0.1558213181535667);
    msg.setSource(23941U);
    msg.setSourceEntity(177U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(133U);
    msg.value = 0.41153290403738807;

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
    msg.setTimeStamp(0.430438163867334);
    msg.setSource(53821U);
    msg.setSourceEntity(162U);
    msg.setDestination(51357U);
    msg.setDestinationEntity(110U);
    msg.type = 142U;
    msg.frequency = 2715328982U;
    msg.min_range = 62728U;
    msg.max_range = 61931U;
    msg.bits_per_point = 211U;
    msg.scale_factor = 0.45035531002119644;
    const signed char tmp_msg_0[] = {-13, 9, -119, -52, 103, 13, -17, 65, 94, 41, -74, -27, -59, -71, 40, -100, 51, 1, 93, -99, -25, 0, 13, 83, -108, -65, 54, -86, 44, 22, -33, 74, 63, 17, -18, -123, -106, 7, 81, -29, -123, 68, -41, 98, 122, -52, 11, -7, 53, 50, -6, -105, -6, 25, -37, 45, -106, 101, 5, 6, -21, -94, -112, -63, -43, 46, 8, -82, 17, 32, -109, 121, -84, -107, 93, 35, -49, 109, -31, 84, 123, -6, 113, 95, -32, -34, 27, 105, 18, 110, -12, 66, -31, -4, -39, 17, -11, 89, -108, 104, 109, 69, 48, -121, 47};
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
    msg.setTimeStamp(0.2716605225359189);
    msg.setSource(59988U);
    msg.setSourceEntity(30U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(91U);
    msg.type = 131U;
    msg.frequency = 3458799185U;
    msg.min_range = 22739U;
    msg.max_range = 17842U;
    msg.bits_per_point = 185U;
    msg.scale_factor = 0.28941715028776127;
    const signed char tmp_msg_0[] = {-27, -82, 105, -118, -27, -86, -83, 96, -26, -84, 123, 40, 14, -18, 54, 21, -106, 8, 49, -46, -16, -69, -91, 36, 42, 61, 39, 62, -55, 70, 16, 113, -55, 80, -116, 118, 10, -72, 97, 36, -72, -96, 13, 43, 51, 97, 1, 16, -127, -22, 22, -5, -125, -31, 117, -67, 125, 17, 42, 57, 61, -48, -56, 36, 54, -78, 30, -42, 41, -34, -8, -6, 63, -57, -85, -106, 82, 94, 31, -123, -82, -72, 94, -59, 7, 38, -35, 63, 79, -34, -47, 101, 60, -56, -97, -107, 2, 97, 99, -106, -99, 59, 34, 14, 55, -74, 115, -63, 108, 107};
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
    msg.setTimeStamp(0.6787999408651111);
    msg.setSource(14796U);
    msg.setSourceEntity(22U);
    msg.setDestination(13316U);
    msg.setDestinationEntity(197U);
    msg.type = 60U;
    msg.frequency = 1894043803U;
    msg.min_range = 59853U;
    msg.max_range = 34815U;
    msg.bits_per_point = 240U;
    msg.scale_factor = 0.6712835557673555;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4597033610626289;
    tmp_msg_0.beam_height = 0.4272445791417002;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {82, -88, 60, -117, 119, -96, -124, 94, 105, 125, 11, 39, -47, -101, 73, 125, 98, 90, 61, -70, 85, 105, -116, 94, -60, -103, 51, 83, -115, 103, -102, -76, 36, -51, -35, 119, -107, 76, 5, 25, 72, 79, -64, 63, -128, 122, 60, -26, -110, 24, 53, -101, 2, 68, -120, -76, -97, 107, 46, 122, -125, -38, 74, 31, 109, 91, -35, -93, 22, 61, -80, -95, -9, -90, -38, -102, 110, -6, -31, 39, -72, -57, 110, 80, 84, -92, -112, -5, -93, 35, 24, -3, 95, -83, 114, -105, 109, -97, -46, -124, 5, -39, -58, -62, 117, -121, 33, 54, -48, -21, -55, 57, 14, -113, -49, 114, 93, -60, 75, 102, -73, -110, -24, -84, 33, 7, -97, 109, -104, -42, -30, -118, 83, -80, 8, 79, -39, 78, 103, 15, 38, 110, 105, -18, 42, -106, 108, -58, -113, -35, -30, -126, 113, -31, -49, -128, 85, -60, -15, -122, -16, -81, 49, 26, -80, 92, -56, -91, -25, -86, 112, 92, -123, 53, -13, -114, 108, 106, 31, -26, 117, 39, 115, 28, 53, 14, 53, -77, 115, -85, -74, -70, -24, -26, 122, -21, -124, 58, -79, 33, 46, 72, 49, 50, -86, 106, 7, -60, -111, -1, -15, 71, 32, 71, 90, 60, 15, -22, -91, -86, 1, -117, 5, -38, 115, 111, 117, 108, 109, 125, 19, 83, 101, 67, 35, -75, -59, -77, 66, -45};
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
    msg.setTimeStamp(0.8833491281467026);
    msg.setSource(64759U);
    msg.setSourceEntity(129U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.9365458652726937);
    msg.setSource(1262U);
    msg.setSourceEntity(27U);
    msg.setDestination(61851U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6371913173802152);
    msg.setSource(1773U);
    msg.setSourceEntity(187U);
    msg.setDestination(58169U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.35608878865263316);
    msg.setSource(54588U);
    msg.setSourceEntity(106U);
    msg.setDestination(476U);
    msg.setDestinationEntity(190U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.6656795954657229);
    msg.setSource(17232U);
    msg.setSourceEntity(97U);
    msg.setDestination(19741U);
    msg.setDestinationEntity(155U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.8535161228351277);
    msg.setSource(38855U);
    msg.setSourceEntity(170U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(24U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.477894682476002);
    msg.setSource(58252U);
    msg.setSourceEntity(147U);
    msg.setDestination(51327U);
    msg.setDestinationEntity(200U);
    msg.value = 0.9922275282072436;
    msg.confidence = 0.9887432301021363;
    msg.opmodes.assign("CHGPHXMKHWTLPOPSUMAGMNWDRHOYIFTIPACDHDNBUGMOQHSBDXYKYFNILARNGVBQZFJSUDTJEWSEXUYLLXCVIZNNZBOKIPHVNGCAYLWPBQCTORYXLZKTTFJHSRMZFMYVRYPCUYVSDRIIBRJEGXNKZMJWLOFAXGEEBDPUVQVLOTJXKCJD");

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
    msg.setTimeStamp(0.7304820577349178);
    msg.setSource(59971U);
    msg.setSourceEntity(238U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(38U);
    msg.value = 0.9579794887890983;
    msg.confidence = 0.3068184729795893;
    msg.opmodes.assign("RQAUVVQMMCYWOSCXKWYWDSROUWJZBISBZNCOYAZICMXQUBGLHT");

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
    msg.setTimeStamp(0.020053563018016862);
    msg.setSource(27628U);
    msg.setSourceEntity(108U);
    msg.setDestination(60010U);
    msg.setDestinationEntity(158U);
    msg.value = 0.06132050040067427;
    msg.confidence = 0.30546940956153334;
    msg.opmodes.assign("BVLFJAXDBIRJWMQWKJEUEYPJNVFSLVQZMQKYAGJDZEIRTKSGULLEHAQNZRXNZDHOTBVSWWAJCDHPUACATNBGONGDRZNZZCTPXQTSMPAPKBUDOCEOBNTGBCIOGUPWJYKZYYKJSMJPSOQFVMCUDUYIUNRHXIDPZBACLLOXIPYSDHLIEQITGODKNOFGTFWIX");

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
    msg.setTimeStamp(0.2104699106771306);
    msg.setSource(58066U);
    msg.setSourceEntity(79U);
    msg.setDestination(17868U);
    msg.setDestinationEntity(16U);
    msg.itow = 2151231549U;
    msg.lat = 0.6447005629710172;
    msg.lon = 0.1307787873844135;
    msg.height_ell = 0.17558719435173176;
    msg.height_sea = 0.8957167349948768;
    msg.hacc = 0.6341519129619815;
    msg.vacc = 0.8030826980563858;
    msg.vel_n = 0.7475382072535985;
    msg.vel_e = 0.6489892891538487;
    msg.vel_d = 0.42332707893915344;
    msg.speed = 0.5697544239179159;
    msg.gspeed = 0.07243231287732577;
    msg.heading = 0.6692666723495222;
    msg.sacc = 0.9998710654325976;
    msg.cacc = 0.3208441638930982;

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
    msg.setTimeStamp(0.21969974882254584);
    msg.setSource(60520U);
    msg.setSourceEntity(127U);
    msg.setDestination(2824U);
    msg.setDestinationEntity(77U);
    msg.itow = 3262238075U;
    msg.lat = 0.7370869802942935;
    msg.lon = 0.688146953418144;
    msg.height_ell = 0.4717624824378295;
    msg.height_sea = 0.5997203168090023;
    msg.hacc = 0.0086380589497147;
    msg.vacc = 0.2110885275491563;
    msg.vel_n = 0.16491257405708748;
    msg.vel_e = 0.8622865339136749;
    msg.vel_d = 0.5735666001303065;
    msg.speed = 0.9907117799586886;
    msg.gspeed = 0.016439565319517402;
    msg.heading = 0.4688210312559973;
    msg.sacc = 0.2357509170092318;
    msg.cacc = 0.577837321948799;

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
    msg.setTimeStamp(0.7409831202780274);
    msg.setSource(55915U);
    msg.setSourceEntity(83U);
    msg.setDestination(16611U);
    msg.setDestinationEntity(231U);
    msg.itow = 2313157625U;
    msg.lat = 0.956075531502659;
    msg.lon = 0.2602835467719351;
    msg.height_ell = 0.759228334432699;
    msg.height_sea = 0.07751971323038209;
    msg.hacc = 0.43189593784964453;
    msg.vacc = 0.18398367477866095;
    msg.vel_n = 0.23980065991285804;
    msg.vel_e = 0.03902498331619919;
    msg.vel_d = 0.15217650383056003;
    msg.speed = 0.20691272841684538;
    msg.gspeed = 0.7887912227921191;
    msg.heading = 0.5011072380712372;
    msg.sacc = 0.6869979601104458;
    msg.cacc = 0.042428235511679624;

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
    msg.setTimeStamp(0.8832041277566709);
    msg.setSource(63965U);
    msg.setSourceEntity(145U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(97U);
    msg.id = 23U;
    msg.value = 0.9796893814986497;

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
    msg.setTimeStamp(0.5343233979473647);
    msg.setSource(37197U);
    msg.setSourceEntity(231U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(142U);
    msg.id = 202U;
    msg.value = 0.650448717955911;

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
    msg.setTimeStamp(0.036083491724127614);
    msg.setSource(28814U);
    msg.setSourceEntity(162U);
    msg.setDestination(37541U);
    msg.setDestinationEntity(135U);
    msg.id = 5U;
    msg.value = 0.015153873527693262;

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
    msg.setTimeStamp(0.8493211442548938);
    msg.setSource(30468U);
    msg.setSourceEntity(140U);
    msg.setDestination(36622U);
    msg.setDestinationEntity(137U);
    msg.x = 0.73499330453968;
    msg.y = 0.7719308986942021;
    msg.z = 0.7838667776256697;
    msg.phi = 0.4481602802257708;
    msg.theta = 0.3026605743783052;
    msg.psi = 0.220710185550977;

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
    msg.setTimeStamp(0.6199990560291624);
    msg.setSource(43670U);
    msg.setSourceEntity(49U);
    msg.setDestination(40187U);
    msg.setDestinationEntity(178U);
    msg.x = 0.6615811245949236;
    msg.y = 0.7096276144666696;
    msg.z = 0.8374123910893683;
    msg.phi = 0.851658834807352;
    msg.theta = 0.6746845402005351;
    msg.psi = 0.3607317664264994;

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
    msg.setTimeStamp(0.12013061743980802);
    msg.setSource(47250U);
    msg.setSourceEntity(98U);
    msg.setDestination(44461U);
    msg.setDestinationEntity(161U);
    msg.x = 0.42983676086491274;
    msg.y = 0.50406907328562;
    msg.z = 0.4507543690014998;
    msg.phi = 0.4084038801961061;
    msg.theta = 0.9322095206030874;
    msg.psi = 0.2569488131569686;

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
    msg.setTimeStamp(0.09903114080267261);
    msg.setSource(45590U);
    msg.setSourceEntity(29U);
    msg.setDestination(4948U);
    msg.setDestinationEntity(175U);
    msg.beam_width = 0.6200938196063474;
    msg.beam_height = 0.7374130312095131;

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
    msg.setTimeStamp(0.40121031036679433);
    msg.setSource(3427U);
    msg.setSourceEntity(20U);
    msg.setDestination(20461U);
    msg.setDestinationEntity(187U);
    msg.beam_width = 0.16639750186535862;
    msg.beam_height = 0.7726904387826373;

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
    msg.setTimeStamp(0.6635502183281908);
    msg.setSource(9458U);
    msg.setSourceEntity(216U);
    msg.setDestination(2431U);
    msg.setDestinationEntity(150U);
    msg.beam_width = 0.7854557224025983;
    msg.beam_height = 0.20116384852231894;

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
    msg.setTimeStamp(0.03683562591916123);
    msg.setSource(10174U);
    msg.setSourceEntity(42U);
    msg.setDestination(59109U);
    msg.setDestinationEntity(192U);
    msg.sane = 83U;

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
    msg.setTimeStamp(0.3838055373822923);
    msg.setSource(31062U);
    msg.setSourceEntity(51U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(162U);
    msg.sane = 222U;

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
    msg.setTimeStamp(0.6406100083296951);
    msg.setSource(56906U);
    msg.setSourceEntity(162U);
    msg.setDestination(58881U);
    msg.setDestinationEntity(199U);
    msg.sane = 198U;

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
    msg.setTimeStamp(0.018442055636563537);
    msg.setSource(782U);
    msg.setSourceEntity(207U);
    msg.setDestination(22395U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7583957818641318;

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
    msg.setTimeStamp(0.06561578318472117);
    msg.setSource(26949U);
    msg.setSourceEntity(59U);
    msg.setDestination(18601U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7907344345994425;

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
    msg.setTimeStamp(0.8002494394291229);
    msg.setSource(47570U);
    msg.setSourceEntity(110U);
    msg.setDestination(21883U);
    msg.setDestinationEntity(82U);
    msg.value = 0.24968998829493982;

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
    msg.setTimeStamp(0.6104683690645228);
    msg.setSource(62130U);
    msg.setSourceEntity(171U);
    msg.setDestination(10967U);
    msg.setDestinationEntity(83U);
    msg.value = 0.4914740559536188;

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
    msg.setTimeStamp(0.5997988692818881);
    msg.setSource(7649U);
    msg.setSourceEntity(129U);
    msg.setDestination(63523U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5033486140159926;

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
    msg.setTimeStamp(0.9823361668792209);
    msg.setSource(20417U);
    msg.setSourceEntity(204U);
    msg.setDestination(21127U);
    msg.setDestinationEntity(132U);
    msg.value = 0.07068465429407034;

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
    msg.setTimeStamp(0.28246830653728083);
    msg.setSource(3919U);
    msg.setSourceEntity(166U);
    msg.setDestination(8744U);
    msg.setDestinationEntity(145U);
    msg.value = 0.7939147498852246;

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
    msg.setTimeStamp(0.7928093371828456);
    msg.setSource(13580U);
    msg.setSourceEntity(153U);
    msg.setDestination(58135U);
    msg.setDestinationEntity(90U);
    msg.value = 0.3974329305196488;

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
    msg.setTimeStamp(0.2592540227177237);
    msg.setSource(45698U);
    msg.setSourceEntity(3U);
    msg.setDestination(24235U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9183555609687392;

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
    msg.setTimeStamp(0.07362635320637412);
    msg.setSource(52065U);
    msg.setSourceEntity(194U);
    msg.setDestination(8647U);
    msg.setDestinationEntity(248U);
    msg.value = 0.12914622163076483;

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
    msg.setTimeStamp(0.03052834183758868);
    msg.setSource(11734U);
    msg.setSourceEntity(240U);
    msg.setDestination(62071U);
    msg.setDestinationEntity(208U);
    msg.value = 0.3732325892033501;

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
    msg.setTimeStamp(0.5655507532782824);
    msg.setSource(15857U);
    msg.setSourceEntity(246U);
    msg.setDestination(5200U);
    msg.setDestinationEntity(249U);
    msg.value = 0.40557655741886856;

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
    msg.setTimeStamp(0.8676244606279057);
    msg.setSource(43499U);
    msg.setSourceEntity(73U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4885741830358017;

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
    msg.setTimeStamp(0.09126327634140818);
    msg.setSource(19053U);
    msg.setSourceEntity(145U);
    msg.setDestination(14033U);
    msg.setDestinationEntity(14U);
    msg.value = 0.5947138411586518;

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
    msg.setTimeStamp(0.051571574241708884);
    msg.setSource(63199U);
    msg.setSourceEntity(226U);
    msg.setDestination(8719U);
    msg.setDestinationEntity(12U);
    msg.value = 0.8922804858569333;

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
    msg.setTimeStamp(0.7511088215387289);
    msg.setSource(18459U);
    msg.setSourceEntity(68U);
    msg.setDestination(15356U);
    msg.setDestinationEntity(138U);
    msg.value = 0.8128547345881233;

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
    msg.setTimeStamp(0.07522158482801666);
    msg.setSource(40275U);
    msg.setSourceEntity(163U);
    msg.setDestination(22640U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9401160765727063;

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
    msg.setTimeStamp(0.3572935941498061);
    msg.setSource(62934U);
    msg.setSourceEntity(203U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(254U);
    msg.value = 0.12714118628250481;

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
    msg.setTimeStamp(0.043870875756488514);
    msg.setSource(638U);
    msg.setSourceEntity(249U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8149286009884741;

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
    msg.setTimeStamp(0.7696559489440703);
    msg.setSource(21611U);
    msg.setSourceEntity(124U);
    msg.setDestination(39479U);
    msg.setDestinationEntity(235U);
    msg.value = 0.4932301143325991;

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
    msg.setTimeStamp(0.4308178982761508);
    msg.setSource(16109U);
    msg.setSourceEntity(186U);
    msg.setDestination(45303U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5518984222379774;

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
    msg.setTimeStamp(0.4735679007117293);
    msg.setSource(10113U);
    msg.setSourceEntity(83U);
    msg.setDestination(24216U);
    msg.setDestinationEntity(94U);
    msg.value = 0.504678741192735;

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
    msg.setTimeStamp(0.042047627897570994);
    msg.setSource(6858U);
    msg.setSourceEntity(173U);
    msg.setDestination(47349U);
    msg.setDestinationEntity(78U);
    msg.value = 0.46797752834251904;

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
    msg.setTimeStamp(0.19075681019356971);
    msg.setSource(21659U);
    msg.setSourceEntity(66U);
    msg.setDestination(56141U);
    msg.setDestinationEntity(227U);
    msg.value = 0.14725794699161154;

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
    msg.setTimeStamp(0.025604180534299026);
    msg.setSource(45939U);
    msg.setSourceEntity(248U);
    msg.setDestination(9785U);
    msg.setDestinationEntity(11U);
    msg.validity = 64778U;
    msg.type = 169U;
    msg.tow = 1739073040U;
    msg.base_lat = 0.16349722609846162;
    msg.base_lon = 0.5369558865090602;
    msg.base_height = 0.9480196299166919;
    msg.n = 0.160000466506386;
    msg.e = 0.018652492309523927;
    msg.d = 0.47693230499268335;
    msg.v_n = 0.8342152399057194;
    msg.v_e = 0.4693696994313822;
    msg.v_d = 0.19537970747787514;
    msg.satellites = 56U;
    msg.iar_hyp = 4415U;
    msg.iar_ratio = 0.6307322785639654;

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
    msg.setTimeStamp(0.8228507192081661);
    msg.setSource(5738U);
    msg.setSourceEntity(122U);
    msg.setDestination(7051U);
    msg.setDestinationEntity(58U);
    msg.validity = 40634U;
    msg.type = 109U;
    msg.tow = 4233173124U;
    msg.base_lat = 0.5104781386434541;
    msg.base_lon = 0.52927605124474;
    msg.base_height = 0.842153794158388;
    msg.n = 0.6638610670229718;
    msg.e = 0.5507403107242117;
    msg.d = 0.2654608788404452;
    msg.v_n = 0.7836232961830364;
    msg.v_e = 0.09088471707855428;
    msg.v_d = 0.692076516772803;
    msg.satellites = 96U;
    msg.iar_hyp = 39781U;
    msg.iar_ratio = 0.1563755560488268;

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
    msg.setTimeStamp(0.856299191207838);
    msg.setSource(38203U);
    msg.setSourceEntity(174U);
    msg.setDestination(50182U);
    msg.setDestinationEntity(129U);
    msg.validity = 34683U;
    msg.type = 133U;
    msg.tow = 1131089707U;
    msg.base_lat = 0.5108611864769149;
    msg.base_lon = 0.9906621993780632;
    msg.base_height = 0.025625195867903128;
    msg.n = 0.9059706434895729;
    msg.e = 0.41437940714272425;
    msg.d = 0.6193430464588916;
    msg.v_n = 0.9366059031563311;
    msg.v_e = 0.1048750203694695;
    msg.v_d = 0.03974189179319332;
    msg.satellites = 48U;
    msg.iar_hyp = 10828U;
    msg.iar_ratio = 0.20638700920307185;

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
    msg.setTimeStamp(0.10706631153363577);
    msg.setSource(39398U);
    msg.setSourceEntity(128U);
    msg.setDestination(31347U);
    msg.setDestinationEntity(79U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.16458412066274075;
    tmp_msg_0.lon = 0.8828233205213588;
    tmp_msg_0.height = 0.5390307655368253;
    tmp_msg_0.x = 0.6421191106439873;
    tmp_msg_0.y = 0.3143962363520817;
    tmp_msg_0.z = 0.020078914160230776;
    tmp_msg_0.phi = 0.07708160733080138;
    tmp_msg_0.theta = 0.8506451820389711;
    tmp_msg_0.psi = 0.8620264188354565;
    tmp_msg_0.u = 0.661844791799846;
    tmp_msg_0.v = 0.24412730221393475;
    tmp_msg_0.w = 0.8098959590332231;
    tmp_msg_0.vx = 0.12121927857737691;
    tmp_msg_0.vy = 0.02780347444230058;
    tmp_msg_0.vz = 0.9556468829876034;
    tmp_msg_0.p = 0.09209199414215608;
    tmp_msg_0.q = 0.9358896346542601;
    tmp_msg_0.r = 0.2560014950880801;
    tmp_msg_0.depth = 0.6436232287653176;
    tmp_msg_0.alt = 0.6574931265322472;
    msg.state.set(tmp_msg_0);
    msg.type = 251U;

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
    msg.setTimeStamp(0.28087587706129846);
    msg.setSource(60120U);
    msg.setSourceEntity(86U);
    msg.setDestination(33116U);
    msg.setDestinationEntity(0U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.760059027493111;
    tmp_msg_0.lon = 0.6900831854031438;
    tmp_msg_0.height = 0.6494446137932223;
    tmp_msg_0.x = 0.6660127027901283;
    tmp_msg_0.y = 0.642581102287966;
    tmp_msg_0.z = 0.42310251744697547;
    tmp_msg_0.phi = 0.9654051614596577;
    tmp_msg_0.theta = 0.11615732433800019;
    tmp_msg_0.psi = 0.6090165872116872;
    tmp_msg_0.u = 0.6300430002329436;
    tmp_msg_0.v = 0.8394830654314461;
    tmp_msg_0.w = 0.6247506587136374;
    tmp_msg_0.vx = 0.7633293474516386;
    tmp_msg_0.vy = 0.35650974989238815;
    tmp_msg_0.vz = 0.287012703630774;
    tmp_msg_0.p = 0.7664136948966954;
    tmp_msg_0.q = 0.994643088275473;
    tmp_msg_0.r = 0.9429617278214398;
    tmp_msg_0.depth = 0.9381317137636951;
    tmp_msg_0.alt = 0.44557469617090195;
    msg.state.set(tmp_msg_0);
    msg.type = 10U;

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
    msg.setTimeStamp(0.23633517126219383);
    msg.setSource(15423U);
    msg.setSourceEntity(62U);
    msg.setDestination(9345U);
    msg.setDestinationEntity(132U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9952585156869888;
    tmp_msg_0.lon = 0.4908207981711641;
    tmp_msg_0.height = 0.420166857848298;
    tmp_msg_0.x = 0.05885536975776673;
    tmp_msg_0.y = 0.08803858683940424;
    tmp_msg_0.z = 0.25999870395213653;
    tmp_msg_0.phi = 0.882813965575002;
    tmp_msg_0.theta = 0.6715996229344179;
    tmp_msg_0.psi = 0.9045519480100191;
    tmp_msg_0.u = 0.8671289738619663;
    tmp_msg_0.v = 0.09932236194411515;
    tmp_msg_0.w = 0.07558822747353289;
    tmp_msg_0.vx = 0.7886589956581173;
    tmp_msg_0.vy = 0.9994752549075352;
    tmp_msg_0.vz = 0.09572658894887887;
    tmp_msg_0.p = 0.7089279739492316;
    tmp_msg_0.q = 0.020326740684554423;
    tmp_msg_0.r = 0.7262274554843804;
    tmp_msg_0.depth = 0.2310815850223964;
    tmp_msg_0.alt = 0.09503867771984398;
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
    msg.setTimeStamp(0.2864480130377136);
    msg.setSource(11794U);
    msg.setSourceEntity(241U);
    msg.setDestination(24449U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8363384363722142;

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
    msg.setTimeStamp(0.30821113813497203);
    msg.setSource(64574U);
    msg.setSourceEntity(185U);
    msg.setDestination(24606U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9113607718388307;

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
    msg.setTimeStamp(0.07845726453045487);
    msg.setSource(8206U);
    msg.setSourceEntity(145U);
    msg.setDestination(38087U);
    msg.setDestinationEntity(230U);
    msg.value = 0.24638901085628406;

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
    msg.setTimeStamp(0.5916404827039395);
    msg.setSource(4847U);
    msg.setSourceEntity(222U);
    msg.setDestination(30618U);
    msg.setDestinationEntity(47U);
    msg.value = 0.18252980458828005;

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
    msg.setTimeStamp(0.9625028505919909);
    msg.setSource(52245U);
    msg.setSourceEntity(32U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(96U);
    msg.value = 0.5181557467117605;

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
    msg.setTimeStamp(0.014464769483909956);
    msg.setSource(59622U);
    msg.setSourceEntity(169U);
    msg.setDestination(8837U);
    msg.setDestinationEntity(85U);
    msg.value = 0.056433346555934905;

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
    msg.setTimeStamp(0.7466924955372484);
    msg.setSource(60624U);
    msg.setSourceEntity(241U);
    msg.setDestination(55136U);
    msg.setDestinationEntity(68U);
    msg.value = 0.701127733594621;

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
    msg.setTimeStamp(0.9256536464823047);
    msg.setSource(48749U);
    msg.setSourceEntity(58U);
    msg.setDestination(8005U);
    msg.setDestinationEntity(95U);
    msg.value = 0.033458214667764;

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
    msg.setTimeStamp(0.5765074079961982);
    msg.setSource(34841U);
    msg.setSourceEntity(71U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8120564509089517;

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
    msg.setTimeStamp(0.24293721964096715);
    msg.setSource(42630U);
    msg.setSourceEntity(202U);
    msg.setDestination(53869U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5398141959836362;

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
    msg.setTimeStamp(0.6143896881196067);
    msg.setSource(7454U);
    msg.setSourceEntity(30U);
    msg.setDestination(27937U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7883678398839956;

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
    msg.setTimeStamp(0.8727685654040934);
    msg.setSource(23302U);
    msg.setSourceEntity(220U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(33U);
    msg.value = 0.36062640802302315;

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
    msg.setTimeStamp(0.032194627483338345);
    msg.setSource(35916U);
    msg.setSourceEntity(174U);
    msg.setDestination(7940U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9734920306510418;

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
    msg.setTimeStamp(0.30646485386624);
    msg.setSource(61279U);
    msg.setSourceEntity(250U);
    msg.setDestination(1313U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8630044673124185;

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
    msg.setTimeStamp(0.9639099886573623);
    msg.setSource(45674U);
    msg.setSourceEntity(210U);
    msg.setDestination(5135U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4534422782572971;

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
    msg.setTimeStamp(0.17597517221103964);
    msg.setSource(6237U);
    msg.setSourceEntity(236U);
    msg.setDestination(2495U);
    msg.setDestinationEntity(40U);
    msg.id = 172U;
    msg.zoom = 248U;
    msg.action = 57U;

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
    msg.setTimeStamp(0.284046748575853);
    msg.setSource(21570U);
    msg.setSourceEntity(165U);
    msg.setDestination(56406U);
    msg.setDestinationEntity(218U);
    msg.id = 12U;
    msg.zoom = 208U;
    msg.action = 199U;

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
    msg.setTimeStamp(0.21222697282211467);
    msg.setSource(64641U);
    msg.setSourceEntity(142U);
    msg.setDestination(34540U);
    msg.setDestinationEntity(116U);
    msg.id = 190U;
    msg.zoom = 169U;
    msg.action = 222U;

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
    msg.setTimeStamp(0.7946151756099207);
    msg.setSource(52330U);
    msg.setSourceEntity(42U);
    msg.setDestination(38080U);
    msg.setDestinationEntity(59U);
    msg.id = 156U;
    msg.value = 0.3362562299383204;

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
    msg.setTimeStamp(0.5381334660357107);
    msg.setSource(59053U);
    msg.setSourceEntity(182U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(103U);
    msg.id = 33U;
    msg.value = 0.1995026023928207;

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
    msg.setTimeStamp(0.2112567606487198);
    msg.setSource(30978U);
    msg.setSourceEntity(120U);
    msg.setDestination(45670U);
    msg.setDestinationEntity(209U);
    msg.id = 237U;
    msg.value = 0.6889296481113011;

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
    msg.setTimeStamp(0.5995527352243731);
    msg.setSource(31783U);
    msg.setSourceEntity(8U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(86U);
    msg.id = 236U;
    msg.value = 0.8336843578287557;

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
    msg.setTimeStamp(0.9672938537653034);
    msg.setSource(26443U);
    msg.setSourceEntity(41U);
    msg.setDestination(31834U);
    msg.setDestinationEntity(5U);
    msg.id = 232U;
    msg.value = 0.31451986553995337;

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
    msg.setTimeStamp(0.34772976607962736);
    msg.setSource(44343U);
    msg.setSourceEntity(240U);
    msg.setDestination(8598U);
    msg.setDestinationEntity(191U);
    msg.id = 182U;
    msg.value = 0.6851669399327037;

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
    msg.setTimeStamp(0.8493728860611952);
    msg.setSource(42806U);
    msg.setSourceEntity(59U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(154U);
    msg.id = 62U;
    msg.angle = 0.3218365903349958;

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
    msg.setTimeStamp(0.5348146381658896);
    msg.setSource(37026U);
    msg.setSourceEntity(145U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(50U);
    msg.id = 199U;
    msg.angle = 0.057428866978905035;

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
    msg.setTimeStamp(0.601898426193216);
    msg.setSource(35992U);
    msg.setSourceEntity(183U);
    msg.setDestination(58927U);
    msg.setDestinationEntity(22U);
    msg.id = 41U;
    msg.angle = 0.8828164751066949;

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
    msg.setTimeStamp(0.6857029294020323);
    msg.setSource(32186U);
    msg.setSourceEntity(63U);
    msg.setDestination(13508U);
    msg.setDestinationEntity(108U);
    msg.op = 23U;
    msg.actions.assign("ICEYRBSGWXLRXDHRTKNLQXRVZJDYYAXQCVLGZDFFEQGOJCAIPJWPSYZBKVLRHGGHRPMEOUBGALNNGOJWRLGXPSFSDKUWYVIKYWKFHTF");

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
    msg.setTimeStamp(0.5014707587590101);
    msg.setSource(45784U);
    msg.setSourceEntity(133U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(177U);
    msg.op = 121U;
    msg.actions.assign("QBPQWPYDQHWNLIGKNPVDTVPYSGGFSBXYNEALXORQVURWDQMJINQJFGPKAASZRNUOMREOESBRNAVWUIZMEZVJOYFHYOXHGSWCRUFFLQNUCVZCLXOZLMXSFYEXZGDPVZKIRDATNOXAZUIPEEDSMHAXM");

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
    msg.setTimeStamp(0.6144194557248617);
    msg.setSource(11295U);
    msg.setSourceEntity(151U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(226U);
    msg.op = 22U;
    msg.actions.assign("SXZVNGDRSLNWBOXFREDKYVOSKLZHIXNPQBXVRLVTFAASPYTYKCVEAWPOHJYQBMMRPJRUFUKMEQU");

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
    msg.setTimeStamp(0.14388498815344686);
    msg.setSource(65530U);
    msg.setSourceEntity(159U);
    msg.setDestination(1787U);
    msg.setDestinationEntity(227U);
    msg.actions.assign("FODCDSRJKAOSQUGWCQOHIWVDHWTGIEEPEGZSICDUHHXHFZNVDJIYOKLUINVGATSZOPRXZBCRKNZFBQY");

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
    msg.setTimeStamp(0.14069205474184399);
    msg.setSource(14449U);
    msg.setSourceEntity(183U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("OFMJIDHRIBIKCTFNMRUHBVPDAKXLXZLMEYTWEKURBJOLZGYUZTCFWOGJYLGOXQJVABOJQWVZYPNMHDUTZFNWNBSUACVYGBZVDBYFUTSQSZVFDIAHXNODWQSWYVPAPRQYAGKNGTDBXFPLDJNMVZHTOHVGLHMXRDAAKEULROHSMZIGGUEJQCPASFSC");

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
    msg.setTimeStamp(0.19483215657794228);
    msg.setSource(51469U);
    msg.setSourceEntity(45U);
    msg.setDestination(48182U);
    msg.setDestinationEntity(135U);
    msg.actions.assign("IJKRVAOWSPQXMVHXJGLXQSOETEWNEMDYTAIFHYZOIIJLKLNSHZUCWFAYVRGFXNHHEAKHIYIFDBWLPPIGPKQXBVXMKCEMRFQPUYVV");

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
    msg.setTimeStamp(0.9825529571059535);
    msg.setSource(26645U);
    msg.setSourceEntity(180U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(20U);
    msg.button = 144U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.006876039069452666);
    msg.setSource(9401U);
    msg.setSourceEntity(189U);
    msg.setDestination(60570U);
    msg.setDestinationEntity(187U);
    msg.button = 136U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.31225323223166157);
    msg.setSource(57721U);
    msg.setSourceEntity(36U);
    msg.setDestination(25824U);
    msg.setDestinationEntity(112U);
    msg.button = 168U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.03571139633579723);
    msg.setSource(57037U);
    msg.setSourceEntity(163U);
    msg.setDestination(39207U);
    msg.setDestinationEntity(183U);
    msg.op = 239U;
    msg.text.assign("DOGRWYMWTJGYMRKRVACYMVNFJMIORBFOHVMTYVZXDCOCEMSNQKFLEOURKXIAGQDHTXVNFWIAUAXTNCJGKFRXGIYOXEHRPJKYFKANFKESCZJDUZQTLNGV");

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
    msg.setTimeStamp(0.2966539684526326);
    msg.setSource(1373U);
    msg.setSourceEntity(23U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(97U);
    msg.op = 32U;
    msg.text.assign("QFAOENVMNNCDEMQWOEHSXZITDEYKTXHHLZNYURYQEQPACGXTFZQGCJJCDVXAWEBSETAZRIVRCTKVOBGLEPIOFRPKBYTXCMKDPCYKNWDUBSNJUHTESRFVMRQWFHJBRWARITPULFPSLYGYXDRKBFIWDSAIZMYFSUVFDJZIGSFSWOKMBGQJMPIWITXHZMOGAUXQUZJVLPBVNVBCGLLYOYQKPZUD");

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
    msg.setTimeStamp(0.8280438285261692);
    msg.setSource(30778U);
    msg.setSourceEntity(103U);
    msg.setDestination(35094U);
    msg.setDestinationEntity(71U);
    msg.op = 193U;
    msg.text.assign("ABQEXPBFCBDNPXTTDLKZMTOJSODMQHRJPIABKTFKZUNXGHQTGEHJCZSCYNLZEUHVKBAIDRCAWZZTENUJBUOYKKQWLYIUFWDRICVVHPNFAMWLAIBXYNGOQWCQPCDAGKWJWXIOUNVEBJKNMSQTTSOWYVIFYTOQSYRUGBCEFAFPFISZVLVMWJLKDBXOUTLIGEXDRFARYKQMERRPPLM");

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
    msg.setTimeStamp(0.2162020316258566);
    msg.setSource(42232U);
    msg.setSourceEntity(29U);
    msg.setDestination(60360U);
    msg.setDestinationEntity(45U);
    msg.op = 55U;
    msg.time_remain = 0.3451006118411861;
    msg.sched_time = 0.5272554554551118;

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
    msg.setTimeStamp(0.1421575088966328);
    msg.setSource(1247U);
    msg.setSourceEntity(208U);
    msg.setDestination(41516U);
    msg.setDestinationEntity(33U);
    msg.op = 53U;
    msg.time_remain = 0.27098794362052725;
    msg.sched_time = 0.0852116423238165;

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
    msg.setTimeStamp(0.8398753047665773);
    msg.setSource(11117U);
    msg.setSourceEntity(116U);
    msg.setDestination(47959U);
    msg.setDestinationEntity(228U);
    msg.op = 136U;
    msg.time_remain = 0.6126878374719466;
    msg.sched_time = 0.37390334360054245;

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
    msg.setTimeStamp(0.8292110856825413);
    msg.setSource(47649U);
    msg.setSourceEntity(147U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DEZYOEUERWGQHERRCYYCSWMCWOJJNFCXTIXZBFCZXABIUPYONNOVNUWZPIEAGJGUNHATBNXQBWNYLURYOSBILIJWYZNTQQSUMVHKQILKAYCESJTJERARVWQDBEQRQPDLPGHGXKOKNGMURKCXPJGBUFMHCVDSRHSPIFFXMXBA");
    msg.op = 98U;
    msg.sched_time = 0.14271970852109273;

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
    msg.setTimeStamp(0.058624355584745325);
    msg.setSource(45425U);
    msg.setSourceEntity(13U);
    msg.setDestination(54010U);
    msg.setDestinationEntity(17U);
    msg.name.assign("AUOTCECBIFHKGATWPCBZNXXAZGXAFWOFIIHGYEVOWHSJZKVMZLLETGFDDMDOEQJTJURWEVKUYEMSFKXINBQMFOGNLMOHVLZPKDOUCGYJABHOPXNNQBNITLPRDBSPZDYFRWDSEKUQCMAPHNCLTMIDCCRPRYVTKCUJQPQHYRWHFZYKGYMXVQGSJZRQBPGJHJRUEMNMVCTBENFWBZAOBPSWEXDIOLURXALYAJKFDWSSJUXAIITVQUSV");
    msg.op = 74U;
    msg.sched_time = 0.6629600597576378;

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
    msg.setTimeStamp(0.5027227589582896);
    msg.setSource(30813U);
    msg.setSourceEntity(38U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(221U);
    msg.name.assign("THOHYIMSDMRFNILEENTQYFLLVCMGTRIMWORITLRXNKNZGOCGXJAOTXFXHUWJFOEJBIKYQMUVHXJSDJHGBBSZWDWNGVWLFWVLPJVFCJBOJPSQCIBPFAYRFATCYCDQKYUIAOLHMKNTSDSYTJNPPZRVMVORKPIKDSDAVPDZXXUZCXKBMWQMBRUUOCSELPDVWZIGLUAAHUGXENSEEYSAPZGYUZTBFKJRKHNAWBQCGLEXVYNGRHHZOUPQI");
    msg.op = 44U;
    msg.sched_time = 0.3713184828991445;

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
    msg.setTimeStamp(0.14021486055897503);
    msg.setSource(53368U);
    msg.setSourceEntity(92U);
    msg.setDestination(22171U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.6159756188354829);
    msg.setSource(48514U);
    msg.setSourceEntity(246U);
    msg.setDestination(5165U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.6267761630065357);
    msg.setSource(56572U);
    msg.setSourceEntity(207U);
    msg.setDestination(65191U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.6791043997455664);
    msg.setSource(43205U);
    msg.setSourceEntity(228U);
    msg.setDestination(61517U);
    msg.setDestinationEntity(131U);
    msg.name.assign("WCZIMEGDFPVOYFQYCQMTFAPTPVLWXXKEPKBESRWRDORUWYNYEWOLWTMWUYNJCNUPQPZGHACIRDRVRIOSRSLOLSFKJXKYBFAVZAJUDUZSCQXJSTMIQPNTDFQJRWTKFHIEEVIBFLUGMGPCJHLBNVVBYGDOEAIJOKBVXEEUGACZGALDLSAQZGHTUTGJXNKWMKHFHFOYMBBMSZQBNSDVIQCQPTUAOZGBNIHYLRTMLCZXRZONADIUJHKVKY");
    msg.state = 31U;

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
    msg.setTimeStamp(0.6563973376218717);
    msg.setSource(25561U);
    msg.setSourceEntity(81U);
    msg.setDestination(45602U);
    msg.setDestinationEntity(41U);
    msg.name.assign("UCPOPIURJAGAXHNOHLNSBRIAZVVFTSHMYFBZWPSBKOKPFVQAOCZFSMQHFXYBELEPTKUKBD");
    msg.state = 133U;

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
    msg.setTimeStamp(0.012579335387572499);
    msg.setSource(44416U);
    msg.setSourceEntity(220U);
    msg.setDestination(37229U);
    msg.setDestinationEntity(32U);
    msg.name.assign("LMRQXQBFFDVBQTBXLBKVCHANGEMERPIRLAQVUOSLYBIFUMKTIYTCTMVJZSZQNRAFDLLWGMOGVZIHKMTCKZPWTGVMXXYEIERIRQJVSBZGSYJJKWHKSPIOJGABALFBEHHCVINOSFGEPUXPIZKYJWEJ");
    msg.state = 126U;

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
    msg.setTimeStamp(0.9607512598700313);
    msg.setSource(38412U);
    msg.setSourceEntity(119U);
    msg.setDestination(18878U);
    msg.setDestinationEntity(91U);
    msg.name.assign("VODLZJXNOMFLAWGGKURYVBHDJXCQZHEPUZUPNPZYVIFQEBBWNAZVGYEJPLSINQCRKLNXLGFISTZOQTFHSCOTCUDXBMKWZGLDUHTVAJBRXMBKQOVE");
    msg.value = 142U;

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
    msg.setTimeStamp(0.12812795417247924);
    msg.setSource(55021U);
    msg.setSourceEntity(167U);
    msg.setDestination(52687U);
    msg.setDestinationEntity(223U);
    msg.name.assign("JHQMJYBOMZTUFEUZPSYBLFNLDKUNMIGCBXSFTNSWRZLDFOQGHZWQKQYHSGZCGFBWGAMMYEYEXUADCIQJTYJQNQHCIWHVKJFIJWVNDCMLAQVRIXOLOSFVGGRLKQYUIUZWIOMNXCWYN");
    msg.value = 163U;

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
    msg.setTimeStamp(0.3947806923455499);
    msg.setSource(51091U);
    msg.setSourceEntity(225U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(24U);
    msg.name.assign("SXGRPXCKVBLVXBZYYZHDZZQLZMXKVTUHKQDRIAUFDGIUWNDGEARZFDINSDSNSGXWMUKTEWCLFIHYEETNGSMAWQQPFWVJ");
    msg.value = 134U;

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
    msg.setTimeStamp(0.48035344794735935);
    msg.setSource(33950U);
    msg.setSourceEntity(104U);
    msg.setDestination(24821U);
    msg.setDestinationEntity(184U);
    msg.name.assign("JYMWUUGCBHSQYAKYARZBPYDPLMFHSSDKVMXTAEKBFFJWQKJEZCVTBZFVWWYVMCJVXXUZIRPESFBUDKQLXVKAIPHLCPYTEJQQABNQUTIRRPRGRXSMIMOYIOZOJUBTOMONEZTNNHNSACIZTMLFFRLDOBNZHPNGSFOCTTYWVHWBEAGJWEDPLLGJLJSDGJRYHXOEMSNKDWGDAIHXLIXOLUZFIXRKSVAWVGDKQCUEGCFXP");

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
    msg.setTimeStamp(0.661228520179013);
    msg.setSource(11385U);
    msg.setSourceEntity(167U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(157U);
    msg.name.assign("POHKWAPVLHVAHEKOAXERMBTOXNKVYNVAOQEWGFFYEMUSDFWZVCNJTBYOWIQFSZHOUHQPMCCJMABNYTJSSZHRCSJVTDDSNIKFNNYAGGWPILSGRVTEFSODICMGJRFYTLCXRBUQADQHFZBJWSDKCCRNPIKGUVA");

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
    msg.setTimeStamp(0.9336717497405423);
    msg.setSource(50939U);
    msg.setSourceEntity(49U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(233U);
    msg.name.assign("HKAENZWVVBIDONNLGMPJUDRAVYDESBGTRISWJDPQRTKSEIJBJMTFVSJCWGOFBZCKJKNCWKBZXZWDIOEHGKRZZUYMTCEPRTCJEOXPSFWLTQXCGRAUVQFAJMIQKRS");

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
    msg.setTimeStamp(0.09425516381693866);
    msg.setSource(44976U);
    msg.setSourceEntity(252U);
    msg.setDestination(1150U);
    msg.setDestinationEntity(205U);
    msg.name.assign("SXDVNTAMJHDVEDXESQFKSTWJVGMVIFBBDEGFBGPYXE");
    msg.value = 29U;

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
    msg.setTimeStamp(0.7927720269727245);
    msg.setSource(40061U);
    msg.setSourceEntity(151U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(126U);
    msg.name.assign("JEAGKZRTQLYSGUEMERFRDMWGVZEEQIXKOIBCWDKGIYPTCNYPWZAQBQZKFMNLZOAZUPQJSNIAZGTIWRJPSNQOTNKOEXRDTVTGEUMLPYHTSMEAHXMKAHNVQFHXTDBGZWJRUCFHOXJNL");
    msg.value = 124U;

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
    msg.setTimeStamp(0.6571979779480577);
    msg.setSource(14206U);
    msg.setSourceEntity(19U);
    msg.setDestination(27683U);
    msg.setDestinationEntity(106U);
    msg.name.assign("JWTKLZFUDJGCOHAWUTPWXLTMTQPPNSGODHJBHJHRMQCTERPLKKB");
    msg.value = 85U;

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
    msg.setTimeStamp(0.7722600306452765);
    msg.setSource(10843U);
    msg.setSourceEntity(24U);
    msg.setDestination(324U);
    msg.setDestinationEntity(16U);
    msg.id = 3U;
    msg.period = 3775904808U;
    msg.duty_cycle = 2774480559U;

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
    msg.setTimeStamp(0.7128186319763377);
    msg.setSource(2684U);
    msg.setSourceEntity(199U);
    msg.setDestination(46498U);
    msg.setDestinationEntity(55U);
    msg.id = 132U;
    msg.period = 865728786U;
    msg.duty_cycle = 3626507363U;

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
    msg.setTimeStamp(0.37948596147717717);
    msg.setSource(42025U);
    msg.setSourceEntity(250U);
    msg.setDestination(41069U);
    msg.setDestinationEntity(218U);
    msg.id = 243U;
    msg.period = 602800302U;
    msg.duty_cycle = 935963302U;

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
    msg.setTimeStamp(0.7752369947251693);
    msg.setSource(43983U);
    msg.setSourceEntity(178U);
    msg.setDestination(44891U);
    msg.setDestinationEntity(231U);
    msg.id = 29U;
    msg.period = 3695446425U;
    msg.duty_cycle = 593644268U;

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
    msg.setTimeStamp(0.9716086358760253);
    msg.setSource(25773U);
    msg.setSourceEntity(65U);
    msg.setDestination(658U);
    msg.setDestinationEntity(150U);
    msg.id = 98U;
    msg.period = 217730690U;
    msg.duty_cycle = 3193879027U;

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
    msg.setTimeStamp(0.9161458085808303);
    msg.setSource(42010U);
    msg.setSourceEntity(243U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(107U);
    msg.id = 87U;
    msg.period = 2181425363U;
    msg.duty_cycle = 4017896660U;

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
    msg.setTimeStamp(0.4662316892641608);
    msg.setSource(32384U);
    msg.setSourceEntity(190U);
    msg.setDestination(29591U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.8377989028308671;
    msg.lon = 0.14127275603394152;
    msg.height = 0.3172994094552366;
    msg.x = 0.8231490232788468;
    msg.y = 0.12412553206531118;
    msg.z = 0.7025631064399518;
    msg.phi = 0.6921281122766196;
    msg.theta = 0.8964977591338007;
    msg.psi = 0.5552498655525521;
    msg.u = 0.21760612880527097;
    msg.v = 0.1873053061728085;
    msg.w = 0.6423112582389583;
    msg.vx = 0.7230278957734879;
    msg.vy = 0.06922918174218373;
    msg.vz = 0.7131058016761862;
    msg.p = 0.9047364282000071;
    msg.q = 0.22679807759684323;
    msg.r = 0.7069353286927079;
    msg.depth = 0.5948074489621542;
    msg.alt = 0.41410910893431985;

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
    msg.setTimeStamp(0.05630477968775549);
    msg.setSource(40092U);
    msg.setSourceEntity(41U);
    msg.setDestination(1570U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.0746224850487528;
    msg.lon = 0.9716342270798286;
    msg.height = 0.41346066795546066;
    msg.x = 0.6917377665334729;
    msg.y = 0.17111370458745312;
    msg.z = 0.4530889573151824;
    msg.phi = 0.4622786458498982;
    msg.theta = 0.13036683656704073;
    msg.psi = 0.6086441802293971;
    msg.u = 0.31250912202006165;
    msg.v = 0.3318397682306272;
    msg.w = 0.14355786376674995;
    msg.vx = 0.3336798732835594;
    msg.vy = 0.1728414403506534;
    msg.vz = 0.2059262828101459;
    msg.p = 0.8137296396675219;
    msg.q = 0.9182784595840674;
    msg.r = 0.9487943703173988;
    msg.depth = 0.5061859527239612;
    msg.alt = 0.8243651611603321;

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
    msg.setTimeStamp(0.9300952650283506);
    msg.setSource(21822U);
    msg.setSourceEntity(99U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.7699919222062668;
    msg.lon = 0.897507274294826;
    msg.height = 0.7653999862589799;
    msg.x = 0.5812833788459221;
    msg.y = 0.9471444405171748;
    msg.z = 0.517152322250518;
    msg.phi = 0.6485576898846019;
    msg.theta = 0.329654557155035;
    msg.psi = 0.7111540253243044;
    msg.u = 0.6840620171342215;
    msg.v = 0.7382086398217165;
    msg.w = 0.9396764874754826;
    msg.vx = 0.48371878476787256;
    msg.vy = 0.8528447729159351;
    msg.vz = 0.8616245903046589;
    msg.p = 0.3099968519892091;
    msg.q = 0.5453442412492698;
    msg.r = 0.45980260566047126;
    msg.depth = 0.6170557173761464;
    msg.alt = 0.14132248385456703;

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
    msg.setTimeStamp(0.33359157381654214);
    msg.setSource(16103U);
    msg.setSourceEntity(117U);
    msg.setDestination(1453U);
    msg.setDestinationEntity(139U);
    msg.x = 0.6308223046343043;
    msg.y = 0.6879558096255641;
    msg.z = 0.3140455025083613;

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
    msg.setTimeStamp(0.25225293004584626);
    msg.setSource(17648U);
    msg.setSourceEntity(195U);
    msg.setDestination(63356U);
    msg.setDestinationEntity(223U);
    msg.x = 0.4723270183732666;
    msg.y = 0.47173264616123334;
    msg.z = 0.7277474456469726;

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
    msg.setTimeStamp(0.9079357562901106);
    msg.setSource(55669U);
    msg.setSourceEntity(62U);
    msg.setDestination(10086U);
    msg.setDestinationEntity(98U);
    msg.x = 0.6470545877510276;
    msg.y = 0.9796254746721835;
    msg.z = 0.3717319836200569;

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
    msg.setTimeStamp(0.1948412953719253);
    msg.setSource(55533U);
    msg.setSourceEntity(86U);
    msg.setDestination(45736U);
    msg.setDestinationEntity(197U);
    msg.value = 0.5370449829280078;

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
    msg.setTimeStamp(0.019626212120137043);
    msg.setSource(52754U);
    msg.setSourceEntity(211U);
    msg.setDestination(58842U);
    msg.setDestinationEntity(199U);
    msg.value = 0.666785887079215;

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
    msg.setTimeStamp(0.6879144129529275);
    msg.setSource(36108U);
    msg.setSourceEntity(110U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(237U);
    msg.value = 0.46231210448020865;

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
    msg.setTimeStamp(0.8499187875427962);
    msg.setSource(3787U);
    msg.setSourceEntity(97U);
    msg.setDestination(45399U);
    msg.setDestinationEntity(179U);
    msg.value = 0.41837028117949104;

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
    msg.setTimeStamp(0.21201801208628268);
    msg.setSource(28795U);
    msg.setSourceEntity(24U);
    msg.setDestination(21929U);
    msg.setDestinationEntity(98U);
    msg.value = 0.5987816206566252;

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
    msg.setTimeStamp(0.5304907461229051);
    msg.setSource(42748U);
    msg.setSourceEntity(239U);
    msg.setDestination(42576U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6946876212031495;

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
    msg.setTimeStamp(0.2833939863439745);
    msg.setSource(54114U);
    msg.setSourceEntity(122U);
    msg.setDestination(27992U);
    msg.setDestinationEntity(189U);
    msg.x = 0.36582485329154457;
    msg.y = 0.6578924538298953;
    msg.z = 0.2837966798819813;
    msg.phi = 0.20694760685075453;
    msg.theta = 0.9961638545754602;
    msg.psi = 0.8492091764037765;
    msg.p = 0.13531301706558252;
    msg.q = 0.23816093107014624;
    msg.r = 0.577412353060795;
    msg.u = 0.571021951394181;
    msg.v = 0.02956833195792652;
    msg.w = 0.74924589143805;
    msg.bias_psi = 0.9538866397834717;
    msg.bias_r = 0.46471632603780166;

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
    msg.setTimeStamp(0.27031547458855876);
    msg.setSource(3636U);
    msg.setSourceEntity(9U);
    msg.setDestination(65080U);
    msg.setDestinationEntity(106U);
    msg.x = 0.19515551172521906;
    msg.y = 0.5688411693972258;
    msg.z = 0.6265334265891056;
    msg.phi = 0.27139171853339483;
    msg.theta = 0.9528236637211306;
    msg.psi = 0.012754850989088573;
    msg.p = 0.6267951376445541;
    msg.q = 0.8839003670709784;
    msg.r = 0.8044340714388102;
    msg.u = 0.758956203174013;
    msg.v = 0.5222435617748782;
    msg.w = 0.4000250089347228;
    msg.bias_psi = 0.06189443090270763;
    msg.bias_r = 0.906113092706093;

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
    msg.setTimeStamp(0.729784972824706);
    msg.setSource(56119U);
    msg.setSourceEntity(42U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(253U);
    msg.x = 0.02651917300958706;
    msg.y = 0.5128514306247683;
    msg.z = 0.49991307695389553;
    msg.phi = 0.3399366069700581;
    msg.theta = 0.14920916565939857;
    msg.psi = 0.8428960406466119;
    msg.p = 0.8568840351092051;
    msg.q = 0.8918632356619195;
    msg.r = 0.6037507273166395;
    msg.u = 0.9016214846957411;
    msg.v = 0.20097413211721948;
    msg.w = 0.9133162605075449;
    msg.bias_psi = 0.48660904321607645;
    msg.bias_r = 0.5950892804862766;

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
    msg.setTimeStamp(0.3932246175971832);
    msg.setSource(49141U);
    msg.setSourceEntity(179U);
    msg.setDestination(33427U);
    msg.setDestinationEntity(250U);
    msg.bias_psi = 0.18625202539097707;
    msg.bias_r = 0.03175525791621858;
    msg.cog = 0.9610110576688001;
    msg.cyaw = 0.8617513767480576;
    msg.lbl_rej_level = 0.1625366165000962;
    msg.gps_rej_level = 0.05596009582343486;
    msg.custom_x = 0.8753518566810984;
    msg.custom_y = 0.1974640252136982;
    msg.custom_z = 0.5332392615891092;

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
    msg.setTimeStamp(0.11722083768687497);
    msg.setSource(42431U);
    msg.setSourceEntity(156U);
    msg.setDestination(30676U);
    msg.setDestinationEntity(111U);
    msg.bias_psi = 0.45855860816034366;
    msg.bias_r = 0.2552927921148268;
    msg.cog = 0.4198613086835221;
    msg.cyaw = 0.6001450542404371;
    msg.lbl_rej_level = 0.610705224835155;
    msg.gps_rej_level = 0.40678836517251005;
    msg.custom_x = 0.9700181256161627;
    msg.custom_y = 0.678324456998312;
    msg.custom_z = 0.14364743427621218;

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
    msg.setTimeStamp(0.11395281820520031);
    msg.setSource(8134U);
    msg.setSourceEntity(180U);
    msg.setDestination(62303U);
    msg.setDestinationEntity(104U);
    msg.bias_psi = 0.46337650992128476;
    msg.bias_r = 0.9199240338162491;
    msg.cog = 0.9604581528123395;
    msg.cyaw = 0.8329836158608819;
    msg.lbl_rej_level = 0.3644200570795555;
    msg.gps_rej_level = 0.38056921673144584;
    msg.custom_x = 0.365300958348986;
    msg.custom_y = 0.7367688647628463;
    msg.custom_z = 0.8381864986584026;

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
    msg.setTimeStamp(0.7510342891978341);
    msg.setSource(27843U);
    msg.setSourceEntity(81U);
    msg.setDestination(3918U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.7374135551814938;
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
    msg.setTimeStamp(0.0707092338579689);
    msg.setSource(54393U);
    msg.setSourceEntity(194U);
    msg.setDestination(20809U);
    msg.setDestinationEntity(134U);
    msg.utc_time = 0.9346270712001143;
    msg.reason = 206U;

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
    msg.setTimeStamp(0.9914151892523423);
    msg.setSource(49022U);
    msg.setSourceEntity(254U);
    msg.setDestination(61052U);
    msg.setDestinationEntity(19U);
    msg.utc_time = 0.884764176503833;
    msg.reason = 28U;

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
    msg.setTimeStamp(0.2804949301193733);
    msg.setSource(3841U);
    msg.setSourceEntity(251U);
    msg.setDestination(48862U);
    msg.setDestinationEntity(101U);
    msg.id = 195U;
    msg.range = 0.011265854124865138;
    msg.acceptance = 43U;

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
    msg.setTimeStamp(0.45871214434906693);
    msg.setSource(56591U);
    msg.setSourceEntity(180U);
    msg.setDestination(9354U);
    msg.setDestinationEntity(187U);
    msg.id = 184U;
    msg.range = 0.9515567990705956;
    msg.acceptance = 221U;

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
    msg.setTimeStamp(0.6835772400610326);
    msg.setSource(28159U);
    msg.setSourceEntity(76U);
    msg.setDestination(55846U);
    msg.setDestinationEntity(235U);
    msg.id = 87U;
    msg.range = 0.3154773001877421;
    msg.acceptance = 72U;

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
    msg.setTimeStamp(0.7733358659797629);
    msg.setSource(47727U);
    msg.setSourceEntity(145U);
    msg.setDestination(24630U);
    msg.setDestinationEntity(187U);
    msg.type = 234U;
    msg.reason = 63U;
    msg.value = 0.06843221676607181;
    msg.timestep = 0.9128906578578116;

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
    msg.setTimeStamp(0.7809078558492274);
    msg.setSource(11347U);
    msg.setSourceEntity(176U);
    msg.setDestination(11031U);
    msg.setDestinationEntity(119U);
    msg.type = 250U;
    msg.reason = 189U;
    msg.value = 0.8444817616198429;
    msg.timestep = 0.42818494965967335;

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
    msg.setTimeStamp(0.45706474382956674);
    msg.setSource(60032U);
    msg.setSourceEntity(220U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(134U);
    msg.type = 128U;
    msg.reason = 88U;
    msg.value = 0.5235328395230284;
    msg.timestep = 0.1629665664706983;

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
    msg.setTimeStamp(0.9400958596231771);
    msg.setSource(62684U);
    msg.setSourceEntity(135U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(231U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LDYTYZYRNKXKEJKFFCAKQQTHCWPDXZAOOJFRRNEXOROUWIJUQYVGTBWYUNSYNMSLSQGHZLKAOZGJMSDKDBGGKEKDJLPVCZHBZUJHEVLHBZAOEVWHHWQCCRXGVNLKFQUPVPXSMNXWFHXLBLYYEHRIAGQSUBGMSAUXWMAIAOTTCIDBIZWVOSTFHATVPDWQPYPERIJECVJIZMRIGYPQTUGSOBNIOJUFNCDRWBKJLFNXNDQSTEAPUFV");
    tmp_msg_0.lat = 0.16871989362663165;
    tmp_msg_0.lon = 0.47238141404500456;
    tmp_msg_0.depth = 0.37741113908161283;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 19U;
    tmp_msg_0.transponder_delay = 204U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.33925803929318943;
    msg.y = 0.25456374028527773;
    msg.var_x = 0.9367635004728648;
    msg.var_y = 0.6538277260430968;
    msg.distance = 0.8725229977378078;

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
    msg.setTimeStamp(0.25030490127436544);
    msg.setSource(19065U);
    msg.setSourceEntity(219U);
    msg.setDestination(25117U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CDWOWXUSZYZMKTBYGUXHMSHNSEIHFTPVLGWYBSZYNESZPVQEYZUGYQATRRAHOEDCJFVIKCWQSTTRPVCGLIDVUPPAIXMWXEGHPEKRUASCKFXKXSWNOLIXHPZAFZKJSKJHUMTUDZIFONJGQCMI");
    tmp_msg_0.lat = 0.7790443312606571;
    tmp_msg_0.lon = 0.6675306143870351;
    tmp_msg_0.depth = 0.4980020121160713;
    tmp_msg_0.query_channel = 118U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.517739970793055;
    msg.y = 0.6299622349734023;
    msg.var_x = 0.42043525196290155;
    msg.var_y = 0.09645401795852826;
    msg.distance = 0.45699236499850826;

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
    msg.setTimeStamp(0.792361818366625);
    msg.setSource(7534U);
    msg.setSourceEntity(188U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(96U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OWPVTMQVIPO");
    tmp_msg_0.lat = 0.6853314470541413;
    tmp_msg_0.lon = 0.9758145353945992;
    tmp_msg_0.depth = 0.9423586170363303;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 195U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8172882796315505;
    msg.y = 0.9700648045988027;
    msg.var_x = 0.8154080345413058;
    msg.var_y = 0.5791781982203272;
    msg.distance = 0.3407767135521571;

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
    msg.setTimeStamp(0.6246032700576553);
    msg.setSource(31220U);
    msg.setSourceEntity(24U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(136U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.7098017867502021);
    msg.setSource(9117U);
    msg.setSourceEntity(79U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(56U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.1040946159890016);
    msg.setSource(33422U);
    msg.setSourceEntity(151U);
    msg.setDestination(63065U);
    msg.setDestinationEntity(248U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.14611305453156043);
    msg.setSource(17442U);
    msg.setSourceEntity(132U);
    msg.setDestination(39387U);
    msg.setDestinationEntity(228U);
    msg.x = 0.8020097187341492;
    msg.y = 0.6338507922386203;
    msg.z = 0.5144425948029229;

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
    msg.setTimeStamp(0.25327593732215603);
    msg.setSource(827U);
    msg.setSourceEntity(204U);
    msg.setDestination(10908U);
    msg.setDestinationEntity(9U);
    msg.x = 0.37030546226287475;
    msg.y = 0.05180127498324527;
    msg.z = 0.9094278804035223;

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
    msg.setTimeStamp(0.872274882530074);
    msg.setSource(57628U);
    msg.setSourceEntity(199U);
    msg.setDestination(51298U);
    msg.setDestinationEntity(136U);
    msg.x = 0.9972230057036849;
    msg.y = 0.03353871981875678;
    msg.z = 0.9453868463693232;

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
    msg.setTimeStamp(0.01153154757243613);
    msg.setSource(53106U);
    msg.setSourceEntity(121U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(163U);
    msg.va = 0.601188440344342;
    msg.aoa = 0.8226287152150639;
    msg.ssa = 0.20897852156861763;

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
    msg.setTimeStamp(0.4578092169503045);
    msg.setSource(62025U);
    msg.setSourceEntity(121U);
    msg.setDestination(15835U);
    msg.setDestinationEntity(110U);
    msg.va = 0.2662420473149796;
    msg.aoa = 0.5636556719797597;
    msg.ssa = 0.0760189705292057;

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
    msg.setTimeStamp(0.8273195172038055);
    msg.setSource(41731U);
    msg.setSourceEntity(100U);
    msg.setDestination(15054U);
    msg.setDestinationEntity(26U);
    msg.va = 0.6034641209418711;
    msg.aoa = 0.1640087798960379;
    msg.ssa = 0.517781302408637;

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
    msg.setTimeStamp(0.6219404610806925);
    msg.setSource(57944U);
    msg.setSourceEntity(221U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(191U);
    msg.value = 0.24901949545638735;

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
    msg.setTimeStamp(0.40320575014667426);
    msg.setSource(19509U);
    msg.setSourceEntity(141U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(163U);
    msg.value = 0.423016946843485;

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
    msg.setTimeStamp(0.8404854945114725);
    msg.setSource(29670U);
    msg.setSourceEntity(254U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(219U);
    msg.value = 0.9815900268465566;

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
    msg.setTimeStamp(0.6843670459286255);
    msg.setSource(18033U);
    msg.setSourceEntity(188U);
    msg.setDestination(7380U);
    msg.setDestinationEntity(66U);
    msg.value = 0.48441318819469237;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.8807844004961709);
    msg.setSource(53724U);
    msg.setSourceEntity(97U);
    msg.setDestination(26876U);
    msg.setDestinationEntity(233U);
    msg.value = 0.495919922658272;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.8730886386254559);
    msg.setSource(25646U);
    msg.setSourceEntity(7U);
    msg.setDestination(52687U);
    msg.setDestinationEntity(144U);
    msg.value = 0.3897940423256723;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.7850809062914899);
    msg.setSource(50871U);
    msg.setSourceEntity(230U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7191235554087173;
    msg.speed_units = 3U;

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
    msg.setTimeStamp(0.5659000347948353);
    msg.setSource(41149U);
    msg.setSourceEntity(150U);
    msg.setDestination(2244U);
    msg.setDestinationEntity(144U);
    msg.value = 0.41195577844449105;
    msg.speed_units = 181U;

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
    msg.setTimeStamp(0.643404084529402);
    msg.setSource(22582U);
    msg.setSourceEntity(8U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6682969278179345;
    msg.speed_units = 124U;

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
    msg.setTimeStamp(0.06613992468922925);
    msg.setSource(10123U);
    msg.setSourceEntity(244U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(121U);
    msg.value = 0.24200549670823135;

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
    msg.setTimeStamp(0.8794207320206531);
    msg.setSource(6359U);
    msg.setSourceEntity(202U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(6U);
    msg.value = 0.4049080172725521;

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
    msg.setTimeStamp(0.12209836399113316);
    msg.setSource(41187U);
    msg.setSourceEntity(43U);
    msg.setDestination(24222U);
    msg.setDestinationEntity(141U);
    msg.value = 0.13325762127013163;

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
    msg.setTimeStamp(0.11753486078744935);
    msg.setSource(12045U);
    msg.setSourceEntity(98U);
    msg.setDestination(43056U);
    msg.setDestinationEntity(90U);
    msg.value = 0.34028673457906533;

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
    msg.setTimeStamp(0.334936402323292);
    msg.setSource(50122U);
    msg.setSourceEntity(196U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(207U);
    msg.value = 0.09432614403676332;

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
    msg.setTimeStamp(0.32166340034844865);
    msg.setSource(4123U);
    msg.setSourceEntity(72U);
    msg.setDestination(23991U);
    msg.setDestinationEntity(54U);
    msg.value = 0.7071152957654553;

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
    msg.setTimeStamp(0.7149536565347365);
    msg.setSource(3746U);
    msg.setSourceEntity(10U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8347661138279652;

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
    msg.setTimeStamp(0.5874042703219593);
    msg.setSource(52943U);
    msg.setSourceEntity(155U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6567097134020947;

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
    msg.setTimeStamp(0.45799077613502404);
    msg.setSource(37706U);
    msg.setSourceEntity(32U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(1U);
    msg.value = 0.6062291006577071;

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
    msg.setTimeStamp(0.5044448559156105);
    msg.setSource(9674U);
    msg.setSourceEntity(84U);
    msg.setDestination(29249U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 3661975655U;
    msg.start_lat = 0.18896054311455723;
    msg.start_lon = 0.8505558382701651;
    msg.start_z = 0.420873269604377;
    msg.start_z_units = 16U;
    msg.end_lat = 0.46588692237897655;
    msg.end_lon = 0.6593694546605617;
    msg.end_z = 0.17480564210016625;
    msg.end_z_units = 100U;
    msg.speed = 0.9905968320294025;
    msg.speed_units = 230U;
    msg.lradius = 0.4765092414716676;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.18221862072384953);
    msg.setSource(27359U);
    msg.setSourceEntity(230U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 1317634306U;
    msg.start_lat = 0.6613952830129076;
    msg.start_lon = 0.9932990585773882;
    msg.start_z = 0.8181720246083849;
    msg.start_z_units = 239U;
    msg.end_lat = 0.3545736710955647;
    msg.end_lon = 0.4950850502372198;
    msg.end_z = 0.05913071420135041;
    msg.end_z_units = 44U;
    msg.speed = 0.057360551719923714;
    msg.speed_units = 23U;
    msg.lradius = 0.922920003686421;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.9888253134667685);
    msg.setSource(22418U);
    msg.setSourceEntity(36U);
    msg.setDestination(42655U);
    msg.setDestinationEntity(186U);
    msg.path_ref = 2419699749U;
    msg.start_lat = 0.6485154655646468;
    msg.start_lon = 0.48205278147616837;
    msg.start_z = 0.35321458280812623;
    msg.start_z_units = 15U;
    msg.end_lat = 0.45426763955084715;
    msg.end_lon = 0.5470128399868801;
    msg.end_z = 0.360585397122002;
    msg.end_z_units = 234U;
    msg.speed = 0.060191309880068045;
    msg.speed_units = 106U;
    msg.lradius = 0.8772130027827956;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.3160324395387831);
    msg.setSource(20498U);
    msg.setSourceEntity(48U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(218U);
    msg.x = 0.9455449395633412;
    msg.y = 0.24519813929327927;
    msg.z = 0.1369800096364132;
    msg.k = 0.6502597519230807;
    msg.m = 0.4331562079346203;
    msg.n = 0.16799021457705843;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.4277482476911647);
    msg.setSource(31270U);
    msg.setSourceEntity(109U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(110U);
    msg.x = 0.1599096812165709;
    msg.y = 0.6109498691195201;
    msg.z = 0.9563977355187491;
    msg.k = 0.22249295569446292;
    msg.m = 0.20362295239978612;
    msg.n = 0.3346450448704661;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.8348185497304217);
    msg.setSource(24099U);
    msg.setSourceEntity(199U);
    msg.setDestination(7181U);
    msg.setDestinationEntity(188U);
    msg.x = 0.04264774224092971;
    msg.y = 0.6070125114034204;
    msg.z = 0.9805079348868586;
    msg.k = 0.18975962195665896;
    msg.m = 0.19339895068180768;
    msg.n = 0.2124143837419512;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.9258623365926693);
    msg.setSource(18476U);
    msg.setSourceEntity(192U);
    msg.setDestination(11766U);
    msg.setDestinationEntity(234U);
    msg.value = 0.08207015342671331;

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
    msg.setTimeStamp(0.41323093142645684);
    msg.setSource(5812U);
    msg.setSourceEntity(4U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(231U);
    msg.value = 0.36208942049390214;

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
    msg.setTimeStamp(0.7096168562062491);
    msg.setSource(14758U);
    msg.setSourceEntity(90U);
    msg.setDestination(39697U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7147263694949949;

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
    msg.setTimeStamp(0.7339403671223381);
    msg.setSource(44071U);
    msg.setSourceEntity(189U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(166U);
    msg.u = 0.0036290431055140404;
    msg.v = 0.4996560417592524;
    msg.w = 0.8483524264606915;
    msg.p = 0.52307082093266;
    msg.q = 0.014784273545851656;
    msg.r = 0.411583672289496;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.13223055241346449);
    msg.setSource(59016U);
    msg.setSourceEntity(161U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(78U);
    msg.u = 0.23876372941070556;
    msg.v = 0.008950751224256592;
    msg.w = 0.9945368533388339;
    msg.p = 0.03472088742562551;
    msg.q = 0.3400205530981659;
    msg.r = 0.7780880810136772;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.24900448198442293);
    msg.setSource(39547U);
    msg.setSourceEntity(67U);
    msg.setDestination(35644U);
    msg.setDestinationEntity(245U);
    msg.u = 0.8389511652221455;
    msg.v = 0.4423102480268193;
    msg.w = 0.4421332248879488;
    msg.p = 0.7214546252741002;
    msg.q = 0.17612503492621767;
    msg.r = 0.29112504523916305;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.8751387598916679);
    msg.setSource(64176U);
    msg.setSourceEntity(7U);
    msg.setDestination(52100U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 1572610076U;
    msg.start_lat = 0.48624989955014997;
    msg.start_lon = 0.863745385313978;
    msg.start_z = 0.09309674941704837;
    msg.start_z_units = 25U;
    msg.end_lat = 0.47725027933926656;
    msg.end_lon = 0.14755506628938453;
    msg.end_z = 0.12945901481342537;
    msg.end_z_units = 227U;
    msg.lradius = 0.18815066137011383;
    msg.flags = 107U;
    msg.x = 0.011368013401430344;
    msg.y = 0.2773622320087983;
    msg.z = 0.675555187836087;
    msg.vx = 0.004644619727564248;
    msg.vy = 0.5329862358707602;
    msg.vz = 0.15926874409103342;
    msg.course_error = 0.1132334096820562;
    msg.eta = 8969U;

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
    msg.setTimeStamp(0.6633895139004061);
    msg.setSource(38657U);
    msg.setSourceEntity(91U);
    msg.setDestination(7768U);
    msg.setDestinationEntity(181U);
    msg.path_ref = 2878585024U;
    msg.start_lat = 0.682126299314266;
    msg.start_lon = 0.7459662651427617;
    msg.start_z = 0.41192490394992465;
    msg.start_z_units = 126U;
    msg.end_lat = 0.5712954283320326;
    msg.end_lon = 0.6967296205246076;
    msg.end_z = 0.166728281017139;
    msg.end_z_units = 54U;
    msg.lradius = 0.4152328473903598;
    msg.flags = 72U;
    msg.x = 0.7556251672896338;
    msg.y = 0.6889105406854769;
    msg.z = 0.06477669076537795;
    msg.vx = 0.6692487482112291;
    msg.vy = 0.3635022358587463;
    msg.vz = 0.36202375099147177;
    msg.course_error = 0.24479365219409632;
    msg.eta = 14673U;

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
    msg.setTimeStamp(0.11356150096848838);
    msg.setSource(60203U);
    msg.setSourceEntity(50U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 2948803344U;
    msg.start_lat = 0.024827356792775923;
    msg.start_lon = 0.1657698017698087;
    msg.start_z = 0.9248546748612249;
    msg.start_z_units = 235U;
    msg.end_lat = 0.6584804570407106;
    msg.end_lon = 0.5902421044215114;
    msg.end_z = 0.4254543713513673;
    msg.end_z_units = 89U;
    msg.lradius = 0.33198767483364067;
    msg.flags = 153U;
    msg.x = 0.855410040781679;
    msg.y = 0.7532464041495549;
    msg.z = 0.39576403309640573;
    msg.vx = 0.85342675222294;
    msg.vy = 0.3466199074177416;
    msg.vz = 0.0309490920320602;
    msg.course_error = 0.9862146738391355;
    msg.eta = 55835U;

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
    msg.setTimeStamp(0.2571649311808992);
    msg.setSource(8647U);
    msg.setSourceEntity(114U);
    msg.setDestination(13797U);
    msg.setDestinationEntity(87U);
    msg.k = 0.961326103118181;
    msg.m = 0.4682672619981424;
    msg.n = 0.9200037917812698;

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
    msg.setTimeStamp(0.4654247960050263);
    msg.setSource(43249U);
    msg.setSourceEntity(179U);
    msg.setDestination(11055U);
    msg.setDestinationEntity(166U);
    msg.k = 0.32310320322856534;
    msg.m = 0.9497359792588933;
    msg.n = 0.23435185237267364;

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
    msg.setTimeStamp(0.36163757325238033);
    msg.setSource(20797U);
    msg.setSourceEntity(21U);
    msg.setDestination(62412U);
    msg.setDestinationEntity(231U);
    msg.k = 0.295878048090378;
    msg.m = 0.6118758550423088;
    msg.n = 0.5324278011618859;

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
    msg.setTimeStamp(0.7805824730091151);
    msg.setSource(19048U);
    msg.setSourceEntity(128U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(84U);
    msg.p = 0.5907125888171665;
    msg.i = 0.03057832782430081;
    msg.d = 0.6563969475636502;
    msg.a = 0.10195500486098963;

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
    msg.setTimeStamp(0.6922256982410052);
    msg.setSource(35085U);
    msg.setSourceEntity(38U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(83U);
    msg.p = 0.6662802631161482;
    msg.i = 0.8816118608953954;
    msg.d = 0.6716282430340417;
    msg.a = 0.2670608435820826;

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
    msg.setTimeStamp(0.5680500120927597);
    msg.setSource(15117U);
    msg.setSourceEntity(18U);
    msg.setDestination(30809U);
    msg.setDestinationEntity(94U);
    msg.p = 0.6251849524181419;
    msg.i = 0.24740094675539515;
    msg.d = 0.886839021101267;
    msg.a = 0.910684895263779;

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
    msg.setTimeStamp(0.32270471363619646);
    msg.setSource(27491U);
    msg.setSourceEntity(47U);
    msg.setDestination(59559U);
    msg.setDestinationEntity(28U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.8741019264308932);
    msg.setSource(48012U);
    msg.setSourceEntity(121U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(160U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.5110596383511079);
    msg.setSource(4757U);
    msg.setSourceEntity(247U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(93U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.5248397583300135);
    msg.setSource(47022U);
    msg.setSourceEntity(188U);
    msg.setDestination(10249U);
    msg.setDestinationEntity(80U);
    msg.x = 0.6489501038061832;
    msg.y = 0.43996421194166635;
    msg.z = 0.2850498000303895;
    msg.vx = 0.7880819586239746;
    msg.vy = 0.1445389499757327;
    msg.vz = 0.28211230757118355;
    msg.ax = 0.9219568898273827;
    msg.ay = 0.658437839290144;
    msg.az = 0.18778023323596982;
    msg.flags = 63225U;

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
    msg.setTimeStamp(0.1101185947283132);
    msg.setSource(32747U);
    msg.setSourceEntity(220U);
    msg.setDestination(44390U);
    msg.setDestinationEntity(13U);
    msg.x = 0.6164261995698256;
    msg.y = 0.19686296343347853;
    msg.z = 0.6507384301123466;
    msg.vx = 0.7820063604915727;
    msg.vy = 0.8585261619190965;
    msg.vz = 0.06175378655655728;
    msg.ax = 0.10161171693255022;
    msg.ay = 0.9952721903601753;
    msg.az = 0.23998999171752833;
    msg.flags = 59577U;

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
    msg.setTimeStamp(0.9837449347908682);
    msg.setSource(36983U);
    msg.setSourceEntity(107U);
    msg.setDestination(49309U);
    msg.setDestinationEntity(226U);
    msg.x = 0.09680221645968201;
    msg.y = 0.8997152234108269;
    msg.z = 0.6338562759933374;
    msg.vx = 0.9985009182346922;
    msg.vy = 0.4959047105322276;
    msg.vz = 0.22610931853465366;
    msg.ax = 0.45366581575341813;
    msg.ay = 0.18532581772468004;
    msg.az = 0.2910607534643096;
    msg.flags = 61422U;

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
    msg.setTimeStamp(0.2538025144051572);
    msg.setSource(1513U);
    msg.setSourceEntity(9U);
    msg.setDestination(15794U);
    msg.setDestinationEntity(51U);
    msg.value = 0.018413727682570658;

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
    msg.setTimeStamp(0.5346383682384614);
    msg.setSource(62081U);
    msg.setSourceEntity(135U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(132U);
    msg.value = 0.4564677191171532;

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
    msg.setTimeStamp(0.8498881471306583);
    msg.setSource(57113U);
    msg.setSourceEntity(33U);
    msg.setDestination(36225U);
    msg.setDestinationEntity(70U);
    msg.value = 0.45912423587086626;

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
    msg.setTimeStamp(0.4383345159040908);
    msg.setSource(36237U);
    msg.setSourceEntity(72U);
    msg.setDestination(32068U);
    msg.setDestinationEntity(140U);
    msg.timeout = 48926U;
    msg.lat = 0.8806518515051986;
    msg.lon = 0.3887871651715008;
    msg.z = 0.5758539276865102;
    msg.z_units = 219U;
    msg.speed = 0.35452666353091966;
    msg.speed_units = 92U;
    msg.roll = 0.10846820171381077;
    msg.pitch = 0.16083487155597076;
    msg.yaw = 0.9020880941613221;
    msg.custom.assign("WFYEWEJZYUZCLWCFEAQLNGNRPQGIMXUNAHNGSQXXFOUJROTTADAIFQDDBLLINMCIJRCSBOVGLGADPWOXELR");

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
    msg.setTimeStamp(0.7283242081563345);
    msg.setSource(21635U);
    msg.setSourceEntity(74U);
    msg.setDestination(23578U);
    msg.setDestinationEntity(71U);
    msg.timeout = 20114U;
    msg.lat = 0.49177271498949526;
    msg.lon = 0.5905542568543216;
    msg.z = 0.3839344198577871;
    msg.z_units = 90U;
    msg.speed = 0.21393752704474622;
    msg.speed_units = 18U;
    msg.roll = 0.6769454253051844;
    msg.pitch = 0.4749476974098221;
    msg.yaw = 0.7597287514081498;
    msg.custom.assign("DPZPFQSUTUXWDQUMVTBWLAKQAOEEKXINOZENVOXHJEJHHAVJXSJHPWLCUKFLXXAROSCEUZKCVSCLDYCKNTLBHCSTZZPGTQSNMKPEDFZYUNTGRRRXIWDJLTQMIIBFAWDGEMVJPNYMLKBMGBZFJUDAIFUJTNQTOHYRBZVDPFIKRWIVSGSOIJZK");

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
    msg.setTimeStamp(0.47283376436507885);
    msg.setSource(2928U);
    msg.setSourceEntity(189U);
    msg.setDestination(35875U);
    msg.setDestinationEntity(132U);
    msg.timeout = 12102U;
    msg.lat = 0.09993492284098138;
    msg.lon = 0.9081558407637208;
    msg.z = 0.2997368664996307;
    msg.z_units = 247U;
    msg.speed = 0.6909105447503081;
    msg.speed_units = 27U;
    msg.roll = 0.7205898042083287;
    msg.pitch = 0.8512328935692084;
    msg.yaw = 0.30195263571943365;
    msg.custom.assign("BPYDOKAIVBZIMFEMWZGAUXKAIBCNOGJARWUOLLKEVVUNQUWWANEMPFOUSMVJSCHENEYGWWCVROWNVKDWEMGOPPQJSILCZDTQRTUCNKFGZOKTQXZBXRCYHLZDIIZFBDYSR");

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
    msg.setTimeStamp(0.9974572807985548);
    msg.setSource(27492U);
    msg.setSourceEntity(30U);
    msg.setDestination(41268U);
    msg.setDestinationEntity(125U);
    msg.timeout = 32153U;
    msg.lat = 0.1785814252270138;
    msg.lon = 0.777561414101576;
    msg.z = 0.7448553477849262;
    msg.z_units = 70U;
    msg.speed = 0.1675870091167605;
    msg.speed_units = 221U;
    msg.duration = 22510U;
    msg.radius = 0.12873453270679136;
    msg.flags = 114U;
    msg.custom.assign("ZPWZTKAGBDCEAAEJCUYOCCJRXVKOBAMLUNKRMYHDMSTQJMVARYKBKFQIKPXXWTUOQYGGPWJXQMIWUEFCNATSIEZOUFFMRZFIGYFRFMGXWIPTJZIFVTSMEDLYBPYSRLHDAFNCYDESGJZQXLEPBHOFJWVRANUWKOGROPQBMENJHIVDDAHNSOQIKHQQUHQ");

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
    msg.setTimeStamp(0.6335924070462758);
    msg.setSource(47274U);
    msg.setSourceEntity(11U);
    msg.setDestination(25425U);
    msg.setDestinationEntity(27U);
    msg.timeout = 26554U;
    msg.lat = 0.16646486097336022;
    msg.lon = 0.5007299479756357;
    msg.z = 0.3417730497626704;
    msg.z_units = 38U;
    msg.speed = 0.4392128745347432;
    msg.speed_units = 21U;
    msg.duration = 20367U;
    msg.radius = 0.537553468238578;
    msg.flags = 233U;
    msg.custom.assign("ZRLAIDFRUXTWTPORYWENQNJOWOBNGNHPQYWWWEZOSANZBDVFGRYFRAEKIALCQMOBUJDVSHXHDEAZAKHYVXDEIMEQTWYISJUASESLUBDLFXSGODWDXRBURCFTIHGTQDQHZPHJLNRMCJIMECTLZYULBESKVLVGNSCAO");

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
    msg.setTimeStamp(0.5898187430864842);
    msg.setSource(21168U);
    msg.setSourceEntity(75U);
    msg.setDestination(60330U);
    msg.setDestinationEntity(236U);
    msg.timeout = 49631U;
    msg.lat = 0.7664239946991611;
    msg.lon = 0.001893452264548623;
    msg.z = 0.6241454330774656;
    msg.z_units = 147U;
    msg.speed = 0.5346402903172527;
    msg.speed_units = 190U;
    msg.duration = 38596U;
    msg.radius = 0.7950826301065864;
    msg.flags = 95U;
    msg.custom.assign("CUDNMTHKZEZHSKUXOJKOSWQHM");

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
    msg.setTimeStamp(0.21492435403039956);
    msg.setSource(50643U);
    msg.setSourceEntity(101U);
    msg.setDestination(10827U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("AYQELANHDNQTZBOCPIMNKIKLFOVOCRQZLGXHRVDDJDGQGBDLWQJTTOGUWD");

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
    msg.setTimeStamp(0.9624111507533213);
    msg.setSource(13571U);
    msg.setSourceEntity(7U);
    msg.setDestination(34046U);
    msg.setDestinationEntity(187U);
    msg.custom.assign("SRUMYLVTANEOFYBSVOOEUPKFUUMMJRQPQTPDMVTNIBGYBNLHVMAZSKNLYKERSZILGQHX");

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
    msg.setTimeStamp(0.9161872370985089);
    msg.setSource(13042U);
    msg.setSourceEntity(3U);
    msg.setDestination(61437U);
    msg.setDestinationEntity(77U);
    msg.custom.assign("PNFUPIUUOTKBBYXOYVKFIFQJMCQBLHXTKAXPZRWAFCJRKLDWKKIOMLFEVEJRVDCSRPDYSJMWCYHSOHVHUNDERWANYTDSZLQDLKDGNHSLJKCARMBVPVNWXAGNAEMGCHWBCWRSUFQPCWNNOSZQIDPUYKVDVOGBDNFUEGFNXH");

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
    msg.setTimeStamp(0.5269854222202535);
    msg.setSource(21895U);
    msg.setSourceEntity(55U);
    msg.setDestination(11131U);
    msg.setDestinationEntity(25U);
    msg.timeout = 2911U;
    msg.lat = 0.004851088160261363;
    msg.lon = 0.8546346623104145;
    msg.z = 0.40374600340133937;
    msg.z_units = 164U;
    msg.duration = 44266U;
    msg.speed = 0.09105401599115681;
    msg.speed_units = 28U;
    msg.type = 224U;
    msg.radius = 0.22163442593910365;
    msg.length = 0.026029937895658106;
    msg.bearing = 0.6683722159796465;
    msg.direction = 7U;
    msg.custom.assign("GYLAJYRJKJMMLVHMXMJGQAPFXNVEBDHPYVNMIKTGUWTEUPSZDJDUYZYSOFCVCJBATGOERHAYTEMWWLIDOVSMSYBATYZEBOPHVCBANNGSEKIQOFKQPGMXNXLXTHEINJGHIIEDURTCRWWOAFWCGDQKSQHLJBOQIOFYTHZWEXLGXVSLLHTCXFWBQRCKVFDRRKPCDWFZENUOFNRZBQOUJKXUKXUZNCZSPAQIMRVTMYARSKNDIJUPUDGLZACWPFB");

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
    msg.setTimeStamp(0.6116447444447554);
    msg.setSource(39379U);
    msg.setSourceEntity(137U);
    msg.setDestination(58266U);
    msg.setDestinationEntity(120U);
    msg.timeout = 36404U;
    msg.lat = 0.06904995061685104;
    msg.lon = 0.4884408905846864;
    msg.z = 0.6410022767316795;
    msg.z_units = 134U;
    msg.duration = 8748U;
    msg.speed = 0.2879585993547348;
    msg.speed_units = 251U;
    msg.type = 218U;
    msg.radius = 0.33596507923851393;
    msg.length = 0.3457428461972073;
    msg.bearing = 0.9967304169582433;
    msg.direction = 252U;
    msg.custom.assign("BDPFBHEBZIEASKVSTSJFMTRRPEDLLKWYQRQWGVXUGBJAWZNMLSUZHKRDATFKBVEHXIIKTYUZOPDQAIKOHLUOBLAFMERYPGCKCQHKYIMDRDGRZYNMDWPCGJGNKJXSFNVUCWTZHLOGYBUOOSSWTCCRLMNXGNXDHHQOEJZQSVDLUGYWFBEEOFXJTUWVJNPTXHKMCXVZTPCMBVNOWIANUXYVIWPQSFAXLDFBIIPGPVYQCJLHAMC");

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
    msg.setTimeStamp(0.26366079837776213);
    msg.setSource(16805U);
    msg.setSourceEntity(183U);
    msg.setDestination(15741U);
    msg.setDestinationEntity(145U);
    msg.timeout = 10171U;
    msg.lat = 0.32490591699686433;
    msg.lon = 0.8611983849882042;
    msg.z = 0.00792530411595993;
    msg.z_units = 142U;
    msg.duration = 5452U;
    msg.speed = 0.35646125750379154;
    msg.speed_units = 4U;
    msg.type = 14U;
    msg.radius = 0.4659199385412015;
    msg.length = 0.056014246004804535;
    msg.bearing = 0.155077603705425;
    msg.direction = 85U;
    msg.custom.assign("YGIEKDNXVESDURWGJBVIXVJFFBHJFHMOESINKVSFIPTRCDMMNIGLHSGNIOJCEIAPEYVDAQTYSWNUIGKWUCXBZITBAHFAWEF");

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
    msg.setTimeStamp(0.7097069650312692);
    msg.setSource(24738U);
    msg.setSourceEntity(117U);
    msg.setDestination(25317U);
    msg.setDestinationEntity(213U);
    msg.duration = 57645U;
    msg.custom.assign("IPPOLPDPNTQGPDHMBTWOICRZSFIWESBMXRZWVGBYWZSLDNBKQSZAOZNGZGQIERVINSDMFHLHEWXUNYRCRDXKIYGMLXEPFTIMBHIDOPVOFNPBRARTQAQWCDVIJJZUSBAJYKGYNOUQEVAKHVNYXEECXJZCFMLFSKVQMQJBUHUJLUYVABNYZYPKDRNXLEJEIKWWMJRUFATWTXAPQHOLTLUMG");

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
    msg.setTimeStamp(0.2662594462631692);
    msg.setSource(19200U);
    msg.setSourceEntity(18U);
    msg.setDestination(15105U);
    msg.setDestinationEntity(47U);
    msg.duration = 23771U;
    msg.custom.assign("JEOZBYTXMMD");

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
    msg.setTimeStamp(0.03806881957718977);
    msg.setSource(63505U);
    msg.setSourceEntity(65U);
    msg.setDestination(39063U);
    msg.setDestinationEntity(201U);
    msg.duration = 38992U;
    msg.custom.assign("LKKPXJVHVGVSKJZQBSQYHRGOIPGDYMJBNNOIXYJMVFHDDXARAEMCVPWXRPCOTNAYKZISQFMYSJUEDQWJMXHTLQUZZRPWGZXEQCDYCONHUSESFXQVJIENAPIAPKGOHCLKYDLWQPGDKKNNMTRTCYYVBBTIBFBAOURPJUFJRFMOBYOMZDNVUMUZSC");

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
    msg.setTimeStamp(0.4813203925764554);
    msg.setSource(16113U);
    msg.setSourceEntity(236U);
    msg.setDestination(19587U);
    msg.setDestinationEntity(67U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3074182525U;
    tmp_msg_0.start_lat = 0.60266215630049;
    tmp_msg_0.start_lon = 0.9981492482025931;
    tmp_msg_0.start_z = 0.5730831600883737;
    tmp_msg_0.start_z_units = 167U;
    tmp_msg_0.end_lat = 0.33933935717057273;
    tmp_msg_0.end_lon = 0.15415897712804805;
    tmp_msg_0.end_z = 0.5680076853759941;
    tmp_msg_0.end_z_units = 227U;
    tmp_msg_0.speed = 0.6358759844675956;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.lradius = 0.0687217961620682;
    tmp_msg_0.flags = 187U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22974U;
    msg.custom.assign("FSUTKTGGLMNCHFBWPIXVOZBWKAKWSKPDMCTDSHHJRYINZJERXWFPAYNJINTIWJJDDCZFULOTUHYYSIPPAIYSWYTRLHCXDAIHXZXOQYCAMCQKEOVSZHJMGB");

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
    msg.setTimeStamp(0.9831297115577291);
    msg.setSource(12675U);
    msg.setSourceEntity(239U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(44U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.23794150943495052;
    msg.control.set(tmp_msg_0);
    msg.duration = 37987U;
    msg.custom.assign("JKZYNEYBIZTOLXIBDCYRTLMLZUTTAHQVFWHGNUELFJWSCVKYGIALKOBGSHISLUFWQNZKQACPEPQPTYNINSXTMQDUHFNDVMANRKHLCAWYBGWGJAPOMPKUUMXXBJEQZGTABVHXZMFPJOUEUDXOKIRUPIJYQFYERKTRZHNZZPFZYXSSJQVCXADDCLCSSVOCMNYGESLAES");

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
    msg.setTimeStamp(0.014654137628252961);
    msg.setSource(10173U);
    msg.setSourceEntity(45U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(152U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6717289109421748;
    msg.control.set(tmp_msg_0);
    msg.duration = 35593U;
    msg.custom.assign("NYLMHKIWAOBDZTWDRCNMQLUIVETKHBSZNLJWSWZXKYRVAFOOKXXDJGMCAWHHDHOEKLBPQARYKSMUKQBYJMBJHIIOKJMRFZGEJVOREPZPSPIUPLDCKOFANBSLWUPYTRNYTFEFIECXYCGAPXCUZGQIQCRCLDFWQMLLTUYHXNFFQUVYEVBGHZNSRBXQDNGOCITBEWJVXVJVVJWQHPADDUHPSTAAFIXSEQDSCOGX");

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
    msg.setTimeStamp(0.1545606266635754);
    msg.setSource(48083U);
    msg.setSourceEntity(112U);
    msg.setDestination(59943U);
    msg.setDestinationEntity(117U);
    msg.timeout = 32329U;
    msg.lat = 0.9110823152867806;
    msg.lon = 0.1393296926378257;
    msg.z = 0.5111073513643626;
    msg.z_units = 243U;
    msg.speed = 0.41386370389165983;
    msg.speed_units = 202U;
    msg.bearing = 0.2734716784305804;
    msg.cross_angle = 0.42987086098960414;
    msg.width = 0.6726114499383838;
    msg.length = 0.1865016985388407;
    msg.hstep = 0.30261505633424435;
    msg.coff = 233U;
    msg.alternation = 36U;
    msg.flags = 27U;
    msg.custom.assign("CEUBLRHKDYDXUBNBCIAERFPRDVLRVHAXQAEUQUUFUSIJANKZUYJXWJZFJECZVHRDIXYEGRGSOWUJRYMYHWRETFVKVXZKDZWSZQWEHPOGWLIYTTMOAIGCF");

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
    msg.setTimeStamp(0.3931378068071629);
    msg.setSource(60340U);
    msg.setSourceEntity(61U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(223U);
    msg.timeout = 61840U;
    msg.lat = 0.12462089311592706;
    msg.lon = 0.39924447870987423;
    msg.z = 0.9526512681838075;
    msg.z_units = 98U;
    msg.speed = 0.7559463124144152;
    msg.speed_units = 156U;
    msg.bearing = 0.9110952570392237;
    msg.cross_angle = 0.3011121149031838;
    msg.width = 0.4874429205538028;
    msg.length = 0.7422352963558164;
    msg.hstep = 0.9129874494026128;
    msg.coff = 216U;
    msg.alternation = 5U;
    msg.flags = 1U;
    msg.custom.assign("KBTCERAETVGJTZDANSOWDGVUI");

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
    msg.setTimeStamp(0.8560685140872412);
    msg.setSource(36699U);
    msg.setSourceEntity(135U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(176U);
    msg.timeout = 33089U;
    msg.lat = 0.47880071497334586;
    msg.lon = 0.6813162427290808;
    msg.z = 0.3015567763439154;
    msg.z_units = 148U;
    msg.speed = 0.12049829880517837;
    msg.speed_units = 27U;
    msg.bearing = 0.18217627447162232;
    msg.cross_angle = 0.07158517679838905;
    msg.width = 0.5382560321684214;
    msg.length = 0.3845976230917719;
    msg.hstep = 0.5104424837112378;
    msg.coff = 162U;
    msg.alternation = 81U;
    msg.flags = 250U;
    msg.custom.assign("FIWAKOPWMRIBOZZDAOSLYVEOEWITBJMFXKYDYBRXKDHAFMBJTLXHQXSFZEEPGMLHNWFVVSATNXAEOUTGFCAPNCZUDDKRYCLYPTLRKCGSHQUQQHKKEBUOBKKFM");

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
    msg.setTimeStamp(0.0010160224611837076);
    msg.setSource(31459U);
    msg.setSourceEntity(212U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(105U);
    msg.timeout = 11347U;
    msg.lat = 0.8536173832661609;
    msg.lon = 0.19499615967918404;
    msg.z = 0.7017293831407904;
    msg.z_units = 117U;
    msg.speed = 0.5765797700237197;
    msg.speed_units = 247U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7777867971212779;
    tmp_msg_0.y = 0.08130642685131528;
    tmp_msg_0.z = 0.6010295182651023;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ULZSUYTMGVWHKSVPCWDDFRHXOGTSXIUGJNWEKOYEHDHKLOPKBFUDQQMKOZNCMOPLYJSYYNAWRLIVXGZCQRIAWIJQXHYPDNLAQIGBEWRUMYAPGAQOQFTXZSXOSTFVSRMIVZNCQKCVNQE");

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
    msg.setTimeStamp(0.3087292859581485);
    msg.setSource(31744U);
    msg.setSourceEntity(94U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(8U);
    msg.timeout = 29384U;
    msg.lat = 0.8217143293312563;
    msg.lon = 0.9606227177267885;
    msg.z = 0.5546751837833102;
    msg.z_units = 168U;
    msg.speed = 0.8024026418366351;
    msg.speed_units = 184U;
    msg.custom.assign("KMYXFJYDDVVBATYBRQQFCSDPGCBWBDSHBACXZEOPJEYTEIQTFYXJXJDLPOILAZIFAOPKJRSNAPOZGDRXWNIGPKHWRYJESTUCZLCIVFYFOTVYVOHZBEERLILMSVUXHVEJUGKDCNCHIQSUZDASZWKRNUEFKNJNWMWPHMPMLUWTMCOOHF");

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
    msg.setTimeStamp(0.5770703601404313);
    msg.setSource(20012U);
    msg.setSourceEntity(191U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(127U);
    msg.timeout = 7841U;
    msg.lat = 0.19516519244541264;
    msg.lon = 0.9437690996765584;
    msg.z = 0.9709527633561179;
    msg.z_units = 74U;
    msg.speed = 0.02143637122655373;
    msg.speed_units = 209U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9774533474960755;
    tmp_msg_0.y = 0.3290241292607161;
    tmp_msg_0.z = 0.08012597645900887;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BFWQQIEHERENOGATEXKUHIPLRXTSJBJMZDBFVWFOQJPBFVMWTZRWOLZCEUOBJCLZQGIUPSJCZHVMHQOGFLKIAYIAOUTIZCWKNSKXKOCULXKNHYYHWWLERPCSYJERXTGMKDONOEFKUPYHEDATJIYUMLHAMUPQDQZGDPIMJSWYASMTSKS");

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
    msg.setTimeStamp(0.031249005339258007);
    msg.setSource(52061U);
    msg.setSourceEntity(28U);
    msg.setDestination(4496U);
    msg.setDestinationEntity(57U);
    msg.x = 0.10445013062388064;
    msg.y = 0.05993893940459705;
    msg.z = 0.37689670862713687;

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
    msg.setTimeStamp(0.6994210935653977);
    msg.setSource(62892U);
    msg.setSourceEntity(248U);
    msg.setDestination(46478U);
    msg.setDestinationEntity(215U);
    msg.x = 0.7214070408679168;
    msg.y = 0.7084373096547223;
    msg.z = 0.6607515099168786;

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
    msg.setTimeStamp(0.875052738247608);
    msg.setSource(27781U);
    msg.setSourceEntity(144U);
    msg.setDestination(58186U);
    msg.setDestinationEntity(43U);
    msg.x = 0.7846626004461448;
    msg.y = 0.4705835797335105;
    msg.z = 0.8467937342775368;

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
    msg.setTimeStamp(0.844097510861945);
    msg.setSource(41308U);
    msg.setSourceEntity(132U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(154U);
    msg.timeout = 28323U;
    msg.lat = 0.7212793805082258;
    msg.lon = 0.10040181990544894;
    msg.z = 0.06714671865757249;
    msg.z_units = 71U;
    msg.amplitude = 0.7349102895594654;
    msg.pitch = 0.35070214474851347;
    msg.speed = 0.6832122258852434;
    msg.speed_units = 48U;
    msg.custom.assign("MTVUVAOJNGXOWETPCVFJATDFUPKLGHMFJAXMEQGHBRKWSJHBNNVMRKWAWUYOSHIZDRZLRYRAOZVXMQGXKYNTVUHCORPISQOTSADWBLMDXIZFCEROWUKJPLJFDHMUZQXWQFSVPGFRTHHWPGSSQEBXXE");

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
    msg.setTimeStamp(0.9414859647020967);
    msg.setSource(52764U);
    msg.setSourceEntity(61U);
    msg.setDestination(6395U);
    msg.setDestinationEntity(223U);
    msg.timeout = 35846U;
    msg.lat = 0.8396466487946962;
    msg.lon = 0.3525984446185134;
    msg.z = 0.09250480101594616;
    msg.z_units = 78U;
    msg.amplitude = 0.5317580947665256;
    msg.pitch = 0.29470568183005663;
    msg.speed = 0.06731966772816178;
    msg.speed_units = 207U;
    msg.custom.assign("XZFKRKTHOSUZNEJECADQMJOIEKIWMCPFMHUMHVYYRQBUFVBLSNNPMTGVRLTUXFVVOESRJMLMIGZSGJIIVQANXZEQGPVDDFXJBGJVZNGHWRJESRBHPNGDHNEKVSKSCOURAPGKMDWSMCIXXQXCDZYA");

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
    msg.setTimeStamp(0.5415923579617361);
    msg.setSource(5207U);
    msg.setSourceEntity(250U);
    msg.setDestination(16442U);
    msg.setDestinationEntity(87U);
    msg.timeout = 52267U;
    msg.lat = 0.865096886619447;
    msg.lon = 0.8620840514017891;
    msg.z = 0.9250250406496174;
    msg.z_units = 10U;
    msg.amplitude = 0.9361389819859374;
    msg.pitch = 0.7904940012153386;
    msg.speed = 0.9680554608750161;
    msg.speed_units = 156U;
    msg.custom.assign("MZMTDOOUHWNLBPESVOYUEIXCLQNFVLEBSVDRKQEHPSZLFWJWCTKPAUBBOCVRWGFQLJNHZSTDHYTKRHUMIMQEOPYJSUCXVSYCPBXAPWIYXCQEGMFBGJXIFCOFVKFUDMAIHZUAJCEQKRNPYZZLGLONISRDJTBFTQGZEQLTCHAOKSYWLWDZWHJAOXTDTXXGIARRMHGQZYSMMNVEQIANRPCAPOHXFGNFEIDJBUG");

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
    msg.setTimeStamp(0.032075874403000304);
    msg.setSource(49762U);
    msg.setSourceEntity(140U);
    msg.setDestination(29127U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.13281753229640736);
    msg.setSource(21415U);
    msg.setSourceEntity(70U);
    msg.setDestination(27241U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.49505829640706833);
    msg.setSource(24149U);
    msg.setSourceEntity(218U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.7880734531373933);
    msg.setSource(21138U);
    msg.setSourceEntity(72U);
    msg.setDestination(20175U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.36968635331787003;
    msg.lon = 0.5217154529757785;
    msg.z = 0.24393297516339818;
    msg.z_units = 160U;
    msg.radius = 0.4860271484970583;
    msg.duration = 42951U;
    msg.speed = 0.680971292532729;
    msg.speed_units = 219U;
    msg.custom.assign("ESRZPSCFNWKMGIDIWKRTVNDGVTKBBXQJXTLYHEISQDSAAGUUYYQPQKZETPUAOMNHHINDKPBSRXHGMKTBKXXCUFQRRZWQFYMWCLLVLJGDLXZZOGORQBEBANMENUBDIXAIYAFGPYCHHLJESRWUPWAMFEJCGGPXEZMEFOPHBLIKXINQJBMLDRRKJLSCMFYQAKFZWNNVUDQOTVFOOVNIHFPBRHVWHJTYOMWIUVV");

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
    msg.setTimeStamp(0.9253576652193796);
    msg.setSource(56539U);
    msg.setSourceEntity(61U);
    msg.setDestination(53892U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.14282752185493086;
    msg.lon = 0.8683433238521522;
    msg.z = 0.700497297554105;
    msg.z_units = 112U;
    msg.radius = 0.15187615827565681;
    msg.duration = 2912U;
    msg.speed = 0.8016941359349442;
    msg.speed_units = 39U;
    msg.custom.assign("CRBTZLBCPTHJMXBWFTKMMESSQSRBBCBOGFZWKONDMTWSYJILOABFFSPDTWRZLYPKZNKXEWLGUVCUEOMRIAQVKQRJZGUCZHNYTE");

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
    msg.setTimeStamp(0.2059698887179241);
    msg.setSource(26263U);
    msg.setSourceEntity(12U);
    msg.setDestination(37684U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.8152551000979358;
    msg.lon = 0.4940809653420529;
    msg.z = 0.18305196839538784;
    msg.z_units = 230U;
    msg.radius = 0.6140757509079083;
    msg.duration = 62651U;
    msg.speed = 0.29100659515219796;
    msg.speed_units = 225U;
    msg.custom.assign("DEFYUMXRAYJQLYDONMSCXYVRJHMRDVWXTHZVZEGFVXSYHQJMSWQIIDGEHGTCMQOUVFVBUOJMJPVLRNGXUKJKRFEUJHYBBSQGIZZUWFYAWSUNNLCLCMGTZDOEASXBXUCOROAZAAHPKBSKDAETYLXRKKPNPKCMJHQGXECDSMGXITYFNKYBONDTTAHIGEPQULVTWBBCZJNPQKIRBWLFWQ");

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
    msg.setTimeStamp(0.47855107247483397);
    msg.setSource(31159U);
    msg.setSourceEntity(225U);
    msg.setDestination(57128U);
    msg.setDestinationEntity(141U);
    msg.timeout = 30047U;
    msg.flags = 174U;
    msg.lat = 0.3594563832833395;
    msg.lon = 0.7833399056537765;
    msg.start_z = 0.37929842938090286;
    msg.start_z_units = 143U;
    msg.end_z = 0.09591937031464859;
    msg.end_z_units = 235U;
    msg.radius = 0.7696954267324723;
    msg.speed = 0.2909279396941181;
    msg.speed_units = 112U;
    msg.custom.assign("YICCCNEWWLRIIBMBJMQGWOVHXSVSDSRQTMVHALKLXGFEBMHOONNGTOKUCGFHXEPFIRQXDUZZATKXDDJYNUSTZGTQRUOCMZVAWPBZJBUKJCEWSZDJWYVNDACLWULXLASALYQSOWNRKIWNJTUVRYADGIQGBHLBKCFYFKFRYOVFBIEXPDGSTXXHMQVPHAIPDUIPZE");

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
    msg.setTimeStamp(0.7264751507514488);
    msg.setSource(10174U);
    msg.setSourceEntity(32U);
    msg.setDestination(27880U);
    msg.setDestinationEntity(53U);
    msg.timeout = 41269U;
    msg.flags = 66U;
    msg.lat = 0.5119385399621901;
    msg.lon = 0.7338100614189742;
    msg.start_z = 0.16951292653690075;
    msg.start_z_units = 24U;
    msg.end_z = 0.8522641803840516;
    msg.end_z_units = 131U;
    msg.radius = 0.5380320246854328;
    msg.speed = 0.046297523861651424;
    msg.speed_units = 203U;
    msg.custom.assign("XNJTACYYJIFGAKXCVEPLIXMDUOAUCYVKQFRZXKFFHCLWASVRYUWMBPFBESLIZLQTQQJGPYKHXXGHHWXFKNTQKNZRSVMAMBWKRTSBSAGEMJSCTZMORLZEDCHSGQKXALJMPBOIPLVNBBRIUVCWGRTOFYYOWISPUXEYRONHNGUUJKBTDAOCVHMMWDRPQGPTKDWEDDDYFDUQEJJQWIPBJYRAFUUN");

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
    msg.setTimeStamp(0.17255058535254864);
    msg.setSource(60436U);
    msg.setSourceEntity(174U);
    msg.setDestination(64020U);
    msg.setDestinationEntity(165U);
    msg.timeout = 60848U;
    msg.flags = 164U;
    msg.lat = 0.6625927829318452;
    msg.lon = 0.8594665425002569;
    msg.start_z = 0.9483930434831687;
    msg.start_z_units = 12U;
    msg.end_z = 0.5070840944612267;
    msg.end_z_units = 251U;
    msg.radius = 0.9598729858202661;
    msg.speed = 0.6740681496173101;
    msg.speed_units = 74U;
    msg.custom.assign("PAFAPZMMUDBUEGYBZYSTEMKKKEWRIGQCXIQIW");

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
    msg.setTimeStamp(0.5796194575658979);
    msg.setSource(32590U);
    msg.setSourceEntity(111U);
    msg.setDestination(15726U);
    msg.setDestinationEntity(160U);
    msg.timeout = 15281U;
    msg.lat = 0.5037027062781524;
    msg.lon = 0.28187347707836397;
    msg.z = 0.24524800373821143;
    msg.z_units = 151U;
    msg.speed = 0.14317116230522586;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2153415094518064;
    tmp_msg_0.y = 0.49151185387607543;
    tmp_msg_0.z = 0.2697688328351543;
    tmp_msg_0.t = 0.6907215430701128;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AHQTXGSFYUQVUKVFDLSFNYFIEPJVCCJNNGKIAHCHUNWYRRZCDSDROETOUZPGLQOYFZNZINUBNECSJTKWGUWQKCKLETSOLFYGKGZMMZLFVXRKIPAROCIMVADTHOEEEKHXXPTBBOSBIIQBMEJXMLVJPQWIWJPNANBUBLSWPRGXHIGWCHFVUQMDPYGXCDSRODRTORJDTAYNYBPYMSZVQXTM");

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
    msg.setTimeStamp(0.40377067578760795);
    msg.setSource(46086U);
    msg.setSourceEntity(237U);
    msg.setDestination(5229U);
    msg.setDestinationEntity(68U);
    msg.timeout = 61514U;
    msg.lat = 0.6699799644624549;
    msg.lon = 0.5612040575161871;
    msg.z = 0.641124685009489;
    msg.z_units = 142U;
    msg.speed = 0.1400689821602048;
    msg.speed_units = 50U;
    msg.custom.assign("IRNHGXFOJYQBFZITYMKSEPGCQUPXVTJZPLHBKABYUKWXSYCYOKQHJRUHQKGSBOMPUCBPQFCCDYNZKVDFUNHVTSXFMVQALYITXBBAIPCDZWVJTIJNRNTRKLZNGADKOVWWRNIVTT");

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
    msg.setTimeStamp(0.18607812169339266);
    msg.setSource(60403U);
    msg.setSourceEntity(6U);
    msg.setDestination(1150U);
    msg.setDestinationEntity(132U);
    msg.timeout = 49132U;
    msg.lat = 0.5616032682126063;
    msg.lon = 0.998908387679083;
    msg.z = 0.7852508599599709;
    msg.z_units = 119U;
    msg.speed = 0.10898419435192241;
    msg.speed_units = 55U;
    msg.custom.assign("ASXUPNGHCVGBVOJDFSVKMONLNHKTUHHIFFIFINYWTCODZCYYMCQLLFRQXNBSYSJVWLHAQEHRUSXOQARMGFMBJJ");

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
    msg.setTimeStamp(0.03902263711750609);
    msg.setSource(53305U);
    msg.setSourceEntity(40U);
    msg.setDestination(55005U);
    msg.setDestinationEntity(201U);
    msg.x = 0.23662739651675457;
    msg.y = 0.6191002011299619;
    msg.z = 0.02300011314851924;
    msg.t = 0.786747778155657;

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
    msg.setTimeStamp(0.20822752088684715);
    msg.setSource(35428U);
    msg.setSourceEntity(234U);
    msg.setDestination(40425U);
    msg.setDestinationEntity(34U);
    msg.x = 0.41605271939583244;
    msg.y = 0.5779957085664212;
    msg.z = 0.8678537068362103;
    msg.t = 0.8231138034986267;

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
    msg.setTimeStamp(0.5454335407692756);
    msg.setSource(52589U);
    msg.setSourceEntity(120U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(21U);
    msg.x = 0.04945753980957612;
    msg.y = 0.674519602444529;
    msg.z = 0.5361327428237961;
    msg.t = 0.025997947873755978;

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
    msg.setTimeStamp(0.6018209853498233);
    msg.setSource(24543U);
    msg.setSourceEntity(217U);
    msg.setDestination(3291U);
    msg.setDestinationEntity(154U);
    msg.timeout = 41630U;
    msg.name.assign("MVAGOBPTRPHMBGHIDFVZTCVCELUFAJEXATASGEMPTYMCRACVXURJW");
    msg.custom.assign("HLZDNFJINMJBSCUVOWCWAKWRMAIVOLGTLDEPWPDPBHYWDOSEQOEBFFBIXSEJBCKCHYMPSRQAMMFPQTISUAEKLCGTQMSXUBQYRLSOZTLEDXZIVKUYKPRJZVIFWQADHZHJDLDAKXSJCUTRNEYDLXTUTRTFPUIOJWGYNPEZGKVVVPXFRYNHEQQIHZYRUKQNQYRGJLNOKFMXOHUZMDBNHZX");

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
    msg.setTimeStamp(0.38635668383380584);
    msg.setSource(37775U);
    msg.setSourceEntity(2U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(67U);
    msg.timeout = 60428U;
    msg.name.assign("ZRQLABKHDDQPQKYQAUDPEUUFHWTLIOFOEQAKPQYMHTTLCZTIWJXBBTZNGNYWAIERGOXUJOZNAKRJHPRUMLCPPDSKZIDTFJYWSHJVFBVSHMVIFXLWBSXZXJGMCLWJUKAAFLLOFJCQIUPGIDKVJRIBTITKSBZCAECYCTARTGVXBNLXKNDXNUSIYODEHXGWHYVXGJQVOEMCBVKWFPEQQEVBLYREMNMUPSGWFSZVRNWYRYCPO");
    msg.custom.assign("UWHVESEHJQDMFYXDCLASUPYQBUBATNKUNPJJCVRVMGSZIFXRVIGUEXMIMKUBDFPKOMRJJAIIXQAVCEFWTJNGNXKDOZCAQTGPSYXHKGOIRZVMOVCLVAOX");

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
    msg.setTimeStamp(0.800299690726502);
    msg.setSource(22554U);
    msg.setSourceEntity(186U);
    msg.setDestination(1035U);
    msg.setDestinationEntity(25U);
    msg.timeout = 63491U;
    msg.name.assign("FCZECXZDELTXPSCLMDCSPRPADLMWTHLQUVUGMNHOJZLJPZOOWHIDDCYEXUAEMSOJMHEPTJCCJVKXKDSYABVRFNNHJOQZJXLPAIGSSUVXULOAJNKBZIAKRGQVSQFAJTLVKRREHTBOYWFMIQYQTHVUFHGMIQYCNMXIBQBY");
    msg.custom.assign("HGQKAULKWFYUZQJGJATQTSTRNQZCGRVWRCLAXXVNURGDMOEOYYIKHOFSSZLSHYINBNYWHCLZDGOBMPKIBSDVGYAW");

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
    msg.setTimeStamp(0.9565048691517222);
    msg.setSource(42189U);
    msg.setSourceEntity(160U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.618774237207959;
    msg.lon = 0.28138449333489424;
    msg.z = 0.14329999902239177;
    msg.z_units = 150U;
    msg.speed = 0.2272316988460048;
    msg.speed_units = 115U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47357U;
    tmp_msg_0.off_x = 0.6745842413739006;
    tmp_msg_0.off_y = 0.4404177364771862;
    tmp_msg_0.off_z = 0.3344877237670105;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.22532799213329036;
    msg.custom.assign("UYPAYTEXTZAPFVMYROKRPNWHAFWOXIKTNSHEKLA");

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
    msg.setTimeStamp(0.8240546224348465);
    msg.setSource(41457U);
    msg.setSourceEntity(56U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.9900603256330569;
    msg.lon = 0.40031381377187947;
    msg.z = 0.36949451081930296;
    msg.z_units = 229U;
    msg.speed = 0.5402252197027337;
    msg.speed_units = 131U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55465U;
    tmp_msg_0.off_x = 0.9295811635198921;
    tmp_msg_0.off_y = 0.8066971802798466;
    tmp_msg_0.off_z = 0.2299335244011711;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4686356748760555;
    msg.custom.assign("YPRFFAVNQBJUYKZSZDXMGKPQDSFXBZHDSTMLMQNYPRCGBODJPEVOMCLRAOJDHQCDAJGKFONTBAREVIFLAZUMORRUGFLFRZECCNPWWQRYYUIVNKHKGPNSZUUIVXPZWVBTKTGSCTITCWCYHBASBUNUNGUPOTLVBOQNRHSHIQJLLXXLKXJZWETQSIEULPLWMQBIJPGIEEEGYCQWFHXSRAODFEEXJNGHOXZVIMHMBMWYCAKTKAMIDZJXS");

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
    msg.setTimeStamp(0.772803982391437);
    msg.setSource(4381U);
    msg.setSourceEntity(239U);
    msg.setDestination(33034U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.5222087050453896;
    msg.lon = 0.24659007077565231;
    msg.z = 0.558862023310694;
    msg.z_units = 95U;
    msg.speed = 0.37631347954383587;
    msg.speed_units = 185U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.12093913560571079;
    tmp_msg_0.y = 0.262839431966307;
    tmp_msg_0.z = 0.6796922799386177;
    tmp_msg_0.t = 0.9909866192467961;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 34925U;
    tmp_msg_1.off_x = 0.6863098245869036;
    tmp_msg_1.off_y = 0.4492362792948388;
    tmp_msg_1.off_z = 0.8014723913653446;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8910178903161211;
    msg.custom.assign("JCFNESUHZQUFX");

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
    msg.setTimeStamp(0.390568042041761);
    msg.setSource(60311U);
    msg.setSourceEntity(15U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(214U);
    msg.vid = 30995U;
    msg.off_x = 0.1873463293022698;
    msg.off_y = 0.7768019319123968;
    msg.off_z = 0.12313503022189909;

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
    msg.setTimeStamp(0.4350908537821705);
    msg.setSource(62497U);
    msg.setSourceEntity(25U);
    msg.setDestination(56341U);
    msg.setDestinationEntity(18U);
    msg.vid = 27590U;
    msg.off_x = 0.9978518873304733;
    msg.off_y = 0.24907312649585878;
    msg.off_z = 0.0659420050589199;

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
    msg.setTimeStamp(0.5259945747769433);
    msg.setSource(52409U);
    msg.setSourceEntity(219U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(205U);
    msg.vid = 63729U;
    msg.off_x = 0.33450295465717217;
    msg.off_y = 0.9298179826213596;
    msg.off_z = 0.7732008957440877;

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
    msg.setTimeStamp(0.2817900928730589);
    msg.setSource(59084U);
    msg.setSourceEntity(170U);
    msg.setDestination(61519U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.7461251349453532);
    msg.setSource(23015U);
    msg.setSourceEntity(74U);
    msg.setDestination(49662U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.5227311796393876);
    msg.setSource(49621U);
    msg.setSourceEntity(28U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.7377807758811251);
    msg.setSource(40946U);
    msg.setSourceEntity(45U);
    msg.setDestination(41098U);
    msg.setDestinationEntity(9U);
    msg.mid = 59319U;

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
    msg.setTimeStamp(0.0008895773551570452);
    msg.setSource(7668U);
    msg.setSourceEntity(228U);
    msg.setDestination(61178U);
    msg.setDestinationEntity(43U);
    msg.mid = 6946U;

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
    msg.setTimeStamp(0.9015534534839272);
    msg.setSource(28345U);
    msg.setSourceEntity(51U);
    msg.setDestination(60244U);
    msg.setDestinationEntity(79U);
    msg.mid = 54803U;

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
    msg.setTimeStamp(0.050465378680511375);
    msg.setSource(30303U);
    msg.setSourceEntity(186U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(136U);
    msg.state = 163U;
    msg.eta = 43822U;
    msg.info.assign("DQUMLDCMQJVSDLKUIXMSISQELPWTGQAVHBZQFWCHHVYMEQJZDDGNFLRKVRISTIZAHXRNUWURFTLHSKXBVDPEWCDWFNASRXYGMEJWBFALOOQLPVXCRMHYOX");

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
    msg.setTimeStamp(0.0361793711063233);
    msg.setSource(44797U);
    msg.setSourceEntity(169U);
    msg.setDestination(13442U);
    msg.setDestinationEntity(218U);
    msg.state = 163U;
    msg.eta = 64426U;
    msg.info.assign("GCJNGCMLRCJVFMTVCDIWUAZUTMLDZTZHIPEQATIGOZOYNYNMLOMXQHIBCOPAUOKDGABXZPARZHHDHMFSTLYIYFHREVYAKMNRVHRDCWGSWSMEPXZSABXULRBJTFPWKVREFIQCKUVAVFNIFFZQNPYWEQTEGXCUSBRIDWHLDKJUUKSOPHJFSRGEGDYKBJNAPTYSKUQXVFIPJOJEKBQNYCBWWWODKQMULGECLPJQBXBO");

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
    msg.setTimeStamp(0.12398535969777291);
    msg.setSource(8301U);
    msg.setSourceEntity(78U);
    msg.setDestination(42818U);
    msg.setDestinationEntity(71U);
    msg.state = 245U;
    msg.eta = 14955U;
    msg.info.assign("NWKTGJQSTZHP");

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
    msg.setTimeStamp(0.25447720412741326);
    msg.setSource(61386U);
    msg.setSourceEntity(101U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(81U);
    msg.system = 16925U;
    msg.duration = 39542U;
    msg.speed = 0.5936816765176125;
    msg.speed_units = 42U;
    msg.x = 0.2529151373451066;
    msg.y = 0.7682855786102185;
    msg.z = 0.48180682531339714;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.8926150308663564);
    msg.setSource(38362U);
    msg.setSourceEntity(207U);
    msg.setDestination(60614U);
    msg.setDestinationEntity(112U);
    msg.system = 43779U;
    msg.duration = 11049U;
    msg.speed = 0.3470665685245814;
    msg.speed_units = 46U;
    msg.x = 0.47677228430072305;
    msg.y = 0.32375648421409353;
    msg.z = 0.273926477572509;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.7143330347001122);
    msg.setSource(34893U);
    msg.setSourceEntity(95U);
    msg.setDestination(63397U);
    msg.setDestinationEntity(119U);
    msg.system = 22152U;
    msg.duration = 15381U;
    msg.speed = 0.4075202635264793;
    msg.speed_units = 45U;
    msg.x = 0.004432021558755439;
    msg.y = 0.8188407088733608;
    msg.z = 0.1673941977507183;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.8296607778505244);
    msg.setSource(53695U);
    msg.setSourceEntity(120U);
    msg.setDestination(11038U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.8710811831450033;
    msg.lon = 0.7491282561730882;
    msg.speed = 0.26438580739050466;
    msg.speed_units = 234U;
    msg.duration = 49925U;
    msg.sys_a = 21905U;
    msg.sys_b = 10661U;
    msg.move_threshold = 0.21139909491499564;

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
    msg.setTimeStamp(0.17105431418387762);
    msg.setSource(18184U);
    msg.setSourceEntity(199U);
    msg.setDestination(8514U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.7123476181798839;
    msg.lon = 0.23761817318758416;
    msg.speed = 0.5953998184896963;
    msg.speed_units = 56U;
    msg.duration = 63199U;
    msg.sys_a = 48569U;
    msg.sys_b = 30059U;
    msg.move_threshold = 0.9748129918995687;

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
    msg.setTimeStamp(0.036609630605930366);
    msg.setSource(4274U);
    msg.setSourceEntity(182U);
    msg.setDestination(18820U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.092344465221743;
    msg.lon = 0.5273835772645848;
    msg.speed = 0.7747753846307966;
    msg.speed_units = 229U;
    msg.duration = 60240U;
    msg.sys_a = 30909U;
    msg.sys_b = 45547U;
    msg.move_threshold = 0.4538112912737391;

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
    msg.setTimeStamp(0.008203162488756743);
    msg.setSource(55858U);
    msg.setSourceEntity(87U);
    msg.setDestination(12223U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.4459630385883211;
    msg.lon = 0.9515907046523002;
    msg.z = 0.8141849820160507;
    msg.z_units = 155U;
    msg.speed = 0.5918587618391493;
    msg.speed_units = 34U;
    msg.custom.assign("QQJZHMSFNUVYBCNOGSKTDSXJKRZXGPSDAXVPWPABTUUJVTZHLEOIKPHIMMXI");

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
    msg.setTimeStamp(0.21125366884350005);
    msg.setSource(58804U);
    msg.setSourceEntity(229U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.21422530515745608;
    msg.lon = 0.7639386117495267;
    msg.z = 0.812205009268129;
    msg.z_units = 190U;
    msg.speed = 0.7179984640858711;
    msg.speed_units = 156U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7700001315099948;
    tmp_msg_0.lon = 0.479442430088181;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SRIDXPZJQIALEPSVUUACBJRHFXQEKCNHWBJHTEBFUJYZIHPJNKSXWORGGGICKYUZMGETMMJDVQTKFJVNWAQOZGLIQPLSTLGHCPMYIWELBDULOKQMPUZWJPGBBTDRVUGDAPZNIWVNOHLECGZVYWFIMESYDAXOKLUTOWRICOQOVHYTTNYTEMYEMSAFBXDQXSTKHVKDYKBYUPCLFJILG");

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
    msg.setTimeStamp(0.4659871471287589);
    msg.setSource(62467U);
    msg.setSourceEntity(85U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.4709211517113706;
    msg.lon = 0.7685485819528161;
    msg.z = 0.16369714427520543;
    msg.z_units = 177U;
    msg.speed = 0.242672435847765;
    msg.speed_units = 121U;
    msg.custom.assign("LFTBNRHKECCGYAULORPZGFOMGOCKUHQJZITAWQLBPIYBXGEFSWIXWDCOPBSDIZPTJONGBPQPKTRTDPAFJZMYTCBCDXINBLMVMLSIUVZBDBEJMPZFXQKYDOSHXNSJQZ");

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
    msg.setTimeStamp(0.5519448231469588);
    msg.setSource(58524U);
    msg.setSourceEntity(183U);
    msg.setDestination(32516U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.5733111673366234;
    msg.lon = 0.7126709069874253;

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
    msg.setTimeStamp(0.8044347672386722);
    msg.setSource(729U);
    msg.setSourceEntity(128U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.19497718302009226;
    msg.lon = 0.44310739426306156;

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
    msg.setTimeStamp(0.9016830954776536);
    msg.setSource(1567U);
    msg.setSourceEntity(10U);
    msg.setDestination(27705U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.6739114761491846;
    msg.lon = 0.1750895709398077;

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
    msg.setTimeStamp(0.6148888193754546);
    msg.setSource(8775U);
    msg.setSourceEntity(225U);
    msg.setDestination(53670U);
    msg.setDestinationEntity(34U);
    msg.timeout = 65138U;
    msg.lat = 0.4477206046210216;
    msg.lon = 0.6356042406962249;
    msg.z = 0.7984818999675803;
    msg.z_units = 16U;
    msg.pitch = 0.33388974851354125;
    msg.amplitude = 0.035237252855373935;
    msg.duration = 17726U;
    msg.speed = 0.899316449740319;
    msg.speed_units = 127U;
    msg.radius = 0.42493388314353564;
    msg.direction = 61U;
    msg.custom.assign("PZVCRJLMEILXMFSZTMWVBYYEQIYEOCFASXDDFDBWJXCINOAGBKTAJZVSJYRLNDTBEEPBVDOICCRMYWWFLJKSKUZHUNGAIKYHDMBYBZPJNNAXUHMJVXPEFSTLCXRCYDKUTTENPPUGOAAOZHZTQIEIPPHALKDSOJUKZEZQRCTKWGVGADIGLHGFONQEXDTRRIBGWCFURLNHUKRRMQUCSSGXWUXYNBQKQVFWSHNHYIAJGJHOZFL");

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
    msg.setTimeStamp(0.5338229709603927);
    msg.setSource(40203U);
    msg.setSourceEntity(249U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(233U);
    msg.timeout = 57666U;
    msg.lat = 0.04987436008519608;
    msg.lon = 0.11705741088016719;
    msg.z = 0.4327082387157324;
    msg.z_units = 133U;
    msg.pitch = 0.027524742702841665;
    msg.amplitude = 0.11727058040086058;
    msg.duration = 24745U;
    msg.speed = 0.5423404178144869;
    msg.speed_units = 253U;
    msg.radius = 0.1144395562545617;
    msg.direction = 241U;
    msg.custom.assign("BFISTUCOWGRLLWMGSSUAJIYXDXKPKAQEVWUCDZQPNEVLVCYEPYSKULTNOWMKMTJEPOYQOZCJJKTTYSKDADNKDYQICBHSFPOVRGEIRWRJYYGZAFVX");

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
    msg.setTimeStamp(0.03465707843199983);
    msg.setSource(27594U);
    msg.setSourceEntity(57U);
    msg.setDestination(46564U);
    msg.setDestinationEntity(34U);
    msg.timeout = 39661U;
    msg.lat = 0.6552273285630771;
    msg.lon = 0.6544059053050214;
    msg.z = 0.9636842402464162;
    msg.z_units = 61U;
    msg.pitch = 0.46873079941970985;
    msg.amplitude = 0.36324931663558124;
    msg.duration = 63866U;
    msg.speed = 0.9567777586639609;
    msg.speed_units = 224U;
    msg.radius = 0.18212249752782372;
    msg.direction = 184U;
    msg.custom.assign("WEYUACHETUTCOZIXAUIYYHBEBRTFYCQVIMOLNDWGZZLGJJCMGJJIHIYEBLXRT");

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
    msg.setTimeStamp(0.5201343278479506);
    msg.setSource(45202U);
    msg.setSourceEntity(242U);
    msg.setDestination(40210U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("PGFJBJCWDOKRIMLIPSVRZRNWVRYQJMNQJIHNDHBAUPWWMOXIQKYGMZVCZDGKYMRXFAXWBMQERPRWUAYRTVGLOXVDGHIBSBMNFKSCAOZFNNENUA");
    msg.reference_frame = 29U;
    msg.custom.assign("COQYVQBJCBDWEJSAOCYDEEOEYVZUOUUBUXFBRXEJWXLNJKYATJVZPMAARALVJFNISKCDDQXSACPPZIBMGVUYVPBXHSMCQLWRBTKQQZQNCWJLRVWHEGYWFCJFXOGYONXBLLAHRODMMLNEGNJAPAZQIMDNEPMLPTYZURVPOHJWKZEODHGUZFQRCYNRKHTXUTDPSCSTVSMIBFZGLKFFKHUEHIVWKTSGMFQXGKRXGIWPS");

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
    msg.setTimeStamp(0.07525490621210329);
    msg.setSource(38027U);
    msg.setSourceEntity(14U);
    msg.setDestination(46562U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("FQPWNJYLQBLOPIRNVQYWREFGRMGYAGLULRWFEEZMLGKB");
    msg.reference_frame = 165U;
    msg.custom.assign("LAJXRXRVUBIWQEATWYYFFVBKUMBVHGMYRIKAFQPUQOCMKPIDHSFNXHJPYXJSGFJDFNTUCQORNSRXCNRQHFKZKTRJEIWZDNSIINIMNEISJOOCCTKEOHJMZKMYUWEGGTNPMAXXZASFJMHGXC");

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
    msg.setTimeStamp(0.14210391840803938);
    msg.setSource(63776U);
    msg.setSourceEntity(181U);
    msg.setDestination(25878U);
    msg.setDestinationEntity(77U);
    msg.formation_name.assign("SWBZHMRXWWEDRKTLMHVZRPUVKAWWSKMYTYZAPCGLAQKSERUUPJOIQSZWHOXTVQBVZCGEDLMBJNUGEODTYRRCPGDCDFSLOHXIYVGIDECYMDKDXKLERVPYXLDXGUXBIIYUO");
    msg.reference_frame = 45U;
    msg.custom.assign("BZYHFFTZLDQOXRCCSMFWKNKPLVOCTRZLQKDGMQQEXPLZHJRDARAUCFSEGAAWSUTHTBSTHTURIIPGGLYSFWDFJSYAILYRDCUYBBZNPHPAZZTWXKYULIOXWXBJDYDGMWNWZIIEAKIQOOVSSXQBKUNXJMHDLPJQVOMJHPVNCHKMGQPMVCZWDKUYYCMIPJUEKGLENVEACNETFQROVGOAEZWBWNMTXRXXVAUBTQFJYROR");

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
    msg.setTimeStamp(0.08246957339621264);
    msg.setSource(25435U);
    msg.setSourceEntity(115U);
    msg.setDestination(19681U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("VTTKKYVGNVSTWMRGIHNZOBMOQIMKTIDYBFZLKRZHJ");
    msg.formation_name.assign("NEDMBLXFONVFCYJTNXWCMSKAUFSEAJHZBWIJDGQECNUQXUPP");
    msg.plan_id.assign("AJRZYMARZFDWDMJRTHLBYJVEHFQLGHIFPXNQDRCKWSEGLNYCJ");
    msg.description.assign("GWYKVINDTJWXNETYJLIASBXOGKBWVKCQZDEQWFMSPLIGZBWGRTAIDXHPNGZXLSFDUJOOLAQTJ");
    msg.leader_speed = 0.29598705626997923;
    msg.leader_bank_lim = 0.7723658076438903;
    msg.pos_sim_err_lim = 0.8337811045507374;
    msg.pos_sim_err_wrn = 0.3527004587417759;
    msg.pos_sim_err_timeout = 57484U;
    msg.converg_max = 0.8960682193075692;
    msg.converg_timeout = 14527U;
    msg.comms_timeout = 55584U;
    msg.turb_lim = 0.9949859837470133;
    msg.custom.assign("LYEUCZRDGFCGYAHTLUNAJMZUHFFNRIMVLAXPIIFZINCVRRHSGOIMYBSTCTKXNQRXOKJVQVRAUBEEAJFOTZAWVCOGHCQHFFWDRCEOTUIRWQDPCPLIXOVDKXUAWHPXNUSYHISVSSGGWOQYRLNDMOQRSZEINQBGKYPDPKXWJUBTHXWWIGAJZMHYZGOUOLMLPUSHQZKNYBSEBEDFQTXKBMPJBQBCVMGLJFVAEZDEMJFDWYBKLAJNWKYENDXSLMKV");

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
    msg.setTimeStamp(0.9215401767366039);
    msg.setSource(29594U);
    msg.setSourceEntity(249U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("UAWMBYWQUCKJRIUBOAAOLERSOZAJFEVEVRSUFJHTKFSLTNOO");
    msg.formation_name.assign("TNXUIKZBZSIJIDJEVQUYNDSWPETHANZBOZJLPDNAOCQXAITGNWJNFFQCSDRKMMQHPKOLUTPFYCMQFRFGDXYGDFMCNDUORVNGWIAURGVRFUKQHBKSWAXVHHMLKVSTEXXYMDBGUKOXGOODSPZJMCLFZLPSUWEVIRJSLMYMUYNANZLEZVPGTBYJLFRJHHEIHSRPFYTBPJAXKE");
    msg.plan_id.assign("SXZKJCXZHITXCMPZUPCYSJWPIQKFHAIDJXUIXRJICLNOQGVAWCVWDLAOWVXCBGPWISMQQSSQIWMRHHXBVVBHKEELVENBZEBVCQKNJYMUOUZDLDFQUHDOMTJGYNBOOFPNYTKAUUFLQRPEETLSROFSTZMOZMPJNGNAFKLWNTGYZSTAVJDLWDJZLHHGLARDF");
    msg.description.assign("HQFWMSJEJYEAMPHCBAGASKRXABSXHOQOKJRYTCWRWUUYLOQTZSMUGZTVHIGIDIUGRFGGLBZDYMLETQRCUYWXNVTJVWLXVHUSMCUDZVLKQNIPSIPDVMIOWSZBNOVUCRIGHNTHJPFGNCAZNKKTJXFWPRCPYZBAWOPFMYAVLOVXLLDQEQRF");
    msg.leader_speed = 0.4585298488959614;
    msg.leader_bank_lim = 0.47000565404077455;
    msg.pos_sim_err_lim = 0.2064259089538426;
    msg.pos_sim_err_wrn = 0.7210758809598043;
    msg.pos_sim_err_timeout = 39304U;
    msg.converg_max = 0.9147152648961541;
    msg.converg_timeout = 30635U;
    msg.comms_timeout = 13215U;
    msg.turb_lim = 0.9736309334163524;
    msg.custom.assign("HJYFIOFIKCSREIZSELVYPLCRBEADNYYFJIGYCBJUXNEUZWMQGWVKSGMVUBUIISPYUIWDQEDLHNRAXVGMTPKONERAPWHYZTQMBRGBWEQLHDJWCUAQKHETGPGJNTXQEFXXFOPUWUAXSGMSVVOCPZMRZWZCJKKLDSBWNHXJEKQBYVALTMFADMTCGZQRHVNSDHOS");

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
    msg.setTimeStamp(0.9923696675186666);
    msg.setSource(55509U);
    msg.setSourceEntity(234U);
    msg.setDestination(31726U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("QOVIVKIUSSNXTRLAYGTRQFURHJNQYUUKCZFBYTKVCBAUYPDCJGGKWFHPRPXDOQDHLYEWEOGLKPZNIIDZXOIXKEANCNASAVVDCTXVAIIJUTV");
    msg.formation_name.assign("YNSSTQICNEGLJCKCDIIGSYXYTJBESOZUQPYEWVUSTPQHFJFWCAAITHNKQNYMBEYIDMOQOSDCLVZJFVHELBXXDOFJGQXCKBNAEICBPTYSMTLNRZBDRPWQHMOZZTFBERWACHRWSGKLJHGMQDPAIMPNOHANWVAVEGELUQJEIQLSFMHOUURPIGKITCXSYUYAJRXFJDMVZN");
    msg.plan_id.assign("QQZVATSDPBVDO");
    msg.description.assign("JKCUVQSWTBRQCNLVPQHPMDVPPVFNZZYIFHBALQCGMFTLETLCXYIZOBDXHFDAETHOJRUDZAUGFBWCWPERTOYUFPSMZCSESGHEGJKMNZABIPLGWYSZXSFYTXJRSXDENNNWUKIAXPVXRVSCUEQBGPUCMSZIFNIGKMQQDOJYLOYRMYQBUCVJYLRZHODQENDRJPWLIFAXDIKMIJTVVTLXUVWHKYWNLWWXBSHOOA");
    msg.leader_speed = 0.4024131954136321;
    msg.leader_bank_lim = 0.7892102809998944;
    msg.pos_sim_err_lim = 0.5741650332418452;
    msg.pos_sim_err_wrn = 0.031243835814549592;
    msg.pos_sim_err_timeout = 21102U;
    msg.converg_max = 0.6148792902684418;
    msg.converg_timeout = 48412U;
    msg.comms_timeout = 21180U;
    msg.turb_lim = 0.592565462122817;
    msg.custom.assign("NWOERKMFALVCZITELXNQLGMZAFXBZNIOHATYKEIORIOPPISMWVTDYLHXESXBRUCIJLLGFBKKQDSYNHSPYGVWYXPGWVQYESCFRDRFSKUKHTUPJBKNBVJZCECXZENHJBFITOJWUBGJMQHQZAXMRDFLABPTWMSOQDAEJENVTRGUOGPYCJHIRTAHDDZUXWUJBFGLEFUFMSZCXNWVRQPSVVCWDOCTOQRBMLKHLVAZADIQNY");

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
    msg.setTimeStamp(0.6435683451831414);
    msg.setSource(23634U);
    msg.setSourceEntity(183U);
    msg.setDestination(46474U);
    msg.setDestinationEntity(189U);
    msg.control_src = 16421U;
    msg.control_ent = 145U;
    msg.timeout = 0.6947782040863072;
    msg.loiter_radius = 0.5990530506277808;
    msg.altitude_interval = 0.6818032574574355;

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
    msg.setTimeStamp(0.46078723720545245);
    msg.setSource(52706U);
    msg.setSourceEntity(181U);
    msg.setDestination(53428U);
    msg.setDestinationEntity(231U);
    msg.control_src = 41719U;
    msg.control_ent = 59U;
    msg.timeout = 0.5633923560032478;
    msg.loiter_radius = 0.2645631987866013;
    msg.altitude_interval = 0.8687494595218147;

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
    msg.setTimeStamp(0.8622510032205079);
    msg.setSource(13924U);
    msg.setSourceEntity(189U);
    msg.setDestination(26703U);
    msg.setDestinationEntity(140U);
    msg.control_src = 27412U;
    msg.control_ent = 133U;
    msg.timeout = 0.5029433885908721;
    msg.loiter_radius = 0.7076629092283059;
    msg.altitude_interval = 0.930726363675795;

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
    msg.setTimeStamp(0.8290912784565962);
    msg.setSource(48096U);
    msg.setSourceEntity(221U);
    msg.setDestination(26130U);
    msg.setDestinationEntity(89U);
    msg.flags = 220U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.38523073099053795;
    tmp_msg_0.speed_units = 181U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4038527677655167;
    tmp_msg_1.z_units = 109U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4261850832586698;
    msg.lon = 0.2620825873962098;
    msg.radius = 0.2346223208430961;

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
    msg.setTimeStamp(0.07373369814428588);
    msg.setSource(20379U);
    msg.setSourceEntity(15U);
    msg.setDestination(6927U);
    msg.setDestinationEntity(227U);
    msg.flags = 67U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1335993457279776;
    tmp_msg_0.speed_units = 155U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8165562627944063;
    tmp_msg_1.z_units = 235U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.047879827169237776;
    msg.lon = 0.4798282114248713;
    msg.radius = 0.9599685958357739;

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
    msg.setTimeStamp(0.3185386425378004);
    msg.setSource(566U);
    msg.setSourceEntity(4U);
    msg.setDestination(11975U);
    msg.setDestinationEntity(154U);
    msg.flags = 64U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.27248793537928717;
    tmp_msg_0.speed_units = 23U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.15271703798125424;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3425064669884573;
    msg.lon = 0.9827982261735002;
    msg.radius = 0.45627102130857855;

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
    msg.setTimeStamp(0.6609645129292762);
    msg.setSource(51519U);
    msg.setSourceEntity(238U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(235U);
    msg.control_src = 64963U;
    msg.control_ent = 212U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 140U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9651014838552947;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6393069039498364;
    tmp_tmp_msg_0_1.z_units = 62U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8129667611114737;
    tmp_msg_0.lon = 0.44366398325094314;
    tmp_msg_0.radius = 0.5150897737243537;
    msg.reference.set(tmp_msg_0);
    msg.state = 59U;
    msg.proximity = 246U;

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
    msg.setTimeStamp(0.4906922317228125);
    msg.setSource(1104U);
    msg.setSourceEntity(223U);
    msg.setDestination(38421U);
    msg.setDestinationEntity(180U);
    msg.control_src = 42290U;
    msg.control_ent = 88U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 50U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6850975014115736;
    tmp_tmp_msg_0_0.speed_units = 92U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8138443883349584;
    tmp_tmp_msg_0_1.z_units = 59U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.30735945788931873;
    tmp_msg_0.lon = 0.5870395990491278;
    tmp_msg_0.radius = 0.9389809044011689;
    msg.reference.set(tmp_msg_0);
    msg.state = 40U;
    msg.proximity = 61U;

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
    msg.setTimeStamp(0.09435393776614387);
    msg.setSource(43718U);
    msg.setSourceEntity(242U);
    msg.setDestination(33116U);
    msg.setDestinationEntity(23U);
    msg.control_src = 58103U;
    msg.control_ent = 46U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 147U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.33442743220013993;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.716500586294346;
    tmp_tmp_msg_0_1.z_units = 13U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8798384647906772;
    tmp_msg_0.lon = 0.04963786847154472;
    tmp_msg_0.radius = 0.03302389594696542;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
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
    msg.setTimeStamp(0.43806949957702224);
    msg.setSource(50243U);
    msg.setSourceEntity(151U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(24U);
    msg.ax_cmd = 0.15935449433111282;
    msg.ay_cmd = 0.19536550506523243;
    msg.az_cmd = 0.9700647372815073;
    msg.ax_des = 0.8714711522308041;
    msg.ay_des = 0.4619988388176194;
    msg.az_des = 0.3519322428416488;
    msg.virt_err_x = 0.6665046571651664;
    msg.virt_err_y = 0.2600483278048047;
    msg.virt_err_z = 0.34959594723654897;
    msg.surf_fdbk_x = 0.9066802715369081;
    msg.surf_fdbk_y = 0.29192918217775954;
    msg.surf_fdbk_z = 0.9190401929525852;
    msg.surf_unkn_x = 0.09566067261735789;
    msg.surf_unkn_y = 0.8807779184757114;
    msg.surf_unkn_z = 0.07402760131631547;
    msg.ss_x = 0.2506866887780337;
    msg.ss_y = 0.6465244028210162;
    msg.ss_z = 0.7579448206624843;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ELBVUKXBCNUWMEOQOJPPYOPSZQAONGUGTCLPTSKWNJIDSAMVVAQHJVCAZACQMQLIBWJQBYBQSGXXDKXHRWMVUELJHUFMTTZCKTDONKNOGLOTWKWRGRIVGHQBWRXOCFXSVSAEPHIEYFXCMNAIZSLZRRYFNMAJQYTDVYIOIYNLWZYHRBZTQCZNLRIKTFSXZYWDBJFGVUJLMIDCPHILEFEAUOAUPSKDUXESJGFYDRT");
    tmp_msg_0.dist = 0.11395443847839481;
    tmp_msg_0.err = 0.46523341346031455;
    tmp_msg_0.ctrl_imp = 0.10999115497192347;
    tmp_msg_0.rel_dir_x = 0.724521053337801;
    tmp_msg_0.rel_dir_y = 0.019494088323796954;
    tmp_msg_0.rel_dir_z = 0.7843193772241488;
    tmp_msg_0.err_x = 0.4744009934598743;
    tmp_msg_0.err_y = 0.8460718536854438;
    tmp_msg_0.err_z = 0.36638489745555114;
    tmp_msg_0.rf_err_x = 0.4169852937723929;
    tmp_msg_0.rf_err_y = 0.6631238826904995;
    tmp_msg_0.rf_err_z = 0.4886710315678705;
    tmp_msg_0.rf_err_vx = 0.27415283059641715;
    tmp_msg_0.rf_err_vy = 0.439802671205752;
    tmp_msg_0.rf_err_vz = 0.8222844738022899;
    tmp_msg_0.ss_x = 0.20462145309766044;
    tmp_msg_0.ss_y = 0.07474220447468993;
    tmp_msg_0.ss_z = 0.15764243652148557;
    tmp_msg_0.virt_err_x = 0.8015626179035628;
    tmp_msg_0.virt_err_y = 0.6335435131736293;
    tmp_msg_0.virt_err_z = 0.4000049895475921;
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
    msg.setTimeStamp(0.9710657898279468);
    msg.setSource(40680U);
    msg.setSourceEntity(48U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(229U);
    msg.ax_cmd = 0.5073821969477516;
    msg.ay_cmd = 0.9451681837402518;
    msg.az_cmd = 0.3563699904453068;
    msg.ax_des = 0.6833694620350165;
    msg.ay_des = 0.12115916251930159;
    msg.az_des = 0.944262915772624;
    msg.virt_err_x = 0.056323716858222794;
    msg.virt_err_y = 0.24918711918839054;
    msg.virt_err_z = 0.20405681632332617;
    msg.surf_fdbk_x = 0.8012554910821827;
    msg.surf_fdbk_y = 0.705184348678325;
    msg.surf_fdbk_z = 0.8349230274212888;
    msg.surf_unkn_x = 0.45293478497328565;
    msg.surf_unkn_y = 0.5897171082340764;
    msg.surf_unkn_z = 0.85482347760292;
    msg.ss_x = 0.5391740433083173;
    msg.ss_y = 0.9336922727173931;
    msg.ss_z = 0.621634728652833;

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
    msg.setTimeStamp(0.6910768522798392);
    msg.setSource(14371U);
    msg.setSourceEntity(88U);
    msg.setDestination(2503U);
    msg.setDestinationEntity(133U);
    msg.ax_cmd = 0.8666253044865787;
    msg.ay_cmd = 0.17638365057924776;
    msg.az_cmd = 0.7596289742637605;
    msg.ax_des = 0.2207666115160294;
    msg.ay_des = 0.21341288114407908;
    msg.az_des = 0.32745922675946826;
    msg.virt_err_x = 0.4067350393735022;
    msg.virt_err_y = 0.9875644233481402;
    msg.virt_err_z = 0.7841709312660256;
    msg.surf_fdbk_x = 0.050473243322783246;
    msg.surf_fdbk_y = 0.3864664659612048;
    msg.surf_fdbk_z = 0.9628167896718084;
    msg.surf_unkn_x = 0.30369990651748124;
    msg.surf_unkn_y = 0.2994277023685036;
    msg.surf_unkn_z = 0.31423771444668325;
    msg.ss_x = 0.5246455653223296;
    msg.ss_y = 0.496724740741618;
    msg.ss_z = 0.2719489165094231;

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
    msg.setTimeStamp(0.7967809336351712);
    msg.setSource(33001U);
    msg.setSourceEntity(112U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(149U);
    msg.s_id.assign("LFFQEQJMZQTVUZQBEVMXDCDUQJEZFBWVWNIGSZPXDYRTGHISHMYYOKBCGRTGRHAOWAABNHKEOPYGDCSALWEBWVXEJDMZERNTQNNXTUOFSPJKGSX");
    msg.dist = 0.7446252400737539;
    msg.err = 0.3055675000718082;
    msg.ctrl_imp = 0.6077304743764314;
    msg.rel_dir_x = 0.004826544054575721;
    msg.rel_dir_y = 0.21869061324063277;
    msg.rel_dir_z = 0.11071812528446046;
    msg.err_x = 0.6750597693395926;
    msg.err_y = 0.8081777927348932;
    msg.err_z = 0.7935088407339282;
    msg.rf_err_x = 0.6274904744683764;
    msg.rf_err_y = 0.9150491013473041;
    msg.rf_err_z = 0.8175411348121595;
    msg.rf_err_vx = 0.36108765184093505;
    msg.rf_err_vy = 0.31898873651455695;
    msg.rf_err_vz = 0.09098224646347608;
    msg.ss_x = 0.9632492525059067;
    msg.ss_y = 0.570287476435472;
    msg.ss_z = 0.7748624014330641;
    msg.virt_err_x = 0.3453857055512787;
    msg.virt_err_y = 0.6865453671665892;
    msg.virt_err_z = 0.6460712266149009;

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
    msg.setTimeStamp(0.6416061165252929);
    msg.setSource(33966U);
    msg.setSourceEntity(45U);
    msg.setDestination(21302U);
    msg.setDestinationEntity(64U);
    msg.s_id.assign("LJMUWZLPLZDTNMWFDXREVGODBZLIVSZVGSMTFKCWQAIEXCUNRORJBOWEGIPELTGBBFHSCJKQDTPITBSLKJFDQYEVXLYPWAMKKBMUPUMBDAADGMAXQGWUPAYUZDRHEZGDHPOLCOZNQJIJKVPNSJSHBAYSXYOTFHIPNUCKRVYRHXVEOWTOOFTNFNQWTKIEXMGQYHSHKXNVZUFCWUBJXRJVXGUIQNYIZAVRNJMCHPYISBAO");
    msg.dist = 0.38858653932389997;
    msg.err = 0.9557924215173801;
    msg.ctrl_imp = 0.7861018447360134;
    msg.rel_dir_x = 0.023780144979208107;
    msg.rel_dir_y = 0.21247281211725433;
    msg.rel_dir_z = 0.9972777353738678;
    msg.err_x = 0.8299960879364053;
    msg.err_y = 0.21166404861427468;
    msg.err_z = 0.30649303469955724;
    msg.rf_err_x = 0.20732138710788262;
    msg.rf_err_y = 0.32685207300500974;
    msg.rf_err_z = 0.23735804438726404;
    msg.rf_err_vx = 0.6337762499986983;
    msg.rf_err_vy = 0.8103223733069104;
    msg.rf_err_vz = 0.3579384127939548;
    msg.ss_x = 0.1694578442717578;
    msg.ss_y = 0.5499913995615717;
    msg.ss_z = 0.23146036703048534;
    msg.virt_err_x = 0.6524866103252926;
    msg.virt_err_y = 0.8427799690123746;
    msg.virt_err_z = 0.06953434997130081;

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
    msg.setTimeStamp(0.3087731335621524);
    msg.setSource(56841U);
    msg.setSourceEntity(55U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(91U);
    msg.s_id.assign("YRGMWSBOJZSPKNTRIWOHYGLVKEGIVDDNCNLOPTZDOSSFZCSOCERPIWJKQSBDRKBTZIUFCMLMTLTGZMZNBLWMPIGATYXAYRMWCYWFSDEBTCJLWHRRIG");
    msg.dist = 0.71073404449114;
    msg.err = 0.6852813132992733;
    msg.ctrl_imp = 0.9103942344632778;
    msg.rel_dir_x = 0.32443281062871376;
    msg.rel_dir_y = 0.5620950420133398;
    msg.rel_dir_z = 0.1858553167726732;
    msg.err_x = 0.44917027363811446;
    msg.err_y = 0.12049826185827406;
    msg.err_z = 0.5433753872257464;
    msg.rf_err_x = 0.09070919382351728;
    msg.rf_err_y = 0.8894653788893865;
    msg.rf_err_z = 0.09435162446517775;
    msg.rf_err_vx = 0.5933281129456939;
    msg.rf_err_vy = 0.5462124209303375;
    msg.rf_err_vz = 0.7427942529847061;
    msg.ss_x = 0.5563731479128728;
    msg.ss_y = 0.7958553505801277;
    msg.ss_z = 0.6389442267778319;
    msg.virt_err_x = 0.5464768695633305;
    msg.virt_err_y = 0.6242151103923185;
    msg.virt_err_z = 0.2246143137876686;

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
    msg.setTimeStamp(0.25699107870924054);
    msg.setSource(64092U);
    msg.setSourceEntity(84U);
    msg.setDestination(29196U);
    msg.setDestinationEntity(84U);
    msg.timeout = 23421U;
    msg.rpm = 0.5012874421555551;
    msg.direction = 115U;
    msg.custom.assign("MFZTABJRPLUFWEANSQXXPEYQDBPIIJIMSYUYTZIIHFNTMEFTVDQAKMWGBLKJBISUPOBBMSSASAXNNJFRMSRYIBJHDVGOEYORAZMTTDOCYQGTXZBXDXYIYTLUJIKQAGERTWUJPNQWUVGEGLLXKJKDMPWNKKVCSRVLVL");

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
    msg.setTimeStamp(0.7889536816499418);
    msg.setSource(55938U);
    msg.setSourceEntity(236U);
    msg.setDestination(57863U);
    msg.setDestinationEntity(15U);
    msg.timeout = 55665U;
    msg.rpm = 0.6241428448620194;
    msg.direction = 2U;
    msg.custom.assign("SGETAKSEGXKUIBPGQBUAWYYJPPWWZORIXSYZZYAMCUTKVGZSVIAQZLLDAWMWCQBDQFNHOCHDYRPOHTQWOUDETPBTVKJSFVHGJYIWPZENVNNRNIBCSJXUJUMNNVKEOCAZXGUTARBTUIWIRCYFOMRMZHCQQSPOLLYTKZPKEMHSNBPIDGLKGRMJDXZLLQVHSCSFFXFEYEJODVFAKRXIQDGTXE");

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
    msg.setTimeStamp(0.4272022979496818);
    msg.setSource(52573U);
    msg.setSourceEntity(7U);
    msg.setDestination(1575U);
    msg.setDestinationEntity(253U);
    msg.timeout = 1318U;
    msg.rpm = 0.002200882400174242;
    msg.direction = 65U;
    msg.custom.assign("UITTFDDYNNYGHZAIGUOPJDUZFNCQCIWUMM");

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
    msg.setTimeStamp(0.32869431337106203);
    msg.setSource(7904U);
    msg.setSourceEntity(189U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(231U);
    msg.formation_name.assign("LYFTOVENUDLBIXUCQ");
    msg.type = 75U;
    msg.op = 157U;
    msg.group_name.assign("WWLMBBGVUTYCZEWMKNYCQCWQZGHSAVEQFLQXGQQOHZLKFBEHMXVBCPHUYWSPZEXCGADFGQHJNMDRQTEHLIZNYVDDWTTGKGOBMKMICAJLUWCDPTDVPNINBPCHFEXZXFMKSRYMIYHNZPVCIRFDYHHIUNBJSIOTOGSFPSEZNWXRORAQKOUYRAVATFE");
    msg.plan_id.assign("PDACRSFBKISCLIGULOOVKDOAHHUODWKBSGAUUSEXXXSDKQEZUBDBJNVQPCIPWFCSECOMHRLLVVLBKJHOKDKAHBNNONOTLBMYFHAATTW");
    msg.description.assign("TBHRGZRYVNVGUTLXHYFXKDGIQZZNLEVCEKASJZTICXJPFXAYFOCFLVIMZDDYIMKNCSNIQZWHTUOEWCSMWQCYOBEBQCHGOJKKRETKWGUHRCRUUUDGPOOTQWZVPERYFHOYNEHVXLBPQKYKGMHSMPSLXAVDSCZIMTGFTLSOZHOWIGDREBFQISVNMBBRTOAVSIJXJWINAGFRAXLUPQQBV");
    msg.reference_frame = 144U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20703U;
    tmp_msg_0.off_x = 0.3908267577966631;
    tmp_msg_0.off_y = 0.2871947939125793;
    tmp_msg_0.off_z = 0.12080374821563455;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9431686504556064;
    msg.leader_speed_min = 0.8498262807052017;
    msg.leader_speed_max = 0.9694670609594557;
    msg.leader_alt_min = 0.9790096472441763;
    msg.leader_alt_max = 0.2679029040898874;
    msg.pos_sim_err_lim = 0.417915596859621;
    msg.pos_sim_err_wrn = 0.29590501593496255;
    msg.pos_sim_err_timeout = 30367U;
    msg.converg_max = 0.23101321061894975;
    msg.converg_timeout = 5307U;
    msg.comms_timeout = 10951U;
    msg.turb_lim = 0.7014503702798632;
    msg.custom.assign("BNCCKYDPUAKQOLOQKSSMJJTRIHHSKGDHVXPEUMNZWWSLZQNBAROVHPIEYWFXYFXWZMJGEJNYONZYQLJABQTQFNBMMCFZLJHYNRZOMUORCZWLNDLATOZKLJTLAVPDBUXHAXIKVISDGIJUQFCAGYGSQPGBNXOLWVSUYEXF");

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
    msg.setTimeStamp(0.9952083834964268);
    msg.setSource(2769U);
    msg.setSourceEntity(44U);
    msg.setDestination(22693U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("KBVJKNPTIWOTHWABTRUZTELWYXEYOIUEBYNTNDASAGPNZZXYVVEVHSJOGGZIHFDCRRPVZITOLVQLVFCWXPDNQRDBSGSAMEKQTGEGVXXYFWOEWPCMGBIGHNMAPAOMJNBJURDKCYVFOQGPQDKOFLXPBMHSHSLXMSYWUJUMUFVUMMAQJQJIRJZRYXSCZAEKEDPZDKQLNHCGRLZNJKK");
    msg.type = 137U;
    msg.op = 94U;
    msg.group_name.assign("SWOPHQVLZXEBSBPGEXVDRGTCTKOCXOIOWRGXYQZPAGOJUQUKFC");
    msg.plan_id.assign("VQEZQUDFETQWNXAZRCMIMHQXGFLJELWSSKHBAMOXZYLMEHEQEMSJJJAWUEPDKVFYPIZDIBRNRNFBEJXWYETUOGFQLIUBZWFDABBHTRWBPPWOLMACYGIZCRQSGAFJSQMYRNUAZKMFHNRGVWVSFDSNDZZSNPHCKUJGUOOXYYRKNGKQPYOTTLMVJPTUHRELJKVHBITLROIKBVNN");
    msg.description.assign("QZOFLIWRNRYFAKAWEATVVPASUKKSIGCBQVLNXRQHPLBSRMCERGDFWWOSCOAFWLJDZTSHJCOQQXUHLKDYPBNHJGTYGKIFVSUIMZVVVMNJETXPYBQBOUQLFECKWIAVACOXDRZPGMKJDCRSEYGLKENFRQDJHSIZTWYWRYRVHMMZWYKMTBITZIUFUQILXHUJCEMITMYBZLNZNOBXOBHDYKPLJTEFJXUBVPJA");
    msg.reference_frame = 241U;
    msg.leader_bank_lim = 0.43658160634577026;
    msg.leader_speed_min = 0.8277501325838773;
    msg.leader_speed_max = 0.8196076714723856;
    msg.leader_alt_min = 0.31079413378752296;
    msg.leader_alt_max = 0.9906737542079747;
    msg.pos_sim_err_lim = 0.26307828583564874;
    msg.pos_sim_err_wrn = 0.04461355939414635;
    msg.pos_sim_err_timeout = 63534U;
    msg.converg_max = 0.4641047863140362;
    msg.converg_timeout = 51384U;
    msg.comms_timeout = 51514U;
    msg.turb_lim = 0.5336617941713359;
    msg.custom.assign("LRYJFOOSDLGDDPEUGVVGAGDCWIAR");

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
    msg.setTimeStamp(0.9273100257364244);
    msg.setSource(3835U);
    msg.setSourceEntity(57U);
    msg.setDestination(35934U);
    msg.setDestinationEntity(119U);
    msg.formation_name.assign("ZRDAEVEMLDAOXJAQSHPIOTTJDOYCBGMOKBZSBLXFEWILZLWQGUJNGYZXTZTMGNHPWQXHBGRMTLTFCMDJPYCCNEWQFODBGBXOPBRNCEIFESIEZPLUQUENYQUWYKCYGUQMPKSAQHZVUPJMLBZDWIUGRLXNFKUVWHRJENKOFUVPUSAXZFIKJJOBDWKIKHFDZSNJYSMTCPFVVVYSKXCWQPDLRRIGXBCSITMAJOHCVNNQVYGLEIDHRAKYAXWVAO");
    msg.type = 21U;
    msg.op = 16U;
    msg.group_name.assign("MFQJICJGRQAPNCMEJYJSF");
    msg.plan_id.assign("ABFHIUPGJCUIUSFEORNYPYRTKIYBDRLLSBLFSOAPNTBJPAMFYOTSTYJUTURNXLOIAMBETPQKUWUGZAGEQJCNECIPGSWPHO");
    msg.description.assign("MRXPVHZRTQFUWASNVLZNXABUVPMZNICDEUBOBPUVGS");
    msg.reference_frame = 176U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56816U;
    tmp_msg_0.off_x = 0.9018802005331489;
    tmp_msg_0.off_y = 0.6251689967886267;
    tmp_msg_0.off_z = 0.2614327063104036;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.666625587030404;
    msg.leader_speed_min = 0.49609861225181184;
    msg.leader_speed_max = 0.9702157901214175;
    msg.leader_alt_min = 0.23633080543535245;
    msg.leader_alt_max = 0.8575569496871503;
    msg.pos_sim_err_lim = 0.406471153817906;
    msg.pos_sim_err_wrn = 0.11578905406939555;
    msg.pos_sim_err_timeout = 46335U;
    msg.converg_max = 0.6069758738436627;
    msg.converg_timeout = 45861U;
    msg.comms_timeout = 15264U;
    msg.turb_lim = 0.20546288122420853;
    msg.custom.assign("ELFDGHBZGEBIYSUZDJMATDFKRUPUVDWUXNAYTRJBXXFWPFIIGCXDQMUNMPWDGFEVRWSDHTIFEPKPZVMUWWBEALPILIYJZTQLJHPXFSASEGUKGTOVJGTSOFMBLZEZXEQOPLFQANZUCKGLNMTWVXVLAYKXTKUKYCOMKBCHBANORVCMBWNEYRZPLPYOWUGSNJHJYCQSMSQOMNGCCRQYVVRTWYXAAD");

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
    msg.setTimeStamp(0.7093926951604443);
    msg.setSource(32032U);
    msg.setSourceEntity(138U);
    msg.setDestination(43635U);
    msg.setDestinationEntity(59U);
    msg.timeout = 60896U;
    msg.lat = 0.7323499035790498;
    msg.lon = 0.10165310560444685;
    msg.z = 0.5929887210315729;
    msg.z_units = 33U;
    msg.speed = 0.1139987184210084;
    msg.speed_units = 55U;
    msg.custom.assign("PVUYKBCJSQYHVMKIKWCEBUKGERAQFVVOIIBPSCAJFBTXYNPBTNTWPMXIDALRIHJRTKMSHGZKLTAMGICYWWFZPFZYAJBHJUTRGKDZODJDAMXLPOBNVBQYAWJFUASEUOXXNHLGMMRORMXINX");

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
    msg.setTimeStamp(0.14996537840251167);
    msg.setSource(60572U);
    msg.setSourceEntity(60U);
    msg.setDestination(63864U);
    msg.setDestinationEntity(60U);
    msg.timeout = 39026U;
    msg.lat = 0.5716854233821534;
    msg.lon = 0.18070888730651924;
    msg.z = 0.4142430762249696;
    msg.z_units = 34U;
    msg.speed = 0.038613953047089034;
    msg.speed_units = 39U;
    msg.custom.assign("QXYRPNKSPQQMDIYJYAPNAGDPQUFJRBHTYNJWYRTAEJHIHVQNUOXKLZNYWVBJPMFWRWDZRBAKAWCBOUTUBKAWGTIKSGQUTLFLFMAHQKAHYDLUXVJBFWLMBZAKSCLNTLJOOTKECKCRNZGDVTYDWECZEXDVXCFQESEOULMEXVIGZPXVCFEGEQSOSYIMLOISMVI");

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
    msg.setTimeStamp(0.4784142183503479);
    msg.setSource(6662U);
    msg.setSourceEntity(77U);
    msg.setDestination(19404U);
    msg.setDestinationEntity(33U);
    msg.timeout = 27536U;
    msg.lat = 0.0030367556403955165;
    msg.lon = 0.08425521255701762;
    msg.z = 0.17000556399748834;
    msg.z_units = 50U;
    msg.speed = 0.9938770702342883;
    msg.speed_units = 147U;
    msg.custom.assign("XOXIWRXNTD");

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
    msg.setTimeStamp(0.4040510298782797);
    msg.setSource(60897U);
    msg.setSourceEntity(31U);
    msg.setDestination(22641U);
    msg.setDestinationEntity(44U);
    msg.timeout = 8701U;
    msg.lat = 0.07881461581418192;
    msg.lon = 0.5006324581317789;
    msg.z = 0.09566589849035134;
    msg.z_units = 179U;
    msg.speed = 0.2311715066329353;
    msg.speed_units = 135U;
    msg.custom.assign("NRPIBLTOGVFKSHBQVSMYDGT");

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
    msg.setTimeStamp(0.2817856741914495);
    msg.setSource(19056U);
    msg.setSourceEntity(32U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(116U);
    msg.timeout = 939U;
    msg.lat = 0.9538330895372599;
    msg.lon = 0.8141362514987902;
    msg.z = 0.12625514304764696;
    msg.z_units = 208U;
    msg.speed = 0.44287002848328616;
    msg.speed_units = 79U;
    msg.custom.assign("XCPJTMXIKUTNUCMMNXLGUTMOFVGJGAUUAWQEXGFYTBBRVVACWJXCTEBZEPSQULHAARHUZSANDTLQPROIEWSKPPHONNTHKHFVLJZJVPFCYEMLEMFBRHDOYHWCSBIFEMCDIKLBTMENVVWCMFENQZOPRLKZYWHBJVJZWXZDEKJVLBGXSBFXQRALDJCNLZRCSQGWDOIGDANYIX");

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
    msg.setTimeStamp(0.6167035305920657);
    msg.setSource(65288U);
    msg.setSourceEntity(25U);
    msg.setDestination(44124U);
    msg.setDestinationEntity(75U);
    msg.timeout = 57394U;
    msg.lat = 0.5862558715255712;
    msg.lon = 0.34606754032083364;
    msg.z = 0.10770593280296825;
    msg.z_units = 148U;
    msg.speed = 0.6770897648068191;
    msg.speed_units = 44U;
    msg.custom.assign("KLXFIESKMMIVZEEPLTRZBSQGQYWGYOAMXWJBMSTOPWCTXOIXNSLXPPJPPLJTQAVZRIDGCCIHAVDOFCMYBWVOBOCNLHENVNEDCQUTUJLAJBGHYUDKSDOKRYKJHXDDBZTPAHKMRSWIKBGITWGHERMCKNDUQHZNFGFLFZRYCDNYMHRXVPPFCWIRSFEWNVUOMZAAZKAEXEHKCYQERVLNBGJXTIUFLTQFHPJNUGZYGRUQSDZIWOTLUBMQ");

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
    msg.setTimeStamp(0.24848987587062288);
    msg.setSource(31359U);
    msg.setSourceEntity(43U);
    msg.setDestination(61605U);
    msg.setDestinationEntity(7U);
    msg.arrival_time = 0.1318440091438965;
    msg.lat = 0.008527069183319691;
    msg.lon = 0.20124462357967854;
    msg.z = 0.8081109933205235;
    msg.z_units = 86U;
    msg.travel_z = 0.5965123730430023;
    msg.travel_z_units = 155U;
    msg.delayed = 222U;

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
    msg.setTimeStamp(0.5361409938417221);
    msg.setSource(9597U);
    msg.setSourceEntity(238U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(10U);
    msg.arrival_time = 0.3814405442429054;
    msg.lat = 0.3106546146104029;
    msg.lon = 0.40074172961915155;
    msg.z = 0.6816147314208606;
    msg.z_units = 142U;
    msg.travel_z = 0.2261703781761959;
    msg.travel_z_units = 183U;
    msg.delayed = 240U;

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
    msg.setTimeStamp(0.6480534074046984);
    msg.setSource(62888U);
    msg.setSourceEntity(154U);
    msg.setDestination(901U);
    msg.setDestinationEntity(32U);
    msg.arrival_time = 0.5941632145907151;
    msg.lat = 0.915034485094682;
    msg.lon = 0.04303307331616146;
    msg.z = 0.9870022726912907;
    msg.z_units = 240U;
    msg.travel_z = 0.32531637418815373;
    msg.travel_z_units = 226U;
    msg.delayed = 180U;

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
    msg.setTimeStamp(0.7486202490447318);
    msg.setSource(49535U);
    msg.setSourceEntity(180U);
    msg.setDestination(25151U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.3788019890380916;
    msg.lon = 0.6876739487260112;
    msg.z = 0.5592537642302785;
    msg.z_units = 238U;
    msg.speed = 0.2131472192131696;
    msg.speed_units = 206U;
    msg.bearing = 0.2637725805488055;
    msg.cross_angle = 0.61144583922678;
    msg.width = 0.7834733881837713;
    msg.length = 0.11014985872556582;
    msg.coff = 147U;
    msg.angaperture = 0.8888446614195609;
    msg.range = 36743U;
    msg.overlap = 94U;
    msg.flags = 61U;
    msg.custom.assign("BQEDOXASAIQVBTRKITNYUWUVARYMBRRZOS");

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
    msg.setTimeStamp(0.719804461895706);
    msg.setSource(11193U);
    msg.setSourceEntity(20U);
    msg.setDestination(56488U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.607537787408836;
    msg.lon = 0.8751980572337295;
    msg.z = 0.047519316716137405;
    msg.z_units = 251U;
    msg.speed = 0.4017874176704812;
    msg.speed_units = 67U;
    msg.bearing = 0.09962246606678948;
    msg.cross_angle = 0.5908039774268775;
    msg.width = 0.3664885212541963;
    msg.length = 0.2749339208337843;
    msg.coff = 172U;
    msg.angaperture = 0.9282796931554685;
    msg.range = 14276U;
    msg.overlap = 209U;
    msg.flags = 80U;
    msg.custom.assign("QFEWTPIVTYNUXRGMUICWLACWUQXSYLMNCKJMOOBNPDDXVBVJFIAVQLWNHQPYGAMBLYQBCUOBEQHGSCRNTZRGWOQSCMJBNTNUBMZCLVYFUHAPBXFETJWVIXRCTMTIXGGIYRNGRJFWHKOUZKFAYCYLBLVLXZDFZSSXJQBZEOYK");

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
    msg.setTimeStamp(0.32370932357793303);
    msg.setSource(54806U);
    msg.setSourceEntity(112U);
    msg.setDestination(60540U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.9748726934815087;
    msg.lon = 0.6043544489985778;
    msg.z = 0.34456440819940903;
    msg.z_units = 124U;
    msg.speed = 0.5095369247409162;
    msg.speed_units = 189U;
    msg.bearing = 0.774380742532951;
    msg.cross_angle = 0.6216406481561361;
    msg.width = 0.34155009919691703;
    msg.length = 0.9164471865554158;
    msg.coff = 100U;
    msg.angaperture = 0.5354207980402821;
    msg.range = 30630U;
    msg.overlap = 129U;
    msg.flags = 13U;
    msg.custom.assign("NHTKTNHLPBILNKMSIHTOHUJEQFLVHZFLILJAJYMRCPJZPNSQCQQFNSWZRWBEEVPWRRASISKPHIFVBRKSYNOEJTVKFIFMRQJJAAYAVBXUIZDQVOUNMUOSWXLWXDHNAQTDMUCXHFGICYCTDHOKADDZZZTEUEKGPGLYJWGMWITZFFKBLMQQRXBCUPGSCTAJMVPORXUOPOPVMXEKDYYWVRNVXGRFECOMSYDUEG");

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
    msg.setTimeStamp(0.7785988545502837);
    msg.setSource(28930U);
    msg.setSourceEntity(198U);
    msg.setDestination(44349U);
    msg.setDestinationEntity(173U);
    msg.timeout = 61509U;
    msg.lat = 0.4558853588993198;
    msg.lon = 0.08555646586403642;
    msg.z = 0.8118723225670132;
    msg.z_units = 13U;
    msg.speed = 0.875197873196508;
    msg.speed_units = 236U;
    msg.syringe0 = 158U;
    msg.syringe1 = 157U;
    msg.syringe2 = 254U;
    msg.custom.assign("OSTMZHGQWRREMLYMQPQGFGPHVDTNIVMUGIXTHUFEOZVBFYVYFPNCEWZTXRRBOWSOAKVJLKGDUVTSZELZNCGVUOVJZNXIYAWYXRFEHDQISQKLWCPIRAZQUAKCPAZNYUNNGXKGTMNDKJDJHMTJXWOKQZHJCXUIMFJJFHMWWLDWQLFDUISCKOLPMSBAPHUEPAXYRMOKYSECBDRBSCTYICEINWBACSAJVL");

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
    msg.setTimeStamp(0.030220905808467813);
    msg.setSource(37692U);
    msg.setSourceEntity(61U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(166U);
    msg.timeout = 5927U;
    msg.lat = 0.24908392870367857;
    msg.lon = 0.7404801037806291;
    msg.z = 0.6681939072877392;
    msg.z_units = 137U;
    msg.speed = 0.00026300269181855906;
    msg.speed_units = 187U;
    msg.syringe0 = 54U;
    msg.syringe1 = 27U;
    msg.syringe2 = 43U;
    msg.custom.assign("IAUEJVFUTNOUVZPIBLKKRZXOAWTPBFRAAKHZCVUUJRUNSSARCZTOGLPSVSZMJPSOSFOFVKHCHJRFPWJQIETMHAJBKHDYQZJCEMGRTFAMCGSINBZLRLYVQMCCQBDDBDSWVTYRTEYWLEMMKJBWIRGPBKWTODLEZXQFSAXNVUCCOKA");

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
    msg.setTimeStamp(0.6826450143562062);
    msg.setSource(22161U);
    msg.setSourceEntity(72U);
    msg.setDestination(42345U);
    msg.setDestinationEntity(119U);
    msg.timeout = 65209U;
    msg.lat = 0.9734580180210333;
    msg.lon = 0.22697801644878468;
    msg.z = 0.49404295618269356;
    msg.z_units = 139U;
    msg.speed = 0.7603803337233317;
    msg.speed_units = 9U;
    msg.syringe0 = 128U;
    msg.syringe1 = 149U;
    msg.syringe2 = 12U;
    msg.custom.assign("OXROMJLTRECPKAPVRZZEHOKTYSDBIMQUANS");

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
    msg.setTimeStamp(0.538260377052233);
    msg.setSource(60830U);
    msg.setSourceEntity(139U);
    msg.setDestination(62377U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.8413050393827962);
    msg.setSource(11255U);
    msg.setSourceEntity(236U);
    msg.setDestination(17243U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.019136774959184644);
    msg.setSource(41643U);
    msg.setSourceEntity(225U);
    msg.setDestination(24778U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.7618307113262802);
    msg.setSource(22225U);
    msg.setSourceEntity(128U);
    msg.setDestination(37058U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.8744773072031982;
    msg.lon = 0.8955098679321457;
    msg.z = 0.6701812560494188;
    msg.z_units = 119U;
    msg.speed = 0.5583713560361123;
    msg.speed_units = 203U;
    msg.takeoff_pitch = 0.2635867728863718;
    msg.custom.assign("FKSSOQHPKFZUFYMVFWAANSVQHIAJRKIVCQAWRGBDZXYKFCTWICURUDBXKEIEXOTSZPLMMEZPOQBJNXY");

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
    msg.setTimeStamp(0.7008911434872113);
    msg.setSource(61355U);
    msg.setSourceEntity(123U);
    msg.setDestination(58390U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.16141031171248066;
    msg.lon = 0.8418673678845165;
    msg.z = 0.5181976806641727;
    msg.z_units = 123U;
    msg.speed = 0.05069999896806732;
    msg.speed_units = 102U;
    msg.takeoff_pitch = 0.48360822580638396;
    msg.custom.assign("MWSJFLSTYGBQGVFSGHCVXNZPIVOJZPW");

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
    msg.setTimeStamp(0.5691312432567235);
    msg.setSource(28550U);
    msg.setSourceEntity(34U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.39196284527588077;
    msg.lon = 0.7453106702809323;
    msg.z = 0.06455944348153053;
    msg.z_units = 141U;
    msg.speed = 0.7113399455931195;
    msg.speed_units = 203U;
    msg.takeoff_pitch = 0.11028958677797052;
    msg.custom.assign("YDHFTJUEIJZPCLMXAOQVWFAYSEBXMEPVNQUOSCBYKRPULGVRXMHRMXPJVXHSUTNANLGXDURIXZYBJVSNLPOQGDGBKSUKTGCQILCMTRQCRZOETBHZPFGQIZLQJBAP");

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
    msg.setTimeStamp(0.7162366781110814);
    msg.setSource(61069U);
    msg.setSourceEntity(144U);
    msg.setDestination(62009U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.5005608655950438;
    msg.lon = 0.29189462738808025;
    msg.z = 0.43524452504323774;
    msg.z_units = 74U;
    msg.speed = 0.28350528716777124;
    msg.speed_units = 188U;
    msg.abort_z = 0.24284958024429448;
    msg.bearing = 0.6318558805860869;
    msg.glide_slope = 161U;
    msg.glide_slope_alt = 0.4117129734769184;
    msg.custom.assign("JPTUJQNJDTFROOLQHDBYUEAHPRESNDYVNRCBDBAFZRJVHRAPTTDWHVAWQML");

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
    msg.setTimeStamp(0.0712292616867205);
    msg.setSource(7398U);
    msg.setSourceEntity(16U);
    msg.setDestination(9922U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.856526900921317;
    msg.lon = 0.719447186820549;
    msg.z = 0.02543936778265732;
    msg.z_units = 149U;
    msg.speed = 0.469898041593927;
    msg.speed_units = 125U;
    msg.abort_z = 0.8442389267876298;
    msg.bearing = 0.6663216725615085;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.12731216263380385;
    msg.custom.assign("NMJAMTZNGTMOXFJBBAAHRGOXRIWIFPUGVWAPYYDFIUDLZLMFGKUXTQRTOODGLVVYCDRVNSFDWEHRFIPIPQGJTCEHPHWWEHMICTNJWGKORABZHYCKYBUBZCTUMJELPSSNDWNFTBGBDJGMWVBOSQCDHJXZLRKIKPYKLSCSZASTRLJRQHEKWLPO");

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
    msg.setTimeStamp(0.8385675556311503);
    msg.setSource(49934U);
    msg.setSourceEntity(52U);
    msg.setDestination(32044U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.0008514877879682858;
    msg.lon = 0.027591330294917227;
    msg.z = 0.3118804827514229;
    msg.z_units = 6U;
    msg.speed = 0.647473785200499;
    msg.speed_units = 207U;
    msg.abort_z = 0.5112104490549202;
    msg.bearing = 0.09724478772496259;
    msg.glide_slope = 208U;
    msg.glide_slope_alt = 0.8607349720708893;
    msg.custom.assign("PNSIAXOHDNJBXLZXFMFYMYHCCYUFFGJEZAXGILRKFQSJZEQWMZRJGLJEIMWPKSGXRXMHEMFESAISRTOBRQEBLTVYWOAVBWGKOCTUAHCYHOBNVXFDLAZSKWA");

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
    msg.setTimeStamp(0.8488421946197484);
    msg.setSource(37039U);
    msg.setSourceEntity(227U);
    msg.setDestination(61714U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.34006307688126014;
    msg.lon = 0.26594189894602116;
    msg.speed = 0.8966706296966293;
    msg.speed_units = 34U;
    msg.limits = 122U;
    msg.max_depth = 0.2524251605481528;
    msg.min_alt = 0.4318898410749318;
    msg.time_limit = 0.03197472234030041;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6157909430335446;
    tmp_msg_0.lon = 0.7107098624572049;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RHMOBILACBEBGALRZGUJJNBTAECZHXFZXSELQRHBEMYXWNVFXKYWDQOKVAXESMWQIYIKXKVKFHCOQBAATVDWCMPIJOBMYYVOFYNOEFHLCFRMNLUQTPULTXNLADKDXUTJUC");
    msg.custom.assign("YOMCRTTFANXWTYADURFJQWBHTHQUOMAQSLVSRZJXZSRSDCCKLANQIXGOEVBYLLVGBUNAFZTONPGPJMDDFDHMKZECQHTBQWYAMKZHXIUKUVIHWNCJLJTXHRBFZYQXLCCAELGNYGOFFQSBSIXHEILWWVENKMIFERPIOFHYVUGGQBGYDAPIASPUZOTKBPCJMVPDMWYNEDDGPEEHPTVRNPJAKLZIKZI");

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
    msg.setTimeStamp(0.2010889423995833);
    msg.setSource(19903U);
    msg.setSourceEntity(28U);
    msg.setDestination(55405U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.9416311941654072;
    msg.lon = 0.81605854058256;
    msg.speed = 0.30298452702483103;
    msg.speed_units = 190U;
    msg.limits = 52U;
    msg.max_depth = 0.833508139078909;
    msg.min_alt = 0.42265662875589427;
    msg.time_limit = 0.05398234483674724;
    msg.controller.assign("KOMXREQBXNQMTSLHYUQVGPSQQVNQAHHWUYRZEGDMVFFIDOTPZYJWMYVULLHTTCYBZRGXYRLLTIAIJOFQKZEFWINEIPJAGINYGLUUCVTYFVIXKJKDVJQTDPDCSGPSPNRMBEMUCBLJZUWAVZPRTKFFTZQBHFBASCAZHELMSOLSKDXNBPRIKHRCPFZMJOCWDVOANSUG");
    msg.custom.assign("IPKVLBWCOBBYBXLHXPWXZMFEPHHGQOUSBVVOLYMGQQAALRVRSQSGEUYYUSMWTPOHJTTDDMICHNPMRGKNJXTCGRDEXDNZIYJRKSYZFHYDJCJAJQQCJTKFQSZFSIAMNRUQHGINTNGWKWAUIURDYNEZVDITEWEPAZCNQTXEUFZTOHEFBLKMSFKPQPZUVIHEVVGFLGCKU");

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
    msg.setTimeStamp(0.7201453711020389);
    msg.setSource(32719U);
    msg.setSourceEntity(160U);
    msg.setDestination(57197U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.6209549870187706;
    msg.lon = 0.5353427758322497;
    msg.speed = 0.9806256444160122;
    msg.speed_units = 132U;
    msg.limits = 216U;
    msg.max_depth = 0.5198223337077575;
    msg.min_alt = 0.46118186342338263;
    msg.time_limit = 0.3688488183022023;
    msg.controller.assign("MSRWWTAXGRXBFDJTHH");
    msg.custom.assign("FKTZEKREVLSKTHGLIJZGADXPNXKWBSHUUOWGEUCCURIIGBXYNQCYFZGOCXKQRYPSBYQITYBGTLLHHBJQBOSOAVRPQFSZEAH");

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
    msg.setTimeStamp(0.18524323553549016);
    msg.setSource(10760U);
    msg.setSourceEntity(139U);
    msg.setDestination(18993U);
    msg.setDestinationEntity(73U);
    msg.target.assign("LAGNUOBYWZSNOLXKQJJALNDZHDCBQRZSXUGTEMRVCXTTHIHIXJMFOHLUKEAKMFQWLTXKYYEITIBXEJVKMBXCJRZZNOFBGMOJZVWRHSXWHEWRNBRFGFWTEUIVABDAMBCSNDUSACIWPPJCQQYGMYUVPOHINLMLKOQLHOYSPFBIWJOKQJNEUGKEQDYJCQZOWRKVTSZAFZSCUUPACWEYDTEPBVAMQSNVNCXPLH");
    msg.max_speed = 0.28816029046300984;
    msg.speed_units = 140U;
    msg.lat = 0.18672266791134418;
    msg.lon = 0.9385194975602171;
    msg.z = 0.6793825224592158;
    msg.z_units = 203U;
    msg.custom.assign("MLLBYTIHSCBSICMIAFUYHXBLQWPVHKGRAOBAKNTTUUAWKTFIDQNXBFDZLECZKIQLZLNENTEVFGDIFHNDFLCMTQPBWMGMGKRPSPHRSXCZTLVKVYGSBNHXFFOCZOJSXJUPJARTXQSBJUODAXVMKJNAIE");

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
    msg.setTimeStamp(0.12643033820817484);
    msg.setSource(51001U);
    msg.setSourceEntity(235U);
    msg.setDestination(32955U);
    msg.setDestinationEntity(35U);
    msg.target.assign("XCSGODTAUZJWATRWYMEMPABBPZMQOMAHFCWBGKSHPOKSBGAWNWVWEQOUFQMQYCEOKELMPVGRMOIOFNWAMNFPLATDZUESJZYDKKDBYJXNBNQTTUIXMQZNQXNPHTRUKUAEDADISLPYGTWXHJINHRRFLZFYIYHOZKVEXWLXQIOCQKCDPFDDLJWGJHLJ");
    msg.max_speed = 0.5666490719839649;
    msg.speed_units = 74U;
    msg.lat = 0.32071509019842337;
    msg.lon = 0.802258016745829;
    msg.z = 0.38556771808051626;
    msg.z_units = 30U;
    msg.custom.assign("QFVEWSOMQXZXIJZVKNSAQCXSASWXXCUDMYUSUNCNPJHADPQKNNURZZAFTPWSOMFCHPRCGOJDZBEYLMIGYDKDJTSEBBHBQTKZRBUQGKFYVRVMOTYODJGGQDJOKBVHFGENDMHKIEEFJVBTWRPCASDXHHQFTOWQEJNMMPBXIHVMYOCOWLFICIRPLATYZTJIREWVW");

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
    msg.setTimeStamp(0.5990837315657614);
    msg.setSource(410U);
    msg.setSourceEntity(107U);
    msg.setDestination(33866U);
    msg.setDestinationEntity(5U);
    msg.target.assign("MNXCUIUBNXZYTDQLIITQZTRYPHIUPMZMUJCWVJTPKKYGTVHWSOGOSGZCZCDLYAEFGTOUAFFEIPZDEREKYAQSRNBCKVAVFDODUCBZPMYNXJORXPUITXKKSKHEBC");
    msg.max_speed = 0.7232867090023816;
    msg.speed_units = 22U;
    msg.lat = 0.4175830996739488;
    msg.lon = 0.7121624055517578;
    msg.z = 0.4789851427040518;
    msg.z_units = 221U;
    msg.custom.assign("XWIEKRLCMIGYKSBSAEOQOPHFKRHAONGUXZQPJCGTQUVRCPLVGALFMVTKNZQEWNBMUXGHUVGYNHDJCBVUZPOLMWYQJZTRJAECUBZHWRRHFAWOTFYQPXXHMLBMTAWNKXSTSYEMQRWJUEFFSEHNQXVJFIPJWQTTGSYIOZPKLHRBEB");

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
    msg.setTimeStamp(0.45333929934018913);
    msg.setSource(62835U);
    msg.setSourceEntity(247U);
    msg.setDestination(14258U);
    msg.setDestinationEntity(221U);
    msg.timeout = 42867U;
    msg.lat = 0.8778480558135262;
    msg.lon = 0.23076723678210753;
    msg.speed = 0.016431213705640713;
    msg.speed_units = 253U;
    msg.custom.assign("ZXFOPVXIAMUVRCTTHWDVJRPPQQYTCAYIUHTHMYJSQURXWZVXWUWHXLBEVCGUDSEKCMKHMYDPRBXGQVKNEDLYCAHVJJTVNLIALTTMJAZYYSKMSZCPFAQBBKAUGQTFZFCKGSBHJUDIOXUVLNQOEINBKHLBOFKTBOUIZLTOZLFONDDJDYNOIPWWKFWRQ");

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
    msg.setTimeStamp(0.9831944131693185);
    msg.setSource(45466U);
    msg.setSourceEntity(134U);
    msg.setDestination(61799U);
    msg.setDestinationEntity(174U);
    msg.timeout = 21993U;
    msg.lat = 0.645738732093566;
    msg.lon = 0.46377898034556864;
    msg.speed = 0.5382381683507506;
    msg.speed_units = 21U;
    msg.custom.assign("QJWZRVVJYAHEDMVQBAPPYLIMCFWNMNXWEBPKPEPRUHABTQLDICFGSRMJSFQIKKAORQJJOUNBZLVNIALXEBTFULNSFZRJWYOKZTMLKARKROGXWBOGDGUWTHMNVVPKYXSDSHZ");

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
    msg.setTimeStamp(0.29641113326419666);
    msg.setSource(3165U);
    msg.setSourceEntity(221U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(231U);
    msg.timeout = 8211U;
    msg.lat = 0.6605809548486968;
    msg.lon = 0.5967242155791466;
    msg.speed = 0.1788677289456594;
    msg.speed_units = 70U;
    msg.custom.assign("DBNBULIPNBPHXODDYKCTVBTSIYGNJGNRSAZQMNEDMJDEMJLSBXTPVDIKFHRIZRWKQGPESCOBIVNFDWNTIEWQFOPFYCAEDALPZKSZOGWCFBUWXHLGFGHOMACJNDKCTHLSEUMNFFILMJSEVXYKAJARWU");

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
    msg.setTimeStamp(0.1406623070810783);
    msg.setSource(9655U);
    msg.setSourceEntity(59U);
    msg.setDestination(14054U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.5553818928865047;
    msg.lon = 0.36296404555301975;
    msg.z = 0.10152282516994582;
    msg.z_units = 152U;
    msg.radius = 0.6743453898705961;
    msg.duration = 31959U;
    msg.speed = 0.03612409958123752;
    msg.speed_units = 195U;
    msg.popup_period = 50802U;
    msg.popup_duration = 48074U;
    msg.flags = 153U;
    msg.custom.assign("BWBDAALWTU");

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
    msg.setTimeStamp(0.9018847564166379);
    msg.setSource(35298U);
    msg.setSourceEntity(183U);
    msg.setDestination(12731U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.9006980530016435;
    msg.lon = 0.9634954198464515;
    msg.z = 0.2755279755862172;
    msg.z_units = 163U;
    msg.radius = 0.5219173062302425;
    msg.duration = 14334U;
    msg.speed = 0.9732403828852066;
    msg.speed_units = 74U;
    msg.popup_period = 4444U;
    msg.popup_duration = 16989U;
    msg.flags = 204U;
    msg.custom.assign("KRREABJHBHITYZVJTBPYUGPAOPNVQXCKUOACEWEJXFSFYLFEDXTSWSFKLHKPZVGTQLBCAOTNMMQDMSGKZGQHRPOIPAGKLRYZNNSCCDFJNTXNLBT");

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
    msg.setTimeStamp(0.8826630299563831);
    msg.setSource(24425U);
    msg.setSourceEntity(218U);
    msg.setDestination(27142U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.09550652316728692;
    msg.lon = 0.5040607234104615;
    msg.z = 0.8654375121304662;
    msg.z_units = 111U;
    msg.radius = 0.5810582982903886;
    msg.duration = 6427U;
    msg.speed = 0.43769401856837686;
    msg.speed_units = 80U;
    msg.popup_period = 19676U;
    msg.popup_duration = 48448U;
    msg.flags = 21U;
    msg.custom.assign("TWDMPKDCKCALYJINDNXTKJVAHHRGQJTPKQKHYDFSHEUAGLJPUFZJGKZROMNYUSFHJLCZIAPTIRLYQMMMJRSTFCPZNBTCZXBDGMQEYXIXXVCUPSBFLGCIKPZVRRMHNUYUECXOSNHYUJOTQMRDEBCISWGHALDAWFOVJE");

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
    msg.setTimeStamp(0.2603326337420745);
    msg.setSource(61731U);
    msg.setSourceEntity(42U);
    msg.setDestination(54923U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.0002628640407874583);
    msg.setSource(26160U);
    msg.setSourceEntity(235U);
    msg.setDestination(30147U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.5452655939329832);
    msg.setSource(30951U);
    msg.setSourceEntity(220U);
    msg.setDestination(14656U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.6565893507016209);
    msg.setSource(20183U);
    msg.setSourceEntity(40U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(22U);
    msg.timeout = 62763U;
    msg.lat = 0.9687440909633871;
    msg.lon = 0.46886327846493936;
    msg.z = 0.733640533262765;
    msg.z_units = 162U;
    msg.speed = 0.8592015368234981;
    msg.speed_units = 82U;
    msg.bearing = 0.3727423364835899;
    msg.width = 0.4777741886871072;
    msg.direction = 133U;
    msg.custom.assign("EQOPFNTONIOZHGWZAFSNNUBXCWNRKCOHJXFYPBZYCKXBLMQKEIJUZFIRYGIMHMEMXWHTHADQESUHXALBEUXTUSMMAVOGXJBQWJKFSUTKWRILXZGSGMHGJPBEQJFBLATNGVPQPEJZHWBALCOKCDZQKTHYUVTWCDIPLHXIEVXKIFZWNCYKFEQMPDMTLRGNRCJSFABDCOGVNAYVVFDOSLDOKPYU");

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
    msg.setTimeStamp(0.7555423941671621);
    msg.setSource(62802U);
    msg.setSourceEntity(89U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(9U);
    msg.timeout = 17347U;
    msg.lat = 0.19849742755175703;
    msg.lon = 0.29122457509598865;
    msg.z = 0.5936895067787648;
    msg.z_units = 64U;
    msg.speed = 0.07372845357365088;
    msg.speed_units = 57U;
    msg.bearing = 0.473943646900885;
    msg.width = 0.22307984397945435;
    msg.direction = 210U;
    msg.custom.assign("SONULDICTESMRADMNHRHVACNOSJKNYPKTWHQITHHMWXIN");

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
    msg.setTimeStamp(0.979041826685364);
    msg.setSource(5463U);
    msg.setSourceEntity(147U);
    msg.setDestination(13621U);
    msg.setDestinationEntity(188U);
    msg.timeout = 25413U;
    msg.lat = 0.9341757481848273;
    msg.lon = 0.2798216429149183;
    msg.z = 0.734142333804929;
    msg.z_units = 127U;
    msg.speed = 0.2479136651427638;
    msg.speed_units = 199U;
    msg.bearing = 0.302945199688891;
    msg.width = 0.5028300327575859;
    msg.direction = 156U;
    msg.custom.assign("AROYPDMNWBTATNOEMNQHKUQFCNGCAEFWJYZAVNPVPXKPCHVZOXYWGEJKXJLSDTJWHXPAFBHQGLPURDBQXIIXTMEXDGXSMKWXADGUCNAFVZVCOUQEINGKSLYJJZRWSMYFUTIHRCRZUWQQMCKBTVJSIVGZFMGTHLYFMLKOBBZNCHZSQXBIORSAFUUYNTFJQASIWYDLCBVDYTGROZBVRFPWIRHKECEMJT");

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
    msg.setTimeStamp(0.3385462840370702);
    msg.setSource(60119U);
    msg.setSourceEntity(141U);
    msg.setDestination(54878U);
    msg.setDestinationEntity(120U);
    msg.op_mode = 78U;
    msg.error_count = 124U;
    msg.error_ents.assign("FQAEHYXJXKVXCCSOYEMGOJLVZFEGCDKCJWZFKSGNELPGYLIPKAMPAXDBCGDUHGIHDZBEYUXIMRJQCLISXYHRPXVBMXEZTDQWRIJLBBAPKWVXWTRZKUBMOB");
    msg.maneuver_type = 63678U;
    msg.maneuver_stime = 0.49023683067611123;
    msg.maneuver_eta = 24248U;
    msg.control_loops = 4142237871U;
    msg.flags = 42U;
    msg.last_error.assign("VMMGJOVKRTZ");
    msg.last_error_time = 0.897344555964656;

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
    msg.setTimeStamp(0.4102592385088688);
    msg.setSource(51812U);
    msg.setSourceEntity(118U);
    msg.setDestination(30179U);
    msg.setDestinationEntity(181U);
    msg.op_mode = 113U;
    msg.error_count = 245U;
    msg.error_ents.assign("FEPQMZYRUILRKTITBBRGSYPQAGUGURSMWSGMXXSKNHCCHEZVUWFSTQQKGSWIHODGDLKBFPXPZNUXMLVWELWGXXCZSWZGF");
    msg.maneuver_type = 37490U;
    msg.maneuver_stime = 0.365252631678208;
    msg.maneuver_eta = 6117U;
    msg.control_loops = 792140074U;
    msg.flags = 78U;
    msg.last_error.assign("ZFIWLDMQJNX");
    msg.last_error_time = 0.3410096826822049;

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
    msg.setTimeStamp(0.9004051409799668);
    msg.setSource(19467U);
    msg.setSourceEntity(112U);
    msg.setDestination(18296U);
    msg.setDestinationEntity(40U);
    msg.op_mode = 149U;
    msg.error_count = 103U;
    msg.error_ents.assign("UGZCEAKURERKIOEBUAYXZXWMUXEARIVVTDVFZQTQVGDPYXMYHZACMOTVDLHOFQJQENWSLDMZVDURGGKYQGMKPUALQZXRNEMQWPMYEXLBKZPWLQCGKWWJRIBWPNWIMEFBTIVSBTUJXROYFGLSCWTCTFBUBCNVNHPSHDLKZGCSHXIZOPUGEHDXFTGYIANS");
    msg.maneuver_type = 46813U;
    msg.maneuver_stime = 0.39456675645284645;
    msg.maneuver_eta = 56722U;
    msg.control_loops = 540616606U;
    msg.flags = 6U;
    msg.last_error.assign("NHRQZGRLZIRHNZEGXCXPYNDXEXUVJIOSURGFIPZXVHBFKURM");
    msg.last_error_time = 0.1903310569470208;

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
    msg.setTimeStamp(0.9953085740885359);
    msg.setSource(29515U);
    msg.setSourceEntity(146U);
    msg.setDestination(16378U);
    msg.setDestinationEntity(87U);
    msg.type = 46U;
    msg.request_id = 56757U;
    msg.command = 156U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 22731U;
    tmp_msg_0.lat = 0.20403527990330916;
    tmp_msg_0.lon = 0.8605032209986363;
    tmp_msg_0.z = 0.7562339672255096;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.speed = 0.13484009981481992;
    tmp_msg_0.speed_units = 189U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6908471598967686;
    tmp_tmp_msg_0_0.y = 0.8830561887824144;
    tmp_tmp_msg_0_0.z = 0.04998355466677851;
    tmp_tmp_msg_0_0.t = 0.032417612116693806;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LEWGPYNDVBXZDGOKOEQJRUEFLMGQDOCWTXTANIWJJAFFCJNKPWEPQBBCEHOFUBSBNIWIIIDEDVRPFRSRZYXCMGNLXDYQUIKVHCYTVYDE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51966U;
    msg.info.assign("KQJVLBTFDJYNBFPPSGPIUYBMJEHNLAGAUQAJWQTUNDKSSJNNPZZYULGFVZEZWFCCGDDEFJBWXJVORVSSHCWMZYSAWMEUHBOZAMCYFXQJAVITQKHKKCWIKPJJQCXOOHSLDRAITCYTDUPVWGRBLLLEZZGOEMNWEQ");

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
    msg.setTimeStamp(0.9324665558465618);
    msg.setSource(17909U);
    msg.setSourceEntity(115U);
    msg.setDestination(45801U);
    msg.setDestinationEntity(225U);
    msg.type = 26U;
    msg.request_id = 32714U;
    msg.command = 2U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 2606U;
    tmp_msg_0.control_ent = 156U;
    tmp_msg_0.timeout = 0.947317143139084;
    tmp_msg_0.loiter_radius = 0.45154918220662266;
    tmp_msg_0.altitude_interval = 0.09568637850038986;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8733U;
    msg.info.assign("AVXDDAHEFNLCRZRGKKUKFTYUYKEVZETDTQLMPCBFTXPMBOHNPPUULTSCZODBWZBAIPMLMOBAROHKQVQRQJLDHUFMEUAGNWCWYLSBYRDWOFZIGIVPAUNHQEPXRXNIKHPRSBHJPMISLECGWSQHXSTYVKWNSGLAUEQOFFAZNISTKXVVOJ");

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
    msg.setTimeStamp(0.27767544884086015);
    msg.setSource(13950U);
    msg.setSourceEntity(39U);
    msg.setDestination(11502U);
    msg.setDestinationEntity(209U);
    msg.type = 244U;
    msg.request_id = 16136U;
    msg.command = 30U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.19417465796086208;
    tmp_msg_0.lon = 0.28355838623885776;
    tmp_msg_0.z = 0.779297869868446;
    tmp_msg_0.z_units = 102U;
    tmp_msg_0.radius = 0.14037390230607794;
    tmp_msg_0.duration = 4396U;
    tmp_msg_0.speed = 0.7317192008602931;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.custom.assign("FNLOEOMKJITYXANVYBUTXGDKTQTRZJAYVCBOLYMEAFIEHKVNDPJSFTLOYPVQPIQFNRHXEDBDWPNQIOJLGWCNFMHVUSFOGHQARTRMAKPCJMCZRGCZRXEVVAOCDLITBFCXUKJQBQQPBWZKYUJMYZARHLJDQMXOUXDEFZK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10306U;
    msg.info.assign("NFQZPFJBVHPCMLPXAVORQIETXZOPCGIVCSDEMTDFFDVIMEBJJMZTQBHGZETCKGRQLZAKBZIXPHAUAWULIUJWUBJBLBCPDNCJTLVQFUASNNHMAGWEZEYTHORYVSDNQYOKWCWAKOXYUAKNOCRIYFERXTMWZXMFHMGRNWPHYRJVTU");

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
    msg.setTimeStamp(0.21607818058104045);
    msg.setSource(59140U);
    msg.setSourceEntity(239U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(145U);
    msg.command = 127U;
    msg.entities.assign("XHOMKKYGTUOZBBBIJRATCWNHVPUQAHSYIKWGLUDWMNSCJSWSFAEPMBARXZRKIWLYWDMSOZFPODFVOIYPBYKQTIVXXDAYZCXM");

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
    msg.setTimeStamp(0.7482760580492379);
    msg.setSource(13449U);
    msg.setSourceEntity(244U);
    msg.setDestination(64079U);
    msg.setDestinationEntity(224U);
    msg.command = 220U;
    msg.entities.assign("FCSLKBOXQJAHXNRRVETWCTWQZRPYFFZAVDOYPZHIRGKEVWPBCNMPODIWJVJWZRQOTXGGWSIPJGIPWJNNGNVSUUHFDQTYSOJIMXKPUILBHSJMBYEFZTWHVXUGKFRQWUYXUUBLSGBJETIQXVCDHCGZKFIKPRNBAUZBAVXUHSMEASYMJFZXNCEEDKPCHHSTKMLEBWALLIBSTNQOMYCYATFDYDXPELKRLHAGANZY");

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
    msg.setTimeStamp(0.3069884428304942);
    msg.setSource(1250U);
    msg.setSourceEntity(165U);
    msg.setDestination(16717U);
    msg.setDestinationEntity(33U);
    msg.command = 31U;
    msg.entities.assign("YBWCLELEOVRHPSFYSVCIUJWVHOUDQSIXRYXPGHGUUVYWMMOQVKRAAYQMLFDNSC");

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
    msg.setTimeStamp(0.24488771023454792);
    msg.setSource(32385U);
    msg.setSourceEntity(48U);
    msg.setDestination(60612U);
    msg.setDestinationEntity(3U);
    msg.mcount = 109U;
    msg.mnames.assign("OMDITVIMDFXGDEMRAXOOVMOWARURRNYEJSALWFYLSELEEVUIXXJFZZXIVHKZIZHJWHBBZCIUCKBUGAHUHKBNGRVHRGGQSCEODXZELXYSTXYOVNHPJNKCNCJPISSINYKFFGLIDLWGFQCOMSNXURPLULGMUYELVMQCM");
    msg.ecount = 139U;
    msg.enames.assign("CWZLMKZRQEVEVZVIXORTLRHFXRXLFHMYNXKIVUCSPPOJFXBWPFDDPKBBKHUTKHDMGIVYTRWCUSFNZILKCXLJFKZUJYGCQYVTBTRSAAQUMUKTJDXANBUAGBWBZRVS");
    msg.ccount = 1U;
    msg.cnames.assign("ZRENCVIEWQWXKBTMGSJPCICQHTDDWNPRPDZUONGLYBVKUPMEXRIGRWLUYMENFUOMJXLMRKCSEAOPDGMNLHHVFAPNGKQIXEEDNUYFXYWEMQWKFLTFLBJBMCTSXILGOQLCQBHSWYRVCJASYTHSAATKSWFJZKJKXZLNMBFUVCCECZOXDIAAHIVTVHPRAQPRUVZXBKI");
    msg.last_error.assign("JDHAUILUSGUEQOHJETJYALFFELAOBHKYESNTSYRGDIYDQMTOQGCK");
    msg.last_error_time = 0.6506738873937582;

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
    msg.setTimeStamp(0.08315303972073318);
    msg.setSource(44121U);
    msg.setSourceEntity(55U);
    msg.setDestination(42768U);
    msg.setDestinationEntity(29U);
    msg.mcount = 106U;
    msg.mnames.assign("NKUNCIHVUEQLTWSOKYRKKDNHPPZXCAAYILGPVZHQUMFCZBXXBSROUNAOJDZBWAGJYIVACQJBECHBWXOZLNEHROPWBGRSFNWWFMPRDWRUDJNQEVWEEKWVSYDBNSOUEVDOFPTBDAIQQULKVLOKJVAYFACXIPCRCPQIRTNQSIHABPZL");
    msg.ecount = 102U;
    msg.enames.assign("GHDYAZHDIYEQIMIGPTBLUCRRMSFWBIKCNTSVIGLJLTUXRUFFLFKWBMOOBDEYDERMABPZASRYJDKODA");
    msg.ccount = 191U;
    msg.cnames.assign("YKDASLNZLSSHJHOKXITAMWLWMKNMRAZCDFZCJYGOLXUBEXCKAUXMCQTZFSVHRLVRTBUOEXSZEHITGJPUWYGQM");
    msg.last_error.assign("JZIYLKXPPCVUFTNEOOPYPBZUOSZHWQHXVDGDLIMVJWBHTFMXGJTSHYHRAWVEFCZLBUEVTPSDPGZMFFEHKUESPGAKKJCFXHIEILUVODCKLUJEASOOVNZBXTYASCILZMIFRTSXCW");
    msg.last_error_time = 0.9198517643846522;

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
    msg.setTimeStamp(0.09214936891906911);
    msg.setSource(49095U);
    msg.setSourceEntity(170U);
    msg.setDestination(12866U);
    msg.setDestinationEntity(180U);
    msg.mcount = 25U;
    msg.mnames.assign("IMATRWSJJTKSNVXUBDWOKHTZDQKJDXNGMNEAXCFJFOQXCEYGSNRTEXGJSXAVPGGOLPMZDYLHNPNVOAUIWKLQIHMBWTINQYRUKWDBREVZJSBEIQCTLSMMBBHZQFTRYFYATXHESWPPDGBDW");
    msg.ecount = 18U;
    msg.enames.assign("NVTUKJIOXHDIELVXONILUDTTRRMDLSEWHQQGMLTWYLRORSLBHFNQUGUMXPCKQGMPEMWFGWVEJBVRDXHEODFZHSNCWYAKBRJIUFXMXADADFQTMONRWYAGTWYJSXUVUECFTNTBRCJSOPJNEBSTIKDGFLAAGUEZPCIFHBMZNXLRWPCBP");
    msg.ccount = 156U;
    msg.cnames.assign("MEOOOCEHBEGBAVXVFFEZNLPHJUXWRQKPRRHIGSMNOTFSEIICSSCOMMOBZUTUJIYPMEUQHORUNDDIJWGHRLLVYVUIUABUGWHFCFDANBSKMBZSWJBGZFLKBQYSLXPTPQHTSWMXCHCQPDYUQNWVESFRPLXANEELYPJAIHGXXLPJMJTGXDINASLYPGXKYXZBVRKQCAODAUWDZMWTTJONJATFDRLWZTNQCTVGOJWCZYZFKKVMNHRDQBDQKEGKZF");
    msg.last_error.assign("FLOEVPNFOKXPESBVHFYNTUVZSDYWHGQAWMKPLNPVZZYAQEKQBFEYBXKDXJHHUJKQMJ");
    msg.last_error_time = 0.31292283230755213;

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
    msg.setTimeStamp(0.1786502733145493);
    msg.setSource(7250U);
    msg.setSourceEntity(250U);
    msg.setDestination(61351U);
    msg.setDestinationEntity(75U);
    msg.mask = 55U;
    msg.max_depth = 0.8292700236239824;
    msg.min_altitude = 0.22240636559208038;
    msg.max_altitude = 0.42986643901423593;
    msg.min_speed = 0.21657161957266358;
    msg.max_speed = 0.1323221102619796;
    msg.max_vrate = 0.9971689892724955;
    msg.lat = 0.6197748787960309;
    msg.lon = 0.7943397332927478;
    msg.orientation = 0.7183901021968768;
    msg.width = 0.2087018133849069;
    msg.length = 0.5479294203694021;

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
    msg.setTimeStamp(0.6096114447860009);
    msg.setSource(41632U);
    msg.setSourceEntity(67U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(69U);
    msg.mask = 238U;
    msg.max_depth = 0.909305915480705;
    msg.min_altitude = 0.6005322102191006;
    msg.max_altitude = 0.24374010885520003;
    msg.min_speed = 0.2654748799532517;
    msg.max_speed = 0.8822929137167554;
    msg.max_vrate = 0.9271422416206134;
    msg.lat = 0.5340792078660994;
    msg.lon = 0.4117795926675655;
    msg.orientation = 0.8823604035299888;
    msg.width = 0.772282991303088;
    msg.length = 0.6128432903492049;

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
    msg.setTimeStamp(0.23640113707368937);
    msg.setSource(57595U);
    msg.setSourceEntity(57U);
    msg.setDestination(3300U);
    msg.setDestinationEntity(61U);
    msg.mask = 88U;
    msg.max_depth = 0.4125582172543274;
    msg.min_altitude = 0.01744275174212906;
    msg.max_altitude = 0.15064399089607317;
    msg.min_speed = 0.8612572923963117;
    msg.max_speed = 0.22426480167166518;
    msg.max_vrate = 0.24890138756186797;
    msg.lat = 0.14377554792688585;
    msg.lon = 0.4054796298640835;
    msg.orientation = 0.5051636881264561;
    msg.width = 0.3098980021882167;
    msg.length = 0.30743505789191594;

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
    msg.setTimeStamp(0.7643868484394665);
    msg.setSource(31813U);
    msg.setSourceEntity(146U);
    msg.setDestination(39202U);
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
    msg.setTimeStamp(0.7021265073632836);
    msg.setSource(22685U);
    msg.setSourceEntity(131U);
    msg.setDestination(21353U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.3305616921756225);
    msg.setSource(4976U);
    msg.setSourceEntity(158U);
    msg.setDestination(36300U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.42353262614251275);
    msg.setSource(54192U);
    msg.setSourceEntity(56U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(175U);
    msg.duration = 6958U;

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
    msg.setTimeStamp(0.8564437802989916);
    msg.setSource(32075U);
    msg.setSourceEntity(96U);
    msg.setDestination(13958U);
    msg.setDestinationEntity(228U);
    msg.duration = 1846U;

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
    msg.setTimeStamp(0.9664836918418974);
    msg.setSource(43118U);
    msg.setSourceEntity(165U);
    msg.setDestination(45080U);
    msg.setDestinationEntity(43U);
    msg.duration = 50298U;

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
    msg.setTimeStamp(0.6909031211954991);
    msg.setSource(65414U);
    msg.setSourceEntity(194U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(3U);
    msg.enable = 176U;
    msg.mask = 2855772445U;
    msg.scope_ref = 1650908444U;

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
    msg.setTimeStamp(0.27777949478854125);
    msg.setSource(3446U);
    msg.setSourceEntity(125U);
    msg.setDestination(38494U);
    msg.setDestinationEntity(114U);
    msg.enable = 32U;
    msg.mask = 551431072U;
    msg.scope_ref = 3820888338U;

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
    msg.setTimeStamp(0.9517044845148184);
    msg.setSource(44043U);
    msg.setSourceEntity(186U);
    msg.setDestination(56594U);
    msg.setDestinationEntity(204U);
    msg.enable = 211U;
    msg.mask = 292444069U;
    msg.scope_ref = 2207803949U;

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
    msg.setTimeStamp(0.5365964388113998);
    msg.setSource(40412U);
    msg.setSourceEntity(177U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(232U);
    msg.medium = 247U;

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
    msg.setTimeStamp(0.9624959135629678);
    msg.setSource(34563U);
    msg.setSourceEntity(157U);
    msg.setDestination(9577U);
    msg.setDestinationEntity(122U);
    msg.medium = 63U;

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
    msg.setTimeStamp(0.5353447047649813);
    msg.setSource(31251U);
    msg.setSourceEntity(116U);
    msg.setDestination(10046U);
    msg.setDestinationEntity(242U);
    msg.medium = 105U;

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
    msg.setTimeStamp(0.49495867632771584);
    msg.setSource(18200U);
    msg.setSourceEntity(125U);
    msg.setDestination(22675U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6704724119282383;
    msg.type = 171U;

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
    msg.setTimeStamp(0.2721186667495892);
    msg.setSource(27606U);
    msg.setSourceEntity(210U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7014212317860578;
    msg.type = 106U;

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
    msg.setTimeStamp(0.5006309346227361);
    msg.setSource(28837U);
    msg.setSourceEntity(13U);
    msg.setDestination(51912U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8000611743881613;
    msg.type = 224U;

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
    msg.setTimeStamp(0.045069090468455086);
    msg.setSource(34076U);
    msg.setSourceEntity(189U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(42U);
    msg.possimerr = 0.9167652264825765;
    msg.converg = 0.1570269988717642;
    msg.turbulence = 0.383137371777316;
    msg.possimmon = 151U;
    msg.commmon = 97U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.357599939033316);
    msg.setSource(25709U);
    msg.setSourceEntity(12U);
    msg.setDestination(28659U);
    msg.setDestinationEntity(22U);
    msg.possimerr = 0.8169200867452705;
    msg.converg = 0.42822459243915256;
    msg.turbulence = 0.1817947934087769;
    msg.possimmon = 128U;
    msg.commmon = 61U;
    msg.convergmon = 59U;

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
    msg.setTimeStamp(0.5214691789437631);
    msg.setSource(43516U);
    msg.setSourceEntity(87U);
    msg.setDestination(8549U);
    msg.setDestinationEntity(173U);
    msg.possimerr = 0.44341025065598816;
    msg.converg = 0.32783362510475134;
    msg.turbulence = 0.058729208490828855;
    msg.possimmon = 159U;
    msg.commmon = 39U;
    msg.convergmon = 57U;

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
    msg.setTimeStamp(0.9261057042436047);
    msg.setSource(36368U);
    msg.setSourceEntity(87U);
    msg.setDestination(27244U);
    msg.setDestinationEntity(97U);
    msg.autonomy = 130U;
    msg.mode.assign("NZVNYFQOOMPZNXQULPTEGIJOXMBGKRPRIPECZAOYREVETXCRKDMBPLKHJMUATQDBVIJCALVJVVEZHALUOKCHEGDSRSYEFXZJEBZCPTKWJGWKZ");

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
    msg.setTimeStamp(0.2388211495079139);
    msg.setSource(29995U);
    msg.setSourceEntity(7U);
    msg.setDestination(59506U);
    msg.setDestinationEntity(43U);
    msg.autonomy = 156U;
    msg.mode.assign("OQVVJUKIAAUFFYMBRHVPGRIKSQULFRWUDDWNTZIQGCWCOYJUEHZNSTYCVXNNKUSDJHNKBLKOJPVTDCQFATBRHMNFWIDEMDNVNIRRRBYDGFPKETLYG");

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
    msg.setTimeStamp(0.3339944511409223);
    msg.setSource(24830U);
    msg.setSourceEntity(145U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(147U);
    msg.autonomy = 161U;
    msg.mode.assign("XIQIZQFVZRCXJBBTHPWJHMUEUOBCWGYEIIXKXPWYSOWMSTYRONMYPCPEDHEIFJOAVPMGAQRSEIMZGCXWYLTVKNYHVXADBFBCAFYTJDPLAJVESFRULDWLGYNTXAUAUOOQICDBVDPVXBIEUNJWXUFWAMVCH");

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
    msg.setTimeStamp(0.5105398915585189);
    msg.setSource(23058U);
    msg.setSourceEntity(36U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(167U);
    msg.type = 246U;
    msg.op = 7U;
    msg.possimerr = 0.1439439141259835;
    msg.converg = 0.940371125915191;
    msg.turbulence = 0.635490572899534;
    msg.possimmon = 144U;
    msg.commmon = 88U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.3135718773057432);
    msg.setSource(26818U);
    msg.setSourceEntity(7U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(31U);
    msg.type = 94U;
    msg.op = 85U;
    msg.possimerr = 0.7426662879370409;
    msg.converg = 0.33462595391525285;
    msg.turbulence = 0.9255227940170248;
    msg.possimmon = 243U;
    msg.commmon = 17U;
    msg.convergmon = 210U;

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
    msg.setTimeStamp(0.9064047140439438);
    msg.setSource(50915U);
    msg.setSourceEntity(4U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(131U);
    msg.type = 152U;
    msg.op = 59U;
    msg.possimerr = 0.804896299456718;
    msg.converg = 0.2699022291646057;
    msg.turbulence = 0.6776104445586484;
    msg.possimmon = 101U;
    msg.commmon = 66U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.6960887901113759);
    msg.setSource(58736U);
    msg.setSourceEntity(112U);
    msg.setDestination(23074U);
    msg.setDestinationEntity(125U);
    msg.op = 230U;
    msg.comm_interface = 220U;
    msg.period = 4353U;
    msg.sys_dst.assign("ZEMPFCIPJLVFPBAISQQRBZNVFNCYIZMZRUVIDRWDXLIPFWTZFKHYNNOTGBVUQVJNJDKCVSYEFMRPNGSGMXPHCXMCYURXWVKUWXILQEYPBXKEBGJXOADGGOMACIMSUYAKDLKLHZXRXUEBJSBMRUVGZRZUNQIQAHLQKKDHONTOVAYNFGPURCWTEANQAQJLWOWWYLEPHTHBTSOXCWMDZDEAMBODFYTPGOOAJISJFGLKCHELIJSSVDTSBHRZWT");

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
    msg.setTimeStamp(0.3222432853324346);
    msg.setSource(12220U);
    msg.setSourceEntity(166U);
    msg.setDestination(26124U);
    msg.setDestinationEntity(245U);
    msg.op = 93U;
    msg.comm_interface = 11U;
    msg.period = 31069U;
    msg.sys_dst.assign("CKOLQBJREWIXAAVJPDAZNRJONCWODPGLNPDFXCZHJTPGVYAUSHQUVRHLTMRMMLZUEBYUCRZGYSIYYEHBCXKWDTWGAOJUQPBECDSWCOMLZVEJBBKZEPYBUPQGSPSKARWFTEMFBKPRUWMNCZSYHFBKKTDKUTVQLILMTOVJQSLYHGGFVHUADYONRXVXEDCRHTKVJPBNZQQIJYGEZDFTTQQAOFESSORAWWZNNLMGFHAGISHMCXINUDNIXXIXIJW");

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
    msg.setTimeStamp(0.47162354238112925);
    msg.setSource(31697U);
    msg.setSourceEntity(237U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(142U);
    msg.op = 102U;
    msg.comm_interface = 51U;
    msg.period = 34685U;
    msg.sys_dst.assign("RHFKFSVJNEIEZUICPTAVTTQINUXTRKRIMLYSAWDHLNHCZJGLVRKMSYFPNGJWUNGRZOXCHCGCZQQXIEWFHOATSRYCCDGOMAEXGISJGHXQMKWPFVSMHJBUKMUNAZZOIIHGXJKFAIPPWYDBOXQUQNCZOUTDDKIQYVDBTLYCLUZETNXMPWA");

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
    msg.setTimeStamp(0.18776014954594578);
    msg.setSource(14342U);
    msg.setSourceEntity(0U);
    msg.setDestination(17803U);
    msg.setDestinationEntity(170U);
    msg.stime = 233474959U;
    msg.latitude = 0.3955356721455263;
    msg.longitude = 0.787657433222387;
    msg.altitude = 29336U;
    msg.depth = 25483U;
    msg.heading = 51452U;
    msg.speed = 11357;
    msg.fuel = -112;
    msg.exec_state = 16;
    msg.plan_checksum = 20047U;

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
    msg.setTimeStamp(0.6270556763351751);
    msg.setSource(33461U);
    msg.setSourceEntity(1U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(253U);
    msg.stime = 1765160857U;
    msg.latitude = 0.07148420807835765;
    msg.longitude = 0.7598231728272643;
    msg.altitude = 40839U;
    msg.depth = 61445U;
    msg.heading = 45088U;
    msg.speed = -27920;
    msg.fuel = -90;
    msg.exec_state = -14;
    msg.plan_checksum = 27799U;

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
    msg.setTimeStamp(0.5829444058405862);
    msg.setSource(54794U);
    msg.setSourceEntity(200U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(210U);
    msg.stime = 836324124U;
    msg.latitude = 0.7810075100185928;
    msg.longitude = 0.9157419334360191;
    msg.altitude = 36620U;
    msg.depth = 62027U;
    msg.heading = 60801U;
    msg.speed = -2845;
    msg.fuel = 41;
    msg.exec_state = -49;
    msg.plan_checksum = 30028U;

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
    msg.setTimeStamp(0.7361389425662213);
    msg.setSource(41057U);
    msg.setSourceEntity(197U);
    msg.setDestination(51275U);
    msg.setDestinationEntity(230U);
    msg.req_id = 41989U;
    msg.comm_mean = 40U;
    msg.destination.assign("WSXXRDRAZTMGHNFOBXJEFHZISIHQQEMWTEHGPQMEOTCKZKUKYOCPLDISZJXVUSXCMFBUDLUWMOYJHEOERQSFILLPLADTXIQKZWANWBVFWRBEVHNLOAOYRPFWVMKUKSRCQHYNMBZGTPHJIU");
    msg.deadline = 0.640473466870781;
    msg.range = 0.6481388688852253;
    msg.data_mode = 27U;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 209U;
    tmp_msg_0.period = 1614761864U;
    tmp_msg_0.duty_cycle = 3018765136U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ILGSTWYQBLMRKOHVJNCGDIPSAYYBGEEHZTCIJSZYYNEUUGRPSZXIOJVLJWFJAWAFAWPETZRASOMNWVGWYZWVVFYYZQBWNUXYVWDBQIRSNTHJHNUKLFCBKTQZDOMZOUCPQLELOIIFVXNDHKAVIKFIMEXCEPSUAGAPXDBUPCFGJHRRKKTKJQUYBMMNXUMPXMDVKLHVXBRWXRFCFOGOGQHAJ");
    const signed char tmp_msg_1[] = {-10, 24, 24, 9, -112, -62, 59, -102, 5, 10, 37, -114, 36, 100, 47, 77, -16, 50, 55, -111, -104, 83, 54, -30, 90, 101, -65, 62, -2, 20, -71, 88, -49, -93, 54, 55, 44, 43, -112, -124, -93, 106, 32, 104, -106, 88, -72, 72, 44, -29, -60, 10, -120, 42, 66, -67, 27, -128, 50, 15, 24, -56, -67, -113, 20, -45, 86, 44, -20, 90, -68, -51, 104, 67, 0, -15, -114, -112, 117, -92, -69, 50, 111, 25, 62, 91, -9, 96, 66, 47, -117, -110, 90, 42, -105, -24, -98, -97, -15, -77, 63, 60, 2, -71, 86, 75, 60, -48, -83, -27, -43, 37, -27, -109, -93, -86, 91, -96, 65, -55, 4, -105, -37, 57, -20, 51, 89, 77, 114, 95, -52, -56, -67, -101, 40, 35, 115, -84, 20, -29, 93, 105, 75, 78, 111, 50, -43, 60, -119, -4, 19, -81, -63, -61, -54, -72, 85, 28, 104, -119, 88, 6, -21, 84, -63, 8, 126, -6, 73, -44, 126, -30, 34};
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
    msg.setTimeStamp(0.7703423589521402);
    msg.setSource(42164U);
    msg.setSourceEntity(201U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(130U);
    msg.req_id = 24365U;
    msg.comm_mean = 145U;
    msg.destination.assign("SDYYXIXWQDLELJZMMWDIFMZEKNGMRAHBPHINHHAWUXFFJBZPQXQOTNEFINTBMTHATDHDVFPYWKALTLBADKRZYKRXJCMKLSBKZQBHOYEQGOSJEGSRLWANJSMXPESPAOUKPXRFIGYHCRRMZCXTXGVM");
    msg.deadline = 0.9465091906680104;
    msg.range = 0.35825682812757054;
    msg.data_mode = 69U;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XLWXZDCQBNRKPYFUKHEUHUIDMXPROKFOVLDOBFZNJVEJWGIPHNGYSNBUQZDXOQKIQEPMOZAHVMZWJZSGC");
    tmp_msg_0.attr_type = 247U;
    tmp_msg_0.min.assign("WXASINUYELHXNVBJTULTYVKQMZRBNKQXLSTKBPVZFAYFSDNNKLISETQNCCUCFAQKDOWSUVMMCDTXOMKPBYVAENNGIOGZLORITGIAUXKDPZVJYBMAZOOBHVPWDLCTVAZHQURJMRBNRFEYIRGGEBEIJXFLGWIFJBZGSJFOPKESXFHUHWRKLPYSGJCORXVQUNWCYKAXDORPLPJDHHRHTYSTACIG");
    tmp_msg_0.max.assign("SFWNIKDCSFLYJXUFVNDXYMKNMFWBQHPFLMZVXRNTTPIVOQMMGAZLRRMESOERAOAQAUHKPHOXJTUMUPPYIBRQGJRVVWBDHTYSDQGBHLGWHPZMHXZDBAQKFVVZFVWSWTOKIIGZXTBHURYNIUMOGJEPUODBEGJJEVNDLXUTSJCIFKVPRDJZCQSSEJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZJSWORVMREPNBQGYXVGDVCXXYUAEHKQLDVOSKZMHSYQGIXURYWNWKMXJJFCQNGBXADTAFMLLVGBQAZGMYIVSDGCXNXIOEUWNTCCMJOPLVOSATGZYSTTONNKSBUNKELUULVSEBKFOKIRIRCJPPHIUUHHN");
    const signed char tmp_msg_1[] = {-111, -43, 72, -63, -93, -11, -10, -14, 28, 39, 61, 78, -92, -1, 97, 95, -30, 6, -68, 82, -84, 22, 101, -75, -27, -88, -80, -11, 58, 120, 22, 12, 26, -22, 88, -31, -28, -56, 79, 46, -88, -41, 93, -115, -52, 13, -96, -3, 15, 19, 12, -7, -52, 63, 19, 4, 39, 7, -90, 91, 9, -49, 36, 120, -117, 12, 74, 15, 36, -4, -83, 98, 94, -84, -92, 78, 46, -15, -51, -70, -46, -98, -57, 120, -87, 69, 105, 31, 5, 34, -80, -61, 61, 120, 58, 34, -46, 115, 98, -102, -23, 94, -33, -74, -29, 89, 103, -80, 5, -102, -58, 119, -7, -88, 18, -83, 42, 125, -103, 37, 80, 100, -111, 51, 57, 36, -67, 35, 17, 81, 119, 65, -57, 46, -15, -82, 84, 109, 64, 59, 86, -12, -29, -9, -24, -10, 10, -83, 69, -27, 65, -37, 14, 15, -35, -3, -39, -79, -32, 69, 37, 18, -97, 93, -25, -60, 14, -111, 75, -17, -127, -44, 43, 101, -124, -27, -1, -20, 82, -107, 89, 104, -37, 42, -23, -84, 81, 118, -18, -105, -33, -9, 122, -57, -76, -112, 85, -120, -46, 72, -72, 78, -35, 81, -34, 26, -6, -108, 72, -22, 10, -2, -9, -42, -37, -20, -67, 69, -44, 124, -128, 91, 114, -71, -68, -19, -31, 58, -10, 23, 114, 126, -38, 99};
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
    msg.setTimeStamp(0.15422509875685464);
    msg.setSource(36005U);
    msg.setSourceEntity(6U);
    msg.setDestination(32139U);
    msg.setDestinationEntity(2U);
    msg.req_id = 61142U;
    msg.comm_mean = 100U;
    msg.destination.assign("ZFVWJWNTDQXBVPJFMACJIKNBGRXMBRSFVYVCOADWQANXHIEOEKMHMNURPSWLTTLMWKUSRRIJLJFHHGGRBAWCPCIKGNFHIDUSRCUEPFXUZSDTIYKBXWGZEMRTBADLYVEE");
    msg.deadline = 0.5465600654045062;
    msg.range = 0.754823013479201;
    msg.data_mode = 253U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 44827U;
    tmp_msg_0.control_ent = 203U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 106U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5268070117615125;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 175U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.18011432145501005;
    tmp_tmp_tmp_msg_0_0_1.z_units = 85U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.02054063558815533;
    tmp_tmp_msg_0_0.lon = 0.9597560321656954;
    tmp_tmp_msg_0_0.radius = 0.7971716846724511;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 59U;
    tmp_msg_0.proximity = 210U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MLKDEHZULUTCCFKDDHMMTPHERQYJAXSUUBHNXIWDODMFOVBIZFOZARYYNUGMECKFTLXJHJGNYLMAKCBNWDTLQWNDPDJPLVYNOBCYOJBKQNJFNFGSJBSRWQKMXKXLVOPWVJHIOMQUPHOCPTSUVPZZRWCSRPKRQGSBYVCWQTTSAEXQEEGOZXIXAGTVHAIFTVEPRBWFGAELZIA");
    const signed char tmp_msg_1[] = {-63, -4, -119, 106, -89, -29, 69, -83, -107, -108, 12, -119, -93, -29, 80, 115, -22, -23, 24, 44, -23, 95, -49, -45, -13, 31, 50, -97, -35, 47};
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
    msg.setTimeStamp(0.39475488077408305);
    msg.setSource(56677U);
    msg.setSourceEntity(196U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(4U);
    msg.req_id = 5044U;
    msg.status = 103U;
    msg.range = 0.8896963938773599;
    msg.info.assign("QHMPVZFBQRXSFTLILOHKROCBZEWYMJDRWJIJSYMJXRRTTGUAOYFPYJUPZHAGOBBHDATZCVNCEQUXPTGWOAHECFNRCNUCJLINNUVZFORTFHKQRWWJPUJYPRGSZMCBPNIXMWXSN");

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
    msg.setTimeStamp(0.5965153439046772);
    msg.setSource(35727U);
    msg.setSourceEntity(18U);
    msg.setDestination(27740U);
    msg.setDestinationEntity(145U);
    msg.req_id = 46574U;
    msg.status = 64U;
    msg.range = 0.7964721915334695;
    msg.info.assign("ZLGTJVPNLMVOJJHXJNVBMXBYHRWLKEDWVFGRSXLEPMLARPATRNMCONNCISCBIHSOAAQUHZFRFVYXSGZWTQUTSTOIWHPPQRMMGFHVWF");

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
    msg.setTimeStamp(0.2667052421159344);
    msg.setSource(64736U);
    msg.setSourceEntity(0U);
    msg.setDestination(6725U);
    msg.setDestinationEntity(128U);
    msg.req_id = 33770U;
    msg.status = 116U;
    msg.range = 0.9880865405482673;
    msg.info.assign("WCHJAYRCUINKEXTQGZCGSYVEYZJYAPMIHJYRXBFEPATJFGCGHDLHBLREMLFWIHKXXOPSTLPQPEDSLIAITAKRXJHHUZURAKGMCBDDYDOZBERPVNEFIC");

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
    msg.setTimeStamp(0.5919993093231022);
    msg.setSource(27234U);
    msg.setSourceEntity(98U);
    msg.setDestination(54202U);
    msg.setDestinationEntity(90U);
    msg.req_id = 54431U;
    msg.destination.assign("PHCBRCGLIRKDJBEZETJXFHMHKERSXUVLPAFNLBLWMTVSVHCCEUKWKFMSMUKQHRYTUTLBTVYMXWNOJVYBDKHJRTSIBAWJOSBNLIFFPNNEXOQZFJQAIOCDUTZNVGQOIAZHYDEWIQSPGXVVZDNYEFSNZLARCXTUDQWREIYIWCUGOAAJGXIDYXWTYUTWMRVFBGPZLLEJNDXMGCZPGSQHCFBUMLOKJBFQAPQZHGXRIAQA");
    msg.timeout = 0.22834308696493733;
    msg.sms_text.assign("QTIQWJMBPCUHEJBHQWOAZCUDRYZTUHFNNVRZTQFCWKHMZUEPKACXVPGYPINRBUNHOGVLBDLEOYUDCFLTMYBFOGLOMIXNYPVUJIVDGVWRRIZQDWENVXHNJUTZMWJJMHDMWLBKADUJLSSLXGRXZCNRVCYODK");

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
    msg.setTimeStamp(0.21820111954264032);
    msg.setSource(8828U);
    msg.setSourceEntity(86U);
    msg.setDestination(36002U);
    msg.setDestinationEntity(33U);
    msg.req_id = 45131U;
    msg.destination.assign("RVQDZYFTSO");
    msg.timeout = 0.7036349097252369;
    msg.sms_text.assign("HRHZGBASQCQGAVTGDOLNNUHZSYJCKTFXIH");

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
    msg.setTimeStamp(0.26260238442811934);
    msg.setSource(22795U);
    msg.setSourceEntity(228U);
    msg.setDestination(26083U);
    msg.setDestinationEntity(1U);
    msg.req_id = 49624U;
    msg.destination.assign("PUUPJTRIMHFMJYERQIOLUOICYRMWOOXJJPHGGATSHJZNOCUGBRCSIQRYIPZRVCPDOAGDGZXUM");
    msg.timeout = 0.2452637328943723;
    msg.sms_text.assign("BGWUSNZKRNPOICOGJDDJVAKPAJUBCYLLLHHYQAGFACTHKKCDUVGDGMRZFQZBMIVZHDJFQSMHJTLTXUHBTPOHDXCLILQSXFXWCGISUNULPQOXXEVZTZKIYCQEQZOVIWRAADNYEPBWNZAKITNBVUTBXGQMGISSUOHR");

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
    msg.setTimeStamp(0.26707827744878343);
    msg.setSource(65469U);
    msg.setSourceEntity(213U);
    msg.setDestination(11477U);
    msg.setDestinationEntity(116U);
    msg.req_id = 44749U;
    msg.status = 231U;
    msg.info.assign("VPCKAKIXIOBDVWOUISWGCSKQDGMTVZSTSDQOUEAVMTRNBCKRVOGLKLPUDZWHMTNWXAJGNLYDCVFRCXTW");

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
    msg.setTimeStamp(0.495610746992705);
    msg.setSource(13999U);
    msg.setSourceEntity(181U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(57U);
    msg.req_id = 47258U;
    msg.status = 239U;
    msg.info.assign("SZXTHXOIWLFNKZPBBFXHSYJBKXRAMUQRDBESDHIFNPCYEZCOQE");

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
    msg.setTimeStamp(0.8218682766937679);
    msg.setSource(59646U);
    msg.setSourceEntity(176U);
    msg.setDestination(11046U);
    msg.setDestinationEntity(97U);
    msg.req_id = 60501U;
    msg.status = 75U;
    msg.info.assign("JAYSKIEMAHCEWKYDDRWAKJUPGQVHHVMIKDSQVEFGGZXFOSXPQE");

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
    msg.setTimeStamp(0.6684464280281293);
    msg.setSource(44184U);
    msg.setSourceEntity(196U);
    msg.setDestination(16830U);
    msg.setDestinationEntity(127U);
    msg.state = 161U;

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
    msg.setTimeStamp(0.6061074126494478);
    msg.setSource(6017U);
    msg.setSourceEntity(146U);
    msg.setDestination(11801U);
    msg.setDestinationEntity(192U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.5620169555345046);
    msg.setSource(7542U);
    msg.setSourceEntity(130U);
    msg.setDestination(5236U);
    msg.setDestinationEntity(206U);
    msg.state = 141U;

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
    msg.setTimeStamp(0.6618400384274485);
    msg.setSource(35313U);
    msg.setSourceEntity(177U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(9U);
    msg.state = 131U;

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
    msg.setTimeStamp(0.7304229126029618);
    msg.setSource(26937U);
    msg.setSourceEntity(126U);
    msg.setDestination(49881U);
    msg.setDestinationEntity(226U);
    msg.state = 181U;

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
    msg.setTimeStamp(0.4183820211644734);
    msg.setSource(14032U);
    msg.setSourceEntity(167U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(193U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.8065184342223998);
    msg.setSource(21230U);
    msg.setSourceEntity(175U);
    msg.setDestination(17520U);
    msg.setDestinationEntity(7U);
    msg.req_id = 42882U;
    msg.destination.assign("GMHXTNISWLTEJTBINYFNUPRBJWODCXFQBQLRWMYUVUKYKUHXLNOGCCYVPSBUEIGDTRZCKKFBGPUDIEXDNTSJWLERHSQFDAHPIEFMQRQAHGEEFEABZQAKBWKPSSETPVYVJKWTMFTRLADYSTRMXYYVVUAPWBHJXRNPGOOMJMIWUSVHPK");
    msg.timeout = 0.6067119011689037;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 182U;
    tmp_msg_0.goal_id.assign("DXNLZNVNJIBRWWDHOFZUTPSXPVGBSPUAZKMMDIAWPLJNJXKYNOGIUJTDKSVVGLWZBRNR");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("OOLMIKPLRJKDTEYZXCHYWRDGDZKUDIGQTMYZJFFDEPWACGOGCQEJRNYQLIVOZPVXMBUMZQSXCBTJDZENTLUPVVWHTICOQEUFOAUCJVAJUHEHB");
    tmp_tmp_msg_0_0.predicate.assign("QLLQKCHNNFLALYADZFRXEBTOEVIFXRCESIFRGZGMNZTRUHCDSOBYREOETWUKPTQZYMNCZKZPTQAGUDSIDOUVUSGWXPYECVMUFRXSSBJNAVWDWQKVZDORCWJUVXGNBDMMQIMBIFPKLAUKAFHYCGOGMMWGOISBIVJHADHIPDNTPJJWKEEQLOCPMJEJFHWMKAZ");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ZJPVPKRDDTVGEWDQEJDAXCWIGIKGBAFOYZPOGSNUOZJUCDJFCPAYXBLYMZLMORHRJXPONAXEKOMBMSKBTZRQAGATAPVSWUSHUQLSEZHMXKZYPTOHRTNFWZYCWNQTDAGHNRXBJKQFMGL");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 143U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("RGYPOLXXAVOPJMYXDRUITDIIUSIKMOBZQXJNAVQABFAWQCZYTDFPLWFEETNWOKPJFRAGQNBGKGYEDBLKTDFXLQFOVJEQWYZVSLMILVTCLNBJRSLZFGJSSCRMXBEVRBBICCPHNSTSFUFYRWUANMNAGJTZTQVXCDBEGKJJWVHECNHPOWZDDYGXIXMJUOEUUCWDYSYE");
    tmp_tmp_tmp_msg_0_0_0.max.assign("LFCATYIRTDJOWVMOWQUBOKJYWPKCKGLJVZKHXZYZEFLUNYEDGHJODOIQLFNXQPOZDRCYSPISCZGAEXEXKWLTVWSATXAGJ");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.06345230491716747);
    msg.setSource(53050U);
    msg.setSourceEntity(194U);
    msg.setDestination(7663U);
    msg.setDestinationEntity(182U);
    msg.req_id = 21055U;
    msg.destination.assign("ZNKHSXVSCLZOIUEQKBNEUILTJOMFXMQTSPCNBSUMNOEADGMNHDYCWJYFGOQGPKLSIHILVQVUINFSXTZKARWFBPUXROZJRJGDVAWMCYTQKKACPBWRXDVAV");
    msg.timeout = 0.06619399739742504;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("UOLOEUUSGLUDECLNXIHDWPFKGMMIWUZBJEYZPIYXQGYKQIWZQKNAAJCGKOWEGDLYCBMSXLYVXHHLJTGTFWSTSTTCBQWVOFCOIXKIJIJZFVPKKWKNEBLRYKRHVBDVYVTCRZQNMCNCTMIRAULSQSOIBYARWEZARTZJKYVPHUXFBZOOQJDPBJXOAMMNRMQCUSDDSGHNEESRFDTHENLA");
    tmp_msg_0.value = 43U;
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
    msg.setTimeStamp(0.3128316311578553);
    msg.setSource(39446U);
    msg.setSourceEntity(231U);
    msg.setDestination(19098U);
    msg.setDestinationEntity(6U);
    msg.req_id = 57353U;
    msg.destination.assign("SBTORHXRHMIBHQULZPEYZTJBLDQGCOBEKWCEXRKWJUPEBGOFIRMJHKY");
    msg.timeout = 0.7089235237115608;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 8257U;
    tmp_msg_0.x = 0.16744076103495587;
    tmp_msg_0.y = 0.4200142792642222;
    tmp_msg_0.z = 0.8307315916862434;
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
    msg.setTimeStamp(0.1804562155888857);
    msg.setSource(23688U);
    msg.setSourceEntity(132U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(108U);
    msg.req_id = 30402U;
    msg.status = 42U;
    msg.info.assign("NLHITODQUGBTYAQXTGYCCLYEIJELUPDBCPEWMFVQTPPIRUETZAGHEMYGRKFONVJVJOBFSLNKXSCMZRHHKOSPWXZFIOZDNMYUZLHKYMAWIJDBWNUJQROTUGCXRXLAPOPDXXIORCKKZGYRQVIMUAPCGNBNEHMIUCHLQJSDMDVIFEKQOFJTNSXBGLUDMTMBX");

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
    msg.setTimeStamp(0.15387007215179394);
    msg.setSource(10972U);
    msg.setSourceEntity(217U);
    msg.setDestination(33482U);
    msg.setDestinationEntity(32U);
    msg.req_id = 25652U;
    msg.status = 101U;
    msg.info.assign("ZHGKPISINOPAPGKEEBAWDADHJLWABIPLONYMEHHOXMXUNXCKBMEJRAVLQBTZDZWQUCBNDKDRCQYTCMXKLESRFHEUKBZKFOTSSUIEWCITMYMGWXGFVGNXSCRVRNP");

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
    msg.setTimeStamp(0.08380829395784062);
    msg.setSource(17484U);
    msg.setSourceEntity(139U);
    msg.setDestination(28300U);
    msg.setDestinationEntity(152U);
    msg.req_id = 54383U;
    msg.status = 241U;
    msg.info.assign("JNAPVTDPMYWGXVZFJYLJSMKWHWCMMGKULCLKCEBXYZHTZKMCXYQWQFUPHOBIZCTHATNYELSZPAWOWEBSQHGIEUJNJYKDSRCMSQQOHRKNVCIQXDNVSMDGVEASJYDBUGWUOXFSIIASXNYKBGMTABOECFWXNDOULZAQZXJGVJF");

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
    msg.setTimeStamp(0.8835529770361956);
    msg.setSource(52649U);
    msg.setSourceEntity(133U);
    msg.setDestination(55138U);
    msg.setDestinationEntity(14U);
    msg.name.assign("OJMPNZVYVUVWCAPMXSZGXAQWHYPHUGZXYLRKIUNVGTBAPQYZKBNHHXRUMZLSYBHCCOLURYXECILYRDJFIHAMKSKLQGXWHIJCFEOGWJVEODFOLKRVDRRTGNEDLCKLSZDSHNNJPHOJAJODIKTFGVDSGTSBAPSPNWAEYICEUJOTXAGZFIAMFVTUIDMMQHGNSBQFCEMQPANVKPSKQBFMZTYVIEDOQCMYNWETWZBDXPUOZWQFBU");
    msg.report_time = 0.6415069570703207;
    msg.medium = 201U;
    msg.lat = 0.4986070810613007;
    msg.lon = 0.35380085419238694;
    msg.depth = 0.2111337113443129;
    msg.alt = 0.42680852387804513;
    msg.sog = 0.9890646709354717;
    msg.cog = 0.9634403030878297;

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
    msg.setTimeStamp(0.12410952947420328);
    msg.setSource(13523U);
    msg.setSourceEntity(124U);
    msg.setDestination(13269U);
    msg.setDestinationEntity(235U);
    msg.name.assign("ADCEXSKBYGUGBZVUGJMDXVQCLLXEMSHVGOJASVZWTMINDZHIXOLJAXLHYODOMPHUEJKBPTEXUPXFVNRZSVFSCTULUBDIJTRNWTFJGZQINGRYFEZBSEZKBHAANMORTFP");
    msg.report_time = 0.7459377433544505;
    msg.medium = 196U;
    msg.lat = 0.9468021243850842;
    msg.lon = 0.6481163744449063;
    msg.depth = 0.9323504739982158;
    msg.alt = 0.9073545865224355;
    msg.sog = 0.2044196305780459;
    msg.cog = 0.5136483957227151;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3019799204U;
    tmp_msg_0.destination.assign("RWCXCVELWLTBFEQSANIRHFPYQVPQGGGMWITVDPHSARPMDJLDLAUUWFXEOKHOYESWFEAGGRJPLATIPUMDYUKBFRVQBIEZENYKMYUCCJENZCKZVWVMSX");
    tmp_msg_0.timeout = 34944U;
    const signed char tmp_tmp_msg_0_0[] = {39, 111, 61, 73, 81, -88, -107, 45, 6, 68, -95, -126, -45, -62, -115, 1, 13, -114, -110, -31, -63, 91, -61, 92, -51, 86, -107, 120, 67, 113, 90, 26, -110, 32, -108, 74, 30, 27, 31, 90, -75, -54, 6, 18, 61, -83, -12, 124, -4, -95, 55, 43, -54, 113, -104, -93, 99, 80, 71, -52, 100, -56, 120, 22, 49, -102, -17, -13, -49, 51, -123, 68, 92};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8500729465584729);
    msg.setSource(30501U);
    msg.setSourceEntity(19U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(57U);
    msg.name.assign("KBZGHFXWBHUVEUQANPMXCKYDTDFRGJVAZJLVPEQNYOIXJWHVVGPUTGNQBWJCXCFLCCUSEHENXJZHCMMQPTFIIHLNRAQUGKFTZCNAZNECKDPHBZETLXKOJYPKMMSGIKUTNDLFRDO");
    msg.report_time = 0.9820622363751291;
    msg.medium = 42U;
    msg.lat = 0.20326150682110888;
    msg.lon = 0.5370318584974286;
    msg.depth = 0.6331344402303856;
    msg.alt = 0.39694612702385;
    msg.sog = 0.12394222812439626;
    msg.cog = 0.2513809228541465;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 11897U;
    tmp_msg_0.plan_size = 1020125698U;
    tmp_msg_0.change_time = 0.6872922680882411;
    tmp_msg_0.change_sid = 28965U;
    tmp_msg_0.change_sname.assign("APZQMDBFTDNCEHTDJEXGKTAJQXUHTBPYFGUHDOIQYSGPZSYRMVRZIWHRGEAVNAKCMPPZKWLXFZMYTVCLJUYHJUXSVQPXCSUFEOAAFQVE");
    const signed char tmp_tmp_msg_0_0[] = {-49, 112, -21, 11, 107, -31, 100, -116, -35, 56, 34, -115, -37, 104, 6, 50, 40, -107, 41, -67, -128, -15, -65, 31, -31, -92, -62, -43, -71, -62, 96, -50, -18, 44, 95, 32, 110, -66, -40, 58, -2, 35, 122, 54};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.42924380453199085);
    msg.setSource(55212U);
    msg.setSourceEntity(230U);
    msg.setDestination(11801U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.4963023443653204);
    msg.setSource(10049U);
    msg.setSourceEntity(142U);
    msg.setDestination(63130U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8421235514954726);
    msg.setSource(13547U);
    msg.setSourceEntity(71U);
    msg.setDestination(32167U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.32270960882821775);
    msg.setSource(7762U);
    msg.setSourceEntity(208U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("YWRMZEQWQRREPWOKYWKKQGSJMXTNBFMUMRNVGOTFYVKXOIYOEBRGRDCVBCOWKLGLXZGJTCBMHBUAHPPDLIDNLALEPQYTHMPINMB");
    msg.description.assign("QGMZVFCRNXYGTKKVGJVQFSFZPWMQZBHMGMGDYJFZEBAJCCUETWGBEOLELJNOFDLLUYUHAWUOXAIPRPRVNJDROOVEPQAYQDSUTJKTTFYOJQRXCMHJVIXBEPAKBSVNLC");
    msg.vnamespace.assign("OLKPNMHGIUTLRXXNSWWVOGHBKHNZKWCIFQVTUISFRLFIBJDXDUKPDZIZBYSIOQRJGESKJVXWNDTGMFHNRZELJCRCQDO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DVGRICFMCCQZIPNXRFYKSDEMAXRMPSKXLWKZMIWXVDPXBMKTGQEQJDYBGQKJOQFSXOSOBLCVDOFILWJYNALVPGWXUBFYFYHBTAPDYILZJVSZNVGZUVBGOLZEJHLEHJHSULWXKMGEUIR");
    tmp_msg_0.value.assign("EKSUNDORCGYWWBFVWTNTRLWEJKEFNVMAFISZGLJUUMGDEPTSNXOLCJCYMRGFOVDJSCIKNIGMPSZQIYMVUVEQYLNPAYBPVWQDJDPHIKQXAHEXZDHGIRIYFHJTWRDYQUHLONBQYJANBZDOTYEHMAUGZEZFUXJUPBXXFTJXIQGCFZTUDAKFAPOPHCBRGOESRWPMMAQTXFWABROLSHSNMXRVQSZKLIKHMIZVHTUVBGAWCLCPXEBKORKJ");
    tmp_msg_0.type = 71U;
    tmp_msg_0.access = 229U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PHGHWIDRMQNUHSEOVP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UMUYXCICQCAEIGRKLWNSHIRRTXGHZHMDWDTYETAYEJPFNHGKROGJDDJTGIIGHUALRMQWATMXZYVXFRVCGHILBNXDPMGGSWQBFWRUHDPDKQLBAKNSYXYVQPUFOLOVSXLCPVFMPATHUTQWKVLZCBDIMHUNMNBABJEDYGZBCOLFRVVO");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 28467U;
    tmp_tmp_msg_1_0.lat = 0.4648770885864012;
    tmp_tmp_msg_1_0.lon = 0.3826610583741732;
    tmp_tmp_msg_1_0.z = 0.630991893354886;
    tmp_tmp_msg_1_0.z_units = 36U;
    tmp_tmp_msg_1_0.speed = 0.6522176903093152;
    tmp_tmp_msg_1_0.speed_units = 145U;
    tmp_tmp_msg_1_0.custom.assign("YGTYXDNSUVWBMLTGDXUYZWZNTYAJQJEHQGOIRSEBJSNBHUHTWQFAYQLSILKEPNYPRRFRNPVAGBFMQNZYTODAKUVZMUGWXXHMXKJWZHBIZHCFFPZWKAPLCOKDXWEVFRDQAFKJHSFHISVDOBXQCTFIOPGHBGVQLIQYCZNWCFU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.45570158608905553);
    msg.setSource(32011U);
    msg.setSourceEntity(67U);
    msg.setDestination(32081U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("AROAPUEKQMWNBBWUKQHWLMUBIYYLODRMFEXTTNJSEHQTSGOLJCLZWSEHLOJW");
    msg.description.assign("ZENKXVINFDCCDCUIMSYYKZRUCIAKZVJGHMBYCRNHSXPUJQTWOZOFTR");
    msg.vnamespace.assign("QETFLBZSREJXHGFWWHERAKLSZWHVOZXCYLENHQVXJKWTLEYIQZKOHNFQGCPBFSBPIDTEXQUDYNVTNKKNMCWOBWGIQZJJKUVWSUKPXGYLGCCKFHXJTIZFAINYRDRYKONVIQMTTUVODIVSCIAAOHLBDJTPMXJREWZTREBDSXGEGIAUSWXIDHAZCYYJAJHRUNMS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ALPGORDILQRDAEIXGZVYYPVGBQAHWGXNOTHIFLLRDGTFKZXBWEHEWAHS");
    tmp_msg_0.value.assign("YTBOTKNOVOJTGWMJMJSGVQWECAGLNUQLIOVSEQCPRJKDGJSWDLDNHAXBYPUKCFQRMSSXPDKLALUBUEERWTZCIIIKUEGMBYPZJIZUQKAZLXRTFPZRSLIPKGHWJFRHNBQEUCMTYNGSCANFSXZBVBJZKEAGTRNCRJYMDGHKXTDQDBZIDVWWHFVFQOWFPMWAUEUCR");
    tmp_msg_0.type = 154U;
    tmp_msg_0.access = 240U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WHXBJTTKSQHNVDNQHFJXNLWNLHYSMTVZGOTWDUCEHGVVUBYNPLRJGAXPRGTKBAYYZJYPZOBSVYHQPEDUGHFXUZLPECZWAMGQJJABJWFOERAREMBXILZHKCDEWPDXTKEMFJFJNRUCINQOGFENHXOFTROTZHAOABKGCQBRIWMYPYZOFIGPCRSZLUAXMISSYLCUMKOEZKQLCFIDDYQNLKPMKCDNWRUAI");

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
    msg.setTimeStamp(0.5634186416784435);
    msg.setSource(24214U);
    msg.setSourceEntity(237U);
    msg.setDestination(41229U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("KWGMVAIZYLDDYBLKIXVYFLWBEDFKWHOEGUXUMPTOVDPSBVPPZIYQRBOSUAIULCPZSXVDFJXOAEFTWNHIOXHDKMJENSZQHSNUAJKHOGTGUCKBBNMZA");
    msg.description.assign("YKSGVFQIJLLOZNRQDWGEPKIXMYCNRAVNSAGNCHMOICDZNFVQZRRXVNMWUAMNPRSDWLFTOTF");
    msg.vnamespace.assign("ADHLKUXYVKEMQOGFUIERXPBGNHXFZJYDRKQPGALCUVILWWPYNIYMBQKTZKGGBSPMJIVNBEFWDWGTBWYTWOPMQGHDWHQHBTIVLCCAZWRCPOATEIMQKSRWYQSERBBCEXCTVDHEGOYMQUKTLOSYXCDISLGPXHNJDRJIXMISANEOXLKOFCVRZKSQQSNRHYZRMZUFL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NEFOQEOQHCUKBFQSZXESICIUHTQMABDTBNQVUXTCWMLNJUNTOHJUMAMZGQJYSTOCLKSLTYBFOJCNAXVOVRGEDFOXNFOBIKJBDVHYEYRYVILOIPESSIC");
    tmp_msg_0.value.assign("BBIAXGJFCGJVJEOZWUXNUKWLQFFMCRVXEXXSXBETSSHUBPJQAMTDBZTYADRDXQIQXSWJCEJRUTGLVVRQVYGTFCZNANLUOHLQPHHSTMRABFSDYKSGKKNHTQOUQJBMXGHSWFV");
    tmp_msg_0.type = 205U;
    tmp_msg_0.access = 118U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RCMRXABAQWHSEYXWAQVISKIRM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AICLWZWAFKHXXMCOSJASLQVVSQYPDRZJVMRKORFSDBLHHGJCMIBWVMSNXJRISFJBCYIEXJOFBENLZZBUTKQOFXEHYWUIBDXBEYHCPDGWVIODGUGUHALPQCWWUQTFAFZEPETKETSTJMIBWYRHKVNPLAVEAITAAQMGIEMRDGQNKTULZOKBNGF");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 23369U;
    tmp_tmp_msg_1_0.flags = 171U;
    tmp_tmp_msg_1_0.lat = 0.23408670091281525;
    tmp_tmp_msg_1_0.lon = 0.4718595936748001;
    tmp_tmp_msg_1_0.start_z = 0.8738437184041733;
    tmp_tmp_msg_1_0.start_z_units = 156U;
    tmp_tmp_msg_1_0.end_z = 0.9949079033937254;
    tmp_tmp_msg_1_0.end_z_units = 177U;
    tmp_tmp_msg_1_0.radius = 0.6910284680521346;
    tmp_tmp_msg_1_0.speed = 0.05708407012368333;
    tmp_tmp_msg_1_0.speed_units = 139U;
    tmp_tmp_msg_1_0.custom.assign("MDNFHMSXVIVDDMQZKSHCWSKUTSNABHJNVEFVALHDWEVSDEAYGUIEBSOTZLRNFLQAMSOUFOJOFMHDXUTJSPRDILRIMYDQXJNOKYE");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CommSystemsQuery tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 177U;
    tmp_tmp_msg_1_1.comm_interface = 26118U;
    tmp_tmp_msg_1_1.model = 40438U;
    tmp_tmp_msg_1_1.list.assign("EXBIMOFZJDSAPCBFTSDCVGYVOPFGCAIYBMONQTZBVXRZWOWYEWJCUSQPAILSJEAJJRUMKCMLYQSEZYWNGXLITUVTFXOJDDBGSXVHWNUEOGGNFGZQKCUOHVXFYDKTQJNDNEEKICNDHOAZFBEYV");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.48804889172092547);
    msg.setSource(59405U);
    msg.setSourceEntity(38U);
    msg.setDestination(42507U);
    msg.setDestinationEntity(97U);
    msg.maneuver_id.assign("HMXOSTQRKBHOFZNYKOOEIJZYVVKBWDEBYPNTAIDPOBVZXJSECFMMRUSZJTNBVGSWDOBUIXFGTRRWTUQLWGYSHYYNCPTVXRMCHJHUKWTKMSBIGXCDXMRLAYJPNOILOQZIZXEMFAKGVYDFRYZDAKUJEFERZFJVZNWRUKNKJAOQEAPPQBDCIHNWVMTHLAIPOCQLNVLMNDSWWBURZIDUUDBTAFLXCMAEHSGCXLFXUCECPTQLJGHFLHQJVIS");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 7500U;
    tmp_msg_0.lat = 0.5431629442045972;
    tmp_msg_0.lon = 0.08922920114042376;
    tmp_msg_0.z = 0.12401165473898867;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.duration = 21394U;
    tmp_msg_0.speed = 0.49996499645276915;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.type = 252U;
    tmp_msg_0.radius = 0.41063165155260184;
    tmp_msg_0.length = 0.6271170358274243;
    tmp_msg_0.bearing = 0.842212669360585;
    tmp_msg_0.direction = 159U;
    tmp_msg_0.custom.assign("EALNKRIUCJTZNZIYNGUFYBBETBTDQORFLDTNEESXXZPFBCERHZAYKOHFCSODUJJAFHJUHRQVRBXVZPQGXYEGXRYQQVYJVIRZXSHPWIOYCWHXLEOPLWGBFBJFQOWJNVYAEMMHMSSWWDVWLT");
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
    msg.setTimeStamp(0.6189162153658828);
    msg.setSource(50289U);
    msg.setSourceEntity(234U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(79U);
    msg.maneuver_id.assign("STVZRZUNJGRPVHLRIHDDAKUITNVCTFBQHKAALYHQDCQGMXJSFLMHOWUCYJCJKKWGSNXFUMFEWJXRDFINWPHSXFILKERASOIQNAFPVYKPXSFIGOMWKCDKYUPSRQPNGJALWOARLBQDOBDJSNBAHRXTMYIJFPJLDTBWQZDVNEPQNLXSJXWEKBKOQRZCEOOEDUTGBLTRXWCEMQPMVEXYCEGVIULFWZCTYZYVMUEUAUMGZHYBCIZB");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::FormState tmp_msg_1;
    tmp_msg_1.possimerr = 0.27890161396483526;
    tmp_msg_1.converg = 0.7974971180544884;
    tmp_msg_1.turbulence = 0.03579024876326897;
    tmp_msg_1.possimmon = 232U;
    tmp_msg_1.commmon = 110U;
    tmp_msg_1.convergmon = 62U;
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
    msg.setTimeStamp(0.1276114071433747);
    msg.setSource(21198U);
    msg.setSourceEntity(225U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(82U);
    msg.maneuver_id.assign("MLIVLYXVYRUUEDPUDWSFKCXKBVDNTZIZRJEMFCGNYOIKOSAJFFNTQICGGHZYWXLSNSYIWTZZUHEZWNSBZJSMPHWQERKOJOAIXFDCYMDFNXBCUYCKPLPHFLVZRHNMRJILJAWIAECGFUKJBTWDKPEURDMGXHQVOFKXASVYUNKPRLTLLAXSOEHTDQHQUIRGDVOVWBCNVZKAOXPBRQHHRQSJQQPYBGOLJAWGMTDBPWNGUTBOEMXPCFJYCTSQGBATI");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 55005U;
    tmp_msg_0.lat = 0.8180022584433052;
    tmp_msg_0.lon = 0.6131892020968354;
    tmp_msg_0.z = 0.21481541111773383;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.speed = 0.05889298649620667;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.bearing = 0.25314052868606407;
    tmp_msg_0.width = 0.37098621365268636;
    tmp_msg_0.direction = 97U;
    tmp_msg_0.custom.assign("VIWDJBKJBRLOAYEKPXNSVUXZAXCVBPUPMJZQYYAMWCFPFUUJMTDHAIJGIYAPRSHHBVOGCGZBNHRXQPJUCOQVCJFYQCVMERNCNLLBNZCGDTDKWGLIRPDURKWMUDGOSFKPDNISWTEWREXNGFZEGRZTBWTQYYTVBVNICTOAOPHLEWHXWYNMM");
    msg.data.set(tmp_msg_0);
    IMC::SmsStatus tmp_msg_1;
    tmp_msg_1.req_id = 6722U;
    tmp_msg_1.status = 90U;
    tmp_msg_1.info.assign("ZNUXPDNGHWRBRJNETTTAPXWRMMSBXCPBVAAEKDKJYIYTLPJUNQHQIYQNJCYRXSDCYISWHOFFZUJKIKPWWGIIZAJUGAJLQWSDHVPFFFOVEQGHGHWYUDSEGQIKHMCVJOENDFZ");
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
    msg.setTimeStamp(0.9982946437232589);
    msg.setSource(49541U);
    msg.setSourceEntity(116U);
    msg.setDestination(676U);
    msg.setDestinationEntity(191U);
    msg.source_man.assign("VXNVMNWQNJRBVJAFBUCBHSBFWAYLUREUZTMPFUHXCPCTTUEPSAKVHAONVOERCKJSEOD");
    msg.dest_man.assign("KGNICCKYZHDCAOIAAJMMKZTBGGCR");
    msg.conditions.assign("PHLUMFRECUATTHXWTVHJRFHEERDOIBQTMNYANKVEDOFOCQRJWIUJHBYXWMZKLDEEPGBGCNVWYYZRXZELXMYIGZSTYDOPXIBMAPNZDGUFJUVWOWBHEVCXDXKYRRCYTTCJQAJGSDWRDFCGKOSWFPBPASASMFKASVNXWXAPZQIKOKTKOXPGMWZIIUVJQRAFLBIBNQQSQKJZCJPZUOJAHCH");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("DVYOFYYIBDJMNTYKTWDFUBCZIEWJHQLANXIOZIBQLDMYVUHNFHZATAJUJBKPQOUARHDSTFWXLRNNUITPKZOPRNWWCWWMSCLIEGBAKZGIOQHQZRVSNGGRCNUMCKRJBQVVBJSBXTFKUZGMVYPJKOVMLPELPFRGPXSPCMJMRTGATQKXMALCNUWCIRYIAFJHSFVHFUYUQLDQEYQAWHXDD");
    tmp_tmp_msg_0_0.lat = 0.55796946725868;
    tmp_tmp_msg_0_0.lon = 0.21217953251653954;
    tmp_tmp_msg_0_0.depth = 0.9012644518182193;
    tmp_tmp_msg_0_0.query_channel = 51U;
    tmp_tmp_msg_0_0.reply_channel = 104U;
    tmp_tmp_msg_0_0.transponder_delay = 158U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.6686464925768775;
    tmp_msg_0.y = 0.18626366697576235;
    tmp_msg_0.var_x = 0.20375765481156982;
    tmp_msg_0.var_y = 0.7223819159498661;
    tmp_msg_0.distance = 0.27653227295077143;
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
    msg.setTimeStamp(0.5857809000728562);
    msg.setSource(62124U);
    msg.setSourceEntity(184U);
    msg.setDestination(43214U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("MOJJAVGWRMDXVJRNOXCUODBPHFWEWUNZO");
    msg.dest_man.assign("ZQKKLVLSKDWVZATNUTTZWQCHVVXPMEOAAEJUXGRGYBJUNJXJLPPYJINWBQMUFRCZFTCNQHUKPIYTNSEHYFDEQYRZKVSKXBNOGVIUGOMMJCRSSLHUGXNCLNJYIECWGPOLTSHKDMRKFHWNDEBBXHVOEGDUIAVYHIDOTPGQD");
    msg.conditions.assign("HKQBBWQLWNZMSLQASOBTRATUKBZNWPBFZRKCYAHGYEFGHCVRQFCRQCRDGEJNSTCTUTZYMINHCGBHFEPVQUVCLPFTWQTDOUGAEAVSPLEBQZPJXWNSXLHTOORRVOXBMCJ");

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
    msg.setTimeStamp(0.050170180271785214);
    msg.setSource(48055U);
    msg.setSourceEntity(118U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(159U);
    msg.source_man.assign("AIUQJPWEBFNWOJHNJICCKINZSUFCNBGTEJCQTYDHHNUSTPOVWFRTMUWVNGDFPDPUQWZATMSWVXTAMROVRXQQXBPEUSOZIAQJIJEJKPFYCXCBXXRDVWYGZOYSWYMPKUPCNVLFNAIKPODGBRXLOAWWULFOISGZDLHETXZOIXGZAOIEVRLRKGNDFDSYMYQRVVLVJACLDTEUUGKGBHKAMMBTYXMZBZHTBMSLHLISEPB");
    msg.dest_man.assign("TXCQCOOTENFKRNZBKESVZUVZEYYUDXOFSATRAIUAFBCDHIKBQOWURVSLS");
    msg.conditions.assign("HVMOHUAQZIUIUAGYNFHYYJSJOTBOSIWZTLICTOSXPNDHKDBBQDLAROELSDSUWQNWJIPCJWDBXLPLKNVZJGORZXOZVMEKQBTDRJHIFSTOCYNEXLYNPKQHLGIWAEYBEVQFIRRVBEJXNEZDVPNBFTRKIZWMYRTBARPPAMAFZBZGGJAP");

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
    msg.setTimeStamp(0.32428302623873084);
    msg.setSource(31032U);
    msg.setSourceEntity(53U);
    msg.setDestination(34841U);
    msg.setDestinationEntity(3U);
    msg.command = 52U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NMJOWYFRPOZPYGGDKYCRWWOYLXVXBZVEAAISQKHIJOTFBZJ");
    tmp_msg_0.description.assign("DJARMBUDTHQMMPDM");
    tmp_msg_0.vnamespace.assign("OYHRXMUTGELKNSWNQMIYUKPZHMXZVYMDUSTJHMCSOPTDLCELRWOSQJLEGCSUZOQKHFGBAKJIZQTBAHBPORWADRJRJROHIWQTKEEJNFEVVCFIAWDDZEPYCXXHJGBOY");
    tmp_msg_0.start_man_id.assign("XJDFZHEMAPDCRTKCLVBETROSMGTBZLKNBNRQOUUGQZGATAHEUNWGXIPOYVKSFQXYOLBGNCOGKRFFZIMDOTWEJJSGSQPSMKQXQZDWRWGTTLVZCIIQCEJHEYDXDHWLFHVQJBQWPIBJEKKFCGWLMVWQRHETNMFWMUJTYVCVCNZLFPTUBHLOVOUUIXOXPRDIUUERYMFBDAIOJNDZYXVEKAPSISYRNVPLZPKHACJXXSNYSDAPYKAHSCMBWMGZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZSQQGRLPEQKLFQJFHGGBMEQPGKIGJCWRUUSNZZIMHJCBNENVBSFPLWVSWXKXODHEFYQZWLRLSNSFDJOSBVYJBTRXJROXMVVOX");
    IMC::Sample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 47093U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0445454706865025;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9595019284235482;
    tmp_tmp_tmp_msg_0_0_0.z = 0.5090821901553968;
    tmp_tmp_tmp_msg_0_0_0.z_units = 237U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5726864977754617;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 208U;
    tmp_tmp_tmp_msg_0_0_0.syringe0 = 209U;
    tmp_tmp_tmp_msg_0_0_0.syringe1 = 124U;
    tmp_tmp_tmp_msg_0_0_0.syringe2 = 25U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IVQCKZMNXZOECBFKSMDDOGAWPE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CurrentProfile tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.nbeams = 183U;
    tmp_tmp_tmp_msg_0_0_1.ncells = 189U;
    tmp_tmp_tmp_msg_0_0_1.coord_sys = 215U;
    IMC::CurrentProfileCell tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.cell_position = 0.557294404669124;
    tmp_tmp_tmp_msg_0_0_1.profile.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 75U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("WTROQRPZPKZJSGQWOFFOADRHKJFWETGYVTLNLCTTBXYVDWWDDBDVXQALJOQHUOMELXXWBLATBZBIDBUJENOSIGSGFQLNZURJECZLVSIKZRNDQEAOMUVKMHBJHCYNAXXYCSCTDGNGPEUYUKVQCRKVXNITPSJ");
    tmp_tmp_tmp_msg_0_1_0.description.assign("YHPLZUWCXDVOOJJMHERMVQROGOWAHDJBKJUNKAYLXFLEFFKTWUZEAETNABWSKZENYYMWRBUTCSQRACDFRFMFANXUBWGBPPXMDBXXTOLQIPKFIDCMPHTLSNFEQXVJOWPCKUCYER");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("UYEPHYBFWFFCKOZRKYGYMXRBYLOQIUPIFPWXODTILUBEIKAMJINXNETOTNLQRNRJLIWFPCKQYKWAQCAJCVYBZTVCCLQKTZTSSWRHBSZUAUDIERZPMCRDGSVVXGHGUSWJNWYDATKSHLKYMQOUHAWBFDMOGQXAPPGLUEEFZG");
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("HFKKLBOKQRJZSNGBMFHWLZJMFSFWJBXGODHRXVFOXXRCMNSNHKTKYRAMBJCRTCITXWVQNVXMGEZKVFPZBLBMRPHMMLETQQJVIXTLAFWSFTUYHIBVTIIGOZZOPCDHEEUWKZOPOKLILFPPYWSQWXAJC");
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.source_man.assign("WTWIJJWRFBPLEXAVGABPAONFZGDNAEZEFRKSPZYGHMWXECIRHKSVYVFASELYKCUOJNQFSBQNBTSGTFKMIRRCUXEDEXZZIVQPBJIJSZ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.dest_man.assign("GSDXXBAKIMTYLNPQQYDMMMVBGLUKDLEUWMPTIFLUJSTQBSUPBZZNEJYOZQZGWKKTGRZHHOFXCDPVUXNDLMWWGNTGKKLDZVOWFEUCRXSJINRYBXGIMAFQDUIITQJAASRXQAXEKUMXJEPNDVNLJWUHJ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.conditions.assign("XGHOXZCITNBBDOFKUFTBDSRJELNWROLIAHWQVZGJWQEYPJDUASKOUBVKIPMVLSOUNRPUMVLNADCMZJWSHSBEYFTQRGSMXYWCNCQTOUIXAWPDIPLBEACFTHELRROHKIGG");
    tmp_tmp_tmp_msg_0_1_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::LeaderState tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.group_name.assign("GLVILMMIEMAYBNZRYPWEKMCTXRYYWHKKRMHAVPAHQTIYYONZXYXQSBBICQUAQAXDCMFWEIGUDQFKLNHIDKFKBJ");
    tmp_tmp_tmp_tmp_msg_0_1_0_1.op = 59U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.lat = 0.33057552648789945;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.lon = 0.3921597671657012;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.height = 0.9891602117172358;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.x = 0.013922729632275477;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.y = 0.2560640055745772;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.z = 0.06096341744437317;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.phi = 0.38665411417303974;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.theta = 0.10512182047072627;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.psi = 0.007172934009641918;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vx = 0.44439191831073266;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vy = 0.1119643224356498;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vz = 0.24336917020298066;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.p = 0.33238536700617916;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.q = 0.08980851512254939;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.r = 0.7534507435369847;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.svx = 0.8872642134519753;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.svy = 0.9730841476064597;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.svz = 0.2589180320523171;
    tmp_tmp_tmp_msg_0_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.00474077544064222);
    msg.setSource(49947U);
    msg.setSourceEntity(194U);
    msg.setDestination(42189U);
    msg.setDestinationEntity(121U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RXOTIMSOVOKCYONSDWKAHRESYAQETRZETPQPPTAKLJQSTFUZBXDYNVBOIANSRLNEPFZFSBMVGPWZEHJXDUTRYWEHAXGLCGVCMJDDWIOPWEFKLSLAZVPJFFTNMJLYWCYULFIRZNUZELRTACFPUHDKZXMJGMKAKVWGAECRZEQXPBSJGMTUFKZHBIBFTVOYQUWHGNHDMNBBKNVQIDLYIPWJUADRQQJDBYIKHCMO");
    tmp_msg_0.description.assign("NCHDQRPQIXOWSGVERKNVTTGGUTOIQXHAYWWJZOUKMIQFWJZVSJIGPPEDBNHIGNLEPCYZGZFWYBKYBKXQVVLCJXQDZQMHBDSHRZDEHHATWSBMUXISCFMKHKYCMKWUZJNPRLORFSIDEDCDOMEZVTOCVJLTR");
    tmp_msg_0.vnamespace.assign("GOJDAPYIGVZLCOEMOEJXMVFWRLFDPAODOUGEQNUWJNQMUBILMUKADADZKGMJSPQGCGRTVQDPBQBKLZNFPOZVLNGIUANSIBHUFIH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XRNRBMQMBEOINHDIMBRHWWUZYLRLFFYTARZPSKYOOWSXLCXGYVJDAIXPOMGWIUWSGTLQEGSPYDBTCFDQENUCDALQVQOHVCRADLTBAZCSEFZJSMKVEKUGFFHUHNZMIATHUPITIEYNQFJVEPJWXPUZGKZEUDGLJVOVCWPPIYOKKARJUXSOHQFLJJ");
    tmp_tmp_msg_0_0.value.assign("DUUKSGURXGZEFNCODELEFFCYCNALFSAYYOBBMTANSECJQEVWQKMRWEZVAQPGIJISFTGIVVNYHNCDHZWLSABAVHTYJTCSPOJBZIKIXMBFLIYUFKOQJLTMPXEPGRYPCJDAW");
    tmp_tmp_msg_0_0.type = 65U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MLPHSAJIDGYBOTXZQHWGNLIUTKZROHVFKIOUUZBKWOKCUXJSYCADIRRPMWUUNAALPMFLSTDLPAJTJPPNJEBFVEIRYYKRJURLXYCTOALSOFUOBETNFWBYMNZSZGQOBILLZFJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DLZGMMQMAXUWYBJPAEANTZXQPBNQPRHDRWTOXLBGCNLULQSYYPFHYMI");
    IMC::Drop tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 23883U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.17774025330994547;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3280820587804266;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6143664753759146;
    tmp_tmp_tmp_msg_0_1_0.z_units = 251U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9605865013297623;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 80U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LCNQONTMNPCEIKPAFOXLNDALSBYSMXILYQFCNWOSXMOANFUHFSVBJDPCOCZVZKUMOFNJIOMVKICZCHHWMQVBGZGOCEMIFEEJYNYKRCWZJAEGSQXVVKUEJQJDZYCNLDRTGHMRMURKTDAUXLPPSBERSBPORQKZFVHURHZEOLGSAZZDHXYISWFGBIYDADWTJVAG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetImageCoords tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.camid = 123U;
    tmp_tmp_tmp_msg_0_1_1.x = 20414U;
    tmp_tmp_tmp_msg_0_1_1.y = 60005U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("FFHTWYDUEBZUMZSRZFVLNOJMQAGYVCWVFGXTWHIAJLCOJAJDDSJLBWTLIEWGNBZZTUSQICSTUHOFYHPDKPGQOVYKEMWEVEFPFS");
    tmp_tmp_msg_0_2.dest_man.assign("BYVYXXOXHVEABJKWJEB");
    tmp_tmp_msg_0_2.conditions.assign("DBANMACZZMZNHLGKPJQZSDRHVBNOPNSTLIKKRUPLEHNGAIWDRCMOIVJGJZZUNTVQKFKEXSJUXSJFULTCNDWOCCACXSDOXVNWHDPAQEHXELFTBJVQLOFITCILEWHQYERPTFYVWAXOZUTETJUANIMRMLAXSVFQCPQMPZYMDXPBEGGLWDSIZIKWBKGWAJQCNBLGBYMEBDOQGYBVSYGVHBOQRSTTMFFDRUUFIRYKEXXHCJPOOPYRMHWZVYG");
    IMC::ServoPosition tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 182U;
    tmp_tmp_tmp_msg_0_2_0.value = 0.8907511169690356;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DevDataText tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value.assign("VVVGHBZPLAHSBAIJZBNMQSYSZAGQPPUPIVJYFUSCPIFQYLQSMCDUDOFWRCQTCMVZNVJMVKLPECHDOSADDEFSTLD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::SmsState tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.seq = 4254148080U;
    tmp_tmp_msg_0_4.state = 23U;
    tmp_tmp_msg_0_4.error.assign("PCEHNUFWEKYAIJIZKVGSUNUAOYZEN");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.20079048521751264);
    msg.setSource(61404U);
    msg.setSourceEntity(179U);
    msg.setDestination(26035U);
    msg.setDestinationEntity(181U);
    msg.command = 139U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IDGZHHZEECYITKNZRQLIKGCDSGDWVMEAEVXSBZDCHIGDQTKBAWQNLHVONDEYPRMBFOBGUWHPCCPVXYLKMWTFWGQYTIOYEYQBSCMRBWKAFCNDBUPUBGWGXQRHEAOJYIRPCWVTFVMNKZXRPUQFJPOSAOGLUSNHFDXV");
    tmp_msg_0.description.assign("WZANOYOBRRUJSXHIRFDXRITIAQHHQLEQSEXJQXBBUGKWPCSKPTRHHCPKMLUCBYAWPCVZVYTAZJSQBJEFXFGNVTOGGVMLJPUSWKXUELVDDVDSBKSCUEOHDYMYLJIPYTDZHKRZDGFNOOOXMUMAREQLEII");
    tmp_msg_0.vnamespace.assign("GMOIVUZCHUJGJLXLILPKZELRKKJGMEKGXPHEKRUSJJNBACDFFJBHHNZOFOZARTYNENJSKVRLCNHRWQDYBOCUMVKGIVUZWTWFUOXDWVVNSPLEIRREFFAOZTTPQQCXNAUVLJAYVAQSOMYGTPGCLYHTBYSFKKSCUBIYM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YSDDYZFQDCFSLKRCZUNMOWRNWRWOFVULLNVXYRHHUGYCTTBJJBYOQDFMUTPXIOUFJASQWGAVMGYICIKXDUCJXIIBRGPZXIJTANBCMVOOLWWLSSDUOCHRGQSVXEATDLVKHKONGNTXMPTCKIFJWPIPIUHZTAAZWHZLWVXJEYKEGFFBXZQDYPQQDJELFUHHKHKLOGBVHBBKRANPVMTUQGEQEZFTGMBPDQMRA");
    tmp_tmp_msg_0_0.value.assign("EKKUZUKVNUSGQUWNRRXZVESLWHBWFLRMRWYJIBZCYXEEWHTJNJYCDEBPMMIEMIYTUTTXWMFOJDFDNGXDWDGVOAYFVXFGDLNSZCBIIJKMDWXOBACEXBEPYRLCLHTHZEOYVGQBOVJWABIFQPMBQBKVAQPHPSHSCSFYHRXMUZFPAKJJAQLXKNGTQUCNJCISORHLHLRGWCTLCENDIVRZAUVYZYQPMSGSAUXSNTNIAGATFQIKZJHOLMPPOQ");
    tmp_tmp_msg_0_0.type = 160U;
    tmp_tmp_msg_0_0.access = 24U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ERGWTRHSSHDCTHYUWZLUVZNFELIDQGCXACDCJVXGJFJNDKFYDIKLTFJOPZTWMDZMJXBCIWZBBRAZEHAGRUEMWSQGTGBQEPSYJHQYAKAOFMBMM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BTGIHWDYRLYMSVOPRGGEHBWCJZSGSSKFVLTLWFSMHFDZLODUROFWYEQCCXJQZXENMWDOAJSARRUHNINAWTEMZIZKYDMELNUKPDDAMUXUNIPOETAYJKQLLNP");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6917678768523188;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4394582133513899;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9765668100745015;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 100U;
    tmp_tmp_tmp_msg_0_1_0.limits = 132U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.8841899520578442;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.06859507592899783;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.9541021513373907;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.6346045429453923;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.3676663987761981;
    tmp_tmp_tmp_msg_0_1_0.area_limits.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.controller.assign("WGHFUEFPPQAFTLIFZUVRVFMYJNYOELILBJCAHYZINTALXJCAXOLWAHWVEPMEERIHNXMQEWNDJIOMHHQVVLK");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZIIBJSCXVZZCWPUFQBIZODNMIZDPUAPIGAILRMSMHUWGIMZSEKJFGWCBNKPUBPCTRTQEEQNFQVQOKWYCNYALXHGKYHQKBTEYXLUXFEKSYFGYJEDNFHNBFERULMSUCBKORURGPTOVXXAXTLRHAEVDHZTDCDVDGTAGFVHJHPAKZJDRWNSSRQYIOXTNZKAPOMYGWWMWIJMCPWMZRBL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LogBookControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.command = 73U;
    tmp_tmp_tmp_msg_0_1_1.htime = 0.9397229107623152;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::HomePosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 66U;
    tmp_tmp_msg_0_2.lat = 0.18891401041848577;
    tmp_tmp_msg_0_2.lon = 0.71620173707231;
    tmp_tmp_msg_0_2.height = 0.49591554298056906;
    tmp_tmp_msg_0_2.depth = 0.3487279765287583;
    tmp_tmp_msg_0_2.alt = 0.24355119121716284;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::PopEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("DZGFMFYOGCHTPKRSCNRHBEBDGBQEOCERUAEFBEIPTZLILYRJGCVBHOXHBYUAVDQWPFKDUICTHMPDJOXKNVG");
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
    msg.setTimeStamp(0.8353184226639906);
    msg.setSource(51989U);
    msg.setSourceEntity(31U);
    msg.setDestination(20987U);
    msg.setDestinationEntity(78U);
    msg.state = 90U;
    msg.plan_id.assign("AFFNWCVKXSE");
    msg.comm_level = 208U;

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
    msg.setTimeStamp(0.45601734124673365);
    msg.setSource(46319U);
    msg.setSourceEntity(193U);
    msg.setDestination(63411U);
    msg.setDestinationEntity(194U);
    msg.state = 3U;
    msg.plan_id.assign("CUIGGBCECAGVEGIAZQIRWXTELLECMQZDBJOIXDYNLFGWTBCXFHNJKLMVAESFTZJCQVFXBLKFRIXUPTEBJRIXUFRVBMOYKODBNCXSVURDGKMWPEMMKVISTMCLFDWTJGCQWTORZHG");
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
    msg.setTimeStamp(0.2999090899146639);
    msg.setSource(37223U);
    msg.setSourceEntity(30U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(251U);
    msg.state = 221U;
    msg.plan_id.assign("NYWHVWSBEXGWRCNZZUGYAPLCKIKBORXJRBZCQVGHDGQTAGHBOSCWABDGPFFUMQEFKWKAQERUMIHFZHALYOOQNVUSSNTXDOEIYKXSPB");
    msg.comm_level = 206U;

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
    msg.setTimeStamp(0.6618209192041413);
    msg.setSource(11862U);
    msg.setSourceEntity(249U);
    msg.setDestination(55417U);
    msg.setDestinationEntity(162U);
    msg.type = 125U;
    msg.op = 21U;
    msg.request_id = 36740U;
    msg.plan_id.assign("ADDZZRXGYWEDNMOUIAZLEWZLDSGXLYXHQXOPJVLNEQPVFWFKBWUALEFMYFYROBJZIJMNZUKYGUPQHGOAIVJERAA");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 33U;
    tmp_msg_0.range = 0.2898789525281682;
    tmp_msg_0.acceptance = 191U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LSQNGHWSPOBVIXWKMLFXKCVHIEXTSWFONKAMIEQUMBZPYBZTCFXGWJPQMMVKPBGWHABIYBRHZNBNDVRDDHKBRCUDVEUFOMJZJTNCKPQTLQYEVPMSRRIUECMRTAQJUCSXJTCZIIHWALLYOYJEAHOVDKAWGNYQKJKLRTSHDXNFTPVCDFSREDREPGJMABHRXWJSGTLTZKWPFFLAOXSOZPIVYUAZAMUESXDYICXVOHNGOEBUJL");

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
    msg.setTimeStamp(0.6788338927187397);
    msg.setSource(17046U);
    msg.setSourceEntity(12U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(110U);
    msg.type = 197U;
    msg.op = 32U;
    msg.request_id = 33097U;
    msg.plan_id.assign("AMMXLHTZLEO");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 202U;
    tmp_msg_0.file.assign("CSQNVMJSGLZGRTKRUZJDWYOEPUMXDXKITHVPCSOMFEKQFETDOHTMHQWXXRZVPOLZTKOSQDXBGFOUONDYSMCAGPJHODNTTNBINTVUAWRZDYQYHCYXNVCQIIBXLUFJRGRNLZXRCIC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OVKHJACXVDUBAIDBFWFEPMUFHNCWGKGCCKZFULTYCJOZZTDGRFRTSEVLKUVIPSTSZHQEDBBYZZHYHAFCAWEISIJMOVLSDZLUSATTVTNTYLTPRDNFLLJUJJS");

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
    msg.setTimeStamp(0.1593337590076298);
    msg.setSource(21623U);
    msg.setSourceEntity(59U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(242U);
    msg.type = 99U;
    msg.op = 138U;
    msg.request_id = 15804U;
    msg.plan_id.assign("CSNGFBFHIKYMBYXTHDTUZCZHUYORSRBYTCMOIMBWKPFGVBWWOSMEZXWCHJUFPEJKSOCOQBEUWYWMJPTMXDAABVPLXNLNDQFHMBGIJXNIVNKISCRINOHZVGFRLHVKLLAEWLVLEHZVQKAFUPGUGSFVJZUNZQGADWZPWYSPRAOJCCNWQEJDXXFIRJGXTVXLUAZBYRGVSQYEEHCIJUBTHP");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 43U;
    tmp_msg_0.zoom = 30U;
    tmp_msg_0.action = 38U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VMYUNVHAYMRFCJPGTZZAVTXOCCBZUNFWLUIRQHTKURFFIUBMUOCTURYKIUWSBEQCMNQBFQUSHLGOBEDZSRBHQMXWXCKXXJCSDKODGLJEHTYSQSQNENVVZPPVLKNWJBOSMZSEUDRHTLNDOFIGFWALNMYSEDAIIZYTHFGTJBTRZKGKHSOPVGICFPR");

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
    msg.setTimeStamp(0.7666766129106264);
    msg.setSource(7807U);
    msg.setSourceEntity(14U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(21U);
    msg.plan_count = 53031U;
    msg.plan_size = 2203405474U;
    msg.change_time = 0.9473133035705846;
    msg.change_sid = 58869U;
    msg.change_sname.assign("MIGQADEZJTMQBUXSVDJQYBYZPROLVXPVORWWTVJZJKPZKGEGWEHGDOSSMQDCKNMKBSLNYQLLNUWMJVXAFZXECXEFAXPFNJSFUHHDTRH");
    const signed char tmp_msg_0[] = {41, 72, 119, 5, 77, 46, -89, 47, -28, -121, 123, 74, 61, -90, 104, -78, -12, 47, 98, 62, -92, -95, 91, -30, 75, 33, 117, 10, -48, -22, 51, -121, 29, -9, -5, 65, -123, -78, -46, 22, 125, 15, 126, -6, -62, 1, -87, 102, 126, 26, -81, -59, -59, 47, 55, 64, 40, 21, 98, -121, 96, -9, -15, 79, 22, 87, 43, -106, -76, 4, 93, 47, 68, 70, -56, 37, 37, -107, -3, -38, -110, 36, -4, 38, -93, -126, -24, 95, -81, -69, 7, -45, -26, 34, 62, 69, 69, 57, -87, 117, 96, 42, -96, -26, -18, 23, 40, -87, 98, 121, -20, 44, 81, -102, 39, -48, 67, -22, -98, -14, -114, 2, 89, 111};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WPDTHMPYZGGSQZFICIAIBPHEIEQBGEZUFWJXBCKCRNXFQORUOOQEAMNHXRRSAWYXBRCVPWLVMGAVHAKYKRJUXWQIJVVWIDCHHOYZRNDNOHGDEJXKYYEDLSTSQPLOOLSQWTCNPRAHOUBILBUWGJUGPFPKLUZSDAWRTMGMCNFEPCFDKQTAJLVUMIGHZXJPLJRVZBEKVFUTBCISDBCXEZFWSDFODMKLGJYXSEQANTMYVZOTTUNJTZIKV");
    tmp_msg_1.plan_size = 39539U;
    tmp_msg_1.change_time = 0.5639365720565904;
    tmp_msg_1.change_sid = 64072U;
    tmp_msg_1.change_sname.assign("EORACYSNJISMIVNGXMCZJWZAPDYUCEOTUDIJWXHJFWHYUJBNBTEAHOSXIPVVJHFMLVGASBPQDHHIKXNHTLPAFJZQTUGFYZNQE");
    const signed char tmp_tmp_msg_1_0[] = {1, 96, -115, 48, -83, 32, -21, -25, -11, -61, 98, 70, 31, 64, -51, 36, -46, -45, -6, 112, -97, 94, -43, 7, -127, 110, 16, -47, -48, 64, -92, 30, -41, -48, -43, -71, 24, 7, -93, -122, -15, 31, -113, 58, 4, 65, -6, 123, -58, 70, 52, -23, -20, 55, -119, -83, 95, -59, -85, -64, -71, -40, 8, 123, 91, 63, -84, -104, -98, 64, 14, 87, -59, -114, 89, 94, -80, 67, 39, -24, -85, 94, 60, -112, 80, 46, 27, 92, 50, 56, -2, 37, -78, 34, -34, -25, 85, 22, 49, 121, -13, 13, 36, -87, -5, 17, 108, -82};
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
    msg.setTimeStamp(0.6100874348658519);
    msg.setSource(55387U);
    msg.setSourceEntity(152U);
    msg.setDestination(61552U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 1634U;
    msg.plan_size = 2690919049U;
    msg.change_time = 0.5920769076982318;
    msg.change_sid = 20288U;
    msg.change_sname.assign("XGBSBXYHHQXQEWZIVZJPOLVCHGOZBJBTSEZXXMSAEADSYNMGVUDFM");
    const signed char tmp_msg_0[] = {-107, -46, 41, -90, -114, -114, -99, 98, 102, 6, -74, 110, 24, -112, -51, -67, -40, 107, 65, 109, 91, 20, -91, -66, 83, -35, 65, -87, -29, 81, -103, 122, -24, -33, 120, -27, 22, 98, -14, 45, 90, 3, -15, -103, -97, -53, 31, 11, 13, -86, 50, -62, 25, -9, 121, -108, 77, 88, 110, -32, -46, -81, -81, -110, 44, -71, 91, -4, -108, 91, -5, 76, 87, -23, 56, -121, 82, -114, -94, -59, 56, 109, -72, 28, -73, 18, 38, -33, 119, -105, 14, 116, -71, -72, -78, 118, 72, -102, -24, -64, -36, -94, 50, -95, -100, -126, -66, 96, -53, -78, -122, -3, -3, 25, 17, -28, 8, -85, 11, -51, 28, -36, 46, -46, 103, 106, -3, -38, 51, -25, -102, 6, 106, 59, 55, 33, -127, -67, -50, -13, -101, -92, -7, -32, 46, -101, 59, 10, 30, -67, 119, -64, 52, 122, 61, -5, 45, -93, 51, -82, -91, -48, -72, -86, 103, 81, 44, 118, -64, -40, -33, 27, 46, 36, 25, -36, -117, -125, -21, -69, 93, -14, 102, -117, -15, -42, -85, -31, -40, -34, 54, -44, -125, -72, -8, -27, 83, -77, -44, -37, 104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HSJFJPWZBXDCCQYGGDFVFYKJJZKBMOVSHREVPMZMDCETWKUIZGOHMZSUHOVOVBROJHCWFJYNALNHIARCEKUQISGTHKWEHQVLSPXFSLCUILXFPTAPOETGQTQBMDKYKJROJRIMDENRMMIBSBQDCDLSWAXWNVSNGXKXNXE");
    tmp_msg_1.plan_size = 35065U;
    tmp_msg_1.change_time = 0.013099637619591098;
    tmp_msg_1.change_sid = 28243U;
    tmp_msg_1.change_sname.assign("GXWZFPSVIMXKHSYSTYTHELCXYOQUANCAWNNIKCZRBSOCPGLQLAKSDICUWUBTJBBJQMMVFGBFAQIDZULBYZQNNZPXCFAVPUTBFDDHUQUVBGOEYVWWRORAUMTMSZNJKHGUIJEVHBKLJSFZKORTDTDCTLLZNTPFEOEFXSRQRETIWMIKRMXMWIGSPHMVHMYGCGGRVJUZQGDCXHODVNYOCHOPED");
    const signed char tmp_tmp_msg_1_0[] = {101, 82, 121, -62, 25, -119, 57, -4, 10, -101, 9, 8, 2, -60, -91, -16, -65, -51, -48, -32, -7, 37, 103, 126, -14, -127, -45, 13, -122, 69, 77, -128, -66, 102, -64, -98, 116, -53, -86, 33, 14, 5, 15, 58, 33, -58, 72, 54, -51, -110, -3, 66, 44, -118, -101, 25, 80, -33, 100, -114, 122, 59, -13, -104, 120, -16, 118, -75, -72, -86, 47, 82, 13, -116, 71, 101, -56, -6, 1, 33, -80, -64, 83, 33, -99, -64, -120, 19, -38, -63, 100, 38, 41, 125, 3, 101, -23, -17, 41, -43, 63, 11, -61, -5, 25, -43, 112, -41, -96, 77, -101, -55, 19, -77, 113, 79, -119, -39, 26, -59, 31, -50, 116, -96, 83, 71, -34, -17, -88, -24, -128, 23, -121, -75, -89, 95, -101, 61, 89, -71, -106, -83, 30, 4, 9, -60, 20, -126, -90, 84, 7, 37, -15, -37, -100, -100, -4, -48};
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
    msg.setTimeStamp(0.4855911846221691);
    msg.setSource(56412U);
    msg.setSourceEntity(181U);
    msg.setDestination(27161U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 58377U;
    msg.plan_size = 352683607U;
    msg.change_time = 0.23226480376859915;
    msg.change_sid = 56021U;
    msg.change_sname.assign("UOEPSMVLGWKFYOUMGXBVOLPMUGBFROTUQGTRJZSXJBAUPWMAEWPANZQLYD");
    const signed char tmp_msg_0[] = {-63, 77, 8, -78, 103, -87, 119, -82, -34, 105, 28, -104, 73, 44, 58, 32, -120, 31, 51, -123, -30, -11, -84, -85, -91, 14, -116, 33, -112, -114, -45, -100, -55, 38, -32, -57, 79, -19, -128, -29, 99, 80, 10, -10, 32, -82, -80, 68, 112, -106, 117, 32, 33, -124, 93, -24, -24, -74, -96, 13, -13, -42, -88, -116, -91, 18, -42, 91, 90, -62, -41, -112, 100};
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
    msg.setTimeStamp(0.49362047153111255);
    msg.setSource(64507U);
    msg.setSourceEntity(37U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("KRAZZBGXNEVIICFRKXOWBKMPSUGHNUEGQDOZLJNUNNCJNMFBYIAFDQNXVREGDHJWTKKJKMZEHEWTRLMHYKXSVWODWIGBCVXDTAGOMQXJCPUZORELDFSQSJLGORKPYIYBLQFOXDATAHRLOUEFSSWCXMNTYMOJUUITZAAMQWSGCQLRBFIXIDKPFUVWYZBHCLTMLRVHSCARPEZSQTFK");
    msg.plan_size = 39146U;
    msg.change_time = 0.6598321826058423;
    msg.change_sid = 31924U;
    msg.change_sname.assign("AJXQKUQYMSYENKVJFFRCLFEAPCNBMTAGQPVEHFNESWIMYWCJBDXGDULOQTVZGLVNSPNZMPWOMLUXAOOULZZBVMQSBWKIQCXBRUHNUDDKXGHCTDUQCSQRXFMZRMFKHPJELFVNXWTZXIQMRHGHFIWYGCTIZGJVHKIBICBBCIPVAOYYYEYOOWHALPKLIKNRRHDOJTDRGJSPSTZLJANTMBJVEYXSTJKGIUFHN");
    const signed char tmp_msg_0[] = {-7, -30, -94, -31, -14, -5, 11, 69, 94, 75, -79, -6, 113, 103, -64, 60, -72, 31, 104, -24, 50, -67, 41, 25, -116, 24, 115, -54, 27, -125, 66, 30, 34, -82, -118, -128, -12, -110, -63, 100, -66, 70, -80, 126, 39, 23, -117, 35, 111, 102, -101, 109, -82, -34};
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
    msg.setTimeStamp(0.10197016452308094);
    msg.setSource(30195U);
    msg.setSourceEntity(175U);
    msg.setDestination(36097U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("XKEOSKCAMUDNJFLHWTNAIDIJQWEHHJXUOERTTDMORBPGEXFMLRHMSMXRNUDJDVEEGSJORZKINPKPSXCJMLZHXHWNZBQWTICJHPFIWLLPCOWQCLKVXSKSAOYDUDSTUYBRPAIGNFVHALQAMQODVSZOODFPFGARZJRQPVWHQFCKXBHPGLUMNUJNFZENCO");
    msg.plan_size = 45092U;
    msg.change_time = 0.5124349996308295;
    msg.change_sid = 48377U;
    msg.change_sname.assign("EYPYTTRWCKGYBLGMTSAZUKDXCBQNXWXJMALWYXGLHFHDIDDVRXBECNJNYZFOHYJCMENXJMWQKFPBEORSHYOKWU");
    const signed char tmp_msg_0[] = {-103, -29, 8, -20, -8, 122, 83, -128, -71, 67, -125, 45, -83};
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
    msg.setTimeStamp(0.6252075565632228);
    msg.setSource(57370U);
    msg.setSourceEntity(150U);
    msg.setDestination(13750U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("NJAUZLVJGPFIAFBFALYNXQGXCKXUMWQNTGGPMIOURUQSERZYHZBDND");
    msg.plan_size = 2544U;
    msg.change_time = 0.22873898526247438;
    msg.change_sid = 30165U;
    msg.change_sname.assign("CMLFGGYWJFSIRJENZVGHTAMQFEKQSLLPIBYPIQMICMEBMUCTNRXVQJJMWSQFRLIQASAZDIHCSWNYVQVZSPRKUOYDHUXQUFPKILRROUTWBMOWAHGJAVJCKPTXKKBKXOYOOFRBOWXZHTZKXHVFGCCFDPDPLZFNGDGSHUQSENHLLIRURWVZOBDETJPNINVWBBMZYHJSXXOERWVVNDXSLYGGENKI");
    const signed char tmp_msg_0[] = {30, -60, 91, -7, -93, -26, 38, 114, -126, 68, 5, 105, -123, -26, -58, -104, -128, -82, -25, -1, -14, -3, 99, -101, 55, -57, 94, 49, 61, 83, -95, -103, -3, -6, -36, -25, -32, 94, -23, 126, 26, 114, 115, 48, 35, -79, 39, -113, -89, 90, -4, -91, -44, 43, 69, 4, -63, -76, -102, 91, -25, 78, -105, -96, 90, -11, -112, -84, -125, 112, -33, 125, 17, 16, 27, 5, -48, -13, 32};
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
    msg.setTimeStamp(0.6773503001902844);
    msg.setSource(37874U);
    msg.setSourceEntity(117U);
    msg.setDestination(64087U);
    msg.setDestinationEntity(146U);
    msg.type = 187U;
    msg.op = 185U;
    msg.request_id = 56655U;
    msg.plan_id.assign("EMCVZGLFXHYYITWCMUEOKDWVUBIOFYKRAPUGSUXFJHMCTXOLRZIZYSBMAFIFWEMLTBCLVDQRYAJMBPIJZSNJVAYRRGOWRSGCACZBWBROQPDCMVCBFILGKIPQHTYQXWLGNTTBFZOOHZXTLVYHKVOZIQFLYZSLEIPIEKAUPTEJXMSYNQNR");
    msg.flags = 49297U;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 116U;
    tmp_msg_0.range = 0.24156165945546693;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EQMDJGFJCJNWYTOXHFKQQZEPBPBVQWYVTCFDPOUPXLMOYBWGHEMRTIEZHFQDTNXZUWMAUHIXCE");

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
    msg.setTimeStamp(0.9283872336771315);
    msg.setSource(56186U);
    msg.setSourceEntity(250U);
    msg.setDestination(48000U);
    msg.setDestinationEntity(130U);
    msg.type = 63U;
    msg.op = 209U;
    msg.request_id = 42988U;
    msg.plan_id.assign("TUXNHKDSIIICQVFSWFGKXVZILHBMRHARYZEHQSAJZGAHFN");
    msg.flags = 20294U;
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DMERJEKUDBFQCKFOEIBZVBDFZNRSOAKLIIVYXABXTZCGYOGSHDGMRZAPAYDCSGSNLGYWFXFCHSWAAUWEBTQUWSJAXKHDVNNUAJGXCQDPDLZRTDHCIRJEFGPHNVEUCQWUVIMSLTPLKMYYVCYLEHKPHSFMEQPXOMTFECAWVNWVQXZBZOKOWRJYUHTBZHP");

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
    msg.setTimeStamp(0.7151358731893681);
    msg.setSource(39278U);
    msg.setSourceEntity(30U);
    msg.setDestination(8451U);
    msg.setDestinationEntity(170U);
    msg.type = 218U;
    msg.op = 86U;
    msg.request_id = 28530U;
    msg.plan_id.assign("QCWGGPDUUUMAMXJUIZBRZMYKTVLVTFINDNKFBHSSOANAJPBHSTQXKEOXJOHUYXJCMSKSLTDFVQTOLPOYNSZEVUXCYYIGGDFHDDABHSJQYMREOEBEMUVQNZPBIZLNLPVVQFACBVBRZFOJWLPETWPKYHEMTCLHMIWJIRGWCKAYGBVNYCPRLVZZFCWNZAINGGEZQOWIKIIXUEOHJGTASUCCJRJXYDQQARMRQSFM");
    msg.flags = 17376U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LDTTBXLURMZYCLWCFBXPVEWSZUOKUVSNSUXZJINZWOAQMHDWOWAKDGDKVMQFNDLCSOLXAJCPQNNVLOKAQTCFUAELZGRLRMBYZPQLMRHXYZMJWRVTIYIPRWAUOIBYEPFKPFSATMOMZK");

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
    msg.setTimeStamp(0.15996488683771137);
    msg.setSource(15446U);
    msg.setSourceEntity(198U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(129U);
    msg.state = 46U;
    msg.plan_id.assign("XCOQLEREEVGEGCBLWEIAEZGGPFTDYKIMFALAOHBXYKCGXNLNUVCBGOUUKTXNYQPMVONLKSHYUVOTZJFROETBSTNSZZWATVXMMVMMHTWOTRDQLCRPQVSPUAINRYKUYLJHWIBFBFXHLJHWQMCJFKD");
    msg.plan_eta = 2057650173;
    msg.plan_progress = 0.02807316898842993;
    msg.man_id.assign("QQIUTHHTJXNPMZSCBEJALPXPKZRFVOPUFMALKZLWTLOFBSZNMJSJBCA");
    msg.man_type = 31958U;
    msg.man_eta = -1795155832;
    msg.last_outcome = 210U;

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
    msg.setTimeStamp(0.9163712921841302);
    msg.setSource(43314U);
    msg.setSourceEntity(132U);
    msg.setDestination(54920U);
    msg.setDestinationEntity(248U);
    msg.state = 195U;
    msg.plan_id.assign("CZLMCEZFZYRWUYQMJLSICWQGUWUAJAYIHHTIMTKQCBDOXMHHWIOJZKWKBTKZSGYXQXRXAVTDGQFLABTVPVDUAJSRQDUURCSIKLUWVJTNPAYRRUGTOEPL");
    msg.plan_eta = 1222762658;
    msg.plan_progress = 0.5539526056637711;
    msg.man_id.assign("OBIYCTHPMJKRGPYRYVEEWMWUOVSVEZWABMIYWNFACTFPCJQUGMZAONQRKXQKQJASNQSUVBFYBCLZPDZUROUJBTC");
    msg.man_type = 27921U;
    msg.man_eta = -2001284791;
    msg.last_outcome = 178U;

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
    msg.setTimeStamp(0.1474028388345533);
    msg.setSource(60445U);
    msg.setSourceEntity(223U);
    msg.setDestination(40382U);
    msg.setDestinationEntity(65U);
    msg.state = 166U;
    msg.plan_id.assign("UBVAXPXDRCGNQPXZSMORSJCJSCRZGOBHLLHFWQNHQSVGMQPQGASRCFSDSCPRSTZKQBRLBQGFUIAWLNFTOECOHAXKSJZYZBFLTAWWTYBGYFMQVZUNGPZYNJDPIJZEDJTALKEGDJKCORXZMEGYKKNHIDUQEXIFTMPKLZLWMRWAWBOOWVITJTVIMYTMOFUDYBDEARNXW");
    msg.plan_eta = 1771157709;
    msg.plan_progress = 0.7708405984940192;
    msg.man_id.assign("YICHHMOFLTNWMNFZRUUXZAQXFBGQ");
    msg.man_type = 62021U;
    msg.man_eta = 1933663066;
    msg.last_outcome = 214U;

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
    msg.setTimeStamp(0.6467351087511951);
    msg.setSource(19035U);
    msg.setSourceEntity(221U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(221U);
    msg.name.assign("YRHTSMYEUYMXAWWGRXYZLVQDJYZLURENZNKEBICHWZEADILCEPMQYJVSOQLMPJGCJOXFRUZZRLXDQDPBMQPBWSYKAENYDIILJVZITBDCDOBTMPOUBBVPHEXXFNKMNJKXGQRRBJXIKWSHJRFIOVFWMPINVIMTVGNRSCCJCJGOUAAWFTUTBHKZCIANQLVFBOSGOVWEQORPTESSTHZK");
    msg.value.assign("FYHAFMSIIABDTMWEZBZUUGPSMNQXFGICMQQWZGVSRMVUKSBITEAERFSBLIKZJROLOXDSXIKQYNYHZPYXBCFMIWTJGBYZORCWD");
    msg.type = 31U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.8575257780371642);
    msg.setSource(52899U);
    msg.setSourceEntity(25U);
    msg.setDestination(61510U);
    msg.setDestinationEntity(26U);
    msg.name.assign("MSTCTKXHYPUCINEPGBPUZYWPWNCCSYDBSGZMOJCLVBKOOUWBKFHTWHTAFQYLHIUMSLSZUAHJNFSZOECWLAWAJINEGKMRYEKQQSZJOIBXMDHEGUTPTVSXJXNSBMWIDATYYKLDINIORCUVNDCZQFFUHEQAGRWFBXQQZGALGYFVRBDHRKZHLEEQADONAPUNXJBOVIRIMVV");
    msg.value.assign("BHRFQKHODUZPFE");
    msg.type = 73U;
    msg.access = 171U;

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
    msg.setTimeStamp(0.5016688610001813);
    msg.setSource(17356U);
    msg.setSourceEntity(93U);
    msg.setDestination(12003U);
    msg.setDestinationEntity(161U);
    msg.name.assign("BYMTJQSMAXGQFNFZUZSVNVCPHRBFIRLHKNLIHHELAODIPUNOIDAVQMVQAMLEDWSPUWJZJRNMPAICKRJQKRBOPCPPJSHYKIJHJZUMVXIAGDDLGRYGFGFXFOKDFXTNUCEOEUZSTZKMHCLJDZUCGEIFRUTBWNFPOVRKXZERSLDQCXWXYYJRQBMOBNWKUGMTKDHITVLYYYPALFAVOONLGASQQCWWSYXEYQXATBEWTGVZMBXECSITPZSKBCGB");
    msg.value.assign("RJRJTZOQCKVBWRDNFSVZHXVPNGVJCNDJHZBYWMSNHXQUAEMXNUEMRJAQLAOTXHBYICBFGUUPGTAPPLFTMIMQJKNKOSKIYEVMFIACHFGGILDERUQFNCEHYWRYTCZSIBNPXXISDZLWOTWPHUOGUPWQLIHZERDCQDUOWIKJHCBWYRJNPWQTFOQDXKRFCZEZWLTVGXGLYKKFSBUBZVHESPSMUBT");
    msg.type = 248U;
    msg.access = 250U;

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
    msg.setTimeStamp(0.17757183262507803);
    msg.setSource(42783U);
    msg.setSourceEntity(208U);
    msg.setDestination(57581U);
    msg.setDestinationEntity(180U);
    msg.cmd = 143U;
    msg.op = 251U;
    msg.plan_id.assign("CTTDPCSADSTK");
    msg.params.assign("CZCVURWGAEJEXVSGECQFKNZPHIMJFTSABLMYFWVIGSKPLLIXTMPVPUQYHSODES");

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
    msg.setTimeStamp(0.5288794034259292);
    msg.setSource(41120U);
    msg.setSourceEntity(168U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(184U);
    msg.cmd = 21U;
    msg.op = 101U;
    msg.plan_id.assign("ZEJTUPBAOKXNMGRVTKCBZIYLNPTIKBZVZLQOPHTQRWDSJRLMQJQIWVAUCFUHAUDTHOXHVRMEPGIZJKMDBRYLUVSAGNYAEQEMNDNFVXWNSGSLGLJALTYTXOXWQJKWSFRXIZEQYMUOPROJCFBAYONRIBVBPHGHEVFXUSSHKARAYDFHAWYCLK");
    msg.params.assign("ZARXOLSLRQMJBYOJVPJUCSXMECMVDEFOWZHDFIOEHKVSTUUMWZKTZGDSYFWBIZMWIDQUOQRCSJPLTARZJKNRYQACNTYXNFOMPECIASBRGFNNHHRJKUVSDYVLZRLTPHGLLNGGIPUKEP");

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
    msg.setTimeStamp(0.9116510595406376);
    msg.setSource(24761U);
    msg.setSourceEntity(99U);
    msg.setDestination(54432U);
    msg.setDestinationEntity(3U);
    msg.cmd = 18U;
    msg.op = 254U;
    msg.plan_id.assign("FQZSJUTNJZW");
    msg.params.assign("BWLCLHFFSMCPHVLMVWDKBJHDHPNASOQNPKDJSBWIWGJUJPWRKVUXGKKOESBNOLYUEYRPMTQYIYFTDCCLCRMAGFJXEFOINICGONVJGUIQIDDEUFBFOURZZMTGXMRWERPHOMHZHQJQZPIMKDPGNC");

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
    msg.setTimeStamp(0.057524499462892065);
    msg.setSource(53747U);
    msg.setSourceEntity(129U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("EAWVWNSFGEMWBPDLCLLBZGTFODUSVMKXNQYVYLQSDHOXVASNFDCXCLPVUHIFLACRIGSNH");
    msg.op = 243U;
    msg.lat = 0.9539193270563897;
    msg.lon = 0.40891203990496994;
    msg.height = 0.5166357151887103;
    msg.x = 0.17476522666860805;
    msg.y = 0.25862691450564157;
    msg.z = 0.768600055602747;
    msg.phi = 0.23879928656746496;
    msg.theta = 0.986606568975002;
    msg.psi = 0.35211087284445985;
    msg.vx = 0.027520837562921008;
    msg.vy = 0.8236589366675401;
    msg.vz = 0.9895765381872182;
    msg.p = 0.5663769891513327;
    msg.q = 0.8594188485446052;
    msg.r = 0.6268069002215073;
    msg.svx = 0.9005526533806372;
    msg.svy = 0.9637071392823523;
    msg.svz = 0.642382658384918;

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
    msg.setTimeStamp(0.8019761397960133);
    msg.setSource(9994U);
    msg.setSourceEntity(20U);
    msg.setDestination(50410U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("MUVLKUIPQJMOCXCFADNRDGWFMZQWJEFNGTESNZXZVZKIAGKTYFPKOQMISJQGIOLJYXYDGBQNVMGXKOERYPRQVTYYNRNAPURIOXTUPBWIRLRCQHUYBPAKAZLWQVVFISECCNOAVPLHHGSZFDSADTBPUBIRWMQMHIZ");
    msg.op = 183U;
    msg.lat = 0.4870321896930896;
    msg.lon = 0.3243682321464161;
    msg.height = 0.8465972014429473;
    msg.x = 0.5335885053415873;
    msg.y = 0.4056886216815515;
    msg.z = 0.8364019521917031;
    msg.phi = 0.10988649073465118;
    msg.theta = 0.6759434480679098;
    msg.psi = 0.951079768071985;
    msg.vx = 0.3158211992365302;
    msg.vy = 0.611990359555506;
    msg.vz = 0.09764199577828836;
    msg.p = 0.9499085684425106;
    msg.q = 0.32356328753381414;
    msg.r = 0.7238786827124454;
    msg.svx = 0.8725834411373677;
    msg.svy = 0.28317524569091235;
    msg.svz = 0.2195784454935784;

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
    msg.setTimeStamp(0.907591000125864);
    msg.setSource(25780U);
    msg.setSourceEntity(219U);
    msg.setDestination(65448U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("BWTMAHNRNZILSUSDRZXUEYQXVAVWTYWTZKKGOQKSQXNAOBAPFEQRIILCMUQJOXKHUGJDWMZWDVEJESKLXBKSVYEYGHFFPEMVCEFLKOIOLGNLOBDHJYCRHNTDJAIYSMJQEOVZHVPINCZQKCUSIFSUDXAXPSZRQKVIBMCCRYWBEMUVWQMAUHDCFDTBVGJHMCEBRFYSTLZRTPUZHROGWTJBGXLUFFKTIGRAHYCLNNADTDOALG");
    msg.op = 160U;
    msg.lat = 0.7479267017344756;
    msg.lon = 0.38376592036148893;
    msg.height = 0.693408377389785;
    msg.x = 0.09810686057271467;
    msg.y = 0.4350131579868396;
    msg.z = 0.6181487799664246;
    msg.phi = 0.8344748309371943;
    msg.theta = 0.027787095619444924;
    msg.psi = 0.13575174002878232;
    msg.vx = 0.8694602608112617;
    msg.vy = 0.9915771190890192;
    msg.vz = 0.07610551879071836;
    msg.p = 0.4543199391452266;
    msg.q = 0.2919565717477177;
    msg.r = 0.5669490736104619;
    msg.svx = 0.24949560199144094;
    msg.svy = 0.9557931799850921;
    msg.svz = 0.601575379092713;

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
    msg.setTimeStamp(0.6777154441661294);
    msg.setSource(9779U);
    msg.setSourceEntity(233U);
    msg.setDestination(49154U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("TOMETEBNDHSKGQUPKSBQDCPJPTKPRRZTVENRBMFEIHFNDTWXIALINHZIUYLWFYAQIIXRXXYUMTHBQWAATOMGXBQNXILURNAVZCCJAWGJVINSVYTCCHQXRJLWLPVSJZFDZDPVGDCZREBPJRPSWQVALOLJGZOCKKKNVPHXEFVHYYOMCXGMHUOCRMSLEKG");
    msg.type = 162U;
    msg.properties = 103U;
    msg.durations.assign("KIBFBCIIUYJQKJFSNKVPXAHBZTNLNGIYAKBMWCYBQVYREWUXJRMNRFEHOZLKVVTJQVGZOEUOTPGPALXUFABMHURDHUUDOZWOLLQNVMWXJSXTBCLDRVZXJZIAYEKFESOLCEQHIDTFTFMJFPYKFDMDSAAFVPGUGNWGMBONWZISGSHHNXQDHTMYDRLQSGCIEZQGSWZPWYTBPTCLVRQRKMEXVAECPINEXOIKM");
    msg.distances.assign("NPPLTFCIRKWVIQMAMHBQOTMHXGFXAEVRPSGFNXVCKAQMEUMPQWZCHASINQJSAMSEIYTRYCWXNJJIGBFTSGZZUUKBHRRXDCMMNIYIILLVVQDAHNUUE");
    msg.actions.assign("KELTLXGZSDARTROWIHYWSHBBARYQESXBAVGTCJQTXEIFGDNAYOHIHSGKWXPFPDPZFUVTFG");
    msg.fuel.assign("NNRRGMKFQFVXPEQVDLDCHSKTPXZVAZFZJYRQKXHLYCQWMSOKENTCCJTQXMMVIHCPRNVBX");

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
    msg.setTimeStamp(0.9864263391166381);
    msg.setSource(4569U);
    msg.setSourceEntity(209U);
    msg.setDestination(5034U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("EZFUQPAYUZFTWGISMILIPUHEHMJOWDVDJYDNKJHKFITGWPUBGTWWEMVYGDJAXUINKVCCTAAOMVXVACPBZKQHZXBRQHQBUASDKFEUQKUERWTLBOCIKTFPNGQENEPZSKNQPGFEPTLPEYRWYMWXRGWCDCIIGHJSVLXSJZZNTIOBZYJELOXACOSDTOSGURNKFHNYMVZOYXQSHBOMCZLJIFCRRLJDYHUGBDNAWKFMVBCLNA");
    msg.type = 81U;
    msg.properties = 139U;
    msg.durations.assign("LVZZRWELFMCNMHKXMOSTLSXXBVRIPPXVMKVLFFOTDJGAMBLOKNPGCDBKSITCWCISJYUUYZIBFKUSHGGDJXPTCVJQZPSEODAJLREZBNLYJHDIVDFATJGMSUHOMRDXRNKDYHTEPPECJTGNZNGQWCZDWAZKEBPUWOQRLBHIZKVABPITFAQHCLORIYSZFYVDQWREAOWYNFGLUVKONEUHXXYIYRNEWAQ");
    msg.distances.assign("SKSMBGUIEQBIZNNVAVLWDSDJOPBQVXCFLHSCABTCITGREOPCMHLNG");
    msg.actions.assign("BILBSNHIXXNHOMXVXSHDIYYNOELETQCMYLPHRYEKCUNGWXOUZMSGFMFJFTITOAOEUTKMEYWWJFLYFXDMHDPFNQHZNJLGQFXEKWHSTQIMQUQDAZPBTPSILCCWTMOCQDSDLDBEPNLRWRAAUKSCKOJBBWSIVCIUXRKOGKOZVKAWAPARICVMZAQGVDRQU");
    msg.fuel.assign("ZFQIDLOOQEFBZUNDTJOKCNGORCCVDCYGAJAVXXTUORZXVKPTOKIDHNJDUTHAZMAMEWKLMASXSPJIWIIBTUREPFXJBXTXQAWYWUBERACVKGBPAVPSQRGHZQXLEJAUQVVNJDPDI");

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
    msg.setTimeStamp(0.3958283031762806);
    msg.setSource(63011U);
    msg.setSourceEntity(144U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("FIAHQHCXRHUTEONHFMJXOSTASFPMURQIYGRCUVDLSJXPZAILXUZXEMCXLNN");
    msg.type = 62U;
    msg.properties = 207U;
    msg.durations.assign("LRFFHLAKQNIJCYBSQVLIITGBSXNTCYJTPZDBLYNUPQECDGOEDCPVBAZIXYOCMOHIQXVVNNSHKCEJBZ");
    msg.distances.assign("HTZQYJREKILWNBAJUNEBSAZXEEZRXBXGWAJSIZUVNROQLOFHBIWVDQQUOLKGKCPXWWULTTBFGDKMPCSSYIEFYTJQTOCHCUPQWAKZFHLFYXBYVRHTLSOUEHORNMCRJBLXDGJVIVCBIMFDYPNPPGFEGXAIGLOMHOQMOPANHGWXDIZNVOWMTZWNCDUZYHJSKPDDNBMVATJWEJEVSGMICASVPRLXUVFLK");
    msg.actions.assign("BIYYBAAWSYOYUULHEEVMZXHANFSTLORVTDKCNTRQBTNQFIJFQJIACPLXCY");
    msg.fuel.assign("CLKMOGJMXZAYVJNLSCWUGLTYJTPRRCTBYBLONENTCIJLNKZXYQMDSRUXPZDNNVXTEDDHFQPPHTQTENHNKRVVRUAZUKKFRBOQVEGXVYMWASGUEPVWPDBOSVCEWPIJLOYIBDJSXRPADRBWOFEECMVHILGLSLJZBCGGMKIGUHHXKAQLCHUHYQJDJBIEXWSDIBCHYUYSFTEOZDAFFJUNHZSVOIAQRMXXMIFGWF");

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
    msg.setTimeStamp(0.1424253324421907);
    msg.setSource(28729U);
    msg.setSourceEntity(145U);
    msg.setDestination(17823U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.4536541802989943;
    msg.lon = 0.5407842829588613;
    msg.depth = 0.8310729495689936;
    msg.roll = 0.29618792013474593;
    msg.pitch = 0.6083616460691517;
    msg.yaw = 0.4077900149543986;
    msg.rcp_time = 0.3359986917996939;
    msg.sid.assign("VFASNFNYAPOQYMZLTYGMBRXYVUOIGOXOGXWJZPCSWRRSGICQRQDHFBSZJUPVSPTHKWKYSBUVQTDAVMXRJFDYZBMKKRKJIEZNVOUPONVNIVNJLWCEMSFUTKCRVFXENCMRYOXOMLLLWNMCIDPJRILWXKKBILZKNMPYQCKXCTFGBEXZAFHAQPHHGFBEFJHAYWWDJAURQBENACLYOUHWCZHZPQTTOILTMZLGESGJAWQDBSSDIUEHPGUXTEBU");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.5766592909694741);
    msg.setSource(22592U);
    msg.setSourceEntity(156U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.7777019425010243;
    msg.lon = 0.7066462918871363;
    msg.depth = 0.5511117197316087;
    msg.roll = 0.5985436827859246;
    msg.pitch = 0.8583563964472977;
    msg.yaw = 0.8426760483830524;
    msg.rcp_time = 0.6714994912117889;
    msg.sid.assign("UKSMDNQDPZTISORTUXOSMXXAKCYQLWMVVRLRILFUOKDDXK");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.7496274917828301);
    msg.setSource(2112U);
    msg.setSourceEntity(122U);
    msg.setDestination(29207U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.384323457699543;
    msg.lon = 0.7796200452142631;
    msg.depth = 0.9782231702845205;
    msg.roll = 0.3204018135065687;
    msg.pitch = 0.06322312082307047;
    msg.yaw = 0.09301443126780196;
    msg.rcp_time = 0.8582546846037667;
    msg.sid.assign("WDQQWAAKITOTTODSCIHGUHRE");
    msg.s_type = 198U;

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
    msg.setTimeStamp(0.11601406874212816);
    msg.setSource(9369U);
    msg.setSourceEntity(92U);
    msg.setDestination(7177U);
    msg.setDestinationEntity(211U);
    msg.id.assign("ZXOOFUOCBENRISISBITQTIIAONWQJGBGFYHFFYEMFRHLEYJNZTKDXUKNQZPCFRHPMSODHBVBEHVQYDRHDOZUTTMVWCWNUXXDAFHHPBMLIKXBWFAYGIMNGSYCHRBLUWJMLMRRJDACVPGZGZWOJUQLLOAWZSQBGF");
    msg.sensor_class.assign("PDWXZYDHJQMAIZVKLBUDZRQJCYAFQKSBHXKDGVTILJGJZCNLWYWHVMIQAYGYMKUXPYWVCMHSOXVNNZINJTDLGBTPENRGTNIULZOLXPPVRHPURZMFFPQVIQWTJBRCWHNZSPWIKWUMKFBXQ");
    msg.lat = 0.01567210784250761;
    msg.lon = 0.6737651774527275;
    msg.alt = 0.28771966483538114;
    msg.heading = 0.4412878197648614;
    msg.data.assign("RJNGLCCMPRLISWBBQUCHBCQWJAXSKZDOWQGDCHTSURPDNDQTDAGQDFLDMEQNDMPTZVPXVNFGCLPSLGRJZFATHSOBNAPKXOZRKWZYASWOHCNFQKVDEEUXPYSRJIWXUIHURGAGVKYSIOGRETHLXJIUALTVFECHYICFPJFYRFWKEUJOIFDMHJMOVZGELBTLOV");

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
    msg.setTimeStamp(0.05198950075736919);
    msg.setSource(3965U);
    msg.setSourceEntity(136U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(99U);
    msg.id.assign("QPYKGVSYPFPTFEFKDVUFQHXCDZBVFBXJKUMHHBCTLQWKMKBBEIGAMEYZUGOJOQPMEJTCNPCZXYZQRRGCMCALXDWVRIFMLPOASIKJXQLGIHMIQFWVYWXRKNQLLGSIETOCIMDSWEACBTTNAIPWJLWZZRYZASXDXLPSRJVTQADUUVNWDHSLKTGUNLOPFERCGMZVDEROUWJEHBGIWBFHB");
    msg.sensor_class.assign("VGQHEOPEYZZTGDPGTUJICWASZIELFDDMRFNGRLUYQWGXSAXOTFXYFIATOVHGONPMLABVYWUFRLJBNJBHLALBBEDNRXXKFQSHIKINPNERNCTEOYDSCDLCULUTQVHVUCZMAKZQZZXJOIBWIYHJKBBDSKVURTZYMFVWYIRKQBFSXCUKYEWNNSPPJDCZSXSPHMNGXCOOASURIOG");
    msg.lat = 0.663927762482749;
    msg.lon = 0.49826299244478445;
    msg.alt = 0.7479716249979838;
    msg.heading = 0.9599882105133595;
    msg.data.assign("ZDOWZHSCDBTRUGCGNCUBCUUSQITXAOYGLKKGOOPAUHLWJVVSDKCYNHKTBALPAORZSFFITKXOYPXQSXMNNESQPAFBEDGXMIRTUTVIEYDRFERLBEJAVKOFGMEFGQAMPTHBJQHXTYCZEWNKCEMVLBGHUBNSFVWMIPYFIIQUCQRVUKSFKKWCTRZWRBDQGIHBLLZOZWAEJNXHSIJUJXTJVPYYIZXFZXLZYOJGNDPPWPRJLMDASWMD");

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
    msg.setTimeStamp(0.5410655995018062);
    msg.setSource(65095U);
    msg.setSourceEntity(43U);
    msg.setDestination(31465U);
    msg.setDestinationEntity(61U);
    msg.id.assign("YQJUVTKRDKJGJJZHHNJSUWWCRQOTVAEHQRBWVMZBFGCEIZQRN");
    msg.sensor_class.assign("RHCJFMWDIZVNEWRXWHICRBRMVDOSYELLTIJKVFGETWESLIMNOPBXFTIYYHCPWEHGWJEUDDYEDIGVWDXUZYALTPKNINVMDAWBDUTYTXGSCKPDKAAGZQCUKOJKCFBFGZZQNSJIYNMSIR");
    msg.lat = 0.4487247415112364;
    msg.lon = 0.22716802129304292;
    msg.alt = 0.8350554209416561;
    msg.heading = 0.29981571629708137;
    msg.data.assign("CBYPZPOZPZKFVIYSGPQPXWSMDUMPDTRZEJMOIHTNZYFOKOBOSLSAMNPYLWUMJCPJRAJXVDYVLYASRBLTQE");

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
    msg.setTimeStamp(0.8651280938162649);
    msg.setSource(57693U);
    msg.setSourceEntity(64U);
    msg.setDestination(35674U);
    msg.setDestinationEntity(38U);
    msg.id.assign("NAMBNOTSFQU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ACJBCETHYQOTVNDKWJQOGTMXODBSIFCAEHHXSVNZSUIOEUFYLGCLFIOAFJKOXB");
    tmp_msg_0.feature_type = 147U;
    tmp_msg_0.rgb_red = 20U;
    tmp_msg_0.rgb_green = 237U;
    tmp_msg_0.rgb_blue = 29U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6751212710253575;
    tmp_tmp_msg_0_0.lon = 0.9207228742012942;
    tmp_tmp_msg_0_0.alt = 0.4389065006773083;
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
    msg.setTimeStamp(0.8850535645406402);
    msg.setSource(63237U);
    msg.setSourceEntity(24U);
    msg.setDestination(29642U);
    msg.setDestinationEntity(195U);
    msg.id.assign("IOLOQNFFHZNJDTJDSATAOPIXRVHJSQSKTIMPUXY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MNXUDKNWITUVBOOGBQZTVXJIYLFMWWODLNRXQCBBUFYUWXFFBKGJGISHJCRAGLHLIRCREAWKPMPGMJAMREAIWMEQGICALPVHASQBBIZHHVTAPDSFDFYNXCJUOATQUYWBKZQMYFSNWPDTQJRXPYGCJYNXJQIUDNZJTJPNVXINXGVPBIRDV");
    tmp_msg_0.feature_type = 99U;
    tmp_msg_0.rgb_red = 69U;
    tmp_msg_0.rgb_green = 70U;
    tmp_msg_0.rgb_blue = 67U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.007100359905492626;
    tmp_tmp_msg_0_0.lon = 0.1204574225585322;
    tmp_tmp_msg_0_0.alt = 0.754591120648382;
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
    msg.setTimeStamp(0.5095545497091868);
    msg.setSource(18021U);
    msg.setSourceEntity(131U);
    msg.setDestination(22363U);
    msg.setDestinationEntity(72U);
    msg.id.assign("JYYJKWXWXHJIHZJDBQPGITLWBTFAXQLCULMMDNWAKYWNXCHKTOUOSVVSDMTQPLOGMPISKYZWRWVYVMBANGDVPCKUTFCADDDTKZQLBGRKNEPNSBHCNRTE");

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
    msg.setTimeStamp(0.09127783620692287);
    msg.setSource(36272U);
    msg.setSourceEntity(78U);
    msg.setDestination(10669U);
    msg.setDestinationEntity(124U);
    msg.id.assign("OKPXEWMWVUT");
    msg.feature_type = 129U;
    msg.rgb_red = 52U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 143U;

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
    msg.setTimeStamp(0.759780544937802);
    msg.setSource(426U);
    msg.setSourceEntity(207U);
    msg.setDestination(16673U);
    msg.setDestinationEntity(9U);
    msg.id.assign("ETHJZCSSNSEYILYXGONJNZAPHCQSTKIWUKZEEDEYSLDBMARRAFLVNE");
    msg.feature_type = 199U;
    msg.rgb_red = 14U;
    msg.rgb_green = 58U;
    msg.rgb_blue = 72U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6183657982445208;
    tmp_msg_0.lon = 0.08208992766475409;
    tmp_msg_0.alt = 0.14156525643688544;
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
    msg.setTimeStamp(0.4243687984602802);
    msg.setSource(50125U);
    msg.setSourceEntity(2U);
    msg.setDestination(51016U);
    msg.setDestinationEntity(148U);
    msg.id.assign("DJVBCKUDTQGFPWPANIUBMXGLS");
    msg.feature_type = 20U;
    msg.rgb_red = 83U;
    msg.rgb_green = 142U;
    msg.rgb_blue = 164U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.23228500331302493;
    tmp_msg_0.lon = 0.8929281514964674;
    tmp_msg_0.alt = 0.7338807175969424;
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
    msg.setTimeStamp(0.8538707428129466);
    msg.setSource(14871U);
    msg.setSourceEntity(18U);
    msg.setDestination(38466U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.07504068519426266;
    msg.lon = 0.6038665665092623;
    msg.alt = 0.2536868344511142;

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
    msg.setTimeStamp(0.10600621895575912);
    msg.setSource(43046U);
    msg.setSourceEntity(236U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.49131259954506845;
    msg.lon = 0.8810250227615256;
    msg.alt = 0.09113204435876199;

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
    msg.setTimeStamp(0.8335110826863338);
    msg.setSource(47335U);
    msg.setSourceEntity(112U);
    msg.setDestination(57068U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.7933775215097981;
    msg.lon = 0.8560261583742135;
    msg.alt = 0.6715674597204816;

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
    msg.setTimeStamp(0.2150722834552602);
    msg.setSource(6678U);
    msg.setSourceEntity(3U);
    msg.setDestination(33045U);
    msg.setDestinationEntity(176U);
    msg.type = 232U;
    msg.id.assign("UPURRZXRCDOPBYIFOFIFNVAYIHZDMUSELCLLWWJVKPMPQAEODIQRNRYMIONXCCMMRYUEBNTZKDLUAWONMYIVSGNAZGSGQGATDXEDFWVXALOATKIODHUVLWGTJVBCHXSTVJFXZQYHTFFUAPJELBWTSFJEBLIGODFA");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.5516149410590108;
    tmp_msg_0.i = 0.18122191558560852;
    tmp_msg_0.d = 0.10298812681987446;
    tmp_msg_0.a = 0.5335392729231409;
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
    msg.setTimeStamp(0.2507736044311686);
    msg.setSource(6785U);
    msg.setSourceEntity(171U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(189U);
    msg.type = 68U;
    msg.id.assign("XMBPSMAADALLTJKQJOXDXGXLIJJCCVRZA");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 110U;
    tmp_msg_0.entities.assign("HELTKVWCEPCJDXZMSTKQSIEWDVSSGPEUYVFLEHCINCXQUXWGQNTNIHOGCQG");
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
    msg.setTimeStamp(0.5145012399119238);
    msg.setSource(60975U);
    msg.setSourceEntity(154U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(93U);
    msg.type = 82U;
    msg.id.assign("JTCFPBRYMRHGAUXDHONWGWAKGSVVGBCHZJDDEMNIEYIGVMMJBKOBYNWWWGBPDWZYKJSMACEJANAUJTXBRQJLDNLLYUVZQWFIFZDVHAPTXTCAZCXRFOINOFPASQQRLRBTULNPFVLQCJFXBSULZUIGQTBRDHOEEMAYXOGYPPDKCXLRHXMJWLTS");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 87U;
    tmp_msg_0.error.assign("YFGNUSOCPTUNIXHJXMVXXQXCDVGWYMKSXVHVCBJLFVZPEOWFJOUSWAGTFBDIXDLTAWNCKBQZYHUVN");
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
    msg.setTimeStamp(0.21027761782189114);
    msg.setSource(36210U);
    msg.setSourceEntity(97U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(237U);
    msg.localname.assign("QPCEVWDSXREJPYSEBHZJMMZNJFNGAWUEJFJXVBWTLTHOWOCDQNFQANLETBTHPCTBELR");

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
    msg.setTimeStamp(0.7126854084912648);
    msg.setSource(56284U);
    msg.setSourceEntity(160U);
    msg.setDestination(37055U);
    msg.setDestinationEntity(182U);
    msg.localname.assign("TFESFMSPSSVWFLAOOUYHDOKLSLRXMIEBAOTURDPVKPKKNPXJYC");

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
    msg.setTimeStamp(0.6334095887669291);
    msg.setSource(31028U);
    msg.setSourceEntity(213U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(28U);
    msg.localname.assign("CTISDCDQRLVQACXPZJEGIYMEVWZBNKTBPLFJSGYTYSHUSHYORYTVBEMKJALYNUEHGYJFHVOFNMPBDEQTDWFBNDUBMVIELFDYWKHLVZYNUIF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VQADSDUSFAYRIERDGCDFZPMULHX");
    tmp_msg_0.sys_type = 105U;
    tmp_msg_0.owner = 6859U;
    tmp_msg_0.lat = 0.4944457143470382;
    tmp_msg_0.lon = 0.14148671657387413;
    tmp_msg_0.height = 0.8212941106387488;
    tmp_msg_0.services.assign("CDBHQJWGOBKTRZWSYLWDKOVPDJAFPENPWNUZHLHZMFIZGFAVVORMTZBJTUXNYCCVVVFJIOOLDCBZPXMKEAGYNXGISNSWCLSBMNQLUYYOBBJKVJSRQUGOHCTCKBPLDCMZASDTLQRPARYEOZSGMWNHHSSNKWSXIUAGJFTFNJUJYLIEKCIAWEVLZHTVRKPJTZYCLXXIDBWFQEMKPOUXBEHUXDQVDRAEAFYXMQAET");
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
    msg.setTimeStamp(0.7610237042607226);
    msg.setSource(20648U);
    msg.setSourceEntity(0U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(3U);
    msg.timeline.assign("VABEMBTVVCTMXWOGHVONSPHIOZOTPFCHMOKAXHRBKPOMOURKLIGUBVBCNUAQQETZZASLRCAWIQDQTXOWKUIBHHYWALDGEISXNWGJYQPASTBQBAZVHRPYSTGYRRPYNTCNFXFRDXBVVAQYMSLFEDNLVMPHQFEZMTSKULWYU");
    msg.predicate.assign("EZGNJGIAESZVOJJ");
    msg.attributes.assign("WWRSDUDKOJJYKFADYXDDWYGCEZOJSFBIBNSFDVPQUKOHRQHCOOAMHBZCKTLPEMJLVOFIKCOJTOZNIINXNIUAAQEKPIVYYVNTMWIKWCDIUMWQPNVICVXHNALMFCQXSDPZPVDJBUMBAFWEWBCQZJJDRXGKRWWSUATPJYGLQERREHPNFUSEHSTZXYATGGVLMEMSXXBTARGLLLYUTFFZYNCRKEQGZQTQOUYBEFLKLRPHSOHBUSGVBHMVGZZPJTARX");

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
    msg.setTimeStamp(0.5351691846495594);
    msg.setSource(12077U);
    msg.setSourceEntity(179U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(94U);
    msg.timeline.assign("ULIQZYWLJEJWURDOHEXAXCOAXGOPULSFTWBTJOUTOGXDOSZAKQIHAYPDRDLSNCMPJZRAXNJIBIJHWGGQNEUJDCNQGAHYRPVJKEORRPTFQSPTVVCTFPGBMCVCCOMWPBVNRMSUKRYHVMEAHKVUURQBDAMSLYXKILEFWELZWSSZQSPIFHDJXDZFNYLBKETJDIOBZQKZYXACYCULPVHEMVMDNXWIALQWKKFTNKNGMUBSHXRZFFBGYMWHICEYVQ");
    msg.predicate.assign("TETLXORCITTXHKJPJTWIQMXXEAOJUAEUZKEUPAMTNBZDNORBGZUNHWKQURPDIUTDKDDMASBTEWSVEOQBWNCPRHGSSCRVCLLOXFKIWLGLUQZ");
    msg.attributes.assign("OOTLAZFXQYDCBRWIGLNFFBFJVTLDCPXUWYFQMKTIZHRZDJTGSIMUDMMWBVQNBKRIJRDFJKVCSYFZULJSAGQBEUZEMSKHKZIRNKPCADJPXGCCXTXEOSTETIQEVNHRVXBBCUSLAKWYKDTPTRGCQRDULAHYSLTAJSWYXPNNOFPEIGDKXWOPUBXCIGMQNJCVZNHSBZVJGWHGAPHWYUWFREBORLAIALZJYEQOUHEW");

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
    msg.setTimeStamp(0.6964124631925215);
    msg.setSource(59471U);
    msg.setSourceEntity(20U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(162U);
    msg.timeline.assign("QKNSLLEVRKFJVVAIWEDNOZUQARUCGIFEXAADLGSMMHJNNDULUBLLVGRLBQZWFEJWSHDCVSNMIACSRXCXKLOYWEWFKTKNBKFZIENMQOJATWYICPMABJPQAVDTFGSCFPRGTWJJYNUHBJZXQHKTHMGPHWRWBUYFAJXBIZYKFHIEOXYDQHNLRQBYKPQVK");
    msg.predicate.assign("CSMQKZZHYLNKPNCYOHJFYUXQNABWZBBDPLPHDOOWIGOCPTKSXFAZDDVKNUFPREX");
    msg.attributes.assign("UNCYCWHESQJBNWYQBFVRWZPBARSNCYCWAUKRRAIPAMLHESLLVWMQOMXBULDIEFMUNIBGXWLTJFHIKGDAOSBAZDFZCZGKKYJOJOKAXSDRXMGPEVXETIIZRDQLNCIEYYETJVIPGHBKFTVSTPXNJPEFYVTRUQXBCFOJKZDCKNSHZRAMPAQGCZXMFH");

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
    msg.setTimeStamp(0.9886939861469259);
    msg.setSource(41303U);
    msg.setSourceEntity(185U);
    msg.setDestination(36373U);
    msg.setDestinationEntity(42U);
    msg.command = 52U;
    msg.goal_id.assign("VADCZVGVJMMFAOPBUOEHWUYWVYWMUYQNYCHDMHGHQFMMLJXHLIABCDSBAQWUARJXIGTGXATGTFFXTNZR");
    msg.goal_xml.assign("ANDUAPHOEXRAXAFEBSLIWVMMUBRHKEUAOEJXNVUM");

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
    msg.setTimeStamp(0.9007207109416625);
    msg.setSource(27922U);
    msg.setSourceEntity(235U);
    msg.setDestination(54722U);
    msg.setDestinationEntity(162U);
    msg.command = 20U;
    msg.goal_id.assign("IUADPZDHVDRDQZHJASXVYIFCXILWHXIHWRKDEORRSRCTGPLWVHVMHKEUAGMYQPAXYKMBFFHXPFJNYQVBWLFNPOPKAISNCEAZORRZEVQWJDMUEATYJZDWOPMQDUKKLUBPRPFGMIMXVGRSSQTDYJGASFJZTBLCCSZICBJXQLUOWTCTIXZYXJQETKWQLGNBOIEYQGFMKHNJLJUVMPULCHMUWLNVZTUKGNESXGTFSIRGFNOAYBOOYNSKBAC");
    msg.goal_xml.assign("LBVUGYRTVIHZNRTQFMYMIVEPWJ");

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
    msg.setTimeStamp(0.46790474463536647);
    msg.setSource(16175U);
    msg.setSourceEntity(18U);
    msg.setDestination(33302U);
    msg.setDestinationEntity(254U);
    msg.command = 109U;
    msg.goal_id.assign("CJFRDHRQAWVBCETBTIFZWLPZOKONFVUVFURCYPGGJPWGGCSYNJTMXADOBCMUYURYBFLZRMALTXABWTZWJKFPYEHFHLIWHOYZGQPPRKXFDNQJQNGBDXOXVUZGPKHHSDGLLTEWVCOONPXHYXIMUSTBKZOKNSBENKKVFWPNDEVTWJVQYREJELOXSCNSLHWZSNCJJQOCAIADYZMIVUAREQFYISEDUSLAEHLTJKVAMMCAPMRQIIQB");
    msg.goal_xml.assign("LBUFGKLZQPQHSCOEHNSIAMODWGMUDVIWZVVQDCVGNZAOMJMPFTZBNBBVSKQFGQJDAYSZUIFHRPMMHGKLWTYCPBONVOIKYWDUYARXXXXYWEEFTJEEYCAODYZYSEJXPTLBRXIFZKDATWRUHOWJHJQVLVKEHHVUOJDAIHGSPWNFLEWTOBXGGIDQCSRYSBYZPXKZRWJIUBSALCKTATCOPFMFLNDMEQICCKJPNGNZSXRGARBEFMQLCIVNLJXUKU");

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
    msg.setTimeStamp(0.6138229318597821);
    msg.setSource(55536U);
    msg.setSourceEntity(47U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(232U);
    msg.op = 170U;
    msg.goal_id.assign("OYJEQXUNBXVDZMFCELPXHRGAGNIZLAUFISVXGBBUFMKHVQRU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ARYHTWGNWISOMIOMOTCVCDJZSIPZHSNONVGFVJKUCMKDLAXSXNXPWAJFFHIRISJIFAHKITONKHSGFBMTDPFBLPMGKMTHXUMXCRGQGACVIERBYJSYMCVMZEZUHUGTHOTOSYVYZRUXLWBLRNKJDEQCUEEDTESWXYIRBQBWCYCQONQQXYVBFVVOLHADUDQGRUKWXQJPFZTLSPJPCZJWA");
    tmp_msg_0.predicate.assign("EWBXMDPKSOYUAWGBGAIDWLKFZVMEXHNKAWRFYEJWODXYHJQWFBUSTXLKBCGGOMUHVTDFQGVBTVDZZDSKPHZLRSDHDTRFORQOHMJITIURPNATEBYJPFKUHVHYCALONJGNKSAXWWQMAKYUYVVJANOLCDCXCVPVRQKLXOSLNICFNJSTCPRQCJEYIETZYAHNXSAPJE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AAPEVUNSRHNBMMCHZYOCLCNTPVZFWOCIIWOGRCPBHLEHFWFKYYUGVYHKYWQEDTJIKBZAXXESQWZQMGDJXOMCTMDLAIUAFTHNTKNPPXLLZEFDLDORYKPNVBTBJQDGKG");
    tmp_tmp_msg_0_0.attr_type = 38U;
    tmp_tmp_msg_0_0.min.assign("XVWJPELOVFBCDXLJJZUQRNJVIFTQCRMDOTHSRILDUKQRWBOFSMZDSZTQCQXSKKJCXBOZTDEZZBVPNLHEUTEXOGYDHKCKVIMYIMCWFKGZAYNNXMPUFYZPGCSQEMRFVSZRDZXOWSVMJITOGGEFYDCLUANJPOKIHTFIJYPMKQTLHMHRBANQXIHFGPNBLEGLSVQUWEDYQKANYDWRUAUVAUEUOALPYIAPOAWCBHGGGWRKXYXNBRLCWWPTHFBSIMT");
    tmp_tmp_msg_0_0.max.assign("FZTLXXSZYNDHNGOXCDWFVJSZKVNXATGEPYUSJQDHQZQCJABPUAAAHLZTIIJFMDJJSFATTCUMZMVQEAGEINNKCARZRHOJOJRKRBPYZWUGQWFFMZIBDCKRVECWQZFLPSLIXTPRSEVXDFEMDGOHKOKBEFBVDBRWPDTWGOEBTPUKXMUMVIBXLGXYAYOLUTIUPJVQQWEPVONWRSYBNIUWYM");
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
    msg.setTimeStamp(0.5949958534418462);
    msg.setSource(23240U);
    msg.setSourceEntity(152U);
    msg.setDestination(41568U);
    msg.setDestinationEntity(49U);
    msg.op = 108U;
    msg.goal_id.assign("TTDHXLDRTDMTJZSYCXLZONLBCSHVVTGBTGFORRRQLQWMDTEUOAKLBPAOTXZSAUCYCQHRJAMFJPILJFEGGIPKZISOFJFUJG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AIZSYFGPTMYAEVJBKOSBJBGLPWSDAWMJXUGEZHXUUNTFGKAYNRGBE");
    tmp_msg_0.predicate.assign("NXEAQUSTSACVLIYQXOBNZXBEZOIKKVMWNLMAHRXDRSOJCPJHFPVDRVOXUTSWAHWJBGLVQMWYGNQPQZHMJHBIFKLDSTCIBREIY");
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
    msg.setTimeStamp(0.6069950654784252);
    msg.setSource(1873U);
    msg.setSourceEntity(67U);
    msg.setDestination(44669U);
    msg.setDestinationEntity(82U);
    msg.op = 94U;
    msg.goal_id.assign("XTZBSTATAIOYAGGMYGKDHFUAWRXQYLIIHTDZGGNHZFKBEPBNVWXJJVNXEEELPHKHGMHJDRQIYEYCZCOXDOCIUNRMQFFEPPQGRWTNWGCLPMPMQOVEDROCFYODWXZLQRHFSHLTXVYCNWOIPBZVFVSUUIUD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EKILLOUZZBQUPYVEWMARBVSEHTAKGUFNVTWVTLPNBHOKFMWRFJKYDZYWYGJQWLJSPNPZURINXMXAHWJIYKXIJJGNAMWKMGHUGGSSIVZCVLBDBIFHEDFQTOXOADPITVNFOQDRPMGPSXOYZHOCEHEQDJBPCCOMBXATNSZWLV");
    tmp_msg_0.predicate.assign("XNYQOBKROHBMQUJEXVGQJWGLKHZLBYIXLCQXAKTAEIVMBLPGMHCVULYOHMFJBYVFSDONJXFGAFBATSHCSSPKPWCZQUFPZHWABNTOVNDNKHKLTDEGCPESF");
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
    msg.setTimeStamp(0.14854517870786588);
    msg.setSource(36004U);
    msg.setSourceEntity(60U);
    msg.setDestination(38037U);
    msg.setDestinationEntity(178U);
    msg.name.assign("OJMEKDQDBIHZJ");
    msg.attr_type = 148U;
    msg.min.assign("DJMEIKUBNIXHFXELHYMNDLWOOTGZQZRDYWTSLAEKUJKCBWQVUVKZQTCARVLGSSXQPSOAITMIEZNCOWQYUBPKTJOHZMMVFYHYGOBVJFROHALGACUXYZBCZKJRFDBNXTFMCFPKQLAGTQGPAVGINFEFCMYYNHLEJBUZCLJSPMHVEIIDRGWKURACSPVEMAJRBQKOXFHRSRLPABSNXDDYPUFZTKSWIUJZWNIJCTWSNEQDGEVQDD");
    msg.max.assign("COHTXBYELBLRCRRTKWWGUNMAAUACEPYSLUWDEVAUUZXGGMZIEMCCKJULMRJRXRPTCTHNHVCIFAHFMXFASACODJGVOIMIXUBPOEHXQYNRAOBEKFYJKMHIAQPAGPVHLKXVUIOWLSNDGQBPGOITDJDWYLHZPSVGREMBFRJWSIEDRZFTQSDQQKPOBVJYVNTDPZJBYEGDNDYNULHHWBZEVTZSOLTBFCO");

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
    msg.setTimeStamp(0.6328041017091613);
    msg.setSource(9027U);
    msg.setSourceEntity(75U);
    msg.setDestination(48667U);
    msg.setDestinationEntity(26U);
    msg.name.assign("UYCGHLQLWMWCVVFMAAQRTFXUHOHIZNFSIXOHZTNDZBMXLOUICOKPCKSYPTLMQXGEYWQKZFYAQKIMLCTNOONOEDBZRSTSLZRKAOORXERGLVGRESJE");
    msg.attr_type = 22U;
    msg.min.assign("MXHOMTZITFAHLRVJXUSRYFBGIFSZHCNANOZFRDGLBXLJPJDQRBVTICWGSPRNAZHGOUELBXGDHIYDHDYZXTZWZRYBDFYQKEGVHEYWPAXUJKXZTUOQCOMSKMJSECPEDXNUNKKAHGBOCFSNVCQPIIDFRLYKTLMTABQEVRDWUSAQCJNWLRFTXU");
    msg.max.assign("NLLYNEIBMUXLWOLGNKQKKJQNVCHRDYCFDAJWUADOQWJSLZZBUHWIEVSOIPIGHPNHRWDEMWIDDRTZJSVQBIVKPTZXW");

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
    msg.setTimeStamp(0.5383738273389512);
    msg.setSource(24042U);
    msg.setSourceEntity(235U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(125U);
    msg.name.assign("EABNTOIOKQUFJMDVXYAELLCPGTJCQIXWTHGMZTOBXDUG");
    msg.attr_type = 48U;
    msg.min.assign("GCHCQAQVYNJGCVPZJBHIVUAPZBPRECYOZTKXYJFIOHKPXAFDYOZKYFLTGEJJCKMXGTQNGDDIOUUSNACGEFSHOXBEUVVIAJAWIVGAWBIQCCMSZMTBHQKPMWUTJLVOPPLAKNVSMEFMNLNDPWEXWTRHQYOTCHUFKTEWWEMBXHUBJLZVLTTDR");
    msg.max.assign("LDDHSGNSDIMEAADGVTNFCYL");

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
    msg.setTimeStamp(0.7334193629834738);
    msg.setSource(30130U);
    msg.setSourceEntity(40U);
    msg.setDestination(17004U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("IPEQVTDTBXBIISENQNCVLZGRBAWJAJPAFUUMWJXYICWOCTWQYBNTKWAZFNWUBAKHSHZQSGEDCFXLPPHILPAYDCLEISLRXOLQBMKFCVPJDMZMZWMTHSCFJLIKEOCNMFLQKUROYEDDNSFJEZMNGYWXWCVHLDHBABISK");
    msg.predicate.assign("GKMVOMAYSXCQCTLSFMMYDQRBMKIDAIQAKVPBGVIORLQEEXBDL");

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
    msg.setTimeStamp(0.3248802570702113);
    msg.setSource(34458U);
    msg.setSourceEntity(210U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("EYZWSLEHDOCQWOQPXFZBTLQZEEQSURZQANEENFAZK");
    msg.predicate.assign("CETDBAZPUWUUVVDTMWUAPLYFYX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HUOCHXHNUOVOJJREMITGLKOJXHGNAAMFBOPIXXXXJHRNYDZJUHBEFYASGLSKL");
    tmp_msg_0.attr_type = 34U;
    tmp_msg_0.min.assign("EIKQJEJYJBXNIBHOZSZUNFUMZBUJUYQNMRPOCHLCGIEEKYWLAZRTGMFFHQFRPXAVJXDXMVAQVDAIXDYJYJDVYARCLCUZXWVQPFORIBCGVWCNJWLE");
    tmp_msg_0.max.assign("XHRDSHRZIBNYEUZVQJHSXYLPCYHUIZJAYMGJRGHUXKDCOKZAGDJJXFCFHSIMGCWY");
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
    msg.setTimeStamp(0.9109375256598722);
    msg.setSource(47119U);
    msg.setSourceEntity(175U);
    msg.setDestination(4988U);
    msg.setDestinationEntity(172U);
    msg.timeline.assign("YEHJUWEENQAILQXYBDHNRXKORPIQMMQZJPKYVWKSKZCMMVXCAPZFGNWQZZSYKGETBLXGIDHOZCSLFYXVYZUIBEVXOAOPEHJUUUGDVXWBTDZUWJJBJEXDHTCFBPHFGSPWACDMCUF");
    msg.predicate.assign("RXOGACAFSPZALOT");

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
    msg.setTimeStamp(0.3834009330614375);
    msg.setSource(16005U);
    msg.setSourceEntity(75U);
    msg.setDestination(15011U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("SQQDOWWGMDKJWQQHLFFLNPTFKZHHYGAQIXMWSLTTPOOAXARIMTHKXUWRMQJIO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PAXTUVAHSMBQPGBNVJXKHVICWKQFKDHZTDNWFMKBESLROEGFPPZYBVLBZVENYNAEVGOGURYUZSUMOTROFCBXMOUUYENPC");
    tmp_msg_0.predicate.assign("VKKDUSMFCUREPCFNZLASOFABNBOMRCWKEZWXYOZGXYOCVFQVKPVDMUIVADQJLNESNZQXAJZGWULTTVTUOHTKVUTRMPLHBSZUELCGRYV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UBGQIEQZBSZFFJUIDEGCJCTHFWMOANBGUTZAKVDNWSECVHLZXGPATKQQLLNRVENZFEWGSXWNVHTATFOXQGYIPTDHVQBKNYDOKXROIGNOUCQCYUVNJYCWDWNHMFZDLTMMJXMXVOLZULAISQFESEHVGLXAJUFKWBISEBHAIKRBYKMPBSNOPMRYJZRYPMHYHXCQSTUIERWSJRIRAGADCQDFOJPWDPWLZKDFXOPVLVSCUUTXR");
    tmp_tmp_msg_0_0.attr_type = 11U;
    tmp_tmp_msg_0_0.min.assign("ZHUGASSYYJMWMPPJKRNACEBTMEAZPZLICHYCMLSGUZEPKIWARIJUSPOXZRBGPAWXWMOWWETGQIFHTODFFLCRPRFIBZUIOHAENUVDOTFMYVHBHJGRKDVWUXIRXIRPQBHLMYKUC");
    tmp_tmp_msg_0_0.max.assign("WYRIXHHQBUEFECCCZEBEIEPEAGTBTEAWRXYBYYRVWNVRUM");
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
    msg.setTimeStamp(0.5248119604980731);
    msg.setSource(37730U);
    msg.setSourceEntity(40U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(109U);
    msg.reactor.assign("SFAXMEOEIYZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YJHFMQKTUNKYRXJPNYALQXDGGLSLOBRDQEPEFAZGDSADMLMHNRVJCWBCUPXZKZWOLMNMFUGHVGYRQKDZUXIHPWKRKSKOTPWVORNGUCVXJDBLAZVJJCOITEZONWMFMIFWUIHCEKFLEEBBXVSNGFJSDRRASHVZXIAQAFWXYQWBWYOCH");
    tmp_msg_0.predicate.assign("PTZTSKGJSCWAFYTBGQHGQLXDZRTBQAOVWNBONOSQQKWJQTWDUWZILOXURDFBRSEUZEMEJCLUPSRJBZFSZCDUBELDLFGTPPUBUCIQARFYHPNJYUAIPQJAZJVYXMPWRM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KQWHQPHRRPQJOUFXJABXZIAGLKZPOBNNBICJBTKALIEJTEYWEPFLOQNZHCYXIYSSEHTCKJBSNXMVRMWOKQQMZUJQUNTMUQVYFKIJNHQRPOWVZATXCDRGTYWBPGIBCFSECIVDNZOCDVVLXHMXITAZNLMEFUDFRSHYJLADMZNKLASHCPKRP");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("GYDRXYSOBVRJEJEUJUTITNLPHXLIDEMHTGWAQPYDSXBAPIKMVPEGQVXUFRSCBAFEQLAQCVNHZOINOZLRGEPNLHNQBGJPTTBIKGHLXOPGZIPMQSZTGSCDOUSCDRIQZYFLTHNNWFFKEUURLZCACXMPWBVTUBXZFRBUAKDINLZJMKYRGWJFGZQWCSBDMJJEEKHADKYCVV");
    tmp_tmp_msg_0_0.max.assign("ZCVVMYPYZWUPPAIKZNIERRKZBINAEYZVHYSWMUQYTJEGROIZNMHCBDNSLIQEOEDGHGUDGOOKYQGUAQJXDWSHLKURNOLCBMQJZZKERCQCIBGFBAXEUJQFMTWCFJXQHHDVHWRBKCHXNPEPKP");
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
    msg.setTimeStamp(0.48732755917858084);
    msg.setSource(7186U);
    msg.setSourceEntity(92U);
    msg.setDestination(36685U);
    msg.setDestinationEntity(183U);
    msg.reactor.assign("HEKSYPFQRJALFRJUCQDSLOGSROYWUDMEPYMXMNUXBEOPWSRGGZWTBRKZFEABJXY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LZBRWXVMSNBUBCSTKEOFQGDMDUBHKJRASTPSLYZAQWLYVHKTLQYRZANELZQEFCUNATVZLHRZMFRQXXOLLXFNCXVOYONWIIHUTBUDSCUPNFEJWDPZDFOHXYSHFNOQBQQAMLRPTGGKKJCXTCMFKEPVMQH");
    tmp_msg_0.predicate.assign("FNORWKFIHOJKXSUPZLRQHIWQHTMCJKRTBEVSKYDP");
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
    msg.setTimeStamp(0.3318586407475449);
    msg.setSource(35052U);
    msg.setSourceEntity(44U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(109U);
    msg.topic.assign("TTPLVRFOZMKHZSGBFUTQPIPUXAQFSWIDNAEWVCSFBDMDKEEXQVSLMIFOOSYTAUXEVLAKTURNTEEBHYVRDDALUNGCOLNRVFTJGMSJZKZEG");
    msg.data.assign("JRSTPNCZWFAPYEKGVFEONMYIFGKXHTCLEHNXWIMXHJBOJXAUNLZIKHVEVIPFARDFREVXQWFMCVISSKJBPCGJURYNOGZWYRBTLIWHNWGCYDBQYUJSGODRJADDUSDJXLEZOPTYPWVSIFKHHCAQXDPYWZOQUAQBEPDGJLNNRZXZTRZAYUSSTALZVAFHGIMUUBNVAPWFBKMJBLQTZGUBOEOHPBMLDKDFQYMOVKOQCCGRLTWXHCRTMTK");

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
    msg.setTimeStamp(0.3172049838177332);
    msg.setSource(12048U);
    msg.setSourceEntity(114U);
    msg.setDestination(3193U);
    msg.setDestinationEntity(223U);
    msg.topic.assign("OEBCAKAVTSSPZZOABYRIQISSBWRPLWUTTHIUTNORCAXWSTDKRJBBZLBCGUUCZVUOOLPKVBCQWNYBDEROQNWAHEJZKHRBCFFNYGJHCVMGGWDWGQXLVTJLJYUEWMIJNXEZCMDVLARYYXPHYSTDMYMOIXJVPNEVTDIXDEWNKJRLFVLIHMQWZF");
    msg.data.assign("BLUDRFGWALAFHUXLEJCLMAMCUSTNEWVDGRZVTJNLWKMQQUEIGNFYRQOHQQFQWYICUDDHXMEMAVRDEEPRQNMOKICVPHNZKAMJRPVHKJXVICBKFXOOVGAKXOWJOYJZKXSPRODIKUTDHWGLJYAHBCYZZSJWRIXQMTFYHEXENCXIHOZGXQFTPSYBTO");

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
    msg.setTimeStamp(0.42671576751582463);
    msg.setSource(13834U);
    msg.setSourceEntity(31U);
    msg.setDestination(35571U);
    msg.setDestinationEntity(112U);
    msg.topic.assign("CYWKTBEYNMOZAUDYHPXMVUTFWFHHGQKMOACVQPAKENOLWGAVTJIBGUGGDCQBZNGLTUQIEDJTOZYZVFFBJKXFPSBCXUEFCLKSXSTVXTZIAXYKPVKJMPARWDBSSRUPOYROWZXCEXWAPNOJGEZLFTZRHOZOUNDQYLGKCQLLBIRJGBHWYUGDOQIUCHCVKNMWRQSJJUSRRDAENTJYVNNDJXIIECHNSLBMELDIIWVMSSHQ");
    msg.data.assign("KJBPVPFLPZHKQTSFPLITEXQMXVXWEGLMNESPGLKVJDEZUNZJNDZBRGVFSZNSPMQSWWGQYLXJDWZPBOUQICLLOXHHNZYGRHBERZFWDWOOUXHVADDQJTVWCGZKJQCYMJIOTSJDGJBMYUBTMFCOLDVPYPUXSUYNXAMQBQTCFXUEIKAFIYM");

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
    msg.setTimeStamp(0.292786229657908);
    msg.setSource(64948U);
    msg.setSourceEntity(120U);
    msg.setDestination(41577U);
    msg.setDestinationEntity(228U);
    msg.frameid = 14U;
    const signed char tmp_msg_0[] = {-11, 107, 90, -27, 104, 37, -26, -107, 76, -91, 53, 113, -78, -27, -117, 42, 125, 69, 50, -23, 62, -128, -26, 70, -87, -112, 87, -104, -51, 16, -85, -67, 81, -51, -69, -19, 50, -40, 109, -42, -58, 73, -90, 36, 85, 110, 37, 80, -83, 8, -128, 67, -30, -51, -82, 111, 112, 82, 78, 54, 26, -20, -47, 14, -108, -12, 62, 69, 23, 100, -99, 62, 108, 75, 66, 36, -35, -102, 37, -90, -17, 54, 71, 80, -106, -26, 104, -53, 85, 118, 43, 85, 90, -112, -53, 64, -3, 12, -89, -3, 115, 31, 43, 64, -77, 92, -9, -8, -39, -25, 70, -88, -22, -74, 44, -14, 8, -32, 35, -23, 65, 92, 23, 7, 83, 89, 36, -45, -81, 24, -62, -58, -108, -46, -79, 52, -95, 106, -37, 4, 97, -47, 54, -123, -16, 62, 17, -18, 102, -90, 6, -30, 39, -47, 66, 14, 110, 11, -7, 14, 65, 13, 122, 113, -6, 93, 50, -112, 56, 61, -63, 94, 51, 34, -51, 42, -25, 33, 5, -92, 91, -70, 72, -127, -58, -72, 99, 39, 86, -120, 80, -51, 81, -84, 32, -66, -8, -122, -1, 56, 56, -61, -103, 59, -126, -32, 49, 61, -110, 74, 60, -56, -101, 104, 4, -12, -78, 113, -100, 72, -19, 76, 94, -58, -71, -89, 65, -101, 24, -96, -127, -92};
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
    msg.setTimeStamp(0.705937367791601);
    msg.setSource(19587U);
    msg.setSourceEntity(191U);
    msg.setDestination(38734U);
    msg.setDestinationEntity(16U);
    msg.frameid = 222U;
    const signed char tmp_msg_0[] = {-93, 83, -38, -72, -98, 62, -22, -91, 116, -115, -69, -66, 2, -13, 37, -111, 86, -34, -59, -95, -114, -66, -39, -20, -9, 30, 12, -40, -47, -19, 22, -20, -46, -120, -96, 93, 14, -59, 75, -24, 116, 86, -117, 47, 109, -48, 2, 28, 80, -80, 46, -55, 117, -123, -70, 87, -76, 55, 17, -75};
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
    msg.setTimeStamp(0.988765077260221);
    msg.setSource(24588U);
    msg.setSourceEntity(49U);
    msg.setDestination(33548U);
    msg.setDestinationEntity(90U);
    msg.frameid = 139U;
    const signed char tmp_msg_0[] = {102, 53, -95, 81, 79, -87, -40, -15, -56, 102, -43, -107, 79, -92, -57, 106, 77, 0, 43, 47, -44, 118, -98, 113, -79, -20, -92, -55, -34, -84, 3, -109, 120, -33, -22, 112, 105, 60, 25, 115, 69, 94, -46, -89, 79, 40, -97, 79, -123, 114, -26, -93, 6, 96, -90, 124, -110, 90, -47, -8, -70, 78, 121, 111, -78, -63, -3, 108, 54, -104, -59, -37, -80, -99, 83, 57, 26, 10, -77, 64, 82, -87, -8, 24, -85, -120, 8, -101, -99, -34, 29, -80, 50, -29, 99, 17, 113, -43, -18, -37, -81, -109, -123, -123, 87, 38, -24, 104, 39, 42, -90, 13, 55};
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
    msg.setTimeStamp(0.7227338214855842);
    msg.setSource(62631U);
    msg.setSourceEntity(45U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(59U);
    msg.fps = 125U;
    msg.quality = 180U;
    msg.reps = 105U;
    msg.tsize = 19U;

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
    msg.setTimeStamp(0.024238966120476713);
    msg.setSource(25049U);
    msg.setSourceEntity(83U);
    msg.setDestination(65316U);
    msg.setDestinationEntity(83U);
    msg.fps = 54U;
    msg.quality = 131U;
    msg.reps = 126U;
    msg.tsize = 232U;

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
    msg.setTimeStamp(0.3155387920135986);
    msg.setSource(49646U);
    msg.setSourceEntity(101U);
    msg.setDestination(17238U);
    msg.setDestinationEntity(211U);
    msg.fps = 80U;
    msg.quality = 165U;
    msg.reps = 99U;
    msg.tsize = 80U;

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
    msg.setTimeStamp(0.05878306541981548);
    msg.setSource(27023U);
    msg.setSourceEntity(117U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.6335827352316917;
    msg.lon = 0.44469131419895747;
    msg.depth = 106U;
    msg.speed = 0.06436375189582522;
    msg.psi = 0.07899215329382847;

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
    msg.setTimeStamp(0.10683208188343618);
    msg.setSource(51322U);
    msg.setSourceEntity(139U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.19760475730993177;
    msg.lon = 0.5641580332539992;
    msg.depth = 218U;
    msg.speed = 0.25619540593157486;
    msg.psi = 0.8640892088336444;

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
    msg.setTimeStamp(0.6496772976167374);
    msg.setSource(56768U);
    msg.setSourceEntity(118U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.5925940016834044;
    msg.lon = 0.7214499716280677;
    msg.depth = 208U;
    msg.speed = 0.7590050427862711;
    msg.psi = 0.063514966920169;

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
    msg.setTimeStamp(0.5893223886624205);
    msg.setSource(13528U);
    msg.setSourceEntity(141U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(67U);
    msg.label.assign("DVRARZLPPJXOECBRTMGEOQAEPZGKUCWHKYAVTRHJFFWMGWLMZRXITCUWSFPZEMIECNMFFXNOSKQBJCKBTHDBZQMYTIXWILYQIHTJVHDBSNRGEJWGNTJCSAQBXPZJFKHSBJWWWTBQVLLEZMKUAOCLACGDPSEQUDLIXRIASUDHGVUILFXGXDOORZF");
    msg.lat = 0.6860525530523623;
    msg.lon = 0.7250871203771267;
    msg.z = 0.6521116478845274;
    msg.z_units = 107U;
    msg.cog = 0.4848200340191394;
    msg.sog = 0.6677321013029078;

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
    msg.setTimeStamp(0.029453706259614076);
    msg.setSource(8449U);
    msg.setSourceEntity(221U);
    msg.setDestination(31876U);
    msg.setDestinationEntity(245U);
    msg.label.assign("CEBOXGQFQLDEOGPJBMHFDGDNXEUHERCVIWYEXVISNDCOAQGGUVTQYKF");
    msg.lat = 0.24628992201511457;
    msg.lon = 0.3577140644098705;
    msg.z = 0.18938010571251707;
    msg.z_units = 174U;
    msg.cog = 0.13365123905876175;
    msg.sog = 0.16624612614319756;

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
    msg.setTimeStamp(0.3453838756170913);
    msg.setSource(62002U);
    msg.setSourceEntity(227U);
    msg.setDestination(38218U);
    msg.setDestinationEntity(55U);
    msg.label.assign("VSWSHKMNUZHMOLCFPITEIUFWLACUXUWCSUBDGBPNTOM");
    msg.lat = 0.06515602397751996;
    msg.lon = 0.5022407310903988;
    msg.z = 0.5600445245309736;
    msg.z_units = 210U;
    msg.cog = 0.6597460727046577;
    msg.sog = 0.3817598720862445;

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
    msg.setTimeStamp(0.5094810678538997);
    msg.setSource(37861U);
    msg.setSourceEntity(69U);
    msg.setDestination(40473U);
    msg.setDestinationEntity(13U);
    msg.name.assign("SOHSNNCPBJCPPVOFTTDIKWRRWLCGDDTOQYGZYWLABLTRJMYXUVSKQSIKCJDKJWOAFHTPRQERHJXYLIRGPZECXZPAKNVDZSKDTBEPQOONNCXUEUAEUHADRFBEXXXMBVKWZUACMAHVMTEGYCLSBZLUHJFBQOVPHEWLVUQKGRIBRZUJFYHWYJIAORZQMFLFGJNHKQAEDNKPUSYWIANTWMCSHBCLQTQGD");
    msg.value.assign("GIEMRJYWUDSUAJXHEQXAZNTTHDYIWVEJRICPCWASCALPOODKPAEXDDSYZKAMXHWTQPDEFYNESHTJORQMTLDBYLCWWJZTXLRBGKCGGLAZVRQBESNIXMFVUUPJWKLOGVQOTIUMPGKZTYJLAZQNGYQFQPASAN");

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
    msg.setTimeStamp(0.6545419474041028);
    msg.setSource(45075U);
    msg.setSourceEntity(154U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ZBVKVCOGCPSOUQJENHHVNQJFMVTEMMGHKZUTRGUXRULDJTSOXHW");
    msg.value.assign("YCDCEXLKOBDFFBNRNILSZZCJFUHKIQTGGYTQZFDZVORRVEWHKFIGAZEZQGVYTXPENDBMNJGFAAQDPOXESNXMTQVMBRUYMLAJBNYSGTJNROSDXCMGJEYRWKIJIVYUGCASNZVUECEJSIGKHLQRYUPMREOVBTWGNUJOVCTKLXFYUCZQMQIDPWRXRVFWHAWALOSKKUBXLBEFZPAHLOWTKWHIHQMCHIAKMHUDLVLZ");

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
    msg.setTimeStamp(0.012581968980133418);
    msg.setSource(64516U);
    msg.setSourceEntity(85U);
    msg.setDestination(38836U);
    msg.setDestinationEntity(214U);
    msg.name.assign("MMOIUXBYNXFHTIEPROUCRXKHNENTIGVUOTRDMXZJJOJNTBVKILUYEPEPDSEMDGGWNJRULOSYKFCKATLBDQQJSEIFOJHPZCGDDHXFCJEQHZUMDBYWCARKZHVTRWKKAVGVQIIRC");
    msg.value.assign("DLEXPWOASSXEDUBEZVKFLEKYAQRBPAIUUGYLIVXIRMED");

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
    msg.setTimeStamp(0.42675211612164565);
    msg.setSource(51726U);
    msg.setSourceEntity(199U);
    msg.setDestination(7998U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ALMARFRHZOCBQWNGWEJSLB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IAPZOBQBGEJJNWWTAQHDYZKJXHMYBLMCFCWICUJFPXYGGOLURMOVDEARCJI");
    tmp_msg_0.value.assign("GHRJOHNONNLJBUYARHWEMKDRCUZOAEASJMIWXIXRLWSMBANNDZXSVDQZOEWRZQZLGPWQFXNOOPGTCNBDIBKHRMEHIPXNFXVBIZGHSYJUDQTJUZTCLLYVPPKNWAMHGFALM");
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
    msg.setTimeStamp(0.7048467327743887);
    msg.setSource(12269U);
    msg.setSourceEntity(25U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(61U);
    msg.name.assign("AYPLOEFNBZGNCIURJGGDELNBV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GWREKLPBDMDVQSDFRZZHVQNAJXLOCW");
    tmp_msg_0.value.assign("TMQDGVZOAZGDVEHWCCFTUHCMYOYGOTWRGTEQEWZKNETAXKXULMDRUUPWHXMHIQVIPLNQXRBMSJONUAULKLFHGKNVTRAJKMTIZCVBOBIJUOSYPJAXSVDSNOEEBWTJFFYQQYRJJMAQPDEUQNGWNZHXJICGBZD");
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
    msg.setTimeStamp(0.6567913696296954);
    msg.setSource(27257U);
    msg.setSourceEntity(178U);
    msg.setDestination(22777U);
    msg.setDestinationEntity(49U);
    msg.name.assign("EPLATRUKKLSJUGQMYQUQWKNOZFBAOUVHNEZKKYTXREGPTLNBSBPRITSINFGZXATCTLMVLRVWVWSXXMBOEMADBZPNFUPDICIGOFSOGFBRHAEJKQDDCCYYRTLGWXKEMMYFJNHLCQRZZWB");

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
    msg.setTimeStamp(0.4905353904375437);
    msg.setSource(61624U);
    msg.setSourceEntity(230U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(144U);
    msg.name.assign("NWZMVJMGZCLYYQFIOGZBFMEDZDRDKJXIGCMTPYJKKYXQSYFDQHAGBAOAHTCQDHFNBYXUAJXQUWSXTKTPRBRFQFJVSUPNLQOKAKBJELONPHWPEDPTHAGFWUSVW");
    msg.visibility.assign("GDFXNTQGZE");
    msg.scope.assign("BTSWYCVWJSREIMCZBDQXTZVKAAJQQPZRLKBIANNJSWVUFJHLXTJQIIGILEIXNFKWEZCAZEBUQDMUAKYNJPBWCTOZQTFLSIGESZWPVGPKHTRGDLANOGUFVEHRYFIPXMPOBEAGUJMBXAYRGHQNMDAOYUOKDYDHBGIDWLCQBFUWGXLVZCHSJHXQVXLEJXFNCVTLNURFDAQXJKRTYPSIRKTMYKOPUVDRCUVSTRSMFSEYOCNHKCPMH");

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
    msg.setTimeStamp(0.31597103100111146);
    msg.setSource(23337U);
    msg.setSourceEntity(220U);
    msg.setDestination(63438U);
    msg.setDestinationEntity(217U);
    msg.name.assign("MNSBYOTMFWSWAQDFGZAFORVTVQXSLAUNSABOHBEQ");
    msg.visibility.assign("NHFCRORBBQSXPEWTQODQFZEKKOLXBJINAIDDFJXCDJGMUQONIWZHZPSSWYOECJOOFQGCUMBXYRZTZRMUEJPMANBNNSLGMPKLJXVZDYGLAGAFKWDNARSWZZTGXKMHDPMMOOUAWIUHXURTEJJKPEBLYSQV");
    msg.scope.assign("LYKCGECLCPHDPUYKHDHAVPWOXIWOOZNFDMPLXXDPAHSVMHXRKXWSYZJMBVTPTIREQTYKRSXFB");

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
    msg.setTimeStamp(0.2819402151649749);
    msg.setSource(63880U);
    msg.setSourceEntity(4U);
    msg.setDestination(61009U);
    msg.setDestinationEntity(195U);
    msg.name.assign("TFZENFLNMWPJOGGBSQDWNQZMIFEDMLABLUZSVVZFXIOKPKOLCHTJALKJACXHYHZCVZYEOYPBYKPKPARAHMTXMJQXRIMTUUQINNGUGWQAICZMJXVGBKFNTTGXHIWWERBZTROIHCQPLGOYYRSCSXSABSUMORSUBBDEVOTOFU");
    msg.visibility.assign("ARENDNUOXLWUFXPSQJJLVHHVMMRKCLASGHCXSEQMMNKRRPIELWGMSQVXFNCECVYIEPZZKVLUEDBUTBNSHBVTCKEYJJJAWIZTEZXOOPOSFDGDGQYKGQMSNDWMARPPPHNIDGFSASAUNLVRTEQPKTDRMZGYKXOUPZHOKXLIWEVIYVMCAFR");
    msg.scope.assign("SZSRNJRRETICXTIOWPPVUHEHVCVZGLGYDDAYLVSAMKJLHSFNKFQUMMYCEJUBFCDYRFSXLHLIWZXTWFKAKDFLSEQINCBAGXTZHAKCWUYJPNOIBPATQJNWBHRNLHMOUSYGWXBFONOBCBKULZTGQZMOFTIWKPPNCBQDFAUYOSCZYGTDWVGEMAJVHQZMEKHDMXJJWRQCOIEPWQAIUANXQIMHGQ");

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
    msg.setTimeStamp(0.03313602498591728);
    msg.setSource(10408U);
    msg.setSourceEntity(20U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(133U);
    msg.name.assign("RSJVHSSXUMOZEROLMYLAPCMZUQCEJKSLMFHGSBXENOVJERKDIPNOWXTQAFJGGWQMTBHZYWAOLFGDPOZXFNFKABJXMQURYHVMCNDLZHJNZADAUQWPWVDJDGEKONFQTSTAANBSEYIQAJALXTJELWPGZQFDLQGWEMHCICIYTQBXXFWYHC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BOAGVIJOKDVNUMKCOUUTXBKHXZSNZBQHQLZSFOAFZAMJHNCQWYJZQNKEAVMYHEAHJDTLCGVUDHXGLQAKJNAGZVEWKWNRGBFRSEULMKZHUGIGJELODOKLOWDLNXYIGCTSPWPRHSP");
    tmp_msg_0.value.assign("NEKWTIOHFMJSKEWUWFYGCFPHAUVUSNZIPOUKYMIZLLETEOQXXGNUNCZACCTHNSZAYTBLUOARITJIGOGBFTNLWSMRUGBRQQPFQPVSUJJAJLGMCCFHYRZEXXKICDGZBDUPYCXQMANYOYAOYSDDJQDPRECGVVHXAMKBFESBKVKDEWHVFPQIMPZHVYKDXZCTWMYBNGJOHXSWTJWBRKPUMKLJOIRDQZTLIVQEIPLWOVSXR");
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
    msg.setTimeStamp(0.05049341646743655);
    msg.setSource(233U);
    msg.setSourceEntity(149U);
    msg.setDestination(16665U);
    msg.setDestinationEntity(173U);
    msg.name.assign("NPJBQHAUQKWNVVFICECTPFGVQSHJAXLMMJFLXQDWLZKGBOEUXOPSAGIIMGNJSMXWTZNLBVQUNGOHMSQYDTAELPKDQZZSOORXCRPSXITEFZITYRCJUAKCUTFHASPYBDKSIOWWHXZXZZACYCGEIMNOOUHKEPYHPDQJOULNIBXCLUFOYHQLZRRELSRTFJVYTKXJFZYMTHBDKSALCWYUJKBQBIERABNFGJVPCVIEAWMVWWEGYNMM");

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
    msg.setTimeStamp(0.892594806069455);
    msg.setSource(61415U);
    msg.setSourceEntity(200U);
    msg.setDestination(22245U);
    msg.setDestinationEntity(2U);
    msg.name.assign("UCAYGVKRJPYCETVSGDSZBJPBBOXZFUGFFNWIBZCXOHNPHJCYKNVVJOYTCTRIXLBXUACDVMJGRBNQONDHBIUNIYOJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NQFOYJZKHRUCPVHDJXJHZVPMZTUGDLUQGYWEAIWQILXMEEXBORDTCLMPKZWUAKJXYNBHWIUSLRGBPRNSWFBPTZLYH");
    tmp_msg_0.value.assign("SJVUMZUNZBYDQAJFCOTBPKKAEGOGDOPTSMHMASGBCVJOWLGVMGTHYRTAXFUINWEKIPRZJTNYLWIXJRIULKHUZQODPFCNEGSVPMCXULKWXSUDLDVPTYIXIIXCXQGKQWTRUMBHPNWDAYEXNWSCDBAHEHIWVSSVHBXZJATQBYBHOBUKNJITHLGKFCZANWLRDFVZEEJFCFQRZIFWAKETZYCPZF");
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
    msg.setTimeStamp(0.5204086081062054);
    msg.setSource(48522U);
    msg.setSourceEntity(133U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(89U);
    msg.name.assign("ISKYZJHXTKVXSLMXKJFWPMVJHAFCTIGDKJMMLW");

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
    msg.setTimeStamp(0.6613156308028586);
    msg.setSource(25028U);
    msg.setSourceEntity(74U);
    msg.setDestination(56579U);
    msg.setDestinationEntity(230U);
    msg.name.assign("ZJOQXVDERFCPUOVVNRBTSBSYTWAPALJYBZLWEEVICKNKHQIHOMOVOFKTFYEDGXYPCIVWZGIUJGGDKATQITYNWQULUQR");

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
    msg.setTimeStamp(0.21898399805718827);
    msg.setSource(9016U);
    msg.setSourceEntity(214U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(165U);
    msg.name.assign("GATIPTAJSOMKWCDQEMACKFYHCLMUKRNKCZBVUJXBOEQNMLTNOXGZQLEW");

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
    msg.setTimeStamp(0.49743782371910783);
    msg.setSource(42775U);
    msg.setSourceEntity(235U);
    msg.setDestination(41552U);
    msg.setDestinationEntity(223U);
    msg.timeout = 122532923U;

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
    msg.setTimeStamp(0.9214085131249214);
    msg.setSource(4716U);
    msg.setSourceEntity(247U);
    msg.setDestination(62226U);
    msg.setDestinationEntity(39U);
    msg.timeout = 1034670757U;

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
    msg.setTimeStamp(0.11574461638418343);
    msg.setSource(57060U);
    msg.setSourceEntity(45U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(130U);
    msg.timeout = 2761948899U;

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
    msg.setTimeStamp(0.6752603489466615);
    msg.setSource(62308U);
    msg.setSourceEntity(122U);
    msg.setDestination(40831U);
    msg.setDestinationEntity(1U);
    msg.sessid = 1831810067U;

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
    msg.setTimeStamp(0.02600012841312327);
    msg.setSource(42308U);
    msg.setSourceEntity(165U);
    msg.setDestination(39016U);
    msg.setDestinationEntity(192U);
    msg.sessid = 3556726313U;

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
    msg.setTimeStamp(0.6467588768789547);
    msg.setSource(16919U);
    msg.setSourceEntity(228U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(109U);
    msg.sessid = 4262899330U;

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
    msg.setTimeStamp(0.8149764041899519);
    msg.setSource(20242U);
    msg.setSourceEntity(52U);
    msg.setDestination(53696U);
    msg.setDestinationEntity(100U);
    msg.sessid = 2531309749U;
    msg.messages.assign("HRBLRYCUUVROREWBJTUIRCMBTGPVIOQXWFXHSHGFOPRMANPJAARONFJJZKNSKGHVVSDCYNFQKYVWTWLUCQBUIKBKYXGMXGCTQTEZ");

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
    msg.setTimeStamp(0.3730231853630328);
    msg.setSource(15314U);
    msg.setSourceEntity(234U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1231923967U;
    msg.messages.assign("QVFRYITQFPTOBVZNHYFJZELTCCZPOIHUUHRWMUQLINXAPSCWYOXMSNPCUTQAKZGVLTDFGOACDRYEYLEXKLWPNYSZHDBUJOJHOQZFWLGNCUALEXDDDRPIDRB");

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
    msg.setTimeStamp(0.15408271324509415);
    msg.setSource(54035U);
    msg.setSourceEntity(56U);
    msg.setDestination(62242U);
    msg.setDestinationEntity(198U);
    msg.sessid = 4225472679U;
    msg.messages.assign("GSJFXKZQDZNVOLLDPOYQBOGVDHYBMAWIROTVTGKP");

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
    msg.setTimeStamp(0.80488649657402);
    msg.setSource(59510U);
    msg.setSourceEntity(47U);
    msg.setDestination(49504U);
    msg.setDestinationEntity(186U);
    msg.sessid = 3458875322U;

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
    msg.setTimeStamp(0.16380810421908876);
    msg.setSource(7930U);
    msg.setSourceEntity(119U);
    msg.setDestination(2951U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3651020340U;

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
    msg.setTimeStamp(0.867834707492755);
    msg.setSource(44118U);
    msg.setSourceEntity(99U);
    msg.setDestination(6424U);
    msg.setDestinationEntity(212U);
    msg.sessid = 1374568912U;

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
    msg.setTimeStamp(0.3351802219097474);
    msg.setSource(32567U);
    msg.setSourceEntity(221U);
    msg.setDestination(22464U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2337485723U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.892320773725551);
    msg.setSource(56462U);
    msg.setSourceEntity(43U);
    msg.setDestination(45960U);
    msg.setDestinationEntity(194U);
    msg.sessid = 504032522U;
    msg.status = 128U;

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
    msg.setTimeStamp(0.142608200892836);
    msg.setSource(12321U);
    msg.setSourceEntity(245U);
    msg.setDestination(41368U);
    msg.setDestinationEntity(118U);
    msg.sessid = 275147359U;
    msg.status = 169U;

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
    msg.setTimeStamp(0.12581287698414756);
    msg.setSource(1757U);
    msg.setSourceEntity(128U);
    msg.setDestination(9548U);
    msg.setDestinationEntity(223U);
    msg.name.assign("JNCIRPZGJFDVLMRTGOAWRSGDYGZVCZOYHWOJLEIECYPAPEXXOJSRYXTOZVJHYDHWPCAXJQVBMFWYWYMCFDQGBVCGPRXOXTLTKKDAMCFYQNIQHKAVIDMPSHUDJLSGZBSNQUTSIEOIARHBLBIGMUGLAQHPRMDNZEYEGIXLQBQJMBUOTUC");

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
    msg.setTimeStamp(0.35482086430839355);
    msg.setSource(30908U);
    msg.setSourceEntity(160U);
    msg.setDestination(61140U);
    msg.setDestinationEntity(130U);
    msg.name.assign("FZUWKAXSANFSTLQRPUYLXTZLXCGOTNPDNDONNZOQYMDUWEGI");

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
    msg.setTimeStamp(0.8111993273665122);
    msg.setSource(59927U);
    msg.setSourceEntity(136U);
    msg.setDestination(10805U);
    msg.setDestinationEntity(252U);
    msg.name.assign("HWKOIYERIBLTXUZFEKLVOIJBZSEGEQERMCWCTRKODDFCACBDNZZCHTJPTBYTXQAYVHORZWEJHDLFGSJEQAAWMKMLFPD");

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
    msg.setTimeStamp(0.1379923458559159);
    msg.setSource(63029U);
    msg.setSourceEntity(49U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(175U);
    msg.name.assign("RNFPKGXDINZEFHGZVNXYNKRMOYNWTPJAAMHTQDSSVAVDPIVOWRXWDHHLSHNSYFHKHINAJ");

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
    msg.setTimeStamp(0.49951834232241055);
    msg.setSource(36956U);
    msg.setSourceEntity(224U);
    msg.setDestination(23574U);
    msg.setDestinationEntity(31U);
    msg.name.assign("BRCLCXXSYWDYXBTPQAQJWBXKWHDUFOJ");

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
    msg.setTimeStamp(0.25981954873005786);
    msg.setSource(60879U);
    msg.setSourceEntity(238U);
    msg.setDestination(58004U);
    msg.setDestinationEntity(214U);
    msg.name.assign("VVRHHHKBAZVQJEMWOKHQXDRACSTSHGZFMCWCUCPSYEHFIGWMCZDQJRTXIOBBUEAMU");

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
    msg.setTimeStamp(0.39353373735454367);
    msg.setSource(60278U);
    msg.setSourceEntity(4U);
    msg.setDestination(17822U);
    msg.setDestinationEntity(248U);
    msg.type = 219U;
    msg.error.assign("SWZSVEPYQZSBUOYSJBFAMLFPXCRZGNQKBJFCFUXGPFNTOKQMAZDJIFHXCECALQHEWWHYKJRAMWCHXCXQADGUTSNRRJVBGCKKDJUDSDNLWIEJBRZMXMWJNIRYLEMPEXOOYHTGBUGMHKSOBNPOHTBK");

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
    msg.setTimeStamp(0.7810064227559251);
    msg.setSource(11003U);
    msg.setSourceEntity(23U);
    msg.setDestination(48526U);
    msg.setDestinationEntity(95U);
    msg.type = 10U;
    msg.error.assign("INWDJFUENLQHVKPFKTDGCCSVVVRRWLDZLFAFRPWSQYNSNNVYTNEPOOGFFIWDBGBZSFJPSC");

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
    msg.setTimeStamp(0.9675635832717292);
    msg.setSource(63874U);
    msg.setSourceEntity(57U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(185U);
    msg.type = 203U;
    msg.error.assign("BPTKMJTGROS");

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
    msg.setTimeStamp(0.9629513474701622);
    msg.setSource(48470U);
    msg.setSourceEntity(219U);
    msg.setDestination(39558U);
    msg.setDestinationEntity(115U);
    msg.seq = 52984U;
    msg.sys_dst.assign("CYOMKROIRTDXWEGLHNNCUNJSBKQWYREKBKSVOSAQQMYDCXEKUIMDVAALGULERXHWGJHROYLGMURNMGMDEFQTSMIDBWJELAQMJPNPLJQVHMTCFNGOFHTORESYNOHKPAIUQVCOBQJQBZADCOLZWWWLXCUGLYCVUCSVTOFINMUDPZBXIPTSPUVJJJSUFFYKIKBVPEADZZRDZCFGHYZAXLBA");
    msg.flags = 189U;
    const signed char tmp_msg_0[] = {2, 53, -12, -32, 27, 13, -35, 81, -59, 92, -10, 58, -68, -11, -32, -25, -71, -16, 87, 3, 72, -93, -124, -50, -22, 90, -73, 7, -67, -46, 17, 105, 89, -47, -48, -93, 64, 48, -51, 59, 15, 50, 73, -126, -103, 68, -127, -52, 36, -97, 119, 95, -50};
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
    msg.setTimeStamp(0.30410316039423724);
    msg.setSource(9248U);
    msg.setSourceEntity(186U);
    msg.setDestination(36793U);
    msg.setDestinationEntity(211U);
    msg.seq = 13226U;
    msg.sys_dst.assign("HRAHMOEJLTBMXBBDCDAMQKKPSZWEUAOIRKOKVZNAPSTVGJEGJNBXXJDUZJCSDSZKTKBEYCXLDMZXNYINEUQJYRDPSLQDMUSFDXSOYKJFNYETMZCOTWDCLTAFGYUUKPTHGAFLGBZZWFFWXLENCTFGGCAVIWMHHEHQRBGLOXVWBFCIRNPIWCIMOVMPYAJRTOTHUPIESPZZKVQVAFWKVNVQDLQYLVUFSJRQRBYRQGIOPBHUA");
    msg.flags = 239U;
    const signed char tmp_msg_0[] = {40, 81, -28, 84, 25, -106, 41, 8, -23, 90, -83, 119, -117, -51, 12, 44, -18, 118, -53, -101, -13, 8, -79, -117, -35, -66, -1, 84, -20, -87, -86, -50, -60, -36};
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
    msg.setTimeStamp(0.6876479232449167);
    msg.setSource(34331U);
    msg.setSourceEntity(45U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(208U);
    msg.seq = 63670U;
    msg.sys_dst.assign("PMZXUXVDDIZLMULJMGHIJEZEHSSFQCRCTARLDUGANYZHXRCQVCVAJREWBHPYTJEVGFZSCHPFCWPVNICUTDMNAWWKHPNIZOOBZXWIRFUDRNXLTMJCNXYABMNBSOONROKFQMDUSOQKKFGPUASAKWOQJTJIHYIQRPQBLZAQL");
    msg.flags = 97U;
    const signed char tmp_msg_0[] = {-24, 82, -18, 33, 75, -65, -81, 51, 38, -33, -99, -56, 45, -35, -68, -21, -128, 47, -18, 105, 116, -84, -32, 3, 18, -127, 82, -56, 92, 60, -39, -74, -1, 53, 32, 37, 42, -44, 68, 81, -123, -124, -2, 28, 9, -57, 126, 24, 29, 63, -29, -79, 43, -87, -111, 20, -71, 13, -111, 88, -109, -105, -34, 73, -104, 89, 96, -123, -14, 92, -5, 126, 82, 22, 60, 110, -65, 93, 92, 43, -23, -50, 123, 68, -27, -70, -10, 86, -10, 112, -62, 29, -8, -118, -58, -83};
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
    msg.setTimeStamp(0.77173059733073);
    msg.setSource(15239U);
    msg.setSourceEntity(233U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(187U);
    msg.sys_src.assign("LQJWOUNDCWRRDKCKNAEQQAGPBZCKHFLDCOAVXIUOPRFNXPVQATAZDYSFLWASYBGMJKZEOGYAVS");
    msg.sys_dst.assign("EADWHWTRLYETZDDOOREPKZ");
    msg.flags = 23U;
    const signed char tmp_msg_0[] = {-14, 18, -24, -128, -31, -20, -97, 22, -44, -68, -74, -82, 59, 102, -8, -128, 22, -95, -28, 56, -33, -117, 68, 71, -91, 40, -121, 21, 76, -22, 81, 62, -117, -31, -64, -89, -114, -5, -35, 10, 98, -2, -49, 69, 48, 21, 117, 118, 59, 54, -111, -117, -28, -23, -49, -3, 25, 34, 2, 14, -45, -10, -55, 31, 25, -3, 91, -89, -56, 3, 111, 120, 108, 83, -55, 76, 41, 35, -6, 35, -121, 14, -72, -105, 39, -69, 62, -14, 50, -22, 75, 70, -50, 97, -6, 91, -71, 125, -44, -6, 107, 89, -47, -14, 32, 77, 66, 123, -65, -48, -49, 66, 47, -118, 74, -80, 102, 41, -37, -96, 74, 2, -64, -95, 111, -8, -102, -101, 96, 14, 87, 75, -18, 90, 115, 99, -22, -57, -62, -106, -56, 106, 54, 70, 123, 118, 104, 84, -97, 91, 115, -44, -100, 62, 98, 89, -94, 117, -73, -56, -44, -58, -14, 99, 87, -80, 67, 113, 102, 82, 124, -106, -9, 80, 47, 17, -39, -66, 112, 126, 97, 73, 34, 98, 92, 73, 112, -24, 32, 122, -47, -2, 110, 39, -4, -34, -66, -76, -45, -48, 99, 60, 12, 3, -60, 47, -4, -94, -84, 20};
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
    msg.setTimeStamp(0.5222198658209664);
    msg.setSource(29617U);
    msg.setSourceEntity(124U);
    msg.setDestination(11122U);
    msg.setDestinationEntity(206U);
    msg.sys_src.assign("DOSYJEXSPIAYBNFFCHWHITKGSPQZUICKNXUOVYYOWRHJDOTRTNGLMCPVRAUGODZVSMBLSIBIWKAUFCWJPVUFAIEMBLLZCOYPKRZVMFOMWJBAVUXXFCOYZNDGCGMHZLSQNILXEDJQXJDABWEEHLSTJETZRNUTWPGAYFFKAACINTGUCQDGADOLDPSUXSYQBLVUKRPHRHEDMFRYJWGVWQKPXVKNQETHXQMYHZVTGLEBSMOHMFQIZJRKZN");
    msg.sys_dst.assign("INJIVZCHNYOLUWFOQIKMIERWABSIEADZUHZGSZTJAYHHCKBCCPUBMDEGZVSXQQOFYMWFADAFBUINPFDUWRFOOSSIXDMZKVWMTCBAJWEN");
    msg.flags = 194U;
    const signed char tmp_msg_0[] = {2, -72, 116, -64, -80, 48, -12, 94, -99, 114, -32, -24, -50, 41, 109, -94, 115, 112, 8, -41, -9, -83, 72, -17, -117, -121, -63, 59, -46, 119, -88, 66, -19, 78, 120, -21, 10, -51, 32, -27, -68, 96, 90, -7, -23, -25, -4, 118, -56, -68, 107, 30, -1, 126, -59, -69, 29, 88, -48, 9, -77, 95, -15, -51, 88, 52, -109, -11, -51, 15, -36, 91, -1, 117, 33, -7, -102, 50, -35, 34, -119, -44, -119, -49, -16, -97, 100, -80, 2, 106, 66, -47, 20, -46, -53, -23, 125, -95, 94, -78, -43, 108, -105, -11, -16, 15, -71, -90, -49, -112, 119, -83, -55, 69, -4, 56, 108, 46, 2, -23, -9, -8, 49, -90, -86, -53, -44, 35, 44, 51, -39, -22, 21, -24, 17, 101, 7, 27, 75, -73, -122, -29, 63, -49, 82, -10, 17, -125, 27, -68, -42, -85, 87, -96, 106, -46, 89, -98, -44, -63, -9, 22, 124, -124, 77, 67, 52, -50, -119, -98, 64, 92, -97, -23, -61, -127, -16, -19, -94, -44, 51, 91, -10, 15, 49, -128, -64, -127, -94, 21, -106, -71, 7, 13, -22, 84, 82, 22, 13, -95, -76, 81, -55, -72, -126, 119};
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
    msg.setTimeStamp(0.9438482803864784);
    msg.setSource(28335U);
    msg.setSourceEntity(232U);
    msg.setDestination(14898U);
    msg.setDestinationEntity(136U);
    msg.sys_src.assign("OGXNTEQVQOLDIVGEFSAPEKLDCLWBNEAHBWRPWOOPXTMLFGITDARAPISNYCSARSXJWJIMYFNNUPPIFEVBJYROCIEWEGPSKHUWFJYBDGZFHVRKJWQCRGGLHDIZLSGPUXBVXBDDXCNHTDIYQQOKNUMZXZHJLKMYLICUEVKQQYROLBOXBSHDKQJDVZSFVVYABEZTHSPBKTUMQVGMUXNEUJWIMRYWHATCAZJCUOJQ");
    msg.sys_dst.assign("MKYVTGICYHTXHWENRJSEVKDMOUNKSVISOFTNUNBKHVNUEK");
    msg.flags = 33U;
    const signed char tmp_msg_0[] = {-1, 80, -98, -90, -103, 82, -38, 119, -80, -45, -95, -80, 103, -56, 70, 88, -9, -30, -3, 29, -45, 43, -87, 111, 31, 27, -20, -109, 113, 36, -12, -5, -2, 13, 19, -125, 6, -19, -43, 103, 43, 18, -84, 110, -70, -95, 36, -89, 126, -60, 71, 46, -103, -25, 6, 16, -86, 119, -51, 76, 20, -52, 82, -31, 54, -11, 92, 29, -54, 15, 93, -17, -8, 115, 13, 7, -32, -94, 111, 47, -30, 0, 15, -92, -26, 26, 89, 87, 12, -7, 102, 8, -55, -98, -78, 20, -36, -94, -115, 62, -119, 60, 19, 46, -7, 64, 114, -53, -55, 41, -62, -114, 100, 44, -89, 31, 101, 65, -42, -3, -52, -62, -24, -5, 90, 74, -12, 105, 25, -82, 36, -1, -102, -45, 82, 65, -100, 115, -94, -92, 108, 73, -108, 57, -88, -41, 53, -26, 51, 43, 30, -74, 14, -94, 72, 97, 63, 101, 102, 102, -115, 32, -82, -120, -123, -67, -60, -64, 75, -29, -61, -52, -29, 119, -44, -84, -98, -61, 32, 22, -13, -79, 21, -83, -12, 67, 3, 94, 4, 62, -79, 57, -128, -69, 84, 94, -31, 3, -114, 31, 59, -97, 101, -94, 124, 99, -15, 64, -10, 74, 100, -50, -105, 107, 13, 45, -61, -2, 49, -72, -19, 18, -91, 33, -114, 1, 32, -78, 109, -56, 8};
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
    msg.setTimeStamp(0.8416342383646715);
    msg.setSource(24300U);
    msg.setSourceEntity(37U);
    msg.setDestination(13782U);
    msg.setDestinationEntity(253U);
    msg.seq = 312U;
    msg.value = 1U;
    msg.error.assign("MUYZZJFXRSOEEAKMOSEDBCEFJYIAFPDDDYNGQKMNDAWPHNTBMHTPCMDIQGONFZNUADYJQENKGLRBLKTCJGIBCCQHEOSFXIIWEXZPKK");

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
    msg.setTimeStamp(0.1359293720986986);
    msg.setSource(60945U);
    msg.setSourceEntity(212U);
    msg.setDestination(33346U);
    msg.setDestinationEntity(33U);
    msg.seq = 8420U;
    msg.value = 44U;
    msg.error.assign("BFSRKUKETYHAADTTNVALJOUWCCLACPTQBOZRJDRYJEPEMZDDMLNKCBZXQQYJZZDRPFGGVVRKZHSRQCCPSGFXNFWMVQTDOCQFSTEFWFBLSUOVINZYBAPEONQKWHSFIVUSGWKLHMRAIRUCJHDUULUQIWPWZKFHLPRTB");

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
    msg.setTimeStamp(0.4960282746026662);
    msg.setSource(16502U);
    msg.setSourceEntity(53U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(161U);
    msg.seq = 44382U;
    msg.value = 189U;
    msg.error.assign("WNHQZOUCOBMGNHYNGWOONYJVYROUQNRDNGRNFIHDNRXSIBPMYGAIJHLDZIFHSKQQMJPPLLSHXKOFBLLXBKAJQQZSGSHVVGBMCEYJTXVOEHBGUXEAJDSTLZTKBAIFQSLDTGWYOJZPMEIMNTKAMQVCG");

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
    msg.setTimeStamp(0.23114739876759383);
    msg.setSource(37676U);
    msg.setSourceEntity(89U);
    msg.setDestination(12351U);
    msg.setDestinationEntity(40U);
    msg.seq = 28408U;
    msg.sys.assign("TNGBTZVYYLDRNFTZKXZGLZCXPABVTTOJIQJHDPAUCBUHGWTNYEEZVNYJIIMZEGMLVGRMTDCATJAJLVWCYLJWRFHAMCTQERRWZVHDOKMSZKWCIIYPGSYSVEONEPIEQPDLOKYGBZIEVILVUTLXUOEDWOKMIJHFDRUPXRFWASHYQAWS");
    msg.value = 0.8502285858664027;

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
    msg.setTimeStamp(0.21639159544545727);
    msg.setSource(21461U);
    msg.setSourceEntity(197U);
    msg.setDestination(59358U);
    msg.setDestinationEntity(42U);
    msg.seq = 11900U;
    msg.sys.assign("DUAKPZSFMLUHXUUKVWURTCJTGWVLQRZXOFTZELYPCMVQELYOYCNRBVBIMBEAYHEXGTOCBERGDGEYOIBRKABLRSNOPXEZVKQPMGKJPFFWDOFCWSOYXXWHASNBGJTIJNMHZNQGPXRLAWTKINDMUBMEMLD");
    msg.value = 0.624783310711595;

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
    msg.setTimeStamp(0.7780080622832345);
    msg.setSource(42662U);
    msg.setSourceEntity(252U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(59U);
    msg.seq = 23702U;
    msg.sys.assign("WXFRQJETJKVGJIZEOXNQPRJDPJBKRXJQOMQMYYLEAZSKIPZNURAYPUYVNGDAIGAQRGOBMHNTQRHRCMMTNDAXXADFGTKYNWZXOQZGFILRHMVGSDXMPOUBMQVFSGRDBGPZIMEKZFWFUEPWLJIOCWCTQEGFBIJSAV");
    msg.value = 0.7863026361635039;

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
    msg.setTimeStamp(0.5824424319911473);
    msg.setSource(42707U);
    msg.setSourceEntity(221U);
    msg.setDestination(58456U);
    msg.setDestinationEntity(154U);
    msg.seq = 55712U;
    msg.sys_dst.assign("GDJJYUMFLVQQRMVIUDOPNGRJWTJORDLFNTFOZTNZQOLMSPEYPEXCETYNUYPITSFKXPCRRMTQSBJWVVCATRBCBUGAFUAAVHHAMFP");
    msg.timeout = 0.512213412816389;

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
    msg.setTimeStamp(0.8756800035435597);
    msg.setSource(44385U);
    msg.setSourceEntity(141U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(109U);
    msg.seq = 14915U;
    msg.sys_dst.assign("FMBJBDJTKNYPOFV");
    msg.timeout = 0.3796478784532318;

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
    msg.setTimeStamp(0.5959314368094264);
    msg.setSource(51980U);
    msg.setSourceEntity(169U);
    msg.setDestination(35361U);
    msg.setDestinationEntity(115U);
    msg.seq = 17883U;
    msg.sys_dst.assign("CLUIRRCTIEXWA");
    msg.timeout = 0.8796585514343657;

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
    msg.setTimeStamp(0.14782878333614058);
    msg.setSource(50921U);
    msg.setSourceEntity(122U);
    msg.setDestination(61005U);
    msg.setDestinationEntity(76U);
    msg.action = 185U;
    msg.longain = 0.406347031769146;
    msg.latgain = 0.5320155668087766;
    msg.bondthick = 1471366264U;
    msg.leadgain = 0.403172982130954;
    msg.deconflgain = 0.3624286353776568;

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
    msg.setTimeStamp(0.3607402488620115);
    msg.setSource(25098U);
    msg.setSourceEntity(30U);
    msg.setDestination(18689U);
    msg.setDestinationEntity(112U);
    msg.action = 52U;
    msg.longain = 0.9477169412540525;
    msg.latgain = 0.957644569058522;
    msg.bondthick = 2720170195U;
    msg.leadgain = 0.5816134995887674;
    msg.deconflgain = 0.37430159756433323;

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
    msg.setTimeStamp(0.38232378706719883);
    msg.setSource(30913U);
    msg.setSourceEntity(84U);
    msg.setDestination(21679U);
    msg.setDestinationEntity(45U);
    msg.action = 195U;
    msg.longain = 0.39031685298667496;
    msg.latgain = 0.29630037400054077;
    msg.bondthick = 3602512579U;
    msg.leadgain = 0.09488072792381474;
    msg.deconflgain = 0.40790423649673;

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
    msg.setTimeStamp(0.7506965123343177);
    msg.setSource(7196U);
    msg.setSourceEntity(98U);
    msg.setDestination(30835U);
    msg.setDestinationEntity(133U);
    msg.err_mean = 0.025983939433540715;
    msg.dist_min_abs = 0.8664484536789249;
    msg.dist_min_mean = 0.05085331641087165;

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
    msg.setTimeStamp(0.9774291492468388);
    msg.setSource(44585U);
    msg.setSourceEntity(182U);
    msg.setDestination(62405U);
    msg.setDestinationEntity(121U);
    msg.err_mean = 0.19465908062358162;
    msg.dist_min_abs = 0.7115700705269119;
    msg.dist_min_mean = 0.3456324943348287;

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
    msg.setTimeStamp(0.49877674378844505);
    msg.setSource(38563U);
    msg.setSourceEntity(10U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(77U);
    msg.err_mean = 0.8289781418043524;
    msg.dist_min_abs = 0.8413448013500638;
    msg.dist_min_mean = 0.8186700910447369;

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
    msg.setTimeStamp(0.9330709860953272);
    msg.setSource(19779U);
    msg.setSourceEntity(34U);
    msg.setDestination(9395U);
    msg.setDestinationEntity(151U);
    msg.action = 58U;
    msg.lon_gain = 0.3769585002425121;
    msg.lat_gain = 0.4420971323224866;
    msg.bond_thick = 0.8387070651541482;
    msg.lead_gain = 0.999589312143602;
    msg.deconfl_gain = 0.5649516400347359;
    msg.accel_switch_gain = 0.569817181514925;
    msg.safe_dist = 0.13610127887696277;
    msg.deconflict_offset = 0.3006001069417502;
    msg.accel_safe_margin = 0.14204187808152058;
    msg.accel_lim_x = 0.18622687262883297;

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
    msg.setTimeStamp(0.7274258996709645);
    msg.setSource(2095U);
    msg.setSourceEntity(17U);
    msg.setDestination(50586U);
    msg.setDestinationEntity(38U);
    msg.action = 206U;
    msg.lon_gain = 0.38243927919279275;
    msg.lat_gain = 0.9734732932987465;
    msg.bond_thick = 0.12346988473250076;
    msg.lead_gain = 0.9248444920583349;
    msg.deconfl_gain = 0.49483483751430035;
    msg.accel_switch_gain = 0.2526385223681795;
    msg.safe_dist = 0.9232488987415617;
    msg.deconflict_offset = 0.30293979572845997;
    msg.accel_safe_margin = 0.336284124446099;
    msg.accel_lim_x = 0.7931709142026643;

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
    msg.setTimeStamp(0.17066911776648663);
    msg.setSource(60586U);
    msg.setSourceEntity(33U);
    msg.setDestination(64860U);
    msg.setDestinationEntity(16U);
    msg.action = 130U;
    msg.lon_gain = 0.47934789883869444;
    msg.lat_gain = 0.5072208716948445;
    msg.bond_thick = 0.8925887051653468;
    msg.lead_gain = 0.25253717998624714;
    msg.deconfl_gain = 0.33604163898327977;
    msg.accel_switch_gain = 0.10578082392829935;
    msg.safe_dist = 0.7834677635143057;
    msg.deconflict_offset = 0.04295600650775899;
    msg.accel_safe_margin = 0.7874897799896128;
    msg.accel_lim_x = 0.5760290189924513;

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
    msg.setTimeStamp(0.1432961187839925);
    msg.setSource(27841U);
    msg.setSourceEntity(171U);
    msg.setDestination(64139U);
    msg.setDestinationEntity(133U);
    msg.type = 229U;
    msg.op = 236U;
    msg.err_mean = 0.32492929975821805;
    msg.dist_min_abs = 0.9341550807534224;
    msg.dist_min_mean = 0.485129318132389;
    msg.roll_rate_mean = 0.5124108107443476;
    msg.time = 0.15486965044041723;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 143U;
    tmp_msg_0.lon_gain = 0.8077323870845481;
    tmp_msg_0.lat_gain = 0.030610265738510778;
    tmp_msg_0.bond_thick = 0.3865769638980193;
    tmp_msg_0.lead_gain = 0.3431907395982299;
    tmp_msg_0.deconfl_gain = 0.01643308791602216;
    tmp_msg_0.accel_switch_gain = 0.8700369443776642;
    tmp_msg_0.safe_dist = 0.8948785898863545;
    tmp_msg_0.deconflict_offset = 0.19833548617390562;
    tmp_msg_0.accel_safe_margin = 0.14559061405057538;
    tmp_msg_0.accel_lim_x = 0.24612341992646747;
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
    msg.setTimeStamp(0.157482641218879);
    msg.setSource(58966U);
    msg.setSourceEntity(240U);
    msg.setDestination(4471U);
    msg.setDestinationEntity(63U);
    msg.type = 167U;
    msg.op = 79U;
    msg.err_mean = 0.5815059022939935;
    msg.dist_min_abs = 0.5492617952599834;
    msg.dist_min_mean = 0.844807342060854;
    msg.roll_rate_mean = 0.16401576506741744;
    msg.time = 0.4210136944666487;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.6006893277965366;
    tmp_msg_0.lat_gain = 0.475282666048096;
    tmp_msg_0.bond_thick = 0.28874151075905885;
    tmp_msg_0.lead_gain = 0.3962885343735487;
    tmp_msg_0.deconfl_gain = 0.2805346450956986;
    tmp_msg_0.accel_switch_gain = 0.023705455101770245;
    tmp_msg_0.safe_dist = 0.45408518715425317;
    tmp_msg_0.deconflict_offset = 0.5843652217150838;
    tmp_msg_0.accel_safe_margin = 0.7162241549640266;
    tmp_msg_0.accel_lim_x = 0.38720209474325107;
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
    msg.setTimeStamp(0.3998938686910667);
    msg.setSource(3747U);
    msg.setSourceEntity(234U);
    msg.setDestination(50671U);
    msg.setDestinationEntity(247U);
    msg.type = 192U;
    msg.op = 201U;
    msg.err_mean = 0.1498576312807648;
    msg.dist_min_abs = 0.09969534125184376;
    msg.dist_min_mean = 0.44415853410592065;
    msg.roll_rate_mean = 0.05051864146770302;
    msg.time = 0.7354166072026812;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 171U;
    tmp_msg_0.lon_gain = 0.4687850835195495;
    tmp_msg_0.lat_gain = 0.7689387791776205;
    tmp_msg_0.bond_thick = 0.18117587593373952;
    tmp_msg_0.lead_gain = 0.36059383074459983;
    tmp_msg_0.deconfl_gain = 0.5421253149923864;
    tmp_msg_0.accel_switch_gain = 0.04017429615040402;
    tmp_msg_0.safe_dist = 0.9676178216179857;
    tmp_msg_0.deconflict_offset = 0.6034817763732768;
    tmp_msg_0.accel_safe_margin = 0.47054414952712953;
    tmp_msg_0.accel_lim_x = 0.5575870776061627;
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
    msg.setTimeStamp(0.9713765670979813);
    msg.setSource(32532U);
    msg.setSourceEntity(166U);
    msg.setDestination(27347U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.48161191212081655;
    msg.lon = 0.38573063489261283;
    msg.eta = 1357650102U;
    msg.duration = 40891U;

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
    msg.setTimeStamp(0.07627436947896415);
    msg.setSource(11295U);
    msg.setSourceEntity(100U);
    msg.setDestination(35506U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.7519971401964112;
    msg.lon = 0.4616107461551714;
    msg.eta = 1907965081U;
    msg.duration = 9117U;

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
    msg.setTimeStamp(0.28887078481795236);
    msg.setSource(24491U);
    msg.setSourceEntity(73U);
    msg.setDestination(2107U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.8369246160767819;
    msg.lon = 0.14215723674382463;
    msg.eta = 3188429304U;
    msg.duration = 3366U;

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
    msg.setTimeStamp(0.2034512252653311);
    msg.setSource(1110U);
    msg.setSourceEntity(5U);
    msg.setDestination(55161U);
    msg.setDestinationEntity(1U);
    msg.plan_id = 30793U;

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
    msg.setTimeStamp(0.5757619021712156);
    msg.setSource(9768U);
    msg.setSourceEntity(22U);
    msg.setDestination(7167U);
    msg.setDestinationEntity(105U);
    msg.plan_id = 19860U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4380019951066554;
    tmp_msg_0.lon = 0.10494038292852048;
    tmp_msg_0.eta = 820517092U;
    tmp_msg_0.duration = 12612U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.801675826360813);
    msg.setSource(20959U);
    msg.setSourceEntity(169U);
    msg.setDestination(31558U);
    msg.setDestinationEntity(109U);
    msg.plan_id = 25078U;

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
    msg.setTimeStamp(0.8511589846268722);
    msg.setSource(41687U);
    msg.setSourceEntity(12U);
    msg.setDestination(52441U);
    msg.setDestinationEntity(213U);
    msg.type = 251U;
    msg.command = 165U;
    msg.settings.assign("IQDBYQOCCZTFNYGSIILWOFQSGTBCVTVIWDGPHCUGYBZUABLOGFWSOKCUGRUJRBKAALJTPFNIBQFSYWNVTLXSVTOYLXMQOTXFCHISPACMOETSFYVAFYBPMVVLSOMKAKPAMVLUDLFHNQNEYEZPJFQYUTXVWPEUZWBZIHOUPMDRHQAVYIRJDBGMKGNHLPQKESRRDLNWCZAIEWAMCUXHKEKDOJZRGDDXWRDHMQHMXSBEZJUIHE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9107U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8755626329063387;
    tmp_tmp_msg_0_0.lon = 0.3712926574032376;
    tmp_tmp_msg_0_0.eta = 822238167U;
    tmp_tmp_msg_0_0.duration = 22692U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BNHEBJIADWLXNVPORWUJKPQJPLXTPRDMKGVKYFXDJCEMNVTVTBCGMFIKRUTFYWLBIRNZKBOTKEUFBNCORSJRKEUWPTKIGCEXNHJQSFJVERZDIZFQQJTDOMYLTUAHSUOKGMZUYPXXZSGEMOILHIIBTBWZGPJNAZSZPRVPSAQOBHAGEXIOLSNUZGXLQNXVYFSLWHWUWLAAVQCYIEKHDYMDVOTCFHHYDNQDSBVPCWYRG");

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
    msg.setTimeStamp(0.6697017366190618);
    msg.setSource(36684U);
    msg.setSourceEntity(147U);
    msg.setDestination(50001U);
    msg.setDestinationEntity(120U);
    msg.type = 166U;
    msg.command = 32U;
    msg.settings.assign("LRIGJYAZMSJBK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 4626U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9543142333129638;
    tmp_tmp_msg_0_0.lon = 0.6547096398392942;
    tmp_tmp_msg_0_0.eta = 628358372U;
    tmp_tmp_msg_0_0.duration = 44857U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TVNWLGZNROOHEQVIQMEOTOWVGWHZLLYDHQAGLHRIVAZXXXNBLAEDASCYUVHFXCRTUUGIACEEFTFNSKQAUYJKTIOJRKXUUQGZWQKYFTMIXSHVMBIDSJHPUMQIQKOVMXMKMWPLCNTRZFRXSUIACDGBRMSDICJXKGSPGZYWPVYWZEDOJRYUCNWZDUBYCLAWRZJQKMYABJBVFEFFXDOQMKCCBTWEEJTDBSNFKNOLGPHTLBPGFNLJYSRPEIS");

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
    msg.setTimeStamp(0.8334164697354909);
    msg.setSource(25436U);
    msg.setSourceEntity(237U);
    msg.setDestination(9528U);
    msg.setDestinationEntity(77U);
    msg.type = 61U;
    msg.command = 229U;
    msg.settings.assign("TJYADOCLESRLCJJHQMQWISQGLEZKRUSBCOIWXOJPDAPHYYJSNBAXVKSRHBGNTVCCWPCHMLMGNGNQRYQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55315U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RYJTKTJVIAXFHNPMJHHLMLDCASWPDAXTRQVDHGUNKDSQUCJUBFIYCEOXVDCPIZWASPTIBGSOZSGFALTQPFMJOXOBBTSOYLFFOERWPYOULKDZCINAKNQAROOJBWEWQUBZGBHSTJKZFMEHNXE");

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
    msg.setTimeStamp(0.12281644368198252);
    msg.setSource(849U);
    msg.setSourceEntity(20U);
    msg.setDestination(11096U);
    msg.setDestinationEntity(243U);
    msg.state = 195U;
    msg.plan_id = 56021U;
    msg.wpt_id = 183U;
    msg.settings_chk = 34161U;

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
    msg.setTimeStamp(0.6944636831889047);
    msg.setSource(20263U);
    msg.setSourceEntity(234U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(12U);
    msg.state = 10U;
    msg.plan_id = 56023U;
    msg.wpt_id = 223U;
    msg.settings_chk = 25072U;

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
    msg.setTimeStamp(0.537585046344801);
    msg.setSource(47030U);
    msg.setSourceEntity(198U);
    msg.setDestination(59151U);
    msg.setDestinationEntity(233U);
    msg.state = 193U;
    msg.plan_id = 8468U;
    msg.wpt_id = 191U;
    msg.settings_chk = 29292U;

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
    msg.setTimeStamp(0.16753007125360875);
    msg.setSource(45244U);
    msg.setSourceEntity(141U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(195U);
    msg.uid = 134U;
    msg.frag_number = 194U;
    msg.num_frags = 171U;
    const signed char tmp_msg_0[] = {-7, -118, -122, 73, -45, -20, 26, 22, 41, -73, 70, 16, 17, -68, -78, 49, -7, -72, -95, -36, -117, -9, 70, -85, -22, -15, 0, 94, -22, -82, 101, -86, -41, -60, 71, 57, 88, 23, 80, -110, 30, 68, -124, -123, -114, -85, 0, -79, 13, 78, 26, -29, 46, -29, -112, 44, -41, 16, 33, 38, -98, 8, -71, -50, 82, -124, 72, -126, -74, -62, 46, -119, 31, 32, -11, -96, -111, -119, -8, 96, -16, 96, 19, -30, 54, 118, 13, -70, 44, 51, 72, -102, -8, -55, -20, 64, 96, -106, 32, -11, -34, 109, 30, 10, 90, -43, -30, 111, 116, 43, 50, 17, 9, 40, -40, 11, -112, 73, 52, 110, 114, -77, 109, 28};
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
    msg.setTimeStamp(0.8364659092918717);
    msg.setSource(40510U);
    msg.setSourceEntity(150U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(204U);
    msg.uid = 24U;
    msg.frag_number = 39U;
    msg.num_frags = 54U;
    const signed char tmp_msg_0[] = {-115, 110, -16, 5, -119, -45, 26, 23, 59, -102, -101, -90, -29, 66, -70, -112, 53, 69, -76, 90, 25, -19, -56, 20, -112, -28, 52, 47, -112, 76, -84, -9, 119, 114, -67, 70, -59, -69, -7, 76, -24, -5, -31, 65, 22, -55, 110, 90, -9, 93, 29, -50, -41, -21, -101, 3, 46, 106, 104, -103, -51, 90, 79, -24, 87, 18, 52, 65, 103, -95, 109, -30, -10, 121, -2, -101, 87, -61, -11, -120, 101, -12, -53, 69, -36, -23, -8, 76, -39, -100, -2, -62, 81, -33, -116, -96, -19, -80, 107, -77, -128, -68, 29, -44, 114, 82, 87, -47, 74, -62, 106, -57, 7, -80, -81, 88, 79, 47, -44, -13, 47, -81, 65, -58, 35, -36, 66, -77, 54, -9, 107, 28, 113, -90, -68, 70, 24, 15, 103, 9, 49, -73, 81, -11, -124, 18, 8, 20, 15, 2, -57, -56, -36, -31, -77, -117, -76, -47, 20, 81, 100, 89, -74, -97, -14, -34, -103, 102, 2, -93, 87, -44, -112, 82, 73, -95, 104, -78, 71, 80, -2, -125, -60, -28, 16, -90, -118, 16, -72, -91, 117, -31};
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
    msg.setTimeStamp(0.4638310483502823);
    msg.setSource(13140U);
    msg.setSourceEntity(51U);
    msg.setDestination(47184U);
    msg.setDestinationEntity(144U);
    msg.uid = 91U;
    msg.frag_number = 111U;
    msg.num_frags = 54U;
    const signed char tmp_msg_0[] = {-19, -34, 8, 5, -98, 117, -112, 120, -85, -12, -16, -14, 79, -5, 2, -19, -42, -107, -41, -67, 48, -34, 104, -57, 65, 1, -95, -70, -35, -65, -26, 19, 96, -40, -59, -102, 64, 67, 26, 10, 92, -120, 4, -125, 93, 49, -87, -45, 125, -125, 43, 4, -100, 34, 121, -76, 92, -94, 72};
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
    msg.setTimeStamp(0.5073531109586357);
    msg.setSource(23491U);
    msg.setSourceEntity(64U);
    msg.setDestination(1195U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("JEGAWDQWBTJKWXPFFLXAYSCBHPRBXYAZXMTJLLNIURGYJPLQWKUEUFMPOYCZDNRIBFKEVINBMZNOVOAHTNJITTHYHEOZMPIAONSQRBQICKYACTSSMRGAEMUDITBYZUZDOLZCHKEUFMQWVXSRWOPQQXCFXHXIVIUSFVWHBCHONVTQNJTGOKLOFMDEUYAGDHQDRCJD");
    const signed char tmp_msg_0[] = {-103, 75, -125, 102, 114, 9, 25, 54, -34, -56, -92, 124, 87, -50, 41, -66, 30, 32, 1, -73, -95, -48, -22, 20, -99, 122, -56, -43, 25, -49, 47, 44, -58, -79, 82, -71, 67, 104, -20, -87, -3, 37, -28, 64, 52, 49, -112, 89, 22, 25, -57, 60, -45, -100, -84, 30, 94, -110, -113, -44, -20, 111, -26, 82, 80, -85, -27, 40, -79, 76, -3, -97, -46, -97, -45, -7, -11, 21, -118, -52, 89, -7, -20, 108, -71, -109, 111, -124, -118, -111, 36, 74, 35, 60, 82, -35, 28, 33, 54, -91, -58, -11, 102, 115, 80, 111, 49, -58, 24, 60, 4, -103, 46, -111, 24, 82, -53, -76, -122, -119, -8, 20, -58, -50, -104, 85, 107, -112, -77, -47, 99, -20, 10, -55, -82, 17, -84, 76, 106, 0};
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
    msg.setTimeStamp(0.7706717967457413);
    msg.setSource(65123U);
    msg.setSourceEntity(183U);
    msg.setDestination(64291U);
    msg.setDestinationEntity(130U);
    msg.content_type.assign("JFTKSFJORNTWJSUSSSHRKXHHJWWEULUJXMEAYITYSULMXZFZGINPRROTNVQBNADFKVVMCUOOTNRCBBTOKUXDZTPDMBKMYQWFAJOPUIONVPGNXRQVCNTABCXMEOKDQNPMGGVAJTWXILYHIIXDVALDEYGHCPGRLHZGAABDCZVELJWLVQLCVKURYPZCCPQKAGYXGDYHEYZMERBSKBQZEBOFEAUQZQBPXCNJFOGF");
    const signed char tmp_msg_0[] = {50, 79, 98, -78, 38, 40, -117, -15, 63, -91, 100, 38, 64, 15, -62, -14, 2, -109, 70, 97, 86, -78, 7, 50, -62, 108, -61, 72, 6, 56, 93, -92, 65, 98, -122, -121, 21, -36, 5};
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
    msg.setTimeStamp(0.595170532674309);
    msg.setSource(47109U);
    msg.setSourceEntity(58U);
    msg.setDestination(59403U);
    msg.setDestinationEntity(199U);
    msg.content_type.assign("SGMFJAJYACPPFSFH");
    const signed char tmp_msg_0[] = {88, -77, 112, 113, 120, 30, 2, -14, 12, -71, -22, 20, -8, -7, 36, 83, -117, 88, 97, 108, 116, -20, 118, -38, 89, 121, -51, 28, 28, 42, 82, -3, -98, -1, 109, -46, 81, -18, -7, 87, -30, -104, 95, 7, -110, 72, 58, -75, 54, 30, -70, -23, -80, 40, -62, 99, -96, 77, 84, -103, 89, -80, -41, 110, 95, -117, -14, 107, -2, -27, 11, 51, -117, -19, -116, -56, 112, 34, -86, 40, 58, 19, 59, 72, -116, 0, 5, -46, -62, 95, 60, 94, -93, -98, 67, 21, 60, 3, -38, 66, 70, 26, -123, 46, -28, 77, 73, 15, 81, 12, 100, -98, -60, -71, -12, -117, -38, -61};
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
    msg.setTimeStamp(0.23839822355055373);
    msg.setSource(25123U);
    msg.setSourceEntity(96U);
    msg.setDestination(37417U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.8280792926126063);
    msg.setSource(25791U);
    msg.setSourceEntity(101U);
    msg.setDestination(42954U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.2294884424400907);
    msg.setSource(61697U);
    msg.setSourceEntity(166U);
    msg.setDestination(40954U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.8615735825120329);
    msg.setSource(44558U);
    msg.setSourceEntity(169U);
    msg.setDestination(21984U);
    msg.setDestinationEntity(173U);
    msg.target = 35970U;
    msg.bearing = 0.9023451880478264;
    msg.elevation = 0.6711654991785644;

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
    msg.setTimeStamp(0.7852414994670724);
    msg.setSource(34790U);
    msg.setSourceEntity(47U);
    msg.setDestination(39826U);
    msg.setDestinationEntity(87U);
    msg.target = 27558U;
    msg.bearing = 0.17015715647030794;
    msg.elevation = 0.24486060778193663;

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
    msg.setTimeStamp(0.22660080487785716);
    msg.setSource(14013U);
    msg.setSourceEntity(223U);
    msg.setDestination(1653U);
    msg.setDestinationEntity(205U);
    msg.target = 31165U;
    msg.bearing = 0.9405091232743038;
    msg.elevation = 0.5835534744863211;

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
    msg.setTimeStamp(0.6014967137617945);
    msg.setSource(14686U);
    msg.setSourceEntity(43U);
    msg.setDestination(59945U);
    msg.setDestinationEntity(243U);
    msg.target = 26933U;
    msg.x = 0.11824113276298731;
    msg.y = 0.44337850179050553;
    msg.z = 0.9516406557840578;

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
    msg.setTimeStamp(0.3552241405424795);
    msg.setSource(14958U);
    msg.setSourceEntity(125U);
    msg.setDestination(29336U);
    msg.setDestinationEntity(175U);
    msg.target = 38823U;
    msg.x = 0.250440690027278;
    msg.y = 0.18173801951665258;
    msg.z = 0.6380623683033055;

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
    msg.setTimeStamp(0.5943134826096589);
    msg.setSource(41548U);
    msg.setSourceEntity(7U);
    msg.setDestination(19945U);
    msg.setDestinationEntity(36U);
    msg.target = 5888U;
    msg.x = 0.19480792434552585;
    msg.y = 0.030541647418394824;
    msg.z = 0.14562647291519393;

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
    msg.setTimeStamp(0.3733514654533199);
    msg.setSource(8735U);
    msg.setSourceEntity(7U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(125U);
    msg.target = 34868U;
    msg.lat = 0.8848537741274114;
    msg.lon = 0.315780302667826;
    msg.z_units = 200U;
    msg.z = 0.1220463908243381;

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
    msg.setTimeStamp(0.9344900536555658);
    msg.setSource(28991U);
    msg.setSourceEntity(75U);
    msg.setDestination(29292U);
    msg.setDestinationEntity(252U);
    msg.target = 44490U;
    msg.lat = 0.790074931562668;
    msg.lon = 0.11257115343165591;
    msg.z_units = 251U;
    msg.z = 0.1316464911317422;

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
    msg.setTimeStamp(0.9109430705647205);
    msg.setSource(289U);
    msg.setSourceEntity(22U);
    msg.setDestination(7238U);
    msg.setDestinationEntity(229U);
    msg.target = 51294U;
    msg.lat = 0.15094617387421305;
    msg.lon = 0.5898665853911547;
    msg.z_units = 113U;
    msg.z = 0.5068734003496836;

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
    msg.setTimeStamp(0.7881087553405011);
    msg.setSource(9766U);
    msg.setSourceEntity(149U);
    msg.setDestination(31392U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("VFXJMKBXONILQGKRCHSTSWWRKUFOHKLQCASARBADWIJVPDKKOEJUPLRZJXFEOQVOCQAUMWKVCMBHMNAGDVZWZZWLEMTIFCPYLUAGMWGSBOVKNQIPSMDYTRDKYUCOQD");
    const signed char tmp_msg_0[] = {108, 68, -23, -91, 82, 102, -56, 59, 60, 121, -52, 21, -90, 62, -15, 89, -113, 86, 61, 90, -125, -101, 68, -64, 124, -11, 114, -48, 82, -3, -28, -6, 33, -14, 7, 11, 64, 64, -53, -8, -25, -45, -1, -39, 11, -58, -42, 31, 86, -53, -33, -38, 7, 105, -113};
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
    msg.setTimeStamp(0.5838077394121193);
    msg.setSource(56084U);
    msg.setSourceEntity(194U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(229U);
    msg.locale.assign("AKPTIAZLRIFJJQJGMUGWMRBRIFZKBEQZJTHMSZFCRAVQKTMKWXQEYLZVMDEPEHHBHCMTNRWYDZPXPBXADZWPYOPWWXPLVSMBNLSTNJLVYAUOITNCQNESTFHVLSJGVNORXCGJBNVOFDKXXCUDEKNSXOHMANZAAFEEQOUIZXRWHKSYVQGCHJIKYWFBFQUTDRVWUFIQMYXLLUWODJKPOGATBIPYDLGY");
    const signed char tmp_msg_0[] = {-16, -11, 126, -88, -42, -107, 43, -48, -128, 71, 113, -124, -30, 5, -116, -36, 70, 102, 88, 94, 81, 69, -67, 54, -80, 61, 52, 52, 36, 48, -46, -70, 77, 23, -127, -41, 38, -56, -121, -81, 68, -62, -68, 75, -102, 22, -73, -72, -123, -56, -126, 90, 18, -22, -16, 56, -15, 26, -107, 57, 112, 86, 120, -124, 125, -30, 126, 17, -45, -8, -33, -80, -93, 50, -105, 126, -119, -116, 53, 123, -49, 1, -3, 15, 123, 22, 77, 123, 63, -5, 51, 106, -112, 58, -35, -92, 79, 51, 63, 54, 22, 120, -7, 47, 23, -10, 84, -49, -123, 16, -108, -49, 26, -32, 115, 87, 84, 122, 92, -44, 103, -86, -88, -97, 118, 35, 82, 122, 75, 88, 14, 126, 120, 40, -75, -65, -53, -25, -9, -8, -83, -87, 35, 13, 9, 101, -48, 36, 74, -65, 39, -61, -15, -27, 17, -102, 85, -21, 46, 85, 52, 78, 13, -70, -58, 98, -54, 94, 15, -28, 65, 124, 37, -35, -58, -86, -112};
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
    msg.setTimeStamp(0.3231024226316891);
    msg.setSource(59184U);
    msg.setSourceEntity(5U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(160U);
    msg.locale.assign("QBXDMAJAVSCQPZYZLIPTMDJOOYRJJJFOGKSPW");
    const signed char tmp_msg_0[] = {-14, -23, 76, -86, 88, 79, 77, -114, -18, 28, -48, -30, -99, -42, -105, 121, -70, 47, 91, -2, -117, 19, -22, 99, 40, 12, 56, -95, -1, 62, -67, -51, 13, 25, -67, 126, 28, 17, -23, 71, 60, -72, -44, -55, 47, 71, -71, -112, -121, 44, 112, -117, -114, 114, -37, 30, 109, 73, -42, -53, -8, 33, -59, 37, 19, -103, -37, -115, -47, 116, 112, -28, 8, -58, 117, 80};
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
    msg.setTimeStamp(0.36392457990867233);
    msg.setSource(16225U);
    msg.setSourceEntity(0U);
    msg.setDestination(60475U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.7952790939069345);
    msg.setSource(28463U);
    msg.setSourceEntity(184U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.6256991317855781);
    msg.setSource(42064U);
    msg.setSourceEntity(180U);
    msg.setDestination(15423U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.38551153952770933);
    msg.setSource(19098U);
    msg.setSourceEntity(55U);
    msg.setDestination(20925U);
    msg.setDestinationEntity(31U);
    msg.camid = 219U;
    msg.x = 11206U;
    msg.y = 64276U;

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
    msg.setTimeStamp(0.5451874512136533);
    msg.setSource(53790U);
    msg.setSourceEntity(181U);
    msg.setDestination(5445U);
    msg.setDestinationEntity(38U);
    msg.camid = 166U;
    msg.x = 48121U;
    msg.y = 23363U;

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
    msg.setTimeStamp(0.45729899872594926);
    msg.setSource(57048U);
    msg.setSourceEntity(252U);
    msg.setDestination(13979U);
    msg.setDestinationEntity(206U);
    msg.camid = 219U;
    msg.x = 44644U;
    msg.y = 39945U;

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
    msg.setTimeStamp(0.5158571095346548);
    msg.setSource(63620U);
    msg.setSourceEntity(224U);
    msg.setDestination(52487U);
    msg.setDestinationEntity(70U);
    msg.camid = 221U;
    msg.x = 57125U;
    msg.y = 9797U;

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
    msg.setTimeStamp(0.6067850423048425);
    msg.setSource(1589U);
    msg.setSourceEntity(193U);
    msg.setDestination(23271U);
    msg.setDestinationEntity(183U);
    msg.camid = 249U;
    msg.x = 10419U;
    msg.y = 37021U;

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
    msg.setTimeStamp(0.8283201489130766);
    msg.setSource(53335U);
    msg.setSourceEntity(109U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(75U);
    msg.camid = 104U;
    msg.x = 19472U;
    msg.y = 43447U;

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
    msg.setTimeStamp(0.8275282671341508);
    msg.setSource(4543U);
    msg.setSourceEntity(36U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(100U);
    msg.tracking = 237U;
    msg.lat = 0.6466943221177156;
    msg.lon = 0.0848925103287812;
    msg.x = 0.6579968143602138;
    msg.y = 0.4527646089701879;
    msg.z = 0.16709459964920592;

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
    msg.setTimeStamp(0.5168803835954114);
    msg.setSource(64212U);
    msg.setSourceEntity(247U);
    msg.setDestination(27872U);
    msg.setDestinationEntity(219U);
    msg.tracking = 178U;
    msg.lat = 0.4518178564120888;
    msg.lon = 0.8915929769335046;
    msg.x = 0.4994771514737505;
    msg.y = 0.7895052281642564;
    msg.z = 0.8620096714629129;

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
    msg.setTimeStamp(0.33228928474388386);
    msg.setSource(37076U);
    msg.setSourceEntity(241U);
    msg.setDestination(44992U);
    msg.setDestinationEntity(67U);
    msg.tracking = 47U;
    msg.lat = 0.432864955167953;
    msg.lon = 0.47755670373729;
    msg.x = 0.7265829598798083;
    msg.y = 0.4933194663066086;
    msg.z = 0.5282799963224353;

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
    msg.setTimeStamp(0.4491787368930579);
    msg.setSource(43376U);
    msg.setSourceEntity(227U);
    msg.setDestination(62832U);
    msg.setDestinationEntity(16U);
    msg.target.assign("YLEMYYQQJCBCZEVEVWZHSCTIVCDTAUAVWDQGUTWJNVRONUYIDZQDSXMOGOLREQABZRPRNCGMBKUTKKPUXLJVHWZQSHOVTCLMPRQWUKZUSYFEQNXHDSMIHFWJHMJMBTEYISVWOPXNGUGOYKNLDOISPQIPXJGOZNGONPRXDLFMLASXCFZXLKZFOLKUAWJL");
    msg.lbearing = 0.39282144489222093;
    msg.lelevation = 0.4974130122055601;
    msg.bearing = 0.49004179577591034;
    msg.elevation = 0.14172624213289886;
    msg.phi = 0.5241887381521944;
    msg.theta = 0.8614574346961706;
    msg.psi = 0.18443264928057723;
    msg.accuracy = 0.9138938312999592;

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
    msg.setTimeStamp(0.9866870413591523);
    msg.setSource(24647U);
    msg.setSourceEntity(179U);
    msg.setDestination(14353U);
    msg.setDestinationEntity(215U);
    msg.target.assign("GYLONMLJLWDMCPPCZZVGEDIZTHYENSVMOVIRHTGTMQGDOHISWSYRIJTXUEVGKEBWN");
    msg.lbearing = 0.7770730013165529;
    msg.lelevation = 0.2088035640537338;
    msg.bearing = 0.7278824257913273;
    msg.elevation = 0.19773298589113786;
    msg.phi = 0.8109487713411456;
    msg.theta = 0.020675535188686034;
    msg.psi = 0.08696926852580522;
    msg.accuracy = 0.1924470650625697;

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
    msg.setTimeStamp(0.11064305754926973);
    msg.setSource(21829U);
    msg.setSourceEntity(28U);
    msg.setDestination(10077U);
    msg.setDestinationEntity(49U);
    msg.target.assign("VLQUQAZNGBOIMPMHNWVIXOSRSREXOYDHUAPWUERXZGMJNPCVEUUAJILGWEVNIPQAJMFBROHRGUNVUVGHONAVBHXWFIKUVOJFHYTRDIKCSERSCETLENSOCQSCDWPRTWQWAXYOINCFTLCPZZGJTFMXMXZFCTPJBTLSCFWAHZDZWQTDIJEIRKVKFMYOHDLYEJMZLYTLHNGYJYYDBPPVSBCKAKRAXKGBHEUQQUDK");
    msg.lbearing = 0.34641702927774887;
    msg.lelevation = 0.7474604180696267;
    msg.bearing = 0.5342791665392956;
    msg.elevation = 0.12024324831052313;
    msg.phi = 0.30228708834387386;
    msg.theta = 0.5165006366577377;
    msg.psi = 0.23923573734235548;
    msg.accuracy = 0.2482005901963591;

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
    msg.setTimeStamp(0.885286817564059);
    msg.setSource(33087U);
    msg.setSourceEntity(193U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(105U);
    msg.target.assign("CXHHDURVLHVEKDAJBUYWXITSEEMKBSMKMXENSNUMHNVIBPGRCEWUPCY");
    msg.x = 0.34460477156086966;
    msg.y = 0.08836582537509763;
    msg.z = 0.34271812056840245;
    msg.n = 0.7560605018782947;
    msg.e = 0.18388557179328258;
    msg.d = 0.1670609719334626;
    msg.phi = 0.4870907505105506;
    msg.theta = 0.4729359240528441;
    msg.psi = 0.020835882165825326;
    msg.accuracy = 0.9308292354587789;

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
    msg.setTimeStamp(0.6684310763954363);
    msg.setSource(9047U);
    msg.setSourceEntity(11U);
    msg.setDestination(31140U);
    msg.setDestinationEntity(182U);
    msg.target.assign("SMBIGWACKFZQBYCYWHXLRYXWVZYEZXPQCKCUEZDWTVEPTNVJPMLXFMIQKUZTWVYNDNUAWZGRISOBNHSTUDJNFREPAHLFMHO");
    msg.x = 0.9550828339384808;
    msg.y = 0.17928237114010637;
    msg.z = 0.08038278666351895;
    msg.n = 0.6989054233591261;
    msg.e = 0.349806471052971;
    msg.d = 0.47922119496998405;
    msg.phi = 0.3073519257156775;
    msg.theta = 0.25855846068802435;
    msg.psi = 0.8164833962719154;
    msg.accuracy = 0.3312681508572969;

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
    msg.setTimeStamp(0.6858190353904519);
    msg.setSource(40715U);
    msg.setSourceEntity(140U);
    msg.setDestination(3284U);
    msg.setDestinationEntity(87U);
    msg.target.assign("XNHPMVGYSKJVPDNIDIHQEMARZIQPIARQGYDSZEWJKFSIQEZAW");
    msg.x = 0.3023834650906926;
    msg.y = 0.734420489984052;
    msg.z = 0.37545086185643883;
    msg.n = 0.8113391627974863;
    msg.e = 0.5068341698287385;
    msg.d = 0.024201568236305593;
    msg.phi = 0.16577927212145627;
    msg.theta = 0.6527734804458398;
    msg.psi = 0.6147890556583032;
    msg.accuracy = 0.5367325197845042;

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
    msg.setTimeStamp(0.791488151320964);
    msg.setSource(2167U);
    msg.setSourceEntity(178U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(66U);
    msg.target.assign("HVYOEGDDXMFOGXKNTYZFAWDPVSKJQCSOUTBBZFHZAFIBYMUZ");
    msg.lat = 0.7059149148442655;
    msg.lon = 0.4311318242124389;
    msg.z_units = 98U;
    msg.z = 0.9644567110744152;
    msg.accuracy = 0.8579998227368074;

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
    msg.setTimeStamp(0.5779885738802539);
    msg.setSource(63033U);
    msg.setSourceEntity(205U);
    msg.setDestination(58020U);
    msg.setDestinationEntity(203U);
    msg.target.assign("TAMRPZYHOUZQMIFCEZSVAKMGOIQJWREYEPGOZJQLWYXTGSRKGFIOJYJCLDVZFWLDNHAFXPPTQBWKQUPEPENJKKULVMTNMTTZIGUIKSKRBINTDRODMDCSAGJZIKTTPQDSLFURGDOWB");
    msg.lat = 0.7633977397544649;
    msg.lon = 0.8964452518345283;
    msg.z_units = 101U;
    msg.z = 0.7744635797552443;
    msg.accuracy = 0.8170201688676854;

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
    msg.setTimeStamp(0.8181088592529335);
    msg.setSource(50699U);
    msg.setSourceEntity(81U);
    msg.setDestination(35164U);
    msg.setDestinationEntity(105U);
    msg.target.assign("YHMIKVWXFPIZEEPSPBOAIVSOMJYQCSTKZVRDSKOPQYZXGVLWLASPBNGFZXRIOKLNHFKELBRHHJTNPLFVXIKDYHVBQVGEBFCXVQICJHDYPTIMOTMXCYIWKBEJSYOA");
    msg.lat = 0.9852391280651009;
    msg.lon = 0.27323472886098465;
    msg.z_units = 162U;
    msg.z = 0.14837029398778856;
    msg.accuracy = 0.8704606044952294;

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
    msg.setTimeStamp(0.18966008049916294);
    msg.setSource(32654U);
    msg.setSourceEntity(129U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(36U);
    msg.name.assign("WDLNJDTUQODBNRAKRZXAKBXUMAFCMHTJTBOFCXPJITKGQOQVYTXQTLLDDEBOPIYJYKSHSFZFSOOLMPEHGTWGTOS");
    msg.lat = 0.42521206533768463;
    msg.lon = 0.7689094469187474;
    msg.z = 0.9553443287770419;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.021346239689443602);
    msg.setSource(39999U);
    msg.setSourceEntity(181U);
    msg.setDestination(53010U);
    msg.setDestinationEntity(217U);
    msg.name.assign("UOJJNVFJCZETSUMTTXLDGEWWIYLGZIWQLKIIJJGMDXDUVAKUGNCSYQIPOFCF");
    msg.lat = 0.3132901756673423;
    msg.lon = 0.9140762904984624;
    msg.z = 0.4159380936471807;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.9171575653014448);
    msg.setSource(10270U);
    msg.setSourceEntity(162U);
    msg.setDestination(30217U);
    msg.setDestinationEntity(65U);
    msg.name.assign("EQCRELDOWTUXOECKOINKPFLVRKVLDJUCXBNSYBPYZEWEHJIOKQPHBTEJIBCVLMMSSKADPKXZLCRIRUMBUMIQNOKHRJVISWEVEWUDWNWYHQZBYCUJSZFWZCNRGUPTVXHYAYUNMOZQVRAALDXPGF");
    msg.lat = 0.07214234601500136;
    msg.lon = 0.8136205252552391;
    msg.z = 0.7267598888686829;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.1242824928381413);
    msg.setSource(11878U);
    msg.setSourceEntity(148U);
    msg.setDestination(60507U);
    msg.setDestinationEntity(7U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.41867843346279954);
    msg.setSource(50857U);
    msg.setSourceEntity(176U);
    msg.setDestination(24668U);
    msg.setDestinationEntity(201U);
    msg.op = 187U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OAINFPRFZAXOJTQNAVUYZGENTLOAMZXMDWUFPVDXUGSKLFTJUWZNJDXQBPFPGLHKQYSVBBOYFHEHEMLAMGGTCEHNVTNSCLPTGUCWVQCKICKHCRFPISCNVGNWLNRSHRTEIWADHKWSEIKJGMUTVGYAIEYBYPQJJVJZYZEOPBMXGBHYDRLLQKFSKMIPSXILYJCDRHWTJFEXWBULJOHBOQBSZQDUZOVMDZANVCE");
    tmp_msg_0.lat = 0.6938710261531473;
    tmp_msg_0.lon = 0.43317133107445294;
    tmp_msg_0.z = 0.47014638924959207;
    tmp_msg_0.z_units = 146U;
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
    msg.setTimeStamp(0.6844633017537916);
    msg.setSource(57004U);
    msg.setSourceEntity(157U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(217U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.7762359061956886);
    msg.setSource(116U);
    msg.setSourceEntity(92U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(70U);
    msg.value = 0.38450823164951287;
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
    msg.setTimeStamp(0.8165901162127324);
    msg.setSource(58828U);
    msg.setSourceEntity(137U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(129U);
    msg.value = 0.8849117770661993;
    msg.type = 34U;

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
    msg.setTimeStamp(0.02344781232614901);
    msg.setSource(28493U);
    msg.setSourceEntity(2U);
    msg.setDestination(23017U);
    msg.setDestinationEntity(74U);
    msg.value = 0.03000329035837046;
    msg.type = 94U;

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
    msg.setTimeStamp(0.3600244920052914);
    msg.setSource(42574U);
    msg.setSourceEntity(100U);
    msg.setDestination(21746U);
    msg.setDestinationEntity(80U);
    msg.value = 0.1801712050565072;

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
    msg.setTimeStamp(0.12677672628571157);
    msg.setSource(22107U);
    msg.setSourceEntity(133U);
    msg.setDestination(44814U);
    msg.setDestinationEntity(251U);
    msg.value = 0.6460346432607623;

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
    msg.setTimeStamp(0.6011416549197758);
    msg.setSource(62118U);
    msg.setSourceEntity(18U);
    msg.setDestination(1663U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7968353419367347;

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
    msg.setTimeStamp(0.5714403596454171);
    msg.setSource(60049U);
    msg.setSourceEntity(2U);
    msg.setDestination(29208U);
    msg.setDestinationEntity(91U);
    msg.timestamp_last_service = 0.7690934314225177;
    msg.time_next_service = 0.05587462429714929;
    msg.time_motor_next_service = 0.5226570398212299;
    msg.time_idle_ground = 0.13217533954186345;
    msg.time_idle_air = 0.11464044135704599;
    msg.time_idle_water = 0.19562254166990645;
    msg.time_idle_underwater = 0.23407776779468437;
    msg.time_idle_unknown = 0.21041094435930874;
    msg.time_motor_ground = 0.5100007402603421;
    msg.time_motor_air = 0.4780652503080005;
    msg.time_motor_water = 0.7926519883833468;
    msg.time_motor_underwater = 0.3285540483206246;
    msg.time_motor_unknown = 0.028327288173462195;
    msg.rpm_min = 7533;
    msg.rpm_max = 11310;
    msg.depth_max = 0.5967425468304486;

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
    msg.setTimeStamp(0.35041970516191756);
    msg.setSource(33607U);
    msg.setSourceEntity(101U);
    msg.setDestination(36225U);
    msg.setDestinationEntity(135U);
    msg.timestamp_last_service = 0.22484470453741434;
    msg.time_next_service = 0.45494273465660806;
    msg.time_motor_next_service = 0.24086897386328976;
    msg.time_idle_ground = 0.02913212842128865;
    msg.time_idle_air = 0.8373479538623098;
    msg.time_idle_water = 0.5621843469758153;
    msg.time_idle_underwater = 0.44772326604926105;
    msg.time_idle_unknown = 0.06581491103415871;
    msg.time_motor_ground = 0.12679417893872957;
    msg.time_motor_air = 0.488947194987294;
    msg.time_motor_water = 0.6886817325330421;
    msg.time_motor_underwater = 0.19311836776194113;
    msg.time_motor_unknown = 0.06792588238944297;
    msg.rpm_min = -24672;
    msg.rpm_max = -18784;
    msg.depth_max = 0.4687717919821456;

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
    msg.setTimeStamp(0.7932884664354001);
    msg.setSource(11258U);
    msg.setSourceEntity(27U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(244U);
    msg.timestamp_last_service = 0.703984494291649;
    msg.time_next_service = 0.08768263475773463;
    msg.time_motor_next_service = 0.5948969302067311;
    msg.time_idle_ground = 0.3843075203556715;
    msg.time_idle_air = 0.1779989599987034;
    msg.time_idle_water = 0.7752703410762178;
    msg.time_idle_underwater = 0.46697221226753194;
    msg.time_idle_unknown = 0.6626108146581261;
    msg.time_motor_ground = 0.3273225406654017;
    msg.time_motor_air = 0.5912326987633879;
    msg.time_motor_water = 0.9232182096051191;
    msg.time_motor_underwater = 0.25203647636506243;
    msg.time_motor_unknown = 0.23731944765509116;
    msg.rpm_min = 76;
    msg.rpm_max = 26136;
    msg.depth_max = 0.14617934363624685;

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
    msg.setTimeStamp(0.07113202559959086);
    msg.setSource(61922U);
    msg.setSourceEntity(226U);
    msg.setDestination(25618U);
    msg.setDestinationEntity(75U);
    msg.severity = 35U;
    msg.text.assign("HQICQTPHPSMKXGLCBWXIMBVHGGPZWVPCJOGLSDFJUDDXYZPHNPUSEYOQTUOKOKBFVAIZFWXEMATAJDXXPGLTUATT");

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
    msg.setTimeStamp(0.7495925983574439);
    msg.setSource(59757U);
    msg.setSourceEntity(241U);
    msg.setDestination(11033U);
    msg.setDestinationEntity(246U);
    msg.severity = 21U;
    msg.text.assign("QUWRAWPDKIXIGJANTBAYXKXPBTXAS");

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
    msg.setTimeStamp(0.8909820650912056);
    msg.setSource(6878U);
    msg.setSourceEntity(252U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(109U);
    msg.severity = 50U;
    msg.text.assign("TNQNZOFZMBIQCTPXPFZFBTXKOLUVPPDRHBRCKBSZSKMWVIMEVHRNVAKKYEZNSSWIXZWCHJVBXMHHPBMEKDYNDUYCSTYOQCLAHAXBAYMAKIMLTSCMWWDXLGQJCXMCGLTPLSNHREJTWPUCNHCWLFUADXFWEGRXIROZYFAEJPBGFFZJQUYGLYQDNLZNFISJX");

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
    msg.setTimeStamp(0.37915351030555666);
    msg.setSource(38749U);
    msg.setSourceEntity(118U);
    msg.setDestination(32109U);
    msg.setDestinationEntity(195U);
    msg.channel = 13;
    msg.value = -825862425;
    msg.gain = 193U;

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
    msg.setTimeStamp(0.9929511648791253);
    msg.setSource(40428U);
    msg.setSourceEntity(197U);
    msg.setDestination(53730U);
    msg.setDestinationEntity(64U);
    msg.channel = 39;
    msg.value = 2019040504;
    msg.gain = 229U;

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
    msg.setTimeStamp(0.7151798370915288);
    msg.setSource(56792U);
    msg.setSourceEntity(66U);
    msg.setDestination(49468U);
    msg.setDestinationEntity(97U);
    msg.channel = 48;
    msg.value = -1278622544;
    msg.gain = 127U;

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
    msg.setTimeStamp(0.5491441766847027);
    msg.setSource(48909U);
    msg.setSourceEntity(1U);
    msg.setDestination(31583U);
    msg.setDestinationEntity(69U);
    msg.ch01 = 0.5565911380952798;
    msg.ch02 = 0.6459896163758139;
    msg.ch03 = 0.004705529708985745;
    msg.ch04 = 0.75499774940862;
    msg.ch05 = 0.3299576974054089;
    msg.ch06 = 0.3353781852389419;
    msg.ch07 = 0.9998318957653629;
    msg.ch08 = 0.718672880655155;
    msg.ch09 = 0.4783428740819685;
    msg.ch10 = 0.5431345095440125;
    msg.ch11 = 0.24529869084216083;
    msg.ch12 = 0.16894041574897023;
    msg.ch13 = 0.05188536532414345;
    msg.ch14 = 0.7047320751269368;
    msg.ch15 = 0.3286305424025605;
    msg.ch16 = 0.6203348567144316;

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
    msg.setTimeStamp(0.11418418233619843);
    msg.setSource(28953U);
    msg.setSourceEntity(113U);
    msg.setDestination(30797U);
    msg.setDestinationEntity(212U);
    msg.ch01 = 0.5342713140186616;
    msg.ch02 = 0.5578169323651548;
    msg.ch03 = 0.10792096393762529;
    msg.ch04 = 0.3900709481849426;
    msg.ch05 = 0.3996370383451422;
    msg.ch06 = 0.4795101984436849;
    msg.ch07 = 0.14421902583333823;
    msg.ch08 = 0.9115629285821443;
    msg.ch09 = 0.20643494214120373;
    msg.ch10 = 0.3174909853075807;
    msg.ch11 = 0.8894343484309621;
    msg.ch12 = 0.9974196569011633;
    msg.ch13 = 0.2789397809089582;
    msg.ch14 = 0.5884149321054775;
    msg.ch15 = 0.3905453528340662;
    msg.ch16 = 0.893309652081992;

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
    msg.setTimeStamp(0.6597607414426994);
    msg.setSource(5564U);
    msg.setSourceEntity(204U);
    msg.setDestination(49483U);
    msg.setDestinationEntity(3U);
    msg.ch01 = 0.10942889239452214;
    msg.ch02 = 0.31604369759705986;
    msg.ch03 = 0.6663331346153823;
    msg.ch04 = 0.7521102786544469;
    msg.ch05 = 0.7053752569701128;
    msg.ch06 = 0.6538809384092781;
    msg.ch07 = 0.34955117069444286;
    msg.ch08 = 0.8400430735655695;
    msg.ch09 = 0.21835031919251613;
    msg.ch10 = 0.3678469103405888;
    msg.ch11 = 0.4521700138934638;
    msg.ch12 = 0.9950415974115127;
    msg.ch13 = 0.4569235614190976;
    msg.ch14 = 0.17634778071964874;
    msg.ch15 = 0.3337224231076885;
    msg.ch16 = 0.05750676002770316;

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
    msg.setTimeStamp(0.7866322510851521);
    msg.setSource(48958U);
    msg.setSourceEntity(227U);
    msg.setDestination(62480U);
    msg.setDestinationEntity(154U);
    msg.op = 110U;
    msg.lat = 0.06428496102383163;
    msg.lon = 0.876825988474005;
    msg.height = 0.6290606001226673;
    msg.depth = 0.049866124114214205;
    msg.alt = 0.2671803415677877;

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
    msg.setTimeStamp(0.603955810960268);
    msg.setSource(126U);
    msg.setSourceEntity(168U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(1U);
    msg.op = 167U;
    msg.lat = 0.27862041732570486;
    msg.lon = 0.9781526479452065;
    msg.height = 0.6541729445601899;
    msg.depth = 0.42352001900539327;
    msg.alt = 0.8216668695451238;

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
    msg.setTimeStamp(0.8049261039412967);
    msg.setSource(30054U);
    msg.setSourceEntity(65U);
    msg.setDestination(2153U);
    msg.setDestinationEntity(61U);
    msg.op = 142U;
    msg.lat = 0.7567409743468386;
    msg.lon = 0.7839314934297413;
    msg.height = 0.8737019418640586;
    msg.depth = 0.17392134610479504;
    msg.alt = 0.4114461880367095;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.4141401005639752);
    msg.setSource(9297U);
    msg.setSourceEntity(23U);
    msg.setDestination(35044U);
    msg.setDestinationEntity(62U);
    msg.nbeams = 127U;
    msg.ncells = 11U;
    msg.coord_sys = 137U;

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
    msg.setTimeStamp(0.557067534105713);
    msg.setSource(26756U);
    msg.setSourceEntity(39U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(240U);
    msg.nbeams = 127U;
    msg.ncells = 49U;
    msg.coord_sys = 173U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.35049319487017483;
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
    msg.setTimeStamp(0.2373161982821771);
    msg.setSource(22474U);
    msg.setSourceEntity(49U);
    msg.setDestination(47732U);
    msg.setDestinationEntity(98U);
    msg.nbeams = 210U;
    msg.ncells = 189U;
    msg.coord_sys = 21U;

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
    msg.setTimeStamp(0.353360721895985);
    msg.setSource(63135U);
    msg.setSourceEntity(106U);
    msg.setDestination(58523U);
    msg.setDestinationEntity(89U);
    msg.cell_position = 0.9565439467912341;

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
    msg.setTimeStamp(0.22529790606271227);
    msg.setSource(28946U);
    msg.setSourceEntity(51U);
    msg.setDestination(7358U);
    msg.setDestinationEntity(83U);
    msg.cell_position = 0.7442821083023025;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.28549655475997626;
    tmp_msg_0.amp = 0.4950521452907156;
    tmp_msg_0.cor = 15U;
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
    msg.setTimeStamp(0.7017441940825909);
    msg.setSource(45097U);
    msg.setSourceEntity(21U);
    msg.setDestination(5747U);
    msg.setDestinationEntity(245U);
    msg.cell_position = 0.8390597148949397;

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
    msg.setTimeStamp(0.3987898379809047);
    msg.setSource(60547U);
    msg.setSourceEntity(132U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(228U);
    msg.vel = 0.6168890228179872;
    msg.amp = 0.7181674673429825;
    msg.cor = 247U;

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
    msg.setTimeStamp(0.15526636213917833);
    msg.setSource(18473U);
    msg.setSourceEntity(24U);
    msg.setDestination(48070U);
    msg.setDestinationEntity(171U);
    msg.vel = 0.4825141822102358;
    msg.amp = 0.7713733441745573;
    msg.cor = 32U;

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
    msg.setTimeStamp(0.5619503040727445);
    msg.setSource(48351U);
    msg.setSourceEntity(14U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(84U);
    msg.vel = 0.8823168315450564;
    msg.amp = 0.5453380625108404;
    msg.cor = 111U;

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
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.3222309650146714);
    msg.setSource(18956U);
    msg.setSourceEntity(29U);
    msg.setDestination(35175U);
    msg.setDestinationEntity(172U);
    msg.rid = 2592U;
    msg.host.assign("LKFEQNBVQJMLFYMXBAVJAUQMBGZCPE");
    msg.path.assign("FEXOVDSCNODZROJJFWZHPCIKJVAZHPUCBDVFWXPWWZNQGQTVXIZPRWXGUVOBTPVEKVTDWKTEJHPDLLNXQUOBRLDMAMOJGDPKMCNQISBLSYHXAGNEYSLNDGHTGUKUHNBRJIPGFEMSLWEMGCDSRPXTGCWXFQKYYFAKBURQAOFHBZYILHUSAIYQJATYRTBZUOLM");
    msg.query.assign("LOXFGPIAZLZYRHNXOMLPDCZTFOFGJXNHWIROLLXSCVTNYYZOAPIAOMLIBEWHPADHDKAKXVYJGMDUNJWYDJJGJXEUSWYVEKEXJHBWQZOTQHPKVQZVWLDQIQLABAUMUTPJGICQGYQVBCYJTGHLWKQFNOSBNTDVMHBLATIMZMHCUOREWMZCYOTABNECKUVZSERMXWXKICSEDDUJRRBNHZKVPQRSMAKUXPNBPPGQRFIRSFNSECFTCTRFUEUBK");
    const signed char tmp_msg_0[] = {71, 100, -112, -4, 74, 48, -115, -79, 75, 75, -16, -3, -32, 57, 104, -27, 63, -26, 120, -59, 47, 89, -29, -3, -43, -106, -91, -30, -75, -80, 124, -87, 35, -8, 93, -106, -94, 82, 18, 122, -106, -4, -93, 118, -36, 85, 86, -21, -37, -29, -84, 63, -126, -75, -105, -7, 70, 114, -122, 116, -56, -109, 99, 126, 26, 106, 114, 102, -55, -4, 32, -10, 65, -100, -8, 31, 28, 102, 68, 119, 116, 28, 59, 65, 98, 87, 58, -73, 83, -107, 40, -94, -96, 122, 91, 34, -30, 0, 79, -110, -35, -65, 86, 12, -44, -68, -23, 0, 11, -78, -50, -57, 37, 102, -8, 73, 32, 19, -50, 73};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 107U;
    msg.file_data.assign("MHZPFXAJDTKQVYHOLPENGRRSLEVWIMPOXNCAIPLHRYQULOFKZUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.45273590646081463);
    msg.setSource(55016U);
    msg.setSourceEntity(179U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(2U);
    msg.rid = 64528U;
    msg.host.assign("FIXLXBWQMSGKHGMCZROZHYQJJKRQWP");
    msg.path.assign("VCSXGFGIGSFVQZACHGFAQPJKCXXQVTSNWYOKEVGSLLLNJPZOHMIMBZHTGCOYKAELBMSHEXQKBPETRSETYHUBNUUBHYHJCEUIQJEAFLWOOMORKZYGACWADNIDUZWMKYZIFAORIQJNIVLMHFYIURRSXYTPOMWRDQJXCNSMUUFSNWKPVACAPAKDMGEZNB");
    msg.query.assign("YSDKKZLKXVUMOSPAPRUVIWPSCMWCKIRZFTCRZKPSXPXGBANRWJGFIJKPEAINUQFHLIHVXFELOYNOVRBDQTUD");
    const signed char tmp_msg_0[] = {-4, 17, -84, -103, -108, 70, -77, 68, -84, 112, -51, -56, 101, -122, -118, 33, -44, -73, -31, -34, 33, 89, -46, 19, 60, 21, 113, -121, 64, -14, 27, -115, -21, 41, 111, -114, 18, -127, -5, 39, 122, 15, 0, 77, 122, 119, -105, -1, 50, -39, -6, -25, 65, -36, 99, 31, 110, 29, -70, -55, 90, -60, -52, 113, -117, -87, -62, -104, -43, 81, 102, 115, 90, -121, 30, 42, -43, -21, 119, -11, 41, -85, 77, -119, 45, -17, -22, -30, 78, -79, -6, 73, -56, 91, -42, 84, -36, -43, -36, -23, -86, 76, 18, -80, 126, -64, 31, 88, -30, 64, 73};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 211U;
    msg.file_data.assign("VBCNURRYOJGYYRENSQDWUHKZCFOALOBBHKGHNZLINXYWDBZDPFCNEHIVBNRHZXUQGZRZUXLFJQNYPJVOXTWGLK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.1468429798058809);
    msg.setSource(30857U);
    msg.setSourceEntity(171U);
    msg.setDestination(3978U);
    msg.setDestinationEntity(114U);
    msg.rid = 37247U;
    msg.host.assign("CUPSFUROHGAHMLBYQGUJIOOAEJOKKSZQPWPNKZEBSWDVVCUIPTWXGIEJOMRQIHHGVWXOAFVPYSMTVWDVGNZERCJLSZXVAVVFLHKYTYZIRA");
    msg.path.assign("DSSJMZITQDAKJSBLSDBBXNKAWTYPHGSPMPOCXDQRDVWNDDFEAWIWIJLCFRLUJBZTXWUFEYZSYLCZGQKQZBIEEQHGRZMHJGFFVMEREUJAWHRMPNTQBCNAMBGHROUOFMGTPDNKVFBUZ");
    msg.query.assign("FZLFEHJSWOXIWJROXXDPKZZBQTGNAOZTUQJINSVMQWFVOOAWYKUIPICQDYUMSSLVPWNIYQFVQNCJHNIRIP");
    const signed char tmp_msg_0[] = {-118, 92, 46, -4, -95, -128, 50, -31, 93, 79, -11, 72, 1, 39, -2, -97, -24, -48, -44, -49, -17, -14, -48, -27, -74, -74, -13, 28, 97, -36, -17, -117, -100, -53, 71, 70, -16, 47, 13, 60, 29, 17, -118, 69, -112, 48, 47, 23, 79, 119, 31, 119, 110, -66, 53, -22, 113, -94, 68, -13, -66, 90, 121, 18, 35, 82, 99, 29, -78, 38, -75, -4, -33, 59, -35, 13, -71, 28, 97, 103, -13, 81, -9, 24, -67};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 99U;
    msg.file_data.assign("YEDLSOOAQTGIDWCSZBCWOCBPIQRFPHIUBIVLEZCRJMMDQWXLVRHACOLCSAQKGJFNTWWMNNHKOMGRSXYPZILAIJGGLERHWLMEPDTVJPVTTRBTBUCNYSRYAEPAHJUDEUNUHKIGEVXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.47356844008528787);
    msg.setSource(25533U);
    msg.setSourceEntity(52U);
    msg.setDestination(11823U);
    msg.setDestinationEntity(118U);
    msg.rid = 14996U;
    msg.response.assign("SBWDYZOWTVYXVTRAAKAA");
    msg.status = 44162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.8807258716410247);
    msg.setSource(35087U);
    msg.setSourceEntity(15U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(175U);
    msg.rid = 19969U;
    msg.response.assign("NZWTOIMDVUKUERCDSDBEQBQLHKPDDFNLPBCKZXCOWZPTSQFFQNSXAANOJKBYKTM");
    msg.status = 56749U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.5952002809276409);
    msg.setSource(662U);
    msg.setSourceEntity(185U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(84U);
    msg.rid = 43308U;
    msg.response.assign("IQQNDRUBJKVMOKDTOENUMIJAZUXFZWAVKERPOSNRHVPEO");
    msg.status = 64673U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.09484566442741127);
    msg.setSource(45587U);
    msg.setSourceEntity(208U);
    msg.setDestination(18357U);
    msg.setDestinationEntity(194U);
    msg.fstype = 152U;
    msg.filename.assign("KRHSJABDQPNQRHZPUREAIAYHTFGGIJBHNWDDPXFWXVVMZEIHGNEOHQLJVRPCXKCXJBXPQOBBPLMKPVHYIETRYQJRFOIKBVIONSBMLZNOHHLCLXEXREJGASFNWDUCJMDOMFUUTSSAKNKYYTTXDLEDYWZNYVKWFMCWWROZMFTVCUZEALSCGNAPDXQWYSU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.4621983016138841);
    msg.setSource(53535U);
    msg.setSourceEntity(32U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(90U);
    msg.fstype = 213U;
    msg.filename.assign("TGURYRZUSLIHGZILRAPEIMATQCCRDKWCPHISNNWTMBZUOGZITIJJAHLSFAGVVXPXKWFKGTZXDHJCSVMVQEOTMLXAANQVDLBJECYBSSQVVDWMKGKFNLHDYBFWAEYPYENUYIQWIPDMQGHQUXAGTFRZKPRXRCPBJUUAJGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.9214460181558847);
    msg.setSource(49582U);
    msg.setSourceEntity(42U);
    msg.setDestination(13960U);
    msg.setDestinationEntity(110U);
    msg.fstype = 113U;
    msg.filename.assign("CQXEBNTNSTWFNINREYFHLNBIAIMEBKLOQIWZWQAXUABGHVVZIMKCVMFCMFZDDWRTBCCEKJATXOFWGDPKPSUDACXEUHXJGKGPLDNYZIPSTEDOGVQJJPPVMZNBZDSHXSOGQFSSDMHRPROTOTGKVCTYMLOYERHMYYICIUYNRYYVTERMNVCPQLQPEUWEZKJZDLLZAUKVGHSJBFAKQQTWMBYFLSJWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryGsmCredit msg;
    msg.setTimeStamp(0.6455475974110332);
    msg.setSource(4297U);
    msg.setSourceEntity(130U);
    msg.setDestination(53666U);
    msg.setDestinationEntity(251U);
    msg.req_id = 14444U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryGsmCredit #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryGsmCredit msg;
    msg.setTimeStamp(0.965525282672883);
    msg.setSource(35554U);
    msg.setSourceEntity(216U);
    msg.setDestination(16192U);
    msg.setDestinationEntity(193U);
    msg.req_id = 20119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryGsmCredit #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryGsmCredit msg;
    msg.setTimeStamp(0.5943040554572436);
    msg.setSource(18256U);
    msg.setSourceEntity(159U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(223U);
    msg.req_id = 26376U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryGsmCredit #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileClassification msg;
    msg.setTimeStamp(0.15210685897451848);
    msg.setSource(20431U);
    msg.setSourceEntity(199U);
    msg.setDestination(41662U);
    msg.setDestinationEntity(40U);
    msg.original_filepath.assign("OKFAYTZPRCBVCNXWTFPJVEGVJVECDGKGQAJXIQVYRBOVTWRFMPAGAPHCSEAXPOUQDFEUVNPZOCGJHLNSNZQZURDIAIEWOIMBISDSFBUSNYXNICALUBNTPNBJHTADUWPSKHVUQSL");
    msg.resized_filepath.assign("MJJNKKFYFAMHNCSWFLIVBAXUJIQYTNKKHTZJCNDTMSTIMYWCBMYQDHIBEZEYGVVPPEFIDABAZUYITOALJYLSCALBBNBQOLP");
    msg.class_prediction.assign("ZPDGWNZYBQHGPBESAOVYXVNOQEUEEZWTJNVCJGLUDJFLQAKQXPSFGAFTLELQAHHPRZKVAVKTTIHVQIAWEMMQRSWNZPOYRHEUZEECCTFUTPWFIIHYXBSJTNEDMJNMJBKCZLDNV");
    msg.confidence = 190U;
    msg.fstype = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileClassification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileClassification msg;
    msg.setTimeStamp(0.31945919803011447);
    msg.setSource(44979U);
    msg.setSourceEntity(9U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(236U);
    msg.original_filepath.assign("HHJXAFPNRMSBVKYURQVPGXAWZOYRLJIKLAJHDZGPDLIJRJGUCAXIUUVFWTECZVBCTNIEXPBWKAQQQWANQQTHNHDNOXFLXCDVNUDEYQOP");
    msg.resized_filepath.assign("LDKWCMEUKHXAHQVRCGZIEEMPAOUTXIVAAVQTVJQPGEGLGWCQTFJZZLIDVEYCKYJHHMBIOPPRSBKBVGWGHGORDJKNFAULZOMSTAAWTDOWFCDQALBXEJEILXNCCTVOPMNBNEFJFMUY");
    msg.class_prediction.assign("DACKZFVEEQYJAHROLPWWTDGIDDAPALQSFVJVGVBYTWCNXSTJDUGPKICCDVYNOZBSJNMOMUOAVRHGMXDNUQGVQFCRZKDBYAXNHPOZMWURKWVSFLLXGNTFTEWIKOXZUPRTTNHBSTCBZWYRSFBVCCZIHRBKDJP");
    msg.confidence = 26U;
    msg.fstype = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileClassification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileClassification msg;
    msg.setTimeStamp(0.26115198901216985);
    msg.setSource(7372U);
    msg.setSourceEntity(76U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(216U);
    msg.original_filepath.assign("ZCVPGBZEHAEAWIKZGZNLBTRQWASGMKPMGYPYUTHPTGCAACRKIONOVSCHRDNWLYKBMQBXSTEFMRRUIJIOBZELRXGFIFDXLXKNEXFWDJMUPEMKICUQPOINVYSPBLTUIAJVRLIPQUTXCSCJYT");
    msg.resized_filepath.assign("ECYVRCBECDWDOTYHZHRTAFCUAGSPMOVFSALYSGKGQYMCIFQXNBJFILUBBSUUWTFPUKJIRIZMWYEFMPTFOAVPAVXZKOYXGQXFYNEAVGSXBCEUQWLHPZXPWCJDYLORBCQWVQJZUMIZLNQGIAOCATMPDIZKZSGHKVAZCDHHYGVKGFKJINNELTWSNEFLEBNRMDRDTNTVXPQXDOQJRLWXJKLRJRVBIMJBNTUDKQHH");
    msg.class_prediction.assign("XZQHSEIMXKYXVCHBAKISDGHRCLKUBZOVELYLJRGILWKKPCZIBNYAHXVDFLHXRFDSEVNKOPVUXBVFBWLTHZVZDSULDUGK");
    msg.confidence = 248U;
    msg.fstype = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileClassification #2", msg == *msg_d);
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
    msg.setTimeStamp(0.25665933186036993);
    msg.setSource(34993U);
    msg.setSourceEntity(54U);
    msg.setDestination(4946U);
    msg.setDestinationEntity(210U);
    msg.name.assign("WKJCEGUGNIAQQKDKZVMMFLAWDSMPTOBGQBTEBKRLCFXGZXSXCRCJJAQCYQTWXIIDLMKRIGRGBOIOMPAEMOZSJSTPFEVXYFGJMYBLYEKLUHFZYTVPYOSUQSQBNAIHHSPNFLOAHLDGAJUZYTQNFXZQKZXGEAPJWRFLJNHHZIMWTAFRNWHJWRTRU");
    msg.value = 169U;

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
    msg.setTimeStamp(0.26002033487531806);
    msg.setSource(5277U);
    msg.setSourceEntity(106U);
    msg.setDestination(32555U);
    msg.setDestinationEntity(209U);
    msg.name.assign("KNDQXLCPCCMYPYVXQLSAGJOARJRXCOHEFNIMDBUWHIMTNTKHSGJUWGJESRUDENZBQDPOELZLTDYVDNGC");
    msg.value = 110U;

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
    msg.setTimeStamp(0.48341824470166195);
    msg.setSource(22168U);
    msg.setSourceEntity(184U);
    msg.setDestination(9727U);
    msg.setDestinationEntity(105U);
    msg.name.assign("QSXPLLQXDYGILAZBSROJSWRLKJWTGXAIRCQHRAOAPRZRFDZZCLTVBKXXVMKWCOYJSDPJHHVWEVSZPNJDEGTUXIRKTEQFIWXBNHSOOANIBEW");
    msg.value = 104U;

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
    msg.setTimeStamp(0.9624860649236705);
    msg.setSource(16380U);
    msg.setSourceEntity(179U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(210U);
    msg.name.assign("TKDWAGXRZNFQTDNOFQLUXBYRQOLWDZSSEVBGAMWHNEDAOXEWKPRNWKWNMDZPLNLBAJWVXZGCZJZILJKTIJXZPGSTYNCEACOECHUYFMVRFBUMSVTOQGNIQJHSKBHFGAMBJIYSQLUQFXPMGQAIODQFCJLPUVYUBRIRUEJCHFPGDGNOHRAZDITRADHVVOJFPNVYIHPTTYWPHBRXUZMWUXBKXKYTVRXSSDPJMZIKFHLLMVOMUQCBYWSEYEKECI");

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
    msg.setTimeStamp(0.03499144925838915);
    msg.setSource(30853U);
    msg.setSourceEntity(77U);
    msg.setDestination(2795U);
    msg.setDestinationEntity(128U);
    msg.name.assign("IHMZFTFKJSGGXARGTDSOCBYSKGVIVARLKPAUMNTNOEQQPULCXNZYJLJEEAAQEPGVHOZDYDSWPTUUBFCEDBCRZUTWWTRZOVJOIMVBKMFIHGQVAZQMRVIXDWLFPXHBRNJDQWYKRBFCICIXKGZDILSTQBRSTXFHHMQCVNRNLSBWYOWSSKDPGYXIJAFBHFHAHZRQTUJPXUMEQMNHNZVMLNENEM");

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
    msg.setTimeStamp(0.3130451348992852);
    msg.setSource(22856U);
    msg.setSourceEntity(195U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(64U);
    msg.name.assign("IFWXLQIJEFKQHQXDCZRWQPJMYHCGKBUEHFXKRIOIIBCDNIVBTZKITDUACDZGRPYPNTDPBDANUGLTEPFSFDURFZJNISQNRGSOWXFJYRMFXYBXPTELLGOXZHVEQEUHAMHQENHEVXYWNRZBBNLLJTOBCDVGATSQWVMZMTVFKWGMUOSAHGCTSLXFUXWIOLJWPHPULKAJGCYQVCUOYRKNDAOKYKBEDSSZYVNVUYSMVAOPJPWAR");

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
    msg.setTimeStamp(0.23866617933408518);
    msg.setSource(9932U);
    msg.setSourceEntity(37U);
    msg.setDestination(28563U);
    msg.setDestinationEntity(137U);
    msg.name.assign("IVUUKBOEEAWCXDOEYZGPLVAXHUVVCVMREGBSTPJDCWWPRYHKUBFNVAFBBRHSLNHDPQKNVIZJJDIBVZINAXGDOXLFBVJTUYYLSZRQPCGHXYRFGAJFERRWYMQYNTHMGMZQEWGDFIPJGMMSWTDZUJHSZQ");
    msg.value = 6U;

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
    msg.setTimeStamp(0.24281608419604683);
    msg.setSource(15486U);
    msg.setSourceEntity(2U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(200U);
    msg.name.assign("JMVCMLLQVWHEPDANFPEFVDOXPCMEVJZZGRQYFTCBZLUUGR");
    msg.value = 215U;

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
    msg.setTimeStamp(0.1438513434608173);
    msg.setSource(7337U);
    msg.setSourceEntity(211U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(114U);
    msg.name.assign("PHMWQKIKUHOTVSRUZACNDUYUSYMCOQLPUJSPKBRZVSDRTANHDLUUGTHIGFUBQOIOOYJCCNFKPNNAQF");
    msg.value = 225U;

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
    msg.setTimeStamp(0.5783896544831558);
    msg.setSource(3805U);
    msg.setSourceEntity(221U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8825106893924516;

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
    msg.setTimeStamp(0.08765681979215523);
    msg.setSource(191U);
    msg.setSourceEntity(183U);
    msg.setDestination(5220U);
    msg.setDestinationEntity(53U);
    msg.value = 0.020101720186681882;

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
    msg.setTimeStamp(0.9435766778488607);
    msg.setSource(2829U);
    msg.setSourceEntity(117U);
    msg.setDestination(11847U);
    msg.setDestinationEntity(50U);
    msg.value = 0.2260336687261424;

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
    msg.setTimeStamp(0.33409861705690447);
    msg.setSource(58790U);
    msg.setSourceEntity(104U);
    msg.setDestination(49139U);
    msg.setDestinationEntity(137U);
    msg.value = 0.258258283226774;

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
    msg.setTimeStamp(0.9999779142128059);
    msg.setSource(43977U);
    msg.setSourceEntity(90U);
    msg.setDestination(34304U);
    msg.setDestinationEntity(151U);
    msg.value = 0.21998954144531557;

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
    msg.setTimeStamp(0.520058715579436);
    msg.setSource(19907U);
    msg.setSourceEntity(206U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(216U);
    msg.value = 0.41393278447725557;

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
    msg.setTimeStamp(0.5659824838994287);
    msg.setSource(26565U);
    msg.setSourceEntity(181U);
    msg.setDestination(33668U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8207824122144046;

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
    msg.setTimeStamp(0.5688023889988874);
    msg.setSource(48137U);
    msg.setSourceEntity(180U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8965351203638723;

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
    msg.setTimeStamp(0.8348533330754195);
    msg.setSource(59662U);
    msg.setSourceEntity(226U);
    msg.setDestination(48400U);
    msg.setDestinationEntity(137U);
    msg.value = 0.7625544948956406;

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
    msg.setTimeStamp(0.7554796219425708);
    msg.setSource(18466U);
    msg.setSourceEntity(221U);
    msg.setDestination(134U);
    msg.setDestinationEntity(114U);
    msg.restriction = 135U;
    msg.reason.assign("DOMHFSWDRJQDVZJYAUCLJIJLRBXAYWGQBXPOCCATVZBZDLANBWDFSUOSEPIMJSZUHAXKVGTNANAHTOBSHMBKYQUWHMADNRKMEJOAGAZSNEKQIKUHJIOKPFTFHRCEMTORILZULLZTPDTCZLK");

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
    msg.setTimeStamp(0.048678830051082644);
    msg.setSource(46460U);
    msg.setSourceEntity(169U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(86U);
    msg.restriction = 73U;
    msg.reason.assign("ADAJDVIBMRZCONRDLZPWTAWZTXUGHNLFXYQIGIDXFUQRFWWMSSCVUAOXXYJ");

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
    msg.setTimeStamp(0.2656591480883025);
    msg.setSource(6992U);
    msg.setSourceEntity(94U);
    msg.setDestination(924U);
    msg.setDestinationEntity(44U);
    msg.restriction = 178U;
    msg.reason.assign("YNMPLYCEYOXLOCHKCBFBQCVEGNIOORBHDQBWUUQBUENYVIJCWKMBOFZEGZHSWMUFQXAHRJYYGTDKTBMWJYOODXEEZESGWAHVSFSJEWUDAFSQZLJPYTALRGSTPNIPEALGFRTMFYTPRJPVZZSFRCNQKQAOFJXCMIVSNWVAJGKP");

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

  return test.getReturnValue();
}
