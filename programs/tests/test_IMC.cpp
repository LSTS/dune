//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 0f425402b735f36a64d579da7bb4baf3                            *
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
    msg.setTimeStamp(0.5817737193741326);
    msg.setSource(46916U);
    msg.setSourceEntity(103U);
    msg.setDestination(43300U);
    msg.setDestinationEntity(211U);
    msg.state = 61U;
    msg.flags = 78U;
    msg.description.assign("XABZDQJTNWEQOWUPMDVRKQOAHGEGZXUCIJHZUYHQAFQRLYCUFJIFXFRAZWVSAMXBYAFEIKMRJTFNCDVUTBHWPYSPQPBJMBDOYDJZPDJOXUBF");

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
    msg.setTimeStamp(0.9859596086763418);
    msg.setSource(49480U);
    msg.setSourceEntity(109U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(86U);
    msg.state = 242U;
    msg.flags = 181U;
    msg.description.assign("NKCLTHEMLMQVJGRKZCYWQEIZUFXJKXKSNALEDEZBDFIFPELPPKCWVHDHTQYYFGNUYQEQMQELGJAGORRSOOUBNTSUDNZGZUTXIWWXUNOQUMVHFKNDPETDJAMSBSVIOYDSDHAHOMYMWMRLGHXPKSTVBPAOCZNPZPPAJEITYHCYQMCKCSLJSWGIGJJTBXIAZWAIXVUNWRDXKCQAHXVOGXFWCYV");

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
    msg.setTimeStamp(0.40310540914406123);
    msg.setSource(30480U);
    msg.setSourceEntity(37U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(9U);
    msg.state = 160U;
    msg.flags = 242U;
    msg.description.assign("VTPMSZXLTIBILOJULRKOFFKQNCBLEKGGFLFPXEFEMUKJNLSANPTCEJYJIBPTHIFTGRZOWBGYVHFGZOU");

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
    msg.setTimeStamp(0.9350393715079717);
    msg.setSource(13738U);
    msg.setSourceEntity(249U);
    msg.setDestination(60171U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.6996190695769035);
    msg.setSource(16626U);
    msg.setSourceEntity(42U);
    msg.setDestination(39063U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.5096143852582605);
    msg.setSource(7626U);
    msg.setSourceEntity(194U);
    msg.setDestination(46269U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.3214153935669918);
    msg.setSource(60683U);
    msg.setSourceEntity(23U);
    msg.setDestination(46155U);
    msg.setDestinationEntity(225U);
    msg.id = 84U;
    msg.label.assign("OGVVIFOERGYFSYFXCJSZAMKVOMJWLUZQIVTABSODHTJVNJXJLXQBGDDYMNUAMEGOPSLNESHTFCJKTGXWEZBDABEZHANSCGZGNFVPWKONFNOTYBUBIORERMKJUBPZWEUHGUQHAIDDSRCPPUADSWCPEXNKRWLRHQRZAWUNXDUTHDQMNCAYFKZUIKYCEPQVYWTMLLYOILLHKKXIJRGTBXXHFZYCHORITDFQGPWMJVL");
    msg.component.assign("DWNAMJCAIAXZOJBCTCGVITFRJOJFCZLQEPDDALWOWRECPIZHFQSLRZYSUWFNKGVTYYLBZIMJECNSVOTTOLCKGOMNDBAEBYTQJWGXUWFDKODJSBGTEBUVXRIKYKSWPGDVZBEMDSRXJQQXPWGPMVLUPUKRCAMHRXCJSGWIXLASYNGXNYMIZWRKZHQBLDVYIHRYDUIHVFEHNLTKPNRHETEOFYQMKAPAONFZHPMBUFZJHSIOAEMGFQUNUQTQHKLVV");
    msg.act_time = 43255U;
    msg.deact_time = 37111U;

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
    msg.setTimeStamp(0.48137303828042255);
    msg.setSource(21693U);
    msg.setSourceEntity(133U);
    msg.setDestination(50415U);
    msg.setDestinationEntity(36U);
    msg.id = 205U;
    msg.label.assign("UAZMLKEPFLOHDPTHOYTGGALPNBAKIYFRVOZJRUGJXXMDNWRJ");
    msg.component.assign("VMFPXSTMAKIAIXPWLMDGLVQRDNBOYCOFHYREAVPJFEMHBIJQRQLBQNNUOPRMUNZPSLDNGRQORHTFFIVJOZBVHMXGASGBCRTDJFJBJKOKNKGUSZACDWEFTDPLTPIZCHKWBGUQFYRKDJMUEZJEMERUGMKVNEXEVLRXYOSLSTBWBXWCDMYTZHHASFAXXTSJQNQLXGUWYPSPYJOZAUDCWNZIBVONQ");
    msg.act_time = 2200U;
    msg.deact_time = 48612U;

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
    msg.setTimeStamp(0.894372646156149);
    msg.setSource(46021U);
    msg.setSourceEntity(96U);
    msg.setDestination(64067U);
    msg.setDestinationEntity(206U);
    msg.id = 149U;
    msg.label.assign("EAUOJYBJHBNUBIIXHLTESAUJUAMYVJFZRSXINHRUSNYEXGAPA");
    msg.component.assign("QUDHUBVTYCMVTEROBLGXNPXWRDLGQBNKIXKVJCUPXQGLNLUSYSZPWKGTZSNXHBZIJTAGCUVLXFIKZTDQRMWZMSYNWNGTGWEZJNIBCBRKDDHACFHE");
    msg.act_time = 58808U;
    msg.deact_time = 12721U;

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
    msg.setTimeStamp(0.7368659216190047);
    msg.setSource(23572U);
    msg.setSourceEntity(66U);
    msg.setDestination(28038U);
    msg.setDestinationEntity(81U);
    msg.id = 211U;

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
    msg.setTimeStamp(0.790870075390898);
    msg.setSource(37110U);
    msg.setSourceEntity(170U);
    msg.setDestination(52136U);
    msg.setDestinationEntity(146U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.27185583775788413);
    msg.setSource(29012U);
    msg.setSourceEntity(76U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(193U);
    msg.id = 211U;

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
    msg.setTimeStamp(0.66215930869617);
    msg.setSource(11985U);
    msg.setSourceEntity(72U);
    msg.setDestination(2994U);
    msg.setDestinationEntity(201U);
    msg.op = 104U;
    msg.list.assign("VBSQNKSFOBRVTXDVADPMOUSXYQCYJPXBEZWSWQWKAKJPFKDFDQEIRTRMLZFAHDHJCZLJVZSNWSDNIKDTCHRCDYL");

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
    msg.setTimeStamp(0.00699200052090776);
    msg.setSource(47165U);
    msg.setSourceEntity(138U);
    msg.setDestination(49726U);
    msg.setDestinationEntity(170U);
    msg.op = 185U;
    msg.list.assign("JUZKHJHINAUHEFAMLRRWVXJUILYPZVUPDCOFRKCETRVUGVQKDVPVPGFVPKHDBTZLVETOUISGXDGGTSWMISOTQNWBHMFTQXJGKLAHQDMKCYUEIWOQBNYSCLIZOURENCHGPLYQWEBNGERFEAJUYZSASHABREKIHYKQLJCSLXBWJTDTXNNGSZPKSAYVDDFHPMLBNCBCTYWWOWMOYMJBTADOEJSRNXMF");

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
    msg.setTimeStamp(0.19805216761322908);
    msg.setSource(58121U);
    msg.setSourceEntity(59U);
    msg.setDestination(9671U);
    msg.setDestinationEntity(25U);
    msg.op = 154U;
    msg.list.assign("SYALVCWRABMGRPHHNIDVHWPLFBAGKERBTPLXMJIFROWECYDWTJIXOSVQEQNWOIIDVPUQWGZYUBSWLBMNMTDHBQMIKHTICAZKCYREHYVHDLCUNQWPFYXNLQBSDRYNQKVNGUWAIPDLCVE");

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
    msg.setTimeStamp(0.6272795091725364);
    msg.setSource(3212U);
    msg.setSourceEntity(27U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(187U);
    msg.value = 47U;

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
    msg.setTimeStamp(0.6485481957643597);
    msg.setSource(32879U);
    msg.setSourceEntity(85U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(239U);
    msg.value = 162U;

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
    msg.setTimeStamp(0.38745040481756843);
    msg.setSource(59613U);
    msg.setSourceEntity(51U);
    msg.setDestination(65108U);
    msg.setDestinationEntity(95U);
    msg.value = 120U;

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
    msg.setTimeStamp(0.08289197133651183);
    msg.setSource(43574U);
    msg.setSourceEntity(152U);
    msg.setDestination(13214U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("OPOJBVYPRKQVRQQFYIDYGAWASPGTCASSTTEPFCTBNVQMVBLJUEBGVNGTNFYAJDYLSMJTEUORTGIGZCXMKVEIPISWLKBQUROBKNMVOXLAJWCMWDMJBRLACDHBUQQXKYEFLGUQCFSAERNTAUX");
    msg.message_id = 59362U;

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
    msg.setTimeStamp(0.5824598390658435);
    msg.setSource(45606U);
    msg.setSourceEntity(95U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(97U);
    msg.consumer.assign("SQHKOYPCPFJEWDHTRAIIFPCJJC");
    msg.message_id = 43957U;

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
    msg.setTimeStamp(0.1348166299418465);
    msg.setSource(33533U);
    msg.setSourceEntity(138U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(115U);
    msg.consumer.assign("HSJSHOQDGBYDECDOTXTPBHLRSEEAFBGDYYDUYKDSLLAGMIYFSTXWXCLRDJQFHVLUEACYBVBKVVOGJQXOXVLJSNWAFPZZNZLIRHCQUIECSLGFLVYWYYFK");
    msg.message_id = 51954U;

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
    msg.setTimeStamp(0.3373981934033079);
    msg.setSource(43151U);
    msg.setSourceEntity(217U);
    msg.setDestination(48455U);
    msg.setDestinationEntity(94U);
    msg.type = 22U;

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
    msg.setTimeStamp(0.94627254035139);
    msg.setSource(29651U);
    msg.setSourceEntity(130U);
    msg.setDestination(63459U);
    msg.setDestinationEntity(109U);
    msg.type = 130U;

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
    msg.setTimeStamp(0.5769239414099852);
    msg.setSource(26150U);
    msg.setSourceEntity(99U);
    msg.setDestination(50218U);
    msg.setDestinationEntity(234U);
    msg.type = 62U;

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
    msg.setTimeStamp(0.7421824721447448);
    msg.setSource(2338U);
    msg.setSourceEntity(41U);
    msg.setDestination(34469U);
    msg.setDestinationEntity(34U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.4713219142684182);
    msg.setSource(42045U);
    msg.setSourceEntity(254U);
    msg.setDestination(12690U);
    msg.setDestinationEntity(86U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.32443906569286785);
    msg.setSource(60319U);
    msg.setSourceEntity(114U);
    msg.setDestination(60721U);
    msg.setDestinationEntity(157U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.06466676243651104);
    msg.setSource(2015U);
    msg.setSourceEntity(95U);
    msg.setDestination(54570U);
    msg.setDestinationEntity(176U);
    msg.total_steps = 166U;
    msg.step_number = 165U;
    msg.step.assign("VNUTMBMAHYGJHHOBYNBQJGMDLTCFKBOJYQOEQIDYFGLTPFRLVWTSZYPLGSBFGAKBHRMENOIPQTOWUGIZPFIUWESYSDRPOIOCMTDPJDRQVRUYNQWGGKADQJKLUOPTXRKUWFDLSBCIZUGHWQIAUZWNZVLXDEFHDFWNNTNHCRKALEMRVI");
    msg.flags = 216U;

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
    msg.setTimeStamp(0.7660524085594497);
    msg.setSource(47642U);
    msg.setSourceEntity(29U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(82U);
    msg.total_steps = 108U;
    msg.step_number = 237U;
    msg.step.assign("FLWLFVZYONKDDEPAQNNDWWXGCQANTERUAHVNRTPESSPUAGYEHDYDXAWFNURDLPKQYSJBIRGBVKEHQWCTVVBPMXTTMQLYZAZXEFKMIFMHKRFJGPEHGTSDNOYGYZEVBGZREXOLLFFTKILPHOCCPLAXHOZUOXUAPMWOILJZGJKVWRGDFEWSBCDCISBZAUZVXTDLRRQIUNCSSAMMKOJJPQHBIWIOVVKIOXUJBCMHUGCJZIXJNMQYQFYSTSJBTRHK");
    msg.flags = 25U;

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
    msg.setTimeStamp(0.7386595115768967);
    msg.setSource(55439U);
    msg.setSourceEntity(95U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(190U);
    msg.total_steps = 32U;
    msg.step_number = 218U;
    msg.step.assign("BTLHGYCICFVKPEDPSHQFWVCGYDHIAKHMVJABPZEULFSWWFFIODORRGXLFXRMQXTGZIQIXNTXJCQGRHQDNMEJHYOWHWEBGUVCKBNBPKEMAAFB");
    msg.flags = 52U;

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
    msg.setTimeStamp(0.09850613058829683);
    msg.setSource(6355U);
    msg.setSourceEntity(68U);
    msg.setDestination(34726U);
    msg.setDestinationEntity(208U);
    msg.state = 53U;
    msg.error.assign("NZTMFJBDPGMNLZCEZVNLJZVAPQWGBIMYYQWIPXAGWLHYWGXJMLHYFXLRUYJDSSCKHVGMCDAELFUOTU");

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
    msg.setTimeStamp(0.06924200223334243);
    msg.setSource(42403U);
    msg.setSourceEntity(17U);
    msg.setDestination(12574U);
    msg.setDestinationEntity(1U);
    msg.state = 29U;
    msg.error.assign("APEBPHYKYQRTLHECOOUINKZRDERIDRUJBSNVHAYIEIUAAJHNZFOEEBXEJZEKMUACYGTQIIXHAXOSSJMTMGHSXCJOKYT");

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
    msg.setTimeStamp(0.138407929503244);
    msg.setSource(54534U);
    msg.setSourceEntity(74U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(37U);
    msg.state = 142U;
    msg.error.assign("YMWSPXATRQIMMVYSOWFZTYJBGEPGEOCKZUJKGDBVBVBTLPKGZYXNDANHLEPJZFHBMGHCIEYLNWYSAZQEMKCDWGYDOTXNOQJKHBTEPTOIJLMQSOJKUAQFGSVBMSDLUIREBXHOIBLJDUHQXVRNJVTQIWCAOOWFSCIHTXNIXYQUTASQZSRUPDQXKAESWDFRULIZMVJXCFNWWCGINMHPNACGUZAOEGRUPHPRLHDFRCBKKYZVRPEZFTAXDFVJWVKC");

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
    msg.setTimeStamp(0.6986421848338126);
    msg.setSource(57936U);
    msg.setSourceEntity(133U);
    msg.setDestination(1475U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.5282218591267065);
    msg.setSource(31810U);
    msg.setSourceEntity(231U);
    msg.setDestination(57994U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.6722485222763531);
    msg.setSource(3920U);
    msg.setSourceEntity(245U);
    msg.setDestination(8020U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.8435944293689923);
    msg.setSource(31571U);
    msg.setSourceEntity(23U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(250U);
    msg.op = 14U;
    msg.speed_min = 0.9632046917967989;
    msg.speed_max = 0.15863246106196693;
    msg.long_accel = 0.23551681468721297;
    msg.alt_max_msl = 0.2572357874456055;
    msg.dive_fraction_max = 0.2339908470210852;
    msg.climb_fraction_max = 0.27404047092451544;
    msg.bank_max = 0.40082550233582503;
    msg.p_max = 0.7839050425255737;
    msg.pitch_min = 0.8011341131755723;
    msg.pitch_max = 0.03977231667921821;
    msg.q_max = 0.4226607038731601;
    msg.g_min = 0.5533795263919449;
    msg.g_max = 0.8375447591289468;
    msg.g_lat_max = 0.35408138969338365;
    msg.rpm_min = 0.9626826492446106;
    msg.rpm_max = 0.4760943843856539;
    msg.rpm_rate_max = 0.5159681768601801;

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
    msg.setTimeStamp(0.625502151548203);
    msg.setSource(54282U);
    msg.setSourceEntity(49U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(37U);
    msg.op = 49U;
    msg.speed_min = 0.8735185354655481;
    msg.speed_max = 0.21396599234898306;
    msg.long_accel = 0.5855371814891346;
    msg.alt_max_msl = 0.73022528654633;
    msg.dive_fraction_max = 0.8203335377994908;
    msg.climb_fraction_max = 0.9217379202982594;
    msg.bank_max = 0.5473038941074057;
    msg.p_max = 0.7249360531150633;
    msg.pitch_min = 0.19566765901784644;
    msg.pitch_max = 0.3112461492687425;
    msg.q_max = 0.09127028518202052;
    msg.g_min = 0.6169865171313633;
    msg.g_max = 0.8687826571791711;
    msg.g_lat_max = 0.8939802254490511;
    msg.rpm_min = 0.013922766196359015;
    msg.rpm_max = 0.7787227983309275;
    msg.rpm_rate_max = 0.7873607881297945;

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
    msg.setTimeStamp(0.8318887822534093);
    msg.setSource(33229U);
    msg.setSourceEntity(38U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(204U);
    msg.op = 83U;
    msg.speed_min = 0.5538121138652721;
    msg.speed_max = 0.0027572854438003835;
    msg.long_accel = 0.3164456821333693;
    msg.alt_max_msl = 0.6389527812317277;
    msg.dive_fraction_max = 0.99188678835884;
    msg.climb_fraction_max = 0.0035214438875014187;
    msg.bank_max = 0.9161301067689046;
    msg.p_max = 0.8724455594755403;
    msg.pitch_min = 0.5409119087272992;
    msg.pitch_max = 0.621465289769884;
    msg.q_max = 0.782199289515998;
    msg.g_min = 0.17220586074420952;
    msg.g_max = 0.6944538757409103;
    msg.g_lat_max = 0.4851609437815235;
    msg.rpm_min = 0.6548001162020247;
    msg.rpm_max = 0.5705796817273833;
    msg.rpm_rate_max = 0.11113940488144247;

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
    msg.setTimeStamp(0.09831617952846783);
    msg.setSource(9388U);
    msg.setSourceEntity(111U);
    msg.setDestination(29643U);
    msg.setDestinationEntity(40U);
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 47807U;
    tmp_msg_0.x = 0.22645920445122825;
    tmp_msg_0.y = 0.48849423933943936;
    tmp_msg_0.z = 0.05252384869285609;
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
    msg.setTimeStamp(0.026133720052678333);
    msg.setSource(34336U);
    msg.setSourceEntity(64U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.007304676837776913);
    msg.setSource(24483U);
    msg.setSourceEntity(52U);
    msg.setDestination(1467U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.4175666694359872);
    msg.setSource(38422U);
    msg.setSourceEntity(225U);
    msg.setDestination(41112U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.016138182798323686;
    msg.lon = 0.5521252182129349;
    msg.height = 0.7608981521732066;
    msg.x = 0.4018673032942274;
    msg.y = 0.06202450995732289;
    msg.z = 0.9354458761739118;
    msg.phi = 0.8661333044513816;
    msg.theta = 0.8027373891549058;
    msg.psi = 0.720326394090798;
    msg.u = 0.6889706073388485;
    msg.v = 0.5208529426666679;
    msg.w = 0.062227905791393145;
    msg.p = 0.4063031039540932;
    msg.q = 0.3763866688410089;
    msg.r = 0.660574637314458;
    msg.svx = 0.9334546552607185;
    msg.svy = 0.516061366579993;
    msg.svz = 0.09307330249237677;

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
    msg.setTimeStamp(0.8901002456083656);
    msg.setSource(13607U);
    msg.setSourceEntity(179U);
    msg.setDestination(34588U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.7696135382820941;
    msg.lon = 0.032418609946401444;
    msg.height = 0.7281127798561918;
    msg.x = 0.6908686378180979;
    msg.y = 0.3217232168476747;
    msg.z = 0.12395140017653206;
    msg.phi = 0.4545559196063168;
    msg.theta = 0.7425464219876722;
    msg.psi = 0.5414320622305017;
    msg.u = 0.6690602098816613;
    msg.v = 0.7658469185106173;
    msg.w = 0.0918089964718668;
    msg.p = 0.7769159936205925;
    msg.q = 0.05673737457279793;
    msg.r = 0.7271899354581108;
    msg.svx = 0.04823923945604702;
    msg.svy = 0.25603275017217975;
    msg.svz = 0.5332394541701294;

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
    msg.setTimeStamp(0.6771465255878283);
    msg.setSource(14923U);
    msg.setSourceEntity(82U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.6614949869847906;
    msg.lon = 0.8711256153146187;
    msg.height = 0.5457763381656546;
    msg.x = 0.8517254966611064;
    msg.y = 0.5308290026020461;
    msg.z = 0.9657125133611385;
    msg.phi = 0.9883516843683586;
    msg.theta = 0.9415734140599634;
    msg.psi = 0.19076425825622711;
    msg.u = 0.8388810411832502;
    msg.v = 0.04015670587312781;
    msg.w = 0.9520352656564522;
    msg.p = 0.9245153932870328;
    msg.q = 0.8523484101568696;
    msg.r = 0.9909683109400763;
    msg.svx = 0.23967274358252544;
    msg.svy = 0.5794620486605891;
    msg.svz = 0.598643019805661;

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
    msg.setTimeStamp(0.01871145409277486);
    msg.setSource(4253U);
    msg.setSourceEntity(202U);
    msg.setDestination(29242U);
    msg.setDestinationEntity(243U);
    msg.op = 214U;
    msg.entities.assign("NJGAPYBYBGNHQKLZTLIFHMYYPWRUDXSCEUYAQZVEMBRHSPRFADUSMVJUHQMFXQGZCNQUEULEIUCBFILCKOADSWJMJKTCGGPPYXOMGHFWNPRXPKVYJIOEONBUCGFGNLRIRXWEUUKADXBHBZSQHRXWBRS");

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
    msg.setTimeStamp(0.1183371702863546);
    msg.setSource(53482U);
    msg.setSourceEntity(99U);
    msg.setDestination(57966U);
    msg.setDestinationEntity(15U);
    msg.op = 80U;
    msg.entities.assign("HLYVFKCZFEUBRKOHTPYWIDFQGYSMHUXICHKVOLTAYVIREPCTZMFDJDDFEYMJDYQAIHFGONNGQRPLDTEWNLAIPJEYJURVOZJNFCKPQMCEJLOERYQWKVBNGEXXQSMJMMQGSDNMWKZCAJVWUGSFAGIUXWABFVSIUWNHCPBUXPBADTYHVOZKPMUBBSHE");

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
    msg.setTimeStamp(0.9702408454941421);
    msg.setSource(29581U);
    msg.setSourceEntity(166U);
    msg.setDestination(30799U);
    msg.setDestinationEntity(70U);
    msg.op = 132U;
    msg.entities.assign("QNWWNXCMKEWEGSXFBHOTFPYTKSRYKGZSQXXLQUQHIZCOBASXTUGPXECSIUJOTWAPEUYPFQIGQTLIBXFOEERLFHVLLMMMYWGLUBSCJZAOJALJRVKGLAGJPHQSMSLYAPHGCNUDVITSRDZEOIQNFZODACHUHYKZUIBNVPNEK");

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
    msg.setTimeStamp(0.9789908302500878);
    msg.setSource(51816U);
    msg.setSourceEntity(133U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(52U);
    msg.type = 196U;
    msg.speed = 30252U;
    const signed char tmp_msg_0[] = {66, -95, 126, 33, -6, 108, -34, -62, -111, 95, 103, 39, 26, -7, 49, -13, 60, 108, -13, 82, 42, 112, -119, -80, 126, 46, -121, -64, 90, -107, 59, 71, 63, -100, 50, 101, -68, -22, 98, 121, -107, 45, -50, 52, -78, 11, -46, 12, 84, 47, -44, -102, 100, -22, -55, 91, -20, -89, -69, 65, -79, 117, -18, 65, -74, -116, 47, 2, 93, 78, 79, -3, 47, -105, -53, 120, -53, -6, 8, -26, 110, 60, 95, -2, 24, -44, 89, -97, 115, -122, -14, -93, -119, -118, 124, 121, -122, 30, 114, -98, -73, 117, 34, 82, 110, 5, 85, 59, 8, 114, 88, 60, -14, 95, -120, -13, 27, 63, -69, -11, 104, -120, 16, 100, 14, 91, -72, 9, 66, 35, -79, -90, -7, -127, -38, 34, 46, -103, -106, 73, 21, -117, 18, -56, 35, -55, 38, 80, -18, 123, 100, -70, -92, 47, 120, 99, -101, 85, -105, 59, 0, -49, -92, -100, -112, 4, -84, 31, -18, 104, 45, -97, -63, -29, 105, -111, -86, 116, 82, -113, 45, 123, 71, -51, -8, -63, 37, 7, -36, -42, -59, 61, -41, -97, -14, -38, -93, -11, -62, 124, 77, 96, -115, -81, -102, 11, 0, 78, 27, -49, -77, -91, 72, 6, -17, 25, -29, 98, -48, -67, -116, 62, 60, -56, 37, -8, 19, 108, 60, -98, -10, 70, -79, -91, 119, 66, 60, 30, 42, -6, 47, 53, -107, 91, -89, 62, -45, -52, 51, 1, 21, 9, 53};
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
    msg.setTimeStamp(0.4524101497850227);
    msg.setSource(36744U);
    msg.setSourceEntity(150U);
    msg.setDestination(17837U);
    msg.setDestinationEntity(200U);
    msg.type = 145U;
    msg.speed = 22848U;
    const signed char tmp_msg_0[] = {-2, 25, 17, -59, -9, -4, -93, -67, 44, -7, 51, 119, -52, 41, -82, -89, -55, 16, -14, -86, 50, -57, -112, 34, -36, -67, 89, -88, 29, -54, 33, 0, -57, 15, 81, -86, -96, 119, 1, -81, 17, -57, 68, -3, 42, -38, 99, 27, 21, -42, -23, 115, 1, -32, 0, -73, -54, -121, -85, -121, 74, 44, 4, 0, -24, -6, -90, 35, 2, -92, -93, -118, -114, -32, -19, 59, 56, 31, 23, 74, 99, 26, 90, 91, 85, -70, 83, -88, 31, -93, -53, -100, 34, -115, 12, -32, 6, -4, -56, -114, -107, 42, -9, -11, -31, 61, -99, -76, 84, 23, 43, -49, -36, -76, 11, -91, 36, -94, 113, 13, -121, -35, 88, 107, 125, -125, 17, 99, -125, 92, 10, 62, 88, 83, 95, 101, -4, 78, 98, 63, 123, -120, 69, 67, 79, -116, -36, 124, 28, -22, 34, 20, -59, 53, -36, 69, -110, -22, -49, -3, -4, -112, -100, 106, -60, 13, 66, -3, -37, 76, -43, -101, -44, -7};
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
    msg.setTimeStamp(0.827027357855436);
    msg.setSource(54765U);
    msg.setSourceEntity(114U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(66U);
    msg.type = 62U;
    msg.speed = 298U;
    const signed char tmp_msg_0[] = {-102, 59, 57, -44, -21, -12, -3, -125, -122, -54, 107, -23, -113, -91, 88, 39, 29, -70, 115, 37, 96, 52, 109, 15, 95, 56, -40, -40, 106, 77, 90, 83, -106, 3, 22, -2, -34, -18, -81, 58, 99, 126, -7, -54, 97, -61, 64, -9, -68, 69, 76, -60, 67, 108, -43, 123, 87, 94, -1, 97, -58, 115, 97, 98, -106, 62, 103, -18, -76, 40, -61, 123, 96, -53, -93, 32, 25, -13, 109, -58};
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
    msg.setTimeStamp(0.9973411555773476);
    msg.setSource(45966U);
    msg.setSourceEntity(180U);
    msg.setDestination(27021U);
    msg.setDestinationEntity(229U);
    msg.op = 169U;
    msg.tas2acc_pgain = 0.4654679438216621;
    msg.bank2p_pgain = 0.7263186886520872;

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
    msg.setTimeStamp(0.13283742964526457);
    msg.setSource(6340U);
    msg.setSourceEntity(247U);
    msg.setDestination(11615U);
    msg.setDestinationEntity(32U);
    msg.op = 53U;
    msg.tas2acc_pgain = 0.38886535352665386;
    msg.bank2p_pgain = 0.07058295607509413;

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
    msg.setTimeStamp(0.12073776437766615);
    msg.setSource(43417U);
    msg.setSourceEntity(46U);
    msg.setDestination(33569U);
    msg.setDestinationEntity(209U);
    msg.op = 166U;
    msg.tas2acc_pgain = 0.20182081875072444;
    msg.bank2p_pgain = 0.9748893203946627;

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
    msg.setTimeStamp(0.24994849705495914);
    msg.setSource(39908U);
    msg.setSourceEntity(134U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(222U);
    msg.available = 1958967582U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.9691174233506368);
    msg.setSource(21464U);
    msg.setSourceEntity(77U);
    msg.setDestination(7673U);
    msg.setDestinationEntity(219U);
    msg.available = 3831006376U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.6168232944257755);
    msg.setSource(3369U);
    msg.setSourceEntity(50U);
    msg.setDestination(42900U);
    msg.setDestinationEntity(65U);
    msg.available = 2885140228U;
    msg.value = 114U;

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
    msg.setTimeStamp(0.41241228711669387);
    msg.setSource(33383U);
    msg.setSourceEntity(110U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(150U);
    msg.op = 85U;
    msg.snapshot.assign("ZJJBKIYFFGMRZXWZDRHJUAYUYOIIPCWRBQQXTFLDAXLZAFHNDDYGPILGKBZIHHORUSAIQAEWTFVDTXDVZXOOCLPBLXYWZRRAMEPJGTUAAOCYFKRFHSUSWJMGWEJTGBDQBCLBONFVTUIPYWQEEEKNQFQMVZKSMM");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.7516506963545743;
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
    msg.setTimeStamp(0.08769390847732639);
    msg.setSource(41762U);
    msg.setSourceEntity(63U);
    msg.setDestination(49544U);
    msg.setDestinationEntity(66U);
    msg.op = 73U;
    msg.snapshot.assign("WENATDCMZWIGTHFXMOMWURMUXBBZHOFXALMWLILLPNIYFMYUPIVGDHAGOEQEQZWJSSCCCFCRPKQBHICWRGUQGUOKOSOJERLHTISKJNCEAAXOPCQPNHBHJWYUPSULHKVVSIOCMFREJGHDVDSKTBZAEXAXZEIFGLQUPKTPPYOZSTDJDTMIVBWBJYRFVKVVUBBATVSQAYHGDWIZRTRYRAXELKZVGMDCEXNZZJXSM");
    IMC::AcousticMessage tmp_msg_0;
    IMC::AcousticMessage tmp_tmp_msg_0_0;
    IMC::DmsDetection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.ch01 = 0.3640742134586188;
    tmp_tmp_tmp_msg_0_0_0.ch02 = 0.5072919257663303;
    tmp_tmp_tmp_msg_0_0_0.ch03 = 0.12319356670645532;
    tmp_tmp_tmp_msg_0_0_0.ch04 = 0.619921518675661;
    tmp_tmp_tmp_msg_0_0_0.ch05 = 0.34700837412916485;
    tmp_tmp_tmp_msg_0_0_0.ch06 = 0.5235536634751858;
    tmp_tmp_tmp_msg_0_0_0.ch07 = 0.2444476975258546;
    tmp_tmp_tmp_msg_0_0_0.ch08 = 0.033548758494103104;
    tmp_tmp_tmp_msg_0_0_0.ch09 = 0.7894085718035747;
    tmp_tmp_tmp_msg_0_0_0.ch10 = 0.8693503128948493;
    tmp_tmp_tmp_msg_0_0_0.ch11 = 0.7613612371429342;
    tmp_tmp_tmp_msg_0_0_0.ch12 = 0.1475235395849963;
    tmp_tmp_tmp_msg_0_0_0.ch13 = 0.2298851214853097;
    tmp_tmp_tmp_msg_0_0_0.ch14 = 0.6460502137573151;
    tmp_tmp_tmp_msg_0_0_0.ch15 = 0.18418436804148786;
    tmp_tmp_tmp_msg_0_0_0.ch16 = 0.30601757692038734;
    tmp_tmp_msg_0_0.message.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.5615807279576449);
    msg.setSource(29162U);
    msg.setSourceEntity(106U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(234U);
    msg.op = 97U;
    msg.snapshot.assign("JLTBEJQMTMGHBCHMNLXVUNJQCDPUSRNDHLPJRNXZJMRWYQUIJNPCVORCUXYBGFJDGQKMWYETQBCFYSTZYDRUOKVRLDBATXXKYCUXEQOOHYZJQINBZOKIKZMOFZQOYIPRWSMBQHLCDOQWWLGDLCGVET");
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.07687831104035014;
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
    msg.setTimeStamp(0.22710320700566788);
    msg.setSource(55105U);
    msg.setSourceEntity(26U);
    msg.setDestination(5959U);
    msg.setDestinationEntity(29U);
    msg.op = 35U;
    msg.name.assign("VOEBRIKJTJSBNVADIGFPSFSHIKVBRUAFOEFBHQGEYGTEMMNXNNBCQXQGOFYBQHWZYCUZRTWMNQKJZHHDUJYDDJALKIAHKNMICHGJRSISLOXKOPDJUFWCFFYIOVWIDEL");

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
    msg.setTimeStamp(0.7366391627428219);
    msg.setSource(53759U);
    msg.setSourceEntity(25U);
    msg.setDestination(26022U);
    msg.setDestinationEntity(206U);
    msg.op = 218U;
    msg.name.assign("XPRZYLGWOEOMITWDPFCSRAYRHFHUCNSYLTICFXOYQFCFOKCBKDPALLTBZTGXTMNNRUOCPMXGJDNDLDUEZQKHWQWSOEBZMDFCUKPQWMRKLVRDYEHEXRTRYILSRNMGXZUOSUHBJMFHFPEJRMEAQMSKETZUJIBQCSJALK");

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
    msg.setTimeStamp(0.021964591947197798);
    msg.setSource(4682U);
    msg.setSourceEntity(38U);
    msg.setDestination(208U);
    msg.setDestinationEntity(65U);
    msg.op = 97U;
    msg.name.assign("SXMZBWNOLFPRZPPWUYXUUEWWOZKCFQGASAERHZJSGXCEMHZTDASYZIRXIFOTSBFJQTEZIMTCJDDSJVDNYFRKNRCWGKJIVKVHBPBEOAHVFJTFER");

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
    msg.setTimeStamp(0.31100495616604096);
    msg.setSource(41744U);
    msg.setSourceEntity(74U);
    msg.setDestination(5612U);
    msg.setDestinationEntity(163U);
    msg.type = 81U;
    msg.htime = 0.7497158844927722;
    msg.context.assign("TMTSLEBRSXEOFKAQCMRXTBPXQBYVZHKPGOCUPKZSCEUDVTCFOWSKLYCPFYHNWJLKFJGFXDRIYGLHDEKUTLNSARDWOWEBFGQVOUIAGFVQGWVRSBAHQNOTGCZWSPMJYLJZWDBZRLGFCWTIOHVPKLXOPUMLYCR");
    msg.text.assign("VFFKYMGRRGIBKDJNBUTFNBOAFVQGGJWOWNBLUXATDKCQJSVOHIMERYUQDCBNWYVQKHTZRDAQYCPORIUKGCHFEEWJCSOTZSOAICXVQAEGJGRSYFAPWIBWXCPLNHXMSHAKGBTMDZKHNIAMBAYPVFGKTJPTRYFTZZLMUQIXLMNPJLIYU");

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
    msg.setTimeStamp(0.44312162116495923);
    msg.setSource(58631U);
    msg.setSourceEntity(161U);
    msg.setDestination(17638U);
    msg.setDestinationEntity(197U);
    msg.type = 71U;
    msg.htime = 0.114663813697788;
    msg.context.assign("IXVXMCLTRHUYQKOJUIBUEDGIHTUZDQKWBWEXYAFPQACMBFDMFPTRWUQOXXNICEOSKQVPCFOAZWLSITOCPZIBUSDFBWYJAWLGRRJMGDDZFEOAJFWQDRKRGMMJSGORHACHRGZXKXRPVJLWEYQVZJENGVLPNPYMSHUNTLYLCDTHAHNCYAUCMMXGBHUSETKNZVDBLXPFQNTIQGCVPVAGMEYSYUVBPQZAIOOLZWWJBZDEIEVNKOSKIHSKSYFF");
    msg.text.assign("UALHTKDWJBOJGMGBFHTRVUTLLBXJCOUTQKUKKLSETXXKHMDQGFJSPUZIJRNVBZPPEBOAIVYQDQQNVWAM");

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
    msg.setTimeStamp(0.20663729197801384);
    msg.setSource(34999U);
    msg.setSourceEntity(216U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(147U);
    msg.type = 238U;
    msg.htime = 0.41302621475790613;
    msg.context.assign("NJYWQNRUWAKKZSYSNUFXWIPZBJRFDVXZQQNSJIADKHRSWVPYPYOTKKDHVWJRELTZYHXOFAOIQEGDLFGUCDUGBZTUECHFUJRDGTLIZGVRBQHLGP");
    msg.text.assign("DOSDLSKDJIINDMBVJZVPJQQLRTVCFOJPYABWMQIKUDGFLHGZNRGMCYDHXIQLJLNNZCYBPKNVMEEGMOZSXFPOAVIFWYRAGFXQFEBQEFPKCXSTGHZCYYWIPNVCKENAKTMIDRWFHTINREOYAMFBSVJREOXPVXABWJMUJLSHQW");

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
    msg.setTimeStamp(0.30554490866068196);
    msg.setSource(63560U);
    msg.setSourceEntity(0U);
    msg.setDestination(55776U);
    msg.setDestinationEntity(132U);
    msg.command = 11U;
    msg.htime = 0.7368523139631289;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.3304232858134235;
    tmp_msg_0.context.assign("WPPNQHFLFCTDVOOVOGELWUZHHPCGFZGYPKWRDBSOWIZKMJDBAOFBGHFLBXMFYIZFXKTADWSYSBGQXTAKJSSRUIEUGCEXQVWBCQGDACLIEJKUWCZYQSVMLLJUJRLTRPBDGANTAQPQEXKJBMVVHIQPXEHNYUNZEWLCEMCIPSTNGNHYIYRYNYXAOKRFLLFONVBEZNDMUXCJHHDRGPXVQJTTSZCSFVEUNPAJKBWMMRWZUVMIMROQDKAOT");
    tmp_msg_0.text.assign("TIUOGNQSJJFQHWGBXLXIKVNWLMEUDOCZMHDCNJRHOEWFLSNDMVVXPBBUBBMBYJIXNJYXUPOTEDKYHCHIOFTDFZOOAMOVCDHFVLGVYAWPHBKZHUUJKAWRARHQETPKDGRXULFNSYKVQTKTIONXLLMEZWTRNXTWASVOSCLSWAYJPCJNQQQEBP");
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
    msg.setTimeStamp(0.6996879237549278);
    msg.setSource(8844U);
    msg.setSourceEntity(78U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(129U);
    msg.command = 54U;
    msg.htime = 0.40484630787479403;

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
    msg.setTimeStamp(0.8864175176095255);
    msg.setSource(1196U);
    msg.setSourceEntity(197U);
    msg.setDestination(48014U);
    msg.setDestinationEntity(207U);
    msg.command = 42U;
    msg.htime = 0.9504018528031785;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 51U;
    tmp_msg_0.htime = 0.47928697433179535;
    tmp_msg_0.context.assign("GHMEWGCOZCQALAVIQROJRJHZPMKJKNQAMQLKFAPFZVLZQKFPJCOSEYCHQHFJUUXWNLAOQPIBZZGGXBOXXJIADTMYTVUWSCQUSDKPDHVDBJRVSDBECSSLYXFCRXRDVUPYWTIULHCMGSVQGKIXTYUXTVBRIBKPZIOZUWDWINWXOULVTSWRNJFMYIHFEYJLBHPTZNEERUKSLNREDNIAKEHWGYOK");
    tmp_msg_0.text.assign("OXJZGMQBIDSMNVKCYBOWQARKOXMERRWSTVZRRHTUAIEADMGPPAGIFUWHJCHYBCEEALARBYSZHHFTDQGFPNIJY");
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
    msg.setTimeStamp(0.8892269101550027);
    msg.setSource(55505U);
    msg.setSourceEntity(110U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(222U);
    msg.op = 204U;
    msg.file.assign("JOWQPYADQWRSMLODUSSDDCYWGSXEHENIWOCSSFLFCPIPLOBLCAXTQBZRYNOYHVDPTDJOZXYKIJIZKXNTRGBQJFTTBUTFIXAHMNKLBREJPAXCVRBZNGVXQKQEQYKCFKXONEHJPCAFMONRTWAIEMPQKROHVGWULVWJAHQUCXEGESPRLLJYMTNGGKCDCGNPLFVVTKSERUHMJBJWIAIYKLUGHZSFZZFZGPDYZNDMMUITUVZWEBQWHORAIXBVVHUA");

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
    msg.setTimeStamp(0.6669124422585723);
    msg.setSource(62040U);
    msg.setSourceEntity(165U);
    msg.setDestination(17833U);
    msg.setDestinationEntity(196U);
    msg.op = 149U;
    msg.file.assign("JKHZLNBOFNKUMLJCKYDFNCSHHKWDZXFLTGTWMLLGUOMJVHRQQVVNXXFOXCQCDTBLSPIXOSRRJYFOUYMPVTWCARNRHYVPTUSWICICQSZNSEAEJRSSZQBZJTKMSPKPUMV");

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
    msg.setTimeStamp(0.2071073261980455);
    msg.setSource(33314U);
    msg.setSourceEntity(122U);
    msg.setDestination(24410U);
    msg.setDestinationEntity(218U);
    msg.op = 172U;
    msg.file.assign("FUGKJYDBYUOTQJCXFGNTNURSELWCINVGOFTYXFQBKHEYEWPQIOSINOBPYBVJRPKVIYRNAZIZLRUMSTFOMQBTRSPMMIWMEHPMVSA");

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
    msg.setTimeStamp(0.053249006468210514);
    msg.setSource(14718U);
    msg.setSourceEntity(74U);
    msg.setDestination(60885U);
    msg.setDestinationEntity(200U);
    msg.op = 73U;
    msg.clock = 0.06777663475569817;
    msg.tz = -125;

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
    msg.setTimeStamp(0.48987238834967994);
    msg.setSource(28027U);
    msg.setSourceEntity(174U);
    msg.setDestination(26581U);
    msg.setDestinationEntity(161U);
    msg.op = 207U;
    msg.clock = 0.7310021907743695;
    msg.tz = -36;

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
    msg.setTimeStamp(0.5851398307727187);
    msg.setSource(11934U);
    msg.setSourceEntity(37U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(174U);
    msg.op = 105U;
    msg.clock = 0.4733639702611635;
    msg.tz = 57;

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
    msg.setTimeStamp(0.9893354235188334);
    msg.setSource(17220U);
    msg.setSourceEntity(63U);
    msg.setDestination(39519U);
    msg.setDestinationEntity(104U);
    msg.conductivity = 0.8403653534150933;
    msg.temperature = 0.7766911853888873;
    msg.depth = 0.056295666977356884;

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
    msg.setTimeStamp(0.75827439968588);
    msg.setSource(14371U);
    msg.setSourceEntity(201U);
    msg.setDestination(35656U);
    msg.setDestinationEntity(191U);
    msg.conductivity = 0.9480217842741472;
    msg.temperature = 0.4238577046526424;
    msg.depth = 0.4845285090210023;

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
    msg.setTimeStamp(0.2555142270771772);
    msg.setSource(88U);
    msg.setSourceEntity(11U);
    msg.setDestination(15652U);
    msg.setDestinationEntity(241U);
    msg.conductivity = 0.7219732662447107;
    msg.temperature = 0.8201293634697651;
    msg.depth = 0.549210042414635;

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
    msg.setTimeStamp(0.14852906208522398);
    msg.setSource(6016U);
    msg.setSourceEntity(66U);
    msg.setDestination(31683U);
    msg.setDestinationEntity(3U);
    msg.altitude = 0.03523689139131203;
    msg.roll = 44273U;
    msg.pitch = 54531U;
    msg.yaw = 5472U;
    msg.speed = -2267;

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
    msg.setTimeStamp(0.9401389229586694);
    msg.setSource(25859U);
    msg.setSourceEntity(185U);
    msg.setDestination(27775U);
    msg.setDestinationEntity(176U);
    msg.altitude = 0.3484694587018353;
    msg.roll = 47287U;
    msg.pitch = 31276U;
    msg.yaw = 14997U;
    msg.speed = 9432;

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
    msg.setTimeStamp(0.3291218960920932);
    msg.setSource(27686U);
    msg.setSourceEntity(138U);
    msg.setDestination(12012U);
    msg.setDestinationEntity(175U);
    msg.altitude = 0.6378442209656381;
    msg.roll = 50150U;
    msg.pitch = 31955U;
    msg.yaw = 4039U;
    msg.speed = 1346;

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
    msg.setTimeStamp(0.23002856676352113);
    msg.setSource(47842U);
    msg.setSourceEntity(107U);
    msg.setDestination(709U);
    msg.setDestinationEntity(57U);
    msg.altitude = 0.675738256866477;
    msg.width = 0.19063124517515562;
    msg.length = 0.10598344669670656;
    msg.bearing = 0.8728459778570672;
    msg.pxl = -19239;
    msg.encoding = 225U;
    const signed char tmp_msg_0[] = {-107, -116, 83, 37, -83, 61, -18, -90, -57, 99, 31, -16, -10, -97, 124, -81, -16, -29, 102, -15, -65, -27, -6, -10, 48, 109, 42, 74, 78, 53, 117, -67, -16, 68, -68, -73, 121, -77, 8, -35, 39, 68, 28, 80, 18, 111, 112, 105, -94, 94, -72, 22, -51, 31, -122, -16, 72, 96, 73, 73, 78, 81, -44, 33, -85, 125, 114, -1, -103, -37, 58, -98, -5, 106, -110, -72, -124, -43, -40, 112, -104, -58, 126, 87, 15, 19, 91, 40, -110, -15, 86, 112, 62, -74, 30, 55, 15, 119, -94, 35, 91, 19, -1, 96, -39, 100, -93, -78, -11, 88, 37, 107, 52, 40, -44, -107, -80, -35, -56, 19, -55, 18, 29, 4, 65, -76, -100, 70, -110, -56, 39, -78, 114, -27, 59, 61, -124, 44, 17, 0, -85, -102, -73, -34, 0, 103, 118};
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
    msg.setTimeStamp(0.45006802013120906);
    msg.setSource(9475U);
    msg.setSourceEntity(136U);
    msg.setDestination(14192U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.5093366156379585;
    msg.width = 0.08201408464572935;
    msg.length = 0.6965088856488689;
    msg.bearing = 0.6517197457282067;
    msg.pxl = -18064;
    msg.encoding = 127U;
    const signed char tmp_msg_0[] = {94, -101, 66, -106, 33, 32, -82, 118, -22, -88, -120, -72, 89, 27, 97, -38, 124, 123, 93, -64, 48, 16, -41, -7, -46, 56, 111, -71, 101, -51, -99, -78, 113, -42, -61, -12, 118, 40, 113, 71, 10, 20, 4, 10, 8, 15, -25, -118, 56, 39, 55, -23, -99, -14, -41, 5, 22, -93, -76, 48, 29, -29, -25, 78, 93, -103, -70, -35, 123, -24, 52, 112, -51, -9, 103, 17, -35, 120, -116, -3, 26, 13, -78, 119, -59, 56, -119, -47, -72, 103, 92, 21, -12, 15, 45, 37, -108, -47, -19, -53, 115, -90, 32, 49, 1, -40, -10, -120, 3, -97, -18, -110, -79, 95, -47, -34, -59, 113, -126, 55, -11, -103};
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
    msg.setTimeStamp(0.34184470103134246);
    msg.setSource(57270U);
    msg.setSourceEntity(47U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.17312276661918402;
    msg.width = 0.10714871188689934;
    msg.length = 0.1887266575010106;
    msg.bearing = 0.2347742635485317;
    msg.pxl = 28892;
    msg.encoding = 161U;
    const signed char tmp_msg_0[] = {-89, 41, -128, -12, 64, -19, -2, -124, 100, 58, -97, 64, -108, -62, 29, 103, -26, 1, 76, 72, -88, 71, -99, 69, -24, 44, 83, 16, 14, -58, 28, -124, 61, 11, -55, -107, 92, -17, 50, 8, 42, -24, -89, 101, -5, 108, 115, 31, -7, -20, 49, 108, -10, -108, -106, 95, 37, -75, 54, -63, 24, -82, 23, 80, 56, 114, -128, -50, 0, 64, -83, -49, 108, -99, -103, -1, -111, 20, -70, 97, 10, -106, -111, 44, -51, -30, -27, 119, 102, 95, -33, -66, 16, 102, 6, -90, 86, -62, -13, 102, -122, -7, 69, -77, -106, -76, -35, -15, -33, 105, -10, -120, -38, -103, 53, 44, 118, -81, -52, -100, -59, -52, 74, 10, -68, 75, 34, -21, -56, 122, -68, 46, 109, 12, -72, 47, 53, 113, -74, 81, 51, 85, -17, -41, 46, -81, 118, -108, -128, -34, -51, -74, -61, -54, 95, 41, -61, 10, 57, 117, -28, -93, -63, -62, 64, 5, 8, 5, -127, -115, -73, 126, 51, 113, 31, -89, 19, -83};
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
    msg.setTimeStamp(0.021393199547966923);
    msg.setSource(4768U);
    msg.setSourceEntity(18U);
    msg.setDestination(30153U);
    msg.setDestinationEntity(105U);
    msg.text.assign("MUWDCERKCXAWKRKOQDSBRXUIABGMTWLPXLSWPLYXXRWARFMTZERJLZLWBHBQPCJXFYIEWLTKJMDUKCTDZWSUPZIJGFIKZIMOODKVJQIXJVXVNYOOVLZIQRFLYRVFHGEOPBZ");
    msg.type = 109U;

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
    msg.setTimeStamp(0.2024816585953897);
    msg.setSource(53496U);
    msg.setSourceEntity(62U);
    msg.setDestination(24471U);
    msg.setDestinationEntity(38U);
    msg.text.assign("WSUXBPZLJYLFELYPQRFVJRDNODFMDFGHWIZTNGEXNOTDDHVGQGXMPQGQDTQEVHBPSYURKJEKHAIMCJMMCHBIQXOZKTLKFCPWMPKXJVOFTYXZQXLWOBNIFUMVQBAGFJRHSXOYEUGE");
    msg.type = 2U;

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
    msg.setTimeStamp(0.32079761006757523);
    msg.setSource(39944U);
    msg.setSourceEntity(49U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(94U);
    msg.text.assign("ISAFOXWPSDZRQINRKKZOSEIKZRGQZYBSCAADORLKWHTJGLXMVJXSRSMVPDNCNLBDRVZUFJFTAPOMNBKYUJROMSNTYZNBVCZTHGYCRQFUAEFQHDIPVGPEWUDTBXWUKMQZBHLEWLAPMTKHUWGZKJTXWIXHLTYFDSIJNCJQKTDSZXOUCOHHWYECYQJPYBMPJVVGSDBGQFLLAJUGBXXAU");
    msg.type = 25U;

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
    msg.setTimeStamp(0.3043112245942934);
    msg.setSource(49719U);
    msg.setSourceEntity(220U);
    msg.setDestination(41471U);
    msg.setDestinationEntity(134U);
    msg.parameter = 248U;
    msg.numsamples = 154U;
    msg.lat = 0.8417044353399091;
    msg.lon = 0.6194152113877547;

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
    msg.setTimeStamp(0.5664357706382073);
    msg.setSource(26528U);
    msg.setSourceEntity(131U);
    msg.setDestination(42653U);
    msg.setDestinationEntity(138U);
    msg.parameter = 194U;
    msg.numsamples = 71U;
    msg.lat = 0.7933106958744012;
    msg.lon = 0.33415406194784825;

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
    msg.setTimeStamp(0.19928675920312333);
    msg.setSource(41458U);
    msg.setSourceEntity(165U);
    msg.setDestination(64824U);
    msg.setDestinationEntity(183U);
    msg.parameter = 51U;
    msg.numsamples = 57U;
    msg.lat = 0.6107434247067253;
    msg.lon = 0.31929901773024394;

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
    msg.setTimeStamp(0.6409462688884179);
    msg.setSource(15497U);
    msg.setSourceEntity(191U);
    msg.setDestination(41266U);
    msg.setDestinationEntity(98U);
    msg.depth = 64473U;
    msg.avg = 0.0966141834747214;

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
    msg.setTimeStamp(0.34725387183374945);
    msg.setSource(35505U);
    msg.setSourceEntity(50U);
    msg.setDestination(64236U);
    msg.setDestinationEntity(160U);
    msg.depth = 2463U;
    msg.avg = 0.7493931634429444;

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
    msg.setTimeStamp(0.8164779346898359);
    msg.setSource(35308U);
    msg.setSourceEntity(126U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(207U);
    msg.depth = 5834U;
    msg.avg = 0.9031884008861067;

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
    msg.setTimeStamp(0.30653990635383954);
    msg.setSource(4923U);
    msg.setSourceEntity(206U);
    msg.setDestination(26238U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.3505760703794941);
    msg.setSource(11814U);
    msg.setSourceEntity(215U);
    msg.setDestination(4664U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.7348227831239218);
    msg.setSource(26874U);
    msg.setSourceEntity(55U);
    msg.setDestination(48925U);
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
    msg.setTimeStamp(0.4809172053070718);
    msg.setSource(7088U);
    msg.setSourceEntity(208U);
    msg.setDestination(62597U);
    msg.setDestinationEntity(57U);
    msg.sys_name.assign("FGMJHIXVJECKWJQQTLZXBTSONRXVBMGHXURUPURZQTZHZFZOFWASLYBLURLXJXBKCECNIWDDVBHYLYRDXUMPNXFSPFCKNTLDFPHOPDOZYBEYGSHGPVEILHRTKEQNFFCATRDFBZEKZMBSYRODAPPJCWIKAHOA");
    msg.sys_type = 81U;
    msg.owner = 13771U;
    msg.lat = 0.3420203840880619;
    msg.lon = 0.38833846156618956;
    msg.height = 0.02638227095312473;
    msg.services.assign("EKBBMZVLRTQQRGEYDTMNPWFEABNWSHICKNMDHKAYPDOYJGJZHCWIOTTJUFSUOTPFYSXFTESLNDFKYXRDNNQBVNWVOFOMBPDVCKTWARFXBATTRCOUJLLOQGZFPWLOHXUACIRCIOYGLCWAAAJEEPIHOUCIUQDZLQSJHMKBVGKRXZMXTZVFGSZBXXILQXAWSVKQ");

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
    msg.setTimeStamp(0.4597458326135676);
    msg.setSource(12023U);
    msg.setSourceEntity(232U);
    msg.setDestination(16613U);
    msg.setDestinationEntity(248U);
    msg.sys_name.assign("DUKVVGKLDGYCXZXTGLTPHLVKXPZVSNVPTJRBHDOUAXIKLSSTACSHKIBAJHJGTOEQJOIOCILBXTLXZGGNKWQZCRUYZHQUENREQQGBSUMEAPMWAFWRBVAIJKABPFNU");
    msg.sys_type = 40U;
    msg.owner = 52837U;
    msg.lat = 0.06109207243129866;
    msg.lon = 0.9604474673554453;
    msg.height = 0.9088322187930871;
    msg.services.assign("RTAZPBFHVHYQISJWVVXLPSENCCLJSSJQIMNRGKIDQTN");

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
    msg.setTimeStamp(0.6750115350770174);
    msg.setSource(7390U);
    msg.setSourceEntity(158U);
    msg.setDestination(7321U);
    msg.setDestinationEntity(53U);
    msg.sys_name.assign("PNTIZWEASCSDGAUCXVPRTVYYWXJHJQKDJXFXFB");
    msg.sys_type = 208U;
    msg.owner = 41166U;
    msg.lat = 0.9873132444397702;
    msg.lon = 0.634258336419589;
    msg.height = 0.3006471849882433;
    msg.services.assign("OHOHYGOOMKPWLRBXIKMSERYAKPIEXHPJRAYAYTSBXTXJOOCATYVUBIFYJGNHZXNKNVLAHWQZLHVEMVDHUSQKGQWWQLZGEIKWYTZCIHGPHCNACFBMIIAJDBEPKFSAITDRSHKNSWEPACDLMFJXJERRZWOJPLXWFCSDDMKQMQUB");

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
    msg.setTimeStamp(0.35761761921262547);
    msg.setSource(57403U);
    msg.setSourceEntity(226U);
    msg.setDestination(8216U);
    msg.setDestinationEntity(213U);
    msg.service.assign("POIWKRPFTSLJHLYWMBLGMVSAZZLNVODDXGNKEBCXKDTGEOGTDUOYEEPUHYTMRJMBLWJXBAKUUXIPNZUNQOECIVMEVTI");
    msg.service_type = 191U;

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
    msg.setTimeStamp(0.829910626919996);
    msg.setSource(14836U);
    msg.setSourceEntity(154U);
    msg.setDestination(7769U);
    msg.setDestinationEntity(226U);
    msg.service.assign("WJCDRNUCIOSQKAPZEVIFFDPDALHZHNYSPPZSSLATSZVWGHCAWBMQEYVIKTVUXQLTFICVFWMHQBVGYDDFTZBROXILQYTDNEFPEXNRYEOJFEARJMKPYGLAMIVYQGCXWOMFKQEYDQNHAMGYCSICOBXAERGDCXKJKJIFBDTRNOOQMUZXUUTHSUKRPAFUMVIBNZ");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.6846625593428846);
    msg.setSource(44062U);
    msg.setSourceEntity(58U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(216U);
    msg.service.assign("MRHXAWUIMXQLJYBWWDGHBFATWSDISVGNPGNOERALTKRFQPNBNNNWSYTDWSJVPKXQKDCLDFEDCAKTVBJTZGOLZMFJ");
    msg.service_type = 82U;

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
    msg.setTimeStamp(0.9062374181837335);
    msg.setSource(52102U);
    msg.setSourceEntity(74U);
    msg.setDestination(62834U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2814813535504026;

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
    msg.setTimeStamp(0.2233778943984086);
    msg.setSource(26365U);
    msg.setSourceEntity(9U);
    msg.setDestination(27455U);
    msg.setDestinationEntity(71U);
    msg.value = 0.2587845613900861;

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
    msg.setTimeStamp(0.8077893123071515);
    msg.setSource(6588U);
    msg.setSourceEntity(17U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8429720520178613;

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
    msg.setTimeStamp(0.023273969500654967);
    msg.setSource(28709U);
    msg.setSourceEntity(43U);
    msg.setDestination(8360U);
    msg.setDestinationEntity(163U);
    msg.value = 0.33131456429779793;

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
    msg.setTimeStamp(0.2607748868087747);
    msg.setSource(35280U);
    msg.setSourceEntity(48U);
    msg.setDestination(9885U);
    msg.setDestinationEntity(244U);
    msg.value = 0.443369191100598;

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
    msg.setTimeStamp(0.8399445011778337);
    msg.setSource(61893U);
    msg.setSourceEntity(236U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(247U);
    msg.value = 0.5571744908788199;

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
    msg.setTimeStamp(0.1296561013027654);
    msg.setSource(42203U);
    msg.setSourceEntity(110U);
    msg.setDestination(786U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5345243305174562;

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
    msg.setTimeStamp(0.3430951752774606);
    msg.setSource(4878U);
    msg.setSourceEntity(5U);
    msg.setDestination(27679U);
    msg.setDestinationEntity(47U);
    msg.value = 0.021618136960678602;

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
    msg.setTimeStamp(0.13700186159005057);
    msg.setSource(60056U);
    msg.setSourceEntity(142U);
    msg.setDestination(1369U);
    msg.setDestinationEntity(41U);
    msg.value = 0.45995703960103285;

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
    msg.setTimeStamp(0.7263664666808205);
    msg.setSource(46153U);
    msg.setSourceEntity(160U);
    msg.setDestination(62082U);
    msg.setDestinationEntity(135U);
    msg.number.assign("HWCPCOOOQGSPBZCYDWRQHESKLLZEXEQTAWXSYOWZIPNDAB");
    msg.timeout = 453U;
    msg.contents.assign("HRBPCRWHTQECLNFBQCFNPIIZLXEMRIPUFSYTYCTHQTCASOESNLBWGBGYBLFEJRRH");

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
    msg.setTimeStamp(0.44860963151739885);
    msg.setSource(28527U);
    msg.setSourceEntity(143U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(104U);
    msg.number.assign("BHECVZOOSYPNYVDIUZHOENMBHPJQ");
    msg.timeout = 5395U;
    msg.contents.assign("CILULXSJKWZAKUFSMCFMGIOEGVGBQNJNSKKYAVLOEVMWHLMGUSWTADRVUJEMJCZYXHMZHYXDYUBQTZQQMJHIPYFQFKPIDSNKCEIYTBWDXWKFYZNZTRLKGEVCCVOZACDEGYGUUUTAQTOQURTISMBPYAIALEBFPXNILJMUVRCHIRJSWBOORMJHDHXWJIXXRAQPKPGTROZFGZH");

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
    msg.setTimeStamp(0.7284967024712662);
    msg.setSource(12286U);
    msg.setSourceEntity(175U);
    msg.setDestination(53620U);
    msg.setDestinationEntity(117U);
    msg.number.assign("LTDNYHOLTZHPEDGFQFCKDYQLPLBZBFYNZMAJBKLNHZYRHCQYXEUMGAXCSJGMEWCDUYFPILZTHPHOQZRUXGTUAERABZDKXVXVUQMRBYLSAVB");
    msg.timeout = 2791U;
    msg.contents.assign("LWOYLPZCYMKVIFSJMYSDOOYTGJSWRQMYMMJTSGEEBGWIQLIKHELYTUDXOOTAIEYNVMYTQKHDRQXFEQACUAIYCPBHJZDWLTFPXZQJRWHQCENVAXNCHAPXSPEKBPXZTMVAWBUVVMKZUJLHUEERHJJKISNCJJNOIBHUYDGRTRHXBVNFZAGOXCZVFWGBLU");

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
    msg.setTimeStamp(0.1282018160185716);
    msg.setSource(25944U);
    msg.setSourceEntity(153U);
    msg.setDestination(35865U);
    msg.setDestinationEntity(60U);
    msg.seq = 267562276U;
    msg.destination.assign("FJSUEPBCXXFDHSPIIMJXQOXYAOXCRCGXIFHPAUPLXSZEQAHDMWPQGGVLFJSIZNOIHVDJOKTKCQUAMTLFYBTACIZTZEQROFQSDSJHYZIZUCVTBNRKELEBNAJRONSXRBDULWYVBDROSFHWGTUUENRHKGGBNIGNYPJYPKNUQVTBDSTLYWQSYYMVVMZRDEKEBHUTLL");
    msg.timeout = 46202U;
    const signed char tmp_msg_0[] = {-66, 74, -60, 94, -38, 35, 24, 19, 82, 59, -73, 16, -117, 86, -97, -127, -79, 122, -115, -60, -103, 39, 30, -121, -39, 65, -92, 96, -120, 121, 8, 25, -109, 126, 73, -63, 89, 97, 1, 79, 85, 109, 7, -65, -113, -95, -68, -98, 63, -120, 54, 103, 83, -35, 98, -85, -11, -60, 116, -94, 112, -50, -17, -3, -18, 52, 13, -93, -97, -95, -46, 53, 66, -89, 39, -123, 64, 24, 96, -78, 1, 57, 81, 87, 21, -87, -43, 115, 37, 121, 24, -79, 113, -38, 31, -16, -58, -61, -122, -42, -92, 85, 60, -68, -126, -28, 43, 92, -97, -102, 80, 71, -63, 67, -114, -90, 111, 101, 91, -7, 0, 104, -99, -77, -61, -5, 87, 19, -112, 87, -31, 5, 40, 99, 25, -95, -77, 15, 44, 15, 14, 113, 3, -125, -104, 119, -56, 28, 48, -105, 125, -51, 60, -126, -53, -44, 45, 48, 100, 53, -76, -37, 15, -54, 98, 88, 43, -48, -10, 50, 104, 100, -58, -11, -25, 86, 8, 65, -18, 18, 26, 47, 66, -47, 119, 103, -35, -109, -85, 119, 9, -67, 18, 70, -125, 9, -6, 39, -20, 22, 57, -126, 67};
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
    msg.setTimeStamp(0.8519625771128777);
    msg.setSource(8646U);
    msg.setSourceEntity(211U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(237U);
    msg.seq = 2286902783U;
    msg.destination.assign("QGZNBBXOYNMMRROMMZLUOHUKVPJZCVSARNXGFAAHPGRGKVTMJDNFXXKRTEQGXIYHSMOVOZCQIWWHGQWLLSLUTKWFPIZJMOXAYEBZDSGTPYUJWDCTRNQHZVTELLIUFZBNEUESTDADQWFUTPAFIZODSFFSLJNFAEHHWCYDARVTNVKQVBLFZHQLSNSHMIPBDPSUBICINIWECLMVBOBRJYROEKJDMTQPCKJBXHGO");
    msg.timeout = 65205U;
    const signed char tmp_msg_0[] = {77, -28, -62, -101, -4, -34, -128, -125, -54, 11, -116, 36, 65, -31, 15, -98, -83, -100, 69, 118, 86, -116, -125, -38, 4, -75, 51, -14, -47, -13, 76, -66, 63, -118, 95, -110, 74, -34, 77, -76, -12, 101, -80, -116, 42, 79, 18, 53, 106, -8, -125, 49, 105, -80, 86, -102, 103, 3, -78, 60, -9, -17, 60, -5, 82, -65, -41, -120, 28, 64, -12, 15, 61, 77, -110, 122, -78, 2, 91, -6, 67, -128, 43, -78, 19, -123, 22, -54, 75, 65, 112, 38, -17, 69, 10, 93, 91, -33, 86, -41, -17, 10, 66, -92, -31, -98, -89, 56, -92, -34, -17, 123, -25, -18, -128, -91, -26, 89, 75, -84, 21, -62, 106, 0, -1, 50, -49, -95, -4, -119, -10, -87, 82, 80, 125, -103, 58, -110, -63, 14, -94, -50, -12, -6, 39, 97, -84, 84, -122, 91, 41, 41, -123, -36, 116, -41, 37, -102, 121, -55, -59, -55, 54, -56, 100, -96, -51, -26, -19, -68, -41, -39, -118, -123, -73, 49, -98, -93, -82, -70, 108, 87, -33, -117, 122, -88, -92, -13, 30, 109, 21, 105, -100, 38, -47, -30, -68, -34, -85, -111, 30, 35, 71, 81, -89, -23, -115, -9, -11, -36, -36, -57, -59, -3, -19, 125, 93, 49, -45, 51, 91, 49, -8, -68, -89, 9, -30, 27, -70, -73, 90, 95, -45, -79, -50, -50, -27, -79, 66, 21, 92};
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
    msg.setTimeStamp(0.9826682261661536);
    msg.setSource(34441U);
    msg.setSourceEntity(75U);
    msg.setDestination(60870U);
    msg.setDestinationEntity(252U);
    msg.seq = 1407284964U;
    msg.destination.assign("GPWDXLNDCKCBCIGTVQTEHUVDYKBPNHGSFFORXINTHFRCZNUNDZMBKPKOKAMZLMASFSXSXIXYAVTYYWUJVZEYGEPMCEMKAHDDJBJQLBMGIJDDOJAROOLGUDUUFHGYXQTJFZWQMEBJSXILTAVHWZGHRNWIPPMSQQQPBVSPDFXKYCPWEMBNCXZFORGMW");
    msg.timeout = 3105U;
    const signed char tmp_msg_0[] = {-102, 112, 45, -4, 64, 48, 49, -41, 41, 25, 106, -7, -40, -69, -95, -64, -103, 110, -113, -126, 50, 38, -53, 76, -87, -56, 110, -93, 3, 77, -100, 40, -50, 98, 4, 33, 120, 90, 33, -46, 90, -42, -26, 66, -80, -57, -9, -69, 116, -117, -105, -109, 26, -17, -79, -81, 60, 82, -55, 104, 0, 19, -22, -64, -101, -4, 57, 77, -63, 109, 37, 18, -28, 33, -111, 25, -73, -7, -1, -80, -110, -78, -44, 36, -110, -43, 114, 36, -30, 66, 52, -20, 118, 36, -112, 62, 97, -20, -117, -118, -112, -124, 112, -65, -106, -116, 23, -5, 45, 28, -46, 66, -61, 19, -29, -63, 57, 55, 97, -13, 108, 39, -122, 9, -101, -30, 17, 59, -57, 121, 7, 80, 12, -64, 13, -86, 59, -70, -16, 69, -112, -48, -53, -20, 48, -46, -60, -74, -88, -36, 49, -119, 38, -124, -27, -5, -30, -99, 89, 73, 79, -108, -123, 112};
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
    msg.setTimeStamp(0.9287322094446862);
    msg.setSource(50707U);
    msg.setSourceEntity(164U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(208U);
    msg.source.assign("SPGFPZRJKZZKNJFCMTQVBYOZWVKBHNXYLBEJPMXNDWWXFYCXJGSSHSUPLZYMLKIUETFJYCSYSCQHQIOBBTRHEDISTIQLQZTVHZORDDCOMGMKZH");
    const signed char tmp_msg_0[] = {18, 53, -18, -72, -65, 65, -15, 39, 112, 60, -19, 104, -51};
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
    msg.setTimeStamp(0.05867768985647526);
    msg.setSource(23404U);
    msg.setSourceEntity(20U);
    msg.setDestination(41088U);
    msg.setDestinationEntity(113U);
    msg.source.assign("AGSHOOLLJQRUI");
    const signed char tmp_msg_0[] = {-127, 34, -43, 118, 70, 24, 5, 83, -7, -22, 126, 121, -97, 87, 95, 111, 26, -97, 104, 94, 36, -82, -54, -70, -79, -32, 72, 72, 45, 113, 67, 19, -58, -108, -14, 122, -97, 28, -87, -74, -75, 89, -7, 74, 67, 102, 16, -18, -47, 85, -70, -61, -67, -61, -8, -27, -66, 121, -102, -64, 1, -51, 14, -23, -6, 123, 24, 12, -7, -42, 62, 86, -121, -31, 98, -31, -23, 46, -128, 0, 43, -63, -33, 19, 123, -87, 102, -116, -117, 108, -62, -64, -17, -21, -112, 23, 34, 93, -112, -15, -117, 17, 66, 19, -113, -127, -60, -42, 95, -72, -18, 122, -40, -66, 112, -104, -113, 87, -49, 70, -76, -10, 12, 67, 34, 112, -110, 25, -12, 96, 24, -13, 108, 122, -28, 14, -85, -115, 109, -65, 48, 120, -85, 116, -107, -93, 24, -89, -74, -53, 44, -90, 30, -61, -28, 109, -91, 12, 16, -104, -42, 106, 86, -46, 95, 13, 106, 28, -35, -96, 12, 2, -29, 35, 118, 30, -115, 106, 77, 25, -77, 38, 1, 107, 120, -64, -14, 101, 25, -74, -32, 122, -86, -61, 23, 6, -20, -58, -15, 51, 9, 10, -91, 95, -77, -122, 114, -91, -36, -79, 41, 74, 31, -29, -59, -99, -127, 107, 23, 61, -101, 90, -39, 76, 11, -29, 58, -74, 9, -86, -95, 25, -89, 102, -113, 93, -79, -97, 54, -32, -45, -38};
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
    msg.setTimeStamp(0.24687831862841414);
    msg.setSource(60278U);
    msg.setSourceEntity(39U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(147U);
    msg.source.assign("QZBJNSOQWUYRYXEICWEIXFHIYX");
    const signed char tmp_msg_0[] = {114, 20, 81, 23, -15, -28, -79, -33, -104, 125, 102, 117, 12, 58, -89, 8, 97, -55, 94, -10, -55, 78, 33, 36, 17, 40, -52, 32, 22, -54, 38, 63};
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
    msg.setTimeStamp(0.8049476026209201);
    msg.setSource(43460U);
    msg.setSourceEntity(246U);
    msg.setDestination(45926U);
    msg.setDestinationEntity(125U);
    msg.seq = 4095515352U;
    msg.state = 32U;
    msg.error.assign("SYQFJGXHUGVCEFCKSBJLEOBJJSNFDRQUGTRLJPKAPYLEICSSTZPHQAHWNKWWZQINDZJFIMRLGVDGTEOWHLTUXETTIHOPKSGVRUOXKMANBJXXTXVYIBVSOXMRDLQDBUURHFBCYVCNLARPZWRGZDYDOAUMHSHLZGYADBQIHQTMOQELXMMAIZACKQTZWYFVMXEUCGKFQNPCOFPRWUEBHAYWNKVJPIYFVD");

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
    msg.setTimeStamp(0.5499834444465905);
    msg.setSource(44686U);
    msg.setSourceEntity(180U);
    msg.setDestination(43855U);
    msg.setDestinationEntity(132U);
    msg.seq = 550496262U;
    msg.state = 204U;
    msg.error.assign("VJTWNNIMULSTCRQTGEHQCQKAKVEPVRIYQHDIHGUMHGANNTOUCEUIXODTBJYKAIYZBLLG");

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
    msg.setTimeStamp(0.07422887312495285);
    msg.setSource(49458U);
    msg.setSourceEntity(103U);
    msg.setDestination(14908U);
    msg.setDestinationEntity(230U);
    msg.seq = 465784404U;
    msg.state = 152U;
    msg.error.assign("CMTZVJUYXGQAAKWZFXZXNOKNTUOPORDLMEXURDSHWEAMQWZIFHUKOHXIOMKCIZPQBANTYFRHTLGZFUQYJBXZVFEDTLCEPSJZOSEVHIJNFGTYLENYJICFBFRPLCSIGXYSGVJGCEPUFVKERPWGTPXSBLNVNSDSAVMKKOCFEGHAAVUXHMZBMTIR");

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
    msg.setTimeStamp(0.4924427955180112);
    msg.setSource(13070U);
    msg.setSourceEntity(108U);
    msg.setDestination(44376U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("SDQVAJFLQQCPWTZGYLOYMRLFMHVENHNCSXNIOIHEYLTEHXTYIWEMDDVGVVNMYUZIXQTLLKCWJXRDDDCTEPXIWPTFOSKARVMHGVGTKLORSJLABCQJMZXSOBURVUFFPKZAZWW");
    msg.text.assign("UTUTYOXSZZTQGPQNDLRYOIHUITDFQKGBKIDJRVFBNGWKTGBHHBFVZMVIRNYMLGPJHGAWIJRMRDBSCRLWJUBSKMACLEWFDXSCOZEWWQYMINTFATOIGUXSIRYBHOLDOFZLAJYEEXKA");

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
    msg.setTimeStamp(0.20938957231081534);
    msg.setSource(38611U);
    msg.setSourceEntity(130U);
    msg.setDestination(8803U);
    msg.setDestinationEntity(50U);
    msg.origin.assign("IQPDLYAIBJSJECYCEAEFMVFXFEMJTMSLFLGUFSUACTBESUIKSDLQQNNIKHWZWNZZZGXBQYIJUKLVDZPZWHXHFYCBXCPJSSFNXCHZDOOCRKUXYNUHJASYIRVXRWQIQZRDCYOOGVGAMHLGDFBLVTKREWBTWAOUARJNEBNNYKKTGSXHOSRHXJGKIOURWNIEAMVTQVJHEPPQMM");
    msg.text.assign("AYEVETUXDFAWRLEDFGHMEBRWEBQLWBNPFODXYHXGZVRLYCRQYQRLPZMJXIVFBLOKWUVIHIUABKNTJSQBYXUJSTYIDKWARFTANZOTAYHVIOBIMFDGUJMIVVFEPNAJSVYKPHGZYACPEMRNONCWSZOXHGMWNJZMCFSCCFZNKLENHBGCTJHPRSXIOUFZWEYPINJLPQOTSUAKUQSLXKMCKQVS");

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
    msg.setTimeStamp(0.8529898785895073);
    msg.setSource(38728U);
    msg.setSourceEntity(246U);
    msg.setDestination(23999U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("LEXNKFWBQHJKHYTWOGBIKUSCBZVYFIEKSBQHHRKTXURFTDWGBKVUCMQDMLBTGYCBUTJOLMCVLYJTINPVODSPNEGJSJCMNIXIJOAUMGGYEHLMICCDXNWODYBKPTSRLVQSMXVELETAOSG");
    msg.text.assign("KTIKDLMFKUMAGOMBTGVIVRRWUOJ");

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
    msg.setTimeStamp(0.7074056482310258);
    msg.setSource(39476U);
    msg.setSourceEntity(20U);
    msg.setDestination(6885U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("FKLRTMBSQRJPQFGLNGXXWAPGUGXDJZVLWAVUJEKSUEQGKSUHJRIZFDGHOVOFRVJAGTWQHBMCKJDSGYBPMXBYFARDEHTESUMOLTKYOFZCCNUTFONDQPAYPTCGBVRKJ");
    msg.htime = 0.4524436848781538;
    msg.lat = 0.8741451120167558;
    msg.lon = 0.43940360395617306;
    const signed char tmp_msg_0[] = {-60, 115, 118, -1, -29, -38, 80, -120, 101, -119, -90, 122, -122, 105, -125, -127, -68, -30, -67, 95, -108, 90, -61, 37, -61, -104, -125, 37, -70, -58, 112, -107, -18, 42, -49, 117, -42, -124, -116, 56, -98, 103, -37, -98, -88, -9, -74, -120, -83, 24, 20, -84, -102, -94, -77, -1, -39, -101, 93, -47, 85, -82, 30, 78, -94, 37, 114, 44, -89, -106, -66, 118, 94, -100, -34, -101, -88, 109, 100, 84, -119, -80, 11, -5, 75, 115, 49, 98, 33, -92, 91, -30, 25, 34, 102, 5, -69, 61, -92, -20, -45, 20, -51, -56, -44, -24, 46, -69, -115, -40, 105, 90, 93, -120, 117, -79, -47, -16, -21, -12, 96, 31, 41, -41, 50, 90, -97, -93, -11, -41, 45, 17, 42, 76, -59, 93, 54, 100, -52, 75, -100, -96, 51, 97, -72, -60, -81, -103, 34, 91, 39, -104, 43, 103, -107, -109, -4, -94, 34, -120, 36, 124, -122, -102, 59, 8, 78, 28, 8, -30, 38, 36, 80, 76, 5, 49, -79, 50, 117, -4, 2, -101, -107};
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
    msg.setTimeStamp(0.9018674956948657);
    msg.setSource(4262U);
    msg.setSourceEntity(250U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("QOHNRHVLTCSZYRUAXGXMBTASBJOZHDLERDSCVEZBOMNUAUOFAZHCROWIDWUKKFQAAVNPNMUEUYGATRSEKPHDWCOZYXTJNEJQDWXHXSTOUHFLIVJMOVRAZLXKAXGFBRIWVMDJZBSHXYFEQISQPCPCNCVHSTRYCVQMQPUBDNAWZBKRYDIWSYZEKGQTPMQEJILCGWBYJBIMEFPUYJXPDZTBFEOXNLGTMSQVCGLMIGGNKLRPKOINLKFVH");
    msg.htime = 0.9476584839412671;
    msg.lat = 0.6666324994768963;
    msg.lon = 0.8660452190721433;
    const signed char tmp_msg_0[] = {-6, -47, 104, 33, -128, 72, -44, 126, -54, 120, 88, -54, -48, -127, 58, -47, -123, 3, -11, -104, -61, -127, -58, 104, -28, -93, 66, 50, -103, -86, -26, 14, 0, -104, 25};
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
    msg.setTimeStamp(0.5842214545744819);
    msg.setSource(6402U);
    msg.setSourceEntity(160U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("DRNREOHCHBGGEGAMEQLYRICTJHHYHCUITJNCZOUORCADAMKQXPKVPSFXASJGVTBTSUTQYONIFQKKFRWNYAMPBYAXNVAGEPFNICVWBSQZJFOILISZIBLZQUKWGZALRJPOUDYHMEGYEUSPJBWKADLCKPXVHMZSWBKNTEDPY");
    msg.htime = 0.1336140845380981;
    msg.lat = 0.7536857617678234;
    msg.lon = 0.8078414947152363;
    const signed char tmp_msg_0[] = {86, -58, 72, -62, -96, 51, 93, -116, 19, 85, 57, 59, 78, 23, 4, -31, -10, 23, 83, -24, 5, 41, -19, 93, -102, 113, 102, 86, -128, -14, -74, -95, 6, -38, 124, 46, 11, -51, -79, -61, -9, 45, 125, -37, -102, 52, -103, -106, 80, 65, -115, -23, 71, 23, 52, 64, -44, 108, -35, -42, -82, 56, 105, 37, -106, -77, -12, -111, -119, 18, 50, 53, -98, 6, -117, -98, -71, 84, -1, 34, -69, 56, 57, -112, -45, 111, -6, -8, -113, 0, -90, 101, -20, 23, 106, -59, -103, 113, -1, 72, 121, 104};
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
    msg.setTimeStamp(0.2530150327075187);
    msg.setSource(3689U);
    msg.setSourceEntity(136U);
    msg.setDestination(11307U);
    msg.setDestinationEntity(196U);
    msg.req_id = 35788U;
    msg.ttl = 15068U;
    msg.destination.assign("SIFTAKJQXSPHDNRCYEKOIRIOJNAFLYMMDQEWSZOYRGRHBBKQMBDWLCKOWJXVQJHFFAKXZMZVPCZDSEUKVVKRNZWDFFFTBQOSVDTTTTNKJIWVUSXCKLLXXXMMYCYBRWEOLCWRLOHTBACOIRQCYHMNBLVCFNXMRUJGYWGUGHD");
    const signed char tmp_msg_0[] = {98, 105, 91, -49, -71, -75, -18, 18, 62, 44, -105, 9, 114, -79, 118, 10, -35, 70, -102, 19, 88, -2, -3, -32, 56, -14, 72, -85, 104, 66, -74, -20, 104, -97, -99, 4, -9, -103, -12, -79, -29, 56, 122, -71, -101, 60, -97, -7, 20, -107, -97, -128, 23, 81, 69, -80, 80, 48, -29, -77, 30, -37, -30, 67, -116, -120, -92, 125, 14, 107, -34, 81, -119, 82, -58, 110, 77, 6, 66, 77, -121, -63, 20, -88, 80, -99, 51, -93, -60, -108, 12, -124, 24, 59, 121, 90, 17, -46, -3, 102, -31, -34, 122, -13, 68, 7, 110, -17, 11, 34, 90, -4, 38, -41, 126, 124, 112, 78, -30, -114, 115, -60, 32, 26, 64, -76, 90, 63, 104, 111, -61, 57, -39, -124, -93, -25, 17, 12, 23, 53, 37, -74, -24, -72, -52, -50, -112, -107, 124, -39, -110, 51, 90, 112, -106, 41, 19, -128, 76, -121, -1, -11, 98, -5, -86, 98, -96, 16, 27, -44, -107, 111, 12, -72, -99, 33, 119, 3, -44, 67, 94, 101, 88, -65, 6, 67, 41, 47, -62, 110, 62, 87, 41, -64, 92, 110, 18, -98, 10, 115, -14, -14, 81, -4, 115, -28, -100, -93, 111, -6, 57, -97, 63, 115, 122, 101, -15, 17, 10, -27, 54, -50, -36, 19, -77, -54, -52, 71, 83, 57, 125, -65, 71, 121, -70, 0, 80, 101, 33, -118, -126, -117, -30, -3, -78};
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
    msg.setTimeStamp(0.6318801331577361);
    msg.setSource(39084U);
    msg.setSourceEntity(73U);
    msg.setDestination(19546U);
    msg.setDestinationEntity(242U);
    msg.req_id = 600U;
    msg.ttl = 28790U;
    msg.destination.assign("HJLQDZIFCTFWAGOYEHDPLLUPLZGGXDGUBCHVLTLSZGJFZNIFUVYUJMZUYSTEAQDHASYFAYPXRWFNRIBXLZVTHCEMJWLJVNITHKOSBEJYRFJTWLIDFWHWPQSHIGNRIKAPXWASBBOGGTNOXRODXDKIVSYBAMCOCOVLEYWEK");
    const signed char tmp_msg_0[] = {-90, -47, -125, -9, 60, 100, -117, 88, -1, 27, -69, 96, -92, -80, 101, 28, 117, 10, 81, 126, 9, 90, -52, 1, -115, 7, 93, 28, 57, -92, 51, 66, -116, -81, -93, -93, -23, -7, -51, 94, 66, -13, -35, -100, -108, -20, 68, 36, -91, 82, -93, 5, 47, 9, -34, 28, 104, -123, 63, -121, 47, 67, 89, 32, 4, 122, 89, 101, -60, -50, -46, 40, 29, 49, -21, 51, 114, -69, 94, 0, -70, -72, -72, -125, 9, -55};
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
    msg.setTimeStamp(0.47427231918680623);
    msg.setSource(27474U);
    msg.setSourceEntity(165U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(248U);
    msg.req_id = 5325U;
    msg.ttl = 12659U;
    msg.destination.assign("JMQJHSEGDINCZZUOHPJKAQGYAONKIRBZWXHGEXVAHZBCOYWSBZYIRUTTOBWEAVMKWVUFDPGXXQFFFBAKCBVSMRCIIRZTYIXBLUSKTSRIAERMMWDTDGYDNSBDUEFDEAVYCMQVHECELHQMPGFOHHWOYJSMWRDUQTXLWUPLCTWRHJOQPEDUCOZKFBMLYVGXNPDPRWSAQRKTPLSBJQFGZKIFQYJMZLNNGESLVIUVLJPKXTF");
    const signed char tmp_msg_0[] = {44, 71, -126, -62, 32, -67, 67, 8, -103, 4, 68, 60, -72, -73, -72, 55, 71, 58, -2, 120, -31, 9, -40, 117, 88, -60, 107, 61, -97, 64, -99, 76, -29, 103, -125, -17, 96, -22, -48, -89, 43, 126, -14, -60, -49, 9, -98, -3, 70, 122, 30, -110, -6, -128, 29, -102, -94, -3, 80, -108, 42, -29, -71, 43, -121, -18, -98, -62, 63, 79, 48, 61, 1, 58, 84, 75, -83, 56, -27, -73, -105, -49, -19, -93, 39, -108, 15, -67, 96, -122, 91, -6, 117, -60, -12, 73, 75};
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
    msg.setTimeStamp(0.04181358341105834);
    msg.setSource(21804U);
    msg.setSourceEntity(116U);
    msg.setDestination(47634U);
    msg.setDestinationEntity(43U);
    msg.req_id = 39866U;
    msg.status = 101U;
    msg.text.assign("CHKMQMCWZVKXSAKDNUPOZOROVXBQPPQYDYEWHSHEJIYFXJIGTYADNEISCHAGZSBDNFBKMJJXBUUQIKHLQCWEFMRQUYKMNIZETNPSOHUOCGFQVXXGYTSLGWRDKXGYHMTSMJJPTNSIDZKIBBGZONEBGLNIDVUTHACFWJAWLROEBLLWCYKWURQLJCSBSCXVMAFLCRATJTIXUVHUZRMIENZGOTHOGZARFDMLNAFRDBZKPVOLT");

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
    msg.setTimeStamp(0.4714860799607562);
    msg.setSource(56482U);
    msg.setSourceEntity(60U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(101U);
    msg.req_id = 1975U;
    msg.status = 140U;
    msg.text.assign("UTEXKDENDGTLPECWYFQQGYGTKAZPQXCDYJQRMEJKHI");

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
    msg.setTimeStamp(0.9327751659345338);
    msg.setSource(38609U);
    msg.setSourceEntity(218U);
    msg.setDestination(3989U);
    msg.setDestinationEntity(57U);
    msg.req_id = 12322U;
    msg.status = 25U;
    msg.text.assign("VZUQKUJMNOPTOXSJ");

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
    msg.setTimeStamp(0.04949366290858126);
    msg.setSource(8399U);
    msg.setSourceEntity(155U);
    msg.setDestination(51358U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("ECKKWSAMEHXATHZFHJIUBYAXKRTFPIOENIUORNUYWJVUWAWRFONEGPTKVWBOXOFGASBCCOMMTGYVQDQUQISJZJXGRYQCKODGXLSULVVDPBQYZZPHHCGQFDCJFHJTZDFWADNMHCPIKTNBIYFAYXRGYNAKPCZDKLSUXKFCVMHFMBBZHWRMQZJMSINYTAPLEMGPSIJN");
    msg.links = 2607594248U;

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
    msg.setTimeStamp(0.8029367579180662);
    msg.setSource(18590U);
    msg.setSourceEntity(45U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("CHQJUTTAQIIFJBCBRUZAYRBZQNHFSJMSSDXBMSDEGPULIIN");
    msg.links = 2211686448U;

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
    msg.setTimeStamp(0.25056444415557366);
    msg.setSource(7537U);
    msg.setSourceEntity(65U);
    msg.setDestination(56333U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("OTXATOSVQCECVGLLXOLGRKBNBAZWJVEPUMINWFPJJDORGEYNFZHZQYSYCMTNIWHYDZBMIUSHQGQAVBJIAACEJZPCZWMHYHOJFBFFXVONSBFJLGJQSQWKAPAWKRHFRKUXXIUWKTFINEBKITYEPWWVVPAJQILXVMDKY");
    msg.links = 1114583640U;

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
    msg.setTimeStamp(0.658692417102732);
    msg.setSource(27636U);
    msg.setSourceEntity(129U);
    msg.setDestination(55789U);
    msg.setDestinationEntity(226U);
    msg.groupname.assign("KBFDYJEEOXZUVQPDJTICFVFETIHNCIKRHIMCWSGSBXLDCZGTXJXGJKSQPBZDLYBYWGOUKROGICGANYPPAGTFOKWYHARRR");
    msg.action = 99U;
    msg.grouplist.assign("AJWAVPZLBQKZECAHSXZQXFMFTJCVNBSCKJFHLIZWAJPGNOHHABQFVSBYBRKWDKRNTPEPYSJYFMJYGDNIRPDQLLCOOXMSEYBJTAQTRZDDEUSDFNIWVHMIEYLGYDQFEQUQBWLXZKJTVXHXNZPCPTEPORTHVHRCMPU");

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
    msg.setTimeStamp(0.16528127890976685);
    msg.setSource(52238U);
    msg.setSourceEntity(105U);
    msg.setDestination(40635U);
    msg.setDestinationEntity(67U);
    msg.groupname.assign("UUYTEUCLOVKVJSWODHBBETNFUXFCQYVBMPYAMIFAICFEAFWZWSNOFJYGECYPVKLTUJPJAFZLKHQMPBQFFIXHJJDGVWINXXNTSSNDARXHCUPGVOSBYDJRLNPUVPKBOMHXEAXQLZLQOHNHAXXQRWEIYDOBKUSKJFWJBWQLSSCVKCRRWAMTWNZPJIEKDIODGOGA");
    msg.action = 235U;
    msg.grouplist.assign("XTTOQRVHANUURHCXFIDTVKOHOCLXNXWFEIZKCHZFDSNOCOIUGBAVJFZDIOQPWZKHPBFJSZIGTYUWKCSJLG");

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
    msg.setTimeStamp(0.388210181267181);
    msg.setSource(64435U);
    msg.setSourceEntity(62U);
    msg.setDestination(25509U);
    msg.setDestinationEntity(188U);
    msg.groupname.assign("BPKTXIBFESTSHYUYTRWMZDVLHVPKQNUKXWALQFWXYOOOAJHWNAOBGRECCNACGDJOWHMLKEQI");
    msg.action = 207U;
    msg.grouplist.assign("SUFSZGPDIXNHUPWMILQKQEQWYVOJOSPKXSGKXHOAJLGNOKDRKCPBDOUFORDNNPHRYFTHJA");

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
    msg.setTimeStamp(0.19840883686616195);
    msg.setSource(405U);
    msg.setSourceEntity(143U);
    msg.setDestination(7177U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7967763975724983;
    msg.sys_src = 23490U;

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
    msg.setTimeStamp(0.4701364210839909);
    msg.setSource(50888U);
    msg.setSourceEntity(186U);
    msg.setDestination(7106U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9007207559098368;
    msg.sys_src = 57756U;

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
    msg.setTimeStamp(0.45323708165548826);
    msg.setSource(46800U);
    msg.setSourceEntity(250U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7055581771584615;
    msg.sys_src = 56398U;

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
    msg.setTimeStamp(0.4809251447101923);
    msg.setSource(16415U);
    msg.setSourceEntity(142U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(102U);
    msg.value = 0.985304967588626;
    msg.units = 20U;

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
    msg.setTimeStamp(0.1938643431027126);
    msg.setSource(15822U);
    msg.setSourceEntity(44U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7856690314611527;
    msg.units = 0U;

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
    msg.setTimeStamp(0.18841728104422528);
    msg.setSource(6227U);
    msg.setSourceEntity(207U);
    msg.setDestination(43708U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8538826152813898;
    msg.units = 228U;

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
    msg.setTimeStamp(0.3850651840086514);
    msg.setSource(45986U);
    msg.setSourceEntity(14U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.8800861734855188;
    msg.base_lon = 0.575817431002486;
    msg.base_time = 0.9120292250139246;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 39501U;
    tmp_msg_0.priority = -90;
    tmp_msg_0.x = -4829;
    tmp_msg_0.y = 8793;
    tmp_msg_0.z = 17454;
    tmp_msg_0.t = -26892;
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6134430541129029;
    tmp_tmp_msg_0_0.lon = 0.5528561389852374;
    tmp_tmp_msg_0_0.z = 0.8491818229786575;
    tmp_tmp_msg_0_0.z_units = 222U;
    tmp_tmp_msg_0_0.speed = 0.7015291545868183;
    tmp_tmp_msg_0_0.speed_units = 248U;
    tmp_tmp_msg_0_0.bearing = 0.4379435152923419;
    tmp_tmp_msg_0_0.cross_angle = 0.34723334396100525;
    tmp_tmp_msg_0_0.width = 0.8348113917108035;
    tmp_tmp_msg_0_0.length = 0.1785358859904348;
    tmp_tmp_msg_0_0.coff = 102U;
    tmp_tmp_msg_0_0.angaperture = 0.06551192935034833;
    tmp_tmp_msg_0_0.range = 22171U;
    tmp_tmp_msg_0_0.overlap = 22U;
    tmp_tmp_msg_0_0.flags = 119U;
    tmp_tmp_msg_0_0.custom.assign("NYKPFXWPEMXEPSHHBXZQBPRKXPRMIGISBUWOSTKOPBCLFGQASCDNHZZXGQVDCTOZTLGKSHAJWIBUISFKERRVAAJGGVKUTKWVOYLLNDUCTLRVAMDESTCJBZGCEYBAFIMCAUWOPFDVAREDUHQLLGKQUWXIKTVPOGNPWOIEEJZNVMLXDWSIZFHYJUQJB");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6613752331252203);
    msg.setSource(36231U);
    msg.setSourceEntity(193U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(175U);
    msg.base_lat = 0.47262373170344585;
    msg.base_lon = 0.9428384165699791;
    msg.base_time = 0.8997263771618768;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 14153U;
    tmp_msg_0.priority = 20;
    tmp_msg_0.x = 23112;
    tmp_msg_0.y = -20870;
    tmp_msg_0.z = 30983;
    tmp_msg_0.t = 21614;
    IMC::ReplayControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 76U;
    tmp_tmp_msg_0_0.file.assign("EXYYSJNFXQBLWXOUMRLDFTMSGUGVNGWXRXUVVQKABJSHFKWGBQQEXERQRNZDSEDDAUWMQCTPENEKKPUFNFRKRLIMKTSDPUOTOATMIIHACVBEHFYTAFLUHYFOYDRNHKCNOCJAISJGZCJBUPWBYJYSAUMZNOALZSCONCLQIPVGXIXZZMQILZHLZKPDHVJBSWCSH");
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
    msg.setTimeStamp(0.017581880329141764);
    msg.setSource(32146U);
    msg.setSourceEntity(20U);
    msg.setDestination(1277U);
    msg.setDestinationEntity(226U);
    msg.base_lat = 0.11234943249459861;
    msg.base_lon = 0.7691813282873329;
    msg.base_time = 0.5179222071336619;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 27753U;
    tmp_msg_0.destination = 14799U;
    tmp_msg_0.timeout = 0.10202502713412254;
    IMC::RegisterManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.mid = 39650U;
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
    msg.setTimeStamp(0.037984385291137346);
    msg.setSource(19841U);
    msg.setSourceEntity(88U);
    msg.setDestination(12769U);
    msg.setDestinationEntity(86U);
    msg.base_lat = 0.19621984027285433;
    msg.base_lon = 0.8007792593626032;
    msg.base_time = 0.04008606206240006;
    const signed char tmp_msg_0[] = {18, -55, -125, 79, -22, 85, -115, -42, 39, 21, 100, 66, -36, 31, -11, -86, 96, 59, 126, -7, -63, -64, -63, -17, -88, -60, -122, -128, 56, -73, 77, 65, -59, -5, 63, -4, 39, -38, -44, 47, 96, 82, -99, 36, 22, 119, 96, 113, 125, 15, -48, -98, -7, -18, 92, 87, 26, 112, 57, -125, -113, 87, 70, -79, 115, -27, 38, -123, -16, -109, 108, 69, 117, -15, -117, -9, 20, 95, -95, 16, 24, 32, 43, 97, -48, 21, -80, -78, -60, -20, 65, 11, 1, 45, -58, -79, -64, -15, 25, -78, -46, -123, 76, 107, 62, -121, 40, -11, 10, 108, -82, -76, 121, 19, -127, 16, 87, -105, -107, -13, -107, 121, 73, 102, 64, 23, 57, 120, -20, 105, 95, 3, 43, -59, -128, -21, -85, -77, 60, -81, -44, 111, 28, -15, 49, 126, 61, -25, -57, -97, -118, 36, -8, -117, -19, -81, -7, 97, 48, -50, 98, -8, 89, 120, 10, 93, -49, -15, -124, -7, -91, -53, 50, -84, -116, 9, 46, 98, -128, -105, 30, 90, 7, 60, 31, 79, 122, -4, 5, -42, -81, -65, 105, 35, -124, -36, -116, 51, -90, 92, 34, -89, 37, 106, 70, -128, -89, -69, 111, -70, 75, -99, -74, -24, -105, -81, -99, -20, -7, -97, -104, 75, 107, -116, 71, 98, -15, -29, -95, -79, -1, -47, -120};
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
    msg.setTimeStamp(0.1482076055289515);
    msg.setSource(57501U);
    msg.setSourceEntity(12U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(232U);
    msg.base_lat = 0.37620430734050403;
    msg.base_lon = 0.046502661508380116;
    msg.base_time = 0.3577789871800787;
    const signed char tmp_msg_0[] = {6, 75, -59, 38, -102, 107, 62, -9, -13, -98, -60, -67, 33, -50, 11, 119, -63, 81, 20, -39, -7, -112, 80, -38, -122, 87, -99, 81, -70, 82, 8, 1, -116, 113, 25, 121, -58, 114, 14, -55, -7, 83, 71, 54, 102, -127, -37, 47, -43, 53, 52, 32, -13, -59, -118, -69, -37, 43, -76, -89, -37, -27, -30, -18, 31, -113, 63, -35, -21, 66, -10, 83, 24, 54, 9, -112, -15, -126, 58};
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
    msg.setTimeStamp(0.1785773548200329);
    msg.setSource(41487U);
    msg.setSourceEntity(49U);
    msg.setDestination(22832U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.4355318283095011;
    msg.base_lon = 0.31971712117307993;
    msg.base_time = 0.40408568532295;
    const signed char tmp_msg_0[] = {-13, 109, -34, 23, -36, -91, -128, 67, -62, -35, 44, -82, 84, 118, -85, -99, -14, 45, 57, 113, 86, 115, -122, -4, -7, 95, 42, 81, -43, -28, -31, -128, 1};
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
    msg.setTimeStamp(0.0674290447100121);
    msg.setSource(44245U);
    msg.setSourceEntity(11U);
    msg.setDestination(2808U);
    msg.setDestinationEntity(129U);
    msg.sys_id = 20822U;
    msg.priority = 116;
    msg.x = -19305;
    msg.y = 6848;
    msg.z = -853;
    msg.t = 14013;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 140U;
    tmp_msg_0.op = 217U;
    tmp_msg_0.possimerr = 0.5348383661028872;
    tmp_msg_0.converg = 0.3948875574760655;
    tmp_msg_0.turbulence = 0.6135438338679581;
    tmp_msg_0.possimmon = 151U;
    tmp_msg_0.commmon = 220U;
    tmp_msg_0.convergmon = 217U;
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
    msg.setTimeStamp(0.6556465425425141);
    msg.setSource(18136U);
    msg.setSourceEntity(56U);
    msg.setDestination(3243U);
    msg.setDestinationEntity(59U);
    msg.sys_id = 30357U;
    msg.priority = 70;
    msg.x = 2458;
    msg.y = 32694;
    msg.z = 27778;
    msg.t = -11271;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("DGTITUKWPZDCSVXMSQSHTAPQADKZSCJCYHFOLCFZTBHGZNZGVDDNITCILPUGFSXUEHWRRLYRCWWOEKQXXMNKSPTBJJFLTMTRMHXYOVMKGEXURKADVUINPASREQAERWENFKOLQJGWJOQVPVVZPKIYRCVABDMLINUBYSMYMXQJHUANMHYBFBHIZGKTYQMNIAL");
    tmp_msg_0.sensor_class.assign("HBTBSPQQVBZUHGRRJDXNMYEF");
    tmp_msg_0.lat = 0.09320707828136998;
    tmp_msg_0.lon = 0.557520275120927;
    tmp_msg_0.alt = 0.7581743404837717;
    tmp_msg_0.heading = 0.0006510740692892147;
    tmp_msg_0.data.assign("BGJDMGNTDFHGISOMLBSNOZPCCRFXBQHIEVHPUP");
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
    msg.setTimeStamp(0.6665685869646636);
    msg.setSource(2912U);
    msg.setSourceEntity(158U);
    msg.setDestination(26193U);
    msg.setDestinationEntity(178U);
    msg.sys_id = 18471U;
    msg.priority = 89;
    msg.x = 1952;
    msg.y = 9713;
    msg.z = 25984;
    msg.t = -12000;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("HGGSTCICFNHIRXDWHNRDDOXEXJBLYDOMCBJEZVJTPMGQNBWFLEIZKUQIRHSCQASUIWDBFJOGGOZYAYAESYKZXDXXOLJZZGVGSLEAJDQMSUENIITJOLMJWK");
    tmp_msg_0.max_speed = 0.4061828029553801;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.lat = 0.6264484990259092;
    tmp_msg_0.lon = 0.13831891074146174;
    tmp_msg_0.z = 0.41087282516070933;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.custom.assign("QNAWJDDLFGWMECHOOQDPPCSHOODEZSYZBXASIQRGXHXRCCSAZATXUXL");
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
    msg.setTimeStamp(0.2525041823750277);
    msg.setSource(14871U);
    msg.setSourceEntity(88U);
    msg.setDestination(14252U);
    msg.setDestinationEntity(60U);
    msg.req_id = 11686U;
    msg.type = 212U;
    msg.max_size = 28996U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6410357065181017;
    tmp_msg_0.base_lon = 0.5780429024419279;
    tmp_msg_0.base_time = 0.8945120841695858;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 32343U;
    tmp_tmp_msg_0_0.priority = 75;
    tmp_tmp_msg_0_0.x = 1278;
    tmp_tmp_msg_0_0.y = 10895;
    tmp_tmp_msg_0_0.z = -3552;
    tmp_tmp_msg_0_0.t = 30360;
    IMC::LcdControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 58U;
    tmp_tmp_tmp_msg_0_0_0.text.assign("VQQADOJZNYEFUZKHOZLUMBDMNFEQJNPUCVBRCHCZMTJAOFNNDIGXTSPHQMKWXVSITK");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.9186815754880846);
    msg.setSource(58497U);
    msg.setSourceEntity(177U);
    msg.setDestination(2869U);
    msg.setDestinationEntity(181U);
    msg.req_id = 62440U;
    msg.type = 242U;
    msg.max_size = 27168U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9676608182630351;
    tmp_msg_0.base_lon = 0.6623623702866902;
    tmp_msg_0.base_time = 0.917406104469469;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 23370U;
    tmp_tmp_msg_0_0.destination = 4860U;
    tmp_tmp_msg_0_0.timeout = 0.059728603235698285;
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7110719982147172;
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
    msg.setTimeStamp(0.47431600993830236);
    msg.setSource(52916U);
    msg.setSourceEntity(227U);
    msg.setDestination(20268U);
    msg.setDestinationEntity(46U);
    msg.req_id = 38700U;
    msg.type = 71U;
    msg.max_size = 19470U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.28139536786624986;
    tmp_msg_0.base_lon = 0.23546635894088153;
    tmp_msg_0.base_time = 0.49033354483089653;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 64624U;
    tmp_tmp_msg_0_0.destination = 30273U;
    tmp_tmp_msg_0_0.timeout = 0.39626416962205446;
    IMC::TransmissionRequest tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 16919U;
    tmp_tmp_tmp_msg_0_0_0.comm_mean = 27U;
    tmp_tmp_tmp_msg_0_0_0.destination.assign("HVRDGZCEJUUFHOIPRJNGGWFCWAPWQIWPCRYGWRKXQCZYYZFZJAXTVSDTFLELAPBNTUNDLMYJDSPOUHCFTEOQECBHEEBQDRMGKBTLMXSZEKGANQTRNMDIJSIK");
    tmp_tmp_tmp_msg_0_0_0.deadline = 0.5742505500515553;
    tmp_tmp_tmp_msg_0_0_0.range = 0.8814783432825184;
    tmp_tmp_tmp_msg_0_0_0.data_mode = 18U;
    IMC::ReportedState tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.8776686257327635;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.5036361661662236;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.depth = 0.5016573376070613;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.roll = 0.8204410197133125;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pitch = 0.941633205695714;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.yaw = 0.5890076482470271;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.rcp_time = 0.024506988888214787;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sid.assign("BRKGPMEHRIKICYLHWENBPSZGCIMIGAXXNLWDUQAZGOTNLTELQDKSBBHIDSJVVUYJSLYJECIIYTJQNPOOBOWDYQSUKDXHVVRWFGSJLHWQSRK");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.s_type = 160U;
    tmp_tmp_tmp_msg_0_0_0.msg_data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.txt_data.assign("HGOZSWUJPHUUZHQFGCTJJHPZNFHGXIBDZAAVRKNMDWPUGDEFUFKKPZCJHOTBWIBDCYLRJOXVHXELGIVMAXQGAY");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_1[] = {62, -93, -68, 34, -39, -37, -110, 37, -109, 25, 1, -47, 23, -104, -111, 60, -34, 66, 75, -41, 69, -30, 24, 10, -75, -90, -93, -9, -56, 25, 111, 71, -59, -65, -86, -100, -112, 120, 111, 97, 39, -95, 53, 14, 39, 86, 21, 40, 23, 116, 18, 78, 56, -92, 58, -54, -82, -115, -9, 76, 8, 120, -24, 119, -50, -25, -80, 61, 56, 120, -31, -67, -2, -120, 126, 80, -123, -93, -4, -77, -104, -48, 115, 54, -114, -24, 124, -9, 32, 43, 19, -123, -19, -31, 121, -112, -4, 102, -28, 113, -67, 32, -6, -127, 7, -32, -78, 4, 8, -111, -21, 82, -78, 118, -105, -35, -106, 101, -61, 18, 76, 122, -47, 114, -29, -9, 58, 104, -125, -88, -14, 79, 88, 5, -27, 94, 107};
    tmp_tmp_tmp_msg_0_0_0.raw_data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_1, tmp_tmp_tmp_tmp_msg_0_0_0_1 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_1));
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
    msg.setTimeStamp(0.93125486728959);
    msg.setSource(54967U);
    msg.setSourceEntity(1U);
    msg.setDestination(37984U);
    msg.setDestinationEntity(200U);
    msg.original_source = 52046U;
    msg.destination = 44518U;
    msg.timeout = 0.9951946051358378;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.38694887903209263;
    tmp_msg_0.lon = 0.35776395674302985;
    tmp_msg_0.height = 0.1723844216190319;
    tmp_msg_0.x = 0.12427510175171896;
    tmp_msg_0.y = 0.23203935088834393;
    tmp_msg_0.z = 0.05571839211232421;
    tmp_msg_0.phi = 0.1573500167594677;
    tmp_msg_0.theta = 0.8444302129707072;
    tmp_msg_0.psi = 0.22754831140806042;
    tmp_msg_0.u = 0.2531340357587677;
    tmp_msg_0.v = 0.7805683957882386;
    tmp_msg_0.w = 0.6600330246385909;
    tmp_msg_0.p = 0.8704809555771055;
    tmp_msg_0.q = 0.5387493088967754;
    tmp_msg_0.r = 0.06118716384091927;
    tmp_msg_0.svx = 0.5500652950282248;
    tmp_msg_0.svy = 0.0944405649168858;
    tmp_msg_0.svz = 0.1881280344908356;
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
    msg.setTimeStamp(0.8601567341403737);
    msg.setSource(7500U);
    msg.setSourceEntity(80U);
    msg.setDestination(993U);
    msg.setDestinationEntity(125U);
    msg.original_source = 46211U;
    msg.destination = 59058U;
    msg.timeout = 0.8804530572885328;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.3599759607555325);
    msg.setSource(39373U);
    msg.setSourceEntity(150U);
    msg.setDestination(13634U);
    msg.setDestinationEntity(140U);
    msg.original_source = 23464U;
    msg.destination = 21059U;
    msg.timeout = 0.3803319106801668;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.511798575997064);
    msg.setSource(29937U);
    msg.setSourceEntity(234U);
    msg.setDestination(21590U);
    msg.setDestinationEntity(153U);
    msg.type = 143U;
    msg.comm_interface = 5004U;
    msg.model = 47546U;
    msg.list.assign("TOXERQTWYYGEMDLCMRXUMETNJWJSHSNVOUSKDSSZRFQWVYENNAUCLNGWGRFHHJJQBVLHPVDOYXMBZWHJHVDESBCHPZKQWUSLYUIPHQNGXQFRXUNAMIFBDCNQPNVQRAPNPDCWPOFZIFXTQBGJPRDAICYITJFFVKOEKBMLXBKKOBLJTZPSYICOZYXYEVAGJRCKFTYLGMGMDZK");

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
    msg.setTimeStamp(0.20883741479204865);
    msg.setSource(32926U);
    msg.setSourceEntity(111U);
    msg.setDestination(50825U);
    msg.setDestinationEntity(120U);
    msg.type = 17U;
    msg.comm_interface = 30932U;
    msg.model = 51306U;
    msg.list.assign("OOSDJWKCBADZRRTOXYCRWZAYDAMWKZCZTXVOLJFLBRHNLITLCJSXLRXPYDLCKABNDPRAVFMOPEZEEJOIPIHHJTVXQBINDUHPUOBBBGYEJNZHDKKPLFDPCSEHSWJUWZCIB");

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
    msg.setTimeStamp(0.19521030129161987);
    msg.setSource(60698U);
    msg.setSourceEntity(44U);
    msg.setDestination(41164U);
    msg.setDestinationEntity(195U);
    msg.type = 233U;
    msg.comm_interface = 38406U;
    msg.model = 25511U;
    msg.list.assign("PNLQSAXHCALIMJZCRKCYGFOXMKUOBDZGEHQMRXVRMYHAQYVEISHOJXULMFYQRZPPDUOEOGIFCKUBWPGXKSHJTSLURLEMAUCNQGIOLUXJFOJBQHSWZLDMXNFWCKZJGAJWTW");

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
    msg.setTimeStamp(0.7372351354659586);
    msg.setSource(44295U);
    msg.setSourceEntity(37U);
    msg.setDestination(23343U);
    msg.setDestinationEntity(233U);
    msg.type = 199U;
    msg.req_id = 2998171365U;
    msg.ttl = 25897U;
    msg.code = 78U;
    msg.destination.assign("KRHHXYHXNJMPKRWWVVLOFBRSMUSBTKTHDWVLFOSKAYGWUKMZQVWIDOBXSYJCPAOCJNQZIVCGGCZQGNTCEIFLYJRDXUFUPJVIPIVSNPXYPSOL");
    msg.source.assign("LXRNNOPMKHOZIDRWEEEMGNEOKPKOHQDYIHSZSVBALTNMXUJQQYAINDCMEHLKOAQOVESYHUFTQYMOLABGUGJIMTUHHSGRIWJXWJBJSIRSHCPDLXXGYCMXUPWPVKJMZZEGFSTYDNSGRLZPHQTFOHEYCPQBKFWNFBAEUCVXXNFCYWFAKXXLACWIKCMMJTCNNZUOWGBZQDLUATZYRPCDFPSGZBRWUVFJDIVWFBAIKJDJDBGTYLUVARORLTER");
    msg.acknowledge = 137U;
    msg.status = 221U;
    const signed char tmp_msg_0[] = {-113, 117, -65, -95, 56, 111, -63, 113, 47, 5, 108, -75, -3, 84, 47, -66, -11, -18, -14, 47, 9, 72, -10, -56, 9, -3, -4, 80, 121, -28, -128, -48, -104, -102, 118, 40, 83, 90, -106, -22, 62, 27, -53, 88, -118, -4, 6, -104, 52, -91, -57, 99, -9, -105, 52, 72, -96, -5, -61, -26, -94, -13, 27, -50, -114, -80, 88, 100, -15, -98, -113, 16, -64, -53, -27, 49, -51, -124, 24, -99, 0, -78, -107, -88, -70, 23, 113, 88, 78, 6, 79, 0, -76, -56, 42, 40, -41, -101, -21, 85, 81, -80, 96, 102, 91};
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
    msg.setTimeStamp(0.2881490629978486);
    msg.setSource(5212U);
    msg.setSourceEntity(155U);
    msg.setDestination(6542U);
    msg.setDestinationEntity(105U);
    msg.type = 176U;
    msg.req_id = 917646573U;
    msg.ttl = 63626U;
    msg.code = 75U;
    msg.destination.assign("ATVFZHXAZLAKSWDPETOPXUFVBSSANDBQTQRPQVATSUDRIIXLTMNGYJERZTDNDONBGGVGHCVIXAGLTOOZWFRMJXGPBMQEBVAPKMJKOKBYUDNLXLUSUOYIFORUQVMHJFCJUD");
    msg.source.assign("YOLWIOSNIBTBNTWYJNOPCDJLQKHJEGXOLSQYVVBYLIBESVBMQQTTFXMWXUDYIKWJRTWZQ");
    msg.acknowledge = 32U;
    msg.status = 59U;
    const signed char tmp_msg_0[] = {-31, 45, 74, 25, 96, 103, 78, -7, 105, -83, 68, -53, -72, -24, 70, -40, -73, 67, 81, -109, -73, 6, -109, -63, -122, -28, -77, -75, -124, -52, 35, -65, 112, 64, -77, -96, -46, -38, -74, -100, -38, 27, 21, -49, 88, 74, 87, 2, 22, 45, 66, 59, 64, -1, 97, -122, -101, -80, 23, 50, 43, 21, 57, 57, -17, 27, 32, 66, -82, 106, -8, -63, 92, 101, 92, 7, 69, 64, -34, -38, -13, 61, 119, -26, -123, -84, -115, -82, -14, -85, -9, -99, -93, 67, 19, 87, -109, -30, 101, 90, 21, 71, 45, -111, 14, 33, -125, 110, 58, -17, 60, -36, -7, 29, 98, 36, 69, -40, 2, -86, -22, 55, 115, -97, -18, 12, 25, -71, -41, -2, -63, 67, -26, 55, 103, 16, 4, -55, 49, -98, -118, -74, 20, -63, 84, -19, -1, 122, 75, -27, 104, 3, -58, -50, 123, 115, 64, -86, -4, -14, 91, -66, -74, -2, 13, 54, -36, 88, 14, -126, -34, -49, -65, -26, 74, 99, -32, 55, 55, 69, -61, 38, 93, -30, 2, -55, -6, 30, 55, -5, -64, 92, 53, -85, 104, -118, 88, -101, 10, -104, -67, -38, -101, -73, 106, 78, -97, -53, 108, -38, 82, 73, -63, 87, -115, -83, 116, -18, -58, 49, -108, 124, -54, -87, 77, 62, 62, -90, 40, 81, 75, 125, 51, -102, 109, -121, 107, 97, -52, -105, -64, 56, 73, -106, 79, -53, 64};
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
    msg.setTimeStamp(0.3020815248049068);
    msg.setSource(57958U);
    msg.setSourceEntity(113U);
    msg.setDestination(37129U);
    msg.setDestinationEntity(226U);
    msg.type = 4U;
    msg.req_id = 67505384U;
    msg.ttl = 52393U;
    msg.code = 140U;
    msg.destination.assign("LYDBKTWUHGIWZXMXNRCGAEGCURTAIJRQKPBURYKSPYEYSFIAVLTDTTGCEQUEQESHZXIFRNXRKGDXVUOIGHFCXPGHFTQJXVDZNVDHYGNUCDBOAOMASAYUMBOYVQYOHBOEKHOFMRBQGMQJMOKCSXERWWAPLWTZJMQCBPIPRZTSVNBESAIWO");
    msg.source.assign("LWNHSQURQBMESJPMDXLBWOGLPLEIAWVLVPRTVBDJGANXIJDSKTHXUUAITEGDBLTOZIHFZIFYFVYKXJQHPD");
    msg.acknowledge = 35U;
    msg.status = 189U;
    const signed char tmp_msg_0[] = {-8, -64, -100, 23, 9, -16, 18, -59, 124, -128, -70, -43, -74, 106, -113, -5, -66, -72, -89, 125, -28, 37, -16, -88, 92, -43, 45, -29, 23, 28, 97, -103, 115, -82, -80, -43, 36, -115, -120, -83, -57, -45, -101, -87, -6, 66, -19, 125, 107, 18, 4, -121, 31, 49, 20, -81, 42, 18, -10, -114, -29, 33, 48, 14, -64, 38, 2, 85, 110, 45, 101, 85, -31, 115, -43, 99, -45, 63, -38, 91, 95, -55, 80, 23, 102, 94, -27};
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
    msg.setTimeStamp(0.7474028604376334);
    msg.setSource(35320U);
    msg.setSourceEntity(249U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(213U);
    msg.id = 52U;
    msg.range = 0.574746101744071;

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
    msg.setTimeStamp(0.34208143940055225);
    msg.setSource(56368U);
    msg.setSourceEntity(132U);
    msg.setDestination(52901U);
    msg.setDestinationEntity(66U);
    msg.id = 149U;
    msg.range = 0.3443875657961267;

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
    msg.setTimeStamp(0.336623083945892);
    msg.setSource(65170U);
    msg.setSourceEntity(75U);
    msg.setDestination(11989U);
    msg.setDestinationEntity(180U);
    msg.id = 159U;
    msg.range = 0.9644396194600644;

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
    msg.setTimeStamp(0.4254551404677366);
    msg.setSource(24284U);
    msg.setSourceEntity(88U);
    msg.setDestination(15096U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("JMRPGNEWDXRYCHUMAOYSQAGLQBEXMLCHZAQUNKOBWLVTWGRPMPIUBFXWYOTNPQVBCSIMPVYOSBNVDUVQKGESSCLGVXUVGQHNSLHJFBOPUCNWVTLBTYAJLWMZVPRJFNMSGNKKQBEAKHRZJK");
    msg.lat = 0.7872583644491215;
    msg.lon = 0.6883088660092739;
    msg.depth = 0.5433394894988198;
    msg.query_channel = 218U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 128U;

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
    msg.setTimeStamp(0.17102641624603432);
    msg.setSource(32345U);
    msg.setSourceEntity(84U);
    msg.setDestination(35518U);
    msg.setDestinationEntity(12U);
    msg.beacon.assign("NKMAWTRBIIOCLKRBRZPFSUDONRJHPCKWM");
    msg.lat = 0.043136289722294885;
    msg.lon = 0.08594220919451334;
    msg.depth = 0.9547565070442685;
    msg.query_channel = 93U;
    msg.reply_channel = 140U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.6179881751619775);
    msg.setSource(39107U);
    msg.setSourceEntity(99U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(2U);
    msg.beacon.assign("MCGJHZBMVGBSFWSRGAKSIUECZEWUDNMKZMWMDGBVGKVZQNZOQCFETKORHOUJLAYYFYKADDBHHUQNEJQDERCXPGYABLXVWQDWTUPSCJYWSB");
    msg.lat = 0.1589998158239755;
    msg.lon = 0.8255485717745017;
    msg.depth = 0.005008171227103064;
    msg.query_channel = 200U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 109U;

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
    msg.setTimeStamp(0.2232374077619501);
    msg.setSource(52085U);
    msg.setSourceEntity(132U);
    msg.setDestination(30604U);
    msg.setDestinationEntity(214U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.4520760528444431);
    msg.setSource(295U);
    msg.setSourceEntity(74U);
    msg.setDestination(51427U);
    msg.setDestinationEntity(105U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.13901268629657704);
    msg.setSource(50419U);
    msg.setSourceEntity(19U);
    msg.setDestination(22170U);
    msg.setDestinationEntity(252U);
    msg.op = 187U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LEVKORFVYJMILCOOEGQZSENICNKBAYNRRTMRVLWFOJPYJGEBPCJJCMXEBQDBMUUSGQMYSYCTVUUWKNLTEOVHXCSEKK");
    tmp_msg_0.lat = 0.018026565822912066;
    tmp_msg_0.lon = 0.056156416722770164;
    tmp_msg_0.depth = 0.013324053536291736;
    tmp_msg_0.query_channel = 89U;
    tmp_msg_0.reply_channel = 85U;
    tmp_msg_0.transponder_delay = 174U;
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
    msg.setTimeStamp(0.9534442714598276);
    msg.setSource(11043U);
    msg.setSourceEntity(103U);
    msg.setDestination(60708U);
    msg.setDestinationEntity(4U);
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 33U;
    tmp_msg_0.snapshot.assign("JDKQQRSYLFVEJZOMDPXXEMPMDWIUNXCXWEISTTACPOXESFICZKRVBAHZQYVLKZCDPQZVGXMAZNEHKDKVIODCWKWUPIQOWOUNOGBCPHQBYDMYCJLPFZXKYPXQWTEOSIVUJQHYBRFWGSSLGALIGSJZHHGTJMMRBOMJDMHXBTNAAFKLGHATREUVIBFYNLHLFWHRUPAUCCSKYFDGCBRLONNVETSAMXIFNBVFKQVBEEYZWUYGWSGJJRNTQTO");
    IMC::SmsStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 10493U;
    tmp_tmp_msg_0_0.status = 244U;
    tmp_tmp_msg_0_0.info.assign("WNEXUOZQPIBBZTLACQHDHZVSPTGGZDTZDSVTLJAOMDZYYEMRNTZUIQRJHKSERILXBXLCFQTEDFEIXWUHBKQRCWQXFSSMJRRLAVWLUFKUPFJUBLJPIVBGOEYEXQKYCBOGPUSFYEUHGHEQDAAWKZFIHHGOIDGHKCWSAMVCQ");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9377556257339317);
    msg.setSource(35964U);
    msg.setSourceEntity(198U);
    msg.setDestination(41708U);
    msg.setDestinationEntity(254U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("SHSOOFWYYYBINRKNNPCWYJPVFMVDBBWPYVWXLHZ");
    tmp_msg_0.state = 245U;
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
    msg.setTimeStamp(0.4734485334775248);
    msg.setSource(57193U);
    msg.setSourceEntity(210U);
    msg.setDestination(40904U);
    msg.setDestinationEntity(254U);
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5141464009344372;
    tmp_msg_0.lon = 0.3370212733599627;
    tmp_msg_0.height = 0.7578766235038937;
    tmp_msg_0.x = 0.11736587450583669;
    tmp_msg_0.y = 0.7530210780264026;
    tmp_msg_0.z = 0.2878995285481615;
    tmp_msg_0.phi = 0.40315216984656876;
    tmp_msg_0.theta = 0.3669622362362416;
    tmp_msg_0.psi = 0.11156254438843927;
    tmp_msg_0.u = 0.7391905414991358;
    tmp_msg_0.v = 0.4449608807122931;
    tmp_msg_0.w = 0.6252677383781813;
    tmp_msg_0.p = 0.4149107754274767;
    tmp_msg_0.q = 0.1572254647118312;
    tmp_msg_0.r = 0.06545852319158751;
    tmp_msg_0.svx = 0.2830559372232335;
    tmp_msg_0.svy = 0.5591681772408365;
    tmp_msg_0.svz = 0.1078425659955935;
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
    msg.setTimeStamp(0.21704225390506504);
    msg.setSource(62267U);
    msg.setSourceEntity(168U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.3445403236519421;
    msg.lon = 0.21802129374050672;
    msg.depth = 0.8589203855842753;
    msg.sentence.assign("TRSXDHXSTGLZNSMKOVCWZRSBPAJDSNDIKGPGWEYHUMXPMWMUTORFYDEZRGEOHEJLLZTHSIYVXRFZQJZFTTNQPVNFHCLERQJBHDKMKHQJBSALKGNGWCKVZMQFOYPQIIZOGKIAJRASDIDLIXWWCXJOWUWIUFAPHEKSFQVDYRJYYUPGSULUEARNJFQBRMBNTVMOVBQILQYKJULCCNPGATACPLYNBFDFAYKXGNEPWACZBEXTBVOOTC");
    msg.txtime = 0.08508110299934268;
    msg.modem_type.assign("KLQTJSOYECMKTOKZMCWMSKKVPPUZPRFIIRXNHYUJBQFEJPXENTAZCBJNFADVGMXYXMNBECCKIEWRSQDTAPEXVDQFKLILAKFUAVZGCJZRFDUNTRBQBQNDOJDOQWEVKPZNCDHMHFARVLBHOWIWALXXJNWGZJQSJMHUGXTYILQSDAVVKYAHWTSDPYGCZBHXSYULULYVBO");
    msg.sys_src.assign("VURLTNZVXPRZKPFBGTMZKPKHOFIBYLIMNHXXSVXOTQBXKJOZHPIGBWPFTMARLYBODNWQCLAWCAJKTBCUARTJGKFWHQFEEXNVPDJMZJKCYUJSKQMEIMCZMVXGQQUUSYKUEHMLAYVIDGIQWGSNCSVMRSCXROIOWEDCPQFHDPWUHGTANAXURBD");
    msg.seq = 37552U;
    msg.sys_dst.assign("LTRLFFLSIBNXDRSWVQCHVDEZPXCQRYABMPUFYBBKEVRNKKPWJAPOMOMHPXBXYTISNSPNGAUGMFEIAKKTHALZXLRGSHPNGVNFMJJXCHCHTXWKEPDJTSQKOQHRNMWGCZHYWVCAOSCGFQMDYDVYCTUNQQVUMUYFI");
    msg.flags = 159U;
    const signed char tmp_msg_0[] = {39, -47, 101, -4, -22, 122, 93, 44, -78, 39, -86, 62, 78, -37, -16, 20, 77, 82, -19, 40, -38, -4, 74, -111, 122, 124, 126, -105, 118, 110, -73, 17, 38, -71, -29, 108, 101, -87, -13, 21, -93, -23, 112, -33, -28, 69, -7, -49, -52, 56, -93, -24, 124, 87, 45, -76, 10, 25, 8, -105, -119, -1, 95, -14, -81, -53, 105, 77, 91, 71, -25, 55, -97, -94, -11, 42, -60, 125, 112, 124, 8, -11, -31, 11, 113, -59, -32, 12, -64, -110, 71, -116, -72, -58, 64, 78, 6, -54, 45, 106, 45, 17, -19, -10, -96, -78, -2, 62, -102, -87, 48, 43, -115, 92, 47, 12, -94, -116, -22, -18, 115, -102, 11, 41, 81, -114, 78, 72, -86, 123, 1, 10, -73, 106, 30, -40, -68, -113, 109, -68, -47, 118, -28, -68, 5, -128, 12, -83, 72, 17, 97, 97, 92, -2};
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
    msg.setTimeStamp(0.992755309476024);
    msg.setSource(64327U);
    msg.setSourceEntity(2U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.9909335013245163;
    msg.lon = 0.6753305210977248;
    msg.depth = 0.5989731083897307;
    msg.sentence.assign("ILIEGKNLVMIGCUNNSLKLHCAQXJPKTOXYJZXCJXWZINFFIUSGFYHBAVWTDSGGRAGPZVMFKXNSDNPMZDJJMRRHMEWOOIWCVAOBRVEWAEFBDUVAROJOSXBDKQVHTZQPPFMQUYNMRHQEILEBJKXEHRNLWTUYQBFHLMYWOLCEUYDHQCDRZIGLYPSXJNBOSCQZDYCLDAXFUVWTQTPVKFCBFEKKCPUTJDTMHSWMJGZSBATUZOZIYYAWG");
    msg.txtime = 0.6340783181925927;
    msg.modem_type.assign("MWCJKFHQMXXLACGNLJYKBBLKAGMFAUNYCDGKMTFXNPWXSZRWLVOCPTGIHICFVLBHWFVPGSTPDVCPTADEEBMDMGFTAEUADSHZZBWNUHHVGJAOMRHOJIFEQRWAJRPRYOUYZ");
    msg.sys_src.assign("SCVEXDCBJVPWJRJMSTAAKNHUQTIUBIILDSQYOBMHGECKMUETADLJMKIDULSTHPCNPNFHKUVIQLLLQRVEKCSEEYRZZELF");
    msg.seq = 7234U;
    msg.sys_dst.assign("MKZQWZFBUPDFZBKBXYUGNSOCANGLIEKQVBXOAVLZCJRWNDHUDUYBNACWKKIXVYXCJJMRIETXMEPAN");
    msg.flags = 200U;
    const signed char tmp_msg_0[] = {-3, 73, -94, 70, -104, -78, -19, -42, -96, -74, -84, -99, 25, 28, 72, 61, -93, -96, 121, 1, 100, -33, 113, 14, 31, -43, -58, -66, 88, -84, -103, 62, -13, 110, -10, -24, -59, 18, -103, 104, 44, -114, 80, 60, -2, 32, 100, 6, -13, -54, -119, 39, -7, 36, -46, -88, -16, -102, -53, -64, -66, 36, -86, 125, 34, 67, -116, -113, -98, -46, 116, 92, 17, -98, 74, -93, 117, -70, 103, -33, -44, -125, 0, 6, -97, -88, 29, 71, -69, -6, -4, 2, 108, -50, -78, 16, 56, 76, -95, 97, 68, 65, 26, 115, 118, -16, 24, -20, 51, -50, 70, -126, -105, 70, 81, 113, 31, -32, 83, 79, -7, 15, -112, -9, -82, 93, 52, -70, -97, 26, 68, -106, 102, -24, 69, 106, -117, 67, 122, 1, -102, 6, -24, 51, 47, -63, 84, 116, -70, 13, -88};
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
    msg.setTimeStamp(0.7397752703051079);
    msg.setSource(3401U);
    msg.setSourceEntity(146U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.3299867646754171;
    msg.lon = 0.5557707352979111;
    msg.depth = 0.4814471777780359;
    msg.sentence.assign("NAHWZHZIXPQFQVSULYHJDEFMPCAQDLAMBKEQESYGOFTYTMWJTQZJLCNHYNZHVBSTISGXCRECULMLRVNUYBVKRDYIDPVHVGOZUIZTPAXYLJILXXMFQMCGAXN");
    msg.txtime = 0.9963804543912456;
    msg.modem_type.assign("FJDOCVUYPXDKJQHIVECBBVSHNNBKCFFYMXQYFFVQLWLTYNQJZWBFHAKRLNNREJJTSJEISQMNDXZCDRVWCMJKTFOXEGIVFPGNUNLEMNGRCWJSZRWDUYRWIVGBMJMPMMSTAFKQIOSPBLXUTZAOHLWVATOUOAMWPTJIFBGRYEZCYISBWXABOPIHXLGRYDCHULO");
    msg.sys_src.assign("QLOCVHYWTTZGVGPNHROTMJEBIZCCTHDAIXXVJMMLUS");
    msg.seq = 35301U;
    msg.sys_dst.assign("ENUWYPUHOCQCDRPJHDCNWXPRA");
    msg.flags = 226U;
    const signed char tmp_msg_0[] = {-101, -124, -37, 86, -21, 4, 83, -94, -89, -33, 2, 79, 23, -109, -65, -47, 1, -6, 4, 21, -34, -100, -26, 68, -35, -4, 42, 85, 40, 95, 61, -54, -5, -48, 105, 118, -33, 17, 89, 100, -36, 0, -32, 125, 120, 109, -66, -44, 59, -49, -92, -120, -111, -103, -63, 32, -48, 22, 44, -100, 101, -68, 115, 106, -42, -36, -33, -31, -102, 58, 19, -113, -29, 97, -35, -104, -121, 8, -19, -24, -30, -5, -92, -75, -43, 87, -62, -97, -78, -49, -94, -78, 42, 109, -7, 36, 66, -39, 69, -117, -120, -85, 57, -69, -114};
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
    msg.setTimeStamp(0.5113950578220701);
    msg.setSource(30778U);
    msg.setSourceEntity(179U);
    msg.setDestination(36320U);
    msg.setDestinationEntity(126U);
    msg.op = 60U;
    msg.system.assign("XHLLQQXFOSZWOENGUKHYMDNFJIMAEFIIQGOBCUPLBCVAXSWQVAMTBNGCZJFKJNORJRRVJGVPTKGEKFRFJUJRDMYYLUAGAZWVUNCVMUWOOACTZLCNYTZALVEXXQOPGEMINBTHDWWPOGMEJPEHQFWGNWCDTDRLYWYHBXPXTNVPLRKMJECEMUUEHZQTXIOBNAKDIIADSQHPZRKSYP");
    msg.range = 0.30755289118606266;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.3783130106980779;
    tmp_msg_0.bias_r = 0.15248730585793346;
    tmp_msg_0.cog = 0.8017306612085516;
    tmp_msg_0.cyaw = 0.9543347097013891;
    tmp_msg_0.lbl_rej_level = 0.28970674367635085;
    tmp_msg_0.gps_rej_level = 0.7276464162065712;
    tmp_msg_0.custom_x = 0.5862049529799718;
    tmp_msg_0.custom_y = 0.23934603786782926;
    tmp_msg_0.custom_z = 0.7936086999297833;
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
    msg.setTimeStamp(0.9510788584726414);
    msg.setSource(19392U);
    msg.setSourceEntity(104U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(21U);
    msg.op = 3U;
    msg.system.assign("BHODNMNWJBVEXSFPMMUPVTTHLCCFXOINJXHXRJKPICRVSMYGQESUYZVOFOLKNFLGIPCGZCJWCZJZYDNPYMKDWROUNXLILBQSLTBXWQAECPSSQQFHGQSAUY");
    msg.range = 0.9544252080003643;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 28U;
    tmp_msg_0.error.assign("LNMHQGWHOFDXWWVKTXOOMCETFCAQPMTHPCKBXREDHEFUAIYGJUXTVTYWSLVJOFOFPDZLMFVUXNNBQTDQRZAAUPMBLIRNOSEWYSNBGZNKXICEHAVVNJPMQRNNEKQYYXAQYUDRSGCGWZFEJBDYBLRQNVTUIQCJTPKAHKGMSMJKJGICAUBCLBKXHVPADPJLRREWRQFDZIHIBUTVSLPWXKGZMYZWHVWSJTOIIAMODOPFZGIHFUJCSX");
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
    msg.setTimeStamp(0.9188451592961979);
    msg.setSource(19421U);
    msg.setSourceEntity(214U);
    msg.setDestination(1131U);
    msg.setDestinationEntity(156U);
    msg.op = 190U;
    msg.system.assign("UOJNJDUHUZYCLIQFHZQVLEX");
    msg.range = 0.6732970513544247;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 212U;
    tmp_msg_0.list.assign("MMGKGQXRYZLPLWVVBOKHRGFVAGFWFMMTILMZDWALFCEETLXGDZNWISNTDQLWNHNZXOPDJSUEYOESKEVWOOHWANJLQXDIKZJCNCXEKTPVOCSKEJRBTAWPXJRKYBYVOMKIZYLVFGWNYANUJBOCAGBUSQRSMYOVUANE");
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
    msg.setTimeStamp(0.8055155385020406);
    msg.setSource(54146U);
    msg.setSourceEntity(39U);
    msg.setDestination(22188U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.2682389451281123);
    msg.setSource(47950U);
    msg.setSourceEntity(172U);
    msg.setDestination(1605U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.3683107233826276);
    msg.setSource(30779U);
    msg.setSourceEntity(132U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.918733240636606);
    msg.setSource(42783U);
    msg.setSourceEntity(201U);
    msg.setDestination(36122U);
    msg.setDestinationEntity(225U);
    msg.list.assign("RCQKHVQTWYICBIPPEDNGDWLCCYWPDFPUQVCTIRUAUEXQOOAYSUPGLAWPVSAADOXMYRHVQXXVGGVNSZBOIHKWJITYFMKGCTAXQBXJPJBFWAJRIDTASUJCNLXZHMOFGMNJMDYFXTWHBIZHUYEONNLIXYSAFUJCBVKDLPIKFQERMBKHRDGWFITCMTUSSQLTZHYHCJBJRKRDHVGLAOEXWRNLREOBZEKMZKPYFMB");

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
    msg.setTimeStamp(0.7399446193361634);
    msg.setSource(48308U);
    msg.setSourceEntity(202U);
    msg.setDestination(27215U);
    msg.setDestinationEntity(156U);
    msg.list.assign("IUBXNZODVLMNPTIIVEXCJTAKYMBZLGZTTHSZEGOJSRUDCBPZNMKTGJFMFZUHSQELJISVJLDUWYOAPFRCBGCTFWVQWRLRJASQXZXAOAPYHWKKBSIRALQMERDEYHRHHRGQFJDINWWXYMLNOCJVSQNGNTDQDBVFZRKNXUQGKEOTIBPVPHLKGBEWOFCWICAOMDCUPHHJXUOEYNMHPWVSOASXMSYFQUDBULQZUFKNKZTCMEIYYWJDVAGTBALIVYEFC");

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
    msg.setTimeStamp(0.07837201119538029);
    msg.setSource(59056U);
    msg.setSourceEntity(208U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(86U);
    msg.list.assign("NSIMFYDDZCOFGKDTXYOVIOVUEFTVWIXHOGONBOWLKSGYEKXLTPZQLNOPWQTIPSEGFANMWKPCYXCEEHBLHWQILMRFJTQSQJDGJTBVXZDRAJREABYPAYVNMIBAEJGVBHIDBNDZCRLFWSQWKPSVWPTIZDUBEMSAULOZAY");

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
    msg.setTimeStamp(0.0695669557939016);
    msg.setSource(44999U);
    msg.setSourceEntity(150U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(150U);
    msg.peer.assign("YDPDHBKZTYSROLJADIPTMOWZGFVSPEDYMIOJMYSFPGEAYRKETUBRFXPKVTAHXENDFBDZNQUHNHSFCACTIXLMYZMGOYQTRCEWDQVGGGPRDHIIJITRJEERATSMQGZQRKALEJUTSJUBYWMQKGQJASSXM");
    msg.rssi = 0.8553072916579975;
    msg.integrity = 28020U;

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
    msg.setTimeStamp(0.9966945510567295);
    msg.setSource(13829U);
    msg.setSourceEntity(45U);
    msg.setDestination(3759U);
    msg.setDestinationEntity(9U);
    msg.peer.assign("PLKGHUOYMFLNUATHAIGJKPBPVMCIDOTARBXGFPDTTZXTWOZSMENLAYJBZVPQYQBIKZWMTLHFCSZIRJSBXYNLEFUFMHUCILUGISHCSEMSKHNAKGWGHDHONVATWFMTFZKQOWMDBSZPRYTRR");
    msg.rssi = 0.44033879470834125;
    msg.integrity = 29749U;

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
    msg.setTimeStamp(0.5494991987255474);
    msg.setSource(6006U);
    msg.setSourceEntity(108U);
    msg.setDestination(43370U);
    msg.setDestinationEntity(98U);
    msg.peer.assign("APGTUMIWRQJRTGVWYJQXWCOWNGQEYHGPZMGNUNNGUKBKKEJHDPKFJSEECZRJMQZIIFVBQITRBRAOTRDJVANAKOPXESFCGFANGXMEBHHDHYDCLLBKPMURYFOFWNDHYWTRSTINSWNNYJUWMCXFGI");
    msg.rssi = 0.30787246334608764;
    msg.integrity = 3046U;

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
    msg.setTimeStamp(0.26094910427378626);
    msg.setSource(31961U);
    msg.setSourceEntity(122U);
    msg.setDestination(21580U);
    msg.setDestinationEntity(50U);
    msg.req_id = 52575U;
    msg.destination.assign("OJJOTQYDDETQISKQUPMEWUUGIBZKYQQYJFPAIIVDNCZFYDYLVYXAUHNLBVWIURRWMKEPVDADBAXTOSQKNBXXOPNMJQZMTKFATURSYEFPHDLHEXACHGTRGZFUVWTRKXPMITFFWBGNAIYNWKFVOUCAMCMRSINHEOUZLZWNHQTGVVIKZSLWALQXNREMSMLKEYDRSSBGVPPHLCIB");
    msg.timeout = 0.23153631900258875;
    msg.range = 0.4352310576945444;
    msg.type = 139U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 26950U;
    tmp_msg_0.flags = 109U;
    tmp_msg_0.lat = 0.7617233616446761;
    tmp_msg_0.lon = 0.52947819597267;
    tmp_msg_0.start_z = 0.2652818418154127;
    tmp_msg_0.start_z_units = 39U;
    tmp_msg_0.end_z = 0.24218617890597582;
    tmp_msg_0.end_z_units = 96U;
    tmp_msg_0.radius = 0.8860654773242922;
    tmp_msg_0.speed = 0.3509942584666865;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.custom.assign("AYEYXEHEYDRWKFHDCYSJJNMONCJVPJRIRZXSCZIVXHQEWXMBNSDRPVAPMGCOHDTKFTRITLZTOXBHTJGPBZWVMFKSNBHILZSEANBYWFKBWLQPLEINKYDUQIHLDFVNCDKPXMTZDAOBCCCONBTFBOXXKSZAEGQHUYBNWGFDTTMEYEQQIUOGCSUVHU");
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
    msg.setTimeStamp(0.911566276490739);
    msg.setSource(10693U);
    msg.setSourceEntity(242U);
    msg.setDestination(18783U);
    msg.setDestinationEntity(93U);
    msg.req_id = 46410U;
    msg.destination.assign("JULISOMHLRELINUSIDIOWKAOHZRAOAFZGVXNXDLOMSDXNGCBGCBJHCTVFDWYNH");
    msg.timeout = 0.9679019126282836;
    msg.range = 0.8795845879172941;
    msg.type = 89U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("CRQYZNDWIYTHEKXZFEEWVKEOAELRRUGCYEALQLLVQTXHBJHOSBFTLXCHRWOTVFVWNYOTQOFPPWVKJPLKNXCGPHWBAZFPSXUGDZGAYQSJCHRBGHQGUYJQZIWOZSMCDPZRBHMAPLAMKJXMKBZMVMOIRITFKDTMFNXV");
    tmp_msg_0.rssi = 0.9036863296496341;
    tmp_msg_0.integrity = 27255U;
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
    msg.setTimeStamp(0.8707069334801927);
    msg.setSource(877U);
    msg.setSourceEntity(63U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(113U);
    msg.req_id = 25098U;
    msg.destination.assign("OKUBSALUCIEPYBQZBOOMXWLLGDSQZYJCGNUOFOBBYPZGMNGSKUGGQQJYKFYNFNTBKYQIOPIYJKRZRFETLWSEXSMNVQLILNENGDEZTHIRLHPKPPJTHWEMCAFYXDBKVMEPBHDVMHAWSICRCFVVPXNBAUZOMNUZTQJOWOWUTQINEYHDVJ");
    msg.timeout = 0.4134229132468229;
    msg.range = 0.21138052087571846;
    msg.type = 19U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.5550080340883131;
    tmp_msg_0.lon = 0.6159408808430965;
    tmp_msg_0.speed = 0.48724087153306817;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.limits = 151U;
    tmp_msg_0.max_depth = 0.6881290268822042;
    tmp_msg_0.min_alt = 0.5611600921513481;
    tmp_msg_0.time_limit = 0.07606401267642693;
    tmp_msg_0.controller.assign("APQUIHMHSFSIDLBDXNWYACVJFBGJCZBEMYKUXVDUECZPIURKSTRCMOQPPTLZHTDEIKMPZIGIOIKUEJTAYIOTFNLGOSUJNSJMAHJQVWORRBQGJZKEUGXESMVXZELNXCWCAVXZCOULENK");
    tmp_msg_0.custom.assign("PXPFRJZWWACRVJGMPGGCTCLOZWUNKVPXUDMJUKQYNYOMKYQVDHRCAFCAENSOATPKULYOTRBOIBAGHCUULIFSSVIJRKEXYWPDGEBVDRPRUZDMQQYHHWQNJTLVHVPGSMFXWMFBMIAXTXATBPQXTKKDNBWIUZMIZKCJINJTOWBJXIS");
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
    msg.setTimeStamp(0.10471894108227486);
    msg.setSource(46709U);
    msg.setSourceEntity(72U);
    msg.setDestination(47445U);
    msg.setDestinationEntity(29U);
    msg.req_id = 19780U;
    msg.type = 177U;
    msg.status = 226U;
    msg.info.assign("PKXTJVYPCSGVCAFQUDIRIMIDTEGQNHUIKESHBQWHQUHUZOIYHEONTLXJXZWMBZVOFAWJSSQWJHMQZTDFENAJRCTCLLKKMRYRPIJEJYXSLUBFIUZLAPFWCCEAKRB");
    msg.range = 0.6696258386775483;

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
    msg.setTimeStamp(0.2890461949814973);
    msg.setSource(27799U);
    msg.setSourceEntity(233U);
    msg.setDestination(62114U);
    msg.setDestinationEntity(155U);
    msg.req_id = 11290U;
    msg.type = 213U;
    msg.status = 126U;
    msg.info.assign("CLYCQGQGMQUUXAJFKBTTNVSGTSCHYJVOCXYFRRRSPBPGDINEWNIFNAWZQORPATRDDNGWDJNZYTRFMJXHHZXTVEBJKELTYIUAHYZXVPUTHSODOEMDDISSMYQKPUHJJQAXBLOLANLGWKMWJUQKEHZHVECWWZDOLFKZXFFELKBWR");
    msg.range = 0.18379934366587647;

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
    msg.setTimeStamp(0.3549065706226048);
    msg.setSource(59834U);
    msg.setSourceEntity(139U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(85U);
    msg.req_id = 9227U;
    msg.type = 19U;
    msg.status = 55U;
    msg.info.assign("AJUVSQPCPRQHEFJUWNXYVEDAXUDHHSBKDYCZMDNBKPEJQQCJAWRMJCOOUYINGPTOQZGQWKDDZLFPBYTZVWVCNBLZMTOAMNXCFURXGOFEJMZPSAYYFSLPBITIQWZXG");
    msg.range = 0.9925857424625026;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.3689762403101723);
    msg.setSource(64805U);
    msg.setSourceEntity(121U);
    msg.setDestination(42524U);
    msg.setDestinationEntity(82U);
    msg.value = -31797;

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
    msg.setTimeStamp(0.12472331554750515);
    msg.setSource(32162U);
    msg.setSourceEntity(158U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(243U);
    msg.value = 29580;

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
    msg.setTimeStamp(0.1150430871628173);
    msg.setSource(50965U);
    msg.setSourceEntity(100U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(223U);
    msg.value = 14200;

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
    msg.setTimeStamp(0.40314326729907757);
    msg.setSource(35178U);
    msg.setSourceEntity(201U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9892940724246004;

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
    msg.setTimeStamp(0.5646085023644836);
    msg.setSource(46149U);
    msg.setSourceEntity(202U);
    msg.setDestination(19522U);
    msg.setDestinationEntity(80U);
    msg.value = 0.9439881398208931;

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
    msg.setTimeStamp(0.20631026570458566);
    msg.setSource(57784U);
    msg.setSourceEntity(10U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(233U);
    msg.value = 0.06226071759497909;

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
    msg.setTimeStamp(0.32299298423397715);
    msg.setSource(20129U);
    msg.setSourceEntity(39U);
    msg.setDestination(157U);
    msg.setDestinationEntity(18U);
    msg.value = 0.09768720667025133;

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
    msg.setTimeStamp(0.5769313149978436);
    msg.setSource(59301U);
    msg.setSourceEntity(246U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7463699842614898;

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
    msg.setTimeStamp(0.7865830097126928);
    msg.setSource(51570U);
    msg.setSourceEntity(149U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6181340886784962;

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
    msg.setTimeStamp(0.45191552743429975);
    msg.setSource(56934U);
    msg.setSourceEntity(101U);
    msg.setDestination(336U);
    msg.setDestinationEntity(210U);
    msg.validity = 286U;
    msg.type = 72U;
    msg.utc_year = 42349U;
    msg.utc_month = 160U;
    msg.utc_day = 108U;
    msg.utc_time = 0.46484663093958;
    msg.lat = 0.08952236468576757;
    msg.lon = 0.18783819257428302;
    msg.height = 0.26275842700529517;
    msg.satellites = 173U;
    msg.cog = 0.2878887494978549;
    msg.sog = 0.4509798069828642;
    msg.hdop = 0.38775728006447774;
    msg.vdop = 0.5548920326883303;
    msg.hacc = 0.8662006041934159;
    msg.vacc = 0.551684949188017;

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
    msg.setTimeStamp(0.25233626505911577);
    msg.setSource(16535U);
    msg.setSourceEntity(56U);
    msg.setDestination(54943U);
    msg.setDestinationEntity(106U);
    msg.validity = 50238U;
    msg.type = 75U;
    msg.utc_year = 8488U;
    msg.utc_month = 68U;
    msg.utc_day = 204U;
    msg.utc_time = 0.4746089224161316;
    msg.lat = 0.2770182908550869;
    msg.lon = 0.9458659467174215;
    msg.height = 0.6785241891918737;
    msg.satellites = 136U;
    msg.cog = 0.38895516578092537;
    msg.sog = 0.16068031964827378;
    msg.hdop = 0.5557655617039909;
    msg.vdop = 0.2700763469820783;
    msg.hacc = 0.1126986622943974;
    msg.vacc = 0.24253971405639074;

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
    msg.setTimeStamp(0.10321421943173081);
    msg.setSource(25068U);
    msg.setSourceEntity(4U);
    msg.setDestination(31774U);
    msg.setDestinationEntity(7U);
    msg.validity = 64876U;
    msg.type = 121U;
    msg.utc_year = 32360U;
    msg.utc_month = 69U;
    msg.utc_day = 250U;
    msg.utc_time = 0.5900188747645925;
    msg.lat = 0.5146027192771614;
    msg.lon = 0.6507463761693408;
    msg.height = 0.22192289144774946;
    msg.satellites = 123U;
    msg.cog = 0.8652667088703901;
    msg.sog = 0.1907348341848657;
    msg.hdop = 0.788269206474709;
    msg.vdop = 0.6110958377460053;
    msg.hacc = 0.5143186018273573;
    msg.vacc = 0.5938388738418959;

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
    msg.setTimeStamp(0.3070531003514284);
    msg.setSource(14972U);
    msg.setSourceEntity(84U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(170U);
    msg.time = 0.8397292453385845;
    msg.phi = 0.3038014261428652;
    msg.theta = 0.2552739669270494;
    msg.psi = 0.559734709416579;
    msg.psi_magnetic = 0.8426268127661365;

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
    msg.setTimeStamp(0.10555892079491469);
    msg.setSource(62328U);
    msg.setSourceEntity(102U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(110U);
    msg.time = 0.3779363086540629;
    msg.phi = 0.5390620302016912;
    msg.theta = 0.7120022218952606;
    msg.psi = 0.7031501126504656;
    msg.psi_magnetic = 0.12647611410056947;

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
    msg.setTimeStamp(0.9569357316738492);
    msg.setSource(10534U);
    msg.setSourceEntity(101U);
    msg.setDestination(61145U);
    msg.setDestinationEntity(136U);
    msg.time = 0.5917293276281608;
    msg.phi = 0.34769985833264694;
    msg.theta = 0.8498173424622605;
    msg.psi = 0.0659640978546816;
    msg.psi_magnetic = 0.3760601318206923;

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
    msg.setTimeStamp(0.5751101664407225);
    msg.setSource(28791U);
    msg.setSourceEntity(74U);
    msg.setDestination(45134U);
    msg.setDestinationEntity(18U);
    msg.time = 0.3608555371873535;
    msg.x = 0.35581707348159086;
    msg.y = 0.8384804512443212;
    msg.z = 0.006646533451016068;
    msg.timestep = 0.7746075166875118;

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
    msg.setTimeStamp(0.8155665615596982);
    msg.setSource(33286U);
    msg.setSourceEntity(37U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(65U);
    msg.time = 0.3852806124451298;
    msg.x = 0.03247621518509092;
    msg.y = 0.09004803135800532;
    msg.z = 0.5959871512503156;
    msg.timestep = 0.9743430674746454;

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
    msg.setTimeStamp(0.5680760834358114);
    msg.setSource(25983U);
    msg.setSourceEntity(181U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(86U);
    msg.time = 0.1579969072887938;
    msg.x = 0.16407913297916388;
    msg.y = 0.711277777175283;
    msg.z = 0.872404566124503;
    msg.timestep = 0.6676068161574331;

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
    msg.setTimeStamp(0.9899591656429957);
    msg.setSource(39911U);
    msg.setSourceEntity(115U);
    msg.setDestination(40262U);
    msg.setDestinationEntity(228U);
    msg.time = 0.7697672919080241;
    msg.x = 0.10373657886727405;
    msg.y = 0.10842025556295576;
    msg.z = 0.697251790694831;

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
    msg.setTimeStamp(0.02200828846655767);
    msg.setSource(32758U);
    msg.setSourceEntity(131U);
    msg.setDestination(39573U);
    msg.setDestinationEntity(172U);
    msg.time = 0.8086803554963335;
    msg.x = 0.02383271707283552;
    msg.y = 0.6931952101481191;
    msg.z = 0.31467904912125066;

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
    msg.setTimeStamp(0.21754378720387413);
    msg.setSource(14496U);
    msg.setSourceEntity(156U);
    msg.setDestination(28873U);
    msg.setDestinationEntity(200U);
    msg.time = 0.10726617217618661;
    msg.x = 0.0725569156046908;
    msg.y = 0.050707766683017796;
    msg.z = 0.7822260881661788;

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
    msg.setTimeStamp(0.4205194011475629);
    msg.setSource(13185U);
    msg.setSourceEntity(158U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(179U);
    msg.time = 0.5650699837319937;
    msg.x = 0.5182572428387051;
    msg.y = 0.9572929687197138;
    msg.z = 0.40337048309535173;

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
    msg.setTimeStamp(0.737681800998243);
    msg.setSource(2398U);
    msg.setSourceEntity(161U);
    msg.setDestination(63488U);
    msg.setDestinationEntity(43U);
    msg.time = 0.6633952476034362;
    msg.x = 0.9223240609327209;
    msg.y = 0.00884810987797513;
    msg.z = 0.2563866010240372;

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
    msg.setTimeStamp(0.38835621405510456);
    msg.setSource(21683U);
    msg.setSourceEntity(193U);
    msg.setDestination(15711U);
    msg.setDestinationEntity(98U);
    msg.time = 0.33484088268107515;
    msg.x = 0.7712307218842028;
    msg.y = 0.33922261636087814;
    msg.z = 0.10912487708606988;

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
    msg.setTimeStamp(0.132189541719424);
    msg.setSource(4599U);
    msg.setSourceEntity(79U);
    msg.setDestination(21007U);
    msg.setDestinationEntity(14U);
    msg.time = 0.9686614030820592;
    msg.x = 0.3880108418225685;
    msg.y = 0.11906682439114524;
    msg.z = 0.08216496923092464;

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
    msg.setTimeStamp(0.24414633551622233);
    msg.setSource(61116U);
    msg.setSourceEntity(66U);
    msg.setDestination(60818U);
    msg.setDestinationEntity(146U);
    msg.time = 0.920068627801746;
    msg.x = 0.7187658773230994;
    msg.y = 0.37898396709503324;
    msg.z = 0.9312012436904539;

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
    msg.setTimeStamp(0.5903655037103254);
    msg.setSource(15602U);
    msg.setSourceEntity(66U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(157U);
    msg.time = 0.6338932654219156;
    msg.x = 0.6392583790309815;
    msg.y = 0.5203231949741738;
    msg.z = 0.09958368669048157;

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
    msg.setTimeStamp(0.9471931988234252);
    msg.setSource(18926U);
    msg.setSourceEntity(87U);
    msg.setDestination(4680U);
    msg.setDestinationEntity(202U);
    msg.validity = 99U;
    msg.x = 0.3354196156027581;
    msg.y = 0.8903090339848138;
    msg.z = 0.8130953441660494;

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
    msg.setTimeStamp(0.14914622158524782);
    msg.setSource(56628U);
    msg.setSourceEntity(215U);
    msg.setDestination(26885U);
    msg.setDestinationEntity(216U);
    msg.validity = 154U;
    msg.x = 0.9667376413276983;
    msg.y = 0.5838403771603153;
    msg.z = 0.7695523142733628;

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
    msg.setTimeStamp(0.2923561320854803);
    msg.setSource(53679U);
    msg.setSourceEntity(54U);
    msg.setDestination(65433U);
    msg.setDestinationEntity(254U);
    msg.validity = 226U;
    msg.x = 0.8439636144985665;
    msg.y = 0.1423941874046447;
    msg.z = 0.9576047570695433;

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
    msg.setTimeStamp(0.9522255790152854);
    msg.setSource(28473U);
    msg.setSourceEntity(25U);
    msg.setDestination(51698U);
    msg.setDestinationEntity(49U);
    msg.validity = 121U;
    msg.x = 0.22230819082293152;
    msg.y = 0.04190383138160769;
    msg.z = 0.7725837643616084;

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
    msg.setTimeStamp(0.44622304995610285);
    msg.setSource(37757U);
    msg.setSourceEntity(23U);
    msg.setDestination(28066U);
    msg.setDestinationEntity(88U);
    msg.validity = 104U;
    msg.x = 0.1631159426119252;
    msg.y = 0.4128926268730929;
    msg.z = 0.5136209117641759;

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
    msg.setTimeStamp(0.45155682428833943);
    msg.setSource(30666U);
    msg.setSourceEntity(186U);
    msg.setDestination(37726U);
    msg.setDestinationEntity(123U);
    msg.validity = 28U;
    msg.x = 0.45091292456963716;
    msg.y = 0.7835543571948793;
    msg.z = 0.884502798826779;

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
    msg.setTimeStamp(0.6118874295242809);
    msg.setSource(52100U);
    msg.setSourceEntity(71U);
    msg.setDestination(41054U);
    msg.setDestinationEntity(217U);
    msg.time = 0.752804907323554;
    msg.x = 0.2366842300720028;
    msg.y = 0.6687066028598392;
    msg.z = 0.4700928147755036;

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
    msg.setTimeStamp(0.30146746851079886);
    msg.setSource(36567U);
    msg.setSourceEntity(189U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(164U);
    msg.time = 0.6591977447800457;
    msg.x = 0.5683265107592083;
    msg.y = 0.8241167186653425;
    msg.z = 0.34900599998660564;

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
    msg.setTimeStamp(0.6807918834282952);
    msg.setSource(48518U);
    msg.setSourceEntity(20U);
    msg.setDestination(49565U);
    msg.setDestinationEntity(144U);
    msg.time = 0.04177255415672754;
    msg.x = 0.9876154382486418;
    msg.y = 0.6221972368086023;
    msg.z = 0.14561118329093892;

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
    msg.setTimeStamp(0.21677577116007862);
    msg.setSource(22313U);
    msg.setSourceEntity(127U);
    msg.setDestination(15093U);
    msg.setDestinationEntity(26U);
    msg.validity = 202U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.13604194881777298;
    tmp_msg_0.y = 0.22083705740718884;
    tmp_msg_0.z = 0.5641868375389383;
    tmp_msg_0.phi = 0.7815863831980894;
    tmp_msg_0.theta = 0.2890100976964659;
    tmp_msg_0.psi = 0.13812787041841645;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5965146092890702;

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
    msg.setTimeStamp(0.4409033782228795);
    msg.setSource(35544U);
    msg.setSourceEntity(152U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(200U);
    msg.validity = 118U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8897010875871296;
    tmp_msg_0.beam_height = 0.32052249225687346;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.04036013079749157;

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
    msg.setTimeStamp(0.053578555219052526);
    msg.setSource(24239U);
    msg.setSourceEntity(7U);
    msg.setDestination(19757U);
    msg.setDestinationEntity(221U);
    msg.validity = 231U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8860548838816901;
    tmp_msg_0.y = 0.14142956815231345;
    tmp_msg_0.z = 0.17245180142718985;
    tmp_msg_0.phi = 0.35248044988557425;
    tmp_msg_0.theta = 0.4034095902680874;
    tmp_msg_0.psi = 0.049294736303719944;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.35852701884995297;

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
    msg.setTimeStamp(0.7836911907670686);
    msg.setSource(64614U);
    msg.setSourceEntity(32U);
    msg.setDestination(14347U);
    msg.setDestinationEntity(183U);
    msg.value = 0.04172523429313346;

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
    msg.setTimeStamp(0.21665240632538507);
    msg.setSource(23993U);
    msg.setSourceEntity(133U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(49U);
    msg.value = 0.42810069421111097;

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
    msg.setTimeStamp(0.05664059755437478);
    msg.setSource(23920U);
    msg.setSourceEntity(145U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(4U);
    msg.value = 0.2844391589241443;

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
    msg.setTimeStamp(0.8146438740024579);
    msg.setSource(32751U);
    msg.setSourceEntity(158U);
    msg.setDestination(35544U);
    msg.setDestinationEntity(68U);
    msg.value = 0.7575314903166751;

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
    msg.setTimeStamp(0.1802164453779962);
    msg.setSource(26195U);
    msg.setSourceEntity(157U);
    msg.setDestination(22967U);
    msg.setDestinationEntity(78U);
    msg.value = 0.781849251753175;

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
    msg.setTimeStamp(0.40240909688262216);
    msg.setSource(54847U);
    msg.setSourceEntity(198U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(54U);
    msg.value = 0.10830594201275523;

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
    msg.setTimeStamp(0.9513601862619977);
    msg.setSource(60625U);
    msg.setSourceEntity(21U);
    msg.setDestination(14934U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9545073764603526;

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
    msg.setTimeStamp(0.8646596099108116);
    msg.setSource(43537U);
    msg.setSourceEntity(39U);
    msg.setDestination(13949U);
    msg.setDestinationEntity(52U);
    msg.value = 0.23244317657094504;

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
    msg.setTimeStamp(0.3259126788161343);
    msg.setSource(37855U);
    msg.setSourceEntity(87U);
    msg.setDestination(15265U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7384296837219012;

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
    msg.setTimeStamp(0.3929832173590333);
    msg.setSource(16684U);
    msg.setSourceEntity(31U);
    msg.setDestination(28919U);
    msg.setDestinationEntity(0U);
    msg.value = 0.641970371936879;

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
    msg.setTimeStamp(0.34796965527642876);
    msg.setSource(46524U);
    msg.setSourceEntity(125U);
    msg.setDestination(10894U);
    msg.setDestinationEntity(12U);
    msg.value = 0.7261920840113799;

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
    msg.setTimeStamp(0.6476991214146006);
    msg.setSource(14010U);
    msg.setSourceEntity(183U);
    msg.setDestination(60104U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5010958566941798;

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
    msg.setTimeStamp(0.6711356653152264);
    msg.setSource(58045U);
    msg.setSourceEntity(173U);
    msg.setDestination(34063U);
    msg.setDestinationEntity(32U);
    msg.value = 0.29449651685901557;

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
    msg.setTimeStamp(0.8587202926477042);
    msg.setSource(32593U);
    msg.setSourceEntity(115U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(39U);
    msg.value = 0.020341421958598782;

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
    msg.setTimeStamp(0.8086026570877959);
    msg.setSource(51423U);
    msg.setSourceEntity(26U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(185U);
    msg.value = 0.4483687152330579;

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
    msg.setTimeStamp(0.3027653667620793);
    msg.setSource(49858U);
    msg.setSourceEntity(63U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(164U);
    msg.value = 0.012438406585645434;

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
    msg.setTimeStamp(0.8705728947914491);
    msg.setSource(17484U);
    msg.setSourceEntity(11U);
    msg.setDestination(17670U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6506142686575859;

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
    msg.setTimeStamp(0.13480224158493093);
    msg.setSource(19428U);
    msg.setSourceEntity(46U);
    msg.setDestination(232U);
    msg.setDestinationEntity(226U);
    msg.value = 0.18316138985061015;

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
    msg.setTimeStamp(0.6481677937993655);
    msg.setSource(316U);
    msg.setSourceEntity(98U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(19U);
    msg.value = 0.43560918652042846;

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
    msg.setTimeStamp(0.0923591743260137);
    msg.setSource(10364U);
    msg.setSourceEntity(150U);
    msg.setDestination(46604U);
    msg.setDestinationEntity(174U);
    msg.value = 0.5250291319883135;

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
    msg.setTimeStamp(0.24710993229222744);
    msg.setSource(13702U);
    msg.setSourceEntity(209U);
    msg.setDestination(62389U);
    msg.setDestinationEntity(66U);
    msg.value = 0.21470357027129616;

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
    msg.setTimeStamp(0.6664551771733184);
    msg.setSource(39316U);
    msg.setSourceEntity(131U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(21U);
    msg.value = 0.09606467655508444;

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
    msg.setTimeStamp(0.04435876006211037);
    msg.setSource(42385U);
    msg.setSourceEntity(91U);
    msg.setDestination(4894U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6827477905705668;

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
    msg.setTimeStamp(0.5273938241437274);
    msg.setSource(17597U);
    msg.setSourceEntity(50U);
    msg.setDestination(45042U);
    msg.setDestinationEntity(192U);
    msg.value = 0.1244442321147845;

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
    msg.setTimeStamp(0.6022082343037667);
    msg.setSource(55056U);
    msg.setSourceEntity(70U);
    msg.setDestination(7539U);
    msg.setDestinationEntity(216U);
    msg.direction = 0.06376080545685148;
    msg.speed = 0.22144122726686477;
    msg.turbulence = 0.9049517470561211;

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
    msg.setTimeStamp(0.2947325697026949);
    msg.setSource(18508U);
    msg.setSourceEntity(192U);
    msg.setDestination(42823U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.27467601467599734;
    msg.speed = 0.5063835581521003;
    msg.turbulence = 0.8408001963717953;

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
    msg.setTimeStamp(0.18282256269564);
    msg.setSource(54202U);
    msg.setSourceEntity(163U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(94U);
    msg.direction = 0.6573700533548301;
    msg.speed = 0.028333401574582973;
    msg.turbulence = 0.6072787574221291;

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
    msg.setTimeStamp(0.1400504273545612);
    msg.setSource(50713U);
    msg.setSourceEntity(156U);
    msg.setDestination(60246U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5982108839755652;

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
    msg.setTimeStamp(0.5194816510497912);
    msg.setSource(35605U);
    msg.setSourceEntity(204U);
    msg.setDestination(8995U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6471293095321898;

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
    msg.setTimeStamp(0.15689464292167954);
    msg.setSource(38471U);
    msg.setSourceEntity(233U);
    msg.setDestination(17196U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6257738018737101;

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
    msg.setTimeStamp(0.5767890580069481);
    msg.setSource(48066U);
    msg.setSourceEntity(117U);
    msg.setDestination(11862U);
    msg.setDestinationEntity(174U);
    msg.value.assign("ZKYAJRCUIRWMFOWVOIZKFXISDUWRPUFANJGNCIBRWPSKIJMEJPCHTDTJPLETDFRMYVTAJIXKZXFALGE");

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
    msg.setTimeStamp(0.6027032530331173);
    msg.setSource(18478U);
    msg.setSourceEntity(76U);
    msg.setDestination(57884U);
    msg.setDestinationEntity(193U);
    msg.value.assign("GHTQNHFXYBLCSWZDROXVXXOANVRCVDSFZDTS");

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
    msg.setTimeStamp(0.27787471888457915);
    msg.setSource(12932U);
    msg.setSourceEntity(220U);
    msg.setDestination(65042U);
    msg.setDestinationEntity(16U);
    msg.value.assign("LDYDUFXXVZHDQKTMOJGKWIMOQAVCRLHVOZUTWYNWNQKLGSINDJWBYIJADIUCBNDBWUVPRLFZTBIOCAOHYZAHSLCHPSICEGURHMHEQNLQJJOSJGVVBEJIFEMGUGTYKZVYWYGECXHTISBPZRQIRFRXQ");

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
    msg.setTimeStamp(0.1465662778856308);
    msg.setSource(43828U);
    msg.setSourceEntity(234U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(168U);
    const signed char tmp_msg_0[] = {16, 62, -80, 26, 33, -102, -12, -3, 7, 1, -25, -16, 27, 37, -39, 0, 72, 66, 84, -22, -115, -57, -112, 23, 68, 118, -14, -116, -98, -41, -112, -82, -83, -102, -27, 29, 73, -37, 40, 97, -1, -112, 26, 25, -70, 61, 4, -87, 107, 25, -56, -22, -18, -27, -63, -51, 19, -117, -116, 102, -15, 81, -117, 31, 60, -104, -94, -120, -69, 26, 4, -54, -64, -111, 37, 22, 120, -68, -112, -71, 91, -26, -91, 50, 96, 73, -116, -113, 103, -101, -85, 95, -103, 48, -69, 36, -48, -36, -55, -122, -103, -12, 124, -98, -112, 5, 70, 99, 95, -52, 19, -108, 110, -71, 35, 113, 111, 41, 15, 23, -8, 43, 108, 64, -122, -54, 64, 98, -51, 25, 49, 16, -8, 8, -102, -71, 70, -94, -89, 119, -93, -111, -126, -26, -64, -4, 47, -64, -84, 18, 60, 69, 52, -83, 75, -74, 108, -91, -49, 65, 91};
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
    msg.setTimeStamp(0.8710879082033159);
    msg.setSource(11138U);
    msg.setSourceEntity(84U);
    msg.setDestination(41948U);
    msg.setDestinationEntity(240U);
    const signed char tmp_msg_0[] = {-83, -51, -37, -67, -81, -34, 79, -118, -13, -108, 76, 119, 35, -101, -128, -32, -62, -24, 4, -15, -34, -21, 44, -34, 17, 110, -8, -90, -117, -13, 116, 90, 30, 28, -123, 126, -93, 96, 76, -59, 95, 103, -48};
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
    msg.setTimeStamp(0.46445290681562934);
    msg.setSource(3750U);
    msg.setSourceEntity(199U);
    msg.setDestination(15542U);
    msg.setDestinationEntity(103U);
    const signed char tmp_msg_0[] = {-101, -26, -79, -7, -55, 32, 98, -110, -101, 36, 91, 47, -19, 78, -12, 103, -107, 14, -54, -85, 78, -28, 29, -41, 87, 45, 98, -29, -70, 78, -8, 1, 90, 118, -11, 70, -26, 116, -108, 36, 27, 33, -83, 18, 45, -104, -62, 30, 93, 77, -95, -61, -120, -9, -122, 98, -31, -51, -33, -128, -60, -59, 44, -126, -32, 41, 27, -67, 125, 48, 65, 50, 82, -41, 56, -7, 90, -98, -105, 21, -62, 116, -37, 16, 100, 52, -113, 61, -47, 92, -84, 97, -104, -87, -72, 10, 68, 78, -23, 123, 124, -86, 1, 25, -127, 119, 11, -25, -83, 66, 42, 50, -106, 50, -42, -109, 6, 50, 62, 26, -124, -114, -122, -72, 44, -124, 94, -97, 45, -32, -91, 124, -118, 54, 52, 96, -101, -29, 66, -65, -31, 121, -94, -117, 74, -121, -81, 2, 44, -84, 5, -24, 30, 38, -87, 6, -98, -83, 68, -19, -78, -43, 42, 82, -23, -14, 108, 111, 11, 123, -112, -98, 70, -32, -25, 23, 112, -55, 90, -52, -79, 10, -29, -20, -108, 80, -17, 41, -10, -13, 27, 2, 53, -39, 115, 115, 1, -25, 33, -124, 47, -68, 117, 54, 63, 26, 115, -58, 83, -125, 54, -64, 92, -49, 97, -82, -101, -51, -93, -109, -9, -90};
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
    msg.setTimeStamp(0.5109641604817229);
    msg.setSource(61369U);
    msg.setSourceEntity(30U);
    msg.setDestination(14750U);
    msg.setDestinationEntity(184U);
    msg.value = 0.40244569465831626;

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
    msg.setTimeStamp(0.18093162901765347);
    msg.setSource(13601U);
    msg.setSourceEntity(97U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(134U);
    msg.value = 0.5045489668352058;

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
    msg.setTimeStamp(0.6117972205355162);
    msg.setSource(9137U);
    msg.setSourceEntity(174U);
    msg.setDestination(31221U);
    msg.setDestinationEntity(136U);
    msg.value = 0.11222523413214203;

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
    msg.setTimeStamp(0.5977155220846052);
    msg.setSource(19920U);
    msg.setSourceEntity(69U);
    msg.setDestination(39474U);
    msg.setDestinationEntity(21U);
    msg.type = 142U;
    msg.frequency = 4181707963U;
    msg.min_range = 12135U;
    msg.max_range = 20628U;
    msg.bits_per_point = 82U;
    msg.scale_factor = 0.3953981726571608;
    const signed char tmp_msg_0[] = {42, 110, -27, -62, -69, 109, -11, -19, -16, 53, -5, -26, 19, -25, 123, 104, 48, 110, 68, -122, -21, -90, 52, 58, -83, 107, -62, 119, 12, 82, 93, -36, -48, -88, -64, 8, -90, -83, -74, 119, -4, 28, -9, -108, -95, -6, -5, -95, 106, -97, -110, -96, 55, -58, 103, 25, 31, -87, 4, -14, 32, 65, 83, -76, -7, -122, 119, 61, 50, -70, 77, 120, -98, 75, -100, -26, 25, -74, 87, -119, 67, -106, 24, 10, 110, -113, -26, -33, -28, -34, -99, 105, 68, 111, -8, 71, 112, -95, 107, -120, -108, 103, 9, -23, -17, 120, -51, 114, 28, -94, -73, 95, -31, 12, 58, 12, -47, -116, 111, -91, -46, 67, -114, 32, 49, -71, -93, -68, 126, 69, -28, -121, 73, -46, 41, 39, 111, 81, -2, 0, 78, -75, -114, 87, -22, 107, -116, 52, 50, -124, 116, -47, -31, 8, -112, 82, -90, 45, 119, -127, -106, -10, 116, 66, 82, 61, -68, -67, -37, -85, 123, 8, 20, 52, -39, 4, -109, -23, -79, 93, 50, -6, 11};
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
    msg.setTimeStamp(0.8189156131145215);
    msg.setSource(19616U);
    msg.setSourceEntity(137U);
    msg.setDestination(15375U);
    msg.setDestinationEntity(146U);
    msg.type = 44U;
    msg.frequency = 4256755751U;
    msg.min_range = 5853U;
    msg.max_range = 32625U;
    msg.bits_per_point = 84U;
    msg.scale_factor = 0.011735532616893085;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.30267656700532364;
    tmp_msg_0.beam_height = 0.19546222540910663;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-1, 23, -118, 104, 109, -5, 118, 61, 4, 23, -116, -23, 118, 45, -101, 58, 62, -56, -78, 107, -59, 32, -97, 20, 84, -80, -17, -15, -19, 6, -82, 39, -27, 97, -73, 90, -80, 112, 2, -125, 51, 76, -16, 61, -93, -40, -109, 50, 98, 5, -42, 104, 107, 48, 81, -67, -29, -67, -120, -69, -38, 47, -54, -66, -75, -57, -37, -69, 29, -112, -71, -112, -66, -8, -1, 45, -101, 8, -84, -105, -18, 126, -125, -38, 47, -120, -59, 48, 50, 65, -67, -80, 97, 98, -30, -110, -79, -89, -88, 47, -11};
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
    msg.setTimeStamp(0.3513715795084864);
    msg.setSource(61583U);
    msg.setSourceEntity(96U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(164U);
    msg.type = 45U;
    msg.frequency = 3723693035U;
    msg.min_range = 49199U;
    msg.max_range = 11840U;
    msg.bits_per_point = 48U;
    msg.scale_factor = 0.9224399321921956;
    const signed char tmp_msg_0[] = {81, -46, -110, -117, -48, 65, 8, -36, -38, 98, 6, -58, -61, 94, -3, -1, -43, 92, -117, 76, -25, 11, -14, 28, -30, -74, 117, -2, 10, 8, 21, -32, -74, -23, 55, 83, 79, -49, 95, 91, -35, 21, -34, -57, -104, -115, 101, 124, 46, 96, -21, 19, -120, -114, 95, -16, -127, -91, 17, 0, -24, 50, 86, 124, 107, 77, -48, 29, -50, 52, -39, 91, -108, -48, 100, -24, -83, 87, 6, 50, -35, -20, 116, 13, -78, 42, -34, 99, 125, -23, -48, -46, -127, -47, -95, -69, -32, -79, 14, 52, 96, -80, -31, 3, 27, 19, 123, 70, -43, 29, 107, -65, 4, -122, -42, 101, -47, 77, 55, -62, -14, 47, 94, -46, 9, 33, -32, -10, -51, 14, -70, 126, 68, 9, 16, 37, -67, 63, -127, -109, 2, 98, 123, 36, 22, -120, -80, 64, 29, -58, 104, 18, -115, 80, 70, -47, -64, -15, 31, 46, 102, -124, -42, 27, 7, 99, -64, -90, -102, 76, 25, 88, 16, 7, -126, -16, -17, -55, -115, -20, -116, -39, -57, 62, -25, 4, -125, -90, -6, 58, 16, -124, -62, -65, -8, -34, -12, 40, 75, -52, -69, 74, 62, 125, 110, 10, 109, -88, -42, 0, 41, -48, -51, 108, 120, 4, 107, 81, -1, -124, 48, -120, 91, -112, 82, -116, -108, 86, -75, 44, 114, 36, -127, -106, -109};
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
    msg.setTimeStamp(0.31234080106733964);
    msg.setSource(27733U);
    msg.setSourceEntity(23U);
    msg.setDestination(64178U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.07320386993341688);
    msg.setSource(19277U);
    msg.setSourceEntity(237U);
    msg.setDestination(3278U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.588839660766349);
    msg.setSource(65038U);
    msg.setSourceEntity(172U);
    msg.setDestination(30084U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.7484455547872935);
    msg.setSource(18288U);
    msg.setSourceEntity(150U);
    msg.setDestination(45460U);
    msg.setDestinationEntity(28U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.3542865647255026);
    msg.setSource(61942U);
    msg.setSourceEntity(157U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(227U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.9477741180767332);
    msg.setSource(4437U);
    msg.setSourceEntity(131U);
    msg.setDestination(61322U);
    msg.setDestinationEntity(76U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.3933230021611306);
    msg.setSource(34590U);
    msg.setSourceEntity(9U);
    msg.setDestination(60339U);
    msg.setDestinationEntity(180U);
    msg.value = 0.9717877536202794;
    msg.confidence = 0.2196960434992954;
    msg.opmodes.assign("UDQGNTOMPUULMRYVFDDPUMWHPHVGSZXVCALINMRBXJMZAKCPVTTEBYETZYPKFSVILEDGTNQAMRZHCIHWIPTUQWSBWZQK");

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
    msg.setTimeStamp(0.9097027304690345);
    msg.setSource(50617U);
    msg.setSourceEntity(207U);
    msg.setDestination(64857U);
    msg.setDestinationEntity(50U);
    msg.value = 0.24723302332732833;
    msg.confidence = 0.9919422406628295;
    msg.opmodes.assign("FAVFBZOVQXMATGNRJSXLXEXKYZGDSWVTPSVQOUURWPPJEBKKYCRJOHHINQJRFDERYBYKCTQYDJFNEIOEDAZGVEJZRWGXQJWUNIHQDHKULDMOYWPMJIZWBJMCNNFIKOMHYFXMWPNLTDLQEQADNLYRAOGFLITRARTQVSUVFZNHIILZPSSOKUVBIWMVBMFBGLBUEZPHBRXSAAWZBTKGWQDFYECLSGUGTUEPCXDTUNCHZXCCYCMSHI");

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
    msg.setTimeStamp(0.30723208493512966);
    msg.setSource(53916U);
    msg.setSourceEntity(62U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(49U);
    msg.value = 0.3741684894609767;
    msg.confidence = 0.956313654011796;
    msg.opmodes.assign("FZBMDQMLYMGTDKGEVWNPIHVCCABFJRLGLBWFXCWPJREPOPLAWWEULHAAKQVLENSYYZDFECBPBJMSYBSRXRUCVRDPIPZUPEGVJSOZIRQJKHRTXUMWPNQNOYTWOKLJTJYCFOQBHXLYAEGATISDMVGDGFPZHTVMZXLZENFFUISAIZKYIOWVNHTWZCUXIXOTAJG");

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
    msg.setTimeStamp(0.42491299499923374);
    msg.setSource(22681U);
    msg.setSourceEntity(154U);
    msg.setDestination(403U);
    msg.setDestinationEntity(71U);
    msg.itow = 339514475U;
    msg.lat = 0.7840111534558256;
    msg.lon = 0.9053706341727514;
    msg.height_ell = 0.06246954952346073;
    msg.height_sea = 0.11783711670713082;
    msg.hacc = 0.361926149487949;
    msg.vacc = 0.0015778051052134368;
    msg.vel_n = 0.9999828028585801;
    msg.vel_e = 0.933111789739063;
    msg.vel_d = 0.13205726117147132;
    msg.speed = 0.3349715001479663;
    msg.gspeed = 0.010628019665857913;
    msg.heading = 0.8936780597455929;
    msg.sacc = 0.8514410526995387;
    msg.cacc = 0.0612879693523104;

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
    msg.setTimeStamp(0.2658584943236526);
    msg.setSource(7642U);
    msg.setSourceEntity(58U);
    msg.setDestination(53U);
    msg.setDestinationEntity(89U);
    msg.itow = 2880289641U;
    msg.lat = 0.13845105320111217;
    msg.lon = 0.14584097223337045;
    msg.height_ell = 0.3081065659922837;
    msg.height_sea = 0.7142512235536721;
    msg.hacc = 0.5724730261189012;
    msg.vacc = 0.4310752625501806;
    msg.vel_n = 0.15596282897805647;
    msg.vel_e = 0.8584766210315897;
    msg.vel_d = 0.9194972841347482;
    msg.speed = 0.19765840223590503;
    msg.gspeed = 0.5591913960772937;
    msg.heading = 0.8221896335640168;
    msg.sacc = 0.20399783425112217;
    msg.cacc = 0.04753250175109924;

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
    msg.setTimeStamp(0.8042731088637282);
    msg.setSource(18826U);
    msg.setSourceEntity(97U);
    msg.setDestination(1871U);
    msg.setDestinationEntity(219U);
    msg.itow = 419610403U;
    msg.lat = 0.6864064927062579;
    msg.lon = 0.8352605615941668;
    msg.height_ell = 0.06462273562459497;
    msg.height_sea = 0.9749763052994146;
    msg.hacc = 0.015483590772674027;
    msg.vacc = 0.8173487080646394;
    msg.vel_n = 0.9536028397969434;
    msg.vel_e = 0.3452142598742586;
    msg.vel_d = 0.3496709808550097;
    msg.speed = 0.8985232223094323;
    msg.gspeed = 0.9711862830056645;
    msg.heading = 0.901665284383881;
    msg.sacc = 0.3328937049154995;
    msg.cacc = 0.677697476976413;

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
    msg.setTimeStamp(0.3070747048928497);
    msg.setSource(36541U);
    msg.setSourceEntity(53U);
    msg.setDestination(40424U);
    msg.setDestinationEntity(195U);
    msg.id = 196U;
    msg.value = 0.10188008394574555;

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
    msg.setTimeStamp(0.3518750524987937);
    msg.setSource(35607U);
    msg.setSourceEntity(215U);
    msg.setDestination(15454U);
    msg.setDestinationEntity(189U);
    msg.id = 218U;
    msg.value = 0.6313030919825227;

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
    msg.setTimeStamp(0.11837543559317187);
    msg.setSource(2350U);
    msg.setSourceEntity(129U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(97U);
    msg.id = 177U;
    msg.value = 0.6254244914647555;

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
    msg.setTimeStamp(0.6565622762138931);
    msg.setSource(9492U);
    msg.setSourceEntity(189U);
    msg.setDestination(18063U);
    msg.setDestinationEntity(100U);
    msg.x = 0.4563344221222291;
    msg.y = 0.8859756091049883;
    msg.z = 0.07901246042895782;
    msg.phi = 0.31041578890405974;
    msg.theta = 0.1182394300388443;
    msg.psi = 0.2133752476829731;

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
    msg.setTimeStamp(0.7319437766581401);
    msg.setSource(21579U);
    msg.setSourceEntity(236U);
    msg.setDestination(39194U);
    msg.setDestinationEntity(15U);
    msg.x = 0.9788918516926447;
    msg.y = 0.3664593757943788;
    msg.z = 0.3614221266300949;
    msg.phi = 0.5000022285268;
    msg.theta = 0.13363252257408875;
    msg.psi = 0.3817340948088125;

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
    msg.setTimeStamp(0.04100319716284073);
    msg.setSource(58274U);
    msg.setSourceEntity(152U);
    msg.setDestination(6178U);
    msg.setDestinationEntity(206U);
    msg.x = 0.4709475124838661;
    msg.y = 0.8501711187426987;
    msg.z = 0.12316313949983415;
    msg.phi = 0.42541206966903866;
    msg.theta = 0.6906558374264101;
    msg.psi = 0.09742703404987807;

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
    msg.setTimeStamp(0.2818505535160387);
    msg.setSource(56763U);
    msg.setSourceEntity(113U);
    msg.setDestination(14618U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.26891415239420435;
    msg.beam_height = 0.9648867554467591;

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
    msg.setTimeStamp(0.4611556008044033);
    msg.setSource(21172U);
    msg.setSourceEntity(63U);
    msg.setDestination(38494U);
    msg.setDestinationEntity(176U);
    msg.beam_width = 0.08075564424845127;
    msg.beam_height = 0.0841304153985386;

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
    msg.setTimeStamp(0.875507190846325);
    msg.setSource(31162U);
    msg.setSourceEntity(132U);
    msg.setDestination(14233U);
    msg.setDestinationEntity(254U);
    msg.beam_width = 0.8162539248871022;
    msg.beam_height = 0.15220135455973993;

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
    msg.setTimeStamp(0.23189490340012398);
    msg.setSource(21964U);
    msg.setSourceEntity(6U);
    msg.setDestination(33920U);
    msg.setDestinationEntity(55U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.7285049423719075);
    msg.setSource(17349U);
    msg.setSourceEntity(81U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(113U);
    msg.sane = 134U;

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
    msg.setTimeStamp(0.6851425886230629);
    msg.setSource(61169U);
    msg.setSourceEntity(34U);
    msg.setDestination(23514U);
    msg.setDestinationEntity(153U);
    msg.sane = 173U;

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
    msg.setTimeStamp(0.3321267823953712);
    msg.setSource(45260U);
    msg.setSourceEntity(230U);
    msg.setDestination(1047U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5462913101945791;

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
    msg.setTimeStamp(0.6397890432070166);
    msg.setSource(7023U);
    msg.setSourceEntity(5U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(55U);
    msg.value = 0.9884995596803866;

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
    msg.setTimeStamp(0.21071967522961843);
    msg.setSource(20606U);
    msg.setSourceEntity(67U);
    msg.setDestination(16206U);
    msg.setDestinationEntity(61U);
    msg.value = 0.3811947801131319;

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
    msg.setTimeStamp(0.35911315561946044);
    msg.setSource(4379U);
    msg.setSourceEntity(204U);
    msg.setDestination(25170U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9441549252990359;

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
    msg.setTimeStamp(0.5128424210599606);
    msg.setSource(15073U);
    msg.setSourceEntity(125U);
    msg.setDestination(31030U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9484218581864302;

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
    msg.setTimeStamp(0.9141089723330054);
    msg.setSource(45852U);
    msg.setSourceEntity(94U);
    msg.setDestination(1078U);
    msg.setDestinationEntity(177U);
    msg.value = 0.2890622254651075;

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
    msg.setTimeStamp(0.1666746649027101);
    msg.setSource(20971U);
    msg.setSourceEntity(144U);
    msg.setDestination(38015U);
    msg.setDestinationEntity(198U);
    msg.value = 0.7732414175511793;

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
    msg.setTimeStamp(0.9129273035427576);
    msg.setSource(14841U);
    msg.setSourceEntity(202U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(129U);
    msg.value = 0.4669297382362083;

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
    msg.setTimeStamp(0.737165708885107);
    msg.setSource(4929U);
    msg.setSourceEntity(95U);
    msg.setDestination(15878U);
    msg.setDestinationEntity(157U);
    msg.value = 0.662006163524692;

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
    msg.setTimeStamp(0.18825066398081514);
    msg.setSource(59444U);
    msg.setSourceEntity(152U);
    msg.setDestination(14583U);
    msg.setDestinationEntity(119U);
    msg.value = 0.07867170396308898;

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
    msg.setTimeStamp(0.8436371086439798);
    msg.setSource(21021U);
    msg.setSourceEntity(151U);
    msg.setDestination(10381U);
    msg.setDestinationEntity(244U);
    msg.value = 0.3438058378797664;

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
    msg.setTimeStamp(0.6481843938249441);
    msg.setSource(980U);
    msg.setSourceEntity(38U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5759094736534902;

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
    msg.setTimeStamp(0.31581360581144613);
    msg.setSource(47435U);
    msg.setSourceEntity(213U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9360933798089451;

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
    msg.setTimeStamp(0.4044264433936645);
    msg.setSource(40257U);
    msg.setSourceEntity(52U);
    msg.setDestination(41778U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5107202251769287;

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
    msg.setTimeStamp(0.34630553614589343);
    msg.setSource(4783U);
    msg.setSourceEntity(54U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9662147516981202;

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
    msg.setTimeStamp(0.8098504772104715);
    msg.setSource(14448U);
    msg.setSourceEntity(75U);
    msg.setDestination(43585U);
    msg.setDestinationEntity(22U);
    msg.value = 0.28839329896087174;

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
    msg.setTimeStamp(0.8495367102288781);
    msg.setSource(38481U);
    msg.setSourceEntity(25U);
    msg.setDestination(61683U);
    msg.setDestinationEntity(234U);
    msg.value = 0.4912660219295072;

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
    msg.setTimeStamp(0.6440770545471469);
    msg.setSource(39241U);
    msg.setSourceEntity(205U);
    msg.setDestination(26785U);
    msg.setDestinationEntity(120U);
    msg.value = 0.43342381826053344;

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
    msg.setTimeStamp(0.08515342784916702);
    msg.setSource(48476U);
    msg.setSourceEntity(122U);
    msg.setDestination(17962U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2145084084466815;

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
    msg.setTimeStamp(0.16969222419980245);
    msg.setSource(42405U);
    msg.setSourceEntity(108U);
    msg.setDestination(2393U);
    msg.setDestinationEntity(242U);
    msg.value = 0.3991430645257582;

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
    msg.setTimeStamp(0.15512004890381426);
    msg.setSource(55748U);
    msg.setSourceEntity(231U);
    msg.setDestination(9638U);
    msg.setDestinationEntity(88U);
    msg.value = 0.6390438882534336;

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
    msg.setTimeStamp(0.8360700020117686);
    msg.setSource(9373U);
    msg.setSourceEntity(201U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5814626551432042;

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
    msg.setTimeStamp(0.8322327871118722);
    msg.setSource(1312U);
    msg.setSourceEntity(62U);
    msg.setDestination(1618U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5718530234687547;

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
    msg.setTimeStamp(0.5694652082223495);
    msg.setSource(39323U);
    msg.setSourceEntity(164U);
    msg.setDestination(56158U);
    msg.setDestinationEntity(45U);
    msg.value = 0.7869608979255573;

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
    msg.setTimeStamp(0.6772711824537555);
    msg.setSource(24459U);
    msg.setSourceEntity(203U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(195U);
    msg.validity = 55541U;
    msg.type = 171U;
    msg.tow = 4260677362U;
    msg.base_lat = 0.9943493335491745;
    msg.base_lon = 0.4768202756717468;
    msg.base_height = 0.15091047869905483;
    msg.n = 0.22177332843965536;
    msg.e = 0.05414133076149652;
    msg.d = 0.23155340729666163;
    msg.v_n = 0.8986969875213465;
    msg.v_e = 0.08059552288560512;
    msg.v_d = 0.38197275772550954;
    msg.satellites = 204U;
    msg.iar_hyp = 7868U;
    msg.iar_ratio = 0.5639052107799684;

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
    msg.setTimeStamp(0.16592317066056772);
    msg.setSource(54453U);
    msg.setSourceEntity(123U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(51U);
    msg.validity = 8037U;
    msg.type = 54U;
    msg.tow = 3175736958U;
    msg.base_lat = 0.3390558338141334;
    msg.base_lon = 0.6872119700256817;
    msg.base_height = 0.04362468979091938;
    msg.n = 0.6131355329839974;
    msg.e = 0.6893642423452251;
    msg.d = 0.3016041250919309;
    msg.v_n = 0.7094156728811478;
    msg.v_e = 0.028423708346622667;
    msg.v_d = 0.829005481188145;
    msg.satellites = 52U;
    msg.iar_hyp = 7559U;
    msg.iar_ratio = 0.9396917390867389;

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
    msg.setTimeStamp(0.8213794146719803);
    msg.setSource(45296U);
    msg.setSourceEntity(167U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(89U);
    msg.validity = 35703U;
    msg.type = 251U;
    msg.tow = 2058602252U;
    msg.base_lat = 0.3827299498070158;
    msg.base_lon = 0.6800520865611044;
    msg.base_height = 0.825068832631597;
    msg.n = 0.5679623906758572;
    msg.e = 0.5590245330587973;
    msg.d = 0.2623179469076069;
    msg.v_n = 0.9170651615806132;
    msg.v_e = 0.3285948571829763;
    msg.v_d = 0.7165182113197945;
    msg.satellites = 184U;
    msg.iar_hyp = 31120U;
    msg.iar_ratio = 0.4730999796160914;

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
    msg.setTimeStamp(0.5880500372004869);
    msg.setSource(19571U);
    msg.setSourceEntity(247U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(245U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6380049870571478;
    tmp_msg_0.lon = 0.362795284720277;
    tmp_msg_0.height = 0.08824622307120844;
    tmp_msg_0.x = 0.597585493216239;
    tmp_msg_0.y = 0.5224798508558515;
    tmp_msg_0.z = 0.12136032924002271;
    tmp_msg_0.phi = 0.24974914031110562;
    tmp_msg_0.theta = 0.9446413345802197;
    tmp_msg_0.psi = 0.2513941945222239;
    tmp_msg_0.u = 0.4540199398155318;
    tmp_msg_0.v = 0.6063842177908926;
    tmp_msg_0.w = 0.5177132237407042;
    tmp_msg_0.vx = 0.49949588641477294;
    tmp_msg_0.vy = 0.8219362832556131;
    tmp_msg_0.vz = 0.8819839060778761;
    tmp_msg_0.p = 0.3317781605079698;
    tmp_msg_0.q = 0.25374973009890045;
    tmp_msg_0.r = 0.1951686836203913;
    tmp_msg_0.depth = 0.491310568714999;
    tmp_msg_0.alt = 0.06934509786651089;
    msg.state.set(tmp_msg_0);
    msg.type = 89U;

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
    msg.setTimeStamp(0.1681059867736715);
    msg.setSource(574U);
    msg.setSourceEntity(166U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(40U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7512723754137122;
    tmp_msg_0.lon = 0.3204502217009738;
    tmp_msg_0.height = 0.5816771561181002;
    tmp_msg_0.x = 0.6444728432140953;
    tmp_msg_0.y = 0.37153162782499616;
    tmp_msg_0.z = 0.7126172063944255;
    tmp_msg_0.phi = 0.6161166907173973;
    tmp_msg_0.theta = 0.0289099632204467;
    tmp_msg_0.psi = 0.28813668974506157;
    tmp_msg_0.u = 0.667075368626627;
    tmp_msg_0.v = 0.7006522653824998;
    tmp_msg_0.w = 0.5252109111784004;
    tmp_msg_0.vx = 0.4423328041366956;
    tmp_msg_0.vy = 0.26307568117642033;
    tmp_msg_0.vz = 0.044776712879293634;
    tmp_msg_0.p = 0.0011318419030411642;
    tmp_msg_0.q = 0.4607623045849639;
    tmp_msg_0.r = 0.20094400471994;
    tmp_msg_0.depth = 0.9903836258894031;
    tmp_msg_0.alt = 0.3507049323371152;
    msg.state.set(tmp_msg_0);
    msg.type = 161U;

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
    msg.setTimeStamp(0.06276480811243401);
    msg.setSource(58418U);
    msg.setSourceEntity(122U);
    msg.setDestination(40707U);
    msg.setDestinationEntity(189U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.40505873051403973;
    tmp_msg_0.lon = 0.9917620222355435;
    tmp_msg_0.height = 0.10361046594589252;
    tmp_msg_0.x = 0.6043578782049405;
    tmp_msg_0.y = 0.4232042284626423;
    tmp_msg_0.z = 0.009036644481786094;
    tmp_msg_0.phi = 0.14180419972565617;
    tmp_msg_0.theta = 0.6370159385661484;
    tmp_msg_0.psi = 0.6748793268953951;
    tmp_msg_0.u = 0.5456859423253357;
    tmp_msg_0.v = 0.4545615525739485;
    tmp_msg_0.w = 0.8067291734932579;
    tmp_msg_0.vx = 0.2782624112902513;
    tmp_msg_0.vy = 0.9117878648980521;
    tmp_msg_0.vz = 0.5233060601045002;
    tmp_msg_0.p = 0.8084653418181846;
    tmp_msg_0.q = 0.4813830901373054;
    tmp_msg_0.r = 0.7226230627808943;
    tmp_msg_0.depth = 0.8281684702650342;
    tmp_msg_0.alt = 0.34041647454298984;
    msg.state.set(tmp_msg_0);
    msg.type = 97U;

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
    msg.setTimeStamp(0.7002052819072249);
    msg.setSource(13312U);
    msg.setSourceEntity(22U);
    msg.setDestination(11984U);
    msg.setDestinationEntity(236U);
    msg.value = 0.051927009234397525;

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
    msg.setTimeStamp(0.7836121558698521);
    msg.setSource(12312U);
    msg.setSourceEntity(67U);
    msg.setDestination(64745U);
    msg.setDestinationEntity(245U);
    msg.value = 0.4168542450921855;

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
    msg.setTimeStamp(0.28664387069372654);
    msg.setSource(2131U);
    msg.setSourceEntity(146U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(84U);
    msg.value = 0.04101442241289455;

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
    msg.setTimeStamp(0.5794335049120496);
    msg.setSource(9178U);
    msg.setSourceEntity(236U);
    msg.setDestination(30846U);
    msg.setDestinationEntity(0U);
    msg.value = 0.5695166204988226;

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
    msg.setTimeStamp(0.2999565427785694);
    msg.setSource(51318U);
    msg.setSourceEntity(204U);
    msg.setDestination(47939U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7462560927271057;

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
    msg.setTimeStamp(0.8031685710386754);
    msg.setSource(54938U);
    msg.setSourceEntity(104U);
    msg.setDestination(25403U);
    msg.setDestinationEntity(112U);
    msg.value = 0.8723060500284445;

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
    msg.setTimeStamp(0.8060181342938251);
    msg.setSource(60754U);
    msg.setSourceEntity(89U);
    msg.setDestination(49063U);
    msg.setDestinationEntity(163U);
    msg.value = 0.023655809695921404;

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
    msg.setTimeStamp(0.661792505529623);
    msg.setSource(55230U);
    msg.setSourceEntity(83U);
    msg.setDestination(50429U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6502045559397537;

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
    msg.setTimeStamp(0.08426104379556665);
    msg.setSource(34384U);
    msg.setSourceEntity(40U);
    msg.setDestination(41781U);
    msg.setDestinationEntity(180U);
    msg.value = 0.314300743449456;

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
    msg.setTimeStamp(0.7726045916200784);
    msg.setSource(36065U);
    msg.setSourceEntity(144U);
    msg.setDestination(49558U);
    msg.setDestinationEntity(1U);
    msg.value = 0.49453166128800263;

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
    msg.setTimeStamp(0.07620414820334953);
    msg.setSource(7028U);
    msg.setSourceEntity(10U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5531921572030697;

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
    msg.setTimeStamp(0.8078164520265538);
    msg.setSource(45148U);
    msg.setSourceEntity(11U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9720541902935086;

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
    msg.setTimeStamp(0.9496925007214696);
    msg.setSource(7212U);
    msg.setSourceEntity(5U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(30U);
    msg.value = 0.1244556933630303;

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
    msg.setTimeStamp(0.9434964555876809);
    msg.setSource(39723U);
    msg.setSourceEntity(31U);
    msg.setDestination(4561U);
    msg.setDestinationEntity(196U);
    msg.value = 0.01110698460849524;

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
    msg.setTimeStamp(0.4672016346115645);
    msg.setSource(7187U);
    msg.setSourceEntity(64U);
    msg.setDestination(27458U);
    msg.setDestinationEntity(124U);
    msg.value = 0.6727073324388948;

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
    msg.setTimeStamp(0.9666774591846642);
    msg.setSource(18163U);
    msg.setSourceEntity(74U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(198U);
    msg.id = 9U;
    msg.zoom = 113U;
    msg.action = 75U;

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
    msg.setTimeStamp(0.5515195429414181);
    msg.setSource(61030U);
    msg.setSourceEntity(17U);
    msg.setDestination(22279U);
    msg.setDestinationEntity(109U);
    msg.id = 3U;
    msg.zoom = 240U;
    msg.action = 161U;

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
    msg.setTimeStamp(0.9438479814877957);
    msg.setSource(32357U);
    msg.setSourceEntity(164U);
    msg.setDestination(4518U);
    msg.setDestinationEntity(217U);
    msg.id = 225U;
    msg.zoom = 107U;
    msg.action = 3U;

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
    msg.setTimeStamp(0.9569986544783335);
    msg.setSource(1849U);
    msg.setSourceEntity(38U);
    msg.setDestination(31895U);
    msg.setDestinationEntity(37U);
    msg.id = 194U;
    msg.value = 0.9298443308280284;

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
    msg.setTimeStamp(0.03667864948928701);
    msg.setSource(262U);
    msg.setSourceEntity(232U);
    msg.setDestination(50739U);
    msg.setDestinationEntity(235U);
    msg.id = 133U;
    msg.value = 0.5856734988443679;

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
    msg.setTimeStamp(0.541131851975396);
    msg.setSource(41273U);
    msg.setSourceEntity(40U);
    msg.setDestination(27013U);
    msg.setDestinationEntity(49U);
    msg.id = 186U;
    msg.value = 0.6226118496909172;

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
    msg.setTimeStamp(0.6041206061150617);
    msg.setSource(47655U);
    msg.setSourceEntity(92U);
    msg.setDestination(50263U);
    msg.setDestinationEntity(103U);
    msg.id = 142U;
    msg.value = 0.7708743654312927;

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
    msg.setTimeStamp(0.7376973434307852);
    msg.setSource(9998U);
    msg.setSourceEntity(75U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(206U);
    msg.id = 163U;
    msg.value = 0.5359370300643934;

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
    msg.setTimeStamp(0.031911570149464996);
    msg.setSource(52985U);
    msg.setSourceEntity(250U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(127U);
    msg.id = 181U;
    msg.value = 0.06062458185089503;

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
    msg.setTimeStamp(0.4638628107178947);
    msg.setSource(38743U);
    msg.setSourceEntity(75U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(81U);
    msg.id = 228U;
    msg.angle = 0.9748387226295138;

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
    msg.setTimeStamp(0.8277196475307522);
    msg.setSource(3521U);
    msg.setSourceEntity(225U);
    msg.setDestination(60184U);
    msg.setDestinationEntity(144U);
    msg.id = 167U;
    msg.angle = 0.08777533429257789;

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
    msg.setTimeStamp(0.3029619213401181);
    msg.setSource(56469U);
    msg.setSourceEntity(213U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(23U);
    msg.id = 180U;
    msg.angle = 0.5192050156176319;

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
    msg.setTimeStamp(0.662246841913244);
    msg.setSource(14235U);
    msg.setSourceEntity(169U);
    msg.setDestination(54181U);
    msg.setDestinationEntity(124U);
    msg.op = 170U;
    msg.actions.assign("CTANQNSIKBFQLXGOIKDFYHMLFNZKLZMDPKLMPNOJK");

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
    msg.setTimeStamp(0.5468007144603139);
    msg.setSource(60120U);
    msg.setSourceEntity(141U);
    msg.setDestination(13406U);
    msg.setDestinationEntity(148U);
    msg.op = 101U;
    msg.actions.assign("TTLCGCIQBPLPWUUOVQFGHJPEM");

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
    msg.setTimeStamp(0.46455369457150064);
    msg.setSource(12922U);
    msg.setSourceEntity(24U);
    msg.setDestination(49376U);
    msg.setDestinationEntity(133U);
    msg.op = 81U;
    msg.actions.assign("XVYOCHLHUIMJRVBOTYJSGGWHCFDYJFWXNOMPMFKKUWEIKATYWQAGSC");

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
    msg.setTimeStamp(0.41493499817329127);
    msg.setSource(37599U);
    msg.setSourceEntity(3U);
    msg.setDestination(61296U);
    msg.setDestinationEntity(219U);
    msg.actions.assign("KGQAROOADZCZALMKAQSEYLPJQW");

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
    msg.setTimeStamp(0.20615910527895653);
    msg.setSource(42042U);
    msg.setSourceEntity(109U);
    msg.setDestination(52733U);
    msg.setDestinationEntity(100U);
    msg.actions.assign("OTYSLWQEBSOBCZRVIANHQEWNFABOKKCRPREOYEEZYTOJHHYCWAXLHUFXYSHGILYATAZYZWKIIOXHLCMOVPCDKWCBRNZOQFJYFNZLWOTXLDAQKWEUSKGARBKNGGFMUZULIJCISARSZVJFPNLFSRDGIBFVSZFOPBPXTAXTRHUCJNIPAN");

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
    msg.setTimeStamp(0.8198453997622991);
    msg.setSource(36429U);
    msg.setSourceEntity(31U);
    msg.setDestination(54455U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("BYQEODVJCVWCPLORYOFAVTIZGROGRSQCSATHWWKBAZKCBMBZLUDUYVXXXVMSKIHDCREUQHIXKKZODXHBLVJKXPMKSZJHHKMJRFPLWPNWIFTYTLNFGRUOSVYOSDUWYPQMQZQGNGRDFFKPQPRBVEYGXSCXHICMNOELQIWBPVTUAPJAEVZLIJBINNJDUJAQCDTGFSSRN");

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
    msg.setTimeStamp(0.8392773865598234);
    msg.setSource(52655U);
    msg.setSourceEntity(249U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(4U);
    msg.button = 156U;
    msg.value = 253U;

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
    msg.setTimeStamp(0.35083844008030685);
    msg.setSource(45553U);
    msg.setSourceEntity(41U);
    msg.setDestination(33144U);
    msg.setDestinationEntity(26U);
    msg.button = 105U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.9044503509213007);
    msg.setSource(31842U);
    msg.setSourceEntity(84U);
    msg.setDestination(60798U);
    msg.setDestinationEntity(138U);
    msg.button = 92U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.4121264110501559);
    msg.setSource(21305U);
    msg.setSourceEntity(113U);
    msg.setDestination(17116U);
    msg.setDestinationEntity(92U);
    msg.op = 105U;
    msg.text.assign("TURNIHJCZPIRKAZRKHSQABOFJWOXOLZUAWSV");

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
    msg.setTimeStamp(0.0671680546758936);
    msg.setSource(43872U);
    msg.setSourceEntity(169U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(9U);
    msg.op = 135U;
    msg.text.assign("WZHWZDIVVCTGQXOXSONAHTRTQDZCQXTOAYODXVYEPIGSPQVRTOGDUPFUBHZKJTEMYGSHFVXLBONGXREIFIJXULZKCXQYNFQMYZJEBVAOKBGPZNSWJZPCLDDMAYGBUKLZBNEMLDQRWWTUPBJTYRENLYTYDMNMIIXUKABBINMVHQHATWFMMPEQYJFVVELASFWWOGRHREJGNJCWBLSD");

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
    msg.setTimeStamp(0.26321319716705815);
    msg.setSource(17636U);
    msg.setSourceEntity(50U);
    msg.setDestination(51081U);
    msg.setDestinationEntity(245U);
    msg.op = 15U;
    msg.text.assign("UQDMWBSSPZPJDHIHMRLHCXFUTHCQYOWQCJEMEDXEPIQAOIMUDNDNNBLJVIRQFXJZLZYLQGPAKLOKYWRYJCSCTWYBFFPDWAWSXKPLEUGWKBFJSIURQVUKTKGXCKOKITPFAUHQOZDANFVSOYUBOGIVJTGQJBOOYMJMNRMZWISLHYFACXLMGRVGTTQYWGTVHBXNRJGDMIHRZDAULTVBAECLEVPWFEZYXXFCCHRNXSMZDPKEHNNRZB");

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
    msg.setTimeStamp(0.12050746452345162);
    msg.setSource(47005U);
    msg.setSourceEntity(2U);
    msg.setDestination(20044U);
    msg.setDestinationEntity(252U);
    msg.op = 232U;
    msg.time_remain = 0.8830273434063644;
    msg.sched_time = 0.7053302461894689;

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
    msg.setTimeStamp(0.4509364619802224);
    msg.setSource(56862U);
    msg.setSourceEntity(223U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(123U);
    msg.op = 126U;
    msg.time_remain = 0.24701232640933457;
    msg.sched_time = 0.7419797860272671;

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
    msg.setTimeStamp(0.07342913622078229);
    msg.setSource(4955U);
    msg.setSourceEntity(58U);
    msg.setDestination(57764U);
    msg.setDestinationEntity(36U);
    msg.op = 184U;
    msg.time_remain = 0.309424085636142;
    msg.sched_time = 0.46864735436533556;

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
    msg.setTimeStamp(0.2957141837596029);
    msg.setSource(58813U);
    msg.setSourceEntity(96U);
    msg.setDestination(41358U);
    msg.setDestinationEntity(93U);
    msg.name.assign("FMXFTYUXBMSZLVBICNWMSSQHRGMZARDGEBINLHKMMGZVSEQYVGIRIPDXRTCRXBCEAEGSFKLJGJDLOYXKDYRVWOAQDDGUAMZUBKBCLZIUEHEULISFQQFWOHSRRBNYFEYGJPWHYHAZJNPBAPDNQTTVWJBYUEDNTLOXWIVVPCCZJYOHFDTJ");
    msg.op = 62U;
    msg.sched_time = 0.8257258876541913;

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
    msg.setTimeStamp(0.5084658579929535);
    msg.setSource(45601U);
    msg.setSourceEntity(246U);
    msg.setDestination(40940U);
    msg.setDestinationEntity(220U);
    msg.name.assign("XPGGTJRKBEEYEDBTJCOUVOFZKZOGCIOZRUCAVWGHBEHKLJHJXTOYIZVMVFPQIUMYKJXPJAN");
    msg.op = 199U;
    msg.sched_time = 0.09087845088002078;

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
    msg.setTimeStamp(0.5522839012872274);
    msg.setSource(3783U);
    msg.setSourceEntity(210U);
    msg.setDestination(3173U);
    msg.setDestinationEntity(67U);
    msg.name.assign("CVARHAXYIDBOINHGCHJAGOQRXZCDCEROGAXAEAGVPGJAUWCVTBJLWQDZEQOLJQ");
    msg.op = 222U;
    msg.sched_time = 0.2800050249987035;

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
    msg.setTimeStamp(0.45662098748450564);
    msg.setSource(64537U);
    msg.setSourceEntity(208U);
    msg.setDestination(31798U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.8103400212603956);
    msg.setSource(46630U);
    msg.setSourceEntity(3U);
    msg.setDestination(53984U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.14883627789673193);
    msg.setSource(64347U);
    msg.setSourceEntity(75U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.1291632399686672);
    msg.setSource(59279U);
    msg.setSourceEntity(214U);
    msg.setDestination(48388U);
    msg.setDestinationEntity(44U);
    msg.name.assign("BZOEPNDITLCWQXRJAHSJKOHKDUUJNWNLBXQKWRJBQREVZICKYIGYGPVRIGVSHFQKAZSESYLNEZMOEKTXVRMVQOFQMWTBSYRX");
    msg.state = 98U;

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
    msg.setTimeStamp(0.8218298195118201);
    msg.setSource(39206U);
    msg.setSourceEntity(241U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(155U);
    msg.name.assign("KGWTCCABKPOJOYUFHTUMEVZQMLUIBHDXZIXLMVIJPZRGOLKWGOGECJUBLHCESNWRLQZAZIRFYFYAGMQHMOIOTBNLXFSDKEDYJNIZUMQIMIJOGPWVVPHUQFETNVQJFFBASLSRDNTHLJSEGKJYXOGRKSZEYINHQCPCXOWXDHQNC");
    msg.state = 152U;

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
    msg.setTimeStamp(0.8884971195475733);
    msg.setSource(20758U);
    msg.setSourceEntity(18U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(22U);
    msg.name.assign("EAGZLLOXNUFXCGYTVBQWKXNMUDCQAUQQNMJIFNESCYWCQDASLVQHHNWYSQGXGRVJYXOEMMPVVUJJPKATDHRXKPLBEXKJMJSGWIRECEIWLWTWSIPHDIOUYFBMAWAZIFZLYJGDBCHWUNRIFXHTR");
    msg.state = 14U;

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
    msg.setTimeStamp(0.5890518910531974);
    msg.setSource(61349U);
    msg.setSourceEntity(71U);
    msg.setDestination(43689U);
    msg.setDestinationEntity(186U);
    msg.name.assign("KFBDUMCZPSSBXTFFFYCGTGISAZJAPQCXBWGOXJRCTXZQFWYORZIABIRQKUSXEKTUPKIIQGEWYMXIMALHVMZKPIRULGXDLHHYRJMHLBKSJYFVMSHRHQWQNHWVUWAJNHCPTURVDLCHJOTTOGDVUEWCEATJLQEEZJRVBJLONDCOAKYQZAVVMXOZETBSXDJSMNKQMSGL");
    msg.value = 177U;

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
    msg.setTimeStamp(0.6376986115740099);
    msg.setSource(22341U);
    msg.setSourceEntity(101U);
    msg.setDestination(2292U);
    msg.setDestinationEntity(213U);
    msg.name.assign("SMQLPGOCKZDNLQXNDSSJDIDSBWKUMBETPZVTRMYUHQGKWPSAPNXNVBXWFIBGMBWTYQKHHOHCHVRVFMFABMWXWGCSKODOLYTLXAYNWSJFPUOMIIDPIOUEQAWDCCEUFAXBXEGNFNQVEAOUPEOERUN");
    msg.value = 67U;

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
    msg.setTimeStamp(0.24129686711036702);
    msg.setSource(33748U);
    msg.setSourceEntity(176U);
    msg.setDestination(43448U);
    msg.setDestinationEntity(97U);
    msg.name.assign("NJMJRKEILIZDAMOIVKFDIENSZQYJBACXGSLMFNWHNCOHVFCYIN");
    msg.value = 21U;

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
    msg.setTimeStamp(0.3453344697517191);
    msg.setSource(28444U);
    msg.setSourceEntity(166U);
    msg.setDestination(37467U);
    msg.setDestinationEntity(186U);
    msg.name.assign("ROXDVDWACGSLWXJPFQZANLIEOIAHJOQMXDXGUESMQUONHPJLKFFG");

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
    msg.setTimeStamp(0.79628299834984);
    msg.setSource(17931U);
    msg.setSourceEntity(229U);
    msg.setDestination(1051U);
    msg.setDestinationEntity(65U);
    msg.name.assign("LZRIPKXQUHOB");

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
    msg.setTimeStamp(0.9159274430594652);
    msg.setSource(55383U);
    msg.setSourceEntity(1U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(194U);
    msg.name.assign("CEWZRLCVFMWWOCAVCXOZTRCGHDNYVRKNSROPXSSEAIWPJVULVIMGZDMSXKKVRAZMBPREUIRQDGOLLWQWJCOSCERDQAVLQNYXIQKGOZRCEBNMHYGXAKIUXHT");

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
    msg.setTimeStamp(0.4091690170455946);
    msg.setSource(64061U);
    msg.setSourceEntity(194U);
    msg.setDestination(18881U);
    msg.setDestinationEntity(127U);
    msg.name.assign("VPRTGCWBKBUZQTYXFTTJUOKHQZFYQSZBNJUGRVNZPGBYSJDXAJYXBWHLZLGBCLNWYHPWUQELXICKLPNHCIAENXQHJNCLJHKJRIOQVFOGYKUJPQ");
    msg.value = 177U;

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
    msg.setTimeStamp(0.7103859568507707);
    msg.setSource(36070U);
    msg.setSourceEntity(61U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(118U);
    msg.name.assign("MNSVAMPMANPKRTJIVBYQBXPQPHEVTCRAJQTVKAHEKCUTHGVLFJOXDTZEEHKRLINDUYMJILCIWGDRCERCJHXHCXGKFPRAQGLIXCNMIATDWNLWOXOFGSY");
    msg.value = 41U;

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
    msg.setTimeStamp(0.02449969158153209);
    msg.setSource(39617U);
    msg.setSourceEntity(206U);
    msg.setDestination(44530U);
    msg.setDestinationEntity(200U);
    msg.name.assign("RKNXBYVKKMSTCPDMFEZHIVZGPZJONRTHBL");
    msg.value = 18U;

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
    msg.setTimeStamp(0.6842073338550382);
    msg.setSource(6969U);
    msg.setSourceEntity(153U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(217U);
    msg.id = 210U;
    msg.period = 1280193775U;
    msg.duty_cycle = 167469222U;

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
    msg.setTimeStamp(0.15773663318750475);
    msg.setSource(2252U);
    msg.setSourceEntity(33U);
    msg.setDestination(42840U);
    msg.setDestinationEntity(40U);
    msg.id = 133U;
    msg.period = 1509878794U;
    msg.duty_cycle = 768236959U;

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
    msg.setTimeStamp(0.5375284935829404);
    msg.setSource(49288U);
    msg.setSourceEntity(194U);
    msg.setDestination(50774U);
    msg.setDestinationEntity(239U);
    msg.id = 216U;
    msg.period = 661928003U;
    msg.duty_cycle = 541330623U;

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
    msg.setTimeStamp(0.741085235764107);
    msg.setSource(54624U);
    msg.setSourceEntity(60U);
    msg.setDestination(34809U);
    msg.setDestinationEntity(127U);
    msg.id = 37U;
    msg.period = 1873383715U;
    msg.duty_cycle = 2415106283U;

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
    msg.setTimeStamp(0.33778342865484956);
    msg.setSource(22611U);
    msg.setSourceEntity(147U);
    msg.setDestination(8073U);
    msg.setDestinationEntity(100U);
    msg.id = 151U;
    msg.period = 3566467667U;
    msg.duty_cycle = 266390605U;

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
    msg.setTimeStamp(0.184114069354401);
    msg.setSource(58181U);
    msg.setSourceEntity(144U);
    msg.setDestination(49411U);
    msg.setDestinationEntity(21U);
    msg.id = 131U;
    msg.period = 3376667015U;
    msg.duty_cycle = 2867229019U;

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
    msg.setTimeStamp(0.1524287704842654);
    msg.setSource(37973U);
    msg.setSourceEntity(252U);
    msg.setDestination(48786U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.40656252189406983;
    msg.lon = 0.7925324161658751;
    msg.height = 0.8392806882299162;
    msg.x = 0.6629773748740103;
    msg.y = 0.8194720547051207;
    msg.z = 0.1187789654578274;
    msg.phi = 0.27606846860117007;
    msg.theta = 0.5646740146706719;
    msg.psi = 0.23782743374803272;
    msg.u = 0.1833360657998706;
    msg.v = 0.8140360944430776;
    msg.w = 0.581565464157542;
    msg.vx = 0.8958495271870918;
    msg.vy = 0.530856651363685;
    msg.vz = 0.2089579910012037;
    msg.p = 0.5913952184909713;
    msg.q = 0.748364716869815;
    msg.r = 0.5742669000693638;
    msg.depth = 0.5708902720076167;
    msg.alt = 0.8907935414039169;

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
    msg.setTimeStamp(0.30112656229457);
    msg.setSource(9592U);
    msg.setSourceEntity(39U);
    msg.setDestination(34810U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.4983234781305673;
    msg.lon = 0.3238222078992814;
    msg.height = 0.846445628040765;
    msg.x = 0.25896642920124935;
    msg.y = 0.5381406516120878;
    msg.z = 0.2539186409589388;
    msg.phi = 0.8118906422241993;
    msg.theta = 0.09858290719363005;
    msg.psi = 0.5856691115277193;
    msg.u = 0.5211481723040908;
    msg.v = 0.12487713268894196;
    msg.w = 0.12271741749836274;
    msg.vx = 0.888623761681313;
    msg.vy = 0.1490684653665758;
    msg.vz = 0.2247548327193588;
    msg.p = 0.8339994476142621;
    msg.q = 0.3529503027558285;
    msg.r = 0.20823726354768113;
    msg.depth = 0.34023059332309225;
    msg.alt = 0.9946083099700638;

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
    msg.setTimeStamp(0.6275315981095747);
    msg.setSource(61439U);
    msg.setSourceEntity(192U);
    msg.setDestination(45907U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.917243294207395;
    msg.lon = 0.23057897828221308;
    msg.height = 0.9012982176138327;
    msg.x = 0.6636006175349007;
    msg.y = 0.20387465873330435;
    msg.z = 0.3689224467067188;
    msg.phi = 0.7520247079406764;
    msg.theta = 0.7423686488957502;
    msg.psi = 0.846039151143489;
    msg.u = 0.8087935814419026;
    msg.v = 0.061969906248651285;
    msg.w = 0.07406159626294517;
    msg.vx = 0.11902990016713055;
    msg.vy = 0.9920467778200217;
    msg.vz = 0.43182908217259786;
    msg.p = 0.16766477328381246;
    msg.q = 0.2678846392173625;
    msg.r = 0.9788261004273415;
    msg.depth = 0.7157721436789506;
    msg.alt = 0.9666887090132861;

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
    msg.setTimeStamp(0.01445230589292168);
    msg.setSource(19317U);
    msg.setSourceEntity(32U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(201U);
    msg.x = 0.9508929212403431;
    msg.y = 0.987083789010241;
    msg.z = 0.5410184090588275;

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
    msg.setTimeStamp(0.13132264839684615);
    msg.setSource(34360U);
    msg.setSourceEntity(5U);
    msg.setDestination(59033U);
    msg.setDestinationEntity(132U);
    msg.x = 0.4742221332007245;
    msg.y = 0.3138668677807599;
    msg.z = 0.03822219776129543;

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
    msg.setTimeStamp(0.010965688126520101);
    msg.setSource(21501U);
    msg.setSourceEntity(238U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(252U);
    msg.x = 0.6615813850760814;
    msg.y = 0.8635972490281826;
    msg.z = 0.8345833863544322;

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
    msg.setTimeStamp(0.07685251773381574);
    msg.setSource(29872U);
    msg.setSourceEntity(127U);
    msg.setDestination(19158U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9861474758858838;

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
    msg.setTimeStamp(0.10642329538558482);
    msg.setSource(64257U);
    msg.setSourceEntity(130U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6603666332503807;

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
    msg.setTimeStamp(0.6838215358931833);
    msg.setSource(60076U);
    msg.setSourceEntity(215U);
    msg.setDestination(15214U);
    msg.setDestinationEntity(55U);
    msg.value = 0.19104976194411105;

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
    msg.setTimeStamp(0.6969648997067688);
    msg.setSource(57516U);
    msg.setSourceEntity(213U);
    msg.setDestination(10017U);
    msg.setDestinationEntity(182U);
    msg.value = 0.040633067570631676;

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
    msg.setTimeStamp(0.47294714805368565);
    msg.setSource(14189U);
    msg.setSourceEntity(175U);
    msg.setDestination(62680U);
    msg.setDestinationEntity(16U);
    msg.value = 0.016831228916724283;

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
    msg.setTimeStamp(0.9563225011805778);
    msg.setSource(60453U);
    msg.setSourceEntity(98U);
    msg.setDestination(43895U);
    msg.setDestinationEntity(172U);
    msg.value = 0.2812579028785953;

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
    msg.setTimeStamp(0.24076432436849327);
    msg.setSource(33728U);
    msg.setSourceEntity(75U);
    msg.setDestination(7624U);
    msg.setDestinationEntity(72U);
    msg.x = 0.1677554308549497;
    msg.y = 0.6609013216107681;
    msg.z = 0.6887110514282938;
    msg.phi = 0.21910737366710464;
    msg.theta = 0.9756918537267368;
    msg.psi = 0.2132533743373768;
    msg.p = 0.2650999621866039;
    msg.q = 0.9410244930118905;
    msg.r = 0.1754036371361214;
    msg.u = 0.13766373730513404;
    msg.v = 0.9316472398795623;
    msg.w = 0.2849705980928089;
    msg.bias_psi = 0.1779991592708844;
    msg.bias_r = 0.3530320385817681;

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
    msg.setTimeStamp(0.6640042695183153);
    msg.setSource(34694U);
    msg.setSourceEntity(134U);
    msg.setDestination(37938U);
    msg.setDestinationEntity(2U);
    msg.x = 0.2769127258543782;
    msg.y = 0.12019840268056403;
    msg.z = 0.8293920972541344;
    msg.phi = 0.15917286917661666;
    msg.theta = 0.9210242605990249;
    msg.psi = 0.015246112258965439;
    msg.p = 0.502509638692418;
    msg.q = 0.6854694530094547;
    msg.r = 0.8384498034002833;
    msg.u = 0.2914888266276706;
    msg.v = 0.6086915252095673;
    msg.w = 0.30134038237658056;
    msg.bias_psi = 0.39324785163859766;
    msg.bias_r = 0.39794889894325935;

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
    msg.setTimeStamp(0.004255845717839435);
    msg.setSource(23739U);
    msg.setSourceEntity(89U);
    msg.setDestination(45005U);
    msg.setDestinationEntity(101U);
    msg.x = 0.843780744967364;
    msg.y = 0.9677774833694445;
    msg.z = 0.954270099028828;
    msg.phi = 0.02661430471231241;
    msg.theta = 0.9191623694127468;
    msg.psi = 0.6471962898401761;
    msg.p = 0.9625463159690372;
    msg.q = 0.6230246111639361;
    msg.r = 0.5920805592901441;
    msg.u = 0.6809386070372616;
    msg.v = 0.5463172781944108;
    msg.w = 0.6199796279219063;
    msg.bias_psi = 0.9584103111731809;
    msg.bias_r = 0.9795117955327375;

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
    msg.setTimeStamp(0.8739293057366632);
    msg.setSource(10645U);
    msg.setSourceEntity(207U);
    msg.setDestination(61031U);
    msg.setDestinationEntity(205U);
    msg.bias_psi = 0.02681836411356786;
    msg.bias_r = 0.23818187896500354;
    msg.cog = 0.7018478118246025;
    msg.cyaw = 0.2922345791265789;
    msg.lbl_rej_level = 0.17750835054757008;
    msg.gps_rej_level = 0.4476033720896796;
    msg.custom_x = 0.15183311229130947;
    msg.custom_y = 0.7313039461380434;
    msg.custom_z = 0.8418958325968573;

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
    msg.setTimeStamp(0.8294138067301232);
    msg.setSource(33837U);
    msg.setSourceEntity(219U);
    msg.setDestination(47425U);
    msg.setDestinationEntity(42U);
    msg.bias_psi = 0.08612645345702674;
    msg.bias_r = 0.1083716015664421;
    msg.cog = 0.7878772702895043;
    msg.cyaw = 0.14096978362951162;
    msg.lbl_rej_level = 0.09394372745469792;
    msg.gps_rej_level = 0.959552741795397;
    msg.custom_x = 0.4286846078715144;
    msg.custom_y = 0.9991427159391025;
    msg.custom_z = 0.18634207700780647;

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
    msg.setTimeStamp(0.7824425975519026);
    msg.setSource(14190U);
    msg.setSourceEntity(79U);
    msg.setDestination(63035U);
    msg.setDestinationEntity(136U);
    msg.bias_psi = 0.7628294067116013;
    msg.bias_r = 0.7454360705732634;
    msg.cog = 0.3008760460680794;
    msg.cyaw = 0.883292013960557;
    msg.lbl_rej_level = 0.5105320099855073;
    msg.gps_rej_level = 0.4916491771774346;
    msg.custom_x = 0.1880645149712239;
    msg.custom_y = 0.5831791752946616;
    msg.custom_z = 0.1096542092884899;

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
    msg.setTimeStamp(0.003545585875984192);
    msg.setSource(23246U);
    msg.setSourceEntity(125U);
    msg.setDestination(61046U);
    msg.setDestinationEntity(52U);
    msg.utc_time = 0.8877329785976672;
    msg.reason = 32U;

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
    msg.setTimeStamp(0.8013722531151954);
    msg.setSource(12536U);
    msg.setSourceEntity(46U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.2627613155888555;
    msg.reason = 205U;

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
    msg.setTimeStamp(0.7014649832047934);
    msg.setSource(56274U);
    msg.setSourceEntity(5U);
    msg.setDestination(11737U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.8413651878811064;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.9470443103398072);
    msg.setSource(50673U);
    msg.setSourceEntity(136U);
    msg.setDestination(28015U);
    msg.setDestinationEntity(97U);
    msg.id = 108U;
    msg.range = 0.9275758938026755;
    msg.acceptance = 101U;

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
    msg.setTimeStamp(0.5426565769278695);
    msg.setSource(48682U);
    msg.setSourceEntity(17U);
    msg.setDestination(60945U);
    msg.setDestinationEntity(206U);
    msg.id = 30U;
    msg.range = 0.7279244057280947;
    msg.acceptance = 38U;

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
    msg.setTimeStamp(0.18642177847581254);
    msg.setSource(42652U);
    msg.setSourceEntity(63U);
    msg.setDestination(33006U);
    msg.setDestinationEntity(15U);
    msg.id = 93U;
    msg.range = 0.6984194262070157;
    msg.acceptance = 107U;

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
    msg.setTimeStamp(0.07842996328180485);
    msg.setSource(27200U);
    msg.setSourceEntity(181U);
    msg.setDestination(36399U);
    msg.setDestinationEntity(31U);
    msg.type = 94U;
    msg.reason = 35U;
    msg.value = 0.1229017456441166;
    msg.timestep = 0.8423196148666311;

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
    msg.setTimeStamp(0.7511045718069647);
    msg.setSource(32763U);
    msg.setSourceEntity(251U);
    msg.setDestination(36244U);
    msg.setDestinationEntity(67U);
    msg.type = 185U;
    msg.reason = 232U;
    msg.value = 0.8456759234641745;
    msg.timestep = 0.43640893164321626;

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
    msg.setTimeStamp(0.7630432936795443);
    msg.setSource(56881U);
    msg.setSourceEntity(234U);
    msg.setDestination(65069U);
    msg.setDestinationEntity(145U);
    msg.type = 140U;
    msg.reason = 132U;
    msg.value = 0.680891915543549;
    msg.timestep = 0.5281217551731788;

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
    msg.setTimeStamp(0.7238180973303145);
    msg.setSource(51581U);
    msg.setSourceEntity(225U);
    msg.setDestination(54632U);
    msg.setDestinationEntity(249U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PJHCRQUOCUTUDVQFEJJBNPQUAGSALVRVEEGAWI");
    tmp_msg_0.lat = 0.3682418484610184;
    tmp_msg_0.lon = 0.7140411956718918;
    tmp_msg_0.depth = 0.9294375949447897;
    tmp_msg_0.query_channel = 144U;
    tmp_msg_0.reply_channel = 199U;
    tmp_msg_0.transponder_delay = 163U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7082491061686018;
    msg.y = 0.6474931777129094;
    msg.var_x = 0.48052369795824235;
    msg.var_y = 0.546634958302607;
    msg.distance = 0.05579944927162084;

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
    msg.setTimeStamp(0.978259251278217);
    msg.setSource(3519U);
    msg.setSourceEntity(162U);
    msg.setDestination(18573U);
    msg.setDestinationEntity(252U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RKEDQBFTIAUKTQXFYXITMZWXIYFWHURWWSYGBISFEHSPFPUMVTVVKZYDZGFNSVEQOMIEENPGDBLBZOZHDGZSBINJCLJA");
    tmp_msg_0.lat = 0.21501134517850495;
    tmp_msg_0.lon = 0.45375598337350553;
    tmp_msg_0.depth = 0.6155263324733775;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 82U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.886742054244853;
    msg.y = 0.2705662166426952;
    msg.var_x = 0.6651359640702856;
    msg.var_y = 0.9652960377877386;
    msg.distance = 0.6214125401843219;

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
    msg.setTimeStamp(0.41316554506594216);
    msg.setSource(54522U);
    msg.setSourceEntity(249U);
    msg.setDestination(14099U);
    msg.setDestinationEntity(169U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MCDBEJHRIFGJZPCIKVXIEVZVDZIRHXGSQDOFNISPRCCWVPIYAEDPKCSAHENFNAHAYTSAKBDWXERVQYSBTJWFOTUUEZBJASMBLXTPXGUNRLWFQCPJXIWBVHPQYXUUCZOEUSTXMZOKOEJTSPQVVHFEUKTLMDALYAWBJFYYKILPUGVUTSCOHCXNVBLRRGQUNAJOFIGPTWHGQMXYYLQMWLQDKDHWTMOIBZROGCNLJAWDNJZGKHQEMRMNZZDKRFMK");
    tmp_msg_0.lat = 0.6366290093836339;
    tmp_msg_0.lon = 0.10998837365755332;
    tmp_msg_0.depth = 0.9648930118573209;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 123U;
    tmp_msg_0.transponder_delay = 241U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5233152029216649;
    msg.y = 0.36525518171765636;
    msg.var_x = 0.46027316066444734;
    msg.var_y = 0.0419653396391535;
    msg.distance = 0.6984881481374092;

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
    msg.setTimeStamp(0.6923958983258054);
    msg.setSource(22083U);
    msg.setSourceEntity(199U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(212U);
    msg.state = 126U;

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
    msg.setTimeStamp(0.5344289263442178);
    msg.setSource(54376U);
    msg.setSourceEntity(203U);
    msg.setDestination(30415U);
    msg.setDestinationEntity(216U);
    msg.state = 34U;

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
    msg.setTimeStamp(0.24384584760630423);
    msg.setSource(26392U);
    msg.setSourceEntity(28U);
    msg.setDestination(56349U);
    msg.setDestinationEntity(198U);
    msg.state = 107U;

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
    msg.setTimeStamp(0.9066498279828816);
    msg.setSource(6668U);
    msg.setSourceEntity(80U);
    msg.setDestination(62169U);
    msg.setDestinationEntity(145U);
    msg.x = 0.1447277617559426;
    msg.y = 0.027969338640107644;
    msg.z = 0.028534750586534985;

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
    msg.setTimeStamp(0.23876968301628898);
    msg.setSource(24844U);
    msg.setSourceEntity(144U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(223U);
    msg.x = 0.2949386553311819;
    msg.y = 0.331720019850856;
    msg.z = 0.5485913787821054;

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
    msg.setTimeStamp(0.08220113627466885);
    msg.setSource(59147U);
    msg.setSourceEntity(96U);
    msg.setDestination(64611U);
    msg.setDestinationEntity(248U);
    msg.x = 0.6708071854047095;
    msg.y = 0.9028473755823921;
    msg.z = 0.5999072729686002;

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
    msg.setTimeStamp(0.8045101700614037);
    msg.setSource(47803U);
    msg.setSourceEntity(252U);
    msg.setDestination(51441U);
    msg.setDestinationEntity(90U);
    msg.va = 0.4711448989024918;
    msg.aoa = 0.19511824272539402;
    msg.ssa = 0.5551201596068803;

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
    msg.setTimeStamp(0.9628436095133681);
    msg.setSource(21268U);
    msg.setSourceEntity(193U);
    msg.setDestination(32346U);
    msg.setDestinationEntity(141U);
    msg.va = 0.5527491301275858;
    msg.aoa = 0.6298884062241754;
    msg.ssa = 0.13915873686470992;

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
    msg.setTimeStamp(0.7158872683995019);
    msg.setSource(36278U);
    msg.setSourceEntity(19U);
    msg.setDestination(6284U);
    msg.setDestinationEntity(238U);
    msg.va = 0.08644489801539179;
    msg.aoa = 0.24581227299765795;
    msg.ssa = 0.14222769241056432;

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
    msg.setTimeStamp(0.46368070732596744);
    msg.setSource(7050U);
    msg.setSourceEntity(22U);
    msg.setDestination(40690U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7782193506835509;

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
    msg.setTimeStamp(0.33632893649175744);
    msg.setSource(49427U);
    msg.setSourceEntity(127U);
    msg.setDestination(20515U);
    msg.setDestinationEntity(11U);
    msg.value = 0.22884152108695943;

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
    msg.setTimeStamp(0.8060149743281885);
    msg.setSource(13411U);
    msg.setSourceEntity(134U);
    msg.setDestination(5316U);
    msg.setDestinationEntity(38U);
    msg.value = 0.1887755352235293;

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
    msg.setTimeStamp(0.5705572730979644);
    msg.setSource(43162U);
    msg.setSourceEntity(83U);
    msg.setDestination(52135U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5906233156402529;
    msg.z_units = 32U;

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
    msg.setTimeStamp(0.7766842679291888);
    msg.setSource(61705U);
    msg.setSourceEntity(73U);
    msg.setDestination(40973U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7576776848732747;
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
    msg.setTimeStamp(0.5499682431552406);
    msg.setSource(28612U);
    msg.setSourceEntity(24U);
    msg.setDestination(61494U);
    msg.setDestinationEntity(242U);
    msg.value = 0.006336459503546554;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.7047679420075623);
    msg.setSource(21736U);
    msg.setSourceEntity(186U);
    msg.setDestination(54692U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5532738699656133;
    msg.speed_units = 232U;

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
    msg.setTimeStamp(0.7507528983490588);
    msg.setSource(20683U);
    msg.setSourceEntity(208U);
    msg.setDestination(56019U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5496270696888932;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.8471282614897412);
    msg.setSource(53490U);
    msg.setSourceEntity(126U);
    msg.setDestination(34939U);
    msg.setDestinationEntity(240U);
    msg.value = 0.1430217691815857;
    msg.speed_units = 174U;

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
    msg.setTimeStamp(0.7168263345264282);
    msg.setSource(19414U);
    msg.setSourceEntity(197U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(82U);
    msg.value = 0.874777051233851;

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
    msg.setTimeStamp(0.9020316768502605);
    msg.setSource(19867U);
    msg.setSourceEntity(50U);
    msg.setDestination(20669U);
    msg.setDestinationEntity(120U);
    msg.value = 0.175925740444402;

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
    msg.setTimeStamp(0.15675198097828213);
    msg.setSource(48852U);
    msg.setSourceEntity(125U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8905578912406691;

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
    msg.setTimeStamp(0.00952274464006131);
    msg.setSource(59907U);
    msg.setSourceEntity(245U);
    msg.setDestination(26177U);
    msg.setDestinationEntity(87U);
    msg.value = 0.3407306186015854;

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
    msg.setTimeStamp(0.0016907799595337059);
    msg.setSource(27992U);
    msg.setSourceEntity(26U);
    msg.setDestination(46293U);
    msg.setDestinationEntity(98U);
    msg.value = 0.47674607081507625;

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
    msg.setTimeStamp(0.0839909238872667);
    msg.setSource(12340U);
    msg.setSourceEntity(66U);
    msg.setDestination(6343U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9507546056110656;

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
    msg.setTimeStamp(0.8543095453498426);
    msg.setSource(49754U);
    msg.setSourceEntity(237U);
    msg.setDestination(36916U);
    msg.setDestinationEntity(42U);
    msg.value = 0.06900382009756578;

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
    msg.setTimeStamp(0.7083117503703033);
    msg.setSource(58154U);
    msg.setSourceEntity(203U);
    msg.setDestination(40962U);
    msg.setDestinationEntity(172U);
    msg.value = 0.17085609933589763;

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
    msg.setTimeStamp(0.5083104202857897);
    msg.setSource(12116U);
    msg.setSourceEntity(221U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(61U);
    msg.value = 0.012585234747942708;

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
    msg.setTimeStamp(0.3087946811639837);
    msg.setSource(30294U);
    msg.setSourceEntity(217U);
    msg.setDestination(23488U);
    msg.setDestinationEntity(131U);
    msg.path_ref = 4003786481U;
    msg.start_lat = 0.08859200658736144;
    msg.start_lon = 0.7540180116712997;
    msg.start_z = 0.8533975022653449;
    msg.start_z_units = 4U;
    msg.end_lat = 0.23346248512217505;
    msg.end_lon = 0.9143670858196918;
    msg.end_z = 0.38063752443168897;
    msg.end_z_units = 105U;
    msg.speed = 0.1451691824069704;
    msg.speed_units = 146U;
    msg.lradius = 0.667244232910593;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.6023077469098883);
    msg.setSource(60459U);
    msg.setSourceEntity(114U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 1515621940U;
    msg.start_lat = 0.25643030102619824;
    msg.start_lon = 0.588380025159458;
    msg.start_z = 0.9007012272754823;
    msg.start_z_units = 204U;
    msg.end_lat = 0.8310120835683036;
    msg.end_lon = 0.3341585292198772;
    msg.end_z = 0.13860976615164844;
    msg.end_z_units = 34U;
    msg.speed = 0.05865865043232099;
    msg.speed_units = 138U;
    msg.lradius = 0.5766928670426071;
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
    msg.setTimeStamp(0.294393758294464);
    msg.setSource(1450U);
    msg.setSourceEntity(69U);
    msg.setDestination(41670U);
    msg.setDestinationEntity(142U);
    msg.path_ref = 1904286212U;
    msg.start_lat = 0.6927156967008794;
    msg.start_lon = 0.16485999069600887;
    msg.start_z = 0.45347275501517836;
    msg.start_z_units = 126U;
    msg.end_lat = 0.6432008694157234;
    msg.end_lon = 0.3998692688745972;
    msg.end_z = 0.9312052104084063;
    msg.end_z_units = 121U;
    msg.speed = 0.895446731982122;
    msg.speed_units = 69U;
    msg.lradius = 0.9697506210481783;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.014906547858910213);
    msg.setSource(13000U);
    msg.setSourceEntity(227U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(23U);
    msg.x = 0.8959609588943612;
    msg.y = 0.5576104989475432;
    msg.z = 0.8641774462715807;
    msg.k = 0.6084687061343481;
    msg.m = 0.7144369854999914;
    msg.n = 0.5400381305404959;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.025620358778440933);
    msg.setSource(50420U);
    msg.setSourceEntity(163U);
    msg.setDestination(45024U);
    msg.setDestinationEntity(245U);
    msg.x = 0.6027810610806795;
    msg.y = 0.4716930454597684;
    msg.z = 0.14484359014837822;
    msg.k = 0.8295420762272182;
    msg.m = 0.45176154418354975;
    msg.n = 0.5649478317902744;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.6851094049844114);
    msg.setSource(26711U);
    msg.setSourceEntity(146U);
    msg.setDestination(35854U);
    msg.setDestinationEntity(51U);
    msg.x = 0.2048089407957997;
    msg.y = 0.42498001118126316;
    msg.z = 0.5798817930766045;
    msg.k = 0.8115698284077901;
    msg.m = 0.5970880034953786;
    msg.n = 0.2691002533564443;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.39355066370491876);
    msg.setSource(38272U);
    msg.setSourceEntity(151U);
    msg.setDestination(15462U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9700711332842729;

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
    msg.setTimeStamp(0.5296392224149035);
    msg.setSource(6928U);
    msg.setSourceEntity(103U);
    msg.setDestination(54326U);
    msg.setDestinationEntity(232U);
    msg.value = 0.9594284983838244;

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
    msg.setTimeStamp(0.5880153423136962);
    msg.setSource(40518U);
    msg.setSourceEntity(10U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5075718881358954;

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
    msg.setTimeStamp(0.4900208583941634);
    msg.setSource(8586U);
    msg.setSourceEntity(196U);
    msg.setDestination(63536U);
    msg.setDestinationEntity(191U);
    msg.u = 0.9693689279134975;
    msg.v = 0.8711754269620112;
    msg.w = 0.6089895534588199;
    msg.p = 0.20070216738054836;
    msg.q = 0.01925060201802342;
    msg.r = 0.5962136831243379;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.46191538123006015);
    msg.setSource(59844U);
    msg.setSourceEntity(73U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(141U);
    msg.u = 0.5405559382020403;
    msg.v = 0.04603017440940693;
    msg.w = 0.46891357864723526;
    msg.p = 0.15322545027324008;
    msg.q = 0.24222460884073538;
    msg.r = 0.3071791718561322;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.4586389211013102);
    msg.setSource(9938U);
    msg.setSourceEntity(144U);
    msg.setDestination(26906U);
    msg.setDestinationEntity(105U);
    msg.u = 0.41642131316820485;
    msg.v = 0.6691855240312737;
    msg.w = 0.42369751734273453;
    msg.p = 0.418857660108477;
    msg.q = 0.8514359086109083;
    msg.r = 0.9635623231089153;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.1877301766328543);
    msg.setSource(63952U);
    msg.setSourceEntity(139U);
    msg.setDestination(27239U);
    msg.setDestinationEntity(35U);
    msg.path_ref = 663457101U;
    msg.start_lat = 0.9357359818928688;
    msg.start_lon = 0.8325624193166236;
    msg.start_z = 0.8541947524086003;
    msg.start_z_units = 211U;
    msg.end_lat = 0.6213274503278201;
    msg.end_lon = 0.774489774733465;
    msg.end_z = 0.34817722903337867;
    msg.end_z_units = 225U;
    msg.lradius = 0.04258038132781461;
    msg.flags = 43U;
    msg.x = 0.1771259036677827;
    msg.y = 0.7499575459848922;
    msg.z = 0.12818094779786304;
    msg.vx = 0.8394493002787009;
    msg.vy = 0.758577210385852;
    msg.vz = 0.3885262044317004;
    msg.course_error = 0.07775869509354594;
    msg.eta = 1413U;

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
    msg.setTimeStamp(0.6396501700802734);
    msg.setSource(51509U);
    msg.setSourceEntity(15U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(159U);
    msg.path_ref = 3131072113U;
    msg.start_lat = 0.4919573541280884;
    msg.start_lon = 0.38732566551638437;
    msg.start_z = 0.38992371540109116;
    msg.start_z_units = 33U;
    msg.end_lat = 0.6743716958604975;
    msg.end_lon = 0.037578308292050666;
    msg.end_z = 0.44457531007527484;
    msg.end_z_units = 247U;
    msg.lradius = 0.6354351221923927;
    msg.flags = 18U;
    msg.x = 0.0612701840535288;
    msg.y = 0.932717446094505;
    msg.z = 0.16176719943475482;
    msg.vx = 0.3194871841939041;
    msg.vy = 0.8378023201035426;
    msg.vz = 0.11473005333626218;
    msg.course_error = 0.8175665045455772;
    msg.eta = 47870U;

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
    msg.setTimeStamp(0.9077568406501512);
    msg.setSource(35770U);
    msg.setSourceEntity(121U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(174U);
    msg.path_ref = 1566938099U;
    msg.start_lat = 0.8280187738882733;
    msg.start_lon = 0.520471449277481;
    msg.start_z = 0.044225830628638496;
    msg.start_z_units = 121U;
    msg.end_lat = 0.3020513437159077;
    msg.end_lon = 0.4720935168966125;
    msg.end_z = 0.10974256996952925;
    msg.end_z_units = 200U;
    msg.lradius = 0.10469961625443014;
    msg.flags = 45U;
    msg.x = 0.9769413594292203;
    msg.y = 0.854981007166185;
    msg.z = 0.03521716428947219;
    msg.vx = 0.9228280925132059;
    msg.vy = 0.6958129480576782;
    msg.vz = 0.018610864267455285;
    msg.course_error = 0.03156702777791587;
    msg.eta = 38763U;

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
    msg.setTimeStamp(0.8626567340008001);
    msg.setSource(48354U);
    msg.setSourceEntity(12U);
    msg.setDestination(56816U);
    msg.setDestinationEntity(229U);
    msg.k = 0.8058524169451321;
    msg.m = 0.5269531706424525;
    msg.n = 0.14882463110682942;

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
    msg.setTimeStamp(0.281221569086503);
    msg.setSource(12868U);
    msg.setSourceEntity(3U);
    msg.setDestination(51261U);
    msg.setDestinationEntity(31U);
    msg.k = 0.12224866303650406;
    msg.m = 0.8577419381426618;
    msg.n = 0.23072678510825406;

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
    msg.setTimeStamp(0.19368286861173534);
    msg.setSource(51801U);
    msg.setSourceEntity(75U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(184U);
    msg.k = 0.07610415214067434;
    msg.m = 0.808813502340482;
    msg.n = 0.3325943111144649;

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
    msg.setTimeStamp(0.6198868183240873);
    msg.setSource(60237U);
    msg.setSourceEntity(55U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(233U);
    msg.p = 0.9136213949740171;
    msg.i = 0.9667060356563645;
    msg.d = 0.015284655689211335;
    msg.a = 0.21983575295340607;

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
    msg.setTimeStamp(0.3098540149655574);
    msg.setSource(18008U);
    msg.setSourceEntity(97U);
    msg.setDestination(58117U);
    msg.setDestinationEntity(245U);
    msg.p = 0.8185580747402402;
    msg.i = 0.7286936486591519;
    msg.d = 0.06397506847787127;
    msg.a = 0.31472605777398155;

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
    msg.setTimeStamp(0.060174612932698435);
    msg.setSource(4201U);
    msg.setSourceEntity(30U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(200U);
    msg.p = 0.6986095702578274;
    msg.i = 0.6357330008722762;
    msg.d = 0.7105219027343724;
    msg.a = 0.10579069985127765;

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
    msg.setTimeStamp(0.24394514748421414);
    msg.setSource(49438U);
    msg.setSourceEntity(25U);
    msg.setDestination(53082U);
    msg.setDestinationEntity(181U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.2893989130439165);
    msg.setSource(21062U);
    msg.setSourceEntity(89U);
    msg.setDestination(24721U);
    msg.setDestinationEntity(231U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.2555546714330056);
    msg.setSource(3554U);
    msg.setSourceEntity(167U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(143U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.680805424499292);
    msg.setSource(35837U);
    msg.setSourceEntity(118U);
    msg.setDestination(60285U);
    msg.setDestinationEntity(239U);
    msg.x = 0.4844652216850439;
    msg.y = 0.9320296980296968;
    msg.z = 0.8880095015271715;
    msg.vx = 0.3726057789439373;
    msg.vy = 0.14243802275338036;
    msg.vz = 0.3314227622085162;
    msg.ax = 0.9252665784602528;
    msg.ay = 0.7565735241581442;
    msg.az = 0.5982054109118928;
    msg.flags = 42019U;

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
    msg.setTimeStamp(0.842214702353041);
    msg.setSource(14264U);
    msg.setSourceEntity(242U);
    msg.setDestination(17465U);
    msg.setDestinationEntity(34U);
    msg.x = 0.5939033077466063;
    msg.y = 0.005117495881239775;
    msg.z = 0.35963341678181726;
    msg.vx = 0.5513135470576979;
    msg.vy = 0.8557417259621988;
    msg.vz = 0.0643199360442277;
    msg.ax = 0.8031603686395637;
    msg.ay = 0.4129229869830051;
    msg.az = 0.022298320197042476;
    msg.flags = 20598U;

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
    msg.setTimeStamp(0.380407377053565);
    msg.setSource(47821U);
    msg.setSourceEntity(78U);
    msg.setDestination(3274U);
    msg.setDestinationEntity(143U);
    msg.x = 0.9657916939911094;
    msg.y = 0.5667113282264062;
    msg.z = 0.701449646448496;
    msg.vx = 0.005629383234565299;
    msg.vy = 0.558254985559439;
    msg.vz = 0.6717800383236341;
    msg.ax = 0.03865364104332436;
    msg.ay = 0.34965225578295;
    msg.az = 0.8527263298112007;
    msg.flags = 19053U;

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
    msg.setTimeStamp(0.22666868820614883);
    msg.setSource(60228U);
    msg.setSourceEntity(232U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(68U);
    msg.value = 0.689356020612277;

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
    msg.setTimeStamp(0.4754906655350225);
    msg.setSource(19079U);
    msg.setSourceEntity(102U);
    msg.setDestination(33574U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9694288171189364;

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
    msg.setTimeStamp(0.08533198753124671);
    msg.setSource(19716U);
    msg.setSourceEntity(134U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(35U);
    msg.value = 0.3886395811470831;

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
    msg.setTimeStamp(0.8838394474721666);
    msg.setSource(44263U);
    msg.setSourceEntity(66U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(52U);
    msg.timeout = 19468U;
    msg.lat = 0.9365850298027723;
    msg.lon = 0.7043935382427533;
    msg.z = 0.923035160377859;
    msg.z_units = 134U;
    msg.speed = 0.14473470048478598;
    msg.speed_units = 147U;
    msg.roll = 0.2691938186653996;
    msg.pitch = 0.2944192163916114;
    msg.yaw = 0.6150936695285373;
    msg.custom.assign("UWMFOERFQNJHRDSVMBBTTEEWNZCTFFCOASQQIZREISELH");

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
    msg.setTimeStamp(0.662486639748536);
    msg.setSource(1219U);
    msg.setSourceEntity(172U);
    msg.setDestination(35182U);
    msg.setDestinationEntity(99U);
    msg.timeout = 13068U;
    msg.lat = 0.8471518875184195;
    msg.lon = 0.6672522602875384;
    msg.z = 0.6079910441530799;
    msg.z_units = 146U;
    msg.speed = 0.8730422836707139;
    msg.speed_units = 194U;
    msg.roll = 0.09153336183739702;
    msg.pitch = 0.28497514975689986;
    msg.yaw = 0.8052392382825116;
    msg.custom.assign("KDTAYYEEEJJWOIMTASSDGFUOWULEFSTZBQFOPHCIYCFHPZWZNGIUWHOBUFCZXXYLRVSJKQHMPSJWMSVPQBVKBZQHHYJ");

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
    msg.setTimeStamp(0.47182729269707435);
    msg.setSource(62264U);
    msg.setSourceEntity(76U);
    msg.setDestination(13817U);
    msg.setDestinationEntity(111U);
    msg.timeout = 50470U;
    msg.lat = 0.4917615634770407;
    msg.lon = 0.28988210708889284;
    msg.z = 0.9263308652204533;
    msg.z_units = 117U;
    msg.speed = 0.2541756388536627;
    msg.speed_units = 58U;
    msg.roll = 0.10570746759323502;
    msg.pitch = 0.25380352597299694;
    msg.yaw = 0.4927378439646859;
    msg.custom.assign("UZPNNGTDZGGJVVFDQZDTSXCJEWUHWYHQFCEOLRBMLHKCWRRZDKHRHXBYTKSVSMRVWICXXGVLGPYXSATXFKCULVUZVYIUY");

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
    msg.setTimeStamp(0.7918834299709295);
    msg.setSource(4628U);
    msg.setSourceEntity(124U);
    msg.setDestination(7169U);
    msg.setDestinationEntity(106U);
    msg.timeout = 6602U;
    msg.lat = 0.19071026326662133;
    msg.lon = 0.21555100908614422;
    msg.z = 0.8857051293378001;
    msg.z_units = 33U;
    msg.speed = 0.27924826627427435;
    msg.speed_units = 126U;
    msg.duration = 3348U;
    msg.radius = 0.17708414028604258;
    msg.flags = 33U;
    msg.custom.assign("SFKLVFANQXBGACTHODKKSWZXQMEFJSBMEOEZESQRJHWBIIACENDXRYRNYVZOBZATGGFCIGQKNUWBVWPOHIJBVDSZJTAKLMRSLNATFKFRSGFWPCXKUIQLRRZSOSTQTKOTENXIGFUKXTOQLPDUOZQILPRUDHZMIVPGVEAEGPWYVUYXBMBWYCIJRPLYJSLAMPDHHHGKXEWCPMANIJBWQQVNFYJMMWDTERTCJMGXXHDHUOZJBFVDYPZYLAVLU");

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
    msg.setTimeStamp(0.6983444808079964);
    msg.setSource(11786U);
    msg.setSourceEntity(154U);
    msg.setDestination(56551U);
    msg.setDestinationEntity(86U);
    msg.timeout = 31127U;
    msg.lat = 0.3957973812524306;
    msg.lon = 0.052701172376080296;
    msg.z = 0.8285766942422508;
    msg.z_units = 246U;
    msg.speed = 0.9884173610445963;
    msg.speed_units = 187U;
    msg.duration = 14996U;
    msg.radius = 0.8082406854310799;
    msg.flags = 102U;
    msg.custom.assign("RGQNQRSSFHUJGOLXFNFCYWPX");

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
    msg.setTimeStamp(0.5711708801305134);
    msg.setSource(11566U);
    msg.setSourceEntity(55U);
    msg.setDestination(60140U);
    msg.setDestinationEntity(191U);
    msg.timeout = 47477U;
    msg.lat = 0.27049138937676775;
    msg.lon = 0.010852075665724215;
    msg.z = 0.6963621429699264;
    msg.z_units = 73U;
    msg.speed = 0.3608678561821639;
    msg.speed_units = 246U;
    msg.duration = 43870U;
    msg.radius = 0.18320004114714705;
    msg.flags = 123U;
    msg.custom.assign("QFDYIUCQZHQEGVLGUHKACRFKWAFDLXAZXYFIOUMXQGWWAMBMUOTSMOSVPHPWDNMPRHCHESJRWXVHNQELJUKQGENJVEWOATFUZTQYJCTJLXYKGZWHOUJUHOGGCGRCRNYXDVFAUYZOKDEISKKBEZDMBVBPDNRYCTKEAIUKRBSCYVSBIRVCRXVPMBHMIZOZLMTXSL");

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
    msg.setTimeStamp(0.44340121244403075);
    msg.setSource(64564U);
    msg.setSourceEntity(182U);
    msg.setDestination(10986U);
    msg.setDestinationEntity(23U);
    msg.custom.assign("DCWPAHMFCLXBLBDJZVSKTJQGWKCDZIUNIYYWUPKXXBRCXGJHULGYALNGLRSZPILXSMHHQUJMDZRDBEFOJRFSQUEISOVTSOWYOTFNKJVAIADFJRCWREYVBZOTHZNVUREMOCQYUYNSBKXQILPPRKNADWHNMGPNFFXRHETWZTXECLIYOZZPAMIMKDTEIVFUWUVJKQKWBOWQN");

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
    msg.setTimeStamp(0.6724862999370498);
    msg.setSource(17178U);
    msg.setSourceEntity(5U);
    msg.setDestination(46520U);
    msg.setDestinationEntity(148U);
    msg.custom.assign("UHILVSNNJYKJKCYTLYXFZMPMNGYIDVDWPPQQSFEZHBARZBAOATWNENJBWOXNTXULDKLFBJTRQCKWXRASOGPBGAMWCVENCFZUYZTVOKKMMKYVESOPEKJFYQDT");

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
    msg.setTimeStamp(0.9725721172359347);
    msg.setSource(23922U);
    msg.setSourceEntity(19U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(202U);
    msg.custom.assign("XFOYUVJOPAKDUOBGVAEQUZZZARVCNWDWPFJNMFNAPXHPSYGQQQPWDTIUKWYASFIQSRPTBRLQLTTENBWZWZLRKBIVDKUMRCNTMXRMLGSEQLXCUKECPZGWFGSIIDNTQFVAZKYXBVHSEBSNQERXHNSOCDTMOUFHGITLJPJLXGMNEOIHHRHCZNDFTBDCPIJOOFBUZLVXGOXJOVGTCJYSSYUCZVAYBVKLIUKWKKMYHJDWCGMWHRIEEABXRJQFL");

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
    msg.setTimeStamp(0.8144643587385352);
    msg.setSource(34667U);
    msg.setSourceEntity(233U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(23U);
    msg.timeout = 18273U;
    msg.lat = 0.04525099939163668;
    msg.lon = 0.15518709824933663;
    msg.z = 0.9531154894966015;
    msg.z_units = 15U;
    msg.duration = 23423U;
    msg.speed = 0.24324964456932918;
    msg.speed_units = 212U;
    msg.type = 110U;
    msg.radius = 0.6199049850034617;
    msg.length = 0.9669385746458147;
    msg.bearing = 0.43280264273175983;
    msg.direction = 146U;
    msg.custom.assign("JUCHCLNVSARFIELYYQTGXGVGUYWETNKDQLNMAQTHEPUPJZEFVSJHOLUWHRFYEMFBVWSSKRYDVLPHTPGNRHBMAXWMZYTBAHXFAVHGWPGDFXEGSLZMLTOPDGJHSIJBIWWXALIBCUNXBNCBTQURSKODWKPYUXUQIICGIPXKWREFKVDCQXDBFJBNAQLJOVWCNCXVJGMYITOCPRKKOFRNCSZEUTD");

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
    msg.setTimeStamp(0.9102090325672876);
    msg.setSource(53597U);
    msg.setSourceEntity(158U);
    msg.setDestination(33382U);
    msg.setDestinationEntity(223U);
    msg.timeout = 55929U;
    msg.lat = 0.8626432053105506;
    msg.lon = 0.17721884934374177;
    msg.z = 0.26263198050045833;
    msg.z_units = 172U;
    msg.duration = 26256U;
    msg.speed = 0.6988657533774766;
    msg.speed_units = 162U;
    msg.type = 24U;
    msg.radius = 0.5595813444091557;
    msg.length = 0.37662243973782195;
    msg.bearing = 0.29210143789613763;
    msg.direction = 207U;
    msg.custom.assign("XAOOQDJGVCVAWUGCJJSBXKXICISJYGFRQFTJIOYTUPDGDMVOWJUZZFZWLZBPDMOLQKFVPLGIVTJMWRUEZWVZEFMPCXNXIEOYMMMXEHYLETBQDSHLRYBXKQSLJEBYCSQQBIWCUZPHARRPNUCHKZBM");

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
    msg.setTimeStamp(0.8817752284701789);
    msg.setSource(26616U);
    msg.setSourceEntity(72U);
    msg.setDestination(11482U);
    msg.setDestinationEntity(226U);
    msg.timeout = 21558U;
    msg.lat = 0.1576429530005461;
    msg.lon = 0.34534847389469714;
    msg.z = 0.824555561687992;
    msg.z_units = 17U;
    msg.duration = 36679U;
    msg.speed = 0.9953151229326196;
    msg.speed_units = 52U;
    msg.type = 91U;
    msg.radius = 0.2185952149804844;
    msg.length = 0.6260702968287392;
    msg.bearing = 0.6172427146531433;
    msg.direction = 180U;
    msg.custom.assign("RWXKBIGFPRCTAMWTHSBVMJONAOWAHPYCPUOKBBBNRENMGZKLXTFFJTOVGVFQKSIVQFZPYLLZRMYGKHRXSSFEQOLJYNAYKJEZPXDXGLJXZAVTISSSBPFXIUUQYQEPNDMSIFUGWHLIROWPGJZEJMDKCVWAXGDMHZTMNXUKGWJJAYQAHDQHMXNDHZLRALDOEQSTKVQDF");

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
    msg.setTimeStamp(0.5638673806181099);
    msg.setSource(12493U);
    msg.setSourceEntity(48U);
    msg.setDestination(26444U);
    msg.setDestinationEntity(154U);
    msg.duration = 2175U;
    msg.custom.assign("PDZHHXXHKFQWKOIDCTZRBHJGJLPPJFLYWEYSEGOABVMT");

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
    msg.setTimeStamp(0.019578530707817676);
    msg.setSource(9603U);
    msg.setSourceEntity(157U);
    msg.setDestination(1732U);
    msg.setDestinationEntity(39U);
    msg.duration = 60767U;
    msg.custom.assign("UWGOMHZVETXNALAHTCNJVXDMGGYBMSWULETAYFZTUPWSF");

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
    msg.setTimeStamp(0.27060000533387596);
    msg.setSource(39053U);
    msg.setSourceEntity(213U);
    msg.setDestination(58943U);
    msg.setDestinationEntity(76U);
    msg.duration = 51253U;
    msg.custom.assign("FLMURSUDUNTVUVXGGIPZUEUWVJWRZPXCZLFOQJQNJWASVLYSEEMRBOOCANQABVINWKFWXHIVFOWHDKDKTWBAPGTEYTZFGAKOKMTWIJMTHAOXYBXETLSVFESJNUDSCIYGMNMSCOQLQPXJNKASRBHLFEQUKDPUTGOCQRZXDBFHZUZLRZYBZDPDWLVRLREGHERKHIQJJFAGPNYIGCDHNFTEDJYHXN");

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
    msg.setTimeStamp(0.38267579641425253);
    msg.setSource(34487U);
    msg.setSourceEntity(66U);
    msg.setDestination(42765U);
    msg.setDestinationEntity(150U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6828771578394928;
    tmp_msg_0.speed_units = 203U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8217U;
    msg.custom.assign("JUBHNULCLARYTVKAYTGFJDTJ");

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
    msg.setTimeStamp(0.17653255424194259);
    msg.setSource(19089U);
    msg.setSourceEntity(155U);
    msg.setDestination(23150U);
    msg.setDestinationEntity(143U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.4937350528425902;
    tmp_msg_0.z_units = 95U;
    msg.control.set(tmp_msg_0);
    msg.duration = 6900U;
    msg.custom.assign("UQMCIGDVREFZEKTPTTFYEPPVZQNWINFENSNSXVXTBMCJRGYEOKFAWMZSOKRBPHMLLCFFIOXIKUMCTGLMCLERAFJDSUQODGFJECBNQGDSNJBJDHUPYFAMLQKMEQBOOWYYQBBWHAVIQJHZSMRSKAPTJZUOVRBFJDJZULCQDASXWBYWHKLLTLXRVIYNWRPDZVAKOXEIP");

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
    msg.setTimeStamp(0.851949207841212);
    msg.setSource(13851U);
    msg.setSourceEntity(54U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(118U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.29617753211813325;
    msg.control.set(tmp_msg_0);
    msg.duration = 60713U;
    msg.custom.assign("UZMVCNKQTMWRKRCFSYDMHAMQRYZSILNGKUYXNVLQSJHPUYZUDYGXRXECLEBYEOPSRUZDTWHTBALTIPUIJPTKSVJJOKNAAKQOJYDAOVZOKBFHXSCCGJGGAFTWGJCSDFMAMARRJWYOXQHDXMCWIXTHWRDFSJK");

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
    msg.setTimeStamp(0.3639810856800828);
    msg.setSource(33782U);
    msg.setSourceEntity(118U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(108U);
    msg.timeout = 57830U;
    msg.lat = 0.3930642195620221;
    msg.lon = 0.15380104333682587;
    msg.z = 0.7049603748493564;
    msg.z_units = 116U;
    msg.speed = 0.3846627568373674;
    msg.speed_units = 223U;
    msg.bearing = 0.7844786976765965;
    msg.cross_angle = 0.9967589960129825;
    msg.width = 0.6397399928597285;
    msg.length = 0.1643927368462249;
    msg.hstep = 0.1953779514222015;
    msg.coff = 52U;
    msg.alternation = 128U;
    msg.flags = 103U;
    msg.custom.assign("KOLJHDBYIHGDWYEUWRQTJHIIHCRBOSIIYRXVTKPXCVXKLBPATUNNMXBYLEGWCNFCQWAWQGBSGRCSYEVRKLDMTRNBZTOWEMILCAJEJZXHQHNZMFYZREJXUFOVQND");

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
    msg.setTimeStamp(0.031707104119938934);
    msg.setSource(12925U);
    msg.setSourceEntity(186U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(9U);
    msg.timeout = 65090U;
    msg.lat = 0.13010250706478488;
    msg.lon = 0.003576425842764741;
    msg.z = 0.9409064539917361;
    msg.z_units = 44U;
    msg.speed = 0.28527604453821076;
    msg.speed_units = 140U;
    msg.bearing = 0.24909573100026772;
    msg.cross_angle = 0.04889916905008751;
    msg.width = 0.7447088283631572;
    msg.length = 0.4830166358201584;
    msg.hstep = 0.9325784735518988;
    msg.coff = 190U;
    msg.alternation = 141U;
    msg.flags = 23U;
    msg.custom.assign("PSSDNGAGHBYOWOKRWHAZZMJUXHDSYTWYGEOUGJKSBRPTOLNFLGWXVCAJGNLKNCGYIDKHXCOUQYCMPBERYZJFBCGRSDOZTQJQEUJQMEMZHLVRYHPOZIEWEKVNRSFLZNIWADDLLNMPQFOZASFUVCUPWUQNTSFXBUJUTMRDPFIHEOSMZQDVFSBXQTTJVVAMVXPAJGVFNHQOGMTJLAKTC");

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
    msg.setTimeStamp(0.4543415021721461);
    msg.setSource(12944U);
    msg.setSourceEntity(101U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(193U);
    msg.timeout = 34245U;
    msg.lat = 0.4796796698572954;
    msg.lon = 0.6736207543083684;
    msg.z = 0.6899613884778667;
    msg.z_units = 86U;
    msg.speed = 0.05017825239869744;
    msg.speed_units = 193U;
    msg.bearing = 0.43785511835531987;
    msg.cross_angle = 0.5814942948507548;
    msg.width = 0.21663910440988077;
    msg.length = 0.367827943610202;
    msg.hstep = 0.4335918543302193;
    msg.coff = 70U;
    msg.alternation = 119U;
    msg.flags = 132U;
    msg.custom.assign("ZMEQHCNRKUHEJXZLBRWVCYJTESYZVXNLOXDXNKQWJBOGYLVDSJMDQVCUCF");

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
    msg.setTimeStamp(0.44354327779435376);
    msg.setSource(18259U);
    msg.setSourceEntity(188U);
    msg.setDestination(15736U);
    msg.setDestinationEntity(234U);
    msg.timeout = 21107U;
    msg.lat = 0.9540818113937206;
    msg.lon = 0.9558683376896129;
    msg.z = 0.03597611163714931;
    msg.z_units = 243U;
    msg.speed = 0.0004661364586469041;
    msg.speed_units = 192U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3293351620184991;
    tmp_msg_0.y = 0.40838279565672564;
    tmp_msg_0.z = 0.7716424228972752;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YIWHQKMMHZLAFYBGINKCHMSIIXZFZLYRJOPBCYKPVYNMNAVVXLTAZHEYVDCIMHXOURRKRKEESTZUCZWDODPRPLNWFEQOLSXGERCXUQXGISCQZYJUJQSBFNGRMJFXSTBXVASOLPJOECWVCMZNMQBBNBVBSFHDIFYKRKHIGHCYTGUIJPQNZOAPEOXJCDQUWDRAAGJWMTOV");

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
    msg.setTimeStamp(0.324132014572744);
    msg.setSource(53410U);
    msg.setSourceEntity(122U);
    msg.setDestination(11956U);
    msg.setDestinationEntity(246U);
    msg.timeout = 9352U;
    msg.lat = 0.5790775011793001;
    msg.lon = 0.3001576792249143;
    msg.z = 0.6216995836675036;
    msg.z_units = 199U;
    msg.speed = 0.22074887979467184;
    msg.speed_units = 195U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.26617329535894363;
    tmp_msg_0.y = 0.562523262048102;
    tmp_msg_0.z = 0.47867602311157764;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SNJYKLOPEEHWCHPYEVYMIZPODDHGDENRTTAJQMFNZYOXPDSGZQYLUTUL");

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
    msg.setTimeStamp(0.03544388102248597);
    msg.setSource(9051U);
    msg.setSourceEntity(13U);
    msg.setDestination(32906U);
    msg.setDestinationEntity(137U);
    msg.timeout = 58946U;
    msg.lat = 0.03473669227377596;
    msg.lon = 0.7977706231034949;
    msg.z = 0.6189084395036322;
    msg.z_units = 113U;
    msg.speed = 0.07356448851132347;
    msg.speed_units = 176U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.22804616551364498;
    tmp_msg_0.y = 0.584800195698573;
    tmp_msg_0.z = 0.6843491790133588;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RJQTHOXYSMQFNJHUMBEGCLBQICJFAEZKXCNTBZAXTLEGDHRMOXSLKHJRDZWUIVGWWJ");

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
    msg.setTimeStamp(0.7229998349075151);
    msg.setSource(4351U);
    msg.setSourceEntity(44U);
    msg.setDestination(37359U);
    msg.setDestinationEntity(26U);
    msg.x = 0.1631403075380442;
    msg.y = 0.19970734838868154;
    msg.z = 0.8705445519886209;

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
    msg.setTimeStamp(0.7141356931744498);
    msg.setSource(58381U);
    msg.setSourceEntity(53U);
    msg.setDestination(42662U);
    msg.setDestinationEntity(139U);
    msg.x = 0.9102793236771549;
    msg.y = 0.011475523265480625;
    msg.z = 0.6529514874633995;

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
    msg.setTimeStamp(0.5340435502045323);
    msg.setSource(13566U);
    msg.setSourceEntity(243U);
    msg.setDestination(56009U);
    msg.setDestinationEntity(130U);
    msg.x = 0.28744184857712085;
    msg.y = 0.8082162356570374;
    msg.z = 0.016748457370898917;

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
    msg.setTimeStamp(0.37884129031646563);
    msg.setSource(17724U);
    msg.setSourceEntity(183U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(54U);
    msg.timeout = 19850U;
    msg.lat = 0.7257181525610432;
    msg.lon = 0.13601905370325396;
    msg.z = 0.08568371914526629;
    msg.z_units = 213U;
    msg.amplitude = 0.19454951290576028;
    msg.pitch = 0.27972782140550334;
    msg.speed = 0.40708118559401574;
    msg.speed_units = 200U;
    msg.custom.assign("GYRNUMPBZOZZLFFKYTOGLAYVIOIEXDPLJJAEQRXISWWJIRIUXKRHIGQQTDASCNTWDZBQTXRACIYZLRPSDXABBLHCBXAPKDUKEGQFBDSKQOJYLEAQEBVFONYKMULRMDXJHPWLTOEDZXKVJUAMNKCVEFEEHQSZUMKGCMBIHHWUSGHCCHZGDYFCRTIFASFJVNOOJZNAVPNNMITFYJUJRVCSMFCVTRWLQMXNMKVYOQWH");

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
    msg.setTimeStamp(0.7693232394520889);
    msg.setSource(18494U);
    msg.setSourceEntity(122U);
    msg.setDestination(34528U);
    msg.setDestinationEntity(135U);
    msg.timeout = 28271U;
    msg.lat = 0.7930226498794812;
    msg.lon = 0.32059550254185176;
    msg.z = 0.2866744957766918;
    msg.z_units = 138U;
    msg.amplitude = 0.6406128909105002;
    msg.pitch = 0.8358583862734408;
    msg.speed = 0.8343738469299605;
    msg.speed_units = 78U;
    msg.custom.assign("BLQORBCVWFVISLPWIFONMTBQTDPNTABGNZHWAOULVVNNELTJWOPGXUWVEZGJYZPYAMDYZWYTJRDNJUVXPISEBJIXQISNEVYRHROPDLBEWMHOYADZJZQCKSVKUVYIMKZAOKOMEC");

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
    msg.setTimeStamp(0.7172417793334176);
    msg.setSource(32844U);
    msg.setSourceEntity(145U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(55U);
    msg.timeout = 36556U;
    msg.lat = 0.503684712088505;
    msg.lon = 0.09667590587592734;
    msg.z = 0.2700031784297743;
    msg.z_units = 18U;
    msg.amplitude = 0.14501138563249805;
    msg.pitch = 0.11252126825245501;
    msg.speed = 0.14870819595554885;
    msg.speed_units = 112U;
    msg.custom.assign("PTJGQLBSEYQJKYOMSKJAUNUTZSVWVPWNZKMWFVIBIWDXHSFWPUTPZFIXZXBJSGYGGIOXVHROAADONXADUGRQMAQLKQIVSFQRXLTRFPOLDBFHCNJGKBRLCYCTADUMCLHZBEJXTOQZBRKVDKMMEMBNGATVHHESPCENWJDPCZJYCQIVQWENEOEYDUBMN");

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
    msg.setTimeStamp(0.43652678623883223);
    msg.setSource(33048U);
    msg.setSourceEntity(69U);
    msg.setDestination(12136U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.593283932613614);
    msg.setSource(37133U);
    msg.setSourceEntity(157U);
    msg.setDestination(47978U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.8636457288685475);
    msg.setSource(37303U);
    msg.setSourceEntity(71U);
    msg.setDestination(27711U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.38595294554831394);
    msg.setSource(5352U);
    msg.setSourceEntity(241U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.410851732389523;
    msg.lon = 0.11648458573345055;
    msg.z = 0.9227492511605997;
    msg.z_units = 211U;
    msg.radius = 0.39094574003206184;
    msg.duration = 50125U;
    msg.speed = 0.6012228199679747;
    msg.speed_units = 70U;
    msg.custom.assign("VMHUMSYZDYSMXVOQETVQEFUVDLGNGERNVXJBWTJLKRQIJXONTGCWORDCYLMAKBDLXVPEQDNWSOPPDMKZWHURHBCHNKGJHWROBFKYAZFLYTIFBAPYOHPCLIATMAFKGEKUNJAUQLUPNCQHSRYADZDFTWVUBKIZQGJPGOFADYOQYCUYGCZUVJXRXXFTGMAEIXZLVTCENOBCSMKSKOEMTAP");

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
    msg.setTimeStamp(0.8623411306045059);
    msg.setSource(29060U);
    msg.setSourceEntity(31U);
    msg.setDestination(6613U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.7627432426687548;
    msg.lon = 0.3997172203079764;
    msg.z = 0.29484146553682733;
    msg.z_units = 128U;
    msg.radius = 0.9959881850408556;
    msg.duration = 5075U;
    msg.speed = 0.39448483140946655;
    msg.speed_units = 174U;
    msg.custom.assign("JKSDVCIBLSHRXGQFOJEACVZCFQYBSNPDZEASLFPILRPKNNEPQNOGDIFKJXVAKSMFDBGKYRWHOZWCMXSEJEAGMXQGRRWTOHXJERMDIOQMYHZQGPBLWVSNMUDRKEUTNQJXRKECYAXJWTILQPDFUNPMNLGMYHTGJA");

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
    msg.setTimeStamp(0.44937326498599595);
    msg.setSource(21523U);
    msg.setSourceEntity(201U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.9808489734744943;
    msg.lon = 0.7370314142641136;
    msg.z = 0.78881924853001;
    msg.z_units = 140U;
    msg.radius = 0.8560136856762413;
    msg.duration = 19679U;
    msg.speed = 0.29306426106404093;
    msg.speed_units = 62U;
    msg.custom.assign("GLMBTUYNGXNKKFUWSQYPYWAXMGWICVZRASRTYMIAXYOZMSZOHZLIGSFRXZIIDDYWCBJAJQLPBZGBUTCSOCJCKBVFZMPJJDIXUMANVJVBIUDTXMRWTNSBXPKEQJZSERFPRLDFNKBQTTXQCVGFKWNEMAQHGEQAAVDCFOVNDTCRKHYQ");

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
    msg.setTimeStamp(0.977993982439533);
    msg.setSource(40395U);
    msg.setSourceEntity(98U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(28U);
    msg.timeout = 19673U;
    msg.flags = 195U;
    msg.lat = 0.7177067102958072;
    msg.lon = 0.6414070486159302;
    msg.start_z = 0.8000330706514096;
    msg.start_z_units = 201U;
    msg.end_z = 0.008136567898510805;
    msg.end_z_units = 198U;
    msg.radius = 0.28246245029258443;
    msg.speed = 0.3605497040290899;
    msg.speed_units = 53U;
    msg.custom.assign("PMZUVRNOQEEEJFRXVCQNHQQKLFAXUQIEWOUEZSCEJEQIMTFEDZWKQUYPIYFYOUFGGLYILCPRYUMXDDWMADZVRSWTHDLLOKTTTLICEBCJLRZBYWFMQGMKFJSFZDXXVOODCKDUVINOYXYUVGDBWMNSK");

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
    msg.setTimeStamp(0.8526783887738867);
    msg.setSource(20950U);
    msg.setSourceEntity(19U);
    msg.setDestination(23893U);
    msg.setDestinationEntity(98U);
    msg.timeout = 21863U;
    msg.flags = 195U;
    msg.lat = 0.9652114842662524;
    msg.lon = 0.061069191452236105;
    msg.start_z = 0.2255319650380222;
    msg.start_z_units = 244U;
    msg.end_z = 0.8730039751998596;
    msg.end_z_units = 54U;
    msg.radius = 0.913153567523836;
    msg.speed = 0.6798531863538438;
    msg.speed_units = 197U;
    msg.custom.assign("XYUKQOXHZTTRBDZNXKACKHWJDNXSIMLKIJEXZPEVLCYYPWZXZABGAJCNOLLQLYNBPFDGRADQGNTDLWOIDTEUEXKPCBERBJSPTLPOFMPHWGOVNTAIEYGFOHUCSQNVAKTTILFFUWBZSYIIVQDLGYECBNQMQRZKBZHRODSJEJRAMHSVGTPDWUXRCMZJJVNCQGMVCYFSUVBUKEEMN");

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
    msg.setTimeStamp(0.14364841275220097);
    msg.setSource(25057U);
    msg.setSourceEntity(64U);
    msg.setDestination(4819U);
    msg.setDestinationEntity(14U);
    msg.timeout = 50098U;
    msg.flags = 62U;
    msg.lat = 0.31043272474877814;
    msg.lon = 0.9846224670900159;
    msg.start_z = 0.8280357689557516;
    msg.start_z_units = 5U;
    msg.end_z = 0.9821283088705597;
    msg.end_z_units = 12U;
    msg.radius = 0.6781413921789724;
    msg.speed = 0.26925456365731715;
    msg.speed_units = 106U;
    msg.custom.assign("OYJWCTUNKNIKRDHMDVCCKMRSZNMXUQGIIFCXME");

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
    msg.setTimeStamp(0.9093313914318832);
    msg.setSource(45506U);
    msg.setSourceEntity(18U);
    msg.setDestination(17060U);
    msg.setDestinationEntity(231U);
    msg.timeout = 26703U;
    msg.lat = 0.3162417008903099;
    msg.lon = 0.7565068863224954;
    msg.z = 0.6046234777890444;
    msg.z_units = 178U;
    msg.speed = 0.6178637674314175;
    msg.speed_units = 198U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.925994575101993;
    tmp_msg_0.y = 0.23952987701069506;
    tmp_msg_0.z = 0.4407485231555023;
    tmp_msg_0.t = 0.9194903525635603;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OBAZTLJVCPSECUNHEMMLDTNZWJUZBWWTOMWJYLUKVUAFVFGQBLBZASKXBZRBCOWBNRUSLIOEZHRHAPMYXUODLRQXFEHHDFGTHGTMMHZCMNGRWDFPJGYQRXPACKYDWSVYCC");

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
    msg.setTimeStamp(0.1030713433117234);
    msg.setSource(16918U);
    msg.setSourceEntity(13U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(26U);
    msg.timeout = 64003U;
    msg.lat = 0.1170798400342089;
    msg.lon = 0.2725593999240272;
    msg.z = 0.48417393865409375;
    msg.z_units = 20U;
    msg.speed = 0.08561508752804547;
    msg.speed_units = 188U;
    msg.custom.assign("XYGEPAAKXQENITXBCYHPHAWRUSFSYHDAAQAEYQMGSYTZYFAPOZGIPNJLUKPURYHNTKNDQPTGCRVWBKARXFMRFBNDSASLCFYQURSHKDHMXPUTDRUVGQVOWKVJDEHDOUJQZIEGFVNTUVOXCKZFMTEZCKEVJGOKXRSRPQLSTFZOHULZBMSQTXPJJTJVWBCYWDWQOUBBCD");

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
    msg.setTimeStamp(0.9623098887540594);
    msg.setSource(10906U);
    msg.setSourceEntity(186U);
    msg.setDestination(38226U);
    msg.setDestinationEntity(219U);
    msg.timeout = 7067U;
    msg.lat = 0.9617929932776859;
    msg.lon = 0.15311642706500717;
    msg.z = 0.5135193007488009;
    msg.z_units = 207U;
    msg.speed = 0.36570281168595953;
    msg.speed_units = 170U;
    msg.custom.assign("ULIOYZMONAVJBFILECRTSJNABGBMCGBJTYSBYFPTCVUOIPDJHKPPAYHCSYJKMVNOKHXPOHUVSZMDEMTMWUTZTAURVJPHRNAXPXWIBMKTSVJBWQYXOWUEIQECIFTURFHLNIJGBVWDQSLCQWZFFQFEKLLADEEF");

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
    msg.setTimeStamp(0.8768705393269945);
    msg.setSource(39162U);
    msg.setSourceEntity(137U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(95U);
    msg.x = 0.35911880477943803;
    msg.y = 0.8974339913478178;
    msg.z = 0.4084506322812108;
    msg.t = 0.10565177365743406;

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
    msg.setTimeStamp(0.9071133702587071);
    msg.setSource(37451U);
    msg.setSourceEntity(60U);
    msg.setDestination(21646U);
    msg.setDestinationEntity(5U);
    msg.x = 0.18840541608022565;
    msg.y = 0.3998984522124416;
    msg.z = 0.808398216001414;
    msg.t = 0.5914633339482861;

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
    msg.setTimeStamp(0.4035409388951309);
    msg.setSource(26655U);
    msg.setSourceEntity(190U);
    msg.setDestination(51496U);
    msg.setDestinationEntity(20U);
    msg.x = 0.2327096150201774;
    msg.y = 0.4561101927582375;
    msg.z = 0.3937562685312621;
    msg.t = 0.07645198065083392;

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
    msg.setTimeStamp(0.8144589018184754);
    msg.setSource(37690U);
    msg.setSourceEntity(5U);
    msg.setDestination(49995U);
    msg.setDestinationEntity(32U);
    msg.timeout = 54111U;
    msg.name.assign("KQCQZEEHAKICLZIHXIZVYADESXTJJYSYUDVBSKMFJEUY");
    msg.custom.assign("GDBNZMMPUDURJZIQATVQFUKPTWQFSSYYKNZCUIOUBBFNLSZESBKOCQATKRKEFPD");

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
    msg.setTimeStamp(0.8165495777692628);
    msg.setSource(64494U);
    msg.setSourceEntity(196U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(150U);
    msg.timeout = 26776U;
    msg.name.assign("MBLNTOHXYFTRIQQQHJKCUJSGOLQDXTARSSEDJUUYJEKXYHZPOVSWCWRQJNVXOYXVFMFRCQPAYNRCDZQGNKTMCEJAUKIPJFSJXPOHMGENGABVHDWKLBGTZNZLLHRSVICRYOAIMMRAMWPDWGUQAZVFLQVHMVDDSITDUIZYTOFFAHABREEIIA");
    msg.custom.assign("VMGIKFLFOPRUWODWJXYIJEIYQRQCNROZMGYBFVDKNLAURZRSXDCSXBTNATDMNIXDBWMOBTQATLGJPQAIPDRSUVKWCVXGALBIZVDXWVAPIJDKYSLNFIMYZVD");

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
    msg.setTimeStamp(0.5811303400565889);
    msg.setSource(4118U);
    msg.setSourceEntity(35U);
    msg.setDestination(11500U);
    msg.setDestinationEntity(66U);
    msg.timeout = 13738U;
    msg.name.assign("XUJNGMCYWJXYGCYQZLXRQNIHPFDJX");
    msg.custom.assign("DVCDQCHURZTBPCMHTBBIVKWHXKOWDXWVTUPLCLRNYQNQYVPNKFPAZIMPINXAO");

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
    msg.setTimeStamp(0.24805198810863882);
    msg.setSource(37415U);
    msg.setSourceEntity(48U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.5288809810079443;
    msg.lon = 0.5229380255771551;
    msg.z = 0.8904927828212853;
    msg.z_units = 35U;
    msg.speed = 0.33456568059906056;
    msg.speed_units = 57U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.13539880025254536;
    tmp_msg_0.y = 0.1136626933522874;
    tmp_msg_0.z = 0.9045027896600567;
    tmp_msg_0.t = 0.7334088633633193;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.25159912965745135;
    msg.custom.assign("WLDLRLXFHFVQKPFBEZFOTDXSCJIPVBTVUMVWQTPKZZQIDPCNJVWEGEMHXGBBFVAUOHMYGKMQRNWONVMQJJDKRWTJUIOJMIXNPZLKPQAGBOPIYSWJYSFOEONWJFTNDUYIDGCFELGZHUXCNIGZYAAXYSDRTMAYCIEOMHEUXSHRGUFGLSKBSZUNTKHFIEQWPQUBTLACGQKCZXAQHAHXEDYWVJDVS");

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
    msg.setTimeStamp(0.3128982598445935);
    msg.setSource(25102U);
    msg.setSourceEntity(49U);
    msg.setDestination(5937U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.6502552450163235;
    msg.lon = 0.940415742892014;
    msg.z = 0.14624308785635565;
    msg.z_units = 140U;
    msg.speed = 0.5592238701031914;
    msg.speed_units = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24947U;
    tmp_msg_0.off_x = 0.8857436186241592;
    tmp_msg_0.off_y = 0.7100114966988292;
    tmp_msg_0.off_z = 0.05638599474887729;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.29689819865052836;
    msg.custom.assign("CKXNZFKUUHJHLCKESQQUSHIMCTODGGEIOGWHADBGFMNLRTPNWILTSQULARVZRFKNOQOQQPFAXSGJGJCBPYTCJANWEFERHCYNEDAKZUWOACYITSQLVYYDSWRMUOVVDKDYZYPZQJVMHTWWVXJLPPXUQAFMMYIRIDUOKYEWHIDZZDPMIPUBODYGBKTNCXRBSSLVHJP");

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
    msg.setTimeStamp(0.43285243479361246);
    msg.setSource(21947U);
    msg.setSourceEntity(244U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.32927134129019886;
    msg.lon = 0.9084503743009171;
    msg.z = 0.006038239580326343;
    msg.z_units = 143U;
    msg.speed = 0.17662194872453196;
    msg.speed_units = 231U;
    msg.start_time = 0.6454241189519558;
    msg.custom.assign("IRWFVRMPEVACNFBLTGUSNPTCQYEFDFSSDNYZBTMWWCREBPTJHVYDSPEDIQQJLHKGHGKABNYYZPQQTHAQONJRQBQEGECTRMSKCYKOKJMIZFZPZIJLWSAIJULZUHMSOPUIJPWZXLJWBNDFCRNHLYXDAOEKIXUBGX");

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
    msg.setTimeStamp(0.7030505525906733);
    msg.setSource(33700U);
    msg.setSourceEntity(200U);
    msg.setDestination(33876U);
    msg.setDestinationEntity(148U);
    msg.vid = 56188U;
    msg.off_x = 0.010217647622957404;
    msg.off_y = 0.4548690722500843;
    msg.off_z = 0.6996122184078093;

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
    msg.setTimeStamp(0.09521762936377975);
    msg.setSource(48612U);
    msg.setSourceEntity(149U);
    msg.setDestination(36491U);
    msg.setDestinationEntity(4U);
    msg.vid = 54762U;
    msg.off_x = 0.6960205847388377;
    msg.off_y = 0.7013284480620061;
    msg.off_z = 0.2612734579222685;

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
    msg.setTimeStamp(0.2596956376476799);
    msg.setSource(1904U);
    msg.setSourceEntity(183U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(234U);
    msg.vid = 49171U;
    msg.off_x = 0.7669446933923546;
    msg.off_y = 0.955457235333899;
    msg.off_z = 0.2584002833664757;

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
    msg.setTimeStamp(0.0409185202733926);
    msg.setSource(40813U);
    msg.setSourceEntity(112U);
    msg.setDestination(1398U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.5310199906532755);
    msg.setSource(50736U);
    msg.setSourceEntity(159U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.9601382987824155);
    msg.setSource(11967U);
    msg.setSourceEntity(175U);
    msg.setDestination(33788U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.8846831437031246);
    msg.setSource(5930U);
    msg.setSourceEntity(35U);
    msg.setDestination(27205U);
    msg.setDestinationEntity(19U);
    msg.mid = 25051U;

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
    msg.setTimeStamp(0.46879336162593177);
    msg.setSource(47980U);
    msg.setSourceEntity(100U);
    msg.setDestination(53687U);
    msg.setDestinationEntity(53U);
    msg.mid = 43185U;

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
    msg.setTimeStamp(0.7354168677962412);
    msg.setSource(25939U);
    msg.setSourceEntity(58U);
    msg.setDestination(20111U);
    msg.setDestinationEntity(230U);
    msg.mid = 64894U;

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
    msg.setTimeStamp(0.8308723054428221);
    msg.setSource(42122U);
    msg.setSourceEntity(41U);
    msg.setDestination(40296U);
    msg.setDestinationEntity(199U);
    msg.state = 216U;
    msg.eta = 2825U;
    msg.info.assign("BNTEZXYJEAVOITOBIPKTVRCIVIDCQOGVEKEIHLWQKTLYAJAWRRZHOABGEFBKMKSLTENFUNWSJKMNSHJOXXHPBQVGLPNGYDZAFPRVDOQODPDBBGXM");

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
    msg.setTimeStamp(0.9209787522780899);
    msg.setSource(32710U);
    msg.setSourceEntity(70U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(82U);
    msg.state = 12U;
    msg.eta = 11369U;
    msg.info.assign("VUYMHABNNEIOZGNUULGEBOZAMRKPRDEAVNZAPWZKOYPCKRJHCNSLCXLCTVGKKGFLFSJWFFCGBMYAJIOJRMVHPHQKYSPGVGYYISDNFBZXIEEDGUICXDXKSLGCETPHXZVONITPQDDFTXQMTIWSQJFQWORGWEBZMZPSOLDJDWPJARVRMTXUYIEUAWTNRHAODCEVQYJWOBBRPUYCBHXQIKDAJYLATXBWSKXLFURSQIZNBQVMJLET");

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
    msg.setTimeStamp(0.6894664835685961);
    msg.setSource(11664U);
    msg.setSourceEntity(28U);
    msg.setDestination(45090U);
    msg.setDestinationEntity(131U);
    msg.state = 197U;
    msg.eta = 58659U;
    msg.info.assign("MXNMANEJYMEACNIICUXCCEOFZLQGAQXJMGZWHHYBTAZDFCGCRISJQNLVBSTCDRHQZQPPSAZRQMWSROOTDNOKTHFVCXBYZIWMPJKFJVPZSOONPIEEQBPPUUYEEGBFBVIGYPWZRNTTUIVZDPWAVXGCMLJMRNWKGUTJWDUMZKKGEWFRSUAGDBSHTLAUOIOLXCVSV");

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
    msg.setTimeStamp(0.39845077896010517);
    msg.setSource(14718U);
    msg.setSourceEntity(229U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(215U);
    msg.system = 4590U;
    msg.duration = 46317U;
    msg.speed = 0.3064759571803519;
    msg.speed_units = 31U;
    msg.x = 0.7498849143138154;
    msg.y = 0.709130137374102;
    msg.z = 0.5052630708209754;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.1792441893809854);
    msg.setSource(3014U);
    msg.setSourceEntity(124U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(159U);
    msg.system = 14894U;
    msg.duration = 19673U;
    msg.speed = 0.4153446880160483;
    msg.speed_units = 167U;
    msg.x = 0.0914647346987073;
    msg.y = 0.8699326991176565;
    msg.z = 0.7783533343857935;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.8792361858072916);
    msg.setSource(52719U);
    msg.setSourceEntity(228U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(43U);
    msg.system = 16286U;
    msg.duration = 57013U;
    msg.speed = 0.7168498609642444;
    msg.speed_units = 220U;
    msg.x = 0.1417609952269513;
    msg.y = 0.7264761154220678;
    msg.z = 0.23762178165149261;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.7114390129111942);
    msg.setSource(32094U);
    msg.setSourceEntity(148U);
    msg.setDestination(39549U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.9623362108571127;
    msg.lon = 0.6100364675704768;
    msg.speed = 0.2167823171662253;
    msg.speed_units = 205U;
    msg.duration = 54434U;
    msg.sys_a = 11822U;
    msg.sys_b = 10716U;
    msg.move_threshold = 0.17780973222316054;

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
    msg.setTimeStamp(0.39698275269795635);
    msg.setSource(19696U);
    msg.setSourceEntity(253U);
    msg.setDestination(15036U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.7205601267133684;
    msg.lon = 0.7632347995048284;
    msg.speed = 0.40946149278370825;
    msg.speed_units = 201U;
    msg.duration = 15844U;
    msg.sys_a = 9001U;
    msg.sys_b = 29845U;
    msg.move_threshold = 0.243098569118825;

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
    msg.setTimeStamp(0.5649650493330989);
    msg.setSource(7684U);
    msg.setSourceEntity(253U);
    msg.setDestination(50716U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.3135381745786727;
    msg.lon = 0.5325434737070277;
    msg.speed = 0.3190635814119638;
    msg.speed_units = 58U;
    msg.duration = 9245U;
    msg.sys_a = 39916U;
    msg.sys_b = 30107U;
    msg.move_threshold = 0.8405134963197067;

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
    msg.setTimeStamp(0.944067389904379);
    msg.setSource(29133U);
    msg.setSourceEntity(73U);
    msg.setDestination(12074U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.18495114883235952;
    msg.lon = 0.3191563907897724;
    msg.z = 0.17195639896479964;
    msg.z_units = 91U;
    msg.speed = 0.8089812239190073;
    msg.speed_units = 6U;
    msg.custom.assign("QJLWFWIPPUDBBHFCKLAKTNEMMURGYNPMOSOJGFYTVIYBXYJVHUQGQRYMXZNFOODQZDTNSMYOESTHIDBTQLFDNAUDBGIZOJDPTLIAGQ");

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
    msg.setTimeStamp(0.6190442948493297);
    msg.setSource(21359U);
    msg.setSourceEntity(207U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.36963454073881663;
    msg.lon = 0.21423511173518883;
    msg.z = 0.4145662250160774;
    msg.z_units = 17U;
    msg.speed = 0.46947877269428406;
    msg.speed_units = 181U;
    msg.custom.assign("MJHINIKWIGZTNDBNHMWAYDHCJIEHBLUCAJXSGSWEZPNYUQTSOIPYZUHYYRCCDMUPFTOAMOVPWHVAEQWAUJTSOFKKXOPCZZUCRKGSLXQPVFQONFPARLPLYNQNQSNXRMKWBCMDKFUUEREDCJHRQBRBDVQHGJWBNNXVFTBLLQXTMEUVIGTGSFJEWRKGLIVDPBDZMTYECDYSPTQKMFIVGIVDKKXFYUVTSZAAJJACL");

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
    msg.setTimeStamp(0.1477709360626186);
    msg.setSource(20866U);
    msg.setSourceEntity(121U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.193238392196462;
    msg.lon = 0.5570486810887906;
    msg.z = 0.8970439366641427;
    msg.z_units = 64U;
    msg.speed = 0.10448022642751953;
    msg.speed_units = 32U;
    msg.custom.assign("AIQVRENHXZREMJOHXSFTADRZELJKWSFAZLIKXBAWRGZZDMOFPYFSQJSVLFGTPGPWNDCTWETYUBNCAKIVCKNDYXLPZBXKBGTTKZPRMECOFPCOSVQASPLQMMCPQANYJQRCYDGBHDHXMMHKEUJXRWMWBRNNONVUTSUDVWFITPLHIHEVSBIWALEXHFDULZUQSLJXWBUVJCOV");

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
    msg.setTimeStamp(0.05343067505771404);
    msg.setSource(53947U);
    msg.setSourceEntity(22U);
    msg.setDestination(63710U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.6572098015482657;
    msg.lon = 0.4253504462823746;

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
    msg.setTimeStamp(0.6869713660715995);
    msg.setSource(42809U);
    msg.setSourceEntity(164U);
    msg.setDestination(3674U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.7580623790994835;
    msg.lon = 0.7793166985583598;

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
    msg.setTimeStamp(0.2509080612485236);
    msg.setSource(8298U);
    msg.setSourceEntity(129U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.6631972840452077;
    msg.lon = 0.5860327606216033;

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
    msg.setTimeStamp(0.5474260661374658);
    msg.setSource(40199U);
    msg.setSourceEntity(110U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(85U);
    msg.timeout = 37742U;
    msg.lat = 0.8027241470734573;
    msg.lon = 0.8934097736411242;
    msg.z = 0.939263824841119;
    msg.z_units = 211U;
    msg.pitch = 0.15742724162056243;
    msg.amplitude = 0.8831493988003073;
    msg.duration = 9073U;
    msg.speed = 0.6203322432480738;
    msg.speed_units = 83U;
    msg.radius = 0.4490819767281288;
    msg.direction = 156U;
    msg.custom.assign("KZBBLPQPEFPUMTNEIMWDPAOIOIOCEXSARHDJZHOVXSMCBKGKPJXRYEOXHBZMEJLRBHYVWQNWPVKVRGLZYCNNFBDZAZBRYDQZRFCEFHRJNAMDWXZMSLSPNJLINKTMIAWFXYSYHQLQFHCTDDDSUWYJPOCTRGFKMAOEXCIVBUSN");

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
    msg.setTimeStamp(0.3306966667108031);
    msg.setSource(27340U);
    msg.setSourceEntity(225U);
    msg.setDestination(23060U);
    msg.setDestinationEntity(24U);
    msg.timeout = 59854U;
    msg.lat = 0.5831526538710474;
    msg.lon = 0.7465825094725737;
    msg.z = 0.6305186837780509;
    msg.z_units = 200U;
    msg.pitch = 0.08233345271254922;
    msg.amplitude = 0.5007804073923272;
    msg.duration = 31745U;
    msg.speed = 0.3694387523081042;
    msg.speed_units = 62U;
    msg.radius = 0.6049182789374129;
    msg.direction = 235U;
    msg.custom.assign("NGPDVUYYFRUVLJDXDAZXLTHWWCEQOMZCSWCPYDKGVRCELBEPJNCIRODGOLKCQNZRZTJSMDSMTUFOYUNBAXBOLYRJDDJEOYHKLFFDKMPIFXITSZAHIPHCYBXEEWBVGERRUQVPSGNHPLTTAQNBHHRCTZKTFLTSFJAJMUOLZMYAKEKRQQNAAGFNIWIOI");

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
    msg.setTimeStamp(0.5886728310313564);
    msg.setSource(21946U);
    msg.setSourceEntity(33U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(90U);
    msg.timeout = 42392U;
    msg.lat = 0.02686118002806126;
    msg.lon = 0.5338153058750652;
    msg.z = 0.1939804401122358;
    msg.z_units = 161U;
    msg.pitch = 0.46617259212541773;
    msg.amplitude = 0.6757468806310897;
    msg.duration = 6096U;
    msg.speed = 0.6177702184248086;
    msg.speed_units = 168U;
    msg.radius = 0.12613052212648868;
    msg.direction = 104U;
    msg.custom.assign("TJLEDULWJWSTBGKCGFKEOAVAJLIEMHXJEBPNZRKMAQRBQEHTMFEUIZARMCHQPIVBWBLPTGXXUGMROMFCDFFRBYDVHLKN");

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
    msg.setTimeStamp(0.6201631711399175);
    msg.setSource(6394U);
    msg.setSourceEntity(226U);
    msg.setDestination(64691U);
    msg.setDestinationEntity(222U);
    msg.formation_name.assign("DIOTPBMFVAYAGVCCFPVBGAEHNCAMZJLMRTENRGIKLWSFWQCYWOPUZCHUNSIKQEGEFSULWTRO");
    msg.reference_frame = 60U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1860U;
    tmp_msg_0.off_x = 0.5865915644747534;
    tmp_msg_0.off_y = 0.19077364260487428;
    tmp_msg_0.off_z = 0.9797986247526929;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EAOGXQCDQPHAYELAKKSQHVWOIHZTJVQSLVJGFTYBHJJACDOBPNTIRBVYITRXFFGSJFPLGZWOKCKJUOPLLCYKXUEVKVXFIRBCNFZFWXKOAZIQTYREUCDVYBIFYTHBMBPETDZIGSBXNHVLHNUJXQCLXOOEM");

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
    msg.setTimeStamp(0.4569213766808541);
    msg.setSource(13316U);
    msg.setSourceEntity(101U);
    msg.setDestination(23217U);
    msg.setDestinationEntity(222U);
    msg.formation_name.assign("UJRFAGLSKPQVZONAFMYOYVKZUYYRVZBUZWNHBMJPCFPWSDSRQSKQGXWAGRPIYKCTQIPESIHTXWOBGFLLHVURHSWASCRLJIPAZLDWOEWRNRXFBYRXMYHMELZOJEBXDKCJYODBYKBQCZJPKCEPEDBDRGLUPHTSCCGJIHJIEXXMEFKNUNQONHYNWIAWVZTVFVKBONALMNJLXODUHADATQJFSUMIWZVKFQOSGIXEFLNXQMUGVVIHGME");
    msg.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35548U;
    tmp_msg_0.off_x = 0.977962056336479;
    tmp_msg_0.off_y = 0.2562325628834461;
    tmp_msg_0.off_z = 0.8787874402107564;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FLZKYAWLQXEANWKHDLCGZZVLOIQKCRQDNDPTRDGWGIHQYWCBCTINXYDSQMVXRRVQMKYNBOKPARCYWHNIJHNUZDFJSOQETJFWBGAAFXESPULJORZBQTGVPRFTYHIUMUHPXHKSSTZDBAFXOASFLGRFBYYTACKENQSMXJTPGMNZOCLEMEVZUSMTXZHDLEFBAGFKIHYUJWCZOOIPVOLBVNCPIMT");

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
    msg.setTimeStamp(0.3249656097041034);
    msg.setSource(11726U);
    msg.setSourceEntity(251U);
    msg.setDestination(5892U);
    msg.setDestinationEntity(27U);
    msg.formation_name.assign("YXLWYMZCCEQDKEABIWIHFYUPWCJNZNLGSKMHIUTOISADSDSBDLBYZJKUTPHPWOZNCHMJMXOUVBOAHRBVBEPJLGOIBEGWPZYEMHZRXJRPTKHYLRQQELOUCBVSGPFCWDMJLPXRMANUARBWSIRYQKJNQSRCFJVXVFYFCXFQKJFSMGLTUGNHKWWKRAOGEVIBVIDEKUMTDFGUUQADKCIAZXFFCNHTTSIVTJNGV");
    msg.reference_frame = 106U;
    msg.custom.assign("GBDYNZYNGBWMRWPHAFHKTMIQVRHDVTNVDGCTHMKFTEAFXEYHOYTYLEPCDMMOHQZJUADZKUPIULQMQKJBTRSRAYCQOCMJAAJFKNXVQRTKZCSONHPWUWMBRZIYDWLHLBPLQKFUNXXICKCUOYEXALWSZPNZIS");

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
    msg.setTimeStamp(0.46291440914230775);
    msg.setSource(6654U);
    msg.setSourceEntity(15U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("YVXDSDCTVFECLKLKLEUSWFXCFABLMYNNWAKEOQCNFBGTENDKJGTBWEKZODWQTASVFNXPSLGKDMEUCHUYBUKVOFHJMJQMUCX");
    msg.formation_name.assign("PFCGUVCDTVGCCNLNBVTVNBZRLEJXAGBNEGBIMNVJKMWGWWJJZGNIMXUXSFAJPXEABKUIJHYXZUQIHOYRSRXHSZDRDCHZFLUVNDPJBYFADUIOFUKLOHKGTYNDYBNZLYCFQM");
    msg.plan_id.assign("OJFJQWQWSHLGIXDWCMDLSMTKSBIFZGQFUIVXBXRIJDOBNAOMKRFFQ");
    msg.description.assign("HDBNRJXHQZAWTFLTGQSTWGPYSOTEPVUFQAIGIOFJLNRAMGLZQRLXZYJKHNPLIVESWWKKGRNONFDCPDAN");
    msg.leader_speed = 0.5755732526907854;
    msg.leader_bank_lim = 0.5380111307566166;
    msg.pos_sim_err_lim = 0.5198872331455838;
    msg.pos_sim_err_wrn = 0.4293898311871145;
    msg.pos_sim_err_timeout = 43146U;
    msg.converg_max = 0.7183653706097998;
    msg.converg_timeout = 43323U;
    msg.comms_timeout = 39028U;
    msg.turb_lim = 0.40471142196744025;
    msg.custom.assign("UCNFHJKELGJMNWYCSKZBAXCXMAVILHVNLWWTRTRAGOYDNULBQNPNYIDIRUPPOLZIUFEGYDBOUIKESGLHOMDLJPQQMWZIKTAYRKBDWUNQPBSMRBTXCXNQGVXJKNVFORJZXATCQRZYPGJMDSJIQJELTWWABKSQGYVWAEV");

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
    msg.setTimeStamp(0.5800049507754171);
    msg.setSource(53439U);
    msg.setSourceEntity(169U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("SBUCUZCOCMCIYRJSKUDGONWLEIHBVMBPLMSPQACPQQSFWKBMVSEUDDYNRFNLADLZUGWEGQXJFQBMXNHFVTARFSKHGOWYHTEZQXIQWBPLOSAWSDRCTKEQAYZOJQXVHHHPCNXKFAERVZNYGDBPNRLGTWTIJAGUOUMHHGIWTEFMUXDEOITMRRXACLVVXOPJYESTVJLPTMNJGEWIPHNBBOZPIRGYAZYZNTC");
    msg.formation_name.assign("KRTREXLINSVRXJMYBJMNNOHXYNGBHVJTTCJHNVFKAXQAXVWOKUHSSDPFQXIFBHHTOZRBIFRWMMABZUCCMWZYQELOSISLFXVTBGPRQOENDDCJEBTEQXLRJOZNMQYYECIQALUEXUYZDGQRTADKKDPOIRWTKAPDEZEZFUSMURAGWV");
    msg.plan_id.assign("BTSGQUVAZCTKFEYNRZWEVEWAXMTDTZLYFTXSYQJMWOZBHMARCJTKWBPDYAOQDQPIXPLLGUNBDLLFHBAFRZHNUMVQWXJIUBTDZBARGXRVXWIVXUQHKOYHDRVSWGDVNXKZOC");
    msg.description.assign("YLRNMALVZGIOMEGHNAAUCVJXGPWNBGQKMRWXDFPWFDIOJPUMPJHDEDPJQHGQELUGHCHOQMYBJSCDRLLXSLEPUMAZFRTBCKJZTUKBYZARXITOKBKHWTGYODTPDGNWSMAHWVQJKUPSNCRFIVSFVFQNALMDYFNFSGREICTJVYWPVSIRMLLZOCXISJYWXAXRKOEYIZWRXYTEVEBBZUCSCWQZOAOGKHTPEBUFTNJVODBEIVXZDUNMQLUKXTBQFZAH");
    msg.leader_speed = 0.16926365998141057;
    msg.leader_bank_lim = 0.922588792682339;
    msg.pos_sim_err_lim = 0.5700058136138683;
    msg.pos_sim_err_wrn = 0.4896079143798454;
    msg.pos_sim_err_timeout = 10056U;
    msg.converg_max = 0.23886649423367;
    msg.converg_timeout = 25731U;
    msg.comms_timeout = 1528U;
    msg.turb_lim = 0.9863580354951599;
    msg.custom.assign("AJNFBCEJHQFJVRBYCXLPGEATIYAFTTYYHPVCDKKSSHHOPDRSLSUCJMMWUXWDZYLNWZKAIGOYFFBZLRXABXMARHXAFVJIGIQUPZHRFNWESKIXPIOQJMYR");

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
    msg.setTimeStamp(0.8334280700371034);
    msg.setSource(11913U);
    msg.setSourceEntity(175U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("VXJZNQJDCGXFETHCEZOBHMGAECKXRZYETCBCBZOVPYANNKDZ");
    msg.formation_name.assign("KFTVQRCASZWEERHZLOWJRGZPBRRWSBHFURULAPWAOJMZYGNSOGDCJQVAGCGLDXPRT");
    msg.plan_id.assign("XFMYNDPFSUQNLWSTTSKZJXAHQLVXOPLLEPEKOUPEUVDAAYZJBXBUZCDPRTZGXIZTIEGLUTTAWSAQHMWGXPVKKTTQZROUXYDZCAFKOBNIHLXIKNEWNFOHYCWHCVDOQDRGZEDFIAKSBGJWRJGMRQRJRCLSZRFCEMWAEHXMQVMQBHOHMCBSNJUEVNJZUXFYFYAIEJLIUNWVNUOQKWBTYWDOMPVRFBDYBQIPVL");
    msg.description.assign("KTIZLIFVNXCASQNLMXTCEAFUUJICPBQFHURGZAXLCABYBZZITPIKDKSCPUXXTEHHBDYZEVCRLMKOYMQFPLXWQT");
    msg.leader_speed = 0.9396682663667851;
    msg.leader_bank_lim = 0.887299949003322;
    msg.pos_sim_err_lim = 0.7495331483255507;
    msg.pos_sim_err_wrn = 0.45903090452729756;
    msg.pos_sim_err_timeout = 14199U;
    msg.converg_max = 0.18111823062010834;
    msg.converg_timeout = 61908U;
    msg.comms_timeout = 4565U;
    msg.turb_lim = 0.7689132534219776;
    msg.custom.assign("CIEDQBGXPIXQQBIJNXYKHAWSCOKYHNSDSFHKPYEBTVZGUWTQGLTQTHLMFIKGBTKBWVVCADQLVGZTQZAYXPWTGAFFETPILJNKDYCMQRIXBFAAJPPBRABLXDIRUESDJVYZHNPJZEMYNUIMQKWTWROWLJMXVSYDRNYLUVCJEUVKRJRNNXJLDEHUDFOBMPRGINZAUFKSCOMFHOPCZSTXNSSECGHWLOWV");

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
    msg.setTimeStamp(0.8908721900239461);
    msg.setSource(33014U);
    msg.setSourceEntity(210U);
    msg.setDestination(12552U);
    msg.setDestinationEntity(180U);
    msg.control_src = 63240U;
    msg.control_ent = 176U;
    msg.timeout = 0.7210635041999716;
    msg.loiter_radius = 0.7120236281471767;
    msg.altitude_interval = 0.3513577923406517;

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
    msg.setTimeStamp(0.7305726786451512);
    msg.setSource(24915U);
    msg.setSourceEntity(178U);
    msg.setDestination(48199U);
    msg.setDestinationEntity(240U);
    msg.control_src = 46230U;
    msg.control_ent = 205U;
    msg.timeout = 0.07747801998420278;
    msg.loiter_radius = 0.23783222579837038;
    msg.altitude_interval = 0.3120181903358108;

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
    msg.setTimeStamp(0.1851065686417689);
    msg.setSource(28964U);
    msg.setSourceEntity(69U);
    msg.setDestination(13940U);
    msg.setDestinationEntity(230U);
    msg.control_src = 32544U;
    msg.control_ent = 239U;
    msg.timeout = 0.6787412294533387;
    msg.loiter_radius = 0.5443521382494624;
    msg.altitude_interval = 0.7014272109734214;

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
    msg.setTimeStamp(0.23734463105681192);
    msg.setSource(18799U);
    msg.setSourceEntity(154U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(123U);
    msg.flags = 44U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09882341322050525;
    tmp_msg_0.speed_units = 250U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7485418987798892;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.685158008299975;
    msg.lon = 0.5278678896592215;
    msg.radius = 0.9307161171487137;

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
    msg.setTimeStamp(0.8589958221615835);
    msg.setSource(19563U);
    msg.setSourceEntity(1U);
    msg.setDestination(36772U);
    msg.setDestinationEntity(214U);
    msg.flags = 68U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5755399499496078;
    tmp_msg_0.speed_units = 170U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7534358917687205;
    tmp_msg_1.z_units = 34U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6452128754722826;
    msg.lon = 0.07263512150516549;
    msg.radius = 0.6991757571589722;

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
    msg.setTimeStamp(0.4303421101343645);
    msg.setSource(28350U);
    msg.setSourceEntity(244U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(176U);
    msg.flags = 135U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.35544223722951496;
    tmp_msg_0.speed_units = 176U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.801983233683542;
    tmp_msg_1.z_units = 52U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5030224410300238;
    msg.lon = 0.06314261724203984;
    msg.radius = 0.2671995322466202;

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
    msg.setTimeStamp(0.45208963487483333);
    msg.setSource(12136U);
    msg.setSourceEntity(118U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(65U);
    msg.control_src = 16467U;
    msg.control_ent = 178U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 244U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.07940672374257385;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7740685345511913;
    tmp_tmp_msg_0_1.z_units = 42U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7311651260118374;
    tmp_msg_0.lon = 0.44712966701044654;
    tmp_msg_0.radius = 0.865903895590249;
    msg.reference.set(tmp_msg_0);
    msg.state = 144U;
    msg.proximity = 225U;

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
    msg.setTimeStamp(0.9928819710454607);
    msg.setSource(37178U);
    msg.setSourceEntity(185U);
    msg.setDestination(39121U);
    msg.setDestinationEntity(205U);
    msg.control_src = 12997U;
    msg.control_ent = 72U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 136U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8239421341756638;
    tmp_tmp_msg_0_0.speed_units = 144U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4857448602785186;
    tmp_tmp_msg_0_1.z_units = 249U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9642723409313487;
    tmp_msg_0.lon = 0.06694108766709694;
    tmp_msg_0.radius = 0.5291916095459962;
    msg.reference.set(tmp_msg_0);
    msg.state = 135U;
    msg.proximity = 200U;

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
    msg.setTimeStamp(0.66364020664302);
    msg.setSource(11982U);
    msg.setSourceEntity(215U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(80U);
    msg.control_src = 54343U;
    msg.control_ent = 203U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1313367581601208;
    tmp_tmp_msg_0_0.speed_units = 29U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6168158849224055;
    tmp_tmp_msg_0_1.z_units = 85U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3831624000654099;
    tmp_msg_0.lon = 0.12842833372435503;
    tmp_msg_0.radius = 0.8304054917157843;
    msg.reference.set(tmp_msg_0);
    msg.state = 115U;
    msg.proximity = 31U;

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
    msg.setTimeStamp(0.7712855200360571);
    msg.setSource(41048U);
    msg.setSourceEntity(161U);
    msg.setDestination(51454U);
    msg.setDestinationEntity(197U);
    msg.ax_cmd = 0.17288723207331635;
    msg.ay_cmd = 0.929689574410976;
    msg.az_cmd = 0.2494782885662582;
    msg.ax_des = 0.9635924103702863;
    msg.ay_des = 0.9809366796545589;
    msg.az_des = 0.8087468239222143;
    msg.virt_err_x = 0.08245563905980502;
    msg.virt_err_y = 0.5875183425124263;
    msg.virt_err_z = 0.2101889469288728;
    msg.surf_fdbk_x = 0.8980438075897792;
    msg.surf_fdbk_y = 0.15696776451945194;
    msg.surf_fdbk_z = 0.8013128746080583;
    msg.surf_unkn_x = 0.16566162813836127;
    msg.surf_unkn_y = 0.5362811087977589;
    msg.surf_unkn_z = 0.9843126063266912;
    msg.ss_x = 0.6113275861818308;
    msg.ss_y = 0.8958134951995164;
    msg.ss_z = 0.8763904501469881;

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
    msg.setTimeStamp(0.3008042139745394);
    msg.setSource(28017U);
    msg.setSourceEntity(254U);
    msg.setDestination(58770U);
    msg.setDestinationEntity(140U);
    msg.ax_cmd = 0.16402394780957574;
    msg.ay_cmd = 0.7769179429060873;
    msg.az_cmd = 0.8341107082170185;
    msg.ax_des = 0.20232049741168268;
    msg.ay_des = 0.4741273251601683;
    msg.az_des = 0.00984575361757034;
    msg.virt_err_x = 0.2964075289898682;
    msg.virt_err_y = 0.23549740771306582;
    msg.virt_err_z = 0.5656060478685917;
    msg.surf_fdbk_x = 0.6645778365331118;
    msg.surf_fdbk_y = 0.9246015248764259;
    msg.surf_fdbk_z = 0.470797053811579;
    msg.surf_unkn_x = 0.6088593537796716;
    msg.surf_unkn_y = 0.5907044572202054;
    msg.surf_unkn_z = 0.20419543409853957;
    msg.ss_x = 0.2969604796332713;
    msg.ss_y = 0.2441198424663421;
    msg.ss_z = 0.9227424286264588;

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
    msg.setTimeStamp(0.47025305749077684);
    msg.setSource(50328U);
    msg.setSourceEntity(250U);
    msg.setDestination(5049U);
    msg.setDestinationEntity(30U);
    msg.ax_cmd = 0.27033669939701066;
    msg.ay_cmd = 0.934258163490123;
    msg.az_cmd = 0.8099984729253408;
    msg.ax_des = 0.27050704321967844;
    msg.ay_des = 0.3708487298961548;
    msg.az_des = 0.9911609073087837;
    msg.virt_err_x = 0.00044104524137356105;
    msg.virt_err_y = 0.8958327374002322;
    msg.virt_err_z = 0.8143102604470215;
    msg.surf_fdbk_x = 0.609744599990489;
    msg.surf_fdbk_y = 0.16271265552941783;
    msg.surf_fdbk_z = 0.1556163330580541;
    msg.surf_unkn_x = 0.2996522863475556;
    msg.surf_unkn_y = 0.8449263660036991;
    msg.surf_unkn_z = 0.25599568989939514;
    msg.ss_x = 0.4261064814522926;
    msg.ss_y = 0.8411446907436214;
    msg.ss_z = 0.13946787655090476;

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
    msg.setTimeStamp(0.03940508169877732);
    msg.setSource(6399U);
    msg.setSourceEntity(210U);
    msg.setDestination(23232U);
    msg.setDestinationEntity(91U);
    msg.s_id.assign("KFSVIUFAWNCBFPWBIMAKTPAGJYIPAJBXMHMMFOIHLUZFINQFNQVKYLEICEGUGKJHBTOOXJODQOXAULFBJ");
    msg.dist = 0.8346928101055424;
    msg.err = 0.2671452990318476;
    msg.ctrl_imp = 0.9616537847862326;
    msg.rel_dir_x = 0.15610749801612878;
    msg.rel_dir_y = 0.6795597713510101;
    msg.rel_dir_z = 0.130346491647214;
    msg.err_x = 0.00962969863580354;
    msg.err_y = 0.09355459539576827;
    msg.err_z = 0.2739223666631567;
    msg.rf_err_x = 0.34378806972413745;
    msg.rf_err_y = 0.2950197193117281;
    msg.rf_err_z = 0.957745181034868;
    msg.rf_err_vx = 0.10165999383356739;
    msg.rf_err_vy = 0.9123314483226483;
    msg.rf_err_vz = 0.4813897676751715;
    msg.ss_x = 0.5389742549889617;
    msg.ss_y = 0.05555500111624967;
    msg.ss_z = 0.939378280867693;
    msg.virt_err_x = 0.02775271351131514;
    msg.virt_err_y = 0.0484299036668524;
    msg.virt_err_z = 0.70952039083627;

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
    msg.setTimeStamp(0.07453769305319313);
    msg.setSource(47722U);
    msg.setSourceEntity(143U);
    msg.setDestination(49889U);
    msg.setDestinationEntity(101U);
    msg.s_id.assign("CAIZZHMNABENHKAOZZJPLDKDQSMLFNWLFBTUDKGKJIXFPJIUUIJJOESBMDWEPVRPXWKPWYSZKOHBZUSQEZZCFKDGZUCEGNQCLCLYCNWWWUHBQSCAMBFHMQXWRATQDBYMMOHDUYHEAOJYSBXEVTHNIFYLHVCEQGSDSLKGVTRSOHSENNIVFTEPKXPYLYTJWDGRRRIJ");
    msg.dist = 0.6130810041205567;
    msg.err = 0.5982329010385244;
    msg.ctrl_imp = 0.25105934285380194;
    msg.rel_dir_x = 0.6720768238939387;
    msg.rel_dir_y = 0.45271927497001896;
    msg.rel_dir_z = 0.36294691543445967;
    msg.err_x = 0.240979240293143;
    msg.err_y = 0.9759538287897621;
    msg.err_z = 0.42254465486668513;
    msg.rf_err_x = 0.8302764633216141;
    msg.rf_err_y = 0.014165282534211343;
    msg.rf_err_z = 0.26346655432584465;
    msg.rf_err_vx = 0.126266289955122;
    msg.rf_err_vy = 0.4795091141632086;
    msg.rf_err_vz = 0.5231579999716373;
    msg.ss_x = 0.9911281500101079;
    msg.ss_y = 0.23860315142581912;
    msg.ss_z = 0.8895403739834206;
    msg.virt_err_x = 0.14702925962103142;
    msg.virt_err_y = 0.35448714204613385;
    msg.virt_err_z = 0.5173068449285103;

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
    msg.setTimeStamp(0.0424640311527783);
    msg.setSource(2627U);
    msg.setSourceEntity(115U);
    msg.setDestination(34036U);
    msg.setDestinationEntity(130U);
    msg.s_id.assign("MMFVJYTGYPKRZUMQBFSIXRKLMPSZCXGVMZHINYGEHTQSYUSNJYHLIVVGIQTRNOAOYCOKPSVEBXCWPLIFWHBSVGKELFSQMFUFDERXEKHRDFKOVXJEWHRCWBYSRBPDIHNGDQJZKFVZOBCDFENDAQ");
    msg.dist = 0.9581560761003207;
    msg.err = 0.8226697358750906;
    msg.ctrl_imp = 0.13148788430639657;
    msg.rel_dir_x = 0.010156660365207348;
    msg.rel_dir_y = 0.05733824280829258;
    msg.rel_dir_z = 0.7111408266854305;
    msg.err_x = 0.21754007309297696;
    msg.err_y = 0.8301877132408452;
    msg.err_z = 0.1460749083466355;
    msg.rf_err_x = 0.7381763605780315;
    msg.rf_err_y = 0.684241346901216;
    msg.rf_err_z = 0.03553124255513873;
    msg.rf_err_vx = 0.22013507369815133;
    msg.rf_err_vy = 0.10146709690815126;
    msg.rf_err_vz = 0.40336565312990824;
    msg.ss_x = 0.959590474372605;
    msg.ss_y = 0.34114313437735044;
    msg.ss_z = 0.35245344034609905;
    msg.virt_err_x = 0.6385076026571113;
    msg.virt_err_y = 0.3708342606769053;
    msg.virt_err_z = 0.23422574150986375;

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
    msg.setTimeStamp(0.6354892732110595);
    msg.setSource(26022U);
    msg.setSourceEntity(230U);
    msg.setDestination(1520U);
    msg.setDestinationEntity(73U);
    msg.timeout = 53248U;
    msg.rpm = 0.8138321287509556;
    msg.direction = 109U;
    msg.custom.assign("DWZFGGIAOBJIBCNVEQVBCWXIYYFMTPBVLAURXASOSFZVUJEQVPOPTFLOJBUMZQERYTKRFHRXJGZQQNSOKYIJCSJDZDLGNSQHTDLHBWULCXNXGGDAAWNARDMQYSXLXHJKECCOWMZUWCJNQDHZGENRUFWKYKFSWZNKSTSHPJXLANIFKBRYAPAXCROBILHTPYHRWZLGWHBVABPEHGVOMLQVQUEP");

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
    msg.setTimeStamp(0.0018347494060736436);
    msg.setSource(17743U);
    msg.setSourceEntity(33U);
    msg.setDestination(12789U);
    msg.setDestinationEntity(239U);
    msg.timeout = 29645U;
    msg.rpm = 0.6041898113592462;
    msg.direction = 146U;
    msg.custom.assign("TXMYRNJHPBHYDQOLITSXNTNTJYVMBDSNNOBQBFVDZXOAEFDLSRLGABGNDPVSDJYFGCEVKIKUQDJHXIKEGRTBJMLRMCRUDLWZDUESPCSNZFQELOHKGXAUAEAGMWJBUVBTXXQUUQQPCPOKEW");

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
    msg.setTimeStamp(0.5173762587026872);
    msg.setSource(47677U);
    msg.setSourceEntity(111U);
    msg.setDestination(42558U);
    msg.setDestinationEntity(227U);
    msg.timeout = 38657U;
    msg.rpm = 0.3251208230764463;
    msg.direction = 190U;
    msg.custom.assign("VQWEYSTHRLMQJXSQGNSCDLTWKSEMAHVGDYYJWEBCABFRNMWPFHSUABFWGBYHOSMPDOATHXTMOIKKDROV");

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
    msg.setTimeStamp(0.41185228813561525);
    msg.setSource(26905U);
    msg.setSourceEntity(158U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("JPLDUSHRJQNGBAGMZPNMOZBKXLPUIOEJONDAQCCBMJTIRUSSPMWBNONTWMJHLTYXRWLDYSVWOYDNFTTZQMFELRYCOJYOPGNDVZAGVGEXFFHTEFBGJTGYWBYWHSDLSJWPRANNEWVXFEXKIQPGSLRDZTHQXEUCSXFCIKHUBLMYGVZUIGYUYRN");
    msg.type = 28U;
    msg.op = 121U;
    msg.group_name.assign("LCZBGVUHXKRSYDKIZNLXJTEISTCRFWOMPYYLAKUHZRTCBTBWYQFNQPDNWKGDBYUCSWFNLIRIAGXOOEKQCNLQQJXIUYTYIGPXZPVWZAFBESLVXJKPEYMKOEULOLITLNQ");
    msg.plan_id.assign("DVBWPXSYCUFURMKETVFNEHVRUZIWEHHRPYWAPZEOYFLZMSISXKVNTAKXGKOTXTBDOMRFJJZQDMKCCOTLJZZXVPSJERHNNZTVIRLOLFBRDXSOUSQQYUGFDBATZCJDFUIXHHKQMFDVWLHWYDQZOKHEEATCNJASGGPJBQDVBXGOJLLBHCPUU");
    msg.description.assign("ONNFCRGQIBXLDLGUIBKHDOCFKGPYAOLMNCMSNIWQVZVSSBQQGVEPVPSIATKMVZJRJSEPRHSDPGMAJSTXZRCMOKVLQFRDGWYGHCOTPLARPKXDFHMRXTDLZIWGZQBYDTXVMBHDYBBFOYCHYZSNCEMVIJUVTCTJQPOENHHJIAEGOXZUWOTNXEVYUZKJCUWYUUBOQ");
    msg.reference_frame = 77U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41876U;
    tmp_msg_0.off_x = 0.4462098335846265;
    tmp_msg_0.off_y = 0.09781774959421485;
    tmp_msg_0.off_z = 0.3264107536301053;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8126991998218277;
    msg.leader_speed_min = 0.12394376402196494;
    msg.leader_speed_max = 0.6142371527343125;
    msg.leader_alt_min = 0.9703355216248212;
    msg.leader_alt_max = 0.7358681850615111;
    msg.pos_sim_err_lim = 0.37371840842518855;
    msg.pos_sim_err_wrn = 0.9695350810265844;
    msg.pos_sim_err_timeout = 52915U;
    msg.converg_max = 0.06761836841657376;
    msg.converg_timeout = 43299U;
    msg.comms_timeout = 56213U;
    msg.turb_lim = 0.7752408680873735;
    msg.custom.assign("QCYKGWOHUEMAPAEFZGHRBVIZLZOIBIIODMUWKSIBQXMIQKDKCRQSLNKGCPCTJBBLMHAJSDEXHHLPHVDCFOPIOMLTURFDFDZYEERLGREYUAUBMVTNQEOFTQGTSYCLABONVPVJOLZYPVYAHAUFZFNNJJSGNXCQWGTDXFFBWWDDJSWEPHPFCKQUTMUKVVEMZ");

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
    msg.setTimeStamp(0.311614616692626);
    msg.setSource(10562U);
    msg.setSourceEntity(76U);
    msg.setDestination(2870U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("SXCMPUGYFWWNLKLYASGAORIPKLERLQMVFXLBJKRIOTZDUKTJMVJRHUOPLVUPBKDCKOAIZOPZCIWSTQGFESVBMPTQSDZYFWGDKTEWBDRVNDFXEYLATXJENSYDNYMCGAATETSJHJBRAHPFOUJEZQGAULDWTUJQXMUNXLCWMBCSUPBLSYOZNJMOGWXQIVWXVBHA");
    msg.type = 121U;
    msg.op = 151U;
    msg.group_name.assign("QHXDPWQDPFXOQQCZVYDTGULHVNMSKPNDYEKJUSAEKRMXEYWCAGKWENCLNYFIHZVJHYYJVMBWBQZBCHBVFIPXFWCWRREJQDLIMHREZJBTNOBATGCEGFVRPSJLHTTSSLMZLMVPUYBVFAAMCAYTNKGFFZOIKCMDOOOSSJAJUZWZXULWIHJXTLKMXEQXEQSGRIBKPNGXVCOWPTBNPA");
    msg.plan_id.assign("DIPWVKABERBYUOQWJJDKCPITYCQDUFZBSYMEGQLAJPLJGBAOSIGUEZGOZYUHNIFPUVPHOYWYXUJCFKAJRGTMMKWNTKTQZBIDEEQLVIGWPDQJMEJHZAMBDSXMBVDRCGGNSFTJZCYCXSANHXOZSAFX");
    msg.description.assign("CKATRXTPLXGAGDSCWIQGVJBHDNVKVCBSCHVKSZHWKLSMQVCEDDYPHJUMSNBMMYYKCYOTLRTFHPNSRIWAWPMPXBEGHOABWZEXTBRNROGAIJHDTLKOGULGFYXOFBMDQRIODW");
    msg.reference_frame = 223U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8221U;
    tmp_msg_0.off_x = 0.4573024972163763;
    tmp_msg_0.off_y = 0.9298822296226588;
    tmp_msg_0.off_z = 0.06421821315529819;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.69193426549253;
    msg.leader_speed_min = 0.6327920526872534;
    msg.leader_speed_max = 0.444738581280984;
    msg.leader_alt_min = 0.05597869828944024;
    msg.leader_alt_max = 0.4009348276630349;
    msg.pos_sim_err_lim = 0.03666738353632759;
    msg.pos_sim_err_wrn = 0.48762513008459907;
    msg.pos_sim_err_timeout = 7342U;
    msg.converg_max = 0.07786536956853285;
    msg.converg_timeout = 61339U;
    msg.comms_timeout = 8970U;
    msg.turb_lim = 0.7535888199170098;
    msg.custom.assign("CGDIBJKWMHQHZEMBZYQENRUWUCFNRKJWZQNJIDIQKQDXPUYYIBMMHNQZ");

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
    msg.setTimeStamp(0.8905192543404069);
    msg.setSource(59884U);
    msg.setSourceEntity(253U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(143U);
    msg.formation_name.assign("XUFIRSEDTTT");
    msg.type = 20U;
    msg.op = 250U;
    msg.group_name.assign("XJIYULAXLIQFHVRSGMPOIKLRVLBEMEFTXJDAAREMGCJHKODSOVBRIICOTFYGTATPLKWXPF");
    msg.plan_id.assign("ELOTHTATOFJACMSBGBWCQA");
    msg.description.assign("AKDEYYADBAKRSFRCRGUVGNGKHQTMELQHHDMUHBMHYGWDEKWPJWJACEVRQUUZNUFWSOGUHHVISYQZACRXWCENSZLRITBPMLYCKVJKEEDPFSPGWWQWRVGNNZIGOYYCJJFEYVNTAMGFDLIJAJOSYMHQABOTMVCKMMPFAZYSINKXGZOXCHPKIEWDJLXMZXDRFZFUFQJCLWDBIXIXOHTTNLTRAPSVBPZSLCXQIIVJOSOT");
    msg.reference_frame = 124U;
    msg.leader_bank_lim = 0.12015277565074511;
    msg.leader_speed_min = 0.13808383860247386;
    msg.leader_speed_max = 0.6404546342653095;
    msg.leader_alt_min = 0.498324426675787;
    msg.leader_alt_max = 0.40038424492168334;
    msg.pos_sim_err_lim = 0.8714055124393105;
    msg.pos_sim_err_wrn = 0.39887675935690026;
    msg.pos_sim_err_timeout = 18516U;
    msg.converg_max = 0.029056461593649052;
    msg.converg_timeout = 53319U;
    msg.comms_timeout = 26114U;
    msg.turb_lim = 0.3477262930007109;
    msg.custom.assign("RKNABOMTCIMERQLLBGBNWUDCMKNTTAWFSLGVDKVJYJOGUFDEHXGKMQXY");

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
    msg.setTimeStamp(0.9329369553145829);
    msg.setSource(38353U);
    msg.setSourceEntity(86U);
    msg.setDestination(13366U);
    msg.setDestinationEntity(109U);
    msg.timeout = 63361U;
    msg.lat = 0.9743962894707909;
    msg.lon = 0.5173953968701378;
    msg.z = 0.5096626915726544;
    msg.z_units = 173U;
    msg.speed = 0.596185773525646;
    msg.speed_units = 118U;
    msg.custom.assign("UZFTZJGWWMSANKRBEEOEYDUOMTPNQYOCLRGXJWVMLKDJDLYUOVVHHCHNHZBUJGVRTYRDPGDVXDSOBFNNUISNLEWTPRAPYIMKSPBRPEEJCCBFIGMRZDINAYXOLOFFBHAWLSIKHCREBQDOKCUNVMOXMQUANHRWIPKIMVRSYBGVJCLKXUMALQTQFQFLMAIWCCIISAGDPZQCYKSJXOXPTW");

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
    msg.setTimeStamp(0.6346501007552984);
    msg.setSource(39036U);
    msg.setSourceEntity(42U);
    msg.setDestination(33238U);
    msg.setDestinationEntity(6U);
    msg.timeout = 25933U;
    msg.lat = 0.3388043019589867;
    msg.lon = 0.20182428944475483;
    msg.z = 0.6888224486468998;
    msg.z_units = 169U;
    msg.speed = 0.48590384921445584;
    msg.speed_units = 97U;
    msg.custom.assign("TRJZFJAJOVCPSPEJTNCXEILWPIMNCSBDMKIGBOBLFRBWOQHNRJTKFQALRQGSVZSXQOTVEORPWMZUDOJFUHIFUDVHCANYPHCSRBXMEHJKNKEFYYFRCDYYDGBJUQTGENZVXRWYTBUZZVTRUHKUUGOWAXGCDQNPPTLMEHKCQZCFIYHACNKAANTVYSXHGDSYDVWIJXLIQWUMGLUHK");

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
    msg.setTimeStamp(0.7065245119250558);
    msg.setSource(8543U);
    msg.setSourceEntity(248U);
    msg.setDestination(51023U);
    msg.setDestinationEntity(200U);
    msg.timeout = 65405U;
    msg.lat = 0.5925310388501684;
    msg.lon = 0.6422154411923967;
    msg.z = 0.8907292863404903;
    msg.z_units = 24U;
    msg.speed = 0.5797372864664457;
    msg.speed_units = 174U;
    msg.custom.assign("FQNIBMOWGEFTGYDJOCOFGJKHPEDBXGFSQVSMKEBKITGCUZSHJLXPUQDCIZZNVYRJIAUEMBEAZXRCHROBONARPMIWFLZJSLQDVKEINGWKZDAXCEQGONSNXRQVZXORUCWAFXPTRRVWHGWLAAFSGIXRVTTIMVJH");

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
    msg.setTimeStamp(0.7766274023132042);
    msg.setSource(4267U);
    msg.setSourceEntity(241U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(155U);
    msg.timeout = 54530U;
    msg.lat = 0.23635050039238104;
    msg.lon = 0.8925322244180833;
    msg.z = 0.07604761208089106;
    msg.z_units = 31U;
    msg.speed = 0.371096573047887;
    msg.speed_units = 182U;
    msg.custom.assign("TRFCTWLNIIHWHTVWVHUTBYJSWRYVURJXXPEOMLJAXDGYPAECOBNLAVCMJTTNIHTJAWGFIYCXRLMAUBQEVGCXOECSNNFDUYNHRQXICXMMVWJSTPIUTFJUMNOVFKSHAOFOZILEYOEXPPWKKYBQ");

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
    msg.setTimeStamp(0.965476492730401);
    msg.setSource(59711U);
    msg.setSourceEntity(221U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(217U);
    msg.timeout = 7565U;
    msg.lat = 0.21297044436515677;
    msg.lon = 0.8155493839586212;
    msg.z = 0.5071849956430674;
    msg.z_units = 153U;
    msg.speed = 0.19644587767788535;
    msg.speed_units = 199U;
    msg.custom.assign("EJSPIDPBFVXDOHEIIFYVWOKUEZOYHAMKNGEBCKMGASCDBCWVUQJKTAC");

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
    msg.setTimeStamp(0.6341576876353943);
    msg.setSource(56402U);
    msg.setSourceEntity(220U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(111U);
    msg.timeout = 7528U;
    msg.lat = 0.6388813523901069;
    msg.lon = 0.5206446372266947;
    msg.z = 0.9094973580873756;
    msg.z_units = 157U;
    msg.speed = 0.9748568819810481;
    msg.speed_units = 88U;
    msg.custom.assign("BYNNTDJXUWKFQLJFRUOOJVEMDADGOPTVBOMKKLCQTNQELLTEHADHWODQPISYCHPKWYIKBSSIWBUEHNBLRZJXZMGPXAWQQDXSJSZOICYCWPVGRQSTENTXFRJVGALPJFXOIEDLFSBYZWMZHWXQMXYTKCVURKTHFTNQJBKOEBYSTUGNUU");

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
    msg.setTimeStamp(0.751739950680939);
    msg.setSource(5725U);
    msg.setSourceEntity(138U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(154U);
    msg.arrival_time = 0.46797192706440083;
    msg.lat = 0.4161925619974025;
    msg.lon = 0.3974639562717296;
    msg.z = 0.846353689217134;
    msg.z_units = 130U;
    msg.travel_z = 0.46328176215005445;
    msg.travel_z_units = 232U;
    msg.delayed = 185U;

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
    msg.setTimeStamp(0.905948189407995);
    msg.setSource(42942U);
    msg.setSourceEntity(188U);
    msg.setDestination(20242U);
    msg.setDestinationEntity(133U);
    msg.arrival_time = 0.46788778464760095;
    msg.lat = 0.6813032485452565;
    msg.lon = 0.6012299889864594;
    msg.z = 0.47443166273132575;
    msg.z_units = 163U;
    msg.travel_z = 0.9687513328734288;
    msg.travel_z_units = 236U;
    msg.delayed = 220U;

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
    msg.setTimeStamp(0.24955340351946997);
    msg.setSource(37775U);
    msg.setSourceEntity(137U);
    msg.setDestination(28381U);
    msg.setDestinationEntity(248U);
    msg.arrival_time = 0.3751454816213926;
    msg.lat = 0.22182204510213055;
    msg.lon = 0.9214506492321197;
    msg.z = 0.9144364704856476;
    msg.z_units = 16U;
    msg.travel_z = 0.6836405402530776;
    msg.travel_z_units = 6U;
    msg.delayed = 151U;

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
    msg.setTimeStamp(0.5363894464145627);
    msg.setSource(41362U);
    msg.setSourceEntity(16U);
    msg.setDestination(22999U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.7487747736230703;
    msg.lon = 0.6625406854782033;
    msg.z = 0.022721796990016974;
    msg.z_units = 68U;
    msg.speed = 0.2153156592924942;
    msg.speed_units = 253U;
    msg.bearing = 0.1263120098272722;
    msg.cross_angle = 0.3115557173576109;
    msg.width = 0.3279541348053221;
    msg.length = 0.1166279706569533;
    msg.coff = 133U;
    msg.angaperture = 0.2921178881720098;
    msg.range = 50344U;
    msg.overlap = 126U;
    msg.flags = 56U;
    msg.custom.assign("HJNPUGXZJMWHDZDAQVXNJLGQADJMYDYIUXPB");

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
    msg.setTimeStamp(0.3361380271112695);
    msg.setSource(45350U);
    msg.setSourceEntity(118U);
    msg.setDestination(39090U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.7646955117824791;
    msg.lon = 0.162733571866587;
    msg.z = 0.7857397817297243;
    msg.z_units = 187U;
    msg.speed = 0.9824208639370493;
    msg.speed_units = 33U;
    msg.bearing = 0.7274743615238827;
    msg.cross_angle = 0.7600813022288663;
    msg.width = 0.9181739065796516;
    msg.length = 0.9966134407386781;
    msg.coff = 252U;
    msg.angaperture = 0.42565306935796077;
    msg.range = 46732U;
    msg.overlap = 184U;
    msg.flags = 209U;
    msg.custom.assign("ISYPXZQBAJWKOMPGBVKUNRUBOMDHZAQPWEUVDTKPMCBQGQCHINLZFGNWFRAOYZJVRSHLWLVYOSEQBSAIULRDZKCTGGKKVMXPWVNUTFXPWRCDYIYNOECAGGLLQIVXGHIYWMMSDCSJWZUMWEDTJTEIVBK");

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
    msg.setTimeStamp(0.03135801938348626);
    msg.setSource(21670U);
    msg.setSourceEntity(132U);
    msg.setDestination(50092U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.13496618968741525;
    msg.lon = 0.48236570666122025;
    msg.z = 0.1966989678541029;
    msg.z_units = 205U;
    msg.speed = 0.3409834429608892;
    msg.speed_units = 191U;
    msg.bearing = 0.13668189913218076;
    msg.cross_angle = 0.1039615369587158;
    msg.width = 0.08755731888944185;
    msg.length = 0.6853203207245592;
    msg.coff = 100U;
    msg.angaperture = 0.13162505256879597;
    msg.range = 40753U;
    msg.overlap = 232U;
    msg.flags = 104U;
    msg.custom.assign("LCFYKGOKPL");

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
    msg.setTimeStamp(0.5010103378942462);
    msg.setSource(38181U);
    msg.setSourceEntity(177U);
    msg.setDestination(18708U);
    msg.setDestinationEntity(204U);
    msg.timeout = 15360U;
    msg.lat = 0.4168163338025265;
    msg.lon = 0.31699218660115813;
    msg.z = 0.1686894685850331;
    msg.z_units = 77U;
    msg.speed = 0.6382253208712317;
    msg.speed_units = 63U;
    msg.syringe0 = 124U;
    msg.syringe1 = 103U;
    msg.syringe2 = 181U;
    msg.custom.assign("PGZGULWLQCCHWLDRGCQSCBWYCQUQE");

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
    msg.setTimeStamp(0.4985627618819698);
    msg.setSource(4635U);
    msg.setSourceEntity(131U);
    msg.setDestination(58776U);
    msg.setDestinationEntity(238U);
    msg.timeout = 26747U;
    msg.lat = 0.909853159956721;
    msg.lon = 0.2193898714707343;
    msg.z = 0.22797231019736552;
    msg.z_units = 244U;
    msg.speed = 0.4458464456075364;
    msg.speed_units = 11U;
    msg.syringe0 = 132U;
    msg.syringe1 = 96U;
    msg.syringe2 = 147U;
    msg.custom.assign("FTIEZFCMJFNHGNHJLZQPFZDNCAMHBYCVOOGUWIVVIXRASBRKDFVQKQGXNMHGWMCCQJYRUWCUMIXAIGDRBTXWXAKTJDPARWVTXKUOJYETPPCILSDEPZUVOSQJGUSTWOJSZSLLBIYQSWHPELWQSHZCQFBBZAAESSZDERKIPFYDLOIEKXPCFJMHEURBNYGMLURHNDOVNLAITHVGWNYXNK");

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
    msg.setTimeStamp(0.36283241955268486);
    msg.setSource(42989U);
    msg.setSourceEntity(47U);
    msg.setDestination(47616U);
    msg.setDestinationEntity(251U);
    msg.timeout = 41737U;
    msg.lat = 0.3005563355241542;
    msg.lon = 0.8387940006999689;
    msg.z = 0.9082443279298217;
    msg.z_units = 41U;
    msg.speed = 0.48536463719640943;
    msg.speed_units = 211U;
    msg.syringe0 = 205U;
    msg.syringe1 = 132U;
    msg.syringe2 = 233U;
    msg.custom.assign("PMXMVPSJUFALVVLCTOGGHVJIKKCTZRASULLMUBRNZMKGYXOZWAXMGBKXAIUI");

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
    msg.setTimeStamp(0.9707018036581293);
    msg.setSource(24681U);
    msg.setSourceEntity(1U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.40265149525026367);
    msg.setSource(56097U);
    msg.setSourceEntity(185U);
    msg.setDestination(8674U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.088563931010465);
    msg.setSource(30391U);
    msg.setSourceEntity(54U);
    msg.setDestination(4248U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.4165247326807888);
    msg.setSource(31652U);
    msg.setSourceEntity(47U);
    msg.setDestination(55034U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.8497386205171548;
    msg.lon = 0.7019083012237274;
    msg.z = 0.962280123639115;
    msg.z_units = 71U;
    msg.speed = 0.825975853359857;
    msg.speed_units = 156U;
    msg.takeoff_pitch = 0.2451556134294387;
    msg.custom.assign("TZXGPFZCMKSCWWZHMIQBWTRWBGOXUVOHVNSPCCKXJMKRIEIPLSEAOAKFPRBENRNYOMVFTEUZDKBLEWDHMMMUJPVUVIITMJDQHNQSQGEGUXUDZJWAITRJWXNAJACUOPATFPRHPXGHONBUKLZGVTKDXDZKBBMESJOGOPSCHWHILADQATFUCCESBYLWNRVEDY");

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
    msg.setTimeStamp(0.5259237791314866);
    msg.setSource(12281U);
    msg.setSourceEntity(121U);
    msg.setDestination(58602U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.9761958375438667;
    msg.lon = 0.6639573004639227;
    msg.z = 0.03453814568832181;
    msg.z_units = 148U;
    msg.speed = 0.22928657715315137;
    msg.speed_units = 69U;
    msg.takeoff_pitch = 0.8250540190190359;
    msg.custom.assign("DKMUNCJRWSTPHUSUWBUHFQZQZPZEMQLDZHERKLWOMKAWRAKGXTWEFGEBEVVLEMBMTRJRMPAQKNSOAQOUECIQBCHNUFDXFWMYDBWVXHJIIDIVCXTFRTWXIRLEACAGKPFJROHVZJQIJXSYDSEPPAQGYIQPTYSRGHVUCBGBHPOHKFMYXJHLNJSSCOGTANZIFMLTWWJLOKTFICGNOCNUTLPSYPEXOIUVYBLOZVSZUVDNACVZDQJRYBZBDGK");

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
    msg.setTimeStamp(0.30180765834860823);
    msg.setSource(55630U);
    msg.setSourceEntity(6U);
    msg.setDestination(36397U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.5123113510693047;
    msg.lon = 0.1924350042684685;
    msg.z = 0.8152793869865422;
    msg.z_units = 225U;
    msg.speed = 0.4783009466942668;
    msg.speed_units = 239U;
    msg.takeoff_pitch = 0.9577359461339848;
    msg.custom.assign("DSCTXAGWEFMILPAFJ");

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
    msg.setTimeStamp(0.3547421519747418);
    msg.setSource(58964U);
    msg.setSourceEntity(141U);
    msg.setDestination(43100U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.36473896651832605;
    msg.lon = 0.17561523743781782;
    msg.z = 0.8040175848220273;
    msg.z_units = 220U;
    msg.speed = 0.09253692369797073;
    msg.speed_units = 173U;
    msg.abort_z = 0.3889115888310467;
    msg.bearing = 0.12891365594919768;
    msg.glide_slope = 235U;
    msg.glide_slope_alt = 0.11723377836442794;
    msg.custom.assign("CEXTYCYJIPZPHQRLRUOSIBKGIHANFNSSLOVMKIOMWXWNNVDQCYMXTJXNLOUAKIJNJRQYNJMFTEKWIBFQJBMEKGHRYBVPQFSUJWAFOMMBRPCHPXWZTRNMLCXRALHIDDUESSRZMHRVMDXDJAIGYPOLPSFYXZYCEHHQUVFIUWISGYHHKQVRGUJGEVDQXWKNTDYALKZWGZELZPSUTG");

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
    msg.setTimeStamp(0.6238212256584367);
    msg.setSource(56655U);
    msg.setSourceEntity(114U);
    msg.setDestination(47945U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.5102273446399366;
    msg.lon = 0.8115510148835025;
    msg.z = 0.9029731528020182;
    msg.z_units = 152U;
    msg.speed = 0.1970138532847574;
    msg.speed_units = 88U;
    msg.abort_z = 0.02635792121502034;
    msg.bearing = 0.9698760010267136;
    msg.glide_slope = 14U;
    msg.glide_slope_alt = 0.32527661751844306;
    msg.custom.assign("DPBNKJDRIJAFCETEUNMASMSHJCRKXGGOECMLXGJZEYNJHLZRGWOQDRCBWQVRKEVNZYMPFTIXWJHRUALYICFKWWAPJLDOADPVKPBGNEWNKHBNDFGFUMVDXVLITZTXYGHYRTFUHELDSSGETBIDXTSEMXHUPCQPQBLFCFSBWXICCAPTVWZVQIOKVIE");

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
    msg.setTimeStamp(0.5087120798907686);
    msg.setSource(23773U);
    msg.setSourceEntity(1U);
    msg.setDestination(46827U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.006160837349811543;
    msg.lon = 0.3234342745564064;
    msg.z = 0.4580429958945752;
    msg.z_units = 176U;
    msg.speed = 0.47804835124466905;
    msg.speed_units = 9U;
    msg.abort_z = 0.9097534271278765;
    msg.bearing = 0.8524543536524039;
    msg.glide_slope = 250U;
    msg.glide_slope_alt = 0.07950858198766941;
    msg.custom.assign("YICXUBPFVGZZOCNEXTDMKENYPMTYLUAAHUTKJUOGWSILACGAIODBUVDKNJQIUQBXYDXDSBZDUKGYYXNNLRQEIBXHJZGTKOHEN");

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
    msg.setTimeStamp(0.7359853077690667);
    msg.setSource(40512U);
    msg.setSourceEntity(253U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.43856854673946066;
    msg.lon = 0.6481747506604872;
    msg.speed = 0.4909681890343124;
    msg.speed_units = 21U;
    msg.limits = 101U;
    msg.max_depth = 0.42627779068598437;
    msg.min_alt = 0.7367291452465724;
    msg.time_limit = 0.15710850487149963;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9908677439561095;
    tmp_msg_0.lon = 0.41226217401911525;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RRHIQVTPQVJXFISZOJZBQMAFHXMGAYQZGZIENLTUIVGWPNURY");
    msg.custom.assign("UNULYSUQZVKRYZALAXCROLWJPWZFBFKPTRTLKUVYDJPJQKEVFFPXSVYLZEVTWEELAXPGACJPXQJMQWFYOWNIJGCFPNQGOBWXLGEGSJGSYIQUINACMZLJHTMVQLDNTEXFSSIHERHIBIZPVKUMXZOZ");

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
    msg.setTimeStamp(0.0070881849610938685);
    msg.setSource(63496U);
    msg.setSourceEntity(94U);
    msg.setDestination(25596U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.07974515108986702;
    msg.lon = 0.6371621395914432;
    msg.speed = 0.7674095410138451;
    msg.speed_units = 101U;
    msg.limits = 35U;
    msg.max_depth = 0.9168384458002209;
    msg.min_alt = 0.2857527552899244;
    msg.time_limit = 0.01335796970520553;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20700484812636455;
    tmp_msg_0.lon = 0.8786290753965581;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DEEBUOVBNVPEFOAZTQPZNTYBQKJSSWZYFKIVADVOGXQECJKMGHBDIAKWJLTRCDHUVPIGHUOHWORWBVNJVCXPJCFBVDFJYMHLHCAQGMQWUUMEYGCXTFZELBAXKSSKSLXYNZFAGWEPLNTZFYYEXHCMRQPLOIIW");
    msg.custom.assign("ZOSFKPMFNUMCQFQGADWKBIGYFNRNIXOHQVEDXNLTTBSTSJGPUZUMTKNMPLAYPXVQQTQXZWDXODLMSOSMHWTYLEDKCCKYVHHECGGGFTPRWJKJJOUUJXZNIRBCGOSKSAVAHXIVAGYZPWPDADEYPEISBBDNFLULWMWXCQWRLOBXJJWBURUSPXJYK");

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
    msg.setTimeStamp(0.6973179816179287);
    msg.setSource(50931U);
    msg.setSourceEntity(169U);
    msg.setDestination(40882U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.3363610143976955;
    msg.lon = 0.5129592247291345;
    msg.speed = 0.6036301773757702;
    msg.speed_units = 61U;
    msg.limits = 179U;
    msg.max_depth = 0.9590953527630126;
    msg.min_alt = 0.15273378299248797;
    msg.time_limit = 0.6777607559626254;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04793222482688719;
    tmp_msg_0.lon = 0.6604069210267964;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UEYFIYNBKUMYWQJPIAJAYNLULHUCGJBPUOT");
    msg.custom.assign("NCVFSJGCSLPANSXUDYOFYZFHNMMJCMITYSRDGWZDEOKLOYCWTEVURRDMVQZJMBJBTKPYPYLHXGLULZVPPXSKQCOEFOKGSJFTUDKQIAVVFNEKJIGVYHDUGMNOEQZQJBFIAHIXKECMUODOSPKMANGGQNXDPXUAIZOQPEVRNHHD");

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
    msg.setTimeStamp(0.24886057030182684);
    msg.setSource(32415U);
    msg.setSourceEntity(219U);
    msg.setDestination(29552U);
    msg.setDestinationEntity(121U);
    msg.target.assign("XSLRTQYTXLGFCNWCDLVTJSTMXAIZ");
    msg.max_speed = 0.8838458498836826;
    msg.speed_units = 153U;
    msg.lat = 0.480846845652373;
    msg.lon = 0.9225445109366713;
    msg.z = 0.4314143165349963;
    msg.z_units = 12U;
    msg.custom.assign("OZUBFYLPNIELFEGOHTDKMGWCNETJSNLIKGXINRVCSVQJIMZYQWFIDSMMRFGSNLXAMTTSMCZIOORKEPVIMPAMWIDIYOHAFWTPDGRZGUPICLUTVEFQRSJFOCJRXSUJEFHXZAXULRMTPGVSQXNHJCDLWEXFTTOWRWTWBYK");

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
    msg.setTimeStamp(0.8121624619357954);
    msg.setSource(62859U);
    msg.setSourceEntity(130U);
    msg.setDestination(10772U);
    msg.setDestinationEntity(212U);
    msg.target.assign("RMBQTLTQLDEV");
    msg.max_speed = 0.12192330179820088;
    msg.speed_units = 100U;
    msg.lat = 0.3935682038659245;
    msg.lon = 0.3662669772761846;
    msg.z = 0.15142699638258783;
    msg.z_units = 52U;
    msg.custom.assign("EEXTERRNHIFEIHCKUQBXOCCHJBOUNCMPFIWMMRYRTKBSBNWNSHCFJAUEYNSMOGLMBNCIKIVIAXJJELPYOKIOUDGZWXTOZFPYTALHTRCVGEDPKZWUIOBCEBCIZLVQFHLVJQQEAJYZZJNIKLRCQVDGSOGNHOAQLAJLYUQGXVMPGWDUNPSGASJVDHDADZAYTDXGYFRKBTMPMKQKM");

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
    msg.setTimeStamp(0.5995048969924468);
    msg.setSource(18206U);
    msg.setSourceEntity(208U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(83U);
    msg.target.assign("JLJJKDPPZRDVBUMZZOSVFZHIWQUQDOICUTSHVGYRXWAVQRNZIPMFPAMKOJUDLDOJDLQTIWTOUQRZRQ");
    msg.max_speed = 0.2339705822624305;
    msg.speed_units = 21U;
    msg.lat = 0.5302454707236798;
    msg.lon = 0.42621299646740285;
    msg.z = 0.24761651056002476;
    msg.z_units = 123U;
    msg.custom.assign("FUWZGPDPPGGDSNZUJBRYYWALQMGABCZKSZDXXHDFIZSUAVHIZRUJWVAYFKGEDFDCGSTHEGVMTXAXIHCOYRXLQAWXHPVKIYVELJQOTYOTRBNMNLLBCYXTDROSQNZMJPUETBWJALZSFZOUCKIMNSFFNPQNQXIKEMETMJVCLGRFAJUOHOOMBXTCEERDDN");

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
    msg.setTimeStamp(0.3280208854533786);
    msg.setSource(60752U);
    msg.setSourceEntity(137U);
    msg.setDestination(36575U);
    msg.setDestinationEntity(183U);
    msg.timeout = 9856U;
    msg.lat = 0.6530386578567201;
    msg.lon = 0.7647127619007041;
    msg.speed = 0.5230988089679387;
    msg.speed_units = 74U;
    msg.custom.assign("HIJGWJCHLCGHJEFNUUUZCCLRNKMRVHSTKXAUBBAANYBGDJVPTXIVQXIUBIWFBGXFDQRZMMMESHEOXHYTODTRFTDYBEWVMGWKDVIAJOIPBDPWUJNCIIGMMLVZAWNNACECLTXJTKKNPQDQOZFHTJQPRRWPJFUPSPGFRLMZGQSZOZYYSCWQYDZJNOFQUAXREIAYXOYLHDSBKIVAMKCQTLWVCRRLS");

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
    msg.setTimeStamp(0.09920751307400344);
    msg.setSource(44687U);
    msg.setSourceEntity(33U);
    msg.setDestination(26367U);
    msg.setDestinationEntity(225U);
    msg.timeout = 65001U;
    msg.lat = 0.9799210339851169;
    msg.lon = 0.16746821500423925;
    msg.speed = 0.13268345066242215;
    msg.speed_units = 73U;
    msg.custom.assign("KILGZQATNSRYTIEIXDNHGANQSKEUZCAXPYBGMVVIHXITOOOPDHSJTQWLBVLNXWJVJMOHOWFGJAOSICRCFBAHRPCDWYLXKGQPBXXPFJJSEYDYGINZTXFSLPEUNOXMIKZDIUVBPRHRZGDMHEVWNUZXJUQAUSBMWLRGBVUAOEHZQCAOVVKBTZHKKWJYEDCGADC");

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
    msg.setTimeStamp(0.2929588547471056);
    msg.setSource(23300U);
    msg.setSourceEntity(164U);
    msg.setDestination(30748U);
    msg.setDestinationEntity(71U);
    msg.timeout = 9774U;
    msg.lat = 0.23279200626150398;
    msg.lon = 0.43813585079334627;
    msg.speed = 0.07218227563251334;
    msg.speed_units = 167U;
    msg.custom.assign("UTWDPFQPDTOXHYDIYMUDIEDCFOWEIKHBRSRCCYLXFTDIADXZZYIHXBKGNTPICUQWNQMLBFMHJEPYJYRFKIHSCLVTQJGKHKTHVBILGFOHUEZZYMPNWPUBENZSIEXTNABJIWQQBWEMZMOLQBKEAJNMKYOMWKUJAVXDANJRUXCHZLHGVVDMK");

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
    msg.setTimeStamp(0.32910059474393927);
    msg.setSource(44986U);
    msg.setSourceEntity(28U);
    msg.setDestination(37921U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.4128670094861939;
    msg.lon = 0.107998145214388;
    msg.z = 0.7767463112577598;
    msg.z_units = 165U;
    msg.radius = 0.06199593668523462;
    msg.duration = 36094U;
    msg.speed = 0.5655331375632644;
    msg.speed_units = 89U;
    msg.popup_period = 1611U;
    msg.popup_duration = 28688U;
    msg.flags = 133U;
    msg.custom.assign("IQCECGZZGBURXVFYDULWDOJSEVEAQRYRKERWUCYSBHAISRENFIUROMTOSYTVOFAPSDVPHHXMOIXAJTTNJZGYYMMZAGAFQVRWPUKWRKCVLVMFNKZTIGZEIULJMWEFLHSAZTMDYCXHQOBXNIPUUBRJC");

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
    msg.setTimeStamp(0.22572676092976107);
    msg.setSource(33547U);
    msg.setSourceEntity(35U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.21214925049639088;
    msg.lon = 0.06132028235215514;
    msg.z = 0.7863920488963632;
    msg.z_units = 11U;
    msg.radius = 0.16585365613567893;
    msg.duration = 24715U;
    msg.speed = 0.49905264112206127;
    msg.speed_units = 11U;
    msg.popup_period = 35692U;
    msg.popup_duration = 44216U;
    msg.flags = 66U;
    msg.custom.assign("ZZISCZCQXKIYDXOSXBHRKWGBMONBLINSRYGGHVNHPFHEJEJXISAYFXEJTLOPWCU");

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
    msg.setTimeStamp(0.0687278750277951);
    msg.setSource(41635U);
    msg.setSourceEntity(111U);
    msg.setDestination(37333U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.16662948132534217;
    msg.lon = 0.6931244628712232;
    msg.z = 0.8647237427069427;
    msg.z_units = 1U;
    msg.radius = 0.847992702882808;
    msg.duration = 11387U;
    msg.speed = 0.4343524656683194;
    msg.speed_units = 143U;
    msg.popup_period = 47864U;
    msg.popup_duration = 51938U;
    msg.flags = 190U;
    msg.custom.assign("XALJZIQQHNPWSVDFNQIZYUFSFTJRALJDEMSNHACPRLVLMHWDGKRUTGSJQPKHMGIGVBEHXKXEEPLHZPAXTCUTYRKSZXBMPQZUOZWEOHFYFAAWEUMNHXSARWJVIMGMVVXNSVWNBICOXNPDIYPTWOMXJQNAEBGWOBUPGQEZTHGVIAJJUYLLCTYIMYQZO");

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
    msg.setTimeStamp(0.08210201968451358);
    msg.setSource(28590U);
    msg.setSourceEntity(170U);
    msg.setDestination(20707U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.9774008183632936);
    msg.setSource(25710U);
    msg.setSourceEntity(68U);
    msg.setDestination(4261U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.7206902233986748);
    msg.setSource(22435U);
    msg.setSourceEntity(131U);
    msg.setDestination(5660U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.8145874328474876);
    msg.setSource(44595U);
    msg.setSourceEntity(102U);
    msg.setDestination(40894U);
    msg.setDestinationEntity(59U);
    msg.timeout = 45071U;
    msg.lat = 0.6189795398518885;
    msg.lon = 0.6181021242089141;
    msg.z = 0.4550034175893878;
    msg.z_units = 201U;
    msg.speed = 0.20361479119054204;
    msg.speed_units = 163U;
    msg.bearing = 0.263436588591629;
    msg.width = 0.3545930055124731;
    msg.direction = 189U;
    msg.custom.assign("TKUKFYMWHSWRFXYMCMZVXKRSXUWEOIQJFATBBUYZGCNTVURDDBSPVLIBLZEASCQDFXJDHOEWSSPYHNMYTXGTVXCJDPZYMYNGZOCNHENLKBOUINORHMVFJCHAUQUHRBIKMQBFJWCKKFDJWVNXIGQXUQRRQQVJUIRIGQHLRQWBPKGLHYKNEKATSTMJTVSXGDLOGWJEADULPYFYGDNJZVOCLCEAZCZ");

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
    msg.setTimeStamp(0.40509713878325027);
    msg.setSource(43522U);
    msg.setSourceEntity(3U);
    msg.setDestination(6039U);
    msg.setDestinationEntity(127U);
    msg.timeout = 43636U;
    msg.lat = 0.31561944148829446;
    msg.lon = 0.1562232141893488;
    msg.z = 0.18685531605241545;
    msg.z_units = 185U;
    msg.speed = 0.8106706133609977;
    msg.speed_units = 115U;
    msg.bearing = 0.2597935539714673;
    msg.width = 0.696337092929198;
    msg.direction = 34U;
    msg.custom.assign("GPXGPBTZCSJQXTANDUWMDUPFEYJYFBNJQWURHRREWTVZPJDITYVONOKAIMZPYUKJITCKIVINMHOYQOQODFVEVSRZBNSVCSNUPBRLKLQJAD");

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
    msg.setTimeStamp(0.8586343989082601);
    msg.setSource(22551U);
    msg.setSourceEntity(135U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(153U);
    msg.timeout = 62136U;
    msg.lat = 0.5875072632442895;
    msg.lon = 0.05711819992159217;
    msg.z = 0.14270707032686247;
    msg.z_units = 51U;
    msg.speed = 0.6415944034476679;
    msg.speed_units = 211U;
    msg.bearing = 0.8207107111526397;
    msg.width = 0.24284422780828108;
    msg.direction = 174U;
    msg.custom.assign("XDRLGBYASCGRZUEPWFSXIEPAMXAHVEJLOBWDAH");

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
    msg.setTimeStamp(0.1908574680038222);
    msg.setSource(4168U);
    msg.setSourceEntity(14U);
    msg.setDestination(54971U);
    msg.setDestinationEntity(182U);
    msg.op_mode = 81U;
    msg.error_count = 109U;
    msg.error_ents.assign("IHDQMKSWPJHDHAWBZRYOQWQVIKEZOEOPFSVUFXQYILGHVWKHVEMCBFRGSLSMDBPRMOXORVMLGDHCAEGUPUJQMFZYBFMGQESDUSUTLCIFAYCXKNVEJYMITPSZIBYJJWZXFTAFOCFOSESMYXWVNJJKPTBLRGIDHGJQGOAPXANKGTICQUZ");
    msg.maneuver_type = 51335U;
    msg.maneuver_stime = 0.9732266381558082;
    msg.maneuver_eta = 20840U;
    msg.control_loops = 587224942U;
    msg.flags = 122U;
    msg.last_error.assign("QPIFDTDKKMTKAFFNVGRLPSWZKYXFCKMTPFCVYITQBIOALYECSURWZOOBNHEWVRTBUEQRKFQBWADZLPMDGNTSZMXPUQGWXIJJOEPTPMLCGNUUMYOZKRCRCWVHAIWJSRMYPHKY");
    msg.last_error_time = 0.30671266293916355;

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
    msg.setTimeStamp(0.8935901778661564);
    msg.setSource(239U);
    msg.setSourceEntity(163U);
    msg.setDestination(29926U);
    msg.setDestinationEntity(146U);
    msg.op_mode = 104U;
    msg.error_count = 43U;
    msg.error_ents.assign("JCRTXVQUVEADUGDAEOJUPSSMTPBQHCBPTXMRNNXYFUDTWZZQSVYJEFHXOBUBYTIUHKUJRQCAUCA");
    msg.maneuver_type = 22015U;
    msg.maneuver_stime = 0.22389786739250395;
    msg.maneuver_eta = 2129U;
    msg.control_loops = 2443915018U;
    msg.flags = 176U;
    msg.last_error.assign("PHCPXPRCWDXONVOLWRBITAQCTOVICHCMZHYFWIVLGBVEJAGUBFEPHVUAILBZQJIMYNXZJOSKWFYEBDCBG");
    msg.last_error_time = 0.6478723742244061;

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
    msg.setTimeStamp(0.27448879610069055);
    msg.setSource(33462U);
    msg.setSourceEntity(77U);
    msg.setDestination(58501U);
    msg.setDestinationEntity(82U);
    msg.op_mode = 158U;
    msg.error_count = 2U;
    msg.error_ents.assign("SYZETTGSRTFKKGHQCEXICVRANZYUJZIXDLLQYSOPKBVOXGUFLYOJYNMFWFNYBJMEBRKTQCQZAQMEGDBWHRRRIPDDEHDOZUOCPHKVHGLSZDBUWSWPOMAJCXGNCZMJTWCAIFIUVPHHZ");
    msg.maneuver_type = 51790U;
    msg.maneuver_stime = 0.9944155435709571;
    msg.maneuver_eta = 24796U;
    msg.control_loops = 2829422680U;
    msg.flags = 209U;
    msg.last_error.assign("VXMYIBMAMBFAKKPVOHAOXFSZPULJISAQKIRDSJYLPZYTITZLLGLCNFBNRPVPWEIUDVGKQLBOPANJHSDGQTRCIBHZRUWODBJKVQXQTZTHPQRSWFFOQCEMUMEJTOGLTEQWIKNNOJGAWJEX");
    msg.last_error_time = 0.7832554612601113;

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
    msg.setTimeStamp(0.5695724247579744);
    msg.setSource(17398U);
    msg.setSourceEntity(107U);
    msg.setDestination(31372U);
    msg.setDestinationEntity(253U);
    msg.type = 110U;
    msg.request_id = 29789U;
    msg.command = 232U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("CHBGKVEXRFGGHUMXGGFFWKKXBLWUPFIBUMPQLXBQBGOSMFVUUIZQIZNTCJCQYHKJYSORIDIHALWRNTJBZOZJWXPMYDRDSSEUYUJNAOAEBFIFOIAZWWOMCVNXIRBHTVAXPTDCSLHGZPLAPVJVZXNDMUCNMFJYLCHQ");
    tmp_msg_0.max_speed = 0.7766784376210709;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.lat = 0.2521606761094032;
    tmp_msg_0.lon = 0.5934351070234666;
    tmp_msg_0.z = 0.7486849805809412;
    tmp_msg_0.z_units = 220U;
    tmp_msg_0.custom.assign("STIYDSTVBVQVUPOKRIWFTZLFOWCMDZEGOKIJTUWFWCNQZHXJJKMKBSIIYTUAJASWXGPDTAPFLHKZJXUVGOPMDAQZFXPXUXACVYJERLYOKNEFWMKQSNBUCLOVNNXQYAQVLGGDWHNDLVHQJKXMADRCONMGLLEDQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15930U;
    msg.info.assign("SABUTDANSFXYKLAIDFFANSQTGLDDMKWZVCBLZNFWLTEGIRBNBPJYJXKHUUQEDPCPELUFVHIGGOCPHTRNELCMNRECUOQKBLSJBKHSISZRCUDYRDPHZRBGSRYTCFJTBECLDUHOXSTAQOLUQFZAPWGPOTQMVWLVMEIRTMHEAHFXNKRXKPSYXNJUYFXQMIZBJOCIVGZVANOGV");

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
    msg.setTimeStamp(0.18545142179231378);
    msg.setSource(47230U);
    msg.setSourceEntity(234U);
    msg.setDestination(47791U);
    msg.setDestinationEntity(211U);
    msg.type = 81U;
    msg.request_id = 21832U;
    msg.command = 173U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 5320U;
    tmp_msg_0.lat = 0.46281464817097784;
    tmp_msg_0.lon = 0.5500279786851878;
    tmp_msg_0.z = 0.8703867645669982;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.speed = 0.2697873858162899;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.custom.assign("FNIRPAYIZLITGFFWMOSCTSCDBLQONILNZDNVGIXXUMXPGRIONEBWWNTMSRGZYCHQRWCDGDFEWMNEYBHZPTAKBDBGESHRMPKQEZNVXDJV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41920U;
    msg.info.assign("OGCLQYFSVKUEHNHPKVDAQQJAPBPKWCUOAMIWSZRVNQOFWHRHXIYJEQDBFQZIJCLIJUEBHIVTNTDCGTSYXMBFOSCNZUXAGJFGBFCLVQJHFHTBOLWGMCUWPMWZRTXPTEYWNKLHPMOBHLMGKV");

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
    msg.setTimeStamp(0.025321061406891388);
    msg.setSource(24698U);
    msg.setSourceEntity(83U);
    msg.setDestination(16879U);
    msg.setDestinationEntity(10U);
    msg.type = 12U;
    msg.request_id = 26880U;
    msg.command = 96U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 48719U;
    tmp_msg_0.lat = 0.840369982749548;
    tmp_msg_0.lon = 0.5930736031154851;
    tmp_msg_0.z = 0.6425785670821367;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.pitch = 0.49654104369478413;
    tmp_msg_0.amplitude = 0.5851870486268193;
    tmp_msg_0.duration = 62906U;
    tmp_msg_0.speed = 0.07863847135808066;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.radius = 0.3808894806079226;
    tmp_msg_0.direction = 98U;
    tmp_msg_0.custom.assign("URRVNWRSHOYEZFYAWTJNLORJJMUHWLVKNAVWVRIGCZDDFPWSSEOEQHEEPIMGDYHRACOLRSSXGBFXCANBJITFCBIUMZTGZWJONZNCCHBAMPFTZUBTDJSGGTUDFBWIXEHTGSOFGPPMHYDM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13210U;
    msg.info.assign("VLWTTBFWEVNEAWDJFPRLKYULIJOIWUVESKALCGXAFJAXZSNKZWCUQUHMXJYHHYJPBYIHGKTBKAXWG");

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
    msg.setTimeStamp(0.845291519779282);
    msg.setSource(16710U);
    msg.setSourceEntity(220U);
    msg.setDestination(64012U);
    msg.setDestinationEntity(147U);
    msg.command = 66U;
    msg.entities.assign("OGLEQUDXMGMAVREPXMAMJVXLCDUPHDIN");

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
    msg.setTimeStamp(0.439441860360808);
    msg.setSource(62104U);
    msg.setSourceEntity(230U);
    msg.setDestination(48360U);
    msg.setDestinationEntity(75U);
    msg.command = 56U;
    msg.entities.assign("BNKXYTTEDDNSXGLLLJRYFHDBTQHSOIQOEVMGPDNWJESAFBUGBZYBPHCOSONTFRGJCQQYBVUDFQHVCRPLVKDNOZMVZDJIMVLFMSAEQZHUQUGZKGJBHKHLTVHRVWEKAMKMXXUIOPZUALXFMDZHKQPQKTYCCCSLNJKYBOLRATWUGXEUTBFYWVYPAJANCNYIRWMBNFWFOAUTEFSWJJGPCMXHU");

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
    msg.setTimeStamp(0.24173495451231464);
    msg.setSource(36980U);
    msg.setSourceEntity(18U);
    msg.setDestination(43744U);
    msg.setDestinationEntity(213U);
    msg.command = 112U;
    msg.entities.assign("KKAXFVUPAGZWZUOSRYFVDOIEKXDDWTIISYFCXYICKIHIWTMWEFXULGNUDZSWPUGJBACBEJFBVJWMOBTMGCBNUTJNHVXXVPLOJWDSTZRZKLZCSHSUOYQEEBFEELGHECPNXISNQJSGVOXMJONTEGAOQGBVDIRU");

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
    msg.setTimeStamp(0.022524581872234162);
    msg.setSource(13300U);
    msg.setSourceEntity(113U);
    msg.setDestination(27341U);
    msg.setDestinationEntity(57U);
    msg.mcount = 230U;
    msg.mnames.assign("ZIOEBJVSQCHDKCLTCGUMLBNWFZQTDUZOIXSJ");
    msg.ecount = 101U;
    msg.enames.assign("TOHWEIKIBSQSTDDEQPBMXSCAAVRWMUQJIXWWPQDFOYSHBLKPVCZAFSXDKUNIGASVNJUEGGLZBQHRQULWPNMUBDNHEMPAMTCIYFKZAPFUHWLGOTCRJHEUMDEGFPSVOTGRXYKJSIINCETZYQWPJZ");
    msg.ccount = 130U;
    msg.cnames.assign("AGMEUVTCNQBZIYTIMKEAKCVSTSPXJQUMDSFJESMWZCUGOFZBHKGHHUQOLZLPRBPFKTICGKPMAWCAPDRUCRITWVNRQUWSSGOXDBWZILVHNERJCMNYKKYJ");
    msg.last_error.assign("EGVTCEQIOBBNWKPAOFVTLZEPBBHHMQSVMKCBCOBZBFVHDAJHVQNFGMFFNGXTPELJPNCHMLCTKFKQJCOLZJAWUHFNPOMIQKESZQL");
    msg.last_error_time = 0.9808401444543052;

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
    msg.setTimeStamp(0.5056248309343168);
    msg.setSource(36597U);
    msg.setSourceEntity(208U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(51U);
    msg.mcount = 59U;
    msg.mnames.assign("KZPATUHHXFSYZLDKBHGRIEUXGVCQJWMVKYFKOVVZUMWXQZWATOPUEYNUTCTASSPPOGLK");
    msg.ecount = 105U;
    msg.enames.assign("CXVKMZYFDTWIKTGSKABNYXDDPLBHZZPOEHAERDADPTJULGHWMSPVEWFGIRZGOAHGSRKNQGLJIRCGVTJTLXLTUUEICKAJRQPLFOBLVPZFTVMSLFYWNQADDIAIBBQCVFOKRUJXQIZNJSEKWMICEIMCSOCNUFWQPCWTHDBBHHEOXZWJFFYVPUKQ");
    msg.ccount = 86U;
    msg.cnames.assign("EYUXDYVBXZTVAJABVUIWTXMZKIQVCIUMZDHBHLEZNWJNFSKCLECYGFPSSFRYSXBAAPLONMPHFUBUHFNCWUKOREXQTNWVSIBJCVIYZLJDTOPQUSPTOMMHJZQLBTEO");
    msg.last_error.assign("OJZAGHVOTJSQNMLWCDYMVKAMICHMNJWRLQJHIZIGVKZAGDSFCCUNOKIVNKBBJSCHWYZHDDWLPGBLXREHBOTPQGCQHXPKSDVBNXSWDGDXYYAXQWPXAJ");
    msg.last_error_time = 0.4571175247990442;

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
    msg.setTimeStamp(0.6890635098915567);
    msg.setSource(45134U);
    msg.setSourceEntity(120U);
    msg.setDestination(63610U);
    msg.setDestinationEntity(175U);
    msg.mcount = 168U;
    msg.mnames.assign("PQFHBRCCPIVTUTBYXNLKGAMPKHB");
    msg.ecount = 148U;
    msg.enames.assign("IGREQZHIMSJIPRMWGWYAYOOHBNTBNZSDPBHC");
    msg.ccount = 17U;
    msg.cnames.assign("PUHXHGYWTISUUDFCJJCJDBAEPDWJGOCVWKXBDRWHLINIDFKCTCZKYBTLYMNGZGLEFQQLSRLTKQMPOGAQVPJWZUIGSFBPVZXUEHUJLJEXKKEBEVYFQSLRHTEQSLOXRFAZNXRAGWHHIDYWQIF");
    msg.last_error.assign("FLRUHJYNCEFRMISG");
    msg.last_error_time = 0.9061128043912401;

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
    msg.setTimeStamp(0.6309501537072268);
    msg.setSource(60552U);
    msg.setSourceEntity(179U);
    msg.setDestination(3051U);
    msg.setDestinationEntity(54U);
    msg.mask = 241U;
    msg.max_depth = 0.5510437776604844;
    msg.min_altitude = 0.9106361574129062;
    msg.max_altitude = 0.44389835441296144;
    msg.min_speed = 0.49504042119745895;
    msg.max_speed = 0.31836147473391085;
    msg.max_vrate = 0.8913394384499975;
    msg.lat = 0.033885269830694065;
    msg.lon = 0.73211542226827;
    msg.orientation = 0.07622255223511931;
    msg.width = 0.9152635926199594;
    msg.length = 0.9837183680524976;

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
    msg.setTimeStamp(0.39844479172092895);
    msg.setSource(13927U);
    msg.setSourceEntity(180U);
    msg.setDestination(50484U);
    msg.setDestinationEntity(238U);
    msg.mask = 180U;
    msg.max_depth = 0.9459617907189222;
    msg.min_altitude = 0.81807062888111;
    msg.max_altitude = 0.4629734919670826;
    msg.min_speed = 0.2784635200542104;
    msg.max_speed = 0.5923679510935451;
    msg.max_vrate = 0.6200660386575132;
    msg.lat = 0.43438114809449024;
    msg.lon = 0.05490725399601892;
    msg.orientation = 0.7431621011594958;
    msg.width = 0.2523725685471012;
    msg.length = 0.5376287084994271;

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
    msg.setTimeStamp(0.7758845569296151);
    msg.setSource(36981U);
    msg.setSourceEntity(117U);
    msg.setDestination(54056U);
    msg.setDestinationEntity(83U);
    msg.mask = 167U;
    msg.max_depth = 0.2008878489855499;
    msg.min_altitude = 0.711405797665944;
    msg.max_altitude = 0.3028441271988165;
    msg.min_speed = 0.9382923155140912;
    msg.max_speed = 0.7213698176596167;
    msg.max_vrate = 0.21808845164973556;
    msg.lat = 0.09210746375177459;
    msg.lon = 0.9922879593757237;
    msg.orientation = 0.9422547927245397;
    msg.width = 0.6689389856280568;
    msg.length = 0.9427338690979448;

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
    msg.setTimeStamp(0.4894970295393777);
    msg.setSource(3606U);
    msg.setSourceEntity(193U);
    msg.setDestination(5764U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.30170774751039375);
    msg.setSource(6441U);
    msg.setSourceEntity(79U);
    msg.setDestination(63394U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.5778078961389375);
    msg.setSource(32007U);
    msg.setSourceEntity(33U);
    msg.setDestination(31367U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.562751728794509);
    msg.setSource(63857U);
    msg.setSourceEntity(19U);
    msg.setDestination(38532U);
    msg.setDestinationEntity(205U);
    msg.duration = 26812U;

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
    msg.setTimeStamp(0.7681907083209452);
    msg.setSource(19716U);
    msg.setSourceEntity(162U);
    msg.setDestination(52386U);
    msg.setDestinationEntity(34U);
    msg.duration = 42358U;

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
    msg.setTimeStamp(0.8042771111417897);
    msg.setSource(9806U);
    msg.setSourceEntity(204U);
    msg.setDestination(35463U);
    msg.setDestinationEntity(164U);
    msg.duration = 6667U;

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
    msg.setTimeStamp(0.034073618833550756);
    msg.setSource(64580U);
    msg.setSourceEntity(229U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(83U);
    msg.enable = 172U;
    msg.mask = 2553671047U;
    msg.scope_ref = 490137270U;

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
    msg.setTimeStamp(0.027002564229231862);
    msg.setSource(23360U);
    msg.setSourceEntity(87U);
    msg.setDestination(61886U);
    msg.setDestinationEntity(230U);
    msg.enable = 212U;
    msg.mask = 675467256U;
    msg.scope_ref = 739469522U;

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
    msg.setTimeStamp(0.8733402748101637);
    msg.setSource(41520U);
    msg.setSourceEntity(11U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(1U);
    msg.enable = 133U;
    msg.mask = 702665135U;
    msg.scope_ref = 3703983423U;

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
    msg.setTimeStamp(0.432518149669743);
    msg.setSource(29166U);
    msg.setSourceEntity(55U);
    msg.setDestination(41649U);
    msg.setDestinationEntity(247U);
    msg.medium = 128U;

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
    msg.setTimeStamp(0.4721794876689034);
    msg.setSource(23961U);
    msg.setSourceEntity(15U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(87U);
    msg.medium = 111U;

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
    msg.setTimeStamp(0.18758421649329504);
    msg.setSource(4879U);
    msg.setSourceEntity(114U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(244U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.7041814927790766);
    msg.setSource(12031U);
    msg.setSourceEntity(213U);
    msg.setDestination(6385U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5109846198398045;
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
    msg.setTimeStamp(0.5106172342454471);
    msg.setSource(33107U);
    msg.setSourceEntity(252U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(195U);
    msg.value = 0.30406755202226954;
    msg.type = 86U;

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
    msg.setTimeStamp(0.9175850852612695);
    msg.setSource(30789U);
    msg.setSourceEntity(235U);
    msg.setDestination(43678U);
    msg.setDestinationEntity(243U);
    msg.value = 0.2113596511204796;
    msg.type = 19U;

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
    msg.setTimeStamp(0.024231475154145365);
    msg.setSource(38320U);
    msg.setSourceEntity(61U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(96U);
    msg.possimerr = 0.7509249781168157;
    msg.converg = 0.3139743650924818;
    msg.turbulence = 0.4564011926714935;
    msg.possimmon = 203U;
    msg.commmon = 182U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.3745522520132897);
    msg.setSource(17384U);
    msg.setSourceEntity(84U);
    msg.setDestination(15801U);
    msg.setDestinationEntity(118U);
    msg.possimerr = 0.08513277202028546;
    msg.converg = 0.734937071959321;
    msg.turbulence = 0.9362083470836066;
    msg.possimmon = 72U;
    msg.commmon = 244U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.5102148500334016);
    msg.setSource(63848U);
    msg.setSourceEntity(82U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(202U);
    msg.possimerr = 0.19698331909612965;
    msg.converg = 0.4774637782038377;
    msg.turbulence = 0.2557910363115057;
    msg.possimmon = 176U;
    msg.commmon = 230U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.09513177149076901);
    msg.setSource(49943U);
    msg.setSourceEntity(151U);
    msg.setDestination(19208U);
    msg.setDestinationEntity(54U);
    msg.autonomy = 143U;
    msg.mode.assign("VIRVJJJPTNXNMFYJLPIXCNUOEIAGFDYMODWBPRMPRFLBZLXBBMOWZKYWYWNGOFVGODQQELPBXIVALSXQUJHMLNQUZIVFLLMORZRAXEVGDKJTASAXFTJEATWKRPFZAGOCCTVHGQBKUIHBDIUNQXBUVVMSJIHKICQSDTHYMBNKPHREDSRYEKDQOGZCSHYFWQTWDHUTMWICWZCSAEUAFJUAKGXSCMTYGSLTOEPNQOEH");

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
    msg.setTimeStamp(0.8280495990401854);
    msg.setSource(22865U);
    msg.setSourceEntity(45U);
    msg.setDestination(32784U);
    msg.setDestinationEntity(241U);
    msg.autonomy = 20U;
    msg.mode.assign("CXGGMHEOLQSDMLMSLFFJUVUDTPNQNUKNYJYMHEDKRIXTXVPDAVYQYAYTSLIBCSVOTVKXRCAZGDSWKMENYWJMRRUMLBHGPJECHEBXJOPJDQFBZYARUZISOUXJNTPYFFFTG");

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
    msg.setTimeStamp(0.14497981925280368);
    msg.setSource(48918U);
    msg.setSourceEntity(211U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(4U);
    msg.autonomy = 88U;
    msg.mode.assign("IZWDZZGTCGKTTOXZCI");

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
    msg.setTimeStamp(0.08380031001654131);
    msg.setSource(35913U);
    msg.setSourceEntity(75U);
    msg.setDestination(50871U);
    msg.setDestinationEntity(111U);
    msg.type = 107U;
    msg.op = 67U;
    msg.possimerr = 0.28248101532980485;
    msg.converg = 0.6707351327997094;
    msg.turbulence = 0.048126960791320506;
    msg.possimmon = 161U;
    msg.commmon = 30U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.16496328560324935);
    msg.setSource(36988U);
    msg.setSourceEntity(91U);
    msg.setDestination(28572U);
    msg.setDestinationEntity(44U);
    msg.type = 162U;
    msg.op = 50U;
    msg.possimerr = 0.26016653589660277;
    msg.converg = 0.686016765413093;
    msg.turbulence = 0.6343544826472256;
    msg.possimmon = 98U;
    msg.commmon = 140U;
    msg.convergmon = 39U;

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
    msg.setTimeStamp(0.05169967148361709);
    msg.setSource(16126U);
    msg.setSourceEntity(17U);
    msg.setDestination(5182U);
    msg.setDestinationEntity(37U);
    msg.type = 2U;
    msg.op = 154U;
    msg.possimerr = 0.4968781112656181;
    msg.converg = 0.7523707716181846;
    msg.turbulence = 0.3922883883855821;
    msg.possimmon = 146U;
    msg.commmon = 12U;
    msg.convergmon = 148U;

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
    msg.setTimeStamp(0.4175539003744637);
    msg.setSource(41098U);
    msg.setSourceEntity(128U);
    msg.setDestination(58497U);
    msg.setDestinationEntity(49U);
    msg.op = 248U;
    msg.comm_interface = 12U;
    msg.period = 4290U;
    msg.sys_dst.assign("ANURPMIAELR");

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
    msg.setTimeStamp(0.6476857612683977);
    msg.setSource(1227U);
    msg.setSourceEntity(53U);
    msg.setDestination(1412U);
    msg.setDestinationEntity(211U);
    msg.op = 104U;
    msg.comm_interface = 136U;
    msg.period = 25214U;
    msg.sys_dst.assign("SPZAHZSRWSLPGGHZFXFPFJISEYBTUUTJOWRGETGOCMFDCUABOMXWHYRXWZIVHMGCTRXQNKLSSVUYZXMAPAPFZRXIHTRYDCBLHIAJDJLNSREBCJDGBIYCQOKVEOLVDYLYLXQOWCQNIGTJAVYEFWPKDYSDKNTBZTXGZIBQVKEHVKKCHJQAJVIUDHEGZ");

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
    msg.setTimeStamp(0.044545322900033324);
    msg.setSource(65018U);
    msg.setSourceEntity(101U);
    msg.setDestination(30057U);
    msg.setDestinationEntity(114U);
    msg.op = 196U;
    msg.comm_interface = 18U;
    msg.period = 11615U;
    msg.sys_dst.assign("KYCKUORHGHJEMITIWSULPEZEHJJPBCVMSFOTQISPAPQGLKNTQNHSWMAAAPFCLRTGNEOBDYBIWDJUVBYZFISVFHXXPSVUBNVXNKMRMYRYTGYFIRZBSBZPHWHCUXQZRXEWWZSWLITKKKVDTNDFDJLCQYVQAATQVHOTOOWMECRAQTKMXFEULHGRJDSGZZVYLCPJIDIDQKCOQARRANPEIEUGGDPULOFYXYFL");

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
    msg.setTimeStamp(0.8326490854976077);
    msg.setSource(39251U);
    msg.setSourceEntity(15U);
    msg.setDestination(24081U);
    msg.setDestinationEntity(183U);
    msg.stime = 3765107891U;
    msg.latitude = 0.5830377511189216;
    msg.longitude = 0.21066535514979223;
    msg.altitude = 13059U;
    msg.depth = 36202U;
    msg.heading = 46905U;
    msg.speed = -21509;
    msg.fuel = -73;
    msg.exec_state = 61;
    msg.plan_checksum = 1125U;

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
    msg.setTimeStamp(0.9147004290232714);
    msg.setSource(19570U);
    msg.setSourceEntity(23U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(157U);
    msg.stime = 1959086028U;
    msg.latitude = 0.5077848016690969;
    msg.longitude = 0.8409160938469067;
    msg.altitude = 43660U;
    msg.depth = 56486U;
    msg.heading = 22545U;
    msg.speed = -3348;
    msg.fuel = -1;
    msg.exec_state = -19;
    msg.plan_checksum = 19783U;

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
    msg.setTimeStamp(0.016008018045276073);
    msg.setSource(8322U);
    msg.setSourceEntity(253U);
    msg.setDestination(32247U);
    msg.setDestinationEntity(150U);
    msg.stime = 828955104U;
    msg.latitude = 0.26259297725858033;
    msg.longitude = 0.554767583190569;
    msg.altitude = 7609U;
    msg.depth = 2917U;
    msg.heading = 53449U;
    msg.speed = 21358;
    msg.fuel = -56;
    msg.exec_state = 7;
    msg.plan_checksum = 19408U;

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
    msg.setTimeStamp(0.3882584918889296);
    msg.setSource(17366U);
    msg.setSourceEntity(127U);
    msg.setDestination(33288U);
    msg.setDestinationEntity(13U);
    msg.req_id = 43699U;
    msg.comm_mean = 182U;
    msg.destination.assign("ITYUBFRTZMGBKLFTUWRMRCONOXTKKIXAMSHPPZPTFLLJPLXPUWZEJGOMOSNCVSYUUIKBRCDQEVXIZJBVCYKGEWGOCGAZHSFAPSFAERVTDABYFHSRHVWRNGIJYDCJCJJTZITOUYHBXUWYJRSEFJPNLGPVEHEDQWSBAMMGDTPDXDKKYNUCQKFWNOEAFHZNKUEQT");
    msg.deadline = 0.3050611500655467;
    msg.range = 0.3444969315928329;
    msg.data_mode = 132U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("EILPDAHPYWHCARBIVUQPPFTXPJNAGKWJYLOKDFBKLFMUDBZGXIYSAMVLGBWVS");
    tmp_msg_0.service_type = 123U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MSVBERSZQOWHZLCFBLQVUNPWLZNKKDTTJCSRCNEOZAZPCZYLWNZFZGFXEMAQYVXGVUUQTARPTA");
    const signed char tmp_msg_1[] = {-113, -51, -71, 42, 121, -106, -66, 26, 25, -64, -63, 14, 11, 115, -1, 111, -60, 38, -23, 62, 82, 53, -88, -122, -123, -83, -78, -118, -20, -99, -89, -106, 61, -112, -119, -61, -122, -91, -42, -58, -115, 91, 80, 97, -95, 40, -20, -24, -19, -12, -22, -62, 88, -50, -20, -42, 81, 126, 30, -19, -24, 96, -68, -28, -80, 57, 121, -81, 120, 11, -69, 79, -40, -101, -4, 109, -19, 38, 121, 113, -128, -94, -21, 36, -36, -121, -57, 34, -70, 10, -85, -119, 71, -89, -123, -70, 72, 76, 102, -1, -94, 19, 86, 9, 15, 13, -104, -126, 115, -44, 123, 104, -71, 25};
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
    msg.setTimeStamp(0.780186076890062);
    msg.setSource(3470U);
    msg.setSourceEntity(123U);
    msg.setDestination(64960U);
    msg.setDestinationEntity(254U);
    msg.req_id = 29836U;
    msg.comm_mean = 176U;
    msg.destination.assign("SKSQNHNZIEDKFGJMDLDFURWX");
    msg.deadline = 0.8095987097252902;
    msg.range = 0.8440183097881834;
    msg.data_mode = 240U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 31033U;
    tmp_msg_0.lat = 0.11814132124160581;
    tmp_msg_0.lon = 0.10007789098903586;
    tmp_msg_0.z = 0.7182039673851365;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.pitch = 0.5326958783543031;
    tmp_msg_0.amplitude = 0.23334886983756065;
    tmp_msg_0.duration = 65321U;
    tmp_msg_0.speed = 0.8765711715531737;
    tmp_msg_0.speed_units = 252U;
    tmp_msg_0.radius = 0.8507993092238308;
    tmp_msg_0.direction = 97U;
    tmp_msg_0.custom.assign("QIHCJRRZBOEYCXMALBQQKMNSVPCXJITAGYDZWMUDGVWSINRXEWZNQSCDGUSSWDOPKLMXRIYGABPJWBGF");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DKJHCEAXEZFDOLNRZPAIBCTWVH");
    const signed char tmp_msg_1[] = {20, -115, 80, -6, 19, -94, -73, 31, 85, 101, -20, -114, 27, -32, 69, 35, 14, -72, 92, -112, 26, -57, 45, 4, -50, -3, 117, 14, 46, -118, -10, 28, -123, -98, 78, -94, 89, -30, 84, 48, 9, 74, 71, -56, -4, -79, -64, -74, 100, 16, -25, -65, -82, 12, -55, 116, -34, 33, 4, -73, -124, 113, 58, -119, -126, -66, -122, -21, -83, -34, 68, 92, -101, -35, 6, -125, 56, -112, 95, 89, -67, -21, -78, -36, 121, 81, 23, -101, 43, 51, 77, 53, -63, 73, -84, -94, 26, -74, -24, 30, 104, -27, -124, 6, 11, 47, 0, -9, -79, 118, -60, -11, -47, 67, -63, -124, 55, 88, -8, -39, 40, 22, 38, 35, 11, -114, 92, -116, 30, 81, 74, 53, -42, -85, 93, 22, 16, -75, -94, 11, -28, 5, 108, -126, 74, 58, 108, 115, -76, 13, -90, -45, -90, 58, 102, -118, 3, -118, 70, -29, -42, -60, 71, 85, -47, 105, 48, -42, -87, -115, -36, 62, -121, 78, -99, 81, -41, 25, -115, 20, -65, -117, 108, -86, -37, 10, -20, -28, 122, -117, -11, 42, -7, -26, -41, -62, -11, -127, -94, 110, 63, -65, 12, -86, -40, -77, 9, 75, -86, -121, -55, -52, 25, 21, 51, -108, 99, -57, 32, 79, 117, -42, -21, 52, -45, -92, -115, -88, 83, -25, 72, -12, 109, -45, 25, -42, -91, -121, -109, -36, 105, 27, 24, 119, 22, -25, 72};
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
    msg.setTimeStamp(0.5374157057918701);
    msg.setSource(58833U);
    msg.setSourceEntity(28U);
    msg.setDestination(50903U);
    msg.setDestinationEntity(228U);
    msg.req_id = 40082U;
    msg.comm_mean = 95U;
    msg.destination.assign("WSJGJVODKQVCGPLTCKJESRRMDHPUDGGEHYGFUYQJNSZAYRXSQBYMYUKZIIBPOHBLCOFPLNUTWDASFXLWVXHHPXPVZIIKVCVDDADWITAOCWRBVIQJEJDEPBGXPMCMNNDUCUECIOANVKXSKEDLAVNHKPIYZLRXZORABWZRKEZXAIMHZBQSBUTYOFLMXMQYULWFASXGKSTZAJMRTVBQUWCGQNZ");
    msg.deadline = 0.798977758171559;
    msg.range = 0.5679086987730692;
    msg.data_mode = 240U;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 23756U;
    tmp_msg_0.destination = 6614U;
    tmp_msg_0.timeout = 0.7946824140589818;
    IMC::SessionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 4044146924U;
    tmp_tmp_msg_0_0.status = 1U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YSAOEVAJFWLRALUDQOMMLGQMOJMGHEWIOPTUDHKSDXIEFVNSPQFMXUZQKGVAWXYHVKGTOLDYWRASSSNSJZILMHVAUVIYPKCCYRRHEMUZDVINSVVNTLDFTXTDEJCDQAAYWGPNQERKIBRBUYOKQFCYNBFNFEPZZXBZXTDIBIZWGCKHJVCPXHKSFTHFUQGQKPOJGJLOKGHARUTHSIMBCOPBNWLIJ");
    const signed char tmp_msg_1[] = {-6, 88, -82, -41, 6, 71, 98, 68, -7, -110, 31, -28, 60, -123, -123, -58, -42, 29, 42, 34, -83, -92, 0, -86, -46, -18, -111, 120, -119, 61, 4, -107, -60, -74, 126, 4, 35, 22, -60, 98, 102, 56, 5, 122, -26, -6, 100, 1, 108, 4, -72, 62, 103, -29, 68, -9, 79, 62, 76, 118, 74, 75, 120, 4, -20, 121, -64, -125, -98, 14, 2, 0, 27, 36, -27, -107, 100, -65, -115, 78, -54, -50, 110, 9, 39, 49, -107, 11, 39, -43, 111, -74, 101, -5, 7, 23, 43, 39, 118, -108, 63, -97, 8, -98, -126, 90, -19, 35, -3, 112, 14, -89, 36, 91, 23, 43, 62, -125, -102, -35, 115, 48, -53, 113, -125, -17, 90, 90, 21, -84, 59, -27, -74, -80, 67, 32, 120, -112, -67, 109, -38, 41, 98, 111, 116, -92, 20, -97, 32, 11, 26, 57, -117, -18, -114, -88, -117, 33, -56, -108, 123, -17, 119, -105, 3, 24, 71, -46, 121, -79, 61, 33, -30, 104, -53, -8, -19, 32, 15, 118, 79, -40, -40, 26, 79, -107, -41, -48, -55, -24, 68, -101, 117, 103, 4, -20, -8, 68, 125, 32, 111, -1, 84, 122, 37, 43, -11, -81, -40, 83, -82, 16, 70, -47, 18, 13, 58, 97, -16, 19, -1, 68, 47, -23, -21, 1, 50, -109, -54, 61, -106, -45};
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
    msg.setTimeStamp(0.9778122418656787);
    msg.setSource(37967U);
    msg.setSourceEntity(24U);
    msg.setDestination(44847U);
    msg.setDestinationEntity(225U);
    msg.req_id = 7533U;
    msg.status = 239U;
    msg.range = 0.5906995689502266;
    msg.info.assign("TSYTQMISBDAUNVYMJZKYUKSUQZXTTFDCZDKKSIVHXZADHKYFOXOR");

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
    msg.setTimeStamp(0.7363574192175659);
    msg.setSource(27298U);
    msg.setSourceEntity(234U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(107U);
    msg.req_id = 23273U;
    msg.status = 125U;
    msg.range = 0.5538482353847346;
    msg.info.assign("XEKOSZPWCTZMMTVZBXSPLMJERHSUGRRWVIEIFQPCDGKWONYADGZTPIDZKIPAXITAAROCEAHWSHONHECANAVQUKGKJPZFUQJKJNFZSZGUYEMNRJPEYIRDFYI");

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
    msg.setTimeStamp(0.28614774650032293);
    msg.setSource(36263U);
    msg.setSourceEntity(88U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(246U);
    msg.req_id = 35122U;
    msg.status = 133U;
    msg.range = 0.4472938505251739;
    msg.info.assign("QEELLIRKRHBOXRIFMFWTHSVKKLWRDWCWZGGTLKAZGQSJFDIKBYJBXPICBVOMYFFRYBVWWLTEJQZPTXHIJMJZVAUJFNUQTGSEUNUGXPAUYTRXUOTTHFPQYHGOSZWEKN");

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
    msg.setTimeStamp(0.07337646790191599);
    msg.setSource(3963U);
    msg.setSourceEntity(28U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(123U);
    msg.req_id = 1822U;
    msg.destination.assign("TTUQCOVQMGUKAXULYAHJGDSJWCWBPYLSBJW");
    msg.timeout = 0.35131027998449016;
    msg.sms_text.assign("IEPMKITBKKTNAPUGRHITKBZHLDDWFILYQAGOFEBRTPDMQGRIVPROTCULSAXHWVHOHE");

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
    msg.setTimeStamp(0.8965892280434145);
    msg.setSource(37458U);
    msg.setSourceEntity(190U);
    msg.setDestination(9239U);
    msg.setDestinationEntity(128U);
    msg.req_id = 61627U;
    msg.destination.assign("MQJTOXORVNFUDCUHOGLJGXNUSVYJSWKKHTFNRUPNATHCOCLUDSKGSZHKYPUYKLDDABIICPVYDFEZQWKHPFCIVBLZDMEJBWRJS");
    msg.timeout = 0.21581745495917737;
    msg.sms_text.assign("CRZEZHUYYOWMKCYGIPEKNDZEFFMSVZHKNBTYEAMPYRQSRZPCFGWXSSIVPVHYTHNCTLUEDITEGNJBGVOFLJVBHWJJMOCSSANGDHMXDJFWEIGTLQEWARLRKUQGSPMAKPVUWFXS");

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
    msg.setTimeStamp(0.7800516491746393);
    msg.setSource(63646U);
    msg.setSourceEntity(130U);
    msg.setDestination(58523U);
    msg.setDestinationEntity(70U);
    msg.req_id = 9078U;
    msg.destination.assign("NVUUABEXBMLSHLPGZKPQWIHAJUBYXTYXGNNJHBIMMATEBTZPTJXACLXIXCWHIDSJDEIYZGCDPFEPVNKUSRVHANPKXRRPWXTIFWFYTSLMVVVZYDFGQHYKMMHVYENBQQCDTOAVUQBEHMWNSONLTLRDGXBZAFDUSWKOAFJFVKNTEOCRWRKOLZGGFOJJSUMPEW");
    msg.timeout = 0.7647981074061625;
    msg.sms_text.assign("JQHZWXCDEHLNVJMEKEQNBIIIRTZFDO");

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
    msg.setTimeStamp(0.6080561486256888);
    msg.setSource(23505U);
    msg.setSourceEntity(120U);
    msg.setDestination(31436U);
    msg.setDestinationEntity(120U);
    msg.req_id = 31392U;
    msg.status = 253U;
    msg.info.assign("QSBNSERQQFVVAYBNRTVORMGMCIKQIVQBMAVEDMYUENSAMWOCUFYVEDPBWWJYKCQDYESRJXLHBUPHRZPCPOGHAIXJCVKEUSTUFTNZLPEGZDJJYSAZCTGWEMMIOBLQLGFQKHVXLMXJFOUKP");

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
    msg.setTimeStamp(0.970621211394535);
    msg.setSource(1769U);
    msg.setSourceEntity(14U);
    msg.setDestination(37365U);
    msg.setDestinationEntity(203U);
    msg.req_id = 47460U;
    msg.status = 151U;
    msg.info.assign("SXGAMHFYRWUIHTOXIBASOVMQZPMLXVSRSDTJJLUVPDNBATEMRKTQBSWOGEWIZTMEVRKTLQOFKHQWETLZGXWNCLLVOUZWZEJSUQTTZOUEYLQASHDDCZHHVIKYOECCQYGQFKMOLUPGJNPXUJNQIKIFCCDCKHHJFSWJVUZJRBAYMOUSDIBLZMRGDYRBDMGYSFPKVAQFNEK");

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
    msg.setTimeStamp(0.5070583399547103);
    msg.setSource(28344U);
    msg.setSourceEntity(104U);
    msg.setDestination(40443U);
    msg.setDestinationEntity(112U);
    msg.req_id = 7489U;
    msg.status = 169U;
    msg.info.assign("MEDCNYHUHOILTZZURPJFBEIVOESIPXJIIBSDNMZYMUGPGRADUXUWKTERUFBKEDFNLUFMDRZSHNYQESDQSLYOSSORVPAJENCWSBWVNKFTLPZEMJQKXJRGYEGZXNBBGYKRAGVGTHQLCOOJWTFBRBFNXCUQHOCAQQCOFQC");

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
    msg.setTimeStamp(0.22243732504123548);
    msg.setSource(17592U);
    msg.setSourceEntity(210U);
    msg.setDestination(45096U);
    msg.setDestinationEntity(179U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.9656859059381023);
    msg.setSource(215U);
    msg.setSourceEntity(102U);
    msg.setDestination(45343U);
    msg.setDestinationEntity(152U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.9913879097520566);
    msg.setSource(32364U);
    msg.setSourceEntity(102U);
    msg.setDestination(60583U);
    msg.setDestinationEntity(220U);
    msg.state = 203U;

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
    msg.setTimeStamp(0.6220156315757316);
    msg.setSource(11853U);
    msg.setSourceEntity(54U);
    msg.setDestination(48237U);
    msg.setDestinationEntity(182U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.5521176833653298);
    msg.setSource(56323U);
    msg.setSourceEntity(139U);
    msg.setDestination(28499U);
    msg.setDestinationEntity(229U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.7709569595102478);
    msg.setSource(45468U);
    msg.setSourceEntity(130U);
    msg.setDestination(56894U);
    msg.setDestinationEntity(65U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.7515049960646696);
    msg.setSource(42666U);
    msg.setSourceEntity(212U);
    msg.setDestination(42418U);
    msg.setDestinationEntity(128U);
    msg.req_id = 36091U;
    msg.destination.assign("UXQACGICGOQTTADFRTSXHRPKGZIVDGTUSLSQYZJMQSGFJUVAOPKBZZDYHBLJPUZHKSPVVCRXPDSDEJVPKLKWFBAGGRJDIVKXVUNWTYFPPPQEYHWSKKMQBAIMNBCFCAVENZGWUXROUMFH");
    msg.timeout = 0.5114960254270131;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.13468499004210133;
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
    msg.setTimeStamp(0.840220767607039);
    msg.setSource(5477U);
    msg.setSourceEntity(105U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(21U);
    msg.req_id = 45888U;
    msg.destination.assign("GHQDCXAQZECVTIZACZOSDNNACDEGRAMBOZFLHAXVLJGZITGFVBFQMYOKQFLNXUPVCTBUEFFAZIBRQYHKWKGXVQKYZRORJQMSYNTWXJMRXYTUGUHTIUCJZVEYTNVPAPKPFNVWYHWPOWLERGOIOJPUH");
    msg.timeout = 0.1963657418504856;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 87U;
    tmp_msg_0.step_number = 121U;
    tmp_msg_0.step.assign("EKYAHEUSOUIWWZGDFIUCLRPENTTZMHXOWOBRSHHFGIDEFJQVEQJQCXPVZQKIEORRIWYDTLOP");
    tmp_msg_0.flags = 54U;
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
    msg.setTimeStamp(0.1044085926216135);
    msg.setSource(8518U);
    msg.setSourceEntity(78U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(109U);
    msg.req_id = 41238U;
    msg.destination.assign("DJIPLUUFAZACQDTMVBPOJNZJUNXJSEHNXSWLPGFFADIFJTRMRZASCNAIJSWSTEQKRLESGCIVYXCNFKCQHEZVPHGZKQAMFEGWJRWNYRABPIRVXOBBYGGTUEMDLHWXHQRVFBNHONGRYMLXQPTDLJCOGXCHWBBMLDTKZTQAFVBKLMHKVMQYOXNSPUOIWMSYGSHEBDCOIJSGNOREWKCDEIRQKYYALJZWEHZVCZKPWTOUZTUIPQXFAMPBYLDUDUFK");
    msg.timeout = 0.004970345844775403;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.19431657098307797);
    msg.setSource(31207U);
    msg.setSourceEntity(168U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(114U);
    msg.req_id = 5252U;
    msg.status = 166U;
    msg.info.assign("ZEPJFUNTEMGJMUDMXLNXWMONMFYTDCRCEYBLVFHQBPAAJYZQGCKQAPONLVHSHKBRRDRTBLTFIAUMQWTBWQTKKNBRSAERXZTISGKAKGPFHRVCRPUSZLOHKPXCISPBXDWYWVEOOAVIOGGNWRUCYLYNHUXFJZAIIFSJGZ");

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
    msg.setTimeStamp(0.8407995487202578);
    msg.setSource(29867U);
    msg.setSourceEntity(223U);
    msg.setDestination(44246U);
    msg.setDestinationEntity(238U);
    msg.req_id = 17172U;
    msg.status = 63U;
    msg.info.assign("VXOYLTYPEVSXKKNJCERRJLZNXHAIRNWXRVRFSDSLICBQPJQXYOTWRDEMMBEPHJZOBKTGQJKGURULKRJIHTIGVHHXSGKLPSUWZAHDEFOSEPKMHFICQELUILWAZVZCGTGHBJDFWDZMCNVBFBLTZNSIPHZLZEWXVXFAPWEMVOGNQCDUGFADFDKYYUWVQHMMYOXKPNMQJIEMSBUFFUJKAQBTLNTYOWSAAGCWYPNOUXTAQCGOYMRTDR");

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
    msg.setTimeStamp(0.27240278057062495);
    msg.setSource(25812U);
    msg.setSourceEntity(127U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(178U);
    msg.req_id = 58741U;
    msg.status = 71U;
    msg.info.assign("QJBLQSCIDWQQAAFYARJJXEAFKAEEOREZBDELRNTXNYUSOBENVKGZFYCYXFRWHCYZ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.9609913662471705);
    msg.setSource(41234U);
    msg.setSourceEntity(155U);
    msg.setDestination(31601U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.8971661986074398);
    msg.setSource(8345U);
    msg.setSourceEntity(21U);
    msg.setDestination(19595U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.4013959399194381);
    msg.setSource(35271U);
    msg.setSourceEntity(130U);
    msg.setDestination(30029U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.08880438819182457);
    msg.setSource(2024U);
    msg.setSourceEntity(135U);
    msg.setDestination(25033U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("LPSTQHLHWCPHYRFSVJNHPNEUQXWGUUKHAZNUFAFBGHLTLOFKQAEGITNPGFXXXIWRCTJDLDJBDCWHJKFLELSJDZAROKBUTEHGBKVVKAQRERCFQULJOHEMODLGHXQRCLGASAYKRVAYCFWIDXUICIIYQQZAWEBMFBGPACZDZOUKVDYIMBISJYWZPPYGDZEINNTRRQPVZPYYMBFXVMDVQSGKMCWXEMUSOSBNORIZJETXTTVPCMSBMTJU");
    msg.description.assign("WRUPNRDHWWNTZDIKLAZULMSXHKFHSWHYKGPAZSLBQVQMSHRUUGCYGWTKHOYVKIIFTPBVXQBCMTMJDVDTDVJZRDEM");
    msg.vnamespace.assign("TRMZKGHLEIMYMHDQXGPQGMWXNEZFMCTOCBWLGZZAKCYWEXPLQJUNQCEPIJNPHTHBTBSGGUVJDEKBANAKTPSHUJZMRLFQCIQJFYGBVHDFFVKOSOAXWFVDDIUPCUFSDMSSNUYKXVULJXMWPOWQARGBZRZULIJWKROOWGEDNEJVOSNVURFLSNIYX");
    msg.start_man_id.assign("EFHLQQWKGELDCYTQFIPUTSERCWFERARZYBSBSPGGQIHTYDGAPGZNIPIDTODEELMNFQTXCSEFANCFR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VMGQTFYRTAVTPMKBOABPDBKQRPNHEBASIZHPDHNDHQADRQXMJKMKCAHNHMAIFTWSSBGXHPWEIGOSLHJISJOJXUSDRERFFLDQANMCFMCLHIXYVJPESBLSK");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 13758U;
    tmp_tmp_msg_0_0.lat = 0.8438471508456921;
    tmp_tmp_msg_0_0.lon = 0.052463268726073875;
    tmp_tmp_msg_0_0.z = 0.31065512775594484;
    tmp_tmp_msg_0_0.z_units = 64U;
    tmp_tmp_msg_0_0.amplitude = 0.9812271470356071;
    tmp_tmp_msg_0_0.pitch = 0.6476425245996948;
    tmp_tmp_msg_0_0.speed = 0.736069056453985;
    tmp_tmp_msg_0_0.speed_units = 214U;
    tmp_tmp_msg_0_0.custom.assign("YEOOVZLGSOFKQAGLWDMVQGFXXHWIYSIFUZSTSOXTLFNWVQFMPCCVIZTNXWRDDOUDVGFR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Temperature tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2797453218561434;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::LeaderState tmp_msg_1;
    tmp_msg_1.group_name.assign("BTZQFTPUYFVEZMWJWLLRSCSCTBTJEVCMJCKHTFPTYINBJKIWEWHKNHMSNRPUDQJLULDAGZASLESQZOAEALVXYLIHOBTPXFIUPYHWXVXMQBJIORISSKFHXXOEXYWZGURQHUNQZCPGKAA");
    tmp_msg_1.op = 105U;
    tmp_msg_1.lat = 0.554041122440794;
    tmp_msg_1.lon = 0.009989804764155119;
    tmp_msg_1.height = 0.47707786574086775;
    tmp_msg_1.x = 0.7925454071119441;
    tmp_msg_1.y = 0.2330992442877038;
    tmp_msg_1.z = 0.6422654496120013;
    tmp_msg_1.phi = 0.9263849373065274;
    tmp_msg_1.theta = 0.387520563528992;
    tmp_msg_1.psi = 0.0065164923027795085;
    tmp_msg_1.vx = 0.017946201440068088;
    tmp_msg_1.vy = 0.1963950985456938;
    tmp_msg_1.vz = 0.12062447218711814;
    tmp_msg_1.p = 0.5306271396761406;
    tmp_msg_1.q = 0.07292168785931896;
    tmp_msg_1.r = 0.32356451897506533;
    tmp_msg_1.svx = 0.3812566824551976;
    tmp_msg_1.svy = 0.8292404465920218;
    tmp_msg_1.svz = 0.8291103079961202;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::MagneticField tmp_msg_2;
    tmp_msg_2.time = 0.39489983847581434;
    tmp_msg_2.x = 0.38298736048607096;
    tmp_msg_2.y = 0.4316855860338953;
    tmp_msg_2.z = 0.08046269333463874;
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
    msg.setTimeStamp(0.9758760387861335);
    msg.setSource(10930U);
    msg.setSourceEntity(104U);
    msg.setDestination(38105U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("MGPBHXSBWTLNZDGUDYPEYOCSKVHILYUASAJIERHK");
    msg.description.assign("ZIHRCTRSJBAFNPPMO");
    msg.vnamespace.assign("JLWQHNVLJUMVDBHGPSZQFCKSLVSNWCCTXOSACBEWGZKJWWQREBIIZAICQDNJGTZYSPUTAQELOBITJPYHYYRFSEXGUJEOKVFXOGGNNPFQUOXDYVMRGTHWAVFSOBMQKL");
    msg.start_man_id.assign("WHCQGBPDPBQNBVSYVVREFUJRNFQVECYGKZZXSJHZDXEBUMYCQVIRGEAANHNHZUMBNPOMOHETWDFMMVNZLSTUBBIRYIZGLKMCFAWSLYWDIQIJEYQGYIGSARPCGWSDLAVBQUOUFKTLPFTCTKGCRJLXZQPWHLAHRIFOOXOJEORGIDBGYPFANQTL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VAKOGMQUWAOZTIORDFEJSCSLNJELMDWYJCWIWUGBNEYHEXYJTJFWKTXOQDGTSGCNPMJKKJVFLXPDZYHXYWKIKYNTPFBAWUUQONRVGXRFCTRUNMDACAEUHETHEFEQXVBACOPHVRQBCBOAZGFNDDGZ");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60671U;
    tmp_tmp_msg_0_0.lat = 0.8315343659656026;
    tmp_tmp_msg_0_0.lon = 0.3520584190804946;
    tmp_tmp_msg_0_0.z = 0.9662777755040404;
    tmp_tmp_msg_0_0.z_units = 15U;
    tmp_tmp_msg_0_0.amplitude = 0.8417744207944498;
    tmp_tmp_msg_0_0.pitch = 0.6974099933404374;
    tmp_tmp_msg_0_0.speed = 0.33590271653211257;
    tmp_tmp_msg_0_0.speed_units = 93U;
    tmp_tmp_msg_0_0.custom.assign("BXNZFPCBPTXLJVFWYSREUBUEGTLTOFKANAVCATRQAAXQQFLJBHPIUKXNUWWSHMFYIPURXJIOVNZWINWYDLQHEDRRTQYMUCUDQFTCNBIDAKGGKHDYDRCGHKGXCOYJAZVKMHQUNCYJSSJPSBFDGJSVIWEZZKGKM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetImageCoords tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.camid = 122U;
    tmp_tmp_msg_0_1.x = 39869U;
    tmp_tmp_msg_0_1.y = 17511U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::GetWorldCoordinates tmp_msg_1;
    tmp_msg_1.tracking = 246U;
    tmp_msg_1.lat = 0.9611995928397791;
    tmp_msg_1.lon = 0.7643495451387091;
    tmp_msg_1.x = 0.054826301115840526;
    tmp_msg_1.y = 0.6341123667470534;
    tmp_msg_1.z = 0.16893909748566216;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LcdControl tmp_msg_2;
    tmp_msg_2.op = 223U;
    tmp_msg_2.text.assign("DXFAKVKDBYGCGTQDDWTFNQKCOYGUSRFUOYAGJITWXATBYWREVKNSRHMIRKMZKLVRGIPEWPIXLYJSQIFWAXWZYNTQCD");
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
    msg.setTimeStamp(0.5859923118024346);
    msg.setSource(6548U);
    msg.setSourceEntity(142U);
    msg.setDestination(9914U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("QOXIXWYSMCQEICBNYZSIFBUDWUAKHRJWBEOGTSQFVMIMYOQUOUPQUOLGKBAYIIFVDXASSCYTKGYZXTSJJWOZJGXZNROUWJDELBPZDUTVGLTORRFDI");
    msg.description.assign("ZOQFSVEEYQVBZJRTIKHTBGNGBKUKXSRDBEAOMKUNTOGJEHDAPBLVTGGXPMHVXCRIFWZEBRNQMEXXIIZCLITIZVYZFHZRPEDNVHWYQPDSPSJURYJBAFAFCHLVQLCUPNYHIZQQJWGSQJTSTWUOUFLXOLSWOHBEYRMHIKEVRWPNFCOXKDUAKNYSEGAMPOQGRCWJLARYCIJYXOFYV");
    msg.vnamespace.assign("RPMJWNHVORDZIUQYHZWELITSKRWNGNCZXOMVFAACXGQITUBMTAGFPPDUNLQWGFIUSUUAWWCKMEFKDERKYPAMJIGOAXZPBJYMXCLDJQLJACJZQTDVYHEYZVVBTGHIHYDNKPVZELTS");
    msg.start_man_id.assign("UPSBXZWGURGCKHKMYKVENPCDMFRDOXWQHQKMSIN");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 0U;
    tmp_msg_0.speed_min = 0.2448892118149697;
    tmp_msg_0.speed_max = 0.9302481438310589;
    tmp_msg_0.long_accel = 0.7074541064980013;
    tmp_msg_0.alt_max_msl = 0.36194897350590705;
    tmp_msg_0.dive_fraction_max = 0.15213651879400159;
    tmp_msg_0.climb_fraction_max = 0.554492111103034;
    tmp_msg_0.bank_max = 0.9644582711167634;
    tmp_msg_0.p_max = 0.5732731948177218;
    tmp_msg_0.pitch_min = 0.8925184156377961;
    tmp_msg_0.pitch_max = 0.5964646540626505;
    tmp_msg_0.q_max = 0.2436070856779904;
    tmp_msg_0.g_min = 0.38077185728520013;
    tmp_msg_0.g_max = 0.31049538667746035;
    tmp_msg_0.g_lat_max = 0.4818442599200651;
    tmp_msg_0.rpm_min = 0.13900124687820237;
    tmp_msg_0.rpm_max = 0.4566377532964331;
    tmp_msg_0.rpm_rate_max = 0.039341045559337595;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5810979389879797);
    msg.setSource(16159U);
    msg.setSourceEntity(237U);
    msg.setDestination(57897U);
    msg.setDestinationEntity(79U);
    msg.maneuver_id.assign("BABRFKGETWVFVQGABIMHLOQBDKYGYWAOHLVSPYLWETHXGXUTXHHICMYODHWRGPHZIZIBISTNCKYQZJJQPDVCXTZVAXZHJUFSDZVWZQVAGPUXSAJAYFPKEFXCVNXQHWMOERBNRRGBJWEIJJOIRKEBFPCDKUPRCKTWZCKPFJOXEDUMSRUYNMNDYCCRSIQLSTOBRSTIWPGUDLJAVALUMHUYKFZASNZDXNCFDIEMFKEEGLQOSGVMNPBQLLTWO");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 62580U;
    tmp_msg_0.lat = 0.03520525788355544;
    tmp_msg_0.lon = 0.2666053063189462;
    tmp_msg_0.z = 0.10825560408907497;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.amplitude = 0.6592887042738714;
    tmp_msg_0.pitch = 0.8161691386029079;
    tmp_msg_0.speed = 0.7375679918995836;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.custom.assign("LFZXGJPZIQCYECGUPYSYRCIYMRZCFIWTFVOTZLRWDTQZWYPMZMVUQNOKDACTEASPVWZYEGWHSZGNLBJIKUCPDTKDOJUXFNKXBOHKVLPHHDMULRUAPLUETRSOICLKZNXDNIIXVANJHSZRQOAAIKPYRSBTXCJNFELGNXTVBFPFQIKSSJOJRUKDAOHTXFJVPQABMDVUEMSREXMOVUYWBLHYNFHQGTBKAHODBMRE");
    msg.data.set(tmp_msg_0);
    IMC::FormState tmp_msg_1;
    tmp_msg_1.possimerr = 0.8690649935357806;
    tmp_msg_1.converg = 0.493195431167768;
    tmp_msg_1.turbulence = 0.8377424811820794;
    tmp_msg_1.possimmon = 253U;
    tmp_msg_1.commmon = 168U;
    tmp_msg_1.convergmon = 194U;
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
    msg.setTimeStamp(0.9144577017235159);
    msg.setSource(52092U);
    msg.setSourceEntity(181U);
    msg.setDestination(27459U);
    msg.setDestinationEntity(30U);
    msg.maneuver_id.assign("MWLSQRZBLGANIPUBZJJCSLNMCHCZYPXNZUF");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.2787318693149796;
    tmp_msg_0.lon = 0.7155124741948657;
    tmp_msg_0.z = 0.7716197638750744;
    tmp_msg_0.z_units = 139U;
    tmp_msg_0.speed = 0.059370767858305196;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.takeoff_pitch = 0.9523795530123856;
    tmp_msg_0.custom.assign("WCVZDRMUGKXCWIUNYSJQHUPEXQFCXRBGTKDXRYWYLIJCFFLHPTXSUNNEJJJBLFGZMTGEEOEAWNNOYAMBPCXDOGZOAJADMWAHITIKHUJXALTMSOQEKAARHWAXRWYBPNNZRQDCRPLHPNFWJZSWVMBOOFYHYDNHCTWYLKUZTGSVLQXBEQRUZTIVSUNKBVFPSZBOHGJDDQDUQYBKEKCJLVIEMVSMF");
    msg.data.set(tmp_msg_0);
    IMC::DevCalibrationState tmp_msg_1;
    tmp_msg_1.total_steps = 143U;
    tmp_msg_1.step_number = 185U;
    tmp_msg_1.step.assign("NDIRKCQXHGNPYDFRKQEMXRZOLWZYCMQKLCJXYLTEKNFMZIAQKPTAECTVLCURNBASNNATZYYYYXUALJKZUQQHBOLGMJSZHYAIAWIEIMHFUDZKVHTPUSOZBXGVIMGETJVPWBUMREWOSVPKWUUBAVFSDHTXTDOICGHHNRBWQFPRIVXOHJCYFSGESBFCVNNFLWRPDPLDPEBGXCYU");
    tmp_msg_1.flags = 228U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GetWorldCoordinates tmp_msg_2;
    tmp_msg_2.tracking = 187U;
    tmp_msg_2.lat = 0.5509513881279048;
    tmp_msg_2.lon = 0.6465546216481133;
    tmp_msg_2.x = 0.8035133087976103;
    tmp_msg_2.y = 0.027073668101487258;
    tmp_msg_2.z = 0.34467523296842306;
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
    msg.setTimeStamp(0.46554454944296497);
    msg.setSource(14710U);
    msg.setSourceEntity(229U);
    msg.setDestination(41734U);
    msg.setDestinationEntity(252U);
    msg.maneuver_id.assign("NBOCKVNTPGALANLOW");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 47155U;
    tmp_msg_0.lat = 0.6635182156280218;
    tmp_msg_0.lon = 0.7529823910447674;
    tmp_msg_0.z = 0.28699305628857363;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.3807232457823515;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.custom.assign("IWDNXRMEATZEQDFUCSKPAPXAJBILYECQOGBUVFIJLJDHTUEUMSWUTAJQGPWHHKUEQAWDOORJGPYSCALCISHQKRVVXVMNXVDHBYWRZJURJQLWWFBMEWZGPZCZEYYHMNAM");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("NZFTZSGELLMESAAPEIEPIMPGZSLNOCJ");
    tmp_msg_1.visibility.assign("UHFYNLHENCJSESEQTZMJSWCIBQAENGYPRIMYAZDICAGPQHBBUZCJWPNSPMHKSERFGXQVQRCKWSDINZJDHGDTZKADOGPPYFVVBPZLQAUMBDUCWSFXBOVEOWJXIVARHNTLFACFZKXMVHXEOLDYXVOBAXZGSYRZDVHUDQMCIJX");
    tmp_msg_1.scope.assign("UCKLNKTPACIRASIVXNXSBFZITEGRNENYLEQHDMODJGRRZFZCTKHUXNRLNINSPCLQEOVKFYYKJTTQDJGPDKVZXXHXPXBWUGUAEZPQAIWMFNQBAHDVMWJURQHJHWBXMSJCGOWFYBSEKKJTOKUWVPILTSPCRXEYCGQSBQFGZIAZBSMYJWMOUWRTITPLJLIUHDYPS");
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
    msg.setTimeStamp(0.46790163581787425);
    msg.setSource(44365U);
    msg.setSourceEntity(138U);
    msg.setDestination(12828U);
    msg.setDestinationEntity(72U);
    msg.source_man.assign("ZUYMEACPPTHYFEXUOVLINFDYSMVAVZPWQTLXMIBBWBCSZBTY");
    msg.dest_man.assign("TOUPBMLZTWHYUQGUSUCGFFPFAVPKDIQZPYIPBYNXDMVEMHRTWDKHEFESSNSBJPICLRAGURQZBXCSWUJEYNAARNFRYKGXMDZRWAHVBAOHIAPIGCMKLSQSYTJHAZGFIRDMWQAUVWKROQMONFTGFI");
    msg.conditions.assign("UQHGJEBHZENMODKOVXVTDVOQHHHPTYALUAYALMVUUXSJYMJUKQOELEGGDCKNXPFWXERZACRLWTQUAWDBYBYGSDFHHUGGTICMNOLOKYNEWTQWVXPIVYKSYDISLWQJJMXSQCCZTENRNRBZXGSKIRSVTOFIZXHJRMNLZPVMVAFRKXOTEIYSUHWPCFSAFBPFODNEHRCAPBZPDQNZBWUJFMALXFRALWIRTSUGCJCDTQJZYKBWDMM");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 65016U;
    tmp_msg_0.control_ent = 221U;
    tmp_msg_0.timeout = 0.6688016274935662;
    tmp_msg_0.loiter_radius = 0.8187660711662047;
    tmp_msg_0.altitude_interval = 0.17363015346956268;
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
    msg.setTimeStamp(0.6009623193218823);
    msg.setSource(13147U);
    msg.setSourceEntity(95U);
    msg.setDestination(30187U);
    msg.setDestinationEntity(115U);
    msg.source_man.assign("MOOURJPYLCERMGTXEDDCIZVHPJNXTSTQVQUINGJGIHCJDETTAKKYYGLPBNJEFSSWCPEJHXFGWXRMZWPTZWPSOBBCREMXRIPSEHVWBVXLLKGELUQAQBYQOYHQMOALZRQXLYGANWBQUZFFTNOVLNOGFFCOXRGCVSGIURFZHVJXVBJAFKBNPLZUF");
    msg.dest_man.assign("QYBMGQLMRHSCRHQSBLOCTCOIKIEGDXICYENPQYDOPHHBYWUWERZAEATHKPNKXFUZMYSEHOLKBEAAXHFKKBVRLTYLWFRCZJTXHNOCPMXQSDXGVRDXHJMNCSGVUTVPFZDFOFOXNEQCIJWFLCAXYIZIUDVEMKJBSDOMSDGNCRNEULAPWZVLSYUPTNYVOQGALUQYHKDREPIPJBRNZZGJVKQGJ");
    msg.conditions.assign("WOXFSKSDLXEWRKETZWKAMQVKAKKAOVOYYTCVYBHPKMCINWEVIUTWGBYUHLDQJDBTYNQCTCVBMHGJMKPBAFTZTFRQIRQDUKMAPLMSUOEFSEIINYQZCNAPKNFWWF");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5256U;
    tmp_msg_0.off_x = 0.5654062459319174;
    tmp_msg_0.off_y = 0.9326465667820468;
    tmp_msg_0.off_z = 0.6392873625882433;
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
    msg.setTimeStamp(0.34852291887343256);
    msg.setSource(10886U);
    msg.setSourceEntity(163U);
    msg.setDestination(22240U);
    msg.setDestinationEntity(93U);
    msg.source_man.assign("BDFKZBXTLSUZSLBNMYPDMKNTUEDDCHZ");
    msg.dest_man.assign("MZOSRXFVLTZZDLUILICDJRTNJXHQGAKUPZLGGZDVANXNBQPUCKRJGVEVMYKABPSWSNKJPFTVIWEHQMIOBEBQYCYLTJPNQZAIEDLKUYIHRKSKICODYHQOMVOMNTNKBYAHRMVFCWXVNGRCOMFFHRAGZDFYMTBRSEDLUUVJBKYSYBWFCRWCADFTWOJP");
    msg.conditions.assign("RYNCBHPILDQOLZBXRWETLCXYAVIURJFGZOIJEUUBEFKGMDKNQVWUNMGYAQCCUVOKSEYEFJKDIRZWAHPRHYSQDZEOAQFJRCFONXWICLSTUBWBBNWVASFMXDRSGWIWYGLHCJSRWGHDZQBEUVEOBTKOZHKMZKPJSTOFEVIFYARNIXZLYPYLZQVQATNOGIV");

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
    msg.setTimeStamp(0.6878036226890601);
    msg.setSource(2409U);
    msg.setSourceEntity(15U);
    msg.setDestination(4237U);
    msg.setDestinationEntity(187U);
    msg.command = 180U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OHBXRFPRBETDJDLEDTKC");
    tmp_msg_0.description.assign("FSNIGAVBSEJZMHFNRCDETAROZUBZPQYYEBPDKXIKTUGLPMNJYWDMSKYXUSAHFWDZPSUYGHFIQXNJLTXAPXGRLIRGFWTENKKHCQVIRTEQECITBQNLOAMCYSJLDEJRDKJXCYQTMVIUQAKOXNGNWFWMHDLJAVDCVCIMPBQETYERHWSXFOYJURGOMRFPKNZCSTNG");
    tmp_msg_0.vnamespace.assign("YSRRGJOHUJFMPFQLGTYNFGJZDAWDUFBAFWPLMTFSSMNCTLRKLZJSXACVNZEECXNZWKZBLIIKRVHUSIDYLWRIXVNVXLXTSJHMWCUHAPCPMVOTKRYLDJPZBQCOOVAFWPGIYTHODEIZSQE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NGZTDCTAVIRXJJYRSUMTKZDMAPOXJDVSZYHFZNYQYYXO");
    tmp_tmp_msg_0_0.value.assign("ZMHGDNSXORJVMJYKBPLFOUKILARENLHOMNUUJKEEQLHPQVOTCLXUFUPDVARIBJNFJCBVCJPBGYRDKHTBLNZTIESXNDMFCESOIXZVZPZCKGWFYNRLIJUXGEZAPRUQYXGQYMMTKFDIWHPDJKCLNAGWJWAHSVTYVGOGABOBPSMMFVXEQIMVSZEWHHXDWWTBIJWLBSGLUDQNAZYQTAHNHDAKRKIPCOCFRRXAZTTSYWEYFBOWRSCCOQESIGTKVPUUXM");
    tmp_tmp_msg_0_0.type = 197U;
    tmp_tmp_msg_0_0.access = 84U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CVUTMDFAARWENTMDULOJYJZBWIGIWAYFLYLXYJQEMVYMHTKGAMZXMDBVTPHMOPSKDAEUYSISRFCGDZXOBLSYKEUPIRUVQRLCDCGITCXIFDSVDGNPFLPQPESZFAEGWQUJTKNOGZAKHDWDTNAWHAECXRHYHZVLXRJZNMBFINQOXJBNSRLHOLWVBVOFPOSCIHKVINUZTC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PYUQZNWJNIHOY");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("ZDXNLZQPAKJRFJOSBWAFSUEHMYWFJNUCGHXSOWCQINFQFDGCTWOVXNIRPIXDHUWCBQIKXAOQBYVPTJXZAYWOAUHQNQRBTGRDJYA");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("ZZGIZAFUPKAJKKVXIDAWRHVOPYBMPVTQRIJBLTZDJNNEDGUSXORTCPNVHIYLNCOFUJMPRZWQQGQXLVXKEKSAYYDBBFLAI");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("XWTPKYUQSDPCTTZIKJCAWGOKLJTKORGVBMVKVCKNYDBQLVDFJAZQACSWVDFUYQAPNAZYHUEOTDXXGIMNLQRTSWVSGJYIKJMAECZUDPFWWORPEBMOOFXIBSMFOHQIHDLGUECQLCRYTGWJVCJWAXJDTVPSTFXILFYBZGLSMRUWJGEOZOAIRHFNHFENE");
    tmp_tmp_tmp_msg_0_1_0.description.assign("UOYVLPVPDBDFPPADCLOVMRCNXQHFKMHWPTXAIAZNJGJSFTPTQLWESZGOHEGIENKNTEZPVUXMGBXTCCNEVJLGDDIXIFOMTKBBVWIQTVUTFWLKRIZLNSZPUAUQDGXCVYKQYNZABOHPHRBVQDVYKSLWXITAQRLLUMERHHHBMHGSSMAIAKOQSMDGONUUJAEJQFXRNWSMTGSFJB");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.13237373299142152;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.6668499869789678;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.9459555109594018;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.00986049864683558;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 23836U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.6476812107438952;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 22723U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 4580U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.19921187391422046;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UYHDHVGLRRBWGSXQMARZDRFZUDQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Event tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.topic.assign("WEIRAYGWSSJMNEXFLZCUKLQUQNYDKFGQCRHRLTQCYMWUAEEPCKOBIYHZLFAXMVDMALRYGTCDZTDJWFCLZYVCRSUAJUQBHOVKGMSERZQIPNNXMEUXFTKSBXFQGZWZRXLOXRLUMOTSUSYEJZDJGWS");
    tmp_tmp_tmp_msg_0_1_1.data.assign("LBFKPASBTMVEGJXSDDOPTTVMRVOJTJDIGCKKDFNALKOUILIQQKOWGEXKPOBPBMOIHCJPCWLMWRDVKRMSZUJWVPVCLAPGGFUZKUDHESDCTXRJH");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::TransmissionRequest tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 40752U;
    tmp_tmp_msg_0_2.comm_mean = 53U;
    tmp_tmp_msg_0_2.destination.assign("ZTQHUZYWTCBRVKDXUWDPNCMXNWOMEUHNVSCZGXGCUSRONYBDDYABWHYWLICKGLVMSBFJUKHXTHSHOHSAJP");
    tmp_tmp_msg_0_2.deadline = 0.15472264817732173;
    tmp_tmp_msg_0_2.range = 0.4754129365426588;
    tmp_tmp_msg_0_2.data_mode = 211U;
    IMC::Dislodge tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.timeout = 14820U;
    tmp_tmp_tmp_msg_0_2_0.rpm = 0.6264196688924017;
    tmp_tmp_tmp_msg_0_2_0.direction = 68U;
    tmp_tmp_tmp_msg_0_2_0.custom.assign("XSWHTNAGXZJTDWRSYPLPEESSRFNGUIZHGZFY");
    tmp_tmp_msg_0_2.msg_data.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.txt_data.assign("VHCBPUYWEKCQONTWKEHZVBBJHSJCXBKJULDXTQMPZZWYKCYNODBUHUGCGINICJPXKSNPQAVAYEXSOMNSZIGTEYDJOUWOVLMWSDQNVCLOFMINBHBLOVBQEOKAGMASUHFNXVPEXSQIFPVEJHETZCZRAZTXRPXREROAUYZAMCUPMRFFYDQMFNXFQMWGKXDRSIGVSHVZPTLHKGQHRJGPALJIRWYTRWFSIQBABGROIJLUDD");
    const signed char tmp_tmp_tmp_msg_0_2_1[] = {-99, -23, -52, -32, -101, 104, -15, 44, 61, -77, 39, 92, 59, -36, 112, -37, -82, -119, 54, -122, -32, 56, -17, 112, -50, -64, 8, -7, 29, -84, -82, -65, -52, -2, -68, 22, -29, -65, -54, -119, -6, -50, -82, -116, 59, 45, 100, -63, -112, 118, 78, 23, 23, 82, 45, 56, 65, 3, 0, -69, -84, -32, 82, 55, -124, 81, -23, 67, 16, -70, 45, -17, -2, -114, 33, 81, 109, -20, -77, 19, 54, -66, -45, -96, -60, -126, -76, 93, -2, -34, -112, -32, 2, -74, -13, -86, -115, 13, 5, 39, 27, 95, 118, 63, 33, 111, -89, 75, -87, 20, 93, 69, 23, -55, 80, 90, -11, 57, 54, 23, -115, 126, -56, -85, 74, -100, -62, 22, 7, 79, 101, -21, 54, 88, -104, -91, -25, 63, 5, 57, -9, -47, -115, 124, 5, -77, -19, -80, 51, 117, -26, 22, -64, -74, 51, 60, 83, -112, 76, 73, 97, -32, 35, -111, 112, -26, -127, -77, -58, -44, 126, -125, 37, -32, -80, -50, 111, 116, 7, 109, -90, 71, -41, 70, -58, -3, 122, 62, -47, -87, 58, 71, 6, -119, 64, 0};
    tmp_tmp_msg_0_2.raw_data.assign(tmp_tmp_tmp_msg_0_2_1, tmp_tmp_tmp_msg_0_2_1 + sizeof(tmp_tmp_tmp_msg_0_2_1));
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
    msg.setTimeStamp(0.6034439111258917);
    msg.setSource(48817U);
    msg.setSourceEntity(35U);
    msg.setDestination(30549U);
    msg.setDestinationEntity(57U);
    msg.command = 113U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NHTSYMXDJBPEXXMEAKYREANXVHOBHQHCTI");
    tmp_msg_0.description.assign("VIIHNJZIQABMEOSKYAZLRVLLHLNDSSWHEQPXVKIHTGHSYOBKOQRJTTJUCSPZWRCXBJLNYEGMNTXQWBDDJUQCEGVRACPHMLSEYTFPSFZZQUBTGATBKQPWIERTBBMFUVAMHUYZYVWAIEEFPJRJZOSM");
    tmp_msg_0.vnamespace.assign("XUTGEIVYUDRFSBZJSTAIJCCJQQDKMITAHAMKTDRYNRCHSIWOFNBAODVLXSXQSJNJNAXTHRYVIVEOIWLPQBOGENCJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DYKWVGMASYGRSMIEDDQVPKIZCBAOGGGKEZGOOVJ");
    tmp_tmp_msg_0_0.value.assign("KMFMLFERDXTGZQJUGOBGYGPXDHMICSFKXYJEHYIKHFTNGSRHNVOZAIEUADUWYTKHMHDHQNQWGCZATVSXCQPVRJYJTTACDNMTODPILBJOICHUVUOTJPNAFKDWXUCSNPKBZOVQKXWBFVYPBINMRWQUCPBJIXWRAUQBWOQIMPEJLJGSMRRKMKVYVWCNOR");
    tmp_tmp_msg_0_0.type = 22U;
    tmp_tmp_msg_0_0.access = 123U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RZMDQTZXYVLDGLQDTBJFAKUOYGPIEAABYNHIPUICJKUJXBLNOSVVXHYCTDHCNUQR");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ATOBSPFJCTQDXMOPEDAXOKZEFHJKQRAZCEOCNHJAULKTDUM");
    tmp_tmp_msg_0_1.dest_man.assign("YOVDEXMDCHJXTSOFZJSYEXVJNUWCOUFIJFDKVKIEWBOICAJVEWQHIVVPSZPYBOJULFIRHSLVYPOQYRDHEJWBLTPVSOWTPNJNINAGDVUX");
    tmp_tmp_msg_0_1.conditions.assign("PNMTXFSXJEFAOKHVAXBVGONGSDWIKKQSFILFDATIAKTVJRFUQUXXCIGWZCOCLNWRASKSFUOCSKHAPYJMTZBDRHTEGIYVQPGMQMDPPUMZSVRXLDWPYJVMRVOOHRNJBZJZKB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Sms tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.number.assign("LNRCYQRKKOUQCAPHGNEJCUJPGYEZIYIQKZKHCMXFACBVHJWOAHGWLLTPDTOGVATSSYKYIIZDXAWHGFEGTVDNTSERXPLWOEAJFUKIZLBQZFUBYRKPRYYZPHBMDWYWKNSSJPMTUWKBPCJBFMQFEPQCVDXEQXGMTEIRBCOANDVJMVERMIERSL");
    tmp_tmp_msg_0_2.timeout = 965U;
    tmp_tmp_msg_0_2.contents.assign("ZFEIQCIFRBACEGIUXXJTWZLNQOOMXHWAMQEVAJSJMOQVCYURWRZHNSQRYSIZMISAWQVEAYIFPYHFLHXEITPZCZH");
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
    msg.setTimeStamp(0.16265227586755138);
    msg.setSource(58450U);
    msg.setSourceEntity(123U);
    msg.setDestination(2194U);
    msg.setDestinationEntity(107U);
    msg.command = 83U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZSKVPISOAEWSTPMLUJTDXNMQNUXPPMTJNEOJPXETZSRHFMCFKNYEPUTYJNFZHUYAHCFHDIIQJRBCTHWVOOWLAVDRUVNGULZECGYOFCGEZIZKLXOWMHBLTYGZBAWYWUWQZRQVYKHDABUBIUIVQVJIBPLXIDKTEFCNJBSLP");
    tmp_msg_0.description.assign("QPCXCYSGBWNUEYTQYJVKMHBUTLFWUPCFPXREDMGHXBGQUMWKNEUPZOVIADFLXOAZGGECLKSCMJJRUDFFXQZJGPFBAUKVZTXHEIGIHWQYCMNWXZNOYDRLWEUQHSJZAIDOSBIMTAOLLSVMDRNSKVDTMHILJHHPADSVONEKPZZFJBYRCSV");
    tmp_msg_0.vnamespace.assign("HEALOKDUIDBAVWHFEWGWEOGIACWYDHDHSNZPRZNVQZUMHKVTUCWVEZHMDSTDASBSFCULGXZIMMLHNASTCWMMPIRBYBALDLTAOPCLVLQXPRKILOYRNXUVXEBKENYMBFTGQZCPGWJ");
    tmp_msg_0.start_man_id.assign("RMSGWWSNHTGBZFFYQVYZADFOMYXIUDVVVKRYJPDPMMBZWLFZTQBTRXKBNGHPDFJIEQNENHUQCLVGVGQJEMBELOARVOKDYWJZHOOLVWVWXJMFSISGCUPTUKM");
    IMC::FollowSystem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.system = 33793U;
    tmp_tmp_msg_0_0.duration = 28003U;
    tmp_tmp_msg_0_0.speed = 0.004954096849310474;
    tmp_tmp_msg_0_0.speed_units = 55U;
    tmp_tmp_msg_0_0.x = 0.3768629681634649;
    tmp_tmp_msg_0_0.y = 0.04309357674912795;
    tmp_tmp_msg_0_0.z = 0.2576316358565919;
    tmp_tmp_msg_0_0.z_units = 30U;
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
    msg.setTimeStamp(0.9008607436826991);
    msg.setSource(37135U);
    msg.setSourceEntity(239U);
    msg.setDestination(39431U);
    msg.setDestinationEntity(6U);
    msg.state = 148U;
    msg.plan_id.assign("GVXKFATGLJYNKLHPPUKMMQBSDPOHTZCUWMVETXWOTXULBEEZOPXNJTZVFNEMNRSFYSWJGQGEIGWPFGIK");
    msg.comm_level = 30U;

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
    msg.setTimeStamp(0.33834261053015335);
    msg.setSource(47983U);
    msg.setSourceEntity(175U);
    msg.setDestination(58915U);
    msg.setDestinationEntity(207U);
    msg.state = 173U;
    msg.plan_id.assign("JZRDGCTHFCWTGYGQWDQVDJNURXDVGKRUIJNQNBSKXALCBOOUUNBUYQPHPONGMGIYDOUOHFSPSAVIDKPEGHLKPZCAUJCMXIPZFEHAKAUHQP");
    msg.comm_level = 112U;

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
    msg.setTimeStamp(0.7518613541589836);
    msg.setSource(64665U);
    msg.setSourceEntity(210U);
    msg.setDestination(10268U);
    msg.setDestinationEntity(153U);
    msg.state = 194U;
    msg.plan_id.assign("LEGXEGASTKORLOLDETKCVVBGVYRGIDHRRZWZQABZMBWPEOVEQNCNXOFDZJKCYHAYZFIIWKXVCJQBQQOJCZPMAKKVCEBMLNWJEWSRFYVUNJNWSCLTLYHGBZJLPAWLVREDM");
    msg.comm_level = 64U;

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
    msg.setTimeStamp(0.8722702745793229);
    msg.setSource(23415U);
    msg.setSourceEntity(223U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(60U);
    msg.type = 52U;
    msg.op = 205U;
    msg.request_id = 15818U;
    msg.plan_id.assign("THKUURDXTBRUQSOOEJMFBBIDBATWYUJGFJGSPEVNOCJXLHQXLEFNUCDHYGEPBUIVOEDQNQGSWVTAKJLFVQNNCWTCJRXROKICNEHWIPAUFHMHWLAMHQDSYUCAHYDPYIXSFBDBNPLZYXOTCBGFVKWLXZQZKYCUQCQMAJOPZVREESRWEZGSAOKMNSBJDJ");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 88U;
    tmp_msg_0.period = 319180053U;
    tmp_msg_0.duty_cycle = 227314587U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCDQQRJIZCKUHWOTPKHGANEZTCDGVZQUHOSVIPTZIPUJIDSKYJOHTKMQSLWPPFIUOLQZNBDPMHELVTJGGFBXSGSVLDAFLPKJGOYMNBRREAUJWMELNYYOHFQRKWRETHKCFBMMCQEMYIMAVJWDSQXJTGGOCUVMIVFKYMULSHHCVWPUWAZXCIVDXPGZQAROYUSXVTFUSYADJXYIBXNJAE");

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
    msg.setTimeStamp(0.416644264857181);
    msg.setSource(3472U);
    msg.setSourceEntity(62U);
    msg.setDestination(42219U);
    msg.setDestinationEntity(190U);
    msg.type = 110U;
    msg.op = 161U;
    msg.request_id = 36735U;
    msg.plan_id.assign("RPKPGVOJNSPXHVBMYYNPTVKUZXKBROPOZAEGXTQYDOAQKLCEKDXMBMGSTLPNXAFJGFFPENLCLWJMRUZBNZWVVXOCFTGQZTSYABHYSNVEFEZJZXJHJBITZSIFVMDKETTNGREWQDHUZRBRMQKHSCFGMWXVJNYPCUATAWLQHHNDWHSIWMJHKHCGACSQXQKPIYMEWCUEGOCIULUUDATOLNIFYYDBVRDKDUEBFQRFJLIJMBQOLR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HPWDWXLOPSGUVJJQLDURWCVHRMPUHOUFQSPGRKSLIDCYREYVAMNXOYIDTGSXEXYHBSNQTXTQKXIXBSMBUBUWTJEZUFJZANJOWEDYCDRYDXWKVVOVBPHJHIKVDMEEILZUZHGGMRMFSUAYRCPNFBOWMCJFNRTETAQLFTNFZPPTOKBYFEWQBHVCMNWCCQZGKAKEQQZXKSGLKRWKIJRNMGPPNIOMNATQGGDOILVLJFCEZSAIOSBVLIBUAYAHLAFJX");
    tmp_msg_0.value.assign("ACYWBSDGLIFNWQQADPRBOZUFIJDEYMWRMVTBINHJIAVGEOJSQRGKOLRCDYUPEOLGLNJBTGNUVBGGELSXPMHZMHUFYEFBQMJANXGBXZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FPIQZEFNMIYTNEPMPZNYHPUROGOGIREBULCBSJCUFNOSJPGJFZRZMCXPFHOWHGUOHQVVODWBEENWTKHXCGUKQKDZENUMAUVEURSHTVIBFQQWAYVWGPGXMGDDVHXVYLBQCWSJQXJKLKTADBFXDRPSALZTLHBICQFLDBNWQDJYLSSTNPAJWAASLXBLCPGTODRFFNUVRJKYKMQCRRTYIMWZKHHZN");

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
    msg.setTimeStamp(0.6702752785210621);
    msg.setSource(23900U);
    msg.setSourceEntity(152U);
    msg.setDestination(61315U);
    msg.setDestinationEntity(86U);
    msg.type = 18U;
    msg.op = 167U;
    msg.request_id = 1485U;
    msg.plan_id.assign("LSKAYYQYPRXTWVFBPHHLLRMJPIVSZZBXZFMWSRKDVEQNYMDPEAKRTPMPQXHKWHNPRCZXQGJAWMKHHOKZUVMYESCRKMEGABNFNHODCKDALMMBNIWRIVYT");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7171059775916255;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PTMZHLEEBEGBFLSXDXWDAQIWREBCTKSKOCUOZACMQLVEEQRKCFYQUEGPYXRQJJTIYHMNVURYZHSSAPLQKLFHTJUGLDWRBABWHXTYRJDMEOAHNAJWMBWCCHSMZXSNXCIYHXUYDRIGANUYLZPIIIJNGNFMYGYVOPUSNUZRDXIGECVKRJBMNZJTNKOMVHBVLOAUFWFQTOBTOMQASTGQKWDFVDESCJFBPGKZIRFF");

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
    msg.setTimeStamp(0.4679579196492176);
    msg.setSource(38318U);
    msg.setSourceEntity(103U);
    msg.setDestination(36381U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 49450U;
    msg.plan_size = 1982243226U;
    msg.change_time = 0.4911702258150118;
    msg.change_sid = 25707U;
    msg.change_sname.assign("QAVIWLNAWSQNJWVLMJZSAEHKPKEXQMPKCLFXSKOCIBXNYKOERWJWNLDEUIUDHBMFAAKNKSNTVJVWC");
    const signed char tmp_msg_0[] = {-11, 9, 58, -2, 9, 82, 105, -32, 25, -6, 73, 70, -55, -12, -128, -53, -90, 52, 42, 45, -38, -24, -108, -120, 42, -36, -60, 102, 72, 4, -63, -16, 18, -18, -40, -128, 68, -115, 88, -30, -111, 62, 11, -97, 42, 44, 108, 111, -32, -115, -40, 66, 69, -40, -41, 116, -70, -83, 2, -1, -83, -6, 18, 114, 8, -45, 86, 21, -61, -89, 32, -74, 2, -12, 16, -54, -25, 45, -40, -16, -123, 15, 75, -113, -58, 28, -128, 72, 75, -78, -93, -3, 117, 2, -125, 14, 61, 101, -6, 114, -31, -106, 71, -29, -13, 111, 88, -95, 87, 38, -14, -63, 66, 46, 39, -25, -37, 119, 7, 32, 103, 1, -82, -18, -104, 119, -61, 96, -125, 95, -70, -81, 42, 76, 96, -47, 59, 101, 24, 33, -83, 16, -118, 25, 89, 98, 70, -128, -84, 126, 50, -50, -80, -119, 103, -86, 91, -109, 15, -111, 75, -67, 77, -6, -48, 48, -107, -20, 83, 33, -41, 75, -120, 41, 97, 68, -112, 38, -8, -1, -43, 45, -45, -24, 29, 16, -16, -34, -43, -96, 105, -78, 34, -31, -56, 62, 84, -69, 87, -85, -15};
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
    msg.setTimeStamp(0.43585764092617885);
    msg.setSource(39084U);
    msg.setSourceEntity(38U);
    msg.setDestination(1103U);
    msg.setDestinationEntity(7U);
    msg.plan_count = 25542U;
    msg.plan_size = 3554328232U;
    msg.change_time = 0.28906084612556115;
    msg.change_sid = 49233U;
    msg.change_sname.assign("DPFAOBAYHNBJTZVTGCLEMNGSCLNGPAMFXVEWVDFBOLMBVNPFJAOPGRQWMRPKBSXKWOTWAYYEQSQRHJXGPXXYTIISQRREUBDJNDDDZTUJCUIGUWAUBMZEMKPQUAOXHSILDTBSPNEHVNCBWQXIDSMOQCKLKMWZUHRCUPIGHFHYCEGLRFXIYQGJRXFLVIJZL");
    const signed char tmp_msg_0[] = {-76, -104, 100, -3, 46, 114, 67, 62, -124, -21, 49, -44, -91, 114, 3, 104, -69, 23, 52, 80, -4, 50, -46, -105, -82, -116, -104, 56, -61, 83, -113, 68, 95, 4, 56, 18, -112, 120, 18, -20, 109, -54, 12, 107, 1, -88, -33, -123, 92, 93, 68, -105, -24, 43, -63, -11, 106, 62, -47, -13, 42, 92, -84, -27, -97, 43, -56, -67, 52, 57, 19, 69, 12, -126, 47, 75, -18, -4, -51, 41, 106, -110, 76, -6, 45, -9, 120, 36, 38, 85, -96, 125, -18, -30, -110, 30, 84, 111, 84, 75, -124, -21, 41, -122, 61, -82, 68, 109, -69, -108, -95, -67, 50, -9, -44, -116, 59, -6, 120, 81, -118, 83, -65, -47, -15, 107, -100, -128, -111, -44, -98, 95, -26, 61, 1, -21, 61, 30, 107, 73, -48, 92, 21, 73, -16, -53, -3, -45, 22, -115, 123, 60, 46, 5, 33, 54, -46, 22, -124, -88, -68, 41, 90, 80, -95, 101, 68, -120, 111, -116, -123, -18, 65, 8, 37, 29, 51, -95, -95, -115, 7, 87, -91, -90, 101, 23, -102, 25, 81, 114, 54, -46, -49, -21, -113, -106, 30, -9, -49, -124, -89, -84, -8, 1, 33, 123, -90, 27, 6, -49, -89, -55, 55, -97, -18, -98, -100, 102, 36, -82, -26, -74, 43, 98, 34, -110, -22, -90, 90, 85, 30, 21, 45, -17, 77, 18, -49, -69, 44, -88, -4, 88, 23, 61, -65, -117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CBPGJRJIXVTOEBFMBQWXNGOIRXNNRQDKJWXDXPXZGKSJUAXATTFLCPSRDEWXOHDASHRHABBPMNPSCYTUMDETGFNUYOFASYMANVWIJYLVKCYSOGSTSPJ");
    tmp_msg_1.plan_size = 14428U;
    tmp_msg_1.change_time = 0.3102070620535661;
    tmp_msg_1.change_sid = 51299U;
    tmp_msg_1.change_sname.assign("JVUUHRIERUCKCGQTLCZEKWMZAFNAESXTVDRTCDWDUMBNLQPSFURXBPVKOBXHPLGIBRQZGMAJQBHPVUGOMOYZGBQYACPXZOIJXCTQAJIBTKHDFUSBKSAGFLNPUTRIPTKKLXOQGYXRBXIKVQQHMWERKLVFJJOPSOPWJSJMAVDVIGEEUDOLJFXDWEZDYWLTPALSHRTCDJVHVYYNRNGIHYFICYNAMKFBOFIU");
    const signed char tmp_tmp_msg_1_0[] = {40, 112, 44, -96, -30, -54, -18, 109, 79, 82, -73, -75, 45, 17, 30, -56, -66, 89, 120, -87, 48, -87, -23, -57, 74, 18, 19, 52, 47, -68, -99, 98, 49, -109, 2, 110, 89, -105, 10, 63, -20, -87, -10, 61, -58, -96, 33, -3, 34, 40, 2, 82, 29, -37, -54, -11, 78, 107, 27, -51, 24, 80, 62, 8, -111, -128, 48, 80, -103, -85, 44, -60, 52, 30, 90, 40, -126, 10, -114, -25, -69, 116, -106, 74, 28, 110, -119, -65, 74, -125, 28, -122, -87, 12, 25, -17, -26, 30, 91, 121, -122, -17, -106, 20, -96, 80, -59, -5, -56, 73, 21, -48, 96, 84, -121, 90, 126, 89, -7, -116, 81, -42, -8, 104, 1, 74, -24, -25, 26, -111, 100, -30, -37, 87, 36, -77, -101, -95, -26, -29, -108, -45, 90, 3, -72, 85, 120, 12, -48, 103, 9, -71, 29, -44, -21, -15, -54, 14, 84, -7, -84, -38, 33, 117, -72, 74, 49, 110, 92, 106, -36, -8, 57, 113, -5, 47, 0, -26, 88, 51};
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
    msg.setTimeStamp(0.9110131770594029);
    msg.setSource(7644U);
    msg.setSourceEntity(3U);
    msg.setDestination(49264U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 52732U;
    msg.plan_size = 2259383719U;
    msg.change_time = 0.08393277392076526;
    msg.change_sid = 20804U;
    msg.change_sname.assign("FKCPVGHJIDSPPZNZALSQEYOBZTFODHRVSBMPNBRJTIHEOGFBLJTXFKLOXYYZUEHDKXGZMWPTOJWKWNYBNCNUUYLRQWXBDQDLMGIONCAASEUGRZYMSSLPPGVIZUAQXSRSHCYOYKFENGTRMEKLCRUJMFQRVODEZVJSKCAMMQHDDWXHFCITBTAVFLVHTEQTWCWQIAGQOAUXBPLQZMYKUKIXKNGEROM");
    const signed char tmp_msg_0[] = {-12, 119, 55, 50, -28, -88, -74, 66, 42, 39, -10, 114, -85, -60, -124, -10, 60, -48, 3, -19, 103, 58, 110, 4, 1, -7, 46, -52, -82, -24, -82, 15, -42, -7, -36, -110, -124, -123, 62, 76, -43, -58, 1, -101, -75, -113, -71, 105, 0, 15, -37, 102, -86, -27, -28, 79, 105, 61, -25, 69, -97, -75, 1, -60, 108, 83, 117, 83, -19, 28, 29, -111, 38, 92, -68, -69, 48, -95, 90, 11, 87, 126, 75, -96, -118, 122, 101, -31, -114, 98};
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
    msg.setTimeStamp(0.6606221518286989);
    msg.setSource(64923U);
    msg.setSourceEntity(207U);
    msg.setDestination(15015U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("EDUDXYFTPPEVBNJFHQQBWGYKSDLJDIFNKXODVJPGZYZEZAXNOXBQCLGSNICWDFUQOARHBUMQVJRWMBHDKRKVXZCRKGDLWSJIJTIXGCUCZISNYCMRBZRQPCLYGTSJIGZSVQOPNLMTAEGYWXTYFRJESKFELUYPDTKAWUSOXHECPHIIGZZVOORNRAHKOGPMBSHUVTXAHULPMSBRXVVHUJPMCYWLOVNAAIYETMMZQLBTJTMNKWWENWFCFQA");
    msg.plan_size = 47580U;
    msg.change_time = 0.7645349841219223;
    msg.change_sid = 8202U;
    msg.change_sname.assign("AIDTEZLLCUSJGPBVMMTMHPDSZAXLEOABQJXCHLUUEEKJDYEOKQTOQPOAHTEIKWYLUFDVYQGBJMVNFWCFRGFTROIGDCKPYPZXYNPNQASFNEISHDHRGXLZOTGUPTIEYFKGWRRRYAGCQSQAAXSDZMFYCKPZQV");
    const signed char tmp_msg_0[] = {19, 5, 19, -48, -48, 102, -22, 58, 71, -58, 80, 118, -52, 27, 38, 121, 7, -123, -105, -57, 50, 108, -27, 124, -42, -71, -112, 116, -49, -57, 98, -86, 23, 108, -32, 122, -21, -28, 120, 1, 61, -15, -18, -72, 74, -18, 110, -107, -57, -49, -37, -8, 126, -2, 5, 102, 2, -37, 29, -100, 99, 83, -80, 42, 84, 30, 22, 72, -91, -44, -78, -77, -29, -37, 55, -17, 77, 58, 59, -110, 74, 1, -55, 58, -9, 93, 62, 13, 85, 4, -42, -6, 107, 20, 82, 111, -127, -84, 110, -83, 99, 86, -49, -115, 96, 62, 11, -20, 19, -4, 38, 19, 11, -52, -26, -18, 25, 86, -66, 50, 96, -16, 111, -60, 76, -28, 23, -128, 58, -108, 50, 19, 79, 89, 11, 83, 17, 3, 83, 22, -84, 74, 22, -106, -8, -118, -11, 24, -29, -18, -78, 93, -36, -48, 116, 60, -111, -44, -87, 30, -128, 99, 122, -121, -110, -3, 3, -80, -79, -49, 125, 60, -34, -85, -49, 40, -110, -79};
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
    msg.setTimeStamp(0.008884000638250678);
    msg.setSource(2949U);
    msg.setSourceEntity(165U);
    msg.setDestination(25743U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("HQSQHYDCCVCKIOVIQBXNZWNEXUOZXUTWHRDGRPVBDEBAIVRCERWNTTWQKDEMOCZGJIURIADMHLVWKKKPXAJZFCKNOLQVGQLB");
    msg.plan_size = 52542U;
    msg.change_time = 0.4336250937124747;
    msg.change_sid = 54891U;
    msg.change_sname.assign("LOOWEOSIXRVTNAXPBNIDDKJJAYFZAFUHUSSOQIIEIGOLTADGHLCKMMFPLBBWHEWZUCNEZCVSABJUVBPUGEJVLOKBSQRAQAYNZZSTDTNGDQMFGHFTCYWKYDMXXNPQMKNQDRJUFCIIXHEWECMQLHEUQVUZYSLABXZNRAPRVZSOWKYPRKTNOKXFKQPIZGDGXSAVRDRIGLGWMTDKHYWFOCX");
    const signed char tmp_msg_0[] = {48, 25, 111, 18, -88, -23, 63, 32, -6, -32, 30, -24, -38, 28, -37, 35, -13, -27, 85, -12, -53, 41, 9, 5, -36, 74, -2, -7, 33, -105, -97, -120, 35, 72, -113, 86, -33, -76, 66, 53, -60, -53, -58, 100, 25, 72, 24, -39, -112, -87, 78, 63, -119, 90, 79, 87, 104, 116, 8, 118, 70, -17, 57, -20, 77, -11, -33, 50, -47, 7, -78, -45, 17, 61, 52, -92, -21, 70, 24, 33, -25, -58, 58, -100, -112, 33, -29, 74, 112, 43, 32, 120, -20, -78, 40, -126, -128, 90, -111, -4, -81, -105, -4, 115, -25, 60, -37, 104, -47, 65, -3, -124, -114, 89, 56, 121, -99, 7, 31, -60, 53, -120, -104, -90, -29, -41, -54, 73, 1, 61, -128, 103, 38, 55, 11, -122, -38, 16, -91, 92, 80, -112, 123, 13, -90, -17, -19, -39};
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
    msg.setTimeStamp(0.6029902555730854);
    msg.setSource(56767U);
    msg.setSourceEntity(42U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("MNEGEASKOBZVHPWEQASXNAWRDLTYICCNWFBNTSQEXAXHMGUVAHJXEDCMOBKFOFIDKZXLHFYVKQBCBUKATJYJGJNPDKQIVIZDNJMLOQHTMSFUSBFXJBLODHCBPLROXQLRNMVSWNDHSDGJUDSYYLRVWPZGIWKCTURICAJBLWF");
    msg.plan_size = 33698U;
    msg.change_time = 0.6575837527800863;
    msg.change_sid = 44811U;
    msg.change_sname.assign("JSALGYCLAKG");
    const signed char tmp_msg_0[] = {49, 19, -81, -90, -35, -120, -87, 77, -95, 37, 32, 68, 27, -14, 12, -61, -54, 35, 115, -112, -101, 18, -117, 121, 0, -70, -54, -58, -25, -85, -112, -13, -25, -121, 5, 15, 55, 53, -104, 14, 107, -108, 15, 58, -29, 72, 83, -15, 79, -48, 39, -27, -123, 125, 18, -25, 66, -60, -27, -109, 108, 28, -42, -121, -33, -82, 113, -60, -90, 106, 87, 66, 122, -128, 60, -101, -16, 67, 105, 81, 12, 21, 92, -85, -17, -14, 124, 40, -106, 114, -89, -96, 14, 104, 75, -14, 100, -29, -59, -11, -116, 99, 13, -105, 14, -40, 93, 48, -64, -56, -38, 70, 104, 0, 18, -66, 48, 101, 72, -108, -31, 106, -82, -94, 85, -41, 6, 42, -25, 21, -120, -122, -33, -32, 37, 72, 40, -44, -121, -12, -33, 112, -25, 69, -62, 106, 87, -128, -29, 98, 41, -89, 19, 126, -127, 92, 106, 106, -96, 100, 23, 56, 61, -13, -88, 18, -25, 56, -63, -89, 25, 6, 45, 46, 112, -100, 88, 107, 11, -98, 83, -56, 110, -62, -128, -55, 65, -56, 31, 40, 85, 38, -128, 22, -22, -43, 49, 54, -41, -93, -113, -18, 36, -68, 60, 43, -44, 40, -11, -41, 104, 42, 112, 61};
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
    msg.setTimeStamp(0.40624750351806116);
    msg.setSource(34538U);
    msg.setSourceEntity(116U);
    msg.setDestination(63307U);
    msg.setDestinationEntity(46U);
    msg.type = 166U;
    msg.op = 147U;
    msg.request_id = 4601U;
    msg.plan_id.assign("EFVDVNLSXIWNUAYDDPOHWGCSCXSGYBKJWYHAGBLMRPTERNMGEULHCATIINMKWENJHBVWJOLUSOCSPZPUJUZLHVHIKFQNASMENZBFKDOSKQFEMIHDOK");
    msg.flags = 17302U;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.29918738712113435;
    tmp_msg_0.roll = 31459U;
    tmp_msg_0.pitch = 20225U;
    tmp_msg_0.yaw = 44442U;
    tmp_msg_0.speed = 25771;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VDCPSUYLTXLWSMDJPZAAWQQTXYUGOJKWMIPUKHGFPHITTIBFZSCXKVBZXPMGDJOKCLNEYFVNDBKOIKNHXAUFEAHRRCORSCVIQCVYVOBQODFMVNSZXTYMRDBSFR");

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
    msg.setTimeStamp(0.652821687756017);
    msg.setSource(19232U);
    msg.setSourceEntity(83U);
    msg.setDestination(15464U);
    msg.setDestinationEntity(83U);
    msg.type = 214U;
    msg.op = 244U;
    msg.request_id = 1350U;
    msg.plan_id.assign("TBPPDBOUTAWWYLDHAFCSUNSHKJNXZKIZAXEQYHBUKWIDDPEFWIVWEESFMRYLTBBGLWZVPGGIUUKWUINVGFTZLLNLCAXRUCMETEDAAOGZCIROEXTQPINBGJMVQQSRDNKXYEJXJBDWQFYGNOSFSKJWMSATRQDPLSHDTZYKUYAGQDCJHMKHEXNLULOFQOXCPHFCWGZJOLIJAOR");
    msg.flags = 50204U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.8871622457846082;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FBWGTARCUQNMIFWTAABMFOBZJVQXJHHYLAIQVCPZTNYEXFVWFZNDFJIKOUNSKQRXENWSIWZAYCILPYVMZTLCIDCWHRCCHKTTSRPAWSIYUGOWGKJWDOWTQFYRXCSLLJZZJPBBOMNODVNLXITEODNNKGVSVHREGBJSQKSQMJFAUMUGAGEVINEZQPDMTSFKMKDEUXFQKYYSAPPHKCBULDJQMDUVXUCHRJEPGAPRLPBEBIHHYXEUOTLXHG");

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
    msg.setTimeStamp(0.7697003222268091);
    msg.setSource(61903U);
    msg.setSourceEntity(224U);
    msg.setDestination(57635U);
    msg.setDestinationEntity(70U);
    msg.type = 42U;
    msg.op = 8U;
    msg.request_id = 61068U;
    msg.plan_id.assign("MMBFXWGAXCSNJTMGGJPDHPAIEPGETSWTBRBXYXOZXYLLWSNHKAVYBOKWEZCKCTWTOAUXSQDIRIUPJERMTGXFFYQMCZCSUEILVERBPCOAWVKNGZJNJSDUNOIGZGJJXSXTVXJVSPHGBKUJFDYCPHVCTNCLCWYDHQERRDZAQQFITLPBWMYDLKBDEHWEYLZOAURVHUVKKRILOQFQNONZTAVSLUJPMPFOUVNDRWHQRMKHIMBUQNK");
    msg.flags = 6512U;
    IMC::ImageTracking tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EUPKVRUANQEXZVRFXOKSKBVISVULDAKJCPEIQTZAWGWFFTVANNJHCQQABELLMYZCJYNMAVEIEOYOXPJDPOCLM");

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
    msg.setTimeStamp(0.24187393352922482);
    msg.setSource(29018U);
    msg.setSourceEntity(183U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(191U);
    msg.state = 51U;
    msg.plan_id.assign("WBPIQCODZTZGMUYZEAJUXWWPKJHKWUSXOGJBUYHENTYDUIORXVRRWLESBRBECFHKBWPIUHZYSDZJCXILIKAAADIMSRAYRLCGFKO");
    msg.plan_eta = -629325464;
    msg.plan_progress = 0.6781428134014473;
    msg.man_id.assign("FMWESBLEFPLOANXCCKAJWLCLGKDKGZVYCBJJZOLNCPBZPZHHWGOSRQYCTUZZDKSRVTHUJENYJMUBCNULILZ");
    msg.man_type = 46603U;
    msg.man_eta = -389880664;
    msg.last_outcome = 60U;

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
    msg.setTimeStamp(0.9638486918068094);
    msg.setSource(2413U);
    msg.setSourceEntity(10U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(237U);
    msg.state = 203U;
    msg.plan_id.assign("FDZSWOSYLXFOIYKGJ");
    msg.plan_eta = 1181100550;
    msg.plan_progress = 0.326406161348867;
    msg.man_id.assign("UPBJAMVBJXOFEHNHFRIGSGTHTJIFDJLHCFVNEAXASNMBARQTOAVFGRRPEYZOHSPLSCWRUIMSIKDQEBEKFZXUPTVFSVJOVTAHXCQXZLNFTHNICBVLJBMGIZCXHCZUMLMALUUNHYCCWSFOOTMYVKZJURRSGQYZYDZPNKLYZUABRYKQQWBKWYRIWFDMKXYDHWEGXWLLGBTUJVIPNDYOXBJEX");
    msg.man_type = 18247U;
    msg.man_eta = 785994956;
    msg.last_outcome = 108U;

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
    msg.setTimeStamp(0.6555833212651793);
    msg.setSource(56903U);
    msg.setSourceEntity(144U);
    msg.setDestination(63503U);
    msg.setDestinationEntity(230U);
    msg.state = 183U;
    msg.plan_id.assign("GRMMQVOFZOJTIQNJRLQWMKSGOKEJEHXNVLBYPVWDMAEDZLUNOSWRXTBCMFTLWVULWCTJTHWRZIUCYJYKUQPQLLMPKIGPPXBHANGZEABIIOYOJDVJRWJEPNHSXVCODXGHGCZOAPUKDAFJCWKUSZTYYHCGKQLKH");
    msg.plan_eta = 1556622509;
    msg.plan_progress = 0.7188685773510513;
    msg.man_id.assign("GUIPUZJKETMSBKIAYMDKZVYNEFHWKMOFIKGNGUSXYYMRAECVIU");
    msg.man_type = 35350U;
    msg.man_eta = 862135614;
    msg.last_outcome = 19U;

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
    msg.setTimeStamp(0.0670037262029558);
    msg.setSource(60068U);
    msg.setSourceEntity(107U);
    msg.setDestination(52230U);
    msg.setDestinationEntity(90U);
    msg.name.assign("FQJURCWSGMUCNVZUWRAEDGPAUTBVBGINFXNQDVYELIWGKJZLEFBAXYSPMXQNENBKDJDADNCUIALGSNPYHGQEOFUOLDOGHMLYSXEZXSWQJAFUMSZIKIHHMOIFIRRUVSPFTOKCVCRDQLKDSVZZIKHJYTQWWCGBMDVJWKGXYGAXTYEVKMHHPRMRCATTCIJPZCWJKNNBXKVAEQTAQXQLHDPMSBPFEOTZMXBLOCVLYZTSOBOEYRUJRYNFBUHI");
    msg.value.assign("SQIADWOLVHLXNZNGZYTMNPBUCRZCSVAMVPSR");
    msg.type = 24U;
    msg.access = 118U;

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
    msg.setTimeStamp(0.8584213684032449);
    msg.setSource(6930U);
    msg.setSourceEntity(116U);
    msg.setDestination(52752U);
    msg.setDestinationEntity(250U);
    msg.name.assign("IQETTLLLKFKYOUDOWORTKKZWZNGPQOTCYWVZBKUCPXQRUZVKQRRILQAGRNNYOAAHKASDLHXEJPRFALVDBPDZEXXUJPCOXLWMFCMFEQNYWXPRIEJNNAMFBISAIIFVNCOYJLLUZGM");
    msg.value.assign("EZRLNESNPAXXCATWUDHQAETTBCRQJSCREYWDY");
    msg.type = 47U;
    msg.access = 170U;

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
    msg.setTimeStamp(0.7851155080447252);
    msg.setSource(65251U);
    msg.setSourceEntity(93U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(3U);
    msg.name.assign("XMDIRFKWINLHZIQOZEIUPVVXSHKSYULLGESTTQZZSEUVJKIUEWQOHTPXAGUTWMIHAFEACAQAVTXPYBZYQKJEDXXBRCFFMZQEJOSJWFYVWWFRDQVDABZKROGBUENMLMLRGHUSSFHLACTRBAEGNDORURJSXGLVZQKBYMWDQIFNPAJJOVPWPKNMOGKTCBFDCBDMNOFHT");
    msg.value.assign("DMYLYONLJEVGDVGIQVXZBHPAVPIUUHUZSCTCOZDVIRTOVMMGRSKA");
    msg.type = 167U;
    msg.access = 215U;

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
    msg.setTimeStamp(0.6546612923352447);
    msg.setSource(49246U);
    msg.setSourceEntity(245U);
    msg.setDestination(17866U);
    msg.setDestinationEntity(65U);
    msg.cmd = 124U;
    msg.op = 33U;
    msg.plan_id.assign("GRGPWKSRSNGTANHLFQLQDZYATUDXFCDKQCTBZVTSWJWXLUPAJXOBUZKNIMJWZZKIBPBXFOKJYGLHNJGHHBZTYSODBPHMWGVRPCUN");
    msg.params.assign("YKVIWMPHRFZRCHUBQADNPWZFIGYSTXVDBNWZGKJUHBHBNUCLNLXZQHYXYBDRALGDIZSKOOWLEVGUAJCGQXPNARWHMMMAISTBRSFNGDXENMXFTYOCESSCCTKQJOYANNKJGBFNOGQQIR");

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
    msg.setTimeStamp(0.8727662181841886);
    msg.setSource(26960U);
    msg.setSourceEntity(201U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(206U);
    msg.cmd = 63U;
    msg.op = 119U;
    msg.plan_id.assign("GMSCUBTHQSFGAEYXUYJOFMPIYHDWBHHUHVAPSNBZDJJPDKPJZYAIRUQCPDXNZZOWYRROTCXJFXNEN");
    msg.params.assign("JQQPRLGNTSPOLGCBFHZZTPNFJCIBXQHKFDWNTRMFEHBPZKAXGSAUUJEDIRBZLKIGHHFCGXJKWEMHLIRCQODRAUSTMPYGVDXGENCOSMNBLQFUGFJV");

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
    msg.setTimeStamp(0.18862026651149144);
    msg.setSource(16422U);
    msg.setSourceEntity(182U);
    msg.setDestination(29487U);
    msg.setDestinationEntity(77U);
    msg.cmd = 107U;
    msg.op = 232U;
    msg.plan_id.assign("ZKYWAUHNCJXQZBVGFZOVSWVTAAEZEVROBKSFEIYMBRTGFBJAPBILSEIBWIALXHMUTMKLSTENYYQSHYZIKAZXIJWQEMIJGVCYHMBQHIAYNBPXZDRZJPGOCTPOFCFKWHOALNCBJLUCQXLCYTDKQXDQRNWGXDHHLPVSEOOMHPGIOMKQNUWB");
    msg.params.assign("WIBMEBNMLVLZMEJSFKHOHZSVAQWPRKRADQVOCSDPFGEXTHRIXJMQHIJTOYCDFOTIGONEVKUYBSBEQCLQPARHNTEYGNXGLUGTYRTLUR");

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
    msg.setTimeStamp(0.9649855485774678);
    msg.setSource(35348U);
    msg.setSourceEntity(155U);
    msg.setDestination(48468U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("XJZMRDUSUEZJEOOCGPEWLEFGPMXQYBPWVDYGNPKKVVTWCLGGNJMUHMBLZAPMFMUDSEKVTXIWFQVVNSDNTTOIWMKTVQYPILVBENXPAYTWASURROTLYURNUTQGNDFHYVIAKQQJIDEDKZBECDWYIHBIJGRZJXWZASOYRMQQOUWPKXIHHZNJDHKPSZGECOAFHUYAAJUHXSDZKLINPFRXJTQBFAXCBCLXQTRLSRMOBBALWFFOHJMGS");
    msg.op = 15U;
    msg.lat = 0.36781337071798914;
    msg.lon = 0.41024210199688893;
    msg.height = 0.8875788994165655;
    msg.x = 0.30837568950898087;
    msg.y = 0.2960141088801507;
    msg.z = 0.04660277832509707;
    msg.phi = 0.8342193810065863;
    msg.theta = 0.7508757241780255;
    msg.psi = 0.4077858095960447;
    msg.vx = 0.06689472170140542;
    msg.vy = 0.852657407565394;
    msg.vz = 0.3478267843812164;
    msg.p = 0.34805166271635646;
    msg.q = 0.3068372556408072;
    msg.r = 0.650437418130653;
    msg.svx = 0.5274224925828358;
    msg.svy = 0.6923899828563189;
    msg.svz = 0.937743289385441;

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
    msg.setTimeStamp(0.12993489287717908);
    msg.setSource(45790U);
    msg.setSourceEntity(76U);
    msg.setDestination(20327U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("EYJVBGSEMQALZSWCLMDRHDPLWVFNEGTAXOUDXWMMPUNETRGWTHBCXQDUZDFUSCXBVTZBJAQBRUPVYPCJCNNUNJCFJSKHZIOJOMGAIEYMFYYSLFHNVLYYEHXOWDHSLBBMWYMSSDZRSNNWGQYEFTRQZZKQHLC");
    msg.op = 5U;
    msg.lat = 0.32517510020888607;
    msg.lon = 0.47088955965825685;
    msg.height = 0.7218144704575788;
    msg.x = 0.9960532813775682;
    msg.y = 0.07673898826755232;
    msg.z = 0.1354836024545324;
    msg.phi = 0.38528690676310073;
    msg.theta = 0.05613903921464747;
    msg.psi = 0.2534435285403468;
    msg.vx = 0.6250428844642739;
    msg.vy = 0.3441964782421343;
    msg.vz = 0.1868281486998854;
    msg.p = 0.06649337367964969;
    msg.q = 0.8671575193100425;
    msg.r = 0.16455280700077657;
    msg.svx = 0.19165096779869184;
    msg.svy = 0.7509819662665753;
    msg.svz = 0.21281879552672833;

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
    msg.setTimeStamp(0.11815116294491346);
    msg.setSource(23560U);
    msg.setSourceEntity(159U);
    msg.setDestination(59753U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("RMGGSHTRTWYUCCOXVALQXYEPNIDDCTBTNRIGEJLUBPMYSIDWXDQULIEZUKTHTCFLIAOTWJNHTNXLJHAEGQZBIXFCVKSQXCQCGHMKABUHKNOSPOFBMYELIOHHARGIKDCBNKMYEORZHAWQVQYWVPJUVEFSIFKLQWZYMRVXODNWEBOOSCPKUQNADPTASMNAPJRFTHWGFMCDQLVSZDDJVJMRGLIZFYUSULZKUBRVPFSOMKBAFGZBGNZEWWRJYJXPYJ");
    msg.op = 222U;
    msg.lat = 0.19682463957075924;
    msg.lon = 0.23952121575695717;
    msg.height = 0.35777140479749914;
    msg.x = 0.11959040424925516;
    msg.y = 0.42820451915351754;
    msg.z = 0.6245604003943326;
    msg.phi = 0.4053914291835766;
    msg.theta = 0.7663610217665686;
    msg.psi = 0.39823779007930504;
    msg.vx = 0.0065790191323019664;
    msg.vy = 0.9106486312420407;
    msg.vz = 0.726474338914805;
    msg.p = 0.18808030673048415;
    msg.q = 0.655891346868051;
    msg.r = 0.21014550832202195;
    msg.svx = 0.03722705207409249;
    msg.svy = 0.7451498462935837;
    msg.svz = 0.47723006035603;

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
    msg.setTimeStamp(0.05852012472293455);
    msg.setSource(55983U);
    msg.setSourceEntity(2U);
    msg.setDestination(2627U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("GAQZQVSFBGFMZUXCRRMFKVTLJUVXNGDUDCMZKVHYPTQPWNEGJAKCIIGXKEKJCRLUTWGCYMPIJUSPNASVJNCLNSZFJOFYBYMQEDYZWKNAQLOHWWXDOHMCBTBLXTBVIMPWHQGVSPFEJTROYPEBDVXLFIDZJYSUUAOKKPAJDIEREENZSXGGXOCESKWYMTQJHIABLHYMTGCCTURHRHIDIQOWDS");
    msg.type = 52U;
    msg.properties = 140U;
    msg.durations.assign("ZSPPJNKIMHLNBRVGIAMXOFBEIVWL");
    msg.distances.assign("QOMURZFCILNJRBBVGJOVBLKEPSWHQDTEXIGQB");
    msg.actions.assign("UAIOAGJWVJZMAPHHXDRHSTIXNYFEHFXVITEDTKUDCCHDGUPEDQSCEXERGFZUFWANYFFZPULBZHSLKXMKBKGIFNJHRVNJBMXJBPWDQNHLHCXAEZVMWXOMBPMDYJECZKWVEVQYBFIWTNZCSTLCSUPNKROTLJZISRJQLGASKFNGHWIILPMQAAMQUGLYKAKPDZ");
    msg.fuel.assign("NECUIYIUNZYXZFUJPSMRQMHMKDCEGRGCPUZIUEUZDRBJYOTQIVKWKKSDLLABCXUPDWCIQRKIUZDZKTXXAOPFPVJHRNITFWWEGXJPOCQNBLLATRRDVSBDMFLYMKHPKJPBJAWFALHVYEBRVXEZJVYBFMSJTOKEPHCZB");

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
    msg.setTimeStamp(0.6015955871051042);
    msg.setSource(61425U);
    msg.setSourceEntity(22U);
    msg.setDestination(3503U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("YMIWYDBWSKFFBFPINKADPSQVPNOQZZTRHSXNKTTPVPOXRHCYQLXGVAMFOSLJJWJXIRRAEZYSAJ");
    msg.type = 130U;
    msg.properties = 164U;
    msg.durations.assign("OHSOMMIKVAWFSCFCCBSNPPEQTPFPIDWDDHURCKJZIYZKCUSORJOUNSBTFBPDMYEJLMWYRNSRGUXSZTOOLVLQOHSNXKXEBMQ");
    msg.distances.assign("GYKXGKJRWKPAGDUIGUOQPCQHPWLRNFGWBQHLRZRJWYCAAFOJZSUDFXSMNYIJBWTAAEQYIDTRKURECDROYXQZTHNZG");
    msg.actions.assign("KOXHEGTMAINENHKTWQXGTSJMGOBZZBXZEHPITOFPECXMORZNTJYAEDKCYVAOQVLRHBFZTQBDPZOWJZFKIDDBUAKLVYJPNFNIGKZYXVPKSMOKJREUBUXGSLRXROQSIRVKNYUCQWTSQCPECWWIRA");
    msg.fuel.assign("OLSAEQZDTUUZVIMRBDOQPUYBMNXQXXETVEYRUKOTQMUGWIAASYQLNVTVIZGCYJHXEWIEGIWOGPBXXDHAZRZBKFHSZHBCNQCFTRNYYUWTSCEZYNAHFDHPOCHCPARSUPGBPGFLMKFCXXSJDCLNDVLN");

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
    msg.setTimeStamp(0.4712941164426936);
    msg.setSource(64164U);
    msg.setSourceEntity(112U);
    msg.setDestination(15334U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("XYSQLPYSQZGYMBARKVJARWEWCKIAAJTJLBHULNMXGVDWUTIWQQMNFHREDZMWLWHUWOKQHZGZXUMICMECGRXDOUULCRUHDEIPLDLPUDNXVFIZIBPMHTYQKBKVYBJWJ");
    msg.type = 6U;
    msg.properties = 25U;
    msg.durations.assign("MUMOCYYWEDJEASZZYIOIUVGZMTGYRGGIVRBQMWLBVKTXQPFWPVBRCXPEWBVAIMFTMQNSGFAXJSMWQYBBNJFJMSDTHKVHIDEQLJKKERDXYZBCDVECXQJTRKHGHNSAUYTOANZZIPWHCSAZDPPUBKOFTUHGUZDJTGBHXWSRUKUDNEQTOQVCOXPLZPAUQRK");
    msg.distances.assign("SPWVUDXVFZOZMSHFMWBBAGGIOKQWZWCSG");
    msg.actions.assign("JCAPJRVKGULZJVURUGAKYDHPUNVPTZSJXPQQXLWUPCXKTCFSURZMMLHHLYNREEFQKEW");
    msg.fuel.assign("CGSFYLUMYKYRQWUZOIKBHAHQSZHMOHUVCMYBYDGQSGFXGGDCPUPYBLUGRXLBFODUXJSYNRQHBUWAZCJAPXTIWLKQITWNKTQMXUKWQWBOTLBIAVDKJEEETYQENVRAGJBZZHFINZKRXFSFIVIOVONKMLJJPKONHVWOYNGPAOAEEOEFDMJQDEHJTPFWSITTDWVXGALQS");

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
    msg.setTimeStamp(0.012320621933248566);
    msg.setSource(31765U);
    msg.setSourceEntity(202U);
    msg.setDestination(4001U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.980907051829262;
    msg.lon = 0.21278259014979817;
    msg.depth = 0.10491700599584441;
    msg.roll = 0.9324979250538603;
    msg.pitch = 0.8373155976980332;
    msg.yaw = 0.7981304539115822;
    msg.rcp_time = 0.7501173354874248;
    msg.sid.assign("MFMSGNCAJQKOPPKYRJQESDKROHIYAZSXXTFQGIBEQZSAUXWJNQDUQEYFLWGHOZNMKHHNPEUCBJEWLFDUVZKDDEBFUAXRQPPJTMTLZMEFTZWKVEDIIGOUSYFDLWCZJVPHTXATCNWBOLZLEMCNSUBNWLBYUXTKAQFKMXAPSWLOYKDMUOCJQPYEJGLNGHHMJCSDFSQ");
    msg.s_type = 29U;

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
    msg.setTimeStamp(0.5607005318904938);
    msg.setSource(37532U);
    msg.setSourceEntity(156U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.24511332611771097;
    msg.lon = 0.8629877619165197;
    msg.depth = 0.17304382693839226;
    msg.roll = 0.409021593562532;
    msg.pitch = 0.9386970805523027;
    msg.yaw = 0.5904838902920061;
    msg.rcp_time = 0.7606884478177615;
    msg.sid.assign("LUOTBOJBHGNDTEOQQEFREMLWEDHUHVSCCXCNCLEWMPVRTKSFZTHAICJESKLBSXEANVHRFIXUYKHJWOMWXGBMHCGBSPPGVPQJUJITDKRBXSDXAVIECGXCQMNPOUCVMUMRPAQZFQUHKOGI");
    msg.s_type = 156U;

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
    msg.setTimeStamp(0.5863525472471837);
    msg.setSource(36719U);
    msg.setSourceEntity(210U);
    msg.setDestination(15871U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.6297654534779364;
    msg.lon = 0.11582484114317326;
    msg.depth = 0.05184358758924246;
    msg.roll = 0.23603671987989017;
    msg.pitch = 0.24350157689744845;
    msg.yaw = 0.28379713425128816;
    msg.rcp_time = 0.07106823933500817;
    msg.sid.assign("MTHQZCPFLGJXDWRXJEQTZHFIIVVCHIUNOLLNTASSCBVERFUWNBKYECMZMGKLSBJKQKWBTIBMYNVVAOCIGOPXZFDSODALNOBJZHGQDKHTUQWJWVYSKVFFOFTKKTWQMOPPRPPPUFBEHW");
    msg.s_type = 148U;

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
    msg.setTimeStamp(0.4482545799498229);
    msg.setSource(40780U);
    msg.setSourceEntity(43U);
    msg.setDestination(42287U);
    msg.setDestinationEntity(24U);
    msg.id.assign("KCRVIOFJQBEGXWIZNLQXPPMPACYZDNRQDJXVLHMJKNLUIKREBTLUPGRBQKUAPZOFSUJPRUMFXJBOXGYT");
    msg.sensor_class.assign("CJLYCZTDETWZDXOGBGOAHPCBTSCGBSXCODBVFKAWPOZILTEQSPXUUIRCQTLEHWVXQZUIHXSIMRVRWJINOAYBPX");
    msg.lat = 0.20117844628792347;
    msg.lon = 0.2952608513730822;
    msg.alt = 0.0449667106453393;
    msg.heading = 0.1258132572038988;
    msg.data.assign("QRXRCJDWPKFBZXSCAFZJYYABZYFPKGQYGDFIJGLFNKOVVMUWMVAICVHIOUOZNCKESDRBYBWLHOJZXXVKNCWCWOSZAFQEHNUTHPDDBRYPLAQTORVGWEYDCYRIIBVLBCAVEMQLXXLIYAHDGGGBSXJRWQMHGFIMQZGMQKEPPPIBTHTUUHUEWMTDLUJYPWFVNSJEOTVBQKSEXGOFTNCNNSDZRK");

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
    msg.setTimeStamp(0.5262285852045177);
    msg.setSource(56429U);
    msg.setSourceEntity(187U);
    msg.setDestination(57587U);
    msg.setDestinationEntity(9U);
    msg.id.assign("DUCJEPGHCSOMARDRUTXSFLNWJBLBJCLLYPVVCXZCVYQXERXNSKMVUPCAOHBCPASWQHFFBZDDCGSTTNMEMBHLZWNUKTOBOUVWDEHTNBRMREGTNPFEOIKANKRIMYRDUFYFWIFHSKJOTUOWORIRRYNSZVJCQPQDQADEILQWQLJDAWBPIGHMHZDIZBGNJFLTYPOJXVPGYCVYBLHJGHXKAISXKOYMMIWXTUPNZZVEQAJQYGVTAUEIAXWZFKQGU");
    msg.sensor_class.assign("VGVMGYBZFEQEUGKLMZHTSKUIDCDYCNVJIBLYRCIARWLIRWASSMBFDXTJVMSAYMNEHUUUSKNEGXOHFKUCVXTMRBAIOFQRCQWGXIMKKOZSNLLPPKJUWTBIKABDQPPANXFDSJQKCPMGBSZSIHYYNAZHTWVTZVNEJTJWITREHFEIMYXWXFQFHPGZHONFRXPEVHQBAYJWKLAURDNLBQDVCOXDLJOEDYZ");
    msg.lat = 0.03866874027166223;
    msg.lon = 0.362475055184143;
    msg.alt = 0.04973174194496566;
    msg.heading = 0.9977501300103451;
    msg.data.assign("XGZAOYVZAWGSCQGQQKSUCXMCWEFRGJHNMCMJPKECHAIGSZKGDUZYRSWMFRTRJZJNWRVCFYWNYIKCHYRIASBIXDYOUPLDBNDWXFLVVOPBTBPZFCTBNWHDDTLHXENGOUBFUEEJSPALDLZQZSHJYIWTYKQSXAT");

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
    msg.setTimeStamp(0.20453517781798247);
    msg.setSource(5962U);
    msg.setSourceEntity(41U);
    msg.setDestination(20913U);
    msg.setDestinationEntity(128U);
    msg.id.assign("RLTKSVNEZYGAMUXWFAHIWWMAKRFOZNVVNAQMCFCAHVCWUQUADYICJQOEDSXDVBUWOCIMKEMHPAJCFGQARUBQLBFIKJLJOWPLWOKSLXMMYSUPDFJXBNHETRHDJQHXZNXEJBH");
    msg.sensor_class.assign("FZBRNSPQCJWUBRWHLWYTQOTVXBBIVQGPGGEMOSNJQURKEBPYKVMLVYHEOUFROSZFJRKUPWCFYKOBNTFCIBALDQWASALFBAYKPIPHXTHNJTSGHYMFAUMXVQWORZMIAZHTZDQAENKPDKFPEJUGXLNAT");
    msg.lat = 0.2591793930968235;
    msg.lon = 0.6897057736698965;
    msg.alt = 0.9439360728562025;
    msg.heading = 0.8585321036321099;
    msg.data.assign("PWYFDOSUFQNGBQZFHFGAAYDUKMOONLKNREVRICCSLOYNWTSSSOMPJEGVUBHEXDAZBZXKBQASDLXDLCQPXKMAYXXSEECGZAUUKOBLMRUOXLIGCYJJEGLNEATJPWEBWFTEPZVHBCUDJXDYIJRGTALQWYFMCFHUYNW");

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
    msg.setTimeStamp(0.18998885892447248);
    msg.setSource(32834U);
    msg.setSourceEntity(254U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(240U);
    msg.id.assign("RZACXTIOPQWXCUOJQDCBRESLXODBMELFDFYKOIDOSODROOSEVCLFZAFZKVFRSAHJXAKORDKUXCOTAVUIQGRVCTGGYHJEMJZFFDTBJCBJLKARBUYUIJXYMHNZNNHYRITGGQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZADDHZOYIKIQVCQFLLYLYPBBRSBPHGSSZTIAUYEPWCEQTOJYCQQNZMUWLJEISBFZRLTEUPQBWNYKMBHHEUXXRWXFHZLXKVAZUHNUKSMFTXQ");
    tmp_msg_0.feature_type = 19U;
    tmp_msg_0.rgb_red = 235U;
    tmp_msg_0.rgb_green = 208U;
    tmp_msg_0.rgb_blue = 85U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5639261878056188;
    tmp_tmp_msg_0_0.lon = 0.12935102589631164;
    tmp_tmp_msg_0_0.alt = 0.19050782133341604;
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
    msg.setTimeStamp(0.055353244745645847);
    msg.setSource(30531U);
    msg.setSourceEntity(137U);
    msg.setDestination(39085U);
    msg.setDestinationEntity(62U);
    msg.id.assign("TQOGNDOZAHOFIBZMPBNBRCFZZYPUSECGEPIHJAKTLMIGNQOWEEDGEMPJMUXPXYWXXPSFYVHXAVDIHKWTBAWXWRKQFAJWPSEVQCVKO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WYLPIPELTXKLAFEDDRPMSXAFAZLXPSYFDNPUFGVSICJKLQQYAECZMBGXRORJRGOBGVEDCBQNLOYZABAJQIWLFKRMPZNQTNGCCNYTFOJIXUERMRBWNTHUYYHIESRHNSAGRSJXRBHCTUCTVHWHGFEMBKVNVJOGYVPDFWLDMBISOIVLDTJWUHCEZWHUKQUHOUJSVSMPDJWAMAFCFZEYI");
    tmp_msg_0.feature_type = 0U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 163U;
    tmp_msg_0.rgb_blue = 31U;
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
    msg.setTimeStamp(0.27011337658296686);
    msg.setSource(24730U);
    msg.setSourceEntity(164U);
    msg.setDestination(16633U);
    msg.setDestinationEntity(65U);
    msg.id.assign("XSDYVOWPASARVFNPGENYQFZPTLXTANPNZDKCFEVQSFBDGJZTXXSXRYRTAZGUJRQHAZJLOPQUKXKSHOKRHLKWMEGZZDRJNUQWUJGMMOBVLDLBBCVGDWILQMWXCQOWBKIOACUFVFSOFJHCJVCIBYYGOLLBNMGQYPPNHUWVTMIINSNEBETFHVSKYTSCRRAZOYWHFUJIZIDQBCRDDMBCTERPUAUEAJGTITHDLA");

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
    msg.setTimeStamp(0.0009705933960423296);
    msg.setSource(5051U);
    msg.setSourceEntity(143U);
    msg.setDestination(52318U);
    msg.setDestinationEntity(35U);
    msg.id.assign("LSVGGDXTTZGYHSEVIXHVNHMWNKUSFJSIODCIEKONZSOKJLOFPMDZPCJLBEFJDXDGTJWZJBNJGGMIQXRDMYZTMYYDAQYOWNVBGBTSJQTBYHTFDLZMORTQYOMARFESRXRBQXQUGUPTGCHHNANRJFBIAUHKCKP");
    msg.feature_type = 228U;
    msg.rgb_red = 76U;
    msg.rgb_green = 197U;
    msg.rgb_blue = 168U;

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
    msg.setTimeStamp(0.146678523907673);
    msg.setSource(64687U);
    msg.setSourceEntity(166U);
    msg.setDestination(7774U);
    msg.setDestinationEntity(85U);
    msg.id.assign("HTFWFIAUPCOXNVMOWVZOGTTWLISJUVPTZOYXHSCMSNRHFQCEBDKQAOJMQZEPQCIJFTLWJEVUSOHPAZECBTINNCBRUAQKFPMKTSYYRZKHFXUGYWMPRCBZUDWBZYDZUAHXIEXTONXEPKJMBLLTUOMLAQXQGUVGGWHQLGCVSY");
    msg.feature_type = 64U;
    msg.rgb_red = 89U;
    msg.rgb_green = 234U;
    msg.rgb_blue = 168U;

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
    msg.setTimeStamp(0.8588231367236764);
    msg.setSource(17904U);
    msg.setSourceEntity(182U);
    msg.setDestination(38843U);
    msg.setDestinationEntity(223U);
    msg.id.assign("XMINCOGGRTRYHJDCHPZAUHXZBLSZILOLDAEVAOIPYEPNSLQBEWUVUSDFXDXUWSQJAYAYBLNBCBOEXZTDTPTKVFBAOZWCZPOGHQDGCIJUYPCVRLYATNMMNTWZTIJXVOKXAQFSFGNVFHHHIKYDTXWZHAJXIEVPKQIPLESMJCEKNMIUKKBFONFQVFZ");
    msg.feature_type = 87U;
    msg.rgb_red = 61U;
    msg.rgb_green = 113U;
    msg.rgb_blue = 230U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3535856179947109;
    tmp_msg_0.lon = 0.2937493816732778;
    tmp_msg_0.alt = 0.18646738016214826;
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
    msg.setTimeStamp(0.21406892857517978);
    msg.setSource(10178U);
    msg.setSourceEntity(178U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.494136877827142;
    msg.lon = 0.23255203669980762;
    msg.alt = 0.500957804595508;

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
    msg.setTimeStamp(0.5232100120369928);
    msg.setSource(6730U);
    msg.setSourceEntity(137U);
    msg.setDestination(65307U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.3201908660269832;
    msg.lon = 0.048529688138004956;
    msg.alt = 0.29784246701502837;

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
    msg.setTimeStamp(0.9563798572218648);
    msg.setSource(61558U);
    msg.setSourceEntity(237U);
    msg.setDestination(338U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.8194586365197448;
    msg.lon = 0.9805202958127647;
    msg.alt = 0.2976383266778425;

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
    msg.setTimeStamp(0.33417113328800174);
    msg.setSource(51761U);
    msg.setSourceEntity(111U);
    msg.setDestination(38965U);
    msg.setDestinationEntity(241U);
    msg.type = 92U;
    msg.id.assign("RFYACCIOJVGUOEYXNSAPLXTKQZAWPUWZUGLHSERKWQYN");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 42U;
    tmp_msg_0.angle = 0.870583045405273;
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
    msg.setTimeStamp(0.9650653882911536);
    msg.setSource(33126U);
    msg.setSourceEntity(57U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(231U);
    msg.type = 85U;
    msg.id.assign("IGCGZOKMBCMTGMTKPMPSVRPDNFMZELZJJVGJODBCTYQCVOFHGIJLEQACBMBVKGKWXRRDRIWMFTUCCUSYQIRQJIIMYQTJPYNVDYELDJIJKTVWKNLZVNKLEFSYPVGIXTSOTYQ");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.7871298942185126);
    msg.setSource(61008U);
    msg.setSourceEntity(108U);
    msg.setDestination(33911U);
    msg.setDestinationEntity(67U);
    msg.type = 221U;
    msg.id.assign("NRDANTMBCPAQPQOIMNIFZOTICLZWVNMWKPCCQSMJWFKSWBRHIPLNKZDVWHFPYBDLYXXNGTBZAFZPUSSXMUEBTHENOIJAKWNVXHLOSLFGRXYOAXMPJXARXQE");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.27403187392253325;
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
    msg.setTimeStamp(0.6697062669155557);
    msg.setSource(9690U);
    msg.setSourceEntity(202U);
    msg.setDestination(50470U);
    msg.setDestinationEntity(157U);
    msg.localname.assign("MUPMNXMLOBRYJPLHYGBEPYTUYKJQGKCLZMVICSOLYNCFQNQKXKATWVWASVUVFWJPMBFMPTZHEGWVFTZWDNWFNAYLHXRVKZGPAUSFNTXEUZZHHVYOSDEILBHGLFFNITSBJPBMMWXDKEVSETJUBLZDZXWPDZZBOVIGUDBCURYBUCOPXDEQIRLLEOJJJKGRIRXODFIJDOHEAACSKSENGQAFGOKRTCNQQUMIIHRSTCQWMJQXCADPYYSAHI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AFLQICKBZYQVYXKDYXBPCLCWCDXXPNIEAYURTGSMTNHWYQTQCUFZFVZRHUIDJCSBBUZNJKXAZDHCHYZBVNXXDHVEUJGREBYHJPZRUKLHVORHGCGWITOIUSNAGVAKFLLODDYPSJREMUWWGYISPUKIPQXOZIWVJZDSKVLNJOSRALRMTQTOMQFGMHPJTEFWITUTEARWNIDGLZEBPMEXALMOADNYFSPLGVNEOSTB");
    tmp_msg_0.sys_type = 239U;
    tmp_msg_0.owner = 40268U;
    tmp_msg_0.lat = 0.6895493887345557;
    tmp_msg_0.lon = 0.09268369426887457;
    tmp_msg_0.height = 0.2994823197602876;
    tmp_msg_0.services.assign("VVXPSHYYSOOQNXXLTVEZSWSJMBY");
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
    msg.setTimeStamp(0.3158553434568422);
    msg.setSource(46962U);
    msg.setSourceEntity(178U);
    msg.setDestination(15548U);
    msg.setDestinationEntity(185U);
    msg.localname.assign("OAHZEEXHJCSGJVJIDHMJCTPZNNBIGMDGYXUKQSKPCZGMBOAUTUGRPIYLFQDXPAXZZWKTMNLLUTWOENXWZOANYRSSGRNKOFIYFIDIDBOHRFKD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NHULYJMGYQTPTVIEJXAWSECKNBEYXKNVFGFLEOMGAYFHSCEENCCGRCKSPBSPJGTRZOKPPJQBPTZKRKNTPOXLNBGVOWDTGS");
    tmp_msg_0.sys_type = 28U;
    tmp_msg_0.owner = 2964U;
    tmp_msg_0.lat = 0.7829432664224975;
    tmp_msg_0.lon = 0.11118243448636644;
    tmp_msg_0.height = 0.9835775994408258;
    tmp_msg_0.services.assign("UZBITSHBMTUVEHFJMQ");
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
    msg.setTimeStamp(0.7911972560879309);
    msg.setSource(44673U);
    msg.setSourceEntity(78U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(213U);
    msg.localname.assign("KVPGMGKWDARQETKLXOMIWTHRYWCRWKSOOCPNUWQEEUGQOUGBNXMWNMOVVBKVSPTOOJLHOACNBJGTFVHMISIDMIZBRHNUCFYEYRACBEIAJJWOTDBEYAQF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AEDBFXUASCJHUTZPUCRQWQSEQIKQEDAXMUKYSBNPNGZRMOIJPMYNSYGQMPDXCSMRIVXYGOQYTKRMKHSOTEFAGOZETANQPEHDLIHHOLCOWKWTIHRBLDZSLYNRYFBDTHMIZVOCUFJVVYNJDPUFJCHPRKUTLFXGBWXUQKYOQBZGRCSORVLAFKPCQXGPKAVWBWZBEZEZAVNUNJBFSLUWWVLJLIDCGNVHNJ");
    tmp_msg_0.sys_type = 146U;
    tmp_msg_0.owner = 10342U;
    tmp_msg_0.lat = 0.80537825212045;
    tmp_msg_0.lon = 0.16594956937090866;
    tmp_msg_0.height = 0.6714454268965349;
    tmp_msg_0.services.assign("NQYLBNNMQPTIFVCXLCVKRWEKGHSQEKSWRPWZYUBGEYRETFDTYUJAVIVOHDWABORVWKXGKHHJZXMCBGELJBAKHMLZRPCTMTTNXUYKNYGIVUZFDMDSDCYATOAJDENDOINQPRPUMJVDQQBJUOSYBAZ");
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
    msg.setTimeStamp(0.578557861448806);
    msg.setSource(6507U);
    msg.setSourceEntity(33U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("VAKDPDEFUFWDSEYHJEPVLPSXNCHXJCWLEFCJJKQKJHZGVOUTOVWYGBKMKJOAPZOVKARGPXFVORQMWMFMUFGSNOI");
    msg.predicate.assign("LOFEHMAWMJGGZDZSMXSSTPZQVYZRBBUBIVNHILGUKPINHQWGTWUFVGSNUKNIUWMLBGDNKVFATKHWZDFAQMEBBILQACCDJCENTXYFBEETWRYFOZAYWXEPLKNUBJZPADTDRSRXSHIXHCSIQJHLKSXNPXSOWELCFUJDQLJ");
    msg.attributes.assign("NIAPUNUDVWCLHCZKOXRSMLYWLCMTKRLJMFLQEMRQXWOELUTBEZNIZFTXJYPPBTYXFTXTGNNNNKWPPKJMRJWCEGLGKYKUIHSDJCJQMSVFDVWQELEDBACEZHMLFNRMPPOSIYBEAPXKGYCSGKXXWZRQUBNMOVPWAQQWQAHFQGVHDFTTAAYIJUVVOZTGVJDMFXDHDGRVJCS");

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
    msg.setTimeStamp(0.15573167181907788);
    msg.setSource(36970U);
    msg.setSourceEntity(159U);
    msg.setDestination(60539U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("DVQQHCOSMMEWBYDLKVHKGLWDAHZNAUMEHNHJPFLZCZKDXZZTGCELYFWRMVTSUXSEWYHYOKYDIRJPCIMXVCJRXFQAMTRQYTNVJADIWMABIJBXYSSIQIHDOSENLOCXFRVGQICLNZGXOBFABFSKCNRPWUTZBQUUQDOPTNZRIWYQUJYOEXMKJNHOLR");
    msg.predicate.assign("EOSPYAZMHTDEHPQDTYPHIDRSYUBYEYHEVMXE");
    msg.attributes.assign("ECLZVOMUHPSDQMBEHOFVPQWMDXWICGLNYZRFWPLLIBQSNBFZQHMTUYHMVGUSIFIEYKRGVTTWAFIJVVGVJACSPBZKGSKZYPDZYLDRRLUDRQSPMIKHGAGONNATPBXXIBSDHNCADOPDKIITHLOJRSUCXHCJRBNMYQFGEHNUQAWTTKQWARTKSFOCZNUKCGQPDEAXJMJXZMYZEJVCWXGORUXJNELDWQWONCSFLOMAVUKJWREXB");

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
    msg.setTimeStamp(0.2052626091121108);
    msg.setSource(28698U);
    msg.setSourceEntity(230U);
    msg.setDestination(28797U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("WIZABTFPXMJLNXXMKLOCNTWCOKVOAHSVBKZZOKKFEFQDIBSHKVDHRFEGTCXAWPHXFYYAGEQIYRHSKZSDRPXBMVXOMTAEUK");
    msg.predicate.assign("CHQDOOYDWQEXTAKACRPCSMIDFSKTFAAFSNPFZPEDISOWQRPXPIHQLVJEKMPSUEVXGGNUDUYXYNRIFIXBUWOTLQZEOGRUUNZHZSREVHVPRKXTFAM");
    msg.attributes.assign("ZSLHVOTUVBWJPRLNPGDLENIKVVLMABODYVEDJNYTWXCURZIYYQMQFBWMFOYIQKXQSOLPHKFZUKKTTCBOODJHMGMTJYFTGSQWEXUGVLARKQUAAQWUNMQRYNDKEBYTKODOFCNUXYWWREGZAHIUHPCJKDGUOSSFFIFVPQ");

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
    msg.setTimeStamp(0.20220912591531903);
    msg.setSource(58235U);
    msg.setSourceEntity(163U);
    msg.setDestination(48976U);
    msg.setDestinationEntity(20U);
    msg.command = 125U;
    msg.goal_id.assign("CFMRRKNVXECQRISTWXXJJYDILTUVTFCRFHEQNGNDBUFAQFXREMZXJJYBZRLOUIPIOMWAJCCGGXYRCPYUOFJWHAS");
    msg.goal_xml.assign("UWIITHYWFUYNWQSZPHXCSSWEBMURELJWIYEGUJHPMFAFVKMTEGMGSCXRTLNKGHOPEUXXMHCBPFRFNGRNRFJNPOQUDAUVYFGDZHBMKRATSVZADVZGBQAYBCWXWIOEYRLZTSULYNKCBAQZEVMOASJAVRDQLZXNOHUSGLORQOVJSIDXAYLMQDZBCKFBIMCCBKJLFGNTPXQZPHXDYOZTWGXWJKFAPTJEDOKVVVTREQBULIJISPNDO");

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
    msg.setTimeStamp(0.6020766394839171);
    msg.setSource(63585U);
    msg.setSourceEntity(62U);
    msg.setDestination(64617U);
    msg.setDestinationEntity(191U);
    msg.command = 40U;
    msg.goal_id.assign("EVIQNLOJFBFHVKYSOKRDNGVCMDLAOYGKXHSXHUTPOTIKZNCFZCORVBQGDRNDFUBYWDUNCRPPDDOMTBHDJMMHNLXYCWHVELSPAJXGLXECTUKQQXDNVPZSZKIWAWYVDLWEUTQLEBMATBXTJFPEQOMWTCASSVQSHZLEQHSPRGZLIFUJWLIWOFRGKMEXNEONTZQFQJBUWJMGJYRCAEMJUAOIAHUVXPIYTYCFRKJHSGGBBUSIZFVRIYWXKYGIM");
    msg.goal_xml.assign("XHICEKARJGLTSHHNPFOWXEEQOZBOREZJSR");

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
    msg.setTimeStamp(0.9826830637238195);
    msg.setSource(9381U);
    msg.setSourceEntity(131U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(64U);
    msg.command = 194U;
    msg.goal_id.assign("KMPTXYIHJIYKJFNURFZGDMBUUANUZZPLXRUEAYXHHSFYNKYNWQQTSENDDLCMYPEOQHFNOZIJTKAVHBJSOOTTLLDRXIYTTWMEPJGKBQAZGXMPAWFSNDWZUJRHBJKBGARCVDWMZUJCOLGVQEWILWYWDOZCHYIPFDCARSDRUJKCIRGWTXVKIVQTSA");
    msg.goal_xml.assign("GLPKZHOCKKVSQFMNEMXDLXBTLJXQZOCPXWXCPHRNGLDPMSUQJQIZJSLDIEAUFKRDKBBRLFOBLOPANRWFYVBIWJGADRLAHKTUESOVIGUKEPSXCUBPYTVMAQJJCITHBBDCOONVZMFNKCHHPSGYYUBWTJWSJLIZEMGHEYHGDNNEWJZPRES");

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
    msg.setTimeStamp(0.7419308345329764);
    msg.setSource(18802U);
    msg.setSourceEntity(240U);
    msg.setDestination(23553U);
    msg.setDestinationEntity(242U);
    msg.op = 118U;
    msg.goal_id.assign("JRGRAMZETGHIOEZXLRLIZLXEVAXMCWSXCTKDNHSPTLILKOBJVQIDWRRZEFYJVCUMMTYUNSJZOFXNMLGPSSXDJXFHYJVUGPMRMLARTPYEDQAKRTVFWZJYFOBJBQLMPEONUQFGXGDDKAHOKOVICRBLIYSKUAADWISPYUXQVBCRUOYHFBDTGHIUMWLINHPKAQHEAQVVENTNPPTCNHWFUSAQKBYXKWJPMGEOBUFBSOZCZCDIDWZFWCBG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SEJBXNFQHNGYZXOZOQSDOEMIPQLRYPVAEDLFOTGQTSPKCMHRCPXGFKYTUJGCVFJTDFQLENLYGYJUJFDDAIZNGCVVJKYQVOIVQWCCAQWRKWRXDRXHSBTAMONEXVRCLRJEABONZWHLAPI");
    tmp_msg_0.predicate.assign("CDJCRCHKLJWNVLFPSDMBUYSXJIVBYSFYFYGBPAGLJELLHJQQWXKCBYFEZHIVXPULRCLZKVJTVMQWNGRGADTTAOWVFRMBOORYETAHMDTRKEGCULRISTNPJNRFJWXWVBUDFSUSZXQFOBIZODWGXYK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("USGMHOHFVLBQRKLBMUZNLFLOPVIARXQATIAHEZRCBTVEFDNPDMZILEDHMXSLPNERSSZOERRJJUDVJWRSTJWTDQVTJNDFTIZVYAFRJGKOLOVXDEFGGIPUQIEZNQTGMHSRGYNKSTWCXYHFNVMWYOAQAXNDPWCAKUYXTIRHYBYTWXJWWKUBFCWUOEELLHG");
    tmp_tmp_msg_0_0.attr_type = 105U;
    tmp_tmp_msg_0_0.min.assign("DLGWCIILQUUKOOEVQMRIINVASDBTSLXVHSZREHZPTBONXLXREJMRMUPQUQKNLIIGUUOAOPWTHD");
    tmp_tmp_msg_0_0.max.assign("HMJPESHJREPVVAAYDKECHKJNSRXTKZOWXUALNVAVFORCLYLSHTOJWQIUNOLFJDXNTPKPOBVDSMZCMHGEGDYFCTMEYZRDJTFPXAZJGBQLNUMGWTNPABQFWWDKHFVNOCANOIVUPXDTZXGIARUFVXYUKYKCCKRTYSLZQFDZJHBYIIFZLVJDOMZLCESRIYOQIXEMEPXYWQFUBSWQXRNHBLHGISAPKQEVSGGCIMDBRMRWLGIZKQSHPW");
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
    msg.setTimeStamp(0.620171691040935);
    msg.setSource(999U);
    msg.setSourceEntity(155U);
    msg.setDestination(11735U);
    msg.setDestinationEntity(165U);
    msg.op = 120U;
    msg.goal_id.assign("OCCBFLMNEDMWHKRVNJSYTIFOIBQYIEJHYVEMTLVRVWLNPCZCQCHVYKQNOTGVODPRFMXGSGKTUJTXANFPLZRBTHPLOUBUZWSFGUEXOGWZRPYUSVAAIEDYN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MKKWEHCMBJMWUUPOZYGKMFAUMAFMDXHDRRQHRJCDZJNPNBZYCPQOTETVDHMELGRKQIP");
    tmp_msg_0.predicate.assign("QIPYQAWPFQWJBKDQGMTCNSEJNHLOLZEOWUJZMHTDCQPTDBRHCHWKHRFUXUSKKCPCDJOZDNOXIUDRJPPSHAMVFRUPXBBGUFHYMYGTZUXLVASBXWFLMDFKIXIACLYAAOTHZMSHEWGGIVKIEMGTJYRZNOIYGURVBAQEXJLUIYGJOEODTZSVTCWVIQALYUPMRAXHBWXSBTJRCWNWCZNVQTEZL");
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
    msg.setTimeStamp(0.989851450159224);
    msg.setSource(45710U);
    msg.setSourceEntity(227U);
    msg.setDestination(34123U);
    msg.setDestinationEntity(203U);
    msg.op = 212U;
    msg.goal_id.assign("VWEPHROOHIBKLPWNEGPTAAECXZYLKQBDCUXKTBETTVXTIKMRJLWJVEPIOJHIJIHBFOVSLWBDDZVRIDJTAHJVMAOJXWDVRCKPEXHZCDSMMYUBXHSNZMPUQFEPQCCUKWI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VQLDIZGMTHCHUSBNSLYSUOENYWYDPTFJOTCNNEQQYUPWMIPWUOTHAAGGABGABLDCURRBKRTPLYCZJMOEEFXCDDQXDUWUKGVMXVOPFCWBIHPEKQICNPZOQJWKEVFBXNVEZGLSWPZMVJARGIEJLZEHSVSWRCMZOBCBMHMNDMMOLGWNFYIJFYSXFTDXGVYYHUSRLTHVT");
    tmp_msg_0.predicate.assign("OMOVJGOZAJORJQTPCFDBQAPZCMALHGTASIVELORPKIZQLYAFWEUDDFGBVHWBTLZMNYSDTTSUQDTGEWBUVIEIFGILPQNHZQVXNFFYEQUIKJDOBMJLKEZRHAXCPRKWPKWAUJMUGRSWWQGFQQWSTBBCVEKOEDCJTRCRYNIUCMLSGCYEMBZKEYOHNGVPUPMDINSNMKJFLMYHKSLXXZJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("STKDONIZZJQRLLLYDAXVKLFWUCQGWBIOZBVNWBTDPHYIVAEJSSZLCARKGBKIYMTWAJXPOXLRDHSETOWPVCMBGLMHHQOFYJERKGEEFIUIGBRMATDPZHCEDUKNFVGVRSTXEJIOCYLHXNZAHQDQAMBDNJRTSVKTKFXUBEDXZLMVAZIRIGCJYYP");
    tmp_tmp_msg_0_0.attr_type = 45U;
    tmp_tmp_msg_0_0.min.assign("UVJMBAXGWZNFNWLADAAUGHNVKKLUIJAQO");
    tmp_tmp_msg_0_0.max.assign("ANYVAYWXIFTOZODYFZFWCXMGVZUM");
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
    msg.setTimeStamp(0.9433569428349904);
    msg.setSource(65385U);
    msg.setSourceEntity(49U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(193U);
    msg.name.assign("DROXZQAHGAMGTEALEOCJNNKRXLOBAIURCEXQFYGWMAAPNUBJJDVKPBINZSOYJKIDQUFDJIDJILEAGOLCIGZSRVEHZIHUXXCUPDUEVCHSMSAYFHCPLDCYBVBCTVJRYFKSLKHZVCWKQFGOXXHPZDWEBKYMMHJKBMBQPJNVWSUAYQTRFSFTPEJTGUOWXNVSMWLQIEBZLNEPMFZWFTZXI");
    msg.attr_type = 36U;
    msg.min.assign("KYEEFUNQGWLEKIPPYILLVJRRPEPWTEIXIQGSNEUTKZCUTQ");
    msg.max.assign("SQJMEFFFPVJZCCJXSYGRIASEQKBJOUPLBWBUKGLAALINWVYIKOLODEHEDYRJIEBBYGXZLAIUHSNVISHVMDNRCPCLAGSKRZTHBZOSUVEQDCPTVWAGCGMVZOPNWWEVXMPOLXHDTORWWTSORFQNFVEKMKURXYGNGCCKOFOAZFFLQBIRUTMKAZAKTEZLXXPNDUISNUTQGTWINMYCMU");

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
    msg.setTimeStamp(0.37544888663451503);
    msg.setSource(32949U);
    msg.setSourceEntity(207U);
    msg.setDestination(43805U);
    msg.setDestinationEntity(246U);
    msg.name.assign("FSOHQRFWQZIMEMSCSQXOTIUMGYSEUJPDQKLELOSFBXKRESLQCNLZKXTNJKDVOTPISWCILN");
    msg.attr_type = 180U;
    msg.min.assign("IXXTQLWQYBPRJLAOMFNEVGTAQZVBBSNORARVAIDKMNVPACBVDKTMPVHESWBFZDPMURRKULHSYLVXMKYVCHBFKLWDWEWXQKZRHHTEOECZIZLYRGYEUHNDKXTPJGOSZRIFJMJYPGUGIPKACDOULIBJXAQFSBTLAOBUXIZCSQQDLJSEBFJCYFNNUAWJKWIYGACPOXOWEPQYONECWWFZMITMEQVPIRYNZUMLXCFJSGRHDFT");
    msg.max.assign("KVLPXHQHDDGAIBNPT");

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
    msg.setTimeStamp(0.3662804185204095);
    msg.setSource(2324U);
    msg.setSourceEntity(65U);
    msg.setDestination(58572U);
    msg.setDestinationEntity(72U);
    msg.name.assign("SORTWGRKXZPMXDZUVQBCZYRYRMPOIJAFOHKADIMSHHJBNFYOCILFHTTMQSVELJEYHYXMGHDJVCJXIKSTXWSAIZARZJFMLGKTDBPARSJQWABQKIFZSHBXUYWZWUGKLPQPCCWVBEHQXYESGRBCEUIKHPDVWGVBDOVOFQLKM");
    msg.attr_type = 11U;
    msg.min.assign("QLPGVLSSMIDFXAXTKPDOTHOQLNIEVRJRLDDMHCEGWMSYYRIGGLGDRNNB");
    msg.max.assign("PQXDZYKAZSOJALQRNZNSKSBMFJZBPNKIPHXZNJXPGEBILUAJIDOUNTEQTZWHVUMJODXHGZCBVMJDMFACACAPMKQIVLVPEMHACKNOYBYVMYEIGSQWGURWWTD");

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
    msg.setTimeStamp(0.014368816315152855);
    msg.setSource(63091U);
    msg.setSourceEntity(195U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("RNRXPBHEHRCTWQALWHTVBUCZPYNOBHOAXVLGJAMVIHIQOAYDYYJ");
    msg.predicate.assign("TUOFNICXVCBYPJBGCIMHBGSOBVEUFWOKODJAAPEESZDHHNYVARYRLPYZIMWQIAFTFSTPVGK");

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
    msg.setTimeStamp(0.39994672036187884);
    msg.setSource(46083U);
    msg.setSourceEntity(30U);
    msg.setDestination(29222U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("GLJTQPATJIZWOYDKHOQJQNHAUWPXNJKGGGDTMCCTZRBEEFKRLIQGYWKSAGSCEONPTZHFHYLJSOBUCAAZEYDLFBDJWPLYLWUMMZNXSIXFILVIYFFKOBXARNNQVXVCDRWXSCZOUYJDSZVCCDMERZUOBQLMEUEPGMAYSYEKNRRNESSBPHPXMUBAMWZDBFVFJMPQPAGHFIOXIXKBSVPTW");
    msg.predicate.assign("CAJOTRKLAXYPHTOZFHYVEIWXFMYKUHSQPQPTGZKLRVXXMKVJEIGKNNSJAMEOODSEJOLFTMABYXBMDZCPQROKNSNCYPAMOKWHWJRYD");

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
    msg.setTimeStamp(0.4922406281059192);
    msg.setSource(26252U);
    msg.setSourceEntity(186U);
    msg.setDestination(37556U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("PGFFPOIOACKMMCMLSFPTAWQKIRXLBLYNJRZSJQAQXBUPYWYNJAZMAFXHMUSNGECUDUSLNOKXYVHITDIKIODTEQRMLORYNVNKMWZGAITLTQNPNVRXBYQDXVVBVHQOOHRXGULEGRFRBSSRWJTFQQWZACUMWOLONWKETHXXWZACAFECJHCFBKUSDIEYV");
    msg.predicate.assign("BQZOPQDAKIWGHAOMSZBFXYESVILHDQEDXDMQOEGSYNKOSXBUVOEBVJFYPZCBFYDITHUXSSMTRPLSMNFDGGLLSRJRICLKZXPAVVBJVINEKUUELYNQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KTEZSXVIBXRWSBZMQCIYLKXUCVZHFMISXOCMFWDCRLKHQIBVTGZMIWOPBZVJLQDGDDEYTSOXLOAZOBTTSWYNBGJEFARQPMNJHUTXYDEEYIJPNB");
    tmp_msg_0.attr_type = 30U;
    tmp_msg_0.min.assign("GDSQOVSMJGXTDKEHRTKTNHCBDJRIJVMFKGZBAZXFPGVZCLBNIIWTKYMVLMACHOUEJEVAGPEZSMOETAWKLIAJHGSZHEJHADDXLXFIETFUKZFYHXYJPGMLBTVGLPOBKSQCWYXVWXTZXEVTRSUOVNOWJOIKVBUNWZYPLHUWDCANRLHWUKMEEOIYQBIUDFUQXBFRMDPRCRMFLXQQQUFAOZWZIAUYLPBDNNOKNSRJTSRNIQRPQGCGJ");
    tmp_msg_0.max.assign("GDVTBYXWUBPIQPNBXZLYCGYQZFUEKEDSSRWKASYGNYIKWFMOVOEJOAPZTOGJNFSXNZTMVFWXRCFDFUJIVKXLHOXHNOJDWAIUCMVPWDFYQAFQWZEXLWKJORLXQSHXJHFGSASVDLLAMPZIKRTANBRZUSZLTJZIPPAHBMNBECTGIHOSDBDUDZT");
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
    msg.setTimeStamp(0.8688721311070952);
    msg.setSource(45362U);
    msg.setSourceEntity(236U);
    msg.setDestination(40045U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("GNUTYYESCHQLXKTCZRULAKZTSUWQJQZBHNVVDZXUBIDSGIXRHZIFWVCHSLNIAVWYXJSLZLBVFAHPBZPOFKOQRJORMDMMMPGCLNPKLQQWRKMHOWGZYNUDBJEDDCVASOFITXRZRUEEACTOPDNIZUNKVPKMYDGBTXBVHYLKXEHTBFMNCTMETDJBCAFFCAENFWSTGANAVYJOREJBUHEQXLIIGF");

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
    msg.setTimeStamp(0.16625266724981014);
    msg.setSource(44139U);
    msg.setSourceEntity(213U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("OHKTUOIUMXKQBAZRLRUHAIYHJGVWNHDTPWDBDGGASWVQXUMPMWAUSSFQHWJXSQGXELZXQZDZLGBXZOEEYRWHBNFJELXIIPAUZCSRKSLZFQKYYRPPEETPWBFSDLLJPJGUYTADBVTCYVIKRBRQCNEIUUGWOTJQPCDK");

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
    msg.setTimeStamp(0.729382177687637);
    msg.setSource(37783U);
    msg.setSourceEntity(9U);
    msg.setDestination(65092U);
    msg.setDestinationEntity(104U);
    msg.reactor.assign("RJZDQPSXIMJ");

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
    msg.setTimeStamp(0.48835863644734623);
    msg.setSource(63891U);
    msg.setSourceEntity(147U);
    msg.setDestination(35949U);
    msg.setDestinationEntity(225U);
    msg.topic.assign("KCEEVZPNGAHYBLXSFPOVHE");
    msg.data.assign("BSTTMCMMLWHVQPONURYNJUDDXFVFZOROQWWHGHAWXPDDKZBQDSQNEGFUGYNDMTFUZTW");

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
    msg.setTimeStamp(0.09907937208133721);
    msg.setSource(57358U);
    msg.setSourceEntity(54U);
    msg.setDestination(18939U);
    msg.setDestinationEntity(80U);
    msg.topic.assign("DEZGKXAGIZVWIJSKXFEBYWRNHDXCCSDQXOQCIAJQXKBTUTBFREJNQMMCFTGSCPRZNYUJDFWUITPNCDPSJONJCAEBXG");
    msg.data.assign("QANLMCFQLFVUUDRZGTYUBCROUUCDAJDQWWMLLNWOKZKHNRYLREVPTSBRPHMKVOGNNLDNMFCXSNQMDWHGABOBDTMAVEUFVQXLOTNEGTHCPAXFSYINIZPJNJAQOGDYXZYXGQWMOZ");

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
    msg.setTimeStamp(0.3087276493549772);
    msg.setSource(47495U);
    msg.setSourceEntity(237U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(64U);
    msg.topic.assign("CBZVRWGCTJPAWLGQFPWXEDRIXIIXXUUVJHJQWVUJEYWQGOFFAIUFTJBKCVLRMBQXZGDNYOHJKMBPXTFZHKASMUEISGDRVOCTPNIUIKVZTHUMKTEZVRBEOWADZZEMGNYCLZQYGMBMLBXQRJCGPNERAZYCGQLFDMLRRSDFKPXMSIOVWJAJOOBOLSKVUDPLDDYHFQPTUCASQLTYJBHBVNOHHWFXNEWXASGTYAHKNTSENEQACSIYDIHCWMK");
    msg.data.assign("HNQVFXSONGZBAHYRT");

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
    msg.setTimeStamp(0.05770132178398335);
    msg.setSource(58893U);
    msg.setSourceEntity(69U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(26U);
    msg.frameid = 58U;
    const signed char tmp_msg_0[] = {-18, -117, -96, 56, 8, -21, -70, 83, -12, -82, -106, -90, 52, -30, 17, -62, -78, 53, -53, -118, 101, -124, -42, -93, -118, 113, -40, -76, 2, 4, 90};
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
    msg.setTimeStamp(0.1640280337774923);
    msg.setSource(61640U);
    msg.setSourceEntity(175U);
    msg.setDestination(21302U);
    msg.setDestinationEntity(173U);
    msg.frameid = 155U;
    const signed char tmp_msg_0[] = {-29, -8, -49, 84, -91, 50, 63, 63, -101, 92, 75, 113, 84, 85, 87, 20, -37, -20, 72, 48, -11, -53, 81, -80, -69, 69, 15, 116, -101, -112, -54, 96, -126, 95, -23, -49, -6, 56, 44, -111, 39, 95, -28, -33, 8, -77, 57, -88, -40, 70, 13, -55, 121, -7, 24, 21, -83, 105, 103, -16, -111, -101, -25, -25, 99, 99, 101, -78, 29, -50, 120, -84, 55, -70, 20};
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
    msg.setTimeStamp(0.39638786123081093);
    msg.setSource(28620U);
    msg.setSourceEntity(188U);
    msg.setDestination(802U);
    msg.setDestinationEntity(224U);
    msg.frameid = 94U;
    const signed char tmp_msg_0[] = {-102, 20, -74, 48, 105, 119, 21, -99, 0, -105, -68, 26, 90, 9, 85, -62, -5, 16, -110, 60, -31, 122, 15, 124, -105, 78, -87, -71, 29, -119, 84, -101, -44, -81, 103, 108, 59, -25, -93, -54, -63, 27, -39, 114, -16, 24, 74, 81, -18, -9, 115, -37, 87, -6, 34, 51, -97, -73, 75, -84, -10, 73, 81, -64};
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
    msg.setTimeStamp(0.02238651389799451);
    msg.setSource(14497U);
    msg.setSourceEntity(80U);
    msg.setDestination(19981U);
    msg.setDestinationEntity(110U);
    msg.fps = 172U;
    msg.quality = 19U;
    msg.reps = 98U;
    msg.tsize = 144U;

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
    msg.setTimeStamp(0.8453190175007368);
    msg.setSource(39225U);
    msg.setSourceEntity(2U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(104U);
    msg.fps = 214U;
    msg.quality = 149U;
    msg.reps = 191U;
    msg.tsize = 78U;

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
    msg.setTimeStamp(0.4520197131494267);
    msg.setSource(42219U);
    msg.setSourceEntity(109U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(136U);
    msg.fps = 29U;
    msg.quality = 176U;
    msg.reps = 227U;
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
    msg.setTimeStamp(0.2572806756260919);
    msg.setSource(30277U);
    msg.setSourceEntity(116U);
    msg.setDestination(19257U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.7790188513754648;
    msg.lon = 0.8450631063151339;
    msg.depth = 29U;
    msg.speed = 0.6325043253304486;
    msg.psi = 0.5359755595897294;

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
    msg.setTimeStamp(0.4874000540391151);
    msg.setSource(13171U);
    msg.setSourceEntity(41U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.5720973854609025;
    msg.lon = 0.03391032448912401;
    msg.depth = 64U;
    msg.speed = 0.053912871330200285;
    msg.psi = 0.1802006910302718;

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
    msg.setTimeStamp(0.22535754857248036);
    msg.setSource(42118U);
    msg.setSourceEntity(3U);
    msg.setDestination(48264U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.8210531823403335;
    msg.lon = 0.19000788924173728;
    msg.depth = 215U;
    msg.speed = 0.3720459365126557;
    msg.psi = 0.021723617798964256;

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
    msg.setTimeStamp(0.2445045872159638);
    msg.setSource(42451U);
    msg.setSourceEntity(171U);
    msg.setDestination(9127U);
    msg.setDestinationEntity(10U);
    msg.label.assign("OHRIFYHKNBFELLIGTABTQAJBDQODLSUIGPPCQCIBFNRFYUZEENKBRKGVBZIMLGVNPHKGDHCXXOTEMFRQEUQAWLPDQRPFJDEZPCKEMJVUGWHAJYGFLNOJZTAJZARJDUKZVARDMBSMEVKNUMHYTQWBKNXPOVXLLGJHOHCWXMBXOFQCRVCJDLPAWSNQDYXMWEYLSNSKWW");
    msg.lat = 0.47865242740352365;
    msg.lon = 0.9243386319243372;
    msg.z = 0.5298202898864727;
    msg.z_units = 174U;
    msg.cog = 0.8150235184530245;
    msg.sog = 0.5163401859809047;

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
    msg.setTimeStamp(0.6185423156228472);
    msg.setSource(63856U);
    msg.setSourceEntity(146U);
    msg.setDestination(25642U);
    msg.setDestinationEntity(12U);
    msg.label.assign("MNSKJSIHXTKMYNBURRSRGEFCOTWCOYCAYPMXNDSLPAYSOTCJTSDDZA");
    msg.lat = 0.7982774785035168;
    msg.lon = 0.8924999065403779;
    msg.z = 0.533564249912207;
    msg.z_units = 197U;
    msg.cog = 0.09569062091790737;
    msg.sog = 0.08406525654550223;

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
    msg.setTimeStamp(0.2944106735248332);
    msg.setSource(45844U);
    msg.setSourceEntity(217U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(57U);
    msg.label.assign("AGCGCQCYLRBJYDQSYMDDGVXREMOMYOPMEHPFHGEQHUUBTBAZKMFQWNUZSXWBXDMMIZZRKCRYSRPSERXDPZPIHTUTKZUVONFXKEHHSSENYWICLLLXXKOVNGIUCGMPGFEOFBLLAUOTRKLNDDVJATGQGJNJGNSPHZTQLJFBIPWWHBREKIWZJSQNYLBWWJOOAYSATFIVOBFJCJUAARVXEPFLYHMXZDKDMVWIBUVCTP");
    msg.lat = 0.022904476330382395;
    msg.lon = 0.747894089731254;
    msg.z = 0.7610639666230489;
    msg.z_units = 178U;
    msg.cog = 0.9903412140353889;
    msg.sog = 0.3495173567399572;

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
    msg.setTimeStamp(0.8754607813883944);
    msg.setSource(7378U);
    msg.setSourceEntity(112U);
    msg.setDestination(23478U);
    msg.setDestinationEntity(223U);
    msg.name.assign("JPCZDHECWJMVMGFQKNXIADQDXGVWWBYTXRKPLTSAEGKVGJDUBCCOHQUMPAQFFEXXQUPZOFGIUKPDAMGKRZUROLWTIOVROLTRARMPIPJHCWEMOZZHKHNXIYQLKDHVCRLBNQMLEYWPUFATAUHBAVFMJCWDCBGVNVGBSVEZWMBSLONJNDRZXUKTLOAIJCJELSZSJBYEHYDWUPNFIGNBNYZGDAQHO");
    msg.value.assign("LWXCGPYPFLVGCYUKERBRQBTYIDJAXBHUJXBPLNQWXVKVJDOSTWSJGFATVCDEXSHLIZWZJAJHLSZVPVLHGKYXDMHLZJQZZTDFKEQDGCLIDGUSWICMHRABFKEJTFBOXXUUYOMKMUSLKJNOHTFGOBFPRZIDNFQWQZGESIUWTIOEJRPEKPMQZRVVLIMYCKKEWRTWUTDOERFCUFAHUZONNNDWNP");

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
    msg.setTimeStamp(0.7405241298824071);
    msg.setSource(37197U);
    msg.setSourceEntity(171U);
    msg.setDestination(49198U);
    msg.setDestinationEntity(254U);
    msg.name.assign("UYMFJXJZSHWCOAWYQZVFBGUSYLERDMJHBVBSFHGKROTJWPIXQICDYJOCGDZHXMLCLGQUSME");
    msg.value.assign("SEZHBKMILUEHWYZRKHYEUIFZUFIDBKUTGCDMQFYMQGXPWU");

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
    msg.setTimeStamp(0.459990398722011);
    msg.setSource(48686U);
    msg.setSourceEntity(26U);
    msg.setDestination(2698U);
    msg.setDestinationEntity(234U);
    msg.name.assign("FIAEPPNGTBDXFVWEVZZOWSMGOKQKDFYTDXXJUWGPWJEMYRWAKSZDBZQHVACTPDLYZTHSCQEERIJYJIIVEIEDHJWOVTNBXMFUTZKRFYNZGRLNYMXBKKUUPOHNKFTQXNNRJCPZXCGOSNVGOLSQKRPOILCTBRUAARVLDTAIGMZOOQDMVYGKOGGQMBENJQLEJZLUCLPMXNSA");
    msg.value.assign("OMVLNVJQMOSRXSWPQIRQTTXHLHKYCHQGOIKNKTHWZBGIOBJYLVDNGGKZLYHGIYFEZVMAFENKQBPERCGECOYDLJEMUFGASUHCYWI");

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
    msg.setTimeStamp(0.6900009661519426);
    msg.setSource(64089U);
    msg.setSourceEntity(137U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(95U);
    msg.name.assign("NOJNWXKHRXETSIQFEWYZNBBLXBXDTSDEOYFBJDGQTMUHIVUZLZHHKSHPYWVRKHJJTNSULJLGDQTYIUTEXMXWQNYBABDSMAKRQFZUEEPFGFANMODHBWKRBMUYBCZVTCOJLGMBDXIHQRGQDWMMFVAUISUPVRJHMTGVCNSIAJGWF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ENIGKTKMNYSRCZIEGFQPXNJOJAQVRZIOOOQDQNOMYBSZJHKFWFYAAIMENXUPXQFUVBUGMNLEZDWVGFXZQTSYTBMZZEXSHPBVKLKCJPLQVFDEEYDAGSEWWGJCRPASNJNQBLODTSPZYRXIOMQCDXMRKUAUKKYSVICTTHJNSEBVHSLJKFLAVDVXAWQBWORBLPHYFNGHJUDWFBMIPDAUUMICGCMXW");
    tmp_msg_0.value.assign("QOIJBFUKGUNUWTPTKWKNQEASRICOHHVYPCWYZZMUMWKPLVVKPUUWABNEZTWEMNKTRRVDIDNDYTQTSMPJSBFJGJRZBVCYGSJGXQVLQGOOQAWKXUEEXCAYUOFZLDTXRAZKDXPBYSNTFSIPFBFAMHADKEXCJASYOMJLTINDYMILNGCEAJFFOVDBHGVFPZQRLXPERGLJEHHYQNXKFZLBRRIJICVSWHGXCDOLUSO");
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
    msg.setTimeStamp(0.49248257002693185);
    msg.setSource(170U);
    msg.setSourceEntity(212U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(88U);
    msg.name.assign("BPOFNPXABJMHRFFZSAWXRVZMAOHEWBTKCIEPVJXM");

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
    msg.setTimeStamp(0.5562254686919966);
    msg.setSource(46096U);
    msg.setSourceEntity(208U);
    msg.setDestination(16358U);
    msg.setDestinationEntity(60U);
    msg.name.assign("ZRXBLARKBUJQFHZZOJICNYXFYCKWOUUEOCRLBPHODTRZWSICSOAINIMRKMFGXOBVEZBMIYTTWSWVSVNOJGPBYHOPHVXIDLQEQSMZMRSUNOMQWNGFXAZPZKUXMXCAPUZRRVYHNNGSAFTPFVYBTGYTLJMGALDAXVFMXEPQPLDEDGBIJPWJLHIVDTIWRQUKDCKIXJLEGHAKANWNOGTQHYVTGBEYDQCSWQNQJALLKUECHUJDEKYFTCFUDCJMKZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RMNVBAVHBXMWEQALOMTUJIFWJACJTXKEWMRALNOZUQCRDLDTGDDYKEOTNHGPQOEUITLSPMFSHXAWCKHGJOZKUOSBPNPQCXIWXHVBWMVRPAVERHZGHQICGYKQZWVCPEDWMXPEITDLGPJSSIFKLKZIUCUNDUTOZNEUCDFAQLCQFLTZXROGXXRVCSNOHSZJMBWJKKAYBFVLYMYN");
    tmp_msg_0.value.assign("RJZQBMYFASVYHEJUVKPUMPBDCZPUCDTLWLGLPSQEEQLZHUIIBDDKKVXQXNQDRBGOICGCCFXXMWGHNZSSQRARHGBHGRRQKIWEOJJVVFVXXAMRUTTRHFRBGMYGGUFQWJOKOKOSTVHHOZHFYWWWKYEBAYCAAWDLULASJTFSJYXZFIWDRLSZPMTNTDSCYOHOFATMEGIAPZIYIVPSYBUMNLIMCNZBXPEDLNPETTIUBNVJNKZJKLDCWUMFKEA");
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
    msg.setTimeStamp(0.26365269656029366);
    msg.setSource(9734U);
    msg.setSourceEntity(92U);
    msg.setDestination(18114U);
    msg.setDestinationEntity(118U);
    msg.name.assign("ZHSDUFSJBDRLQTBPHGQESZWZW");
    msg.visibility.assign("ZNZFAXFBMKOEYSNQPXFVUEMH");
    msg.scope.assign("SYPKOCTXGZRPFSNEDYHTBNIAQYPCUROHMAOENQUFQXVWGRNUJGVXIFPBETXNODHRSSZMGBVTNHLYUTTZXKENLUQSWLWMRAWUYBCFJLFUCEIRKEJRAMBOXKTZJCFASPDGCTWGKEQKHJGVXZCLKBIZDBOHHUEJTDQFIVIUXAOKDCSKSCMEFYJDLXOAPNERORDHWPVMYDHG");

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
    msg.setTimeStamp(0.9806198922661449);
    msg.setSource(47893U);
    msg.setSourceEntity(177U);
    msg.setDestination(16383U);
    msg.setDestinationEntity(181U);
    msg.name.assign("ZAENHCUYJISBCYGKUAWCRJWRRHTHPFMOBPXHYMDXUHLIMKZRNGAZSJSLDLATVZWVSRWVMKNOKFTOVFSDNDBUHGLLZSEIXCGSQQIXDTUXNHSSYKGMPCZPCHODOWQUQFDVA");
    msg.visibility.assign("MEPZMLGLKRICACSYHRFSQZPXBFVWWUZRLFTAQFTPEEMVDPNYOCBMBCYPNS");
    msg.scope.assign("OHPEEGBMRLWYKGVUEMQPRSZRXTMAPCACFSACGCLYSWNORXHNNKCKUKFSPQYLSGLNNZNWUWHTXAFVHDBOZRLIAMZ");

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
    msg.setTimeStamp(0.9280401440229031);
    msg.setSource(2834U);
    msg.setSourceEntity(111U);
    msg.setDestination(15456U);
    msg.setDestinationEntity(36U);
    msg.name.assign("VQFZCIRNJBOQVNWEVCQYRXILUOUJENZOPIVFXTRELDKSRFLSHOORIVGNMKPDLTAMENJKVDYMDKMMUCQRCNKUPCRWYHHJLZZSWBZPZAZUMVFONMVFADJYJRGYWWDPJZJWATWSAEWDMKYBSBCKH");
    msg.visibility.assign("QQQGYSHNSZXAYFYSIOMTAMCOQHEUDRXCAYGKUBPHBYWMIMKWLXTAMHOQTDOAVURNJGZJIALGAGLJXFFIULQIBZVAXGVQSYFIFDJWTPCYEBEZKAVLERLBCDOWSRMNTEWBPBYKVLGDFCXFQKOFNDLFEQWPAYOJRHZPEEXXUUZVPRIRGURNNKBPGMZINHIQNBRCKRSTCMCSIHWTVYOEDNBWUOUHSTJGEZPDKVCMSJVKT");
    msg.scope.assign("OWXUQIMOTZOSZOJCCCQAWGJDKNLKCLTPZKXGLJVPNKV");

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
    msg.setTimeStamp(0.8640272084708024);
    msg.setSource(63804U);
    msg.setSourceEntity(135U);
    msg.setDestination(52673U);
    msg.setDestinationEntity(39U);
    msg.name.assign("FWKQJUYBKXNZFMCVHNMRTEJULJBNFJCACFRPSVDMKL");

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
    msg.setTimeStamp(0.009664640224232746);
    msg.setSource(8626U);
    msg.setSourceEntity(66U);
    msg.setDestination(60036U);
    msg.setDestinationEntity(7U);
    msg.name.assign("SLMPREFYSKUYYCRCCFOIBTCFNHPJWJSAZKYKVIDZRMOPSNPHOSKRHPBGZNJQAIMJTQGSARHNLXZLTCKMJHKDAAHFYWDNCQBDQQHOITMDVBCDFXEZUD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WIBTGACEUQJKMIOAKYFJJCUBLVNWOYLLGBPLTLKQSAAUQTWDCLCSVEQXTXAQIZMWXZUHVMLZVHEORWZVNPYNWYJEDFMFYNCFEDAIPRYHHSKPTHKVSPIWINSMXZFOZYQTPJHOJJAGJEVQKUYCLQIJXNSTUMNDDNNGXBTRPVC");
    tmp_msg_0.value.assign("QPBGMBWAGXUQURJTAVDGJWFHASLKTKYIPJJVHRFEZOHQWQIOTFWLIYLJPFDEMOSRBDCBCRYBEZEGICTBKERVLWOFKMYNVLXLBNBWLQKITJAZAXZGCSZEOMVQSZFKFUYICQWUZJCCPNTTRNRHYZGJTVSMEXXORUUSDKXGADVRXMWAIOAHHZLNBDLPFTGDKV");
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
    msg.setTimeStamp(0.815765079070906);
    msg.setSource(11218U);
    msg.setSourceEntity(132U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(108U);
    msg.name.assign("SXUKNHPITJTEABAJYICDLVCPFXHOOXEJWFIHARDNSBTTIBCIBCMGZHDMFJPCTIKBPABOJBIARNUKWGORHGQWJYETQADLJFJXUPDMODCZWLNE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IHZODWBNFLHPSVMCVBWGFOMWJRKSCRGLFYLPMEZUCORCTHMCDBHSCQURNIITAOKLCNJOFUWFVBUNVQMOBXLHTUDDBXLOVZXIBHXKJAWSGKXWSPNKVYPTMXMESQDVUCWKTQIYCGTTAKWRNGDZIAGMERHOXAHEXGIYTLQNFIZYSVJAIJJGYZVRXFCWLPFIZYQYANUZULPBHVJHYFJTTPQONKEQESDKRWPQFBD");
    tmp_msg_0.value.assign("WAERIIBUWJEBXQCIPANDQIOGGWHDAXOSDEBBVRPMMHSVFF");
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
    msg.setTimeStamp(0.8856336016218564);
    msg.setSource(56955U);
    msg.setSourceEntity(99U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(110U);
    msg.name.assign("RIPBCHNHGDNCBWAUZREKGWRKCLLNBUOUPXLRDTKKCOUSEVOZOSMEZUTQQXIQSQWTWYMFFLNOSNAPNXJPNXNRVIZHAFSHQDCMDYGMWXLQGEEWMKFFARZPNSOATKBHFODQEZVLXKVHFBMAJTXFMJDUVGYAJIAVGULYOAPXASX");

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
    msg.setTimeStamp(0.899410404092009);
    msg.setSource(6937U);
    msg.setSourceEntity(97U);
    msg.setDestination(1271U);
    msg.setDestinationEntity(83U);
    msg.name.assign("NYDNUSXXKGXNGKZMYDQZMDYOVNGMASWWXHOAXCPVFVCVROWTEMEVBGMIJIUFFGKNUMJJVLXTJXGPHANSPYKYAOPZEIZHOGHSYIKSLBTTGPDQCHTLVQBHLXFIMCNJWJPBPUKOQMFYRJZVQEUKBFIEWEICHEKPHYBWRTBPQGABUQBLRAWJMIBCLUFROWXNZLSEDQTKGAFDHCEFWUAYDHZDVSQKWMEQSZCDZYT");

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
    msg.setTimeStamp(0.4208258251292558);
    msg.setSource(39790U);
    msg.setSourceEntity(175U);
    msg.setDestination(56680U);
    msg.setDestinationEntity(165U);
    msg.name.assign("ZKUGWHBZRYQNPJLOWLXWLIEDQZGCTUJGUALQOBEKFELPSVGFSMKEGOIDSEANAAQYTIYOZBAQYOKFURGYSBAEJMFTTSDVRZOSFUXKNLHHDNLMOXWANPMDOSXPKTKMYZBPMWTPVQCCPGKWRFUMRWNMXZYGKITFYLTLQRTXJXXOCLPZIWBVAEPIUCP");

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
    msg.setTimeStamp(0.15922802828382077);
    msg.setSource(32033U);
    msg.setSourceEntity(39U);
    msg.setDestination(63069U);
    msg.setDestinationEntity(29U);
    msg.timeout = 773271541U;

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
    msg.setTimeStamp(0.4165766887591231);
    msg.setSource(36511U);
    msg.setSourceEntity(153U);
    msg.setDestination(18111U);
    msg.setDestinationEntity(32U);
    msg.timeout = 4229020065U;

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
    msg.setTimeStamp(0.15731534081169507);
    msg.setSource(61037U);
    msg.setSourceEntity(69U);
    msg.setDestination(46243U);
    msg.setDestinationEntity(54U);
    msg.timeout = 3632575672U;

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
    msg.setTimeStamp(0.8216266252850603);
    msg.setSource(41595U);
    msg.setSourceEntity(187U);
    msg.setDestination(39983U);
    msg.setDestinationEntity(60U);
    msg.sessid = 24947789U;

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
    msg.setTimeStamp(0.6898639887424276);
    msg.setSource(40041U);
    msg.setSourceEntity(240U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(128U);
    msg.sessid = 4048653080U;

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
    msg.setTimeStamp(0.14051814533876028);
    msg.setSource(14083U);
    msg.setSourceEntity(197U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(163U);
    msg.sessid = 1495243667U;

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
    msg.setTimeStamp(0.3998422223284561);
    msg.setSource(6506U);
    msg.setSourceEntity(82U);
    msg.setDestination(55214U);
    msg.setDestinationEntity(230U);
    msg.sessid = 290240069U;
    msg.messages.assign("XQWKVJDZSJBIQMTWDBESGUYOQXUIZHXJELGFTSBOHQOUMMKDSCEBIZRILGINCFKNLFGEEXVDVJXUTFBPHQKFNJILDMUTSAGGCRVNIVTYAORWMCNCYVMLMPXRNCIAEWD");

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
    msg.setTimeStamp(0.5729324076420017);
    msg.setSource(53334U);
    msg.setSourceEntity(124U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(40U);
    msg.sessid = 2781645730U;
    msg.messages.assign("YEOAXKLGNWBEIZMKRNW");

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
    msg.setTimeStamp(0.1140746794634313);
    msg.setSource(9534U);
    msg.setSourceEntity(103U);
    msg.setDestination(35090U);
    msg.setDestinationEntity(110U);
    msg.sessid = 857450971U;
    msg.messages.assign("SBMJIFNOPPBXQUAYGSCKPOGLDDFOLOBMCRARSYMZAEIOCAKGSPVIDEFATCBFYECFCMELIIKKHWDHTOHJXGGLNXMIMQWZEGLGXXDTBPKKJMJHQZJYNEQFSBZLTEX");

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
    msg.setTimeStamp(0.5294262180428639);
    msg.setSource(8338U);
    msg.setSourceEntity(96U);
    msg.setDestination(33300U);
    msg.setDestinationEntity(253U);
    msg.sessid = 1709102626U;

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
    msg.setTimeStamp(0.43683948655793103);
    msg.setSource(31043U);
    msg.setSourceEntity(114U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(9U);
    msg.sessid = 1136453585U;

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
    msg.setTimeStamp(0.08548570579791526);
    msg.setSource(51690U);
    msg.setSourceEntity(172U);
    msg.setDestination(24699U);
    msg.setDestinationEntity(155U);
    msg.sessid = 1918010976U;

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
    msg.setTimeStamp(0.0255067344609774);
    msg.setSource(51325U);
    msg.setSourceEntity(156U);
    msg.setDestination(15332U);
    msg.setDestinationEntity(246U);
    msg.sessid = 2153428306U;
    msg.status = 67U;

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
    msg.setTimeStamp(0.08497235720870933);
    msg.setSource(20208U);
    msg.setSourceEntity(137U);
    msg.setDestination(30786U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2849472934U;
    msg.status = 53U;

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
    msg.setTimeStamp(0.06246740972996834);
    msg.setSource(12177U);
    msg.setSourceEntity(63U);
    msg.setDestination(16231U);
    msg.setDestinationEntity(172U);
    msg.sessid = 424603508U;
    msg.status = 52U;

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
    msg.setTimeStamp(0.7326774888111637);
    msg.setSource(3484U);
    msg.setSourceEntity(75U);
    msg.setDestination(43327U);
    msg.setDestinationEntity(213U);
    msg.name.assign("VCMPLYOWWFQNHDTJWIAQJXRPVXRFXDHTLSPKVOEFYJQINOZFLGSDCBPXWZVOBKNWCEIYCELPABQQEMWXMFBKHGCSUNJAOPMLDINL");

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
    msg.setTimeStamp(0.2859962982651284);
    msg.setSource(41559U);
    msg.setSourceEntity(42U);
    msg.setDestination(59148U);
    msg.setDestinationEntity(168U);
    msg.name.assign("BIOZRBLKYHUKUCVALCQSGTGOZTVSROEDAYNZYLDKPBMHCMEVTNRMIVSSUBICJFFULQIVIEGICQPLIVGNAUKAWDPFRXDHUOXVJCPTSARVEJTYPWWFLJXMFXWRABZRXMLCEHLABTUWEJHDUWWCHXPZFEHRMQKRYKKLPOKGTXNIIYBHEFMYSPDMXJT");

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
    msg.setTimeStamp(0.14173524885570654);
    msg.setSource(52604U);
    msg.setSourceEntity(11U);
    msg.setDestination(41923U);
    msg.setDestinationEntity(34U);
    msg.name.assign("UJKEXZVZRIYXDNZEKLTQAUYHEKXAJTQJOWGGKQOPHAAVXQFAHSAUAJHVMWKZIIBHCDOHERMBCFKEGWICERISCOOSFEFKTGWNZAPAXQRPJUDDUFURGBQNILQNDSBRMPYQLYMOVBPFLCJWCKUZPCSCLNVITLELNDLWZNMBJMJ");

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
    msg.setTimeStamp(0.35957501770289335);
    msg.setSource(12559U);
    msg.setSourceEntity(116U);
    msg.setDestination(36060U);
    msg.setDestinationEntity(56U);
    msg.name.assign("OJNFASUCUNKKJHKAYULOV");

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
    msg.setTimeStamp(0.8988573113989706);
    msg.setSource(45871U);
    msg.setSourceEntity(88U);
    msg.setDestination(54035U);
    msg.setDestinationEntity(210U);
    msg.name.assign("UWZVCWGFIYIVNICMEXYFPXYLHMGIIZYKENJHBRXSVLVQCWUBWBAHDPWUVJMRTHPRLLDPBSXGNGSQEGURPMDOHOMPTIUUWFWWBREKMNMFPLESCALUXBQJDWVTDNQEYFIGQELNQRSCVTOSAKFTIRZTZVYOQUAVCHZSADBOKOUIXATWSJZLPKJDXZKEVZCIFYFMTHCJGSTEKDRJELKXCGOMBPQAJGQNYOCQKMBYJKHJARDXHBFHTRFNYODOLUZAPG");

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
    msg.setTimeStamp(0.3090388401004579);
    msg.setSource(18173U);
    msg.setSourceEntity(27U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(117U);
    msg.name.assign("PLIOISWVRMBEUKAGFDLUHFMTZHCUGFQLTZNJEKTSVPOQQMILGNMZBYVDKCHITDYBXNNOSDHNWCIRKKSSFGAEKIYYAECVITGSLXVUGRBVSDZOHAPPREGWTJMFBVYWQALEMXMNKRXWZHJRSSAJTXMDLWONMTXUIJQJVDYHMAJDPHUAROGDENCWFEWHCOIOTZYXBKDWRLXCYHBPWCGPEFEFR");

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
    msg.setTimeStamp(0.559014544244117);
    msg.setSource(16698U);
    msg.setSourceEntity(67U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(215U);
    msg.type = 76U;
    msg.error.assign("AAPOZSZGWDOAWAHVXFHREHPKKISQKPWXJDVGWBZDCVNESIKWYLHRYUXPECROFZETUMXGMBAFHBRITUSJHMNIAICVPNAJQTNUGRISBGWLJVJJBPLOONECKAUTKNEQLGHFDHYYDRWQNKJYIUUXQRAYDQGFOABNWXQDTYFITCUMLPD");

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
    msg.setTimeStamp(0.9559478822314377);
    msg.setSource(6659U);
    msg.setSourceEntity(209U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(203U);
    msg.type = 119U;
    msg.error.assign("JLBUBDGUTXQFOCKVLZLVCFTYHCAYEWSOTJSSWAC");

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
    msg.setTimeStamp(0.7656853120411125);
    msg.setSource(41510U);
    msg.setSourceEntity(170U);
    msg.setDestination(53409U);
    msg.setDestinationEntity(163U);
    msg.type = 89U;
    msg.error.assign("NFENJWUMUXLIBLIOQHBYGHYYSOCOQALSFDDTOTKHHKFWGIJFWGINMUWASERQHLNOXAMWBXRLDLIYPLYTZRPPRZAZJGYMXQZWIAXKXFMXGFMNFIUYQSFOJVJBZNZVQCPBWTWPHTDBGRBCYCOHTDK");

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
    msg.setTimeStamp(0.013733411634701986);
    msg.setSource(22888U);
    msg.setSourceEntity(203U);
    msg.setDestination(15091U);
    msg.setDestinationEntity(49U);
    msg.seq = 50925U;
    msg.sys_dst.assign("GMNMLVSWLVUXDJEYEGMUZOVTXURGSOHUKIYIGIUMIPDDYRHEVWBQFOYCJXLAMBNWLHCJCMAXQKNCHUKRHCVOBKKLWHGESFRTMLKILY");
    msg.flags = 149U;
    const signed char tmp_msg_0[] = {104, -97, 39, -68, -121, 11, 83, 3, -128, 16, 112, -33, -10, -98, 23, -12, -9, 52, -56, 86, 37, -21, -66, -78, 94, 93, 50, 46, 115, -82, -36, -109, 74, -50, -45, -109, -66, 80, -38, -50, 1, 9, 97, 10, -100, 115, -34, -80, -128, 125, -116, 112, -28, -22, 1, 22, -125, -52, -20, 112, 31, -118, -58, 9, -82, 110, -86, 95, -8, 4, -22, 1, -84, 123, 101, 41, 93, -26, 87, -86, -110, -13, 17, 70, -123, -71, 56, -125, 50, -68, -27, 18, 41, -32, 31, -19, 117, -70, 40, -78, -39, 106, -35, 68, 94, -26, 29, 58, 27, -21, 103, -7, -102, -105, 120, -60, -127, -67, -21, 9, 73, -54, -73, -57, -6, 118, -46, -100};
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
    msg.setTimeStamp(0.5293702543658314);
    msg.setSource(33878U);
    msg.setSourceEntity(124U);
    msg.setDestination(44030U);
    msg.setDestinationEntity(69U);
    msg.seq = 55720U;
    msg.sys_dst.assign("UGJFDIQNECWDNYZZFCCQVHAVIAMQELDQBTBIYBXNGFLXJGFEFDQZXPEGWWIOQKQAITMHZUPITRMRYRVOLLEOFOOHMMETYNOHDGVTFSZWSCMUWSCKXEIMVRKJJNHMPSXPGGUAUBSTFUSULPKSXJJTDWSLYRGRYMCYVCVONSVYIUDCRRXBZAJQN");
    msg.flags = 50U;
    const signed char tmp_msg_0[] = {115, 58, -44, 96, -92, 10, 110, -20, -9, 89, -62, 91, 98, 11, 5};
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
    msg.setTimeStamp(0.25335186413500155);
    msg.setSource(39196U);
    msg.setSourceEntity(48U);
    msg.setDestination(1003U);
    msg.setDestinationEntity(75U);
    msg.seq = 36421U;
    msg.sys_dst.assign("NYKMWWJRJHCXDCUZICYRKIZBXVBYYUWUQOOJILAFZXNDMGEIAYTISFTKZYMJGARQOZYVKAATOHHTJKGWAWZEVBDMVXWVWRTSNXOUCWEPRKDNWMWIFDMXXEJLOYULHFEZLQDLBGLBCJQKBSTQESUDONHAAOJFEGAKQDEGCPYMPGNBFZIPYIPI");
    msg.flags = 51U;
    const signed char tmp_msg_0[] = {-28, 3, 53, -44, -17, 11, 84, -106, 26, -21, -57, -33, 117, -96, -62, 119, -90, -57, 58, -42, -125, 77, -69, 66, -73, 28, 12, -44, 17, 75, 15, -35, 7, -91, -28, -100, -96, -30, 82, -42};
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
    msg.setTimeStamp(0.6397055664888649);
    msg.setSource(63623U);
    msg.setSourceEntity(64U);
    msg.setDestination(33551U);
    msg.setDestinationEntity(205U);
    msg.sys_src.assign("CYPMRGYAISYIPNJXACDDHBGUMYICCNIIVQEELGOOYSTMXPWRFDFDEJRNARQPDVOEHTVNNCVRBTHAKDKFLWEPTPGSVSYCQHYOKCITDVI");
    msg.sys_dst.assign("LFVJWOUEGPSZRLCTYDPGLBWKLSHBCNVSIMDPLIWWRDJYOXJINDFJHI");
    msg.flags = 61U;
    const signed char tmp_msg_0[] = {90, 73, 40, 122, 79, 63, 32, 1, -2, -103, -114, 78, -116, -95, 55, -21, 62, -6, -115, -19, 35, -1, 105, 107, 84, 79, -68, -30, 54, 55, 81, -70, 117, -124, 72, -42, 5, 2, 37, 87, 114, 86, 19, -26, 77, 91, 33, -81, 126, 79, 71, 62, 79, -45, -98, -76, 10, 88, 29, 42, -117, 69, 104, 49, 75, -8, -71, 27, -49, -109, 31, -16, -14, 37, -99, 69, 77, 32, 8, -33, -77, -16, 9, -17, -32, 42, 70};
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
    msg.setTimeStamp(0.003208785503095668);
    msg.setSource(14387U);
    msg.setSourceEntity(173U);
    msg.setDestination(19869U);
    msg.setDestinationEntity(145U);
    msg.sys_src.assign("XOIEBFZNESX");
    msg.sys_dst.assign("UVJEJMRCURUOSTPRBAPAUDMCIRODCTYHQZWDSGVLWQKNNHXZNVAJKFBHWCEUVQTPRWZBZLFGBOGNZVGEWZSGZGAIBQZAMYPWTJCIRAHCAQIYLMYVCMYEXFDQNLXJSWCIPJTYKKNIOKBRNOMQPXJBSNTLIAVLDZESHXFMPHYOAHJFJQFFLVODPWTLKWFIEKUPQOMWZDVXOUHHRVTEEJGDCDRBKUSXIABHDBUFEXUYSXNMSOIFEQKXYLYRPKLG");
    msg.flags = 181U;
    const signed char tmp_msg_0[] = {-97, -75, -110, 123, -53, -32, -111, -102, 33, -86, -3, -81, 19, -39, -49, -26, -89, -126, 16, -105, -122, 101, 62, -13, 8, 29, -75, -27, -36, 8, 61, 47, -125, -54, -36, 52, -109, -70, 89, 6, -94, -64, 37, 93, 124, 108, 119, 43, -66, -3, -59, 19, -14, 115, -69, 93, 101, -41, 16, -36, 96, 32, -77, 13, -10, -40, -26, 27, 77, 80, 77, 86, -77, -95, 74, -84, 35, 38, -12, 9, 7, -13, 92, -100, 45, -127, -126, -13, -105, 20, 40, -120, 16, -80, 22, -16, -84};
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
    msg.setTimeStamp(0.5402993389995465);
    msg.setSource(39204U);
    msg.setSourceEntity(79U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(128U);
    msg.sys_src.assign("UXCYSCUFOHZSMHBRYGFITQIHOIFHIQKVVL");
    msg.sys_dst.assign("EUNRWLDLKLSXPTMUEFTGCKXQTAAZWZANOIPOFUWELNGIWCZSABCPFMAXMIHSZNMNVQBEIOPBEIQDNDNHDZVYDJQKYGSIFAKCKGDSRNQUTJPQJSPUTKGH");
    msg.flags = 88U;
    const signed char tmp_msg_0[] = {-94, 45, -57, 23, -27, -53, 3, -54, 70, -10, 35, 96, 110, 114, 73, 5, 28, -67, 43, -89, -79, -19, -64, -45, 60, -105, 97, -8, -27, -65, -58, 8, -96, 95, -92, 37, -118, -24, 51, -10, -126, 56, -114, 2, -62, -54, -127, 39, 11, 123, -77, -56, 92, -26, 50, -25, -86, -42, 43, 70, -7, 17, 20, -57, 104, -28, -46, -40, -120, 5, -9, -66, -128, -9, -107, 97, -110, 33, -17, -7, -30, 88, -27, -88, 91, 26, -9, -125, -49, 49, 118, 71, -31, -11, 106, 64, -37, -102, -32, 6, -18, 41, -123, -95, 60, -83, -43, -119, -97, 39, 11, -2, 85, -45, -48, -94, 95, -41, -11, -110, 60, -51, -105, 72, -7, -39, 67, 77, 5, -56, 57, 80, -71, -79, -85, 29, 116, -68, 46, -78, 22, -71, 95, -67, 26, 85, -4, -38, 102, -104, -43, 29, 61, 7, 89, 36, -9, -37, -11, 81, -21, -38, 28, 50, -86, 59, 115, 68, 120, 42, 80, -79, 56, 73, 39, 71, -108, 34, -23, -19, -14, -100, 59, 110, -34, 52, -79, -48, 43, 81, -128, 75, -109, 4, -80, 0, 3, 54, 28, 11, 104, -13, 54, 53, 10, 75, 16, 123, 113, 90, 106, -10, 92, -19, -117, 13, -66, 15, -89, -92, 62, -57, 11, -14, -47, 60, -53, 86, -82, 22, -61, -49, 60, -92, 48, -17, 36, 123, -14, 54, -65};
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
    msg.setTimeStamp(0.9732958051449393);
    msg.setSource(53117U);
    msg.setSourceEntity(253U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(205U);
    msg.seq = 46546U;
    msg.value = 184U;
    msg.error.assign("RFOWEZXAGOWFIAEWLXGHNDLLMJEOALVYDTWBDXMPIBBFHSBJSNCVYUQWWPRSYNHGSUQQFFYIMZYKHKKXLEAAWNCSKKTAVDCPAIDTPGVZMNJJHKA");

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
    msg.setTimeStamp(0.023106540851340895);
    msg.setSource(40515U);
    msg.setSourceEntity(235U);
    msg.setDestination(31871U);
    msg.setDestinationEntity(190U);
    msg.seq = 28103U;
    msg.value = 18U;
    msg.error.assign("EIKBBYWZLGZCCYBXLCKDTLUBYVRBMWMEOZBOAN");

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
    msg.setTimeStamp(0.5635397615140549);
    msg.setSource(43832U);
    msg.setSourceEntity(8U);
    msg.setDestination(55088U);
    msg.setDestinationEntity(225U);
    msg.seq = 16304U;
    msg.value = 202U;
    msg.error.assign("PKOSLMANEEWAYUDYQYTILM");

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
    msg.setTimeStamp(0.35541939067567174);
    msg.setSource(45688U);
    msg.setSourceEntity(85U);
    msg.setDestination(50814U);
    msg.setDestinationEntity(11U);
    msg.seq = 49403U;
    msg.sys.assign("BUPBUAPAJLCVKNAOAKAVQWLMILNDZTLNFJPJZNCSZGNMDLNEYHWQZPYWRDRHVXNICDSEYMQZXFPMQFCHWQRZDKQKMPJTNQZEJTXLCTLBGTMXZGRQCNYBSVOJSHISAUIHDYCOBKKJUTGBFUHAALRXDOOEIIVKSDKMFWUVISRSEEYTAIITYOCGRBWWOVFTWSGHFMUZGTZEMLGWKCBVENRPOGYLFBXHQHXOMDKYPXRVREHJEDUXUGQXPJOAUJB");
    msg.value = 0.8752632812340203;

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
    msg.setTimeStamp(0.5915889329777652);
    msg.setSource(33611U);
    msg.setSourceEntity(46U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(52U);
    msg.seq = 34558U;
    msg.sys.assign("JIGTJNYDABQZXFTYXHTZOYQFORGRWVWNEVAEEYUPTWUJPMWREVCXWSSCDPIPWTV");
    msg.value = 0.7923080626869724;

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
    msg.setTimeStamp(0.04341267061960774);
    msg.setSource(16707U);
    msg.setSourceEntity(79U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(121U);
    msg.seq = 41528U;
    msg.sys.assign("DPHWKSNOZNTEYSYNVBQNFCEKUXPXWHCUBLQGQXAFQEVMXBSXZRZFCJTCTAVGQWRVLTWVMEHOYKRCVPJOEXCXELLZNSAAMKUENALWPTWQFFJEVUUYMMZFFUIHTCPQIIGSTCIKVGPOMJKOLOGIAWPZWKDISGCBJQXSMBGXSDHDDRQZQGTLFONPXULYHKMTGENRFDOUDPBDRURGNDR");
    msg.value = 0.12712032746084467;

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
    msg.setTimeStamp(0.8411694182338392);
    msg.setSource(18127U);
    msg.setSourceEntity(33U);
    msg.setDestination(31694U);
    msg.setDestinationEntity(194U);
    msg.seq = 18559U;
    msg.sys_dst.assign("PKCPXWARPMIQUUCNTQZEI");
    msg.timeout = 0.1331782570432718;

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
    msg.setTimeStamp(0.21643102711612328);
    msg.setSource(16906U);
    msg.setSourceEntity(223U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(142U);
    msg.seq = 472U;
    msg.sys_dst.assign("KPSUOMIXYQXBLDZVUTIRSFLNQOMIRO");
    msg.timeout = 0.5513128516277815;

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
    msg.setTimeStamp(0.6005447116611345);
    msg.setSource(57718U);
    msg.setSourceEntity(74U);
    msg.setDestination(37012U);
    msg.setDestinationEntity(19U);
    msg.seq = 42300U;
    msg.sys_dst.assign("PNEILMCNHBGZZXDLVQBMFAQXTMRHCOAKTKGZHGYJFJUNEGCDYONWGAMUDGVJWPHHXYODMTFKEDCSLPUEBBFYTOLKEOZVAIBKGRHJSNHPLVBEQTQFUTHJRSGIKZOVZCCTIRMYXWUDWIXRWPJAPM");
    msg.timeout = 0.6749645038566477;

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
    msg.setTimeStamp(0.9071539461329863);
    msg.setSource(30406U);
    msg.setSourceEntity(54U);
    msg.setDestination(32094U);
    msg.setDestinationEntity(145U);
    msg.action = 39U;
    msg.longain = 0.17396049085456033;
    msg.latgain = 0.24727040840830283;
    msg.bondthick = 851388060U;
    msg.leadgain = 0.3662968889860567;
    msg.deconflgain = 0.5886541013772869;

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
    msg.setTimeStamp(0.7678438713164384);
    msg.setSource(25697U);
    msg.setSourceEntity(5U);
    msg.setDestination(61877U);
    msg.setDestinationEntity(108U);
    msg.action = 87U;
    msg.longain = 0.7442541715113196;
    msg.latgain = 0.740187272181964;
    msg.bondthick = 1956356686U;
    msg.leadgain = 0.785403257112356;
    msg.deconflgain = 0.31682137248778064;

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
    msg.setTimeStamp(0.4364258897095772);
    msg.setSource(4626U);
    msg.setSourceEntity(70U);
    msg.setDestination(46812U);
    msg.setDestinationEntity(134U);
    msg.action = 207U;
    msg.longain = 0.7042322995405857;
    msg.latgain = 0.9547274269040431;
    msg.bondthick = 2930073437U;
    msg.leadgain = 0.46055080739901366;
    msg.deconflgain = 0.363675389084095;

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
    msg.setTimeStamp(0.9553282178102691);
    msg.setSource(40077U);
    msg.setSourceEntity(156U);
    msg.setDestination(27613U);
    msg.setDestinationEntity(97U);
    msg.err_mean = 0.903219563587974;
    msg.dist_min_abs = 0.6900537508542746;
    msg.dist_min_mean = 0.3432063752648187;

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
    msg.setTimeStamp(0.7132152356996572);
    msg.setSource(11652U);
    msg.setSourceEntity(253U);
    msg.setDestination(3215U);
    msg.setDestinationEntity(213U);
    msg.err_mean = 0.840184845955166;
    msg.dist_min_abs = 0.016557914868573165;
    msg.dist_min_mean = 0.18863823476308428;

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
    msg.setTimeStamp(0.31126312232965003);
    msg.setSource(20401U);
    msg.setSourceEntity(66U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(8U);
    msg.err_mean = 0.9859638868998907;
    msg.dist_min_abs = 0.7740277598356184;
    msg.dist_min_mean = 0.6359628043331725;

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
    msg.setTimeStamp(0.5899662674512015);
    msg.setSource(65254U);
    msg.setSourceEntity(68U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(15U);
    msg.action = 129U;
    msg.lon_gain = 0.17311572797511088;
    msg.lat_gain = 0.010614025444940611;
    msg.bond_thick = 0.7117217734304795;
    msg.lead_gain = 0.6949434224921671;
    msg.deconfl_gain = 0.45563770352653876;
    msg.accel_switch_gain = 0.6439037621495336;
    msg.safe_dist = 0.6088260740578023;
    msg.deconflict_offset = 0.6887260318040901;
    msg.accel_safe_margin = 0.05595414727589987;
    msg.accel_lim_x = 0.5990941380162108;

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
    msg.setTimeStamp(0.10458347904777743);
    msg.setSource(41106U);
    msg.setSourceEntity(170U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(240U);
    msg.action = 85U;
    msg.lon_gain = 0.6805479269101893;
    msg.lat_gain = 0.5427578727308592;
    msg.bond_thick = 0.47226283198848673;
    msg.lead_gain = 0.24712985635331275;
    msg.deconfl_gain = 0.14447815768170147;
    msg.accel_switch_gain = 0.4826821384678479;
    msg.safe_dist = 0.9174000383632299;
    msg.deconflict_offset = 0.5412675208288195;
    msg.accel_safe_margin = 0.6996306358931451;
    msg.accel_lim_x = 0.6690710821894601;

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
    msg.setTimeStamp(0.8788131930187848);
    msg.setSource(7962U);
    msg.setSourceEntity(76U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(142U);
    msg.action = 109U;
    msg.lon_gain = 0.995170954489543;
    msg.lat_gain = 0.23441833255867395;
    msg.bond_thick = 0.9853967068728545;
    msg.lead_gain = 0.16528243429556544;
    msg.deconfl_gain = 0.4774546826359458;
    msg.accel_switch_gain = 0.4918581464786119;
    msg.safe_dist = 0.054425493985511;
    msg.deconflict_offset = 0.095037324445857;
    msg.accel_safe_margin = 0.13428649165841544;
    msg.accel_lim_x = 0.28241911499550776;

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
    msg.setTimeStamp(0.9875505423961943);
    msg.setSource(16719U);
    msg.setSourceEntity(20U);
    msg.setDestination(10237U);
    msg.setDestinationEntity(171U);
    msg.type = 32U;
    msg.op = 84U;
    msg.err_mean = 0.5729389886234104;
    msg.dist_min_abs = 0.10798380799223872;
    msg.dist_min_mean = 0.13448981784354797;
    msg.roll_rate_mean = 0.7740477031850196;
    msg.time = 0.806491408452869;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 247U;
    tmp_msg_0.lon_gain = 0.4045343911753806;
    tmp_msg_0.lat_gain = 0.48203348306491955;
    tmp_msg_0.bond_thick = 0.46504030764504545;
    tmp_msg_0.lead_gain = 0.8433756305332183;
    tmp_msg_0.deconfl_gain = 0.33909399438067134;
    tmp_msg_0.accel_switch_gain = 0.9956818118835309;
    tmp_msg_0.safe_dist = 0.05461781788082243;
    tmp_msg_0.deconflict_offset = 0.6932926764036854;
    tmp_msg_0.accel_safe_margin = 0.4653975500607317;
    tmp_msg_0.accel_lim_x = 0.16935515374742427;
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
    msg.setTimeStamp(0.42162891579402484);
    msg.setSource(21103U);
    msg.setSourceEntity(224U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(89U);
    msg.type = 223U;
    msg.op = 159U;
    msg.err_mean = 0.009596691745802577;
    msg.dist_min_abs = 0.7348375005539751;
    msg.dist_min_mean = 0.13387687953185057;
    msg.roll_rate_mean = 0.5549174728473653;
    msg.time = 0.06996499134030432;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 203U;
    tmp_msg_0.lon_gain = 0.6662753173377709;
    tmp_msg_0.lat_gain = 0.9003264262897059;
    tmp_msg_0.bond_thick = 0.3663278807187248;
    tmp_msg_0.lead_gain = 0.4331011262861424;
    tmp_msg_0.deconfl_gain = 0.720681118843653;
    tmp_msg_0.accel_switch_gain = 0.551865010107434;
    tmp_msg_0.safe_dist = 0.8496957354798321;
    tmp_msg_0.deconflict_offset = 0.7283232683125527;
    tmp_msg_0.accel_safe_margin = 0.6706920490393616;
    tmp_msg_0.accel_lim_x = 0.32440249038233016;
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
    msg.setTimeStamp(0.5309549410390421);
    msg.setSource(17838U);
    msg.setSourceEntity(254U);
    msg.setDestination(13600U);
    msg.setDestinationEntity(33U);
    msg.type = 61U;
    msg.op = 153U;
    msg.err_mean = 0.980444737322315;
    msg.dist_min_abs = 0.5756172498162945;
    msg.dist_min_mean = 0.9539723210517397;
    msg.roll_rate_mean = 0.17794348698236906;
    msg.time = 0.07138976657387286;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 126U;
    tmp_msg_0.lon_gain = 0.018594066461939285;
    tmp_msg_0.lat_gain = 0.8067609009182901;
    tmp_msg_0.bond_thick = 0.26627303886182885;
    tmp_msg_0.lead_gain = 0.5793228022913557;
    tmp_msg_0.deconfl_gain = 0.39240042724250856;
    tmp_msg_0.accel_switch_gain = 0.9448970151214322;
    tmp_msg_0.safe_dist = 0.5673520309017079;
    tmp_msg_0.deconflict_offset = 0.5477416884538437;
    tmp_msg_0.accel_safe_margin = 0.006235092865366498;
    tmp_msg_0.accel_lim_x = 0.6971081385702009;
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
    msg.setTimeStamp(0.23800267260973795);
    msg.setSource(55495U);
    msg.setSourceEntity(99U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.7063937951217114;
    msg.lon = 0.5030866080552908;
    msg.eta = 1543425764U;
    msg.duration = 63333U;

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
    msg.setTimeStamp(0.4697107244619644);
    msg.setSource(50508U);
    msg.setSourceEntity(16U);
    msg.setDestination(18215U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.09851082637068576;
    msg.lon = 0.008344758119089302;
    msg.eta = 3325002494U;
    msg.duration = 2941U;

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
    msg.setTimeStamp(0.22406431600529564);
    msg.setSource(62156U);
    msg.setSourceEntity(46U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.6072793282468171;
    msg.lon = 0.14805984885717838;
    msg.eta = 343076440U;
    msg.duration = 22174U;

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
    msg.setTimeStamp(0.6192153957742724);
    msg.setSource(12322U);
    msg.setSourceEntity(153U);
    msg.setDestination(26230U);
    msg.setDestinationEntity(245U);
    msg.plan_id = 30894U;

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
    msg.setTimeStamp(0.2672266276778077);
    msg.setSource(62119U);
    msg.setSourceEntity(118U);
    msg.setDestination(24777U);
    msg.setDestinationEntity(211U);
    msg.plan_id = 50369U;

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
    msg.setTimeStamp(0.7248153194890126);
    msg.setSource(27482U);
    msg.setSourceEntity(87U);
    msg.setDestination(56902U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 18178U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8596140087219488;
    tmp_msg_0.lon = 0.08888666855063987;
    tmp_msg_0.eta = 1503965149U;
    tmp_msg_0.duration = 38887U;
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
    msg.setTimeStamp(0.8608825499917806);
    msg.setSource(16437U);
    msg.setSourceEntity(125U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(107U);
    msg.type = 14U;
    msg.command = 149U;
    msg.settings.assign("YRYWFLMALHGAGLBFXZADJNLBIFVBRNKMLTUSOBAZEBJSQHFJBNXHYPDUTSZJPNGOIUXNTKEXIGOQREVTPEVTWRHPOAWOTKJRSWFVMWIHUQYJLPMRIVNSCYCPEPZVSMQVRZYZAOMIDBENKVTWCJBZFCWOQKIUIAKMGVFFWKQGIXJXCBQXCKQNNHXCLBDYPOJAKTHYUEGSODURRSJH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50106U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.14153861512380217;
    tmp_tmp_msg_0_0.lon = 0.31942479750832087;
    tmp_tmp_msg_0_0.eta = 1091990271U;
    tmp_tmp_msg_0_0.duration = 29728U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EPOLGSQDVLUEGIQ");

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
    msg.setTimeStamp(0.8625885922818103);
    msg.setSource(47465U);
    msg.setSourceEntity(145U);
    msg.setDestination(36825U);
    msg.setDestinationEntity(148U);
    msg.type = 232U;
    msg.command = 237U;
    msg.settings.assign("TUVYZFBDPOLYOVITBJPBDCFKWIKHPGMXAZCROVKTJRDRVLSLBFFOUENJOGAWHDJLUVFIWCDDDPKPCGC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 38234U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BBNOVADGUYYKQRLOJGVDGQBRWUYJXLICONQLIDBCOWRXSXCKAEFJPHZFZRKKMVRKXOQTCSZODNJKKGOWJFBTGQVSZNYIHUBHATHXJDEGWPMFYWOTVLPXLHMYGDUGECIPBHADJFZASDNFVMXUHGXGAFMHIYJPETMVISIUUMCUJDUSRBATWINXRSHSVRNSLMQCBLTMTPWIENEUQEOLYKLQVPHFWYLKTXORPPZVZZJFZKEISNQBCTAWED");

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
    msg.setTimeStamp(0.8884841596963196);
    msg.setSource(50480U);
    msg.setSourceEntity(56U);
    msg.setDestination(44652U);
    msg.setDestinationEntity(174U);
    msg.type = 55U;
    msg.command = 148U;
    msg.settings.assign("MSGOJWCQNWVKYUDRLFHNUWHKGTJDAECALQAUOLPZEISZKVLPEKNYFDRITMOYGZFSYAHIAMRKJUVOBNXPDFHGXEONJEYLFQKTAPXMPTNSYCEAXHBOMFLGBGUSQHLRUOZUDXPDL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48366U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TEIFIGBGAORNEV");

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
    msg.setTimeStamp(0.7747799517719577);
    msg.setSource(23713U);
    msg.setSourceEntity(189U);
    msg.setDestination(63074U);
    msg.setDestinationEntity(99U);
    msg.state = 241U;
    msg.plan_id = 12983U;
    msg.wpt_id = 138U;
    msg.settings_chk = 60026U;

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
    msg.setTimeStamp(0.14156841694586852);
    msg.setSource(10502U);
    msg.setSourceEntity(223U);
    msg.setDestination(7272U);
    msg.setDestinationEntity(151U);
    msg.state = 2U;
    msg.plan_id = 64189U;
    msg.wpt_id = 158U;
    msg.settings_chk = 49729U;

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
    msg.setTimeStamp(0.1705498516296734);
    msg.setSource(16003U);
    msg.setSourceEntity(182U);
    msg.setDestination(44269U);
    msg.setDestinationEntity(235U);
    msg.state = 136U;
    msg.plan_id = 28105U;
    msg.wpt_id = 195U;
    msg.settings_chk = 7067U;

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
    msg.setTimeStamp(0.742342947192623);
    msg.setSource(38845U);
    msg.setSourceEntity(193U);
    msg.setDestination(63776U);
    msg.setDestinationEntity(243U);
    msg.uid = 18U;
    msg.frag_number = 34U;
    msg.num_frags = 141U;
    const signed char tmp_msg_0[] = {118, -44, -49, 15, -64, -58, 122, -24, 116, 64, 29, 71, -56, -87, -48, -40, -53, -16, 125, 29, 14, 31, 72, 79, 22, 35, -30, -25, -80, -115, -106, -14, -98, 125, -16, -49, -48, 126, 37, 83, -104, -60, -103, 74, -15, 104, -82, -77, 67, 81, -75, -34, 115, -12, 98, 90, 37, 9, 67, 109, 50, -49, 112, 1, -82, 6, 12, -15, 16, -82, -116, -119, 52, -59, -50, 98, -88, 34, 124, 17, -40, 37, 35, 78, 87, -71, 102, -51, -98, -10, -39, -125, 21, 19, 89, -98, 112, -116, -59, -109, 32, -51, -12, -114, 99, 66, -83, 64, -20, -76, -41, -100};
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
    msg.setTimeStamp(0.09197579848480475);
    msg.setSource(29087U);
    msg.setSourceEntity(8U);
    msg.setDestination(31709U);
    msg.setDestinationEntity(63U);
    msg.uid = 239U;
    msg.frag_number = 72U;
    msg.num_frags = 42U;
    const signed char tmp_msg_0[] = {75, -108, 75, 33, -80, -24, 117, -21, 50, -44, 30, 46, 35, -68, 92, 1, -18, 111, 10, -47, 68, -73, -62, 125, -36, -117, 77, 81, 21, -119, -1, -27, 40, 21, -55, -92, 112, -7, -56, 121, -108, 77, -106, -92, 39, 122, -74, -19, 69, 108, -87, 86, 43, -89, 49, 63, 59, 90, -113, -78, 98, 59, -10, -7, 42, -127, -67, -109, 110, 79, 51, -123, -25, 3, 106, 117, -33, -100, -104, 41, 66, 105, 8, 93, -6, 11, -75, -113, 99, -65, 71, 2, 74, -2, -88, -97, -30, 60, -97, 117, 91, -6, 111, 90, 121, -69, 40, -126, 25, -49, -127, -13, 122, -48, 79, 2, 29, -110, -117, 76, -31, -90, 56, 83, 53, -50, -22, 18, 38, -86, -82, -103, 48, 27, -1, -43, -73, -112, -74, -75, -22, 24, 37, -112, 97, 32, -73, 8, 73, 98, -31, -41, 115, 102, 16, -92, 39, -5, 111, 91, -28, -40, 86, -43, 54, 103, -1, -10, 10, -43, -13, -70, -44, -14, -79, -77, -123, -96, -66, -79};
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
    msg.setTimeStamp(0.6662930149102327);
    msg.setSource(41039U);
    msg.setSourceEntity(30U);
    msg.setDestination(18922U);
    msg.setDestinationEntity(232U);
    msg.uid = 174U;
    msg.frag_number = 82U;
    msg.num_frags = 181U;
    const signed char tmp_msg_0[] = {56, 112, -71, 58, 4, 114, -76, -36, -5, 62, 84, 47};
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
    msg.setTimeStamp(0.3482069806356066);
    msg.setSource(59064U);
    msg.setSourceEntity(87U);
    msg.setDestination(21491U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("BKTJDLZDJBZ");
    const signed char tmp_msg_0[] = {-16, 104, -5, 76, 3, -122, -31, 8, -31, -22, 90, 83, -81, -6, -102, 56, 36, 53, 118, 123, -13, -25, 71, 73, 100, -25, 14, 119, -61, 34, -39, 29, -62, -115, -23, -32, 111, -65, 75, -73, 25, -46, -68, 87, 92, 68, 36, -60, -52, -48, 87, -53, 13, 72, -81, -125, -71, -96, 65, 64, 78, 109, 80, -88, -81, 124, -38, -28, -63, -22, -98, 54, 3, -123, 90, 121, -2, -110, -68, 19, -28, 65, 51, 38, 53, -5, 45, -85, 53, 85, 120, -74, 71, 31, 53, 63, 23, 95, -46, -123, 77, -56, -75, 9, 122, -94, 98, 34, -24, -111, -117, 108, 108, -7, 18, -52, -63, -118, 47, -75, -106, -76, -47, 117, 50, -83, -39, 39, 44, -92, 65, 97, -50, -1, -64, -37, 94, -38, 45, -23, 27, 110, -15, -93, -5, 105, 61, -98, 46, -54, -85, -90, 73, 83, -17, 9, -12, -36, 75, 112, -21, 2, 4, 31, 79, 104, -15, 95, 0, -45, 19, -21, -83, 47, -114, -46, -15, 117, -79, 107, -37, 77, 13, 110, 42, 48, -88, -76, -75, -42, -14, 87, 101, -86, -47, 50};
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
    msg.setTimeStamp(0.7975683511844079);
    msg.setSource(37393U);
    msg.setSourceEntity(17U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(137U);
    msg.content_type.assign("MJOMHXGROBVRTSTYPRNUAVVVLOKGCTAWAYUQWRZIJYBQIKNCTFRKZPMVCSGRONRXNWQWQMUTWPWODMQAVBBHLUHKNIFEOOTMQBPBWFPBOGEDPUVBWWMZGYJXDHSNZ");
    const signed char tmp_msg_0[] = {-67, 27, -68, -29, 105, 116, -22, -71, 30, 12, -67, -2, 103, -69, 18, -106, -37, 123, 50, -86, 117, 82, 77, 120, -98, 40, 80, -20, 38, 49, 72, -87, -21, -32, -48, 40, 56, 7, 100, 74, -39, 53, 1, -82, 100, -7, -104, 95, -50, 87, 63, -93, -51, -43, 54, 23, 62, 14, -127, -8, 35, -122, 55, 49, 43, -96, 92, 83, 7, -117, 30, 84, -22, 3, 57, -104, 119, 116, -89, -87, 64, -3, 61, 38, 35, 48, 2, 83, 87, 27, -16, -33, -116, 15, -30, -125, 44, 78, -123};
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
    msg.setTimeStamp(0.728316666253619);
    msg.setSource(32803U);
    msg.setSourceEntity(110U);
    msg.setDestination(7027U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("PNDCRMFZLQCWRYWNXHAMJFLTPKIHFGYAGLDVNEFQMPJGDMSVXRGDESUDGTSIMTCALCLHKWBGAHWSBFLYQ");
    const signed char tmp_msg_0[] = {82, 58, 88, 101, 58, 49, 68, 4, -69, 79, -74, -88, 60, 124, -58, 53, 52, 102, 46, 31, 47, 65, 60, 89, -90, 80, -86, -69, -56, 118, 4, 16, 123, 115, -65, 37, -95, -128, 101, -75, 103, -20, -52, 88, -118, -112, -94, -47, -75, -1, 29, -96, -75, 101, 47, -10, 123, -107, 55, -113, 48, -30, -72, 90, -82, 83, -84, -29, -10, -87, -33, 103, -126, 77, -48, 74, -69, -107, 14, -107, -79, 48, -32, 2, -114, 52, 62, -126, -119, -37, 59, -59, 81, 101, 121, -14, -65, 99, -16, 31, -34, 48, -8, -122, -30, -13, 68, 89, 100, -121, 43, -117, -102, -100, -13, 44, 68, 117, 107, 64, -123, -13, 82, -6, -123};
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
    msg.setTimeStamp(0.8810458507186466);
    msg.setSource(36899U);
    msg.setSourceEntity(218U);
    msg.setDestination(39887U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.33462714934591964);
    msg.setSource(24809U);
    msg.setSourceEntity(226U);
    msg.setDestination(6819U);
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
    msg.setTimeStamp(0.7634982448280602);
    msg.setSource(27123U);
    msg.setSourceEntity(120U);
    msg.setDestination(24073U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.3984550126536436);
    msg.setSource(47457U);
    msg.setSourceEntity(87U);
    msg.setDestination(51424U);
    msg.setDestinationEntity(18U);
    msg.target = 41263U;
    msg.bearing = 0.6162025026305417;
    msg.elevation = 0.9040434746952583;

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
    msg.setTimeStamp(0.0967732576633672);
    msg.setSource(62656U);
    msg.setSourceEntity(237U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(1U);
    msg.target = 14331U;
    msg.bearing = 0.25204984568015043;
    msg.elevation = 0.7571308033353829;

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
    msg.setTimeStamp(0.6581046517500989);
    msg.setSource(23133U);
    msg.setSourceEntity(150U);
    msg.setDestination(43472U);
    msg.setDestinationEntity(0U);
    msg.target = 19081U;
    msg.bearing = 0.4820714871288354;
    msg.elevation = 0.34315565522182834;

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
    msg.setTimeStamp(0.2577689256280403);
    msg.setSource(8686U);
    msg.setSourceEntity(9U);
    msg.setDestination(62736U);
    msg.setDestinationEntity(136U);
    msg.target = 52799U;
    msg.x = 0.17423924524136403;
    msg.y = 0.4492631919495865;
    msg.z = 0.9347548089736651;

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
    msg.setTimeStamp(0.9885711321392944);
    msg.setSource(1921U);
    msg.setSourceEntity(153U);
    msg.setDestination(30458U);
    msg.setDestinationEntity(51U);
    msg.target = 61718U;
    msg.x = 0.27481495470913175;
    msg.y = 0.942546724371498;
    msg.z = 0.31810172518563695;

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
    msg.setTimeStamp(0.37645055987747256);
    msg.setSource(8286U);
    msg.setSourceEntity(139U);
    msg.setDestination(39110U);
    msg.setDestinationEntity(194U);
    msg.target = 61701U;
    msg.x = 0.9250903606064241;
    msg.y = 0.611578078640005;
    msg.z = 0.8037267244540537;

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
    msg.setTimeStamp(0.22603451186755075);
    msg.setSource(6140U);
    msg.setSourceEntity(86U);
    msg.setDestination(25720U);
    msg.setDestinationEntity(129U);
    msg.target = 2325U;
    msg.lat = 0.010796851358610304;
    msg.lon = 0.3404179303192394;
    msg.z_units = 7U;
    msg.z = 0.26640224464545403;

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
    msg.setTimeStamp(0.42523898705386975);
    msg.setSource(32036U);
    msg.setSourceEntity(87U);
    msg.setDestination(1319U);
    msg.setDestinationEntity(124U);
    msg.target = 35451U;
    msg.lat = 0.9136032391139104;
    msg.lon = 0.9807731727716384;
    msg.z_units = 250U;
    msg.z = 0.4109350154981123;

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
    msg.setTimeStamp(0.39265215762818095);
    msg.setSource(47455U);
    msg.setSourceEntity(57U);
    msg.setDestination(56485U);
    msg.setDestinationEntity(100U);
    msg.target = 43451U;
    msg.lat = 0.05393919950489845;
    msg.lon = 0.759382037807919;
    msg.z_units = 209U;
    msg.z = 0.6389968375725321;

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
    msg.setTimeStamp(0.7145476353821256);
    msg.setSource(47291U);
    msg.setSourceEntity(210U);
    msg.setDestination(47772U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("OPAJNCYTTXWMBWYQWGUJZDJFCFWZLLOVJUTSZYPQYIOFRCNMRCDFXVMZCCRGQ");
    const signed char tmp_msg_0[] = {-5, -10, 124, -111, 33, 59, 119, 8, -105, 121, -38, 104, 110, -43, -20, -64, 107, -19, -70, -81, 27, 102, -1, 62, 123, -105, -120, -8, 90, -103, -12, -80, -127, 21, 98, 115, -16, -15, -88, -114, -98, 61, -45, -128, 14, 87, -47, 43, 46, -118, -56, -84, 93, 100, -42, 30, -90, 67, 64, -59, 18, 123, 9, 10, -42, -11, 106, -61, 0, 84, -35, -84, 100, 59, -17, 19, 46, -7, -121, -93, -41, -63, -53, -78, -48, -81, 105, 30, -9, -116, 100, 114, 43, 109, 0, -98, 27, -37, -46, 5, 7, -107, 93, -45, 39, 95, -2, 6, 11, 117, -25, 109, 113, -33, 115, 48, 6, 29, 89, -17, 67, -81, -54, -1, 111, -46, -66, 74, 68, -53, 16, 58, 35, -118, -13, 102, 98, -17, -44, 89, 41, 74, 119, -70};
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
    msg.setTimeStamp(0.5168023771984732);
    msg.setSource(39332U);
    msg.setSourceEntity(210U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(27U);
    msg.locale.assign("FRKBQLUCIDXYDLDNUYCYJHDFUOYBBKUPBFMGQJEOZLYTYWIRASJHSPWUDJHMXOFSSJXXIVPJDTJELXIEVSKXMWXPRENPLOBIJLR");
    const signed char tmp_msg_0[] = {-73, -68, 125, -66, -40, 124, 117, 122, -87, -31, 79, 58, -105, 19, -22, -99, -102, 68, -12, 126, 36, 8, 37, -128, 46, 39, -96, 110, 108, -30, -105, 110, 67, 60, -7, 39, 76, -61, -87, 117, 30, -101, 8, 24, -76, -106, -14, 63, 29, -100, 74, 28, 65, -107, 11, 48, 44, -123, 14, 69, 91, 48, 73, 63, -1, 39, -83, 0, -55, -112, -109, 76, 75, -28, 62, 124, -9, 41, 102, 66, -65, -6, 40, 54, -114, -120, 36, -104, 83, 67, -91, 18, 26, -91, 42, 45, 40, -42, -12, 16, -26, -86, 80, -3, -66, 51, -30, 73, -107, -92, -3, -22, 115, -126, 119, -125, -77, 72, 73, 87, 125, -100, 26, -122, 76, 121, 85, -99, 45, 75, 104, -96, -111, -75, -108, -110, 97, 114, -124, 8, -28, 102, -102, 113, 84, -52, -114, -62, 24, 8, 78, -95};
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
    msg.setTimeStamp(0.7426408452052733);
    msg.setSource(62232U);
    msg.setSourceEntity(80U);
    msg.setDestination(15432U);
    msg.setDestinationEntity(222U);
    msg.locale.assign("NQMJIVBZGEINTROCRZWUQYQBTPGLVETZLAFYTKUHSTFAYNFZZIRGKVLHEXZEGXFREQJSJOCUW");
    const signed char tmp_msg_0[] = {-43, -124, 100, 106, -38, -68, 47, -62, 114, 109, 126, -74, -1, 19, -108, -119, -26, 26, 100, 91, 115, -94, -84, 39, -54, 70, -88, -15, -75, -64, 51, 51, 51, -11, -123, -7, 29, -24, -61, -17, 18, -111, -101, -77, -6, 78, 15, 126, 113, -69, 108, -66, 85, -68, 23, -78, -64, -36, 121, 117, -94, -64, 80, 53, 85, -111, 51, 59, -9, -73, -48, -102, -43, -37, -123, -113, -92, -80, -28, -57, -123, 8, 38, 86, -95, -59, -9, 44, -5, 100, -114, -60, 57, 40, -40, 105, 90, -17, 81, 62, -38, 38, -66, -22, -68, 77, -102, 45, 43, 36, 42, -20, -118, -4, -70, 101, 33, 7, -47, -65, 87, -65, 46, 91, -7, 78, 51, -32, 30, 50, -38, 110, 68, 76, 15, 55, -53, -69, 124, 27, 96, -103, 60, -122, -125, -77, 61, -120, -57, -121, -12, 39, 2, 32, 28, 72, -76, 51, -108, -83, 23, 124, 21, -77, -91, 8, 18, 121, -114, 8, -18, -55, -40, 80, 54, 43, -18, 92, 117, -113, -21, -30, -112, 50, -9, -67, -45, 9};
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
    msg.setTimeStamp(0.721014208527625);
    msg.setSource(10640U);
    msg.setSourceEntity(195U);
    msg.setDestination(14650U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.011604001647227968);
    msg.setSource(61557U);
    msg.setSourceEntity(47U);
    msg.setDestination(60270U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.7362436229239887);
    msg.setSource(63231U);
    msg.setSourceEntity(54U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.5039114659148458);
    msg.setSource(58859U);
    msg.setSourceEntity(18U);
    msg.setDestination(30618U);
    msg.setDestinationEntity(185U);
    msg.camid = 54U;
    msg.x = 2537U;
    msg.y = 61030U;

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
    msg.setTimeStamp(0.8162861403426671);
    msg.setSource(32429U);
    msg.setSourceEntity(134U);
    msg.setDestination(48223U);
    msg.setDestinationEntity(140U);
    msg.camid = 226U;
    msg.x = 15017U;
    msg.y = 39824U;

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
    msg.setTimeStamp(0.8355960606783601);
    msg.setSource(40899U);
    msg.setSourceEntity(4U);
    msg.setDestination(9410U);
    msg.setDestinationEntity(84U);
    msg.camid = 204U;
    msg.x = 38185U;
    msg.y = 61787U;

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
    msg.setTimeStamp(0.5798034618611773);
    msg.setSource(18562U);
    msg.setSourceEntity(202U);
    msg.setDestination(42395U);
    msg.setDestinationEntity(190U);
    msg.camid = 79U;
    msg.x = 14509U;
    msg.y = 12498U;

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
    msg.setTimeStamp(0.6326457663757332);
    msg.setSource(4599U);
    msg.setSourceEntity(108U);
    msg.setDestination(39992U);
    msg.setDestinationEntity(201U);
    msg.camid = 1U;
    msg.x = 14972U;
    msg.y = 40695U;

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
    msg.setTimeStamp(0.46379827222373793);
    msg.setSource(24297U);
    msg.setSourceEntity(240U);
    msg.setDestination(1669U);
    msg.setDestinationEntity(144U);
    msg.camid = 35U;
    msg.x = 24117U;
    msg.y = 44409U;

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
    msg.setTimeStamp(0.6029736078357169);
    msg.setSource(30107U);
    msg.setSourceEntity(115U);
    msg.setDestination(61048U);
    msg.setDestinationEntity(75U);
    msg.tracking = 86U;
    msg.lat = 0.8436335507488552;
    msg.lon = 0.4830769291138598;
    msg.x = 0.16712147048426518;
    msg.y = 0.6836662739922298;
    msg.z = 0.550352698319298;

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
    msg.setTimeStamp(0.9288444762927703);
    msg.setSource(2795U);
    msg.setSourceEntity(5U);
    msg.setDestination(15254U);
    msg.setDestinationEntity(248U);
    msg.tracking = 198U;
    msg.lat = 0.8846292954122275;
    msg.lon = 0.02776757788462836;
    msg.x = 0.8557699562554645;
    msg.y = 0.29583963021779947;
    msg.z = 0.6838929846086028;

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
    msg.setTimeStamp(0.11442692272790689);
    msg.setSource(37115U);
    msg.setSourceEntity(23U);
    msg.setDestination(23229U);
    msg.setDestinationEntity(54U);
    msg.tracking = 41U;
    msg.lat = 0.19553226994113693;
    msg.lon = 0.7115057763095805;
    msg.x = 0.4988516399527291;
    msg.y = 0.7574194949667606;
    msg.z = 0.6255652502661341;

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
    msg.setTimeStamp(0.3549163444270619);
    msg.setSource(2993U);
    msg.setSourceEntity(33U);
    msg.setDestination(64048U);
    msg.setDestinationEntity(160U);
    msg.target.assign("JUWPSDQYYCEDEYCEMSRQMBMVUBTDLPOSEGYMSKRADLZKDFMKNZIWBJFRKTVXNBVQLXUTYGARRDJOVALKYBWFNFUPCALFOUOVRHFEAZWVQXVKHXUWUFQRAHSWIMOBLOCZDSBTOCHPEDGGTDREXTKQHNYNNMKOQVVZZZLXYCIEFWUMMNOI");
    msg.lbearing = 0.8994593578743187;
    msg.lelevation = 0.42312643997086963;
    msg.bearing = 0.4835532676212657;
    msg.elevation = 0.9144257503097709;
    msg.phi = 0.276034640640873;
    msg.theta = 0.5521556141989512;
    msg.psi = 0.5014317114140882;
    msg.accuracy = 0.1028638441269426;

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
    msg.setTimeStamp(0.5723511852041121);
    msg.setSource(59890U);
    msg.setSourceEntity(49U);
    msg.setDestination(33552U);
    msg.setDestinationEntity(193U);
    msg.target.assign("YQQZCPXIPBLXRCKSAJENYEMMXVEBFQCSUSLEUVUMKJSOWHXBDKFYINTMNFWTVKWJKQBUZWIHRXDCTHGHCILMMXWOHZEQWZTILRPTEJWWGFHUVYGNNRVMKLOISIPSDKY");
    msg.lbearing = 0.47197863680725827;
    msg.lelevation = 0.9552915680870245;
    msg.bearing = 0.66026660338498;
    msg.elevation = 0.5695357619828793;
    msg.phi = 0.6374400783834167;
    msg.theta = 0.42899253485855215;
    msg.psi = 0.10491749771973602;
    msg.accuracy = 0.7093130554208835;

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
    msg.setTimeStamp(0.6833635488502986);
    msg.setSource(3054U);
    msg.setSourceEntity(90U);
    msg.setDestination(16536U);
    msg.setDestinationEntity(106U);
    msg.target.assign("UCHPQFQEEBBDXKNKNQUCEGOZTXSSYEEJWGRSNJVAZTKGEIRVCHBLZBNVCWJQUDGGSBKIJUBLXFJFJDELYIFHMXMLZJGHVNLVXNPZRTHOCSIVXPJIKVUOTMSOSKWMGEFISDQPFWXDGVRVPZXQZYGAUQPAKRYCRDWAMFYPLHATMYTZYIUGQYZTLKQFNHJCVLBBKAIURWANFDHBQPIIYAOSDMNNCDJCZRUOWBYTR");
    msg.lbearing = 0.10390336593104998;
    msg.lelevation = 0.4483776189582388;
    msg.bearing = 0.8830565496371435;
    msg.elevation = 0.5255056780935725;
    msg.phi = 0.5989551849396707;
    msg.theta = 0.1076426635462503;
    msg.psi = 0.7334447697074711;
    msg.accuracy = 0.05601829564889638;

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
    msg.setTimeStamp(0.19445001356675107);
    msg.setSource(61855U);
    msg.setSourceEntity(182U);
    msg.setDestination(4047U);
    msg.setDestinationEntity(97U);
    msg.target.assign("EOEEBGGTIGKRFDTJUUENMDHNZSRJZTQPTVOWLVWQHZAHYWSWWEAEDALCBBNGXJYFPPCYGBYAIMUGERZWJKIOWNICKU");
    msg.x = 0.6713173900285674;
    msg.y = 0.6876007366033856;
    msg.z = 0.4252470375516896;
    msg.n = 0.8725497822383171;
    msg.e = 0.6201971601782074;
    msg.d = 0.4958938207121353;
    msg.phi = 0.7000841328062549;
    msg.theta = 0.9439678489453964;
    msg.psi = 0.32223614094090625;
    msg.accuracy = 0.40906191529947167;

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
    msg.setTimeStamp(0.6182188789651092);
    msg.setSource(23090U);
    msg.setSourceEntity(161U);
    msg.setDestination(49384U);
    msg.setDestinationEntity(163U);
    msg.target.assign("WKDZTYPMTVUWFUUTPNNKQVHBHARVSDIJTHKIAZQYRHNJJUEWYVOHXNYXRPJMAVCISPUBUKFOJEGWLLCLVICMKXEFQNWWZMZEFDGPGQYMXCPDBRDXSRMJFSRAACXKYRBDOPXCZLHQSDLMXMFGLOOWPTQBWGTBIOODSDILNGRQVH");
    msg.x = 0.4518237119006947;
    msg.y = 0.4349914124249262;
    msg.z = 0.8028044364395301;
    msg.n = 0.4113231341527046;
    msg.e = 0.7176014654782904;
    msg.d = 0.14808276717476432;
    msg.phi = 0.32833955583689656;
    msg.theta = 0.5762800154425168;
    msg.psi = 0.5252818895760223;
    msg.accuracy = 0.17661060037097165;

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
    msg.setTimeStamp(0.9523357482597657);
    msg.setSource(62959U);
    msg.setSourceEntity(210U);
    msg.setDestination(53267U);
    msg.setDestinationEntity(139U);
    msg.target.assign("XDLKKCRTSMAQUKBRXYYKQAYAFSXNEFZQLBSGLWZCLDZOGKYZLDPLIHXFMMECJEBVRYIEEVOPOSOUDNVTVTMGGEJWDGJYGIXXDEHQWMBPFRONJBYPTXUMNATICLQONZCPHUHDBZRUDPTTANLKUOJKMGVWXSIJRKRJUEJALGBIGIZPSZLAQRRMBAUCUQSFWWZJWSECHSOQFHCCFCPMNVKIDIPSNFYHN");
    msg.x = 0.1883854787127962;
    msg.y = 0.2958262773046083;
    msg.z = 0.1453257571204647;
    msg.n = 0.6000027091548118;
    msg.e = 0.04676583907109588;
    msg.d = 0.9906374141799102;
    msg.phi = 0.17941080474105064;
    msg.theta = 0.8263673145809342;
    msg.psi = 0.4001965611283981;
    msg.accuracy = 0.9077395374565385;

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
    msg.setTimeStamp(0.7148189684642868);
    msg.setSource(15467U);
    msg.setSourceEntity(67U);
    msg.setDestination(14860U);
    msg.setDestinationEntity(97U);
    msg.target.assign("TVNRYFMBAQGPMEJYDOSFXDFPQIFYJFLM");
    msg.lat = 0.9655846552017894;
    msg.lon = 0.49396419172381156;
    msg.z_units = 153U;
    msg.z = 0.8994089334455873;
    msg.accuracy = 0.19054098307678147;

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
    msg.setTimeStamp(0.39375664301251034);
    msg.setSource(4608U);
    msg.setSourceEntity(114U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(196U);
    msg.target.assign("JAYISRYYTGNMXCBLSQMUXHWVZFEDHITVXBURUZYYINAEFAGOEFMUGDIJAJGBXFWTKUTPIJEXKLTNKTUYFPHMUZZWGVRTDOJVWPPQXFFAHJKFDLPWQVBYLSIVSNCNTQDKTLRDCHXMPWOZAEUEQOSQZLWBRADKBECLIMYNLKRCHOKGZQEBKORZINDNFPQVCDRCHPJHV");
    msg.lat = 0.23036029718757633;
    msg.lon = 0.38395433290273495;
    msg.z_units = 186U;
    msg.z = 0.74594478014882;
    msg.accuracy = 0.9169911363968806;

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
    msg.setTimeStamp(0.6793907739231716);
    msg.setSource(19203U);
    msg.setSourceEntity(141U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(121U);
    msg.target.assign("CVYJSPJEFRLVVVITPCZDZVINHMUWFJSPMZYNKNOAXTRMDOEXMIXCCMOTJLALQSWXWOMPZMGYFHKDYGHMGURQUITDFFYCAGLNPRLOAJDIVQUJBCWEUSZRABHQICLPRXVYTZLGYXHVZKKUPKXPCGIBITUWSQEKUPWVOFAYHDHGKRKPJTJTDARDREQXBGO");
    msg.lat = 0.20232359082626905;
    msg.lon = 0.9173907931763776;
    msg.z_units = 250U;
    msg.z = 0.573961756577939;
    msg.accuracy = 0.7905627073892988;

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
    msg.setTimeStamp(0.12573053001278545);
    msg.setSource(20750U);
    msg.setSourceEntity(19U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(91U);
    msg.name.assign("WBZLUEJTDUIQGGCMZDUNLXGYGWIJJBKXPKDZWPBHAPBSZYCRSLICLLGHTVAXNWJNOOPYPAMHFKYLQWZIVOVMGJRAVAKNCCBBFCLKRYYEJKYUNSRGMJROZXQSA");
    msg.lat = 0.1697271326111276;
    msg.lon = 0.736045598338645;
    msg.z = 0.9270170764109025;
    msg.z_units = 137U;

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
    msg.setTimeStamp(0.9623557401174836);
    msg.setSource(19624U);
    msg.setSourceEntity(169U);
    msg.setDestination(13554U);
    msg.setDestinationEntity(199U);
    msg.name.assign("XCVKKHDEUEIHAYSKXVRJSCLBRADPQITIZZOSIXBZ");
    msg.lat = 0.7010081352191992;
    msg.lon = 0.38671120450377705;
    msg.z = 0.07700473483695214;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.17356709523752845);
    msg.setSource(57392U);
    msg.setSourceEntity(229U);
    msg.setDestination(18789U);
    msg.setDestinationEntity(168U);
    msg.name.assign("SKLMIDLGNUXSAZUGKQKFTAVBESGNOACXTWFDKMNXMDOQBPGHCSOGPHLTVQAORHCRJELCXDIBECLYZSTJNZBIVPWFEEASQRMSCWOXPDYTWWJMSIHUDIYYRIONISJYLWMZXLBNHYBFWZHZHGDTQQFKRZXVAVFMBTZUBHWYUAOVSIDFTBZVTQYREUGQHMKZPPJMNCXOAKRTUHNJ");
    msg.lat = 0.3831347740798011;
    msg.lon = 0.13752863774241497;
    msg.z = 0.0790916008512027;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.1578302030784694);
    msg.setSource(23329U);
    msg.setSourceEntity(199U);
    msg.setDestination(13423U);
    msg.setDestinationEntity(28U);
    msg.op = 43U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JNAPHAGTXUEJKROKLSRQDUVMXBCC");
    tmp_msg_0.lat = 0.8286357870794371;
    tmp_msg_0.lon = 0.7264792709574703;
    tmp_msg_0.z = 0.9272551763968896;
    tmp_msg_0.z_units = 46U;
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
    msg.setTimeStamp(0.6305960616574815);
    msg.setSource(36472U);
    msg.setSourceEntity(153U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(197U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.48729255221742585);
    msg.setSource(55708U);
    msg.setSourceEntity(67U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(87U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.1847462670062745);
    msg.setSource(5394U);
    msg.setSourceEntity(220U);
    msg.setDestination(55872U);
    msg.setDestinationEntity(189U);
    msg.value = 0.37564833343664084;
    msg.type = 77U;

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
    msg.setTimeStamp(0.8972232525322826);
    msg.setSource(51302U);
    msg.setSourceEntity(247U);
    msg.setDestination(56338U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8486852716828538;
    msg.type = 64U;

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
    msg.setTimeStamp(0.7616939068508631);
    msg.setSource(7202U);
    msg.setSourceEntity(64U);
    msg.setDestination(11208U);
    msg.setDestinationEntity(230U);
    msg.value = 0.7011380985470108;
    msg.type = 105U;

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
    msg.setTimeStamp(0.48203083622361387);
    msg.setSource(4481U);
    msg.setSourceEntity(32U);
    msg.setDestination(30343U);
    msg.setDestinationEntity(56U);
    msg.value = 0.14105999560792026;

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
    msg.setTimeStamp(0.7171931533194484);
    msg.setSource(59169U);
    msg.setSourceEntity(161U);
    msg.setDestination(59206U);
    msg.setDestinationEntity(85U);
    msg.value = 0.2109212585418242;

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
    msg.setTimeStamp(0.7864453620333174);
    msg.setSource(10907U);
    msg.setSourceEntity(57U);
    msg.setDestination(27947U);
    msg.setDestinationEntity(149U);
    msg.value = 0.18642831173667984;

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
    msg.setTimeStamp(0.5197224196627132);
    msg.setSource(8017U);
    msg.setSourceEntity(37U);
    msg.setDestination(8526U);
    msg.setDestinationEntity(166U);
    msg.timestamp_last_service = 0.28535226786110635;
    msg.time_next_service = 0.23964579591548585;
    msg.time_motor_next_service = 0.5765740406800968;
    msg.time_idle_ground = 0.9566279470572888;
    msg.time_idle_air = 0.15901546512252684;
    msg.time_idle_water = 0.6750457484665362;
    msg.time_idle_underwater = 0.46818590514977465;
    msg.time_idle_unknown = 0.6608298824272412;
    msg.time_motor_ground = 0.11282680074667195;
    msg.time_motor_air = 0.43083798511400917;
    msg.time_motor_water = 0.9658137932701907;
    msg.time_motor_underwater = 0.04136403314333381;
    msg.time_motor_unknown = 0.6448961846874023;
    msg.rpm_min = 470;
    msg.rpm_max = -26531;
    msg.depth_max = 0.541359325986403;

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
    msg.setTimeStamp(0.008449088924916026);
    msg.setSource(45614U);
    msg.setSourceEntity(129U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(192U);
    msg.timestamp_last_service = 0.06098543163576442;
    msg.time_next_service = 0.5747117264465155;
    msg.time_motor_next_service = 0.49453380092912635;
    msg.time_idle_ground = 0.46937341532154375;
    msg.time_idle_air = 0.9113778310784825;
    msg.time_idle_water = 0.8090628228419589;
    msg.time_idle_underwater = 0.748179272533326;
    msg.time_idle_unknown = 0.5688566325290749;
    msg.time_motor_ground = 0.7563781746437257;
    msg.time_motor_air = 0.2697317986559342;
    msg.time_motor_water = 0.34458383215114985;
    msg.time_motor_underwater = 0.938637812064432;
    msg.time_motor_unknown = 0.14978746718146008;
    msg.rpm_min = -11505;
    msg.rpm_max = 7721;
    msg.depth_max = 0.7389906536545229;

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
    msg.setTimeStamp(0.947439165356211);
    msg.setSource(65360U);
    msg.setSourceEntity(45U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(115U);
    msg.timestamp_last_service = 0.9976626198085472;
    msg.time_next_service = 0.668338573679112;
    msg.time_motor_next_service = 0.2231069122747461;
    msg.time_idle_ground = 0.6021039789555874;
    msg.time_idle_air = 0.6479489516246562;
    msg.time_idle_water = 0.5458840636400204;
    msg.time_idle_underwater = 0.0745236214038626;
    msg.time_idle_unknown = 0.3374896454674635;
    msg.time_motor_ground = 0.3023075757105207;
    msg.time_motor_air = 0.050705215849745966;
    msg.time_motor_water = 0.19074148056895868;
    msg.time_motor_underwater = 0.8963715153265511;
    msg.time_motor_unknown = 0.5118226159935709;
    msg.rpm_min = 22379;
    msg.rpm_max = 4354;
    msg.depth_max = 0.3500455891078934;

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
    msg.setTimeStamp(0.4569092528958302);
    msg.setSource(45966U);
    msg.setSourceEntity(157U);
    msg.setDestination(51867U);
    msg.setDestinationEntity(79U);
    msg.severity = 42U;
    msg.text.assign("HFZROJNRZLDCXSQWCNVCPFUWGISAHGEUGPKWLYOPCTGFJDUGVPASBVKPTWCWYZULMVZLJBHXZCSKRJIPWEMNRCIDNLJUFRVMFRWZBCMQOYHUYZDSQZKDNOAMXMRAQLGIBEKSKAEJIQCDJVPREVNUINAFVIXBDBTMFTFKLTBY");

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
    msg.setTimeStamp(0.3761481875209711);
    msg.setSource(14696U);
    msg.setSourceEntity(173U);
    msg.setDestination(24152U);
    msg.setDestinationEntity(179U);
    msg.severity = 66U;
    msg.text.assign("CPUDLJWSCMRASUTOMAGEECTHBAOQTFLVYFNYEPXWDVIEGPYHXETQDVWKYVZZOLFACDKSLAJMTZ");

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
    msg.setTimeStamp(0.3041118078918562);
    msg.setSource(11688U);
    msg.setSourceEntity(64U);
    msg.setDestination(64516U);
    msg.setDestinationEntity(177U);
    msg.severity = 118U;
    msg.text.assign("PQFRXFACXIDBDGTBEVUUQKPWEUCQQGNQETIOZADINZRHVYAJWCVFKUMARIXNEGXKSLJKPUVOHAMIQBTX");

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
    msg.setTimeStamp(0.024913725145137233);
    msg.setSource(4810U);
    msg.setSourceEntity(6U);
    msg.setDestination(37473U);
    msg.setDestinationEntity(185U);
    msg.channel = 52;
    msg.value = 2026887074;
    msg.gain = 160U;

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
    msg.setTimeStamp(0.5631802040364042);
    msg.setSource(18048U);
    msg.setSourceEntity(68U);
    msg.setDestination(18391U);
    msg.setDestinationEntity(128U);
    msg.channel = 51;
    msg.value = 85284651;
    msg.gain = 230U;

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
    msg.setTimeStamp(0.6224645240970245);
    msg.setSource(64506U);
    msg.setSourceEntity(88U);
    msg.setDestination(25777U);
    msg.setDestinationEntity(249U);
    msg.channel = 6;
    msg.value = 1257501472;
    msg.gain = 54U;

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
    msg.setTimeStamp(0.6937680698829578);
    msg.setSource(43892U);
    msg.setSourceEntity(243U);
    msg.setDestination(15528U);
    msg.setDestinationEntity(233U);
    msg.ch01 = 0.650851989740834;
    msg.ch02 = 0.9851809075518625;
    msg.ch03 = 0.9653938383481981;
    msg.ch04 = 0.1245686666570992;
    msg.ch05 = 0.19051058491885964;
    msg.ch06 = 0.43231766563182406;
    msg.ch07 = 0.7225676840012624;
    msg.ch08 = 0.5417763464779433;
    msg.ch09 = 0.342922236023253;
    msg.ch10 = 0.6804113700818891;
    msg.ch11 = 0.20854048136179326;
    msg.ch12 = 0.01788501061493375;
    msg.ch13 = 0.362282209136513;
    msg.ch14 = 0.9688409754770053;
    msg.ch15 = 0.5363074913218693;
    msg.ch16 = 0.0844173156420639;

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
    msg.setTimeStamp(0.451807111933371);
    msg.setSource(28745U);
    msg.setSourceEntity(240U);
    msg.setDestination(29603U);
    msg.setDestinationEntity(138U);
    msg.ch01 = 0.2890315203435462;
    msg.ch02 = 0.46842533685700516;
    msg.ch03 = 0.21718304177827097;
    msg.ch04 = 0.6352225793742938;
    msg.ch05 = 0.30067261728368755;
    msg.ch06 = 0.11946817609842209;
    msg.ch07 = 0.9003332053313239;
    msg.ch08 = 0.5516572869922296;
    msg.ch09 = 0.7613048662416829;
    msg.ch10 = 0.24216526703581087;
    msg.ch11 = 0.7854313989567842;
    msg.ch12 = 0.6077630707419741;
    msg.ch13 = 0.465287384326877;
    msg.ch14 = 0.543104751945495;
    msg.ch15 = 0.06291967953039812;
    msg.ch16 = 0.6179575260853929;

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
    msg.setTimeStamp(0.7539843210283375);
    msg.setSource(42348U);
    msg.setSourceEntity(45U);
    msg.setDestination(54085U);
    msg.setDestinationEntity(249U);
    msg.ch01 = 0.4472137007588126;
    msg.ch02 = 0.7060654129934343;
    msg.ch03 = 0.2873183330272937;
    msg.ch04 = 0.970600635362109;
    msg.ch05 = 0.16485410781324583;
    msg.ch06 = 0.5251732229791671;
    msg.ch07 = 0.42181613130366624;
    msg.ch08 = 0.4682522854279909;
    msg.ch09 = 0.0350843691750371;
    msg.ch10 = 0.18723608527661817;
    msg.ch11 = 0.19170164549216095;
    msg.ch12 = 0.6567188617010591;
    msg.ch13 = 0.7792308378205925;
    msg.ch14 = 0.4500005638764816;
    msg.ch15 = 0.5337127056506727;
    msg.ch16 = 0.8955015826532181;

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
    msg.setTimeStamp(0.2893867807055561);
    msg.setSource(21969U);
    msg.setSourceEntity(77U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(134U);
    msg.op = 204U;
    msg.lat = 0.9673590068927819;
    msg.lon = 0.24224966177100837;
    msg.height = 0.01261226159293416;
    msg.depth = 0.8326011865763283;
    msg.alt = 0.21317017210051026;

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
    msg.setTimeStamp(0.6036455819353294);
    msg.setSource(11288U);
    msg.setSourceEntity(28U);
    msg.setDestination(20635U);
    msg.setDestinationEntity(193U);
    msg.op = 179U;
    msg.lat = 0.7003262840780964;
    msg.lon = 0.2554308920113758;
    msg.height = 0.2591334786596562;
    msg.depth = 0.8289684958306904;
    msg.alt = 0.5933042055355421;

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
    msg.setTimeStamp(0.46911182652737415);
    msg.setSource(48273U);
    msg.setSourceEntity(179U);
    msg.setDestination(58272U);
    msg.setDestinationEntity(84U);
    msg.op = 191U;
    msg.lat = 0.10393879956361174;
    msg.lon = 0.6321332530577997;
    msg.height = 0.8140033109952832;
    msg.depth = 0.6545620233382236;
    msg.alt = 0.2678863208306299;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.38814053908065405);
    msg.setSource(61267U);
    msg.setSourceEntity(160U);
    msg.setDestination(63930U);
    msg.setDestinationEntity(23U);
    msg.value = 0.2231501774793293;

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
    msg.setTimeStamp(0.027595158360099403);
    msg.setSource(7489U);
    msg.setSourceEntity(12U);
    msg.setDestination(56264U);
    msg.setDestinationEntity(221U);
    msg.value = 0.17595714995250178;

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
    msg.setTimeStamp(0.4961884103175541);
    msg.setSource(59547U);
    msg.setSourceEntity(207U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(150U);
    msg.value = 0.1560036903477422;

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

  return test.getReturnValue();
}
