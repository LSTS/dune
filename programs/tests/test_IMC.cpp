//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
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
    msg.setTimeStamp(0.3187423086974708);
    msg.setSource(36947U);
    msg.setSourceEntity(130U);
    msg.setDestination(1251U);
    msg.setDestinationEntity(109U);
    msg.state = 130U;
    msg.flags = 178U;
    msg.description.assign("MZRMEEQPKASWVFEHONJHVTIAJZAXEUKWWEXKEHICYPHKUGTORBNXIDAUGNXFDZKMSFRYQYSCATSHKLWKQAFYHGIOHOZTLXQJYPOMMNEKTTTOXVDGPOZFBBPXIUGBCRZLKCAWPBDLSNYBCCNXHGBTFLMMJDCMBNVELWVGADYRPQKZJRDPNINUILLDGAMFYNQRUJTYOZAWCDYJGCGQIZSHEOWLVEJTUSVRXBLUFHRXFZBMIWVIVFJQ");

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
    msg.setTimeStamp(0.8093178995023114);
    msg.setSource(1954U);
    msg.setSourceEntity(28U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(128U);
    msg.state = 55U;
    msg.flags = 224U;
    msg.description.assign("TPFQWPFHYBDDMWSFIBELGZAKRFOSHGJPZXYPMTDEVIUDZUYJFMQKLQIGJYMWRVCEROBPYDTWUNVJMGPHXTBALKCAAKIVEMLVQOEXAXBRCQHTDLCMNSGFGRXUCSSXNYBQSOBWEINGCNNDCRTGFCNACXSXEKZKEVZLMWHWHUNDUOJURBKL");

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
    msg.setTimeStamp(0.4593144306903171);
    msg.setSource(46355U);
    msg.setSourceEntity(138U);
    msg.setDestination(41330U);
    msg.setDestinationEntity(11U);
    msg.state = 66U;
    msg.flags = 74U;
    msg.description.assign("OLIHAGDHPONHAMMKTVPTXRSIKOEBYXKCZIIDSPOYHBUKMFGSPIWFLMCCKQARETSFVJJXTXIQUGGGUNSUUTZJVLZL");

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
    msg.setTimeStamp(0.6575036291018166);
    msg.setSource(47834U);
    msg.setSourceEntity(206U);
    msg.setDestination(13976U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.9097835116956412);
    msg.setSource(22804U);
    msg.setSourceEntity(132U);
    msg.setDestination(29037U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.14621119591484877);
    msg.setSource(15377U);
    msg.setSourceEntity(170U);
    msg.setDestination(4466U);
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
    msg.setTimeStamp(0.6184613130587885);
    msg.setSource(55754U);
    msg.setSourceEntity(154U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(26U);
    msg.id = 215U;
    msg.label.assign("QHAOGPOUGMNZHHTNYKQLTSUYWDPQZVOFRBHG");
    msg.component.assign("CNVPWVMUQELRPUQLLNIATHARWRCHLHDIAUGKBDHLUYYYFTAWZYCGASELPPBXTRGBKHBQKBHNXPIFWQGFWEYZHZPXODTMLOOJYZYXKJSXQSKTUDKFMLGCVNHVDPMXWPNFCVPSCCJQWSUENFJDZZXIIFGEJVNXRKODUIJVJVROIXTSGRUCBLEJONLPCTJTMYAGDAACFHQKMFAYBSZXASZMIKDBQTNWKJMVSOWYQETQ");

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
    msg.setTimeStamp(0.45114037483842473);
    msg.setSource(52272U);
    msg.setSourceEntity(154U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(129U);
    msg.id = 71U;
    msg.label.assign("OGHLKLDUGDNBXLUOMQPSAFDJXROBZPBYPCZTHIHCWTZOSSKVATSKWQDXCYMFMSIYDGEXFP");
    msg.component.assign("NHDGLPQBSULNVEUSOIGPICXABETLSQTEKKQZMALHRXEPHRYQZJVGXOHXUZYMBJTQJZFFUHIWKDXLJFEXFFRGVYBCIICTDRICVJRSLZTVNEHXYSQQWKMAPZQHGSAOYLNDIMIFWKIGXPLFVB");

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
    msg.setTimeStamp(0.8498408027908918);
    msg.setSource(35838U);
    msg.setSourceEntity(25U);
    msg.setDestination(39175U);
    msg.setDestinationEntity(119U);
    msg.id = 39U;
    msg.label.assign("ABVUFDLCUXCQNCBHPALHXTUIY");
    msg.component.assign("SDGGPIUGTHTQZEWJNHZCARKQWLMSKAUCJKGNHEUNFHSITADZPIGXQATOWSXOMVWNQTYYZOJPGHHBSJQRLTMBZOJECFAJBKCRGNOTERIJZRVLSRVFWXNXUTUY");

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
    msg.setTimeStamp(0.3884736621786583);
    msg.setSource(19398U);
    msg.setSourceEntity(227U);
    msg.setDestination(39686U);
    msg.setDestinationEntity(123U);
    msg.id = 169U;

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
    msg.setTimeStamp(0.8283205764285456);
    msg.setSource(23740U);
    msg.setSourceEntity(240U);
    msg.setDestination(40842U);
    msg.setDestinationEntity(227U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.27941697072224136);
    msg.setSource(45931U);
    msg.setSourceEntity(151U);
    msg.setDestination(42184U);
    msg.setDestinationEntity(30U);
    msg.id = 166U;

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
    msg.setTimeStamp(0.08150318395559986);
    msg.setSource(28556U);
    msg.setSourceEntity(7U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(140U);
    msg.op = 72U;
    msg.list.assign("FGWOLYQQAKTZOCHUARUIHQOGKHVMRIDPBHXMLWDJKFEZNNSAHDNHGLPLYA");

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
    msg.setTimeStamp(0.8367002836295897);
    msg.setSource(57660U);
    msg.setSourceEntity(92U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(193U);
    msg.op = 52U;
    msg.list.assign("PNSGLVNLDIOGKCOBFBQRNRWGRMEEHRSCXZLXOHUBQHGMDMOHGJTNLYTVYAXVMVICOHNKQRZOZBUYWMLKKROLQREUMOUYWJTEONBXSIARDBSEXPPGJEUPWAKDMHVFVSQJSJJJMVXCTPCZPGHGNYDYYWWLTTFTSDKAHFAFBEWUPDZYXCPFSCXIKGWPGZTMQYRBP");

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
    msg.setTimeStamp(0.7726510126825514);
    msg.setSource(15914U);
    msg.setSourceEntity(195U);
    msg.setDestination(55574U);
    msg.setDestinationEntity(21U);
    msg.op = 112U;
    msg.list.assign("GOSHVPQNDXDHPWPHKMJBMZTGGBHJG");

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
    IMC::EntityControl msg;
    msg.setTimeStamp(0.018491762228782793);
    msg.setSource(57484U);
    msg.setSourceEntity(23U);
    msg.setDestination(23628U);
    msg.setDestinationEntity(217U);
    msg.op = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.8257021792150598);
    msg.setSource(10863U);
    msg.setSourceEntity(23U);
    msg.setDestination(36664U);
    msg.setDestinationEntity(165U);
    msg.op = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.27442134655474104);
    msg.setSource(7542U);
    msg.setSourceEntity(64U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(8U);
    msg.op = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.02270871256065332);
    msg.setSource(62064U);
    msg.setSourceEntity(184U);
    msg.setDestination(62758U);
    msg.setDestinationEntity(101U);
    msg.value = 230U;

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
    msg.setTimeStamp(0.8805715163167575);
    msg.setSource(13547U);
    msg.setSourceEntity(98U);
    msg.setDestination(27012U);
    msg.setDestinationEntity(74U);
    msg.value = 102U;

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
    msg.setTimeStamp(0.06751107202698337);
    msg.setSource(50388U);
    msg.setSourceEntity(40U);
    msg.setDestination(40000U);
    msg.setDestinationEntity(150U);
    msg.value = 132U;

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
    msg.setTimeStamp(0.7832955795656591);
    msg.setSource(11265U);
    msg.setSourceEntity(139U);
    msg.setDestination(10752U);
    msg.setDestinationEntity(29U);
    msg.consumer.assign("RGLFIDBNKWTOZANQQYBMMRITUAYKCRFPIEARACHCROOMZARXUVGWZNHHTRBJGFIEUTPBAXMVTDXTURXMWKUSJMJTSDMYPVZDVLKUXXYDGWGNYVTILQJZHFHYXBECLWAIJDSNKUVSAVLZHSULZGMESZJHAVQNHKDIXBNE");
    msg.message_id = 61759U;

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
    msg.setTimeStamp(0.3871488483234913);
    msg.setSource(29149U);
    msg.setSourceEntity(168U);
    msg.setDestination(60316U);
    msg.setDestinationEntity(82U);
    msg.consumer.assign("QRHIVHRFCFAFOWXAXNRUFZGMBNKMVHVBHBQEXBHAUDGJLMAUSQWKWEGWKDYYUGSWKRNVJJRWLQCEKRQBUXSDESEMU");
    msg.message_id = 14098U;

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
    msg.setTimeStamp(0.86822868060445);
    msg.setSource(20767U);
    msg.setSourceEntity(209U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(91U);
    msg.consumer.assign("KJNVNFWMINTSPVCYRHBFUUILRHZMAQZPIQRJEDMIFSZOOEACSQYVXAJAMLOSQDGTMJYURWPHLNKXVSLYCOMGGZDWZNYUKTJCPFBCFMBUTXXVKPCUULTGJHAODVJJIBDGTSJZCFWDXZIVWUNYYRZLBWRVSGHBOKQDATXXIMXAVIEWQQSCKNOOGREBTLEMKZESENBNHFWPPPPKYBVFYMBLLQPHGKTDUWDYF");
    msg.message_id = 62083U;

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
    msg.setTimeStamp(0.3496625256773723);
    msg.setSource(34875U);
    msg.setSourceEntity(248U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.22038482359988942);
    msg.setSource(27227U);
    msg.setSourceEntity(110U);
    msg.setDestination(23289U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.031074975332306076);
    msg.setSource(32461U);
    msg.setSourceEntity(1U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(99U);

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
    IMC::Parameter msg;
    msg.setTimeStamp(0.4073925408940571);
    msg.setSource(64363U);
    msg.setSourceEntity(19U);
    msg.setDestination(25936U);
    msg.setDestinationEntity(98U);
    msg.section.assign("SUZZIKSLFORCNUXQNQSLTTMXZBLQXSIUNVMGNHTCFRCEVHBYHBCBDYFKHSEXAFKTJEUWALGGTGOGRHSPJSVDKBLKRXHOZFSJTMOLCIYJXIBUGVXWZMJORDZFDUKPAEBWQHP");
    msg.param.assign("UKHJEQRDRTOXMMGKWWBJSFFTLJHCINBVIXIZGCMIYUTONRXYHMDOXVKMWAFASAKIO");
    msg.value.assign("OVFKLBHLFJLYBUVGEQHKAMNFHZJPMHQQXWAPFQVBPMGRXLTNVZEERZUJKMWEYACUXJVHSVZHQUVTBSMWICHZGDYUSPWJALIRRAZTAXKRMPKJWDECECPYEDOTNDIRECGOHNGBHCULXKYSPTCONOOGCYLQZTMSIBRPKPXZSFVMCDYFIJVDYZRXGSOLSMXNLWYFTRNHJLBFINDJUAZBEFQGAXQTABYXIODQGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.9444121765512423);
    msg.setSource(34649U);
    msg.setSourceEntity(181U);
    msg.setDestination(43302U);
    msg.setDestinationEntity(98U);
    msg.section.assign("OSHVPJHPWRWTLZSULGBQJWICUKZLRXGBVBFVCDWUGAIMWIQKUXVGVNLKNLCWKGRFONMCJIHTZZUAKYASQXXCPDQFRZTGMMETNSBNKISMUKRPHMIICDMFOZSLVAPNFVQYEGOFKDYOGXXXANEMPAWZCJOEZTJCWDRLXJRBLDYREYTHCTIUSLZTYOPHNRDEFTXAQQCSABPONHETDHDJVYIYPLQEAIGU");
    msg.param.assign("NGZYHUHGTYAZHBDQXVJSINRXCSABVICHXDKMCOGBEYIRRWUKNLPRANISLGKUSUTQSRVXELXSJ");
    msg.value.assign("BIPZSUNIKGCLMYMNGJFHKFILKPGKHDUYMQQWNSSEFTVWTJUZWGWAZOQGCQJGNBRTDVQKNPKEOTXJCJRRYJSMIPMOAVVDEGEPHZLDADHXXVAGNZTHHOZZOHRUROQMIDKMCDNFAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.5213931461283624);
    msg.setSource(22528U);
    msg.setSourceEntity(230U);
    msg.setDestination(55554U);
    msg.setDestinationEntity(74U);
    msg.section.assign("DTMEKBZVNBOYGXNUNJCIKVZSIMFZTBOEIBQRLXWQOGKHV");
    msg.param.assign("UIWMQAHVHOLXMOWRUIXJVZQCGWYUMTVFZEQBDSIIIPEPTWPRHFZDFGVUDQQAFDUWGOYPBNSKUNMWBKOBTMNPJHNUMTGFGOYWNDMHL");
    msg.value.assign("PENHAHJHDFZMCIOJNNOYRCZWBNYFGGEQNSNAMDOZHCMIBZXCRWBDWJLTDUIWRCDAKUTULHAIPZSJVMJQVSQALWGKACTIBQXILULBUOOFWDVTKKNZEQBXRLHQDXYPNFYCRVEPMXJIKRLWPUZYBWAJRWGFMZRMGYEGFCPFNPJEGSPHSJZITILUEBFGYXFGAKATLRXKMODPFQKKIHCYVTUCDWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.6199413695975122);
    msg.setSource(21017U);
    msg.setSourceEntity(54U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(96U);
    msg.op = 146U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("HRUYWYGUJNISMCIFZLQEILUMMSPWBQENZCIVUJTPOCCKGIVBXVKXQKLHVPMYYMQYAFIDWBXGGZCTDAEWNHYUBQTDRAZOMZRKPPRSKJXOUVSYHDTEHJHHQYPUGZOXZPYCLBVJNHMVTLFNJXWENSTQIQKBZFGEOARTNBECUKFX");
    tmp_msg_0.param.assign("CENDTEYMPIWFXXXFVCMPLAKCPGWMBDZBEUJMGHGQQUKHFYUMEIYFOQLFFYVOJXIKSRYSVOPDOPVBSBWPZDYGIITQXQVQYEPBWJKBCFHWTTPQRAUZVITSJFVRXNOPCRURKDGNLKHZTHESJZ");
    tmp_msg_0.value.assign("EDIZDHCHCJHGOQJLHJFBXDXSAKXQTTPAKYRPMHVSFFGTMYIQJIURZAOPGFULOZZKAEOTCUPVZYKNJVBJSEXQHCMQPRVVITLDYVJXWUSTDLMHWYFRLDUQQRSAXSJOMZKPUYESFIGAINGVNWKXFGDRCUDNILSHZIUBMWIUIVZDMPGYWLCEEWLPZPANBCOWHTEMFSKDOTMYHBYRKPVNGQKTWGNXKNJLOCFXBECNZAWAMUF");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.028363046724802166);
    msg.setSource(54221U);
    msg.setSourceEntity(198U);
    msg.setDestination(14774U);
    msg.setDestinationEntity(128U);
    msg.op = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.9466351532489395);
    msg.setSource(15690U);
    msg.setSourceEntity(121U);
    msg.setDestination(64958U);
    msg.setDestinationEntity(140U);
    msg.op = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5990546372356812);
    msg.setSource(2821U);
    msg.setSourceEntity(185U);
    msg.setDestination(46323U);
    msg.setDestinationEntity(16U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.9516411986514299);
    msg.setSource(49651U);
    msg.setSourceEntity(251U);
    msg.setDestination(38848U);
    msg.setDestinationEntity(228U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.3192888806080706);
    msg.setSource(53660U);
    msg.setSourceEntity(55U);
    msg.setDestination(4794U);
    msg.setDestinationEntity(106U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.5070077834116208);
    msg.setSource(43202U);
    msg.setSourceEntity(0U);
    msg.setDestination(49615U);
    msg.setDestinationEntity(87U);
    msg.total_steps = 163U;
    msg.step_number = 3U;
    msg.step.assign("CQQIDKVCEAZOXUBXKYCJASQBJQEFCWMWRICPFFORLANQTNLNLHYVFZNGFJPEHYVRZHURDGUMLJXKYNZRGNCAVSHKQFXYUHBWECHEZJ");
    msg.flags = 241U;

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
    msg.setTimeStamp(0.8230224511671028);
    msg.setSource(34150U);
    msg.setSourceEntity(8U);
    msg.setDestination(59683U);
    msg.setDestinationEntity(147U);
    msg.total_steps = 249U;
    msg.step_number = 21U;
    msg.step.assign("QOKRMIRHRJLHHAPNYSZSTRWUR");
    msg.flags = 129U;

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
    msg.setTimeStamp(0.6157611459605093);
    msg.setSource(32153U);
    msg.setSourceEntity(45U);
    msg.setDestination(8023U);
    msg.setDestinationEntity(24U);
    msg.total_steps = 138U;
    msg.step_number = 75U;
    msg.step.assign("GRZSEZPLVSEGUUJTHVFZISBEWIORDSQOQTCMVFBXBOMCOPKRXKBNQGJVIHDZITKMRYPLYCHPWLEVXWOWLKVOBFOIJZJNTCRFSUCWUSWUYALIT");
    msg.flags = 177U;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7595128752220752);
    msg.setSource(9328U);
    msg.setSourceEntity(238U);
    msg.setDestination(41342U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.7507661208237545;
    msg.lon = 0.5747241129212594;
    msg.height = 0.5367197375958255;
    msg.x = 0.21186737480186324;
    msg.y = 0.042066556323169246;
    msg.z = 0.5598134333996055;
    msg.phi = 0.13612301655704806;
    msg.theta = 0.109465325445948;
    msg.psi = 0.6153745591600396;
    msg.u = 0.9260935257216146;
    msg.v = 0.9238130499445587;
    msg.w = 0.8546805158994203;
    msg.p = 0.9563800781229742;
    msg.q = 0.06423244430876551;
    msg.r = 0.042426296900961114;
    msg.svx = 0.9051970898064454;
    msg.svy = 0.6702334669364493;
    msg.svz = 0.4166097425262636;

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
    msg.setTimeStamp(0.17929322780851642);
    msg.setSource(50148U);
    msg.setSourceEntity(139U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.8019061036913316;
    msg.lon = 0.7825805636402772;
    msg.height = 0.1408747287826777;
    msg.x = 0.7815755439390332;
    msg.y = 0.44290653051045825;
    msg.z = 0.1592081713968143;
    msg.phi = 0.016802507453605453;
    msg.theta = 0.27461338516805345;
    msg.psi = 0.3082093188384575;
    msg.u = 0.5815027523496019;
    msg.v = 0.8478151151705308;
    msg.w = 0.08844423454394024;
    msg.p = 0.607288060898684;
    msg.q = 0.6729782521832153;
    msg.r = 0.030818544867646902;
    msg.svx = 0.4967058807127791;
    msg.svy = 0.5040056047944762;
    msg.svz = 0.9085188434145854;

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
    msg.setTimeStamp(0.92524843578826);
    msg.setSource(9654U);
    msg.setSourceEntity(61U);
    msg.setDestination(59576U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.259769256058216;
    msg.lon = 0.35653981474156227;
    msg.height = 0.3140801105622276;
    msg.x = 0.7514432648804823;
    msg.y = 0.7184230054121643;
    msg.z = 0.6282534125913468;
    msg.phi = 0.3363145192134992;
    msg.theta = 0.9742723723733286;
    msg.psi = 0.8010269513305783;
    msg.u = 0.888134896156442;
    msg.v = 0.3073758908439338;
    msg.w = 0.5640659607749802;
    msg.p = 0.14218633943796544;
    msg.q = 0.3937651926403688;
    msg.r = 0.03496043556914519;
    msg.svx = 0.08596425418184095;
    msg.svy = 0.9970102698779203;
    msg.svz = 0.22595538841604035;

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
    msg.setTimeStamp(0.08325977695716436);
    msg.setSource(60644U);
    msg.setSourceEntity(198U);
    msg.setDestination(13876U);
    msg.setDestinationEntity(82U);
    msg.op = 243U;
    msg.entities.assign("HLHDFSLZTVYTAEQKBKFTODINIHJTZCSIMACHSUIKGWJBFVHMZUNHGKUOYTRLLIXOVLSKEYGWVOTXROUVQUOUFEQPCBXPEPBIRWFJGZCELMUCYHUBRZFSINMDCYNRY");

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
    msg.setTimeStamp(0.9271543108943125);
    msg.setSource(60708U);
    msg.setSourceEntity(38U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(14U);
    msg.op = 159U;
    msg.entities.assign("QSEKXNULQUBTUSHPARMZKGFIZLEAJBYFZJJGMHOCDOEQNTWLNTAVGVXRVTSWKDRLBXOMDLRLUYPUHUCYFCICTYERSCFBDPZSROOGQWQEJJCWUNSUPBVHAIYPVDWXGENGLENXVMCYNYZVPQFAITNXWFZSAIWSMOJYDDHYHGJDRVPNNBZZRKAITRKJVKVAPSLMBIGKD");

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
    msg.setTimeStamp(0.6227716265831357);
    msg.setSource(34401U);
    msg.setSourceEntity(117U);
    msg.setDestination(65349U);
    msg.setDestinationEntity(162U);
    msg.op = 153U;
    msg.entities.assign("SBNJKDCWPMEXWRNCIRPFEVFRCYADNQIYQNWXTBUAXWYIHTUHEGTTECLHFJMGADNYSYZOMECDULIHDGHSVMDFTQURVUOYSKDIQBMRVTCKJRZAKMAUYBKDQJHFEOAKXPUWGVKTEZEEHPCARIOKYHBTGN");

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
    msg.setTimeStamp(0.32181073130901994);
    msg.setSource(40424U);
    msg.setSourceEntity(219U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(201U);
    msg.type = 203U;
    msg.speed = 15107U;
    const char tmp_msg_0[] = {74, -127, 46, 100, 64, 96, 106, -12, -95, -42, 65, 59, -31, 8, 64, -68, 47, -110, -41, 54, -13, -32, -42, 25, 16, -49, -98, -73, -81, 67, 24, -120, -44, -41, 118, -53, 32, -119, -4, -68, -61, 22, 16, -37, 90, 15, 112, -43, 101, -25, -77, 15, -118, 32, -80, -89, 125, -41, -63, 0, 29, -16, -35, -23, 21, -59, 116, 6, 48, -79, 9, 118, -20, -8, -77, -89, -21, -26, 103, 46, -2, 83, 108, -121, -78, 125, -101, -61, -115, 112, 118, -117, 62, -41, 20, 36, -82, -3, -86, -6, 95, 62, 40, -1, 0, 41, 108, -10, -62, 46, -118, 86, -85, 67, -113, -87, -72, -47, 94, -10, -97, -58, -59, -86, -46, 59, 81, -70, 12, -122, 10, 118, 76, 65, 107, -101, -101, 69, -49, -26, 89, 41, 49, -90, -33, -1, 40, -92, -8, -109, 114, -90, 96, 87, 92, -56, -59, 11, 12, -104, -119, 75, -32, 100, 9, 12, 121, -99, -60, -57, -2, 42, -105, 13, -105, -83, 45, -26, 61, -55, -31, 64, 100, -79, 65, -27, -19, -120, -106, 64, 11, -36, 112, -110, -17, -78, -118, -28, 64, -43, -35, -40, 67, -57, -63, 56, 51, 17, 57, -30, -28, -122, -42, -70, 28, -108, 14, 5, 21, 107, 0, 56, -42, 51, -51, -84, 76, 106, -81, 15, -80, 39, -42, -52, -16, 114, -55, -75, -112, -71, -105};
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
    msg.setTimeStamp(0.7884832533582636);
    msg.setSource(26877U);
    msg.setSourceEntity(17U);
    msg.setDestination(53932U);
    msg.setDestinationEntity(117U);
    msg.type = 180U;
    msg.speed = 30324U;
    const char tmp_msg_0[] = {70, -53, 75, 5, 97, 6, -80, -105, -70, 43, -21, -47, 97, 20, 109, 111, -19, 79, -32, -49, 96, 82, 61, -51, -111, -112, -91, -24, -123, -67, -51, 9, 124, 63, -9, 8, 123, -108, 28, -15, 31, -41, -97, 109, 40, 74, 73, -93, -19, 58, 2, 115, 84, -110, 81, -60, 70, -120, -13, -57, 20, 89, -12, -35, 109, -114, 97, -26, 115, 49, 113, -93, 44, -96, -79, 57, -62, 6, -29, -8, 10, -25, -58, 55, 103, 54, -5, -15, 87, -67, -56, -67, -75, 23, -103, -12, -103, -32};
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
    msg.setTimeStamp(0.0004045805237312683);
    msg.setSource(43646U);
    msg.setSourceEntity(234U);
    msg.setDestination(23429U);
    msg.setDestinationEntity(78U);
    msg.type = 26U;
    msg.speed = 34777U;
    const char tmp_msg_0[] = {11, 98, 88, 83, -59, 79, 29, -67, -60, 22, -119, 48, -95, 80, -105, -40, -92, 77, 111, 82, -78, 106, -13, -26, -72};
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
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.6495352492485444);
    msg.setSource(49958U);
    msg.setSourceEntity(220U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(231U);
    msg.available = 3755926537U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.5132088554001486);
    msg.setSource(10750U);
    msg.setSourceEntity(19U);
    msg.setDestination(11274U);
    msg.setDestinationEntity(127U);
    msg.available = 859537566U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.4670859074181598);
    msg.setSource(52857U);
    msg.setSourceEntity(104U);
    msg.setDestination(29485U);
    msg.setDestinationEntity(56U);
    msg.available = 251015772U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.09457495533274318);
    msg.setSource(21144U);
    msg.setSourceEntity(86U);
    msg.setDestination(51095U);
    msg.setDestinationEntity(210U);
    msg.op = 118U;
    msg.snapshot.assign("VFBHJNHXYEKQFIXCWAWNUVACEPGTIYPCWMGWKLDLXRKDSVKIZOXXJQHOEFENLQUSHHAOGNQCRFSZFZVXHGWRCSIZAARBECVIUNZOFDJKTPCWMHYLQHNUYCLYKTYPNOLABSJWGMUTWHALRCDONBDXGJJZJZVYOBSMRSU");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 14U;
    tmp_msg_0.actions.assign("RJFSZTQHXAJRRFEHZLFVEDSFIWDTTRPTVNYJLQVSBSRKUIEWEZMGUHNOMLKJLIKCYFOIHGWPZKBQXBBFOZJOYAKFGSWJHZDEZDDJFLGZQQANTQDUCBOKEMAXTDDOLWRQMKNGIBVECIKMBXYUPHLNBSEAYXTVNPMXURCMPVQUJSCXMDBWSZPHGIORPAQNWSHEFYRDCNYAGTULICEXXXVSAOCOWNULATPYVATGCY");
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
    msg.setTimeStamp(0.5853824020781667);
    msg.setSource(28833U);
    msg.setSourceEntity(136U);
    msg.setDestination(42191U);
    msg.setDestinationEntity(11U);
    msg.op = 135U;
    msg.snapshot.assign("BUIOOTSJBIHXKEYXUOSPJHEATAECLYGXQPGRWCNHOTFUXTEVYCWMUYEPASSTBUIOZZNQCKMLMCIDHJNOCBDBNWEEHTPSZTWYOYVKTRALVRWYVGRFIWWDUDOOMVSS");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8118278419912326;
    tmp_msg_0.lon = 0.995063421184358;
    tmp_msg_0.height = 0.3695596129334612;
    tmp_msg_0.x = 0.1756982756077028;
    tmp_msg_0.y = 0.11614408811146071;
    tmp_msg_0.z = 0.8516211600693537;
    tmp_msg_0.phi = 0.8743283062816275;
    tmp_msg_0.theta = 0.28602333778585143;
    tmp_msg_0.psi = 0.8641110339828166;
    tmp_msg_0.u = 0.15731227691729888;
    tmp_msg_0.v = 0.5203508508282806;
    tmp_msg_0.w = 0.2148968172243022;
    tmp_msg_0.p = 0.7582746438909762;
    tmp_msg_0.q = 0.9648757069081814;
    tmp_msg_0.r = 0.7022486257710421;
    tmp_msg_0.svx = 0.9800951678201391;
    tmp_msg_0.svy = 0.878610764544453;
    tmp_msg_0.svz = 0.4568217117780673;
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
    msg.setTimeStamp(0.4841412606170047);
    msg.setSource(9167U);
    msg.setSourceEntity(135U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(3U);
    msg.op = 0U;
    msg.snapshot.assign("KKLVXICNESCMUEHJKEMHYVQHYGDGBVLTWDJNDOADYXPTEKLABCFSWLJRKNYTLSFXZDWYNMRAOWSPFDRTOBPCSGKHNFCPWQUULPTIEYLQGUQVUUEDHKJQFYDHHYAISZDMSUDGSOEIGTHECXATOHJJIFWNGOXWUMFFRZWCGRHMRJZRROOGNLAXIJZKNCVZVRJAQWUECANOVMOMSFYITCMZSLWPVPAPZTNBQYPLJTIBXEBXMRQVBZXKXB");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.3468787994894239;
    tmp_msg_0.phi = 0.8978377275635157;
    tmp_msg_0.theta = 0.367981321281331;
    tmp_msg_0.psi = 0.18302621960176857;
    tmp_msg_0.psi_magnetic = 0.31280288163382663;
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
    msg.setTimeStamp(0.9611144155275575);
    msg.setSource(39597U);
    msg.setSourceEntity(81U);
    msg.setDestination(4317U);
    msg.setDestinationEntity(134U);
    msg.op = 53U;
    msg.name.assign("EHWJSGTJUXVIDENXLLHPWTERTLEBYFVRHPMUYMBJWKFYZLUSXTAOIZCNDNWZDHWXOMOMNQVQQTEOSKYKYMFREBRBGCMGTKEKHBUXOBKDRTVITZALUUYEOWXAWGZFZGSCCLOJUCHFMSDLAISYQKWDOLJHPHTZCNAGXZLFNAMIFBPZPPIBKMNPGTQERAGUVMREJWYNKAG");

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
    msg.setTimeStamp(0.18761154679314318);
    msg.setSource(24789U);
    msg.setSourceEntity(153U);
    msg.setDestination(6945U);
    msg.setDestinationEntity(198U);
    msg.op = 78U;
    msg.name.assign("JPEUPHTCUMKOWPLRAUYEYYQBQMJGERNCAQJNSZNQDXKZXLKFIBEDAAIZXLJMTQCUSPZPCHUPZJQLDZGTEMRFTFETOFEBBKMNWKCKDETHGRLNDGVPLASVOBIGLRDGZMMMBHAOBIWKRCVVCVFWLARAUFZJWJIYLXFIVNQSZOSSDHXHHISIFOWOVSYGWYFVNPQEHYVSNUMTTQAKBTTJCZDWX");

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
    msg.setTimeStamp(0.12176912039142751);
    msg.setSource(58050U);
    msg.setSourceEntity(184U);
    msg.setDestination(2362U);
    msg.setDestinationEntity(29U);
    msg.op = 192U;
    msg.name.assign("PTPXSDNYHE");

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
    msg.setTimeStamp(0.40048766840326977);
    msg.setSource(35171U);
    msg.setSourceEntity(15U);
    msg.setDestination(20145U);
    msg.setDestinationEntity(23U);
    msg.type = 77U;
    msg.htime = 0.5077854786805565;
    msg.context.assign("PDAHBPMMQVQDRNPAWZQXRUTKGASGHWJIMBBTTYKDNULXUXNWCEMVLCELPWFWIVJUVFTGCDFEZZFCBCNMYGIHEFANHSJZYCREOKXGNVOAROFYYIJYIZWJJBTSQZUHIDAGFVLKMKWEGLOAPDMZQBUHBLDSCQBMIWKHURQXFERFKQLTSRRIXSICYEQXPPXVHCO");
    msg.text.assign("GWLHLBIUDEDNMSHASOSSOHBQAWVBAKZFCNEVRWASBVMONQDPRAKPXEFCQQCTNECPYILGYPVROSKXUJHYNWWNLTOUOCMVLXGYIAYNCZGXCFNVTDHHOIHQJZXVWBDCIIMEVFBMAGKZSFRUJPOFZNYELZRIKPZIFKLDVKMMEBUAWCTGZWXKFLGBFDWQGWTUDTJRIPUXXRLMHJKSQUSUATJYYPSRFMVPYOMNZLJQYZCER");

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
    msg.setTimeStamp(0.11449104113203268);
    msg.setSource(57993U);
    msg.setSourceEntity(240U);
    msg.setDestination(21708U);
    msg.setDestinationEntity(74U);
    msg.type = 120U;
    msg.htime = 0.18946624595073824;
    msg.context.assign("UCYQEGBKBLUNBOLYNAJLSTCMRYDRGVYOFNE");
    msg.text.assign("DYKYOSWELFXDAIQAEZZNSJRBDOKRMBSERJJKLEIYGRFBNGZCQBRZZMKCHTONVQCHVLFJYNDPSHRKMYSVAMLLCOJXAWKEIQUPFDOWLGUMLJSUMGYUNNMMMPIIHNWDIKXHQUQNFOOGUPXABPBOWTXHFHBCXGWTPKTTBRPAJTQFJBQPDXKEVPTWZGHVVAYNSHHEDWGCSPVIFURGOLECEYDRCVJFOIGAXZUZRWWLA");

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
    msg.setTimeStamp(0.38990016067549094);
    msg.setSource(33351U);
    msg.setSourceEntity(253U);
    msg.setDestination(6830U);
    msg.setDestinationEntity(169U);
    msg.type = 146U;
    msg.htime = 0.953033320542411;
    msg.context.assign("VNAOLQEWBSULRZAJHDBMZIKMXVMYLBETKNDRSSGKXVMSOMYGCYXDZKRJDHHMRUAEZUYAYSIPUCXTYGALRKQMNIQOCSBALEPJXP");
    msg.text.assign("BUCYOXKHQVJOSYCRBTXGQRQLUEGDXOAZMNLUQOJECAXZZIFFICDLAOVLGSIDWEKXHYREHAGWRKEZRUPDMPJHKQPHXBWOASACOTGQJMNPMWFHOJVGKBNCXKBNPGSAYVUGDMSEWJGFPVNKMFSNJOWLUWJTNTCIOWSRFFPQSPZULYVIKJYBTIRX");

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
    msg.setTimeStamp(0.5531314960460084);
    msg.setSource(7498U);
    msg.setSourceEntity(164U);
    msg.setDestination(5679U);
    msg.setDestinationEntity(45U);
    msg.command = 177U;
    msg.htime = 0.39746025692056797;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 26U;
    tmp_msg_0.htime = 0.16400893442546738;
    tmp_msg_0.context.assign("MAEHXHDESVYAYCLCIVDBPDVSRURTCXAKVMGUEINKLBYASOIQOMHDXLWFJOZZKELAPEOGQLWFDZJNSTNWMNQFNZAWUPXZNDDLKWQBKJNTWOVSUSLNYTPMFCZDGMDHVCPMCGAHUFXXYBMEVGRKTRBYKAZAYLBRISLXNBMVPHWTFYUBOBN");
    tmp_msg_0.text.assign("PGGVYZZLKCKHOTQRJOCAXJBMDAVYIVFKNYVWEEKYLLAHTYUOXKNSEWUIDGSXURDQMYMQIDZPWHBLSQPJCGDNCZRODJJHKTNUAVPBJSTWJMWPXWXZHDMWEIEFPZCCTYKYUHSGLVOABUBFSQQSEEGRCJKLMPQBNFNLKPMTGVQUNWEHF");
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
    msg.setTimeStamp(0.28945635448551954);
    msg.setSource(65495U);
    msg.setSourceEntity(78U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(167U);
    msg.command = 217U;
    msg.htime = 0.7688663769949082;

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
    msg.setTimeStamp(0.6343980871845971);
    msg.setSource(28269U);
    msg.setSourceEntity(154U);
    msg.setDestination(53170U);
    msg.setDestinationEntity(137U);
    msg.command = 29U;
    msg.htime = 0.7305002802077618;

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
    msg.setTimeStamp(0.016957204065096376);
    msg.setSource(23483U);
    msg.setSourceEntity(198U);
    msg.setDestination(32241U);
    msg.setDestinationEntity(189U);
    msg.op = 94U;
    msg.file.assign("TJXYNSLZSYRZ");

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
    msg.setTimeStamp(0.9975539339088165);
    msg.setSource(25786U);
    msg.setSourceEntity(147U);
    msg.setDestination(54245U);
    msg.setDestinationEntity(24U);
    msg.op = 195U;
    msg.file.assign("IEVZPDDIBEWUHQQOSRVCFLSKXXPTHESDHYZAHNJSHRZCTHXCFFLMGNCLILCRCOMTPWGBMLRAYIJDMUIBSPSJPPVJITEGEURFBNFHMGJXIAFXLZYDHOVELTSRZNEQTYYQUUFIUVZJYHBKBUGGQVEDPEVANMZBAAQMYJWYAFTCKZOFTBLDKDOAPONRUIDNCXSGJOOWKMEQKWWZVUCLITNHVNNAFXVGTSWWYBOJUGLQKRMW");

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
    msg.setTimeStamp(0.4946477477104161);
    msg.setSource(22308U);
    msg.setSourceEntity(83U);
    msg.setDestination(61111U);
    msg.setDestinationEntity(98U);
    msg.op = 177U;
    msg.file.assign("WSOOPUFSYTZEGOTPCPYAJETNHVCTVWLIXHITLKHXYLITSAPZVMCQRAXKFBEWBZNVZKYOQCWLGVWUJEOZAZFNMZISILBQGJIEVMJDWOYYWRNWSSUHCLGOXRHTDHQLNHPDBTANQO");

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
    msg.setTimeStamp(0.5713043983383604);
    msg.setSource(8939U);
    msg.setSourceEntity(221U);
    msg.setDestination(32817U);
    msg.setDestinationEntity(73U);
    msg.op = 59U;
    msg.clock = 0.47376279612847516;
    msg.tz = -105;

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
    msg.setTimeStamp(0.5382023536209085);
    msg.setSource(25316U);
    msg.setSourceEntity(232U);
    msg.setDestination(44699U);
    msg.setDestinationEntity(44U);
    msg.op = 94U;
    msg.clock = 0.9912227483902372;
    msg.tz = 76;

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
    msg.setTimeStamp(0.5393973111375198);
    msg.setSource(12306U);
    msg.setSourceEntity(135U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(7U);
    msg.op = 110U;
    msg.clock = 0.4175055696763281;
    msg.tz = -83;

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
    msg.setTimeStamp(0.3896530833850331);
    msg.setSource(3658U);
    msg.setSourceEntity(123U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.8086792540474537);
    msg.setSource(15323U);
    msg.setSourceEntity(55U);
    msg.setDestination(4724U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.8949020039671438);
    msg.setSource(18565U);
    msg.setSourceEntity(96U);
    msg.setDestination(23434U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.048782228026820085);
    msg.setSource(40946U);
    msg.setSourceEntity(190U);
    msg.setDestination(30507U);
    msg.setDestinationEntity(142U);
    msg.sys_name.assign("NGOBYJBRQWMPOVRHOKBGEZLREEPHILSFXGJNVABNMUWKHICOIDTSIXXAPEDQRMNLNKIOBWQIDRYARLNARYWDYACPLXGSFJMHFFZJQVYNHAPEQDJJBXCFISWFRDXUHVWBCQMGTTSIVKZGWDCEKVYOLSKQFCXZTYAMQVIADOZJHHLEUZYPRTZUKGEKZUPMUJVZFOBEXHGYSEWXNOZKPUQ");
    msg.sys_type = 67U;
    msg.owner = 37527U;
    msg.lat = 0.6672563471986703;
    msg.lon = 0.5279685839488072;
    msg.height = 0.5518983559795377;
    msg.services.assign("TLZJMFAPCGIZHGXZIDOXNLRSHYOBQJQNXJXKVEWPUVXZOQJBNUZAADGYJUJCWMVULSORKEPVJXBHBVKIGXWMNOXZIVREIBDEHKOFEJCWAPPKVRFJCLNQBMKBQSPRTKTXD");

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
    msg.setTimeStamp(0.4131717454018885);
    msg.setSource(30217U);
    msg.setSourceEntity(54U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("UTGKFYHDLXUMDJGTOJTODXJCVRJXZZWZBZUHGWWZVCMWSNZRXWTHMRHIBMMAUYPBPQSGDBUOIFEUEXNKHPGSCVNJQHAPKAFLNHCYWGQIJXLPZCCRJMRMEBKASECVQPLJIUTVVFTWYONODZWWILZVQHRXHIMQTDRHQLUXSXSJOKSNMQFNFPEFBIUTFNVLBYLAECDQBLGLRIYUNANAQYATCADVEOZPESFRYYGSIYOKGCMDBPKFTRKX");
    msg.sys_type = 141U;
    msg.owner = 21894U;
    msg.lat = 0.47896233091845575;
    msg.lon = 0.4164264237284909;
    msg.height = 0.049895282351363646;
    msg.services.assign("UBUWJLPWCMGXSZCCLKFBGMSKQTNRKVXLJIQQLHOOBQEZSTULIOFNVCFBZNDLPIKDHBGTKVCUBSWWAPTDAXXJXNCFYIJUSDEJZLLVMHFMGYYEFAQUZHTRUYCETYMSHIPKRBQLVPFRJXIBMMWQWORXRVHC");

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
    msg.setTimeStamp(0.07929490170246378);
    msg.setSource(20862U);
    msg.setSourceEntity(223U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(201U);
    msg.sys_name.assign("JGGTJQBNYWYUQTLLKOLWPAIBKXNMVXCHIQRZXLNORKVSBBHQXCCMCKIDMKZGOGFGMYARMGCTJXJPPNNEGRCHICIBEGJSL");
    msg.sys_type = 134U;
    msg.owner = 19416U;
    msg.lat = 0.5154519529940476;
    msg.lon = 0.34024672845502146;
    msg.height = 0.9060729363202141;
    msg.services.assign("OHEITUDHIQDQHXWGCWPTRQCWDFPMRCEFXCQTERAZGFHAVBZQFMLLRNDJIKBXNAKXEUOMLTMKBWMDVOIZRNYZOUZGVCSJBWSCXQLRENISUZJHPUIPAYUWHIGYOKARIWPRAEZTIYVASSIPXXMAKOZWBXJEDLDFKFGLGFKNTDPYUDCNTTJBMCCKMBWDFMXVNOCEHGLETGONRVHYYJSQBSJVFEKUYBSGNFJNHZVQQUSJPBLPJVOLHRXMQTKVGZL");

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
    msg.setTimeStamp(0.010730845700382186);
    msg.setSource(320U);
    msg.setSourceEntity(185U);
    msg.setDestination(20030U);
    msg.setDestinationEntity(253U);
    msg.service.assign("AEGCHKLVUVVGJKZIOVJMRFYEQIZHZVNNALQADKIKHDDSPQROTPNCGPEGFOBWQYONFCRSXIPVPNQLTCXWHVAYJBWSXTVUNEZXUMZQODKXYHZHCFANPDLGBMFEKSTF");
    msg.service_type = 101U;

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
    msg.setTimeStamp(0.14646487350614268);
    msg.setSource(62050U);
    msg.setSourceEntity(91U);
    msg.setDestination(31388U);
    msg.setDestinationEntity(51U);
    msg.service.assign("KUMIMXKAPSGFPXAMCJNRBPZWGGYO");
    msg.service_type = 59U;

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
    msg.setTimeStamp(0.2729994100509545);
    msg.setSource(20650U);
    msg.setSourceEntity(110U);
    msg.setDestination(37274U);
    msg.setDestinationEntity(125U);
    msg.service.assign("NFLUPALXRLXUPJMGZWLKSQAQGNVHOFTKNDITNFDKHHFJNSXCIDLTCCOQEZBMWKKYNXWQKRSEKWBBVQXTKV");
    msg.service_type = 144U;

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
    msg.setTimeStamp(0.8713717830769646);
    msg.setSource(62046U);
    msg.setSourceEntity(182U);
    msg.setDestination(19906U);
    msg.setDestinationEntity(94U);
    msg.value = 0.22297188509115018;

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
    msg.setTimeStamp(0.31020282494668916);
    msg.setSource(21516U);
    msg.setSourceEntity(191U);
    msg.setDestination(25076U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7887511584023561;

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
    msg.setTimeStamp(0.2335894397192072);
    msg.setSource(23301U);
    msg.setSourceEntity(35U);
    msg.setDestination(17904U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7007435222203591;

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
    msg.setTimeStamp(0.4557992499521826);
    msg.setSource(13016U);
    msg.setSourceEntity(148U);
    msg.setDestination(48905U);
    msg.setDestinationEntity(142U);
    msg.value = 0.989558608922379;

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
    msg.setTimeStamp(0.9519684090940005);
    msg.setSource(40345U);
    msg.setSourceEntity(1U);
    msg.setDestination(18611U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7001902207941642;

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
    msg.setTimeStamp(0.5923881840681364);
    msg.setSource(27757U);
    msg.setSourceEntity(180U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(36U);
    msg.value = 0.9813956550012525;

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
    msg.setTimeStamp(0.15763622237703068);
    msg.setSource(61027U);
    msg.setSourceEntity(240U);
    msg.setDestination(2575U);
    msg.setDestinationEntity(189U);
    msg.value = 0.31920597541810913;

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
    msg.setTimeStamp(0.005441349423032538);
    msg.setSource(6342U);
    msg.setSourceEntity(170U);
    msg.setDestination(14891U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8372369664147484;

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
    msg.setTimeStamp(0.2920922045614648);
    msg.setSource(42047U);
    msg.setSourceEntity(199U);
    msg.setDestination(63758U);
    msg.setDestinationEntity(200U);
    msg.value = 0.18697511758917618;

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
    msg.setTimeStamp(0.7727973045280374);
    msg.setSource(38590U);
    msg.setSourceEntity(162U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(3U);
    msg.number.assign("DNCNWBNSWKTITPLIIATHYAXUFGSTBQRCDMVMUIRHGUSJPCWZYRFJRWLCFSJNFXMIBMPTHYIPKUEULZXCBPJNKZFJHLPVSAF");
    msg.timeout = 29604U;
    msg.contents.assign("WQVVAAYYYIAXCPZNIQOZHCNZJDJXTGJFBROHGRFPKKQEVGNXQELQSWXKQKDGLGXVZFNMMDOUMJSSAPEXMEEKYHYVWXRMOWWBKXGFMKTLGQBHIIOFDIAWTNOMGUHRRZIFOVDYSBMQGNLYCTBIRFXHTPPSLUQDXSVJCMFJTALBSUVWKBYUYEULNNEEZWA");

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
    msg.setTimeStamp(0.4495176314386514);
    msg.setSource(35687U);
    msg.setSourceEntity(164U);
    msg.setDestination(18054U);
    msg.setDestinationEntity(17U);
    msg.number.assign("CMHWTHSIBLFJSTKFOFSPHFPAPGYRZYBZUXVEHPWFVHICFEEHAXLXYDRRGWTLNSCGVINDNKAQWKMXPKNMDUAGCNINRJNONMUAEWBGAGLCEZYPQDHRQVJGSTOWBOGRGKFMCZWDKOUUBJZQLOCWIXFZQGPQPBXJYBKWVOJVTRQSJATLLOLYZORKIFIMVXKWVIIIUSBNFEPLKTQUCDRDDAXNYCBYZMPAYYTUCEOMJAQMURH");
    msg.timeout = 14431U;
    msg.contents.assign("YSCXQMOKSHKFZGAASKTJCBNDDYNQJSFGKLHSTOIUWRXGAKFQMRDMQHPRFDQYDWU");

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
    msg.setTimeStamp(0.895738906560606);
    msg.setSource(45622U);
    msg.setSourceEntity(17U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(1U);
    msg.number.assign("CQBNNQLXXHADPEHJNEVXCDDMGJPPJQDCBCFOREQUREUDVHFKOZVKHMLEOT");
    msg.timeout = 34435U;
    msg.contents.assign("FCWRBHZVUGUVSLRNMDYLLONQMSEQQNVYDZWGTLSRWFEJJSBLUWZZVLITXWFXXEDGRUPROPMXBTOGTBBIAZIFNUEEFCCPXGWRFQKHNWVTEF");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.9023572228919019);
    msg.setSource(38514U);
    msg.setSourceEntity(230U);
    msg.setDestination(38438U);
    msg.setDestinationEntity(224U);
    msg.id = 75U;
    msg.range = 0.9188007529630549;

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
    msg.setTimeStamp(0.7384243543332307);
    msg.setSource(9369U);
    msg.setSourceEntity(73U);
    msg.setDestination(51280U);
    msg.setDestinationEntity(7U);
    msg.id = 187U;
    msg.range = 0.16563267734059062;

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
    msg.setTimeStamp(0.5995568716761613);
    msg.setSource(60121U);
    msg.setSourceEntity(135U);
    msg.setDestination(30837U);
    msg.setDestinationEntity(154U);
    msg.id = 40U;
    msg.range = 0.6515437394063036;

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
    IMC::LblDetection msg;
    msg.setTimeStamp(0.8408915115556819);
    msg.setSource(54557U);
    msg.setSourceEntity(74U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(220U);
    msg.tx = 91U;
    msg.channel = 200U;
    msg.timer = 25528U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.4725016586656061);
    msg.setSource(6752U);
    msg.setSourceEntity(128U);
    msg.setDestination(31866U);
    msg.setDestinationEntity(64U);
    msg.tx = 101U;
    msg.channel = 64U;
    msg.timer = 49130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.5766248963141201);
    msg.setSource(44494U);
    msg.setSourceEntity(122U);
    msg.setDestination(2439U);
    msg.setDestinationEntity(237U);
    msg.tx = 46U;
    msg.channel = 27U;
    msg.timer = 32397U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8764609620761642);
    msg.setSource(32580U);
    msg.setSourceEntity(151U);
    msg.setDestination(42089U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("AEPOSDXRBGPDSFQCHVJBRTSVKADOVJILYUQGBORTFCYNNURUKJOYNZNEWSTCBYBVHRJIPLXOZZSCAFUMWQSEQDSSJYIBMHLPQNCZUGSKFKFZCPRPRKVIBHPMKCSIBDALAOTCJFWNKNR");
    msg.lat = 0.5511898731867465;
    msg.lon = 0.6327170918022017;
    msg.depth = 0.5667054056657524;
    msg.query_channel = 207U;
    msg.reply_channel = 238U;
    msg.transponder_delay = 101U;

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
    msg.setTimeStamp(0.9433778208125215);
    msg.setSource(61703U);
    msg.setSourceEntity(243U);
    msg.setDestination(3709U);
    msg.setDestinationEntity(135U);
    msg.beacon.assign("VLDZEPAPEWVGLQMLRUYZIKRYMEVUCRFCCCHDWSHNMVHFIQURDESLBUFDVLXPNYCMJTWGGCMENAUAKDPOCSCKSABRFZIGIJBFZGHVFWZKZUXSNGXRRWDACYMXPNJCDIEOXBAHVZBHBOTRQSHTBIEVQNJKOFAPFTQIVJDDTWTYEHPMDWPEKJZTQARUKOLHWLSIYSGTOQZJYUEUULIOOLPFVANBXYAQBW");
    msg.lat = 0.9873385598647668;
    msg.lon = 0.7693082947248704;
    msg.depth = 0.41849537713891494;
    msg.query_channel = 51U;
    msg.reply_channel = 155U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.20787938536205897);
    msg.setSource(63021U);
    msg.setSourceEntity(193U);
    msg.setDestination(626U);
    msg.setDestinationEntity(89U);
    msg.beacon.assign("DYETZUGRXHRVLTMJICTBTWGUEVWPVHDDYHTFGYHVWHBYNEPWJDWFS");
    msg.lat = 0.40185489601102986;
    msg.lon = 0.4490806002475116;
    msg.depth = 0.9623252097605524;
    msg.query_channel = 90U;
    msg.reply_channel = 90U;
    msg.transponder_delay = 242U;

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
    msg.setTimeStamp(0.15238771038622334);
    msg.setSource(20094U);
    msg.setSourceEntity(85U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(83U);
    msg.op = 98U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZPSFJZFVOVOXKGGUYYNQPWDVKEUBGGJLDNBLZRAAUSONJIWMPYJBVNMYWEUNUIEIOQKLCRIPPAATESTZCFZIJEXOWCLTSHFK");
    tmp_msg_0.lat = 0.6963082474855128;
    tmp_msg_0.lon = 0.7050633293601959;
    tmp_msg_0.depth = 0.9686310605937655;
    tmp_msg_0.query_channel = 185U;
    tmp_msg_0.reply_channel = 88U;
    tmp_msg_0.transponder_delay = 212U;
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
    msg.setTimeStamp(0.30989601879655493);
    msg.setSource(7558U);
    msg.setSourceEntity(185U);
    msg.setDestination(49955U);
    msg.setDestinationEntity(126U);
    msg.op = 188U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XXUZHHUEIRMNBGMWJCHDPTDJVZQIWJASGATVDTIEYYVAIMNRRVOTYARJDXUOFVKCXBUYLUKXNLPGMYTSQMPUHRSJPNKJCEUCIJXBUDIVTKCAZFGKCAVOWDSXIGSEHZBMWMDPDKBPFHCBCZLVQPZRBCEKHFYDQCVGJFWNTQWWYYOBUEOLWAMLFPO");
    tmp_msg_0.lat = 0.7415905215020963;
    tmp_msg_0.lon = 0.5134708135554098;
    tmp_msg_0.depth = 0.9568714562670663;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 52U;
    tmp_msg_0.transponder_delay = 218U;
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
    msg.setTimeStamp(0.7246525836823489);
    msg.setSource(31579U);
    msg.setSourceEntity(91U);
    msg.setDestination(10962U);
    msg.setDestinationEntity(232U);
    msg.op = 162U;

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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.7728459848231651);
    msg.setSource(29558U);
    msg.setSourceEntity(83U);
    msg.setDestination(43247U);
    msg.setDestinationEntity(139U);
    msg.address = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.2654396202124275);
    msg.setSource(6367U);
    msg.setSourceEntity(197U);
    msg.setDestination(47857U);
    msg.setDestinationEntity(142U);
    msg.address = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.01611491335611681);
    msg.setSource(6960U);
    msg.setSourceEntity(230U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(175U);
    msg.address = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.32345334426028816);
    msg.setSource(32235U);
    msg.setSourceEntity(106U);
    msg.setDestination(51105U);
    msg.setDestinationEntity(224U);
    msg.address = 236U;
    msg.status = 125U;
    msg.range = 0.40639696291071425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.2714209810317574);
    msg.setSource(49413U);
    msg.setSourceEntity(5U);
    msg.setDestination(32762U);
    msg.setDestinationEntity(210U);
    msg.address = 28U;
    msg.status = 225U;
    msg.range = 0.04420082723319829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.16637779114581475);
    msg.setSource(49143U);
    msg.setSourceEntity(212U);
    msg.setDestination(33426U);
    msg.setDestinationEntity(38U);
    msg.address = 89U;
    msg.status = 89U;
    msg.range = 0.10143797596606097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9827923979166605);
    msg.setSource(6482U);
    msg.setSourceEntity(60U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(175U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 223U;
    tmp_msg_0.htime = 0.478677433134725;
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
    msg.setTimeStamp(0.8025328008782097);
    msg.setSource(15168U);
    msg.setSourceEntity(151U);
    msg.setDestination(55753U);
    msg.setDestinationEntity(20U);
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.08238219984539741);
    msg.setSource(42615U);
    msg.setSourceEntity(100U);
    msg.setDestination(36115U);
    msg.setDestinationEntity(45U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8911388258697271;
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
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.7340336623351938);
    msg.setSource(57230U);
    msg.setSourceEntity(201U);
    msg.setDestination(28179U);
    msg.setDestinationEntity(64U);
    msg.enable = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.9650551181622766);
    msg.setSource(48704U);
    msg.setSourceEntity(201U);
    msg.setDestination(37750U);
    msg.setDestinationEntity(23U);
    msg.enable = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.8589257593599685);
    msg.setSource(39378U);
    msg.setSourceEntity(28U);
    msg.setDestination(33453U);
    msg.setDestinationEntity(60U);
    msg.enable = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.2629396735856818);
    msg.setSource(59045U);
    msg.setSourceEntity(12U);
    msg.setDestination(32561U);
    msg.setDestinationEntity(215U);
    msg.summary = 18U;
    msg.level = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.24529320905094265);
    msg.setSource(46410U);
    msg.setSourceEntity(131U);
    msg.setDestination(56595U);
    msg.setDestinationEntity(251U);
    msg.summary = 63U;
    msg.level = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.8163526263102074);
    msg.setSource(28035U);
    msg.setSourceEntity(27U);
    msg.setDestination(12828U);
    msg.setDestinationEntity(202U);
    msg.summary = 81U;
    msg.level = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.3536077935678461);
    msg.setSource(64900U);
    msg.setSourceEntity(100U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(45U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.5645638925682278);
    msg.setSource(27745U);
    msg.setSourceEntity(127U);
    msg.setDestination(459U);
    msg.setDestinationEntity(199U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.7905093921143437);
    msg.setSource(3613U);
    msg.setSourceEntity(85U);
    msg.setDestination(42719U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.7474442837097149);
    msg.setSource(6804U);
    msg.setSourceEntity(95U);
    msg.setDestination(5343U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.18713820071957132);
    msg.setSource(56519U);
    msg.setSourceEntity(149U);
    msg.setDestination(39126U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.12972477397523818);
    msg.setSource(50288U);
    msg.setSourceEntity(237U);
    msg.setDestination(37079U);
    msg.setDestinationEntity(85U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #2", msg == *msg_d);
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
    msg.setTimeStamp(0.15141460525479722);
    msg.setSource(31052U);
    msg.setSourceEntity(230U);
    msg.setDestination(1352U);
    msg.setDestinationEntity(71U);
    msg.op = 132U;
    msg.system.assign("WOBEGMDTZHANYEXYOVYQYNGWPPASHESVWVAWCXXUEIKKXAVUFUUJTGGOJJMMQLMHVVCXRANFRIDYYIRBQRXPRCJIIGPLZJHSAQNOWBNFWICOIPUWCLNDUAXTRVBTJVKDHFXZTWFZSODJYKTGQPOLXQCCFHFUNATCSGLRFPASOZGEJYZSEJPBDELQMCLEKMZPO");
    msg.range = 0.08748858503912582;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WNXYIBUKDRXNJFHDSUOUJRHWASIBQMGJPCOXCECHWBIEYDFMBMJLZQMAJFVVWTKBIOCFURWGDGJLTGACXWRBXFUZHETCGLISHATBZFETMSQGZZRIIKIJXOBOIVNYOBPTACWZRVXCLNKAPQYRPOKHWFBNMADUYGQLSRJQMMUGVPDFEVXJDKYNTUSXSKCSKNJFOYDVYRZALPHQPHOVGUZNNLAVTQSZVIZMTHPEEQCLKHMDYWE");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CWDZHMZALGPMDFOCFTUKQVBKBHJKRISZPOWOXEJLFRUCENMLHYOPJDQXWZA");
    tmp_tmp_msg_0_0.value.assign("SMJHWLNJGGLLHPCSDCLOSMWJGBZPNXLFYXSEEDHVFXRZCVDUBAAPIBWXFMGNLMPVXKWYFQBCHVJPDAJLIKTBHUCXVKROLMMAQYAFZQOQJEBQDTIFUNIDVUPDPZSMIKMAZTSDECHEFYRKKRUOGNHGUYFAVNGPUORCYYSZFOHWNGAKEKCIWGTTVRQTPAITCRONWQB");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.35215404116336446);
    msg.setSource(64172U);
    msg.setSourceEntity(191U);
    msg.setDestination(9045U);
    msg.setDestinationEntity(4U);
    msg.op = 95U;
    msg.system.assign("BVDMYWYXGOWQNJRMIOBSXTSYRDZLIJRWGPXZETHTUH");
    msg.range = 0.4268308641970153;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.8001680251180673;
    tmp_msg_0.x = 0.9199616590480766;
    tmp_msg_0.y = 0.044348675298101825;
    tmp_msg_0.z = 0.8279724616623572;
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
    msg.setTimeStamp(0.11462990137566242);
    msg.setSource(8969U);
    msg.setSourceEntity(98U);
    msg.setDestination(30504U);
    msg.setDestinationEntity(135U);
    msg.op = 98U;
    msg.system.assign("WOCGXBDXNCAGDGGCHBVZEZQPBULSJHAZRKNMOLHIPETDMSRWRSSAIXRTUQW");
    msg.range = 0.8355539047348299;
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 223U;
    tmp_msg_0.width = 41426U;
    tmp_msg_0.height = 45170U;
    tmp_msg_0.widthstep = 55453U;
    tmp_msg_0.channels = 92U;
    tmp_msg_0.depth = 102U;
    tmp_msg_0.finaldata = 133U;
    const char tmp_tmp_msg_0_0[] = {100, -116, -79, -54, 58, -102, -109, -86, 90, -126, 53, -54, -42, -27, 28, 67, 104, 27, 18, 50, 28, -21, -11, 83, -119, -72, 95, -90, -93, 40, 109, 42, -68, -2, 110, 73, 61, -50, -96, -21, 37, -65, -59, 57, 17, -33, 14, 8, -51, 75, 79, 62, 114, 31, -38, 120, 58, -64, -27, 5, 46, 8, 44, -39, -68, -50, 97, -78, 119, -102, 39, -7, 100, -115, 120, -107, -91, 83, 78, -31, 50, -104, 52, 63, -92, -112, 43, -54, 65, 22, -32, -1, -2, 99, 114, -72, -84, -99, 122, -88, 73, -79, 120, -29, 6, 89, -82, 63, 111, -101, -53, -21, -49, 46, -22, 90, -110, -74, 37, 19, -25, -77, 86, 30, 99, 1, 118, -42, -122, 58, -12, -44, -48, -34, 1, -6, -33, -17, 4, -101, 109, 66, 120, 60, 12, -14, 57, -120, -105, -101, -9, 70, -5, -55, -40, -1, -51, 83, 120, 114, -7, -98, -107, 117, 107, -12, -82, 72, 68, 48, 80, 52, -122, 54, -118, -64, 66, 43, 55, -76, 26, -73, -31, -125, -48, -14, 38, -93, -56, -29, -19, -2, -92, 50, -26, 60, 17, -65, 21, -96, -21, -53, 27, 44, 12, -32, -61, -79, -128, -104, -98, -106, 101, -86, -45, -13, 83, 92, -51, 111, -75, 4, -49, -114, 54, 75, 44, 41, -98};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7183672236807906);
    msg.setSource(64404U);
    msg.setSourceEntity(207U);
    msg.setDestination(48022U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.17437445820920627);
    msg.setSource(42331U);
    msg.setSourceEntity(55U);
    msg.setDestination(43958U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.7435405226265919);
    msg.setSource(5943U);
    msg.setSourceEntity(146U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.5593914938676453);
    msg.setSource(36658U);
    msg.setSourceEntity(233U);
    msg.setDestination(38745U);
    msg.setDestinationEntity(80U);
    msg.list.assign("QHEIJEIHBEBDQFOBKVVQRRNNXCSFXNSTUJIWTAWMMLDCMHQZUEBYYOBMYZCJBK");

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
    msg.setTimeStamp(0.013807705474958465);
    msg.setSource(51855U);
    msg.setSourceEntity(126U);
    msg.setDestination(11832U);
    msg.setDestinationEntity(22U);
    msg.list.assign("IMROXXTGOBOSTVZDLJOGYKTFCEECAZTIUXIUBECVNDGAEDAHBRBPHOZANNCQFEQBIMTXAYQVIEWJWFZBQOKPJYIMAFEHPJUKXSOMTNHNFNVSYWODWHXYGQLWMHSLIWUADBUKVCXNSGPPY");

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
    msg.setTimeStamp(0.7442009486270759);
    msg.setSource(56528U);
    msg.setSourceEntity(99U);
    msg.setDestination(33207U);
    msg.setDestinationEntity(202U);
    msg.list.assign("LEYATIREONBZJCQLYSVMPUAGIHN");

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
    msg.setTimeStamp(0.6134070762469397);
    msg.setSource(15922U);
    msg.setSourceEntity(238U);
    msg.setDestination(56174U);
    msg.setDestinationEntity(207U);
    msg.value = 5633;

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
    msg.setTimeStamp(0.4877830488277749);
    msg.setSource(45920U);
    msg.setSourceEntity(55U);
    msg.setDestination(43397U);
    msg.setDestinationEntity(167U);
    msg.value = 25174;

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
    msg.setTimeStamp(0.540197652314995);
    msg.setSource(6613U);
    msg.setSourceEntity(241U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(1U);
    msg.value = 31647;

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
    msg.setTimeStamp(0.34921079231780294);
    msg.setSource(43561U);
    msg.setSourceEntity(169U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5337462309141261;

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
    msg.setTimeStamp(0.6861798569207954);
    msg.setSource(24016U);
    msg.setSourceEntity(60U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(15U);
    msg.value = 0.49699455769280976;

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
    msg.setTimeStamp(0.30982902903115717);
    msg.setSource(2496U);
    msg.setSourceEntity(184U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(5U);
    msg.value = 0.058162110820301316;

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
    msg.setTimeStamp(0.01633160816450918);
    msg.setSource(48482U);
    msg.setSourceEntity(163U);
    msg.setDestination(21541U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5143077740209226;

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
    msg.setTimeStamp(0.8877175067338613);
    msg.setSource(23829U);
    msg.setSourceEntity(95U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9145768659920953;

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
    msg.setTimeStamp(0.08802536001032601);
    msg.setSource(38563U);
    msg.setSourceEntity(129U);
    msg.setDestination(43021U);
    msg.setDestinationEntity(245U);
    msg.value = 0.5387044238488127;

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
    msg.setTimeStamp(0.23095739359295675);
    msg.setSource(61228U);
    msg.setSourceEntity(189U);
    msg.setDestination(61899U);
    msg.setDestinationEntity(64U);
    msg.validity = 64482U;
    msg.type = 68U;
    msg.utc_year = 37481U;
    msg.utc_month = 120U;
    msg.utc_day = 55U;
    msg.utc_time = 0.9618684818950612;
    msg.lat = 0.39047740030421774;
    msg.lon = 0.39075116383420794;
    msg.height = 0.009879232885643408;
    msg.satellites = 187U;
    msg.cog = 0.6734562172502764;
    msg.sog = 0.704521545398012;
    msg.hdop = 0.12268240453328694;
    msg.vdop = 0.9943305617124922;
    msg.hacc = 0.20968484092376471;
    msg.vacc = 0.040286272129059775;

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
    msg.setTimeStamp(0.8440330242878016);
    msg.setSource(29897U);
    msg.setSourceEntity(184U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(151U);
    msg.validity = 45501U;
    msg.type = 244U;
    msg.utc_year = 13466U;
    msg.utc_month = 162U;
    msg.utc_day = 219U;
    msg.utc_time = 0.4378087266416303;
    msg.lat = 0.05966273479482109;
    msg.lon = 0.5270137425537897;
    msg.height = 0.5095218116832431;
    msg.satellites = 76U;
    msg.cog = 0.7957991109114136;
    msg.sog = 0.4585302066378887;
    msg.hdop = 0.991653671733485;
    msg.vdop = 0.0653997023694457;
    msg.hacc = 0.6666138942235423;
    msg.vacc = 0.9978650066444521;

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
    msg.setTimeStamp(0.45814583840542866);
    msg.setSource(60284U);
    msg.setSourceEntity(11U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(74U);
    msg.validity = 44602U;
    msg.type = 250U;
    msg.utc_year = 1198U;
    msg.utc_month = 126U;
    msg.utc_day = 13U;
    msg.utc_time = 0.4176699696519205;
    msg.lat = 0.944740176723953;
    msg.lon = 0.49300777995264944;
    msg.height = 0.40481422809839585;
    msg.satellites = 242U;
    msg.cog = 0.9405208407678171;
    msg.sog = 0.7649742305245539;
    msg.hdop = 0.2491507050511924;
    msg.vdop = 0.5238065063972168;
    msg.hacc = 0.45095859145707995;
    msg.vacc = 0.6949828482468253;

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
    msg.setTimeStamp(0.4163530227874872);
    msg.setSource(28116U);
    msg.setSourceEntity(42U);
    msg.setDestination(51866U);
    msg.setDestinationEntity(194U);
    msg.time = 0.45810017807182213;
    msg.phi = 0.7801430962881869;
    msg.theta = 0.8681871740211735;
    msg.psi = 0.39596215131871615;
    msg.psi_magnetic = 0.4188937091255076;

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
    msg.setTimeStamp(0.40447624006073124);
    msg.setSource(32916U);
    msg.setSourceEntity(88U);
    msg.setDestination(56263U);
    msg.setDestinationEntity(22U);
    msg.time = 0.08724583733099811;
    msg.phi = 0.6035593976131741;
    msg.theta = 0.6504923786533221;
    msg.psi = 0.1300609497668136;
    msg.psi_magnetic = 0.8561336848210628;

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
    msg.setTimeStamp(0.5692680558010149);
    msg.setSource(64520U);
    msg.setSourceEntity(196U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(99U);
    msg.time = 0.12575894975523016;
    msg.phi = 0.905924008471547;
    msg.theta = 0.6148577178005811;
    msg.psi = 0.04141308730260307;
    msg.psi_magnetic = 0.4527103132786018;

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
    msg.setTimeStamp(0.47460184392272164);
    msg.setSource(29709U);
    msg.setSourceEntity(11U);
    msg.setDestination(18490U);
    msg.setDestinationEntity(17U);
    msg.time = 0.1809271588439053;
    msg.x = 0.373626815005382;
    msg.y = 0.11867284524734634;
    msg.z = 0.3709286698476585;
    msg.timestep = 0.5070537542007865;

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
    msg.setTimeStamp(0.008235155305663544);
    msg.setSource(12520U);
    msg.setSourceEntity(232U);
    msg.setDestination(36344U);
    msg.setDestinationEntity(89U);
    msg.time = 0.4615922452099789;
    msg.x = 0.6490750832803444;
    msg.y = 0.36577128193061526;
    msg.z = 0.7432041149427495;
    msg.timestep = 0.2171048146152066;

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
    msg.setTimeStamp(0.5555588654639555);
    msg.setSource(258U);
    msg.setSourceEntity(64U);
    msg.setDestination(23338U);
    msg.setDestinationEntity(185U);
    msg.time = 0.004490335364285447;
    msg.x = 0.1349463323014498;
    msg.y = 0.7788163556432988;
    msg.z = 0.6890224127189517;
    msg.timestep = 0.9039212912283946;

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
    msg.setTimeStamp(0.4892707140676539);
    msg.setSource(17590U);
    msg.setSourceEntity(121U);
    msg.setDestination(2941U);
    msg.setDestinationEntity(106U);
    msg.time = 0.7554590133537964;
    msg.x = 0.6803310689988361;
    msg.y = 0.4537867652383082;
    msg.z = 0.9673002296235054;

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
    msg.setTimeStamp(0.9957695060936236);
    msg.setSource(1538U);
    msg.setSourceEntity(162U);
    msg.setDestination(48689U);
    msg.setDestinationEntity(225U);
    msg.time = 0.31036667577538124;
    msg.x = 0.7011840203498737;
    msg.y = 0.6324065127301888;
    msg.z = 0.5341701283190574;

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
    msg.setTimeStamp(0.37689124432800114);
    msg.setSource(41278U);
    msg.setSourceEntity(195U);
    msg.setDestination(7632U);
    msg.setDestinationEntity(207U);
    msg.time = 0.026369375368774595;
    msg.x = 0.40460657791000265;
    msg.y = 0.4574537735612343;
    msg.z = 0.4883682353083445;

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
    msg.setTimeStamp(0.12337742396959828);
    msg.setSource(24133U);
    msg.setSourceEntity(222U);
    msg.setDestination(30288U);
    msg.setDestinationEntity(31U);
    msg.time = 0.14150984301506397;
    msg.x = 0.3867144775408221;
    msg.y = 0.4185962209302132;
    msg.z = 0.03252893613214969;

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
    msg.setTimeStamp(0.17243986395885924);
    msg.setSource(53170U);
    msg.setSourceEntity(63U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(28U);
    msg.time = 0.45029340716175326;
    msg.x = 0.49121736395521987;
    msg.y = 0.2727302108757177;
    msg.z = 0.7130718988597016;

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
    msg.setTimeStamp(0.17662649680373133);
    msg.setSource(3018U);
    msg.setSourceEntity(58U);
    msg.setDestination(46009U);
    msg.setDestinationEntity(188U);
    msg.time = 0.572907124466681;
    msg.x = 0.7137499947625825;
    msg.y = 0.548424997402494;
    msg.z = 0.007173659723484382;

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
    msg.setTimeStamp(0.22709249078240945);
    msg.setSource(45528U);
    msg.setSourceEntity(106U);
    msg.setDestination(3618U);
    msg.setDestinationEntity(115U);
    msg.time = 0.07869197610044021;
    msg.x = 0.3535020317157561;
    msg.y = 0.3927903352852641;
    msg.z = 0.6713295583257117;

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
    msg.setTimeStamp(0.8098186511194821);
    msg.setSource(53704U);
    msg.setSourceEntity(171U);
    msg.setDestination(48115U);
    msg.setDestinationEntity(61U);
    msg.time = 0.37108464900894733;
    msg.x = 0.5157615459177017;
    msg.y = 0.6152166158569193;
    msg.z = 0.6769785128209729;

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
    msg.setTimeStamp(0.0652985808697335);
    msg.setSource(29570U);
    msg.setSourceEntity(226U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(67U);
    msg.time = 0.7480561697289843;
    msg.x = 0.6229546483722771;
    msg.y = 0.38360806789641755;
    msg.z = 0.7226929537464158;

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
    msg.setTimeStamp(0.23880215485758494);
    msg.setSource(13130U);
    msg.setSourceEntity(183U);
    msg.setDestination(39676U);
    msg.setDestinationEntity(211U);
    msg.validity = 252U;
    msg.x = 0.5071810841895473;
    msg.y = 0.07890369397202324;
    msg.z = 0.6958183114612687;

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
    msg.setTimeStamp(0.018962725893897914);
    msg.setSource(59502U);
    msg.setSourceEntity(160U);
    msg.setDestination(41669U);
    msg.setDestinationEntity(253U);
    msg.validity = 147U;
    msg.x = 0.657439078281251;
    msg.y = 0.8669321959834458;
    msg.z = 0.711698600160019;

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
    msg.setTimeStamp(0.7780221392845943);
    msg.setSource(19624U);
    msg.setSourceEntity(229U);
    msg.setDestination(11908U);
    msg.setDestinationEntity(18U);
    msg.validity = 129U;
    msg.x = 0.32734640136721316;
    msg.y = 0.09761836848343675;
    msg.z = 0.9779746713405242;

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
    msg.setTimeStamp(0.9877735602880421);
    msg.setSource(57327U);
    msg.setSourceEntity(0U);
    msg.setDestination(61350U);
    msg.setDestinationEntity(185U);
    msg.validity = 61U;
    msg.x = 0.6945801999552177;
    msg.y = 0.8621620613524784;
    msg.z = 0.8887034182398977;

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
    msg.setTimeStamp(0.3305980957036053);
    msg.setSource(14370U);
    msg.setSourceEntity(87U);
    msg.setDestination(27889U);
    msg.setDestinationEntity(130U);
    msg.validity = 63U;
    msg.x = 0.852767584992079;
    msg.y = 0.49370378432419404;
    msg.z = 0.8781962114497398;

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
    msg.setTimeStamp(0.7013261166634852);
    msg.setSource(3077U);
    msg.setSourceEntity(105U);
    msg.setDestination(26213U);
    msg.setDestinationEntity(116U);
    msg.validity = 106U;
    msg.x = 0.14575493282711194;
    msg.y = 0.8903742953010765;
    msg.z = 0.8890127683963931;

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
    msg.setTimeStamp(0.6624165569440805);
    msg.setSource(28558U);
    msg.setSourceEntity(193U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(99U);
    msg.time = 0.8945932948200425;
    msg.x = 0.48944684334718835;
    msg.y = 0.48217594081996584;
    msg.z = 0.03297889229559614;

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
    msg.setTimeStamp(0.8369720670084144);
    msg.setSource(37133U);
    msg.setSourceEntity(187U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(10U);
    msg.time = 0.1956595149356659;
    msg.x = 0.19810985329710473;
    msg.y = 0.6708862908846244;
    msg.z = 0.37505165819753106;

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
    msg.setTimeStamp(0.24484524880141822);
    msg.setSource(53681U);
    msg.setSourceEntity(144U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(21U);
    msg.time = 0.6966178889865378;
    msg.x = 0.43228123986006484;
    msg.y = 0.10987690004912742;
    msg.z = 0.3241899917904364;

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
    msg.setTimeStamp(0.6131602719028464);
    msg.setSource(30745U);
    msg.setSourceEntity(213U);
    msg.setDestination(21201U);
    msg.setDestinationEntity(13U);
    msg.validity = 65U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.46765690999314324;
    tmp_msg_0.y = 0.3376634302233972;
    tmp_msg_0.z = 0.1777758898850823;
    tmp_msg_0.phi = 0.36320154856709896;
    tmp_msg_0.theta = 0.9684616205834495;
    tmp_msg_0.psi = 0.8755037139619906;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.391695656511851;

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
    msg.setTimeStamp(0.36794968899349967);
    msg.setSource(49167U);
    msg.setSourceEntity(146U);
    msg.setDestination(52990U);
    msg.setDestinationEntity(189U);
    msg.validity = 29U;
    msg.value = 0.987630062914349;

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
    msg.setTimeStamp(0.3643431287091532);
    msg.setSource(19517U);
    msg.setSourceEntity(30U);
    msg.setDestination(12771U);
    msg.setDestinationEntity(212U);
    msg.validity = 195U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.10531132739269033;
    tmp_msg_0.y = 0.9701254925492454;
    tmp_msg_0.z = 0.9829579147073452;
    tmp_msg_0.phi = 0.6779978797768279;
    tmp_msg_0.theta = 0.9393255809395412;
    tmp_msg_0.psi = 0.5552579088498365;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0310670979021499;
    tmp_msg_1.beam_height = 0.6712786534677687;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9299713477207071;

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
    msg.setTimeStamp(0.24889552093696976);
    msg.setSource(42983U);
    msg.setSourceEntity(11U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(94U);
    msg.value = 0.011906898191138104;

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
    msg.setTimeStamp(0.9067710490124603);
    msg.setSource(59685U);
    msg.setSourceEntity(236U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(122U);
    msg.value = 0.07582146542863599;

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
    msg.setTimeStamp(0.8769177436677348);
    msg.setSource(10487U);
    msg.setSourceEntity(253U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3645804860156937;

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
    msg.setTimeStamp(0.7440579416120942);
    msg.setSource(42484U);
    msg.setSourceEntity(184U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(101U);
    msg.value = 0.3870039880589665;

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
    msg.setTimeStamp(0.2943368678081465);
    msg.setSource(55826U);
    msg.setSourceEntity(156U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6662125440334662;

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
    msg.setTimeStamp(0.6803810408727787);
    msg.setSource(49272U);
    msg.setSourceEntity(4U);
    msg.setDestination(38828U);
    msg.setDestinationEntity(50U);
    msg.value = 0.04261970671318249;

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
    msg.setTimeStamp(0.3114590297557017);
    msg.setSource(46614U);
    msg.setSourceEntity(207U);
    msg.setDestination(40080U);
    msg.setDestinationEntity(65U);
    msg.value = 0.36596357615681974;

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
    msg.setTimeStamp(0.07148362197879965);
    msg.setSource(44905U);
    msg.setSourceEntity(10U);
    msg.setDestination(14608U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7083847514131972;

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
    msg.setTimeStamp(0.26237930080884475);
    msg.setSource(28928U);
    msg.setSourceEntity(70U);
    msg.setDestination(46082U);
    msg.setDestinationEntity(82U);
    msg.value = 0.37400651485575476;

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
    msg.setTimeStamp(0.39573108490843234);
    msg.setSource(30907U);
    msg.setSourceEntity(121U);
    msg.setDestination(35011U);
    msg.setDestinationEntity(205U);
    msg.value = 0.8426336450242046;

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
    msg.setTimeStamp(0.865399040678296);
    msg.setSource(56805U);
    msg.setSourceEntity(19U);
    msg.setDestination(46664U);
    msg.setDestinationEntity(19U);
    msg.value = 0.4694825649206291;

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
    msg.setTimeStamp(0.424652888703411);
    msg.setSource(58776U);
    msg.setSourceEntity(180U);
    msg.setDestination(19520U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7390618041805287;

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
    msg.setTimeStamp(0.08507075252385488);
    msg.setSource(40964U);
    msg.setSourceEntity(46U);
    msg.setDestination(38236U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8522165810170687;

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
    msg.setTimeStamp(0.14908060552142666);
    msg.setSource(33856U);
    msg.setSourceEntity(250U);
    msg.setDestination(60818U);
    msg.setDestinationEntity(120U);
    msg.value = 0.7586956189772089;

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
    msg.setTimeStamp(0.055340770142962126);
    msg.setSource(63268U);
    msg.setSourceEntity(33U);
    msg.setDestination(33682U);
    msg.setDestinationEntity(106U);
    msg.value = 0.2699632166040048;

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
    msg.setTimeStamp(0.6290973731246864);
    msg.setSource(56009U);
    msg.setSourceEntity(226U);
    msg.setDestination(10951U);
    msg.setDestinationEntity(125U);
    msg.value = 0.40077423446251237;

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
    msg.setTimeStamp(0.17121862768796337);
    msg.setSource(3774U);
    msg.setSourceEntity(193U);
    msg.setDestination(19068U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7779710951496042;

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
    msg.setTimeStamp(0.7156755619266967);
    msg.setSource(18054U);
    msg.setSourceEntity(40U);
    msg.setDestination(35741U);
    msg.setDestinationEntity(172U);
    msg.value = 0.18990836325783333;

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
    msg.setTimeStamp(0.7152958281561581);
    msg.setSource(34510U);
    msg.setSourceEntity(12U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9582238030707187;

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
    msg.setTimeStamp(0.33758977635549137);
    msg.setSource(33200U);
    msg.setSourceEntity(132U);
    msg.setDestination(22553U);
    msg.setDestinationEntity(28U);
    msg.value = 0.6580533187136766;

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
    msg.setTimeStamp(0.6440655407715186);
    msg.setSource(1497U);
    msg.setSourceEntity(0U);
    msg.setDestination(28833U);
    msg.setDestinationEntity(239U);
    msg.value = 0.10234743120493595;

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
    msg.setTimeStamp(0.3222675573787456);
    msg.setSource(20726U);
    msg.setSourceEntity(117U);
    msg.setDestination(48695U);
    msg.setDestinationEntity(88U);
    msg.value = 0.2681787339133219;

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
    msg.setTimeStamp(0.2619649793516132);
    msg.setSource(24977U);
    msg.setSourceEntity(250U);
    msg.setDestination(25268U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5694187929390846;

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
    msg.setTimeStamp(0.262291343745785);
    msg.setSource(35143U);
    msg.setSourceEntity(102U);
    msg.setDestination(15765U);
    msg.setDestinationEntity(181U);
    msg.value = 0.21094043129508744;

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
    msg.setTimeStamp(0.029323007105700016);
    msg.setSource(61336U);
    msg.setSourceEntity(18U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(96U);
    msg.direction = 0.9320273403291547;
    msg.speed = 0.874427894321566;

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
    msg.setTimeStamp(0.8580485847642588);
    msg.setSource(52981U);
    msg.setSourceEntity(223U);
    msg.setDestination(50611U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.38101111563173906;
    msg.speed = 0.017945388337970325;

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
    msg.setTimeStamp(0.1334733388368603);
    msg.setSource(33155U);
    msg.setSourceEntity(189U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.9666126397854673;
    msg.speed = 0.9617739863544652;

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
    msg.setTimeStamp(0.9932769889578897);
    msg.setSource(22521U);
    msg.setSourceEntity(108U);
    msg.setDestination(21750U);
    msg.setDestinationEntity(217U);
    msg.value = 0.17460559490718652;

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
    msg.setTimeStamp(0.7398571812521403);
    msg.setSource(1483U);
    msg.setSourceEntity(13U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6564484590804747;

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
    msg.setTimeStamp(0.9094533791741647);
    msg.setSource(11212U);
    msg.setSourceEntity(199U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(78U);
    msg.value = 0.07993367536974516;

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
    msg.setTimeStamp(0.843515189474807);
    msg.setSource(55516U);
    msg.setSourceEntity(89U);
    msg.setDestination(16265U);
    msg.setDestinationEntity(70U);
    msg.value.assign("GEJTVEZDMPFBUFFKNJSCRFBKHOOJBQHHRBCQQYNVWDGDGJMDKRHTDEEPYKXJIEX");

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
    msg.setTimeStamp(0.6331357379366631);
    msg.setSource(612U);
    msg.setSourceEntity(97U);
    msg.setDestination(18795U);
    msg.setDestinationEntity(162U);
    msg.value.assign("SRISWDWEVVOQLRAGDOBYFHUCHRBJZFMNQXACBCRVOYSYQLCNIGIEWDWKHXSVIENPNOVKVDLHVTQEIZARIDEHPBLJDMATMGWOKKLXMEALPQVASFEPORUNJDZ");

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
    msg.setTimeStamp(0.15499199881795278);
    msg.setSource(53159U);
    msg.setSourceEntity(26U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(42U);
    msg.value.assign("CORNURLPSMIPWE");

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
    msg.setTimeStamp(0.050469072601056264);
    msg.setSource(39854U);
    msg.setSourceEntity(42U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(67U);
    const char tmp_msg_0[] = {-103, 42, 21, 95, -64, -80, 103, 17, 94, -97, 9, 82, -117, -54, -70, 18, 116, 107, -120, 0, -15, -88, 6, -28, 112, -78, -58, -124, -28, -128, 35, 26, -71, -5, -7, -43, 67, -100, 76, 19, -117, -126, 98, 3, 33, -94, -95, -47, 22, -119, -59, -53, -50, -127, -8, -101, -115, -82, -62, 28, 101, 62, -53, -22, 23, 94, 69, 4, -32, 113, -53, -118, 91, 10, 112, -62, -103, 57, 106, -32, 94, -63, -128, 25, -93, -9, 0, 60, -110, -42, -82, 125, -42, -85, 6, 30, 73, 39, -64, -118, -128, -57, 116, 93, -10, 111, -67, -4, 24, -80, 33, -71, 41, 110, 69, 16, -116, -45, -116, 71, 110, -41, -72, -101, 66, -24, 34, -65, -118, -32, -59, 68, -14, -12, -28, 61, -13, -59, -19, -20, 50, -71, 101, -17, -108, -99, 6, 49, -16, -105, 85, -59, 63, 102, 79, -63, -95, 59, -24, -30, -95, -114, -68, 70, -119, 101, -22, -74, 49, -127, -97, 78, -124, -60, 100, 44, -110, 59, -49, -13, -99, 116, -116, 102, -51, 40, -104, -122, 126, 75, 87, 80, -69, -99, -31, -32, 50, -121, 38, -101, 55, -83, -107, -7, -51, 62, 52, -109, -90, 29, 28, -77, 24, -112, 120, 31, -25, -118, 107, 95, -25, 4, -38};
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
    msg.setTimeStamp(0.4570071243730671);
    msg.setSource(27859U);
    msg.setSourceEntity(174U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(227U);
    const char tmp_msg_0[] = {49, -38, 112, -44, 5, -53, 125, -115, -125, -63, -55, 25, 70, 90, -65, 82, 32, -109, -7, -2, -14, -20, 52, -59, 126, 91, -45, 88, 93, -40, -122, -24, -78, -73, -48, -39, -92, -106, -26, -19, 66, 81, -21, -73, -87, -54, 78, -17, 106, 126, -115, 90, 20, -97, -99, 11, -68, -85, 17, 14, 64, -110, -74, -33, 56, 18, 70, -114, 75, -50, 20, -61, -55, -68, -122, 18, -34, 71, -56, -48, 76, -97, 98, -50, 116, 8, 75, 43, 86, -101, 17, 112, -56, 8, 42, 59, 103, 92, -64, -78, 21, 80, 9, -92, 14, 64, -32, -24, -59, -60, 3, -124, 24, 104, -14, -13, 34, -23, -55, -12, -68, -79, -117, -99, 24, 41, 17, 58, -103, 4};
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
    msg.setTimeStamp(0.8444186784220078);
    msg.setSource(6945U);
    msg.setSourceEntity(167U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(196U);
    const char tmp_msg_0[] = {110, 84, 11, -47, -7, -74, 43, -54, 2, 95, 99, 7, 14, -86, -9, 7, 87, 56, 113, 69, -54, 87, 7, 46, 6, 47, -29, -72, -111, -53, 11, -24, 26, 77, 94, 51, 89, 81, 125, -45, 77, 51, 16, 110, 68, 84, 112, -97, -71, -126, 113, -94, 94, -52, -1, -33, -123, -113, -79, -70, -34, 48, 106, -51, -88, -80, 50, -98, 26, -78, 65, -40, -77, -117, 77, 27, 28, 6, -32, 84, -58, 22, 50, 17, -93, 9, -18, 44, 24, 68, -55, 34, 40, 38, 51, -9, 24, 19, 86, 36, 19, -6, -20, -22, 93, 73, 80, -62, 29, 120, 62, -53, -80, 61, 45, 59, 40, 98, 94, 41, -26, -96, -62, 94, -50, -88, 95, 22, 122, 86, 51, 123, 61, -101, -11, -105, 85, 105, -78, 55, 27, -108, -3, 23, -84, -112, -128, -33, 98, -3, 35, -114, -117, 5, 11, 45, 73, -46, -70, -82, -8, -63, -10, 85, -61, -73, -65, 112, 110, -32, 46, -25, -73, 21, -70, 79, -99, 97, 93, 94, 8, -40, 101, 13, -5, 38, -47, 15, 66, -70, 81, 62, 86, -64, 93, -53, -100, 0, -36, 17, -24, 2, 17, -104, -12, 36, 13, -75, -59};
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
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.8414047503980323);
    msg.setSource(1U);
    msg.setSourceEntity(179U);
    msg.setDestination(22056U);
    msg.setDestinationEntity(172U);
    msg.frequency = 2532240363U;
    msg.min_range = 4910U;
    msg.max_range = 48510U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.8218352469101746);
    msg.setSource(55115U);
    msg.setSourceEntity(226U);
    msg.setDestination(2195U);
    msg.setDestinationEntity(242U);
    msg.frequency = 2000190751U;
    msg.min_range = 25749U;
    msg.max_range = 59769U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.19070828846722);
    msg.setSource(10530U);
    msg.setSourceEntity(18U);
    msg.setDestination(22119U);
    msg.setDestinationEntity(207U);
    msg.frequency = 2643705069U;
    msg.min_range = 48802U;
    msg.max_range = 23169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8179098168968669);
    msg.setSource(31210U);
    msg.setSourceEntity(197U);
    msg.setDestination(3047U);
    msg.setDestinationEntity(230U);
    msg.type = 182U;
    msg.frequency = 1833920299U;
    msg.min_range = 11655U;
    msg.max_range = 21693U;
    msg.bits_per_point = 225U;
    msg.scale_factor = 0.08289287270161672;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.38448457598390395;
    tmp_msg_0.beam_height = 0.7466217151646142;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-71, -88, -56, -99, 83, -75, 34, 71, 13, -10, -52, 77, -59, 11, -81};
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
    msg.setTimeStamp(0.8341667082618339);
    msg.setSource(44137U);
    msg.setSourceEntity(191U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(117U);
    msg.type = 134U;
    msg.frequency = 290096148U;
    msg.min_range = 16044U;
    msg.max_range = 10391U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.710113459642212;
    const char tmp_msg_0[] = {72, -68, -81, 117, -82, 119, 97, 74, 74, -76, -121, -36, -94, -87, 8, 41, -110, 18, 21, 106, -9, -84, -26, 116, -123, -95, 48, 122, -26, -11, 8, -2, 84, 55, -33, -15, 38, 93};
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
    msg.setTimeStamp(0.06612289007229066);
    msg.setSource(47276U);
    msg.setSourceEntity(173U);
    msg.setDestination(55393U);
    msg.setDestinationEntity(137U);
    msg.type = 37U;
    msg.frequency = 4040201261U;
    msg.min_range = 5420U;
    msg.max_range = 50521U;
    msg.bits_per_point = 51U;
    msg.scale_factor = 0.5445166931378905;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8670019037601294;
    tmp_msg_0.beam_height = 0.14546203735523378;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {105, -127, 35, -106, -72, 109, 42, 90, 12, -47, -44, 125, 80, -51, -103, -119, 74, 12, 75, 22, 23, -113, -69, -58, 34, 112, -110, 101, -82, 62, -62, 119, -52, -118, 69, 86, 58, -54, -123, 45, 109, 37, -37, 20, 118, 119};
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
    msg.setTimeStamp(0.8391827276930611);
    msg.setSource(63980U);
    msg.setSourceEntity(7U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.9698399356975305);
    msg.setSource(35616U);
    msg.setSourceEntity(218U);
    msg.setDestination(63512U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.6362401042692225);
    msg.setSource(62594U);
    msg.setSourceEntity(63U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.1635842096196365);
    msg.setSource(51006U);
    msg.setSourceEntity(198U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(43U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.983199564300292);
    msg.setSource(40799U);
    msg.setSourceEntity(67U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(58U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.40766327843991446);
    msg.setSource(25766U);
    msg.setSourceEntity(213U);
    msg.setDestination(36778U);
    msg.setDestinationEntity(106U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.01942859013533449);
    msg.setSource(45673U);
    msg.setSourceEntity(36U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7533537837012884;
    msg.confidence = 0.7411178387279794;
    msg.opmodes.assign("EPJIPOCPWOPRZFZWRFZ");

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
    msg.setTimeStamp(0.3147673457144302);
    msg.setSource(26189U);
    msg.setSourceEntity(71U);
    msg.setDestination(12746U);
    msg.setDestinationEntity(130U);
    msg.value = 0.7364934521256367;
    msg.confidence = 0.22102493771603648;
    msg.opmodes.assign("UNTBOTQKLWRVASGPNWRMIGBDBCZQYJYPZPSEKFDSKEJFEVSRUOGMXHOIUSAXZYWFBPNLUJZIWCIWUZEIQBVYCMBAJFGHNIDRSQCMKLYXWHIDUDJZADMYQFFVYXHXJVEIBARUETNGTXXCGFYZIDNSKGDXJFPBCGXRSOHRAQLCAQTONVGMHLPFRCHWPRIPAZYWQCOTBYPNMTHEOKLQHOLSLVTVHKMNUOAOSAJZWJFJEBVRLKPZ");

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
    msg.setTimeStamp(0.9902823155073587);
    msg.setSource(39209U);
    msg.setSourceEntity(77U);
    msg.setDestination(13598U);
    msg.setDestinationEntity(202U);
    msg.value = 0.17771584424130615;
    msg.confidence = 0.2605074483886096;
    msg.opmodes.assign("GGNBJDUIPNQQEGADUCQZMPNOFEYEGNVCQERKAKPEPCPTHFDJNMMRLJBTKIRFNNZBKGYZGTAFRJOISQJDZXKLHAAYTSVGCNUHAKSJXYIDSTKEUWFBZTHLMCOQRKHEYWYZDQPSWSUFQRGWNAOTVMLFUBJIRJFHHZYVTRQBPDMXRLLPHXKUTEXLBXWVYIMYOOGHDXSXEFGZI");

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
    msg.setTimeStamp(0.22464826899889434);
    msg.setSource(21427U);
    msg.setSourceEntity(142U);
    msg.setDestination(49521U);
    msg.setDestinationEntity(216U);
    msg.itow = 1419754284U;
    msg.lat = 0.11706471914385252;
    msg.lon = 0.28596475652600295;
    msg.height_ell = 0.6489664901530505;
    msg.height_sea = 0.7682155554289406;
    msg.hacc = 0.6898838146501085;
    msg.vacc = 0.6246582475293722;
    msg.vel_n = 0.8862662648725045;
    msg.vel_e = 0.32666477550827067;
    msg.vel_d = 0.7878372691882128;
    msg.speed = 0.9768680433130382;
    msg.gspeed = 0.6446564913668155;
    msg.heading = 0.6285896945094327;
    msg.sacc = 0.4425896383688118;
    msg.cacc = 0.5963299655843666;

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
    msg.setTimeStamp(0.05147236718560033);
    msg.setSource(48217U);
    msg.setSourceEntity(7U);
    msg.setDestination(37534U);
    msg.setDestinationEntity(39U);
    msg.itow = 1860700548U;
    msg.lat = 0.37114598988317504;
    msg.lon = 0.3570659842246896;
    msg.height_ell = 0.3355365050169563;
    msg.height_sea = 0.8140013830776217;
    msg.hacc = 0.9848910834233551;
    msg.vacc = 0.6750955014323926;
    msg.vel_n = 0.14724953789844264;
    msg.vel_e = 0.07401907681756059;
    msg.vel_d = 0.35060306746511627;
    msg.speed = 0.021202873814238576;
    msg.gspeed = 0.05894100987546669;
    msg.heading = 0.32722201384169103;
    msg.sacc = 0.0629102746183573;
    msg.cacc = 0.2929994909247561;

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
    msg.setTimeStamp(0.7179535823429444);
    msg.setSource(12400U);
    msg.setSourceEntity(44U);
    msg.setDestination(1171U);
    msg.setDestinationEntity(106U);
    msg.itow = 123124966U;
    msg.lat = 0.2543453308920587;
    msg.lon = 0.4917854336769497;
    msg.height_ell = 0.3815669220774679;
    msg.height_sea = 0.42703850279524247;
    msg.hacc = 0.28731051135495966;
    msg.vacc = 0.9670146902100736;
    msg.vel_n = 0.16265845709410676;
    msg.vel_e = 0.9795894460788444;
    msg.vel_d = 0.8439011090723096;
    msg.speed = 0.865367549910119;
    msg.gspeed = 0.34301665577126383;
    msg.heading = 0.26798516697678665;
    msg.sacc = 0.9556943302245491;
    msg.cacc = 0.536693799850122;

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
    msg.setTimeStamp(0.4871607502813905);
    msg.setSource(16393U);
    msg.setSourceEntity(166U);
    msg.setDestination(63499U);
    msg.setDestinationEntity(235U);
    msg.id = 110U;
    msg.value = 0.2324980746576748;

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
    msg.setTimeStamp(0.4574820179986866);
    msg.setSource(53708U);
    msg.setSourceEntity(123U);
    msg.setDestination(5900U);
    msg.setDestinationEntity(84U);
    msg.id = 219U;
    msg.value = 0.7211655366886238;

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
    msg.setTimeStamp(0.41757015729989133);
    msg.setSource(62122U);
    msg.setSourceEntity(181U);
    msg.setDestination(48288U);
    msg.setDestinationEntity(21U);
    msg.id = 64U;
    msg.value = 0.02896429509381404;

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
    msg.setTimeStamp(0.1615376510359171);
    msg.setSource(53925U);
    msg.setSourceEntity(91U);
    msg.setDestination(18500U);
    msg.setDestinationEntity(98U);
    msg.x = 0.8915892587485115;
    msg.y = 0.0025878454857855004;
    msg.z = 0.3743296517195852;
    msg.phi = 0.24339229306051868;
    msg.theta = 0.6879639002393892;
    msg.psi = 0.5701792711609827;

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
    msg.setTimeStamp(0.5044535242395244);
    msg.setSource(59699U);
    msg.setSourceEntity(132U);
    msg.setDestination(38422U);
    msg.setDestinationEntity(191U);
    msg.x = 0.07465429725517936;
    msg.y = 0.010434256491344884;
    msg.z = 0.22186405825752353;
    msg.phi = 0.15818749161189416;
    msg.theta = 0.8927033941841248;
    msg.psi = 0.19857468775628206;

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
    msg.setTimeStamp(0.19531869232010413);
    msg.setSource(43194U);
    msg.setSourceEntity(182U);
    msg.setDestination(15584U);
    msg.setDestinationEntity(88U);
    msg.x = 0.8555522873607011;
    msg.y = 0.5338924530466076;
    msg.z = 0.24851735915458895;
    msg.phi = 0.6473878409393565;
    msg.theta = 0.40748280686167515;
    msg.psi = 0.2625633110863932;

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
    msg.setTimeStamp(0.6289634609374515);
    msg.setSource(5935U);
    msg.setSourceEntity(81U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(180U);
    msg.beam_width = 0.7101537639003045;
    msg.beam_height = 0.6786616195592462;

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
    msg.setTimeStamp(0.3555281258383155);
    msg.setSource(23243U);
    msg.setSourceEntity(167U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(23U);
    msg.beam_width = 0.06562808307614265;
    msg.beam_height = 0.9014965438769779;

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
    msg.setTimeStamp(0.8664413262502895);
    msg.setSource(28180U);
    msg.setSourceEntity(1U);
    msg.setDestination(22574U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.5307001536093411;
    msg.beam_height = 0.19257190400005253;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.42193131281356444);
    msg.setSource(26308U);
    msg.setSourceEntity(92U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(9U);
    msg.id = 243U;
    msg.zoom = 166U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.2818374630770515);
    msg.setSource(23121U);
    msg.setSourceEntity(37U);
    msg.setDestination(43439U);
    msg.setDestinationEntity(141U);
    msg.id = 140U;
    msg.zoom = 114U;
    msg.action = 21U;

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
    msg.setTimeStamp(0.9373317390492688);
    msg.setSource(61567U);
    msg.setSourceEntity(231U);
    msg.setDestination(61579U);
    msg.setDestinationEntity(231U);
    msg.id = 17U;
    msg.zoom = 196U;
    msg.action = 34U;

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
    msg.setTimeStamp(0.7487553569476073);
    msg.setSource(50061U);
    msg.setSourceEntity(202U);
    msg.setDestination(22424U);
    msg.setDestinationEntity(177U);
    msg.id = 211U;
    msg.value = 0.48691304515840017;

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
    msg.setTimeStamp(0.2363928393305933);
    msg.setSource(47113U);
    msg.setSourceEntity(66U);
    msg.setDestination(64691U);
    msg.setDestinationEntity(192U);
    msg.id = 33U;
    msg.value = 0.26074062450210644;

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
    msg.setTimeStamp(0.746422752197613);
    msg.setSource(13366U);
    msg.setSourceEntity(88U);
    msg.setDestination(16415U);
    msg.setDestinationEntity(90U);
    msg.id = 123U;
    msg.value = 0.8642318467424583;

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
    msg.setTimeStamp(0.29122825501706906);
    msg.setSource(62103U);
    msg.setSourceEntity(181U);
    msg.setDestination(28352U);
    msg.setDestinationEntity(177U);
    msg.id = 130U;
    msg.value = 0.18255192289222133;

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
    msg.setTimeStamp(0.021479168507813173);
    msg.setSource(22728U);
    msg.setSourceEntity(27U);
    msg.setDestination(6084U);
    msg.setDestinationEntity(2U);
    msg.id = 47U;
    msg.value = 0.8481442431814675;

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
    msg.setTimeStamp(0.27084758841770873);
    msg.setSource(19183U);
    msg.setSourceEntity(128U);
    msg.setDestination(51907U);
    msg.setDestinationEntity(75U);
    msg.id = 157U;
    msg.value = 0.03305880725736443;

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
    msg.setTimeStamp(0.46535631967768376);
    msg.setSource(48649U);
    msg.setSourceEntity(212U);
    msg.setDestination(61324U);
    msg.setDestinationEntity(87U);
    msg.id = 186U;
    msg.angle = 0.5796894985199911;

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
    msg.setTimeStamp(0.2510022997425021);
    msg.setSource(11704U);
    msg.setSourceEntity(247U);
    msg.setDestination(59918U);
    msg.setDestinationEntity(5U);
    msg.id = 246U;
    msg.angle = 0.6408664315779188;

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
    msg.setTimeStamp(0.5383148424908029);
    msg.setSource(47098U);
    msg.setSourceEntity(119U);
    msg.setDestination(65388U);
    msg.setDestinationEntity(190U);
    msg.id = 243U;
    msg.angle = 0.027118316675798337;

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
    msg.setTimeStamp(0.7485395651080258);
    msg.setSource(63381U);
    msg.setSourceEntity(48U);
    msg.setDestination(56571U);
    msg.setDestinationEntity(138U);
    msg.op = 251U;
    msg.actions.assign("ZQYBODQJTBMFGQUXEZIIGZMNZMOALQRFVQGBYKEWRHERGXXUBUCAYKNTKJCGLAZGMYVMAEOPGVKEYXILJUXVDSONEXZTPCXAAVLNBWITRJYBDMEPJZGEWFBHXKFINLORFLKLVCWSYYVHGMPSS");

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
    msg.setTimeStamp(0.2568517881391831);
    msg.setSource(42513U);
    msg.setSourceEntity(126U);
    msg.setDestination(32229U);
    msg.setDestinationEntity(77U);
    msg.op = 85U;
    msg.actions.assign("RCAMAOQDSOPHMQYKULYJXLLSKCSNCOYIFZBEGIXWFOGIQPJPDSTXWBEIHSRNTMETYDZYEXCAPIVOROCBIHYXHYBLFKVGFWAESCDWJZDOAHQMYIBQGTUTKHWWQFQDLVCGOXESHILHWFDRBTAAVZTSMTUSZPZZJDPLERPBGZQHCKVUUABNEJRVRLVOGHZDJNMYRXCXNIXGUKETGNLGMVAFJKCAWMQVNJWRJUJRPZEMBLPXNIPF");

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
    msg.setTimeStamp(0.9770094959389612);
    msg.setSource(49864U);
    msg.setSourceEntity(62U);
    msg.setDestination(55477U);
    msg.setDestinationEntity(191U);
    msg.op = 45U;
    msg.actions.assign("VLYSUWXKIVNQLQVHUETHFQULYVKGXZGIUIOJTNLRDWTECGKREDEIRIKQGJZVRI");

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
    msg.setTimeStamp(0.004715307292128212);
    msg.setSource(47301U);
    msg.setSourceEntity(185U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(237U);
    msg.actions.assign("XLLWASMEXBWUCXACCYNSVOYUH");

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
    msg.setTimeStamp(0.3338317271632859);
    msg.setSource(31628U);
    msg.setSourceEntity(86U);
    msg.setDestination(25539U);
    msg.setDestinationEntity(183U);
    msg.actions.assign("KWMJLMALCYYJQPJIPWLGPMQZHTUFVUHIZLTTZYFVWBCFREAZADFVLGL");

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
    msg.setTimeStamp(0.3258178112420127);
    msg.setSource(44878U);
    msg.setSourceEntity(94U);
    msg.setDestination(35138U);
    msg.setDestinationEntity(222U);
    msg.actions.assign("MVCBDUJJQJQHPFSQEJJEWWUEUORXSWXRUTHDOCXAEFPQYJVHWSDMLMVMMDLBCTEYBD");

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
    msg.setTimeStamp(0.18580747514876217);
    msg.setSource(63060U);
    msg.setSourceEntity(36U);
    msg.setDestination(16493U);
    msg.setDestinationEntity(111U);
    msg.button = 120U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.7207471410723694);
    msg.setSource(4082U);
    msg.setSourceEntity(104U);
    msg.setDestination(4134U);
    msg.setDestinationEntity(240U);
    msg.button = 81U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.05201198492336512);
    msg.setSource(29257U);
    msg.setSourceEntity(146U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(49U);
    msg.button = 23U;
    msg.value = 154U;

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
    msg.setTimeStamp(0.8353123740567191);
    msg.setSource(16197U);
    msg.setSourceEntity(139U);
    msg.setDestination(57377U);
    msg.setDestinationEntity(168U);
    msg.op = 61U;
    msg.text.assign("UKMMIIOEQPHBYRWDFYIQYN");

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
    msg.setTimeStamp(0.9544799993007086);
    msg.setSource(37955U);
    msg.setSourceEntity(99U);
    msg.setDestination(8246U);
    msg.setDestinationEntity(236U);
    msg.op = 196U;
    msg.text.assign("KVDWHFKJZVCWHYAFDGUVHMVDHRTYRIVIHTCDLQGCRRWSDPMNLENUCFYIETIXLWVOUEQKMITGBQRYNZZXYGEZIEFOJFNTBROQSMOOTVJWPCTJMLGAYDARBZHYMISCKFHUQRLJTTSICUDUGOAQPNHEGEZYSHPGKSKYPCKJOQLYWBDFRLXQLDGOPIXUWDFVBPMZ");

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
    msg.setTimeStamp(0.11370596275202804);
    msg.setSource(25860U);
    msg.setSourceEntity(215U);
    msg.setDestination(23555U);
    msg.setDestinationEntity(221U);
    msg.op = 157U;
    msg.text.assign("WIFLIALLEFDHCXRKTVUVLRUERZPDAQTJJYYNDNTJTDMBOSOUWFBSJLFZGCPSEYTSBVZMMDTCGVPSSMDRSXMUUWNLAMHBOZVOXNWIQHZZX");

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
    msg.setTimeStamp(0.39165641103418225);
    msg.setSource(27052U);
    msg.setSourceEntity(220U);
    msg.setDestination(44295U);
    msg.setDestinationEntity(203U);
    msg.op = 95U;
    msg.time_remain = 0.3638501920251529;
    msg.sched_time = 0.8030221060384128;

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
    msg.setTimeStamp(0.8826790171753863);
    msg.setSource(29035U);
    msg.setSourceEntity(253U);
    msg.setDestination(34517U);
    msg.setDestinationEntity(183U);
    msg.op = 65U;
    msg.time_remain = 0.12101070235679501;
    msg.sched_time = 0.2514104863401655;

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
    msg.setTimeStamp(0.4405702756666777);
    msg.setSource(46870U);
    msg.setSourceEntity(175U);
    msg.setDestination(17785U);
    msg.setDestinationEntity(199U);
    msg.op = 231U;
    msg.time_remain = 0.5900575238034286;
    msg.sched_time = 0.5876167203124978;

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
    msg.setTimeStamp(0.48056710524468127);
    msg.setSource(50028U);
    msg.setSourceEntity(82U);
    msg.setDestination(49424U);
    msg.setDestinationEntity(136U);
    msg.id = 207U;
    msg.op = 47U;
    msg.sched_time = 0.30672940815944383;

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
    msg.setTimeStamp(0.17187581532117735);
    msg.setSource(12176U);
    msg.setSourceEntity(141U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(54U);
    msg.id = 242U;
    msg.op = 95U;
    msg.sched_time = 0.344644555409516;

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
    msg.setTimeStamp(0.13205580966148345);
    msg.setSource(36731U);
    msg.setSourceEntity(22U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(120U);
    msg.id = 23U;
    msg.op = 157U;
    msg.sched_time = 0.4539054137018115;

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
    msg.setTimeStamp(0.9889288744425737);
    msg.setSource(12237U);
    msg.setSourceEntity(206U);
    msg.setDestination(21253U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.8482270061348091);
    msg.setSource(60894U);
    msg.setSourceEntity(210U);
    msg.setDestination(4837U);
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
    msg.setTimeStamp(0.03653263410482832);
    msg.setSource(41714U);
    msg.setSourceEntity(124U);
    msg.setDestination(61950U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.8377292048661285);
    msg.setSource(30665U);
    msg.setSourceEntity(143U);
    msg.setDestination(7038U);
    msg.setDestinationEntity(68U);
    msg.id = 10U;
    msg.label.assign("POBMVBQVRNOMHRYAIOMCEIPUQTLUCQKSVZWCZDXGLYNHBHHJODTYCATAFXQJAYSWTSEWILSNEMYHHFNRKLUOCFVULKJEIXCPDPMJLEPPTSI");
    msg.state = 210U;

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
    msg.setTimeStamp(0.2560340549699839);
    msg.setSource(23215U);
    msg.setSourceEntity(64U);
    msg.setDestination(26240U);
    msg.setDestinationEntity(216U);
    msg.id = 96U;
    msg.label.assign("SYKGJAQSZNXCDPOHRUEKCHJQRLIKKEMFVFYTDTZJBURRYCATTCRXHVNIIKDOWLXUVIDVMUODJZBDPNMIY");
    msg.state = 119U;

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
    msg.setTimeStamp(0.8660100253608514);
    msg.setSource(10988U);
    msg.setSourceEntity(138U);
    msg.setDestination(51329U);
    msg.setDestinationEntity(194U);
    msg.id = 104U;
    msg.label.assign("SMJRPNYQXVMPHSJVHVACCZDJLTQJJ");
    msg.state = 249U;

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
    IMC::LedControl msg;
    msg.setTimeStamp(0.29258312785514307);
    msg.setSource(38732U);
    msg.setSourceEntity(189U);
    msg.setDestination(59300U);
    msg.setDestinationEntity(3U);
    msg.id = 185U;
    msg.op = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.45585874000618143);
    msg.setSource(48368U);
    msg.setSourceEntity(31U);
    msg.setDestination(52639U);
    msg.setDestinationEntity(116U);
    msg.id = 55U;
    msg.op = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.2939476600751575);
    msg.setSource(35100U);
    msg.setSourceEntity(61U);
    msg.setDestination(38726U);
    msg.setDestinationEntity(10U);
    msg.id = 250U;
    msg.op = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6263695728335333);
    msg.setSource(21846U);
    msg.setSourceEntity(209U);
    msg.setDestination(38145U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.663454300589621;
    msg.lon = 0.9378660821388496;
    msg.height = 0.12555054994502202;
    msg.x = 0.38849236591901515;
    msg.y = 0.612597187626822;
    msg.z = 0.7720886237973928;
    msg.phi = 0.7934407095631947;
    msg.theta = 0.09786632544215157;
    msg.psi = 0.5899804052583197;
    msg.u = 0.10544952048449519;
    msg.v = 0.6509464500998133;
    msg.w = 0.03923825563785799;
    msg.vx = 0.6780466609524024;
    msg.vy = 0.008258146789054344;
    msg.vz = 0.8504369375604768;
    msg.p = 0.9769479981283028;
    msg.q = 0.23716708936706854;
    msg.r = 0.8589869963743143;
    msg.depth = 0.016265691046523423;
    msg.alt = 0.22986030812068592;

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
    msg.setTimeStamp(0.11419823105446947);
    msg.setSource(52718U);
    msg.setSourceEntity(167U);
    msg.setDestination(44496U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.8526650515724747;
    msg.lon = 0.7177996152973394;
    msg.height = 0.8079186404508432;
    msg.x = 0.29661831129258953;
    msg.y = 0.8749410430882145;
    msg.z = 0.2617069072983499;
    msg.phi = 0.2984975224820484;
    msg.theta = 0.8145833935991167;
    msg.psi = 0.8675661342329376;
    msg.u = 0.6178974218437967;
    msg.v = 0.04811169518638381;
    msg.w = 0.7731923020646246;
    msg.vx = 0.8596158124604953;
    msg.vy = 0.7915118112538485;
    msg.vz = 0.18325740448930428;
    msg.p = 0.9658265217063056;
    msg.q = 0.10939953738906116;
    msg.r = 0.7674411713075842;
    msg.depth = 0.5637136867351373;
    msg.alt = 0.35853282207094417;

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
    msg.setTimeStamp(0.4238532328506661);
    msg.setSource(16140U);
    msg.setSourceEntity(8U);
    msg.setDestination(41307U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.23267109524705332;
    msg.lon = 0.7206542127871288;
    msg.height = 0.5100752787208532;
    msg.x = 0.3102761009917392;
    msg.y = 0.8376151914601985;
    msg.z = 0.3019797972083892;
    msg.phi = 0.7628656155040134;
    msg.theta = 0.326883818281157;
    msg.psi = 0.7511646685684241;
    msg.u = 0.8805205541765029;
    msg.v = 0.6111698017558682;
    msg.w = 0.0376819875107518;
    msg.vx = 0.0711979109390457;
    msg.vy = 0.8343015500154538;
    msg.vz = 0.7591097169450489;
    msg.p = 0.22951569748319667;
    msg.q = 0.882772480985771;
    msg.r = 0.9803111102456472;
    msg.depth = 0.5255389170844819;
    msg.alt = 0.5014914607917964;

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
    msg.setTimeStamp(0.3610768685255893);
    msg.setSource(19496U);
    msg.setSourceEntity(10U);
    msg.setDestination(4704U);
    msg.setDestinationEntity(158U);
    msg.x = 0.38569457066274215;
    msg.y = 0.7229432896336706;
    msg.z = 0.39445623464836177;

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
    msg.setTimeStamp(0.2411595899956217);
    msg.setSource(16414U);
    msg.setSourceEntity(69U);
    msg.setDestination(48027U);
    msg.setDestinationEntity(127U);
    msg.x = 0.9761198402252607;
    msg.y = 0.7093354443890424;
    msg.z = 0.7335601270003546;

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
    msg.setTimeStamp(0.07476018211300062);
    msg.setSource(26997U);
    msg.setSourceEntity(224U);
    msg.setDestination(65075U);
    msg.setDestinationEntity(131U);
    msg.x = 0.6841173179536257;
    msg.y = 0.26933664912623667;
    msg.z = 0.029560417302951003;

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
    msg.setTimeStamp(0.002825664736722522);
    msg.setSource(22100U);
    msg.setSourceEntity(4U);
    msg.setDestination(18154U);
    msg.setDestinationEntity(72U);
    msg.value = 0.932631463338613;

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
    msg.setTimeStamp(0.9833297321023163);
    msg.setSource(48507U);
    msg.setSourceEntity(195U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(110U);
    msg.value = 0.6173444319108347;

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
    msg.setTimeStamp(0.1553110114962466);
    msg.setSource(25592U);
    msg.setSourceEntity(67U);
    msg.setDestination(3116U);
    msg.setDestinationEntity(100U);
    msg.value = 0.033797904767208675;

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
    msg.setTimeStamp(0.26701915209422333);
    msg.setSource(6151U);
    msg.setSourceEntity(138U);
    msg.setDestination(35135U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8976516177269562;

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
    msg.setTimeStamp(0.6103570732054935);
    msg.setSource(5504U);
    msg.setSourceEntity(116U);
    msg.setDestination(56625U);
    msg.setDestinationEntity(211U);
    msg.value = 0.34650109976256094;

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
    msg.setTimeStamp(0.5549425079019235);
    msg.setSource(29358U);
    msg.setSourceEntity(174U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(200U);
    msg.value = 0.4841102047926519;

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
    msg.setTimeStamp(0.5294669733574925);
    msg.setSource(29479U);
    msg.setSourceEntity(204U);
    msg.setDestination(22918U);
    msg.setDestinationEntity(24U);
    msg.x = 0.0620518499981052;
    msg.y = 0.08873691118810634;
    msg.z = 0.5460751478011883;
    msg.phi = 0.06602617299039593;
    msg.theta = 0.3063589314389278;
    msg.psi = 0.6359299642510496;
    msg.p = 0.11997860087561474;
    msg.q = 0.9832205776361898;
    msg.r = 0.4961869694292297;
    msg.u = 0.5621883590576597;
    msg.v = 0.8796099073324456;
    msg.w = 0.8673067512092328;
    msg.bias_psi = 0.901974732750059;
    msg.bias_r = 0.6637583539682578;

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
    msg.setTimeStamp(0.047751937900541996);
    msg.setSource(41733U);
    msg.setSourceEntity(60U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(93U);
    msg.x = 0.0847659083046951;
    msg.y = 0.23057585177432616;
    msg.z = 0.29697287458338584;
    msg.phi = 0.31342842137173355;
    msg.theta = 0.23078211015507577;
    msg.psi = 0.029300439548331947;
    msg.p = 0.07767056019638341;
    msg.q = 0.2711676013764439;
    msg.r = 0.053277795611095025;
    msg.u = 0.9627221837629807;
    msg.v = 0.6341487940506921;
    msg.w = 0.17285104087077963;
    msg.bias_psi = 0.6625597108913519;
    msg.bias_r = 0.25705511386274815;

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
    msg.setTimeStamp(0.11267892267844182);
    msg.setSource(19807U);
    msg.setSourceEntity(118U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(163U);
    msg.x = 0.8888468282157733;
    msg.y = 0.4024532966128338;
    msg.z = 0.8585475988201937;
    msg.phi = 0.9839400419751849;
    msg.theta = 0.5941542595863482;
    msg.psi = 0.8955524959178498;
    msg.p = 0.040844662337558346;
    msg.q = 0.12771358458131876;
    msg.r = 0.576714445994764;
    msg.u = 0.6619972746985427;
    msg.v = 0.46639228784060616;
    msg.w = 0.9685750343235093;
    msg.bias_psi = 0.8597971200400587;
    msg.bias_r = 0.05413982229105874;

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
    msg.setTimeStamp(0.19540202451772248);
    msg.setSource(52618U);
    msg.setSourceEntity(251U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(246U);
    msg.bias_psi = 0.9327103573545724;
    msg.bias_r = 0.6452486532614524;
    msg.cog = 0.6999698215814273;
    msg.cyaw = 0.31499367704990433;
    msg.lbl_rej_level = 0.7346558331343986;
    msg.gps_rej_level = 0.9490220799570078;
    msg.custom_x = 0.14201902145199607;
    msg.custom_y = 0.4461254431948112;
    msg.custom_z = 0.32256605313702613;

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
    msg.setTimeStamp(0.4854908032992096);
    msg.setSource(33026U);
    msg.setSourceEntity(1U);
    msg.setDestination(17273U);
    msg.setDestinationEntity(120U);
    msg.bias_psi = 0.10295735821676466;
    msg.bias_r = 0.7220546220874456;
    msg.cog = 0.8146061572338109;
    msg.cyaw = 0.2013657712668694;
    msg.lbl_rej_level = 0.06469486619708809;
    msg.gps_rej_level = 0.07104278017676668;
    msg.custom_x = 0.012081076192916984;
    msg.custom_y = 0.9625077701220824;
    msg.custom_z = 0.8765187061149126;

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
    msg.setTimeStamp(0.20877760469693296);
    msg.setSource(63564U);
    msg.setSourceEntity(252U);
    msg.setDestination(27289U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.12989639870959313;
    msg.bias_r = 0.22156658239870353;
    msg.cog = 0.613158331060236;
    msg.cyaw = 0.5821623546291593;
    msg.lbl_rej_level = 0.11967261546050945;
    msg.gps_rej_level = 0.2519714019591265;
    msg.custom_x = 0.972831138200731;
    msg.custom_y = 0.9491107143104787;
    msg.custom_z = 0.3736913793121803;

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
    msg.setTimeStamp(0.45162684182599466);
    msg.setSource(19312U);
    msg.setSourceEntity(70U);
    msg.setDestination(44935U);
    msg.setDestinationEntity(29U);
    msg.utc_time = 0.10711101470844475;
    msg.reason = 149U;

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
    msg.setTimeStamp(0.10151396603255236);
    msg.setSource(34337U);
    msg.setSourceEntity(38U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(208U);
    msg.utc_time = 0.010882411862577102;
    msg.reason = 231U;

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
    msg.setTimeStamp(0.5049442448228717);
    msg.setSource(29837U);
    msg.setSourceEntity(90U);
    msg.setDestination(22749U);
    msg.setDestinationEntity(187U);
    msg.utc_time = 0.28541548267984995;
    msg.reason = 106U;

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
    msg.setTimeStamp(0.996240745621213);
    msg.setSource(61433U);
    msg.setSourceEntity(109U);
    msg.setDestination(27677U);
    msg.setDestinationEntity(148U);
    msg.id = 44U;
    msg.range = 0.5258229535961795;
    msg.acceptance = 113U;

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
    msg.setTimeStamp(0.5802770508025784);
    msg.setSource(12294U);
    msg.setSourceEntity(228U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(206U);
    msg.id = 85U;
    msg.range = 0.21240105836971312;
    msg.acceptance = 44U;

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
    msg.setTimeStamp(0.9966397128812968);
    msg.setSource(35789U);
    msg.setSourceEntity(134U);
    msg.setDestination(4409U);
    msg.setDestinationEntity(77U);
    msg.id = 28U;
    msg.range = 0.671972911098265;
    msg.acceptance = 78U;

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
    msg.setTimeStamp(0.2675285335541632);
    msg.setSource(44555U);
    msg.setSourceEntity(180U);
    msg.setDestination(40934U);
    msg.setDestinationEntity(46U);
    msg.type = 116U;
    msg.reason = 0U;
    msg.value = 0.6360492286649312;
    msg.timestep = 0.08858961812746291;

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
    msg.setTimeStamp(0.2522653869301844);
    msg.setSource(25167U);
    msg.setSourceEntity(61U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(152U);
    msg.type = 59U;
    msg.reason = 65U;
    msg.value = 0.5170106477242518;
    msg.timestep = 0.9965658842104083;

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
    msg.setTimeStamp(0.3783422727746162);
    msg.setSource(28587U);
    msg.setSourceEntity(227U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(2U);
    msg.type = 232U;
    msg.reason = 105U;
    msg.value = 0.47471471814608523;
    msg.timestep = 0.710787037797192;

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
    msg.setTimeStamp(0.8269219451083806);
    msg.setSource(60091U);
    msg.setSourceEntity(40U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.7396652978198515);
    msg.setSource(1630U);
    msg.setSourceEntity(218U);
    msg.setDestination(14736U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.4115873014519289);
    msg.setSource(44349U);
    msg.setSourceEntity(167U);
    msg.setDestination(44895U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.4080222280260346);
    msg.setSource(45909U);
    msg.setSourceEntity(232U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(113U);
    msg.beacon.assign("HBXOUFFUJNBONEJLPNJVZGCBDHHCHWEIBNOERCMBYFXVKGGAERCYTIXPOLRHJZUQCSXGQ");
    msg.x = 0.7884172134224804;
    msg.y = 0.7471983451317771;
    msg.depth = 0.1558817190516617;
    msg.var_x = 0.7741438310761628;
    msg.var_y = 0.0589074324770511;

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
    msg.setTimeStamp(0.3059887458284303);
    msg.setSource(54223U);
    msg.setSourceEntity(23U);
    msg.setDestination(31223U);
    msg.setDestinationEntity(5U);
    msg.beacon.assign("HSQDOYTPFNMKJJABRBAQURIMKSEFUEPIJQXUTCEQIXFQUCMTVMALEDLZFWKDAUHWHEHCTPODQTLHFMFRLYGVAKBDCZGZVSCAWMIDLD");
    msg.x = 0.4012157196128492;
    msg.y = 0.9730536661466488;
    msg.depth = 0.07533093603161278;
    msg.var_x = 0.3340161616913465;
    msg.var_y = 0.7644861527137173;

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
    msg.setTimeStamp(0.688553120995483);
    msg.setSource(48249U);
    msg.setSourceEntity(62U);
    msg.setDestination(54048U);
    msg.setDestinationEntity(136U);
    msg.beacon.assign("LNHBJLSZTIBSGDVOBYQZEVKROUXDLQCLHNQMQWZWYTSENXHSNNHXYGPJYIOMUEDTDTSWBTOFJCDVPNAQGQMHAXZFUVCREJHOICYRWMMMKFKUYYBRFC");
    msg.x = 0.1424995200990543;
    msg.y = 0.34268658813265485;
    msg.depth = 0.3798494563472873;
    msg.var_x = 0.7594705590861358;
    msg.var_y = 0.0423956101466314;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.8623848105861001);
    msg.setSource(42998U);
    msg.setSourceEntity(235U);
    msg.setDestination(1878U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6477101835358541;

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
    msg.setTimeStamp(0.5895657816075003);
    msg.setSource(23780U);
    msg.setSourceEntity(153U);
    msg.setDestination(62030U);
    msg.setDestinationEntity(191U);
    msg.value = 0.3320586031349094;

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
    msg.setTimeStamp(0.430906156620553);
    msg.setSource(23728U);
    msg.setSourceEntity(134U);
    msg.setDestination(57768U);
    msg.setDestinationEntity(202U);
    msg.value = 0.28580484780700044;

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
    msg.setTimeStamp(0.049257636889922574);
    msg.setSource(55608U);
    msg.setSourceEntity(157U);
    msg.setDestination(29456U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7497296407091879;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.0760576737962565);
    msg.setSource(52481U);
    msg.setSourceEntity(67U);
    msg.setDestination(45422U);
    msg.setDestinationEntity(217U);
    msg.value = 0.48995997493654586;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.3341629119156788);
    msg.setSource(49661U);
    msg.setSourceEntity(241U);
    msg.setDestination(31909U);
    msg.setDestinationEntity(59U);
    msg.value = 0.3216505285031107;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.6980586737738905);
    msg.setSource(9495U);
    msg.setSourceEntity(63U);
    msg.setDestination(10792U);
    msg.setDestinationEntity(2U);
    msg.value = 0.35034239394882183;
    msg.speed_units = 158U;

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
    msg.setTimeStamp(0.06392626476382024);
    msg.setSource(37658U);
    msg.setSourceEntity(138U);
    msg.setDestination(43448U);
    msg.setDestinationEntity(113U);
    msg.value = 0.16073181540566728;
    msg.speed_units = 251U;

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
    msg.setTimeStamp(0.5057296455215602);
    msg.setSource(4142U);
    msg.setSourceEntity(157U);
    msg.setDestination(1972U);
    msg.setDestinationEntity(33U);
    msg.value = 0.3649449898410647;
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
    msg.setTimeStamp(0.6984283303414794);
    msg.setSource(49067U);
    msg.setSourceEntity(78U);
    msg.setDestination(29148U);
    msg.setDestinationEntity(186U);
    msg.value = 0.019682754348554266;

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
    msg.setTimeStamp(0.7680453381008469);
    msg.setSource(27503U);
    msg.setSourceEntity(117U);
    msg.setDestination(60114U);
    msg.setDestinationEntity(61U);
    msg.value = 0.2554231015362718;

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
    msg.setTimeStamp(0.5184759683699542);
    msg.setSource(39809U);
    msg.setSourceEntity(85U);
    msg.setDestination(33298U);
    msg.setDestinationEntity(145U);
    msg.value = 0.6822479075390165;

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
    msg.setTimeStamp(0.7068370534267461);
    msg.setSource(46743U);
    msg.setSourceEntity(0U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(11U);
    msg.value = 0.12144972820973043;

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
    msg.setTimeStamp(0.11844084041955916);
    msg.setSource(5445U);
    msg.setSourceEntity(75U);
    msg.setDestination(55702U);
    msg.setDestinationEntity(9U);
    msg.value = 0.14782430569735894;

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
    msg.setTimeStamp(0.05597333423854434);
    msg.setSource(10093U);
    msg.setSourceEntity(115U);
    msg.setDestination(21322U);
    msg.setDestinationEntity(243U);
    msg.value = 0.4944668537143586;

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
    msg.setTimeStamp(0.19570751623168592);
    msg.setSource(53634U);
    msg.setSourceEntity(172U);
    msg.setDestination(1435U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6355400561194171;

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
    msg.setTimeStamp(0.3143599668840864);
    msg.setSource(11348U);
    msg.setSourceEntity(22U);
    msg.setDestination(8664U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6479566543813127;

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
    msg.setTimeStamp(0.3344909402106009);
    msg.setSource(38892U);
    msg.setSourceEntity(92U);
    msg.setDestination(41667U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6268324287877763;

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
    msg.setTimeStamp(0.5537960088538968);
    msg.setSource(37440U);
    msg.setSourceEntity(13U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(209U);
    msg.start_lat = 0.41411429087857776;
    msg.start_lon = 0.6717726543703563;
    msg.start_z = 0.7962378292413939;
    msg.start_z_units = 70U;
    msg.end_lat = 0.7015508068098973;
    msg.end_lon = 0.8689688115184963;
    msg.end_z = 0.2412873743294398;
    msg.end_z_units = 23U;
    msg.speed = 0.36628802904906643;
    msg.speed_units = 81U;
    msg.lradius = 0.5058734938974074;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.4290515855365533);
    msg.setSource(46137U);
    msg.setSourceEntity(3U);
    msg.setDestination(10327U);
    msg.setDestinationEntity(1U);
    msg.start_lat = 0.13040373231875524;
    msg.start_lon = 0.9286764056825646;
    msg.start_z = 0.12845666197882943;
    msg.start_z_units = 73U;
    msg.end_lat = 0.1081158513541578;
    msg.end_lon = 0.7105405754531852;
    msg.end_z = 0.12919118132122542;
    msg.end_z_units = 252U;
    msg.speed = 0.8006290819423248;
    msg.speed_units = 153U;
    msg.lradius = 0.22642848731169984;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.06251057211776856);
    msg.setSource(30881U);
    msg.setSourceEntity(188U);
    msg.setDestination(44867U);
    msg.setDestinationEntity(144U);
    msg.start_lat = 0.050886786340122225;
    msg.start_lon = 0.27225868063190717;
    msg.start_z = 0.7657427265722891;
    msg.start_z_units = 7U;
    msg.end_lat = 0.867431884185075;
    msg.end_lon = 0.05879321083263245;
    msg.end_z = 0.4653948359377402;
    msg.end_z_units = 35U;
    msg.speed = 0.09261452065255826;
    msg.speed_units = 112U;
    msg.lradius = 0.1990108198074204;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.5928614165584619);
    msg.setSource(16054U);
    msg.setSourceEntity(49U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(128U);
    msg.x = 0.0701539281189616;
    msg.y = 0.5478492291285402;
    msg.z = 0.6139434540550086;
    msg.k = 0.15797847989169178;
    msg.m = 0.8307078698781445;
    msg.n = 0.03336732022893596;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.23696216240215928);
    msg.setSource(32644U);
    msg.setSourceEntity(95U);
    msg.setDestination(65001U);
    msg.setDestinationEntity(190U);
    msg.x = 0.8311542870460393;
    msg.y = 0.6758872466989138;
    msg.z = 0.8741101732123557;
    msg.k = 0.9909073434999026;
    msg.m = 0.471749217616211;
    msg.n = 0.28098754276913807;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.5035829401568427);
    msg.setSource(22864U);
    msg.setSourceEntity(77U);
    msg.setDestination(5796U);
    msg.setDestinationEntity(137U);
    msg.x = 0.13439756350172494;
    msg.y = 0.9778048955190277;
    msg.z = 0.8663520868471596;
    msg.k = 0.4162680733840859;
    msg.m = 0.18661194870150788;
    msg.n = 0.6147202114025342;
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
    msg.setTimeStamp(0.21251757379196623);
    msg.setSource(37737U);
    msg.setSourceEntity(184U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(6U);
    msg.value = 0.4342749827383451;

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
    msg.setTimeStamp(0.006312783204662553);
    msg.setSource(43654U);
    msg.setSourceEntity(113U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(144U);
    msg.value = 0.8087755227579281;

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
    msg.setTimeStamp(0.8057658103084363);
    msg.setSource(30434U);
    msg.setSourceEntity(80U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7816789210198971;

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
    msg.setTimeStamp(0.5472068724239751);
    msg.setSource(46193U);
    msg.setSourceEntity(251U);
    msg.setDestination(20640U);
    msg.setDestinationEntity(174U);
    msg.u = 0.6870345995582137;
    msg.v = 0.37399395214949627;
    msg.w = 0.9998788443791436;
    msg.p = 0.32389818249368085;
    msg.q = 0.909095060091525;
    msg.r = 0.7396916159784156;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.36581787215617845);
    msg.setSource(36803U);
    msg.setSourceEntity(16U);
    msg.setDestination(22894U);
    msg.setDestinationEntity(186U);
    msg.u = 0.4742126016897015;
    msg.v = 0.209744409763164;
    msg.w = 0.27198318729344306;
    msg.p = 0.15277092045901264;
    msg.q = 0.7617097071757944;
    msg.r = 0.4270563597954017;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.20659939821244633);
    msg.setSource(36371U);
    msg.setSourceEntity(226U);
    msg.setDestination(38636U);
    msg.setDestinationEntity(42U);
    msg.u = 0.2828474094885892;
    msg.v = 0.12721515637130065;
    msg.w = 0.296861088395449;
    msg.p = 0.4114708628015682;
    msg.q = 0.7609734706184088;
    msg.r = 0.493716032654935;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.7143355531460742);
    msg.setSource(46493U);
    msg.setSourceEntity(240U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(240U);
    msg.start_lat = 0.6821583680697646;
    msg.start_lon = 0.9533938386555765;
    msg.start_z = 0.933362645634579;
    msg.start_z_units = 226U;
    msg.end_lat = 0.15072306397842705;
    msg.end_lon = 0.7335535927872984;
    msg.end_z = 0.3593029854064843;
    msg.end_z_units = 195U;
    msg.lradius = 0.7742914605075931;
    msg.flags = 113U;
    msg.x = 0.17541348645540478;
    msg.y = 0.9961229953784501;
    msg.z = 0.029927940832580435;
    msg.vx = 0.5775814441177356;
    msg.vy = 0.9589607333982119;
    msg.vz = 0.5306912106530733;
    msg.course_error = 0.1389476822693555;
    msg.eta = 19160U;

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
    msg.setTimeStamp(0.6308976742312028);
    msg.setSource(10005U);
    msg.setSourceEntity(200U);
    msg.setDestination(31750U);
    msg.setDestinationEntity(128U);
    msg.start_lat = 0.26685072459168835;
    msg.start_lon = 0.37997518665163865;
    msg.start_z = 0.03127247484289786;
    msg.start_z_units = 46U;
    msg.end_lat = 0.8736320089923966;
    msg.end_lon = 0.9937139187877684;
    msg.end_z = 0.15559939668671618;
    msg.end_z_units = 97U;
    msg.lradius = 0.7646152026749582;
    msg.flags = 246U;
    msg.x = 0.7722719897158491;
    msg.y = 0.736666386223134;
    msg.z = 0.5800190846953093;
    msg.vx = 0.936667760859219;
    msg.vy = 0.7669447984818899;
    msg.vz = 0.569758514866852;
    msg.course_error = 0.09102392603593001;
    msg.eta = 52125U;

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
    msg.setTimeStamp(0.24918927208679686);
    msg.setSource(32128U);
    msg.setSourceEntity(156U);
    msg.setDestination(2142U);
    msg.setDestinationEntity(151U);
    msg.start_lat = 0.8703640841128066;
    msg.start_lon = 0.994935571235541;
    msg.start_z = 0.4485663681963937;
    msg.start_z_units = 17U;
    msg.end_lat = 0.5291733913076723;
    msg.end_lon = 0.5366985690224971;
    msg.end_z = 0.508916864829987;
    msg.end_z_units = 147U;
    msg.lradius = 0.23924400281538827;
    msg.flags = 163U;
    msg.x = 0.96946715618626;
    msg.y = 0.7382624855622795;
    msg.z = 0.036011128780852664;
    msg.vx = 0.24511881271043068;
    msg.vy = 0.9284062750512699;
    msg.vz = 0.04187245348920543;
    msg.course_error = 0.7756098638134932;
    msg.eta = 56013U;

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
    msg.setTimeStamp(0.6499095323679694);
    msg.setSource(49518U);
    msg.setSourceEntity(119U);
    msg.setDestination(59622U);
    msg.setDestinationEntity(133U);
    msg.k = 0.6907004706365214;
    msg.m = 0.34877748248690765;
    msg.n = 0.05399664015782413;

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
    msg.setTimeStamp(0.022274403204456728);
    msg.setSource(54130U);
    msg.setSourceEntity(134U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(175U);
    msg.k = 0.33925811056157673;
    msg.m = 0.9945917189068672;
    msg.n = 0.5332312775474399;

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
    msg.setTimeStamp(0.9234276619820877);
    msg.setSource(3630U);
    msg.setSourceEntity(128U);
    msg.setDestination(48840U);
    msg.setDestinationEntity(117U);
    msg.k = 0.14253774976796296;
    msg.m = 0.1775744717949297;
    msg.n = 0.8275191466756835;

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
    msg.setTimeStamp(0.6921797919779772);
    msg.setSource(55556U);
    msg.setSourceEntity(179U);
    msg.setDestination(43371U);
    msg.setDestinationEntity(62U);
    msg.p = 0.5840106270512129;
    msg.i = 0.7969396798109225;
    msg.d = 0.9312097579865265;
    msg.a = 0.924374499714381;

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
    msg.setTimeStamp(0.8935274966232946);
    msg.setSource(36300U);
    msg.setSourceEntity(82U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(123U);
    msg.p = 0.2537882305194915;
    msg.i = 0.7795660517688697;
    msg.d = 0.4625971275412565;
    msg.a = 0.13108222523578372;

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
    msg.setTimeStamp(0.8758385493081489);
    msg.setSource(58429U);
    msg.setSourceEntity(180U);
    msg.setDestination(30940U);
    msg.setDestinationEntity(178U);
    msg.p = 0.7470077579696937;
    msg.i = 0.22507578481338109;
    msg.d = 0.7458098819612544;
    msg.a = 0.5572797659796692;

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
    msg.setTimeStamp(0.22692224444786224);
    msg.setSource(53883U);
    msg.setSourceEntity(206U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(18U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.02501129397157309);
    msg.setSource(39168U);
    msg.setSourceEntity(240U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(172U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.6549006999592232);
    msg.setSource(42098U);
    msg.setSourceEntity(18U);
    msg.setDestination(61587U);
    msg.setDestinationEntity(254U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.1494469892001382);
    msg.setSource(46661U);
    msg.setSourceEntity(12U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(149U);
    msg.timeout = 1607U;
    msg.lat = 0.7253143218737421;
    msg.lon = 0.11865867938041341;
    msg.z = 0.379256081853264;
    msg.z_units = 206U;
    msg.speed = 0.4881473194180943;
    msg.speed_units = 239U;
    msg.roll = 0.8442791381761234;
    msg.pitch = 0.06459877829157223;
    msg.yaw = 0.6250964284082557;
    msg.custom.assign("WEPDNUFNONFWOYEBZAMVSQBOJUKPDORISPJVITWTBKCYBGSYGSDTT");

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
    msg.setTimeStamp(0.11212294500269404);
    msg.setSource(18489U);
    msg.setSourceEntity(10U);
    msg.setDestination(6007U);
    msg.setDestinationEntity(120U);
    msg.timeout = 36346U;
    msg.lat = 0.5509130567292012;
    msg.lon = 0.8411732507293074;
    msg.z = 0.7549919978312404;
    msg.z_units = 116U;
    msg.speed = 0.5187336290090243;
    msg.speed_units = 28U;
    msg.roll = 0.7067699800354956;
    msg.pitch = 0.3162176022965154;
    msg.yaw = 0.8800751684810227;
    msg.custom.assign("SUNXAOPKLLRTBVYHMWGDYIDAAIABBUFNTMBQXXOBGVGDFR");

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
    msg.setTimeStamp(0.47601953738876224);
    msg.setSource(59078U);
    msg.setSourceEntity(130U);
    msg.setDestination(17568U);
    msg.setDestinationEntity(63U);
    msg.timeout = 29063U;
    msg.lat = 0.06201307366345843;
    msg.lon = 0.054649614600555174;
    msg.z = 0.2650462032420855;
    msg.z_units = 45U;
    msg.speed = 0.03740093938284772;
    msg.speed_units = 175U;
    msg.roll = 0.36235238523716096;
    msg.pitch = 0.18558254319160405;
    msg.yaw = 0.6307199766780088;
    msg.custom.assign("BPICSNZXPWALHXHUTAULXZIVKUIFEHAYHNTPKEZKWQAHJEWWTGHLFXBIVECTKNSBMADFALYZNXKESUVZWHVLNHQRKROLYBIEYIJPZWNYVQDUNCGXOQZRMMSYFRMTBEUBOYBEQLTERFXDOCJPHFSGMMVFLCRUIJWFXQDWPLAZZIHCNJGOJCMXRWMOCYKQTSJUTBJBPEGGD");

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
    msg.setTimeStamp(0.9655329791058722);
    msg.setSource(50010U);
    msg.setSourceEntity(78U);
    msg.setDestination(31838U);
    msg.setDestinationEntity(166U);
    msg.timeout = 59404U;
    msg.lat = 0.03572583652116512;
    msg.lon = 0.10086988198102975;
    msg.z = 0.374115236413578;
    msg.z_units = 215U;
    msg.speed = 0.9107571512178638;
    msg.speed_units = 54U;
    msg.duration = 463U;
    msg.radius = 0.8388587842800781;
    msg.flags = 175U;
    msg.custom.assign("VATSFIUIWBTXMTRWVEDYYSJFQGUBRLHHBBTMJWBGQNLNSDMAVJELKIRGJSPRTXXGOTIYADETBNESZDEGWFTMFGOJVUNQVOWATHIWNXXHFOHOKYELIBMFLXNS");

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
    msg.setTimeStamp(0.09942278136710203);
    msg.setSource(26898U);
    msg.setSourceEntity(248U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(217U);
    msg.timeout = 8747U;
    msg.lat = 0.05145573235304357;
    msg.lon = 0.3629409901563593;
    msg.z = 0.09567807003841466;
    msg.z_units = 187U;
    msg.speed = 0.24204106392166413;
    msg.speed_units = 248U;
    msg.duration = 44431U;
    msg.radius = 0.3043143142941317;
    msg.flags = 196U;
    msg.custom.assign("IBZWRHMRRNAYDXDMJPDPHETLOJYXJXFREDCBDINIWJBHRTPPHLFHNLCCRTMZRZTOZQAINZGWQDXVCCOYZBDTHYTYJDWAJQKGXVQJJBUZJHKIPUROPGBQBLPFNFTMSXHX");

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
    msg.setTimeStamp(0.6178721326019432);
    msg.setSource(45974U);
    msg.setSourceEntity(192U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(29U);
    msg.timeout = 24952U;
    msg.lat = 0.850487067367866;
    msg.lon = 0.570410572702805;
    msg.z = 0.1971503950958271;
    msg.z_units = 99U;
    msg.speed = 0.8359433712044212;
    msg.speed_units = 76U;
    msg.duration = 187U;
    msg.radius = 0.0649333490844044;
    msg.flags = 123U;
    msg.custom.assign("GHYOXGWJKSOMJICXRKGVNDJWCWKOTZBFDBXFJRUWMLHQDBQKHFCXLJPYRLUXHZH");

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
    msg.setTimeStamp(0.8129952171235274);
    msg.setSource(4413U);
    msg.setSourceEntity(221U);
    msg.setDestination(20415U);
    msg.setDestinationEntity(226U);
    msg.custom.assign("HAADIEMJPNZNSUA");

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
    msg.setTimeStamp(0.5752278283386019);
    msg.setSource(2140U);
    msg.setSourceEntity(8U);
    msg.setDestination(8509U);
    msg.setDestinationEntity(67U);
    msg.custom.assign("VKGJYWHQABXLZVYYOWDAACIWGBATCYOFWLFDJUHRZXKOEBFFSKXEEZCBLSCARFPENZKSHJGVEIETEUNIFTUIRUJWXTBOGYQMYXVOTGVFWGPVPCLYQEZNXLJIGCOMPPRMRXMDXNRTGDXLJBCJMEMQKHLQNAGMVQSFROZIPNNMMRSHAA");

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
    msg.setTimeStamp(0.2594060190556413);
    msg.setSource(22354U);
    msg.setSourceEntity(11U);
    msg.setDestination(18927U);
    msg.setDestinationEntity(200U);
    msg.custom.assign("IHHMGIOYYUBQXSFR");

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
    msg.setTimeStamp(0.3089069399843608);
    msg.setSource(55635U);
    msg.setSourceEntity(25U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(4U);
    msg.timeout = 57858U;
    msg.lat = 0.20813671683256552;
    msg.lon = 0.7393904202614737;
    msg.z = 0.24606565259541902;
    msg.z_units = 248U;
    msg.duration = 1276U;
    msg.speed = 0.7636118459083823;
    msg.speed_units = 57U;
    msg.type = 55U;
    msg.radius = 0.2970798174369127;
    msg.length = 0.47163827094502697;
    msg.bearing = 0.5731370428143436;
    msg.direction = 77U;
    msg.custom.assign("DGUDQVTODBBVTSUPERWMDZCSOJFYJKLXBCKITGJAWQDMPSLVNFFJZJMWXXDRNLIHTQMNWYEWRPCVIYWQTAMEVDFGLWJGGHJHQZFVBAZRBCSJRPROISXEIHKIGHBKYZSBRZGQUEJIYORYZHHEFLPFCSLVKDPCXUFAOWTGNSONXUYTPNILAHDFPKKMZGYACKUWXJMBYYPNARKLNNBMX");

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
    msg.setTimeStamp(0.20018666759914205);
    msg.setSource(47079U);
    msg.setSourceEntity(234U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(253U);
    msg.timeout = 45370U;
    msg.lat = 0.34808733924516533;
    msg.lon = 0.6526515853495143;
    msg.z = 0.7402339153381783;
    msg.z_units = 80U;
    msg.duration = 35734U;
    msg.speed = 0.06650861053375334;
    msg.speed_units = 105U;
    msg.type = 36U;
    msg.radius = 0.6986851010123427;
    msg.length = 0.45758172449705514;
    msg.bearing = 0.9666833906867227;
    msg.direction = 205U;
    msg.custom.assign("JYWNLRHIIWGYAURIEOWUWOMEIZQKSKHVVWGFACYQDKJLSYIQHFVLBTZDVVXVPZRHUJBTBHXCXYMLTPSNE");

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
    msg.setTimeStamp(0.7466637190307778);
    msg.setSource(4948U);
    msg.setSourceEntity(190U);
    msg.setDestination(15122U);
    msg.setDestinationEntity(24U);
    msg.timeout = 61691U;
    msg.lat = 0.38612725782492374;
    msg.lon = 0.6921639669077995;
    msg.z = 0.44739143756332356;
    msg.z_units = 85U;
    msg.duration = 31744U;
    msg.speed = 0.4230133091431073;
    msg.speed_units = 41U;
    msg.type = 126U;
    msg.radius = 0.7304967715787817;
    msg.length = 0.4989138165132623;
    msg.bearing = 0.37075251055102965;
    msg.direction = 203U;
    msg.custom.assign("PNQRGXPJFIBHILOUGMIXHLDWPEKALWBGNISYXTAVRDNURXMYNSBMBAKERVNRWDGVSWAYAUEMMHGHOQNCJWUPDMSDFCULXUVLEQTTSTPFYIJOYNKDDDATZCXBHOWCZJMGMSYSXELJGXGXRKPMHFAPJVZQBCLFOQCENUQQBFCKLSTTZYCKWRFVKHIZVVQFTKR");

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
    msg.setTimeStamp(0.218347877691625);
    msg.setSource(20752U);
    msg.setSourceEntity(137U);
    msg.setDestination(1618U);
    msg.setDestinationEntity(253U);
    msg.duration = 26094U;
    msg.custom.assign("DEVTZVSDGTAXDSROBNRZDSJCZUQJEUMBONCGLFDAGYO");

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
    msg.setTimeStamp(0.09930418993808166);
    msg.setSource(10910U);
    msg.setSourceEntity(45U);
    msg.setDestination(2308U);
    msg.setDestinationEntity(243U);
    msg.duration = 36549U;
    msg.custom.assign("VSGKHRYVDXAOUBLLFBUEBKIRKZREQMVEPKYMHANQASYUNWNSSZVNDIJQUMGYJBUHWVWNJRDUPYTDRPLXNGAEWVFIIPFSFPSCMFVKAMWEFCZCNRLLEYATTZPVGHIELFSWEJOKOTXSGUPWQVXBTEZXJTJWGMNIFGDYGJPKITHKXZYOQADLLDVGFCUXCKMJACYDETZBZQCOBOWUHGZOOIHQHHJMNTKPCFDBXCBCMHSBIYORDLJRQRAZLISXQNMUPO");

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
    msg.setTimeStamp(0.9907901492542708);
    msg.setSource(26242U);
    msg.setSourceEntity(18U);
    msg.setDestination(26228U);
    msg.setDestinationEntity(31U);
    msg.duration = 52769U;
    msg.custom.assign("OJFKGFPULNVPXJUTFNTTYJQTXCZNSSLLMXOPNEVJQCKZGGSPNOGNUSUDROUIIAHSLBXEXNOQKQKKCOBOADVGYIDCJIPFQQQHUWEPCOEHRZEGRXAYLFJFRZMUNVENMYDMTBMPHZLPYLXTVBLXKOXKFYLOMASWWSBCMWQFBKAZCMIBDURIERMYDKVAWUZBHAGRTCRWGKHTPVYFEXZJBGDHEHGVWDTUELDSWIVSAQJQBSFYTWCMCHRJVYAZRID");

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
    msg.setTimeStamp(0.33606331862817185);
    msg.setSource(17740U);
    msg.setSourceEntity(22U);
    msg.setDestination(33731U);
    msg.setDestinationEntity(157U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.35959445857514405;
    msg.control.set(tmp_msg_0);
    msg.duration = 19290U;
    msg.custom.assign("QLXZPEIAHBSTTRPFQWNCQYZAYEKAUWVKRDATTDGHLJXFIQMYJOCLMJCPDMPGNZCLBBBAYJKFJUUXXAGWEYVTOPXUSMFPLAJTIZKXIQHFFRJZQNOVHXKNSSXVCWFRJMHKCGUCWDLIBVLNGVOUZHYPJYUSRKMGULTTPULETCBZRKPDIARQQNGWRVBFJWWYOYEVKHDVAHSDVCOKFQXWGNMZMNZOQDBIETOAZSMBEFXOCPIIWHHSRNUDMERNE");

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
    msg.setTimeStamp(0.5092649997459026);
    msg.setSource(21006U);
    msg.setSourceEntity(141U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(207U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7086568490074174;
    tmp_msg_0.z_units = 190U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53601U;
    msg.custom.assign("OKOAXJAJGTGEWZWJVJBCIDDWBULREGYGRNTFLHIOBOMJZJIQPZIWGZYAJTULVKEGHVHYBJJSWTFQPHKLFZFKSTUSTEIMUNVCYKPYPCWUNTUHXGBOOIFXMPXMMARCGLECADZQKOZEBXHFNUQHCQYKEDC");

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
    msg.setTimeStamp(0.29877039681810413);
    msg.setSource(22531U);
    msg.setSourceEntity(11U);
    msg.setDestination(51218U);
    msg.setDestinationEntity(97U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8934000459275189;
    msg.control.set(tmp_msg_0);
    msg.duration = 56328U;
    msg.custom.assign("PPQYXGBKMQO");

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
    msg.setTimeStamp(0.61434503611295);
    msg.setSource(49839U);
    msg.setSourceEntity(235U);
    msg.setDestination(16492U);
    msg.setDestinationEntity(229U);
    msg.timeout = 23889U;
    msg.lat = 0.8170040790592628;
    msg.lon = 0.8307231832408914;
    msg.z = 0.9498200310515051;
    msg.z_units = 197U;
    msg.speed = 0.5216424901526614;
    msg.speed_units = 103U;
    msg.bearing = 0.23604575023734964;
    msg.cross_angle = 0.6550698738765858;
    msg.width = 0.2421716340848189;
    msg.length = 0.07577539838164726;
    msg.hstep = 0.27243142739351234;
    msg.coff = 157U;
    msg.alternation = 2U;
    msg.flags = 237U;
    msg.custom.assign("YELGLKIRMZPBNVZGJZBCTPSNTIURUCPGOEMGKXPDMAWMQCAJEILVNHAOEFAYZSWIEIMQLDIOFTMOXVGLCGQAIFKUAIAPBYXXRSTUBMYVQVXABMWKQOHMDENKRFSHHCGJJSVBHZPXPZONWGJNRXUFGET");

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
    msg.setTimeStamp(0.2923855416294756);
    msg.setSource(13842U);
    msg.setSourceEntity(197U);
    msg.setDestination(32391U);
    msg.setDestinationEntity(162U);
    msg.timeout = 44083U;
    msg.lat = 0.045602507748173315;
    msg.lon = 0.26129434915235206;
    msg.z = 0.9181966993259302;
    msg.z_units = 98U;
    msg.speed = 0.5145897215395058;
    msg.speed_units = 209U;
    msg.bearing = 0.16133811870522652;
    msg.cross_angle = 0.4501503953967271;
    msg.width = 0.531730908828368;
    msg.length = 0.006997449405347522;
    msg.hstep = 0.8001385283145563;
    msg.coff = 241U;
    msg.alternation = 35U;
    msg.flags = 88U;
    msg.custom.assign("XAHYUCUMIBXOZUTKHBXMULJLFKHOKJSAGVIDIJSVRHUMEWLAZDGONTLXMCGFCDKHIGYN");

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
    msg.setTimeStamp(0.15133599207021886);
    msg.setSource(16587U);
    msg.setSourceEntity(86U);
    msg.setDestination(56737U);
    msg.setDestinationEntity(164U);
    msg.timeout = 57377U;
    msg.lat = 0.8370253207511208;
    msg.lon = 0.4983708753967341;
    msg.z = 0.1957022928689267;
    msg.z_units = 111U;
    msg.speed = 0.7408026090317402;
    msg.speed_units = 186U;
    msg.bearing = 0.7121338346224244;
    msg.cross_angle = 0.5285709438923749;
    msg.width = 0.8147664014860178;
    msg.length = 0.8098296442562025;
    msg.hstep = 0.7742527828143004;
    msg.coff = 193U;
    msg.alternation = 48U;
    msg.flags = 243U;
    msg.custom.assign("DFATSARIAPTJHYZOEFEAJPHDLXPDWBGWXKVENPKDHMEYYROSWTIFKCHLTCNAKGIPGGUKHWRDMWYOTDUOJTPFBSOCMIUCRWXTJSFCUMJQPQWZNICRZQ");

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
    msg.setTimeStamp(0.4675225161927371);
    msg.setSource(9141U);
    msg.setSourceEntity(226U);
    msg.setDestination(26173U);
    msg.setDestinationEntity(254U);
    msg.timeout = 30572U;
    msg.lat = 0.4919560476770669;
    msg.lon = 0.22195677661021995;
    msg.z = 0.8764031729959147;
    msg.z_units = 175U;
    msg.speed = 0.7306907556581168;
    msg.speed_units = 4U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8068228226426641;
    tmp_msg_0.y = 0.24940340803504735;
    tmp_msg_0.z = 0.47503424930309635;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XFBHKRIPKHQCWBORWIDJVTKQLLSOKMKZSRSXQJILTBGNRZSWUDVHJBMNJOBNMPZXAYDRTFJJDOTDDLUCYXEDTIIGFMEMZBZWDFOHHURQYGFQEHGFKEOAPYKVUNAIUFRPMEVTUAOVAOAPMUITBUUXVEJNNBPZYFGLQGHVKZAEPNTYCSHNCLJSWQJLVWZBWRRGXYGLREDSXSFWMNHZXEX");

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
    msg.setTimeStamp(0.7560207768047514);
    msg.setSource(275U);
    msg.setSourceEntity(194U);
    msg.setDestination(4135U);
    msg.setDestinationEntity(155U);
    msg.timeout = 53587U;
    msg.lat = 0.0012996596941031724;
    msg.lon = 0.6188733895667394;
    msg.z = 0.8012661001754782;
    msg.z_units = 238U;
    msg.speed = 0.16195455474067078;
    msg.speed_units = 249U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6756492694152288;
    tmp_msg_0.y = 0.3880726699986854;
    tmp_msg_0.z = 0.7908836289192542;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QIYYGTMVJVBZFRSTWQXCCPGQCNOXOSZXOHVOSZVRXPUAIHLWXANIIQPHJTFCHXXRZEXSYBRAJDUOEQCIDUBRTDJLJZATYGOUIRJALRGLNHLQTDFYNPPHETAAKCOZQJZFKMXGESBVIECNGKVJNKHBWODEJPQAGVFGUACZWDONKUSKCFIEVLPKMUSRQTMAECMMETBZFOZYUDKLUTMDRYVFNWSGPLSBGWUBDMPWNML");

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
    msg.setTimeStamp(0.4382431848366781);
    msg.setSource(49453U);
    msg.setSourceEntity(39U);
    msg.setDestination(44160U);
    msg.setDestinationEntity(202U);
    msg.timeout = 18407U;
    msg.lat = 0.03902606343359427;
    msg.lon = 0.3249363240215025;
    msg.z = 0.914438241722923;
    msg.z_units = 223U;
    msg.speed = 0.7496395862862114;
    msg.speed_units = 5U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1533825836751449;
    tmp_msg_0.y = 0.02026792417328893;
    tmp_msg_0.z = 0.011949157833988866;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KRGLSDSAHNQVNXOHPRUSOBLIGZJNPIUBRMZNZTQWO");

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
    msg.setTimeStamp(0.15626933909233032);
    msg.setSource(41623U);
    msg.setSourceEntity(80U);
    msg.setDestination(49500U);
    msg.setDestinationEntity(123U);
    msg.x = 0.212228203300855;
    msg.y = 0.9414483266703485;
    msg.z = 0.4756463025531472;

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
    msg.setTimeStamp(0.10457555573214283);
    msg.setSource(16025U);
    msg.setSourceEntity(157U);
    msg.setDestination(38889U);
    msg.setDestinationEntity(78U);
    msg.x = 0.5409480702209184;
    msg.y = 0.14141431361305645;
    msg.z = 0.5473877232997918;

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
    msg.setTimeStamp(0.8634421098923065);
    msg.setSource(3465U);
    msg.setSourceEntity(27U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(234U);
    msg.x = 0.7358756777587914;
    msg.y = 0.025212686121181993;
    msg.z = 0.17114757803058656;

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
    msg.setTimeStamp(0.31007488567044206);
    msg.setSource(53206U);
    msg.setSourceEntity(14U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(231U);
    msg.timeout = 55286U;
    msg.lat = 0.4264676582372815;
    msg.lon = 0.6213966291489115;
    msg.z = 0.09692275817110774;
    msg.z_units = 224U;
    msg.amplitude = 0.6614182433596915;
    msg.pitch = 0.056216603647240126;
    msg.speed = 0.8280069241260241;
    msg.speed_units = 146U;
    msg.custom.assign("QCYCSJIHXHDFUOPWVKDWZEWMZWXVDEWOSVLIPLNBRNHKRRQFDTWYPXQSFLRIONFMGRTOVLNAXDGBRPOKFWQVKIGGCMSPUHPBIBCCGIBMTPHAAMFESWZTBUAWCKZFGRPZHUAZDQLQLOGHJYUVQLSDZGSYRKNIKATEIUUDMEQBHJLKTPCYNKWXGAZVOMFTRJMSDVBUOJNAXPETQYCHZUEXJTBIHUGANIJYJQFXMSXYLF");

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
    msg.setTimeStamp(0.20649284128478462);
    msg.setSource(63528U);
    msg.setSourceEntity(60U);
    msg.setDestination(20255U);
    msg.setDestinationEntity(236U);
    msg.timeout = 14170U;
    msg.lat = 0.8361005351584214;
    msg.lon = 0.3702389522001791;
    msg.z = 0.6719340118761042;
    msg.z_units = 10U;
    msg.amplitude = 0.4813334995157038;
    msg.pitch = 0.5552333106035892;
    msg.speed = 0.8542574266767529;
    msg.speed_units = 216U;
    msg.custom.assign("GVJPTLJOFUNUKYYHBNTARIVFTDFBHDSFPEGTWEZPWXXJSQPHVAOYSQDUPTCJQCWHKUEOKWYQPLLPBBIPKLHIXBYFVMMLCUXVYGNRFZKZVJGRBXASTYEACXOEQMIDSZAQUBMVHWNZJCNIVXGSXWNMGGQFNFCXDNRHAMMDRLHUTUKVGTHEOJQBUWKYYZDAQEWYKKNZMIAZSJBTZBP");

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
    msg.setTimeStamp(0.29500381245987517);
    msg.setSource(55856U);
    msg.setSourceEntity(79U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(113U);
    msg.timeout = 45532U;
    msg.lat = 0.6097857522201027;
    msg.lon = 0.017447263614425945;
    msg.z = 0.7953465522159704;
    msg.z_units = 180U;
    msg.amplitude = 0.885705350855653;
    msg.pitch = 0.8762869414925133;
    msg.speed = 0.6264689684157762;
    msg.speed_units = 77U;
    msg.custom.assign("DJYHVDXDRVHWXBRFUVFIXRTOUFLGQUJYMZSKXPUTABICCHEEKRPMQYAMOXFJOJUILYQDHJGFCNJASSCOHBKSRCHPNTJNKFLFMHG");

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
    msg.setTimeStamp(0.5449387341483037);
    msg.setSource(48027U);
    msg.setSourceEntity(33U);
    msg.setDestination(10192U);
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
    msg.setTimeStamp(0.207786424909974);
    msg.setSource(36028U);
    msg.setSourceEntity(65U);
    msg.setDestination(51929U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.24268472921974393);
    msg.setSource(9892U);
    msg.setSourceEntity(52U);
    msg.setDestination(43809U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.4839356739747869);
    msg.setSource(58147U);
    msg.setSourceEntity(129U);
    msg.setDestination(10416U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.3258657923309739;
    msg.lon = 0.5100662911228143;
    msg.z = 0.46710148686448993;
    msg.z_units = 186U;
    msg.radius = 0.2052368472731595;
    msg.duration = 59699U;
    msg.speed = 0.10542491593356107;
    msg.speed_units = 250U;
    msg.custom.assign("IZMFDHUCQDVUNMAEQPIQNSPWZLDTNZGVDJHRDWGLMOIJEQSXJIRRPYQUUHVQTNAAZEHSRBELEUFIKXCDZWWNNGOCGRRGGBASNWCFYZEDYHNJRNVQCBAPKIAEQRIBMKOFJEFKUAZUKZSLDBLJGOCWOKOHVCFMPYXDKLWYTVFM");

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
    msg.setTimeStamp(0.19812091530881593);
    msg.setSource(58614U);
    msg.setSourceEntity(144U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.05821102396596056;
    msg.lon = 0.788667313946855;
    msg.z = 0.176158893362389;
    msg.z_units = 254U;
    msg.radius = 0.2754589707247054;
    msg.duration = 36651U;
    msg.speed = 0.8132587491119765;
    msg.speed_units = 153U;
    msg.custom.assign("QPBFQRGJYZKOXCZWCPMFTMXEHZDNWGHFXUQRBQYIUFROUKKTAMGBTDMJBIKWULRCVVVVWVYTKNNKGHOLHJZTE");

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
    msg.setTimeStamp(0.6007088352529844);
    msg.setSource(54535U);
    msg.setSourceEntity(116U);
    msg.setDestination(57132U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.49468995775906344;
    msg.lon = 0.8716984756641774;
    msg.z = 0.648333908042809;
    msg.z_units = 42U;
    msg.radius = 0.21960214256931676;
    msg.duration = 56594U;
    msg.speed = 0.5139348353300172;
    msg.speed_units = 91U;
    msg.custom.assign("EOHFEKTRXBKQQDCQBMELHDESTMQVOGQAPYWMBKZLBVUGWIQZDXFYMUHIOOPPZKTPMGPKOESNFESWRFQFSPJYJVZAQIAHWFIWHRUJEIPUMFHTNLDNUFOARINWGZMYCKUGXKJLZGUWHWKOXCURUNEA");

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
    msg.setTimeStamp(0.6368771564010468);
    msg.setSource(17510U);
    msg.setSourceEntity(3U);
    msg.setDestination(413U);
    msg.setDestinationEntity(173U);
    msg.timeout = 45888U;
    msg.flags = 153U;
    msg.lat = 0.8719331034841962;
    msg.lon = 0.1684134552505001;
    msg.start_z = 0.5604193572770746;
    msg.start_z_units = 222U;
    msg.end_z = 0.8493743177946524;
    msg.end_z_units = 208U;
    msg.radius = 0.3853273993412818;
    msg.speed = 0.9773999129015697;
    msg.speed_units = 230U;
    msg.custom.assign("IWZCJHBSXLDJWVRXHSUQGPIBTWIOWPCTGRANLVAAPGOZSAXECNQUKLVSKZEJPDIPMJBMNXSUEHMBSRQKZWWHMXMRXHDLAVVWTBIYMGGLVATILVEOSTDUKABZBRCHTUJEXMYQCFBVZRMIOUOBRQFQMUDIVCUPUVIWOPHRATGZYYNXFEDSKCNKZWCEKNLKQCTFHJFFCYDKYLJEFHTUJGPLFNGPNJOZADXLNFSEKYNEJB");

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
    msg.setTimeStamp(0.17286648658327053);
    msg.setSource(57000U);
    msg.setSourceEntity(120U);
    msg.setDestination(31865U);
    msg.setDestinationEntity(126U);
    msg.timeout = 54679U;
    msg.flags = 163U;
    msg.lat = 0.3846581223743223;
    msg.lon = 0.1905669718131171;
    msg.start_z = 0.7209540491562254;
    msg.start_z_units = 89U;
    msg.end_z = 0.5892683415700316;
    msg.end_z_units = 81U;
    msg.radius = 0.1747538892033964;
    msg.speed = 0.2863481480589942;
    msg.speed_units = 71U;
    msg.custom.assign("LHJNGYDAOTZMRKRUROQKPFEFQRKGNV");

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
    msg.setTimeStamp(0.30161663378567527);
    msg.setSource(15582U);
    msg.setSourceEntity(94U);
    msg.setDestination(47840U);
    msg.setDestinationEntity(7U);
    msg.timeout = 12460U;
    msg.flags = 67U;
    msg.lat = 0.35760691570552605;
    msg.lon = 0.41226218909795975;
    msg.start_z = 0.9497486249462749;
    msg.start_z_units = 165U;
    msg.end_z = 0.8538588018465436;
    msg.end_z_units = 82U;
    msg.radius = 0.0928475086428896;
    msg.speed = 0.2329349282619152;
    msg.speed_units = 52U;
    msg.custom.assign("ZOYGJEHVPTKKTSQVPTWAWDXWVXRBLMLPMJAVYBDYQLZVOMGJFPIOIMAYUZHUEULPTVXYCKKUYGSEQPQVSNBJIDNATQOTGGHGWSZFRJCDNXSSLRONDKZQJFTXIYHNVHLZWKIJNXWIAQRKBNNLSWSQIESEFMWQCHRIFRVRSCNHBXLDQPMWCUGVXWJYEC");

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
    msg.setTimeStamp(0.0923197598185439);
    msg.setSource(46332U);
    msg.setSourceEntity(12U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(18U);
    msg.timeout = 4118U;
    msg.lat = 0.515277575654918;
    msg.lon = 0.8214974970331311;
    msg.z = 0.7414539882055756;
    msg.z_units = 210U;
    msg.speed = 0.20984996339548578;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7269003360689378;
    tmp_msg_0.y = 0.07487554333971469;
    tmp_msg_0.z = 0.8361156754782384;
    tmp_msg_0.t = 0.8574455339163604;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AAIWFIKKAPWALDKTEZFXUMFHQTYBHAMBSAFKKXIQHECNENYDQUSMZKDGRXVRVGZHBWGLKUAPOTOKNRMZVRZNALBTAOEHVRPDIBBOMNURNQGRLEPIHOCULSOYTCCKEMXGRYWJ");

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
    msg.setTimeStamp(0.8574570715551904);
    msg.setSource(17320U);
    msg.setSourceEntity(90U);
    msg.setDestination(31259U);
    msg.setDestinationEntity(191U);
    msg.timeout = 10257U;
    msg.lat = 0.09074471895316982;
    msg.lon = 0.9246375956139643;
    msg.z = 0.7087916435855557;
    msg.z_units = 24U;
    msg.speed = 0.7663318915657684;
    msg.speed_units = 220U;
    msg.custom.assign("IQEFIOMJCMFQICYJMNRTLDXFXBUZQDGBKEBMAQYKKYVTFGXVCRUXCOPNAEUZJARRTLXELFWZUTKRSWBWOKYFPGZHISROADKCHZSPZMYQEILDSCGRXKLVTXJFPPSAATHUQDVHNVAWYZSPCTVWWDLNKDMWHRBBTGAJGUEIUCJPVGYERJYYLJUOZNFHXJBIPNDDEHPBPLHTNGWCGXFOSTOIDQMJMKUV");

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
    msg.setTimeStamp(0.46343106139917867);
    msg.setSource(37479U);
    msg.setSourceEntity(160U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(12U);
    msg.timeout = 61726U;
    msg.lat = 0.9241323004739146;
    msg.lon = 0.48699110539516577;
    msg.z = 0.933061687929347;
    msg.z_units = 27U;
    msg.speed = 0.14314393776115086;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3962687049810547;
    tmp_msg_0.y = 0.9200899145836636;
    tmp_msg_0.z = 0.3252331664854957;
    tmp_msg_0.t = 0.037461062979577076;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RLXGLHXGIHUJEFLEOROVKMWGYVYAEFISRPJEDJZEPZBXPOWWVTQXTPUARPNSKMVWIIRWHNKIQJOEKFUBEJJTTFYNDONQSYLMUHVIUQUAAXXZUGSXBJCHCLLMCG");

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
    msg.setTimeStamp(0.27047596891907544);
    msg.setSource(15873U);
    msg.setSourceEntity(199U);
    msg.setDestination(43365U);
    msg.setDestinationEntity(19U);
    msg.x = 0.020453582725651454;
    msg.y = 0.17941334275040466;
    msg.z = 0.09003331930120262;
    msg.t = 0.5365483154806797;

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
    msg.setTimeStamp(0.9187250884039964);
    msg.setSource(54288U);
    msg.setSourceEntity(155U);
    msg.setDestination(22935U);
    msg.setDestinationEntity(218U);
    msg.x = 0.1757480952285514;
    msg.y = 0.044510789953494445;
    msg.z = 0.7433753765504122;
    msg.t = 0.3130300147571561;

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
    msg.setTimeStamp(0.7351796412515054);
    msg.setSource(1879U);
    msg.setSourceEntity(60U);
    msg.setDestination(58721U);
    msg.setDestinationEntity(9U);
    msg.x = 0.9891460131357316;
    msg.y = 0.8058824442516862;
    msg.z = 0.16415822606536212;
    msg.t = 0.46162677561372656;

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
    msg.setTimeStamp(0.19572176984033607);
    msg.setSource(57786U);
    msg.setSourceEntity(191U);
    msg.setDestination(8610U);
    msg.setDestinationEntity(183U);
    msg.timeout = 35647U;
    msg.name.assign("CRZKZDMPOOLFXXVZZCQFSZHDJFCZKAJOAPQNPUJNSECMDFOBTBUYILVSFVDTLBWTMTDMKAHHMIPGVUNIYOLUDJQOQVGXRCKEMFSSRRRVNZCJBOTBEVPXLTEGIEUVEPWANYRYXFPZAIGBFZSHRVHSWIQACCSXJFQYGSANIJBZKLAGHFQWXBJNLWHYWELTYMDOPGBYCPHEHKYMKWKDEDUHBRUGIXUTAVTQNKQGJYAITU");
    msg.custom.assign("OUQXVJIZNXCYUFHJYFDUIDOLIXPOEZSPXKWLXSOYOWQCEVLCDUTPQWKP");

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
    msg.setTimeStamp(0.6214495993746917);
    msg.setSource(32884U);
    msg.setSourceEntity(121U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(99U);
    msg.timeout = 50782U;
    msg.name.assign("VGZHUJRIJMYXVSOPMCLMSECWLDIRHQNKGPGBLTUCMIEIJDPXACMADLEDJSTXJZNOUYBZNFBYLBAOTANYKAEMWIEXRKCUBFVRXWSEVGHISFWBVGLTYPVWBXFYYWXGNWAOWRFPXSZFCNUAICZFQCKFTWDMAKMOEAPFORPQKPQSQNVIHRLQKNLZDMJLKZKXJNJFLRTHCYHOROHOXQDUASTJO");
    msg.custom.assign("WGYFNYWMPITSATMHCCUFQAIUNMCRDILHYKIFQWNWLKVKVKGIPRHLDWHOJHHPLAVXQUEJZVOKEDBNSLITYFOPRULHTCIMNMDSYPWRREDFBFNUQQAAEWSPRRDZIJPOCPJJWLVZMFOZQGTEVFTALBBYYGRSDJVSXWBSXTHZEVNRMGPFOSIXUUKISLMKOVHXVZJUGKEZBAZQYQAOBKBXYH");

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
    msg.setTimeStamp(0.42236071085714155);
    msg.setSource(15248U);
    msg.setSourceEntity(64U);
    msg.setDestination(21345U);
    msg.setDestinationEntity(215U);
    msg.timeout = 37209U;
    msg.name.assign("MPWQIUPYLTVOZCTHCYTIKXZZJUJIGUFSHQJUTCPSBVAFCPUELNDDVLCFYIBJRWXZNEYKJPMGAINMIPMJHBHEINMHKAAZOVAIGADVGBCGWFQNWEXSRMWKLRZEDRVTTZZXCIJYVAUJEOLXPKCRSOUFHRFYHGDAOBKGDNKTXYBBVUBOKEQ");
    msg.custom.assign("BHDHFIYIAIJZFTSACMIQJ");

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
    msg.setTimeStamp(0.41050485423012795);
    msg.setSource(37967U);
    msg.setSourceEntity(17U);
    msg.setDestination(16897U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.539565550300257;
    msg.lon = 0.35631681586208963;
    msg.z = 0.7469504010517835;
    msg.z_units = 214U;
    msg.speed = 0.9213338245884266;
    msg.speed_units = 167U;
    msg.start_time = 0.7650748336817694;
    msg.custom.assign("NFBUPNVPJKYQYQHOXMVCHHZUTBIDEFYZJINULATOOMBPNHAEZEHXHBWIGUXHRJPLYEICGRYUQI");

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
    msg.setTimeStamp(0.12946290019801698);
    msg.setSource(20275U);
    msg.setSourceEntity(199U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.20792426985168266;
    msg.lon = 0.2611618150075218;
    msg.z = 0.08208234725003116;
    msg.z_units = 36U;
    msg.speed = 0.2836605426494927;
    msg.speed_units = 216U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.04057556680319507;
    tmp_msg_0.y = 0.969166008625857;
    tmp_msg_0.z = 0.936297076241245;
    tmp_msg_0.t = 0.6019918379579263;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 3332U;
    tmp_msg_1.off_x = 0.32392741613977416;
    tmp_msg_1.off_y = 0.26042217688401137;
    tmp_msg_1.off_z = 0.02937393457940729;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.16734466480125498;
    msg.custom.assign("JYSUQLZARHATNXIREQBGXNBIKRQBZGDWCSJMPTEDTWMTMSUC");

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
    msg.setTimeStamp(0.31449112725354056);
    msg.setSource(50841U);
    msg.setSourceEntity(12U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.6872903914478844;
    msg.lon = 0.1710224733756025;
    msg.z = 0.45330297801934394;
    msg.z_units = 109U;
    msg.speed = 0.7243231022974072;
    msg.speed_units = 1U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.27136032636693797;
    tmp_msg_0.y = 0.7741820930704796;
    tmp_msg_0.z = 0.860233197132726;
    tmp_msg_0.t = 0.2394018283917242;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7790646571070213;
    msg.custom.assign("HXOUEFNXYJDSTFYXDJNHVSXBBQFZKCQRZPJAOIIOJNAAE");

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
    msg.setTimeStamp(0.03202863814129919);
    msg.setSource(1822U);
    msg.setSourceEntity(199U);
    msg.setDestination(51541U);
    msg.setDestinationEntity(77U);
    msg.vid = 3678U;
    msg.off_x = 0.1482576587964819;
    msg.off_y = 0.00037052231151746273;
    msg.off_z = 0.09639377741691946;

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
    msg.setTimeStamp(0.28524871983244304);
    msg.setSource(57562U);
    msg.setSourceEntity(217U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(187U);
    msg.vid = 41996U;
    msg.off_x = 0.13045634246088011;
    msg.off_y = 0.5456014321198676;
    msg.off_z = 0.4185445819887966;

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
    msg.setTimeStamp(0.5248988075213469);
    msg.setSource(64437U);
    msg.setSourceEntity(22U);
    msg.setDestination(32625U);
    msg.setDestinationEntity(28U);
    msg.vid = 47780U;
    msg.off_x = 0.6663680481137586;
    msg.off_y = 0.14036927309166036;
    msg.off_z = 0.05472136862459487;

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
    msg.setTimeStamp(0.8860546465773832);
    msg.setSource(51483U);
    msg.setSourceEntity(249U);
    msg.setDestination(6843U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.12567586098397365);
    msg.setSource(64117U);
    msg.setSourceEntity(32U);
    msg.setDestination(25221U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.04018132398030294);
    msg.setSource(7920U);
    msg.setSourceEntity(15U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.8102591611951778);
    msg.setSource(44705U);
    msg.setSourceEntity(95U);
    msg.setDestination(14936U);
    msg.setDestinationEntity(105U);
    msg.mid = 15577U;

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
    msg.setTimeStamp(0.5175270576895894);
    msg.setSource(51874U);
    msg.setSourceEntity(8U);
    msg.setDestination(48891U);
    msg.setDestinationEntity(49U);
    msg.mid = 59560U;

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
    msg.setTimeStamp(0.2719915764452012);
    msg.setSource(36325U);
    msg.setSourceEntity(173U);
    msg.setDestination(17513U);
    msg.setDestinationEntity(70U);
    msg.mid = 36594U;

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
    msg.setTimeStamp(0.061092746262985775);
    msg.setSource(8150U);
    msg.setSourceEntity(96U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(10U);
    msg.state = 64U;
    msg.eta = 28145U;
    msg.info.assign("ICQPOJZLRBVKCCYFANWPHZOICYEVHLLERJOQTXAAHTAEHRPKPAILQDXCTBTZMSJYALYGEYVDRLEBUDXDDIOJOIOIWAFYWBSZNVFPGSIDLCZRGKJEFVPZZBCMGJQWNAVMHCUCHIMZSELEUQQDKHKFMFFSVDPMTBMUNWXYRVQJKRFEWYKNMSOUMXVZXBQNRUTQEPGSDWWHBINPGUGMXSCKRVBTGOSX");

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
    msg.setTimeStamp(0.5689624767271756);
    msg.setSource(10545U);
    msg.setSourceEntity(14U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(251U);
    msg.state = 184U;
    msg.eta = 38816U;
    msg.info.assign("LRCWAUNTFBEWMUTPZPRECDEOLDSUORRPMLXDJQBUIKACNLCILDGLVWBXHHGOOSKNZORHEKAIKGGDMZJNHSCAXRYQDYJDGDQCLIXMPNVPIMUFTHVTRFJIWQXEWVULKADTADGHYMNYSWJBVMVXEUIZQPPMRPBZCCOEOZYKFYETPKZGPGYHSHIAAISQKUVOFFTVQBOQHEBKXWWLFTNTNKZYGYERORXFBJASJGMZNAUUJJBYVFWQQNCCLVTXM");

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
    msg.setTimeStamp(0.475893761128356);
    msg.setSource(4023U);
    msg.setSourceEntity(215U);
    msg.setDestination(33559U);
    msg.setDestinationEntity(232U);
    msg.state = 59U;
    msg.eta = 42131U;
    msg.info.assign("JBANAONJZYGRAVSEPOXEQFJLJIKDKEQLCVDQKBKXYVNPZQZOSVMUUSJSIPOTZLARIAULYZLOBBERKLQRFTDZZGVEZRHWBHNDHCKTMPEYTPEPKLQTYNNICDZFCOAWJXPAWXRHYRHWJBGFMNDXHKYFWPQSXRRSQMAYLLUBBFOICHKTPIRTJLEVSNQVWMCGJOMXNAHIUPEODBVWTCAUW");

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
    msg.setTimeStamp(0.7685264037625936);
    msg.setSource(50598U);
    msg.setSourceEntity(39U);
    msg.setDestination(4301U);
    msg.setDestinationEntity(192U);
    msg.system = 33793U;
    msg.duration = 38514U;
    msg.speed = 0.7170914693181257;
    msg.speed_units = 50U;
    msg.x = 0.2881635236664518;
    msg.y = 0.46904124342889875;
    msg.z = 0.5128580483813636;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.5694094071985082);
    msg.setSource(47470U);
    msg.setSourceEntity(220U);
    msg.setDestination(35869U);
    msg.setDestinationEntity(109U);
    msg.system = 40214U;
    msg.duration = 6193U;
    msg.speed = 0.034188492001957504;
    msg.speed_units = 103U;
    msg.x = 0.8466629819635916;
    msg.y = 0.1751033627573524;
    msg.z = 0.8387471935358106;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.25790671449083846);
    msg.setSource(14245U);
    msg.setSourceEntity(197U);
    msg.setDestination(28981U);
    msg.setDestinationEntity(199U);
    msg.system = 23332U;
    msg.duration = 25097U;
    msg.speed = 0.923616505881338;
    msg.speed_units = 21U;
    msg.x = 0.46451646404094515;
    msg.y = 0.8480464753808741;
    msg.z = 0.3911655328323409;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.261767960820254);
    msg.setSource(51251U);
    msg.setSourceEntity(113U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.8950104776229137;
    msg.lon = 0.20291633552653732;
    msg.speed = 0.18566213886002358;
    msg.speed_units = 122U;
    msg.duration = 33545U;
    msg.sys_a = 21143U;
    msg.sys_b = 754U;
    msg.move_threshold = 0.6888511713958008;

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
    msg.setTimeStamp(0.38642086533387787);
    msg.setSource(56536U);
    msg.setSourceEntity(154U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.03403043426670338;
    msg.lon = 0.6778581777507349;
    msg.speed = 0.1426129084686787;
    msg.speed_units = 12U;
    msg.duration = 3168U;
    msg.sys_a = 62694U;
    msg.sys_b = 58372U;
    msg.move_threshold = 0.8218233749089308;

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
    msg.setTimeStamp(0.3243009357448473);
    msg.setSource(7335U);
    msg.setSourceEntity(98U);
    msg.setDestination(20566U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.19197747169610324;
    msg.lon = 0.42927214162926597;
    msg.speed = 0.3660389391480928;
    msg.speed_units = 235U;
    msg.duration = 7001U;
    msg.sys_a = 33127U;
    msg.sys_b = 21175U;
    msg.move_threshold = 0.8677650023691588;

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
    msg.setTimeStamp(0.3325519992124911);
    msg.setSource(53090U);
    msg.setSourceEntity(97U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.7562666996769357;
    msg.lon = 0.7499441664810538;
    msg.z = 0.5083264947538393;
    msg.z_units = 132U;
    msg.speed = 0.6080391465599541;
    msg.speed_units = 247U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.842894553417715;
    tmp_msg_0.lon = 0.9761501501568546;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BDPHWFSTPNUVEDZSECSGMJQS");

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
    msg.setTimeStamp(0.44421953136866177);
    msg.setSource(28162U);
    msg.setSourceEntity(104U);
    msg.setDestination(3814U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.648127490057214;
    msg.lon = 0.6639699178939207;
    msg.z = 0.8085574405242495;
    msg.z_units = 236U;
    msg.speed = 0.4357760422922212;
    msg.speed_units = 115U;
    msg.custom.assign("VKOABKDGYTGXAYZYORSDIPONJHWEHFHYRIBAYOKFZQXQEDGVQNDSLBINELJNIBWTUYDMLAOGRAOAEASKONSDSCZQNCQAUQLWOBYQUHWXFJPXQNJFWEDEAWMRRUVEXRJHDFITEPPZIILEHRQSVNNVBDFGZKKSYKMVFDWVTVKJGYJMEHNCLTPKCGLMCOTXZLCSUMZSJF");

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
    msg.setTimeStamp(0.5042396737288803);
    msg.setSource(18167U);
    msg.setSourceEntity(248U);
    msg.setDestination(27903U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.816138891929991;
    msg.lon = 0.5997073416768486;
    msg.z = 0.2531237993074782;
    msg.z_units = 166U;
    msg.speed = 0.920313924866739;
    msg.speed_units = 72U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9733210633156353;
    tmp_msg_0.lon = 0.04192359192187023;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DYTXNWFTREXQJMQXUPPKANOXRGIJYVHEUASCDUTHYKNRTJWOWWFRHYCHZLNGCBZPQDCHZRCDXIFMWPDYGKVZZMJEPLIYWBOGINEI");

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
    msg.setTimeStamp(0.22030052076442763);
    msg.setSource(17575U);
    msg.setSourceEntity(11U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.007124868743345392;
    msg.lon = 0.6140760593288599;

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
    msg.setTimeStamp(0.7679230037046032);
    msg.setSource(37154U);
    msg.setSourceEntity(59U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.276475334025842;
    msg.lon = 0.9073075172236182;

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
    msg.setTimeStamp(0.355804704383913);
    msg.setSource(21338U);
    msg.setSourceEntity(20U);
    msg.setDestination(58239U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.33447211058086235;
    msg.lon = 0.14397669070994434;

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
    msg.setTimeStamp(0.35725874690084103);
    msg.setSource(32035U);
    msg.setSourceEntity(137U);
    msg.setDestination(1929U);
    msg.setDestinationEntity(147U);
    msg.timeout = 10788U;
    msg.lat = 0.8240064728290601;
    msg.lon = 0.060222240455927945;
    msg.z = 0.9611581435233485;
    msg.z_units = 136U;
    msg.pitch = 0.09885605424262212;
    msg.amplitude = 0.02324029471869249;
    msg.duration = 19496U;
    msg.speed = 0.29397731997562193;
    msg.speed_units = 95U;
    msg.radius = 0.9429075398485709;
    msg.direction = 88U;
    msg.custom.assign("LZOGKQZTNCCGVVRNCSUYADLIFRPAAJTNBIIVJDUGEHNRXWUKTMOZKFXHKSCOHSZFEHQJWEDAMYPTBSLRGIUBRTUNRRQRXTUVOBVWEXEWDIPUGWIHPQABUWZSPWOKAFQWNKLBILGJSNJHQMVJDSHXFZEZDXKHMQQHYRZANDBGWDEIAJPYWEYBZT");

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
    msg.setTimeStamp(0.6373310587483704);
    msg.setSource(39594U);
    msg.setSourceEntity(180U);
    msg.setDestination(53773U);
    msg.setDestinationEntity(109U);
    msg.timeout = 2714U;
    msg.lat = 0.6717038500583382;
    msg.lon = 0.004340092356952097;
    msg.z = 0.6611327996116059;
    msg.z_units = 233U;
    msg.pitch = 0.10102345473006613;
    msg.amplitude = 0.1679138561004967;
    msg.duration = 38460U;
    msg.speed = 0.11696988065142344;
    msg.speed_units = 209U;
    msg.radius = 0.16300881321668315;
    msg.direction = 73U;
    msg.custom.assign("ENWIGZPIEIVATUHORUJJRFKJGSDBHNNKYWJXWTZTTCNAOFOLQQFHXFTMDOFIHZHKXUDAIQZCUXSSZGQSMYOZGWGBTRDDVTXJUKCMKFIAQWNADSGAAPSMECEUQCWSZJFPYPXYDNHQTXVBIKZKSCJRLZDDEWLCVEOTABVRQQJWBWMZUNKXFHRFLMYIBVAPRSMFGQBPLGIYGXLYSEVEBJUROCBVOCKMLNJLYLHBKGMYUDNAUHOOMRXRENW");

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
    msg.setTimeStamp(0.6196632823300616);
    msg.setSource(18701U);
    msg.setSourceEntity(7U);
    msg.setDestination(49686U);
    msg.setDestinationEntity(222U);
    msg.timeout = 6245U;
    msg.lat = 0.3752732912847323;
    msg.lon = 0.7097507771301236;
    msg.z = 0.925140839056649;
    msg.z_units = 236U;
    msg.pitch = 0.46442979531061757;
    msg.amplitude = 0.20681417970843585;
    msg.duration = 5063U;
    msg.speed = 0.9223709551713076;
    msg.speed_units = 199U;
    msg.radius = 0.7961409858072612;
    msg.direction = 32U;
    msg.custom.assign("RNYSFCFTXEDONJKIPMPFIKDLYXQMIPMSSDYYLZHAMGTWDQOOJAWRLZFKKVMZAGZLPRTOLEVKKJNOHWWPRLYSTFUOSHGXJKUFYEAECCDDRTQCCULHUQAUAGZGJHVBHKXZSXWQIGFOXWXBVADNGJLTBWJEPEVNUCBIBGHBEKMOINQCHSQRXAGPREZATGMBQWJRQKLVXVICTZUXCFYORUNSFLVUPJMIITHWNVFESDMCZEZHNSUBBQOD");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.1600439213043069);
    msg.setSource(23701U);
    msg.setSourceEntity(142U);
    msg.setDestination(26839U);
    msg.setDestinationEntity(98U);
    msg.control_src = 65417U;
    msg.control_ent = 136U;
    msg.timeout = 0.023839370417839234;
    msg.loiter_radius = 0.7943676373412222;
    msg.altitude_interval = 0.8128336584160524;

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
    msg.setTimeStamp(0.39417916493714833);
    msg.setSource(49428U);
    msg.setSourceEntity(223U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(3U);
    msg.control_src = 37193U;
    msg.control_ent = 49U;
    msg.timeout = 0.03849736740810972;
    msg.loiter_radius = 0.012558902368926206;
    msg.altitude_interval = 0.37935404361835956;

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
    msg.setTimeStamp(0.2912035340578757);
    msg.setSource(51116U);
    msg.setSourceEntity(55U);
    msg.setDestination(14075U);
    msg.setDestinationEntity(188U);
    msg.control_src = 174U;
    msg.control_ent = 65U;
    msg.timeout = 0.43923398845676476;
    msg.loiter_radius = 0.9064029154721195;
    msg.altitude_interval = 0.08517072281741223;

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
    msg.setTimeStamp(0.38353430903189856);
    msg.setSource(52075U);
    msg.setSourceEntity(17U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(145U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9782904559791925;
    tmp_msg_0.speed_units = 165U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.26183334174911144;
    tmp_msg_1.z_units = 172U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1580593099291685;
    msg.lon = 0.9317673585510833;

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
    msg.setTimeStamp(0.5345873332125407);
    msg.setSource(36261U);
    msg.setSourceEntity(147U);
    msg.setDestination(42342U);
    msg.setDestinationEntity(28U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7699864971419657;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09746758926926524;
    tmp_msg_1.z_units = 107U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.10493072025347328;
    msg.lon = 0.7037726281438148;

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
    msg.setTimeStamp(0.37434087320467424);
    msg.setSource(60151U);
    msg.setSourceEntity(214U);
    msg.setDestination(25040U);
    msg.setDestinationEntity(240U);
    msg.flags = 131U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6317515906571021;
    tmp_msg_0.speed_units = 17U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3616018168564049;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3792304698473248;
    msg.lon = 0.9514167452711362;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.914479303189491);
    msg.setSource(56165U);
    msg.setSourceEntity(244U);
    msg.setDestination(62950U);
    msg.setDestinationEntity(132U);
    msg.op_mode = 246U;
    msg.error_count = 43U;
    msg.error_ents.assign("BHYWQMXTKCJLNZQTAAMVPYFVQTKVWJRYOJUIZOPKLBGEPHNZXSJHXOVVQNIWDMUBKDZDZSSCUVYWKZXXFGKTFAVUSCOSPGRXHPZZUJKFCZURANWRMAKISGLXDDMNCSIDXXNLRFQMYNIORS");
    msg.maneuver_type = 35237U;
    msg.maneuver_stime = 0.034613595679343856;
    msg.maneuver_eta = 26308U;
    msg.control_loops = 2504527917U;
    msg.flags = 202U;
    msg.last_error.assign("KCQQYJNTEUYIKJKIPFQWPXZWGKEHCWDCZATTORIZYVCJXYISAGAPGUOQQIBYAVNELJHVJELAAICBFCPBRCBZQWMLNOPHNRYKOBCMNNBYFVXGBTHDKGDROIUDFYLAYWECSJMTTTRGKMBFNOTHOMFPVMJXQVHSUILTWVNSDHIZUQRWZQWFSSGJLXIFMGYKHBO");
    msg.last_error_time = 0.5026987247877016;

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
    msg.setTimeStamp(0.8023580644063477);
    msg.setSource(59397U);
    msg.setSourceEntity(108U);
    msg.setDestination(64848U);
    msg.setDestinationEntity(83U);
    msg.op_mode = 124U;
    msg.error_count = 106U;
    msg.error_ents.assign("VMWXFWZCHFSJUBJQQXMULFVZBHYEVPTBHYXOIJACLBOR");
    msg.maneuver_type = 64358U;
    msg.maneuver_stime = 0.9992846035158194;
    msg.maneuver_eta = 38470U;
    msg.control_loops = 191790167U;
    msg.flags = 198U;
    msg.last_error.assign("IOSJCHNWKVYDLXJYFUTBTMUSUBTJEAYRVMWFKOTOQWCOEKSVCMCEFIDYVNESMNUKDHTFIYNGPWMYOBHALDLSMNHQGZAULBTBSESRNEKRDYOZJCJRIIZXXNKIAIAGKYWXYOHPOPGXJEDZGOOVFTQMHDLQGHBBCFWJNVSCBPLKAQMTVAJCHTWNMHPARZQIGSLZDZMVPD");
    msg.last_error_time = 0.7452914260377929;

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
    msg.setTimeStamp(0.16274327288977386);
    msg.setSource(9123U);
    msg.setSourceEntity(190U);
    msg.setDestination(18462U);
    msg.setDestinationEntity(44U);
    msg.op_mode = 117U;
    msg.error_count = 50U;
    msg.error_ents.assign("GLBNDTPVXDBYKTFVMDPRQYZPILHUMXZBTVAUOWYZNGWAXJMOMKFRUXDVFTVACHNOUMKJDAPFJZPLXYBHDSITDAQREVDEGVZFNLRPSQPMAYLARVBGTPI");
    msg.maneuver_type = 7184U;
    msg.maneuver_stime = 0.27178703660220094;
    msg.maneuver_eta = 34624U;
    msg.control_loops = 3720320334U;
    msg.flags = 183U;
    msg.last_error.assign("XLEMECHNRXFIAHPSPNMSOCRFTEPJHMNQFIHVYKYFGESTGJNTWQILCLXOQBAEHVQIZNJFKGMYRZOWPZQTDEEVJAKBOMDMXDUKLWUZAIYVLRSZIRPXCDLLUNPNIEQYC");
    msg.last_error_time = 0.0189781673489563;

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
    msg.setTimeStamp(0.19976711329167562);
    msg.setSource(19183U);
    msg.setSourceEntity(95U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(129U);
    msg.type = 36U;
    msg.request_id = 1134U;
    msg.command = 118U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.020228651462586567;
    tmp_msg_0.lon = 0.5451077690866756;
    tmp_msg_0.z = 0.4695555322875704;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.speed = 0.3253126064295878;
    tmp_msg_0.speed_units = 253U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.02869724713282895;
    tmp_tmp_msg_0_0.lon = 0.6140012739468881;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PBLXRVTJEXAUYDFDALPFBVSFKLBCJLOIDMFFQEURKKYNMCUKDCRICPHQWGSFHJRVPQLQG");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("PXJJCFKIPAFWAYJUBSQEQYYWBVTKDOYWIAYVUHHE");

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
    msg.setTimeStamp(0.7507906605368493);
    msg.setSource(22461U);
    msg.setSourceEntity(72U);
    msg.setDestination(50931U);
    msg.setDestinationEntity(68U);
    msg.type = 179U;
    msg.request_id = 19874U;
    msg.command = 168U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 21981U;
    tmp_msg_0.lat = 0.5872676810648861;
    tmp_msg_0.lon = 0.8770986805491697;
    tmp_msg_0.z = 0.0724982837805821;
    tmp_msg_0.z_units = 31U;
    tmp_msg_0.amplitude = 0.8644091757281791;
    tmp_msg_0.pitch = 0.5538340785247707;
    tmp_msg_0.speed = 0.2708990970895442;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.custom.assign("RZWNBSLRKXBQUDIQUSKIAWANHVUOZAUJQNXHPULKOGSWEGNDNDVMAFOOSXIQSAOIRNWXACMBBGGGYLUPEYZKRHTXMIIEJUYPHFJIQBDPLPWMVANIYMMGQMSFHHCEIWGBX");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("RDJMHFBPDSHDGQBCRCJYSIVAMCWSAFUOVZNIYLKBRXWJWLKTAJEGHAXNXGVOXVHUIWFKDPBOFGEPESMPYUTLBGTNFKZMOSDXXUPFCZPIKHIVJIYUTLHQHMNCXCOSALNDHYMAXPOWRVEK");

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
    msg.setTimeStamp(0.7318791550335945);
    msg.setSource(35299U);
    msg.setSourceEntity(122U);
    msg.setDestination(65075U);
    msg.setDestinationEntity(44U);
    msg.type = 67U;
    msg.request_id = 32847U;
    msg.command = 158U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 30687U;
    tmp_msg_0.lat = 0.4355348320362381;
    tmp_msg_0.lon = 0.025026221941397364;
    tmp_msg_0.z = 0.4006537108025291;
    tmp_msg_0.z_units = 202U;
    tmp_msg_0.speed = 0.5991353098278293;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.bearing = 0.0766453398799426;
    tmp_msg_0.cross_angle = 0.7636408463388156;
    tmp_msg_0.width = 0.4065122727919026;
    tmp_msg_0.length = 0.9228299869163382;
    tmp_msg_0.hstep = 0.4532840060963176;
    tmp_msg_0.coff = 45U;
    tmp_msg_0.alternation = 232U;
    tmp_msg_0.flags = 37U;
    tmp_msg_0.custom.assign("CENNRXXHUYZBNKVPPUISKRCUIDMFVYDPMYTGAZVVZMOBANMLYJJRSNPQQJCLUKQKYJQRO");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("RVQZRLODDISPJHMVGQVCFBZ");

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
    msg.setTimeStamp(0.4641171366126424);
    msg.setSource(974U);
    msg.setSourceEntity(220U);
    msg.setDestination(48435U);
    msg.setDestinationEntity(202U);
    msg.command = 219U;
    msg.entities.assign("NFXFPRQGUIXEVBDZFVBMZWTADIBQSWALPENOCCSNBQWAAVWBIJTPEEEELJJXJSGGGUZKLOHDVSCPDIRANZWPXTFVJCTHQDXOVJVHJICNSJDWZMIAHOKYKLPBLYIKXPUARGMROAZQORMTMIFLODGRBKFONTOAYKY");

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
    msg.setTimeStamp(0.7343199592967165);
    msg.setSource(11100U);
    msg.setSourceEntity(12U);
    msg.setDestination(42433U);
    msg.setDestinationEntity(114U);
    msg.command = 88U;
    msg.entities.assign("MCCWVZNPRFRDKUZQWXJSCUZHAYUECAGDVPHOXXKILVGBMWABCNBNJWHERJMVGBVTLXTMOSJWUWFPDCPLDOQHJAQGRQRLSHCSPCPTFORXGANKZHWEEKFRNIWDOLWTMGBEKAONAOFVZQGEPJUTBKZLNYGEH");

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
    msg.setTimeStamp(0.3053323411200142);
    msg.setSource(63436U);
    msg.setSourceEntity(41U);
    msg.setDestination(23852U);
    msg.setDestinationEntity(229U);
    msg.command = 103U;
    msg.entities.assign("QHBHWXJWEFYBDTRNDPYTFEKTHESBSMZXSIULURBPCWNEZJWUFTOEOMYYWILEURLRRZWXKIXZZCXSQARQHNWVZQQGBPGDRUIAACJHHYGKUUOFAIAAPYTFYCHMPJVZPGHNAHCSOOSXVXNSBQLCZVVNDFFMOXJLZG");

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
    msg.setTimeStamp(0.8626411567380892);
    msg.setSource(26298U);
    msg.setSourceEntity(100U);
    msg.setDestination(7094U);
    msg.setDestinationEntity(241U);
    msg.mcount = 197U;
    msg.mnames.assign("YOUVMGQNDFWIWRJCOKCORJEZPQLXFULIWKEQTCQFMLCDOTASRCNUMKPAAZTZOGIEZWMJPEBFBIKIVPCCQAXSSRSEDHVBVRGANYEYZRPGMHRWJKRDTGQMDLXLCJSVNHYEHZOHIBSBXUSHACPKNREYBDLMAMMBSQ");
    msg.ecount = 244U;
    msg.enames.assign("MYGOVXAFUDYSSXQMWVBGDTBUYLRCDLLKGIIABXRUAZQHXZAMTNMYEZHEABIBFERKERJKSBORANGXJUJJEQTNARQEHHVQEOYWCTNHFHZNPMBTOKOKJDTDGOSIPMCUKGZUBUGEWYRQWPHWTQAFDFLJWIIHWBFVSWIPOTMLNUZMCULHXA");
    msg.ccount = 139U;
    msg.cnames.assign("MSYECTAHZWIYFFYRJIJGDIEANQWZFTRXSJOLWFENHTBGBKTWFHRDOPGSCKQCVELYURBOPMOHWUQSPALOJRWNNVMZXQQZGKPKFWSKVAJVRRCNWRMQBBEHTLPSXIUPBNKXNDIZTAOALATHVDUKPJLBXYHNMOUWHQMCYQCGOJENCDSZMRZZTEIGJZJKXOHCITYWSUDPUQQRSVEVVXATFOYGIMDBPXILMVCHLBAGXUDJYUUNCSPFYDVMLIXLBZDAGF");
    msg.last_error.assign("TEPOOXORNQVWWUAFDLBXOONKHIBWCVWRTHNKGDBXFUODZAEBPYAHMPQOWVKYUEZFATDUEQMCWRMEAGHMSCITKBJSTTPLPFVVDEDMRNELFIKZWHGUOWLCRGSGMTFSVFVYUCZMGSGONUWMQYXPYDPESHZPRSFZGAOSJIHXNTLJIIAEJUAHXLYBAPXQHNBKJDXTIXLXVLQTEWRSNIGC");
    msg.last_error_time = 0.5302851692744043;

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
    msg.setTimeStamp(0.5045958904193726);
    msg.setSource(4360U);
    msg.setSourceEntity(60U);
    msg.setDestination(30526U);
    msg.setDestinationEntity(148U);
    msg.mcount = 131U;
    msg.mnames.assign("NHEVIOEUJTQNMILZLBNKYQCGQPXBPLUYOSNZPEQTIBNRMWDUDHXMBZULYEWTCKGDKSSXGSNUQCGSAQKVCEDFAYDMYRVRATRKBOJVXOGEHBXBZPBQDIHJAVWFRCWTUHBGPAGJDSFFHVWAOGOCIFVOUZFKGPPFZIEPJMARIUWJLRVQOPUYZHSPZAAUYFHNMCYEVHKIJKYM");
    msg.ecount = 216U;
    msg.enames.assign("VBFWOXCUPJNQTUFWTGKESQMEPKQLQPHWYOONNJGYWITFARMPDGFVFHXOTJHDLXLVJFBLWQNOTYNGEDEPLVSHHMMVCXRCIDTQKQCGJ");
    msg.ccount = 240U;
    msg.cnames.assign("LEFJZTDUDZGDMINVBTWCJACALHVBCBWMSWNTLZFTCPSHLEIMWUKKRPUBFETGGYQIQELIQMCOHLXTDTFOLJGRVPVVAOJSHYLGJPEXDPKQHJMRPFSIPSEYNNAFAZYIRXYUZANXXTIQEEKBJJEVLBGKSVZKTRNFVOXYDUAEOLO");
    msg.last_error.assign("TJQUKTWRLMKCZSKNAPLLQWBAGWRYEWYNVTAHUCHXWDFFZTOEPMYARMIKYSGCYJKHATXXIASHDAEZMTMVZLQUGSHOQZPUYENXBPYFMVXGFZSZYIVXFLKTDWJBZHAUSRTQGHISDJXXBHGTOPFIJNVLGMJXSNIPOBNIJWEANWZRHIQIYQPDLIDESBCPEZDQDSFKBTUCRPKDWOXFCRQUGNWYVLEBVGKUCDHACCVOOKJNVNORJPE");
    msg.last_error_time = 0.0786559338566517;

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
    msg.setTimeStamp(0.662629285475216);
    msg.setSource(57332U);
    msg.setSourceEntity(19U);
    msg.setDestination(12871U);
    msg.setDestinationEntity(189U);
    msg.mcount = 75U;
    msg.mnames.assign("AWREKZLKRPMFAWXBKTMJDJYBVNDHNCOOLCZZZWRUSMLIYZNOINSPIHTQHMAKCRXDUDWMFGDESLJMHWTVIBKCUMZTRGTJKFTAYQQLXSOVHPYIDQBNPFJZAOXGSNMJLZFGFWQGBVXZ");
    msg.ecount = 184U;
    msg.enames.assign("OYYRLJEXAETIMJWLTKPPEJHVYAIYDMGTEGIUACOQJQWNDNBKCZZRSUOZWLENFPTZVMRDULYCUIKDHFNMPKGTPYHUCBXQLQBDRZAFKOSSLNSSUXXEYMROLFFJSBRILYQZRCVGAQEHGQKAVWSLHNZVOTMXDBEKHVZOQSBCRUGANUPPGFWAJMUGRFTIVIQECJAXTWWMXSXMPNXJVGTSJZHWOJTEWZYHXNKKYODBDIMPCLPGVKDWOFRIH");
    msg.ccount = 89U;
    msg.cnames.assign("TSAWFRAUBHNMXRXJCEWDOJKOGTFIUYLKUEKAQOUAIKB");
    msg.last_error.assign("HZHONZDVEUVMHCBMDFNMLRPOQGUWNLOXQTGUFPEEWZXKGQUBQKFIXWRZGJNIYLAKQMQTGJKCAPWDBTHNDEINPCVGVIDPSWFKIJRIWEARHALXJYJKAQXCTCA");
    msg.last_error_time = 0.6288068383628785;

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
    msg.setTimeStamp(0.3376461148475931);
    msg.setSource(30485U);
    msg.setSourceEntity(197U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(245U);
    msg.mask = 216U;
    msg.max_depth = 0.47245770722963554;
    msg.min_altitude = 0.9191940996020767;
    msg.max_altitude = 0.75203012214598;
    msg.min_speed = 0.5396195085694718;
    msg.max_speed = 0.24185107527362315;
    msg.max_vrate = 0.5115175326255239;
    msg.lat = 0.014353267877534326;
    msg.lon = 0.7982118729235138;
    msg.orientation = 0.6802547877637793;
    msg.width = 0.048110225429948805;
    msg.length = 0.3002874063327574;

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
    msg.setTimeStamp(0.22182753376035103);
    msg.setSource(20224U);
    msg.setSourceEntity(152U);
    msg.setDestination(24938U);
    msg.setDestinationEntity(135U);
    msg.mask = 147U;
    msg.max_depth = 0.08057144260652516;
    msg.min_altitude = 0.9467640256159787;
    msg.max_altitude = 0.43145792426468343;
    msg.min_speed = 0.16663436340933724;
    msg.max_speed = 0.4848440005730992;
    msg.max_vrate = 0.4586221795205341;
    msg.lat = 0.5896851191682;
    msg.lon = 0.056901228817357374;
    msg.orientation = 0.5093848692407048;
    msg.width = 0.24957335242871315;
    msg.length = 0.5350508933537286;

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
    msg.setTimeStamp(0.8555219542047969);
    msg.setSource(6967U);
    msg.setSourceEntity(34U);
    msg.setDestination(12267U);
    msg.setDestinationEntity(181U);
    msg.mask = 93U;
    msg.max_depth = 0.8989419497668568;
    msg.min_altitude = 0.7759045277477014;
    msg.max_altitude = 0.14520130651498997;
    msg.min_speed = 0.7595314483079436;
    msg.max_speed = 0.1708154779908928;
    msg.max_vrate = 0.8336822634630348;
    msg.lat = 0.1801260636842581;
    msg.lon = 0.7139802488045498;
    msg.orientation = 0.7237745880834955;
    msg.width = 0.20114403848116635;
    msg.length = 0.9745759582878359;

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
    msg.setTimeStamp(0.8602448330496892);
    msg.setSource(44450U);
    msg.setSourceEntity(123U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.0018405521775578526);
    msg.setSource(46639U);
    msg.setSourceEntity(58U);
    msg.setDestination(57013U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.8215958888821244);
    msg.setSource(24440U);
    msg.setSourceEntity(31U);
    msg.setDestination(21653U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.8352128014091366);
    msg.setSource(7886U);
    msg.setSourceEntity(83U);
    msg.setDestination(3451U);
    msg.setDestinationEntity(95U);
    msg.duration = 31297U;

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
    msg.setTimeStamp(0.7048873859929474);
    msg.setSource(34667U);
    msg.setSourceEntity(20U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(162U);
    msg.duration = 11693U;

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
    msg.setTimeStamp(0.9856789580109083);
    msg.setSource(58908U);
    msg.setSourceEntity(155U);
    msg.setDestination(61081U);
    msg.setDestinationEntity(236U);
    msg.duration = 35581U;

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
    msg.setTimeStamp(0.39749860966503947);
    msg.setSource(17350U);
    msg.setSourceEntity(79U);
    msg.setDestination(9809U);
    msg.setDestinationEntity(224U);
    msg.enable = 234U;
    msg.mask = 2495080536U;

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
    msg.setTimeStamp(0.3398661076018591);
    msg.setSource(46891U);
    msg.setSourceEntity(30U);
    msg.setDestination(1117U);
    msg.setDestinationEntity(129U);
    msg.enable = 99U;
    msg.mask = 2143821423U;

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
    msg.setTimeStamp(0.02923461741281952);
    msg.setSource(46676U);
    msg.setSourceEntity(77U);
    msg.setDestination(0U);
    msg.setDestinationEntity(27U);
    msg.enable = 100U;
    msg.mask = 499228430U;

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
    msg.setTimeStamp(0.5565087850913076);
    msg.setSource(30737U);
    msg.setSourceEntity(216U);
    msg.setDestination(31471U);
    msg.setDestinationEntity(248U);
    msg.medium = 183U;

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
    msg.setTimeStamp(0.141555472274834);
    msg.setSource(24036U);
    msg.setSourceEntity(10U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(133U);
    msg.medium = 169U;

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
    msg.setTimeStamp(0.10044748562632588);
    msg.setSource(7073U);
    msg.setSourceEntity(97U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(152U);
    msg.medium = 110U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.28096664923072967);
    msg.setSource(38317U);
    msg.setSourceEntity(44U);
    msg.setDestination(4653U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.4631023646203317);
    msg.setSource(26967U);
    msg.setSourceEntity(138U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.8962162289858642);
    msg.setSource(46169U);
    msg.setSourceEntity(161U);
    msg.setDestination(42912U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.44263505853750784);
    msg.setSource(15086U);
    msg.setSourceEntity(29U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("TKOKSGMXNYHWGPQOWPOMHCTNPUZIHARMFKSOOZZEWAJTTSXZHECUIWWDHUCJQYLLVGDTGLNWYPNBZYIQESPJS");
    msg.description.assign("PPSALQNNZYMOAKTZHGZYKBVBHZHONRWFRDTLQEOQBCSMJIXASYWNVDZGKXTNBXDAIRFHGSKDUTJFPYUEAPAKHMXWXAUCSDNEIIYWWVUVPYDTCZWCGVBQJTXBXUDCHLBECJZIVNEAQBLXRLIHJSLQVOUDMFMMROXKVKBTPBGCCFLIGTDSQOOOCMWJRZGZFNJLXPNELYWPIWEFOGUMAYTTEKZVYELAFJGHJFJVSSQNPWDHMYMGQKPRURRORQU");
    msg.vnamespace.assign("PWHOVSFIEQUUFPPUMSIFWBGLIGJOPPZGCXLJOMBHMHEQALDTPZRSEFJLUFMLUBGPNNCRSREQCPUKDAWBZYRZRPXNYAGDCCHKWLWBMIJBEDHUENCANRKXEYYKSQFLCQIOJWTXOCZATVWIYKXRGTLLKOYYJOXAIZDSCREFXSONOMXTMVVDXWQFTPEHBVUCMIKVFHDHTRDSBJRZGZQUNENGADVAKNXKHMJNYZGQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JFKLSSHZUNBJAYEXLNYKEDLXWGBRSALBPXTMXIVOTBDJROCEDGLUAKDTAFXSHZRAENRGATURUCTULLUIZGKPPMJJQUVXVFROI");
    tmp_msg_0.value.assign("ANCDWFNOJE");
    tmp_msg_0.type = 224U;
    tmp_msg_0.access = 254U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EIYAEQDGFHRWKRGSBTGZCTBCKLLCSCVZUBNEFTKEJUCPYCHYAHASGQNHSSSDXBVWJDWONUFUXUKLRHPJTAGEYBMFOLDDYTGYUXJSTJQBGJMANAHXHLVJARZIQBIEBWEVQJZRQBKWNUITROOSLPZCMQVHJJORWQYXIGLPVNIKPOIXGDYYBXZCFQATERMRNSLMMZWNOPPMUFDYQVUWGOHFKMVEDWXEVZPIOKHKITMFUSANIVPTW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZPHLLMPWOCXVRKDPGRGJQISQUXYDXBOBNAHFRDXOFTJBZMNVAHUUFNWKEKZTZYKVVESSYQBDCIFQIFWLJVOJDYICLGCMXIYLUEUPRWKUVSHKWTNABNQAMEGOJKQAUMPNRJCGQPSLJZOCKLNVUHCRTIMLPFHXAREGHOHKOHQBMPNXUGZEVVODHNIGGAKMYTYJERZIIFYCTETATCDAJDBY");
    tmp_msg_1.dest_man.assign("ESQCRKFJJZMLNIRLSGOKPUYREXYZNUDEHDIVAIEVLJUPIJYILHKNCKTOAKDVPLMOGTMMTTNSAWOXPCVZDETXEQFUR");
    tmp_msg_1.conditions.assign("SZQXVAQKPTVYAOAEWYDTZWEFDBOALEHKYZIBJBEYKEZXOIXGVJKTNVXMYSCTVYRWFYMKCFQQJCIUQCCLNBLGODVXPOBEUYTCJNXEPXUIFOZHXFMKRURQPIGRGDHGLGUVPWJPDDHRCPWWWHRDSTDPAALQFUIQNKQZWUGEHWGJVNHQHNOBZISMSUPSMFBVL");
    IMC::DevDataBinary tmp_tmp_msg_1_0;
    const char tmp_tmp_tmp_msg_1_0_0[] = {-45, 28, -37, -53, 82, 16, -114, -76, -28, -91, -31, -11, -104, 26, -46, 99, -65, 10, -104, 119, -110, -19, 100, -28, -24, 118, -74, -108, 32, 52, 23, 115, -44, -108, -42, 124, -103, 44, 97, 99, 62, 66, 52, 36, -12, 7, 126, -117, -25, -50, -17, -79, 0, -7, 51, 107, 118, 74, -99, -96, -2, -50, 125, -122, 93, 93, -14, -86, -76, 72, 19, -118, -105, -2, -23, -105, 10, 19, -21, 5, -51, -51, 46, 107, 36, -7, 52, 40, -48, -56, 104, -70, -74, -95, -6, -62, 5, 33, 24, 10, -21, -4, 94, -15, -64, -91, -69, 2, -74, -74, 101, -6, -23, 116, 35, 111, -80, -2, -114, 35, 88, -26, -48, 111, -84, 72, 11, 21, 47, -1, -82, -120, -92, 12};
    tmp_tmp_msg_1_0.value.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::QueryEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("KZUXJWOHIQRQBFTODCCRGDKJXEVTRTZHWPMJSPNRAPBKCERBWJGQBJDVHHNHTLSIDYSXGBGVSKJDAFHVOWMZMZVEBENUCAKDYMYSIOSZZOFPYUUMOYWQLWRBIJVBQSINKXPMGOUGOTNMQPDZGHZCZYPTFLCIUCSAYVRVBQFHEILFKEPKOEMBYZFRXNAYCLEWXUWLHNXSW");
    tmp_msg_2.visibility.assign("UMTAUFAVCMEDWBHJDJZQVEOQZGKYHHUOPNOBHJWCHDKCWBYADTJXZCHSAFJLHZSMAMKRFFUILIDEKDRLGZBIMOINPEGFFQOBPIXUYBNCKDNVQMXNSSDRAAKWPYZLIEWSPQYULJPDQVWXOIVVPYZPVRLGTNJYZJHELSZWMGQQQOYJKB");
    tmp_msg_2.scope.assign("MOJOVBDJPEFAWYRTQRRZEBQAILCRLNRASOYDFPHOFBADPHJBPTJVZCLUKHKGXSOKGCWFOYD");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::MapFeature tmp_msg_3;
    tmp_msg_3.id.assign("NJRDKZCQIMRWUSVIAYZKLSEQOGUFEIUFLTMLOLBU");
    tmp_msg_3.feature_type = 54U;
    tmp_msg_3.rgb_red = 31U;
    tmp_msg_3.rgb_green = 41U;
    tmp_msg_3.rgb_blue = 63U;
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
    msg.setTimeStamp(0.7561393164914718);
    msg.setSource(3620U);
    msg.setSourceEntity(166U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("SLPNVWUSXMFBGKXQWNKBNHYNQPBXIETEUOHFYCGBHFEXNKCNCPBXYMAZOQHCDSJLXVDUTZSVYTMFJPRAGWAFVLFHKVMTUWURUEMOQDXHDWHWAVZUOLWUCIYRDTBIVRGFSTJEILHIHTMQ");
    msg.description.assign("EUIKMGOYMVVTNPUUFDKHVXWCZMLHQYRQATKJOECDSIZTTQGWEIOAFWSTGJXZHHKCQIKCDTTMKAXPCRDDZMGRJUEKGAIARVQWJOBRPHEFDSXYMWQLBJIDWZNRHBVEZOVPJRFLVAIAOJPJTILGSHUX");
    msg.vnamespace.assign("PRGEVFBTHWHYVLXUZYHGAUIWOSTCTDKLKTQJQAAPECFZLKWNCOJCPSUZRVAAFUYRMBZKWMZUCZJRNHDZHVIXBWDMLPUNOBOMGMYZBTDQHHVHDSPXWMFJISVRQFPOKKPZDIJXNLLITLCGKSYUOXGTMDFCVPAEFUYEZQTDNIWJMPFSGTGKHMDIVXCKIAEFRJBBCYXADMXGXQLJLGOWUYWEBJTRXJBGEPLHSFNVUBQONAKASRQVEINORY");
    msg.start_man_id.assign("TMTDZWSBWWMCHWOLFTSJZMBBCMQWINUDBGCARSHNXCWUXBCQPLUMSBUEDRNHETQDPALDKRYYFKSIYSUIEBATEAQNAFUCWMBO");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("UXFSCYSWPNUNCVIJNHGBPXVSAFSGVOLORIJNIKGKSRWSIFTPMDEYQKRMDOIWZWUJJKQMKJEGUXTSAOBINLROCIZQXHUWTYVVELJHXBNTQLLRDIBCSMRSHOZCGVLDMAZGTGWOJ");
    tmp_msg_0.dest_man.assign("TVIRMVYGTEAYNGATXOUFLHDMDGUROUZDEMTAYVCPCFFLNUNQUILBMPWXGHJIINDBEAGNVVCBOSLJYEOGJTPVYEXXEHFNQSQHP");
    tmp_msg_0.conditions.assign("KEIDKVALCBTBTVNXRLEHPZZLHCJKQQVOUNSFODYLCJRMJCPMBXJQEMIFAFGGIFYYWDGKTXPAUSZVBSUUAOIRFFBUUIMJPWKMZLEELVHVQIGPDK");
    msg.transitions.push_back(tmp_msg_0);
    IMC::CpuUsage tmp_msg_1;
    tmp_msg_1.value = 156U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9150764015832427);
    msg.setSource(8352U);
    msg.setSourceEntity(228U);
    msg.setDestination(44509U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("AWSCEKXTDENUBNBOBENKCKIIPUPBWGCYFJMGDYOIXZSJTHAUNGTURBQKEDDATTFLIMQBAEFPQLOHZEZRTYCRCVGWOGVMAGPQMEYFDWZPEGERORXLRQSLTDKYZSKMDRHFYH");
    msg.description.assign("NLHIKZKUAGUOVNGMKEZHPNVFVJGNBLETYJZUKCAXEPDFGTIDUMMIGCXTBSYRTYGPQEJLEUDNHYAJJKFKRBUHQHCP");
    msg.vnamespace.assign("KWDXUNCVTETBVIGVHQAJVHQKWTGEYMKWTMOIHJYWUDZMBQCHXKSHBNNZJPAODKQTWFYFOVDNGEQTRKNXLUVDPRYTDRDXZJFBRRGSJFAZZKQOAFYGUUMUCQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YQCGIPMPRCDYXUSBPRLNZASJVLKDPZBKKGWADCBAOTYALPEOXKQHJXLKZEHOOWZSGFDGQJORCLPCBSYZFGCCIWPKIFHEVZHDDIDGYJSTSGMOHUTTWNXKYYZVRKJNHSYMIDNFUJBDTFBATWQQMMJVUHGFLVTEQAIWMFMSNZSUAVWQPQGCLJTUEVNEVRBRZPRVPYEXOXTAJSFLRAORAXUEMYCIHFHUNBNWRKUO");
    tmp_msg_0.value.assign("JAYTWPSVVOHATFTSDEGKRMJXIZTBWHTGWTQEPXAHGARYYBBWUBJZWYXJUJKFOEZRFNENHBIBEZGDGMCFFPJOKAQCZSHLMWDVYAXPAWUFLVORJEOPPEUPTKOKWARXSMZFDYMLQYRIOOCLGDFRLYZDNMMDPA");
    tmp_msg_0.type = 117U;
    tmp_msg_0.access = 244U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SYCLWUFIJHPXTWBVISMGNMHGVXBALGFRSPRJJLWZSSLCBUESMXMOKIIDWCADODVLPFVHNLRFYAWKUSFCVRAQUGZLONYEXMNGYJENPBMXQZDOARAKFJTXDXIBNNDTDFMOJFZTLOSUBLCWOZAKRIKQMEVIDTPQHYETVNOKPDYQWYCAGTYPPSHHRKVI");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CAJDXPXNKCONNRDKHWJJEFRENPWBUXCPPOLJDLJZLAVJASIGIEWOKOHPSSENBZYCMSEQAQOJUCIOAZGMOMWSNQYAZKLICRTMJQAFZEZMJECKYBEYHIQXMGNWYRGLUFWLBRUQHZBEKTIQQVMWCWDFUYUSCVSNBOWWADRBTFMKFKFHRVGTPRLSXBBHVYIMIUYGUDFAQFDUDJXVHICDTDHZ");
    tmp_msg_1.dest_man.assign("IDVHZUJQYDNYIKEDRANJNJWAONLWBGSCAQFHBSPSRPZDSDMISBXWKAWTYXCMZBSOSTFEZHGPGNDLIJQKXMVOVPLJVVPZFGHGVBYPUEXFVSUKZHUWLIIAPFNZXPHFCCBVWAXIKPNDYBOYCMXEAKTENYMOEBBAOAGKFJYUMHSTKQLOILTHRFHTWVWNOCWJQOUKRGRTGZQGVRJLLSQQREQQFCIFLUNYLPC");
    tmp_msg_1.conditions.assign("SUVBGGCNZRCQNUJJUZLXSCBOILQMDVFAPAKXWNTWRTTUTJZVEGSIKGHHXVOTHHRJSQUDFAPYOYEBGRKGIEWDSFFTEKPPCMWITXXJNSTTZLOPSOUVOQDNCOYWHRRFCDPUDOSJIZWIWGWYDYOGLJAKEMDYML");
    IMC::DevDataText tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value.assign("ISZQFTODOJIJPAJFYMNRQXIUMHVFZJIAKDSLSECZUIQHMRNOLLFQJOSNHGKWVDWFMROTJOVNBRWNPOFCZATCGSQZVBGBCCLJNTLUDXXUWBYXYWRWD");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::TeleoperationDone tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.047508947775940835);
    msg.setSource(52447U);
    msg.setSourceEntity(215U);
    msg.setDestination(25629U);
    msg.setDestinationEntity(5U);
    msg.maneuver_id.assign("URERDVTIYDSOARAIJKUQRQFGQNTCTFVZONZVYHXUTPNDVRLFWXWFKVPNZKPUMBKXSJSDTINRGWVKQORWSECUGJPXRUGRWQEHEYMOSQSJDAFRPBLKIEQKMOAMBACUHYUSYMYOLFKIDXIBCUCIVZTYBOMQIJAWINNAMAGDQZFGPYYWDJBBGSXMEXOXZBLGZSFLHLMATPHEJBPLZXKJWFDUPYHGGHZCFLNHXJCJNELBNTQIAWZVSEPHVMLWCO");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 41235U;
    tmp_msg_0.name.assign("HHPBSCHPVIXRDLYXEQXGL");
    tmp_msg_0.custom.assign("RXZNVLKZNPZAAIYAJR");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeadingRate tmp_msg_1;
    tmp_msg_1.value = 0.28569258668127906;
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
    msg.setTimeStamp(0.8754986153556502);
    msg.setSource(59077U);
    msg.setSourceEntity(153U);
    msg.setDestination(22565U);
    msg.setDestinationEntity(18U);
    msg.maneuver_id.assign("PVGNZGPAYHCAHZJODTUPZRTTUDJUWGXGMBDOCSVGUFYHFFPSHLJCIBDAAFIRYWNKFOWAEJICOX");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 767U;
    tmp_msg_0.lat = 0.6795462033427211;
    tmp_msg_0.lon = 0.921071567169207;
    tmp_msg_0.z = 0.8522563134958363;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.013363989563167977;
    tmp_msg_0.speed_units = 114U;
    tmp_msg_0.custom.assign("VQHXMDUXFBCDQJIHOXIDMDCZJWDOLYGKQQBXIDNVNRFFGEOLFIWJMNTAGIPUQSNRAZJEDORUBMUYTZYEKMWHSLJZCMQXBZREHEEEWJDQSLLGAPBEWYTSICALSMGKTHFTRLSYCQOLHGPXLNQIINPIEHKSGZKWSRTVRXBMWUFTRMNZWROJZDCRHUPNVNOOKJCVFJYCXBYGUPMCDBHYAU");
    msg.data.set(tmp_msg_0);
    IMC::LblBeacon tmp_msg_1;
    tmp_msg_1.beacon.assign("OAONJONYNGPVUCLWVCCUJBNJZKLSKGOAIVKGUNKCESFDDGOFTUVXNXEEYLKPJNTMGFDVUFICXFVAWGBPEKAYMONSFQHAQPIBSDNEWQQQKXOIPBYRPRCJRTDSATTFZOAGYVCXIHUVXBILQZJAOKWYIWHBISLRYEWHHMUCSQRTBRTHSLLESVREGFMQMUMDYSQMDJMWYWXGVLFTAPJEHAOW");
    tmp_msg_1.lat = 0.9800251910143277;
    tmp_msg_1.lon = 0.20134240482817056;
    tmp_msg_1.depth = 0.6496684275319418;
    tmp_msg_1.query_channel = 248U;
    tmp_msg_1.reply_channel = 225U;
    tmp_msg_1.transponder_delay = 196U;
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
    msg.setTimeStamp(0.41782198682024485);
    msg.setSource(19339U);
    msg.setSourceEntity(156U);
    msg.setDestination(4812U);
    msg.setDestinationEntity(89U);
    msg.maneuver_id.assign("RMEYEXQMIBJOGSJDHNAECWXMUDWQDGUQMOAXYVPJTSMGDCSHNTBLPYWFTCIMPHBNRVFOKLDZLLIYLTSGGQLQGZVKVPDDKPNQRKHUACVASFCLWPZRRFTZLIARWSXNXNIKK");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 50061U;
    tmp_msg_0.lat = 0.0050997957673852845;
    tmp_msg_0.lon = 0.7121753430809245;
    tmp_msg_0.z = 0.7957071058870765;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.duration = 3109U;
    tmp_msg_0.speed = 0.08602607617636304;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.type = 81U;
    tmp_msg_0.radius = 0.941385850332361;
    tmp_msg_0.length = 0.8626762767377921;
    tmp_msg_0.bearing = 0.9792543481460518;
    tmp_msg_0.direction = 135U;
    tmp_msg_0.custom.assign("GFZSBFKJYXPHAXXIWQDFWWCDTHDBKKZWIOREJLJPMNNBBBCXRTCJPXUWYYDUOHJVAFOGVDHZKHFIRPTWZQFLEVGIOQQUKNGTHMOUDWLIVMNKJFQMVZRKZRJ");
    msg.data.set(tmp_msg_0);
    IMC::FollowReference tmp_msg_1;
    tmp_msg_1.control_src = 36480U;
    tmp_msg_1.control_ent = 76U;
    tmp_msg_1.timeout = 0.8191456343205389;
    tmp_msg_1.loiter_radius = 0.3625757825618656;
    tmp_msg_1.altitude_interval = 0.7074369023603805;
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
    msg.setTimeStamp(0.19541735334703092);
    msg.setSource(23001U);
    msg.setSourceEntity(102U);
    msg.setDestination(50859U);
    msg.setDestinationEntity(88U);
    msg.source_man.assign("WWTLSQIUSELXHOONKCOXWJIZFJYQZERFLQEUMKHVSUADZAVMOIULPABIACXWKHLFNOAZFTIEWRDMCPSGNTKTVUVXKSJOSBHGELDJD");
    msg.dest_man.assign("IIMBXHTZZQMGFVMIBJCPPHJHYSLVSVOBCYXCVZFDWWUEKQGENBWWXNOKLILCNAHBDXZEYNODMBCTSHFZGIXRUQMPTXJGP");
    msg.conditions.assign("EDPYKVZLSFBLKGRVDNEKYMMHRBVNRWKETA");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 107U;
    tmp_msg_0.time_remain = 0.23498326817883386;
    tmp_msg_0.sched_time = 0.5183705258289982;
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
    msg.setTimeStamp(0.013065799113288201);
    msg.setSource(64847U);
    msg.setSourceEntity(8U);
    msg.setDestination(49268U);
    msg.setDestinationEntity(1U);
    msg.source_man.assign("CGKSRXLJKWZAHOYLZMQWUBSLAEZJYPDWMGKUISANGAKUHEMMPOALIAGYCATHXLDAEPCIG");
    msg.dest_man.assign("CQHOLOPYNMLL");
    msg.conditions.assign("HNQOTCMWBCYPCPYNVTPTNJLDGKSUOESCRJDGFPQABX");

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
    msg.setTimeStamp(0.0038564077766790605);
    msg.setSource(3914U);
    msg.setSourceEntity(34U);
    msg.setDestination(10088U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("XCCWJGJXYUKRBBSTDCELNQQSSXGASKMKDIONMA");
    msg.dest_man.assign("QPWMFIRFEHUNNJYPNBWTPZSABRAJQAKZAOYWCDAVTUGSVSRIKVVGBCJBBXBCSOKTZOPXEULMGGVMTULITCKNZIQRNUELJEDITYYPBHURQJYEWYRSKRFKTFBWWDLFCMPFUSACUCBZPDGUMHOOPZJMXGLYPNWZNMLHQIEAQTKRIOLKZGDNGSWUXTJXLVLWYNGFMCVYCSEHLHAXGAHEPXDZHOYCFQIKMQQMDXNBJ");
    msg.conditions.assign("FVRLQTBFSWGJXJEMHTLWLKBAWARSURVKNJVMFQDQZQAKAHCSVL");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 117U;
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
    msg.setTimeStamp(0.5280681192916248);
    msg.setSource(42728U);
    msg.setSourceEntity(232U);
    msg.setDestination(15123U);
    msg.setDestinationEntity(73U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KLZCIQNUPIAZCRKRBMMFPXDBIBCDYITAKQLUNVKEZMTFVWNWCYIGLSSLQNNQHYCBOEBPSPRKRXENPQNVSWVQLTUKGYXLLJBOBVAHMUCIKDJZXGOVJSWMQ");
    tmp_msg_0.description.assign("LBZKPPOQMEQVOPKDEIITSWPKIGGYOWUIVCINOVGYDOBJGASQAKCPWIIGZRAJHSRLNCDYYKNHUEQSOPZQHKTSTWTTAFMJHCDBJVIITBSEGRBYWEHT");
    tmp_msg_0.vnamespace.assign("BFASTNLNRFVTSIZSENNIOLDDXSQQLQTHGIVRSVETHMFAVAZEXYJWELQAOGDKZPLFYCJYLBWYVASWWTOZRNHLAJTVOZUURUYXJXHNNNIORKHZXOCXBPWJWEIRMMVFSPOMPJPBLLMBMEPMBQAGQEFIMXBTANEUGRDBPMPCNUGGFHXKYOAKTH");
    tmp_msg_0.start_man_id.assign("EKWIOFXBSYHVNKZDRDVKUCLMWVNMHUADSWEPEUOHTOYJJFTJRTBSQREOMDHTNAQMDSFWNPDKKZJYFNBUQGCECKBUPXLOAGWRUJPQEWFHASZGCYXNLFCFSCGWARGIOKZNJVISHNQSTVIZGMQGDNAXPXZAQTQR");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("MIVXLIZRVQTSCJOSARCSFDVUTKJOHDJRGCJUVJKDLZINNNEBZZBDOAQGNHKTLNLDOKGFXXDTRHUYYHKJNZKEFBGBXPOQWVACVBKSGLPCCAMTHCNEUKDCGVQYGSWVMEBWMQEFEBVSJQYSLWBATHMWYPZSUUQHNUOZXLRWLRLGAYPWCNPBPXEWEZKTIMAZMXQOOGIOUJXXSMGEFAO");
    tmp_tmp_msg_0_0.dest_man.assign("QZFJOLIEGNXFOTSGAIURQJIXZEQEOXSEUMGBAFPCZYCGHPTBGUNZEAWVRIZJMSALQQGFNVFVLRDBJBORHXWKHDKBPTKAFZAK");
    tmp_tmp_msg_0_0.conditions.assign("EUGCSKXPTAIJLNSIXOJMAVBKQWMDPSFQQRUSVNPYGFBYHOKVJWETYLQZBKUJLMZIFFDMYMDZYIVODOBIZUZJXGNGTQZKYTAAKYLQDYJNLFCGRBRRJERGR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TeleoperationDone tmp_tmp_msg_0_1;
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
    msg.setTimeStamp(0.6296585663109154);
    msg.setSource(31285U);
    msg.setSourceEntity(156U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(1U);
    msg.command = 199U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JTXMIKDNGAWVSSDCNTIREUGESNUCSPYRADOCQJRSNTMGNQAOXEFFVDWIPVCFZYLHLOLGXFVUQEBEVHRYJQYIHJNB");
    tmp_msg_0.description.assign("VWEVXILDYCYXNTGEDLWLULIJKSOBSMWKLUMPUZDCPHMGGKFUXJVJKTQKOGDHNTROUMAJBZAPEWVBJMGXRPYZWCYNSREGHRURXPFTCROFBNDZUXKBBWOHSHOJWAILHHA");
    tmp_msg_0.vnamespace.assign("JLJIYYUBEOAPNGWOUGVOZLRTLUXOBYZJBCYPBVIMWZDXKLNFJYDSFQFINEISYRHUKIXZAQNWKARUXUJDCZMUWWTECYHMGHCKAOFUIVRHGGUOBQHAQWJFDRDUDXFFXTSKHPRLOYBHMWQENSNPMTGCAMIPQSTOBQNXAVGDQSCRHXZKPLTWABRXTVMPJEYMIGVHVREQZDAN");
    tmp_msg_0.start_man_id.assign("LXOMCWCSZTHAUWOKTGRMEMYSJBKUJKSSMQQBITDCEKFXMJQXOZPFKNWLXRCHRVLSXQVZJCETOCVBNTAHWPUFCHLUETPYTUHYISMOPRCQEZXIBXYEJNAWMIDWJGGNAVDZMRGHPQUCFHOFOUALTPVZWUFGAGRDBXJCRGQOFYHJLUMZSIRVAPDLYWYBKNEDYZIVBUNIOTVNXIEVRSNWBHSNQZGPIDQLSKNBAFJEDKAXYLMROFFKPZQPIHDG");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("LBNFDZAJHKJQSWMETF");
    tmp_tmp_msg_0_0.dest_man.assign("FTWEHZUOCKFJY");
    tmp_tmp_msg_0_0.conditions.assign("TBHPTRFERLNLGIPLJLZXIJABXJSQPFGIJWVVRTZKSRZXITEROHBFYAGCEAOP");
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.k = 0.07750989527142294;
    tmp_tmp_tmp_msg_0_0_0.m = 0.11353686470643864;
    tmp_tmp_tmp_msg_0_0_0.n = 0.7917165969497437;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5006625369911103);
    msg.setSource(57809U);
    msg.setSourceEntity(144U);
    msg.setDestination(23345U);
    msg.setDestinationEntity(105U);
    msg.command = 199U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EOKLEBXEWBSDLZNLTHMEQZPIDSDYFLHBUCSTXCMJYGZRRFIVAVKUCMKOHNPNYIVDHRGJZLAVEQVJBYUIQTLVWCFQJCXGUCQYXNZWEAZWYRUIZVJIQFBCOWNWAZABNXBWTNLGCPTULHHKHXGQIKVK");
    tmp_msg_0.description.assign("CTRTKMAOGCZHKELIGKGAITVMTEHTBQNKJCPWFRYXCVEFDHEDWWMYFEEXKIVXICSSEPMBMZUZLYGZBINHVQOLVMWPFBPUDYSFQAFGUBFXHVVZRICCJPWEBQUTDZVBOOPAXKDSGNOSTJILACMQEWGHCCUUYMPBGLRNIIUONVSPPKRJRQLFRSKMLNRQYXDQYONSGAHANLDXTWZSWUBAIMZXEWJYKOZLJOJQBJKNAOJHTRTFVJPYZSL");
    tmp_msg_0.vnamespace.assign("HGGREHCMOFBIFTAJZSBQEMDWQPXAYTGXYZEWDB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VYRDRDQHWVIQGSEZTDBYNECWZJWMXWHOXZLDFOQFZVDGKXIAOAAZBICFMPEJLGSGONPLYAQCUJFBHIJVULDJQJUUAIPSDCQCWCUREULGCTRQRBLAAONSLZSSYPGHTNCPVWZPYBAJAQMMMTBQKKSTVTOZCIMSTNNOKTKMPKYXTXFXUBLKRBUXERFHGIGVDEE");
    tmp_tmp_msg_0_0.value.assign("MPDGWYJOLVJFRURISYMFXTQCFLL");
    tmp_tmp_msg_0_0.type = 217U;
    tmp_tmp_msg_0_0.access = 41U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FOAENYNJNUEQLUTVOKVINQECGIWABLOHWDXCKMRKWWPYZDGGLNEJSCSZPAQPDZHWECXFJOGAPMPTHYPJSPZOPSSMWVWXTJRXQIHABOKZLD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ITZKRUBENMXFPYQFCVAQNSXOEZGNGBJAWAOCKPWZUDGYFZKEUJHWSFDANUQSSVJPZAIVKRTGOEGXTPLIZLPTTOBVMQCCPTVNLIUQBAPLKVMJHRHAQRRDEXBZWIFEYVWBTNITXFTHELKYCZHYVOUGCOCSFBNKRRIRNJJSHMQRTMBLPPGEYOGKQGAMRBZNWDWYXDXSDSFFHYDHKYHLSXCWLHIUMNODJMMDQASFIGUJOVPEVJMZLKLEUXI");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 373U;
    tmp_tmp_tmp_msg_0_1_0.flags = 35U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6539925966567796;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.027450252986287005;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.04101191439384333;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 235U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.2767015253312459;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 196U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.8757267510143586;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7914738540801752;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 187U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GKYTLFYCEKHVWPAHUMMWATCIUTFATESOZYIIEHDNYFJAFMCCOORRGEKXSDJNICGQFRNCZBTVBSNSOYBKZPIESXDOIUJAWFOOUZTSLMZQLKKXHQJGHJTWBLLWTPDJQXCINSEZRBXRZARFVDQIHWSZXGLGWIQRCTLLOLRPJHGGRAYBBAVVYGJBWDTEKAVHIUXNYCEMAU");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LblRangeAcceptance tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 220U;
    tmp_tmp_tmp_msg_0_1_1.range = 0.3534782321325931;
    tmp_tmp_tmp_msg_0_1_1.acceptance = 44U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::DesiredPath tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.start_lat = 0.37681706911662327;
    tmp_tmp_tmp_msg_0_1_2.start_lon = 0.8180101505266013;
    tmp_tmp_tmp_msg_0_1_2.start_z = 0.542891108156392;
    tmp_tmp_tmp_msg_0_1_2.start_z_units = 254U;
    tmp_tmp_tmp_msg_0_1_2.end_lat = 0.4133647301669221;
    tmp_tmp_tmp_msg_0_1_2.end_lon = 0.08775436182224183;
    tmp_tmp_tmp_msg_0_1_2.end_z = 0.1748534471252533;
    tmp_tmp_tmp_msg_0_1_2.end_z_units = 30U;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.29570887879399865;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 6U;
    tmp_tmp_tmp_msg_0_1_2.lradius = 0.6231468696047577;
    tmp_tmp_tmp_msg_0_1_2.flags = 154U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("DGAWVEOBVETNTVXCFWZLQPRDPHQNFMWUGOTIWPEIDGWIQIWXTUQMQBKRUWUHKCUZEFYPFBPFLFHSYZPNHRWZLRVKNKEIFMMXPOPNKMTRBXTZJIQDSAGAHJVYGCOQHYCRPHHGFIONCVITBBCUYYSZVSJUCRTXYLAYDOMBFUBGUAYZEXCJRTWAEOLELSHSNIINEKGDPXNNAL");
    tmp_tmp_msg_0_2.dest_man.assign("FDXCXZSVWJUWMVXSLEOUJOBTFAWTXATGVWASIAAVAKQCAVAGNJZOBYTCYLHODEZNQGXTPKQHUTEFUXLQRGIHZEQLMIHNPFYMYAUTBFIKIJODXRREWHMHTITCEQWPDCKUVELOPNFJVYLMMHCLRGKVBYEXJVUZOQCWZBIOSSBNVGNHFPHRCMJB");
    tmp_tmp_msg_0_2.conditions.assign("MAHSCPZVTBTKXEZRRJKCLYNDNZRAWRWQOIPTUADNIOQARHXWVIYEENGKGUUZMLGGDHSGKJDJHRSALEVSJQTVJRDXMZXMOYZVDEREYTENOLBWCLAZPDBUYRPKUXFPCXHOFIWYSOSECMSXHBMOQKZGTTPVYCFWJNTAHNNILHFIBNFVCKXDK");
    IMC::SetEntityParameters tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("IHUWFJWBEDHYNFFCC");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.3311212005269696);
    msg.setSource(49384U);
    msg.setSourceEntity(89U);
    msg.setDestination(62286U);
    msg.setDestinationEntity(231U);
    msg.state = 110U;
    msg.plan_id.assign("QNFTSRFJYRQCYVBXQBTQHLTCMZEDEHYWOYSGVLYECPHTEEJYKBJMKGGMNLEUTDKGZHKASLBFUQCVCOHXJROHFXPYYJLGUHDP");
    msg.comm_level = 9U;

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
    msg.setTimeStamp(0.39411423851896554);
    msg.setSource(15531U);
    msg.setSourceEntity(204U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(94U);
    msg.state = 121U;
    msg.plan_id.assign("TBTEHAHQHXDKIZSWDJAASLSXFVWGFEAZPSRUHHMFXSNTWWRUTBYORMREZTEZKCVBUBUJXZHVPUUPMDNSRUDHGWPAEFMSJTLSUFYGVVJYRVPQJIHRQQVITJJQZVMRCMZXPTO");
    msg.comm_level = 173U;

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
    msg.setTimeStamp(0.263848808883426);
    msg.setSource(46464U);
    msg.setSourceEntity(227U);
    msg.setDestination(5790U);
    msg.setDestinationEntity(69U);
    msg.state = 202U;
    msg.plan_id.assign("QWXHAXKTQDAXXNWJZQXUSHXVGWDIHADPTUSFUGXNLREKZBSFANBKJAJLHBZVSPGEVHZFYIRUOULDQTJWCN");
    msg.comm_level = 139U;

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
    msg.setTimeStamp(0.6638296820119531);
    msg.setSource(64773U);
    msg.setSourceEntity(90U);
    msg.setDestination(55875U);
    msg.setDestinationEntity(74U);
    msg.type = 72U;
    msg.op = 43U;
    msg.request_id = 38616U;
    msg.plan_id.assign("ZQXUWEBOBVMNOCADJKPLAFAKDSDLJAEYGYJRNCMDAZDVWHGOXSQBYMGCYHMNYLUUUNTTJCUBTCNQYGRBLAHWMTXTTVQISRXPXBOWDRIBVWRKUKCZGMXDHOZOFJEZQXUPVHFWYQGSEKPVGXOZYBIHGEZJPWMEMVRIERSJMUFHHKFLSCOBIJKLLPAHZULXWIVADBOIFHTNNZWQDKVSMUDVCJOINAISF");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 0U;
    tmp_msg_0.range = 0.18322384063500874;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FSEJZPIOKUWHLIQBVDTTHPTFFGJURQPRPGLREDYGZXVCMOEJWJJMNRQOKZXEPLKBEDFOQWDCHVUXYYGLSCBZBZPUYEBPTXVISRQCMAOMKFAJUGCVWGIESDOFQMAIAQGVXWYUOSLHAHNISITCJLTJNIBANJXIYKAYZDJLBUCSEFV");

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
    msg.setTimeStamp(0.3844896162431056);
    msg.setSource(25702U);
    msg.setSourceEntity(45U);
    msg.setDestination(45146U);
    msg.setDestinationEntity(184U);
    msg.type = 135U;
    msg.op = 21U;
    msg.request_id = 6842U;
    msg.plan_id.assign("PGSLMOKMJAZVTKBHBKFAEDKOURSRBAJNBVDWFEBHXISPPRBNFCXSXJDJENUULLGECZVPWGLEPQQINRSQZPOTOMQWALWINMVXJQOTELATUDAZVCZQOTRCCISAVBBYW");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("VAHIUKFFNIPQZTSVQWBKIATYPLTXNGHULHCKMWDUZFCZSQGSXJWRXPMNCXCDMKHDYQYPJABBSTVCGYDBEPZKNKORPRNUMOOQIDYEWMYXSGDLKXJRNTFHEQQCMUKVFOHVBFUINTHKIOCUOTRGMXUPGSDVJECPYOLDLGHLZMZOFEAAOREYSNIGFSQXPCIGJBVGVXATWAF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EETDEPNMACZRCCLMFWSQDASXWBDTERKDAQHSYFSJENBVNHEQOOKODMMXKXFGZE");

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
    msg.setTimeStamp(0.48951993654048453);
    msg.setSource(35874U);
    msg.setSourceEntity(113U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(161U);
    msg.type = 92U;
    msg.op = 81U;
    msg.request_id = 20385U;
    msg.plan_id.assign("LUXVFEJEPEVKKIQCJICSBOUEIXWGHCUAIBLAGZGUVGOHWNMOEQGDTPBBTBSCEMWSQHNSDYFJUYQNBWKOYRORUVWJCSXNNCDHRWAVKRZGG");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JOYZPRYPIABINSWZNEOPSASNTHOKKSYGOWKPFWWEEGIFXHNVRUFTWPLMFXXRMKKGJADDYWAOYUVXQWJZMIBUELCTIPYTLSOQQEFXHTRYQCKFTTNPUZBEHOWANWSWDDACOYHDOGVOLYUVEZLNXRLCHPCQGLQTRELFKVQICD");
    tmp_msg_0.description.assign("NOVGMELSZSNDTRBTPMRGXOHLUOLU");
    tmp_msg_0.vnamespace.assign("MRLGMOBMWSMVVNDDTFDYIQLY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MWSHIRCEXPIIDGMQKVOWJEUYUAXFGYGDRQDU");
    tmp_tmp_msg_0_0.value.assign("IWSSVVGBNAWCMXDVTUSETOMMYTDWFSABKRGTWDGJKRCOKVSYPLQXQVDLHZGAJPGLJHRXQMESURGKXZFGLQLETNYKTBIBNCOUMLAEYFYWGXDOHNHHEPPNNXOYJNJGPTCULXRCURBPRZUWQJPJNUSQDZKVOYTWZUBHUCYHXFJQQBC");
    tmp_tmp_msg_0_0.type = 97U;
    tmp_tmp_msg_0_0.access = 116U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JDJMDFUTEXIVJKSUKGBEBKAKGIOHPVQZGOIAEHTLVKZCUNLUVJZRTQCQVLBYSDRJXNAYHNWUZGLBS");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DXHJVXSNEDLOPHLAUJBEXSNJUIJMORCF");
    tmp_tmp_msg_0_1.dest_man.assign("QWYQSBBFOQJNJEZSUFSGULAHTVJVYPUESXGMDVZUKODMXOPJYDHSASMTHDZVJCITMFTZNHKCOOKMNIMAUNLIZUJAWAPSBGUGPEJXVQKXJZVTLLKNVVRZSXROWOLVCRGDERYOMFWDEOPYLRSCHYQHQCWVJPAGDEWSILCWEARGKJDTZFYIUNGTCBKBAYNHINLQNMCMPAUIWWGTQPYNLL");
    tmp_tmp_msg_0_1.conditions.assign("FAOSDNJREKFJCJOITQZIAKSDSBMHBTHOCFPVVOLDHCPLXUMDULIGBUFTEHYNUJAMXXWYUXUBNACUCIRLOEUXCKEURVGRSBHYYNOADBPVWTSGLWYZPQHRFZGEXWFKVPSJDWYQLQCDPSJZO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryEntityState tmp_tmp_msg_0_2;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HYVMDEZWNXCLOYLUBSQWFZFDKGHDJOBQEWJYEKELLJCJYCCKYJQSNNOXNQIMVVZVQZTFOBBUURXWEAGNJCJUALOJFEVGLGFIRPALQ");

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
    msg.setTimeStamp(0.2411105860595789);
    msg.setSource(58228U);
    msg.setSourceEntity(131U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(127U);
    msg.plan_count = 47496U;
    msg.plan_size = 409110607U;
    msg.change_time = 0.9260692425409532;
    msg.change_sid = 42004U;
    msg.change_sname.assign("YIANGWWNNGEZBIAKSKDOWMRVTDLYWGIGWGPRAVROUTBHWGYTYSSESMVVTZBYBQQBOLEPAJMSLJOCDQXCPAEPJNFNAHELRWKSWQKGJVIAZCERLHDCDTCHIFKRIEGCKPQEUXPFDHXXLUCYSTXNZTDUZJLZOEMDMSCZNQJNVZKFVPRZARXZYMXYJXFDUHPHHBCWACIJNXU");
    const char tmp_msg_0[] = {-8, -79, 83, 15, -34, 90, 82, 58, -80, -90, 38, -25, 11, -68, 124, -33, 24, 81, 61, -78, -123, -30, -95, -70, -68, -128, 46, -83, -67, 44, 51, -73, 47, 63, -20, -26, 50, 32, 120, 103, -111, -103, -43, -47, 63, -54, -50, 99, 59, -122, 122, -113, 2, 5, 10, 33, 20, -21, -109, 0, 25, 86, -49, 44, -53, -47, -38, 24, -70, -37, 49, -1, 53, -18, 102, -79, -49, 26, 117, -78, 64, -108, 0, -20, 126, 54, 124, 85, 58, -85, -63, 98, 53, -105, 20, 122, -103, 71, 110, 3, -79, -99, -122, -75, -62, -71, -9, -59, 33, -48, -51, 119, 38, -56, -75, 74, 6, -38, 50, -5, 108, 108, -64, 23, 78, 108, 87, -39, 77, 5, 77, -84, -128, 106, 105, -80, -94, -125, -91, -88, -38, -58, 54, 2, 73, -117, -70, -68, 16, -77, 63, -38, -86, -75, -123, 31, 96, 68, 20, -102, 82, -80, 60, -19, 121, 111, -68, 98, -128, 52, -25, 92, 91, -31, -77, 84, 104, 125, 53, -17, 53, -84, 16, -104, -128, -56, -47, -119, -128, -80, 107};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HMICVPIUGDJUMPSJOFDJXVMEEPPSATQGMZHBGSEOVOZIWGVDRXXMRLQEDBAWGZUIOBYZXRVTOAQDAQTDAKLSWEAPECGSJFWOIUYNYSKJYDNBQNECBRRBFQFTYVIVWHZFMCLXTPDIKXTXSWQCTMTRDVFEHNKAPMKHNPEGGLZOUZWBRTVSMFYJKOGPZZLUWYANHXUNIWGFJFBNNHUUJHCYCZREJYAQRAJOBQKBCF");
    tmp_msg_1.plan_size = 11884U;
    tmp_msg_1.change_time = 0.5292737488660069;
    tmp_msg_1.change_sid = 59527U;
    tmp_msg_1.change_sname.assign("IASXAOMUOOPGHDYNLFORIAGMCMLVEGACQCCQUQILFZDKKQWFBHMDQFPOJLBJEQMIYNYXTXAUDEAXXUJZZJBRBVTGTZECNPTPHKWDJNUIRIZSWRZWNURCNPXXMVTDJAYJDFPMVBLRSBHOOHISYLYKJMIZCGQWUFPCKHPLRNUQGXQBGVXJSFVVEVYAYHO");
    const char tmp_tmp_msg_1_0[] = {61, -17, 101, -97, 124, -70, 126, 36, 41, -20, -72, -7, 73, 38, -7, -21, 84, -16, 83, 52, 74, 98, -41, -38, -22, -120, -98, -99, 30, -43, 12, 13, 35, -13, -125, 3, -30, 84, 6, 29, -110, -53, -39, -56, -18, 125, -32, -110, 39, -2, -127, 111, -102, -90, 118, 75, -43, -28, -6, 105, -76, -74, -93, -124, 102, -103, 80, 43, 59, -86, 35, -38, -92, 66, 58, 101, 87, 69, 51, -87, 125, -64, 4, 67, 39, 42, 96, -7, -83, 55, 21, 85, -124, -111, 72, 25, -52, -21, 108, -37, -64, 44, -57, 14, 108, 14, -99, -86, 51, -12, -21, 12, -32, -99, 94, 7, 39, -126, 74, 116, -32, 3, -23, -70, 76, 37, -85, 33, -65, 78, 73, -95, -100, -82, -52, 3, 60, -56};
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
    msg.setTimeStamp(0.9491127419290644);
    msg.setSource(49643U);
    msg.setSourceEntity(116U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(15U);
    msg.plan_count = 46409U;
    msg.plan_size = 4084409113U;
    msg.change_time = 0.9882770909959917;
    msg.change_sid = 32452U;
    msg.change_sname.assign("MTSHXOBYXDNWZVJDROHBSFUQVPDTGKWFEMSYABEBDPJZUPLSCKGRFTRHNQWYCWBAZZPPGUJOKEXUFCYIYOESWUSVGNSHDCHENNRWTMQNLYNJLBPHCWAAZAIKRHKSUKRGEFKGRBIHAXLZEOUJXVMQOLKQDAGDNOLJCNLFUDDVPULQJRLBTZIMAWKYTZQMSWWXIHGJZTQMXPLPVITOMKVIICZUYCNXAIVFDOGSPXQTHYIEYVCFRGVQXJEJBO");
    const char tmp_msg_0[] = {-61, -26, 95, -77, -115, -6, -80, -84, -27, 72, 4, 45, -49, 124, -89, -87, 62, 4, -86, 67, -57, -17, -122, -124, 117, 19, 13, -59, 121, -51, 56, 73, -82, 85, 93, 57, -90, 11, 106, 115, -18, -7, -27, 77, 77, -83, 104, 39, -100, -97, -9, -44, 57, 122, -3, -127, -75, -29, -9, 122, 90, -33, -36, -97, -38, -124, 3, 124, -90, -67, -4, 49, 54, 27, 65, 32, 46, -110, 104, 93, 36, 46, -1, -23, -59, 106, 30, -112, -30, 1, -94, 118, -33, -36, -6, -63, -50, -92, -12, 21, -102, -16, 27, -106, -96, 42, 92, -16, 115, 112, 80, -104, 18, 114, 36, -112, -14, 100, 21, -84, 91, -128, 18, 25, -116, -19, 101, -79, 126, -42, 87, 114, -126, 76, -46, 69, 115, 104, 49, -6, -124, 120, -125, -94, -37, 102, -51, -3, -91, 97, -1, 117, 17, 20, -78, -61, 74, 54, 118, -38, 61, 112, 30, 115, -104};
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
    msg.setTimeStamp(0.043029020992106815);
    msg.setSource(18518U);
    msg.setSourceEntity(18U);
    msg.setDestination(3560U);
    msg.setDestinationEntity(125U);
    msg.plan_count = 23446U;
    msg.plan_size = 4137840990U;
    msg.change_time = 0.34287156010435615;
    msg.change_sid = 28721U;
    msg.change_sname.assign("FZBVILSVJVICWDYXEQIDHQVBLTLAPVKITRSOBVQJTHQSZPCIURKZOPDAKDWKJJSURQESHPZBNCPOXFKFFFKBEYLBMDFMKSSLUWNICIDRGXNMGQHYSRIXEDQMGHHAAHWGXGAOLGHZWGSHZBTRMGSJDFMYEQPIJTEJYRCWZCFKMCOYWVMYXBALUMUAJYCFVCNTPAIYUPDNOBXRWNLUTZUEJLOGRWQTMLZVNTUXANABDNPOWZNXVX");
    const char tmp_msg_0[] = {122, 87, 61, -99, 63, 99, 24, 71, 46, 40, 109, 30, 45, -72, -63, 25, 35, -92, -35, -107, 38, 40, 126, 19, 65, -26, 102, 40, 21, -48, -44, -64, 19, -3, -105, -117, -75, -86, -121, 126, -33, 67, 126, -16, 82, 9, 108, -107, -124, 90, 110, 106, 55, 66, -26, 9, 69, 107, 50, -74, 6, -117, -93, -16, -58, -103, 51, -17, -111, -63, -90, 110, -127, -121, -42, -39, 123, -9, -19, 14, -121, 112, 18, 47, 39, -4, -39, -65, -35, 105, 12, 91, 18, 81, -105, -81, 24, 107, 115, 59, 57, 8, 98, 60, -126, -12, -6, -88, -100, -51, -20, -103, -74, -82, -33, -46, 113, -111, -87, 29, -18, -99, 118, 72, 115, -54, 123, -22, -70, -3, -44, -34, 6, -28, 89, 102, 59, -9, -87, -104, 122, 96, -40, -45, 34, -41, 25, 95, -25, 31, 53, 111, 2, -33, -53, -111, -89, 2, -82, 31, -53, -128, -112, 88, -57, -93, -43, -101, 100, 70, 24, -98, 5, -12, -36, -41, 70, -31, -61, -24, -17, -40, -117, -33, -28, 118, 63, 125, -42, -14, 76, -62, 50, -126, 70, -82, -49, -86, -54, 72, 12, 122, -99, 60, -121, -107, -112, -15, 46, -77, -5, -62, 52, 15, -84, -99, 42, -109, -44, 46, -105, 12, 126, 6, -14, -123, -124, 119, -80, -66, -81, 63, -93, 47, -98, 62, 80, -67, -82, -126, -54};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GCTCVGCNXXXRMFKGCZPAUSUUPPZWSACHTVQJGMMXBQUZVRVHSIVENENDIGRWAAMPPDQHDHEYLJVBOHANBPNWQXOVFQTCKHNSEYUIEVYZUKHKDDOLZLFOSMKWBJOJVLKOTHPYRINTECZMFZTTDGZPFJTM");
    tmp_msg_1.plan_size = 23410U;
    tmp_msg_1.change_time = 0.31188217127688533;
    tmp_msg_1.change_sid = 60744U;
    tmp_msg_1.change_sname.assign("CRCMHRSCBMGGEFIQLIXXPKNAHJCJDLDLGOSKIGOSEDMXDEKBAVPWAALKRAVYFPIUFJCUHPUROKOWZURPILLLWJRQNZOGNZUULTSBEZIPEUTNFDDFLBQBUN");
    const char tmp_tmp_msg_1_0[] = {81, -24, -61, 40, -45, -14, -33, 80, -78, 22, -76, 123, -91, -37, -41, 99, 110, 113, -64, 69, 11, 50, -18, -112, 73, -117, -108, 96, 7, -95, -49, -43, -110, 29, -112, -115, -112, 21, 11, -98, -92, -3, 117, -90, -2, 15, -123, 2, -94, -40, -79, -111, -71, 59, 11, 98, 42, 25, -92, 103, -101, -5, -53, -106, -5, -11, 117, -83, -2, -90, -53, -36, 20, -64, 82, 6, -16, -4, 48, -123, -78, 108, 5, -76, 14, 92, -100, 59, -56, 34, 45, 109, -15, -111, -107, 58, 8, -24, 57, -24, -53, -118, 117, 84, -87, 66, -52, -54, 64, -24, 50, -83, 30, 71, -46, 82, 80, -59, -55, -96, 74, 107, -69, -117, 86, 30, 74, 122, 20, 88, 99, 83, -120, 121, 97, -121, -8, 119, -18, -94, 115, -47, 62, -116, 26, -109, -56, -95, -111, -73, -93, 57, -49, 122, 117, 6, 59, -80, 76, -15, 21, -107, -1, 84, -1, -19, -61, 40, -51, -24, 67, -43, -107, -36, 48, -111, 65, -57, -120, 9, 38, -93, -50, 60, 125, -31, 96, -90, 30, -69, 1, 16, 126, 124, -80, 97, 87, -38};
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
    msg.setTimeStamp(0.6527118547139203);
    msg.setSource(64934U);
    msg.setSourceEntity(146U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("JGAXJVFFLRUAOBAHCQLZEOBSBJAGLN");
    msg.plan_size = 9929U;
    msg.change_time = 0.8414176452531056;
    msg.change_sid = 8415U;
    msg.change_sname.assign("FWOUCHMMAEHRGPDEOQIKZCCALWDNZBNHUXRWTZKBSLZKNDNESPZYFQXPXJYBKLIQTZPGRFQRBUSEKSZPOMWGOAUDFDYNGQGWRZKYASJXPWKAMNEPQDHLYARCMFYOUBCGYIJYCMWVXKINILDBUPHVHVUITTOJCLMCJOFNGKJPOVHXLTVGQFPOLXVVEVIXLNIEGEEAXDSHEATAFRFYCDZCIJJTVTQXBBSKRSBMDUHWOQJTUTSRMGQLJUYM");
    const char tmp_msg_0[] = {-77, 10, 31, 17, 119, -69, -125, 82, -19, 95, 114, -26, 87, 9, -128, -3, 25, 3, -28, 37, 21};
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
    msg.setTimeStamp(0.16304190308264066);
    msg.setSource(63387U);
    msg.setSourceEntity(135U);
    msg.setDestination(54154U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("BOHXVZRGAUAMTORAOCXYZAWFAMSDSHHRSXZKGAKIVYSLXZVNJQJDDEFVPUPEYVBGQCIXPMUNZOYBFLIIYUBGKMWTNUZJIQWXCVPJCHNAEEIKSCBLBJBOUDAXENQGWRKQYKPWRZZRMTPKDNXLFLIIBEREUMDCGAONFLYLHRZLWDGECXDJHBDCLODYPJZVVPNHQKSSCTHYMFEMWFFFJTTUPQTSJTJUVRWLYNTOPMNHVW");
    msg.plan_size = 38084U;
    msg.change_time = 0.6439227304458619;
    msg.change_sid = 40753U;
    msg.change_sname.assign("GYDDJUXUEDZJUVWTEDIHZGJZCY");
    const char tmp_msg_0[] = {-117, 41, 114, -73, 123, 103, -74, 3, 58, 107, 82, 113, 39, 123, -92, -101, -68, 123, 43, -72, 53, -48, -83, 81, 70, -93, -71, 104, 3, -37, 31, -93, 99};
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
    msg.setTimeStamp(0.7748285236209009);
    msg.setSource(31611U);
    msg.setSourceEntity(13U);
    msg.setDestination(41323U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("JOCLOMEZWPQCJAJTSMJQFKHDFRHEEYBSIJEYANMITAIMVAUFTWDHFZXIFMBXGLWPUELXUQXLDHYWMSGAOBVGQHPWMZZPSHQCVHZJNTAKYZHGPXKGNWNJGDQSUTPHCTCOGIAXDRVVAMDXTTLIYILDBRJODBIVNDORUWSPWKENICBUBBVXEANGLEYQFZMUOKLILSJRSORCOZYSFCRK");
    msg.plan_size = 7746U;
    msg.change_time = 0.5624223322450035;
    msg.change_sid = 43090U;
    msg.change_sname.assign("DOJKVVEMITFNXHUTWXVCJLEQRKBRXQSXQPGFPWBUZIYBAQNZWHSUCXNLJLFDYMOJBCDLMZIRUILGGCBIGWPMPUFDKKQIQIEJGGTHGLJW");
    const char tmp_msg_0[] = {60, -23, 11, 67, 17, -51, -51, -10, 101, 9, -79, 8, -89, -40, -97, 54, -76, 81, 30, 91, -122, -61, -32, 32, -78, 12, 25, 49, -81, 103, 43, -101, 18, -81, 9, -73, 31, 84, -8, -67, 87, -6, 97, -111, -11, -42, 63, 38, -116, -46, -103, -89, -51, 46, 49, 71, -104, -106, 105, 65, -115, 62, 86, 46, -21, 36, 72, -116, 16, -118, -63, -98, -14, -122, -31, -26, 42, -81, -90, -102, -115, -6, 107, -2, 52, 70, -125, 119, -114, 88, -77, 108, -55, -108, 74, -30, 88, 58, -83, 49, 122, -41, -126, 85, -19, -1, -29, 62, -107, 85, -64, -55, -107, -45, -124, 18, 71, -66, 122, 27, -3, 92, -8, 50, 35, 9, 83, 62, 122, -117, 59, -85, -74, 53, -21, -116, 110, 25, 101, 90, -82, -40, 92, -29, -88, 82, 74, 76, 12, -122, 97, 108, 56, -77, 69, 5};
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
    msg.setTimeStamp(0.12062377694253346);
    msg.setSource(51260U);
    msg.setSourceEntity(206U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(253U);
    msg.type = 75U;
    msg.op = 54U;
    msg.request_id = 19128U;
    msg.plan_id.assign("VEYFKUMWYBLVRTAIYDGJDJVCPTZVXJXPXFCBRBSHRGWBCLAUJNZTKSGZIILMOBUYYOBHEHTUOIFFVBGVBEXPZJGSNTAKJDZUENVVNWPAPFWZANAZTLCSSQXXKQGSVYTHCEACHYGNSOFENMWTTDLKGFIQQRDRVHPKSWQCHWSQBLXLWALQKPEYMIINSPRORWOOOUJHQUII");
    msg.flags = 59019U;
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BLUFALRLGZKBXTZKXYCAPZHRBWCDPLNJOTODMZCRAMTTXBPDWYSEXNSDMHITUSSQMDJIXJNGDKEILAYYHYGDJ");

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
    msg.setTimeStamp(0.31656791171172394);
    msg.setSource(11251U);
    msg.setSourceEntity(190U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(81U);
    msg.type = 175U;
    msg.op = 37U;
    msg.request_id = 15886U;
    msg.plan_id.assign("KWQNQBRNZUGAZHRMXPICDDKPIUEGTMYBWKNFDLXRWWAXWQUNFVYESSMXAZDFCNIZTVLJSZNSWRXIGREWYFGBPVRRYMAYNIGQQLULLKSUFVMXBCOEODAJZKQQNXOTHHMZYLHFAJTPHFZAZPQXUETVUIPSILIUJIMGFAEKJWLLSCYVOGORHCVKBXGTCBXWJMFPQHPHKBWQH");
    msg.flags = 15026U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FHGAOREVGTAZICUVSRWKMCHWGKJLXEJBVUSPEHPDNGPS");

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
    msg.setTimeStamp(0.6204031293283518);
    msg.setSource(8181U);
    msg.setSourceEntity(89U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(23U);
    msg.type = 15U;
    msg.op = 175U;
    msg.request_id = 17736U;
    msg.plan_id.assign("HRTYVOBIECEBNOMVHNUXKWRBNTPDFJEYWQWCPTXNVITXIF");
    msg.flags = 54686U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3151005980U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HOZLEWAFVMCDBRRBKBTWSSRBPG");

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
    msg.setTimeStamp(0.6817737657683193);
    msg.setSource(21933U);
    msg.setSourceEntity(71U);
    msg.setDestination(1145U);
    msg.setDestinationEntity(253U);
    msg.state = 40U;
    msg.plan_id.assign("ETVKCUORKJOMMWYSUAHBZCYAUNPGLMQOVLKPRHIVGQRUDHBLEODLHWBAP");
    msg.plan_eta = -1594979962;
    msg.plan_progress = 0.26990886908976786;
    msg.man_id.assign("KYNMWQRMIBTMEDAUZMSXABJOOSFHZUTFSRLAJVPCFZVEKFWCTIHCIAIGXBLMYKHQUYRVPYWOBGDCCPDDUBFLNNXGCBBLDWSOHBJSONVQTZIEFDJSJURWNJXNTCCGJALFFYMZXAQHGOLVRFRFGVQQZEXQDOEJKHVTUQTKNPTSMDKHZGOPXUVEXWEJVNCRZQNWCQWGLIYNRDBZUPEAILPYAGKTKILWLAUHPOPPKXMS");
    msg.man_type = 37260U;
    msg.man_eta = -1844917560;
    msg.last_outcome = 35U;

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
    msg.setTimeStamp(0.6091486201702819);
    msg.setSource(40293U);
    msg.setSourceEntity(65U);
    msg.setDestination(3070U);
    msg.setDestinationEntity(90U);
    msg.state = 251U;
    msg.plan_id.assign("CXQWVKLQUJLNLNCNOZGCWMFCPHFZQXBEPLTHRZKPYYXLVIFMTYMDJCJCEGBMWHRYUUYHSRJSAROBNEGOGFEBGXWBAVOIKBWJCQZUMQRXZOSDPTYTXLCPHENGPJSDXUDTWMOSQTDJGIMKTAPJVHKKIWUNIJPTEDWNMHRAZQEMOAQDVLXIVJDVKVXIZHARWYQUVSRDUZLEYTLKAZUZMXBSUOBKYBDNAWEOSIEGSLNSGCPIFYRFA");
    msg.plan_eta = 404876419;
    msg.plan_progress = 0.21812368798401915;
    msg.man_id.assign("ZNKTLXYRXZGZJTOUHZZBGFXUKVNIITHVCFLPWXPMJUZBHTGKQVJIESGCJIVETYISWZQGSFNDPWMUPXPYKPQEDRFLDSMXECIHURWMAQQCJKYDTAKSTOUMRCFMDYEWHQULGOOILGWDKJOZBKMDXMOLBRDELPLNHNTUVAJWCBJFHUHCAHKRYEGORAFEXPXVPQJDQTYFIJBZBVXVINVBMDNGZCBSW");
    msg.man_type = 56931U;
    msg.man_eta = 1315356067;
    msg.last_outcome = 227U;

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
    msg.setTimeStamp(0.5530463617157653);
    msg.setSource(25954U);
    msg.setSourceEntity(204U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(254U);
    msg.state = 73U;
    msg.plan_id.assign("IWIUYWQXPSYQFOCVNYJOUILYWDNSMRBBMANJLEZ");
    msg.plan_eta = 1318838663;
    msg.plan_progress = 0.15445387989052373;
    msg.man_id.assign("VVOXRWUBCSQPWLMIQGMMOQBJLGJALEFEXLZDCENCVNAHZBBSJIGKSUQPUXMSSIHLWFAIDOWCLRUKZHDYHYSLHDYIWGFFMUYKFWFDDNAIXAGBOEBWXZZDIETZZZOSXKMZUPGGJSGIQVCTJCYURPVJRBAJUQQHMYPJRTRKUMYTLNFQVCOVRAVRZTJQPAWKOEWKDTXXLULEHSAECPPHEYVHMOKMRNKTVBISOAGNFP");
    msg.man_type = 55080U;
    msg.man_eta = -1243569710;
    msg.last_outcome = 176U;

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
    msg.setTimeStamp(0.09288712393771115);
    msg.setSource(5400U);
    msg.setSourceEntity(37U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(142U);
    msg.name.assign("WNIIDYVXCTYWLXSTIFNLADYRZESHWXKNEFPHSFYCWZTGGBLQQGUJSFDRNDGPJBDWCLGCUPAQACLCSEOOHBPRSORHZKGIXKXABRQZNRSAZWQNYISUUZKJAFKGRQVMBQFPAOHBTWJZZSEYMOEEHMVMEJGUUKXJRNMC");
    msg.value.assign("TUCFQENSWLAIAHICZBSOWMGQDWTJSOLPWTMEKHRPLNORCEROMTFKSCHRXQGMAOSLCRWAFLDYONEYCYRDGKZBUJAKJHPDWGOINAMXBDBBWRXYVALQFCZTVJVREGOLDBPFVAIQCXTHPNKZKNMWMPYPJTHUETXOEVPHHKQFJIIJLAMSAKDKZPPHGXEBJVDFUGYVEBGRQGDD");
    msg.type = 49U;
    msg.access = 22U;

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
    msg.setTimeStamp(0.1418640032654246);
    msg.setSource(47661U);
    msg.setSourceEntity(28U);
    msg.setDestination(20394U);
    msg.setDestinationEntity(68U);
    msg.name.assign("IPJUEQCZNFBFTAXJSXGYZRUNMXGKVOTNHQMCKYDAHCVZNEFBTVLDYQKQJKQURGRNJOMQNVFNMVNWWEVOSJRDDXAACLNTIYUNURDPAAESRASPWYLLEPUCZHHZMXIOTISBVGGCSTJKHVB");
    msg.value.assign("JZGKNZTNLVKLFUNFWLVLSNXNKTWRGBVUNHEQBXUCKXKNITPOAQOWPFFJWGRSOBXWUPJADKBZDGIQOCOUXIEXCDGWSBRVHYYZRCEWIMHGVEIZCDCJAPRPZVRDYGTFKJJYTTLDAMHYBAYHVUAAMYXOQXDSFBYZPREDBUFLEFXNTECMQLQCIRSDSB");
    msg.type = 214U;
    msg.access = 202U;

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
    msg.setTimeStamp(0.7058935125973854);
    msg.setSource(53264U);
    msg.setSourceEntity(223U);
    msg.setDestination(37423U);
    msg.setDestinationEntity(233U);
    msg.name.assign("FDFXUGSRIGLZVDEIJXIZRWXQNQEAAGFUDUMLORENVQYFMGWPMFKDVSKDPCUYJODERYHQCRTHUQNHYZBFOMBTLCTZBISSIWRCTTMSPZRECNSQMGTAKEFXWPONLJWZVJZAPSIHIEBZMELOKQNATLIHZLEGVYPXAVXOTOBUCDXMG");
    msg.value.assign("EFYBQBVJUTLAGPMFAGZCOZLZBCTJDWWUYAHZKXCHOHNTYIGKSRFFLE");
    msg.type = 176U;
    msg.access = 9U;

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
    msg.setTimeStamp(0.4675708883772862);
    msg.setSource(20531U);
    msg.setSourceEntity(175U);
    msg.setDestination(15737U);
    msg.setDestinationEntity(47U);
    msg.cmd = 236U;
    msg.op = 85U;
    msg.plan_id.assign("ZPTVAMBNQMIWRUXZQKJXBVCLJWNHLXTDGJRGOYUDWPJREMXBVADLQDWBQIBRGSHVWAEAWPCZLZGHRBXKLFXBHUEOFHYYKAWMOMAUCESPREWZMTYVSEDQRAPVUBSWUOTWCKHBRTUIRHXGUMOFSSSKHYGVYJQUNROAEZBYOSXKJEICPTJFDKNMJAMAPCTXYCMHFTCLZLOGYZFNXGLDNSQCKPDFHPTPJCIIONFOKFYEIGNVDQNIGLSJ");
    msg.params.assign("WSVVIPONMWBWRYGNTIOVDOWVULVNYQAUMGDGNVZFHJACJPSMKBSLJQTYOYZKUPIMBAFTHANAVTOHWQFNAOCGZDSHNZPKGVU");

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
    msg.setTimeStamp(0.9495469434469045);
    msg.setSource(9891U);
    msg.setSourceEntity(124U);
    msg.setDestination(25965U);
    msg.setDestinationEntity(165U);
    msg.cmd = 133U;
    msg.op = 2U;
    msg.plan_id.assign("SWUSFUIJFRRBVANZPQMWGHDCJJZTYHROMSZJKVNWIOFZNPVKBREAZMELBSLMXXZMBUCOVBLQYQUCMZNYJUKRPJUSXNDKGTICEGCSTRDLCVHYGGEFQBZTMLTKPUIVBHMNLDCEQZIHTKBCKNGFAATGSQXGIDAHUDJYWFYLEIANIBHXYPFVQPROEWHWSDATUNNILTPBQFLPWCOEWSDEAXHAXRYKLVQGWQXOYY");
    msg.params.assign("GEXVTSLDSYVWEECCARGTLKJYAFKAUQUHIIUPIDTBVVTVXPMTZPRBDFGVPMMEOFRTXCZDLWSFOFMFGAOLEBZUEGWJXZYJKZWTUEMQCSKCTRRRSKBJURHXONDQQQOWQAOWHQKKLTFUNNXYSQIYOYCTSPPAOZLIJCCHJ");

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
    msg.setTimeStamp(0.25395943632280404);
    msg.setSource(62863U);
    msg.setSourceEntity(78U);
    msg.setDestination(35696U);
    msg.setDestinationEntity(110U);
    msg.cmd = 130U;
    msg.op = 76U;
    msg.plan_id.assign("BXBOVKIBZHBVXPBJPNNSRAREEGTXGLNTTTUIPZIYBKCDRIQJFWSYOTAWMSIGDGLWUDZHSTRYKLJFQCCWGEJUHAXIFQMFLPHPGHPEMLCHSPHXUSTGQOQCEZOOWDIVQNCTEAQHSYPEVZDDVAFNUGBPPMVJJFYF");
    msg.params.assign("CSDLHKZVBLRQRMVMJIWFEFAQXRDGEQBDHHGXFJBXCTZXQQQMZHEIUPRSXDIVAIXICEOUHMOSJCUSNSAMCLOUCPSDLYZVWGDTOJKLGSWKNRLGFWKEWCIOGATUHBIAXPTSEJNVDYRQIZOVYGBWHFKKMZFEFJTXRPFUOVWPYUKMXCNEZCBJRMDQYZNJPRAVQZZOBSFEPEYNNTKFNYAGJPNLVPMTVUWLDXNWTUAJDBBBHMYPI");

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.670957013158444);
    msg.setSource(3036U);
    msg.setSourceEntity(248U);
    msg.setDestination(48352U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.9870800863098753;
    msg.lon = 0.2075865227955509;
    msg.depth = 0.04199383917161337;
    msg.roll = 0.5786017865850877;
    msg.pitch = 0.41646355356446196;
    msg.yaw = 0.5971013617859536;
    msg.rcp_time = 0.11752819792585689;
    msg.sid.assign("JICPACLRXVGPZFVFDEKXKNAWWSITVBRBDBCUK");
    msg.s_type = 161U;

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
    msg.setTimeStamp(0.9141995876684439);
    msg.setSource(2304U);
    msg.setSourceEntity(110U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.2086021246594364;
    msg.lon = 0.9822621824697996;
    msg.depth = 0.4387310154352576;
    msg.roll = 0.5486606348017792;
    msg.pitch = 0.7299712009136012;
    msg.yaw = 0.13677896965249692;
    msg.rcp_time = 0.6121284387409525;
    msg.sid.assign("TGRCXLQTEEZBZECJRTITFNGZKKDUTXWRXYUIXZHHBAWTSURCSZONUUKTDYXCMGCGNYGZYYCNVZEONUHIDMNEIFVFJQGNVJBEAMSFBSMOQOARPOKVGMHBQUVLEQLBNABTELNAYTARQEXCCJHDLWDGOQRHBOIHPQIVSVIYDYKSFFLXRSIAYCVXYWKMOHPWSPWKFDFVTLDARQIKWJJSUHJGDMFIJ");
    msg.s_type = 56U;

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
    msg.setTimeStamp(0.7687398308762357);
    msg.setSource(17114U);
    msg.setSourceEntity(93U);
    msg.setDestination(42639U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.41339562567094534;
    msg.lon = 0.005798818472514955;
    msg.depth = 0.22174880385693896;
    msg.roll = 0.7707260723281862;
    msg.pitch = 0.7183088942914372;
    msg.yaw = 0.7561286560589223;
    msg.rcp_time = 0.5201106734714465;
    msg.sid.assign("XWIYUODIJTXUWOXAEXMTGLNQIGKTTTJFCAOSRYQPLKQDVBFLYVNZGVNMZBIFEVPIYRWHMURCBFJNCAWGOYZFKCNSAUEMYGKMYCCCREQQQKYDRFPSNTSWGGCHRBNFTHLTSHJHOLLNMJSFNBMDEEWUUDAGATPQFASPDJUVWAYOAILXZKJMZXEH");
    msg.s_type = 154U;

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
    msg.setTimeStamp(0.878645287358477);
    msg.setSource(35303U);
    msg.setSourceEntity(217U);
    msg.setDestination(13175U);
    msg.setDestinationEntity(160U);
    msg.id.assign("HAKLHKITVOZKQEZYJMFLMLSMSMXPKAQVSHIDLKMFYVURPFCMVNDXISBEKWUEJTGYXCMGWBWZVTFVXPUYZRQVGRCGJLSSJWJZBBPSNOUWAPLPGUXWQOWAAEOTSUGFKOOOFRLQRCATDAIKQHYHENYQCDFNZDFXJBNNTGSGCNRNMIHTQDFBROYITZCGNTAKIVDSEWYTHXUUZLZMPGIVYRODDKEHAD");
    msg.sensor_class.assign("UIJLQLGRCVFQQTTPGCROMZXONCQFZXRFPEAOPZCTDKWDKCZIJOBBKGLNUOENZAVAIPQZUCFGTJUMTYSTUSNFZYVOAAXOBQEFGDTDMLWXANIQNHHHCIDLHXUMSCGPPLKDWRRBHIYQVMLWNSTUDSSMSSRLBDQNJBPHAIJTENXMMRXAOWRJBVLGFPYFXSYYGAARJUVFGKVEREEJWDXYQKHI");
    msg.lat = 0.24228386405094726;
    msg.lon = 0.8854690981176644;
    msg.alt = 0.32487940855468345;
    msg.heading = 0.3996852622140905;
    msg.data.assign("HYCREEGGTHJQBZAWDWMRGKNXKNLSLDVNYUYAZCTSTPCQFHFKJEORDMBDGLYDPXITKCMHXMNHNEHXCVYCQXNBOPTXQNMSSEVIZKDMZFUJTLCOHCGCOJAWAIZWZEZRYPQIMWTFBEXVKAUSTPOIRWJOGBYVSVORRYS");

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
    msg.setTimeStamp(0.9782392449545774);
    msg.setSource(29642U);
    msg.setSourceEntity(152U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(220U);
    msg.id.assign("ZYELGATGXOOCVAKZEHOORCBRIACKYOZAGHJBUHDUU");
    msg.sensor_class.assign("UPCXNAJDBRQBTEZNGMOQTDXYJSDBVICIYZMNBWLYWSTVHZCMYGTXPDUMKZNCOUIWXSTKEMSRHKAIIHTNAPAANUBQXEULXCEQWDKONWELJEKVGHTCAXQAISPHMFGDEUCIFIRHGEUPZUQKBUZYMHVKFYYSWRENJODKRWNAVSLSFLCLQNGFOWSFSXRGRPJIJGZZYQKVMMOJFQ");
    msg.lat = 0.11376132256483007;
    msg.lon = 0.8435324927399717;
    msg.alt = 0.9821558550498537;
    msg.heading = 0.870135756468876;
    msg.data.assign("LHZTVGNCRUQEZEMXUVNKGJXRKTTCUXWCQCZQBFOOKSJYBXJOCDQDIYJHFAAERPRUKDNNMKZTYVNAXPHIKSVOUIRLSZDMQFNWLKDINYAJIDTKNZFAUFLJBFVOCRFPGXGUTJWYDRTTWBP");

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
    msg.setTimeStamp(0.46268409839424063);
    msg.setSource(59014U);
    msg.setSourceEntity(91U);
    msg.setDestination(35656U);
    msg.setDestinationEntity(204U);
    msg.id.assign("KBFHSTPJSWMGGBQMZZZERXQDLTRBAAOVWJBLHDXBGMCLFOCETTZHWMHNLLSXBGENROYUKLCNPDQFQVSEHEFYIKMFWRCYZAWVAPZGNYXXLHLQHPKNDJVBJLSZFWUUVWGXVDMYQPFPFXSJJYQRSOOTUUMQUOKVONXBIYVXIFRNJCETVTAAGWHQIKBEECUZKIEGRMYWGSFCDZYMKKATPMUTIAKQPVRRRHPAWNSNDDX");
    msg.sensor_class.assign("FUUPVBRTANZPZUBQT");
    msg.lat = 0.9939021963354979;
    msg.lon = 0.37660540776224416;
    msg.alt = 0.7967070783584592;
    msg.heading = 0.018160383106228806;
    msg.data.assign("LKFWGBQSPYFFENGXDUYXEJMMDECWCNAFKOKQXHSLJJWFJTBLUMZCNDPTSPQJCFETJYZUOIXHPZXJNFDAQOHZGJKHIRHUFIQLYRDKIANPPWCKEDHPBVWTCYNDE");

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
    msg.setTimeStamp(0.9809280943676331);
    msg.setSource(35473U);
    msg.setSourceEntity(166U);
    msg.setDestination(10084U);
    msg.setDestinationEntity(181U);
    msg.id.assign("AJJSBEMERVBKVXIDOLVUIMNKGCNOHIDBKUNRCAHUJWQWTCAFTBQYVEVQFQYNNJDZZEQR");

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
    msg.setTimeStamp(0.3427005277883802);
    msg.setSource(9522U);
    msg.setSourceEntity(96U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(92U);
    msg.id.assign("MUAFLLGSXSDHKPHIJBMZUUGZIEJRCUOQEFJFUVPSAIWRZNEDVFAMKPWSJYWZFBJSXXEFWRKKOALADHQIRJOOVLHCPKHQZXOYNXNZYWJTBEYJSYBEXKDAAMBWXBOQKPESWCDHNNPTTMRRYBL");

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
    msg.setTimeStamp(0.6007118526445996);
    msg.setSource(7567U);
    msg.setSourceEntity(74U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(185U);
    msg.id.assign("KPVAVEWJTGTQYVISPOASGNBSMIVQIHSNRQKCJWLQMJOFYXOOLCGBIUYUSZIZTZEOJLDEKBXQXIWUMLBFNURMECUAAXKUMASHHECFJJIPIWBLEZYKZVNRVGMTUDXPGSOUYFNEMURASXQCDFYJAPASPKFFXNITQNJVLTLPKHEFHXWOXWODYZWEGGPLYANPWBJQGPVFRBCDORRQCLKNHDODIQRSHDGADGKTHHWKDF");

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
    msg.setTimeStamp(0.8719370074906136);
    msg.setSource(29469U);
    msg.setSourceEntity(55U);
    msg.setDestination(2868U);
    msg.setDestinationEntity(158U);
    msg.id.assign("WYVCQDLQRNDAILXWWKZUPUYTXADDRLFNVBIFRZROYDL");
    msg.feature_type = 131U;
    msg.rgb_red = 230U;
    msg.rgb_green = 227U;
    msg.rgb_blue = 254U;

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
    msg.setTimeStamp(0.11662077214983446);
    msg.setSource(5508U);
    msg.setSourceEntity(43U);
    msg.setDestination(30363U);
    msg.setDestinationEntity(67U);
    msg.id.assign("VAHZLFHKOZJBZJKTORTRXNHTWYGOFSQMMQSLCLPDFFGCYACDBTJRDENOLHUEAQLIIOJDSTHRPCBZIUGCWVPOHTPZSXFXHUEHECWWSMNOYUIBAKEWGCSFNJDYJDUDSOPPZOFK");
    msg.feature_type = 31U;
    msg.rgb_red = 4U;
    msg.rgb_green = 180U;
    msg.rgb_blue = 160U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8633311350922007;
    tmp_msg_0.lon = 0.9092920125690138;
    tmp_msg_0.alt = 0.8841073772217972;
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
    msg.setTimeStamp(0.5481395094006505);
    msg.setSource(8255U);
    msg.setSourceEntity(66U);
    msg.setDestination(19707U);
    msg.setDestinationEntity(0U);
    msg.id.assign("KEQRJPMINRUIATBDLXKGFHNICUTOZOAZJWFPJTACZSZLSXVWTVZVHEDKGEWQALULBDEURSYGPLLKJISFJYLUDOOKISMQZOPBDHCBAIVEOSLJNNYMACKNFWWGAMQMDVYHHNTYFONCUWIXEFB");
    msg.feature_type = 171U;
    msg.rgb_red = 231U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 146U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4756124056586517;
    tmp_msg_0.lon = 0.17303570589475414;
    tmp_msg_0.alt = 0.8563774737507099;
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
    msg.setTimeStamp(0.928968229873207);
    msg.setSource(43869U);
    msg.setSourceEntity(164U);
    msg.setDestination(51639U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.6010138633334949;
    msg.lon = 0.6488037831333786;
    msg.alt = 0.7314665613234078;

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
    msg.setTimeStamp(0.18163716601524738);
    msg.setSource(11500U);
    msg.setSourceEntity(171U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.23459395456059495;
    msg.lon = 0.7858206127564751;
    msg.alt = 0.5642966773297544;

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
    msg.setTimeStamp(0.5411663168574534);
    msg.setSource(34434U);
    msg.setSourceEntity(239U);
    msg.setDestination(16865U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.7817737430708798;
    msg.lon = 0.11767586066972613;
    msg.alt = 0.8048885272888556;

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
    msg.setTimeStamp(0.3180251462246526);
    msg.setSource(52561U);
    msg.setSourceEntity(58U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(90U);
    msg.type = 135U;
    msg.id.assign("JVWNBPUCADCGNYTFDNUHHCSPBUJQMKSLXWDPCORZUIXZCRGLEKVSHXTEJXPGEBNLLYRJBXTOJIUQKYZDQQRGASPFNUKNOFBHERBRQTZZTMFTIOP");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 22U;
    tmp_msg_0.speed = 50727U;
    const char tmp_tmp_msg_0_0[] = {28, 97, 39, 46, -80, -31, 44, -45, 111, -23, -2, 49, -80, 108, 83, -107, 12, -128, -121, -123, 123, -22, 65, -119, -103, 108, 78, -61, -75, -22, 26, -14, -59, -93, -3, -14, 72, -123, -43, -5, -9, 63, 119, 24, 103, 35, 74, -116, 88, -56, 99, 7, 95, 54, 118, -47, 74, 44, 50, -44, -124, -52, -48, -63, -125, 23, 27, -5, -78, 0, 83, 122, -51, 122, -3, 0, -120, 86, 126, 98, -68, 27, 1, -27, -3, -42, 82, 13, -85, -57, -111, 111, -45, 23, -44, -1, 61, 77, -99, -102, -6, 53, -94, -88, -76, -89, 80, -93, -4, 54, 74, 29, 123, -113, 110, 42, -126, -47, -120, -75};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.12831550891695442);
    msg.setSource(25169U);
    msg.setSourceEntity(250U);
    msg.setDestination(7084U);
    msg.setDestinationEntity(31U);
    msg.type = 134U;
    msg.id.assign("MCJDOPTBITMQVMU");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3921478134143579;
    tmp_msg_0.lon = 0.6625611805957563;
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
    msg.setTimeStamp(0.6224800550132332);
    msg.setSource(3183U);
    msg.setSourceEntity(157U);
    msg.setDestination(9544U);
    msg.setDestinationEntity(71U);
    msg.type = 183U;
    msg.id.assign("ILGUZQTHGJBJUUPZU");
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 171U;
    tmp_msg_0.level = 168U;
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
    msg.setTimeStamp(0.5452355179079071);
    msg.setSource(25041U);
    msg.setSourceEntity(236U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(33U);
    msg.localname.assign("XUBTPHDNFLIITDCASVHEQYNQIBGUJRWEFPGOQTIPCJRDEBYXKMWLTHLFEJSETOTPROFKHDXYYSWNSUUN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TIJREIAPGPDWOUFTQIBYRJEJSYVFCDMWQB");
    tmp_msg_0.sys_type = 16U;
    tmp_msg_0.owner = 29755U;
    tmp_msg_0.lat = 0.821218426921661;
    tmp_msg_0.lon = 0.6667531453219453;
    tmp_msg_0.height = 0.25713379818558946;
    tmp_msg_0.services.assign("KFQYMZEKUVUOJAYTVPVBSRAIHWBEQKXUTHYAXBTVPGDWZPVAPGQPQOMFCVFWLHKXXGHRXURIFSRABHBFWMHOCBONZPQNWXD");
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
    msg.setTimeStamp(0.907964951614791);
    msg.setSource(40822U);
    msg.setSourceEntity(26U);
    msg.setDestination(27962U);
    msg.setDestinationEntity(19U);
    msg.localname.assign("AXDJWTJFLZWTLXNFXCLPQWTTIYQSKKCITJMKFMZPBQASIGTVCCRLJBZGFZOSUKLQDRKIIWAIYRCSWUTMEGRDGXXGMZABYLTCZNKVUVNFIPVGCIGCWLYQHOPSQSVPUMXHVOXSBDXUEKUXABREJZGWOOBTYUBQKDEZPOQOAORJVFIPWHBMLECQMHDPFQNHVANWRULDFFZHMNDYYTMSENKJUVUOLAHSYWBRVNNHBJHHEPRXEJZGG");

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
    msg.setTimeStamp(0.6149535390191541);
    msg.setSource(64U);
    msg.setSourceEntity(222U);
    msg.setDestination(61951U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("IUVVERVGFJYVGJKXTNSWWDJYTSWZOLKUIZRPNIAMLBHQRBQZHYNKCVAYCUSLGAQTLZXFPYPAAFRBRONCFPHKJPQURGQHDCEPSCXSXNEKEZMXLFDSCVIJTMXATIMLXROLLDKALCBURPFHPFTUCQOBZWUTRSHUTSOFYYIJHRDJVKWXWAOXNNHDQGBG");

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
    msg.setTimeStamp(0.5817054561748671);
    msg.setSource(31789U);
    msg.setSourceEntity(14U);
    msg.setDestination(39552U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("PASNUDCGTGSQIFRHZPDTCTUYRCMVJSZILZEYZXWPUWRRWYESNFNIQIUDNGDFPKBVEFJOTVSTMDEBLXMRYJXFJGB");
    msg.predicate.assign("BLQVHPUTVRJBFFVSNZSLEQSIVROPWKZXTXVZLZSRROTIBFNQCDSGJJRJNUGEIACPVCPKDBVJRYOAIQGKTLJZSTOCBDWAHFQXHAEIIHITCKAYUAHVMGOEDCOLYRIKJFNOZLVUGXAHWFSEANJBUSMPTDKEYUYGLGCZYTLHFPZNWDFDMGWPHNFNXOBSUXQZXMHTEGTXQSZMYBJRUCFMHCQWYBMKXYMRIPKMPWLUWKWCBEDWMAAYOIDRK");
    msg.attributes.assign("RVABBSQGPONXPIHASXLNVEAKKYGMJTCXDTNJMQTJURFVCCBDJGZVXFMAM");

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
    msg.setTimeStamp(0.7263476681158391);
    msg.setSource(24435U);
    msg.setSourceEntity(32U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("UCYGUTCYMJNWZJASOXFVNIOKGUJRKBTKCJDWXKVLCPGOSTXIGTRBAUHCSQDTVEBSOQARMMWVDRVXPYKMYZSNHZNHKDQTHTQIWXGPWZPLNLRFPAEAEQGYYBSHRYSMQEJMYRGMIUSWEYUNHFXBFIPBLESZHEJOLECVJTASRHMHFCEFXQCRQGOIFZLFKEJJ");
    msg.predicate.assign("OQDOOTTAKWPZDZQMNKMLJBTHMWIXBCQXUFVUQKWOIQJKFERIBESVRKIKJAVPGVYPLGMPWHVRXHYTAQDNXDZBFSSUUSYXLXADIFPZQWTBYYPBHBOZJPHBJSTQKHMKJEC");
    msg.attributes.assign("BDJNHDMLKENRH");

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
    msg.setTimeStamp(0.5232014423474767);
    msg.setSource(62187U);
    msg.setSourceEntity(215U);
    msg.setDestination(33575U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("BWIOIONDLYPLXSKPXQZCTNGPBRCYXSEDDBELSMUJANVFHPYZCXADUKBFMRJILZIEYMEUIRLSQGGKSVJRXZNUXDOCJUUNNLBNMCMSVUGXTEGUOJRXQWQJWCVZCQIKRJAALFAPKYVTKGOFAZPM");
    msg.predicate.assign("JCZLZQCBKMYUYEKEYLPGBOMDIMKZPVEYMOXQMJACJXTDKXBUQXKBIWAIZEHQNLCRKGOXCIBJMVJDLYWNIOHGOHVONMPHTXJUYZMUTUJDDOUBPBAZQFVMWNDFOGGAHPRWPNEWRBVCHTWWKGSDFCCFQNROPQKDEXSNKWAIGRRNLGTVQITNKRQJFZHPYFFVNSECSDWJOYZTALIBRYRVSUQSZHHXUPH");
    msg.attributes.assign("VIYFAOUIBGRSTCVIIKDCYZKNJQXFATXASDYMHDEFXPMVUPQXBOTFUHIZTYPJPMQBYFFBQTBRNKFSAAKFDAJOZQZRTAXXWL");

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
    msg.setTimeStamp(0.09933883189491799);
    msg.setSource(1331U);
    msg.setSourceEntity(215U);
    msg.setDestination(62577U);
    msg.setDestinationEntity(60U);
    msg.command = 168U;
    msg.goal_id.assign("VXBDSYEUWTRFMBXUDYEACRTRFZYOENOVGFNIMUWBNNPPVJNYIQBIZSZUAQFAQMSACLFHHLNOAVLWKDJKAFJFXXTXFZSDKOPJTVUPMEZXSSEIGOOWPTPSGRDYBVZJWMJLBSQXZQQUCCMXTCKXKVG");
    msg.goal_xml.assign("IJMJFBUSHCCHRAHM");

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
    msg.setTimeStamp(0.38113592486683423);
    msg.setSource(44891U);
    msg.setSourceEntity(19U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(92U);
    msg.command = 218U;
    msg.goal_id.assign("GIEUVUHCFFDPFBBOIDAMNANRCHUWRAZJQSWYRCBYHLHSTEYSFPGQTPIDCIN");
    msg.goal_xml.assign("FXYXWAMULOFXGEHFISCPVOTMSPF");

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
    msg.setTimeStamp(0.35718847303355006);
    msg.setSource(34790U);
    msg.setSourceEntity(49U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(203U);
    msg.command = 243U;
    msg.goal_id.assign("MFJULIAHPXFEWGKQVKAHRKYNJNFKMHLDBJZYJEUTVOKJURUUXSN");
    msg.goal_xml.assign("ACBXNMISRGAPVSOHITIVYNUVGXHBDMQEZPPIMIMCQHHJNTFSVLICONBQTKKAFNIZTAVZQWUVHHLMJRGLYRBPDXRORMLEHBNTTWWBPTPWEHOFRLPLDE");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.5459522944527908);
    msg.setSource(12917U);
    msg.setSourceEntity(249U);
    msg.setDestination(24946U);
    msg.setDestinationEntity(15U);
    msg.id = 223U;
    msg.width = 2747U;
    msg.height = 50114U;
    msg.widthstep = 20669U;
    msg.channels = 27U;
    msg.depth = 119U;
    msg.finaldata = 38U;
    const char tmp_msg_0[] = {-90, 58, 17, -28, -21, 43, -91, -118, -96, -55, 45, 86, 0, -41, -5, -49, -39, 10, 79, 86, 29, -92, -20, 5, -59, -125, 125, 50, -108, -90, -11, 66, 46, 98, -26, 121, -73, -93, -123, -104, 126, -73, 114, 35, -16, -98, 83, -12, -56, 4, 97, -49, 57, 57, -112, 7, 83, 44, 31, -50, 19, 17, 79, 58, -52, 121, 62, -110, -108, -26, -66, 119, -73, 58, -39, -22, 1, 5, 13, 31, 41, -98, 19, 24, -52, 77, -113, -128, 38, 51, 9, -34, 29, 6, -78, 79, 51, 6, 77, 11, -18, -69, -58, -110, -70, -29, 116, -94, -66, -89, -83, -37, 22, -21, 17, 85, 63, -55, -85, -31, 87, 92, -66, -120, -5, 78, 20, 4, -66, 55, 6, -96, -49, -97, -64, 28, -91, -128, 0, -35, -84, 101, 34, 102, 124, 103, -45, -47, 61, 45, -92, -105, 84, 7, -15, -4, -102, -60, 47, -122, 95, 74, -1, -55, -123, -13, 61, 68, 73, -67, -3, -106, 116, 78, -1, -34, 69, 9, -47, 11, 67, 1, 41, -94, -118, 78, -74, 80, 58, -105, -81, -33, -128, -101, 52, 76, -122, -42, -95, -77, -31, 63, -23, -76, -65, 112, 43, 69, 40, 25, -116, 10, -30, 63, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.5342207890147498);
    msg.setSource(20390U);
    msg.setSourceEntity(71U);
    msg.setDestination(19528U);
    msg.setDestinationEntity(153U);
    msg.id = 203U;
    msg.width = 25981U;
    msg.height = 59107U;
    msg.widthstep = 14982U;
    msg.channels = 235U;
    msg.depth = 139U;
    msg.finaldata = 238U;
    const char tmp_msg_0[] = {-12, 123, -120, -40, 103, -79, -58, -87, 73, -104, 123, -112, -59, -100, -76, -82, 88, -125, -11, -70, -122, -92, -38, 89, -41, -110, -61, 69, 4, 49, -28, 48, 72, 82, 70, -114, -127, 102, -45, -82, 100, 49, -18, -9, 59, -61, 92, -56, 18, -124, -73, -71, -15, -27, 19, 123, -91, 42, 75, 67, -77, -113, 9, -89, 117, 91, -67, 84, 119, -99, 73, 30, 30, -109, -61, 112, 106, 87, 120, -85, -16, -92, -127, -122, 18, 14, -74, 118, -110, -37, -78, -57, 91, -51, 18, -115, -16, -39, 79, 87, 48, 15, -1, -111, 35, -29, 48, -5, 24, 70, -48, 91, 47, 30, 111, -1, -39, -3, 57, -77, -122, 103, 2, -123, -35, -71, 84, -75, -91, -118, -60, -120, 98, -9, 6, 5, 123, 102, 112, -86, 68, 24, -27, 47, -72, 119, 90, 62, -46, -94, 95, 5, -28, -81, -115, -28, -4, -60, 31, 83, 46, -74, -72, -26, 31, 58, -39, 30, 112, 64, 6, 111, 122, 76, -13, -98, -13, -79, -31, -119, 35, 90, -74, 36, 24, -123, -79, -76, 67, 44, -67, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.759826746017712);
    msg.setSource(58259U);
    msg.setSourceEntity(206U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(136U);
    msg.id = 251U;
    msg.width = 53241U;
    msg.height = 7387U;
    msg.widthstep = 51500U;
    msg.channels = 96U;
    msg.depth = 112U;
    msg.finaldata = 21U;
    const char tmp_msg_0[] = {-81, 45, 42, -93, -67, -125, -1, -72, 93, 121, -98, -56, -124, 24, -112, 57, -42, -29, 51, -7, -112, -101, -53, -88, -9, -106, 126, 60, -119, -52, -65, -37, -50, -95, -56, 41, -81, 4, -24, -5, -98, 108, 69, 20, 18, 10, -46, 77, 56, -18, 20, -83, 51, -28, -122, -63, 121, 80, 10, -6, 90, 20, 124, -114, -107, 84, -12, -111, 68, 19, 88, -110, -82, -26, 125, -83, -93, 94, 75, 25, 12, 31, -66, -110, 116, 69, 83, -52, -53, -99, 78, 94, 46, -55, 6, 113, -33, -59, 76, 69, 119, 13, 69, -31, 34, 84, 78, -44, -48, -116, 59, 60, -70, 46, 61, 112, -14, 68, 55, -74, 28, 65, -7, -80, 62, 62, 11, -53, -85, 52, 52, -69, 101, -96, 104, 106, -63, 93, -1, 126, -102, 35, 70, 125, 110, 38, -123, -110, 2, -12, -66, -5, 32, -95, -100, -67, -55, 11, -118, 95, 52, -16, -19, -25, 106, 70, 20, -96, 119, -127, 89, 53, -126, 50, -60, 98, 32, 81, -11, 64, -27, 24, -99, 27, -117, 103, -63, 80, -81, 53, -122, 103, -94, -28, -48, -114, -45, -44, 81, -48, 107, 92, -30, -91, 6, -120, -46, -30, -14, -64, 118, 6, -85, -2, -120, 107, 32, 18, -121, 109, 89, -76, -80, 27, 100, -30, -6, -15, -90, 72, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.7619905829578568);
    msg.setSource(35529U);
    msg.setSourceEntity(14U);
    msg.setDestination(63034U);
    msg.setDestinationEntity(49U);
    msg.width = 57484U;
    msg.height = 50260U;
    msg.channels = 72U;
    msg.depth = 184U;
    const char tmp_msg_0[] = {-1, -13, 43, 62, -71, 50, -9, -93, 105, 77, 118, 96, -56, 73, 108, -71, 36, 58, -30, 35, -11, -104, -127, -96, -30, 32, -40, -59, 46, -106, 72, -102, 121, -36, 23, 9, -121, -112, -102, 100, -56, 72, 19, -17, 26, 20, -102, -59, 76, -91, -48, 116, -37, 87, 112, -92, 72, -81, 3, 84, 57, -54, -78, 9, 112, 10, -24, 4, 53, -128, -64, 37, 43, -33, -32, -92, -90, 109, 7, -40, -83, -126, 118, -1, -3, -110, -53, -44, -59, 55, -65, 62, -90, -105, 113, -31, 25, 75, 18, -60, -91, 83, -87, -63, -104, -91, -15, 21, -5, 33, -36, 117, 26, 125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.629835450626809);
    msg.setSource(43U);
    msg.setSourceEntity(189U);
    msg.setDestination(5857U);
    msg.setDestinationEntity(227U);
    msg.width = 45481U;
    msg.height = 36267U;
    msg.channels = 207U;
    msg.depth = 249U;
    const char tmp_msg_0[] = {36, 37, -39, 103, -109, -101, -63, 20, -76, 100, 7, 70, 17, -95, 28, 48, -4, 103, -17, 5, -81, 27, -48, 103, 104, 35, 22, 78, 122, 95, 71, -75, 126, 37, 24, 43, -4, 125, -104, 65, 6, -71, -47, -117, 9, -108, 98, -36, 103, -46, 51, -34, 7, -94, -30, 73, -49, 71, -95, 86, 41, -113, -55, -101, -39, -122, 8, -115, -14, -62, 49, -55, 121, -29, 27, 99, -32, 79, 124, 96, -55, -5, 77, -41, -15, 44, -58, 16, 80, -116, -37, 65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.3205704361158366);
    msg.setSource(52445U);
    msg.setSourceEntity(207U);
    msg.setDestination(21218U);
    msg.setDestinationEntity(133U);
    msg.width = 4729U;
    msg.height = 20742U;
    msg.channels = 49U;
    msg.depth = 123U;
    const char tmp_msg_0[] = {-12, -93, -30, -1, 7, 115, 113, -42, -126, -88, -27, 37, 7, -108, -38, -53, -1, -118, -13, -73, 110, 73, 84, 41, -23, -113, -127, -102, 89, -10, 67, -44, -107, -15, -12, 125, -115, -40, -68, 41, 106, -106, 97, 91, -31, -121, 98, -87, 121, -59, -119, 92, -49, -65, -32, 0, 74, 76, -103, -122, 62, -21, 106, 75, -103, -113, -33, -29, -36, 84, 111, -53, -5, -99, -37, -91, -47, -105, 17, -88, 114, -110, -8, -40, 99, -75, 31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.1621812026605497);
    msg.setSource(49902U);
    msg.setSourceEntity(99U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(210U);
    msg.frameid = 158U;
    const char tmp_msg_0[] = {-72, -73, 4, -69, 2, -78, -36, 102, -86, 32, 21, 41, -86, 21, 0, -94, 16, -84, -97, 9, -16, 55, 93, 82, 0, 24, -114, -24, 106, 77, -116, -17, -61, 41, -30, -121, -121, -115, 37, -74, 67, -100, -103, 17, 96, -49, -61, -39, 24, 24, -45, -105, 74, -106, -51, -59, 57, -11, 92, -105, -115, 77, -72, -15, -82, -56, 72, 26, -54, 111, 32, -66, -94, -128, -44, -107};
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
    msg.setTimeStamp(0.5192220832495617);
    msg.setSource(34084U);
    msg.setSourceEntity(72U);
    msg.setDestination(39725U);
    msg.setDestinationEntity(88U);
    msg.frameid = 181U;
    const char tmp_msg_0[] = {-87, 92, -30, -61, 43, -17, 90, 56, 91, 62, 26, 110, 74, 126, 38, 5, 104, -38, 107, 83, 70, 89, -4, -92, -65, 8, 91, -20, 99, 27, 50, 48, -12, 82, 39, -82, 124, -60, -64, -92, -104, -20, 121, -116, -126, 24, 54, -122, 6, 13, -102, 15, -54, 67, 49, 62, 65, 123, 84, 115, -121, 31, -57, 71, 107, 98, 104, -42, 70, -125, -59, 12, 110, 2, -89, -84, -18, 71, 91, -11, 25, -121, 69, -5, -58, 118, 50, 25, -39, 120, -82, 41, 120, -127, 60, -76, -2, 25, -41, 54, -63, 112, -8, 17, 35, -28, 21, 105, 61, 109, -125, 76, 12, -23, 40, -106, 104, -6, -19, 26, -126, 43, 111, -50, -37, -53, 14, 36, 77, 41, -7, -73, -90, 110, 112, 110, -53, -85, 68, -107, 74, -21, -78, -105, -9, -87, 118, 106, 45, 62, 59, -3, -121, -41, 117, -59, -82, 62, -91, 107, 101, 117, 46, 40, -30, 76, -91, 63, 18, 55, -98, 37, 46, -101, -117, -9, -4, -120, 121, -103};
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
    msg.setTimeStamp(0.1928069439316379);
    msg.setSource(31820U);
    msg.setSourceEntity(197U);
    msg.setDestination(35547U);
    msg.setDestinationEntity(94U);
    msg.frameid = 144U;
    const char tmp_msg_0[] = {43, 17, 82, -127, 27, 81, -51, -84, 116, 75, -18, -19, -47, 103, -126, -70, -62, -30, 11, 81, 12, -106, -100, 4, 113, 8, -77, 5, -105, 86, -110, 33, -21, 77, 97, -124, -3, 119, -112, 35, 123, 82, 23, -75, -74, 12, 110, -30, 89, 112, 99, -111, -15, -103, 99, 76, 83, 85, -122, 109, 113, 33, 88, 96, -11, -13, 69, -107, -37, -62, 122, 25, 53, 10, -78, 117, -81, -23, -75, 101, 106, -124, -122, 22, 113, 22, 51, -14, 68, -2, 24, -110, 20, -31, -55, -127, -14, 53, -73, 85, -21, 75, -13, 20, 19, -36, -74, 40, -45, 86, -113, 35, 34, -77, -17, -117, 17, -72, -86, 38, -123, 79, -36, 60, -87, -31, 81, 72, 109, -97, 56, 21, -31, 96, -78, -3, 116, -69, -127, -97, 23, -11, -103, 77, -108, 5, 14, 91, 53, 29, -83, 61, -27, 95, 110, 17, -72, 123, 89, 77, -8, -75, 28, 92, -11, 52, -73, -86, -15, 92, -84, 84, -114, -65, -34, 77, 97, -83, -128, -33, -11, 58, 77, 80, -115, -105, 95, -100, -28, 12, 4, -110, -96, -9, 81, -38, 109, -112, -111, -75};
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
    msg.setTimeStamp(0.7812885703709493);
    msg.setSource(36517U);
    msg.setSourceEntity(170U);
    msg.setDestination(39452U);
    msg.setDestinationEntity(248U);
    msg.fps = 191U;
    msg.quality = 76U;
    msg.reps = 220U;
    msg.tsize = 249U;

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
    msg.setTimeStamp(0.42716741216955223);
    msg.setSource(3647U);
    msg.setSourceEntity(61U);
    msg.setDestination(4493U);
    msg.setDestinationEntity(127U);
    msg.fps = 210U;
    msg.quality = 103U;
    msg.reps = 152U;
    msg.tsize = 77U;

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
    msg.setTimeStamp(0.30931308996856266);
    msg.setSource(34300U);
    msg.setSourceEntity(10U);
    msg.setDestination(4743U);
    msg.setDestinationEntity(235U);
    msg.fps = 104U;
    msg.quality = 121U;
    msg.reps = 108U;
    msg.tsize = 187U;

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
    msg.setTimeStamp(0.17612793407399685);
    msg.setSource(1970U);
    msg.setSourceEntity(184U);
    msg.setDestination(25907U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.8798674885469961;
    msg.lon = 0.21752415503173395;
    msg.depth = 213U;
    msg.speed = 0.5059446900449439;
    msg.psi = 0.6174360379336841;

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
    msg.setTimeStamp(0.5236831230300322);
    msg.setSource(46178U);
    msg.setSourceEntity(140U);
    msg.setDestination(22648U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.9337386985431988;
    msg.lon = 0.1000941099728051;
    msg.depth = 113U;
    msg.speed = 0.12155552466177266;
    msg.psi = 0.36902660610389715;

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
    msg.setTimeStamp(0.8423464341740986);
    msg.setSource(49893U);
    msg.setSourceEntity(123U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.2412684056819222;
    msg.lon = 0.4425209032949786;
    msg.depth = 132U;
    msg.speed = 0.5408512064065326;
    msg.psi = 0.24993361374333467;

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
    msg.setTimeStamp(0.2846262304429137);
    msg.setSource(4147U);
    msg.setSourceEntity(39U);
    msg.setDestination(58176U);
    msg.setDestinationEntity(59U);
    msg.label.assign("HGZBEUJKJWBCEMQXVVOIVISVAIFPOHZLYCXPUKSYHMORFYZHOTEFPXIKLSWDEFMUITWYYAENJUNEDIBCDWTHKPI");
    msg.lat = 0.6786403738667607;
    msg.lon = 0.34645088229707033;
    msg.z = 0.05153590891848192;
    msg.z_units = 200U;
    msg.cog = 0.01538064103536707;
    msg.sog = 0.7400362783544542;

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
    msg.setTimeStamp(0.7373037165423648);
    msg.setSource(2600U);
    msg.setSourceEntity(185U);
    msg.setDestination(37034U);
    msg.setDestinationEntity(158U);
    msg.label.assign("LKYUMSTKKVREGYKYGMBBLLHJXRMD");
    msg.lat = 0.6791283041724031;
    msg.lon = 0.14408037526885142;
    msg.z = 0.5531608790383642;
    msg.z_units = 5U;
    msg.cog = 0.5467466131517406;
    msg.sog = 0.10754721084057017;

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
    msg.setTimeStamp(0.17282960749343834);
    msg.setSource(47381U);
    msg.setSourceEntity(129U);
    msg.setDestination(58410U);
    msg.setDestinationEntity(241U);
    msg.label.assign("FQARTSGMPPURKVBUJZETESCOJKJRNAOCLOLLYCQYAFOBYGOGQUAEAVSFNKZKZZCNCNKNQY");
    msg.lat = 0.5898909326395934;
    msg.lon = 0.09984984905067695;
    msg.z = 0.7507655879515606;
    msg.z_units = 177U;
    msg.cog = 0.41794700835113596;
    msg.sog = 0.7018953612908216;

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
    msg.setTimeStamp(0.48118737966376446);
    msg.setSource(33078U);
    msg.setSourceEntity(138U);
    msg.setDestination(31770U);
    msg.setDestinationEntity(190U);
    msg.name.assign("WKFPUHMVSJXTFHFVDAQJTFIUSCAZHSVFXHBFZXPGHWLTQOADMIMJIUPXCRKVFLRVXCRYHJZNSVCNBTOTUHMIEKQOIVIZXYBMQPZAPDROADUBTDPSOCYYAGQEQMYHEIZGUKUBNRQMWJREIMEYSCLIKWCRBLEDCSZUVPHFDGJQGLSTEWMUOBCVKWGMROX");
    msg.value.assign("MCEVPTJVLGUVGQSNJPZWLQIKEGCVHYXYNHICBRHWKAQVCOXLPSDQQWZAMOJZBWEEXFUUDQZTNEYBPFMURTKATATZBUNGRGUAFAEDXSCKSFHNMIAVWOORIZLHNYRSMETYCBTQZYYJLEXZBEYZTPKDSLWCLRQCRHVCRUHZLVPRJBUKOIKXPYFXKDBPWX");

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
    msg.setTimeStamp(0.6799564398971343);
    msg.setSource(64340U);
    msg.setSourceEntity(13U);
    msg.setDestination(17791U);
    msg.setDestinationEntity(210U);
    msg.name.assign("MVTGIEXDBVZNTXMXWZICWBNRNWIODRBTQOFCRGUSGHBGDWYKUHLYVSTOYUQVFARDWKMNCXJAGNXLGKAQLRYNHLMBKIRJTZPUFFYKACEWODALBFOZJGVSVUCMZFOLEDOUPHETJKOIBERHBUSLFCVOFDDNRNZZALXYQPYQPWHZAYEJFNPRHBCCJOCBSYTAMRXIQIMAATGJSJQHZKFLUEHSMPSKPXZIKXGUMJE");
    msg.value.assign("ZVXJGOSBTZOSSEOSZJBVZDAGDDKFMKTARWYHJJRBWGPHECIPBQFKEIXUUQDNUEWR");

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
    msg.setTimeStamp(0.9051792991185267);
    msg.setSource(10252U);
    msg.setSourceEntity(89U);
    msg.setDestination(263U);
    msg.setDestinationEntity(178U);
    msg.name.assign("LERWYEJGIMVAPXKQBTCOFEYJPPOWDXDRVRFFIUSSXBBCNOXRISZVGLBTPXMDLLPQHDINSZFYRKJURJLPQGOFKQYVESSXBHGKBBYYIVGCOGQZONXTTPCTKUCYVFWHXEYAHOFELMB");
    msg.value.assign("BSQWFDKZFXMEXNEVNVHDSTHEUTPXTZUKIEDYKILZSRHVELJUBWUJLUZDPQORMXTGMBDFJGKCOIVZQWELJOJYVXNVNYQITIARNKCAAFBHWRLKGHPVXOPAAUZYXGFNIIJYDTNVGXWCQFSEOBSTUWGZSGPVWXCHALDMECMOTSRGMMYBPJWSKCZBHTLYGVJIDCNBROQMAIEDAHLGFRFNYKHKQFCJNQBMUUARFWXPDRHKYOITUREBOALQPPC");

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
    msg.setTimeStamp(0.3724087117986351);
    msg.setSource(21791U);
    msg.setSourceEntity(121U);
    msg.setDestination(26911U);
    msg.setDestinationEntity(254U);
    msg.name.assign("TQENOFWAPUDUEBPFIJLKFTQNGGNLACQBRDXYPAWTHWNHTKNKUOURXQJMTYOVWWNGICUVQFJKXJBSQHRURP");

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
    msg.setTimeStamp(0.032061432167063364);
    msg.setSource(35096U);
    msg.setSourceEntity(138U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(4U);
    msg.name.assign("AAWWZICWFXHCFMKYYVBWSSJGUDTEDSOTKMXBXTFKOURUJMISUPHDCOALHPVAGGRLFLTYTZQQVLKTCEZJGDOVSFRRZRTGEIMUTYIIESXGFDRZODGOVHIRVGMCHXEPDESEANPYLCIQMUUYJDMXKTCZNWASQLIBNQIBHVQPJQBCIQRWGWTWCFNJZYVEHUZXAANBQFPNNSLBLADMAWEBRPKXBNEKXCJMVKHNJOBOLYNP");

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
    msg.setTimeStamp(0.3990110168509211);
    msg.setSource(41911U);
    msg.setSourceEntity(57U);
    msg.setDestination(10948U);
    msg.setDestinationEntity(26U);
    msg.name.assign("PAMGHFUDJOYWXRGEGCZIMNBKUQBWDLEMBHYVOIYLMXDPSHEGTIHOEIVGXVTQB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ROHHQYMPALTOOUNMNQMHTXVDJSHSKTQAWFMPKJIFBDIYEZUSDCTGVQQHAYZGZKREDHFYBQLYVJCZJBTIMZOFKAEGWBMNPHGIURCMKVHNWZBFPCRQYLTNIVWVBYFDXITDAKOLSXWGFINSGGJZLMXZNEJWXTDSZNSFE");
    tmp_msg_0.value.assign("IBOEMNVTSCUJUMHKPEXEPUOJNNQEWKDGOFEZYIQMYFBNTPVMXDMIXLXVZDKPWOYSFTKKWHRJGDZQCIKHDRCNFGIUACIIJSPHCZLUFYXSGVWIJXRGZRJMGCLWGOSVFTDWU");
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
    msg.setTimeStamp(0.11945261678605423);
    msg.setSource(5608U);
    msg.setSourceEntity(184U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(4U);
    msg.name.assign("BYUSJKXLLSRTJMPIJPATEYFNEGPMFJZRNLVDIDWQIUHGCDVERVPWZLIWJKVBJQBGEQABQMNXOA");
    msg.visibility.assign("NCWPPXSKITZHMALAGTRFPUUFESWIFYKQBCOIGLAIACDWFSEUPXGCEOKSTUPSLVTDYWDTTGEQEMGMIVUDONYRARUGSHYNMSVRSJX");
    msg.scope.assign("FJEVBRGEYN");

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
    msg.setTimeStamp(0.19940824865188855);
    msg.setSource(51012U);
    msg.setSourceEntity(8U);
    msg.setDestination(6366U);
    msg.setDestinationEntity(233U);
    msg.name.assign("SWBHJDHPWNOBSFSTADIRQVGJXALBXPZMDNFZPMHLENJYFUTGJTEFKUIARXISKLQRUNGVVYSIKJXMYHUVOFFWUWYVOVEVQRBECAULHPBPQNSCABUNONXXOBBDAXHNWHLZEKXFQSKGZVMWGMCEWQLURKYGZWIZKIHBDVEZGAMILQCRFTTHNYLYIHLJCDRYXJSDLKYAJQOPOBAKNSTPTDQCGGWMUFCPRYG");
    msg.visibility.assign("ABYQZMVTEIWMINXZBUIMFUGWEUURSMTBPIVHNPCVLVEDAWGAWZDQYTFHFBEHAPKJKOOT");
    msg.scope.assign("YZBUZKZEKSSWJAERHXNHFHLTJPIUVIWIDNMAFYHPJDTMFWQDW");

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
    msg.setTimeStamp(0.23815969995796749);
    msg.setSource(23492U);
    msg.setSourceEntity(178U);
    msg.setDestination(17037U);
    msg.setDestinationEntity(249U);
    msg.name.assign("ZKYBIHWYFFJOCQBEJOGBCSFOKABCKYCBWZITTKAYIWXNRUFEOUTLOFYEUEDZPQNLYCTTQHMMDVGNKJXIJZETHLOHZXZYVOHMMTAJLEUXMDRXGMKFJCAPLGMSSPSRBRUAXYTWFJQRLFIQAVGZLBADVGFJULPHDOVPNSLS");
    msg.visibility.assign("QRAKLCZFYZNQYXZNAJRGJUCPBMGDKNUEHWOYAENCXWSMNHXRNTJCULDEPFJXIIROAFIIVZLHQCYXDCBBBJWDYLSTVVGOIDBITOWAKVPEFUTJATIALGLWMNEPRYKQLKQQDHVGCDSCM");
    msg.scope.assign("MBYFBGYFSACSKEGVTVEJRYTCESTAGPKMNJBMAUOXIMATBOWNPFDLVXPPKIRGJYZKJKQELXXPCORUQDAIPKUSORVNESDDZHRRZVOIBOVFWPLDZOYBALGWSEHACYULGGBJNSTINGMSAFRWTDXQEIQIOTKTZSZWUATWQAJDXYMQGYLFSTDDCQRNJBHOUMHKFCNUVRNIIPZCONVNCLKGFLFZBHWXMUYMXBZZWFUVLQLCUXMKX");

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
    msg.setTimeStamp(0.2825670508911534);
    msg.setSource(3676U);
    msg.setSourceEntity(163U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(102U);
    msg.name.assign("ARVCFXWBIQGSKQMVFZJXHAFERNEUSWFHSCMHNLGXCYQIWSRKLXIKIYPDWVIPVRULZPADHFETNJYTZLYWWMHZYHIEUKYQIOKFBGBZSBELTRAZFGJOJFKBVXORLKUTBPSUJHTKOUGOXWJQFODHPLOBRDMGHPMXTWQE");

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
    msg.setTimeStamp(0.4662837390773127);
    msg.setSource(58172U);
    msg.setSourceEntity(169U);
    msg.setDestination(59224U);
    msg.setDestinationEntity(70U);
    msg.name.assign("AAPGFSAEBNTKCWPESFRUOSDQTKLILYMUASSZVNSIFPFOASMRPKVEJGIXZMHWXOAPMOEJQWRAJBWRPWOERLVQIMZOCLXSRBPXJUTKBDLYDN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WZMJMWIEIYVGLZFODXSYWYULNGBNOLZWSUVTIMFQFENYDXLOLBFWBCYAPJPNDCRUOSKNFTCQXRLKHCQVAOBJGBHONIRPBJCUXPVBJQNYMKQMWAIRROXHXFARBSLQ");
    tmp_msg_0.value.assign("NVEUHOUSZEFGCMIDCQDMITRNEXQPYYCWQMRUMMJUEWUOTCPGDWHLBAUSALDYNLLJBVIVICEFFJJYYCNLYEXQZWJJPXZVHSOFJYLWCXJATNAGVCNBNGBWGMFTMSKSSILRZ");
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
    msg.setTimeStamp(0.9637452171199097);
    msg.setSource(20333U);
    msg.setSourceEntity(193U);
    msg.setDestination(47812U);
    msg.setDestinationEntity(8U);
    msg.name.assign("ZRBJMLODTAEVVQAOTOLVKEYGVMRWUIW");

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
    msg.setTimeStamp(0.6399891286371612);
    msg.setSource(17343U);
    msg.setSourceEntity(243U);
    msg.setDestination(60928U);
    msg.setDestinationEntity(103U);
    msg.name.assign("GOXVDMKDXKTQFBKPQCMVLZRWIRIGRHIVZBHSPNZYMSRSQEEDCDMAXEGCYGZMTWODHTTIEHJJFMBCUYCOOZLDNFOYZBNTUAUQAATTAXMKTAPSDOMTDHGSWWABLLROUCZULIPFPPVVQXQFUQNHVDYPINJMSXPFXBKYTLQLISQCWRGURVHBLZEIHCEWWUXXEURLKVNANGJPYR");

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
    msg.setTimeStamp(0.11937802631572603);
    msg.setSource(53882U);
    msg.setSourceEntity(67U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(235U);
    msg.name.assign("QSVHNGBHOIVIKXSGWAPLQHJNOBEPCZDFPCGCHBZGWTNPLLFJCOQTTPSMBQGYESDYMVSUUNGYUCMTUWXXCIIATACQJVFNAXXDNKGLCBVKDLOKFTRILITHMKJQJZUCGBDJUMOUMQSZFNTOYXJUXEAQORJVKIMEDPWBNBIWNPIKOUVEVXBHAPZJSEHARRWZPJLEYZOSYAMEKTGHAQ");

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
    msg.setTimeStamp(0.2937438061622186);
    msg.setSource(62258U);
    msg.setSourceEntity(221U);
    msg.setDestination(32511U);
    msg.setDestinationEntity(155U);
    msg.name.assign("MDUFEVPTNICNWAHIUKDSWSYEKFFIVETNZPTYXHTCBWHNONHPYOYTVZJGMEROIMMODZCCTC");

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
    msg.setTimeStamp(0.7131764302793356);
    msg.setSource(3509U);
    msg.setSourceEntity(36U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(242U);
    msg.timeout = 3614047242U;

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
    msg.setTimeStamp(0.5318213003111135);
    msg.setSource(41535U);
    msg.setSourceEntity(91U);
    msg.setDestination(60443U);
    msg.setDestinationEntity(72U);
    msg.timeout = 109348425U;

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
    msg.setTimeStamp(0.68132116931046);
    msg.setSource(16352U);
    msg.setSourceEntity(250U);
    msg.setDestination(38732U);
    msg.setDestinationEntity(13U);
    msg.timeout = 21480116U;

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
    msg.setTimeStamp(0.18471870659187284);
    msg.setSource(18561U);
    msg.setSourceEntity(132U);
    msg.setDestination(27987U);
    msg.setDestinationEntity(225U);
    msg.sessid = 2389831452U;

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
    msg.setTimeStamp(0.06831757195180532);
    msg.setSource(49711U);
    msg.setSourceEntity(209U);
    msg.setDestination(2271U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1198137978U;

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
    msg.setTimeStamp(0.9260726135941842);
    msg.setSource(34056U);
    msg.setSourceEntity(21U);
    msg.setDestination(6523U);
    msg.setDestinationEntity(140U);
    msg.sessid = 1381276005U;

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
    msg.setTimeStamp(0.4754950901394219);
    msg.setSource(43238U);
    msg.setSourceEntity(146U);
    msg.setDestination(12308U);
    msg.setDestinationEntity(63U);
    msg.sessid = 196681776U;
    msg.messages.assign("LTPUSDYZBNEYGVWHICTJREVDXKTAGOQHDQBZGLMVCNMTVIAKTYLVAMDYDZJOKMDMXFZSCMBQDQ");

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
    msg.setTimeStamp(0.5980959961069885);
    msg.setSource(17105U);
    msg.setSourceEntity(177U);
    msg.setDestination(18044U);
    msg.setDestinationEntity(75U);
    msg.sessid = 1462551636U;
    msg.messages.assign("ADWOSVJDDTVMJGMLOIWZHNIECTQYWDEUNTLWGPDKPCASPTVANGPHLKJYEURYMYDGFVIVCEBSBIZHUODFGTOISLJHTVAFPUSYXQMWIKAQWLNB");

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
    msg.setTimeStamp(0.5800977087597566);
    msg.setSource(39902U);
    msg.setSourceEntity(11U);
    msg.setDestination(13699U);
    msg.setDestinationEntity(110U);
    msg.sessid = 3381948664U;
    msg.messages.assign("RGYCHUJSGESYVCDLZLBFTZNMXNOLYFIBROHOPJGHQSXYSLUIKKBTBOSHQCQJIEKLNIMQOTXPYTVCOTQJMBRYGENTDIYFMNRWKUIRHDCVXJWBOLHKESVAZDWBDEBCHPIZPVIDNRBPCZWGZOZPHQJKGLMGVFDRGOVFTXJCIWNJVUYZUAEXXRUMZVYPMXC");

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
    msg.setTimeStamp(0.2528681737607109);
    msg.setSource(1535U);
    msg.setSourceEntity(42U);
    msg.setDestination(4391U);
    msg.setDestinationEntity(13U);
    msg.sessid = 1635066853U;

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
    msg.setTimeStamp(0.960414423157064);
    msg.setSource(38898U);
    msg.setSourceEntity(29U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(148U);
    msg.sessid = 1580738985U;

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
    msg.setTimeStamp(0.0370024298677174);
    msg.setSource(34866U);
    msg.setSourceEntity(29U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(212U);
    msg.sessid = 4281728246U;

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
    msg.setTimeStamp(0.6729685641434763);
    msg.setSource(44576U);
    msg.setSourceEntity(160U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(67U);
    msg.sessid = 1266452579U;
    msg.status = 222U;

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
    msg.setTimeStamp(0.16970943449957443);
    msg.setSource(28858U);
    msg.setSourceEntity(65U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(232U);
    msg.sessid = 3347757028U;
    msg.status = 12U;

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
    msg.setTimeStamp(0.21266438973549318);
    msg.setSource(26246U);
    msg.setSourceEntity(174U);
    msg.setDestination(14441U);
    msg.setDestinationEntity(136U);
    msg.sessid = 2784338125U;
    msg.status = 199U;

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

  return test.getReturnValue();
}
