//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 4056d6f4ac57c75cbaa27da48b4b7c3c                            *
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
    msg.setTimeStamp(0.11454695638762535);
    msg.setSource(1322U);
    msg.setSourceEntity(48U);
    msg.setDestination(8679U);
    msg.setDestinationEntity(60U);
    msg.state = 12U;
    msg.flags = 238U;
    msg.description.assign("QMZSUOPSKVHYEGCKYSSBFTKSOZEPJUUDPGIENIHWFPGLEEYYZICVMWSFONSYBBNJATNMYTGNUVUACUNRAJUFYBJMFAWIDOQOQNXLQVKVRGILQZAIHHUMYWKRPIKPXRLZNTMLNTFZCORBGWAFRQKOZDMMQJAJOJETLTLBVXSFMEDWJUXQWZSKPRCODPDMCEZLXRTEVGIBQLOGRGHDKCCHWEXPXGFAWJNSXBBV");

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
    msg.setTimeStamp(0.3191619020266704);
    msg.setSource(48139U);
    msg.setSourceEntity(250U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(140U);
    msg.state = 236U;
    msg.flags = 231U;
    msg.description.assign("ATHUUOHTHGBFKBWKIPYDCFLXUNGPTSJQBJRDYWLYLYCQFOLTNLPNVWWRXGUVSRMEACPKNQWLDX");

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
    msg.setTimeStamp(0.2505269447308309);
    msg.setSource(4199U);
    msg.setSourceEntity(254U);
    msg.setDestination(46480U);
    msg.setDestinationEntity(205U);
    msg.state = 60U;
    msg.flags = 114U;
    msg.description.assign("AVUODYPQDKPGKALIWWILFCTJPBLYSSKQAMHWURIDGBHMFHEARKWRITYDNZVWDMCCFGFYUCTNJ");

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
    msg.setTimeStamp(0.30732027017522134);
    msg.setSource(30241U);
    msg.setSourceEntity(199U);
    msg.setDestination(928U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.25933857451907305);
    msg.setSource(57897U);
    msg.setSourceEntity(254U);
    msg.setDestination(48352U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.461299028202918);
    msg.setSource(27356U);
    msg.setSourceEntity(82U);
    msg.setDestination(22847U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.7553774268335521);
    msg.setSource(38185U);
    msg.setSourceEntity(177U);
    msg.setDestination(20267U);
    msg.setDestinationEntity(244U);
    msg.id = 107U;
    msg.label.assign("DUNXIOREMUPPUWFGBVKGGMUIOCYNHGLAQICFKSLDJLCGDYJIOMXTVMVYNXKWGKAYHIVGVSODXROFMSEQIFOOZNCDKTKABJUWIATNQFMPIERDANPHJQZHTXCULB");
    msg.component.assign("XVBKKTAHTCJGHQNRBCYDAYQVXFNRLDJUCJXDNMDPVOLWXAFIATKSCHSOOPZJKGWUUVUCEDZNWYIQMRSAEHABCIUISGTKURCHWIQFBELPKBFPUHLQXWMFGWNMEYORQYBJLWCQQGHUFNDMZTSEUSNZYYZAPVAWEXFZWITO");
    msg.act_time = 17825U;
    msg.deact_time = 54169U;

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
    msg.setTimeStamp(0.3356108179645051);
    msg.setSource(45028U);
    msg.setSourceEntity(121U);
    msg.setDestination(26206U);
    msg.setDestinationEntity(120U);
    msg.id = 70U;
    msg.label.assign("TOAOPIWFWIXQBWBRXWWCENDAMPFUCRTFVWVASJVFHMFZKOHDIRJUQKUCTDYVULZULTEVCLFXYMKQHDYIMCRABCZMJVTNDEZCOSNJVDNUJBSDOOISMUQNIKPVNNLAXXMPQP");
    msg.component.assign("XAZEBHNHYGHCFHCXEYVMSWBZIAWRQDBWWGZFNOYTUPHBYZHLYNFBBNYTLVXKFUTVIARJEZLYXRTUHQUGYPFTOIWOSAPSBBEASVRTCXFKMQFDXFKMOUMICRAKGXZQUEKZNVNTDHPOLQOSVIEVJWMOUGCTGICZAMVXFPDPJJUFGDODPOIAKJQR");
    msg.act_time = 41615U;
    msg.deact_time = 41010U;

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
    msg.setTimeStamp(0.19822885567398107);
    msg.setSource(60304U);
    msg.setSourceEntity(195U);
    msg.setDestination(30793U);
    msg.setDestinationEntity(48U);
    msg.id = 112U;
    msg.label.assign("JTCZXRFPWWXPMICPECKOPCGQYNCNVIQAMBMDJOOXIJGHURCBNDBDEWWFOFHYYTWSHUBSRXJEHUZPHXGYVHNGVUPVYQYWXAZMIONLLLBUGROARFGVXROHYRPHHTFQKGWUKSWYXCDKOUMVCALBDNLMELFONMCEKOZSSDBLSLCRDIPKUEXPBJWNUQSLDAGQZJIASKFQKJGHFFJNSMTQJFBTMTVEATMUYDEEYGEZZAPTDTQ");
    msg.component.assign("WCCGJNDQRXRQZMWVBYYBNIPWCZOTAEBUWJZGDAIEREYSTLSCKEDCEMSABKIZTXCAHCQMTZYNJAUTERWPPDFXYALJYDFXYMSUCHWVRYUUZIFGTAFQRMVOTONBKNRZOE");
    msg.act_time = 19895U;
    msg.deact_time = 4390U;

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
    msg.setTimeStamp(0.6166151727039746);
    msg.setSource(25823U);
    msg.setSourceEntity(53U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(83U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.09205719403317458);
    msg.setSource(20091U);
    msg.setSourceEntity(45U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(207U);
    msg.id = 205U;

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
    msg.setTimeStamp(0.7352668321514276);
    msg.setSource(19607U);
    msg.setSourceEntity(81U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(170U);
    msg.id = 199U;

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
    msg.setTimeStamp(0.27246731682497094);
    msg.setSource(43949U);
    msg.setSourceEntity(45U);
    msg.setDestination(14274U);
    msg.setDestinationEntity(221U);
    msg.op = 203U;
    msg.list.assign("OANMDBXWMXJGJZRGWRASFZBGUBQULMTMGKHTELHIHCFNVVRKFHRSELVUQAQMUWVNZIFPXTOAPVUIGEDTXGUZYKQHPLXSCLWMEAQRYOFJOASXBZBZOLNEHSPMPKJTBYDKPRLQZIDTOLVRBFKYFJYYCSKYPZMWAJCTGNJATSMTCDO");

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
    msg.setTimeStamp(0.09584176822262769);
    msg.setSource(27962U);
    msg.setSourceEntity(106U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(229U);
    msg.op = 173U;
    msg.list.assign("VSIVYLJTNGRZAECKOTZQLSETUZDGUMVMBMVTGPPQQHE");

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
    msg.setTimeStamp(0.44011506738700845);
    msg.setSource(55139U);
    msg.setSourceEntity(236U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(53U);
    msg.op = 172U;
    msg.list.assign("GWBGUCGITPLOSFAKVQODGMPJRHCOYOGXJYTFTXOIKDZUIPGJMSVWKCPLLPEVQWNZERALJXDBUXCUNNICHNPZQDXHCTILZMLKGEFCDSDUKZMFBXVDLVLLAMVBUQWBBEMHUOBXRSKJQQEOH");

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
    msg.setTimeStamp(0.06491243362162646);
    msg.setSource(44561U);
    msg.setSourceEntity(22U);
    msg.setDestination(47410U);
    msg.setDestinationEntity(41U);
    msg.value = 28U;

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
    msg.setTimeStamp(0.5000628572899426);
    msg.setSource(62156U);
    msg.setSourceEntity(70U);
    msg.setDestination(15513U);
    msg.setDestinationEntity(172U);
    msg.value = 8U;

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
    msg.setTimeStamp(0.993292435434915);
    msg.setSource(12146U);
    msg.setSourceEntity(125U);
    msg.setDestination(42020U);
    msg.setDestinationEntity(228U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.4941605378523001);
    msg.setSource(9035U);
    msg.setSourceEntity(134U);
    msg.setDestination(16085U);
    msg.setDestinationEntity(137U);
    msg.consumer.assign("GCSMNDDTSHKOCQNVRYLPHICRYBRAGYLVPHTKJAGWUAUXOCMZJRTTOQFZPNVBLMLZVMLZHGYXLOBOAISHSFZTQWEQBJOIMSMRQDZCJQQNJATPYMEFHPZXFFTXRHLAZTUPBIHNDQBELJUFOVKGWWFYBGUPIKDEDUMBWNVAGETEEKPCSQKRUCIUGIDSOFBFKEVFHCRXUWVQZA");
    msg.message_id = 26768U;

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
    msg.setTimeStamp(0.53530882101551);
    msg.setSource(52967U);
    msg.setSourceEntity(161U);
    msg.setDestination(12189U);
    msg.setDestinationEntity(251U);
    msg.consumer.assign("QGQMKXOXCQNGDCWJGKBNWGKCPCHRTFXVFRMCDTZSIGZOXIBSOLAJTJBAJUMYUAZVMWFNCHXIPFLNKXPOVJLNCLHXBYGEVYUWAUJPDRYLQVJIIWYNZTLBELGEALPPRFAHMTTSBWEUKSUVGCOAZTPHWNDPIONDPYJBSHASUEFVQDCOJ");
    msg.message_id = 47545U;

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
    msg.setTimeStamp(0.5242043331069152);
    msg.setSource(52986U);
    msg.setSourceEntity(109U);
    msg.setDestination(7540U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("TIWXZVUGDFYRQFCWTIRJJAIWGOTXLLQFFGOUWAPYMNWSXQSZNLAOEKJVOKQDFAVRZJZCMDIKCQYHKLRMTBQTXJMOBPRZGGNVHUKBUEBZVHOXKAFTTECCNZTLCDKOQJXVXXAWUMBRVLKFQWJABHIIMHIZTKBYUDMMSNXLSLYDEQAONNEBAPJHREJCGHHRWPPKSCIRYMGSHYWUBPSYEUGMAWISGPVYELDVPFYLISPBVUJENGCFONDUPX");
    msg.message_id = 17058U;

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
    msg.setTimeStamp(0.8177581613101321);
    msg.setSource(7510U);
    msg.setSourceEntity(93U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(198U);
    msg.type = 86U;

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
    msg.setTimeStamp(0.16081114876448088);
    msg.setSource(51305U);
    msg.setSourceEntity(58U);
    msg.setDestination(41998U);
    msg.setDestinationEntity(112U);
    msg.type = 20U;

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
    msg.setTimeStamp(0.4917267209412812);
    msg.setSource(7675U);
    msg.setSourceEntity(102U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(145U);
    msg.type = 121U;

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
    msg.setTimeStamp(0.5652755485818665);
    msg.setSource(18319U);
    msg.setSourceEntity(98U);
    msg.setDestination(28513U);
    msg.setDestinationEntity(27U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.9746062463048027);
    msg.setSource(54054U);
    msg.setSourceEntity(237U);
    msg.setDestination(324U);
    msg.setDestinationEntity(92U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.9470737170191015);
    msg.setSource(15300U);
    msg.setSourceEntity(50U);
    msg.setDestination(14846U);
    msg.setDestinationEntity(14U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.712994347153186);
    msg.setSource(16639U);
    msg.setSourceEntity(82U);
    msg.setDestination(10869U);
    msg.setDestinationEntity(192U);
    msg.total_steps = 161U;
    msg.step_number = 58U;
    msg.step.assign("AJBGCVHXSOYEKJNGSTROENMKAWFVOWGCUFFHGROPNNI");
    msg.flags = 165U;

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
    msg.setTimeStamp(0.07643885142391293);
    msg.setSource(62649U);
    msg.setSourceEntity(247U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(28U);
    msg.total_steps = 180U;
    msg.step_number = 235U;
    msg.step.assign("QIHUXAXHUUPTIRXYEWSLLOEUTBOXMXCDJKTDKXZGUGNTYZICJMIRGJMTGKFYUCZATLOWNLMHVNIPQYNYEBCHHFKAPAOEQJ");
    msg.flags = 27U;

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
    msg.setTimeStamp(0.1387614113071639);
    msg.setSource(8335U);
    msg.setSourceEntity(98U);
    msg.setDestination(25423U);
    msg.setDestinationEntity(219U);
    msg.total_steps = 202U;
    msg.step_number = 253U;
    msg.step.assign("JMURWUAFOOHGDOOJMYQRKDFPBSTVGKTUULQCBAIIXFSPPOKQJEVMOQQTKBAPNBVRACZWCVXANBUBNTPHTGOJEZDWGCDEETWLJYNDNRDFAOUXRGTKIYTZZKWRUBTMRSHQVRIYNHNYXGPYLLOMJUVFQQQSAEWTVIAMHLICPBKSLJIWEZMHSSGVNOYGRWZSJNFC");
    msg.flags = 15U;

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
    msg.setTimeStamp(0.6989866640780642);
    msg.setSource(8839U);
    msg.setSourceEntity(152U);
    msg.setDestination(37116U);
    msg.setDestinationEntity(218U);
    msg.state = 229U;
    msg.error.assign("NAFEFGIQPYIYBQYQLUYCLJVWYWSAKKNZWUYQEUKQVGWKUPWHSORZXNEZGFVLUTPFIICRMLOENNOJHXSPBLNRXWAGDIAZSXULJJDJGWTCTPFCIAZGEMVHSCDILAWPNMOLFZMCBXDWPEPFEBVQCSHZRMZMNGAERHBCIMBOVHIUKLWXXTHKSRTOAYHGTRHMGIDAUQTFGMRVCYBBSNVCZQQFJXVJDSJOZRBYAPTYKJKXFQUKRTXKNDMDOVUODEHD");

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
    msg.setTimeStamp(0.9399783653947351);
    msg.setSource(58753U);
    msg.setSourceEntity(224U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(53U);
    msg.state = 94U;
    msg.error.assign("ZOKVVWEWHYURGZWJDVORCDNAYMJDUEBLILTWAWYVDINQVPGSDYBUYZNXJZFCJEKOCKMMUOKDUSLPCXBBCMXTTFSSAKXKBZWBEKGZLADUNVLUJHAQGSMZOWZHAHBKLFATRFPMHLJVSBMCPQY");

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
    msg.setTimeStamp(0.38938345523220774);
    msg.setSource(38159U);
    msg.setSourceEntity(59U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(65U);
    msg.state = 242U;
    msg.error.assign("HTYBDMRBPLIVHFYTBRBTIWZCVKAYNYEGNOSUDNFGHO");

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
    msg.setTimeStamp(0.8989321781876201);
    msg.setSource(2161U);
    msg.setSourceEntity(6U);
    msg.setDestination(27176U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.21221444145971036);
    msg.setSource(30390U);
    msg.setSourceEntity(54U);
    msg.setDestination(54533U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.913596961279971);
    msg.setSource(17643U);
    msg.setSourceEntity(47U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.5078766971683936);
    msg.setSource(20806U);
    msg.setSourceEntity(243U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(163U);
    msg.op = 56U;
    msg.speed_min = 0.10787800335391784;
    msg.speed_max = 0.6252828761119785;
    msg.long_accel = 0.9295650199520463;
    msg.alt_max_msl = 0.683911445795967;
    msg.dive_fraction_max = 0.6370516214953174;
    msg.climb_fraction_max = 0.4895301163105015;
    msg.bank_max = 0.5215644975829621;
    msg.p_max = 0.59000447174494;
    msg.pitch_min = 0.6199506682049689;
    msg.pitch_max = 0.5256061414979867;
    msg.q_max = 0.16279333977987076;
    msg.g_min = 0.6711172895245917;
    msg.g_max = 0.7759716946637186;
    msg.g_lat_max = 0.8040710693351135;
    msg.rpm_min = 0.16958143369283218;
    msg.rpm_max = 0.9334140122959342;
    msg.rpm_rate_max = 0.79517465886758;

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
    msg.setTimeStamp(0.7365203396941078);
    msg.setSource(48032U);
    msg.setSourceEntity(240U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(209U);
    msg.op = 95U;
    msg.speed_min = 0.5056730534081452;
    msg.speed_max = 0.7585757041021156;
    msg.long_accel = 0.7768444867405461;
    msg.alt_max_msl = 0.74623323895287;
    msg.dive_fraction_max = 0.2946529473539239;
    msg.climb_fraction_max = 0.8797981655335242;
    msg.bank_max = 0.7705179938862953;
    msg.p_max = 0.8869044663599187;
    msg.pitch_min = 0.580571078402461;
    msg.pitch_max = 0.9850659075763506;
    msg.q_max = 0.34462368375294083;
    msg.g_min = 0.1855517771020403;
    msg.g_max = 0.06970177546805556;
    msg.g_lat_max = 0.7217462936136791;
    msg.rpm_min = 0.5906508041720383;
    msg.rpm_max = 0.19849083696768577;
    msg.rpm_rate_max = 0.5864881353622609;

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
    msg.setTimeStamp(0.7348760799336234);
    msg.setSource(40443U);
    msg.setSourceEntity(185U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(76U);
    msg.op = 3U;
    msg.speed_min = 0.9416706136318443;
    msg.speed_max = 0.4860245573821438;
    msg.long_accel = 0.6904170099972033;
    msg.alt_max_msl = 0.7125893854182708;
    msg.dive_fraction_max = 0.9858365809873503;
    msg.climb_fraction_max = 0.4349435230155041;
    msg.bank_max = 0.4740633688477127;
    msg.p_max = 0.42601475154363166;
    msg.pitch_min = 0.7005050992548552;
    msg.pitch_max = 0.05934145340898955;
    msg.q_max = 0.6255698824330707;
    msg.g_min = 0.6071742976526133;
    msg.g_max = 0.6741224355993908;
    msg.g_lat_max = 0.6342943623773679;
    msg.rpm_min = 0.8889982890650713;
    msg.rpm_max = 0.5703201488509961;
    msg.rpm_rate_max = 0.9579127225982569;

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
    msg.setTimeStamp(0.2537371535668429);
    msg.setSource(60302U);
    msg.setSourceEntity(37U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(22U);
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("KGBRSYLIZXOAHXOXIYCWJTOWNPJROPCMBZJOWJRYKXWGZIQUSSXVYX");
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
    msg.setTimeStamp(0.18011221012560652);
    msg.setSource(2586U);
    msg.setSourceEntity(98U);
    msg.setDestination(10943U);
    msg.setDestinationEntity(221U);
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 187U;
    tmp_msg_0.op = 129U;
    tmp_msg_0.err_mean = 0.0032393813220963352;
    tmp_msg_0.dist_min_abs = 0.2626867385005427;
    tmp_msg_0.dist_min_mean = 0.11828738447373521;
    tmp_msg_0.roll_rate_mean = 0.6832539855467761;
    tmp_msg_0.time = 0.038847852823800655;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 187U;
    tmp_tmp_msg_0_0.lon_gain = 0.6043385692304537;
    tmp_tmp_msg_0_0.lat_gain = 0.493197432987719;
    tmp_tmp_msg_0_0.bond_thick = 0.3352183321964246;
    tmp_tmp_msg_0_0.lead_gain = 0.34799858695599095;
    tmp_tmp_msg_0_0.deconfl_gain = 0.7823160388465055;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.906436160481083;
    tmp_tmp_msg_0_0.safe_dist = 0.897307549478817;
    tmp_tmp_msg_0_0.deconflict_offset = 0.3312069695270261;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.6683746866617161;
    tmp_tmp_msg_0_0.accel_lim_x = 0.4010745261066436;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6133316263634315);
    msg.setSource(36976U);
    msg.setSourceEntity(173U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.17276563442851456);
    msg.setSource(19656U);
    msg.setSourceEntity(71U);
    msg.setDestination(21332U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.4501647313741739;
    msg.lon = 0.6291143115095252;
    msg.height = 0.6988956850767883;
    msg.x = 0.5675523157948839;
    msg.y = 0.7817526478986576;
    msg.z = 0.8491317614177419;
    msg.phi = 0.8829883655712718;
    msg.theta = 0.16395518846206736;
    msg.psi = 0.5855229251053327;
    msg.u = 0.2641889514083434;
    msg.v = 0.11076598996279774;
    msg.w = 0.7060556369843464;
    msg.p = 0.22850907040673374;
    msg.q = 0.7400667986374726;
    msg.r = 0.015119687174989682;
    msg.svx = 0.5285197963218452;
    msg.svy = 0.4376476941423053;
    msg.svz = 0.3496570539715447;

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
    msg.setTimeStamp(0.5556925102989975);
    msg.setSource(18897U);
    msg.setSourceEntity(58U);
    msg.setDestination(49614U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.2090477436865763;
    msg.lon = 0.4380826706342489;
    msg.height = 0.1028730666433566;
    msg.x = 0.10515672003011534;
    msg.y = 0.541326457335081;
    msg.z = 0.497529068673077;
    msg.phi = 0.6724503661568066;
    msg.theta = 0.09999230691128047;
    msg.psi = 0.8486628363968762;
    msg.u = 0.17597391538413076;
    msg.v = 0.6931009995207508;
    msg.w = 0.3857323387033621;
    msg.p = 0.48791912885088906;
    msg.q = 0.9053332967108348;
    msg.r = 0.8832783849451242;
    msg.svx = 0.008670301693880833;
    msg.svy = 0.11816775325064277;
    msg.svz = 0.23418855015754247;

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
    msg.setTimeStamp(0.42912275028551905);
    msg.setSource(61541U);
    msg.setSourceEntity(229U);
    msg.setDestination(17801U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.6306187841167462;
    msg.lon = 0.2243671053544114;
    msg.height = 0.40028428038015507;
    msg.x = 0.7341703989732717;
    msg.y = 0.7314870398734523;
    msg.z = 0.8965986631265256;
    msg.phi = 0.404041490220697;
    msg.theta = 0.10478643807531751;
    msg.psi = 0.7677759165626575;
    msg.u = 0.7764270964978081;
    msg.v = 0.8049672016689426;
    msg.w = 0.5893150016996669;
    msg.p = 0.6208354203399862;
    msg.q = 0.8320084802653372;
    msg.r = 0.514805805490279;
    msg.svx = 0.8923154596978322;
    msg.svy = 0.5977636056200016;
    msg.svz = 0.09158814089981049;

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
    msg.setTimeStamp(0.19672759693307862);
    msg.setSource(41859U);
    msg.setSourceEntity(81U);
    msg.setDestination(7581U);
    msg.setDestinationEntity(242U);
    msg.op = 251U;
    msg.entities.assign("LRDSISLDXCISTEDRTADKQBRUJSTNGRZPUHPMKSVQSDCYNLAEBCILHXBYMFXKZUQBIMLBFWUEYOPXXJGBKNEYRQPSEZGUHMYQCCIKKWCRJAFRIAZZVTDGFTSZEFDVQVYVYGOOWFJNVAITAAJXAHOBXYLQDBVOOMCPIPRGZKEUDGRJAWNLHQHPMJGXOWHNFWOYCFXDCXTLPLUJUZNRTJFIHUQSEBOEKJIMWNPWGVLZ");

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
    msg.setTimeStamp(0.33914483837331144);
    msg.setSource(8397U);
    msg.setSourceEntity(104U);
    msg.setDestination(18424U);
    msg.setDestinationEntity(80U);
    msg.op = 225U;
    msg.entities.assign("KEKVHCYLUFMQYNFEZGTDBFUZXPQSAXQAWONHIVAWZTSUOMWQKBIPLSFVPGEGHJAEYXAMLMELGGXEDORCFHSSPLBEDQCQVZCLOWKMUVXJBWQKYZPILVJQCJEAYGHSDGRFCVVSKBTSVLOERZYHDUISDJANIUMFRCHBOIJFQJMZDGUDMXNHKXYIKOTIROTIHCG");

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
    msg.setTimeStamp(0.2431077184053526);
    msg.setSource(20687U);
    msg.setSourceEntity(71U);
    msg.setDestination(24366U);
    msg.setDestinationEntity(190U);
    msg.op = 122U;
    msg.entities.assign("OCRAUHEYLQGIQPVHCRSKYAAXIANWMKTDBFPVLMLUNMPDSVEDLSKXBWXKQ");

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
    msg.setTimeStamp(0.21304379571454268);
    msg.setSource(4663U);
    msg.setSourceEntity(80U);
    msg.setDestination(19385U);
    msg.setDestinationEntity(198U);
    msg.type = 141U;
    msg.speed = 46918U;
    const signed char tmp_msg_0[] = {-53, 13, -77, -108, -86, -101, 123, 27, 123, -27, -78, 27, 14, 74, -52, 96, 105, -43, 44, 51, -23, -88, 69, 110, -127, 22, 77, 14, -3, 86, -85, -87, 56, 88, -38, -56, -75, 25, 62, -12, 29, -23, 25, -4, 126, 42, -110, -95, -14, -74, 53, -8, -75, 83, 114, 101, -53, -93, -15, 109, 104, -87, 100, 39, 15, 9, -44, -128, 78, 81, -73, 76, -35, -66, -110, -7, -103, 115, 115, -90, -32, 71, 41, -37, 107, 62, 12, -29, 12, -97, 26, 70, 101, -15, 58, 32, 50, 22, -13, 47, 72, -121, -58, -4, 36, -56, 38, -119, -123, -69, 64, -48, 74, -21, -33, 123, 109, 80, 6, -114, 90, 7, -56, -87, -92, -104, -122, 76, 53, 89, 46, 97, -97, -127, -114, -103, -103, 57, -21, -45, -108, -116, -33, 11, -6, -34, 28, 26, 81, -15, 46, 72, -126, -102, -125, 88, -47, 63, 51, -94, 107, -117, -4, 119, 60, -10, 99, 72, 60, 59, -52, 3, 33, -91, 101, -26, 125, -115, 84, 6, -100, -14, -12, -80, -24, -106, -117, -28, -50, -1, -92, -18, 121, 61, 10, -88, 64, -24, 73, 56, 95, 77, -47, -39, 84, -22, -39, -19, -50, -2, 35, -114, -41, -80, 109, -56, 93, 30, -10, -125, -70, -61, 54, -104, 90, -56, -44, -74, 31, 112, -122, -58, -94, 118};
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
    msg.setTimeStamp(0.9216177485641128);
    msg.setSource(48868U);
    msg.setSourceEntity(193U);
    msg.setDestination(53135U);
    msg.setDestinationEntity(35U);
    msg.type = 0U;
    msg.speed = 46284U;
    const signed char tmp_msg_0[] = {-48, -15, -10, 13, -63, -108, -10, 4, -35, -24, -30, 28, 39, -114, 27, 95, 82, -17, 111, -31, 108, -51, 119, -74, -6, 102, -30, -87, -38, 2, -96, 27, -50, 49, -9, 120, -19, 45, -24, -22, -27, 67, -77, 67, 124, 87, 69, 1, 29, -125, 56, 90, 30, 37, 0, 33, 80, -6, 21, -59, 5, -83, -64, -69, 103, 83, 90, 44, 81, 34, 76, 77, 9, 46, 47, 32, -25, -67, 75, -25, -15, -17, -75, -74, 15, -94, -34, -99, 104, 98, -2, -49, -38, 51, 0, -25, -17, 119, -52, -19, 47, 113, -20, -52, 25, 6, -12, -46, -122, 65, 118, -105, 114, 25, -107, 50, 97, 106, -128, -80, 65, 122, -110, 7, -93, 35, -51, 86, 8, -117, -49, -53, -96, 63, -85, -114, 101, -89, 42, 74, 125, -91, -68, -28, -128, 56, -60, 109, 17, -91, 41, -7, -123, 47, -97, -121, -128, 75, 99, -54, -102, 7, 58, 54, 93, 107, 59, 26, -126, 38, 26, 17, 86, 9, -87, -98, -65, -49, 78, 97, 89, -33, 5, 107, 1, -49, 90, 14, 48, -32, -63, -42, 63, -59, 17, -37, -54, -117, -91, -58, -83, -31, 88, 94, 93, -49, -40, -116, -50, 34, 77, -91, 38, 63, 75, 78, -2, -53, 19, -52, -13, 75, -55, 108, -45, 86, -41, -61, -123, -117, -121, -119, -121, -97, -17, 70, -87, 43, -79, -77, -86, -46, 29, -92, 40, -107, 31, -66, -45, -5, 79, -62};
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
    msg.setTimeStamp(0.20147113097977865);
    msg.setSource(52603U);
    msg.setSourceEntity(213U);
    msg.setDestination(47132U);
    msg.setDestinationEntity(217U);
    msg.type = 146U;
    msg.speed = 8996U;
    const signed char tmp_msg_0[] = {125, 38, 35, 28, -59, 118, -11, -121, 91, -107, -12, -113, 87, 63, 17, 38, 98, 48, 22, -89, 104, 41, -6, -41, -91, 9, 1, 86, 9, -52, -30, 2, 106, 99, 113, 51, -34, -77, 41, 12, 87, 14, 116, 0, -104, 48, 45, 19, -125, 28, 83, -88, -95, -10, 7, 73, -16, 28, 98, -13, 92, -115, 76, -95, -3, -75, 43, -55, 89, -41, 73, -39, 15, 19, 67, 109};
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
    msg.setTimeStamp(0.36318045627490125);
    msg.setSource(52653U);
    msg.setSourceEntity(240U);
    msg.setDestination(22110U);
    msg.setDestinationEntity(125U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.0541279092196566;
    msg.bank2p_pgain = 0.7516203590040225;

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
    msg.setTimeStamp(0.01558682273271128);
    msg.setSource(22288U);
    msg.setSourceEntity(91U);
    msg.setDestination(11853U);
    msg.setDestinationEntity(49U);
    msg.op = 15U;
    msg.tas2acc_pgain = 0.3033135051763579;
    msg.bank2p_pgain = 0.867021710719152;

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
    msg.setTimeStamp(0.5854384680820561);
    msg.setSource(15941U);
    msg.setSourceEntity(164U);
    msg.setDestination(56478U);
    msg.setDestinationEntity(252U);
    msg.op = 97U;
    msg.tas2acc_pgain = 0.12778226431953854;
    msg.bank2p_pgain = 0.13359073206219618;

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
    msg.setTimeStamp(0.9786125220919355);
    msg.setSource(25589U);
    msg.setSourceEntity(157U);
    msg.setDestination(56852U);
    msg.setDestinationEntity(52U);
    msg.available = 2578994377U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.7284521099092908);
    msg.setSource(18678U);
    msg.setSourceEntity(46U);
    msg.setDestination(18003U);
    msg.setDestinationEntity(206U);
    msg.available = 3747081957U;
    msg.value = 153U;

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
    msg.setTimeStamp(0.7073795277477525);
    msg.setSource(42939U);
    msg.setSourceEntity(142U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(203U);
    msg.available = 1621972443U;
    msg.value = 110U;

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
    msg.setTimeStamp(0.03952257161935924);
    msg.setSource(39285U);
    msg.setSourceEntity(143U);
    msg.setDestination(40195U);
    msg.setDestinationEntity(206U);
    msg.op = 209U;
    msg.snapshot.assign("GCOLBHTCNWAUMJIYQMERJMPAJNFLGQOMFNOPBRGFCLYQQGTMRWXHSHEWIUSEEAVRZLEGDUVTKVZHNJXMBGIDWEIXYCDXZPREPCCYITWIXUDPQKDEKIDYEJDW");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("KSXQBTNCOETZLBIZSDUEMZUBFXVYXJIGKZDLSZRLABXYAUDASPYFNVATQOHUDLJWGQMCFZMSPXKIHUALYGKOJDJIYXLYWPJRPZBAFUAGLJLSKBGIOTYECDOVEMHXPRSBPGKHEQHNTJSOGMWVNTNHAVJLEIGSMFRWRRQOFKYVEMWPXELGNORUBHEKSUGCIQDPIWVMWWQCCBTO");
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
    msg.setTimeStamp(0.7487539302934304);
    msg.setSource(41703U);
    msg.setSourceEntity(2U);
    msg.setDestination(28920U);
    msg.setDestinationEntity(249U);
    msg.op = 124U;
    msg.snapshot.assign("AUDFNNGKIKHAPNFBKGIEKCEMCHNQUYDWKPPPFHGZFZMUGMBXICIXQNFWRJOONCBVCLHTYHQEDXVEOIBHQTMOVRWHJMNSWZPYSRJTEDWZKYBISBOZMTDAGYVCXAUAGWZBDZRHMRSJIWWQZSMRQXFRSXSPZTTCPIHPQLGLDBKJVJJKZXXUFO");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.10727471090079621;
    tmp_msg_0.lon = 0.12972241075250146;
    tmp_msg_0.z = 0.9259307719184365;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.4581753709225376;
    tmp_msg_0.speed_units = 217U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7112962556159096;
    tmp_tmp_msg_0_0.lon = 0.2024865868129868;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CHWSIWDZIBNXPKPEBFZIBFJXKCHAHPZDAGUNWOPTONWZAHSUUPMIBCFJZVJEJOYMTMFMGNLUGBSXYHGUDBRSOFOVXOYUJDTCQCDJWNGAEHIQIKGKLTCUMRRQJMWLJNAGKABIDVQPRITYQPPLV");
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
    msg.setTimeStamp(0.18410163025282478);
    msg.setSource(17774U);
    msg.setSourceEntity(245U);
    msg.setDestination(13759U);
    msg.setDestinationEntity(150U);
    msg.op = 32U;
    msg.snapshot.assign("BUITOPMOOJFDZ");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.014452409232451946;
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
    msg.setTimeStamp(0.5587237190423061);
    msg.setSource(59935U);
    msg.setSourceEntity(143U);
    msg.setDestination(23441U);
    msg.setDestinationEntity(151U);
    msg.op = 106U;
    msg.name.assign("HQKVAFABPGWVYVDWJLQSWLUYAFPXUDNWAUBZYTHVPLVVVMXINXGLBLRKDCPQPHPMXDNICEGOAIBZLRUVEGRFMKJFRTSUYCJIIADNKTZMNOGTDWMSKBELBAQOHHNELEOJMSQQYBFCKNWIDJOMJYOEAYWWZTFKIPOHAMHZSAUXEIVJYCSCEFLUNRNDZSQOMITCBIQEGCZJGJSKROFEPSTZXQXFHKTUUBLDNHGRZWGXRXCHYGPX");

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
    msg.setTimeStamp(0.3549086191490848);
    msg.setSource(29376U);
    msg.setSourceEntity(104U);
    msg.setDestination(47607U);
    msg.setDestinationEntity(58U);
    msg.op = 127U;
    msg.name.assign("ZQCJDCMZPYSJKXHDHAFWNCKSNDCFJKUTWUOPGYVPGEDTOAGSGYEJQQEAXVPBSIFPVIJGLPMRKKMWOYAEIBERXBUOPLCLTOZQXMQAFMVBTRCLHWCDQBZOOCOJMNINNVZDARRQMYLWFTQIQRUPYXSTUUTHWGAEBKNFWSWSJAUMIVZHVVLBCHEJRGLMWBCEKRNZDDLJYIUKSXHVNQOITAKXBHWOLUUTLDN");

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
    msg.setTimeStamp(0.4531949002109662);
    msg.setSource(52182U);
    msg.setSourceEntity(76U);
    msg.setDestination(65475U);
    msg.setDestinationEntity(85U);
    msg.op = 125U;
    msg.name.assign("GOZFWOLQXFEGSCSCQMUNXUZSBUDQVTHAMFYZAYRWIOAXSENAOOWKVYDLSDGLHMEJVZUVNWWNREZJDKKEGS");

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
    msg.setTimeStamp(0.2106483579086339);
    msg.setSource(54772U);
    msg.setSourceEntity(114U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(227U);
    msg.type = 196U;
    msg.htime = 0.12697068024432578;
    msg.context.assign("NFWVMSJWCJKDZHCIZINNUGOTVRFESRNETVRXLNFYDLLODUTMFOJZUSPQBXAXBNKOXMPZGHIPZYCDOTLNHAKGKOKYFQKPDXYOURGSCHDVGXELEBTOAULNIDSIHYJPYNBEZXVQWDEZRUSCEWCJPKA");
    msg.text.assign("BHJNJRLESPYSZTSCXQ");

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
    msg.setTimeStamp(0.6384665197535041);
    msg.setSource(2123U);
    msg.setSourceEntity(23U);
    msg.setDestination(4101U);
    msg.setDestinationEntity(68U);
    msg.type = 46U;
    msg.htime = 0.7993572164608076;
    msg.context.assign("UIVZLSYPSWOTXQARPULWNGJTTTPBOTDCKAQTPEAHHAMNHKWEARWLGICLTUNXDHMWEJEPCJRCLUMOZSOCFGYGAXLVYOBTQDMNFJXFKDFBJNRCSHYNWFLLPMEBNRGZZJDTQUVCFDRTUYOCOXPSDSKUZBZEKIXOMOMSYQIYCIIRLUQGQHGIAFQKQBKUAXHHMAVRIDFKLMBEFSPZPEIPKWGXX");
    msg.text.assign("MFSWKWILATEYHOUDVMIMTMWVMPKDDWXNEZTOINMIJFUXLMOAFTUDBUXKUJKEWZPHKQVBGHXEPJHYRWPZECCZZLNCTYXDUGMKCVSBLMTUZFGKVR");

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
    msg.setTimeStamp(0.00570969632702889);
    msg.setSource(42451U);
    msg.setSourceEntity(50U);
    msg.setDestination(45701U);
    msg.setDestinationEntity(247U);
    msg.type = 126U;
    msg.htime = 0.0708162280118717;
    msg.context.assign("VPNIXMSBZKVSFV");
    msg.text.assign("GUDJNXBRJAADOLUJVELRRRSBONUFVECSDDNLPCDW");

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
    msg.setTimeStamp(0.48462396505037564);
    msg.setSource(65219U);
    msg.setSourceEntity(63U);
    msg.setDestination(1105U);
    msg.setDestinationEntity(206U);
    msg.command = 203U;
    msg.htime = 0.682888354212817;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 170U;
    tmp_msg_0.htime = 0.8273655943372225;
    tmp_msg_0.context.assign("LXIIFUSBSAXQPFXUXCZDCVFAFUJYOMMRXFRMETPZZBUTHBQHIFRMEHRWOFEZHEPZWCMVAROZUOWBBHJSIPPVWPLWYWQAAEEOSEDQMKDYYTQGTELPTHTNNDXAQOGOUKJJKZNNUARNKOVOXDHCKLQBGORALKZNFSJNQEDPGMP");
    tmp_msg_0.text.assign("DHZAYMQZAJLBPXNBDZDEAXBUZUBKRLPLDMOVFFOLNLHHZMBKEBNHTNPPKIVTHGTWWKMAFIQNCPEQHSLQLFSNCPYUSDRZGSCTVEXFAKCZINQWFASZGYTGIAEFEDJAKPWCETTVNWWRGQQUTUBSRKGPJRXWJVGOQOGAJOXSZDYBFCGKOYUACJRWOMXTSMIRH");
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
    msg.setTimeStamp(0.5707992156256209);
    msg.setSource(57932U);
    msg.setSourceEntity(171U);
    msg.setDestination(12579U);
    msg.setDestinationEntity(177U);
    msg.command = 18U;
    msg.htime = 0.9253384869800813;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 159U;
    tmp_msg_0.htime = 0.8505163916148736;
    tmp_msg_0.context.assign("VNWCLZAUPEMHBPJCHOSFGBKEKWPOBRLLNATIOXFLTUSQEGYUUDLGHJSLAYXATMGULUIZVCAYIASRJCHVDDNHEYCLRNTKXDJIUWFHQDKSPEOFXZESJVITWKVQRJEZNGRBFJQIYZNKKJVFOWOEZZTY");
    tmp_msg_0.text.assign("DDGXOADQCWZRZNWWUAGIBFAXTCCHDYGEBHMQSUFPPHZNIIANUTSTM");
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
    msg.setTimeStamp(0.9410624410214408);
    msg.setSource(6238U);
    msg.setSourceEntity(161U);
    msg.setDestination(29370U);
    msg.setDestinationEntity(148U);
    msg.command = 168U;
    msg.htime = 0.8385907265071346;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 194U;
    tmp_msg_0.htime = 0.009355212059355189;
    tmp_msg_0.context.assign("HPSUOSYPNKZJZCUBQTAVQCYRGCKLTEZPJWNVIJGMYOCKOWDHNHNKFRXDZD");
    tmp_msg_0.text.assign("CXTIAAJOOGEBLNXZEHAGVNETMTEKVNHMEEFAAQZNNKQJZTRLWYDHVUQYCFRHBZRSMUMEHVUEJQJDAVGYOLTYZDZFPCXRHFLITBPIYIQBLFXCFXDJSWXLEAVLUKHPUXNKCLWGBBWONGBDBYMPZPH");
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
    msg.setTimeStamp(0.7829039633183256);
    msg.setSource(10339U);
    msg.setSourceEntity(184U);
    msg.setDestination(18087U);
    msg.setDestinationEntity(34U);
    msg.op = 210U;
    msg.file.assign("WDAGCFLQATRGFENCNPKLDDDWFJPRXRHPDWAVYZVIWATXHIUJYNIUEWPRQLWPNKFRVJAYITGSEXBPZVYFNGJXJJQZRWLNYULBSCUXMQQXGYDUEMFCHZCNILFSMCZJFMKQUTOYAUTELWHEOKJMXBRVMQDCBXXKVEFORMOLHTZLKIIBUOWHSOVRKBPSNVKUCVC");

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
    msg.setTimeStamp(0.583818390373366);
    msg.setSource(61013U);
    msg.setSourceEntity(157U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(142U);
    msg.op = 84U;
    msg.file.assign("BHYLKUPDVOOZGPNPUCEEPRVIBHGFWXERILLXLXAQTEHMLEIBIQSVTWPMTFVUGQMVRFNYJPCOFDUHMYERSQAGSRCYTKHHEDXQVDWMCGKSFBTXICNKOBIJLMUQIZXHCKQRGJWRHGUJVADGJXZLHNTSPPZCJLJVSASRMCSKQAMTDTWBPVMZNYCZWVSNEZICLOOOT");

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
    msg.setTimeStamp(0.9406873605148909);
    msg.setSource(40511U);
    msg.setSourceEntity(46U);
    msg.setDestination(36223U);
    msg.setDestinationEntity(3U);
    msg.op = 217U;
    msg.file.assign("CTIIWBXRJBHMQJNFHXXETQAXDCIOWFDNUSVFADPLTXLJTWURRBBPJPTWBEIGMKORCGKZWMVZNKSNJSYZKBMEKKDRWAOPDDHPVVQSFMNMXDWSBTH");

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
    msg.setTimeStamp(0.2069444481070053);
    msg.setSource(19723U);
    msg.setSourceEntity(110U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(101U);
    msg.op = 65U;
    msg.clock = 0.14919141647903122;
    msg.tz = -95;

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
    msg.setTimeStamp(0.518019952865578);
    msg.setSource(48851U);
    msg.setSourceEntity(145U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(198U);
    msg.op = 82U;
    msg.clock = 0.7117235047814058;
    msg.tz = 4;

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
    msg.setTimeStamp(0.6724886671941882);
    msg.setSource(52761U);
    msg.setSourceEntity(57U);
    msg.setDestination(19913U);
    msg.setDestinationEntity(84U);
    msg.op = 28U;
    msg.clock = 0.19114232299489353;
    msg.tz = -39;

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
    msg.setTimeStamp(0.4753167188872792);
    msg.setSource(53685U);
    msg.setSourceEntity(217U);
    msg.setDestination(3190U);
    msg.setDestinationEntity(190U);
    msg.conductivity = 0.9329374259732658;
    msg.temperature = 0.04961932793455115;
    msg.depth = 0.7511202066262649;

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
    msg.setTimeStamp(0.3983303403436744);
    msg.setSource(860U);
    msg.setSourceEntity(165U);
    msg.setDestination(14704U);
    msg.setDestinationEntity(178U);
    msg.conductivity = 0.822934729712273;
    msg.temperature = 0.385835126478005;
    msg.depth = 0.6044909678643295;

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
    msg.setTimeStamp(0.4832624059053846);
    msg.setSource(35003U);
    msg.setSourceEntity(13U);
    msg.setDestination(37465U);
    msg.setDestinationEntity(63U);
    msg.conductivity = 0.5029606747011357;
    msg.temperature = 0.4542134850915903;
    msg.depth = 0.30274186187508356;

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
    msg.setTimeStamp(0.5070541162943928);
    msg.setSource(7422U);
    msg.setSourceEntity(232U);
    msg.setDestination(48359U);
    msg.setDestinationEntity(58U);
    msg.altitude = 0.19800226308858504;
    msg.roll = 30644U;
    msg.pitch = 28606U;
    msg.yaw = 24801U;
    msg.speed = 27744;

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
    msg.setTimeStamp(0.9952673115204728);
    msg.setSource(1331U);
    msg.setSourceEntity(109U);
    msg.setDestination(32174U);
    msg.setDestinationEntity(245U);
    msg.altitude = 0.1154409490458983;
    msg.roll = 54585U;
    msg.pitch = 25009U;
    msg.yaw = 59634U;
    msg.speed = 29901;

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
    msg.setTimeStamp(0.2772016884572752);
    msg.setSource(51722U);
    msg.setSourceEntity(214U);
    msg.setDestination(6743U);
    msg.setDestinationEntity(198U);
    msg.altitude = 0.5634769717035077;
    msg.roll = 35991U;
    msg.pitch = 6415U;
    msg.yaw = 36713U;
    msg.speed = -21064;

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
    msg.setTimeStamp(0.48027569327432185);
    msg.setSource(51514U);
    msg.setSourceEntity(220U);
    msg.setDestination(32295U);
    msg.setDestinationEntity(35U);
    msg.altitude = 0.8097303422751141;
    msg.width = 0.33084517926562307;
    msg.length = 0.8870678673545993;
    msg.bearing = 0.2194015905243636;
    msg.pxl = 17690;
    msg.encoding = 5U;
    const signed char tmp_msg_0[] = {-31, -66, 1, 43, 111, -39, 56, 29, -73, 16, 31, 7, -97, -41, -24, 79, -36, -52, -43, -125, 15, 115, 76, 45, 68, -123, 21, -104, -94, -54, -7, -100, 21, -22, -26, -1, -4, 5, 112, 59, -65, -13, 88, 1, -17, 122, 29, -45, 95, 93, 77, -86, -100, -32, 79, -22, 72, 86, -106, -26, -90, 96, 103, 81, 29, 42, 85, 101, -97, 42, 78, -115, -70, -85, -40, 2, 123, -125, -7, 80, -53, 39, 86, 49, -29, -5, -95, -94, 101, 48, 114, 55, -61, 54, 113, -5, -18, 85, -77, -86, 75, 89, 93, 97, -26, -14, 20, -31, 78, 100, -48, -72, -52, -9, 77, -44, 34, -123, -89, 73, 86, 49, 63, 109, -73, 123, -65, -97, 21, -52, 77, 13, -116, 1, -24, 84, 31, -32, 106, 35, -25, -53, 4, -24, 17, 3, -48, 67, -56, -98, -121, 57, -108, 62, 99, -59, 118, 51, -26, -114, 72, -92, -62, -21, 89, -9, 42};
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
    msg.setTimeStamp(0.12671228024639636);
    msg.setSource(33112U);
    msg.setSourceEntity(39U);
    msg.setDestination(15696U);
    msg.setDestinationEntity(50U);
    msg.altitude = 0.8792961295603062;
    msg.width = 0.365406230361221;
    msg.length = 0.6595083969230999;
    msg.bearing = 0.9460848540392091;
    msg.pxl = -29338;
    msg.encoding = 156U;
    const signed char tmp_msg_0[] = {-6, -14, -31, -10, -37, -91, -15, 14, -92, -109, -8, 47, -78, -96, 17, 51, 30, 75, 44, -120, 68, 99, 23, -122, -35, 51, -72, -88, 39, -113, -95, 83, 36, -1, -76, 100, -10, -106, 121, -30, 15, -54, -104, -6, 97, -6, -72, 22, -27, 84, -61, 18, 12, 90, 27, -61, 104, 9, 103, 110, -38, 120, 25, 86, 124, -34, 99, 80, 91, 30, 88, 92, -98, -47, -108, 121, 17, 54, 74, -58, 114, -70, 32, 85, 70, -48, -59, 47, -20, 124, 65, -128, -26, -51, 101, 117, -121, 95, 42, -33, 110, -52, 97, 99, 36, 110, -21, 123, 42, -123, -70, -128, -98, 125, -31, 8, 125, -120, -54, -15, -57, -105, 111, 47, -64, -104, 31, 54, 1, 45, 89, -123, 5, -123, -89, -13, 112, 29, 75, 108, 15, -16, 92, 105, -61, -14, 23, -106, 9, -36, -82, -24, 70, 20, -67, 56, -42, -31, 126, -59, 81, -87, 26, 65, -97, 100, 116, 120, -42, 0, -119, -126, 68, -16, -6, -109, -30, 89, -104, 91, -49, 67, -46, 68, 104, 45, -60, 69, 117, 74, -87, 87, 66, -41, 1, 77, -76, -25, 43, -31, -124, -103, -101, -20, -115, -20, -60, 77, -117, -17, 110, -23, -98, 25, 26, 12, -10, -105, 110, 63, 53, 119, 35, -114, -28, 68, -104, 80, -3, 89, 30, 49, 95, 20};
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
    msg.setTimeStamp(0.966056629163368);
    msg.setSource(11754U);
    msg.setSourceEntity(122U);
    msg.setDestination(57721U);
    msg.setDestinationEntity(8U);
    msg.altitude = 0.8058837459488375;
    msg.width = 0.7413888269134657;
    msg.length = 0.6555861694024463;
    msg.bearing = 0.2794763708301402;
    msg.pxl = 6605;
    msg.encoding = 30U;
    const signed char tmp_msg_0[] = {74, -32, 58, -2, -54, -113, 120, 37, -108, 117, 6, 104, -7, 55, -36, -33, 119, -30, 25, -111, -46, -29, 111, 30, 57, 2, 39, 4, -55, -8, 55, -108, -90, -75, 104, -50, 89, -114, 108, 23, 103, 34, -99, -78, 115, -4, 111, 53, -33, -125, 105, -41, 94, -48, 2, -19, -27, -21, -115, 48, -13, -39, 101, 48, -40, 120, -44, -106, 123, 66, -63, 63, -69, 91, -57, 16, 104, 67, -68, 59, -95, 53, -11, -86, 0, -127, 81, 67, 40, -115, -30, -114, -36, 87, -3, 104, 126, -37, -69, -99, 3, 105, 22, -68, -39, 11, 38, 99, 17, -29, 33, 69, -125, 116, -75, 98, 50, 52, -65, -74, -3, 119, -52, -15, 108, 38, -52, -76, -43, -81, 64, 38, -54, -83, -33, 30, 32, 102, -83, -52, 16, 115, -41, 44, -18, 57, -90, -52, -64, 64, -51, -29, -125, -77, 98, -120, -97, 96, 48, -124, -127, -31, 67, 93, -15, 120, -48, -64, 7, 101, -62, 121, -128};
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
    msg.setTimeStamp(0.764178399902672);
    msg.setSource(7098U);
    msg.setSourceEntity(175U);
    msg.setDestination(43526U);
    msg.setDestinationEntity(73U);
    msg.text.assign("ZHTEZTNRNCFVIDBMAEJLRPJCOZXMXYWAWQCDKIKCXUUUJVKOBSXUAJYOJYDLLKCFGZARQQPJHDXCSUEGNKLWQOEJV");
    msg.type = 121U;

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
    msg.setTimeStamp(0.9066418562792005);
    msg.setSource(64555U);
    msg.setSourceEntity(19U);
    msg.setDestination(3524U);
    msg.setDestinationEntity(161U);
    msg.text.assign("YTKUNEOZYFQVWRWDUCTVRRDKLIJCDCAGOJ");
    msg.type = 8U;

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
    msg.setTimeStamp(0.6747052792309887);
    msg.setSource(13676U);
    msg.setSourceEntity(92U);
    msg.setDestination(33959U);
    msg.setDestinationEntity(139U);
    msg.text.assign("VMTZLRNUGPVPFEOIIHKFPOINEMBDLXMLFZMHNCHOIBFMLNAQWSPCHWLFTWPQXHSKZOWYUUAUFJTGEFTQAAJMMWDAANLPCGSUQPBNYIOGAVEJQJBHLRXVWKDZLBSVGVITQYICPBXKUKCPXJQSFBHXJTRWJSLTKUCMZZNYQOONHBKDKGKUCYDKYSFDEWFPRJIMVXXSCTZRGDCJRANEVVAYGZDQ");
    msg.type = 238U;

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
    msg.setTimeStamp(0.5865410833140143);
    msg.setSource(26038U);
    msg.setSourceEntity(168U);
    msg.setDestination(11085U);
    msg.setDestinationEntity(38U);
    msg.parameter = 242U;
    msg.numsamples = 116U;
    msg.lat = 0.6413817320028707;
    msg.lon = 0.21703956616240505;

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
    msg.setTimeStamp(0.07661776111682972);
    msg.setSource(54166U);
    msg.setSourceEntity(200U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(204U);
    msg.parameter = 113U;
    msg.numsamples = 207U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 7479U;
    tmp_msg_0.avg = 0.27441138552736244;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.39259785159769356;
    msg.lon = 0.5338245509502972;

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
    msg.setTimeStamp(0.1342982595737885);
    msg.setSource(1841U);
    msg.setSourceEntity(152U);
    msg.setDestination(34488U);
    msg.setDestinationEntity(181U);
    msg.parameter = 160U;
    msg.numsamples = 90U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 5414U;
    tmp_msg_0.avg = 0.8069644003198633;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.11787057999306172;
    msg.lon = 0.6315510607729795;

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
    msg.setTimeStamp(0.7039602171992052);
    msg.setSource(23495U);
    msg.setSourceEntity(207U);
    msg.setDestination(57474U);
    msg.setDestinationEntity(164U);
    msg.depth = 62144U;
    msg.avg = 0.8200246852015398;

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
    msg.setTimeStamp(0.9154831791778273);
    msg.setSource(65107U);
    msg.setSourceEntity(180U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(91U);
    msg.depth = 31695U;
    msg.avg = 0.9502267579904784;

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
    msg.setTimeStamp(0.5455782490454222);
    msg.setSource(28317U);
    msg.setSourceEntity(174U);
    msg.setDestination(21481U);
    msg.setDestinationEntity(16U);
    msg.depth = 62306U;
    msg.avg = 0.7062213501989612;

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
    msg.setTimeStamp(0.3397172980226819);
    msg.setSource(7136U);
    msg.setSourceEntity(30U);
    msg.setDestination(11516U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.2817875507720159);
    msg.setSource(6165U);
    msg.setSourceEntity(7U);
    msg.setDestination(64864U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.3441978331958704);
    msg.setSource(16281U);
    msg.setSourceEntity(123U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.8810999729957136);
    msg.setSource(65499U);
    msg.setSourceEntity(41U);
    msg.setDestination(21887U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("HIVQITMZGPUKYVFZIOOTKSTOVBIFVYWPNHJKDEARBPSMAJOEKZJDUNI");
    msg.sys_type = 41U;
    msg.owner = 9502U;
    msg.lat = 0.4096938638668217;
    msg.lon = 0.04712628563294552;
    msg.height = 0.9078484494442093;
    msg.services.assign("PQKAUUTCSEAGTHEAXPTSMHECVYWCWPRTLGOOKYTLYJDFJCFTS");

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
    msg.setTimeStamp(0.9596327261394189);
    msg.setSource(16770U);
    msg.setSourceEntity(147U);
    msg.setDestination(23344U);
    msg.setDestinationEntity(86U);
    msg.sys_name.assign("BAEWVOGKKHMCLRLSLYETKWGQMQHPTNIZSUHZXOXAQFWFYDXPLPKKUKVDCSTOULMAHVZHNXRYVPDTNEFFIJVGRJMIXTDHCYPKCUUMUYBCBVTXYSTLIVGAREOOXTJJNCYQWYSIBERRCASTXJHJHNBPAAZWZDJMNONRLVPBDNOOXFLMPCB");
    msg.sys_type = 220U;
    msg.owner = 35598U;
    msg.lat = 0.2589062642469726;
    msg.lon = 0.15337995987643016;
    msg.height = 0.6408096998254644;
    msg.services.assign("BEVGDMJZWXHRCTYVLQDKDBLGOTPQJYEQBLPUXOSEQBBPFGXYPBRGKPMRFODIF");

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
    msg.setTimeStamp(0.2258447617792685);
    msg.setSource(13378U);
    msg.setSourceEntity(47U);
    msg.setDestination(2559U);
    msg.setDestinationEntity(183U);
    msg.sys_name.assign("BKGZXOWKHTPJCKLJTLJAAFVCRAJRZKNCDEURNDAGHIFKLSIUJBENUFOPUSKLKJHWFTYRMEOYSIRJBWEXAWTSTOMGFTTBBBGQNZRNOZPSGNMCRMQSICEPFVBVQVWQQDXDDPVLIJVRMILUEPWISBEYOVZGIVGNYKKTDOCQQQCSOUFWTALOPEAXFGEWNHWRGZUVHMHDYDMAWYSMFURMSHIQMXYPXCJNLLXGVLHPBZJ");
    msg.sys_type = 235U;
    msg.owner = 47140U;
    msg.lat = 0.5716455515511779;
    msg.lon = 0.930245214155925;
    msg.height = 0.9774036847204397;
    msg.services.assign("HGSDZVCIUBEHVFWBSGECNFAXGPOCKLVTOHLMZIMCULBFFRGFXNSWVLEATDDQMWOFLFTEWAVDIKK");

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
    msg.setTimeStamp(0.573708864062564);
    msg.setSource(5847U);
    msg.setSourceEntity(217U);
    msg.setDestination(34678U);
    msg.setDestinationEntity(135U);
    msg.service.assign("EHNSDNLDWGZNEJGIPNSIHHREZTYMDMYLHQBJUCPVBVODFTIMTUJMDPIHUKPQQEMXFSYRODFXQCFUXWWTAIRIYYZKBPAKSFLOPFEMKOCVZWTULKCXVAYROKBDELJTRBJHFEPETMBJUCKUCAKQASXYIUGRQQROPMCLVGSTRWOJVXKZC");
    msg.service_type = 200U;

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
    msg.setTimeStamp(0.3856220338009142);
    msg.setSource(21777U);
    msg.setSourceEntity(27U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(141U);
    msg.service.assign("LRNGKFNKFMUHDBMMNNTKSAU");
    msg.service_type = 171U;

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
    msg.setTimeStamp(0.3891536190253111);
    msg.setSource(20249U);
    msg.setSourceEntity(253U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(53U);
    msg.service.assign("YDFWXGMQFJLSVQVIPLGHE");
    msg.service_type = 239U;

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
    msg.setTimeStamp(0.15939564888043278);
    msg.setSource(20722U);
    msg.setSourceEntity(176U);
    msg.setDestination(4546U);
    msg.setDestinationEntity(134U);
    msg.value = 0.07358399645817093;

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
    msg.setTimeStamp(0.7062383151573355);
    msg.setSource(50782U);
    msg.setSourceEntity(42U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7796629186367692;

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
    msg.setTimeStamp(0.02817126471474707);
    msg.setSource(45191U);
    msg.setSourceEntity(166U);
    msg.setDestination(56537U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6962405418162784;

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
    msg.setTimeStamp(0.542102650069411);
    msg.setSource(26457U);
    msg.setSourceEntity(138U);
    msg.setDestination(31943U);
    msg.setDestinationEntity(149U);
    msg.value = 0.04336283182928935;

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
    msg.setTimeStamp(0.83374316455437);
    msg.setSource(28623U);
    msg.setSourceEntity(127U);
    msg.setDestination(30347U);
    msg.setDestinationEntity(244U);
    msg.value = 0.6604153377919223;

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
    msg.setTimeStamp(0.737402952285429);
    msg.setSource(24578U);
    msg.setSourceEntity(201U);
    msg.setDestination(23275U);
    msg.setDestinationEntity(82U);
    msg.value = 0.05426275984584927;

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
    msg.setTimeStamp(0.705336827940692);
    msg.setSource(60850U);
    msg.setSourceEntity(79U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(11U);
    msg.value = 0.11144901252478745;

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
    msg.setTimeStamp(0.8818932555068162);
    msg.setSource(34340U);
    msg.setSourceEntity(30U);
    msg.setDestination(21688U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7228710171172644;

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
    msg.setTimeStamp(0.6180220420873778);
    msg.setSource(19719U);
    msg.setSourceEntity(94U);
    msg.setDestination(10345U);
    msg.setDestinationEntity(137U);
    msg.value = 0.11655559199203047;

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
    msg.setTimeStamp(0.6428972493630795);
    msg.setSource(63221U);
    msg.setSourceEntity(34U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(129U);
    msg.number.assign("GQZMQNCOEDVPKTT");
    msg.timeout = 33613U;
    msg.contents.assign("VOIXHORPJCDMYNPFRHPVMWAFZKFAAKPFIQRQMKMZGDFQVUSCRQMXPLREIYARMQADEFUKRCBUHTDHKSJLKINABPILUJWNVLJUKOZVDQFWZCZBBEHYUNIQLOGYBGHTIWIWNDGNOZPFYGKKVWCMTWYDYWBBZVECGKOTXRAYBYELQNNS");

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
    msg.setTimeStamp(0.41263660559045523);
    msg.setSource(7760U);
    msg.setSourceEntity(24U);
    msg.setDestination(34853U);
    msg.setDestinationEntity(119U);
    msg.number.assign("GXHUSJIWCXGVQVAIYUAGGGOVUFMJNNKPYJTURHJFMKDBT");
    msg.timeout = 27932U;
    msg.contents.assign("DUGYAICQYJUZXSQVIWOIFAJOLBIIPUCQTLSUWIKXKTQZVTPMSGZRLWXMMUFBZUZVACKIPYRJXJKVLVNNYAJSUNZORLDYHGFNREQDGHCNTHWGHZKQFRBMGJRXEQHLYLDEJWMICTYVQKFXONEPPMCHUXPNMMKALEGTHDWROGBEIPTZYOAOKBAVTNJHWFURSMSGZNQTKNRHVZJEDBBSOLDDXHUIDYCAFAOWA");

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
    msg.setTimeStamp(0.4456724068306339);
    msg.setSource(19754U);
    msg.setSourceEntity(32U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(11U);
    msg.number.assign("XIVSBOSJZPHSIWOYAATRAFAYOQJUNEYYKKPZWZGBDRKRGDWHGTQMFRENBNSVREVETELPPFAWKCKLHHBNZLCRDVVFQPIWFBJXOLSIHNLWUUIFMJDDDEOTJITNXOHBCWGALGTHXKMPNQEDFBJFMBNCUGZOUXVGSLCJIQGQNHLSXQDVRKVQ");
    msg.timeout = 53846U;
    msg.contents.assign("PEFTLDCHUISBZAYLRGCRXZIHQVJKHBBMQBIBMWVNKLMPVIADVPQUQUBLAISYPRQIASKBRAYA");

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
    msg.setTimeStamp(0.39109413747010346);
    msg.setSource(48825U);
    msg.setSourceEntity(78U);
    msg.setDestination(57073U);
    msg.setDestinationEntity(121U);
    msg.seq = 2956888014U;
    msg.destination.assign("ZGBNKECWUYBLDBRIPSOMNJDXXTWWBFBOTWAUPQVKTMLCMCEAZEIXEFKIGMSHKALUGUGCFIIWAPFFVTWZSTGSJHVLQBIJMNQIYEZWLGXURLBWOCDRKVQHSRJPSEQCEGQVJHIHEVMUNYAPPCRDVROZMNASYLBYZJGJYATYYTRBNPH");
    msg.timeout = 39437U;
    const signed char tmp_msg_0[] = {-27, -20, -79, 58, -56, -84, -41, -112, -96, 113, 72, -58, -17, 89, -44, 85, -4, -107, -43, -44, -12, 126, -119, -69, 7, 83, 56, 37, -59, -63, -84, -105, -101, 61, 90, 91, -117, 67, -45, 23, -123, -54, -31, 115, -24, -85, 41, -9, 102, -80, 75, 69, -21, -67, -111, -14, 104, -19, 65, 100, -92, -112, 34, 0, -98, -18, -30, 2, 25, -85, 65, -5, 31, 74, 72, 81, 89, -30, 39, -36, -120, -8, 126, -68, 73, -63, -111, -32, 112, 73, 112, 91, 69, 3, -6, -9, -50, -76, -8, -103, 38, 80, 122, 81, 101, -80, 75, 43, 49, -107, 61, 117, 12, -68, 120, 104, -17, -28, -5, 18, -36, 74, -23, 47, -77, 125, 11, -112, 103, 67, -45, -90, 3, -83, -60, 92, -88, 80, 28, 95, 21, -102, 91, 111, -4, -95, -8, -56, -68, 6, -91, -100, -92, -62, 117, 76, -20, -89, 29, -58, 45, 110, 58, 20, 46, -12, -40, 61, 18, -35, 72, 11, 53, -61, -7, 29, -90, 105, 112, -68, 18, -79, -28, -37, -58, 19, 126, 14, 68, 1, -122, 58, 114, 6, -75, 19, 19, 60, -14, 60, 104, 13, 51, -44, 39, 26, 83, 102, -69, 59, -35, -12, 120, 31, 98, 97, 92, 47, -99, 84, 73, 79, -11, 115, 75, 102, 29, 124, -104, 52, -41, 122, 44, 87, 111, -19};
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
    msg.setTimeStamp(0.8216639754144983);
    msg.setSource(55341U);
    msg.setSourceEntity(249U);
    msg.setDestination(51851U);
    msg.setDestinationEntity(151U);
    msg.seq = 3098807555U;
    msg.destination.assign("XUOJJWLEBXLMNVNHGLTDEKDKBJIBLMIZSHGUVMVRUOXYFHRRFZHJYPKGBXSVIMZXABPBTWEPPPOARHUGDSFUWAJUYOARSSPUFSSMCUWVRCATDMSVQLTIWKYBAAFRCMIQCJLGEVHBUOWMXFDRBBGQHYQDNKDQDYCDVMGIZWCEFTWETNPEVKYPFLKXFCSRUHCOQVHPWAEXQAWJPALSEKTCKLGYJMZLNZTIOEXQTTCNGYIFZXNHKNYRIOJIZDOQ");
    msg.timeout = 53244U;
    const signed char tmp_msg_0[] = {6, 100, -126, -116, 114, -12, 67, -29, -41, 65, 46, -60, 55, 91, 17, 100, 51, -9, 63, 26, 118, -59, 80, 65, 44, 116, 77, 109, 70, 5, 105, 61, 61, 5, -123, -54, 111, 8, -2, 104, 39, 16, 32, -72, 39, 92, 42, 108, 65, 37, 110, -12, 79, 26, 102, 108, -45, -100, -67, 110, 17, -120, -41, -105, -73, -110, -11, -28, -48};
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
    msg.setTimeStamp(0.6738392900106401);
    msg.setSource(13365U);
    msg.setSourceEntity(79U);
    msg.setDestination(10165U);
    msg.setDestinationEntity(75U);
    msg.seq = 2371111867U;
    msg.destination.assign("KGZUYAXUCOLWCWSVFZGFRMGTEEWZYWV");
    msg.timeout = 14506U;
    const signed char tmp_msg_0[] = {-17, -124, -125, -93, 18, -10, -72, -95, 41, -113, -48, -12, -29, 59, -80, 62, -40, -23, 93, -121, -54, -28, 31, 18, -74, -54, -23, 61, 44, -116, 123, 105, -102, -66, 74, -39, -82, 72, -15, -43, -108, -114, -125, -37, -122, -86, 55, -88, 101, 60, -94, -49, 91, -10, -104, -78, -108, -90, -2, 25, 0, -63, 7, 86, 125, -98, -32, 77, -72, 81, 112, 126, 49, 21, 90, 41, 7, 46, -67, -116, 44, -115, -7, 112, 83, -74, 116, 78, -43, -32, -6, -30, 51, -38, 3, 40, -52, -104, -127, 91, -105, 19, 58, 62, 42, -78, 11, -66, 25, 91, 83, -109, -15, -15, -81, 78, -27, -9, -92, -6, 92, 75, 29, 65, -107, 5, -28, 80, -31, 116, -69, -24, 95, -30, -12, -49, 83, -19, 83, -67, 71, -50, -114, -122, 108, -119, -92, -25, 9, -19, -79, -111, -96, -68, 37, -42, -19, -69, 41, 45, -30, 41, 20, 91, 52, 77, -6, 123, -57, -73, -9, 116, 72, -43, -104, -19, 113, 96, 24, 32, 100, 114, 24, 95, 52, 99, -98, 103, 37, 43, 113, -47, 47, -82, -89, -23, -22, 114, -22, 117, -59, 81, -104, -46, -32, -3, -1, -114, -53, 75, -115};
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
    msg.setTimeStamp(0.6997170197771664);
    msg.setSource(57502U);
    msg.setSourceEntity(46U);
    msg.setDestination(23617U);
    msg.setDestinationEntity(87U);
    msg.source.assign("FCFTBOWKRPWZIHWZCQXLNTAUYWGZTUWNHRMMYZKLY");
    const signed char tmp_msg_0[] = {110, -120, 75, 65, 40, -44, 16, 123, -94, -83, -57, -46, -45, -116, -70, -108, 20, 27, -111, -103, 36, 34, 13};
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
    msg.setTimeStamp(0.9418260796409819);
    msg.setSource(47447U);
    msg.setSourceEntity(181U);
    msg.setDestination(54123U);
    msg.setDestinationEntity(130U);
    msg.source.assign("BITNOAFISTGNWBCQVRRSGEEXEQHSWBDLICJTRKLZNTYZGDFDZMSRCXRGQZZBJPOHJOYJFLTINDFHFWYEXHPYAXAAXIECJAPCVIPMPVFKODVBHYQQPIKVVWEVTBJZXOCZZXK");
    const signed char tmp_msg_0[] = {85, -98, -35, 14, 87, -72, -99, -113, 94, 80, 36, 38, 50, 87, 125, 50, -70, 98, -30, 95, 100, -101, 113, -49, 126, 47, 121, 6, -106, -84, -97, -55, 65, -59, 49, 38, -18, -19, -52, 73, 123, -52, 20, 43, 42, 112, 93, 34, -128, 67, -36, 110, -110, 69, -3, -92, 31, 93, -95, -54, 35, 114, 72, -80, 55, 37, -25, 101, -76, 75, -27, -10, 0, -117, 64, -77, 125, 15, -58, -33, 124, -35, 96, -16, -96, 120, 45, 116, -6, -44, -100, -37, 99, -17, 64, 52, -23, 125, 122, 32, 66, -117, 34, -37, -50, 68, -24, -20, -57, -80, 91, -121, -58, -57, -14, -11, -45, 104, -105, -5, 69, -61, -96, -122, 18, 63, 38, -25, 59, -42, -7, 57, -15, -62, -106, -69, 87, -51, 36, 13, 46, 86, 31, 73, -35, 100, -16, -108, 39, -114, -43, 31, -15, -103, 100, -44, 3, 79, -7, -37, -113, -13, 38, -104, 104, -88, 12, -102, 60, -26, -118, 72, 65, 62, -28, 118, 58, -81, -18, 75, -45};
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
    msg.setTimeStamp(0.9355854347358159);
    msg.setSource(17069U);
    msg.setSourceEntity(152U);
    msg.setDestination(42888U);
    msg.setDestinationEntity(233U);
    msg.source.assign("NXGVGRLFJFQIHDKEDUJGZABZYPQFVFRBEKYOEGFCTMHUGLRSOBELOZCCBTBWPNNGBUHXKASAPQKPGNMJYPHXLZQOYSOOZMNMCZUBRZQJBHBVTXUCWKWMKEQCRADDVVJMSJRISMMUTMKNYYPOPXWLPXSLHHZLJTEDNOYSQGCADVIINACDDWUTHWLIURFYTITWAFCSTNQGRKKDAHRUQZLCVZ");
    const signed char tmp_msg_0[] = {-72, 29, 125, -124, -95, -74, -83, 51, -38, 103, 50, 67, 39, -102, -95, 13, 11, 102, 48, 62, 104, 11, -50, -120, 45, 106, -123, 105, 54, -3, 71, 20, -34, 94, 52, 81, -53, -44, 112, 76, 28, -16, 75, -119, -28, 121, -68, -5, -16, 63, -11, -14, -20, -30, -67, -16, -37};
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
    msg.setTimeStamp(0.4535543197605286);
    msg.setSource(36851U);
    msg.setSourceEntity(127U);
    msg.setDestination(48604U);
    msg.setDestinationEntity(31U);
    msg.seq = 3796489935U;
    msg.state = 60U;
    msg.error.assign("QWBKKWIPJLOCXIXJSDQHKJWZRCECZWGYGNANBLZXMIHVJAVTYWKFIRMSVBFVBBRKNZEILSNYTFTFKTPQBJUIHBPECKGDDGIPFYCWUUUJMVHBZLNVFJUKCUPDWATEAGKANZXVJVYD");

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
    msg.setTimeStamp(0.41065579070256797);
    msg.setSource(63521U);
    msg.setSourceEntity(47U);
    msg.setDestination(10862U);
    msg.setDestinationEntity(59U);
    msg.seq = 2258308051U;
    msg.state = 193U;
    msg.error.assign("RRGIBWIQAZPGRPMESBKUYWHVHLAIOQORRZNGLKIDVSTALJMTKDOKQVJYLBCEZCPJUH");

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
    msg.setTimeStamp(0.7557176211425539);
    msg.setSource(16336U);
    msg.setSourceEntity(68U);
    msg.setDestination(36019U);
    msg.setDestinationEntity(44U);
    msg.seq = 281367708U;
    msg.state = 207U;
    msg.error.assign("AJGDKNVDSDAJWKBOERPDDIZWHSUWPOFFQVADVAPNUBHMDWEPHAUHXIKUQDVMJATEYLNNSFTKIZLHYCBPMXFGEKTZOUVORKOJGBYLSLBEPLZOSXZMFUDTFMF");

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
    msg.setTimeStamp(0.591354577161727);
    msg.setSource(57030U);
    msg.setSourceEntity(17U);
    msg.setDestination(29118U);
    msg.setDestinationEntity(241U);
    msg.origin.assign("YDBJQILEQOOIFEOKNAXSKA");
    msg.text.assign("COTBWGCEHXNLJUXDPOAAVHHFRRLWSDDNZMKSLTRIELEJNKFIGQZLGSNYUDKXOUSSTWKGXABPNWJTVGTAMIGQSFJCAOIGDUIJUNFGKXZXZWHENOFFYMHBZGRIK");

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
    msg.setTimeStamp(0.5929192730520408);
    msg.setSource(8641U);
    msg.setSourceEntity(67U);
    msg.setDestination(34292U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("DXSIBEASJURZGTPWSJDZHISDTARONFOOTOWCQGLKYCMYDQVYNSEPZFPOBGMNLWTXLURTZHYAMTKQIQQRUPZIEYBAXXZYSJJSUKKZEMHMROPFEIUMZNAVYRYFKDVMWHDEAFBKBPCXHVSRICXBDRIZJQTCBQPXGWFGWHZLIVJSJBQAMATUGAPGJFXCCJLWONDNELVYEDNWCFLHUUEMPRGLRHWVLUQVJIOLPKCSWGFKIEKYFKN");
    msg.text.assign("BGQHZHMYYPYLMCKXIKLJPNCPVWBVOVAFSEGDFYDQDBZSMUHVAJSKTZKCMUMTJQCIRTPOFXDFSIQWUKTVJZSDFNWJAOWNOMEBANLGGKAG");

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
    msg.setTimeStamp(0.7071483265838729);
    msg.setSource(44507U);
    msg.setSourceEntity(53U);
    msg.setDestination(10910U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("QJCMMECGTDHMJPMGZHUTYAZKSJSZGXULSXQZXTSVFGAKQHCLNEHSJRXPHRNIYWIZSFTKGAICPPFYDUBWLQRWLYPNAPABYGVFHUWYCHOOKBOJEFBCMBHIAIXEVRJJUDQTRIMZZBDEOHZCXFJVQAUEZXUDQXLMFWLESMQVPRDTAPEVKDNQELDS");
    msg.text.assign("PCSPJYQZLXCZIFGEQBKFYZFLTNZYGQITACCRLXUAWVIHVMMDUBHPNKCSTUDREU");

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
    msg.setTimeStamp(0.4398490570268875);
    msg.setSource(8117U);
    msg.setSourceEntity(140U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("PSIPXBCVIUNRGELXBSUYPMVIXCCEIDQRTABBWFFLMSVCXVT");
    msg.htime = 0.3587622476227432;
    msg.lat = 0.50380163690085;
    msg.lon = 0.41162906650744713;
    const signed char tmp_msg_0[] = {-70, 40, 125, 17, 103, -112, -101, -31, 73, 72, -27, -17, -89, 118, -28, -17, 20, 55, -104, 21, -116, 53, 74, -50, 5, -36, -121, -87, 119, -83, 93, 97, 27, -85, -55, 109, 57, -94, 44, -26, 3, 126, 69, -52, -59, 111, 63, 103, -92, 25, 32, -18, -95, 90, -54, 101, 21, 20, -105, -69, 120, 1, 62, 37, 24, 43, -43, -60, -81, -5, 124, 34, -126, -46, 72, 66, -16, -32, -64, -122, 13, 59, -92, 33, -93, 61, 91, 111, -38, 74, 114, 97, 44, -47, -108, 87, 115, 28, -10, 28, -115, 87, 117, 84, -10, -78, -85, 24, 79, 25, 44, 59, -75, -79, -101, -78, -36, -88, -103, -120, -76, -108, -117, -87, -10, -37, -96, -4, -63, -26, 38, -116};
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
    msg.setTimeStamp(0.6445999836937787);
    msg.setSource(41202U);
    msg.setSourceEntity(242U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("NAEZCHJKNPDLKDXVZGKBBFROKEDEXDCSTDDXRLMMZITVKOITQSQHGEUOIBXICMFOHHADVIJHANYLUQTXCKKERMBHPDYPTGJVSVTZFBSXQZACQC");
    msg.htime = 0.8542301488058778;
    msg.lat = 0.8279982598170897;
    msg.lon = 0.5751996751329301;
    const signed char tmp_msg_0[] = {-100, -49, -27, -108, 83, -42, 38, 29, -10, 3, 36, -25, -113, -25, 37, 1, -15, -109, 124, 24, 2, 75, -96, 71, 73, -26, 25, 52, -45, 121, -22, -47, -33, -62, 25, 97, 46, 4, 63, 70, 115, 106, -17, 124, -122, -58, 22, -96, 19, -38, -123, -126, 69, -68, 102, -67, 64, 115, 122, -39, -78, -17, 100, -110, 42, 92, 15, -57, 101, -4, 72, -40, 30, 90, -11, 76, -27, -17, -97, 17, 16, -38, 17, -36, 52, -40, 62, -85, 9, -56, -67, -86, -121, -59, -57, -119, 13, 27, 70, -54, -40, -12, 117, -81, 70, -3, 59, 118, 5, -68, -27, -104, -84, -26, 55, 12, -58, 48, 105, -112, -9, -63, 34, -98, -22, -23, -116, 35, -94, -119, 48, -48, 82, -95, -87, -100, -124, 83, -125, -116, -58, 65, -9, 80, 48, 34, -76, 100, -128, -76, -107, 63, 110, 90, 91, 93, 34, -18, 32, 69, 96, -58, -82, -115, 14, -46, -120, -70, 44, -83, -44, -19, 40, -30, 22, 22, -103, -13, -83, -32, -4, 15, -85, -51, -124, 52, 3, 80, -20, -80, 43, -3, 11, -126, 118, 113, 113, 16, -18, -61, -118, 64, -117, -117, -76, 64, 77, -90, 121, 14, -11, -13, -106, 9, -70, 90, -6, -123, -40, 87, 19, 120, -65, 113, 9, 1, 69, -39, -73, -11, -70, 115, -47, -98, -75, -94, 51, -43, -86, 84, -32, -105, 46};
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
    msg.setTimeStamp(0.5664611396994004);
    msg.setSource(35230U);
    msg.setSourceEntity(71U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("ONSQXXWDFBPBQOFKJXHUXDSCOKYHRCQCHLNAVZWKEHOJUWDIEUWHCNNVRNDFGVLROILYABTMAEYYGEPCZFMYZSDEVTQNXMFYYGFSQOTFKJDMYJMKTCLATBZLKLCNZGAFLQXYPIAWEBZXBJXASGKEDGXEPHVOGTJUJRGVWPEPQORQMWCJIUKTUIDPMFZZFTUHXBKNRBCRKGVWAEVRIRVSAUZNIIJYBBWLU");
    msg.htime = 0.1702039266275408;
    msg.lat = 0.178212539074333;
    msg.lon = 0.8390775656635673;
    const signed char tmp_msg_0[] = {-56, -37, 104, 81, 90, 74, 74, 1, -112, 23, -124, 72, 5, 24, 55, -119, 114, 19, 126, 45, 82, 99, 50, 42, 49, 99, 23, 4, 70, -110, -15, -68, 66, 31, 28, 120, -83, 67, 77, 12, 74, -26, -110, 104, -120, -80, -84, -45, 71, -56, 73, 77, -41, -35, 14, 45, -2, -128, -9, -35, -15, -98, 101, 20, -74, 105, 97, -92, -123, 70, -54, -100, -117, -67, 64, -27, -44, 81, -115, 33, -61, -8, -57, -85, 40, 87, -81, 5, -12, 46, 35, -16, 89, -41, 29, 68, -111, 35, -98, 14, 109, 122, 40, 114, 124};
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
    msg.setTimeStamp(0.18388285085810363);
    msg.setSource(26565U);
    msg.setSourceEntity(25U);
    msg.setDestination(953U);
    msg.setDestinationEntity(4U);
    msg.req_id = 34865U;
    msg.ttl = 19367U;
    msg.destination.assign("QHIBJORPBPFYHRMWNIEPTMHUJOIXCGOCLDWKQNWWHZNGNRSLFBDYLUAKSJWUNKLYNBMTDZZUQEPUDNAWWLVYPJZPDAJKKLUVXXQD");
    const signed char tmp_msg_0[] = {18, -79, 17, -113, 7, -68, -91, -91, 97, -43, -54, -43, -53, 82, -6, -101, -104, -91, -21, 12, -69, 59, -27, 75, 114, 76, 82, 7, 32, 126, -23, -97, -77, 73, 101, 15, -80, 105, -26, 121, 65, -42, -42, 30, 95, 121, -3, 100, 18, 67, 79, 126, -30, -90, -52, 70, -118, 42, -95, 86, 54, 106, 101, -2, 65, 39, -36, 83, 21, 113, -57, 13, -16, 65, -61, -63, -106, 51, 67, -75, 92, -30, -105, -48, 51, 117, -78, 13, -75, -125, 27, 30, -17, -95, -53, 25, 53, -97, 16, 12};
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
    msg.setTimeStamp(0.3879245103048017);
    msg.setSource(26876U);
    msg.setSourceEntity(146U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(118U);
    msg.req_id = 50064U;
    msg.ttl = 13451U;
    msg.destination.assign("BOOATWXAAOMNUSEPRPJGQW");
    const signed char tmp_msg_0[] = {111, -8, 77, 16, -124, 54, -45, 5, 125, 43, 64, 40, 75, -9, 114, -33, -71, -84, -68, 82, -69, 32, 68, 77, 12, -40, -60, -63, -92, -34, 116, -68, 88, 85, -71, 25, -128, 88, -22, -5, -106, 34, 91, 30, -3, -30, -58, 66, 52, 77, -54, -83, -70, -83, 72, -74, 64, 47, -121, 107, -23, 26, -14, 47, -44, 50, -120, -101, -92, -52, -6, 74, 72, 115, 81, 125, 73, -102, 63, 106, 14, -125, 103, -65, -73, -98, -113, 126, 76, 14, 114, -111, -32, 67, -35, 11, -85, 36, -88, 63, 12, -5, -46, 74, -38, -72, -86, -88, -57, -20, 15, -31, 75, -103, -48, 120, -6, -40, -122, -26, 58, 93, 28, -22, 45, -67, 3, -44, -1, 12, -7, 33, 11, -47, -27, -1, 80, 75, -57, -103, -86, 116, 2, 18, 38, -60, 97, -34, 6};
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
    msg.setTimeStamp(0.9662202730552412);
    msg.setSource(56615U);
    msg.setSourceEntity(222U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(65U);
    msg.req_id = 4006U;
    msg.ttl = 59246U;
    msg.destination.assign("GMQXUSSWAESNVUDRTMGBCHHIYRQBHJVHMJYHPOXUNUXKXPTNZOZOUCMGOHCSVOQGMLHQGBSEUPVADLWJKZSFQCYQNGKRVFKYGIEGPJIDAJBZLIRSZBURBCKMZFMVXFKZIPMBYAXDVNURFEHZVPZPAQRSTXTEAECSBFQPIFJHNAPYKZ");
    const signed char tmp_msg_0[] = {-20, 57, 69, 102, -66, -16, 44, 56, 1, 53, 73, -79, 28, 64, 116, -90, -35, 105, -100, -68, 102, -22, 12, 110, -23, 110, 97, 45, 104, -55, -56, -83, 109, -92, -124, -111, -24, 1, -127, -118, -3, -4, -88, 96, 117, 65, 88, 49, 54, -97, -12, -84, 103, -39, 95, -69, 41, -112, 62, -71, -29, 58, -78, -2, 76, -64, -15, 119, -119, 105, -81, 5, 88, -52, -114, -102, 99, 61, 76, 107, 126, 79, 64, -1, -68, -74, -80, 92, -41, -117, 95, -13, -122, -17, 13, -1, -38, 20, 105, 27, 96, 103, -74, 9, -125, -11, -94, 119, 78, 96, -55, -69, 81, -108, -87, 40, -13, 121, -74, 119, 22, -110, -108, 3, 15, -70, 77, -16, 96, 91, -3, 6, -69, -72, -16, 26, -32, 68, -83, 123, -103, -5, -49, -24, -1, 39, 28, 19, 101, 49, 8, 46, -77, -103, -99, -4, -9, 57, -14, -12, 54, 20, -126, -100, -38, -43, -107, 93, -17, -116, 12, -43, 103, -86, 4, -102, -39, -42, 4, -104, -11, -69, -66, -43, -79, -34, 89, 6, 64, 50, 68, -60, 9, 108, -90, 81, -113, -109, -119, -1, -73, -112, -77, -92, -1, 30, -22, 10, -63, -114, -71, 23, 18, 80, -40, -84, -107, 19, 60, 80, -31, 34, 80, -63, 6, -21, 96};
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
    msg.setTimeStamp(0.39561987929769116);
    msg.setSource(18132U);
    msg.setSourceEntity(123U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(4U);
    msg.req_id = 2586U;
    msg.status = 251U;
    msg.text.assign("IOTLITBDOUINEOUUTMRFPNXFVHVEMGPEHMYMOGRAFTSVCUTFPZMDSUUIGTNNODACYANUHFILHJGKCEHIPSRXFBIBBSZQJCQBFVKMONQXSAHEJXXRZHZGJARSPDFJBUDNZQJYNUPUKWEPCRVELIPWNPKXWGZYQKXCGLRKOBLQYKDCNYRJVSWAFGLSLOMMVLYCBFWWQCJVGVKEAXMROJTWIKATVKZQLOQZBHHAHDQMTLWPJIERXCDXSDZA");

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
    msg.setTimeStamp(0.5966749760646255);
    msg.setSource(55001U);
    msg.setSourceEntity(0U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(83U);
    msg.req_id = 37406U;
    msg.status = 87U;
    msg.text.assign("QYOSZNRXSDARLZXFDRMGPSTSVNSOFNILZQHWEFXBIIMEMDQYJLAMVXTEXHBMUQPCJBLYNEMAGYVVWEDBTACKXEUGBKAQPAJQQKLXTWPZOJVWIDNAPUIKPDLGWVHVGKRTHDGVEMAWPOHSSIFBZJNNGDRCMBFKGXESBANZRHXY");

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
    msg.setTimeStamp(0.8706538718565169);
    msg.setSource(50447U);
    msg.setSourceEntity(102U);
    msg.setDestination(42972U);
    msg.setDestinationEntity(44U);
    msg.req_id = 54647U;
    msg.status = 186U;
    msg.text.assign("GOREOIKJFLLIEBIWRHBWJRXOLCHNORJPCFENNLVZHVIKRHDUAVGXTPSHCSRKMUNZDFOLMDVRGKCVSTZBTWMXAEXEEEJFVQRAZODQMDTWKTQHZWZGUVNXHNOIZLJMQSUWMBBQRCYYOTOFGNUKMPCYAALJSZDSBMZB");

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
    msg.setTimeStamp(0.6443438158013732);
    msg.setSource(32990U);
    msg.setSourceEntity(143U);
    msg.setDestination(30720U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("VXSMNSKYRRCVOFCOUUACYNMOIIYYZLPXAJCHLDYDKCILQKVFCNHBGPJUOVJIAQXOZGSXNRPBWUYZGUIFTGEOHJAYKZNFTEBBKBAOTZZHAHPNUDESHPSZMETPRWMNXTTARESGFQFQLJLPFKUHITFDQVOMIDJSXOCAWUTXNAUEMWQTGNJMMZLCKLAWFKVXIQBF");
    msg.links = 3556746310U;

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
    msg.setTimeStamp(0.25871952035600987);
    msg.setSource(22763U);
    msg.setSourceEntity(172U);
    msg.setDestination(7987U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("MSLZGKUEQETPAFTZMCLJUATLSWXYUCQVILMHRXWODONFLHXLRZHIAAKXBNZQYPJLJCPOORMMAAPPQMDKTVFSUKBHIEQABYKBDSNBIGMYCFNNYQJSMODSKBPYCHZYNXCPWZHIFWLBPQDVPANBVTVTZOIJXKGCCQRROAGJAUZSHQEHYFCWGRNZPTKRJXUBRLIDLWWJQUUFIRRKJBFXGIGXVEIEDMYSNDVJTTMOKSHONZVG");
    msg.links = 218039525U;

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
    msg.setTimeStamp(0.06774240712762958);
    msg.setSource(16152U);
    msg.setSourceEntity(167U);
    msg.setDestination(15730U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("VXVCGVQAYJSHLDDYMEDVGGMJHZOUKYCTKSTJSGDJLVRZUHAELASYHTGFOBX");
    msg.links = 4129640238U;

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
    msg.setTimeStamp(0.8843035691963798);
    msg.setSource(54113U);
    msg.setSourceEntity(34U);
    msg.setDestination(40444U);
    msg.setDestinationEntity(166U);
    msg.groupname.assign("BDTCNRULJEJMQVYZQIOHODNNPKARWCXGBGZSJQZUALKUBRESEPTAISYTPKOWLUMFLQMYOWHIRTXYMPVIHAJQHVTALK");
    msg.action = 236U;
    msg.grouplist.assign("PSTJGWUBDXMWRYMACENWONPMLMMOCASEKXFKHAHBOBXAUEXPXJBWIZYDCEKLHZTXMRSHDESPQVPECYBOQOONWLQYJWZBJNTTVGNWYVPMFWGHHDXPSDJHRCLHFGTQDZSFGSBFVDVYIIWOACAKYKQFCRKIMOLZLUQGRBORIVSIXAHJZQATXRRLCUSU");

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
    msg.setTimeStamp(0.24429886154018776);
    msg.setSource(30114U);
    msg.setSourceEntity(198U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(59U);
    msg.groupname.assign("UJGYQUXAFOJCQNFCYEMAIZTURLPQCOQEBJTLKZZMIFYNVOCFBLSHNJYVWTKRCTWSDQWGEVSZEQPIMANXVDYJBXSYEGDXHRYQYC");
    msg.action = 253U;
    msg.grouplist.assign("QIQNQHSYNLFEMGUUNTPWPJSTEFUOOKJFQLBFOGLIVAAGOVGTRJPRRZRSSSTKYYBDOYAZWWUBWPEAEOOZCNDWPNDGZNNDAJLKWDJNCRZLDY");

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
    msg.setTimeStamp(0.8361705307721143);
    msg.setSource(46523U);
    msg.setSourceEntity(34U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(29U);
    msg.groupname.assign("XAMFSOHRZLRMDWWT");
    msg.action = 118U;
    msg.grouplist.assign("POGVILZCUYMZTMHPUYVTMOFFJEEDXNDWVGCCAQDORSFPQMGFWHQWBJHXTPSLOYWQARKSAZRXQINNHBUEVTJXSNYAXFEUHRBFTMKIKHGZLBRNUSHCVQJKPOIJATSZZBFIBHDAGDELZZRPSNTIJMCKKMUWMEDUYBOOPILRQOGEXH");

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
    msg.setTimeStamp(0.9080797945257173);
    msg.setSource(5443U);
    msg.setSourceEntity(220U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6585120200734368;
    msg.sys_src = 28955U;

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
    msg.setTimeStamp(0.45195521202865496);
    msg.setSource(20095U);
    msg.setSourceEntity(59U);
    msg.setDestination(23294U);
    msg.setDestinationEntity(165U);
    msg.value = 0.23360816749857993;
    msg.sys_src = 47360U;

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
    msg.setTimeStamp(0.812294169872018);
    msg.setSource(56737U);
    msg.setSourceEntity(23U);
    msg.setDestination(15109U);
    msg.setDestinationEntity(31U);
    msg.value = 0.521093445240352;
    msg.sys_src = 58962U;

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
    msg.setTimeStamp(0.49741584197624034);
    msg.setSource(59501U);
    msg.setSourceEntity(83U);
    msg.setDestination(22461U);
    msg.setDestinationEntity(57U);
    msg.value = 0.29280904818434406;
    msg.units = 254U;

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
    msg.setTimeStamp(0.7638141308135257);
    msg.setSource(37263U);
    msg.setSourceEntity(57U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8086550825191798;
    msg.units = 240U;

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
    msg.setTimeStamp(0.28983785548214147);
    msg.setSource(51656U);
    msg.setSourceEntity(61U);
    msg.setDestination(59367U);
    msg.setDestinationEntity(55U);
    msg.value = 0.7671760702988457;
    msg.units = 197U;

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
    msg.setTimeStamp(0.6475433753531019);
    msg.setSource(25226U);
    msg.setSourceEntity(5U);
    msg.setDestination(56977U);
    msg.setDestinationEntity(176U);
    msg.base_lat = 0.863211363821912;
    msg.base_lon = 0.7667975445292666;
    msg.base_time = 0.8162046561293576;

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
    msg.setTimeStamp(0.9496706956117656);
    msg.setSource(17026U);
    msg.setSourceEntity(179U);
    msg.setDestination(50631U);
    msg.setDestinationEntity(244U);
    msg.base_lat = 0.8376512860810759;
    msg.base_lon = 0.8294362048820709;
    msg.base_time = 0.7378823677583467;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 39910U;
    tmp_msg_0.destination = 13574U;
    tmp_msg_0.timeout = 0.6213270828998149;
    IMC::CommSystemsQuery tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 80U;
    tmp_tmp_msg_0_0.comm_interface = 13897U;
    tmp_tmp_msg_0_0.model = 3438U;
    tmp_tmp_msg_0_0.list.assign("ODVXBCPNLKEOMQNJAMBJYWLTNNRAIZPVQCPLWDFGYEKIASXNGVFUYLDXWIUJANUQVSDHHWLEMTRRHRUFEIFRGYGORGYUCEBSEHOKBVYOPAARMMMNYIESKBGNJGZBPLZAQTTTDDPGCOGLJIZAIZZVRMMDFFHYKLPJSBHSOBKWCRXEXDCIEULWCOSVWKWIQSYJQBLUSZKTFAXDVWHS");
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
    msg.setTimeStamp(0.8028343971475975);
    msg.setSource(17096U);
    msg.setSourceEntity(64U);
    msg.setDestination(20542U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.09706392367969274;
    msg.base_lon = 0.7052288216402084;
    msg.base_time = 0.37237840604503936;

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
    msg.setTimeStamp(0.32271890856709307);
    msg.setSource(52241U);
    msg.setSourceEntity(196U);
    msg.setDestination(12061U);
    msg.setDestinationEntity(145U);
    msg.base_lat = 0.7274098471355668;
    msg.base_lon = 0.5446381895196445;
    msg.base_time = 0.9101284260657928;
    const signed char tmp_msg_0[] = {-124, 19, 5, 15, 83, -56, -127, 109, -60, 22, -14, -70, -53, 59, 46, 100, -62, -60, 118, 10, 59, 9, -83, -126, 96, 61, 19, -89, -56, -92, -87, -15, 20, -32, 62, -88, -26, -64, -64, 125, 8, 26, -111, 54, 91, -62, -49, 6, -35, 2, 34, -72, 37, 45, -85, -46, -46, 61, -46, -15, 96, -42, 78, 45, -74, 61, 98, -8, 4, -127, 118, 105, 19, 125, 87, -83, -98, -44, -53, -123, 82, -88, 62, 110, -6, -37, 57, 92, 90, 80, 74, -19, 20, -26, -23, 45, 84, 43, -49};
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
    msg.setTimeStamp(0.6921153416696444);
    msg.setSource(14442U);
    msg.setSourceEntity(167U);
    msg.setDestination(16323U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.3638171700982771;
    msg.base_lon = 0.42122987328980155;
    msg.base_time = 0.36303501512782765;
    const signed char tmp_msg_0[] = {16, 13, 91, -121, 88, -27, 18, -94, 39, -116, -71, -75, -67, -1, 61, -18, 49, -3, 58, -113, 100, -109, 24, -55, -116, 112, 96, -35, -115, 83, -52, -106, 106, 86, -80, 84, -29, -41, -16, 48, -1, -28, -81, -56, 64, 70, -111, -88, 19, 26, 24, -78, 58, -52, 63, -70, -126, 101, 103, 47, 103, -102, -99, -82, -29, -128, 56, 43, 101, 52, -31, 29, 91, 78, -43, -26, -82, -94, 71, -28, -109, -42, -9, 102, -15, 21, 59, -84, -74, -90, 19, -62, 46, 21, 103, -78, 6, -19, 40, -5, -71, 75, 100, -78, -45, -27, -115, 125, -91, 9, -6, -69, -72, -123, 54, -40, -118, -123, 98, 123, 29, 18, -46, -59, -100, 45, -44, -45, 50, 7, 66, 113, 68, -97, 58, 92, -109, 67, -19, 74, -111, 66, 92, 10, 45, 122, 11, 38, 97, 92, -125, 106, 77, 108, -82, 58, 111, -121, 115, -116, 13, 122, -71, 34, 84, 50, -30, 48, 102, 7, -105, -115, -61, 117, -96, -115, -111, -10, -52, 8, 67, -21, -96, 26, -51, -22, -123, -45, -1, 61, -79, 62, -48, 12, -9, -119, -80, 66, -67, 86, 75, -114, -119, 85, 13, 26, -64, 63};
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
    msg.setTimeStamp(0.47043552750892015);
    msg.setSource(41199U);
    msg.setSourceEntity(61U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(158U);
    msg.base_lat = 0.826105577561497;
    msg.base_lon = 0.3569218629112936;
    msg.base_time = 0.322956718885652;
    const signed char tmp_msg_0[] = {118, 75, -22, -104, 15, -11, 33, -56, -104, 80, -95, 65, -2, -87, -52, 28, 57, 123, 31, 63, -70, -44, 69, -65, 16, 89, -126, 64, 116, 77, 87, 123, -72, 89, 50, -103, 120, -4, -67, 110, -48, 25, 25, 90, -17, -37, 45, 102, 88, -64, -28, 6, 108, -104, -25, 1, 74, 6, 46, -83, 124, 31, -48, 41, -32, -95, 12, 72, 27, 14, -114, 51, -118, -41, 59, -4, 57, 7, 36, -105, 18, -80, 14, -91, -2, -74, -123, 77, 30, 16, -15, -9, 67, 4, -109, 120, 10, -97, -21, 124, 56, 22, 100, 79, -54, 84, -77, 113, -40, -40, 109, -72, 46, -93, 39, 55, -88, 73, 6, 76, 108, 99, 44, -111, 88, -47, -94, 2, 42, 104, 37, 110, -14, 111, 24, 16, -29, -109, 22, -101, 97, 47, -89, -18, -107, 37, -78, -75, -123, 27};
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
    msg.setTimeStamp(0.02264935929290912);
    msg.setSource(24677U);
    msg.setSourceEntity(40U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(99U);
    msg.sys_id = 51092U;
    msg.priority = 84;
    msg.x = 16533;
    msg.y = -4192;
    msg.z = 27876;
    msg.t = 1381;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 130U;
    tmp_msg_0.id.assign("LFDBUHBSRMMFHCWUORKESPDDBPIGGJNEQLNATSSTXNDIIHNKZAPUOZNJDYYLJYGNXPQSUDYMBBBEIRZMCQVWLQZCAHFDSLVWUXCUZNBDRCYETIHGMODSAZEHXZQHXEXKLMLAMAOZKQVNICMVTMTVLTTOXKWTYZFIAJHVL");
    IMC::LogBookControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 10U;
    tmp_tmp_msg_0_0.htime = 0.03052299342604281;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 14U;
    tmp_tmp_tmp_msg_0_0_0.htime = 0.7838667494724965;
    tmp_tmp_tmp_msg_0_0_0.context.assign("HVGHDEZRKYRINLNBPBZSEDDSQWZXSBWCHBEMCBXMXPNUCMNAPRQAEYEGRJMCLKUYYAWLRXXKBVGSSDRKEHVGFWFTRLFCZKHTENOWLLCIYFUGVCSWKVFVZGVEYAOUMLJXDUMHDCCTLDBDINOROPOYPAYAUIZDUWYUFPIAMSHZBJQJKT");
    tmp_tmp_tmp_msg_0_0_0.text.assign("MHCLZYXSMEMKEKOTCIEBDGUTKIPHWPLMDSSKEVVSGLSFZSAUUNPWDXORAMRBFNVLHZEDZTJFWQJXERYHJPOGCOFKTTIJMAOBEZTMDCPEKCKCZASFVNLFBRWGZUHXIXNQUKUYYTREVUAGBRXWUAOGKNSNOQQAXI");
    tmp_tmp_msg_0_0.msg.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.027102232936932813);
    msg.setSource(46327U);
    msg.setSourceEntity(46U);
    msg.setDestination(658U);
    msg.setDestinationEntity(25U);
    msg.sys_id = 64987U;
    msg.priority = -99;
    msg.x = 24730;
    msg.y = 8107;
    msg.z = -17091;
    msg.t = 27824;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 144U;
    tmp_msg_0.comm_interface = 69U;
    tmp_msg_0.period = 35500U;
    tmp_msg_0.sys_dst.assign("ZBSMQJDJLFWFUAZYAQMUJJHIEQYTLXTCTKNQJSOGUGRHKRVFCDQGBLPLTCTQRZSMUCZPIYUIFFDAXCBXHOSQIYKTWOJFAVLZMCCBBPRNWZMQNOITEASYRAVKIDMVSBEXPLKXAJXWGKGLATDBOGMWEIKWSKLHZYPBQEUPWNPVHEFRWYEBWAZNYCCXUUZWPHUJUZVHCISSDREPQFNOLFHODDNMSOFEV");
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
    msg.setTimeStamp(0.5096769990432933);
    msg.setSource(43035U);
    msg.setSourceEntity(198U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(178U);
    msg.sys_id = 53397U;
    msg.priority = -44;
    msg.x = -27752;
    msg.y = 20459;
    msg.z = 7384;
    msg.t = -6876;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("TCFILATSGNGKTMNQXOKXEJIKNCMYZTUYQTOKBNIKRQCPRKHLKIDERDBUEWPNSNBCUJXWQPRCFMWRJLWS");
    tmp_msg_0.value = 55U;
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
    msg.setTimeStamp(0.5787886038341442);
    msg.setSource(27452U);
    msg.setSourceEntity(98U);
    msg.setDestination(24007U);
    msg.setDestinationEntity(151U);
    msg.req_id = 7835U;
    msg.type = 8U;
    msg.max_size = 49105U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.17050295611624344;
    tmp_msg_0.base_lon = 0.3266600809812561;
    tmp_msg_0.base_time = 0.04853416280889944;
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
    msg.setTimeStamp(0.4397434729985197);
    msg.setSource(24914U);
    msg.setSourceEntity(248U);
    msg.setDestination(42729U);
    msg.setDestinationEntity(251U);
    msg.req_id = 55030U;
    msg.type = 2U;
    msg.max_size = 64319U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8071264503560872;
    tmp_msg_0.base_lon = 0.05886629368270779;
    tmp_msg_0.base_time = 0.1203541546582595;
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
    msg.setTimeStamp(0.7328484873669968);
    msg.setSource(2394U);
    msg.setSourceEntity(115U);
    msg.setDestination(793U);
    msg.setDestinationEntity(63U);
    msg.req_id = 17071U;
    msg.type = 70U;
    msg.max_size = 16745U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4153637295146667;
    tmp_msg_0.base_lon = 0.7444228127026855;
    tmp_msg_0.base_time = 0.1245670413366029;
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
    msg.setTimeStamp(0.7066744225614133);
    msg.setSource(24345U);
    msg.setSourceEntity(29U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(184U);
    msg.original_source = 50394U;
    msg.destination = 61659U;
    msg.timeout = 0.4936291910854633;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZQNMLGZCYNIGRAYYITDGCMHRWPOEGRTNNABPLZCHDDCQBJMBTFWJZEZVLYKTILBEQAWWLALBOQVEUGIQMXOESLFSIFEYIGVTHQUUKVDKHILXOJIALXGITHMSNCWJTJVZSNVJGTDWPABWMRJXAEEZYEXPKMHSHRPXBKZBVFZNDKXTQOJGWD");
    tmp_msg_0.value.assign("NSVJARZZSISQOPXMCVKMFWKTXZEDRATNXGWFMZXZHLEMSFOOIQMVXGTNNKAMGIHDSPXMCUKGBJOHBEYWVYYCPRRUBSXIQRTTOQLRCQYDTLLQBTFPTENLOIVGDGHYVEYXHUIVUUXJGLFBEJLLPFUJZYVPTOQAHNACHSBKIJASODYASHUGJIKRBWQUMLCCRBGAWITWDKFM");
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
    msg.setTimeStamp(0.005562026828307642);
    msg.setSource(41320U);
    msg.setSourceEntity(39U);
    msg.setDestination(36281U);
    msg.setDestinationEntity(62U);
    msg.original_source = 30127U;
    msg.destination = 24631U;
    msg.timeout = 0.4335539956187422;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 99U;
    tmp_msg_0.list.assign("ZLDCXUSVIJFLDDWYZVZEIOEOIZNBDDUWEWVEMQSVTKPMHFMUX");
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
    msg.setTimeStamp(0.7788546639036404);
    msg.setSource(48994U);
    msg.setSourceEntity(16U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(177U);
    msg.original_source = 4282U;
    msg.destination = 64668U;
    msg.timeout = 0.8431126913301014;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 970301982U;
    tmp_msg_0.start_lat = 0.9242612751349235;
    tmp_msg_0.start_lon = 0.43609378432555856;
    tmp_msg_0.start_z = 0.14376072264904938;
    tmp_msg_0.start_z_units = 4U;
    tmp_msg_0.end_lat = 0.7194687172689428;
    tmp_msg_0.end_lon = 0.2460943114690004;
    tmp_msg_0.end_z = 0.17898743693208496;
    tmp_msg_0.end_z_units = 81U;
    tmp_msg_0.speed = 0.6416786373714314;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.lradius = 0.2618485866289303;
    tmp_msg_0.flags = 5U;
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
    msg.setTimeStamp(0.6341515112903674);
    msg.setSource(25862U);
    msg.setSourceEntity(175U);
    msg.setDestination(42680U);
    msg.setDestinationEntity(220U);
    msg.type = 131U;
    msg.comm_interface = 37972U;
    msg.model = 37308U;
    msg.list.assign("RSDONHEIVOYYJVUBRDATWRGCNOVTGADTUXJSLHLSARSBMIRRDJZEZCGM");

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
    msg.setTimeStamp(0.48196574168729844);
    msg.setSource(56340U);
    msg.setSourceEntity(130U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(189U);
    msg.type = 136U;
    msg.comm_interface = 46967U;
    msg.model = 20069U;
    msg.list.assign("VBOIACIQZICHNTZOGIXJWMYWCTSABNEKJEFNTBUCNEFTZMYQSAXLPFEBOYKPV");

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
    msg.setTimeStamp(0.9791057955002647);
    msg.setSource(32428U);
    msg.setSourceEntity(103U);
    msg.setDestination(39382U);
    msg.setDestinationEntity(159U);
    msg.type = 236U;
    msg.comm_interface = 62878U;
    msg.model = 31874U;
    msg.list.assign("IZPZINEFQXWCWRIDREMVVSEAKWPEAPXQDXOEYGZTWKJQTYOVGNEIMSFIJAULIPTZZFQABUDGZUQADMCAJOGGVSLTKXWLHMCATHRCMRCDOLUUUCRGOMVNNKSDCMHSBSXETFHUHJBOBVFTG");

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
    msg.setTimeStamp(0.37387433768233325);
    msg.setSource(11162U);
    msg.setSourceEntity(224U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(175U);
    msg.type = 228U;
    msg.req_id = 3439065824U;
    msg.ttl = 53329U;
    msg.code = 1U;
    msg.destination.assign("QCBJDFBWSNPIZRVKWPCUFBOJEWDUTUHXIWLGHULRFKHRUVCCTIOKHAMNKDQTGVVLHNQPMDVYPJUJENBODKEGQCFYIOTMXQEFRSVAUPZCHSSDMXEXQGDAMULY");
    msg.source.assign("MGKXGMTFPAVLRLPBYNGJUFVIDNEJNRYVCETHEPPUJTSMYAEHPGYMXGMVMKDCKKTUNKBYGATFVGXSLCWSEQLHSTVQBZTFRRTFBCPLYEAZICIBXJMQZJQNMDOWQDFW");
    msg.acknowledge = 85U;
    msg.status = 48U;
    const signed char tmp_msg_0[] = {-106, -12, -109, 7, -9, 120, -117, 43, 70, -94, -115, -91, 51, 105, 87, 63, 50, -60, -46, 113, -14, -124, 6, -108, 63, 60, -54, 6, 54, -92, -40, 89, -122, 123, -128, -87, 12, -29, -99, -69, -92, 116, -19, -120, 16, 0, -112, 88, 44, 59, -106, 44, -89, 39, -128, -78, -123, -17, 114, 23, -107, 19, -14, -90, -21, 62, 29, -43, 115, -30, 96, -90, -54, 101, 25, -51, -67, -4, 49, 25, 21, 125, -72, 60, -29, 9, 66, -120, -97, 114, 87, -1, 79, 56, 45, -77, 69, 79, -104, 72, -70, 71, -95, 20, -45, -125, -61, 53, 44, 77, -5, 86, -106, 16, -117, -90, -36, -119, -50, 124, 78, 125, 106, -16, 10, 42, 2, 33, -14, 22, -93, -116, 104, 37, -60, -97, 95, -125, 21, 52, -15, 48, 43, -115, 103, -43, 126, 3, -68, 111, -31, 41, -72, 5, -31, 23, -94, 96, 63, 122, 78, 79, 38, 125, -3, -118, 96, -52, 83, -31, 94, -43, -28, 63, -116, -120, 111, -35, -92, 28, -54, 36, -19, -5, -25, -90, -126, 49, -122, -91, -53, 80, 26, -45, 32, -122, -96, 120, -75, -88, -63, 22, 79, 82};
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
    msg.setTimeStamp(0.9815406011334769);
    msg.setSource(13953U);
    msg.setSourceEntity(19U);
    msg.setDestination(37114U);
    msg.setDestinationEntity(202U);
    msg.type = 35U;
    msg.req_id = 2242620825U;
    msg.ttl = 5379U;
    msg.code = 42U;
    msg.destination.assign("WERBQNIIEIWQEKJZGSXKTTCXMNDKQNMCERNPWOYGSOMBLIHTQKYCMCAVEOJDAJDWRWCGQKXURWRFJPDRXGYNYFNV");
    msg.source.assign("NERFWOFRZNLHSXXQMDZBERGVOBOTLQJMBAEBKOIMNGIQDIBYSXFWGPCBRWSXAGTJPEAHPHCQTMLGWJDLXUJKJYSNNMUMJNSVKZMJTXYOWGCRXVLIBVQECAEUFCCLQCKBJTRUHJELHZZCFRDAUSYVHLPYRIFMXOXDWHZTIUPLAMRFSOGQYNIATIDTDG");
    msg.acknowledge = 107U;
    msg.status = 26U;
    const signed char tmp_msg_0[] = {-42, 86, -17, -59, 119, -108, 42, -54, -116, -91, -39, -113, 20, 76, -5, -97, 109, 81, 60, 84, 30, -113, -26, -52, -16, -75, -66, -51, 46, 86, -14, 47, 37, 51, -93, -37, 64, -99, -35, 111, 22, -74, 92, 96, 126, -74, -71, 34, -43, -7, 16, -66, 65, -32, -73, -92, -22, 25, -58, 39, -124, 93, -59, -3, 120, -110, 33, 41, -128, -23, 103, 123, -21, -23, 11, 84, -101, -47, -3, 109, -79, -36, -55, -22, 99, -85, 8, -41, 113, -67, 126, 98, -31, -19, 76, 18, -41, 61, 8, 92, -78, -86, -127, 14, 99, -43, 76, 48, -57, 73, -37, -24, 48, 61, -13, -26, 98, 71, 115, -30, 105, -88, 18, 123, 1, -97, 67, -8, 18, 32, 58, 56, 60, -67, 13, -97, 105, -67, -86, -56, -53, -30, 30, -55, 25, 35, -75, 11, -95, 12, -39, 10};
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
    msg.setTimeStamp(0.7905607011021573);
    msg.setSource(37202U);
    msg.setSourceEntity(17U);
    msg.setDestination(1730U);
    msg.setDestinationEntity(237U);
    msg.type = 123U;
    msg.req_id = 2493854760U;
    msg.ttl = 7918U;
    msg.code = 228U;
    msg.destination.assign("MIQYVOASKCNQCOJSYIMSDHSLULKGEWRKDHXXZFABGFSWOZYKFYLIRKQZRNAEXMGQHZRPJVPYAVUTAKRORTMXANWBACGYYQGRRDEZDJBBPSXGTHJIBVNFCCSILMNVOGTWF");
    msg.source.assign("GRYRHAZGYAOPNZTIRPYPNZLRAEIHVMSRNWHDSVFFEJPQFELVGASQYQNNESZAMHMWIQEWNKYFCKUWQKYVPTVUIBRFMLMUDZVMSGZYHIMUYTECUYJTJXCETJTHNLZXDACZANRXJSTLJHLNVOKDGSGMKBBHWPBOOOJDQODBR");
    msg.acknowledge = 39U;
    msg.status = 1U;
    const signed char tmp_msg_0[] = {109, 44, 38, -84, -24, -76, 79, 85, 41, -72, -94, -20, 65, -107, -48, 93, -121, -28, -79, -118, 25, 120, 112, -103, -120, 19, -11, 25, -25, 43, 14, 28, -123, 106, -90, -53, -72, -58, 5, -12, 73, -107, 85, 59, 21, -71, 124, 98, 57, -88, 11, 34, 16, -67, -107, 5, 20, 77, -84, -38, 17, 47, -5, 59, -20, -100, -84, 82, 21, 67, 119, -121, -4, 66, 97, 123, -101, -21, 107, 77, 47, -79, 31, 34, 42, -68, 113, 39, -20, 62, -125, -119, 101, 94, -28, 54, -47, -112, -51, 29, 70, 14, 6, 16, 97, 66, 28, -69, -114, 116, -42, -1, 122, 63, 17, 107, 111, 13, 64, 36, 80, 0, -15, -89, -84, 50, -89, -31, -21, 17, 44, -7, 86, -72, 35, -33, 58, 106, -33, -22, 64, 40, 12, -85, 110, 24, -26, 45, 78, 7, 1, -108, 36, 73, -119, 52, -84, -13, -48, 75, 83, 49, -64, -1, 101, 63, -23, 57, -114, 22, 23, -43, -85, 124, -23, 5, 102, 67, -34, 1, -49, -27, -117, -20, -80, 9, 24, -35, 103, -58, 39, -47, -102, -22, 82, 88, -125, -26, -58, -56, -126, 11, 40, 67, -127, -8, -33, 41, -115, -97, 49, 28};
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
    msg.setTimeStamp(0.9323382478428989);
    msg.setSource(29351U);
    msg.setSourceEntity(91U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(193U);
    msg.id = 6U;
    msg.range = 0.5669533589108495;

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
    msg.setTimeStamp(0.33936161641777296);
    msg.setSource(45279U);
    msg.setSourceEntity(37U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(101U);
    msg.id = 225U;
    msg.range = 0.35378362052149304;

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
    msg.setTimeStamp(0.39139476483374025);
    msg.setSource(20091U);
    msg.setSourceEntity(202U);
    msg.setDestination(45728U);
    msg.setDestinationEntity(134U);
    msg.id = 140U;
    msg.range = 0.9895726763970154;

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
    msg.setTimeStamp(0.8663621867805086);
    msg.setSource(20422U);
    msg.setSourceEntity(215U);
    msg.setDestination(28558U);
    msg.setDestinationEntity(79U);
    msg.beacon.assign("NFXKKLDQKEWMTVHMBXQOJIFGFPPUMFXNYHOSBCGCLTAIBUWQIXEXHRCZKSVURYAZRZVHCWLALGPJCEVUQOQOMCDUKOKFOVLASPHZPXJDVTBCGQMKQXTONJJLBLWSBDBADGTVMGHNIWEJYMRTSYHZUBIYXGPOBYDPZJHWSUCPPU");
    msg.lat = 0.573395298346274;
    msg.lon = 0.17412892308671268;
    msg.depth = 0.29761527955041034;
    msg.query_channel = 138U;
    msg.reply_channel = 40U;
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
    msg.setTimeStamp(0.10627912769921355);
    msg.setSource(20533U);
    msg.setSourceEntity(212U);
    msg.setDestination(34276U);
    msg.setDestinationEntity(18U);
    msg.beacon.assign("XARDPGNXYRURZTZZHYLJYWHYYSJUVASTGEIFOXBJAXXKKOBEEDSZIHQITGWCVNHRRBQOJBFQVEPDMUJOUTGHXSJUVZPAWVVWVMTLCGLPVQGIZKVLAOBCREIFNBPWECUMFNMMPNFMTYQKHCZGDLILAJNWUWQLXFCDSKQEUCHOBMQYWEICRFRHWIZ");
    msg.lat = 0.8093441070300627;
    msg.lon = 0.4285583312461343;
    msg.depth = 0.6634907892467937;
    msg.query_channel = 198U;
    msg.reply_channel = 113U;
    msg.transponder_delay = 248U;

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
    msg.setTimeStamp(0.21095952074784985);
    msg.setSource(52137U);
    msg.setSourceEntity(93U);
    msg.setDestination(12955U);
    msg.setDestinationEntity(85U);
    msg.beacon.assign("XYTXYAQILNIWBOWNKVWFXLFWIKAGCTSGMDQZGVTAPRAKFBNTVMWFPQHQCMZYJNEDONRJGSHBJECZXYWBZDAFODIKJHLSCFDULQPQFQOKHXUVWTOSSRHNDCDLOOMYPJPNJVGTUMPVNAMHJAGCIMCCXSUDVXMMPGBBLBSKNRUJROOWEAECBJPHA");
    msg.lat = 0.203251853060888;
    msg.lon = 0.8718374862376724;
    msg.depth = 0.2725520662814006;
    msg.query_channel = 213U;
    msg.reply_channel = 183U;
    msg.transponder_delay = 151U;

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
    msg.setTimeStamp(0.26772798046451673);
    msg.setSource(35098U);
    msg.setSourceEntity(220U);
    msg.setDestination(61646U);
    msg.setDestinationEntity(24U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.4513023475746728);
    msg.setSource(26656U);
    msg.setSourceEntity(7U);
    msg.setDestination(51131U);
    msg.setDestinationEntity(50U);
    msg.op = 245U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BXAXPSIGZVYAPUZCGQPFHNQIUIACJZMHIKQAFKYERMQJNKBPMZLWFCKRYKANE");
    tmp_msg_0.lat = 0.810925092147645;
    tmp_msg_0.lon = 0.5995939500500562;
    tmp_msg_0.depth = 0.875553035392869;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 1U;
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
    msg.setTimeStamp(0.728926283658165);
    msg.setSource(42724U);
    msg.setSourceEntity(158U);
    msg.setDestination(16978U);
    msg.setDestinationEntity(216U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.11371292439545377);
    msg.setSource(9456U);
    msg.setSourceEntity(64U);
    msg.setDestination(29942U);
    msg.setDestinationEntity(54U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7985099663381402;
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
    msg.setTimeStamp(0.2960317047626597);
    msg.setSource(21238U);
    msg.setSourceEntity(66U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(232U);
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
    msg.setTimeStamp(0.5557592489865951);
    msg.setSource(17148U);
    msg.setSourceEntity(71U);
    msg.setDestination(64730U);
    msg.setDestinationEntity(161U);
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.5969820974203753;
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
    msg.setTimeStamp(0.07697267434342747);
    msg.setSource(44729U);
    msg.setSourceEntity(57U);
    msg.setDestination(2697U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.20656419348211075;
    msg.lon = 0.3753410950191415;
    msg.depth = 0.15342274191701089;
    msg.sentence.assign("CJOKJQTNEADSVVXGPMRYBDNMEEHOMOOCJSBRHJKKKNTSKIUXJCFFJMWDDDGAVICDRVVXQNTUFXWVXJQCWCGQPCSFYPANWALIGXHMFRARTNZGZGOR");
    msg.txtime = 0.4368914711772317;
    msg.modem_type.assign("XVHTKCQATMRKMSIZYJLNOAKBIZRPQJMFAOXWCBCPTDRBTEBHJXKYYBFSUN");
    msg.sys_src.assign("FIWZFFLUPVSSMAUZYYDMVXZYDYGGYRKDBJOMPKGNIHJUEKEHXKOJNUPOCQNCYJVQJMRCWITRHAOLKDJEISOCSKLZSXGQWRQUWZWRBPPBGAODVEHWIALVFBIDIAKSYMXXAJXDOWACZEXZUCAPNAJYERMUMLGBELSTTTNPNHZJBVGQSKEYQ");
    msg.seq = 13128U;
    msg.sys_dst.assign("BXKAKIIRUAOKEODSKVGAGEERRSXUPWNRCUFWCPBNSEEMPJATLQTYZZYLARLYAYVHZFWTXVZILWPQZITMLOCDMNWQDBLOPTBPPGUCNEWIHNREKCTLQXJWHPSDZHQJQTENQHTGIPVRBHHXFRFWNFNZKGNVCFCVIQPBHUAVXYYGOUYZEMNXJKUBYJXFILJUOMQJGWGSFDHFMSBSTYDBK");
    msg.flags = 7U;
    const signed char tmp_msg_0[] = {35, -89, 29, 48, -124, 30, 91, -115, 53, -97, 34, -110, -16, 11, -122, 4, 42, -46, -30, 14, -103, 52, 23, 62, 58, 68, -111, -119, -63, 122, 87, 106, -8, 46, 79, 124, 65, 69, 122, -35, -6, 33, 88, -44, -43, 122, 116, -41, -14, 112, -82, -49, 108, 63, -93, -22, -30, 44, 41, 86, -11, -88, -47, 91, 5, 46, 70, -66, 73, 124, 38, 82, -48, -125, -60, 36, 62, -107, 66, -32, -53};
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
    msg.setTimeStamp(0.08871419137542402);
    msg.setSource(62390U);
    msg.setSourceEntity(212U);
    msg.setDestination(24685U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.4563873300047411;
    msg.lon = 0.5518510304362757;
    msg.depth = 0.7030370818919003;
    msg.sentence.assign("IZJFWLYLQTJGXEZDPVVULBIAEPRHAGAMKDRHTWRTFJWENNYFUBBUSATMLOUHKSTFPQNHSYLDUDJIDCOQXNZQKDUDQOSJIULFEULSFLSMXKSMBEUGKLPWCJKOKHQPNWXEGPMNGTOCEKQECHPIXAZACCNYOACNEVZFVCXRYRVZMJII");
    msg.txtime = 0.6933873654661612;
    msg.modem_type.assign("RHVUZQIVCDEAFCZTXLLEPQYJXXCTMYRLYQZRBYNFYQCIEKODKGCQFSAZPMIBJIWRZFTWAEJVUYCGSCMFDDEOEESLUIJRDKATNMGFUFXPWBHRRNVZSYATAJHDPTOKVQUOKJZCKXOYNFNSWQCBKIZQNUYRTPHILPDLMMQGNSODYXV");
    msg.sys_src.assign("XPVYMTFPDDRAOXTMSZCONFEEIKBNXT");
    msg.seq = 57844U;
    msg.sys_dst.assign("EIDZHOMCLPNVBDJTKMFXIVNKHCLTVKUVGJUGVDNJSCBTIODWHKFDJWTNKGIFHUDKASOSQTSQPZAUXGPFYVHFTDHUAODIGRYODYRLENWWVPPYBEAXZPJSXONPOZZUELXXLURFEBBTMANGB");
    msg.flags = 207U;
    const signed char tmp_msg_0[] = {-83, 53, -88, 117, 36, 108, -45, 69, 84, -23, -51, -90, -24, 63, 10, 48, 23, -76, -88, 27, 9, -17, -38, -21, -62, -20, 64, -66, -51, -52, 70, -7, 42, -124, -70, 53, -32, 61, -43, 114, 14, 6, -118, -53, 108, -120, 97, 42, -73, -6, 31, 23, -29, -19, -44, 89, 14, 124, 20, 124, 27, 35, -122, 108, 95, 46, 112, 18, -80, 100, -23, 95, -47, 105, 28, 81, -34, -108, 60, 12, 124, 77, -123, 21, -100, 45, -93, -53, 11, -100, 81, -23, 43, -2, -113, -44, -51, 89, -8, 25, -89, -110, -18, -119, 36, -35, -53, -111, -46, -126, 19, -100, -1, 51, -89, 35, 24, -32, 76, -91, 51, 17, -50, 15, -53, -69, -59, 76, 85, -120, 64, 97, -5, 13, 11, -32, -110, -13, 121, 92, -30, 33, -39, -93, 125, 8, -36, 96, 80, -74, 11, -125, 116, 88, -100, -8, 86, -11, 39, -91, 35, -46, 99, -117, 0, 7, 0, 50, -102, 97, -98, -62, -105, 14, -54, -32, -31, 9, -46, 97, 99, -99, 100, -60, -51, -91, -113, 111, 50, -107, -75, -75, 52, 40, 29, 104, -31, 119, -125, -121, 52, 16, 56, 93, 32, 77, -21, -7, -128, -63, 42, -82, -16, 117, -5, 18, -15, -123, -32, 100, 12, -127, -3, -49, -64, -71, -97, 20, 121, 88, -25, 57};
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
    msg.setTimeStamp(0.009313628494458381);
    msg.setSource(3313U);
    msg.setSourceEntity(185U);
    msg.setDestination(46343U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8747474479882116;
    msg.lon = 0.291284158550136;
    msg.depth = 0.5557138154529797;
    msg.sentence.assign("UGPTJLVLAGJRTKWHKWSKPPOYWKYACWDOFZMFMZOBFOWJIBHQLEQAEZTMNYACZQERIHERDHXANUDQLDVEJNOAECFIZVXUKTXWICCSZGUSWRGSMQD");
    msg.txtime = 0.5830460286734012;
    msg.modem_type.assign("FLSCBNLROSNTWMESVOPAWBHJRREKDBPWTGZPZJTFFPOOQAQUTTFKIXYXJETDEUBGUOUSNAVZYLDQERRCWTLHEHIQBMYVOXSMGELFDXVZNARSSZPXWTQXIHFHIVXWRIGMNUPWCLLOVDIYUOHCSZNWFKZCLRCVGJWRPXPNLIJBYVNJJDVQYKUKCOBGAYDCKWBN");
    msg.sys_src.assign("PAYQCYVURJICVHKOISUXHTPZCDRBNMJCZRXUQIWHZQMOTKELKBVDEINADPYWNEDKYLYKAHGVUEZMZYJJBXQDSTORLTFBGPHXQLXFVEUYTNUMBSBXMAGHQXRACQVGETSPNWWDZWNMSEUGZYGWYPGTZIRNRREJFSIL");
    msg.seq = 59335U;
    msg.sys_dst.assign("KRRZLAYXPGUTCTSFAUIYRSIQWEJOFBOMTCBPANIOMFCGGAHJFUFDZRWLUCLBKRMISQYKYOWHWDPHZDJTGYYUHFIUVHLDBGWDDJDHSVJMVPOGDIEMSVVVULVLFJBEKYXCPXXWDVRLPQRWNKQMOBRZDWHJRNXXQZZZAACSGCNPPOTMFTEMKXANKCQBGNUJXQZZWESEBIJLKMCKETBLOIHRLZWUNYET");
    msg.flags = 194U;
    const signed char tmp_msg_0[] = {64, -28, -103, 113, 88, -123, -18, 17, 10, -6, 50, -105, 39, 59, -83, -39, -21, -67, 118, 56, 106, -119, -21, 74, 112, -11, -99, 116, 108, -45, -32, 20, 62, 31, 46, 56, 101, -79, -7, -109};
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
    msg.setTimeStamp(0.9767690750018017);
    msg.setSource(11263U);
    msg.setSourceEntity(123U);
    msg.setDestination(7289U);
    msg.setDestinationEntity(151U);
    msg.op = 167U;
    msg.system.assign("ZGIGMRHBEVQYMXEZNOIANILZFITLJEGUOWWYFSVXVOWCUBB");
    msg.range = 0.018555271998159095;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 0U;
    tmp_msg_0.request_id = 5393U;
    tmp_msg_0.command = 243U;
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.809629088696491;
    tmp_tmp_msg_0_0.lon = 0.5409528833781689;
    tmp_tmp_msg_0_0.z = 0.08797344622193626;
    tmp_tmp_msg_0_0.z_units = 204U;
    tmp_tmp_msg_0_0.radius = 0.8050896555589299;
    tmp_tmp_msg_0_0.duration = 22652U;
    tmp_tmp_msg_0_0.speed = 0.463614906643374;
    tmp_tmp_msg_0_0.speed_units = 142U;
    tmp_tmp_msg_0_0.custom.assign("HZPKPQLBWGEBDNZXMYDQJZOOGSCVDHHNUJIZAXZXJBQMBURISSOXCLURHGNPGKBPRQVZWODFPYPQELACLZUVDMWDDRTUKNSEIEKTIWYRBQWJVHSMGHTCEHBNDJIIABHTCQWFZICLXIUZLQFSANXYLMUNKOXRMMFWVYDFLEWCIRVOGFARJRCUGVSPLFGVFKNUVSEIYSTPLJKQTBAOQPFKAAWYYKAWAJFBM");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 49274U;
    tmp_msg_0.info.assign("VMRPABEQXSAQXGECCDLBVTUBUKWXSVBIBVVOJIMOGQDPYNVZSRFSJOXCWEGYSUZOUZTMHBNVRDTXQIZWFGPJEBINLWLQYMDVJYLKLIDKZIPUCFFNWLYJXZEPJDFGOTKWDKDTHRASAPTXUBYFEZMGQQ");
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
    msg.setTimeStamp(0.6580685405779855);
    msg.setSource(58061U);
    msg.setSourceEntity(207U);
    msg.setDestination(1479U);
    msg.setDestinationEntity(32U);
    msg.op = 205U;
    msg.system.assign("QLRYMUEBOWWLQMPDDBKDDPXMTKQHZRPPNCRYBZJIZAUFAZKRBTIOSCTZSRGYWKUANVGKZCNFLONMSJMQBLGCSJRBJPMTMESCYWQXQZGGWOEVSAJHEVRPVURFHXAIDHZFFWAITAHKFDIEWSUIBOQHIEGUIANJIHDKVIZDFUVJBCLQ");
    msg.range = 0.35227096098451294;
    IMC::DevDataBinary tmp_msg_0;
    const signed char tmp_tmp_msg_0_0[] = {117, -49, 110, -51, -60, -44, -71, -39, -102, 96, 86, -64, -67, -22, 119, 9, 90, -119, -62, -17, 3, 81, -96, -38, 56, -85, -112, 27, 109, -104, -93, -78, -79, -54, -87, 2, 58, -52, 21, 125, -32, 60, 1, 90, -37, -126, -32, -71, -26, -44, 84, 74, -81, 27, 105, 92, 13, -74, -93, -114, 107, -126, -42, -127, -101, -44, -127, 83, 17, 64, 76, -61, 6, -69, 7, -70, -16, 24, -26, -70, -76, -20, -77, 29, -15, -15, 38, 125, -43, -108, 49, -91, 56, 53, 48, -51, 35, -104, -77, -85, 40, 106, 68, 97, -2, 24, 3, 5, 105, -116, -121, -17, 84, -65, -47, 121, 86, -40, 32, 5, -1, 41, 105, 23, 88, -50, 106, 21, 70, 76, 87, 39, 33, -92, 12, 104, 86, -109, 93, -4, -53, -63, 94, 85, 119, 98, 42, 110, -110, -111, -51, 50, -39, 21, -117, -2, -111, -85, 54, -2, 32, -105, 109, 120, -18, 99, -123, -32, 8, 50};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9441941127925094);
    msg.setSource(17420U);
    msg.setSourceEntity(122U);
    msg.setDestination(12711U);
    msg.setDestinationEntity(234U);
    msg.op = 25U;
    msg.system.assign("LNJKICZUAHUXKACMPMVHAOZSPCSXEPFFPOFVQDNCQNUVVTRXYYCJPFCZIGSHOGWMPTBDGKUXBGUPCWDNANPWWVSBBCBAJRWEELRVVKT");
    msg.range = 0.17521268592719308;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("AWPIMMNCZOAHZOKPTVAUFXQNLNDSXISERWBPPDMUTCVYGORQNQPSUTZQIMEXZKATJFDLCUVYTEZGHDWYHZDSWNEHBMXSJCIGDDAXUCWJUPOASBXMVZLEGZIDJVCFABOWWLJGUZYOLCBIFRYVKGGXJMBRMNKVCGVNEKQBLMLRTOUNQJEEBHOIHN");
    tmp_msg_0.state = 6U;
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
    msg.setTimeStamp(0.03355901567514197);
    msg.setSource(29305U);
    msg.setSourceEntity(145U);
    msg.setDestination(20734U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.9877775046431739);
    msg.setSource(12413U);
    msg.setSourceEntity(60U);
    msg.setDestination(43212U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.2285825845832441);
    msg.setSource(1499U);
    msg.setSourceEntity(45U);
    msg.setDestination(57554U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.06788085103921648);
    msg.setSource(57251U);
    msg.setSourceEntity(174U);
    msg.setDestination(7466U);
    msg.setDestinationEntity(54U);
    msg.list.assign("WRMWMXKAKHYXKEOIEFAOBEXCZOIBUIUSUIPEJVQSJGAOLRKQCQOQRZLWRPHBCKMTKDTWVWWWXODQKGAMKC");

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
    msg.setTimeStamp(0.77384953070323);
    msg.setSource(57873U);
    msg.setSourceEntity(173U);
    msg.setDestination(43284U);
    msg.setDestinationEntity(57U);
    msg.list.assign("KEGGJGDIZLXQNWXPUTHMHZQYBIQUSYFTOGALTRUEQEXDHTLSVNBCAGAOOPRHBNDXAIIVYFXR");

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
    msg.setTimeStamp(0.4901347588471944);
    msg.setSource(46831U);
    msg.setSourceEntity(156U);
    msg.setDestination(38542U);
    msg.setDestinationEntity(113U);
    msg.list.assign("BIJYMRIDSUJSXBSDIWQNOVKQGIUKOLPHEMXIWEKYXGEENBZNDWGOJOVPPBESMZABPTABHYHR");

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
    msg.setTimeStamp(0.40855177619101646);
    msg.setSource(11569U);
    msg.setSourceEntity(240U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(150U);
    msg.peer.assign("TQAOQPKAMKZFZBDBBXJJEFMZVKXWWJBMAEWCNRNLSERMLKVMNHYPNYEKOUIPZEFYQUZGEOMTCVKCAGSGXRGHCNUWFMJRYHIDGEDLARPTCJXYUHTXNANOVZC");
    msg.rssi = 0.48717238919282535;
    msg.integrity = 37136U;

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
    msg.setTimeStamp(0.8765825719372223);
    msg.setSource(30453U);
    msg.setSourceEntity(224U);
    msg.setDestination(57941U);
    msg.setDestinationEntity(19U);
    msg.peer.assign("LSBJXRZQQQGQEFZJDBWURCHNKIEPRUKMADMXKLJEIOOCTXLLGAPEOGAVBLNOYCZQHIJTDMMOOFKPVQVPBHWEUSYKBGBTOAIELSUFESYEKVYYXUTTHUJOTMCVXPJGWROMQFGYVYHXCGNLUN");
    msg.rssi = 0.30410553109749183;
    msg.integrity = 54284U;

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
    msg.setTimeStamp(0.07173749425903841);
    msg.setSource(31033U);
    msg.setSourceEntity(59U);
    msg.setDestination(27795U);
    msg.setDestinationEntity(113U);
    msg.peer.assign("PCCDPCRYJZIENLQRWGDSYOXPUEWYKDOCVNINZPVFMTEJUVIDVYNPMQFEAZBREIKXRIHGNKTBIXNBFLJQEMHQDFHLNHHCXIOAKWCSBVHPTBRMTBTN");
    msg.rssi = 0.15949219083111987;
    msg.integrity = 59610U;

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
    msg.setTimeStamp(0.8244166323613495);
    msg.setSource(19239U);
    msg.setSourceEntity(211U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(206U);
    msg.req_id = 21898U;
    msg.destination.assign("ELNWKHDYOTUTLRFHRQACUNVDDXXQWUYXKSPDROURYYOVGBWLCTFTLWSNQIZOLGZNXFCCKKZMXHGVQZHTMWRKBLAQPNPGFBUMHODWHGTRNIZBPJ");
    msg.timeout = 0.11346586267936587;
    msg.range = 0.14334940460720513;
    msg.type = 7U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("WRDQVWHVUVFCGMHBYELIFPKSRKJAYFCIRVNDKSVFNVBTLIUPSEIDCNZFQBOJZQWEECBWFWCHRJQNTIYIMPLYTSPEZEULTKXNBBZRGGMPJTFMSCEQGXYABHTTAXVAEOQAMQVTKNFOKZSCUOGIGQXADMOUDOASWXEYKURUMHFINZTHJXKCLLODZRUIDLLXYMOMZTNKJSWDKNORAQWRBDVFUGYIXCCJJXQSZEHBPHLMPPAWJ");
    tmp_msg_0.op = 45U;
    tmp_msg_0.lat = 0.9221539186840219;
    tmp_msg_0.lon = 0.7380659051050672;
    tmp_msg_0.height = 0.6469560501604893;
    tmp_msg_0.x = 0.3333945174624706;
    tmp_msg_0.y = 0.16170612799402806;
    tmp_msg_0.z = 0.7932830973792557;
    tmp_msg_0.phi = 0.8206198971026818;
    tmp_msg_0.theta = 0.5288700069981428;
    tmp_msg_0.psi = 0.2898022014248991;
    tmp_msg_0.vx = 0.37188504854079396;
    tmp_msg_0.vy = 0.43505332831143295;
    tmp_msg_0.vz = 0.378762677358758;
    tmp_msg_0.p = 0.11345964932373243;
    tmp_msg_0.q = 0.6514619187309674;
    tmp_msg_0.r = 0.315940905072558;
    tmp_msg_0.svx = 0.9634139006974091;
    tmp_msg_0.svy = 0.8233089394238102;
    tmp_msg_0.svz = 0.9471159401173516;
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
    msg.setTimeStamp(0.6711217284406558);
    msg.setSource(65491U);
    msg.setSourceEntity(135U);
    msg.setDestination(37872U);
    msg.setDestinationEntity(104U);
    msg.req_id = 56691U;
    msg.destination.assign("GLPDSHIIBKSOOWPKEXPMNVAHSYTFLLVDBOECNQBOPDALLIHBSMWBWYOQCRXN");
    msg.timeout = 0.9812778673719361;
    msg.range = 0.2368096204930481;
    msg.type = 192U;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("CMWJNIBGQCDWMHQKUZOSDBXYAZCNGWSFOTCNDSTXANOUIPVCJHOWVPWKVETFPHAUBZKHZNAQTXLUMUQQJWDEIHA");
    tmp_msg_0.sensor_class.assign("ZHJLWUXKKZYHNDYOGQIWRCRFFXMCBEINOFISYGVIAKZHQTVYIGIPCIVSWLSLDMWNUWQRADDNQCXKYLOTYXZPVCQUMZBJHFBKXTLZMDOPTYOSDDBNZNXEOVZPOTECKLFRNDTBXFKETWAGALPCQNJPJAFFD");
    tmp_msg_0.lat = 0.6613381742829819;
    tmp_msg_0.lon = 0.28633841758935186;
    tmp_msg_0.alt = 0.08332231830866399;
    tmp_msg_0.heading = 0.2089417486222379;
    tmp_msg_0.data.assign("XDWQPGYNVSPAEIRUYYPKNZNZGBBWYIHKMTODEITQFJNCJXIIXGQAVONRLGIJHASEBLGTCDBYQGWEREIASFRYRRHLHDEGSJKPYKMAHWXQJJNZPMPQHBJQDWZATZUSFGLLUJDXUXRHCCXXYQALZXNUUODMCGU");
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
    msg.setTimeStamp(0.5670335479232749);
    msg.setSource(54502U);
    msg.setSourceEntity(25U);
    msg.setDestination(22180U);
    msg.setDestinationEntity(204U);
    msg.req_id = 56083U;
    msg.destination.assign("LRDBKHNLYUCOLMDJKVDSJYOJMNFOXCFILWFQQVJHDUEXTAECIAVSNVTRJEACPFHOTVPVQFDJOPGSUSXSKZHXPBWUEBSCUDCHVKHXYWJPIZGPDKRNGZOXIVKRBMDBPIOQYMITOMYBEAMEFVBYNZWYEATQULYPXBYXKYWRGOFZTSQNHMAFWNEPTUFRFNWLJWBRVJGHJCCUEHNPBIWQKIZAMGZQZETTWG");
    msg.timeout = 0.8187667582444625;
    msg.range = 0.8693540087343237;
    msg.type = 17U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.11171617880730611;
    tmp_msg_0.lon = 0.5702478605233414;
    tmp_msg_0.depth = 68U;
    tmp_msg_0.speed = 0.5572061059919559;
    tmp_msg_0.psi = 0.6207971481138821;
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
    msg.setTimeStamp(0.5231171108274884);
    msg.setSource(61381U);
    msg.setSourceEntity(161U);
    msg.setDestination(40690U);
    msg.setDestinationEntity(15U);
    msg.req_id = 61051U;
    msg.type = 235U;
    msg.status = 62U;
    msg.info.assign("JRKWFJTEVMJESMOGGTRMUBEMJRBNHQWPAXOFLGOYUOCZDCPAHUVJCEMLP");
    msg.range = 0.27000198710629697;

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
    msg.setTimeStamp(0.9213210986235886);
    msg.setSource(58161U);
    msg.setSourceEntity(168U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(16U);
    msg.req_id = 56507U;
    msg.type = 4U;
    msg.status = 127U;
    msg.info.assign("KMEELBRDFAZXEWQSJMTILSTCRKYZYJPVBWIHFTMSFYYTLTVNQURBLJEJNZRSYETACJUCGAACKDSPCVLUQBWVXZSRBPMLOZPOGRBUMHPVOTFXIZVYUENJHHOPBHADNFGLIFVEPDKXUOXIQAOCORXJYNIJTKHWOWANIAKVYUBEINCOGQPFSCXXTKMLERLSCWAKDPWXQRGIMDFZQGSZLRJZDFCVFADMXHKDWYOGGBVUNUWJHQSDNYQMUHBEZHPWM");
    msg.range = 0.8866939087431375;

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
    msg.setTimeStamp(0.7538842996519887);
    msg.setSource(25799U);
    msg.setSourceEntity(169U);
    msg.setDestination(50078U);
    msg.setDestinationEntity(226U);
    msg.req_id = 32936U;
    msg.type = 223U;
    msg.status = 71U;
    msg.info.assign("DYVDLLXXFIKXNORMRGBAQNEOFDDEGLCOPOCSVTXZFCESYIARUCFBMEV");
    msg.range = 0.4513779595416264;

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
    msg.setTimeStamp(0.7159176210509267);
    msg.setSource(25270U);
    msg.setSourceEntity(111U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(106U);
    msg.system.assign("CDYZBSZAOWOXXPDLDBFURGCLBMMNKLGIRBPIGGXLPDVHKJSCSIJXYBFTGKMHTVWZEHLRFTCNDOODSGQQIEAIKIPYBTTDFIEIQDQCVMHHUXLYUSEAQQWMTFEREAZYLWNKVJQVNUOJATZJMFMALYRRGJITQSZZKPRWBPAPNX");
    msg.op = 46U;

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
    msg.setTimeStamp(0.12206811762080116);
    msg.setSource(35969U);
    msg.setSourceEntity(81U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(215U);
    msg.system.assign("YXVCSETMYMLRCYOPCTIOKODWPDGMLRXTSUPZNENBGXVZQBORDSKKXKGZ");
    msg.op = 129U;

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
    msg.setTimeStamp(0.15422279962022556);
    msg.setSource(40809U);
    msg.setSourceEntity(236U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(92U);
    msg.system.assign("OBLYSDSJBWRPHVKNSHRRYAKXUMVOGHETFVQIGVNLWSWOINTRXJEIUH");
    msg.op = 16U;

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
    msg.setTimeStamp(0.19746215408373569);
    msg.setSource(4850U);
    msg.setSourceEntity(240U);
    msg.setDestination(13034U);
    msg.setDestinationEntity(150U);
    msg.value = 17793;

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
    msg.setTimeStamp(0.18051604030801038);
    msg.setSource(63867U);
    msg.setSourceEntity(9U);
    msg.setDestination(38679U);
    msg.setDestinationEntity(252U);
    msg.value = -28739;

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
    msg.setTimeStamp(0.8330522826398343);
    msg.setSource(478U);
    msg.setSourceEntity(97U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(195U);
    msg.value = 29988;

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
    msg.setTimeStamp(0.6561969039405183);
    msg.setSource(52607U);
    msg.setSourceEntity(172U);
    msg.setDestination(8467U);
    msg.setDestinationEntity(125U);
    msg.value = 0.6130649501396251;

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
    msg.setTimeStamp(0.6889597427205051);
    msg.setSource(37697U);
    msg.setSourceEntity(241U);
    msg.setDestination(30458U);
    msg.setDestinationEntity(58U);
    msg.value = 0.1955169229283834;

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
    msg.setTimeStamp(0.8824090393942556);
    msg.setSource(9023U);
    msg.setSourceEntity(236U);
    msg.setDestination(29506U);
    msg.setDestinationEntity(81U);
    msg.value = 0.8462875638410564;

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
    msg.setTimeStamp(0.23013084533355033);
    msg.setSource(16244U);
    msg.setSourceEntity(112U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(225U);
    msg.value = 0.1347025273937521;

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
    msg.setTimeStamp(0.8831323374165849);
    msg.setSource(7129U);
    msg.setSourceEntity(249U);
    msg.setDestination(1305U);
    msg.setDestinationEntity(167U);
    msg.value = 0.28068576407940216;

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
    msg.setTimeStamp(0.9359308769068795);
    msg.setSource(8904U);
    msg.setSourceEntity(215U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(38U);
    msg.value = 0.45535205546551805;

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
    msg.setTimeStamp(0.4059333615110461);
    msg.setSource(25355U);
    msg.setSourceEntity(228U);
    msg.setDestination(24831U);
    msg.setDestinationEntity(116U);
    msg.validity = 47053U;
    msg.type = 199U;
    msg.utc_year = 31537U;
    msg.utc_month = 95U;
    msg.utc_day = 192U;
    msg.utc_time = 0.17043343720638038;
    msg.lat = 0.14227708716697318;
    msg.lon = 0.18411396926417833;
    msg.height = 0.6840788259916986;
    msg.satellites = 162U;
    msg.cog = 0.29942882656036574;
    msg.sog = 0.03382877527748818;
    msg.hdop = 0.44715678008991666;
    msg.vdop = 0.3708529963313326;
    msg.hacc = 0.8337572846307788;
    msg.vacc = 0.7289374029374519;

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
    msg.setTimeStamp(0.481260275534224);
    msg.setSource(56156U);
    msg.setSourceEntity(117U);
    msg.setDestination(40618U);
    msg.setDestinationEntity(36U);
    msg.validity = 56287U;
    msg.type = 236U;
    msg.utc_year = 7952U;
    msg.utc_month = 127U;
    msg.utc_day = 94U;
    msg.utc_time = 0.028684465496329414;
    msg.lat = 0.7465011652332524;
    msg.lon = 0.7919249920484148;
    msg.height = 0.08333389480352438;
    msg.satellites = 131U;
    msg.cog = 0.49857930978669174;
    msg.sog = 0.7207884678585333;
    msg.hdop = 0.046920366003929126;
    msg.vdop = 0.17801697240971004;
    msg.hacc = 0.2780388926784225;
    msg.vacc = 0.04994918306598539;

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
    msg.setTimeStamp(0.40414861153029613);
    msg.setSource(65502U);
    msg.setSourceEntity(73U);
    msg.setDestination(28100U);
    msg.setDestinationEntity(24U);
    msg.validity = 19608U;
    msg.type = 120U;
    msg.utc_year = 14959U;
    msg.utc_month = 52U;
    msg.utc_day = 150U;
    msg.utc_time = 0.35529937365854114;
    msg.lat = 0.5960578617778876;
    msg.lon = 0.47500035566522625;
    msg.height = 0.13935616578390586;
    msg.satellites = 3U;
    msg.cog = 0.44544643687636876;
    msg.sog = 0.03605768834409606;
    msg.hdop = 0.3733614131706028;
    msg.vdop = 0.23629701794831193;
    msg.hacc = 0.17136608496305705;
    msg.vacc = 0.7316891432848175;

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
    msg.setTimeStamp(0.372531281185974);
    msg.setSource(39768U);
    msg.setSourceEntity(68U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(83U);
    msg.time = 0.7008714610592293;
    msg.phi = 0.6510471319635772;
    msg.theta = 0.948965734146675;
    msg.psi = 0.4228266135262142;
    msg.psi_magnetic = 0.24725344919147074;

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
    msg.setTimeStamp(0.14513995561508197);
    msg.setSource(59748U);
    msg.setSourceEntity(181U);
    msg.setDestination(56026U);
    msg.setDestinationEntity(98U);
    msg.time = 0.661834201460376;
    msg.phi = 0.6190370776022438;
    msg.theta = 0.3796003382037192;
    msg.psi = 0.9027256605080451;
    msg.psi_magnetic = 0.7325338145936652;

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
    msg.setTimeStamp(0.849491181532563);
    msg.setSource(40996U);
    msg.setSourceEntity(80U);
    msg.setDestination(35057U);
    msg.setDestinationEntity(149U);
    msg.time = 0.9308490229342402;
    msg.phi = 0.954964010028165;
    msg.theta = 0.5295404472002005;
    msg.psi = 0.20322386157644556;
    msg.psi_magnetic = 0.814045123642251;

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
    msg.setTimeStamp(0.6726372320925126);
    msg.setSource(13241U);
    msg.setSourceEntity(54U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(22U);
    msg.time = 0.5081203658319791;
    msg.x = 0.4066841891258757;
    msg.y = 0.6378212617993969;
    msg.z = 0.023206625428294103;
    msg.timestep = 0.34909041730883505;

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
    msg.setTimeStamp(0.8388206757116041);
    msg.setSource(11429U);
    msg.setSourceEntity(5U);
    msg.setDestination(17844U);
    msg.setDestinationEntity(217U);
    msg.time = 0.4137597616205596;
    msg.x = 0.9383420759010367;
    msg.y = 0.057043180982580655;
    msg.z = 0.8402228555112022;
    msg.timestep = 0.0448091004120903;

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
    msg.setTimeStamp(0.2608850473893364);
    msg.setSource(27190U);
    msg.setSourceEntity(87U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(124U);
    msg.time = 0.6115109379149335;
    msg.x = 0.7397800065675403;
    msg.y = 0.3335556545892506;
    msg.z = 0.4314036009218528;
    msg.timestep = 0.8565381453220368;

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
    msg.setTimeStamp(0.4789198718561718);
    msg.setSource(25180U);
    msg.setSourceEntity(53U);
    msg.setDestination(31264U);
    msg.setDestinationEntity(199U);
    msg.time = 0.22737751944024387;
    msg.x = 0.6801867138461242;
    msg.y = 0.46922152920251126;
    msg.z = 0.8732982506637416;

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
    msg.setTimeStamp(0.9742927418938522);
    msg.setSource(36307U);
    msg.setSourceEntity(219U);
    msg.setDestination(51371U);
    msg.setDestinationEntity(147U);
    msg.time = 0.6656783562758782;
    msg.x = 0.6667415016532819;
    msg.y = 0.4442903146872895;
    msg.z = 0.6814488928711916;

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
    msg.setTimeStamp(0.9857792412975511);
    msg.setSource(20933U);
    msg.setSourceEntity(161U);
    msg.setDestination(21705U);
    msg.setDestinationEntity(201U);
    msg.time = 0.5738040203395868;
    msg.x = 0.8945399958306011;
    msg.y = 0.3046373750687412;
    msg.z = 0.9705830976802237;

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
    msg.setTimeStamp(0.8863844205698941);
    msg.setSource(11507U);
    msg.setSourceEntity(59U);
    msg.setDestination(10784U);
    msg.setDestinationEntity(51U);
    msg.time = 0.33180531087702714;
    msg.x = 0.32256651453477736;
    msg.y = 0.25365735938103273;
    msg.z = 0.6381840401028238;

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
    msg.setTimeStamp(0.885537501544525);
    msg.setSource(8277U);
    msg.setSourceEntity(22U);
    msg.setDestination(41802U);
    msg.setDestinationEntity(38U);
    msg.time = 0.9141246424920746;
    msg.x = 0.7877806378540233;
    msg.y = 0.7125684925542233;
    msg.z = 0.7436581589225821;

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
    msg.setTimeStamp(0.5887978717934382);
    msg.setSource(36220U);
    msg.setSourceEntity(239U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(237U);
    msg.time = 0.6148566504033383;
    msg.x = 0.3887791922349898;
    msg.y = 0.8465717535877186;
    msg.z = 0.1982760606595515;

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
    msg.setTimeStamp(0.061545856071301364);
    msg.setSource(44784U);
    msg.setSourceEntity(99U);
    msg.setDestination(50029U);
    msg.setDestinationEntity(251U);
    msg.time = 0.16364887475345524;
    msg.x = 0.6440338040764471;
    msg.y = 0.8465962009388396;
    msg.z = 0.24227885154590767;

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
    msg.setTimeStamp(0.6624176240943724);
    msg.setSource(6290U);
    msg.setSourceEntity(98U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(120U);
    msg.time = 0.18242460626607082;
    msg.x = 0.6356809165422465;
    msg.y = 0.7022558082265186;
    msg.z = 0.00963099673644019;

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
    msg.setTimeStamp(0.7780173879831879);
    msg.setSource(58849U);
    msg.setSourceEntity(181U);
    msg.setDestination(2U);
    msg.setDestinationEntity(117U);
    msg.time = 0.7556702879178673;
    msg.x = 0.9380140911010202;
    msg.y = 0.5561838678593061;
    msg.z = 0.7215226511471969;

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
    msg.setTimeStamp(0.7471441570574914);
    msg.setSource(3015U);
    msg.setSourceEntity(32U);
    msg.setDestination(47583U);
    msg.setDestinationEntity(252U);
    msg.validity = 76U;
    msg.x = 0.7322388526089145;
    msg.y = 0.5974943241686548;
    msg.z = 0.32144820810568797;

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
    msg.setTimeStamp(0.8493228329406725);
    msg.setSource(59627U);
    msg.setSourceEntity(23U);
    msg.setDestination(46241U);
    msg.setDestinationEntity(178U);
    msg.validity = 190U;
    msg.x = 0.7243967254267422;
    msg.y = 0.050251968908710976;
    msg.z = 0.9192475207434383;

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
    msg.setTimeStamp(0.16442829453303764);
    msg.setSource(19518U);
    msg.setSourceEntity(111U);
    msg.setDestination(49906U);
    msg.setDestinationEntity(232U);
    msg.validity = 234U;
    msg.x = 0.31986749486743504;
    msg.y = 0.18468248622521555;
    msg.z = 0.6475972181617523;

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
    msg.setTimeStamp(0.02106191243814315);
    msg.setSource(12784U);
    msg.setSourceEntity(190U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(106U);
    msg.validity = 1U;
    msg.x = 0.47526696263844115;
    msg.y = 0.16334332994046363;
    msg.z = 0.8107687627608212;

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
    msg.setTimeStamp(0.5476361593835463);
    msg.setSource(33832U);
    msg.setSourceEntity(9U);
    msg.setDestination(9175U);
    msg.setDestinationEntity(228U);
    msg.validity = 49U;
    msg.x = 0.3830958348654385;
    msg.y = 0.4984772226672539;
    msg.z = 0.5520936257644389;

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
    msg.setTimeStamp(0.90603177388453);
    msg.setSource(40896U);
    msg.setSourceEntity(243U);
    msg.setDestination(23659U);
    msg.setDestinationEntity(139U);
    msg.validity = 62U;
    msg.x = 0.378254428835585;
    msg.y = 0.7457685321197466;
    msg.z = 0.722921618690677;

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
    msg.setTimeStamp(0.7259021942849624);
    msg.setSource(865U);
    msg.setSourceEntity(105U);
    msg.setDestination(46270U);
    msg.setDestinationEntity(179U);
    msg.time = 0.10726145577936397;
    msg.x = 0.9274623973616883;
    msg.y = 0.17976517752468824;
    msg.z = 0.29931738555504483;

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
    msg.setTimeStamp(0.10687148164578208);
    msg.setSource(47847U);
    msg.setSourceEntity(80U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(170U);
    msg.time = 0.11230013389340354;
    msg.x = 0.7683359894779148;
    msg.y = 0.6061900158371033;
    msg.z = 0.5687199771793827;

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
    msg.setTimeStamp(0.2760889908792735);
    msg.setSource(5417U);
    msg.setSourceEntity(176U);
    msg.setDestination(52293U);
    msg.setDestinationEntity(60U);
    msg.time = 0.6937824749113871;
    msg.x = 0.7643672160399264;
    msg.y = 0.41383896063366665;
    msg.z = 0.849561692857603;

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
    msg.setTimeStamp(0.3966214802569369);
    msg.setSource(35756U);
    msg.setSourceEntity(126U);
    msg.setDestination(63285U);
    msg.setDestinationEntity(183U);
    msg.validity = 14U;
    msg.value = 0.7338947927422069;

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
    msg.setTimeStamp(0.8229927372329824);
    msg.setSource(29125U);
    msg.setSourceEntity(0U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(87U);
    msg.validity = 6U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6525064141800659;
    tmp_msg_0.y = 0.8497126382903272;
    tmp_msg_0.z = 0.5410244006928121;
    tmp_msg_0.phi = 0.7426139684102809;
    tmp_msg_0.theta = 0.5415394550974619;
    tmp_msg_0.psi = 0.3354944038181886;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4097322846676438;

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
    msg.setTimeStamp(0.18080025596606153);
    msg.setSource(4919U);
    msg.setSourceEntity(11U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(208U);
    msg.validity = 169U;
    msg.value = 0.8442936511281004;

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
    msg.setTimeStamp(0.035154967066156395);
    msg.setSource(12502U);
    msg.setSourceEntity(244U);
    msg.setDestination(35377U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6623231764024847;

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
    msg.setTimeStamp(0.8696442211207547);
    msg.setSource(20836U);
    msg.setSourceEntity(50U);
    msg.setDestination(1278U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5317441821704196;

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
    msg.setTimeStamp(0.7254679718959876);
    msg.setSource(6536U);
    msg.setSourceEntity(171U);
    msg.setDestination(35483U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7678773203734239;

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
    msg.setTimeStamp(0.5995919431283964);
    msg.setSource(24480U);
    msg.setSourceEntity(216U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(64U);
    msg.value = 0.43515623989908137;

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
    msg.setTimeStamp(0.7511298906433643);
    msg.setSource(29307U);
    msg.setSourceEntity(168U);
    msg.setDestination(5233U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9070818462662789;

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
    msg.setTimeStamp(0.5559212352632408);
    msg.setSource(3415U);
    msg.setSourceEntity(50U);
    msg.setDestination(167U);
    msg.setDestinationEntity(205U);
    msg.value = 0.2437295646403096;

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
    msg.setTimeStamp(0.15057898794388191);
    msg.setSource(20871U);
    msg.setSourceEntity(57U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(40U);
    msg.value = 0.801664790580462;

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
    msg.setTimeStamp(0.7163070370813668);
    msg.setSource(37432U);
    msg.setSourceEntity(25U);
    msg.setDestination(60917U);
    msg.setDestinationEntity(36U);
    msg.value = 0.18003244300987864;

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
    msg.setTimeStamp(0.9392222916822208);
    msg.setSource(50767U);
    msg.setSourceEntity(176U);
    msg.setDestination(34879U);
    msg.setDestinationEntity(252U);
    msg.value = 0.3761548715997126;

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
    msg.setTimeStamp(0.599341270114668);
    msg.setSource(6777U);
    msg.setSourceEntity(110U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(20U);
    msg.value = 0.8853030106537402;

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
    msg.setTimeStamp(0.11977206116717687);
    msg.setSource(16723U);
    msg.setSourceEntity(30U);
    msg.setDestination(3438U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5626445247329;

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
    msg.setTimeStamp(0.80290332045671);
    msg.setSource(14334U);
    msg.setSourceEntity(103U);
    msg.setDestination(52685U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8375007773726093;

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
    msg.setTimeStamp(0.6927148046211961);
    msg.setSource(21753U);
    msg.setSourceEntity(50U);
    msg.setDestination(56789U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7101253872647836;

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
    msg.setTimeStamp(0.3824226644637082);
    msg.setSource(63098U);
    msg.setSourceEntity(113U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(62U);
    msg.value = 0.42071346113293195;

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
    msg.setTimeStamp(0.5318154393365606);
    msg.setSource(54213U);
    msg.setSourceEntity(118U);
    msg.setDestination(5078U);
    msg.setDestinationEntity(120U);
    msg.value = 0.04539700747253217;

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
    msg.setTimeStamp(0.2283857841114506);
    msg.setSource(45365U);
    msg.setSourceEntity(103U);
    msg.setDestination(10026U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9828300604586223;

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
    msg.setTimeStamp(0.512411388415461);
    msg.setSource(53028U);
    msg.setSourceEntity(26U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(217U);
    msg.value = 0.3887192494120727;

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
    msg.setTimeStamp(0.7410385627661509);
    msg.setSource(59526U);
    msg.setSourceEntity(175U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(199U);
    msg.value = 0.9239860023683719;

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
    msg.setTimeStamp(0.346949272919426);
    msg.setSource(39674U);
    msg.setSourceEntity(140U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4386548710552778;

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
    msg.setTimeStamp(0.4556712344408764);
    msg.setSource(49935U);
    msg.setSourceEntity(141U);
    msg.setDestination(21850U);
    msg.setDestinationEntity(35U);
    msg.value = 0.19579072428277244;

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
    msg.setTimeStamp(0.0017464977766801226);
    msg.setSource(5604U);
    msg.setSourceEntity(46U);
    msg.setDestination(9631U);
    msg.setDestinationEntity(206U);
    msg.value = 0.7224686707133757;

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
    msg.setTimeStamp(0.24017435452484892);
    msg.setSource(47803U);
    msg.setSourceEntity(192U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(25U);
    msg.value = 0.5588034155814574;

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
    msg.setTimeStamp(0.10531263658891477);
    msg.setSource(47797U);
    msg.setSourceEntity(251U);
    msg.setDestination(32419U);
    msg.setDestinationEntity(171U);
    msg.value = 0.6697521318572269;

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
    msg.setTimeStamp(0.8482923778206508);
    msg.setSource(11640U);
    msg.setSourceEntity(112U);
    msg.setDestination(18132U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0414138535770362;

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
    msg.setTimeStamp(0.16832605729699524);
    msg.setSource(9875U);
    msg.setSourceEntity(17U);
    msg.setDestination(725U);
    msg.setDestinationEntity(4U);
    msg.direction = 0.3605593691812121;
    msg.speed = 0.5903260141200272;
    msg.turbulence = 0.977220585962492;

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
    msg.setTimeStamp(0.14421969703076842);
    msg.setSource(32993U);
    msg.setSourceEntity(96U);
    msg.setDestination(58581U);
    msg.setDestinationEntity(81U);
    msg.direction = 0.27974000729744886;
    msg.speed = 0.38805972198888405;
    msg.turbulence = 0.6720915759215371;

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
    msg.setTimeStamp(0.9532799262110045);
    msg.setSource(1775U);
    msg.setSourceEntity(193U);
    msg.setDestination(44189U);
    msg.setDestinationEntity(61U);
    msg.direction = 0.4674933350428053;
    msg.speed = 0.01717838407245531;
    msg.turbulence = 0.5629095013333016;

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
    msg.setTimeStamp(0.8612604224386307);
    msg.setSource(26422U);
    msg.setSourceEntity(127U);
    msg.setDestination(57669U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0592897520755008;

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
    msg.setTimeStamp(0.8623738381614957);
    msg.setSource(14155U);
    msg.setSourceEntity(155U);
    msg.setDestination(51176U);
    msg.setDestinationEntity(222U);
    msg.value = 0.599453915887321;

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
    msg.setTimeStamp(0.9677088423984611);
    msg.setSource(56045U);
    msg.setSourceEntity(122U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8561317502699626;

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
    msg.setTimeStamp(0.33250316189737683);
    msg.setSource(3539U);
    msg.setSourceEntity(105U);
    msg.setDestination(32585U);
    msg.setDestinationEntity(157U);
    msg.value.assign("KCAVXSRUGSIQTHNGPXBCEPLFGBQYMHZNYZYJKPNQITKPMUCDHICASJZRJAGHDJODWQWWBYTNTDMASRULYAKSEPFETVISDXLJMCQOWFSLLQGWABGPDNIHOUOMEBMVZDFHXBRSOZQHOYKOUMHTZBGILOQKWCWKGWFVVCXBYTEMRUINQVAFKJBKXECPJVEWPRRXDFXUZFSVADIBRICGJLLUUUJYTEJIFHNQPFVZATPKNXMDLE");

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
    msg.setTimeStamp(0.36985756111705026);
    msg.setSource(49950U);
    msg.setSourceEntity(154U);
    msg.setDestination(36674U);
    msg.setDestinationEntity(51U);
    msg.value.assign("HIQIRMQHJIXTOUGFXTBSOJHWNSYBIPLHQKOGXGYLYJBVDRQLEWNJVKRIVXZNFFSCXANBSVCAIXZRLENQZHCDBRKNWJNQIZMYYDFAEDRBDXVRMUVXFTUBLFSVONEJEZGTFTAATMJWCPEEQYWTUQTVPGUKUTDKHGGEYMPPRFPSPJHAMXAWKUWJLCZECDY");

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
    msg.setTimeStamp(0.1171975056579988);
    msg.setSource(40081U);
    msg.setSourceEntity(170U);
    msg.setDestination(3355U);
    msg.setDestinationEntity(65U);
    msg.value.assign("LCRPUHLTLPWDORXCDUXEXAKIMRNGDNVBYCLQZXAHGMIUFCBRQRJNVUVWBVSWBLFYNRKQMSHEZHJTFYWSZNWOVCYAZGFMFSOENLJWBEZHCFXPORDIQOMHSPGGHIJDFLQWAAYKPSPPYKZYTTQLLOIAWAVZYITFUMQJORKCJNEVXGEAIOSTEFMCGEOMKITLTGAISKBKTMXBIDUYHKUNQH");

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
    msg.setTimeStamp(0.5632693363058199);
    msg.setSource(22575U);
    msg.setSourceEntity(68U);
    msg.setDestination(62436U);
    msg.setDestinationEntity(142U);
    const signed char tmp_msg_0[] = {-58, -61, -128, 109, 101, -126, 43, 117, -105, -6, -90, 90, -40, 34, 86, 76, -109, 3, 70, 67, -128, -125, -125, -76, 72, 80, 45, -99, 64, 28, -78, -47, 46, -68, -50, 80, 37, -69, -45, 118, 120, -70, -68, -110, -25, -78, 19, -20, 32, -21, 85, 17, -16, 106, 2, 97, 118, 96, 8, -71, 126, 97, -14, -32, 122, -29, -108, 99, -87, 37, 13, -41, 107};
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
    msg.setTimeStamp(0.40184865337196307);
    msg.setSource(60849U);
    msg.setSourceEntity(81U);
    msg.setDestination(27913U);
    msg.setDestinationEntity(35U);
    const signed char tmp_msg_0[] = {-111, 60, -111, 105, 21, 84, 99, -51, 24, 96, -40, 126, -1, 60, 30, -82, -88, -108, -53, 6, -103, -124, -96, -32, 102, 46, -57};
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
    msg.setTimeStamp(0.2960618885180324);
    msg.setSource(19487U);
    msg.setSourceEntity(110U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(146U);
    const signed char tmp_msg_0[] = {84, 123, -12, -29, 21, 10, 65, 119, 13, -87, -84, -122, 35, -4, -95, -100, 83, 43, -28, -84, 42, -37, 85, -98, 51, 94, 77, 7, -96, -112, 32, 71, 38, -81, -10, -1, -116, 17, 52, -82, 46, 98, 61, -41, -30, 68, 117, 37, -64, -80, 84, 125, 5, -27, 102, 84, 35, -76, 12, -87, -47, 39, 81, 125, 16, 59, -59, 52, 21, 93, 43, -94, -75, 123, -78, -50, -26, 24, 6, 98, -69, 24, 122, -28, 81, -84, 28, -49, 112, 28, -72, 87, -94, 33, -51, -103, -115, 61, -12, -3, -102, -79, 65, -83, 78, -47, 71, 35, -14, -108, -123, 74, 3, -116, -4, -39, 83, -99, 59, 117, 50, 55, 96, -29, -115, 14, -48, -60, 124, -21, 29, 90, -15, -53, -111, -122, 10, -68, 35, -100, 96, -99, -101, 28, -49, -106, -62, -104, 71, -49, 21, -36, 124, -46, 95, -70, 32, 114, 117, 103};
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
    msg.setTimeStamp(0.2371665672278498);
    msg.setSource(35468U);
    msg.setSourceEntity(254U);
    msg.setDestination(61213U);
    msg.setDestinationEntity(168U);
    msg.value = 0.09275842322477479;

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
    msg.setTimeStamp(0.8619492212226838);
    msg.setSource(65440U);
    msg.setSourceEntity(206U);
    msg.setDestination(4094U);
    msg.setDestinationEntity(119U);
    msg.value = 0.20093710423216404;

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
    msg.setTimeStamp(0.9934287390084054);
    msg.setSource(55609U);
    msg.setSourceEntity(235U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(5U);
    msg.value = 0.4647876921511722;

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
    msg.setTimeStamp(0.08380320371136951);
    msg.setSource(36329U);
    msg.setSourceEntity(252U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(59U);
    msg.type = 123U;
    msg.frequency = 1265605864U;
    msg.min_range = 12625U;
    msg.max_range = 32723U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.2398627711293907;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3462689573187414;
    tmp_msg_0.beam_height = 0.5481999436687232;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {12, 3, 20, 46, 76, -73, -22, 66, -95, -50, 66, -113, -90, 29, 53, -9, -127, 69, -106, -8, -122, -69, 38, -34, -81, 95, 93, 18, -79, 14, 56, 76, 60, -62, -90, 63, 60, -74, 106, 15, -100, -28, -35, -27, 27, 118, 123, -21, 109, 8, 111, 66, -46, -32, 29, 25, 109, -35, 76, 42, -19, 58, 2, 52, -65, -14, 59, 86, 121, 102, -52, 19, -50, 0, 117, -59, 52, 82, -57, -77, 112, 59, -49, -59, 89, 32, -23, 113, 54, 30, -71, -10, 56, 71, -58, 17, 81, -23, 15, 124, -33, 76, 70, -120, -83, -79, -59, 78, 5, -99, 25, 4, -27, -35, 101, -9, -27, -45};
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
    msg.setTimeStamp(0.7275987533214612);
    msg.setSource(57578U);
    msg.setSourceEntity(158U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(43U);
    msg.type = 219U;
    msg.frequency = 3069934689U;
    msg.min_range = 15542U;
    msg.max_range = 33978U;
    msg.bits_per_point = 41U;
    msg.scale_factor = 0.6444819634876382;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9720361765254553;
    tmp_msg_0.beam_height = 0.3542797320815142;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-58, 59, -78, 79, 81, -41, 7, -68, 114, -46, 105, -52, 63, -2, 93, 58, -39, 42, -123, -73, -80, 112, -114, 19, -26, -65, 46, -110, 105, -70, -48, -8, -38, -25, 93, -64, -128, 25, 4, -125, 119, -44, 91, 96, 68, 114, 20, 35, 104, 106, 103, -95, -45, -45, 64, -11, 97, -72, 38, 75, 91, -68, 63, -7, -66, -67, -42, 41, -114, -113, -121, 102, -8, 19, -2, 79, 17, -91, -43, 30, -94, 66, 88, 69, 4, 43, -100, -83, -6, 31, 109, 73, -48, -62, 74, -84, 30, 7, 41, 7, 116, -81, -119, -2, -76, -5, 87, -93, -118, 103, 111, -37, -32, -91, 10, -85, -38, -48, 71, -99, -81, 117, 40, -98, 99, -20, -125, -29, -54, 54, 77, 40, 56, -33, -104, -59, 22, 19, 62, -44, -2, -45, -17, -82, -127, -36, -70, -95, -98, -20, 84, -89, -52, -6, 9, -118, 3, 74, 122, 64, 32, -27, 78, -10, 86, -58, 124};
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
    msg.setTimeStamp(0.8733178050379783);
    msg.setSource(46886U);
    msg.setSourceEntity(150U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(137U);
    msg.type = 118U;
    msg.frequency = 1751825888U;
    msg.min_range = 2035U;
    msg.max_range = 50838U;
    msg.bits_per_point = 129U;
    msg.scale_factor = 0.7412227207610141;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7128329707908188;
    tmp_msg_0.beam_height = 0.595552513428037;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-63, -108, 22, 102, 16, 58, -126, -116, -23, -31, -31, 77, -60, 17, 105, 2, 11, -90, -112, 96, -116, 3, 22, -105, 51, -98, 37, -102, -69, 79, 70, -13, -110, 76, -50, -43, -80, -76, 102, 101, -72, -57, 78, 29, 37, 16, -5, 81, -45, -64, 78, 84, -68, -64, 90, -128, 34, -15, 104, 119, -64, -15, 5, -15, -99, -81, 5, 74, -98, 83, -101, -96, 16, -12, 116, -10, -93, -66, 41, -76, 29, 123, 39, 99, -9, -27, 13, 68, -83, -55, 122, 29, -3, -1, 104, 0, 63, 116, -57, -95, -16, 58, -72, -36, 58, -102, 62, -97, 31, -77, 41, -29, -116, 52, 50, -5, -118, -57, -111, -61, -125, 41, -110, -78, -128, 36, 63, 108, -28, -123, -30, -24, -66, -98, 42, -27, -79, -102, 40, -114, 34, -2, 17, -80, 90, 0, 99, 38, -21, -102, -96, 51, 57, -28, 76, 23, -38, 42, -90, -72, 109, -10, -77, 52, 120, -94, -22, -18, -83, 40, -73, -12, 102, 107, -110, 93, 8, 82, 67, -6, 123, -33, 10, 23, 103, -71};
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
    msg.setTimeStamp(0.6326128077980091);
    msg.setSource(38434U);
    msg.setSourceEntity(60U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.6802499841911581);
    msg.setSource(20767U);
    msg.setSourceEntity(155U);
    msg.setDestination(48070U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.5207002802175678);
    msg.setSource(2652U);
    msg.setSourceEntity(100U);
    msg.setDestination(42127U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.4217235931098876);
    msg.setSource(11423U);
    msg.setSourceEntity(225U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(230U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.18315320153892267);
    msg.setSource(50265U);
    msg.setSourceEntity(84U);
    msg.setDestination(62172U);
    msg.setDestinationEntity(84U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.6841902495187865);
    msg.setSource(47402U);
    msg.setSourceEntity(207U);
    msg.setDestination(43008U);
    msg.setDestinationEntity(10U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.2688891313250753);
    msg.setSource(52490U);
    msg.setSourceEntity(159U);
    msg.setDestination(26111U);
    msg.setDestinationEntity(8U);
    msg.value = 0.76996740233561;
    msg.confidence = 0.22725455298124086;
    msg.opmodes.assign("ARNDKAUDGGZCQCDMFLNQOYKXJXFYVEGJWVULORTIUQZUBNCOCTTBMYBSWZWNPCJBSKUESQJDPWHFQRLNWATWFNCKEANLSIQIXFOZEVLNICZDXHRZHAI");

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
    msg.setTimeStamp(0.903293479810233);
    msg.setSource(31087U);
    msg.setSourceEntity(13U);
    msg.setDestination(12549U);
    msg.setDestinationEntity(222U);
    msg.value = 0.3572999005555061;
    msg.confidence = 0.3861663696271874;
    msg.opmodes.assign("UCQCTJEVBNWOPEXABKZRMDHOSZAODCWFNAJHSZQCOJCZFWYEGYBEIFLDUIUFSTSYWGBKPYTRJNTRLPOWVTSRPCLUPXMKBHFGATGICXBSBFXOIHNJOQMJWKAHPGXLTCNEDINIDLDBLRSUMCMPRWNDVVRYJH");

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
    msg.setTimeStamp(0.04801901578408019);
    msg.setSource(30795U);
    msg.setSourceEntity(58U);
    msg.setDestination(20468U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9862237521100238;
    msg.confidence = 0.4508714823753909;
    msg.opmodes.assign("BYVBJADWPREY");

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
    msg.setTimeStamp(0.2373862961353559);
    msg.setSource(58986U);
    msg.setSourceEntity(138U);
    msg.setDestination(54220U);
    msg.setDestinationEntity(162U);
    msg.itow = 2905917768U;
    msg.lat = 0.0865068702612305;
    msg.lon = 0.7102384519992847;
    msg.height_ell = 0.13633209373519461;
    msg.height_sea = 0.767550238358474;
    msg.hacc = 0.7359984855179337;
    msg.vacc = 0.8510132245820607;
    msg.vel_n = 0.8547706139445477;
    msg.vel_e = 0.6350714077571895;
    msg.vel_d = 0.6372532657224336;
    msg.speed = 0.28934046272105907;
    msg.gspeed = 0.7227561730120335;
    msg.heading = 0.793002977402304;
    msg.sacc = 0.8305343526825071;
    msg.cacc = 0.11228863165593495;

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
    msg.setTimeStamp(0.2664094659133067);
    msg.setSource(26140U);
    msg.setSourceEntity(130U);
    msg.setDestination(44191U);
    msg.setDestinationEntity(58U);
    msg.itow = 3897229334U;
    msg.lat = 0.777052469764906;
    msg.lon = 0.004938130011181263;
    msg.height_ell = 0.4384355465847808;
    msg.height_sea = 0.4232291849722615;
    msg.hacc = 0.7455607152904994;
    msg.vacc = 0.09634530964899424;
    msg.vel_n = 0.32130798417700335;
    msg.vel_e = 0.9007436772072551;
    msg.vel_d = 0.924416507732536;
    msg.speed = 0.11621328405245879;
    msg.gspeed = 0.27145913226625906;
    msg.heading = 0.27360293604915875;
    msg.sacc = 0.4770454916902934;
    msg.cacc = 0.3008024570993122;

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
    msg.setTimeStamp(0.554343991245189);
    msg.setSource(4433U);
    msg.setSourceEntity(240U);
    msg.setDestination(44675U);
    msg.setDestinationEntity(131U);
    msg.itow = 3942286416U;
    msg.lat = 0.21190471168505365;
    msg.lon = 0.04874857497939289;
    msg.height_ell = 0.50824357920111;
    msg.height_sea = 0.3254137002118024;
    msg.hacc = 0.09812284846049013;
    msg.vacc = 0.3661814729237928;
    msg.vel_n = 0.0939186510309824;
    msg.vel_e = 0.42498555268327975;
    msg.vel_d = 0.3346314410185761;
    msg.speed = 0.34440311837583526;
    msg.gspeed = 0.5934175951383267;
    msg.heading = 0.973848667368213;
    msg.sacc = 0.9895983533672442;
    msg.cacc = 0.4588071496083054;

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
    msg.setTimeStamp(0.131239446498713);
    msg.setSource(52701U);
    msg.setSourceEntity(7U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(33U);
    msg.id = 142U;
    msg.value = 0.6999641117982414;

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
    msg.setTimeStamp(0.9144010194259116);
    msg.setSource(17843U);
    msg.setSourceEntity(161U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(10U);
    msg.id = 93U;
    msg.value = 0.023480550942301837;

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
    msg.setTimeStamp(0.3226155247949105);
    msg.setSource(25307U);
    msg.setSourceEntity(36U);
    msg.setDestination(63712U);
    msg.setDestinationEntity(143U);
    msg.id = 194U;
    msg.value = 0.7221548363816165;

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
    msg.setTimeStamp(0.3314699131489536);
    msg.setSource(57768U);
    msg.setSourceEntity(129U);
    msg.setDestination(4424U);
    msg.setDestinationEntity(115U);
    msg.x = 0.834665017357647;
    msg.y = 0.04080815835143736;
    msg.z = 0.04997054480290397;
    msg.phi = 0.69663758737495;
    msg.theta = 0.3814818025015737;
    msg.psi = 0.44582828031938104;

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
    msg.setTimeStamp(0.4917176704972791);
    msg.setSource(13505U);
    msg.setSourceEntity(184U);
    msg.setDestination(53867U);
    msg.setDestinationEntity(233U);
    msg.x = 0.433313886956588;
    msg.y = 0.33236628621166575;
    msg.z = 0.4272747036758089;
    msg.phi = 0.2116380914338486;
    msg.theta = 0.6793960681560686;
    msg.psi = 0.5236320466539756;

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
    msg.setTimeStamp(0.9202820346721818);
    msg.setSource(47143U);
    msg.setSourceEntity(84U);
    msg.setDestination(2407U);
    msg.setDestinationEntity(60U);
    msg.x = 0.42989618340096514;
    msg.y = 0.10421710242204663;
    msg.z = 0.010236211509014659;
    msg.phi = 0.5326905962575617;
    msg.theta = 0.6182233303088412;
    msg.psi = 0.31528548093895725;

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
    msg.setTimeStamp(0.30516168247643993);
    msg.setSource(3863U);
    msg.setSourceEntity(253U);
    msg.setDestination(43841U);
    msg.setDestinationEntity(212U);
    msg.beam_width = 0.2344503412422776;
    msg.beam_height = 0.3192792249058821;

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
    msg.setTimeStamp(0.5756822583508318);
    msg.setSource(6023U);
    msg.setSourceEntity(200U);
    msg.setDestination(28687U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.7058547068137532;
    msg.beam_height = 0.21187250861169438;

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
    msg.setTimeStamp(0.19229685603363356);
    msg.setSource(9312U);
    msg.setSourceEntity(61U);
    msg.setDestination(12831U);
    msg.setDestinationEntity(4U);
    msg.beam_width = 0.1307409173753865;
    msg.beam_height = 0.32169953619174274;

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
    msg.setTimeStamp(0.9124732801236968);
    msg.setSource(6342U);
    msg.setSourceEntity(243U);
    msg.setDestination(62154U);
    msg.setDestinationEntity(58U);
    msg.sane = 176U;

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
    msg.setTimeStamp(0.0722723879411945);
    msg.setSource(37305U);
    msg.setSourceEntity(241U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(195U);
    msg.sane = 233U;

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
    msg.setTimeStamp(0.495335883052778);
    msg.setSource(26287U);
    msg.setSourceEntity(131U);
    msg.setDestination(32702U);
    msg.setDestinationEntity(87U);
    msg.sane = 14U;

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
    msg.setTimeStamp(0.03004549689078473);
    msg.setSource(7592U);
    msg.setSourceEntity(188U);
    msg.setDestination(23530U);
    msg.setDestinationEntity(254U);
    msg.value = 0.43835943630770813;

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
    msg.setTimeStamp(0.3504226981953571);
    msg.setSource(51946U);
    msg.setSourceEntity(254U);
    msg.setDestination(30395U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7556757855590867;

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
    msg.setTimeStamp(0.7240450891465005);
    msg.setSource(37336U);
    msg.setSourceEntity(60U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(70U);
    msg.value = 0.27100147117839213;

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
    msg.setTimeStamp(0.7958577296201573);
    msg.setSource(20443U);
    msg.setSourceEntity(89U);
    msg.setDestination(40263U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5164120192113923;

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
    msg.setTimeStamp(0.34164194742674336);
    msg.setSource(13994U);
    msg.setSourceEntity(5U);
    msg.setDestination(58805U);
    msg.setDestinationEntity(221U);
    msg.value = 0.59189872500497;

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
    msg.setTimeStamp(0.0604582319555933);
    msg.setSource(64125U);
    msg.setSourceEntity(249U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(132U);
    msg.value = 0.9672745330942439;

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
    msg.setTimeStamp(0.01604010041672055);
    msg.setSource(30644U);
    msg.setSourceEntity(178U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(15U);
    msg.value = 0.059572331922702615;

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
    msg.setTimeStamp(0.8734928440336689);
    msg.setSource(65324U);
    msg.setSourceEntity(31U);
    msg.setDestination(1396U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6097710654777162;

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
    msg.setTimeStamp(0.7213091661480296);
    msg.setSource(21919U);
    msg.setSourceEntity(61U);
    msg.setDestination(55065U);
    msg.setDestinationEntity(233U);
    msg.value = 0.7058755037411346;

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
    msg.setTimeStamp(0.24002743877694088);
    msg.setSource(36943U);
    msg.setSourceEntity(185U);
    msg.setDestination(47883U);
    msg.setDestinationEntity(50U);
    msg.value = 0.34775195249766644;

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
    msg.setTimeStamp(0.3092786340335909);
    msg.setSource(34874U);
    msg.setSourceEntity(5U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(238U);
    msg.value = 0.43348355968465735;

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
    msg.setTimeStamp(0.3102375188960961);
    msg.setSource(45513U);
    msg.setSourceEntity(40U);
    msg.setDestination(22269U);
    msg.setDestinationEntity(71U);
    msg.value = 0.426139111885519;

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
    msg.setTimeStamp(0.31624987690873274);
    msg.setSource(43644U);
    msg.setSourceEntity(95U);
    msg.setDestination(7736U);
    msg.setDestinationEntity(139U);
    msg.value = 0.44385674795546504;

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
    msg.setTimeStamp(0.05215780199878439);
    msg.setSource(60587U);
    msg.setSourceEntity(210U);
    msg.setDestination(5960U);
    msg.setDestinationEntity(215U);
    msg.value = 0.4187295212609259;

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
    msg.setTimeStamp(0.9234287595635581);
    msg.setSource(6322U);
    msg.setSourceEntity(96U);
    msg.setDestination(36156U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8897628863195709;

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
    msg.setTimeStamp(0.017286065817629592);
    msg.setSource(60742U);
    msg.setSourceEntity(179U);
    msg.setDestination(53891U);
    msg.setDestinationEntity(108U);
    msg.value = 0.03378252206367671;

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
    msg.setTimeStamp(0.5539715566479263);
    msg.setSource(43131U);
    msg.setSourceEntity(15U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(110U);
    msg.value = 0.06535982849974087;

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
    msg.setTimeStamp(0.7735823708556617);
    msg.setSource(17223U);
    msg.setSourceEntity(144U);
    msg.setDestination(61305U);
    msg.setDestinationEntity(81U);
    msg.value = 0.3674398049162383;

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
    msg.setTimeStamp(0.9793682496787041);
    msg.setSource(11218U);
    msg.setSourceEntity(225U);
    msg.setDestination(19966U);
    msg.setDestinationEntity(19U);
    msg.value = 0.13380959493164624;

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
    msg.setTimeStamp(0.4079585865832619);
    msg.setSource(39796U);
    msg.setSourceEntity(33U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(234U);
    msg.value = 0.46765292005233505;

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
    msg.setTimeStamp(0.26105481168040223);
    msg.setSource(45198U);
    msg.setSourceEntity(244U);
    msg.setDestination(61375U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8912827805399487;

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
    msg.setTimeStamp(0.8631489091153064);
    msg.setSource(43192U);
    msg.setSourceEntity(205U);
    msg.setDestination(27057U);
    msg.setDestinationEntity(55U);
    msg.value = 0.15283944564133434;

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
    msg.setTimeStamp(0.6871886222487301);
    msg.setSource(45882U);
    msg.setSourceEntity(3U);
    msg.setDestination(24567U);
    msg.setDestinationEntity(51U);
    msg.value = 0.883101590715787;

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
    msg.setTimeStamp(0.6017783889693068);
    msg.setSource(54222U);
    msg.setSourceEntity(190U);
    msg.setDestination(42125U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4086965974018908;

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
    msg.setTimeStamp(0.22842414741966688);
    msg.setSource(4217U);
    msg.setSourceEntity(145U);
    msg.setDestination(39757U);
    msg.setDestinationEntity(172U);
    msg.validity = 12197U;
    msg.type = 251U;
    msg.tow = 2381790570U;
    msg.base_lat = 0.2437248495692358;
    msg.base_lon = 0.13466500872402043;
    msg.base_height = 0.8973019866330095;
    msg.n = 0.2810734014292877;
    msg.e = 0.0787547464829137;
    msg.d = 0.5395217529878225;
    msg.v_n = 0.5781079074866528;
    msg.v_e = 0.29914006687301076;
    msg.v_d = 0.8946733033081895;
    msg.satellites = 233U;
    msg.iar_hyp = 18802U;
    msg.iar_ratio = 0.6287827760754412;

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
    msg.setTimeStamp(0.7403688546687814);
    msg.setSource(12398U);
    msg.setSourceEntity(31U);
    msg.setDestination(39679U);
    msg.setDestinationEntity(80U);
    msg.validity = 47430U;
    msg.type = 225U;
    msg.tow = 3042480877U;
    msg.base_lat = 0.44287458797872614;
    msg.base_lon = 0.06641861093703827;
    msg.base_height = 0.7966729575198223;
    msg.n = 0.3589987441459115;
    msg.e = 0.14644998332506187;
    msg.d = 0.6970381893246139;
    msg.v_n = 0.8226831603138256;
    msg.v_e = 0.9505918511777235;
    msg.v_d = 0.2550212358765084;
    msg.satellites = 118U;
    msg.iar_hyp = 52721U;
    msg.iar_ratio = 0.10889024165231065;

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
    msg.setTimeStamp(0.15966220176833135);
    msg.setSource(30427U);
    msg.setSourceEntity(74U);
    msg.setDestination(38202U);
    msg.setDestinationEntity(25U);
    msg.validity = 46646U;
    msg.type = 48U;
    msg.tow = 3533410281U;
    msg.base_lat = 0.4740746815436785;
    msg.base_lon = 0.3803796508702322;
    msg.base_height = 0.37105709085263794;
    msg.n = 0.3574076895561148;
    msg.e = 0.023016930734715113;
    msg.d = 0.2562654970879715;
    msg.v_n = 0.4215665404629727;
    msg.v_e = 0.6968957646309717;
    msg.v_d = 0.3509680183317928;
    msg.satellites = 223U;
    msg.iar_hyp = 34059U;
    msg.iar_ratio = 0.042333990171686486;

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
    msg.setTimeStamp(0.6404114217473885);
    msg.setSource(31895U);
    msg.setSourceEntity(71U);
    msg.setDestination(9182U);
    msg.setDestinationEntity(229U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.024962462423066878;
    tmp_msg_0.lon = 0.5435280061636113;
    tmp_msg_0.height = 0.06783831995792933;
    tmp_msg_0.x = 0.26314857026234595;
    tmp_msg_0.y = 0.5367572928438967;
    tmp_msg_0.z = 0.08553198210622481;
    tmp_msg_0.phi = 0.9431935825865905;
    tmp_msg_0.theta = 0.5747519714388225;
    tmp_msg_0.psi = 0.038504999880293544;
    tmp_msg_0.u = 0.1627354964846076;
    tmp_msg_0.v = 0.3314143172273418;
    tmp_msg_0.w = 0.7337297389583723;
    tmp_msg_0.vx = 0.46382109128021065;
    tmp_msg_0.vy = 0.7724412671109745;
    tmp_msg_0.vz = 0.5243602264573534;
    tmp_msg_0.p = 0.9201260002480806;
    tmp_msg_0.q = 0.01572935532225317;
    tmp_msg_0.r = 0.9688603219701574;
    tmp_msg_0.depth = 0.4813999279998178;
    tmp_msg_0.alt = 0.18713757214718252;
    msg.state.set(tmp_msg_0);
    msg.type = 175U;

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
    msg.setTimeStamp(0.6599340087269191);
    msg.setSource(62706U);
    msg.setSourceEntity(233U);
    msg.setDestination(19206U);
    msg.setDestinationEntity(205U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3992230203892939;
    tmp_msg_0.lon = 0.10637034132621093;
    tmp_msg_0.height = 0.32721819765036564;
    tmp_msg_0.x = 0.8532126237540072;
    tmp_msg_0.y = 0.31958945966496466;
    tmp_msg_0.z = 0.601077607339379;
    tmp_msg_0.phi = 0.8527765452722362;
    tmp_msg_0.theta = 0.18127545761878405;
    tmp_msg_0.psi = 0.7029752861546147;
    tmp_msg_0.u = 0.017642336942165326;
    tmp_msg_0.v = 0.35442291261834746;
    tmp_msg_0.w = 0.7251650218542555;
    tmp_msg_0.vx = 0.9070723763140606;
    tmp_msg_0.vy = 0.9627094200568052;
    tmp_msg_0.vz = 0.7981677939870027;
    tmp_msg_0.p = 0.12273290741658582;
    tmp_msg_0.q = 0.37792952549027303;
    tmp_msg_0.r = 0.0061123748612563755;
    tmp_msg_0.depth = 0.7712337242979509;
    tmp_msg_0.alt = 0.16385137602961786;
    msg.state.set(tmp_msg_0);
    msg.type = 220U;

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
    msg.setTimeStamp(0.11687980818248567);
    msg.setSource(53615U);
    msg.setSourceEntity(218U);
    msg.setDestination(60556U);
    msg.setDestinationEntity(98U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9982166277572962;
    tmp_msg_0.lon = 0.7203616089583851;
    tmp_msg_0.height = 0.9119126542819771;
    tmp_msg_0.x = 0.25315568091812823;
    tmp_msg_0.y = 0.09137945992616014;
    tmp_msg_0.z = 0.9793448952206895;
    tmp_msg_0.phi = 0.9726154735237063;
    tmp_msg_0.theta = 0.323678837541047;
    tmp_msg_0.psi = 0.32948594189805736;
    tmp_msg_0.u = 0.8042979746851078;
    tmp_msg_0.v = 0.5151514027483205;
    tmp_msg_0.w = 0.37498178949279526;
    tmp_msg_0.vx = 0.5590395309557599;
    tmp_msg_0.vy = 0.6171276351984679;
    tmp_msg_0.vz = 0.5825814992325311;
    tmp_msg_0.p = 0.21079905126715326;
    tmp_msg_0.q = 0.6674083637447407;
    tmp_msg_0.r = 0.8918721139271569;
    tmp_msg_0.depth = 0.16606301582631344;
    tmp_msg_0.alt = 0.209275807890013;
    msg.state.set(tmp_msg_0);
    msg.type = 149U;

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
    msg.setTimeStamp(0.3814858981372128);
    msg.setSource(30947U);
    msg.setSourceEntity(215U);
    msg.setDestination(50306U);
    msg.setDestinationEntity(89U);
    msg.value = 0.6532567280695843;

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
    msg.setTimeStamp(0.6568129322518802);
    msg.setSource(54006U);
    msg.setSourceEntity(24U);
    msg.setDestination(50156U);
    msg.setDestinationEntity(7U);
    msg.value = 0.9017880230809934;

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
    msg.setTimeStamp(0.7059059375091158);
    msg.setSource(33660U);
    msg.setSourceEntity(95U);
    msg.setDestination(2756U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9611100277808862;

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
    msg.setTimeStamp(0.0590494161533367);
    msg.setSource(52639U);
    msg.setSourceEntity(111U);
    msg.setDestination(34729U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5476453626216802;

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
    msg.setTimeStamp(0.6934984259942645);
    msg.setSource(48033U);
    msg.setSourceEntity(192U);
    msg.setDestination(34987U);
    msg.setDestinationEntity(149U);
    msg.value = 0.3193798493933745;

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
    msg.setTimeStamp(0.7390409454333352);
    msg.setSource(49877U);
    msg.setSourceEntity(151U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(189U);
    msg.value = 0.2731437319165968;

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
    msg.setTimeStamp(0.5734596163475785);
    msg.setSource(64790U);
    msg.setSourceEntity(222U);
    msg.setDestination(50913U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8696550733970813;

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
    msg.setTimeStamp(0.46477658868131155);
    msg.setSource(64099U);
    msg.setSourceEntity(115U);
    msg.setDestination(46127U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7315827054510594;

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
    msg.setTimeStamp(0.23877430170349934);
    msg.setSource(45499U);
    msg.setSourceEntity(148U);
    msg.setDestination(49360U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6621876886128851;

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
    msg.setTimeStamp(0.1318659832457335);
    msg.setSource(23091U);
    msg.setSourceEntity(104U);
    msg.setDestination(24689U);
    msg.setDestinationEntity(160U);
    msg.value = 0.19506696881763508;

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
    msg.setTimeStamp(0.6252389560026183);
    msg.setSource(42972U);
    msg.setSourceEntity(89U);
    msg.setDestination(9736U);
    msg.setDestinationEntity(25U);
    msg.value = 0.2913475850430912;

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
    msg.setTimeStamp(0.4104367466020773);
    msg.setSource(28556U);
    msg.setSourceEntity(134U);
    msg.setDestination(59336U);
    msg.setDestinationEntity(130U);
    msg.value = 0.052436225259940517;

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
    msg.setTimeStamp(0.8715079862141711);
    msg.setSource(37866U);
    msg.setSourceEntity(0U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(218U);
    msg.value = 0.6640085255847027;

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
    msg.setTimeStamp(0.49216830678339907);
    msg.setSource(17233U);
    msg.setSourceEntity(34U);
    msg.setDestination(8144U);
    msg.setDestinationEntity(0U);
    msg.value = 0.4806861535906075;

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
    msg.setTimeStamp(0.8125017479494441);
    msg.setSource(28703U);
    msg.setSourceEntity(65U);
    msg.setDestination(26768U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9061443989379092;

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
    msg.setTimeStamp(0.9307895497723511);
    msg.setSource(17220U);
    msg.setSourceEntity(179U);
    msg.setDestination(48340U);
    msg.setDestinationEntity(40U);
    msg.id = 252U;
    msg.zoom = 119U;
    msg.action = 245U;

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
    msg.setTimeStamp(0.9334374921407654);
    msg.setSource(59076U);
    msg.setSourceEntity(52U);
    msg.setDestination(52827U);
    msg.setDestinationEntity(253U);
    msg.id = 115U;
    msg.zoom = 186U;
    msg.action = 156U;

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
    msg.setTimeStamp(0.4751227892565144);
    msg.setSource(4009U);
    msg.setSourceEntity(251U);
    msg.setDestination(56299U);
    msg.setDestinationEntity(165U);
    msg.id = 130U;
    msg.zoom = 116U;
    msg.action = 181U;

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
    msg.setTimeStamp(0.8732877646434406);
    msg.setSource(9286U);
    msg.setSourceEntity(44U);
    msg.setDestination(42516U);
    msg.setDestinationEntity(99U);
    msg.id = 240U;
    msg.value = 0.15502103251044208;

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
    msg.setTimeStamp(0.7884121636700904);
    msg.setSource(28377U);
    msg.setSourceEntity(146U);
    msg.setDestination(61395U);
    msg.setDestinationEntity(151U);
    msg.id = 236U;
    msg.value = 0.9757301126417817;

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
    msg.setTimeStamp(0.4721726892097291);
    msg.setSource(45964U);
    msg.setSourceEntity(57U);
    msg.setDestination(172U);
    msg.setDestinationEntity(165U);
    msg.id = 35U;
    msg.value = 0.9321457780786023;

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
    msg.setTimeStamp(0.23847499036179975);
    msg.setSource(59719U);
    msg.setSourceEntity(50U);
    msg.setDestination(50200U);
    msg.setDestinationEntity(254U);
    msg.id = 50U;
    msg.value = 0.5052097169416311;

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
    msg.setTimeStamp(0.11973192917180842);
    msg.setSource(31913U);
    msg.setSourceEntity(135U);
    msg.setDestination(33467U);
    msg.setDestinationEntity(120U);
    msg.id = 164U;
    msg.value = 0.5430890230267219;

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
    msg.setTimeStamp(0.4088791695624149);
    msg.setSource(18814U);
    msg.setSourceEntity(87U);
    msg.setDestination(41859U);
    msg.setDestinationEntity(20U);
    msg.id = 37U;
    msg.value = 0.8542149118322714;

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
    msg.setTimeStamp(0.5273938743249185);
    msg.setSource(47850U);
    msg.setSourceEntity(223U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(40U);
    msg.id = 36U;
    msg.angle = 0.819311063002496;

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
    msg.setTimeStamp(0.2779512771502157);
    msg.setSource(4282U);
    msg.setSourceEntity(10U);
    msg.setDestination(13945U);
    msg.setDestinationEntity(217U);
    msg.id = 125U;
    msg.angle = 0.3247519577111768;

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
    msg.setTimeStamp(0.14569174452513145);
    msg.setSource(36212U);
    msg.setSourceEntity(118U);
    msg.setDestination(46019U);
    msg.setDestinationEntity(222U);
    msg.id = 42U;
    msg.angle = 0.2883325553408467;

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
    msg.setTimeStamp(0.7686065806365845);
    msg.setSource(60241U);
    msg.setSourceEntity(87U);
    msg.setDestination(30773U);
    msg.setDestinationEntity(203U);
    msg.op = 139U;
    msg.actions.assign("PGXBHODGBMCFLLUVIFYTDQAXWVALAVTBGBCEEHOYGYJYFGYTNRUFWWPMJSQXEMPXGBRIZZHRUDJOUPPFDESMODOQPZIBZKLSCCQXDIHIZTDIVCZSYPNCWJTLOVDIAFXQIETVSVJDTROJEZNXTMDESRAQWKOMGAKFWWASTFTNZXJMMQGHURMKKYQBPWBUYRWUKCCNZYK");

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
    msg.setTimeStamp(0.14933530067717715);
    msg.setSource(55664U);
    msg.setSourceEntity(100U);
    msg.setDestination(1622U);
    msg.setDestinationEntity(103U);
    msg.op = 197U;
    msg.actions.assign("SAJWCRVWMMUIDYAXTNNZODNBDYQCBUEGHLKFWKGXUAFNJQFVIKNJHECLOUVDWKGWYFGPRZKYJOFHTQNAALGDKMVVJEZBAVTDNHKMSWISTPL");

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
    msg.setTimeStamp(0.23771371484818693);
    msg.setSource(52542U);
    msg.setSourceEntity(141U);
    msg.setDestination(7771U);
    msg.setDestinationEntity(83U);
    msg.op = 90U;
    msg.actions.assign("FZPLQWUYKJLVHLMROZTOPGGUWUCOSZCKTRAVILAPDEYYSRROMIQUXUBXSKHIMRWEIYMBHOESLDPNNABAPTJDDNYNEUAIAMVWQYYJPHUTTZZHCRUSSFQUIWCFAKOCHEABRMJELVWCHTXETKRGNNMJPPYBGDIBPCWUCXONVJZK");

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
    msg.setTimeStamp(0.44978366936349357);
    msg.setSource(49624U);
    msg.setSourceEntity(174U);
    msg.setDestination(239U);
    msg.setDestinationEntity(225U);
    msg.actions.assign("SHBXOAWJGTUGSTWQRTTKNHWBLYNPFNHQBQDRZYYQDUGNTIEECXGZKLMWVXEUYPLJLLCOGYDIVWIGIXQVQBNIAFWOEDYHVIMFTTVPOOAJBXKLBHCCCIWXISXJCWEXZJKPTQRKZSYOPPMQPEYGFUMQAJDJARIZJOTZLSMBEDLEU");

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
    msg.setTimeStamp(0.45904939847961945);
    msg.setSource(12056U);
    msg.setSourceEntity(254U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(232U);
    msg.actions.assign("UKUGLGRYIQFXRBVRADGGRLVTWKI");

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
    msg.setTimeStamp(0.3181437420518297);
    msg.setSource(41019U);
    msg.setSourceEntity(5U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("NBAASNLWEMJFMYBFCQUYSRWJKNFEQUOMVMOHJPCWNBVFYKALHMREKHPT");

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
    msg.setTimeStamp(0.7859555509395824);
    msg.setSource(57834U);
    msg.setSourceEntity(223U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(221U);
    msg.button = 48U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.26277059970367367);
    msg.setSource(49439U);
    msg.setSourceEntity(76U);
    msg.setDestination(61649U);
    msg.setDestinationEntity(59U);
    msg.button = 35U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.025383118977217678);
    msg.setSource(25961U);
    msg.setSourceEntity(173U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(155U);
    msg.button = 111U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.21411360659587553);
    msg.setSource(51131U);
    msg.setSourceEntity(36U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(207U);
    msg.op = 184U;
    msg.text.assign("AZSCOFLXDSZJHKLLECPMEINYYSGWNWPARZGXMP");

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
    msg.setTimeStamp(0.27875275002315125);
    msg.setSource(25933U);
    msg.setSourceEntity(220U);
    msg.setDestination(17638U);
    msg.setDestinationEntity(71U);
    msg.op = 84U;
    msg.text.assign("MVBSNSHAVEHERLMKWOVCUWZCCFGXDLLJA");

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
    msg.setTimeStamp(0.3293709052471291);
    msg.setSource(61271U);
    msg.setSourceEntity(4U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(254U);
    msg.op = 197U;
    msg.text.assign("LTAGJTVMDMRHLSHPIJCLATQQBCTYKIYXMIRQFZONYHWBQXZRIJAVLYEGLQCPZWQCRJZHOGQCYGEDYUWORBIEBS");

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
    msg.setTimeStamp(0.9012127738928564);
    msg.setSource(17533U);
    msg.setSourceEntity(50U);
    msg.setDestination(29439U);
    msg.setDestinationEntity(243U);
    msg.op = 251U;
    msg.time_remain = 0.7450638662549891;
    msg.sched_time = 0.7203802394098042;

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
    msg.setTimeStamp(0.3092828313283452);
    msg.setSource(17981U);
    msg.setSourceEntity(170U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(149U);
    msg.op = 205U;
    msg.time_remain = 0.0901791058515965;
    msg.sched_time = 0.07377144141927261;

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
    msg.setTimeStamp(0.5377748975264176);
    msg.setSource(30620U);
    msg.setSourceEntity(178U);
    msg.setDestination(10619U);
    msg.setDestinationEntity(157U);
    msg.op = 113U;
    msg.time_remain = 0.5842091987055771;
    msg.sched_time = 0.6165744784509835;

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
    msg.setTimeStamp(0.5124311269342596);
    msg.setSource(52385U);
    msg.setSourceEntity(129U);
    msg.setDestination(3412U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ECHSBHHNWWVWAYUEVGDIOQLHNRSXILYWGBMMSZPXDTVNVIILSKOJZDQDXMBFVFOPXVUMTUJDCWCAIOKNTIAAJGBTTXCLXIWRESHOBSFAQZTYJETOBNVJGGZPOXZDUYCZUDKWPARCKKUHGEQJRRHNEYPQZQBMPGBLYKFDBNQALSKFCPQMSZGVRJPPEFGMNONTAMYUCKVQ");
    msg.op = 17U;
    msg.sched_time = 0.6582738243261574;

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
    msg.setTimeStamp(0.2015093673151943);
    msg.setSource(49295U);
    msg.setSourceEntity(44U);
    msg.setDestination(58345U);
    msg.setDestinationEntity(164U);
    msg.name.assign("GPATZFQFEQHXXYFMDOMRZXVHHXEPJWSLKBAYTNMIXAEZFHSYYSGLJSKDCVVEMLQMODWFTNHSKPLMQWUHERUEMDPICITRJGBNIFCNGWTBJIFHOLAXYMBYMKWCTN");
    msg.op = 205U;
    msg.sched_time = 0.2639393898339487;

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
    msg.setTimeStamp(0.8935985218717012);
    msg.setSource(47038U);
    msg.setSourceEntity(144U);
    msg.setDestination(51586U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ZZTGVJDNSGLM");
    msg.op = 68U;
    msg.sched_time = 0.612908553507542;

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
    msg.setTimeStamp(0.580332588657603);
    msg.setSource(39880U);
    msg.setSourceEntity(73U);
    msg.setDestination(35800U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.3295875458525215);
    msg.setSource(11229U);
    msg.setSourceEntity(30U);
    msg.setDestination(46561U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.2312628787101476);
    msg.setSource(27043U);
    msg.setSourceEntity(221U);
    msg.setDestination(22241U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.16570527070015972);
    msg.setSource(9988U);
    msg.setSourceEntity(191U);
    msg.setDestination(35524U);
    msg.setDestinationEntity(136U);
    msg.name.assign("NRWVMOKELVEEIGTINYUMWYPDWLHZCPMKFMBVXIYBN");
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
    msg.setTimeStamp(0.7871499007024185);
    msg.setSource(45930U);
    msg.setSourceEntity(183U);
    msg.setDestination(29644U);
    msg.setDestinationEntity(126U);
    msg.name.assign("PSXDJJNTENBTKNMPTICPAGCDSQYBVCEVWDRYEIJUIMVSSDKJZZGVAOOAMETAZQCVKANHUWYBCHYKUDVFXGHWODQOMZBEUMLUQNOIWMDFPO");
    msg.state = 216U;

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
    msg.setTimeStamp(0.27851237963953546);
    msg.setSource(50845U);
    msg.setSourceEntity(96U);
    msg.setDestination(42940U);
    msg.setDestinationEntity(10U);
    msg.name.assign("BGWSJPONAQBBLVUNTCIWJSEMZHDJAQFXKLXRHINNOOQOSGMSSI");
    msg.state = 204U;

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
    msg.setTimeStamp(0.5383318082731964);
    msg.setSource(3459U);
    msg.setSourceEntity(174U);
    msg.setDestination(43362U);
    msg.setDestinationEntity(212U);
    msg.name.assign("JFVMJBDYPKUWUHCRBEMGGVAQIGOMPTSUSHCLFTCYEHQQARWNODDSPDVKWHMZROMAKYJCPPVURVZAXRYSUXUFGNQEXFJTZYAVOOUVJJNQFPFZNOFCCMNPGLOEYQTBDCEQASHQDYVAGKKLNDXORIVTMLXRWFVSRUXQGBILGXMLBTQTYOBFIXJTDNPJKILZIBBYILJEDKKEHSYTIZBXLCMOGWWWE");
    msg.value = 14U;

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
    msg.setTimeStamp(0.025053249422457124);
    msg.setSource(51034U);
    msg.setSourceEntity(155U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(160U);
    msg.name.assign("ECOUVXAVVNWCNHPWGFHRKUJAWVXMMQDCXXZJVTVKVWGKKLIOPOMPTLIUPAQBMKUEKGSFAPSZEEGASXVSUFQTMYLXHAYOABSEUHGOCOFKJEMZWVIQPBMBTFBDADFBXTRZSHNEWMLROKBZNDNYYHRLUUQYCAZRIRWZJDQWXNBNGILDNSJYIOLIEXLHM");
    msg.value = 213U;

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
    msg.setTimeStamp(0.41969062061987883);
    msg.setSource(21719U);
    msg.setSourceEntity(249U);
    msg.setDestination(44013U);
    msg.setDestinationEntity(80U);
    msg.name.assign("CTFZMTQIUUEAKEVIHDIPJWMRJPNOTAEJVNZCQCSRPGXZUOJVLLDBMOYURAANQTINWGLLEZVI");
    msg.value = 142U;

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
    msg.setTimeStamp(0.7365795555828368);
    msg.setSource(31438U);
    msg.setSourceEntity(19U);
    msg.setDestination(9004U);
    msg.setDestinationEntity(103U);
    msg.name.assign("WRZQVODQPLBKRDHOJPGROVUJZTQEFTVXSEPZXQONBMRNXJLWPBTZMYCCYFUUNLMFKNFAVBLMJYBTQVJMMGWHIWZIOQLEQWDXUSJHDHZSQBYHSCUIFPKBWKCVFRAUTKFEIQRAQAFOCHDLFYNVPUZTSGAGRUXEJRKOGISENDOYPCNUHWPIZLKVIBOWDTADLXOSGXKJYYYCZTHNSGWXAVSLEMB");

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
    msg.setTimeStamp(0.11393427270709633);
    msg.setSource(13722U);
    msg.setSourceEntity(36U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(3U);
    msg.name.assign("KRHZBPWUWYMXLPDRXQORIYDUQHQMJSHYHMZYBJNVPKFVWTZGJNDNGNITXRAQFPVPDVLHWPXOIBEEZEQMBFDCNFARURYWAZCFAQRDAKGVJUYOUHAGRJBSVI");

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
    msg.setTimeStamp(0.7606294514957722);
    msg.setSource(16346U);
    msg.setSourceEntity(185U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(68U);
    msg.name.assign("XOSIEWWOXOSIIXNDDLAPQAQFMKCQMRTCZBQSVDFXWEOTYSKLNNCKCTWYQRYK");

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
    msg.setTimeStamp(0.5756520941825646);
    msg.setSource(12138U);
    msg.setSourceEntity(130U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BATUPSJJWRQXFNIUEUXWRJXAXAMAMQKZODJDQUTQKCCWPANCWLKNAYXGZTWE");
    msg.value = 120U;

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
    msg.setTimeStamp(0.33536468155737675);
    msg.setSource(63922U);
    msg.setSourceEntity(97U);
    msg.setDestination(62822U);
    msg.setDestinationEntity(190U);
    msg.name.assign("JXOUILSOQNGTYANPDBHWBHQFZIOXCVTGTFRLWSTCJFQARFWKEJEYMQADYOOWZDETHABTCAIEJKWNLQZJZJXAERXDQUSRCMFTUUFTUPYXBCCYOHKGENLYGLIHZMLVCAFAKVNHFQUDSPMTMLLGEPPXOVIVXGVRDISCYQKNNHXFMWPVBRYYPEOIS");
    msg.value = 242U;

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
    msg.setTimeStamp(0.2689520113036855);
    msg.setSource(52108U);
    msg.setSourceEntity(93U);
    msg.setDestination(39656U);
    msg.setDestinationEntity(34U);
    msg.name.assign("TUEYYFKUXJAVPXODYWMJVGQQLTUPIRFYFKZFQLGSWZACBENZQEOARSHUZMETHSEHCCXNVKCDTONXLBFHGDRWNZUCNCBLQIZSAVOKDQHJSBKEILPUUNUNBDPBAXACDYRBSPWOMDMKBEMDMHGXXSVYJEKCFBOKHRIGIVJEWFHAEXMFWIMNLIRUTCOZPGOJZPQDSHLQIWWAVRZWGPLXLHOYSA");
    msg.value = 191U;

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
    msg.setTimeStamp(0.06929860364600327);
    msg.setSource(41326U);
    msg.setSourceEntity(53U);
    msg.setDestination(28535U);
    msg.setDestinationEntity(56U);
    msg.id = 241U;
    msg.period = 3027190359U;
    msg.duty_cycle = 905551142U;

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
    msg.setTimeStamp(0.6492648692867142);
    msg.setSource(23912U);
    msg.setSourceEntity(228U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(198U);
    msg.id = 55U;
    msg.period = 2090721889U;
    msg.duty_cycle = 1590743533U;

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
    msg.setTimeStamp(0.013104968649252702);
    msg.setSource(62720U);
    msg.setSourceEntity(167U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(191U);
    msg.id = 14U;
    msg.period = 505755945U;
    msg.duty_cycle = 3963783018U;

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
    msg.setTimeStamp(0.9189217020641789);
    msg.setSource(46553U);
    msg.setSourceEntity(99U);
    msg.setDestination(17270U);
    msg.setDestinationEntity(35U);
    msg.id = 96U;
    msg.period = 2064790381U;
    msg.duty_cycle = 3445591864U;

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
    msg.setTimeStamp(0.957390429421574);
    msg.setSource(1657U);
    msg.setSourceEntity(236U);
    msg.setDestination(18434U);
    msg.setDestinationEntity(94U);
    msg.id = 78U;
    msg.period = 295300473U;
    msg.duty_cycle = 1454166824U;

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
    msg.setTimeStamp(0.029575592684650598);
    msg.setSource(55376U);
    msg.setSourceEntity(69U);
    msg.setDestination(11501U);
    msg.setDestinationEntity(241U);
    msg.id = 210U;
    msg.period = 2005476497U;
    msg.duty_cycle = 2888615627U;

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
    msg.setTimeStamp(0.06892619330179983);
    msg.setSource(4446U);
    msg.setSourceEntity(18U);
    msg.setDestination(48471U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.37358993518691175;
    msg.lon = 0.073918741417075;
    msg.height = 0.16941562090402817;
    msg.x = 0.025696394869021866;
    msg.y = 0.2334693021328862;
    msg.z = 0.5118746882230445;
    msg.phi = 0.8276075630542559;
    msg.theta = 0.06387963330312252;
    msg.psi = 0.5428342965450246;
    msg.u = 0.581580727722539;
    msg.v = 0.8373368977117283;
    msg.w = 0.7193604245949293;
    msg.vx = 0.6373164310017378;
    msg.vy = 0.0784586774396776;
    msg.vz = 0.5289295518723031;
    msg.p = 0.8990743472291459;
    msg.q = 0.04507073235473924;
    msg.r = 0.7236765482126345;
    msg.depth = 0.6618572143920405;
    msg.alt = 0.18950239380460177;

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
    msg.setTimeStamp(0.7703293575968048);
    msg.setSource(3962U);
    msg.setSourceEntity(96U);
    msg.setDestination(59636U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.08551508086320536;
    msg.lon = 0.6569457804268776;
    msg.height = 0.6946552611880675;
    msg.x = 0.32479162379704773;
    msg.y = 0.46490966941326395;
    msg.z = 0.34583379444831686;
    msg.phi = 0.38772678238026015;
    msg.theta = 0.7868666618852895;
    msg.psi = 0.7889744270386179;
    msg.u = 0.8047385148449933;
    msg.v = 0.5178954402957258;
    msg.w = 0.26266180228192004;
    msg.vx = 0.160392180243067;
    msg.vy = 0.9250239364232096;
    msg.vz = 0.6125643317660624;
    msg.p = 0.08327258594697506;
    msg.q = 0.41775928976146626;
    msg.r = 0.09997884387307132;
    msg.depth = 0.9349176483147263;
    msg.alt = 0.18814036118401667;

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
    msg.setTimeStamp(0.022303258337512788);
    msg.setSource(58559U);
    msg.setSourceEntity(131U);
    msg.setDestination(15460U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.9208023672539795;
    msg.lon = 0.12292747959532802;
    msg.height = 0.49832655975849205;
    msg.x = 0.13559020530666;
    msg.y = 0.08515112447227391;
    msg.z = 0.5445373531943212;
    msg.phi = 0.28441743970635147;
    msg.theta = 0.14541536822452472;
    msg.psi = 0.4487946572627547;
    msg.u = 0.9879799641650229;
    msg.v = 0.22464506935521678;
    msg.w = 0.6815150549441603;
    msg.vx = 0.2807846081705305;
    msg.vy = 0.5638511882311101;
    msg.vz = 0.04535285227592012;
    msg.p = 0.8879630220053768;
    msg.q = 0.10888284175616691;
    msg.r = 0.10552153888836291;
    msg.depth = 0.33727557257687646;
    msg.alt = 0.4238932284892858;

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
    msg.setTimeStamp(0.6706448112410008);
    msg.setSource(30381U);
    msg.setSourceEntity(198U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(123U);
    msg.x = 0.789782192689977;
    msg.y = 0.4399895276516941;
    msg.z = 0.9479217518805033;

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
    msg.setTimeStamp(0.8108980740996024);
    msg.setSource(18218U);
    msg.setSourceEntity(125U);
    msg.setDestination(2916U);
    msg.setDestinationEntity(203U);
    msg.x = 0.4433426578434879;
    msg.y = 0.6066137630901867;
    msg.z = 0.5388549669740286;

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
    msg.setTimeStamp(0.08864764278010984);
    msg.setSource(33819U);
    msg.setSourceEntity(43U);
    msg.setDestination(26428U);
    msg.setDestinationEntity(4U);
    msg.x = 0.4819053970901168;
    msg.y = 0.8193548116270716;
    msg.z = 0.04169225689916645;

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
    msg.setTimeStamp(0.5230741765907109);
    msg.setSource(30871U);
    msg.setSourceEntity(202U);
    msg.setDestination(53318U);
    msg.setDestinationEntity(117U);
    msg.value = 0.565835410387263;

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
    msg.setTimeStamp(0.34817129875361597);
    msg.setSource(58666U);
    msg.setSourceEntity(228U);
    msg.setDestination(35769U);
    msg.setDestinationEntity(158U);
    msg.value = 0.07439179499882753;

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
    msg.setTimeStamp(0.4324924691347216);
    msg.setSource(10589U);
    msg.setSourceEntity(158U);
    msg.setDestination(4767U);
    msg.setDestinationEntity(251U);
    msg.value = 0.4124677804911886;

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
    msg.setTimeStamp(0.42690170728949994);
    msg.setSource(58580U);
    msg.setSourceEntity(212U);
    msg.setDestination(741U);
    msg.setDestinationEntity(97U);
    msg.value = 0.26690241369615253;

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
    msg.setTimeStamp(0.7421625753338614);
    msg.setSource(29793U);
    msg.setSourceEntity(99U);
    msg.setDestination(14520U);
    msg.setDestinationEntity(77U);
    msg.value = 0.06374555973214013;

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
    msg.setTimeStamp(0.20710632306212184);
    msg.setSource(30708U);
    msg.setSourceEntity(111U);
    msg.setDestination(33566U);
    msg.setDestinationEntity(140U);
    msg.value = 0.44377912555998966;

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
    msg.setTimeStamp(0.7276913856539898);
    msg.setSource(21038U);
    msg.setSourceEntity(219U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(241U);
    msg.x = 0.3779185524876647;
    msg.y = 0.35337244652045774;
    msg.z = 0.7768203544215777;
    msg.phi = 0.5641013623894736;
    msg.theta = 0.9829869827931018;
    msg.psi = 0.44167656914793785;
    msg.p = 0.023683554366272896;
    msg.q = 0.275624720209506;
    msg.r = 0.5070801662823041;
    msg.u = 0.7884851171199785;
    msg.v = 0.363860770662777;
    msg.w = 0.352805886339587;
    msg.bias_psi = 0.5305231477970254;
    msg.bias_r = 0.13623688036960002;

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
    msg.setTimeStamp(0.5146944520107866);
    msg.setSource(17450U);
    msg.setSourceEntity(120U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(59U);
    msg.x = 0.23482807531620986;
    msg.y = 0.5754136385554415;
    msg.z = 0.637824125190458;
    msg.phi = 0.5318732546870062;
    msg.theta = 0.15140187280038442;
    msg.psi = 0.1705962262302687;
    msg.p = 0.04139774158985132;
    msg.q = 0.2613648449262249;
    msg.r = 0.7470582484174455;
    msg.u = 0.5024897463730783;
    msg.v = 0.49504225495365395;
    msg.w = 0.7382212476472148;
    msg.bias_psi = 0.03434067570453703;
    msg.bias_r = 0.9404325762182106;

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
    msg.setTimeStamp(0.3912493856840922);
    msg.setSource(56678U);
    msg.setSourceEntity(90U);
    msg.setDestination(18142U);
    msg.setDestinationEntity(182U);
    msg.x = 0.7569530542320063;
    msg.y = 0.9366478247985826;
    msg.z = 0.759820170872476;
    msg.phi = 0.5870471202905326;
    msg.theta = 0.738049398228201;
    msg.psi = 0.7694522935061142;
    msg.p = 0.789002401527544;
    msg.q = 0.6809501292388128;
    msg.r = 0.49882366449257454;
    msg.u = 0.39038200252281186;
    msg.v = 0.5092184609185767;
    msg.w = 0.21507604338897235;
    msg.bias_psi = 0.7025832724807911;
    msg.bias_r = 0.8709797772185628;

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
    msg.setTimeStamp(0.7872520252952859);
    msg.setSource(56731U);
    msg.setSourceEntity(173U);
    msg.setDestination(34756U);
    msg.setDestinationEntity(225U);
    msg.bias_psi = 0.20760752794665616;
    msg.bias_r = 0.06503867908765315;
    msg.cog = 0.5414690161268507;
    msg.cyaw = 0.1192313948625372;
    msg.lbl_rej_level = 0.4679910440606565;
    msg.gps_rej_level = 0.242633206281476;
    msg.custom_x = 0.7151656039655948;
    msg.custom_y = 0.9284936908046894;
    msg.custom_z = 0.7883148258613579;

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
    msg.setTimeStamp(0.8054182702350493);
    msg.setSource(2431U);
    msg.setSourceEntity(76U);
    msg.setDestination(30877U);
    msg.setDestinationEntity(174U);
    msg.bias_psi = 0.5651437397038384;
    msg.bias_r = 0.4516475380442494;
    msg.cog = 0.237810330572084;
    msg.cyaw = 0.7445046775939518;
    msg.lbl_rej_level = 0.35128528981091434;
    msg.gps_rej_level = 0.5836814397952385;
    msg.custom_x = 0.29010863717996205;
    msg.custom_y = 0.07828509069629963;
    msg.custom_z = 0.14037710784972324;

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
    msg.setTimeStamp(0.44486392769731553);
    msg.setSource(48688U);
    msg.setSourceEntity(59U);
    msg.setDestination(56462U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.657533206223976;
    msg.bias_r = 0.22805831909945462;
    msg.cog = 0.9744543596317414;
    msg.cyaw = 0.3386796888268159;
    msg.lbl_rej_level = 0.948372286981009;
    msg.gps_rej_level = 0.04957277350571987;
    msg.custom_x = 0.5319849007861919;
    msg.custom_y = 0.32411590831177983;
    msg.custom_z = 0.9444243048482727;

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
    msg.setTimeStamp(0.7674973328957162);
    msg.setSource(10578U);
    msg.setSourceEntity(188U);
    msg.setDestination(19130U);
    msg.setDestinationEntity(228U);
    msg.utc_time = 0.038305171904080226;
    msg.reason = 19U;

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
    msg.setTimeStamp(0.8817719449934612);
    msg.setSource(36051U);
    msg.setSourceEntity(13U);
    msg.setDestination(20693U);
    msg.setDestinationEntity(211U);
    msg.utc_time = 0.49081367927038444;
    msg.reason = 117U;

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
    msg.setTimeStamp(0.33366894486977716);
    msg.setSource(24514U);
    msg.setSourceEntity(229U);
    msg.setDestination(37526U);
    msg.setDestinationEntity(90U);
    msg.utc_time = 0.9236540855718243;
    msg.reason = 225U;

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
    msg.setTimeStamp(0.6936619363742585);
    msg.setSource(14785U);
    msg.setSourceEntity(119U);
    msg.setDestination(65282U);
    msg.setDestinationEntity(131U);
    msg.id = 103U;
    msg.range = 0.8258597573910631;
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
    msg.setTimeStamp(0.07679613003715813);
    msg.setSource(54815U);
    msg.setSourceEntity(22U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(139U);
    msg.id = 214U;
    msg.range = 0.3390129869525267;
    msg.acceptance = 21U;

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
    msg.setTimeStamp(0.8518149925957252);
    msg.setSource(20793U);
    msg.setSourceEntity(36U);
    msg.setDestination(9897U);
    msg.setDestinationEntity(75U);
    msg.id = 142U;
    msg.range = 0.38974520262745327;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.18796098373805015);
    msg.setSource(1619U);
    msg.setSourceEntity(204U);
    msg.setDestination(56228U);
    msg.setDestinationEntity(145U);
    msg.type = 133U;
    msg.reason = 194U;
    msg.value = 0.8917205795118822;
    msg.timestep = 0.03850750488735222;

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
    msg.setTimeStamp(0.7876072175838815);
    msg.setSource(47148U);
    msg.setSourceEntity(70U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(2U);
    msg.type = 0U;
    msg.reason = 180U;
    msg.value = 0.6275037533015713;
    msg.timestep = 0.6721959299752518;

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
    msg.setTimeStamp(0.7488422582759788);
    msg.setSource(10398U);
    msg.setSourceEntity(118U);
    msg.setDestination(5990U);
    msg.setDestinationEntity(11U);
    msg.type = 220U;
    msg.reason = 165U;
    msg.value = 0.44231468535098617;
    msg.timestep = 0.42559216842379044;

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
    msg.setTimeStamp(0.1343303394870764);
    msg.setSource(41701U);
    msg.setSourceEntity(254U);
    msg.setDestination(28758U);
    msg.setDestinationEntity(139U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VYMKJJWIJLKVRUHJIWKHDWLELNIABEMVSU");
    tmp_msg_0.lat = 0.9625909877475074;
    tmp_msg_0.lon = 0.23769382193663424;
    tmp_msg_0.depth = 0.1879749200477634;
    tmp_msg_0.query_channel = 44U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 30U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3522082397095577;
    msg.y = 0.3616788536672728;
    msg.var_x = 0.5817856224886481;
    msg.var_y = 0.1623802420252799;
    msg.distance = 0.3398464424542509;

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
    msg.setTimeStamp(0.18165007318548132);
    msg.setSource(362U);
    msg.setSourceEntity(249U);
    msg.setDestination(64163U);
    msg.setDestinationEntity(155U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YETONOLYRGQAT");
    tmp_msg_0.lat = 0.20613428220916907;
    tmp_msg_0.lon = 0.5434448324246562;
    tmp_msg_0.depth = 0.9907387722518011;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 93U;
    tmp_msg_0.transponder_delay = 229U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5742198474677431;
    msg.y = 0.17009563880898027;
    msg.var_x = 0.367483382170416;
    msg.var_y = 0.2233797490456595;
    msg.distance = 0.914163385366805;

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
    msg.setTimeStamp(0.26202943818748536);
    msg.setSource(26747U);
    msg.setSourceEntity(104U);
    msg.setDestination(35526U);
    msg.setDestinationEntity(130U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KMDZGLSLPYCZEURTFGKJVBBGLACCPWVQWFAFJGUITSUVNOAHPFTJPMQJRJFUMBOVLUHNENMESGNCNQPABBMFLSFMDRWMXZHMZOCUYZABAHDSOYNLRTUOJHSWQZBYIIXEGLSJHLLVHDNZQRVCYAAADFGPPXKXRTRDKCQPAETOILIWBZQCSERHHKIGUTEODYWXODGTHXWBSDYPBICY");
    tmp_msg_0.lat = 0.7829716456017645;
    tmp_msg_0.lon = 0.4380248806602799;
    tmp_msg_0.depth = 0.9955671320836873;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 72U;
    tmp_msg_0.transponder_delay = 89U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6897280219619507;
    msg.y = 0.7266240273695619;
    msg.var_x = 0.47912450584947897;
    msg.var_y = 0.40601952581028944;
    msg.distance = 0.7431316256311865;

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
    msg.setTimeStamp(0.8679833395102855);
    msg.setSource(55199U);
    msg.setSourceEntity(215U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(152U);
    msg.state = 54U;

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
    msg.setTimeStamp(0.16748850144019256);
    msg.setSource(24933U);
    msg.setSourceEntity(69U);
    msg.setDestination(65485U);
    msg.setDestinationEntity(49U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.333859246580145);
    msg.setSource(15166U);
    msg.setSourceEntity(67U);
    msg.setDestination(7168U);
    msg.setDestinationEntity(189U);
    msg.state = 191U;

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
    msg.setTimeStamp(0.48243536168979184);
    msg.setSource(44485U);
    msg.setSourceEntity(79U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(41U);
    msg.x = 0.78660013997886;
    msg.y = 0.14920017973037714;
    msg.z = 0.8667347368874293;

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
    msg.setTimeStamp(0.7560257631962524);
    msg.setSource(43573U);
    msg.setSourceEntity(110U);
    msg.setDestination(4735U);
    msg.setDestinationEntity(94U);
    msg.x = 0.16190875046419384;
    msg.y = 0.5724863770785739;
    msg.z = 0.6250151619232196;

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
    msg.setTimeStamp(0.29081956857829183);
    msg.setSource(65454U);
    msg.setSourceEntity(77U);
    msg.setDestination(64009U);
    msg.setDestinationEntity(188U);
    msg.x = 0.891697280503738;
    msg.y = 0.5584818189611496;
    msg.z = 0.6828974502085299;

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
    msg.setTimeStamp(0.9793178394877716);
    msg.setSource(64973U);
    msg.setSourceEntity(87U);
    msg.setDestination(39137U);
    msg.setDestinationEntity(196U);
    msg.va = 0.3717329328293586;
    msg.aoa = 0.03447107760597257;
    msg.ssa = 0.15533468558433838;

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
    msg.setTimeStamp(0.7058928078738947);
    msg.setSource(42807U);
    msg.setSourceEntity(80U);
    msg.setDestination(58657U);
    msg.setDestinationEntity(162U);
    msg.va = 0.21464906770138292;
    msg.aoa = 0.7457976545366656;
    msg.ssa = 0.1850654552574652;

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
    msg.setTimeStamp(0.1302091462824314);
    msg.setSource(40707U);
    msg.setSourceEntity(169U);
    msg.setDestination(26853U);
    msg.setDestinationEntity(180U);
    msg.va = 0.7461666003505217;
    msg.aoa = 0.0936912239189186;
    msg.ssa = 0.43972136321826827;

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
    msg.setTimeStamp(0.23929548817114976);
    msg.setSource(21807U);
    msg.setSourceEntity(165U);
    msg.setDestination(4703U);
    msg.setDestinationEntity(37U);
    msg.value = 0.36505884444654335;

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
    msg.setTimeStamp(0.6935938399456658);
    msg.setSource(44069U);
    msg.setSourceEntity(62U);
    msg.setDestination(18826U);
    msg.setDestinationEntity(150U);
    msg.value = 0.27543801355334196;

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
    msg.setTimeStamp(0.2826643095588094);
    msg.setSource(27698U);
    msg.setSourceEntity(120U);
    msg.setDestination(26047U);
    msg.setDestinationEntity(218U);
    msg.value = 0.7567369897760601;

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
    msg.setTimeStamp(0.43608250013658667);
    msg.setSource(34382U);
    msg.setSourceEntity(104U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(115U);
    msg.value = 0.051338518858677906;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.2554757010164158);
    msg.setSource(17462U);
    msg.setSourceEntity(185U);
    msg.setDestination(34604U);
    msg.setDestinationEntity(120U);
    msg.value = 0.031214368313617014;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.011157174714679474);
    msg.setSource(13346U);
    msg.setSourceEntity(233U);
    msg.setDestination(9508U);
    msg.setDestinationEntity(47U);
    msg.value = 0.9976558860120287;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.5288703397498968);
    msg.setSource(28534U);
    msg.setSourceEntity(160U);
    msg.setDestination(46695U);
    msg.setDestinationEntity(222U);
    msg.value = 0.23832279903913123;
    msg.speed_units = 147U;

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
    msg.setTimeStamp(0.994835738232404);
    msg.setSource(4748U);
    msg.setSourceEntity(112U);
    msg.setDestination(23750U);
    msg.setDestinationEntity(165U);
    msg.value = 0.007796150673520796;
    msg.speed_units = 153U;

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
    msg.setTimeStamp(0.36151672384369693);
    msg.setSource(48454U);
    msg.setSourceEntity(188U);
    msg.setDestination(34822U);
    msg.setDestinationEntity(119U);
    msg.value = 0.41300316481659316;
    msg.speed_units = 148U;

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
    msg.setTimeStamp(0.4953574241406363);
    msg.setSource(16454U);
    msg.setSourceEntity(114U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(7U);
    msg.value = 0.1512574361146194;

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
    msg.setTimeStamp(0.029745839259217477);
    msg.setSource(55646U);
    msg.setSourceEntity(187U);
    msg.setDestination(27867U);
    msg.setDestinationEntity(178U);
    msg.value = 0.11186083590117712;

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
    msg.setTimeStamp(0.4403318094044334);
    msg.setSource(16479U);
    msg.setSourceEntity(246U);
    msg.setDestination(49710U);
    msg.setDestinationEntity(182U);
    msg.value = 0.2613055633807416;

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
    msg.setTimeStamp(0.7437561758753031);
    msg.setSource(17439U);
    msg.setSourceEntity(99U);
    msg.setDestination(63215U);
    msg.setDestinationEntity(154U);
    msg.value = 0.9045859355397122;

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
    msg.setTimeStamp(0.06261730664450038);
    msg.setSource(49104U);
    msg.setSourceEntity(24U);
    msg.setDestination(51257U);
    msg.setDestinationEntity(236U);
    msg.value = 0.2511306637068548;

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
    msg.setTimeStamp(0.5758060357239057);
    msg.setSource(46791U);
    msg.setSourceEntity(109U);
    msg.setDestination(17939U);
    msg.setDestinationEntity(2U);
    msg.value = 0.0382970502904334;

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
    msg.setTimeStamp(0.6945272557201566);
    msg.setSource(24877U);
    msg.setSourceEntity(231U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(224U);
    msg.value = 0.2552277246140273;

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
    msg.setTimeStamp(0.6256971609313814);
    msg.setSource(32609U);
    msg.setSourceEntity(54U);
    msg.setDestination(3748U);
    msg.setDestinationEntity(39U);
    msg.value = 0.727137256706495;

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
    msg.setTimeStamp(0.12558903865273485);
    msg.setSource(40984U);
    msg.setSourceEntity(39U);
    msg.setDestination(43868U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5346521565258079;

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
    msg.setTimeStamp(0.9635843691424161);
    msg.setSource(24294U);
    msg.setSourceEntity(79U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(38U);
    msg.path_ref = 2450313929U;
    msg.start_lat = 0.2426959385679084;
    msg.start_lon = 0.5443785303353436;
    msg.start_z = 0.9245279141612671;
    msg.start_z_units = 115U;
    msg.end_lat = 0.8820239888211501;
    msg.end_lon = 0.9536427022582042;
    msg.end_z = 0.42819434642556276;
    msg.end_z_units = 133U;
    msg.speed = 0.0026935227987513466;
    msg.speed_units = 183U;
    msg.lradius = 0.6682197538730886;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.05006250389692746);
    msg.setSource(36687U);
    msg.setSourceEntity(62U);
    msg.setDestination(43169U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 2639149792U;
    msg.start_lat = 0.28741932062978937;
    msg.start_lon = 0.123045987176713;
    msg.start_z = 0.6233124498918045;
    msg.start_z_units = 245U;
    msg.end_lat = 0.5330860430233666;
    msg.end_lon = 0.4996458108859628;
    msg.end_z = 0.8660799894157905;
    msg.end_z_units = 83U;
    msg.speed = 0.9025705140077175;
    msg.speed_units = 249U;
    msg.lradius = 0.18885579149459908;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.8574378638411846);
    msg.setSource(63526U);
    msg.setSourceEntity(132U);
    msg.setDestination(42692U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 1822063387U;
    msg.start_lat = 0.715323300926184;
    msg.start_lon = 0.1598851090369081;
    msg.start_z = 0.6422671480335861;
    msg.start_z_units = 53U;
    msg.end_lat = 0.23153082773875444;
    msg.end_lon = 0.6653781326653158;
    msg.end_z = 0.38707850213955775;
    msg.end_z_units = 225U;
    msg.speed = 0.4947567939734775;
    msg.speed_units = 222U;
    msg.lradius = 0.09556310576235372;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.7677834006758489);
    msg.setSource(32945U);
    msg.setSourceEntity(212U);
    msg.setDestination(18108U);
    msg.setDestinationEntity(161U);
    msg.x = 0.5373113505972577;
    msg.y = 0.6199131062211705;
    msg.z = 0.45299697726134225;
    msg.k = 0.6473231696471207;
    msg.m = 0.9137328072955576;
    msg.n = 0.23578855353106765;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.40834451449030973);
    msg.setSource(62718U);
    msg.setSourceEntity(122U);
    msg.setDestination(25377U);
    msg.setDestinationEntity(150U);
    msg.x = 0.621329242729373;
    msg.y = 0.06134509408328381;
    msg.z = 0.20797798400510092;
    msg.k = 0.6742329074171282;
    msg.m = 0.015508092051949807;
    msg.n = 0.10567300639832977;
    msg.flags = 163U;

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
    msg.setTimeStamp(0.5222749292315532);
    msg.setSource(61518U);
    msg.setSourceEntity(207U);
    msg.setDestination(7875U);
    msg.setDestinationEntity(138U);
    msg.x = 0.7728998899414878;
    msg.y = 0.7759215848165564;
    msg.z = 0.5112804800254778;
    msg.k = 0.74233427214749;
    msg.m = 0.051502708164829714;
    msg.n = 0.5330839320208377;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.6330580675781551);
    msg.setSource(46360U);
    msg.setSourceEntity(40U);
    msg.setDestination(42298U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9622165704526845;

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
    msg.setTimeStamp(0.4135737983501101);
    msg.setSource(11728U);
    msg.setSourceEntity(109U);
    msg.setDestination(99U);
    msg.setDestinationEntity(211U);
    msg.value = 0.9378810680427898;

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
    msg.setTimeStamp(0.2599299406364578);
    msg.setSource(40823U);
    msg.setSourceEntity(22U);
    msg.setDestination(54344U);
    msg.setDestinationEntity(212U);
    msg.value = 0.04997395675505567;

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
    msg.setTimeStamp(0.6027835751665125);
    msg.setSource(648U);
    msg.setSourceEntity(113U);
    msg.setDestination(64193U);
    msg.setDestinationEntity(163U);
    msg.u = 0.9853000892837512;
    msg.v = 0.6503714586204409;
    msg.w = 0.8744848107119475;
    msg.p = 0.18573999719448764;
    msg.q = 0.08817111676782163;
    msg.r = 0.7419772216257857;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.6085714197855491);
    msg.setSource(42514U);
    msg.setSourceEntity(153U);
    msg.setDestination(16976U);
    msg.setDestinationEntity(136U);
    msg.u = 0.7363172230968869;
    msg.v = 0.2675231812352379;
    msg.w = 0.6216407350697395;
    msg.p = 0.3299482376469175;
    msg.q = 0.2849324908996105;
    msg.r = 0.06586310223577208;
    msg.flags = 163U;

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
    msg.setTimeStamp(0.29299218474690714);
    msg.setSource(22997U);
    msg.setSourceEntity(33U);
    msg.setDestination(21599U);
    msg.setDestinationEntity(247U);
    msg.u = 0.21049095924151806;
    msg.v = 0.4060307808474545;
    msg.w = 0.8602271508528841;
    msg.p = 0.750836757667777;
    msg.q = 0.6157986857386708;
    msg.r = 0.0873155727538073;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.6462295368446634);
    msg.setSource(33300U);
    msg.setSourceEntity(209U);
    msg.setDestination(23034U);
    msg.setDestinationEntity(36U);
    msg.path_ref = 3065394188U;
    msg.start_lat = 0.26749101630704686;
    msg.start_lon = 0.4778782561667122;
    msg.start_z = 0.8886899760499514;
    msg.start_z_units = 55U;
    msg.end_lat = 0.4990029473960724;
    msg.end_lon = 0.8240621298284381;
    msg.end_z = 0.852123732107783;
    msg.end_z_units = 13U;
    msg.lradius = 0.9920920187716112;
    msg.flags = 191U;
    msg.x = 0.8897398566236571;
    msg.y = 0.12420422350759652;
    msg.z = 0.032437779673058165;
    msg.vx = 0.08728179163159944;
    msg.vy = 0.7332599935494983;
    msg.vz = 0.34760947824128374;
    msg.course_error = 0.8510120047237117;
    msg.eta = 61958U;

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
    msg.setTimeStamp(0.9494345140666105);
    msg.setSource(9545U);
    msg.setSourceEntity(171U);
    msg.setDestination(57635U);
    msg.setDestinationEntity(107U);
    msg.path_ref = 2430295373U;
    msg.start_lat = 0.8499616218621789;
    msg.start_lon = 0.6138723299045691;
    msg.start_z = 0.38144921152453903;
    msg.start_z_units = 16U;
    msg.end_lat = 0.5406593597507562;
    msg.end_lon = 0.23817455746590466;
    msg.end_z = 0.6809137095582495;
    msg.end_z_units = 191U;
    msg.lradius = 0.755606922699633;
    msg.flags = 95U;
    msg.x = 0.7066685050147169;
    msg.y = 0.8453901622566145;
    msg.z = 0.5943101374261875;
    msg.vx = 0.9150262918004375;
    msg.vy = 0.5840174336279589;
    msg.vz = 0.42457284224785274;
    msg.course_error = 0.043167924795482704;
    msg.eta = 16554U;

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
    msg.setTimeStamp(0.7166085343619115);
    msg.setSource(9669U);
    msg.setSourceEntity(138U);
    msg.setDestination(45703U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 1752350446U;
    msg.start_lat = 0.8631156051490009;
    msg.start_lon = 0.22080998821246933;
    msg.start_z = 0.9436758469743953;
    msg.start_z_units = 235U;
    msg.end_lat = 0.2666537500157098;
    msg.end_lon = 0.3930394436958159;
    msg.end_z = 0.22719823665462047;
    msg.end_z_units = 127U;
    msg.lradius = 0.430219689129832;
    msg.flags = 72U;
    msg.x = 0.96226145555651;
    msg.y = 0.3594885682283877;
    msg.z = 0.28078539876901587;
    msg.vx = 0.7665264110927441;
    msg.vy = 0.8486643550509185;
    msg.vz = 0.10454517254483531;
    msg.course_error = 0.5572437430859076;
    msg.eta = 10436U;

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
    msg.setTimeStamp(0.3910143953980143);
    msg.setSource(8213U);
    msg.setSourceEntity(205U);
    msg.setDestination(11708U);
    msg.setDestinationEntity(64U);
    msg.k = 0.05986965029172098;
    msg.m = 0.6810461898984219;
    msg.n = 0.756396573510848;

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
    msg.setTimeStamp(0.6360874071778602);
    msg.setSource(47250U);
    msg.setSourceEntity(133U);
    msg.setDestination(8021U);
    msg.setDestinationEntity(75U);
    msg.k = 0.59765899096647;
    msg.m = 0.7536959384760933;
    msg.n = 0.5293280881598809;

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
    msg.setTimeStamp(0.4703031547069121);
    msg.setSource(39046U);
    msg.setSourceEntity(109U);
    msg.setDestination(27419U);
    msg.setDestinationEntity(50U);
    msg.k = 0.5053322842886127;
    msg.m = 0.544999146858678;
    msg.n = 0.31259672106138003;

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
    msg.setTimeStamp(0.4032118930608489);
    msg.setSource(51702U);
    msg.setSourceEntity(176U);
    msg.setDestination(15398U);
    msg.setDestinationEntity(242U);
    msg.p = 0.39506945395175097;
    msg.i = 0.45054864078518375;
    msg.d = 0.7244194944588082;
    msg.a = 0.5597400865214096;

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
    msg.setTimeStamp(0.6360574086085483);
    msg.setSource(56658U);
    msg.setSourceEntity(213U);
    msg.setDestination(61678U);
    msg.setDestinationEntity(79U);
    msg.p = 0.3415696406818055;
    msg.i = 0.78229391861751;
    msg.d = 0.5780426467849122;
    msg.a = 0.1385554367337677;

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
    msg.setTimeStamp(0.6223833623894024);
    msg.setSource(28984U);
    msg.setSourceEntity(84U);
    msg.setDestination(8073U);
    msg.setDestinationEntity(202U);
    msg.p = 0.06274355805447152;
    msg.i = 0.38877592028994423;
    msg.d = 0.3763037783833212;
    msg.a = 0.886293496753727;

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
    msg.setTimeStamp(0.5677056962097582);
    msg.setSource(46230U);
    msg.setSourceEntity(169U);
    msg.setDestination(21857U);
    msg.setDestinationEntity(48U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.5735226747248571);
    msg.setSource(14696U);
    msg.setSourceEntity(192U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(51U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.7859916074680359);
    msg.setSource(951U);
    msg.setSourceEntity(76U);
    msg.setDestination(15041U);
    msg.setDestinationEntity(81U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.04763670134552567);
    msg.setSource(41239U);
    msg.setSourceEntity(174U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(118U);
    msg.x = 0.8718354223825656;
    msg.y = 0.43247489604886113;
    msg.z = 0.9454156915667509;
    msg.vx = 0.7345613897776486;
    msg.vy = 0.2576568379039602;
    msg.vz = 0.7534788815291245;
    msg.ax = 0.30957754658459635;
    msg.ay = 0.5565234595605378;
    msg.az = 0.6304002385821721;
    msg.flags = 18513U;

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
    msg.setTimeStamp(0.6309437875890472);
    msg.setSource(42313U);
    msg.setSourceEntity(149U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(107U);
    msg.x = 0.6307604780437934;
    msg.y = 0.8180075293751164;
    msg.z = 0.26748146939868744;
    msg.vx = 0.32132597883932323;
    msg.vy = 0.863570536037921;
    msg.vz = 0.48154178234116296;
    msg.ax = 0.17103094208063951;
    msg.ay = 0.7416974987476731;
    msg.az = 0.622135669907787;
    msg.flags = 55095U;

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
    msg.setTimeStamp(0.45647474125739873);
    msg.setSource(27444U);
    msg.setSourceEntity(206U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(12U);
    msg.x = 0.5634684780537946;
    msg.y = 0.22570297736216494;
    msg.z = 0.014500929195874424;
    msg.vx = 0.9935092852859941;
    msg.vy = 0.012729413910668841;
    msg.vz = 0.20496234067075159;
    msg.ax = 0.07178929339492346;
    msg.ay = 0.6606870401270286;
    msg.az = 0.9748295143115701;
    msg.flags = 29048U;

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
    msg.setTimeStamp(0.31961262540486257);
    msg.setSource(49979U);
    msg.setSourceEntity(104U);
    msg.setDestination(61302U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5236034745652947;

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
    msg.setTimeStamp(0.27085046960637116);
    msg.setSource(21828U);
    msg.setSourceEntity(0U);
    msg.setDestination(49224U);
    msg.setDestinationEntity(196U);
    msg.value = 0.33223683658782865;

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
    msg.setTimeStamp(0.6109420516792746);
    msg.setSource(60278U);
    msg.setSourceEntity(188U);
    msg.setDestination(36756U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5995627381002243;

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
    msg.setTimeStamp(0.9613514564909582);
    msg.setSource(34107U);
    msg.setSourceEntity(108U);
    msg.setDestination(44635U);
    msg.setDestinationEntity(10U);
    msg.timeout = 46009U;
    msg.lat = 0.653079970670902;
    msg.lon = 0.6379286862448571;
    msg.z = 0.6782554711674428;
    msg.z_units = 97U;
    msg.speed = 0.12972791741618817;
    msg.speed_units = 249U;
    msg.roll = 0.8439177139659108;
    msg.pitch = 0.4656950525071599;
    msg.yaw = 0.6514034797647922;
    msg.custom.assign("JXHSWRNLTDYPIKTVQPOZXPFLDIDFZMFJVKTFEEGBUOXNURJJAVMCANTHHKXDLGSRCTJOYQKLJKPCEXQJOAGEJPHGDBSQLNKMMXMWLCLTSXAVSVRYHOCAWLZPPFEORRMOM");

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
    msg.setTimeStamp(0.2109313513491372);
    msg.setSource(18705U);
    msg.setSourceEntity(41U);
    msg.setDestination(63775U);
    msg.setDestinationEntity(253U);
    msg.timeout = 9632U;
    msg.lat = 0.8539223360032163;
    msg.lon = 0.3572506822442354;
    msg.z = 0.5325279009925017;
    msg.z_units = 124U;
    msg.speed = 0.20694056506601555;
    msg.speed_units = 100U;
    msg.roll = 0.9494278026924377;
    msg.pitch = 0.9436107054341655;
    msg.yaw = 0.15549349962227887;
    msg.custom.assign("SIZMTDUNTGXXSNQPHFOXLGHAUOVLTYZCPDQNGTJUAQYSHSOBTMFKZPXCBWAWQDJDVRRNIBXEHZMDKCBLLVNQZCJXVOHXYLOJEPTWKGJTTMRQASJJCVSDHRUQSYL");

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
    msg.setTimeStamp(0.7828971664577726);
    msg.setSource(17707U);
    msg.setSourceEntity(98U);
    msg.setDestination(36070U);
    msg.setDestinationEntity(146U);
    msg.timeout = 27471U;
    msg.lat = 0.7075219234307392;
    msg.lon = 0.16959776839093943;
    msg.z = 0.0650480465632931;
    msg.z_units = 93U;
    msg.speed = 0.6212793714944664;
    msg.speed_units = 91U;
    msg.roll = 0.38641129024831644;
    msg.pitch = 0.36304957071624844;
    msg.yaw = 0.04448596179824871;
    msg.custom.assign("QJLEEKHMSKQDLSOJHNNIKGKUUQDKAHHUFFUYNOJZWZL");

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
    msg.setTimeStamp(0.80698248087426);
    msg.setSource(2205U);
    msg.setSourceEntity(11U);
    msg.setDestination(50778U);
    msg.setDestinationEntity(72U);
    msg.timeout = 58170U;
    msg.lat = 0.028507102556221797;
    msg.lon = 0.43628634990826376;
    msg.z = 0.2002611514360516;
    msg.z_units = 193U;
    msg.speed = 0.4907537119816344;
    msg.speed_units = 130U;
    msg.duration = 43626U;
    msg.radius = 0.7152419671237936;
    msg.flags = 181U;
    msg.custom.assign("XFMTWICMROOYSTFILKZQDLLAAXHZAHFTGOSUPSHTYCKUSLI");

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
    msg.setTimeStamp(0.3796042774446967);
    msg.setSource(37077U);
    msg.setSourceEntity(206U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(97U);
    msg.timeout = 824U;
    msg.lat = 0.6010154484193128;
    msg.lon = 0.02359677668810778;
    msg.z = 0.7901806964138333;
    msg.z_units = 27U;
    msg.speed = 0.174673563404947;
    msg.speed_units = 33U;
    msg.duration = 16691U;
    msg.radius = 0.8243452096303574;
    msg.flags = 113U;
    msg.custom.assign("HNOIQSJLTRUGPVAA");

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
    msg.setTimeStamp(0.48852284293730563);
    msg.setSource(50438U);
    msg.setSourceEntity(35U);
    msg.setDestination(40822U);
    msg.setDestinationEntity(7U);
    msg.timeout = 22366U;
    msg.lat = 0.08545358045084572;
    msg.lon = 0.31062421284542585;
    msg.z = 0.41222819284100054;
    msg.z_units = 206U;
    msg.speed = 0.41979154386251605;
    msg.speed_units = 68U;
    msg.duration = 32790U;
    msg.radius = 0.9080801764389316;
    msg.flags = 183U;
    msg.custom.assign("XRZDJWLPNEPBCIIFSNORLMBSVDPWDYVRZHKYUYVNRDPJJOPUHORALJDHHBUXRWCGTZXGJVANUFDEDXURKUCPIOKDW");

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
    msg.setTimeStamp(0.8148368314735597);
    msg.setSource(20224U);
    msg.setSourceEntity(250U);
    msg.setDestination(37945U);
    msg.setDestinationEntity(219U);
    msg.custom.assign("JJDXEMWGSIIVAGOEHYDTPRAVGYSYERRCMFWQBXTJMXTCZZWDHSRKOBIQJBCOILHAPJFBWUZCHFSCFSHUZGHTKDLQXSNNCPYMPVERTBQSYYOMJQIAV");

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
    msg.setTimeStamp(0.7492456160003569);
    msg.setSource(14966U);
    msg.setSourceEntity(177U);
    msg.setDestination(765U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("ITIUWRGOXJBYMUCVAVROYDMNWWGCZLCDQHHMJTFRXVWUJTTXAHHWQMTFOBFBWPGPPHBNHEFEIRUQLUZACNLJZADYUNPLAYBIGIHDQLVWFIRKPURQNLQJXAJNKSEYPJIBFXZQZFZYBLAGGTSVEMJDSGSCGKZMAPCBLXSVCJARMDHLUDYTZVLRKFIMOUOOKEOVJTIXATSWEEDNBGPFMFOQIHSCSRQHVKWZKTKG");

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
    msg.setTimeStamp(0.33336443822329553);
    msg.setSource(34388U);
    msg.setSourceEntity(235U);
    msg.setDestination(18645U);
    msg.setDestinationEntity(71U);
    msg.custom.assign("MWFJMHOHSJMENENNRSNTVERITUARCJAEZDNBXKAGQZDZEOZMOTAHUCIPWNRAEISMHJMPCBFJBPDXVIKXXOFPVOGKQRRWOLQGTBCYZIBHDCKUENYDWSJCTIWHAWEGTTPJEASXLVNLUXJDUFLNYZBUYSGQSCEFKTATGHIMLQWCIQQVQ");

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
    msg.setTimeStamp(0.6051749037417035);
    msg.setSource(31789U);
    msg.setSourceEntity(82U);
    msg.setDestination(13468U);
    msg.setDestinationEntity(198U);
    msg.timeout = 63788U;
    msg.lat = 0.005834101432554473;
    msg.lon = 0.22101268232387405;
    msg.z = 0.46718442305218766;
    msg.z_units = 248U;
    msg.duration = 65233U;
    msg.speed = 0.9909985159632472;
    msg.speed_units = 96U;
    msg.type = 77U;
    msg.radius = 0.20634664553868542;
    msg.length = 0.8762915755083519;
    msg.bearing = 0.1529011285576437;
    msg.direction = 200U;
    msg.custom.assign("TZWHEHYKGXYVBBVQVZBGSHBIOVWLHHMTDWOUJTXJMRRCFQKNNCIXXOIQAKASEHADFLBFQRZLDGEKYTMOLQMLLSNDIZSAYLSCBN");

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
    msg.setTimeStamp(0.4699439767816117);
    msg.setSource(49177U);
    msg.setSourceEntity(24U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(195U);
    msg.timeout = 34407U;
    msg.lat = 0.0016624519148101813;
    msg.lon = 0.7846174547309603;
    msg.z = 0.4444523089048479;
    msg.z_units = 66U;
    msg.duration = 26124U;
    msg.speed = 0.9542715652054239;
    msg.speed_units = 107U;
    msg.type = 80U;
    msg.radius = 0.4276879671863021;
    msg.length = 0.2509178542677706;
    msg.bearing = 0.8379328067236207;
    msg.direction = 26U;
    msg.custom.assign("LWBJIPCISTOQXSJNASCKOZYOQJLNOSEKZRDFJVKAPPEFYXHWKZYN");

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
    msg.setTimeStamp(0.926466675433595);
    msg.setSource(24616U);
    msg.setSourceEntity(229U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(194U);
    msg.timeout = 39807U;
    msg.lat = 0.9272754100363302;
    msg.lon = 0.42871855931971903;
    msg.z = 0.5925172574286166;
    msg.z_units = 136U;
    msg.duration = 48842U;
    msg.speed = 0.28071057320364423;
    msg.speed_units = 246U;
    msg.type = 236U;
    msg.radius = 0.5104700368875492;
    msg.length = 0.9881862168103259;
    msg.bearing = 0.6123526037317311;
    msg.direction = 11U;
    msg.custom.assign("RLGCAVHCCWKDEPBSESIBYBNEKKSSZRXBQXTJDUIYTXNHLBWEDOWWLQVSWPNBMFGEDZINTCEFZMMBUHMXGYRZUBQGRJP");

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
    msg.setTimeStamp(0.4697413675509995);
    msg.setSource(60855U);
    msg.setSourceEntity(185U);
    msg.setDestination(62083U);
    msg.setDestinationEntity(93U);
    msg.duration = 25118U;
    msg.custom.assign("KDTQWNTOFHWSABATSSRCRSSQQGRDILRJXODIZUWFUWQDVPYERDLEPDFXKOBNLVVIGPJM");

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
    msg.setTimeStamp(0.048558265924871336);
    msg.setSource(39744U);
    msg.setSourceEntity(167U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(151U);
    msg.duration = 49219U;
    msg.custom.assign("ASBXHDPJEXZYGIBKUPBXHGKAOVNGXGUZVNQAZHXQJFPGYIDVHODDYDYVGYQJZOEUOYYJWQWZRVRAAPXCWFSQLCFHRLLVMVMCSPRWEINEEZONNIKYFG");

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
    msg.setTimeStamp(0.4944764892706105);
    msg.setSource(44587U);
    msg.setSourceEntity(29U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(163U);
    msg.duration = 16172U;
    msg.custom.assign("CUQCPYFDIBFZHKCMKTEXXDDUJZMXXGIJQFVTRUXKBRRECIDLLPNRQPLQKSZMZGYKAKVVDUJHRSMYSGRATTFURHJMHMBYZBWNGNXSZUFIHVNQEGTLEOKRYOPQUHEWBFLZNDJWWCDSPKMIIRTVXHZAMBBSAYPVOJVT");

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
    msg.setTimeStamp(0.975181717260915);
    msg.setSource(23633U);
    msg.setSourceEntity(62U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(56U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 377084671U;
    tmp_msg_0.start_lat = 0.9529211076727627;
    tmp_msg_0.start_lon = 0.3366199428816675;
    tmp_msg_0.start_z = 0.8132627840304072;
    tmp_msg_0.start_z_units = 57U;
    tmp_msg_0.end_lat = 0.2752452891275923;
    tmp_msg_0.end_lon = 0.4165005269579558;
    tmp_msg_0.end_z = 0.6588270339568536;
    tmp_msg_0.end_z_units = 227U;
    tmp_msg_0.speed = 0.3996983956465088;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.lradius = 0.901312849233849;
    tmp_msg_0.flags = 99U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17606U;
    msg.custom.assign("UMDWMIMCVBVRXCNVTLVKZITLPTEYFLQJZYXYHQPRUWAXTWFZGKJQAHJUVISCLOEJISHCXRFFESSRBKEYGBEEZBAOITDKNMLGPFEOADZUQOLULRDAYATNNVDWOFIFVHDWBGHBZJYXWANSFSYPFDSLRJXCZTIXJQUTEQRIGGSHPOYB");

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
    msg.setTimeStamp(0.38246012207457725);
    msg.setSource(12135U);
    msg.setSourceEntity(160U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(192U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.019157786629127482;
    msg.control.set(tmp_msg_0);
    msg.duration = 48878U;
    msg.custom.assign("TSWHWRXHEEREXEGPH");

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
    msg.setTimeStamp(0.8323375955696479);
    msg.setSource(6691U);
    msg.setSourceEntity(30U);
    msg.setDestination(9922U);
    msg.setDestinationEntity(34U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.12899288219742266;
    msg.control.set(tmp_msg_0);
    msg.duration = 57909U;
    msg.custom.assign("HPHMGUHDNUYEATZIWFDXSOSGJIDGROQGHDHXGSWRVYLDXOAWKBCWOSHDPWUZ");

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
    msg.setTimeStamp(0.5726428447290638);
    msg.setSource(30030U);
    msg.setSourceEntity(113U);
    msg.setDestination(37888U);
    msg.setDestinationEntity(221U);
    msg.timeout = 42303U;
    msg.lat = 0.7576929601778486;
    msg.lon = 0.5390428217163189;
    msg.z = 0.31188473929358373;
    msg.z_units = 120U;
    msg.speed = 0.24634458355635236;
    msg.speed_units = 40U;
    msg.bearing = 0.44818750821090414;
    msg.cross_angle = 0.8052221528083284;
    msg.width = 0.7746939171387199;
    msg.length = 0.839681510265829;
    msg.hstep = 0.19774963495820808;
    msg.coff = 170U;
    msg.alternation = 156U;
    msg.flags = 228U;
    msg.custom.assign("RENLBOVMOQHXEUQVAHZTQSKFRDHDHIBAJKLTTWMMLSOHC");

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
    msg.setTimeStamp(0.8309352983728224);
    msg.setSource(8977U);
    msg.setSourceEntity(224U);
    msg.setDestination(6450U);
    msg.setDestinationEntity(159U);
    msg.timeout = 62639U;
    msg.lat = 0.8313812960588685;
    msg.lon = 0.2092256881391853;
    msg.z = 0.5387670719655078;
    msg.z_units = 120U;
    msg.speed = 0.658866116111395;
    msg.speed_units = 35U;
    msg.bearing = 0.10003543893147515;
    msg.cross_angle = 0.7967389200881212;
    msg.width = 0.24936580725084434;
    msg.length = 0.14145067089298757;
    msg.hstep = 0.27943579770587634;
    msg.coff = 191U;
    msg.alternation = 117U;
    msg.flags = 73U;
    msg.custom.assign("NMRYCGXZLWDNVUMOIYGDJSXEQHJUNJKARVZAHXOEHJFAWNTPNBTKBAPAONEHMNUTIYMOHEH");

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
    msg.setTimeStamp(0.11116575232410464);
    msg.setSource(21388U);
    msg.setSourceEntity(74U);
    msg.setDestination(39246U);
    msg.setDestinationEntity(190U);
    msg.timeout = 10496U;
    msg.lat = 0.4171663059989943;
    msg.lon = 0.0002867588192871917;
    msg.z = 0.6406913221516397;
    msg.z_units = 226U;
    msg.speed = 0.8011308509385764;
    msg.speed_units = 134U;
    msg.bearing = 0.9359274094681794;
    msg.cross_angle = 0.7897640539577657;
    msg.width = 0.9500362680204011;
    msg.length = 0.8588578672458513;
    msg.hstep = 0.15631741428151158;
    msg.coff = 177U;
    msg.alternation = 204U;
    msg.flags = 6U;
    msg.custom.assign("AFXQSVNJOYJKMOGGWLOZMHBEWKMOYDYEPLOGVJSRPHOAHPNLZWHRLZFZQLRTEHRVXWQATZ");

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
    msg.setTimeStamp(0.723294274424233);
    msg.setSource(34252U);
    msg.setSourceEntity(126U);
    msg.setDestination(7835U);
    msg.setDestinationEntity(175U);
    msg.timeout = 9935U;
    msg.lat = 0.8483971744313322;
    msg.lon = 0.46390610083951245;
    msg.z = 0.20406326267499197;
    msg.z_units = 49U;
    msg.speed = 0.7974872898605451;
    msg.speed_units = 201U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1259981223864658;
    tmp_msg_0.y = 0.27569762286182564;
    tmp_msg_0.z = 0.35034358893155304;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CMXRYLHRBFLRCKJTRYLAVJWFUANSUBMDKALQO");

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
    msg.setTimeStamp(0.3235901000485967);
    msg.setSource(54590U);
    msg.setSourceEntity(129U);
    msg.setDestination(25728U);
    msg.setDestinationEntity(109U);
    msg.timeout = 62006U;
    msg.lat = 0.026412164300118723;
    msg.lon = 0.6363491351493616;
    msg.z = 0.5411745884901218;
    msg.z_units = 243U;
    msg.speed = 0.7468433895157733;
    msg.speed_units = 8U;
    msg.custom.assign("CDALXIQLTIPYNZXBQXBMDMNPWYMWZNHZEDUUVJTHPKLSPXMSKTORWZCIZQTVAUTAFJJCEGTQFAIOWZWOUIKFIOTNXQDPNKGHQGOJNTLHILMGYSVYIAXYZBIBNKSMBDFOLHDKBGUDPBCRSLDIRPYCRGCNQFDEXLHZYFFVFJAJAJRCMWYAG");

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
    msg.setTimeStamp(0.7844360539084891);
    msg.setSource(55347U);
    msg.setSourceEntity(67U);
    msg.setDestination(46631U);
    msg.setDestinationEntity(79U);
    msg.timeout = 29274U;
    msg.lat = 0.44690101638679447;
    msg.lon = 0.609123625814334;
    msg.z = 0.4752534567663581;
    msg.z_units = 184U;
    msg.speed = 0.39832425741572575;
    msg.speed_units = 123U;
    msg.custom.assign("JANGXTJBMLBZQTNYMCSKPGXEXBXZPFNSPKGWRNHXGKRLLPFOBOJZLOHSHGTSKZIQKQFJKBEVVOZOGIIGPIODWEAIUAWJGYYHIOGMGAJEMVPVCVRQUCQHBNVLUFTQVNYETAUZTW");

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
    msg.setTimeStamp(0.7656259473251125);
    msg.setSource(60557U);
    msg.setSourceEntity(23U);
    msg.setDestination(52850U);
    msg.setDestinationEntity(161U);
    msg.x = 0.8007598595847012;
    msg.y = 0.8938152001352184;
    msg.z = 0.44166644037717195;

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
    msg.setTimeStamp(0.009789318790678458);
    msg.setSource(61092U);
    msg.setSourceEntity(98U);
    msg.setDestination(43161U);
    msg.setDestinationEntity(222U);
    msg.x = 0.8093285139583246;
    msg.y = 0.05646709703598618;
    msg.z = 0.7276424300358295;

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
    msg.setTimeStamp(0.8549187770319417);
    msg.setSource(28173U);
    msg.setSourceEntity(112U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(246U);
    msg.x = 0.9605834656157765;
    msg.y = 0.4733405596191319;
    msg.z = 0.4656113928839658;

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
    msg.setTimeStamp(0.34166590762413096);
    msg.setSource(11480U);
    msg.setSourceEntity(63U);
    msg.setDestination(27694U);
    msg.setDestinationEntity(237U);
    msg.timeout = 52214U;
    msg.lat = 0.32751096112925226;
    msg.lon = 0.02069158744541222;
    msg.z = 0.40629851356987645;
    msg.z_units = 159U;
    msg.amplitude = 0.35575629401240727;
    msg.pitch = 0.4436399123185508;
    msg.speed = 0.19153560091502553;
    msg.speed_units = 183U;
    msg.custom.assign("YADDUTQRSQE");

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
    msg.setTimeStamp(0.12996354907360197);
    msg.setSource(30911U);
    msg.setSourceEntity(240U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(245U);
    msg.timeout = 27588U;
    msg.lat = 0.9757913117142771;
    msg.lon = 0.6857763664352902;
    msg.z = 0.8005862363092875;
    msg.z_units = 57U;
    msg.amplitude = 0.48016586262955885;
    msg.pitch = 0.5506396512939744;
    msg.speed = 0.871297282396071;
    msg.speed_units = 66U;
    msg.custom.assign("RJLFPDOECSGKTFKAXXNAZHNFBDPZKOZRTEVYMQJOPMGRHPYVTPUUZCLZVTNWYDHQJNHDYWUVWKZNALUCNWFMGIFJBGAWDRZWOUVBCPDPOZIMIRSTGKOQMWEQIRVOBGGLOFWIBMFMFCMOVSUUCHQQEATCOPIJIGUADIQSNREJBTHLAVLGVYEXSSKCHQJUXYNFEXSTXLHMKJQCPRYYXSMKXQBXZDDUERTSYAZILRWBIJE");

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
    msg.setTimeStamp(0.014586266859132446);
    msg.setSource(45885U);
    msg.setSourceEntity(77U);
    msg.setDestination(46782U);
    msg.setDestinationEntity(82U);
    msg.timeout = 46702U;
    msg.lat = 0.10832448322034338;
    msg.lon = 0.36835866684285756;
    msg.z = 0.6744864632110957;
    msg.z_units = 111U;
    msg.amplitude = 0.9107324972206524;
    msg.pitch = 0.24316184085055892;
    msg.speed = 0.8359344216692607;
    msg.speed_units = 7U;
    msg.custom.assign("JSLYTSKQJUGCADZGDSBUNNHQXDJBFGGJEXATTMENPYQILJXWTTAUFFVWAWSRHGNTXOUKZUKSFAPMQYHNMXYLWYETJPMIIHEPIBFNIOQNWQR");

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
    msg.setTimeStamp(0.8725333836004768);
    msg.setSource(6152U);
    msg.setSourceEntity(23U);
    msg.setDestination(36020U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.06815466679659976);
    msg.setSource(22990U);
    msg.setSourceEntity(249U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.9190274271885606);
    msg.setSource(38542U);
    msg.setSourceEntity(217U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.8727640851226157);
    msg.setSource(52937U);
    msg.setSourceEntity(176U);
    msg.setDestination(46287U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.21345899072823094;
    msg.lon = 0.7911496530817971;
    msg.z = 0.11314930264083856;
    msg.z_units = 98U;
    msg.radius = 0.024470297586625445;
    msg.duration = 49883U;
    msg.speed = 0.8688500151881464;
    msg.speed_units = 252U;
    msg.custom.assign("ZFXHDUCSZJLSSNTTJQNTYBIRFFAHLTICXOOQEPRVWJCFXAEYVRCVDEJADZKMGOBEJGSCFIZQDWAGHMRLBINVKFTCDELCEBPITUBQYIARXXWPRNKKKWAMAUNJTIMOQGNGNUUWCVZHOKUDKYVWNDPMYMBPJPTROKWGMBNJBQGSSENUXVLLMLYRUCOSIWODGQMPQ");

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
    msg.setTimeStamp(0.5590220953554368);
    msg.setSource(33126U);
    msg.setSourceEntity(59U);
    msg.setDestination(57707U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.018742621307180185;
    msg.lon = 0.29033649850804066;
    msg.z = 0.8464329467791106;
    msg.z_units = 134U;
    msg.radius = 0.24059894583300756;
    msg.duration = 27443U;
    msg.speed = 0.17723987174511824;
    msg.speed_units = 51U;
    msg.custom.assign("NONSWWOWMSKAYOJISMMZIJXMWSKPWQHTBWAOKBPZTAJZQHHNUYYOFFWDRDXHHOCLRZKIIQOTVRGYQCTANLGGJXQULUVYASDLCOREKFIQLRTEJGANGVIBPWZZTXSJFXMDNBZ");

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
    msg.setTimeStamp(0.7071578397228238);
    msg.setSource(35231U);
    msg.setSourceEntity(212U);
    msg.setDestination(25426U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.30524553851613934;
    msg.lon = 0.8733494084024588;
    msg.z = 0.7591357414136704;
    msg.z_units = 28U;
    msg.radius = 0.24277494549129897;
    msg.duration = 19406U;
    msg.speed = 0.8274235485229283;
    msg.speed_units = 43U;
    msg.custom.assign("LASNQBPDCUQJCWTXVKOFOFGFLIVLAKIITFPMVEPDKJDRTHQJVZGRZSMZMGCJYHABEQSNJUVRAKXQMKREFNWYW");

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
    msg.setTimeStamp(0.5841867902652399);
    msg.setSource(3456U);
    msg.setSourceEntity(109U);
    msg.setDestination(64681U);
    msg.setDestinationEntity(71U);
    msg.timeout = 55714U;
    msg.flags = 192U;
    msg.lat = 0.12938994077271315;
    msg.lon = 0.629757542791204;
    msg.start_z = 0.48374216214052634;
    msg.start_z_units = 195U;
    msg.end_z = 0.8804344372976923;
    msg.end_z_units = 199U;
    msg.radius = 0.852766365261281;
    msg.speed = 0.1505556164255415;
    msg.speed_units = 113U;
    msg.custom.assign("PUSOFGSXMRUWLMJTSRSIDUTAJASCAQWDXBBVBCWYXPANOHNWQKWTWCIGZCKLJYPMLNUOKBVNPDNPVTWKHJZNQAVZLKVUAOTPZLHHODRWYDSHBECVNFCQUXVFJLMHKEIDFTTQZYGCYLBDEOCGRXJEKNTFBOUXIGBQWTHEKBHKTIUFOMNMZJGURVQREPPHYVYXIJARLZFLISIXQJKZA");

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
    msg.setTimeStamp(0.636703784605348);
    msg.setSource(15583U);
    msg.setSourceEntity(78U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(11U);
    msg.timeout = 21335U;
    msg.flags = 147U;
    msg.lat = 0.03288423088560999;
    msg.lon = 0.2462001464878132;
    msg.start_z = 0.7075994542180298;
    msg.start_z_units = 165U;
    msg.end_z = 0.7959205549677898;
    msg.end_z_units = 15U;
    msg.radius = 0.0480484342888986;
    msg.speed = 0.7404240395364245;
    msg.speed_units = 182U;
    msg.custom.assign("KTXLCNHZQPBIUFPPFANCKHZABLMWTANBMOAYSAMHHGNFJAVWRUPLRVSQYHCCFBTEBEVKSTWFXMZAZWBZGDSJKDDPOZPRUSMYKDXZJTQWSHDFVGZYDTPAUORUZYGINHJJJQCOBMFULYWSGSXCXHJXSNMWBLWQEXTDBCKYGRUODOJEYDIEYURJJRFVGIQVBQYO");

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
    msg.setTimeStamp(0.07708450453820126);
    msg.setSource(26514U);
    msg.setSourceEntity(53U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(177U);
    msg.timeout = 12460U;
    msg.flags = 178U;
    msg.lat = 0.9473534651247398;
    msg.lon = 0.6445968716417207;
    msg.start_z = 0.5431758387356214;
    msg.start_z_units = 188U;
    msg.end_z = 0.8787162245070589;
    msg.end_z_units = 12U;
    msg.radius = 0.6637848926782064;
    msg.speed = 0.9259448674244726;
    msg.speed_units = 147U;
    msg.custom.assign("VGXUPSNIFQZBZKMRVVYDTWWUPKCSHONTXMQAQZJELCJKNIAEWLUULHRHHV");

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
    msg.setTimeStamp(0.061196695024729686);
    msg.setSource(49211U);
    msg.setSourceEntity(235U);
    msg.setDestination(51636U);
    msg.setDestinationEntity(164U);
    msg.timeout = 45260U;
    msg.lat = 0.9163835837453812;
    msg.lon = 0.061596398863898116;
    msg.z = 0.07159148628523992;
    msg.z_units = 44U;
    msg.speed = 0.21628460356174195;
    msg.speed_units = 226U;
    msg.custom.assign("LOVVEBWGCMONHNIMKJUBYPZRFGUJSXHDNAJYTOBYCHWKMLSCIFAVFFCNSZCZFUGHJQPYDRZIDEAQERIDYI");

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
    msg.setTimeStamp(0.9534389498739696);
    msg.setSource(57040U);
    msg.setSourceEntity(101U);
    msg.setDestination(11429U);
    msg.setDestinationEntity(208U);
    msg.timeout = 9393U;
    msg.lat = 0.5003464701850808;
    msg.lon = 0.08022832381843625;
    msg.z = 0.5552695723595822;
    msg.z_units = 89U;
    msg.speed = 0.25329705899512467;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.18153704079555433;
    tmp_msg_0.y = 0.8736062439145834;
    tmp_msg_0.z = 0.26900389880781794;
    tmp_msg_0.t = 0.5788730930133341;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RJYQXZWBOJVEPDXKSYZUAAPXICFBFUYBECERGAIEXRDVHMLXTNEYKFWPXSLLMONIH");

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
    msg.setTimeStamp(0.028354372364976954);
    msg.setSource(50726U);
    msg.setSourceEntity(32U);
    msg.setDestination(44272U);
    msg.setDestinationEntity(38U);
    msg.timeout = 16682U;
    msg.lat = 0.5939571208987018;
    msg.lon = 0.5154413212257795;
    msg.z = 0.1927138017615987;
    msg.z_units = 173U;
    msg.speed = 0.7947359070122494;
    msg.speed_units = 108U;
    msg.custom.assign("AJUOQVYNDSUEIMNFTGRLUPCOXXHGXEXKEVFQYZYYSLSCJSPIKHQWKNGTJKGAKJBUBDNHKRNSXWAGPJLTTZVDBZUNEVMLHMOMWLZODUDMZPSFYWPAGTDCJQQMCFAYEXNQHEMDFTCVOWVBRIINHUKCINDJTPQ");

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
    msg.setTimeStamp(0.03177522598624005);
    msg.setSource(48739U);
    msg.setSourceEntity(69U);
    msg.setDestination(26430U);
    msg.setDestinationEntity(216U);
    msg.x = 0.7023201663204732;
    msg.y = 0.2982218088303361;
    msg.z = 0.14773184920576488;
    msg.t = 0.006119965507463632;

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
    msg.setTimeStamp(0.3239564355905158);
    msg.setSource(54155U);
    msg.setSourceEntity(101U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(78U);
    msg.x = 0.18672907685207873;
    msg.y = 0.8609042390715161;
    msg.z = 0.7224458529449971;
    msg.t = 0.8581308251729817;

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
    msg.setTimeStamp(0.950718400501429);
    msg.setSource(51974U);
    msg.setSourceEntity(196U);
    msg.setDestination(59840U);
    msg.setDestinationEntity(224U);
    msg.x = 0.8914349514689941;
    msg.y = 0.010952750008708434;
    msg.z = 0.16336899543935246;
    msg.t = 0.20057716704321626;

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
    msg.setTimeStamp(0.14085482400975435);
    msg.setSource(40843U);
    msg.setSourceEntity(92U);
    msg.setDestination(55994U);
    msg.setDestinationEntity(158U);
    msg.timeout = 5950U;
    msg.name.assign("CNDMBWOQSGMMVDFHLPZYCKLVCZNREZOYSGANRHHNOLRADMMJRHYRTULOSKQDCLJNKJWZMTZMLPQBKFTGVPXXWQBTHVKEEKJPSICXGVDUATBUSUEGHTAYPDNWUPBFHIPTNYAIEWUASCTDPLEFFKKEUWAVCPEOBHJCTJFHORRZXXQSJONJXIQAZRAXBIDOBNZWUIJXXBLVUHOEGOYCIMPCGFDYLMWIQWYZRSV");
    msg.custom.assign("BKWIWEOCPVDFQOMJSCCRQZDFLXTYXHZZPDCWTWAVMNFXIINVBWHXSXJFQNRIOBZGWUHPQBBODBUKFHYSWLKYOMEAQSCMHTKCKPPILMSDJTNUGNDMBJXRSUZDMDZYOPRQAVUURNZAINBEGYVQSNYEGOVJEQNUUVXRIRJKVTLTBJLMIS");

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
    msg.setTimeStamp(0.2797722241448076);
    msg.setSource(64806U);
    msg.setSourceEntity(39U);
    msg.setDestination(44880U);
    msg.setDestinationEntity(169U);
    msg.timeout = 21252U;
    msg.name.assign("ECERPECMGTZXLOIHYXQPVTGIPQHAHHNLVCAODHMSQXKJYMXWXVYVIWPBTYVUWCFYTGAJPFFIZJWSEZRHJAXUNDFGMZJJWOTJIDNUFIYLVULEKYWSTVKXNEBSNOGUQ");
    msg.custom.assign("INEFZLUPFILSPKMCSNUUCIFZRAWZHUQCSMZNZXVEYPDMLAWTYKAJAGGDKOTCDTWOJUNQRPPWBYWSGTGIOGHQBEYIBMSVLNVV");

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
    msg.setTimeStamp(0.04236762692077689);
    msg.setSource(51542U);
    msg.setSourceEntity(31U);
    msg.setDestination(54474U);
    msg.setDestinationEntity(179U);
    msg.timeout = 12359U;
    msg.name.assign("WTHFYGLFMERUKQIYKODXYWIRCIAFATVXGFVUQOGIZIVXRLOKUGOKXZDFJNEWSADSQKCLHRLKNXQZYFDZVXYTXQYZIDZJXTMMHVPPQBTVDLMBBHGWNLIAJMNLWXKSDCNFGCSBEMIMWQPJXPCZLPAVZOJURHGETHJNHHRSBTSAFJML");
    msg.custom.assign("GZMGKNOZULFMXQPWL");

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
    msg.setTimeStamp(0.6793029696758499);
    msg.setSource(65009U);
    msg.setSourceEntity(241U);
    msg.setDestination(63264U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.7852981214223164;
    msg.lon = 0.8415032851956371;
    msg.z = 0.04544033919900681;
    msg.z_units = 245U;
    msg.speed = 0.32586943373691735;
    msg.speed_units = 104U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3089984093938062;
    tmp_msg_0.y = 0.11522406872098989;
    tmp_msg_0.z = 0.03124834396519427;
    tmp_msg_0.t = 0.08931660012581322;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 59195U;
    tmp_msg_1.off_x = 0.07786639484932423;
    tmp_msg_1.off_y = 0.18376236692265757;
    tmp_msg_1.off_z = 0.048924386370731376;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7195502370337408;
    msg.custom.assign("TMIQYMTWWKEIEJIAWIECXMQRPONNZPCLS");

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
    msg.setTimeStamp(0.12543687562506867);
    msg.setSource(50356U);
    msg.setSourceEntity(68U);
    msg.setDestination(52431U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.48841949572839327;
    msg.lon = 0.033362763156194686;
    msg.z = 0.25421940199055215;
    msg.z_units = 141U;
    msg.speed = 0.013781479013904585;
    msg.speed_units = 79U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21470902565511796;
    tmp_msg_0.y = 0.16726854849546813;
    tmp_msg_0.z = 0.8719490046212893;
    tmp_msg_0.t = 0.921192203996708;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.04713752548945649;
    msg.custom.assign("WFXETCCHZXKQTWVYAMPFEDFTTZZRXDWAETMJHJBFMRJGURSLYOWRYBCVSXJTVGFMVGQWJYDFWYLZVSHDDZVBSEUGNISNGPOPIFNOSXHWB");

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
    msg.setTimeStamp(0.321013590674075);
    msg.setSource(54961U);
    msg.setSourceEntity(61U);
    msg.setDestination(25901U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6786015282210881;
    msg.lon = 0.48191371665798743;
    msg.z = 0.9186955610675442;
    msg.z_units = 113U;
    msg.speed = 0.5323832803999335;
    msg.speed_units = 37U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7944355753090975;
    tmp_msg_0.y = 0.5137551270982927;
    tmp_msg_0.z = 0.7367422484403242;
    tmp_msg_0.t = 0.6557347933130623;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5468427619006851;
    msg.custom.assign("QCNZKWJHGURMBKNXJEJQSKCYIEDCQFHGULXSPNODPYJRVTOKMZURWUFGGXJSIMKHEMACOYEAPJHRPQHXUIPAZGSMSNEWFAZRFAFQYKBRPVVHWVZTOBOACWHZCXQFKJCKUQIFIQRYLXCQFZMVBLLNEEOKPAVILTRDBWYGAYHVMIELITJBRMYCZJNXEHSXOYADNWLGNOWUUBPVFUDVBULSCPTSIDSTMWBRTDOTZJLQZBGTN");

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
    msg.setTimeStamp(0.6334060337745707);
    msg.setSource(12697U);
    msg.setSourceEntity(179U);
    msg.setDestination(51552U);
    msg.setDestinationEntity(207U);
    msg.vid = 56828U;
    msg.off_x = 0.010650633625889583;
    msg.off_y = 0.021927689184416788;
    msg.off_z = 0.27031849430775723;

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
    msg.setTimeStamp(0.43601969278227803);
    msg.setSource(59329U);
    msg.setSourceEntity(214U);
    msg.setDestination(59113U);
    msg.setDestinationEntity(133U);
    msg.vid = 25115U;
    msg.off_x = 0.8583583670854331;
    msg.off_y = 0.9017749673511137;
    msg.off_z = 0.04908084053753636;

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
    msg.setTimeStamp(0.0326390025327149);
    msg.setSource(64936U);
    msg.setSourceEntity(106U);
    msg.setDestination(65159U);
    msg.setDestinationEntity(42U);
    msg.vid = 5161U;
    msg.off_x = 0.4415793134226703;
    msg.off_y = 0.06343512651444505;
    msg.off_z = 0.5258420384260197;

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
    msg.setTimeStamp(0.5712383828917221);
    msg.setSource(19649U);
    msg.setSourceEntity(227U);
    msg.setDestination(2034U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.43945794400105687);
    msg.setSource(23182U);
    msg.setSourceEntity(86U);
    msg.setDestination(36336U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.8434837186970531);
    msg.setSource(1984U);
    msg.setSourceEntity(205U);
    msg.setDestination(64713U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.9846938108519759);
    msg.setSource(58537U);
    msg.setSourceEntity(67U);
    msg.setDestination(5843U);
    msg.setDestinationEntity(203U);
    msg.mid = 49731U;

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
    msg.setTimeStamp(0.7809272244502441);
    msg.setSource(65423U);
    msg.setSourceEntity(245U);
    msg.setDestination(977U);
    msg.setDestinationEntity(38U);
    msg.mid = 27239U;

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
    msg.setTimeStamp(0.35859264429262394);
    msg.setSource(58329U);
    msg.setSourceEntity(222U);
    msg.setDestination(30495U);
    msg.setDestinationEntity(233U);
    msg.mid = 49425U;

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
    msg.setTimeStamp(0.044923076413853735);
    msg.setSource(20363U);
    msg.setSourceEntity(219U);
    msg.setDestination(21266U);
    msg.setDestinationEntity(195U);
    msg.state = 218U;
    msg.eta = 57723U;
    msg.info.assign("XFMYCBSDDOTTOYMURKRBUSMCGQLWDKAXRURMINOFFIAPFMBVVFPJQEWWGJOJIEWRCIVZIEEEZGOYXTHNQTVYXGTHWVUABKDGLCNDUELSAIQRLJIUCZIVBPKVZEDMQMPQWODMTTFLPUJHIBOANKVANPXHEGYGER");

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
    msg.setTimeStamp(0.651276427990928);
    msg.setSource(24587U);
    msg.setSourceEntity(122U);
    msg.setDestination(19118U);
    msg.setDestinationEntity(61U);
    msg.state = 236U;
    msg.eta = 28142U;
    msg.info.assign("ZGETYBGOOGLLKDYQXRMQVBUFFJGXQFZSIKRQFCLZWXUPDLVMMUVLZQXWQRTSUKDNMOAHGHCNTWQSHEEGRIOUIKJEAHDTKNPYFJEWYMEYEHSUTAGDVHMHLLPYIFQSISXRINOGCVMXLAXDTVIGA");

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
    msg.setTimeStamp(0.6225248902784583);
    msg.setSource(13094U);
    msg.setSourceEntity(81U);
    msg.setDestination(62093U);
    msg.setDestinationEntity(83U);
    msg.state = 104U;
    msg.eta = 12954U;
    msg.info.assign("IWODCKPMFDTQKNTJNUSOPYPIPBAHYWKGRSPVQICWLMTJYDPWXHESYFEEZZQQRJOVOSLKTEAFLUVUNSALOVQCBVBAYVIATLYDWEHNBIKGRXTXRQUUFMRFNKKUNRMXUDHTBHQNRJMFQLGKZYWYVSZZQKAAWNGPEUNOKXLEJEDOWMVCDCSBZZOUMMWBGSCBACZUGRGOHDCIRYXMIDJWNIZLZGGPXFBMEAHXILBHOTYHXJPTFVFDTACFJEH");

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
    msg.setTimeStamp(0.22403228390564134);
    msg.setSource(15827U);
    msg.setSourceEntity(74U);
    msg.setDestination(8872U);
    msg.setDestinationEntity(66U);
    msg.system = 19443U;
    msg.duration = 45225U;
    msg.speed = 0.5144174513508379;
    msg.speed_units = 63U;
    msg.x = 0.9331282309892436;
    msg.y = 0.27574248316459304;
    msg.z = 0.4472546771943112;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.3230921738001854);
    msg.setSource(62171U);
    msg.setSourceEntity(99U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(0U);
    msg.system = 34463U;
    msg.duration = 59278U;
    msg.speed = 0.4051349260352848;
    msg.speed_units = 244U;
    msg.x = 0.6026641733731415;
    msg.y = 0.9096089784105634;
    msg.z = 0.8282410301218399;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.8130845616817054);
    msg.setSource(50866U);
    msg.setSourceEntity(56U);
    msg.setDestination(55862U);
    msg.setDestinationEntity(109U);
    msg.system = 31322U;
    msg.duration = 59206U;
    msg.speed = 0.9498788285667205;
    msg.speed_units = 148U;
    msg.x = 0.044982688069187815;
    msg.y = 0.9422872465711724;
    msg.z = 0.5606562099760901;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.6761406708844815);
    msg.setSource(22307U);
    msg.setSourceEntity(14U);
    msg.setDestination(9841U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.2957078014357507;
    msg.lon = 0.1222655824659924;
    msg.speed = 0.27188382634423947;
    msg.speed_units = 94U;
    msg.duration = 19463U;
    msg.sys_a = 15085U;
    msg.sys_b = 49107U;
    msg.move_threshold = 0.6619462054651889;

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
    msg.setTimeStamp(0.971512501337189);
    msg.setSource(42678U);
    msg.setSourceEntity(46U);
    msg.setDestination(14425U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.2836297449052996;
    msg.lon = 0.42668310757665795;
    msg.speed = 0.0014944830780794227;
    msg.speed_units = 218U;
    msg.duration = 17869U;
    msg.sys_a = 28305U;
    msg.sys_b = 51832U;
    msg.move_threshold = 0.42717134598105055;

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
    msg.setTimeStamp(0.11209496199800406);
    msg.setSource(29549U);
    msg.setSourceEntity(148U);
    msg.setDestination(389U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.5415703388670207;
    msg.lon = 0.8998930015576219;
    msg.speed = 0.29110983318981676;
    msg.speed_units = 238U;
    msg.duration = 17123U;
    msg.sys_a = 14621U;
    msg.sys_b = 47096U;
    msg.move_threshold = 0.0750919099915145;

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
    msg.setTimeStamp(0.7681239117930551);
    msg.setSource(50723U);
    msg.setSourceEntity(50U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.3647610000103729;
    msg.lon = 0.5917454415224853;
    msg.z = 0.39746944210897717;
    msg.z_units = 111U;
    msg.speed = 0.6815361664892031;
    msg.speed_units = 58U;
    msg.custom.assign("QZFGWFIARLWMYSZQTOGMLVNDUQLAUGNHRYUFXQBIAQRWRHYVCAOXHXMPUHCPQJWSYKEBWIRYRSQXWXFMGXJTSNQXZKIBIFIZLYTYVIENEOOODJXCSTMVJUHJKDTWJWNAKDCEVHVZUIBEGURABSXAKVZZJCDPKMQPRMEBWDGGKSFBONDFOQHVSLHJPLJTNPYUPLKUBORGFPBOZCCEMLRVCHTDZ");

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
    msg.setTimeStamp(0.8835554782228272);
    msg.setSource(38872U);
    msg.setSourceEntity(192U);
    msg.setDestination(1920U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.7356749250724256;
    msg.lon = 0.20460460617942;
    msg.z = 0.9424993130960679;
    msg.z_units = 159U;
    msg.speed = 0.2817157503527834;
    msg.speed_units = 80U;
    msg.custom.assign("UQHYRGKWQGUORMPSJIWTKYMFRBAPSQCQIEBQAWNHJDONFVSKXZXLTHNZMDGSZEASXBJJHXZXKPCKAXKESEFHVILCBLDIUWFHHNAXDYIJQAPBVDLLNGWDWEOLYTRGCNHX");

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
    msg.setTimeStamp(0.8730480857441509);
    msg.setSource(54684U);
    msg.setSourceEntity(135U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.6632391457337726;
    msg.lon = 0.3958247534273166;
    msg.z = 0.25577017497541266;
    msg.z_units = 142U;
    msg.speed = 0.18442913862473453;
    msg.speed_units = 168U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.281051537854756;
    tmp_msg_0.lon = 0.4363813603847587;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VZULCTTEVKQONLLWITSGKZIVNFHYMTMNKMGGXPUFKLPHERWEBNUXHCNCMUJGDMLGTTXYWNDKJSDPTFEFEXHHI");

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
    msg.setTimeStamp(0.7566592348840026);
    msg.setSource(24768U);
    msg.setSourceEntity(14U);
    msg.setDestination(55665U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.7199174690331143;
    msg.lon = 0.36007446605674887;

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
    msg.setTimeStamp(0.18018907649135918);
    msg.setSource(42942U);
    msg.setSourceEntity(212U);
    msg.setDestination(17616U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.3845136976342074;
    msg.lon = 0.7788694139914455;

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
    msg.setTimeStamp(0.4767699829612273);
    msg.setSource(61619U);
    msg.setSourceEntity(52U);
    msg.setDestination(30413U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.5799308302384308;
    msg.lon = 0.555477731746777;

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
    msg.setTimeStamp(0.7322938622101917);
    msg.setSource(48701U);
    msg.setSourceEntity(23U);
    msg.setDestination(5601U);
    msg.setDestinationEntity(212U);
    msg.timeout = 38285U;
    msg.lat = 0.12363263483247433;
    msg.lon = 0.9538157007264154;
    msg.z = 0.8517305545577386;
    msg.z_units = 18U;
    msg.pitch = 0.3302103388321398;
    msg.amplitude = 0.850076205999896;
    msg.duration = 9077U;
    msg.speed = 0.07657536814572752;
    msg.speed_units = 19U;
    msg.radius = 0.6331843727369953;
    msg.direction = 158U;
    msg.custom.assign("QCMBUFFPSHSRPOZJWNPCIOXBHDTJXTHXAMCMDPNEISAFWWMTPJVQBRDJOJFTENBCDSTKULRGMNESCHSKLOEMVJNYHDEAJKXDGLXVAIZXEFXOZPRLRQQQOGWWKQKKVKQGZMNJLCIQHSIVBJLSGQDYYYYZUJQFFYPLMZBOBZVWAREOCVYDFZIMZUEPPTHGYGXNAIDRWURUACTMIDTOAKUXBNORLNUHLTVXCWTEIYEGKGWUILVGFSUZABHPKAR");

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
    msg.setTimeStamp(0.30600269732235796);
    msg.setSource(30055U);
    msg.setSourceEntity(53U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(229U);
    msg.timeout = 5978U;
    msg.lat = 0.44724782195342805;
    msg.lon = 0.884884468642366;
    msg.z = 0.9275984757160132;
    msg.z_units = 220U;
    msg.pitch = 0.09614631429140075;
    msg.amplitude = 0.8851943394639534;
    msg.duration = 57878U;
    msg.speed = 0.15450119275014795;
    msg.speed_units = 190U;
    msg.radius = 0.8960551517639285;
    msg.direction = 98U;
    msg.custom.assign("VTPFKFIEFBTYZSOMOFCYOYDXFXMGVQDNPACWWXEHFSIVHVJUAUTEEKPHRXLLZUBSTJJGVSFUTJWEUHIBDPBOWLSQAJZYXTMBAAMOCHIQZBDHXWRGJZTAPPNYJOEQ");

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
    msg.setTimeStamp(0.9593420453577067);
    msg.setSource(23487U);
    msg.setSourceEntity(130U);
    msg.setDestination(51925U);
    msg.setDestinationEntity(81U);
    msg.timeout = 30245U;
    msg.lat = 0.09169567109337806;
    msg.lon = 0.1397779854336968;
    msg.z = 0.49675895222371014;
    msg.z_units = 88U;
    msg.pitch = 0.20702222343093613;
    msg.amplitude = 0.2732419819617935;
    msg.duration = 35882U;
    msg.speed = 0.6813397686313661;
    msg.speed_units = 188U;
    msg.radius = 0.7921753494306103;
    msg.direction = 175U;
    msg.custom.assign("RQJIYEWHWXVDQLRLHYLGPXZPIKQDTRLNYXHBPKMRUYWYEAAVDNAJPTFTDTUJEFXYMEVMIDXWTFTIPIOSYMDHCAPFNTMABQZDUYUNRCCUSHOJQHRZZJREDUIPCRENGSZKMAVBLBXTFZLKQKVNQSVDCBPVQFLFXMRCSQBUKJWUXYWBVFABCSDHZILTLKNJSFGBOGUJMYEOAFGWJCXGSZNWJPGAHTKAGMQIBKHKOXEENME");

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
    msg.setTimeStamp(0.5404214088421402);
    msg.setSource(37860U);
    msg.setSourceEntity(217U);
    msg.setDestination(17308U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("JALQYVWUXMNDAZKSHEMGCUIFMOCFXWRLQPQRYRYYFZHIGNFZOTWWHQLDUCAONDSTLDWNCTUKCSQTGLTIYTXEMBJTUEVOIAPTHSJYEEXDDGJUDRPBWRXLEUDPPKPFNEICPRFQJQTXMUBFQSVLHYIVBMXMVXVQMNAXROVBGIRSZPVZPHJNHKI");
    msg.reference_frame = 140U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18204U;
    tmp_msg_0.off_x = 0.19571716180768106;
    tmp_msg_0.off_y = 0.30365720107521366;
    tmp_msg_0.off_z = 0.14336734868108159;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CECLTYRPWUGFMQGEJPERXDPEXGRHZPUONALAFIMWAQUCRUWIONJOTFRVVIJHQVRMJJYFKVNEYXUBCWZZLOPGRNPEIMFTESSHHCHIQIYAORNMVGKIYHUXKSSYLVPELQMJWNTXKOWWHVAHNIYSBZAFTQQDGNXSLVTIASG");

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
    msg.setTimeStamp(0.6172363049416787);
    msg.setSource(5631U);
    msg.setSourceEntity(132U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(228U);
    msg.formation_name.assign("GRMHXIRPEOTPAQTIDFOEUVJBGXROKXZLPEMQMYDJQXXITYROZVNHLKRQAPBVEAYCYODVJFPMKTXGWYIBONEFLAAFVJUFAMHIYRWDBPMPQFHPWKZVTBWXLGBULMNUYCDCSFQKJALOYHBNKAGCFDLAKSWUWHBFEJKSIUYJPCSFTESCTEDUGBZUNHDZ");
    msg.reference_frame = 155U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9737U;
    tmp_msg_0.off_x = 0.35936331126097676;
    tmp_msg_0.off_y = 0.23980977446215268;
    tmp_msg_0.off_z = 0.6700048639816047;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OJIBWTYFONZDOQNHFUQCAUSLSSDCXYQYYJTWYHXGHDSVZFCZYNIPHKAPYGOGUIDRVNPULTRFPERRJLWXRPCHIKPYCLWEHMIVOLZITVBLZUPXJJMSJFCSSKCEDNQNTGKOEFYBTSBPMAQLNEIDZMNRVWONKLWHMGDAEJATUMGVKXEXPAROHIABHXVKBCWEVCUFDSTCTEWM");

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
    msg.setTimeStamp(0.7224163364188944);
    msg.setSource(33319U);
    msg.setSourceEntity(244U);
    msg.setDestination(37357U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("QUXTHJMFQRJRIYRDSQLTYWJKPBAYAGEVPSTUZOUETXNPNLIGNIVPVHQQNSZXCZMZFZKWOWIZGDDNBBHSMRPYDMJIAJHQINXLZKSTGQTJYWPDMDKNPKIHYSXOWANNYHEZSGMLMLEJKBXZWEKBRHYRGCATCIWQMFRCDHFKUOBXOXUPCLJABVSGEBVLEAJEVWRKVFCAEFIRMGTBCEOIPKQBQOXXLOFFDRUGCYHA");
    msg.reference_frame = 144U;
    msg.custom.assign("VRLHYXLJCXASHQMCCBSGDJTDTGTBHIEPDBWPXNUMJGWJQAEINNBJYUHSMGPXLHGAIVORANIZGWIJFNYHWN");

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
    msg.setTimeStamp(0.15649333015694322);
    msg.setSource(64528U);
    msg.setSourceEntity(150U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("SQFSOUHTKTUJXSPXDLJXRXFDBPIMOGDTOVKVSRWXQZQXYQJVFFYGWPUCLBDBSDVUQIYYQVYGUVTQNPETPOMNGHHHQCWIULBEMNDKWVZZZULZRKMSONJQAFCTNETHRGWTAREYLVIOICKCBDJURBZCFCNHWTXELHKGJLYFKOWFPYARASGMCAIHZBMHD");
    msg.formation_name.assign("KXIPQGXCJEOBVEJLAHGIJSGBMOIOLWNONVTVJCKABOXHHCJVPGRZVJJIDMNOWTPKCRAEWKDKSDYPZAMSBXDVAHMYFPSUTWVCXHMQFFTLPLUDLMQXWSBQQUPSGRYYCFZDCBLFLNUGVYEHVACXCBAYBKOSFNYYRZXGXDPGNHKMQFVBPIRZNSHIRMMUAWQTTZRULDLZHUZKSPRILZQOAJNFWRWGMOFWENSKBTOJKEEUFCTYQZIIIDEDWTNXEGHQU");
    msg.plan_id.assign("NCAUWRTWMTLCFGEIWJYXEOGISAANOYAQDLCFFCEQDGDUNXIGOGIKEHBIJFEYKPRBJLFZCPAVCXJAVZRTLRYEBIOBVXUTDOLCFRFHRZQWBNSUPAKONMKPZDEXWNERKCNXGVKBYEBUXWVLTXGFJOTEQYVHIQZRKOHMZJGHJPDTXVBSGGSJZMMHZDBFVXTUNSIFCIHYSQJLCYQDYWDIUQLTANPKDZMPSWMSWPWZUULQYRHMKLVMPUVHABH");
    msg.description.assign("PPQIILRTAFHDSIWCWAVFFQTVHJSQAEMXSPFNMRQHGTBHINYXPYGTZKTRJOZIGVKCEFEGDDLPNZDDXRYMKYZUNBUKZSPWHWLKKJLAEXNXXOQYPOTJGDEOZJKGJVAMGMMYBSOVUTEFNSACLBESWRACCWDLIHKZFAJYSRWFNXCFCJRODDVMTCWYKPVAMZNCBUVEZKLIBULUGBZTMQBUILAXUVSOGOMWYJOUHFJPYXRNHRQQOUBHILHENRGPDQWC");
    msg.leader_speed = 0.6612228119113774;
    msg.leader_bank_lim = 0.2778069547307557;
    msg.pos_sim_err_lim = 0.5271025235584448;
    msg.pos_sim_err_wrn = 0.7537515786751724;
    msg.pos_sim_err_timeout = 64718U;
    msg.converg_max = 0.22212202408816029;
    msg.converg_timeout = 36798U;
    msg.comms_timeout = 6745U;
    msg.turb_lim = 0.5083073242625633;
    msg.custom.assign("DVHXMYYPGDRZONCYUQSXOZOPHHOBPXFMGLWXHLMZGRPALXGLHG");

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
    msg.setTimeStamp(0.9596104403299069);
    msg.setSource(30116U);
    msg.setSourceEntity(87U);
    msg.setDestination(8522U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("TUSKNBITDANWMKXVTZJUQUTMBYUUKCGLWNFQICDRKVMOEBOOZMWZGHNUADFWPZUBXNFFEEFJMXLSQQMLDHWJTAAMPPLGGRNGPTESQPSBOUIKEDMRFYQNYBXNRHCSOPCOIDYROQDKPVRVHYQKYPXYCH");
    msg.formation_name.assign("WLEYEGSUQUCCUTMWZENIFNHIWOGJDWJTGGKNXEAPWNDAPDGDXUQWRCXHTHHLEDUKDPVNQALCVNSXYDRHFYEFIOBMVMBONYSXSFZRPAWUBCVMMFKZFKBT");
    msg.plan_id.assign("RBPMLAOSRGONVPHJIZGLICZFSCSICORKXBONGCTPAZVJFRWXCIKEFGYZGQTBNHTLYPBYQOKJRPATLQJGBIWGYPSMXCORNSNLURYDPGODIVMWQWYBMNELQHUMTUYNHETQWFISIMCXPVNKWVSICB");
    msg.description.assign("HUSAMYIGJZBWGKSYVWHTDBJCTTDWOPGSYPVBDXSLYFNSLCLBBXGGUOP");
    msg.leader_speed = 0.08406619663792225;
    msg.leader_bank_lim = 0.9966379456592236;
    msg.pos_sim_err_lim = 0.1389752093142218;
    msg.pos_sim_err_wrn = 0.2729852697494134;
    msg.pos_sim_err_timeout = 6331U;
    msg.converg_max = 0.3120814647492166;
    msg.converg_timeout = 3279U;
    msg.comms_timeout = 23485U;
    msg.turb_lim = 0.880048698574072;
    msg.custom.assign("WIEZPHYXRQLPRDCZRCYHVVWIPFBGKRQIVWOTTLMYBWAZVKTJMDVGDILKECRRFAXSLRJPECNTV");

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
    msg.setTimeStamp(0.3807147219402759);
    msg.setSource(22015U);
    msg.setSourceEntity(8U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("SDDROYOGRMSHJRDNHCAAAOGHTASJSQQEUXLWQJYWAJEDHDKOIXMSEJPZFRMBWOHBGCLBTDFPYMSEKYZMZZXQVKYTPPECKJTUCXYWNBFZNCNLIJLHFIGOBVSHIJEGXIMZDAKFMVLEUUJLOQVBUEUOIGDSRFCLHGLYNTSKWYJAWXVCINUORVKNBZEFUGCFXPBQQCPFNVKMHPGFWBUTCU");
    msg.formation_name.assign("DCHJLBECQAXAZKYKQXDEVXONKVTYGWYXXVEHKLYHDYIQUPPSHIGROBCUCSKQMILZAKBNLPNSWUFURFTZFWGPMUWBWFAALBGEFRDJCDDTCTJKRMFMEELUMSMENNAHNWYHASVST");
    msg.plan_id.assign("NQOAFBGIOHHFETGPDYUVGZOKRAXRRPXMQHIUCDGCFKOVODWQCCI");
    msg.description.assign("UOSTAJUMJEKGIVRCQWFBYWKPZFNMXWXYEDVHPDPFRVYGCTQBIOHLOPMVBAGJUBHBTQMERZMYJIWGGXFXFNMNHPEYBVNOLEWPLJAXOZXQTIPNCVBD");
    msg.leader_speed = 0.6380293529099903;
    msg.leader_bank_lim = 0.2154978321775718;
    msg.pos_sim_err_lim = 0.05186087188159805;
    msg.pos_sim_err_wrn = 0.8634247024791293;
    msg.pos_sim_err_timeout = 59399U;
    msg.converg_max = 0.8466511121378096;
    msg.converg_timeout = 8261U;
    msg.comms_timeout = 9261U;
    msg.turb_lim = 0.17349431486595823;
    msg.custom.assign("ZRIMJGEEOTJVTAGANBMKOWUEMNGYTPJJPCMAUFXEZEQWUPKLFIWMFWDOXNOVUWDNLEKFLSOWYCIEAADHMBCSKIYJZLVQHPQMTSUOXXNRIVVTDDGRVXTTLSJUYBMRLEKZTBARBVQKXGIRRHFKWSNELVUQDNGTXPABHBVLTQHJVKZYZPYHHYEBRBRYOAGYDHUQCJGNDHRZPOCFPFUKXNDZLISXCUIGFJFCDOQSXSZOGWFKBIYQJCWIPAHC");

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
    msg.setTimeStamp(0.12102840442152885);
    msg.setSource(46112U);
    msg.setSourceEntity(30U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(140U);
    msg.control_src = 65231U;
    msg.control_ent = 157U;
    msg.timeout = 0.3043948770056426;
    msg.loiter_radius = 0.1159164473139569;
    msg.altitude_interval = 0.2123370611576434;

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
    msg.setTimeStamp(0.5678138462835727);
    msg.setSource(27105U);
    msg.setSourceEntity(32U);
    msg.setDestination(18490U);
    msg.setDestinationEntity(61U);
    msg.control_src = 4208U;
    msg.control_ent = 110U;
    msg.timeout = 0.37099724366438036;
    msg.loiter_radius = 0.11675323402655091;
    msg.altitude_interval = 0.7184920277993262;

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
    msg.setTimeStamp(0.7290133154138999);
    msg.setSource(6586U);
    msg.setSourceEntity(76U);
    msg.setDestination(63286U);
    msg.setDestinationEntity(44U);
    msg.control_src = 11747U;
    msg.control_ent = 7U;
    msg.timeout = 0.0524542852723926;
    msg.loiter_radius = 0.5064109518653483;
    msg.altitude_interval = 0.8385648452715836;

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
    msg.setTimeStamp(0.6752394788473012);
    msg.setSource(10630U);
    msg.setSourceEntity(153U);
    msg.setDestination(32497U);
    msg.setDestinationEntity(99U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8468100462240828;
    tmp_msg_0.speed_units = 120U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4303141366960993;
    tmp_msg_1.z_units = 86U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.724661460252594;
    msg.lon = 0.06151866506907688;
    msg.radius = 0.9233097525623497;

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
    msg.setTimeStamp(0.41513203518903696);
    msg.setSource(65485U);
    msg.setSourceEntity(251U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(138U);
    msg.flags = 203U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7343117974381459;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.578669888723355;
    tmp_msg_1.z_units = 118U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.46698182253860854;
    msg.lon = 0.8362529814141213;
    msg.radius = 0.7621106196099706;

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
    msg.setTimeStamp(0.15388043387548078);
    msg.setSource(44248U);
    msg.setSourceEntity(68U);
    msg.setDestination(58297U);
    msg.setDestinationEntity(131U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8709616282587758;
    tmp_msg_0.speed_units = 107U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4451989766101597;
    tmp_msg_1.z_units = 216U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9315941021754872;
    msg.lon = 0.35064584437454027;
    msg.radius = 0.8271458907642995;

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
    msg.setTimeStamp(0.4384747849517169);
    msg.setSource(56418U);
    msg.setSourceEntity(88U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(195U);
    msg.control_src = 31933U;
    msg.control_ent = 55U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 51U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8496070422530746;
    tmp_tmp_msg_0_0.speed_units = 53U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3440707567554002;
    tmp_tmp_msg_0_1.z_units = 35U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5953532105284856;
    tmp_msg_0.lon = 0.05779604488091916;
    tmp_msg_0.radius = 0.7810825577229925;
    msg.reference.set(tmp_msg_0);
    msg.state = 174U;
    msg.proximity = 53U;

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
    msg.setTimeStamp(0.5592075621070912);
    msg.setSource(17539U);
    msg.setSourceEntity(116U);
    msg.setDestination(2723U);
    msg.setDestinationEntity(152U);
    msg.control_src = 38530U;
    msg.control_ent = 67U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 235U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1324003032064328;
    tmp_tmp_msg_0_0.speed_units = 232U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.23168874218657898;
    tmp_tmp_msg_0_1.z_units = 191U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3226914757146174;
    tmp_msg_0.lon = 0.6828668638870471;
    tmp_msg_0.radius = 0.3671553775129177;
    msg.reference.set(tmp_msg_0);
    msg.state = 157U;
    msg.proximity = 24U;

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
    msg.setTimeStamp(0.5281858517902008);
    msg.setSource(42855U);
    msg.setSourceEntity(119U);
    msg.setDestination(60438U);
    msg.setDestinationEntity(218U);
    msg.control_src = 62192U;
    msg.control_ent = 110U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 211U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.781559863528121;
    tmp_tmp_msg_0_0.speed_units = 68U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.33191292829981356;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.054754850743261474;
    tmp_msg_0.lon = 0.05946736286360754;
    tmp_msg_0.radius = 0.45589485363369164;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 24U;

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
    msg.setTimeStamp(0.896840394730951);
    msg.setSource(11344U);
    msg.setSourceEntity(15U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(228U);
    msg.ax_cmd = 0.16890859517080414;
    msg.ay_cmd = 0.12518494281138604;
    msg.az_cmd = 0.9592614109765946;
    msg.ax_des = 0.8323550629088535;
    msg.ay_des = 0.4098969862251458;
    msg.az_des = 0.14305163255267095;
    msg.virt_err_x = 0.4020142523426249;
    msg.virt_err_y = 0.5653856800972653;
    msg.virt_err_z = 0.7098276741664268;
    msg.surf_fdbk_x = 0.2796040428177634;
    msg.surf_fdbk_y = 0.12522043336472466;
    msg.surf_fdbk_z = 0.754336355540236;
    msg.surf_unkn_x = 0.9384578258286645;
    msg.surf_unkn_y = 0.4854804910147783;
    msg.surf_unkn_z = 0.2998962427132772;
    msg.ss_x = 0.1348079754887116;
    msg.ss_y = 0.8536370040963877;
    msg.ss_z = 0.4277123276143472;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JMDBCELTIRRQMBKAPOAVONPUXRVPKZOMUWTJOYQMDFGOJSOVPKWVFZQAUBUGMJRKEVNQIRBETHAIZBRCGYKLXQXSWIFPDHNZSWHXURWQWEHREZHVGDSKPVSPUNDGCTUNBCTDSIMZYIEKNWQYXCUFENSLGPBGGQDULYHAZKQAQIXMCAEYNHCSJOIOWJTJLBDTHZOBYCXRCMFBLFVYCOXL");
    tmp_msg_0.dist = 0.27311018251535457;
    tmp_msg_0.err = 0.5108798328201002;
    tmp_msg_0.ctrl_imp = 0.05163427570257384;
    tmp_msg_0.rel_dir_x = 0.07495373080678491;
    tmp_msg_0.rel_dir_y = 0.04511401610092347;
    tmp_msg_0.rel_dir_z = 0.7461571827307297;
    tmp_msg_0.err_x = 0.7264570846075582;
    tmp_msg_0.err_y = 0.11299365617737589;
    tmp_msg_0.err_z = 0.7403787296720559;
    tmp_msg_0.rf_err_x = 0.14307821221492412;
    tmp_msg_0.rf_err_y = 0.5927265179519445;
    tmp_msg_0.rf_err_z = 0.24240246946726762;
    tmp_msg_0.rf_err_vx = 0.05608343712175634;
    tmp_msg_0.rf_err_vy = 0.7855437322254252;
    tmp_msg_0.rf_err_vz = 0.34810593790699274;
    tmp_msg_0.ss_x = 0.866823597098483;
    tmp_msg_0.ss_y = 0.355744343911508;
    tmp_msg_0.ss_z = 0.27770791413354856;
    tmp_msg_0.virt_err_x = 0.5763394646189237;
    tmp_msg_0.virt_err_y = 0.3924528699398744;
    tmp_msg_0.virt_err_z = 0.36970972638653754;
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
    msg.setTimeStamp(0.31703590548850324);
    msg.setSource(54632U);
    msg.setSourceEntity(234U);
    msg.setDestination(8702U);
    msg.setDestinationEntity(204U);
    msg.ax_cmd = 0.4085585352452614;
    msg.ay_cmd = 0.4317552921937524;
    msg.az_cmd = 0.6342989492840063;
    msg.ax_des = 0.8026034509908597;
    msg.ay_des = 0.9401101084150131;
    msg.az_des = 0.9229208948880975;
    msg.virt_err_x = 0.3219186958279029;
    msg.virt_err_y = 0.5907648400092692;
    msg.virt_err_z = 0.6385123823426984;
    msg.surf_fdbk_x = 0.4681565075530735;
    msg.surf_fdbk_y = 0.07612078210416351;
    msg.surf_fdbk_z = 0.5013165315051324;
    msg.surf_unkn_x = 0.9553326851264212;
    msg.surf_unkn_y = 0.2918715149509782;
    msg.surf_unkn_z = 0.26917970851551654;
    msg.ss_x = 0.17567711253015061;
    msg.ss_y = 0.2096944276455628;
    msg.ss_z = 0.7308336268315778;

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
    msg.setTimeStamp(0.69776067497395);
    msg.setSource(20110U);
    msg.setSourceEntity(214U);
    msg.setDestination(31437U);
    msg.setDestinationEntity(10U);
    msg.ax_cmd = 0.47605634596280044;
    msg.ay_cmd = 0.6237453658129312;
    msg.az_cmd = 0.7978407036182543;
    msg.ax_des = 0.025531967259330712;
    msg.ay_des = 0.7736913100458658;
    msg.az_des = 0.7071026651828712;
    msg.virt_err_x = 0.12909849919053773;
    msg.virt_err_y = 0.9742006623926996;
    msg.virt_err_z = 0.8299478633515458;
    msg.surf_fdbk_x = 0.7172971905519185;
    msg.surf_fdbk_y = 0.03498986529251369;
    msg.surf_fdbk_z = 0.30150556669788575;
    msg.surf_unkn_x = 0.07161730454163606;
    msg.surf_unkn_y = 0.4244668024828454;
    msg.surf_unkn_z = 0.5633705863020965;
    msg.ss_x = 0.6929594183437704;
    msg.ss_y = 0.8331190121629578;
    msg.ss_z = 0.7074192672043021;

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
    msg.setTimeStamp(0.37510573490729826);
    msg.setSource(8694U);
    msg.setSourceEntity(164U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("QZNBPYOTWCFKFZMEUVNWPFBQPAVKTPUHRJXFKHRKHILRFLJDGUJSKHLFZWBPNIQQGCAHXREECGMIWJPCDDETQMSB");
    msg.dist = 0.820621144501126;
    msg.err = 0.9088209065365729;
    msg.ctrl_imp = 0.159714578545187;
    msg.rel_dir_x = 0.4110477199722965;
    msg.rel_dir_y = 0.6411875123510379;
    msg.rel_dir_z = 0.53730056033435;
    msg.err_x = 0.6638313885665318;
    msg.err_y = 0.6636357144179258;
    msg.err_z = 0.4639486971446177;
    msg.rf_err_x = 0.8718419476308437;
    msg.rf_err_y = 0.21548837674140764;
    msg.rf_err_z = 0.9116093374825365;
    msg.rf_err_vx = 0.8010016344671339;
    msg.rf_err_vy = 0.16520941307693005;
    msg.rf_err_vz = 0.19863277001365165;
    msg.ss_x = 0.718191262272959;
    msg.ss_y = 0.2949653835857444;
    msg.ss_z = 0.25867779550679215;
    msg.virt_err_x = 0.5635295282762096;
    msg.virt_err_y = 0.8420578250257283;
    msg.virt_err_z = 0.04756222190647119;

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
    msg.setTimeStamp(0.8563844795510968);
    msg.setSource(50953U);
    msg.setSourceEntity(193U);
    msg.setDestination(35887U);
    msg.setDestinationEntity(117U);
    msg.s_id.assign("ZEJOCDAGALFSBCDVLAMIEFMKJ");
    msg.dist = 0.4063625310722855;
    msg.err = 0.614600732412318;
    msg.ctrl_imp = 0.8704121655204965;
    msg.rel_dir_x = 0.12139080577363615;
    msg.rel_dir_y = 0.28527365969686913;
    msg.rel_dir_z = 0.5318877130940773;
    msg.err_x = 0.41268653389669185;
    msg.err_y = 0.7155483702567318;
    msg.err_z = 0.16222970131651493;
    msg.rf_err_x = 0.7846448945388319;
    msg.rf_err_y = 0.3983988846229244;
    msg.rf_err_z = 0.10555741396729956;
    msg.rf_err_vx = 0.16012982123716735;
    msg.rf_err_vy = 0.05086656656921851;
    msg.rf_err_vz = 0.6854774798172603;
    msg.ss_x = 0.35169079842345596;
    msg.ss_y = 0.7671873503057995;
    msg.ss_z = 0.7731003491005982;
    msg.virt_err_x = 0.685269795510462;
    msg.virt_err_y = 0.2086940580248885;
    msg.virt_err_z = 0.805618633381692;

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
    msg.setTimeStamp(0.6701833078264461);
    msg.setSource(63562U);
    msg.setSourceEntity(212U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(82U);
    msg.s_id.assign("JLZWNNFLERINBIEIYPWCQYWZYMBQOYJWOTUAKMHSHSDQFMBRZQITQRPGZZEHHCELLLOSARMKCWUDNSEMUSARDFDYQKXZJVXMCQBTXCGGZXZYVGSMSRPAYXSJYNHFOFRWEKYON");
    msg.dist = 0.6154146256059814;
    msg.err = 0.29202960412518986;
    msg.ctrl_imp = 0.8617248289524553;
    msg.rel_dir_x = 0.32958280649440663;
    msg.rel_dir_y = 0.4950356517945055;
    msg.rel_dir_z = 0.6832060495703789;
    msg.err_x = 0.8062245128853925;
    msg.err_y = 0.055387374638067643;
    msg.err_z = 0.7579280882902073;
    msg.rf_err_x = 0.6498499982082454;
    msg.rf_err_y = 0.41739575812059115;
    msg.rf_err_z = 0.26062523315061126;
    msg.rf_err_vx = 0.8838126792468103;
    msg.rf_err_vy = 0.1523758037813806;
    msg.rf_err_vz = 0.6571438283019583;
    msg.ss_x = 0.8222389743066448;
    msg.ss_y = 0.4896726144602839;
    msg.ss_z = 0.43816886084194595;
    msg.virt_err_x = 0.21118820355275214;
    msg.virt_err_y = 0.9729965186895164;
    msg.virt_err_z = 0.23121546891384626;

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
    msg.setTimeStamp(0.3480639711418896);
    msg.setSource(1557U);
    msg.setSourceEntity(51U);
    msg.setDestination(38822U);
    msg.setDestinationEntity(196U);
    msg.timeout = 37225U;
    msg.rpm = 0.7491189438152894;
    msg.direction = 61U;
    msg.custom.assign("NHCBEKGHZZEWPMFUAEYRAPNLVNWDMRBYDSDJMWXKSCCLBYCEMJXUVQKTAYWXWSBBUYMHLBQVZNGAPVNFQRJUGFAOUDHXBZNRSDDECJZDNSXBDWGQTETIKIXBIMGQAXPAAHQGMJTLUIPODQVGSTJZNHCRHWSYHLCVTTJVWKIYIPIIULLOZXOZCKFULNKJMXUSHFAJVPKUHKEEVQOMZFRRORWT");

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
    msg.setTimeStamp(0.12181113899659468);
    msg.setSource(25591U);
    msg.setSourceEntity(75U);
    msg.setDestination(8384U);
    msg.setDestinationEntity(169U);
    msg.timeout = 6063U;
    msg.rpm = 0.31172312898912413;
    msg.direction = 106U;
    msg.custom.assign("HINHROYBBVOOVKZRWWLKZZCBICCFYKYWJHIEUYAPRN");

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
    msg.setTimeStamp(0.8642810141094407);
    msg.setSource(50216U);
    msg.setSourceEntity(172U);
    msg.setDestination(205U);
    msg.setDestinationEntity(160U);
    msg.timeout = 60254U;
    msg.rpm = 0.21451969950598027;
    msg.direction = 5U;
    msg.custom.assign("NSGUEDSKZKOQTOISOHCZQWAYFOWBZZQEMXVCNTZYQVQWGIASERUTFBDKGVYAGOLIVIVTXVGTDBJMEPXMNQJUIEXRNUUFFKCVPZHGIHVKIJAVUMBEKLFRSNUPDATAWEWEFWXKMNQCTIIXKRHLTRPYXXRLYMMCZWZBFBBKLWQJEJTDRHBKOCFDHZXHYJPBPPLGVNOUMQYPSCJNLXJODTCLUFUQSWIGSZNGDHOMARHPYOJADYDBWGLJCCHSANLSR");

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
    msg.setTimeStamp(0.9293431915662418);
    msg.setSource(12193U);
    msg.setSourceEntity(133U);
    msg.setDestination(34480U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("ZRFOJJSGZPBESOCFGOITXDIMZUHVOXNFHWWGZRTHIMLAJNLACWESMDTMVLMAGAJVFXZAXTSRTMLITYZBBYRJIYHBLAKRXXKZPUHBCQUJKVVFMCQGQPQXLSQNYRVTSLNUDDNWHYGUPNRPSAWHASUEVWEJHLMOWCZQZGTJWOUQYFBOKXIJEIMUTPFCEJQMKNXDNBKDKWFRUYYBQICBLFGPEEIKUPPVXQGY");
    msg.type = 143U;
    msg.op = 45U;
    msg.group_name.assign("PQVDNNTOVXQYHIPVMRKGUUNZHDAEVTCCGEKKNJITMVUYDQJOZXRIAAEFJFSLXODDIGFBCAPKCRXGLHGMYBVFIEMZFISRWRQXIESIKHVGLDXSWRQQQSGNZUXBCWPXMKMKAXJHLBBACATDKRZAAPZUCJHSWNZJFWXYRBQOVMYWWPJIUOHQKCVMSZBMHT");
    msg.plan_id.assign("PGOZJDLJZFARPKUTIERHAPTMQTOKGNLEWNJCODQBIHBSSFAFUGLQXOBDLYSATMCLBHMRZFVWBQPOVXQJQCUMEMAMNLWSUOCIKUFCXJSTFNJNNITEWDVWOSYNRGXVONHEGSJMNZHBESALZEZXPVGSDYIIUCCHTMQUAFHLEJFRAYHPDWOBTLPIUEYHXOPASWQURYCRXPGZRZKTYDEIYKYK");
    msg.description.assign("PPEZJAINMWFEG");
    msg.reference_frame = 230U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7321U;
    tmp_msg_0.off_x = 0.919714750224804;
    tmp_msg_0.off_y = 0.39472805887789386;
    tmp_msg_0.off_z = 0.5316420344863291;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8072606663397317;
    msg.leader_speed_min = 0.6477037879677652;
    msg.leader_speed_max = 0.04653818911012464;
    msg.leader_alt_min = 0.26014118744443804;
    msg.leader_alt_max = 0.644266245397571;
    msg.pos_sim_err_lim = 0.7808696528937723;
    msg.pos_sim_err_wrn = 0.13626035986025087;
    msg.pos_sim_err_timeout = 24977U;
    msg.converg_max = 0.22050995505421112;
    msg.converg_timeout = 21172U;
    msg.comms_timeout = 34473U;
    msg.turb_lim = 0.48511123550557667;
    msg.custom.assign("USSKUSYVOVORJVTOIKLPGWFMJIPTCRBEIFMIFKJPJWTCFNPDJGGJNEKEXDQOGQKKIVSSLANALODDQRLFURMIJVMTMWUBPUAHHZEGETIFEPHFZLLYWQWIDVXXNMCZJPKTVZZVYFKGZWDAVHURKQAQZSWWUXPHFNHNRCATUNHQBAYIHTPNWBJ");

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
    msg.setTimeStamp(0.9119562566762991);
    msg.setSource(6084U);
    msg.setSourceEntity(120U);
    msg.setDestination(38441U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("TKRBRJAPIPEXWPXJTAHGPIEBNBWMUDXIYTCQVSVODEPAWCWVEEGHJKBZBYYFWLNXLGSBVDSKELMKTHXJVOZOQSLDALZFFONOHGBXYJPITEGKMRNZVUUNNWSBMNRHQMUQA");
    msg.type = 188U;
    msg.op = 147U;
    msg.group_name.assign("QKPRTVUFULNXKZFMDNWJODQHJFWAEBAHJWFZVSERKZYXEBDXUGSVNAFIONKHVKBMIRWRLBIXQDYSHEGWTGLMSTUVSXOCPJKEXGBOVRBDYAGQFLRGRYQYZCLQWSACPYOUINLSPHDINFHKCCDATCFNBXRIVGJFIPOAGLQMJZGJEZSUMJEITKHITSUWDECOLYP");
    msg.plan_id.assign("JXIXMOBTWIOAXKKFEVXQMCNEJGWGUKGIZJAYYCQMBWKKGISNFVZGHOUCRMVNNSUHUHJQASTUVFRRWUPRYTFAMPCPRKRSQCLDFFRJQKZXQEGHSOENZCQLHIU");
    msg.description.assign("JXSOYLONLKIVHTEUKDTEPBAQWQCNWPFYCFCAZMITQXWAWSKICUKDWALJSYUFLMGMFTJHABKFRLAIYSXPUPBXZKXVBOBZDQDRBXZCUXPDVHIOPUJTWHQYBYCAAGULZHMZQZFNM");
    msg.reference_frame = 148U;
    msg.leader_bank_lim = 0.5091475166938555;
    msg.leader_speed_min = 0.5251441949883554;
    msg.leader_speed_max = 0.8832262047917281;
    msg.leader_alt_min = 0.6879869840723086;
    msg.leader_alt_max = 0.08925787047826184;
    msg.pos_sim_err_lim = 0.590229305424278;
    msg.pos_sim_err_wrn = 0.9459817320694426;
    msg.pos_sim_err_timeout = 61499U;
    msg.converg_max = 0.2812474057835189;
    msg.converg_timeout = 39481U;
    msg.comms_timeout = 23606U;
    msg.turb_lim = 0.4078864679792552;
    msg.custom.assign("JZBYXBVSOSIGUYUPRODQNVEKFHFAGCAVIUFIQWQACFKKHQPGXRMRAJWTDPTTNMZOMXCDPPXRGILWTRSKDGGPJSPVWCOZECNOZOBQYPNZGZUYXIHMAXOMCLNNBEMRRBLOATYFETZSZKNHJDLTABIEIVAFBWNBFKJLGKVCVENFMEWSWYKMZWTHUOUSDYGHBHELARDHUBXJKPQJJLIZSUMQTLLVCFAWVONQHFUPQCLHSCIDYXEKYMIDGER");

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
    msg.setTimeStamp(0.1261881112620079);
    msg.setSource(46935U);
    msg.setSourceEntity(20U);
    msg.setDestination(34996U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("ZSFOTMZBRGFUHAIDLOZDPJKGMFFIXYKHCUDEKHTAARUIXOTSSLWZXMOFUJATCSSFLHMMJVSEROMGIERZPJMNSERPTKRQIUSSYZDNVVPGGGPXBVMPERQJXNIRWPXYTPAGQCKBKDFPOQBOIJGEEBZYXIZJCOCOMQULVBCTKDRWHDJJCIUVCAQYVAPHVCJWAYYMUQGTDTLLRBHZZKVKVDBLD");
    msg.type = 55U;
    msg.op = 99U;
    msg.group_name.assign("HKFBYIYJRZKMLLPYVKSPQGHNIWUFMWWAEWJFMLOACBYMSUVSKJFAERTWAVXBRAGLWDRLGHCHXRQOWCXPBEEPIAPPJIAOSZJGVWQCJCIKKOLOUCBFGIPEYCZHJSSROGVZCKZMZRQIFQDTXIALBYYQEUUMZ");
    msg.plan_id.assign("ROLNKZCPGUNPZHRXNOHCZYP");
    msg.description.assign("ZKWIANSIQOIKIHCBZYZAPWQKAPVABSJYWHUECOFNZUCEWRLCJRMQUQOYONZTLLNXDRSUGENTWQAXLNRNXQFPGCYLFYQVSMMNNBQBWZUELIFPQWYUN");
    msg.reference_frame = 170U;
    msg.leader_bank_lim = 0.7199511163893401;
    msg.leader_speed_min = 0.876472184006205;
    msg.leader_speed_max = 0.13711674612351576;
    msg.leader_alt_min = 0.9205186778951986;
    msg.leader_alt_max = 0.04141946922591233;
    msg.pos_sim_err_lim = 0.013970416066128699;
    msg.pos_sim_err_wrn = 0.27709321337081116;
    msg.pos_sim_err_timeout = 24689U;
    msg.converg_max = 0.761840414534965;
    msg.converg_timeout = 9625U;
    msg.comms_timeout = 41145U;
    msg.turb_lim = 0.16858856653083087;
    msg.custom.assign("PWOGLLOKUJNWNUTWSGITPZFYCXZ");

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
    msg.setTimeStamp(0.7195012849870887);
    msg.setSource(35101U);
    msg.setSourceEntity(225U);
    msg.setDestination(46627U);
    msg.setDestinationEntity(87U);
    msg.timeout = 62310U;
    msg.lat = 0.8745378956696748;
    msg.lon = 0.6430509615898359;
    msg.z = 0.07546928656476848;
    msg.z_units = 174U;
    msg.speed = 0.2973384685566529;
    msg.speed_units = 173U;
    msg.custom.assign("KAFVZRMPKPTVEZIPMTHAMWTAQEWVHREEULEBMZKIBGOFZZDHSYWDGSUXCIHGJNBYKBATFDWVEDWBNKABYLHFIPP");

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
    msg.setTimeStamp(0.36100920823242644);
    msg.setSource(45012U);
    msg.setSourceEntity(92U);
    msg.setDestination(62286U);
    msg.setDestinationEntity(185U);
    msg.timeout = 21386U;
    msg.lat = 0.2781885150343294;
    msg.lon = 0.12019190882902075;
    msg.z = 0.34312128024847743;
    msg.z_units = 41U;
    msg.speed = 0.6925893816175153;
    msg.speed_units = 79U;
    msg.custom.assign("OHBBSHQRPDFEBCFRYPKKDSTYEVIJMADTXKUPMZAGKMOWGNADNUFS");

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
    msg.setTimeStamp(0.2934682961153462);
    msg.setSource(19469U);
    msg.setSourceEntity(139U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(152U);
    msg.timeout = 59693U;
    msg.lat = 0.4351989124343498;
    msg.lon = 0.843733485551122;
    msg.z = 0.2719061132088131;
    msg.z_units = 126U;
    msg.speed = 0.6982280721239384;
    msg.speed_units = 108U;
    msg.custom.assign("VXYOTYYCBMZOMJUIZAPWSEAQGMRWXFCXDWVOUQDZVOBLDWJFGPWTIGZMTD");

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
    msg.setTimeStamp(0.1983931397332488);
    msg.setSource(53057U);
    msg.setSourceEntity(157U);
    msg.setDestination(33934U);
    msg.setDestinationEntity(213U);
    msg.timeout = 53126U;
    msg.lat = 0.4348314055423441;
    msg.lon = 0.6871408149862833;
    msg.z = 0.4139135151948088;
    msg.z_units = 142U;
    msg.speed = 0.0950399838586693;
    msg.speed_units = 205U;
    msg.custom.assign("XVPFQRIJNIEJLGLUECIWVRSQKWCUUSHLZERLOLUGVSODKDZTQZXYFAB");

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
    msg.setTimeStamp(0.7321198319119983);
    msg.setSource(46456U);
    msg.setSourceEntity(215U);
    msg.setDestination(25130U);
    msg.setDestinationEntity(179U);
    msg.timeout = 27143U;
    msg.lat = 0.5831098371543674;
    msg.lon = 0.27385428178395177;
    msg.z = 0.41594541370289895;
    msg.z_units = 142U;
    msg.speed = 0.9931277072407096;
    msg.speed_units = 4U;
    msg.custom.assign("QKTNIMHMBHNQROQRZZTBGPCAXUKGSAVLYCVMNTNFAOUKLYIPRTFKBUUOIKLASGLVCXVLGGOSTJLDNZBQKSCUIIHCHAJNMQYXEJMHLEIYFVZYUCLAFWSPDMIRPOEOHBXXBFDJDQTECYJFOWSFTDVYXAOKFYEMZPNEG");

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
    msg.setTimeStamp(0.82799491449792);
    msg.setSource(29795U);
    msg.setSourceEntity(63U);
    msg.setDestination(37471U);
    msg.setDestinationEntity(222U);
    msg.timeout = 7296U;
    msg.lat = 0.7022491173457684;
    msg.lon = 0.6137103731531508;
    msg.z = 0.5121145066145101;
    msg.z_units = 224U;
    msg.speed = 0.7984394218464311;
    msg.speed_units = 33U;
    msg.custom.assign("EYOSTOJXCBEAETDUDMDCETKDTOVBXHKNFZSSIZWCKXSIZZMBPIITAYRWLVYKFPHEUFMUWGWXHALEPPVUAPBARDLOEHJFMQYIFXKRBVYINQQFQSPANYHMOMUXFUURXEMLNCYTJOXPNCJBHGLOLSRQPZSKJQX");

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
    msg.setTimeStamp(0.39104633459053073);
    msg.setSource(52101U);
    msg.setSourceEntity(114U);
    msg.setDestination(15285U);
    msg.setDestinationEntity(81U);
    msg.arrival_time = 0.10177012659886198;
    msg.lat = 0.957377383728159;
    msg.lon = 0.9659606823415361;
    msg.z = 0.6359717547821742;
    msg.z_units = 38U;
    msg.travel_z = 0.9643018378863426;
    msg.travel_z_units = 212U;
    msg.delayed = 144U;

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
    msg.setTimeStamp(0.09427281460862802);
    msg.setSource(49997U);
    msg.setSourceEntity(6U);
    msg.setDestination(48757U);
    msg.setDestinationEntity(23U);
    msg.arrival_time = 0.37062800970310605;
    msg.lat = 0.642668319053858;
    msg.lon = 0.6222694661116104;
    msg.z = 0.6844670107149868;
    msg.z_units = 109U;
    msg.travel_z = 0.17454657525874284;
    msg.travel_z_units = 6U;
    msg.delayed = 10U;

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
    msg.setTimeStamp(0.4075286068069074);
    msg.setSource(8816U);
    msg.setSourceEntity(189U);
    msg.setDestination(55045U);
    msg.setDestinationEntity(76U);
    msg.arrival_time = 0.2103355542923896;
    msg.lat = 0.9265989921011899;
    msg.lon = 0.6767205114980007;
    msg.z = 0.039087832133828715;
    msg.z_units = 13U;
    msg.travel_z = 0.5310640041819795;
    msg.travel_z_units = 210U;
    msg.delayed = 214U;

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
    msg.setTimeStamp(0.7450059549763931);
    msg.setSource(6991U);
    msg.setSourceEntity(57U);
    msg.setDestination(51391U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.8628633914616611;
    msg.lon = 0.3574906894918295;
    msg.z = 0.43675375603594013;
    msg.z_units = 88U;
    msg.speed = 0.16702071670164265;
    msg.speed_units = 171U;
    msg.bearing = 0.9593579872246074;
    msg.cross_angle = 0.21521096954766017;
    msg.width = 0.9214056871989278;
    msg.length = 0.33433149283343755;
    msg.coff = 180U;
    msg.angaperture = 0.8463621966868952;
    msg.range = 10515U;
    msg.overlap = 77U;
    msg.flags = 248U;
    msg.custom.assign("JFDSBKCPPFYOWTHZIDOZOUJJGWUPYLTPYZOEUENRYUADLSPTQBGJGSRDIDKBKCPGQVMPCJFQEVXNMJYTRKWBGFOZBRHAMSWLYDFIGIQIBNOYPNLQXRNBADNAELMRCIBZCWMHELWHGQBHRLAQROUEGUEVFQGDJFTAFPEZCRHMDKKIXWZUAULSWTUYSQLYZOMNXIFYIVSCHTATCARVZNKJXAJEQMXMNSWOHSVHSKMIHJXVCDUOFLWBZKXVV");

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
    msg.setTimeStamp(0.3552550169081693);
    msg.setSource(56530U);
    msg.setSourceEntity(65U);
    msg.setDestination(9070U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.5750103805293783;
    msg.lon = 0.2409794854218703;
    msg.z = 0.6435936025246102;
    msg.z_units = 224U;
    msg.speed = 0.9139794509125408;
    msg.speed_units = 74U;
    msg.bearing = 0.1209386060630585;
    msg.cross_angle = 0.7929435862263362;
    msg.width = 0.599668337704565;
    msg.length = 0.7093768495616907;
    msg.coff = 125U;
    msg.angaperture = 0.2898904894831412;
    msg.range = 55936U;
    msg.overlap = 220U;
    msg.flags = 230U;
    msg.custom.assign("NPXTHQVUMLXUMHZIUKIBVKQIJBWAFLNVOKDQEVZWUGGFXSOQADNHABHGLZOTQCKRPDYNKOTLANTTYJGBXPAYNPSVCVSIAJFIEMTMSVKPDBDPNPWUXFXOFI");

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
    msg.setTimeStamp(0.029443220256735403);
    msg.setSource(18708U);
    msg.setSourceEntity(137U);
    msg.setDestination(29726U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.7394606397350748;
    msg.lon = 0.6792956344669138;
    msg.z = 0.49993846467909564;
    msg.z_units = 186U;
    msg.speed = 0.7076153457547275;
    msg.speed_units = 85U;
    msg.bearing = 0.6030413335079658;
    msg.cross_angle = 0.06768570651394301;
    msg.width = 0.7487598258885122;
    msg.length = 0.6477826398038303;
    msg.coff = 75U;
    msg.angaperture = 0.21105301701265755;
    msg.range = 54864U;
    msg.overlap = 75U;
    msg.flags = 56U;
    msg.custom.assign("JYRCNEVYDSGCBQNAGQGMXXVQLBTFRNZJUMLMYCKVMFQRFXICYBB");

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
    msg.setTimeStamp(0.6816101377058368);
    msg.setSource(60647U);
    msg.setSourceEntity(240U);
    msg.setDestination(14631U);
    msg.setDestinationEntity(29U);
    msg.timeout = 1792U;
    msg.lat = 0.1507862728655761;
    msg.lon = 0.4708769043515073;
    msg.z = 0.03832637238104719;
    msg.z_units = 221U;
    msg.speed = 0.38747764250803307;
    msg.speed_units = 176U;
    msg.syringe0 = 153U;
    msg.syringe1 = 254U;
    msg.syringe2 = 62U;
    msg.custom.assign("UGXVNAWZFYDGECUTZSPZVLGDUZPIVNFKUHQABDEZFYXMKMAFRMECZIJTFXYQBKYGHOTOWVSJDRAGTRANVBASEEUCXHXCCQJRH");

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
    msg.setTimeStamp(0.15574270434949644);
    msg.setSource(14737U);
    msg.setSourceEntity(199U);
    msg.setDestination(46804U);
    msg.setDestinationEntity(169U);
    msg.timeout = 46201U;
    msg.lat = 0.20040752701515163;
    msg.lon = 0.2790233010794595;
    msg.z = 0.15701158319632635;
    msg.z_units = 85U;
    msg.speed = 0.9140985388445384;
    msg.speed_units = 173U;
    msg.syringe0 = 102U;
    msg.syringe1 = 59U;
    msg.syringe2 = 180U;
    msg.custom.assign("KFONYLRZBMHJLXXGCLMMIMZJQMUETSJQHGPYDGWPTZLDHCJEOMGCIQOLBUWJIIMHESDXEWEPOIJPRSEXERFAVOPEVQDYHACNVKRRDYXBBVYAIHFOBRTUARBBZZCTZQSWIPGGLFYKTZNRYCQKEXFANIKOFGSDSWAAWWKWQCUMJNNUOSGHFSS");

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
    msg.setTimeStamp(0.0415400766518117);
    msg.setSource(7088U);
    msg.setSourceEntity(113U);
    msg.setDestination(6402U);
    msg.setDestinationEntity(66U);
    msg.timeout = 16397U;
    msg.lat = 0.7147624413922545;
    msg.lon = 0.8156052294949538;
    msg.z = 0.7704335174102551;
    msg.z_units = 166U;
    msg.speed = 0.8962339952225576;
    msg.speed_units = 14U;
    msg.syringe0 = 97U;
    msg.syringe1 = 61U;
    msg.syringe2 = 23U;
    msg.custom.assign("YGLZYISLRVQXDDUDBJCACYVWTLZKUXGQRLLZTOWXXAMFMTUNXZIUREZSCKBCDCDURKDNDHSPKMNPJVRGJVFUQTSPNYFCHEAVWSJLLXEZWODFKBVQYMKGBGYOPEONPKITEODASENKEFJXHTAFL");

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
    msg.setTimeStamp(0.33497788456336786);
    msg.setSource(48114U);
    msg.setSourceEntity(34U);
    msg.setDestination(7405U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.04323770229149193);
    msg.setSource(44714U);
    msg.setSourceEntity(68U);
    msg.setDestination(17917U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.6432583555881983);
    msg.setSource(47248U);
    msg.setSourceEntity(185U);
    msg.setDestination(45696U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.5318869847172641);
    msg.setSource(33680U);
    msg.setSourceEntity(248U);
    msg.setDestination(57279U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.1688350557450906;
    msg.lon = 0.5449816436003326;
    msg.z = 0.8243688122936091;
    msg.z_units = 87U;
    msg.speed = 0.2256203458232091;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.7491636789144637;
    msg.custom.assign("SSVOMHTPJDGHYJRDZGFUOLUGLZKAIMNQKCFVKYOYASWMYYRMSJLWFVMGEXNAWGDPZVJWZIKTNOHPGWJHXIFZUNWXAYMAPACNXLBUQDJHRITBFBEKHOTICZXQUSSECYFTVCHKKTPFSYLWHNGMDGBDEEBIWZVRTRTRJXDSQCXARCVC");

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
    msg.setTimeStamp(0.41728131744996255);
    msg.setSource(31124U);
    msg.setSourceEntity(50U);
    msg.setDestination(4434U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.4013515985830939;
    msg.lon = 0.12939535702972005;
    msg.z = 0.6333633237119835;
    msg.z_units = 214U;
    msg.speed = 0.16252308576407226;
    msg.speed_units = 182U;
    msg.takeoff_pitch = 0.4548953543133607;
    msg.custom.assign("VAWIALBGOIZHKDKTFHJBCQNNU");

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
    msg.setTimeStamp(0.31381165495778574);
    msg.setSource(45420U);
    msg.setSourceEntity(166U);
    msg.setDestination(7355U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.45182068212600457;
    msg.lon = 0.33691789986212795;
    msg.z = 0.6008894526343013;
    msg.z_units = 119U;
    msg.speed = 0.2953995378219785;
    msg.speed_units = 11U;
    msg.takeoff_pitch = 0.2732333172467428;
    msg.custom.assign("XGHDDXHTDWBTAEEPTVAUBTLPQKYQIVULFBVGFCXZIJEQRZIQIKVPWXYAAKCCYBGIDNUMOSYDEEUVJVGRKYDJQEXXHAGTUDPMUSWUJSCSVOFLRSM");

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
    msg.setTimeStamp(0.3195742636263985);
    msg.setSource(55783U);
    msg.setSourceEntity(104U);
    msg.setDestination(46000U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.28063536692437363;
    msg.lon = 0.8770398769999589;
    msg.z = 0.3616361786718949;
    msg.z_units = 243U;
    msg.speed = 0.5447882488469953;
    msg.speed_units = 202U;
    msg.abort_z = 0.024775698044563255;
    msg.bearing = 0.8365544476485994;
    msg.glide_slope = 178U;
    msg.glide_slope_alt = 0.37368958848741785;
    msg.custom.assign("VAPCCBAKPGSOKRQXTBYNLZDPLBIZZFLOXSNEODWYJMVJJPWIHHFHRAXTBGQQKNTWZQLKVIFFOMUVYOGNNFAUYEMXJXMHCIUOEGTGPZWVJJOUEVYXYWJAMKQZFVMZDPEEWOJTSFNCGRFITPCTPDRHHLCUFUSBAXMGQSRYJCQSIADZKQQPLTMVUWXBRATQCXLKLGSKEWSGRJSDEMKHIBHORUPMIDANBFCWOIRKDTYWBHCXEVNA");

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
    msg.setTimeStamp(0.1833313461762569);
    msg.setSource(49950U);
    msg.setSourceEntity(130U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.9500574788213004;
    msg.lon = 0.5154170879370662;
    msg.z = 0.2784474546658876;
    msg.z_units = 123U;
    msg.speed = 0.257718470009357;
    msg.speed_units = 170U;
    msg.abort_z = 0.5435797147416858;
    msg.bearing = 0.7902119280541299;
    msg.glide_slope = 148U;
    msg.glide_slope_alt = 0.23528833929657655;
    msg.custom.assign("FUAUPVETFRVCLIWPJZCIRUWMJSKRQJNAKJGIZXXYTEVLVJOWTOKZEFOPHNRWXXDUYRY");

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
    msg.setTimeStamp(0.6312931271458576);
    msg.setSource(21264U);
    msg.setSourceEntity(102U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.6331646096991873;
    msg.lon = 0.012209419434620172;
    msg.z = 0.7892183444876089;
    msg.z_units = 217U;
    msg.speed = 0.23266289074034285;
    msg.speed_units = 100U;
    msg.abort_z = 0.05910936247042087;
    msg.bearing = 0.2595231024298216;
    msg.glide_slope = 248U;
    msg.glide_slope_alt = 0.17947236651942688;
    msg.custom.assign("UCWBFPFNMLJGIHVMVFTJUWTDYIASXRXMOFFAEEABQTDII");

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
    msg.setTimeStamp(0.09821584612769507);
    msg.setSource(40097U);
    msg.setSourceEntity(147U);
    msg.setDestination(21685U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.9478730750231477;
    msg.lon = 0.9458187378403417;
    msg.speed = 0.06394052670751438;
    msg.speed_units = 210U;
    msg.limits = 0U;
    msg.max_depth = 0.5534878914918969;
    msg.min_alt = 0.5961307929673101;
    msg.time_limit = 0.008942279922976248;
    msg.controller.assign("QTZWPXSWSBUUGNZYKOOMEKRBHQDGVXEZUPXAYABFIAFJUHESIYPM");
    msg.custom.assign("GVFEMABRDXBAYXCDJVCPUHIRYYJBCOLRWCOCEDJXQUSQSKWJITKGLONRKMXRLMQGQPFMTYZVLMEEHPTSKPQKFGEPFWNHEMBVXANYAYJWVBQLDREWIZTFXSJZZZMXHXDWNPLNVARFIOABWGYFEUDZSRLDADBOHUGVSUCVJPHQSZTNICZODANFPSMCEHWKKDYPWGAWISKIOLUBYRVTULCOENHFOUUJXNKRTTQGI");

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
    msg.setTimeStamp(0.8727214239239088);
    msg.setSource(24682U);
    msg.setSourceEntity(186U);
    msg.setDestination(60467U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.7247514186475863;
    msg.lon = 0.8020450184570759;
    msg.speed = 0.4130983189525371;
    msg.speed_units = 254U;
    msg.limits = 25U;
    msg.max_depth = 0.5154795979505681;
    msg.min_alt = 0.047326032616345715;
    msg.time_limit = 0.6403439951410552;
    msg.controller.assign("XTFYGCIBTWWIAEPOFARBYWQXN");
    msg.custom.assign("TNPGTDNKDBQNZVZCFBTQTBEUXMSERXSKLCHDMHHIESFVWVMYOXCUSJBRIAAATVNWVDJWJHATSQNGDOTYOOZXJVSGBPIKBPUPGQMNVKSWTKG");

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
    msg.setTimeStamp(0.9286777049649286);
    msg.setSource(52897U);
    msg.setSourceEntity(166U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.8551221364527988;
    msg.lon = 0.487625613747502;
    msg.speed = 0.22140374161759646;
    msg.speed_units = 180U;
    msg.limits = 43U;
    msg.max_depth = 0.36295287332415427;
    msg.min_alt = 0.2120787102184658;
    msg.time_limit = 0.6838882302066746;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.41996094103404225;
    tmp_msg_0.lon = 0.07857593040152178;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YPCGULLYTPORCNTLAOXVOIQKWSCFVWHZKXTMOHTSUZBMHQYKNHCUPGHOVSSYKJSPJFGRROFCSEEBRPZJEHJWAGGUHYIFLVGTXABCOWDAWLOPUDZWLJBUTEKMVKNRZBNAZENICISIQUCAEQNNMQWKJCZWZDLQMZWDWFYPPTUYQSDVDLJPAJNIGTBBRASYRUXKFGHLMTMAQYI");
    msg.custom.assign("KQEYLMPYRHLTHFYUVADPIUNVJMPHVXLJIEWWQBXNERSNOTNJBBIZLUYYTXSZSNTDSOAGM");

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
    msg.setTimeStamp(0.41568209332689254);
    msg.setSource(55822U);
    msg.setSourceEntity(191U);
    msg.setDestination(37335U);
    msg.setDestinationEntity(194U);
    msg.target.assign("VYGMETHXSWOEMVXYORHKDRCQKLJDXPDYTMMGSSBGCZNCBYAZGGMQZVUJEYGILJFVKTVQXGQFLXPHOLYNJQPZJRLYFWTTIVAWZDOPNGNNTOPUUHAWRJOPPXSIRFUEWLFOQCVJMCQBXINXKSDMZSSNUBWDOFKFPLTXIHEAMRWZKJSEBRDVNKFZCIAOEBZKUEIDPOVQJRDUIJCLTIHREAEIYCBAAK");
    msg.max_speed = 0.8128494843789393;
    msg.speed_units = 6U;
    msg.lat = 0.8493404863735752;
    msg.lon = 0.5514048040980758;
    msg.z = 0.04076550181108218;
    msg.z_units = 60U;
    msg.custom.assign("RTLTTRSXLKVWHXITXYOAFZLJVXBYAPTEOBRLDRWAZJHMWQWOSWCZUXAXBEYIMGZMCCUTKOJALCPPNWAMCAENVENFKIQLNDTQ");

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
    msg.setTimeStamp(0.2927468349837372);
    msg.setSource(38088U);
    msg.setSourceEntity(199U);
    msg.setDestination(43493U);
    msg.setDestinationEntity(60U);
    msg.target.assign("COYDGNNJVXMUJASSBVIWEGBMZLEDAYAEKQAIGTHUUMHETDQZOFKKYQTOKB");
    msg.max_speed = 0.7403259837497436;
    msg.speed_units = 102U;
    msg.lat = 0.21401885556903355;
    msg.lon = 0.873176865045032;
    msg.z = 0.67680750816287;
    msg.z_units = 71U;
    msg.custom.assign("TFNYMCGQFUQUYKQBHZUQNSNAYDTBDIBWJHQOMGZJZKKQCVRGKXSHEKBEXPPWIPTSCIVDFRGSLVPTZFLWKWMCVJXGYZGPERQNHIANWQ");

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
    msg.setTimeStamp(0.7813119282772732);
    msg.setSource(43273U);
    msg.setSourceEntity(91U);
    msg.setDestination(18618U);
    msg.setDestinationEntity(236U);
    msg.target.assign("WIJFGZWUBQTQETBBLHTDWCPQJMWACZIVNEKOSTOFPFHNHEPEROLEGRXLVQMZCGIFMELVBXUSYYVQMUOXXKWXDWHKQEILXKFR");
    msg.max_speed = 0.3952676115987147;
    msg.speed_units = 234U;
    msg.lat = 0.3723106045965241;
    msg.lon = 0.2264392435894359;
    msg.z = 0.42673611471810347;
    msg.z_units = 133U;
    msg.custom.assign("WXBNYWZBOYONEIGAWRZPUHDJMGRKSTKVRETMYKAOQHKHFVZDFQKGCQHUUJZNUFUXIXZLJGRIVWVQAJOLNMLBSPXAIGHTHJDORJPSKAMHMTANHDFORTYCOWTXLKJWYXVCDBKKP");

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
    msg.setTimeStamp(0.08286216093653087);
    msg.setSource(40840U);
    msg.setSourceEntity(131U);
    msg.setDestination(14752U);
    msg.setDestinationEntity(3U);
    msg.timeout = 36753U;
    msg.lat = 0.6534242632090455;
    msg.lon = 0.813131784836611;
    msg.speed = 0.717430474191967;
    msg.speed_units = 164U;
    msg.custom.assign("MWQUVXERJMAHCSPVJCFARHKJRDGVUDBPNFHRTOXCFQBWZKLXLZRVAGGYHNZXQSNWODLRSYKBAZRXOCMFLAGDPPJBUMTCNHBS");

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
    msg.setTimeStamp(0.09545851653286619);
    msg.setSource(39653U);
    msg.setSourceEntity(12U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(242U);
    msg.timeout = 33176U;
    msg.lat = 0.3821601353112195;
    msg.lon = 0.5848253971004185;
    msg.speed = 0.12521982280137756;
    msg.speed_units = 227U;
    msg.custom.assign("DYLRQJIWGYSMQROPXIDBWVPIZFREDJLHYIARBNRDMWRXJMGIZHYVEVZYMNLNPPWQEEHSXINKDJWHNFOMROJZZTDCHAGLJLJDIKGSZIETWQQHUUVUSFUZFJGQEGNBVWBYSRPCVUFPALOMDTFCBAATXVAKHAYNGGSEIHZXULTQXMKBHKSKJSOJXCWFKOER");

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
    msg.setTimeStamp(0.23107214944592525);
    msg.setSource(49179U);
    msg.setSourceEntity(233U);
    msg.setDestination(5031U);
    msg.setDestinationEntity(166U);
    msg.timeout = 44369U;
    msg.lat = 0.87208916497775;
    msg.lon = 0.72338822951582;
    msg.speed = 0.0070224154946241235;
    msg.speed_units = 87U;
    msg.custom.assign("OKYGTFQRJNPKDKTPMOXDODBMNQXCHURZIYAFYURTVBWFGMQLAPESLFTFUBSHWLJWPCAODAJPVDKJUOVCOJLDMXXJEPRSTSIYUPRMYIOKTROFBFHNCCNZVRJZNSGWNKJHIPBXFEVEIMLUNXQGMGDDFSWXLRAIBAVHCCEHZQKWIWTSAREUBIRUXCZGZGYXMULBCVCEWIQ");

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
    msg.setTimeStamp(0.8431251680665643);
    msg.setSource(3742U);
    msg.setSourceEntity(55U);
    msg.setDestination(19929U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.1581418036744443;
    msg.lon = 0.4182828319950467;
    msg.z = 0.6524719553328834;
    msg.z_units = 171U;
    msg.radius = 0.4761132041100199;
    msg.duration = 40994U;
    msg.speed = 0.061665206821479246;
    msg.speed_units = 111U;
    msg.popup_period = 16896U;
    msg.popup_duration = 11339U;
    msg.flags = 186U;
    msg.custom.assign("FFVQGREDWOIUCASRSDSNKCIKEXGZZCMOYZWQGQBJYDLJVIFJHQWVCORPVWHHGKJZLFTETCRKJHWLCXPBVFIQMAGMTKJHLBSN");

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
    msg.setTimeStamp(0.5054205023053929);
    msg.setSource(53756U);
    msg.setSourceEntity(211U);
    msg.setDestination(18578U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.6860881462203118;
    msg.lon = 0.4521967044905635;
    msg.z = 0.5592915077485083;
    msg.z_units = 152U;
    msg.radius = 0.3827929186043033;
    msg.duration = 15127U;
    msg.speed = 0.33309755710272804;
    msg.speed_units = 166U;
    msg.popup_period = 42052U;
    msg.popup_duration = 20674U;
    msg.flags = 130U;
    msg.custom.assign("ZIKACSXGOGMENOLQNNPBLSMTZMVHADQXYSNQGJGUBSHAOMCZDLYAYTTFAIVWUYFZDKQQMHMKONQSFDNBJLRJNVTUGIFNCLOKCFSRJRDHKYCBDIVWXWBPEWZYXACTKWROJUIYWORWBMVLEKXMXLZCSEHFJFGHQEFHHEPVPBTEAEGT");

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
    msg.setTimeStamp(0.849835757361489);
    msg.setSource(5086U);
    msg.setSourceEntity(197U);
    msg.setDestination(54080U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.713758932737068;
    msg.lon = 0.8574708630976413;
    msg.z = 0.9343625260423039;
    msg.z_units = 131U;
    msg.radius = 0.9907218372397901;
    msg.duration = 19628U;
    msg.speed = 0.14320657551124227;
    msg.speed_units = 57U;
    msg.popup_period = 28478U;
    msg.popup_duration = 38713U;
    msg.flags = 93U;
    msg.custom.assign("WRVAVZBUIPUSWHELFRGJYNVPUMYWJQVSFIRDXQTXDJTKCMKHIZFQPZMGTXLYTCOHSYXHPIFCKBVYDMEYSFOWCAHOQRHIHRYERKMHNQFBKKKHQGUBNWPAMTLQOTEAPIOURYNJLSUXXWJECFJDLNBDNVKGPLUEBGWZTPOENPDSZWSYMLAJMDGOUFLCAFOAIZKSER");

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
    msg.setTimeStamp(0.8485524347534972);
    msg.setSource(20368U);
    msg.setSourceEntity(25U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.08931298915749863);
    msg.setSource(5776U);
    msg.setSourceEntity(155U);
    msg.setDestination(35897U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.5051597857860392);
    msg.setSource(8873U);
    msg.setSourceEntity(254U);
    msg.setDestination(50899U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6410734132420426);
    msg.setSource(65434U);
    msg.setSourceEntity(31U);
    msg.setDestination(32236U);
    msg.setDestinationEntity(38U);
    msg.timeout = 40510U;
    msg.lat = 0.9905695376430221;
    msg.lon = 0.20941474140841343;
    msg.z = 0.010290056246466395;
    msg.z_units = 198U;
    msg.speed = 0.9070214764850826;
    msg.speed_units = 28U;
    msg.bearing = 0.3254559099623331;
    msg.width = 0.7860607376486544;
    msg.direction = 129U;
    msg.custom.assign("UMHKJEFUDMKQEBCLATXSNVWZKVPYMDEFVZYUSTPQHDIBMEJHTFGWBEQGANUXQCESFWHWJBFRPGUVZGCIWDSCAUILBQORXVTSVYERVBLSCPLQDROJONYTYUQVZGMTIDWIAHYNGPCFNEUXYYVOFNZXZNLCZGUHJTPWKXTCBKZAJZSTNJGHREFAKALFOKAUJNJROOHMIDFPBIKKDNPQSLOWSAKRCMMRZJLCXHWXWOEIQRVGQSX");

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
    msg.setTimeStamp(0.4753486264473087);
    msg.setSource(58755U);
    msg.setSourceEntity(56U);
    msg.setDestination(48410U);
    msg.setDestinationEntity(118U);
    msg.timeout = 1588U;
    msg.lat = 0.9090709088635767;
    msg.lon = 0.5655721812547426;
    msg.z = 0.3256856673615087;
    msg.z_units = 230U;
    msg.speed = 0.6569317227734244;
    msg.speed_units = 60U;
    msg.bearing = 0.8700853466740277;
    msg.width = 0.2923338624833687;
    msg.direction = 112U;
    msg.custom.assign("EYDRMFCTVFDPXGRTQBUJCRZCPKPHJEMSUSFZFIGZEFAQHWLJQXLGTNJMAWLMJHNIVOYKHSYVGLBONPSPBCYEDTLQDHPNRSOFAMQCVBAFWXQHKAZOWTRIFGXHRCAGZJCLSTXSWMJUFIIQLYPCNZJEPMBWSVIXYBMTWUVTIUKKVCKJVNDXXILKMIBRQGANYD");

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
    msg.setTimeStamp(0.10518160626395878);
    msg.setSource(34551U);
    msg.setSourceEntity(14U);
    msg.setDestination(61529U);
    msg.setDestinationEntity(13U);
    msg.timeout = 27438U;
    msg.lat = 0.4356183608812144;
    msg.lon = 0.9267797430292597;
    msg.z = 0.10909938902631766;
    msg.z_units = 196U;
    msg.speed = 0.500795566056747;
    msg.speed_units = 100U;
    msg.bearing = 0.9342778997506028;
    msg.width = 0.23952495006721863;
    msg.direction = 189U;
    msg.custom.assign("LCKHZFGWDTDMNPLDJSTAYNQLHQEVXHBUHVCMXXCPVADFGWTTOIVRPPQPNTUFQVPQJYYXFSNLIEZMFNPNRTRNUSKYXAVSYJUTXOSXOUAYRIFCGQHJGAJAHQOJHMBXLVTSQLQYASKHGBUYEKOTYBCKHBWKMECEEXFEJIGHMUCFMZDZOMZYKDPEZB");

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
    msg.setTimeStamp(0.16620731587592574);
    msg.setSource(58465U);
    msg.setSourceEntity(227U);
    msg.setDestination(25881U);
    msg.setDestinationEntity(45U);
    msg.op_mode = 29U;
    msg.error_count = 89U;
    msg.error_ents.assign("DNHCXEKGVCRBKFDYNEVGJHRANHKHGNKXMGDQUFTDMIBLLQUPYUYRTVPFEGQIMAFIDAFCMTSSXIBDRMPLTWWWIYQVARZYSQXQIPPCYGWRKPOAKVOBLUXQOBLNRCNZGUKUEUBIHQUGZJNYFDJOEBCXEUZCUMBZIVCLYXEDHIJPMCCOZZGKATTMROSZTWJFSNNMRHIEJXSHALWOQHDTXHQTSDFALYKJESLJEOPWWPAVVVPON");
    msg.maneuver_type = 49929U;
    msg.maneuver_stime = 0.5816908248966954;
    msg.maneuver_eta = 37729U;
    msg.control_loops = 1546644196U;
    msg.flags = 10U;
    msg.last_error.assign("YJSMCULEWGMQBSXRHJJXSTAXCOIYAZCRFQKVNDNHLHFOLIAHVQJZUFHMRDPXHYICMVTDDTKOQIKIEMVVAXWGUGBNSQJIJOGFIULJEEKJLNGJCHYGTVWPPBXMIPWADJKLGBCBYFUPYAFFYZRRHHEBANRDQXSNWUGZWMCZNGDMOERVQIFWBYQZZCTNFWPBLQVAZSTQBMCYROSNPANRSOHADXKUWECOMTTFGUTTB");
    msg.last_error_time = 0.543850334447238;

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
    msg.setTimeStamp(0.8809983234961425);
    msg.setSource(20580U);
    msg.setSourceEntity(42U);
    msg.setDestination(26019U);
    msg.setDestinationEntity(24U);
    msg.op_mode = 42U;
    msg.error_count = 132U;
    msg.error_ents.assign("YQODVFTRCEPPNNGGZNTTMDVSOFSYFFXIAHIHBMDSALACEBEHIFYUFQNWDCTWYWBRHVBKGOSSRTFUDYSQCRPRUHGLELPKIVPBUKOINEPXKVLOXPWJ");
    msg.maneuver_type = 36298U;
    msg.maneuver_stime = 0.93013567244343;
    msg.maneuver_eta = 17940U;
    msg.control_loops = 1154178833U;
    msg.flags = 194U;
    msg.last_error.assign("TIYDURMKEQEXGVRKYIFHIJAAMYUKBVSFGXAXPOLXHADSXAFLRPNTGHPNZSHHVYFDGZJKSTOMZZOBQRZENDWNDQTPWLQCPATUXIDVRHDPQAZPHSWSCLNIGVSHBYBYBMWOCBVAENBJDCGPHKNBOUVWCIELPVYOBGGPWLLZYQIGKEMCQKTLELHJMFWUEREAESYGKNLCXJKMSW");
    msg.last_error_time = 0.6764458524866176;

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
    msg.setTimeStamp(0.10666587260891813);
    msg.setSource(35365U);
    msg.setSourceEntity(2U);
    msg.setDestination(29947U);
    msg.setDestinationEntity(20U);
    msg.op_mode = 82U;
    msg.error_count = 164U;
    msg.error_ents.assign("AYOZLVEKCIXUASQTFFUEPNOHREWQFZINTIMBGSTBVEDLVTEEGPRLLGBDMMBPKAPPVJXTOXNG");
    msg.maneuver_type = 54683U;
    msg.maneuver_stime = 0.010823718768845803;
    msg.maneuver_eta = 59020U;
    msg.control_loops = 1285710915U;
    msg.flags = 18U;
    msg.last_error.assign("UPZULBONNTSFXCZW");
    msg.last_error_time = 0.33916635824117436;

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
    msg.setTimeStamp(0.11705253227671208);
    msg.setSource(6533U);
    msg.setSourceEntity(173U);
    msg.setDestination(43318U);
    msg.setDestinationEntity(227U);
    msg.type = 166U;
    msg.request_id = 45528U;
    msg.command = 19U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.19651739138714408;
    tmp_msg_0.lon = 0.9532072366115308;
    tmp_msg_0.speed = 0.8090180018377008;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.duration = 392U;
    tmp_msg_0.sys_a = 56435U;
    tmp_msg_0.sys_b = 63101U;
    tmp_msg_0.move_threshold = 0.6544878101492865;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31106U;
    msg.info.assign("PTYKAIVZUVNXFGDJPALXWEFSORESCWUDBARSELSOGNBMKFJGSBIACEDYIZRGQJQXMAJNMZYOQXKDGUWJZLKFZWHMDGJULWZVIMKCQGYLDTTAQWTXEVPQDSGTEERBUJUYRFPWVLCSYXOPXBTXKPXJOGCBPYIWUZDRNODAMWQAXHKMY");

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
    msg.setTimeStamp(0.015809465320042237);
    msg.setSource(65109U);
    msg.setSourceEntity(150U);
    msg.setDestination(3096U);
    msg.setDestinationEntity(108U);
    msg.type = 185U;
    msg.request_id = 29399U;
    msg.command = 199U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.36308407122519515;
    tmp_msg_0.lon = 0.30662643941503276;
    tmp_msg_0.speed = 0.32671266024949386;
    tmp_msg_0.speed_units = 220U;
    tmp_msg_0.duration = 65187U;
    tmp_msg_0.sys_a = 27247U;
    tmp_msg_0.sys_b = 42156U;
    tmp_msg_0.move_threshold = 0.08032467744265392;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60467U;
    msg.info.assign("EXYNHWIGJDSCJSFCHOTLYYADZOSZEUZOPOFYQUIBIEJQKGZVANFETPGDLICFTDGUKQGJEWEUMCFBKEAXKHTVOHNPZFQAGXUVSXQLMKYWXFBNAIJZFMVDUWMRAIWPRSBALOLSOBQBPWQMDRQVAATHVONMFUZLHVOTCTTNYKYUBEOBKRZIVYZSCIRRDJUDQHGHSCPPTEMAVYJRLYXEQXMLTX");

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
    msg.setTimeStamp(0.24223313417721426);
    msg.setSource(11434U);
    msg.setSourceEntity(3U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(10U);
    msg.type = 102U;
    msg.request_id = 10050U;
    msg.command = 139U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.3914832991228835;
    tmp_msg_0.lon = 0.2198274353881693;
    tmp_msg_0.z = 0.2688873846435167;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.radius = 0.8862343589516738;
    tmp_msg_0.duration = 2912U;
    tmp_msg_0.speed = 0.19545029734747132;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.popup_period = 30864U;
    tmp_msg_0.popup_duration = 32776U;
    tmp_msg_0.flags = 177U;
    tmp_msg_0.custom.assign("LGSPZQCZYNNYFDHIXVQPLVGUQHDQEGTFQEFZNNXCSSNENVZYYRVPCYKPDVUXDSIRISHMEROITSHNWDKZJJBQXBAMCVJEIFLLPHMKTFKPUOLNVTITPGGURONCWHGWSKWIFCQEBXPFXARBYDXLGVEIGWTQCFCQJGALPFDKHPAJDOZTRLIAMLAJOZBUDHMKXXOEJFAKMSRJYXUYWQEGWYMUWUAJNRMZBBBBMVTDAUIKCUHTJOOKOSVWZCRLWBAZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15449U;
    msg.info.assign("WVRMBJIFTSQIFOL");

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
    msg.setTimeStamp(0.9058896013483515);
    msg.setSource(56686U);
    msg.setSourceEntity(0U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(213U);
    msg.command = 37U;
    msg.entities.assign("DMUWDUCEKQRBOQTTRPFZCZDBDKOBRWIVVCWVMAPNXOTRZPAULRNNERKEGBQXVRYTSUGRKJPWCOBZCMNWPVBFCWTNGGDGMLKYYAGFXKZIKTIYXBIVDOVMEVLHWGZCEHDHALLPSKXBZVANSEHAAJUAOELPDXLMYUJNQMYBFPJSGFFFLXSZUOXAUMRGQFQGWKCPHVHSDLPJSNSQUXQWTOBQAUJTNDZEFMIXIYHCYIMZIETCSEIQJLJHFJHRYITHN");

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
    msg.setTimeStamp(0.11693486766361894);
    msg.setSource(14912U);
    msg.setSourceEntity(247U);
    msg.setDestination(59179U);
    msg.setDestinationEntity(119U);
    msg.command = 158U;
    msg.entities.assign("VKZMZWJFSCQLMFRWNMLVLEQCAHTJALYZWCQUUIPODSFEUWGGXCPGBPXMTSAZNPKNKQCADZCRYRPVMKLQKYGTYNYSGFVGR");

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
    msg.setTimeStamp(0.020254484994829958);
    msg.setSource(28826U);
    msg.setSourceEntity(64U);
    msg.setDestination(21155U);
    msg.setDestinationEntity(86U);
    msg.command = 63U;
    msg.entities.assign("SDWRAOTPMKZYIZOMGYJSKDMRHQWWVBTUFCZMIRNEKOQXZTINYDEPMKBJLYPZDFCGUDJPQAGZKNTS");

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
    msg.setTimeStamp(0.60091897675788);
    msg.setSource(42924U);
    msg.setSourceEntity(132U);
    msg.setDestination(16308U);
    msg.setDestinationEntity(139U);
    msg.mcount = 150U;
    msg.mnames.assign("QDXENCSQWVEDWLPHRQJNHGEEVBPUBLCIGTONNVHXDABSRAUZZROTXAOMIPDJKQGTUYYSMNWNTKMDYOAVOGMAKIZAAOEBLMADYLBPKIJKTFCZHPHFOXYLUWUIUNRCRQFZJYVPTIFCSTSHMVEHCKJEZIMMRRWPKWWXIVCHZOVWBMVSEXEFRFFHZCQODUAUNNROKQZCYXSEQTBKYGJXGLISJFBLCIDQ");
    msg.ecount = 182U;
    msg.enames.assign("BZUYKODEWRPJSEBGKPLJJKZEYIUXGGMTSREFCKYMSOPSKFNJYFLOCUFVLASEIPNIHSQOLEIIIRGDGVRVUUZPZYZMWV");
    msg.ccount = 233U;
    msg.cnames.assign("THRHNJPUTERIDUUSDLAEWCDQGBZSEIZCEAYXGHXGFMPZTLBHGQTLGJATONDAXCPMWJYGKJGKDEFVKNUKVJFRMQLSBBXKKGVXYPOXWBNLZNTAZYCVESIHWRPLYCWRNIJZXJAOTZUGSCOVBJBWNFRPQLMYTDHMOSVKUNGVAMITCFBSKEAQHCJLQIMFSAQXELODLSYQFIJRE");
    msg.last_error.assign("PMHLATXKIFFWTQFOYSICANJGGJPIFSTWWVWREBPXAILZGFBMAJXQZEBGLZOVKKEUZZCCEMVMCXDTNLUDRKAVXHKRUGDQCRNIJGSITYSZRCBHQWKPJYPEESVNDYYHJMYWFTWAIWYCVDOBVGJNASMBWOEUAOBQQRDGDWXLUFCONVFTHDTVNCRQIXMBMONU");
    msg.last_error_time = 0.8389446695209999;

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
    msg.setTimeStamp(0.7342685946612866);
    msg.setSource(10546U);
    msg.setSourceEntity(8U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(112U);
    msg.mcount = 94U;
    msg.mnames.assign("XQMFJQMOQYEEWFMTPLTBBJEEXNNNBVZZMSNZGFIHOYRXAYZOGGIZTVSORKGCVJSFYJIFYWAHCPHDPYIWUGEJHWTDKQFCDUSKRHNOIMCMBABOCBUEVSNEMLEJIAXDXIIBKSHUOCDHFDLXGZMMPTWVHKUKSOORTVFPWVSPYUQLLAPWPKDH");
    msg.ecount = 29U;
    msg.enames.assign("PTUIBIBZBRVWUTGOKRJUVHMXUYRSNLPFNNEOMIVCLOTEFYUDONJFCMFIGNRZTVKZYLRWYAZWNEMPKGXKAOHYWAHCFVZSTQHCEZYOKZDXEWMHIKZYQDTXRNWEXSUBBQOOEQTFEOMSAYDHNZAUIPWRFQONXTRKXBAZTPJBSXQKPCHCVRJNXGIJSGQLHGSLJVMPTFVCBDKGHWJJGS");
    msg.ccount = 106U;
    msg.cnames.assign("BDILECRWISGTVQXOAGNTHCZWKVPEAHJQXGMOVKUHAWPCVKRDJDESUPDCKCHAVGCMNZIILGMJSKQDFYJMGDSJMQXKRIUGLFFFMCAXZLJWMAJLPVUGONYSKAQJZSWIORTMVAQQHX");
    msg.last_error.assign("VCPVQYZOWMKQXWHTFTHUKMPBKYTSNWTUXHGCJLZUCJOONMXVEGGE");
    msg.last_error_time = 0.02800229792569786;

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
    msg.setTimeStamp(0.76233487609114);
    msg.setSource(60318U);
    msg.setSourceEntity(134U);
    msg.setDestination(18224U);
    msg.setDestinationEntity(47U);
    msg.mcount = 141U;
    msg.mnames.assign("JOCIDVSEYDPPPOFJHDJGZDOBAYKZWXPMSIFDYKNQTFUGBMXJBYRSHNHVQXGEEHWWRWYTHNMPCJLMLVWQAVTVNINJCQINUECXEHUYDEHFIPUUGQGDBAYPGUNLIWIE");
    msg.ecount = 189U;
    msg.enames.assign("GUUBGBGFURHIOHMESZSAKYCHKNFVOHILBNITPEOQXJRXSRTJ");
    msg.ccount = 34U;
    msg.cnames.assign("AXDGDDNAYLCQZMXZSXGNVDTNQGIKHRGORZRRQREXXQNYTRTJALAQNXCOTBEPHOTQOJZKLJOVTWXBEWMGLBPAKOUCMMWBEIBLLSVFPQRRFUIFWIZHMWIPPAPBSCCCYMVZPJUHGTSBNYOESFQLIJOPVFCKKDUBVYONLWHILEXYHITAEBCWVVZTLKGMQAUUMUITUGSFFKGDEKDZKRMENPJQSXCSYPMVONSYFHZZNCDJAWDIBFUS");
    msg.last_error.assign("HHDNPRLOYVIIQXKPKAOOBWSSPUHMHPWAECENXOSKONGQRVDIFOEZNTQYLGQLNIBDEJWRLMKUFZJSGRDETWRZWHSNYGLUHQDFJTRWIAMAPPXNRHEAGBSBPMAWYMKQDRXVTXIXVUWMKCCCMVTUZYCCBTJYRPZFJLLFDMUGXASKSGKQCPTGNRVYFYTZOLWFZAUBVJLSCEOAFGHMUSIVXBTNXEYNATKJJUWQGZBFDDVCFLBMQOUJVHZZ");
    msg.last_error_time = 0.7746007522553735;

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
    msg.setTimeStamp(0.49466809037854187);
    msg.setSource(11660U);
    msg.setSourceEntity(3U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(220U);
    msg.mask = 100U;
    msg.max_depth = 0.41255310688271474;
    msg.min_altitude = 0.3143765434661714;
    msg.max_altitude = 0.414071156021084;
    msg.min_speed = 0.5990343870343798;
    msg.max_speed = 0.006669122497523494;
    msg.max_vrate = 0.4657561007948182;
    msg.lat = 0.5857358825715735;
    msg.lon = 0.9479456068008221;
    msg.orientation = 0.16605555455145127;
    msg.width = 0.6038279532587846;
    msg.length = 0.4965616868568675;

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
    msg.setTimeStamp(0.6486795273611495);
    msg.setSource(49509U);
    msg.setSourceEntity(60U);
    msg.setDestination(39430U);
    msg.setDestinationEntity(119U);
    msg.mask = 60U;
    msg.max_depth = 0.15152795023101562;
    msg.min_altitude = 0.8107621700270461;
    msg.max_altitude = 0.0385996198702897;
    msg.min_speed = 0.41319800875207857;
    msg.max_speed = 0.9412198890127136;
    msg.max_vrate = 0.032526433746868144;
    msg.lat = 0.37814861616048834;
    msg.lon = 0.18020775869318006;
    msg.orientation = 0.4781902780378826;
    msg.width = 0.027628588931235654;
    msg.length = 0.7867640324041604;

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
    msg.setTimeStamp(0.4278047897808027);
    msg.setSource(9092U);
    msg.setSourceEntity(128U);
    msg.setDestination(10558U);
    msg.setDestinationEntity(111U);
    msg.mask = 121U;
    msg.max_depth = 0.8875880293294103;
    msg.min_altitude = 0.6418202668806456;
    msg.max_altitude = 0.2523993935526475;
    msg.min_speed = 0.010768538855992715;
    msg.max_speed = 0.2321689889271591;
    msg.max_vrate = 0.22660396168699182;
    msg.lat = 0.6112547279209546;
    msg.lon = 0.7732793398506614;
    msg.orientation = 0.38471054737779475;
    msg.width = 0.1309564015805328;
    msg.length = 0.383918219222542;

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
    msg.setTimeStamp(0.44160981589091264);
    msg.setSource(18460U);
    msg.setSourceEntity(176U);
    msg.setDestination(21553U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.2473880758968886);
    msg.setSource(16971U);
    msg.setSourceEntity(234U);
    msg.setDestination(23582U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.08870332177752271);
    msg.setSource(22021U);
    msg.setSourceEntity(237U);
    msg.setDestination(39574U);
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
    msg.setTimeStamp(0.6569725724757132);
    msg.setSource(40865U);
    msg.setSourceEntity(218U);
    msg.setDestination(49797U);
    msg.setDestinationEntity(122U);
    msg.duration = 23232U;

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
    msg.setTimeStamp(0.7367704569395471);
    msg.setSource(41848U);
    msg.setSourceEntity(123U);
    msg.setDestination(18976U);
    msg.setDestinationEntity(131U);
    msg.duration = 32093U;

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
    msg.setTimeStamp(0.3188574809519934);
    msg.setSource(44034U);
    msg.setSourceEntity(248U);
    msg.setDestination(36638U);
    msg.setDestinationEntity(228U);
    msg.duration = 3303U;

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
    msg.setTimeStamp(0.49387594023618553);
    msg.setSource(34997U);
    msg.setSourceEntity(108U);
    msg.setDestination(63376U);
    msg.setDestinationEntity(234U);
    msg.enable = 2U;
    msg.mask = 583078374U;
    msg.scope_ref = 2900321644U;

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
    msg.setTimeStamp(0.9412371368792742);
    msg.setSource(61833U);
    msg.setSourceEntity(213U);
    msg.setDestination(17311U);
    msg.setDestinationEntity(39U);
    msg.enable = 203U;
    msg.mask = 1784936933U;
    msg.scope_ref = 3914434760U;

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
    msg.setTimeStamp(0.8204257005097378);
    msg.setSource(19222U);
    msg.setSourceEntity(54U);
    msg.setDestination(63314U);
    msg.setDestinationEntity(32U);
    msg.enable = 64U;
    msg.mask = 433216414U;
    msg.scope_ref = 173515288U;

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
    msg.setTimeStamp(0.7840115884327676);
    msg.setSource(53996U);
    msg.setSourceEntity(59U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(52U);
    msg.medium = 166U;

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
    msg.setTimeStamp(0.6772250925280144);
    msg.setSource(39882U);
    msg.setSourceEntity(97U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(122U);
    msg.medium = 156U;

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
    msg.setTimeStamp(0.46361344719913167);
    msg.setSource(17341U);
    msg.setSourceEntity(0U);
    msg.setDestination(28830U);
    msg.setDestinationEntity(26U);
    msg.medium = 213U;

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
    msg.setTimeStamp(0.9756795642295135);
    msg.setSource(11427U);
    msg.setSourceEntity(110U);
    msg.setDestination(34846U);
    msg.setDestinationEntity(182U);
    msg.value = 0.08606082234452594;
    msg.type = 83U;

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
    msg.setTimeStamp(0.16542323313177398);
    msg.setSource(27053U);
    msg.setSourceEntity(15U);
    msg.setDestination(13252U);
    msg.setDestinationEntity(127U);
    msg.value = 0.5113723980272693;
    msg.type = 101U;

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
    msg.setTimeStamp(0.3865296319082754);
    msg.setSource(4140U);
    msg.setSourceEntity(102U);
    msg.setDestination(34329U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8749798678658706;
    msg.type = 174U;

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
    msg.setTimeStamp(0.5389451511652683);
    msg.setSource(8723U);
    msg.setSourceEntity(165U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(40U);
    msg.possimerr = 0.6991230441182132;
    msg.converg = 0.008387480499049582;
    msg.turbulence = 0.9241759128093823;
    msg.possimmon = 68U;
    msg.commmon = 148U;
    msg.convergmon = 70U;

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
    msg.setTimeStamp(0.3320748053905981);
    msg.setSource(20652U);
    msg.setSourceEntity(129U);
    msg.setDestination(45053U);
    msg.setDestinationEntity(221U);
    msg.possimerr = 0.4981597048887646;
    msg.converg = 0.6832205144501318;
    msg.turbulence = 0.3038907606298309;
    msg.possimmon = 146U;
    msg.commmon = 221U;
    msg.convergmon = 120U;

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
    msg.setTimeStamp(0.8344188630483954);
    msg.setSource(27667U);
    msg.setSourceEntity(70U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(120U);
    msg.possimerr = 0.7347408785282168;
    msg.converg = 0.8177092301248902;
    msg.turbulence = 0.2821174417810608;
    msg.possimmon = 5U;
    msg.commmon = 97U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.44460626113723867);
    msg.setSource(58758U);
    msg.setSourceEntity(11U);
    msg.setDestination(28130U);
    msg.setDestinationEntity(224U);
    msg.autonomy = 46U;
    msg.mode.assign("OSIAVWDLBLCKNZAHCBUAMKNLZYGAHTYLUJQBZXBDWFCXIIHXDZZMFMGVMQHLTSKKGSLMEMMIDRYTRZIGZPOXXJNEKJPJYSSHAWQSBQJQVVTDORXNKRPPWEUDHPBCZITVVWPYCURAXVQJTBEOUXYSMWPFGUHM");

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
    msg.setTimeStamp(0.5639081251938598);
    msg.setSource(24674U);
    msg.setSourceEntity(172U);
    msg.setDestination(64549U);
    msg.setDestinationEntity(116U);
    msg.autonomy = 243U;
    msg.mode.assign("ZLQGMIMXNVLSJVDHCSVGKCFZUTGXYJVQEUKFFDPYEWRYVULKPRYBCQWOTKNOGDNHEGSQPXWAGJXDLEUBFDDZXKSZUVDOOOJEMSUQWJUCHRYLADFPXTPMARLJMNPIABTEHNFSSACUBYHKIJNQENAZVRZAFMTGBEWMRNLLHVILKSMYOHXOSRKMFYOCHQTCWZIQXKAIPDVTPJJUIE");

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
    msg.setTimeStamp(0.19030760054521334);
    msg.setSource(62824U);
    msg.setSourceEntity(209U);
    msg.setDestination(16752U);
    msg.setDestinationEntity(102U);
    msg.autonomy = 248U;
    msg.mode.assign("NTRKCOYVPLIKEFIHYCEHYUXFVFNQKBMDQRTSGQBJGHXBNZA");

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
    msg.setTimeStamp(0.07413101888497653);
    msg.setSource(22150U);
    msg.setSourceEntity(97U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(107U);
    msg.type = 141U;
    msg.op = 5U;
    msg.possimerr = 0.7390771690278012;
    msg.converg = 0.7643031248473455;
    msg.turbulence = 0.07066689839209572;
    msg.possimmon = 69U;
    msg.commmon = 2U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.3576528110337641);
    msg.setSource(61656U);
    msg.setSourceEntity(129U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(6U);
    msg.type = 204U;
    msg.op = 131U;
    msg.possimerr = 0.9944832455359838;
    msg.converg = 0.6755344123645473;
    msg.turbulence = 0.39626836257097575;
    msg.possimmon = 82U;
    msg.commmon = 36U;
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
    msg.setTimeStamp(0.4388555390693968);
    msg.setSource(44777U);
    msg.setSourceEntity(18U);
    msg.setDestination(25526U);
    msg.setDestinationEntity(131U);
    msg.type = 253U;
    msg.op = 231U;
    msg.possimerr = 0.09668137378210295;
    msg.converg = 0.9097140611094573;
    msg.turbulence = 0.7447170191966676;
    msg.possimmon = 41U;
    msg.commmon = 71U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.3262410078267802);
    msg.setSource(59591U);
    msg.setSourceEntity(77U);
    msg.setDestination(25524U);
    msg.setDestinationEntity(232U);
    msg.op = 174U;
    msg.comm_interface = 172U;
    msg.period = 212U;
    msg.sys_dst.assign("XPDIFTATMOEZJVSPZKSNZZQBTHCAYFD");

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
    msg.setTimeStamp(0.8637676557762127);
    msg.setSource(2346U);
    msg.setSourceEntity(197U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(134U);
    msg.op = 87U;
    msg.comm_interface = 147U;
    msg.period = 29601U;
    msg.sys_dst.assign("PINOUBQWDOASZMKLRMLNMEWHKRRQKYZBVBKGXSTJUTWYTNQXKVMHNTCQGAIIQRUBCOBDZDXYGDCPPXMZVHKMSFSSVXFUCZBOQCIPGWXAHFDJKRRDSLOKEOVA");

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
    msg.setTimeStamp(0.3315283156500832);
    msg.setSource(46465U);
    msg.setSourceEntity(45U);
    msg.setDestination(33813U);
    msg.setDestinationEntity(75U);
    msg.op = 141U;
    msg.comm_interface = 45U;
    msg.period = 752U;
    msg.sys_dst.assign("SZZJGBXNXWDXIHPDQKRDXPTXJOMZAMLCAVXECABRPIYMDOAPIRMUKSEFOWJTUBQXSDMAGYYWSUBKVJYOKQKIOQWEFNIHALQCNLFZPEUCTVADTNYQZIMBYGFMWNDPZPODCBWZKESTPZQMKWYGHZVUYVWKPYGYCIAGITVDNVHJUKLXRRVKHBWGDFVCFLLEHBFLFAEG");

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
    msg.setTimeStamp(0.8208804745968105);
    msg.setSource(10917U);
    msg.setSourceEntity(182U);
    msg.setDestination(65428U);
    msg.setDestinationEntity(212U);
    msg.stime = 528657895U;
    msg.latitude = 0.08190357431925543;
    msg.longitude = 0.9199255111442487;
    msg.altitude = 32643U;
    msg.depth = 20640U;
    msg.heading = 27422U;
    msg.speed = -14948;
    msg.fuel = -61;
    msg.exec_state = 125;
    msg.plan_checksum = 46485U;

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
    msg.setTimeStamp(0.20675975740650065);
    msg.setSource(51155U);
    msg.setSourceEntity(130U);
    msg.setDestination(48395U);
    msg.setDestinationEntity(98U);
    msg.stime = 2226667108U;
    msg.latitude = 0.35450295280390354;
    msg.longitude = 0.901399618980002;
    msg.altitude = 13482U;
    msg.depth = 61941U;
    msg.heading = 16031U;
    msg.speed = -17726;
    msg.fuel = -68;
    msg.exec_state = 81;
    msg.plan_checksum = 13312U;

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
    msg.setTimeStamp(0.731133817453934);
    msg.setSource(61742U);
    msg.setSourceEntity(190U);
    msg.setDestination(63822U);
    msg.setDestinationEntity(153U);
    msg.stime = 851714311U;
    msg.latitude = 0.9937057824975487;
    msg.longitude = 0.5755607708535396;
    msg.altitude = 27654U;
    msg.depth = 2477U;
    msg.heading = 56066U;
    msg.speed = 17736;
    msg.fuel = -33;
    msg.exec_state = 108;
    msg.plan_checksum = 14484U;

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
    msg.setTimeStamp(0.9458291002886984);
    msg.setSource(55681U);
    msg.setSourceEntity(195U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(201U);
    msg.req_id = 23014U;
    msg.comm_mean = 100U;
    msg.destination.assign("PZKSTQDLXKS");
    msg.deadline = 0.7709756781214323;
    msg.range = 0.5524961614067136;
    msg.data_mode = 54U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FKQLJAFMEOKRZHCSIZCAEQVHNLJFSVIUSWUQXCDEVVBNRGTTFIRTSUDRONOPXIRUHCXUJFQGVMLMZVWAYVUFXJWFSEFPGKUMJOGRGEKYVBNEIBOXWANAAZUNJTSAYLCDGWPHLOZTAATZKMJJDIDJSKPRQQHCHPDXZQCBYMXRHIKOLIZMXWFYRXXJIPSWDCLPBDLSLTDLBUQEHYYOYWPMADOGKKFGHYZPPKBCBBEUNTIHEOVNQ");
    tmp_msg_0.lat = 0.7946058113756714;
    tmp_msg_0.lon = 0.8092568974230787;
    tmp_msg_0.z = 0.8772246865721008;
    tmp_msg_0.z_units = 113U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WUOMNYOWTPAAZYFSBMKNPUQYWKKELRPJNOJFPCUBARTMVNEZYLUGJLVXCQPIJAOXJHTFEVTTHYDZMGUZALFETQUIFLAGYGRFPVXVDHROIZVBQHVEWOWLJVIDRYFPLPBOJTMYWDVICHZQGZICWWKKOHDHNSKUSLSUXCNHCNNHIBBRGIBOKETKKCEYURSC");
    const signed char tmp_msg_1[] = {30, -117, -68, -116, 20, -1, -36, -128, -57, 1, 55, -22, 40, 79, 52, 108, 66, 111, 117, -59, 126, -40, 6, 68, 39, -93, -28, 89, 78, 9, 55, 20, 117, -103, 73, 44, -31, 69, 71, 84, 125, 43, -94, -26, -69, -78, -3, -75, 81, 115, 70, 31, 99, 70, -106, -63, 64, 21, 52, 124, -55, 82, -94, -29, 80, -8, 18, 74, -76, -31, -35, 39, 8, 102, 99, -53, 27, -59, -20, -52, -88, -61, 68, -70, -38, 85, 81, 93, 14, 109, 31, 53, -10, 80, 87, -11, 104, 18, -9, 19, -127, 93, -67, 101, -90, -47, -85, -111, 77, -127, -35, -14, 79, -14, -122, -112, -124, 121, -86, -67, 104, -114, 84, 57, -120, -3, -118, 74, -87, -118, 0, -77, -72, 109, 100, -76, 61, 108, -1, -108, -125, 123, 10, 54, -47, -109, -51, -82, 83, 16, -46, -72, -5, 77, -106, 45, -11, 100, 24, -48, 49, -87, -46, -80, -77, -66, 35, 122, -78, 121, -2, -41, -70, -112, -86, 123, 55, -50, -123, 0, 94, -88, -36, -22, 115, -55, 124, -105, 114, 68, 2, -105, -70, 51, -112, 121, 46, -37, 90, 13, -11, 65, -89, -26, 75, -1, -100, -94};
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
    msg.setTimeStamp(0.7986781612617573);
    msg.setSource(56761U);
    msg.setSourceEntity(125U);
    msg.setDestination(8040U);
    msg.setDestinationEntity(171U);
    msg.req_id = 4102U;
    msg.comm_mean = 210U;
    msg.destination.assign("VEDKRJQFUHGMENFAHWDMZBHPIODBICANHYQAGAKBDBZZVLRQJLGIKOCKRQXECHRCPCYPLENZJMSVLNRDGECEVMQVQUKJIZ");
    msg.deadline = 0.28184636545735675;
    msg.range = 0.6756577506144812;
    msg.data_mode = 6U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.2995373193548515;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ITHVCFJQLFIZUFIGMUZWJEYPOZUNLYNXQCVZGLIUDSAGRANVFPEOATMYSUGTHQOOLOSQIIKGPVIGLSTTEBVMXZWQUBBWXRA");
    const signed char tmp_msg_1[] = {-39, 92, -36, -86, 52, -47, 106, 62, 39, -42, -120, -52, -96, 43, 3, 15, -16, -98, -101, 98, -107, 102, -36, 38, -88, -57, 35, 74, 71, 101, 62, -99, 60, 115, 108, -110, 93, -9, -96, 40, -61, -31, -57, -15, -41, -61, -88, -104, 98, -49, -32, -34, -37, -80, 78, 69, -33, -90, -116, 105, -85, 0, -126, -77, -18, -127, 69, -84, -55, 13, -38, 18, -75, 109, 1, -20, 68, -39, 21, 88, 75, 25, -45, 1, 63, 48, 22, 48, 74, -118, 25, 83, 125, -85, -106, 106, -23, -68, 54, 123, 53, 50, 44, 106, 2, 4, 120, -127, -112, -115, 56, 19, -44, -111, 42, 124, 125, -97, 75, -103, -39, -87, -31, -30, -3, 76, -7, -44, -22, 67, 125, -3, 88, -71, -57, 90, -98, -25, -18, -92, 41, -6, 112, 119, -45, -106, -70, -51, -63, -15, 69, 76, -126, -69, 42, 56, -87, -97, -20, -49, 82, -54, 119, 33, 121, -2, -99, 114, -99, -127, 8, -79, 41, 84, -43, -4, -84, -102, 18, 61, -49, -88, 22, -32, 17, 49, 32, 119, -69, 57, 33, -61, 4, 55, 120, -82, -62, -109, -3, 24, 14, 112, 63, 62, -28, 94, -6, 5, 95, 54, -114, -36, -11, 49, 80, 51, 15, 114, 80, 90, 85, 21, 62, -116, -85, -30, -7, -75, 40, -48, 88, -33, 78, 67, -104, 10, -27, 47, -83, 38, -27, -48, -126, 71, 119, 47, 45, -54, 59, -33};
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
    msg.setTimeStamp(0.0942068738995534);
    msg.setSource(12732U);
    msg.setSourceEntity(121U);
    msg.setDestination(53188U);
    msg.setDestinationEntity(188U);
    msg.req_id = 3358U;
    msg.comm_mean = 200U;
    msg.destination.assign("YSTAORYXMQWHJFJEERGEKIXDGHFCNZABTRFWDVEMNZSRHUCCFPQTTGRZIFQUMHQTXURGKDYNNPIHGJPYYSUSGNKIBNSZFMFXZJLYBSAYFLKKOJTIHZSZPFPBGBMQIOAGEVQNCXAUPLBDAREXDDRSMDUJHWDLOYBPMKOLLGYCCEXMVQOWICEVDDVXOMRLSAJWOBEKQPQAATICGJUHYVCNMLWZXWURXINVZTVUPNUEKBCQA");
    msg.deadline = 0.02812345231438451;
    msg.range = 0.9328512985982073;
    msg.data_mode = 32U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 45397U;
    tmp_msg_0.lat = 0.43604618575425913;
    tmp_msg_0.lon = 0.027387478198095172;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.z = 0.6690579303554459;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HCCHFVAPWULYGQMVWCERANNLPSPNVCZMUQYHBBHRKWCFWCMVJLIZGJCIZIOQRYSHAUJOGDXRQAITEJHYIUQDDLFMSUPEVITYBBSOKUZFKTOOEOXMEJGFNCQWQLHVLQGTVSFNAXUMMKDNRNTGCGJMTIXFUTYXVFPIWPBVYGCADKPSMNKOLLXSARFJVAOKDWXROAS");
    const signed char tmp_msg_1[] = {110, 10, 39, -50, 42, -53, -38, -45, 63, 59, 91, -52, 20, -65, 26, 115, -84, 67, 99, 6, -22, 8, 19, -116, 74, -32, 28, 58, -69, -106, -41, 60, 102, 126, 46, 44, -126, -10, -14, 39, -85};
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
    msg.setTimeStamp(0.6828875500187976);
    msg.setSource(23036U);
    msg.setSourceEntity(144U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(200U);
    msg.req_id = 3454U;
    msg.status = 106U;
    msg.range = 0.025409320855189654;
    msg.info.assign("VTBLBKWCWEEHOGDBEJWZQUERSSEIVHSWPSRHUGBCXZGKQBTXWLJIKLVJUYDOCNVHBEQDVWLYYCSFKIMRGAZEVOLGAFRWXHXGPBZJONYKFBAYNHRNYUMMIAQAQNJTGNLHCFMDPPTAVTOXTSZQJGUXQIQVLYCLUVSHFZQTJLKRDAYTATQCIPYDPMPFWWZTDKALUWNIEKFRMOXIVRGRJM");

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
    msg.setTimeStamp(0.03487664006006974);
    msg.setSource(7779U);
    msg.setSourceEntity(219U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(42U);
    msg.req_id = 44691U;
    msg.status = 99U;
    msg.range = 0.6172462524164998;
    msg.info.assign("WJUCJNBCPYVEKNIGFBGSUQRWLGFPTEHYJZGMOEETTMBXEDWVSFPXTYTAULUPIRLTLFLBMVNBYIFIQXPDKWBDJNOABDYINISASFWCBWCHKOXUCZYIQVHOCXDUAXJYZXGUPMVMXZZEMUNPYLJGIRJDDPGZLKWTBAOFNCRRQNFPSFQKQQ");

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
    msg.setTimeStamp(0.9500902306448428);
    msg.setSource(47020U);
    msg.setSourceEntity(37U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(79U);
    msg.req_id = 61373U;
    msg.status = 168U;
    msg.range = 0.6435423594846922;
    msg.info.assign("IUDHPCCSXRYRDMGDTHBJMSHNNLABBLHUQDIEOSGWNSYQSHOCNBZRZKKXENFYCRKTZFNPLTAUALOSIMEJIILUJNOGEGBXZZWIEZDADPLEECCMMRBEAZDVPLCTDEALFVYHYLSMZKFUVFPIRXBUQPVMRYJWQJTFXSUJTJQGHGAQHKGULWYGTNGAGYMWZOAQOFTXKFDOQMHMIKJOSBPXAVBXWNVTCHXFIWJPVBPYUWKVXICVOZUQRNOVRYC");

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
    msg.setTimeStamp(0.982901188341556);
    msg.setSource(51732U);
    msg.setSourceEntity(146U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(184U);
    msg.req_id = 63095U;
    msg.destination.assign("CZMOHEXRTNTCBZWDBKGVCPMIHJEYLAADHJPJVMFIXCJPUCP");
    msg.timeout = 0.5017456915307013;
    msg.sms_text.assign("AYCOYAIJGJONFXLKDPZCNNHQRBMSADIDEDVYQGUPJRQGXVTTTLBETUBMSAAOAAWEYXBQROGWFUPWHCHZJCLIIPUUININRKZHSJKFFPZPXVNBPMYLFHZMFTXUNVKSXVNJQGSLZMJUEVWWEKJNRIEAFEKCDMXHCFHJSBYQVSERRIXHCEYLZSBOKKOTWHBQOO");

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
    msg.setTimeStamp(0.3891800380403344);
    msg.setSource(62552U);
    msg.setSourceEntity(73U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(167U);
    msg.req_id = 11769U;
    msg.destination.assign("DEYDCCCJDWDNOKRVDODGLQROFCUHAAKZPEWBSIBPMUQGBNVWPXHNGBCITWSWLKMNWGCYTSPOSMFEXNUQGOZCXIVZOAEXLRNBVXSQUKEHTKLMSAOPQQKRBWDBHTZZPJEPHYIGVRUAAJOEBIVYJATVFBLRLPFYNLMKIZCIDLPFOEUXIL");
    msg.timeout = 0.5168020778139595;
    msg.sms_text.assign("KAKIPDJMJWVZBQOGTHUUVJSRPVEGDOJYHQLRSEWTBBWHNPKLZEWTRIFTKBWMEYZNXSWAAICJHHVMZUNEAGJCGQPRUMHIZAPJEFLXDSNWQDAIZUDLZGZSHCCNAPNPLHLBMWTCOGFGNCFATOZQHVOPEGVCKLYNGIXRWXBUPRBPFXYOCTDENRVQ");

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
    msg.setTimeStamp(0.041604728422578896);
    msg.setSource(60701U);
    msg.setSourceEntity(107U);
    msg.setDestination(25113U);
    msg.setDestinationEntity(0U);
    msg.req_id = 49388U;
    msg.destination.assign("RSFRSRAOHKMQHZGVJMBPVDSFWWQBPGOVFYAESXIOMTCYDDZCZGTWZNYPQXZDIFRGFAPZVQEASIILVNFKXGHLVDAIKQCAHXYKBYUUZLSUZJERSBENJIAYBOPVBPTUTFRNIWNIUKQNXBZWJTOWMUNXDLUERXLDGTEMLEAHMSCMEJNGLHKGKRMFJUAQPDPCOUWNGLJRMPVKBBTQVQCSFOSCCTXXYLDLHNCYBOXPYWKOZHHHIEWGQVOJJITUFAR");
    msg.timeout = 0.9967739722142774;
    msg.sms_text.assign("FXUGJRGTEDHRSULOFSBEUEJWMJOIWDVZYNNPMOTCZDNLAWJMPMUCOQATGMLVTXBXCGHAWAXABMIGUXLWYHKKHBVUGLKQQZKJRZDLTLNCLRSQBTWQZMSZBFDYOHXPIWGYQTJOWCQENGEQNFPIDZNPUFIPVHVVYAQUWFBPDHXVRTYYODMEFSRSCPGBKBSYSIZ");

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
    msg.setTimeStamp(0.3910450054121669);
    msg.setSource(51863U);
    msg.setSourceEntity(28U);
    msg.setDestination(50517U);
    msg.setDestinationEntity(141U);
    msg.req_id = 47991U;
    msg.status = 150U;
    msg.info.assign("OXCZLQLIDORESJIHMMZWNTJQ");

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
    msg.setTimeStamp(0.6471275953085699);
    msg.setSource(36143U);
    msg.setSourceEntity(130U);
    msg.setDestination(58352U);
    msg.setDestinationEntity(217U);
    msg.req_id = 58992U;
    msg.status = 123U;
    msg.info.assign("VJORSISWSWPUFDRBREGAPYMBHGEFZNEDFEWDVYDXRGGMVUNUIVNPWZLRVINJQKJJLTLXWQIBPJTGOADXMUIXHHNTIAGCIYUTOSLVCTUYESTAJKYUJKYYGQNDOGWEHECOZPFQMDMXTFGRNOQCITYMPZSQBKUKARJLSMVBWOAHPBLVAVHROFKRUKPMKAWDLFEEVWFMJCCQZBFLXDHYYTGZBNLPCZQICXDBIKLNXRFCXQHQWHZOHU");

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
    msg.setTimeStamp(0.7596760964604635);
    msg.setSource(43887U);
    msg.setSourceEntity(77U);
    msg.setDestination(21065U);
    msg.setDestinationEntity(235U);
    msg.req_id = 19749U;
    msg.status = 144U;
    msg.info.assign("POHCMRGWWFSKMWRPTLZWGAORCEQSGEVCXDCIGTHJSDBQXHEVKKHDIZIYSYOASDILDJUMFUXSWITPQERKMYXULPKSZROUDPPUJRQLMBNCMUHGNRWDIFABEQHJZRLQUWZOBZEGTFAWECEFFVNXLXDNKMARTQFYYYDBTBNAZATVICGBCIEZNWJMUTNAJGNQWHCGBJENVTVLXJDKCLOPBUHBHPLKPFJYSFIULJOHFZVOXXAVGYMSXSOQKK");

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
    msg.setTimeStamp(0.8864552828333344);
    msg.setSource(53282U);
    msg.setSourceEntity(199U);
    msg.setDestination(28458U);
    msg.setDestinationEntity(235U);
    msg.state = 246U;

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
    msg.setTimeStamp(0.807205944628399);
    msg.setSource(9922U);
    msg.setSourceEntity(166U);
    msg.setDestination(62323U);
    msg.setDestinationEntity(151U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.6947231254294366);
    msg.setSource(59963U);
    msg.setSourceEntity(196U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(198U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.8966365579346538);
    msg.setSource(2315U);
    msg.setSourceEntity(192U);
    msg.setDestination(64041U);
    msg.setDestinationEntity(166U);
    msg.state = 227U;

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
    msg.setTimeStamp(0.9868665255712751);
    msg.setSource(38582U);
    msg.setSourceEntity(234U);
    msg.setDestination(53350U);
    msg.setDestinationEntity(10U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.9009587321160809);
    msg.setSource(43155U);
    msg.setSourceEntity(208U);
    msg.setDestination(40396U);
    msg.setDestinationEntity(96U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.8362258006894446);
    msg.setSource(58053U);
    msg.setSourceEntity(167U);
    msg.setDestination(55694U);
    msg.setDestinationEntity(155U);
    msg.req_id = 51759U;
    msg.destination.assign("DOSENQTCUOKZVQAPTJQDFSIWCEPBOIUEYYHDPQPNVUZXBAJLCLJRMNYTEHWVCAJLIFUGMEAZLUSWUEBGSOGMSOGYYKXFALZBWDWIDJQEBXLFRVEMGBVITYHUPTFEHHVKRIGKIDUMLTRQGZPPZBDGAUTFRMNHPKWXVWXNIQJHOIOODMSSJOKRRBZFSGVWL");
    msg.timeout = 0.7602662476203467;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 27603U;
    tmp_msg_0.sys.assign("QYHRUTUBDSLRVLJSZGUQVHNDGYBQOAPGZHGLFNWZQYARLUPFMLOAFLWNDPPOKEXCMCIMVWJOFIAJCPIZHPZOXKIUZEHIPAWXJXRNYNMOEPMKFNCJVVZHIYTQCJSZMVQREQGWAQFZHNMQHESOBDDTSJUDVAXFYRIUVDNHRPZTVKSDYGCJFWLSTLDCOFWCEKYGLKTEOHNEMXDTCKNAW");
    tmp_msg_0.value = 0.48960592526933744;
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
    msg.setTimeStamp(0.3782564793003884);
    msg.setSource(55260U);
    msg.setSourceEntity(244U);
    msg.setDestination(1198U);
    msg.setDestinationEntity(40U);
    msg.req_id = 6288U;
    msg.destination.assign("EQWHMSVPVWOLBXKLBTVISJUGUOWMKDRDFCGLYAPMUZQGLNUXZOXAJYEXBKECTJSOKCYQMZGWTWWAEFMYFSGQPMNOFYZJEGIJTYNFFFPZBUHSHSMBBNYVUPCPHIILRLDCTPUHZUIAFVYLERNOJSTYIHAAMQRJMQWZXNWGICJHZCSGKBKRCEHPDBDQCI");
    msg.timeout = 0.930282606418807;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SSWVUVWVFAZBKEJMGWITYFMJKWKZZPROUDOSIYOGKPOJNZJXEUWNYJMLSVHKAEESQLPLJHFXSKEJPTVCEIQZPQRDCNRJMLWRPXDCGSNQGCLONMBQV");
    tmp_msg_0.dest_man.assign("UZDVCCPICAPNUJCXZRAKLKCYZSEWITDGYNVTDELXSTXFUEJMRMBAKVGAJFNEPVUBRRAEBZDAPMWXSDDTCNFKKMWZKPKTZUKAIYPZBOPXOITBNEIJPTSZTYGMIHLRDUMEFTWXNQHYOEHFAVGGODSHVYQILWGJMYESRQULQQOQBXWXX");
    tmp_msg_0.conditions.assign("FJNLZTAJIMVR");
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
    msg.setTimeStamp(0.10400709234880812);
    msg.setSource(19952U);
    msg.setSourceEntity(162U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(28U);
    msg.req_id = 2094U;
    msg.destination.assign("YCRGIXFPOKXYVPYCZCNMZQFSRAOLHYVMREWJGUVJHGCOIQVMLXYFUDLSVEDXASJEFRFBGBJTAKJDLJALUPMODKJYAZWLBOHHJGANTAGNREJPEEQCGUFIAWNVRBSVMNZDYHXIKHQSUQUBWPKPCYPNRVEGKBLOZYMPZNTBEBUQEOUGTLDQWPLHXTN");
    msg.timeout = 0.12191513389011688;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 14U;
    tmp_msg_0.error_count = 222U;
    tmp_msg_0.error_ents.assign("MHSNPRKEGZPIVCOWDJQOMEGNTSBHLFRKMFYZYQLHAZMLSODNKGQLYZRCTSTJMOIVDIAPNSBGSWXXXZLQGYDFGMCWXEYFBCWMWQYVTMFUUANWGBGZBRSKICVDLPQCERTJJGTAWTTAPJFXRYBHXCS");
    tmp_msg_0.maneuver_type = 16250U;
    tmp_msg_0.maneuver_stime = 0.0032070443659345527;
    tmp_msg_0.maneuver_eta = 12263U;
    tmp_msg_0.control_loops = 3904264026U;
    tmp_msg_0.flags = 117U;
    tmp_msg_0.last_error.assign("PDQIETWSUHNQKANAKKYJRFVXYDCKTVMAYCNZAMKMSKBVUEZKFJXFPGTLWTFIGVOTOEIXTUOYMMSLXMSRHPJLPNNIVZHBSORDPZBWAQTWBOCWDSRNHQZJGDICUJQNBDFEYHSY");
    tmp_msg_0.last_error_time = 0.6149102394961083;
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
    msg.setTimeStamp(0.17361819573617476);
    msg.setSource(63570U);
    msg.setSourceEntity(168U);
    msg.setDestination(12594U);
    msg.setDestinationEntity(124U);
    msg.req_id = 18486U;
    msg.status = 240U;
    msg.info.assign("VZQSFOEWFGAXARJLDXXONQODWHPSAYYCJZIYYKRSLPUAKEXRNAQQEUPPFTWLLVHNACIHXETYUMBHVDCBXJEALKGBKBMJPFGHRTUFDZRVTICZWNWBYHUEQYSOQVLKBNRFQAICWINPYFLMCMMXYGSLTJGBJNHIAJUEGKHDSRUTWJJKZCFOTUNWC");

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
    msg.setTimeStamp(0.12602121100103658);
    msg.setSource(7441U);
    msg.setSourceEntity(223U);
    msg.setDestination(48839U);
    msg.setDestinationEntity(94U);
    msg.req_id = 57307U;
    msg.status = 185U;
    msg.info.assign("BPGVHFBOWFHZNWFSHRKRXEWJRLYKJJJPADRPQRAKQEDPXGZUCMVPRFBHVXUBEOSJPGJLFHNVNMKZGMNPAZBLVIQEVCIWUNXLEFBAQYSDBKWTYXSCZDLQBMLFEQXSCEJHBYVUZDWKYOMMQVNWCTZEHTG");

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
    msg.setTimeStamp(0.6730097209638005);
    msg.setSource(23740U);
    msg.setSourceEntity(169U);
    msg.setDestination(63430U);
    msg.setDestinationEntity(183U);
    msg.req_id = 26744U;
    msg.status = 6U;
    msg.info.assign("HVKIYHJQIAQYPUECLGRXJKTOKEHPWNCNZKFRNEZGHSECFJVDPMBVFFKMZMOLVTQIYQTHNVEOAHOLDENUJGBWDWJLKEAYPZRUQXCYCLDRGUNRBQQJZWWFTDGFUGPXBOXTSUUMTSODNAHQEIXUBOETY");

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
    msg.setTimeStamp(0.5951361555260147);
    msg.setSource(31684U);
    msg.setSourceEntity(204U);
    msg.setDestination(62512U);
    msg.setDestinationEntity(237U);
    msg.name.assign("FCTCFLTSVCEKRBNKKWNJPCWJEZQOYWUHXLTQJVLXCWPBAMIJRQXDNLJZHNHONSIMUDEEHDH");
    msg.report_time = 0.4367674682242274;
    msg.medium = 208U;
    msg.lat = 0.3728852871674595;
    msg.lon = 0.9872637488587871;
    msg.depth = 0.8638429548416703;
    msg.alt = 0.7833627135342794;
    msg.sog = 0.4150990737556054;
    msg.cog = 0.05228637780309464;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 35538981U;
    tmp_msg_0.start_lat = 0.9730718474798119;
    tmp_msg_0.start_lon = 0.4252912825710903;
    tmp_msg_0.start_z = 0.4296864961750788;
    tmp_msg_0.start_z_units = 13U;
    tmp_msg_0.end_lat = 0.5450891035214324;
    tmp_msg_0.end_lon = 0.48066031067704773;
    tmp_msg_0.end_z = 0.5408262773942007;
    tmp_msg_0.end_z_units = 178U;
    tmp_msg_0.speed = 0.8530995025248973;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.lradius = 0.9170279800147723;
    tmp_msg_0.flags = 229U;
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
    msg.setTimeStamp(0.42445915109141186);
    msg.setSource(28888U);
    msg.setSourceEntity(237U);
    msg.setDestination(15362U);
    msg.setDestinationEntity(168U);
    msg.name.assign("GIRWGHORUHARWHSAQANTUSXDJTJIVBOFSOJJONRAATKYFQUCWDPQVJXUCJLUCTGIHJIISYOWMDNXYXYLIOMSUPGGAXMHLYUCWNWIXFFXLPZLYBPVPTPMDEMKESKGZDAWFEZTTORBGXVLRCUCPQHCJMZHETPEIKXIV");
    msg.report_time = 0.7051737722007779;
    msg.medium = 24U;
    msg.lat = 0.2883173774059177;
    msg.lon = 0.42233792733640496;
    msg.depth = 0.8396350337878494;
    msg.alt = 0.8263759018809825;
    msg.sog = 0.2659795020884689;
    msg.cog = 0.36553268896335345;

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
    msg.setTimeStamp(0.3016484912965498);
    msg.setSource(45485U);
    msg.setSourceEntity(110U);
    msg.setDestination(18566U);
    msg.setDestinationEntity(40U);
    msg.name.assign("NXIALSPTONKDPNBFYDBLGJMOAUOLAGELNEKEBTXAWTSJBWQOTDDKKYFKUMPUCJYXSTUJCJVNHVFHAEUPJIGUYDACFXUGLBZVVPGREOURHXCZZIRBSBFRCDHOTMBQYKSQZUNYCXAWZEZZDCGFWWDLRAGNKCHDYYRMGLTHHQMVLPMPWIYIS");
    msg.report_time = 0.42967962572974183;
    msg.medium = 186U;
    msg.lat = 0.5903206809225656;
    msg.lon = 0.869262866817973;
    msg.depth = 0.7216640330871835;
    msg.alt = 0.3655494899279286;
    msg.sog = 0.6526532771848914;
    msg.cog = 0.12039899824190725;

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
    msg.setTimeStamp(0.09660698860300132);
    msg.setSource(65480U);
    msg.setSourceEntity(212U);
    msg.setDestination(22063U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.8674529296623213);
    msg.setSource(26876U);
    msg.setSourceEntity(139U);
    msg.setDestination(37754U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.7196853084429974);
    msg.setSource(17921U);
    msg.setSourceEntity(73U);
    msg.setDestination(43356U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.819616696649216);
    msg.setSource(22620U);
    msg.setSourceEntity(52U);
    msg.setDestination(17135U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("DIGIMRNQZXELMZXTIEKVBECWXEFXPHSVWQYMMAOOWZALDETUZDDXRIOECILVQVKQGYEOXPWJTABJWWIVRGW");
    msg.description.assign("QZGAEXGYWPAIYJPDKEXVRRFGSPMATOZPRXPFCVINVTKQEGERQTKBUGCNLBNVURQYHSUZLCRYXKJHNZFCIIO");
    msg.vnamespace.assign("DAESHATQAKGZAHWBHOYCTNXDWEHNCRXTIWSPMMTFOKSRIMYZSUFVIHFQRR");
    msg.start_man_id.assign("HTLGTLQSWKFEULPPRUIJPWMOMHEHTCKWIJDKMNTCZYUPOTABWQRRCKTZJFCBIHWUCXZVFBUVYILOIDWISJAXEOTTLPYBFEVMIPACQDGHYZYXIQDKFWGSDQCSMALZISHLRKJPLJQRABVGZDSGYGNRMSRFUTPVNODEK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XFDXEMMUBGUVSGIJTHXKTZOVTOAWGBICBPGNKRRLYKWCIWOVFISMVFGYDWBUJSWRJZOAGWTJAEWVIKHPAYEF");
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 35710U;
    tmp_tmp_msg_0_0.lat = 0.3913110129314503;
    tmp_tmp_msg_0_0.lon = 0.9056709837920974;
    tmp_tmp_msg_0_0.z = 0.0050261656600472104;
    tmp_tmp_msg_0_0.z_units = 21U;
    tmp_tmp_msg_0_0.speed = 0.9082008953047688;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_tmp_msg_0_0.bearing = 0.6809255095476491;
    tmp_tmp_msg_0_0.width = 0.5297002448399061;
    tmp_tmp_msg_0_0.direction = 111U;
    tmp_tmp_msg_0_0.custom.assign("ZOTORMFJRE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ScheduledGoto tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.arrival_time = 0.4033738521001843;
    tmp_tmp_msg_0_1.lat = 0.474253821766065;
    tmp_tmp_msg_0_1.lon = 0.271452656731747;
    tmp_tmp_msg_0_1.z = 0.23263115624884445;
    tmp_tmp_msg_0_1.z_units = 236U;
    tmp_tmp_msg_0_1.travel_z = 0.6173720769682927;
    tmp_tmp_msg_0_1.travel_z_units = 77U;
    tmp_tmp_msg_0_1.delayed = 126U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XCUODEQBVXLMVPVPUGZAVDQZMLBAUZXXSCGSVEPJFWLLKEFBQTMQRWMYSOMHICJONY");
    tmp_msg_1.dest_man.assign("LXWMWRSYRLURXAOEDLTQJAROVVZHBCXRMQSEIYCXBTXLDSKNKABELIDBCNOAJORJPNGFZON");
    tmp_msg_1.conditions.assign("UKRUZVABUWYAOVHBNGFMMRIPVMRCOINMK");
    IMC::PlanGeneration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.cmd = 183U;
    tmp_tmp_msg_1_0.op = 119U;
    tmp_tmp_msg_1_0.plan_id.assign("MHFBGNZXMNELQKBJUMPXPQFCDOQVRTMZIRNCOSEJOBRLQKHSOJXMZLFAAIZGQJQNTWRHIUOKJDVWDEWVLYTCAOIHNWCVNNCTQRLPIHKFLFABRUCSWGKDEFAESZFDXTOCYKITSMYXSUHRRVEEPVVYZHBUOFBQLIWGAGZJYBWMPISVPJFCLTPHADXPGYJSUGYWAWQRYCWSXXYUKLBKBJBPDOMFHCUEMGARHJTLIOZGUESK");
    tmp_tmp_msg_1_0.params.assign("GWZMIUSQERFMAPVLRFQWAYZPVNAUAWPWCMQEESZXFJDELSSRTYNTSXCNKASWKWTTTXYHTPYLJBDHGUPAIJQRZOVOZBMOGYDOXQBKRLH");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.32230651022111034);
    msg.setSource(44635U);
    msg.setSourceEntity(16U);
    msg.setDestination(25306U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("UFCWRRTSEEPSSWQIDSKYIGPHDNQWTCJUPZUYOWBFAXFVANXSWYXMGGVSAEJTEZRSEQCSXZQHFCLTQYYAEMIKXFLZMXGHHYYJGHYEWAMFZRILVRLNIDHKQBFFKRZDTZOSALIZVMJPRKPMAUMNBWBNVNNGTOOGGJQVKRTURDA");
    msg.description.assign("NZMDSUOUOMMDQAWFGFYRRIXNACVDDJIKIJRFDBTBGNBTLCEVJDFZOZNNFYYSPVHOARTYDQLQEFGYTUCCPAVLWAEXGB");
    msg.vnamespace.assign("FKCBLIQHYPTFXMJNUEFZFCTAUXBYUNQSTXLVQUZOGQFLROXYAJVYOYDFKUXLYVRVZJCOBAGXKDHSENRJPFQVBOIWVHZFZTUCOHTNHHUHQOMETSWBSVZYGPZMJWXCDWJJBVXSSLXGLNNHTBHGEJALMSIQUDRDGUDDRSWMLAIHGJMUPPCWRXMFQMAREEOKEBYIZA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DMDXSRTUBQLAHSDJYHETZZCBJABFWBMELSWEHDCRFQCRJWSLWEVIQQZZTHMIUJOHYNIXINVH");
    tmp_msg_0.value.assign("QIFHLTMXUIDWVIZMGMPDTKPLDMNRMRLETAPCAJCHOFWUBTPYTJOJIQYWNEWVGYLBESSEHXJCCWOEOYCBKNSDFXBWNAPLTERALFBRASPGFVBVXCBUXACAZJXKJDFVGVUVXDZYNZBHJKEVUERINKRYQRAAUGCSLSFNTUWQOIGKUOAFSHGZQYPHVPDYODZVBXTRUMTK");
    tmp_msg_0.type = 211U;
    tmp_msg_0.access = 178U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LOTWIMBIDHNPMJCKLUXSFRZUBOJRWVZJBAJYPRRAOZPWZZCITPUBKVNUEGEVYOJWNYJNEIVEFZOAXPNIRFAYEACWNUDBULDTDPXLHPCLQQYPMOVFTDDPECBGSBMIQWMMGVLJQGQYMSGARORATWVBTTWGHKOL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SRKPQCGJUJSMRZQNOPCIKEIBKIMZQQFGJGDBSJWIGRNBTHGERPXAKMLRSZBVXRTYQWMCXGWEIFLFPFLFUWWAIVGPLXHZTDACOVMQUYCCKUNRMUVZCMLXRYPBGDQNFHKCTKFHZNBOVWTLVJTUBEHJSSQXEDZWOTYUHYPDJQIHWAYBCJAGHNFOAFNYSGMJROLVAVHOABSYLPKRADYIZKFAOWEXNUNKSLJDUMTZHBUQIO");
    tmp_msg_1.dest_man.assign("FGHJJKOYXNZALMEXMIKSQOBLCZATOGPYIFPRRKKMSTEUWAXVLNCWKYUIOLZBQAVGRAPIUAMXCRSNZZNUGXQAFBHUVZOSIEULBTXXC");
    tmp_msg_1.conditions.assign("JUCYVNRPZMCLIQDSIAKITCRXQNTUGPBTUMIJMUURYYYBRIIEEYJBZWRLNXHVWRSOATFOYIGFOQOUFFEGKSECWYRTGEJPUZVJAMGNAXXLGHXWPXBBJDVDFQHSRZWCEULYYUDOQVXFCZBGTPGJOZFWNCVOWCKFRPGKXHCZLEAMKSKLZIKNXZBAPOKHSWBNYAQQMPNWSLFUBDMQQKVTTJZ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AlignmentState tmp_msg_2;
    tmp_msg_2.state = 69U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Phycoerythrin tmp_msg_3;
    tmp_msg_3.value = 0.313403497875234;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.34767921531484736);
    msg.setSource(45911U);
    msg.setSourceEntity(103U);
    msg.setDestination(19322U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("LACFWSPSXEHZHBOWANBYQZICUUPUGCVKBTBRDPCQALOXBSRFCSVRVFYYPYXYSRQDIWNIXKHLMKBKVFJSXJTTZDXZFNPDZNEHWULLHMNAQJFWRRAHVCCIUMDQSUJSDVJXKIYDUXLFJOOZYZP");
    msg.description.assign("IHHUJQHBWUDVVVJRVSNOLHXXLEMNRBCYSZYOGRVSPDIOLRRBCQNNQMZNUZUWFWVK");
    msg.vnamespace.assign("MXVJNQHWZESMINWPPQUIFRLBSHZGDXSKYMHRJBGPAOPPEQRXULPWVVFUTPTBORBNFPZIFOLAMDIOMXANCELPMUSYORVIQOQJSIKCWOOONVACYLH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XAITRAVRYZJMWPFRSTKBLHQTOOUJANR");
    tmp_msg_0.value.assign("ULNDMXPHUQSXDWASMUEFTIMVBMCTDZJTIUXNNUKSQLPJCEXVIWOLAMYFVJRLANWPDGYOZQMVRKKPWTWZBGTHIPPECJPAYZAJKJFTWZMGPQFCKOVHRRIBOLFTSSPEXRENNVYEXAABXDCOTKKQGOVAGGXBVGFSXOHCGDHFKNFDGKHSBLWLWDSCJQHIHUBBYEYKFUSIZCMQCIGXRFDIJYTVEBQANZYVUOILHZZNPR");
    tmp_msg_0.type = 107U;
    tmp_msg_0.access = 44U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DQAFHGVGAOXVQKPYAAQPFBWWOOHZEVJSPFECFEJRCLPQMUIEYWDKJDWNGJZMTIIRGAWULRRXIEVZYLHSHQBKLYTLJGVZSREVXKRXEFHHBUPATJDRTBWQJUSWTZVBBLKODFNQAGZYBJMQSOMNIICRSPLFSUQUZEQFKNUXPBMOGBDVDY");
    IMC::GetOperationalLimits tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IndicatedSpeed tmp_msg_2;
    tmp_msg_2.value = 0.18297723043100278;
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
    msg.setTimeStamp(0.5528173385501192);
    msg.setSource(35667U);
    msg.setSourceEntity(2U);
    msg.setDestination(53342U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("GLFSQJERSOKDP");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 46791U;
    tmp_msg_0.custom.assign("KBVZTGVMGCXPMPFWKQTOUSULIOQMLXNZXPAHNXTSHDFSLJYURDQGEOIJOZVJULTUQAIKFORWCOFQHQYWCRJKDEDJGKXKQRLCBEFNLCJNTROZHIDJEBUCMMNGYZ");
    msg.data.set(tmp_msg_0);
    IMC::Acceleration tmp_msg_1;
    tmp_msg_1.time = 0.7397176305819194;
    tmp_msg_1.x = 0.7673024887257416;
    tmp_msg_1.y = 0.0353618105769864;
    tmp_msg_1.z = 0.297194052508422;
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
    msg.setTimeStamp(0.11058545835176747);
    msg.setSource(26697U);
    msg.setSourceEntity(176U);
    msg.setDestination(45658U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("FAOOCOIBPRQQXMKRTZMXNHXJVSIHKMVPFFXSIPQIHGU");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 19086U;
    tmp_msg_0.lat = 0.8811929891242644;
    tmp_msg_0.lon = 0.4375965700846346;
    tmp_msg_0.z = 0.4663784124566299;
    tmp_msg_0.z_units = 46U;
    tmp_msg_0.speed = 0.9650632488087753;
    tmp_msg_0.speed_units = 230U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.3478605833591619;
    tmp_tmp_msg_0_0.y = 0.910056275731369;
    tmp_tmp_msg_0_0.z = 0.5423539589740893;
    tmp_tmp_msg_0_0.t = 0.8782443695334982;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UQBSTXLUXXTZIAIFTUOHAEBOMMBHEOPRHCXVIZXZKMYCGWFQFOVAPQCEYXNDPXORWFOHDZWYZISZVNETDJLFPEFEJQGRNRLJZRYACQYLVWEXBMILUKTKGQYTUDZXUGVWRNCUSTLQVEYHZQKRCEBHKDXDPSVAUYOGNFPSWBSIASIIJSFBTMPMWGA");
    msg.data.set(tmp_msg_0);
    IMC::Alignment tmp_msg_1;
    tmp_msg_1.timeout = 56861U;
    tmp_msg_1.lat = 0.8274049121687076;
    tmp_msg_1.lon = 0.11267556877081497;
    tmp_msg_1.speed = 0.5950846279231568;
    tmp_msg_1.speed_units = 59U;
    tmp_msg_1.custom.assign("DWEBNQOQSMOLORKYWJEWUJJGBGMUCRPGTVROHPLCWPDAHVRMJPPZJIALZKFENFQHIKOJPYXNSQUSTSLZTYHRXDDFCXJTBKNXAY");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredControl tmp_msg_2;
    tmp_msg_2.x = 0.797623219715644;
    tmp_msg_2.y = 0.03363872057478823;
    tmp_msg_2.z = 0.25171341985048334;
    tmp_msg_2.k = 0.34922971737193065;
    tmp_msg_2.m = 0.28526338738285617;
    tmp_msg_2.n = 0.9861055418186412;
    tmp_msg_2.flags = 230U;
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
    msg.setTimeStamp(0.042463567135500924);
    msg.setSource(56841U);
    msg.setSourceEntity(165U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(72U);
    msg.maneuver_id.assign("HZKUPZZXBCDCMWOMLZPSKMIXAQTHCFQWAPZNAGDHBHQYGOTCLXJWRVMCDGXLTXBMDZIENCKFBVPBILEUJRPAJJHRRGQYUGISXYBLEDUWJTVAKWBIERDPFNETETTOAVDAZGLKOQNIJQMELYBXAQVNDCBHEYPSOYLF");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.8988435310936826;
    tmp_msg_0.lon = 0.8422290816254596;
    tmp_msg_0.z = 0.6010328361216267;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.speed = 0.02156258632919228;
    tmp_msg_0.speed_units = 252U;
    tmp_msg_0.abort_z = 0.7803786532570676;
    tmp_msg_0.bearing = 0.6171567077731503;
    tmp_msg_0.glide_slope = 123U;
    tmp_msg_0.glide_slope_alt = 0.8520236782126536;
    tmp_msg_0.custom.assign("GSHARATUSOTDNPUNTFKMWXCKPALSNVMSFDVQJNQWUJSKXAYOBDOLPUVJCMMMZFMSXWTROEEHWDYFLUARJLVLHANHYCBJLZWRINHKHAEVSGVDGPLDYOBZEQYZEWUCGHWIKZSCEXBKRQTJIGXIVMCTNMFRXCSQKDOYSOFAUDLPHIZPPIJYOKCJTONRRVPUBFRGXKEWGKLQZAWCNQVFGDHZEBLFQIFPYDMONRIXBZIEIYJCXBBAZGXWGPUHT");
    msg.data.set(tmp_msg_0);
    IMC::EntityActivationState tmp_msg_1;
    tmp_msg_1.state = 67U;
    tmp_msg_1.error.assign("RNJFJORWASGDQUZJNTPBWIMFXTAKYGPSWLNEQOPVXFKMFHVYAQQTXIVZDMNINJDDWNUABNELTWECBAJKJGXEGCQGNWTCPXKNLTISKSSWOAEHKMVHQPECFBXMJDOACSGURUUGBUMHHVZHYBRIDPOIQHSSLOAIBMIXLDCPJWCVRZYAWUDVYPMUVFLLZRJXB");
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
    msg.setTimeStamp(0.5382405749018306);
    msg.setSource(6113U);
    msg.setSourceEntity(130U);
    msg.setDestination(48153U);
    msg.setDestinationEntity(9U);
    msg.source_man.assign("WIRGWKUASRCLFDXQEGSAENRNWARXMGZVUWGAGBLQFYLHABIRPURVQTUMOKIDTNJJZXEFKSHGLMPMIKJVSHJXAVIFRCJMTBLOVNYSOQRANOEOFVDRHKFDWSJUTTNOMFXMQLGJMBUKVNUBKGVFIBSZFW");
    msg.dest_man.assign("JIMXXHMIUHQNSAOILSYUPZAFWJOQWULZBMUPSPJKMSKJVZOJRPLEPKBQAYRTMCEFHCZQRDYFQYTCAUVPETWSXOYGENXFIXSXIYZNQCTRGEOBZIGPQLKDUBKASJDXNPXAHSFDSOHLVTVK");
    msg.conditions.assign("LSYAUTGQYIZ");

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
    msg.setTimeStamp(0.25889949290458525);
    msg.setSource(56590U);
    msg.setSourceEntity(111U);
    msg.setDestination(33816U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("FSGSNIHZHGJZPLWCCAXWAMKHDSZJKWAWAKLVRVXTKSCYBVDCDTVCEURFYXRLNVFOTDVLEEGQSYWXKUVYZIQEFIVQMRKOJAJTYBGWZWLHXTLLZHIZSGFPYQEUTLERBXMYMMXIMXMWFOMJORQYGDANDKJHDQCOFEUDPJGNRJTYGCIAKOSPQLZOEADBPAUCJX");
    msg.dest_man.assign("WVUAZDNJAGAIOYAMIPVBLMGYTYEPZYBMHQGRMOTXLCGFVDEETSIMLMFNTVWHXCQLSPGNWIBBSJNHUZOTNGFJSCVCVWOTORQMYJRFCQBQLUBZVKJANMXCSRZTGINZFBUXOHYXADYXEPCEREVVYRBCYXRSZEDUVSLKQSBFBJDFPNFWZIJQIRFRJKPIEKDTFKWZKKKGJGKUNTNLHEAEL");
    msg.conditions.assign("UFTFCYXPBCGVJPIIGEEPIETUAIJBILFPGRAJWNEOFNRLSCIYWYFNJWOVDOMKGQNEGVKNILUSLYFBFJAPZQSUEOMKRKZOPCJMWBDARQJHVIXQBYVCDLFYQYZQZLCHATVJRUXHEMQHZPKXKTTZZSZEDKLZPLUTMSGLPHMXDDVXVWTICSOXACBYNXJFTVRPMXBRKQSETEQNCOAMIAOUDWGUFQSJXTYOGYAHLBNADWOHGR");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.19047333025326918;
    tmp_msg_0.lon = 0.5117624617473557;
    tmp_msg_0.z = 0.4246330479696572;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.5828278897789602;
    tmp_msg_0.speed_units = 42U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.35073458416636805;
    tmp_tmp_msg_0_0.y = 0.33315930964464135;
    tmp_tmp_msg_0_0.z = 0.432165806585183;
    tmp_tmp_msg_0_0.t = 0.8838641528461031;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 23948U;
    tmp_tmp_msg_0_1.off_x = 0.11752553789808107;
    tmp_tmp_msg_0_1.off_y = 0.24531926227522127;
    tmp_tmp_msg_0_1.off_z = 0.22114091320848517;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.5266753258517336;
    tmp_msg_0.custom.assign("CIGKVKBBOISGDJYXEFDHPFNAIQEFEEOLHYTTSROVRBYHCLSRRJAWPCIOZKQVUJYWZKHBEFXSUCPLQVMOGQYWNQUMUIXZXSMNDDNKYZNZSMHWVVSTOMIEAKLGAZGLZAEVTCRCMUTQEOTMNFXODZCAWJQUZBMPDCSLGLRQAJFHTMVWBIDWPFAFQWKWIJOJZHJSOTBDPURFQDNDJXLGKYAGWELPTBRC");
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
    msg.setTimeStamp(0.4935334333510355);
    msg.setSource(25467U);
    msg.setSourceEntity(6U);
    msg.setDestination(55929U);
    msg.setDestinationEntity(66U);
    msg.source_man.assign("RDZJDUSNFMVPKMHWVUXEGCSZCOEHOTBTJHILRLZOGPIKRALPKDLWQDAOQWFKIRTVSFNHPMXBCWXAELBJWUHXOCTBMKLVLIGKCEDPGWJS");
    msg.dest_man.assign("CVOSHOWPYMSZQDEEYNTTFSXNGRAQPVQABXEVFTUAAZPIKMSUEDHMTPEUUUGGAZZSRKTVLZOUEYDXLJIFOYODUJMDJYOFUVQQXCXRTBNDKFJBIZGESGWLJCRCKOGPSJPQXDEYLQLWJVWLKZHP");
    msg.conditions.assign("CAZXBIQZEPUIAOCLBFJUJRVRISKALYWNPAPSCKYNTGURNHLHYBNCOGSXNPESDUSYDJIXRSGEDKCFEKVJVOEVFRAFIOBZGAAOCRMMPGYLAHNFODIFUMTUEKMHJFDWYZZHQWZJEOITMWXGWGECIX");

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
    msg.setTimeStamp(0.6365564499198477);
    msg.setSource(12386U);
    msg.setSourceEntity(179U);
    msg.setDestination(19781U);
    msg.setDestinationEntity(134U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZLNZTHDEHGBAFVTSKXEMCBPMRPFUXEMXWOB");
    tmp_msg_0.description.assign("OHKRLPLAOBWFPPDMJLZIPWONUVRXGITDUWVQZXYWYJXKSOXFILRCVF");
    tmp_msg_0.vnamespace.assign("WJJAAJKLGSYSXOLPPATCIUMMGXPUTCEQJZDEXRDRNLKTDABLDRQKHFRSQYVUCOPOABRNYFTHNSOAVMSTLFHJRBXRWQZIYGKMWGEXACIWYWHIIKFFVLKNDCUDYSCQQOHOKRBVTIRVCCHKVZGJUPCFLYSOXOAMWVBMZMEKVJNODQAYBZFEZNPTLGWBXDUYGTGFPQSNAUYECSJZKFZL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JEGHRMXKJDUBMYNXXHOWAJPLOYGDCCPSV");
    tmp_tmp_msg_0_0.value.assign("CSFSXMEQAWBDDOOBUNKQKNXBOIGZHHKAEICTQWJHLSDJGACGOVMAGIFYQVIARTFMLCPRXDAKQHPDTGMPWJWZZGFZKADEEYPAPLUPOVZCXBZLQE");
    tmp_tmp_msg_0_0.type = 137U;
    tmp_tmp_msg_0_0.access = 54U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YFZIXOYCUWECITOOYQYHTBZNLDPIAHVXLUTHRKCXHJCQEREVFCGQA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DYCRRUQJSCGKNFTFWODKQJPDQYCKBEGZEVF");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 54610U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9173031067100939;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.849063115524853;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6110719047195365;
    tmp_tmp_tmp_msg_0_1_0.z_units = 191U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.489033617735806;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 219U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YDUTPTDXVXWGCBUYRRBHMTSZMGWMUOIJHILQMUAWDKOFVBDNRAVMDYRPXWQMZCCEMIOFHYPPKLXEQRCPQJSOPZCRFEJFNZATTNIMMOQCRVJQDYABBBIVZVGSAKBXIFHLTFCNEESWANZUWQZZKWOEOVWTOMLNCXAGKCFRNVHRLDVSAGOFAJPVOUTQILTGY");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PowerChannelControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("CQMIKDUXPXKMUOUBZFUAWKBUFRKFWBXAVZCLPYDGLWMUPDVENIXDMARPCFDRNZWPZSAGNTGSJZEYCOGYINYKSLWZPTCZAJJKJZKYZGLFSKKHVXNCTBNOATBQEDNFQWILGWQDERMQGYVOIFHSHBESREXKIBMLIMJJOPOTOAERDWTBTMLSRCLXREJZVYHCGOBUASNROYUMAOWBQFPVNXJVE");
    tmp_tmp_tmp_msg_0_1_1.op = 28U;
    tmp_tmp_tmp_msg_0_1_1.sched_time = 0.6498669646326478;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::AcousticRelease tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.system.assign("HWWUIOMNEPCVGQLGKKRCMODYAMDSYMZJGXFMXKVPWRZYEQBEKTOLXOHYTFZAQUZTESOHYCXYUVWHSTXGKRETDHSGYFUFOJEVLPURLWZDCWIRZIAUFZNIJLRERBJUMCGPZDCAGJMKNRWHTDUAQDIKOSJZQZSGKATJEGFQBSCMP");
    tmp_tmp_tmp_msg_0_1_2.op = 226U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("JUODIOSYGIBHSWCYROCRQQKLQNYSDEHRPAWUXKDWTIPMOJSJGJYFSMBJTGMBZCDAVZXRW");
    tmp_tmp_msg_0_2.dest_man.assign("SYEKFWLIXAPNEMJXPCSUISXDVGITZXVALTAGDWIRXBRAMNHRLGYTRJKURHFCODHFGNDBYOJNMZCRCPEOTLYGLNIRBAOWSMFQQLMUUTABXUAMLPMCKICASBJQSVECJANMJWYYLMOIWVYZCKKHGKQZHBNPNVTEKOFIPFODTQVDVJHFZVHDUZZNRCBSLUWITQPEFWAXYZQXSOVBQWWDJRI");
    tmp_tmp_msg_0_2.conditions.assign("FZYKTVKLWXTLULHCQIGWSGPTMVKXLGHTRCSBHZXIRIDMWVBQXHPPRGQJEXVMVCROBRFMAFEROIASOJQRZWBBPPJMZGUZRUMYVBKUWXBGDCSBNUAYTTWQKEHYFSYYCHDOIPYNIUNXWMGQFEIDUBHSAD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.016829907497751595);
    msg.setSource(59677U);
    msg.setSourceEntity(145U);
    msg.setDestination(34946U);
    msg.setDestinationEntity(212U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DCXVHWLTJHDFMUVGYDEJHPREMGNLZFZKHVXHKXUSBNJKHNXIGIOSZYWACMDMBVZBQBGICEODXTKFAFVUTNJCXSYRQYATEWVLNLABJJJDEACNCPUSLOVZHGRTDQRZUXIPQS");
    tmp_msg_0.description.assign("UQNFHQOGCAQ");
    tmp_msg_0.vnamespace.assign("YDXKUDZGJIVBLCIGOVNPNENTBHXUYVYAIFEPJHLBCCYIDVMHTVJMTIAMIFLKZZSABWLNYMPUBQLKOXYKWNYOJAERDARNCJWTPRXEQLPJJOENBRGCSEFWLKQRMEVUUMIXTVDPHCJTDPOUPAMVVNYTQBISGYCMKSWSSGICPEAQMWDCRFHGWHZUXGAERZDMWPUJNQLGZFLESGHUXFNIKTTFABQTJFZZKVRD");
    tmp_msg_0.start_man_id.assign("XMTPQGHLTDJJUGJNAUVNBOGCDGPHRJXLMABXDLDXQMIZRTYIK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DKOVOBYZPWGWIOKXDEFAQRGXRCEMINZJBUCGYQJCTBNYCZZGPXHXIFFAQTIHNRRJVXELFEKMDMUTHSMBSPQKLNMLUCIFQDIPHGZHTLEJZUVDALBJEXVBRKAJXHLGMWQGKLTMNMTYEDQVVIUVPJXYDWXPFCTI");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.arrival_time = 0.9037742388321862;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.5934757949499375;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5758834321038577;
    tmp_tmp_tmp_msg_0_0_0.z = 0.30084342935832764;
    tmp_tmp_tmp_msg_0_0_0.z_units = 2U;
    tmp_tmp_tmp_msg_0_0_0.travel_z = 0.10263781146272977;
    tmp_tmp_tmp_msg_0_0_0.travel_z_units = 20U;
    tmp_tmp_tmp_msg_0_0_0.delayed = 12U;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FormationMonitor tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.ax_cmd = 0.08628479344028728;
    tmp_tmp_tmp_msg_0_0_1.ay_cmd = 0.4593219385700882;
    tmp_tmp_tmp_msg_0_0_1.az_cmd = 0.09626823612427682;
    tmp_tmp_tmp_msg_0_0_1.ax_des = 0.20940937794281478;
    tmp_tmp_tmp_msg_0_0_1.ay_des = 0.5363913676867341;
    tmp_tmp_tmp_msg_0_0_1.az_des = 0.9515506319681442;
    tmp_tmp_tmp_msg_0_0_1.virt_err_x = 0.2511999455842473;
    tmp_tmp_tmp_msg_0_0_1.virt_err_y = 0.530351238858254;
    tmp_tmp_tmp_msg_0_0_1.virt_err_z = 0.40674972158947664;
    tmp_tmp_tmp_msg_0_0_1.surf_fdbk_x = 0.5046626276185135;
    tmp_tmp_tmp_msg_0_0_1.surf_fdbk_y = 0.7030278825711404;
    tmp_tmp_tmp_msg_0_0_1.surf_fdbk_z = 0.5238291564972061;
    tmp_tmp_tmp_msg_0_0_1.surf_unkn_x = 0.42145758089181296;
    tmp_tmp_tmp_msg_0_0_1.surf_unkn_y = 0.967537551339095;
    tmp_tmp_tmp_msg_0_0_1.surf_unkn_z = 0.9965108747324707;
    tmp_tmp_tmp_msg_0_0_1.ss_x = 0.9763478431589937;
    tmp_tmp_tmp_msg_0_0_1.ss_y = 0.28374604850051965;
    tmp_tmp_tmp_msg_0_0_1.ss_z = 0.7083239497143693;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::LcdControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 26U;
    tmp_tmp_tmp_msg_0_0_2.text.assign("VIPUXEUWMOMUJRQTFWJCXQCNJYDVEMYXGTGSYCUELNYRPXWMPFCIZSDSZHFWQFBROBDYACORIBXFWZM");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VKFVTMMZBACWFIZLEJEBCSIHRBYYCXVOJAIWCXSHCVNAOHEZWFSJWMKGNQQHIZGDOMCY");
    tmp_tmp_msg_0_1.dest_man.assign("CSOVNVUSROWFXEIOLRQQPYIDYXNGFKHVWQBHUKBVZMENAZNYWYZTQRQHSRDTBYVAQWRRTUZVGPHIDNIEQJKSUAEKOYPNPCOHCTRGQPDBXIBPLRTHTPBFDFIYNENGICLSGXIEKWTPBKI");
    tmp_tmp_msg_0_1.conditions.assign("WPWSTQHYILFCBGJVZBKANYOFYJENUBZCQRHBLVTNKQUTYQPTVDRNNBTWPVANTRPRIDXEGQZZAOQMFLLSLGBBHQYWDWPUVFYRXKANGYMSIHDVWOEBKCIGHD");
    IMC::ExternalNavData tmp_tmp_tmp_msg_0_1_0;
    IMC::EstimatedState tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.28563182794098263;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.7755114463786585;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.height = 0.09978534220521595;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.35397878382949977;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.47859668429672664;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.8330539044173301;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.phi = 0.24421632330024345;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.theta = 0.04810820257794701;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.psi = 0.7597931801372402;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.u = 0.2237199937565808;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.v = 0.10500052178038732;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.w = 0.7243382818920795;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vx = 0.150284050493388;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vy = 0.9344923118825491;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vz = 0.4923097852574333;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.p = 0.6444494034612025;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.q = 0.370376384588192;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.r = 0.21004280625086946;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.depth = 0.4081580869251705;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.alt = 0.7147148899676006;
    tmp_tmp_tmp_msg_0_1_0.state.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.type = 1U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::HistoricSample tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sys_id = 19666U;
    tmp_tmp_msg_0_2.priority = -69;
    tmp_tmp_msg_0_2.x = -4076;
    tmp_tmp_msg_0_2.y = 2601;
    tmp_tmp_msg_0_2.z = -14833;
    tmp_tmp_msg_0_2.t = 15496;
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("NDGQHQXRCUFXEEXGOKWQXWMLUXOKCXCKABTEVLNDUDGMHPACYFFPLYSGOEESGZGIYZZCDSOKROHJZNCKEANKVIYEXYTVNGMFTKOTPCMZQWASRBFHKWIDIYRPYZWFJLJBEICXHDPZBMSZAAQQWXSDUVSYHNFPMICTNOTSHBJLQWDVGYUBGLIBUCWJIDUJTRQDPLVOJAUPMWHBTVRNHBKYKZSUAQLUIVNFOOFWJ");
    tmp_tmp_tmp_msg_0_2_0.attr_type = 159U;
    tmp_tmp_tmp_msg_0_2_0.min.assign("YLJGXZGNWNOXOGSKBHCPQSFTFLESRNGMDMJOLSOCPUZDZPCOS");
    tmp_tmp_tmp_msg_0_2_0.max.assign("APYECLGDZBFGWKGWYJUDNZQAWODPCQJPJQLSHVAFNXRMFEPIEHXLYGAIBPBOMRNULGCOELURSAERJWPXAWIRHUFCQIRTXPTYAQXJOLTVIKIFCTLRDNZXMWVOAHYFKWSWNLB");
    tmp_tmp_msg_0_2.sample.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Pressure tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.7833872061773667;
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
    msg.setTimeStamp(0.7053589857345607);
    msg.setSource(24453U);
    msg.setSourceEntity(208U);
    msg.setDestination(65497U);
    msg.setDestinationEntity(220U);
    msg.command = 16U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QNWPUWLIQBXBALQGHNTTDDWGKKVKTUSZVHHZLEMVJQCWGFAMZYBDLYRMMKTXEAGZQOWXAVGWDQ");
    tmp_msg_0.description.assign("KPZOAWHIKRJEKPQHXLPYDJVTZBURFRVEXUQNPIMNKWYCJQPVYNAJMGTZNDSDRANZRXTBVRFFUQBIHLTIOPMCXOBOZKUZWCEKHARAWYHREUWMXNGRQSCPMSCHTQQNGBOLNXVHTNHFDGCUFULYQZ");
    tmp_msg_0.vnamespace.assign("MOYBSUGPHAZFWBULBQCBPZQUCYPHDTNYYNYDCPATVYTHDOLNKRBJSIXUAPOAIVWVQCMVOCDTDFTBRLTFSDSPBESLNTUAGSTNQIHRJKMZISHQGMXWPLEYKRSAJCRPWUWCOFMVPATXXYQJRRCBVWZSIHOXZGMJJUXUZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YHLETLEKNTIAPRRMOWFKVJETOW");
    tmp_tmp_msg_0_0.value.assign("MHSTHQFTLIDDVOOOQJSFILMQABPSHSNNZJJWDUXFRHRUPXSRYGYDZTQMCDZZUPMMODTGGEBGEFYAQBWXXKCEAXZSMLNVEOSSAWWYIPURQBWZECVDOADKRALXKBLLOTZHVJLTBIMHKNIJGGFYUVDCLX");
    tmp_tmp_msg_0_0.type = 17U;
    tmp_tmp_msg_0_0.access = 104U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DJUTNBHAKYBCMDNRVZAVQJPTXQQHCXCBSJAPJPFWGRWLFLCRKAGHMHYXZSLRAMGEGETKNZOIANCTGYWTCYMTQODDOSPPFHMJSSYVPYPEQKFEZNLQMOLPDHRGOQQTIWINNXXTCNJVBEMOXFRDKFGKZHIBWWLGWFSURJCDJRTVKVKHAYMRAOSYMLUVZZXYJOJKEWEIABE");
    IMC::AutonomousSection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.06455631313470078;
    tmp_tmp_msg_0_1.lon = 0.5772320856584229;
    tmp_tmp_msg_0_1.speed = 0.12131852332545146;
    tmp_tmp_msg_0_1.speed_units = 96U;
    tmp_tmp_msg_0_1.limits = 167U;
    tmp_tmp_msg_0_1.max_depth = 0.8471435139155603;
    tmp_tmp_msg_0_1.min_alt = 0.2179556009598177;
    tmp_tmp_msg_0_1.time_limit = 0.12843498766267414;
    tmp_tmp_msg_0_1.controller.assign("WAJSIOLZXOYHDZNONHGHHGRRKKWGTTXVYXFKENYUQGOINOSIDLOMLBTJUKWFZHCKFSDFQJDEARZPRGYWPLCRIBKTUPRBMUSZEYDIEXXMRZJHOVBQVXKQGOWUCAGLHWDJKYIIIOCNAPPFXCUBLJFRNEUGKZNNDEPFSWQBGXWR");
    tmp_tmp_msg_0_1.custom.assign("QYPJAQXKSSVFJTBAXJCIISJAHZPZVWCZNOPWXXYMTLCCCUMHFHJXABIAUKIYWEQMOFMWIALUNWFPKZUKZJEDGJEWWCSYMORXYSXBVUMKYBDUARRGQOAJIRBFRML");
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
    msg.setTimeStamp(0.6233130169726688);
    msg.setSource(47255U);
    msg.setSourceEntity(59U);
    msg.setDestination(60580U);
    msg.setDestinationEntity(141U);
    msg.state = 141U;
    msg.plan_id.assign("RWQYUTHIAAOSEZSBOQFDKKXDCWEQHNZXQKAFTZOGHDVACKZIORUDVRVXDBOTPZOLNINAPXGANWKQSOYHKEFXJKBYWBRHCGTDRLRWBKMUDYPTYIZRCJLMOZQETC");
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
    msg.setTimeStamp(0.42459400083353693);
    msg.setSource(3791U);
    msg.setSourceEntity(175U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(253U);
    msg.state = 40U;
    msg.plan_id.assign("MGQOMVYFRTISIJR");
    msg.comm_level = 73U;

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
    msg.setTimeStamp(0.044587693034925824);
    msg.setSource(51412U);
    msg.setSourceEntity(178U);
    msg.setDestination(44190U);
    msg.setDestinationEntity(253U);
    msg.state = 101U;
    msg.plan_id.assign("MKIKAPUHQSZDFTTIBRLHRGDYJETXSVOHYVXLNICQFJIWJXHGTBCFYLINWFXTDUZQZIQLEQJWMGGZMAANECIYLYXKFQEAPRBDYMGRMMUNXWAOOCEBDOOKCKVU");
    msg.comm_level = 80U;

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
    msg.setTimeStamp(0.44958612107779883);
    msg.setSource(45213U);
    msg.setSourceEntity(163U);
    msg.setDestination(59519U);
    msg.setDestinationEntity(171U);
    msg.type = 243U;
    msg.op = 232U;
    msg.request_id = 21022U;
    msg.plan_id.assign("IQJOUEAKLDAMEETPLCGTHKHNFHFTFKIZJROFCQSPFQUXUMLYWFKCTXVCCTIFYNRKAQHXQVPDJMOJBDVNWHURNEMZXMIDUSOPVAEOPOJXBXGPDZYIBHDDITVLVJIFAXWBWRTLULGEHWSGNBLAVLZSZNZKYEESNWUTWRPUMGVEFTCKQPSJNYGHMGVRWAXIOIOQFYGRYASYOZYZWDZJDUKCABIXBHCRMPGSSUQTK");
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.41633914839260067;
    tmp_msg_0.type = 31U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RVBEAPVXFHHKLCKXEKQELZYKGGOASWIARTPBLSGDXEHROOMFVPVUZTKCRPIMY");

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
    msg.setTimeStamp(0.7709209330160942);
    msg.setSource(58273U);
    msg.setSourceEntity(24U);
    msg.setDestination(25965U);
    msg.setDestinationEntity(90U);
    msg.type = 60U;
    msg.op = 42U;
    msg.request_id = 50972U;
    msg.plan_id.assign("JCUSYMSHKUOPZZSLQGXPGBVYFXFMCWPNWZLXZMSOFEWXRIQHTZRICNTZEHBTAFYGQFIRQUXKXOBVCDEAWVOGISVTCQGHHTMFNDAXPMJBHXQFWGGEDBASNWZLLKBEVTDNJYIKWFIPYHLYOYRDIIODDEMAADHSNLIONPAMCXTYWMBAOXEJLBCTNVTWPAUDIVZYUQYQJARKEZKEVNKKFKWUJGPMQDJLLRBUTMKHSZUPBCFSSRPGR");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("AIFMYJRTYMUGPDGLLWLIYBJCSRSFDVKNTETAU");
    tmp_msg_0.plan_size = 58772U;
    tmp_msg_0.change_time = 0.2865403675142282;
    tmp_msg_0.change_sid = 40011U;
    tmp_msg_0.change_sname.assign("ITSCMARGQFVOGTPNKQCHYGPEAKYXWKXBMJRWKTDDACDUCGTFXUBTDZLOZZAYXRMJWWISJLWMFVXPTEGKHFNQISOWJBRDHYLRZRVSZIPHPOMCBQDVKIAHSBLNDFISPBNOXVKKVUUHALCAGEJKLSIOTGUZXDFIJNMVRMUONYPRQIQFBCSEJALNJDCWEEFSAEGCYMYJWGZEHLXMHHWBLYHFFEDWNNTIBVPTGJRVMSQVOCZXYUYUUPLATQOZUO");
    const signed char tmp_tmp_msg_0_0[] = {60, 27, 104, 63, -124, -77, 109, -26, -22, -31, -25, -84, -121, 112, -56, -102, 93, 49, -128, -109, 36, 47, 66, -55, 85, 76, 81, -10, 20, -23, -96, 90, 57, -56, -72, -104, -81, 51, -65, -89, -121, 23, -69, -64, 65, -54, -95, -63, -19, -7, -122, 16, 0, -118, -46, -121, -2, -60, 4, 98, 15, -33, 17, 14, -87, 12, 52, -33, -118, 85, -64, -1, 82, -20, -87, -106, -9, -94, 67, -64, -23, -103, 106, 63, -84, -71, 97, -3, 106, -80, -11, 69, -113, 19, 58, -4, 33, 85, -81, -110, -123, 16, -102, 41, -72, 83, -105, 15, 1, 23, -39, -60, 30, 28, 66, 72, -76, -41, 12, 2, -18, 101, -47, -94, 97, 69, -2, -77, -68, -60, 45, 116, -105, 56, -124, 83, -1, -122, -86, -63, -19, 54, 120, 19, -51, -21, 91, 17, 34, -91, 54, -119, -90, -116, 48, 73, 51, -32, -60, -75, -124, -51, 48, -23, -48, 92, 51, -87, 7, 46, 74, 85, 21, 51, 70, 84, 100, 86, -95, 112, -128, 30, 68, -101, -104, 28, -101, 83, -70, 56, -19, -27, -112, -58, -10, 124, -77, -7, -98};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ILFWLSTGGCVQDYCLZMWRUZRTNAEUDSUJEVEGGBWAGVZPRSAQAYBEDPIXHFOPFBKQWLIVOKLFLPAVPSEVQEUCRNVSHTZAPKUIUWQRXMEYIKOGIAHDSRTFWHKJCAZQPOWVXWSTYTPTYHQMZNBJTRSXYFDMGCHITTNYSF");

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
    msg.setTimeStamp(0.7408855615517514);
    msg.setSource(10268U);
    msg.setSourceEntity(31U);
    msg.setDestination(12948U);
    msg.setDestinationEntity(232U);
    msg.type = 178U;
    msg.op = 40U;
    msg.request_id = 14744U;
    msg.plan_id.assign("RKFFITFMMWFBHSUQQTVCCKBKXLXJXLAGYNXQWZAN");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 14U;
    tmp_msg_0.goal_id.assign("MIFUSNQNOIAJFM");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("JOAOMYDXYGXUIYEYTWWRFNVVPLANGRDJVCCWBCBZZWJPJUMOIESZNVWUWMRLJHJYMQWIFXFXCLGJFRSLNAIHGNALANAQOZMLEINQISDKJUZTDKWUXAVIEPSBFTASKKXOHLRZ");
    tmp_tmp_msg_0_0.predicate.assign("JXMWNLVYFQSJCKHHFQKDSCDTMUWRSFJXRGFUOQOVHVMABBUKVIXEGFJOYHAJRGKCHUSCTHLPELKMQDDYXQYOQRRZOLEUPUPJBBSPIZLNDBGLALIYKXVCOAAQQATNTYTEMVSVRIDPXDEVFMAMXJZSMGHLAEZCPKCTBNHFDYNPMGFWIQLIDVOZVNYJGGXMWBPBAERWJWRXWKISUCEEQTOTCTFGLIZBIDOBKRNHZZOJWTUZHSUU");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("LDTNOJCECJKFNVJBGBLMHAPDVRYSAKHAHEIMIXRXTAXGCNIBDQLMVTTRWNFKGJJWFSIWRBIMDEYHXJAXGCLGQOSFLAAGIESEHCWPWTUHKOAUPPPVVHUXESELNUUBQQWYTYZHVVHURYFLOZEYROS");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 55U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("RKJYMYGQTADQBFJIOCGROJAZJKUTBOSZDSDPFJGFWEDLNRRZBOCUDTJZNESXIBTFBTELIDAXCYDERPFIYMQENTPSUTEHWXGLOQKFVUGCFMRXLFWGFNUKYIZXYGHANSREZSOCQBZAZGKERAGSWOSMNMDAKPCTAPIJQEHKUPWGWITINMBVMZJYJNHPMASCR");
    tmp_tmp_tmp_msg_0_0_0.max.assign("BYOUMGPLXANHKCULVVYMBQOTNVZCYSICFAKCPAIWQHATDLNIGKDRQSYQYOJSJTADHKEWKHBNCDLDJRXWUXZINHW");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ULULCYDLCMZZBNIOEICTUMDRYSSGDAJCKIAMBGNWDBBXSFCEIMXWKPJMODYTHEOFXPXZWBRAZPWNVOVQ");

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
    msg.setTimeStamp(0.286760513096032);
    msg.setSource(20200U);
    msg.setSourceEntity(240U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(153U);
    msg.plan_count = 11465U;
    msg.plan_size = 422703322U;
    msg.change_time = 0.07293267790116353;
    msg.change_sid = 23318U;
    msg.change_sname.assign("GPXUAPNMPNRELLODTWTWFEKLZOSSIYYFMYHTOZYVSQHHBMKJKNKARCFXVJHMRMEMFIZWUJFZDDCBXADQNMGNIDIPNJSGTHGTICXAQRQWLRFS");
    const signed char tmp_msg_0[] = {-64, -113, -97, -49, -4, 53, -51, 76, 69, -117, 14, -109, -122, -55, -43, -67, 50, -42, -24, 48, -38, -110, -19, -2, 2, -22, -29, -2, -28, -88, 79, 92, -65, 53, -35, -92, -14, -85, 0, -113, 2, 93, 29, -66, 89, 15, 125, 1, 9, 40, -36, -82, -81, 0, 18, 40, -79, 6, -98, 61, -123, 86, 29, 70, 15, 112, -73, -100, -39, 6, -1, -65, 0, 57, 56, 116, 73, 117, -8, 122, 56, -15, 111, 112, 21, 52, -46, 114, 48, 60, -54, -104, 90, -102, 30, -18, -81, -53, 62, -3, -106, -61, 27, 91, -11, 91, 108, -114, 43, -92, -70, 26, 77, 76, 78, -105, -32, 23, -56, -77, -110, 109, 78, 111, -52, -6, 49, -47, 68, 125, -56, 62, -22, 28, 42, -109, -75, -36, -113, 104, -122, 56, -102, -101, -6, -40, 11, 102, -57, 79, 38, -100, -6, 53, -70, -70, 52, -118, -15, 113, -67, 112, -80, 101, -41, -10, 100, -76, 22, 54, -71, -60, -33, -43, 15, 39, 126, -81, 12, 71, -19, -42, 24, 126, 47, 35, -10, 101, 93, -105, 96, -13, -29, -23, -76, -92, -21, -87, -126, -38, 58, -128, -57, 2, -41, 94, -12, 67, 40, 37, -125, 10, 118, 86, -33, 36, 45, -32, 94, 106, -14, 6, 19, -110, 76, 88, -60, -61, 70, 44, -63, -63, 122, 30, -51, -62, -120, 85, -8, -83, -3, 36, -89, 49, 110, -68, 112, -119, -119, 13, 118, 24, -125, 36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UMNJGFIXNYJQLHOTDHIWRZBBCGYLWNDKEPGPKMMFSXWRQGJDQGPKAUMKTZMTVQXTAHPSWVIVBVDROAEQSXRUSAYSIVWPSIMSQXFUEYINPQOYSEKUUMGDHZHCTYJFNEPZBJVBQLHBOPOANKTCBAYUWNGLRBXASUELZNFEPZETEBJPOOMHJXLAOXKFXEWVTVROFGLYJVYKLLDKZDDMDGCKQCZZIVCRJRJINZCTUHFIXIHNGRAOBQDAWFHTF");
    tmp_msg_1.plan_size = 29356U;
    tmp_msg_1.change_time = 0.9942320635118197;
    tmp_msg_1.change_sid = 46934U;
    tmp_msg_1.change_sname.assign("MFCEDCKBJJEGIHBLMKMSTPTFUYJXKZXCGJHDTWPYCLBZBG");
    const signed char tmp_tmp_msg_1_0[] = {86, -14, -35, -67, 122, -125, -83, 31, -103, -50, 16, -121, 75, -27, -31, 117, -13, -52, -92, -88, -113, 43, -41, -91, -1, -14, -91, -120, 48, 21, -71, 81, 98, -83, -77, -59, -90, 8, 68, 17, -16, -59, -60, -19, 111, -112, -117, -28, -91, 33, -30, 76, 103, -121, -52, 59, 96, -121, -49, 124, 65, -26, -52, -30, 53, -120, 48, -87, 21, -34, -109, 58, -87, 25, -36, -59, 81, -80, 64, -60, 68, 55, -51, -47, -91, -123, -72, 15, 93, -91, -101, 85, 56, 43, -116, -26, -83, 65, 101, 58, 89, 100, -3, 61, 1, -5, -53, -61, -25, -83, 121, 79, -95, -114, -87, 113, 18, 99, 125, 32, 37, -26, -71, 22, 122, -74, -31, 83, 37, 27, 34, -116, 22, -102, 79, -116, -73, 42, -28, 78, 102, 55, 45, 56, 99, -73, 92, -58, -3, -16, -39, 14, 39, 126, 89, -38, 18, 112, -60, -8, 61, 28, 99, 37, -124, 87, 111, -20, 104, -85, -93, 96, -42, -10, 80, -107, -49, -41, -103, 119, -36, -3, 33, -45, 82, -26, 42, 30, 33, 59, -106, -67, 80, 11, -74, 118, 103, -24, 95, -34, 37, 31, 10, 95, 106, -34, 121, 122, 18, -116, -63, 119, 28, -11, -93, -90, -21, -80, -42, -3, 57, -52, -62, 5, 43, -84, 78, 34, 60, -109, -59, -78, 108, -2, -87, 44, -56, 1, 108, 25, 97, -103, 104, 8};
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
    msg.setTimeStamp(0.10916425197072155);
    msg.setSource(5168U);
    msg.setSourceEntity(122U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(252U);
    msg.plan_count = 1257U;
    msg.plan_size = 4240203108U;
    msg.change_time = 0.8124974345668482;
    msg.change_sid = 65123U;
    msg.change_sname.assign("XOULXHJBCSDEFKXGYFSRVKIINEDJTVQWPVUVSBLQWLRUDINONZYQJAXMSJBUYEMTIQRYLFGDOBTFJNCGAPIOQMGAAFYSWYQRRCHUVZNEDEHCSRCGBNJIWMTMCCXNZUMQGWPHPKTIZLJZLLOSLUVGVZMBFKWTXEDMWDYKLNIEHWTQOJPDBZ");
    const signed char tmp_msg_0[] = {25, -10, 9, 33, -22, 104, -102, 67, -123, 23, 26, -15, 89, -35, -29, -70, 52, 82, -108, 36, -30, -8, 104, 67, 70, -5, 42, 57, -96, -87, 112, 116, 103, 79, 108, -67, 125, -59, -19, -82, 65, -108, -108, 2, -114, 7, 114, -59, -48, -67, -11, 48, -128, -102, -36, -30, -100, -49, -14, 32, 41, 9, 121, 125, -107, -96, -40, 77, -47, 53, -120, 30, -93, 50, 7, -125, -11, -54, 123, -47, 93, 123, 80, 89, 38, 89, -98, -101, -21, -77, 118, 32, -13, 115, 13, 114, 35, 27, -83, 16, -23, -10, -13, 5, -64, 17, 108, 62, -57, -109, -81, -53, -22, -57, -24, 81, -81, 26, -82, -21, -51, 94, 91, -116, 124, 94, -38, 109, 82, -119, 69, -104, 111, 111, -102, -74, 78, 96, -25, 80, 64, 58, -68, -61, 68, -42, -114, -86, 114, 26, 108, 100, -59, 32, 19, -98, 68, 120, -28, 76, -54, 52, -37, 114, -4, -14, -105, -88, -70, 24, 92, -47, 66, 63, 117, -22, -107, -51, 93, 31, -49, 6, -1, -7, -12, -99, -83, -109, 123, -61, 7, 105, 39, -43, 87, -91, -84, -21, -118, -63, -47, -79, 60, -115, 6, 123, 92, 124, -78, -67, -127, -78, -7, 68, 104, 113, 2, -68, 13, -3, -47, -77, -67, -18, -10, 61, -62, -107, -64, 35, 99, -25, 96};
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
    msg.setTimeStamp(0.6695153937863302);
    msg.setSource(45938U);
    msg.setSourceEntity(43U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(196U);
    msg.plan_count = 65190U;
    msg.plan_size = 1357176235U;
    msg.change_time = 0.5228564928326151;
    msg.change_sid = 31607U;
    msg.change_sname.assign("EQDQKBDSXAEPEBRPGIJNJOMGMKPDGABVPCOZPCGXQOXZRHGLTNLDRBOVUCHWMVXZJPKDWHHXCFVHKQDWRSWHIHBVGEUWJFAFSYNVVSKSZYENEYZYYWMBTEZDFHAFARALXODCVQUCCXQLSTOTJJVQDYPEUAJIJEKJDLHOEJWUZOXBNAXGIIALKKKFFIMLMBMTLMAHGRMCYLUBFRWYCTQXTQZSPBVZNMLRTIIPZGWOGTCRNNRYFUTUQKNNFS");
    const signed char tmp_msg_0[] = {21, 77, -99, 92, 100, 123, -18, -115, 111, 112, -39, -107, -107, 50, 57, 75, -118, -8, 121, -25, -23, -116, -108, -122, 108, -125, 23, -128, 55, -112, 32, -58, -85, -39, -112, -8, 48, 45, -19, 78, 107, -4, 38, -97, 71, -64, 93, 90, 38, 11, 41, 58, 102, -111, -64, 123, 112, 24, -111, -91, -5, -78, 60, 119, -41, 12, 8, 44, -72, -55, 102, -92, 35, 7, 40, 6, 125, -101, 24, 45, -43, 82, 47, 42, 23, 36, 68, 36, 21, 6, 3, 84, -47, -119, -26, 94, -70, -99, -43, -52, -117, 108, 25, 60, -104, -93, 46, 17, -57, 87, 23, 48, 77, -101, -37, 57, -70, 81, -21, 71, -79, 123, -116, -112, 76, 59, 25, -32, 117, 110, -59, -55, 24, 78, -115, -45, -123, 22, -51, 116, -16, 92, 5, 77, -15, 36, 17, 92, 109, 79, 10, 30, 90, -43, 64, 19, 79, 11, -57, 30, 54, 115, 48, -17, 19, 42, 115, -88, 75};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DXLFIFVEAZAFJDGNNHNQPNBCBYAX");
    tmp_msg_1.plan_size = 64715U;
    tmp_msg_1.change_time = 0.8766101073982505;
    tmp_msg_1.change_sid = 54779U;
    tmp_msg_1.change_sname.assign("VBIZOOOEFENKCTYYIXZQHTMLLUTOMIUYQLBSICWNNDJEGRJFJ");
    const signed char tmp_tmp_msg_1_0[] = {113, 2, -106, 20, 59, -122, -110, 74, -11, 14, -49, -46, -126, 111, -120, -40, -71, 3, 59, 78, -60, -88, 80, -61, -24, -86, -53, -5, -47, -10, 68, -69, -49, 108, 115, 96, -23, -62, -94, 55, 95, -54, -56, -41, 45, 88, 69, 102, -70, 79, -103, -127, -89, 90, -128, 95, -46, 2, -59, -60, -92, 123, 10, 107, -57, -88, 4, 114, -15, -97, 1, -39, -88, -16, 36, 29, -27, -64, 37, 58, 37, 1, 10, 44, -11, -57, -53, -15, -56, -80, -24, 98, 33, -95, 87, 11, 95, 28, -95, 9, 73, 126, -37, -85, -91, 16, 122, -33, 121, -37, -57, 42, 14, 57, -105, 65, -39, 31, 126, 108, -110, -87, 121, -22, -58, 34, 4, -110, -80, 71, 44, -117, -28, 81, 86, -40, 79, -75, 85, -35, 40, 28, 47, 94, 68, 85, 21, -88, -85, 92, -93, -112, 106, 108, -28, 45, -91, -112, 109, 34, 76, 49, 63, 124, 32, -89, -87, -36, -127, -47, 45, 78, -109, -50, 65, 8, 104, 61, -112, -118, 79, -83, -28, 87, -19, 118, -48, -93, 94, -120, 43, 17, -9, 106, 106, -60, -40, -111, -85, -18, -99, 30, -80, -122, -69, -31, 17, -70};
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
    msg.setTimeStamp(0.5640841690597891);
    msg.setSource(16919U);
    msg.setSourceEntity(106U);
    msg.setDestination(25649U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("JXLIAUVRTMWJMDYPRETDEDVASSCTUGOXSZZIVGJPUSBJLFQHIWILBIZKPLANHGHOJBYGEMQWMYBOFVCTEUKAHIQSU");
    msg.plan_size = 58480U;
    msg.change_time = 0.8408462790781318;
    msg.change_sid = 33578U;
    msg.change_sname.assign("KEPUIJWABPNXAGSQVHCMPNJCFLKUEXYFMCOKBQCKDCSHTWFMPIXYYGGEVITOLDNXUQWIDHBGILHZTOLKNXZBYZZNSFNBLBFRBAHRTJNQHMNCZJUDOVPIUIGVQRARWKFCWBPXOXEEHDMXYWJWWSF");
    const signed char tmp_msg_0[] = {97, -125, -125, 46, -37, -56, 44, -60, -123, -123, 90, 117, 77, -26, 59, -77, -46, 45, -29, -33, -36, 95, -18, 2, 51, -87, 105, -102, 26, 30, 102, 42, 78, -9, -26};
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
    msg.setTimeStamp(0.4737763060178998);
    msg.setSource(61198U);
    msg.setSourceEntity(1U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("JMCHSIAGIYWJOOJRDEYXMQTDPEXCYCPNSOQLODHOWTWVFPZKQZGASPQPMEBWJBKQSAXSVQARCNREKGHWUGUKVFSUYABOHVWNQVIZQBLNFTCJXEYIGLIKBULZYSTXIMFJJDNBGRDCTFPYLXRITLX");
    msg.plan_size = 11539U;
    msg.change_time = 0.45486087844676104;
    msg.change_sid = 42826U;
    msg.change_sname.assign("TCGBBABRDNDFLJIYTXJBUJYIFAVNVMJECQGZQUQKDFRFWKLRQUCPSMSLLMOPYSKSRNUZTVJQHLYYAGQLFOZFCKIYUDXEAO");
    const signed char tmp_msg_0[] = {-56, 100, 38, -61, 105, 18, 6, -82, -113, 27, -37, 33, -105, -108, 49, -102, -24, -29, 56, -7, -58, -28, 100, -44, -37, 39, -35, 20, -19, -76, -5, 96, 96, 65, 105, 5, 125, 31, 66, -68, 48, -62, -77, 109, -13, -4, 1, -51, 14, -41, 24, -65, -5, -128, 122, 117, -2, -74, 70, -53, 64, -3, 36, 123, 107, -54, 93, -101, -64, -86, 120, 63, 19, -90, -76, -116, 108, 113, -85, -92, 34, -3, 17, 113, 25, -52, -68, 8, -116, 1, -29, -105, -87, -47, -13, 7, 48, 50, -51, 7, -100, 113, 116, -25, 97, -2, 24, 54, 2, 47, -30, 116, 29, -67, -97, -46, -52, -100, -66, 72, -95, 107, -77, -128, 98, -14, 69, -105, -6, -106};
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
    msg.setTimeStamp(0.13077774668263886);
    msg.setSource(63692U);
    msg.setSourceEntity(109U);
    msg.setDestination(53822U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("IGAGVBTQZNDGIFECCERNTNOHGZXINQSFQMCTDBUFZHANBEWUZKRUVFIUEUFBPMHYYWOLRJOVDBMIUUXNFQWTRCHHAZXCNRYJKSJSAHYERPLFGKKMUDJDBPVYVSAMUYESVPPXYTFWLRRLGBBZB");
    msg.plan_size = 22742U;
    msg.change_time = 0.8455096664809514;
    msg.change_sid = 17232U;
    msg.change_sname.assign("YBCMUYOSKNZMTXLLAKIFTGNXJAXWGGAZZUCOPHONVLNOZYEIKZBSUUPOBOQLXSFHECVJPPJQUWYZVIDMHGHRDJEXDXBRRVOQTGSBTNYJBMKAUPPEFEBDUWAURRWQBWSCP");
    const signed char tmp_msg_0[] = {-15, 13, -54, 75, 20, 21, 107, 99, -67, 78, -43, 54, 74, 94, 69, -68, 79, 101, 6, -30, -15, -59, 82, 112, -11, 20, -9, -90, 22, -84, 104, 95, 18, 59, -98, 106, -118, -128, 92, -23, 49, 25, -85, 26, 92, -4, -18, -103, -82, -100, 36, 41, 42, 72, -9, -79, -115, 22, -26, -78, 100, 125, -95, -6, 125, -27, 64, -15, -63, -40, -6, -93, -55, -4, -49, -42, -83, 112, -84, 27, 50, 60, 6, 16, 120, -122, -65, 69, -3, -44, 67, 63, -111, 32, -33, -10, 123, -73, 86, -102, 14, 97, 36, 85, -47, 34, 11, -74, 126, -18, -30, 106, -93, 60, 29, 119, 29, -82, 32, 60, 19, -58, -29, 116, -124, -99, 121, -98, 67, -118, 101, -8, -38, -26, -45, -84, 71, 81, 33, -63, 76, 28, 115, -67, -116, 109, 125, 103, 95, 6, 68};
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
    msg.setTimeStamp(0.29443809203798577);
    msg.setSource(21017U);
    msg.setSourceEntity(56U);
    msg.setDestination(31138U);
    msg.setDestinationEntity(129U);
    msg.type = 128U;
    msg.op = 223U;
    msg.request_id = 31021U;
    msg.plan_id.assign("EYNETFORDGR");
    msg.flags = 56343U;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.40947893361774124;
    tmp_msg_0.base_lon = 0.08569297624873473;
    tmp_msg_0.base_time = 0.16678623177785812;
    const signed char tmp_tmp_msg_0_0[] = {99, 0, 31, 71, -94, 5, -13, -8, -114, 0, -64, 70, 29, -70, 122, 44, -64, -72, 80, -32, 20, 113, -26, -74, -62, 36, 13, 94, 116, 69, -24, 74, -114, -74, 102, -67, 67, -112, -50, 55, 94, 27, 90, 121, 113, 90, -40, 55, -81, -60, 109, -11, -111, -95, -93, 1, -14, 74, -87, 124, -113, 55, -98, 97, -60, 5, 32, 67, 41, 23, 116, 4, -19, -128, -15, 14, 20, -87, -57, -68, 41, -64, 116, -52};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FFNKPJSLAEDBMRPTQMWQIWWEGKVZTOCGDRBQLPERIPJYWFTAOBLKOTKHKJBVZVFOHTRSBSEXZTPIAFBUFCQXNDHQUVJUPEMMMZDPXLNIWNHRVYKUKKNFAMXXSEZSAHJFBDACLGJFNIKQAXULDEYRHJQOLRMGXRCJSM");

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
    msg.setTimeStamp(0.9985220472570127);
    msg.setSource(39409U);
    msg.setSourceEntity(231U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(70U);
    msg.type = 170U;
    msg.op = 192U;
    msg.request_id = 16274U;
    msg.plan_id.assign("SUPBBCOEZOIDAJLLLNDUNRQCYYOROOPOWGHAXIPWWJYVOYUTPKJRWXZIZHLNMPXKJDQTTLWQCMPHVHVUMTKKZIWICCNMSEXLOKKPEDSAVASFHBJEVAFUBQCZNYJYMGGQDIIUQJLCBGIXVYEKFPABZVBUM");
    msg.flags = 35618U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 9U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XMDQTVVBZIHSUYWLXJOVKSAIKBTFLDGLHOOCIGFTNYXRAOINBIPSFPBLJGMQKMLW");

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
    msg.setTimeStamp(0.8243375826336814);
    msg.setSource(28645U);
    msg.setSourceEntity(160U);
    msg.setDestination(40039U);
    msg.setDestinationEntity(69U);
    msg.type = 235U;
    msg.op = 78U;
    msg.request_id = 55554U;
    msg.plan_id.assign("FMOBWDBWWJHGQSLNYTDDAZZSJYIXCLVBCBJOWGLXTDAETDMZMBKUJLVPMELBCTPOITMNJKUBIPCFTOELPLWPLFAAIYFUDMBOTSMEFV");
    msg.flags = 1426U;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 74U;
    tmp_msg_0.error_count = 127U;
    tmp_msg_0.error_ents.assign("CULMDECATBJRWPSRCSDHGTTANQXWJCDVGMIGEHJKBHSQWSEOIINQPFUFBKSGXLBRLKMTNXUYFGVCDZVCWU");
    tmp_msg_0.maneuver_type = 22804U;
    tmp_msg_0.maneuver_stime = 0.5387717112830226;
    tmp_msg_0.maneuver_eta = 43069U;
    tmp_msg_0.control_loops = 502609877U;
    tmp_msg_0.flags = 99U;
    tmp_msg_0.last_error.assign("TWWBSOELMIEHJHFKMRUXQUJFOVMFXTXVZIEJWDTNASCSSOPLKOXJLSQVPIFTGWBEEHALZMZPPYNCDHEZQGSDUIZYEAFOBCRVGBAZWRXEQIFCJZTKPUIFYLQODDTPNKHWDYXSWJUOGIEPAAMXWCPYUKFGLJPDIDQWRYTAXINDCUMOLGVGHKZUAAVTRARGBHYMXHBEOJNKSNBJNBVXBFNSCBCHMCQKJG");
    tmp_msg_0.last_error_time = 0.5698935975527025;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NPAIPVCYIKQHGFDKGZVKKEDVOJJPBQGCQAZNJFVEEYMPCAMIVTOSMTMY");

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
    msg.setTimeStamp(0.6287043822594642);
    msg.setSource(19890U);
    msg.setSourceEntity(68U);
    msg.setDestination(4138U);
    msg.setDestinationEntity(61U);
    msg.state = 5U;
    msg.plan_id.assign("NPFLVWXEWZLGROSTTBOAKLMOIUDQCSARYSCAFPIGYKVCWRJQXCDCKGQCXBLDDAUJJPCDPOLQFGMSFJENLRGXHTBFV");
    msg.plan_eta = -1372958490;
    msg.plan_progress = 0.9317039904042176;
    msg.man_id.assign("DEGUBGIUETFTCJVEKCAFSERENMJQFHGQZQILSUHEURYHZCKVSNLWNZYWEGYRBZZKVKZBAYTXTOBFQAMCYLITKGKEHBBSHIRXXFBMSUHPTJGOZPASJVODOADBZALLOPBVOMGNQVOIAWWRWRSXZVUICQHNYOXWNTY");
    msg.man_type = 58707U;
    msg.man_eta = 1911949925;
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
    msg.setTimeStamp(0.8658939035164406);
    msg.setSource(21545U);
    msg.setSourceEntity(244U);
    msg.setDestination(12171U);
    msg.setDestinationEntity(59U);
    msg.state = 56U;
    msg.plan_id.assign("ZFORGMMIFNCZZWGIVGOHNEHUNHZGTKTGEWSEWRLHWDTUOROJCVJPKPCVZUMIMQQJCLJSIHADHDSBFFAXKWSRXISBAYHZBPECJBMQAPQVEQLUCQKZMJGPMAABDOYRPGRBBSCAHGYUTMCKTUEAXMTVSPUIXYSMSIWDYGXRL");
    msg.plan_eta = 2055211384;
    msg.plan_progress = 0.5843933575481056;
    msg.man_id.assign("EIBPGGRNCAQJDBIVATBDANZSKFEQSFYKDJFTNHRHWCOVQZRHPRVUBCJWJFQYLWNVUMXRPNTYJAYUKXRZUIDZKPRLAXQMSMUUWGSJIBLBGPXZHCLZIYYAPCCLXECOAEB");
    msg.man_type = 36232U;
    msg.man_eta = 578538648;
    msg.last_outcome = 191U;

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
    msg.setTimeStamp(0.8503582126700571);
    msg.setSource(62017U);
    msg.setSourceEntity(151U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(55U);
    msg.state = 92U;
    msg.plan_id.assign("PVOJOAAAYKQRNPFZUZFAPGYOOJGWUKWRETICKQRDLTRPXEMFHUVBSWGCNEXYUTHXSAKTPJZQQBLXMCGTHJREESANEQISHLDLVTVUJWGQKJWGLLTUSZRFIIRIDGHIPNYYYMCODVFOVWUPZIJXUBPYQWQABPNEFSGXDDSNGYCNSDHVXRIOEMSZZMHFBXYXZCLC");
    msg.plan_eta = 1397194397;
    msg.plan_progress = 0.6982703926387789;
    msg.man_id.assign("BRPEGZKEJBYOGVJWVUNGLBHGHBWDPJAQEBLRRAVGQKKPYTNSPDFOAOBXTTBLCAYWQQQODQNXDIGITITXUWDUGILHQJZNWOUMOLYYSWUACKHSDBUQPBENEDQI");
    msg.man_type = 17702U;
    msg.man_eta = 999303068;
    msg.last_outcome = 173U;

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
    msg.setTimeStamp(0.5605466448951818);
    msg.setSource(36486U);
    msg.setSourceEntity(164U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(72U);
    msg.name.assign("IHELEIWYXLEEMGXDAPSZUJJFWQDFALPXRNQQUDNPKAPYAZWICCO");
    msg.value.assign("YQITUWJSZPSUUVZPJAOIJRRZBNJOUAMYACCKCRHETBUDLYZLNSNGTWKSJNJOMFKAPQVMWQD");
    msg.type = 9U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.09343488412208956);
    msg.setSource(1917U);
    msg.setSourceEntity(146U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(146U);
    msg.name.assign("NRLXKKWIJXWCJVSUZLFTAURVEVEOUPLECANWOKRWPGAKYJI");
    msg.value.assign("GUAPKFDSYWQYTLFEGEDSVETOWVYIFWFWJDORMPIYHVZWXOTNJYDLESPNJKUXTMAWJZCTBXCZHCFOPYTEHWDGV");
    msg.type = 215U;
    msg.access = 157U;

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
    msg.setTimeStamp(0.27849734806086224);
    msg.setSource(13069U);
    msg.setSourceEntity(249U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LNCMOWAFXOKWNKNURPZUTQJICOSJVQNCHFWEMURUHPDFWHYLTAWATHGYBWGQXPSSFLADIDJBCGYQKRZJICMYYEMUEXAVJDYJXDZVKCTUGEXOBTWGRYHGIBGSIWBLES");
    msg.value.assign("ZTLHKGZIYVOFPBDSVJOTPOWLZNNVKIJELAACVQZFWLBUNSVMKZRKMYJOGMYIJFAFQXKMCCAADEFFHMGSPLLSZXOTHCFNEWVPYQXDZMVDINYUKGLXSDCLHDQKVDIUUXKENSGXRDIQGUYENYWDT");
    msg.type = 203U;
    msg.access = 155U;

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
    msg.setTimeStamp(0.7656788827438878);
    msg.setSource(24496U);
    msg.setSourceEntity(103U);
    msg.setDestination(27334U);
    msg.setDestinationEntity(69U);
    msg.cmd = 152U;
    msg.op = 170U;
    msg.plan_id.assign("HJWKGTOHVEZFYZNFPUAQELFGSCHHTJYCBOQZEBEUFXMKQQBWLISIRSDMKDXALRGJUPNGOEQBUTZQIKKZPKJDNOLPOADKAWMNDG");
    msg.params.assign("LBDOYSCMAKKZERMVXCHGGFSPHNFNUJYCFJGIYVPZDLMFNMMUQAIJGDGMAQBIGRBZOHSZWUEUWUKBARIWNVTFQCJETXZPOLZSUCJGYEIVCAYKQPRAENLNCXQVLBWYTDTEPTSEISDJZLEMTRVHKCALQLATRTZXSNPKIVVPVIMDZNHOWUYFTJAQHDSOKDXGXDMUBMIWBJAHOYBFEWCGEPRSQKQNHPBWHPDOVXJOKQKW");

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
    msg.setTimeStamp(0.9303935239336991);
    msg.setSource(26092U);
    msg.setSourceEntity(190U);
    msg.setDestination(26237U);
    msg.setDestinationEntity(113U);
    msg.cmd = 133U;
    msg.op = 223U;
    msg.plan_id.assign("DRNVLEFUOLYAYGVWGYUSMPHRBAVOFOZXIDSJXOKBXRCBENXMWGCRGPMK");
    msg.params.assign("DZSKVMQHFWKTSLTHNHZMEBKTPIIJRKULQNLJGWNMYTRPTSONTFKGHEVWGFAQHRANMXZXOUTQVXJRWEZOINROAWVDZYEUODBRFNCLPUYDBGDFBJBZHEPCDIKEHBDEWBUFHSIUSDNYIQGMVYPYGLCCOLBTORJRISWXJZVSWJAPROJZXXPQTNERKGXUKUAUPHNOSELMMVIYZMQYLCBVCYCPHECVFIJMXGFAPFSULMZTCWKGLAQDAVJSXAYBCGD");

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
    msg.setTimeStamp(0.6473230830931991);
    msg.setSource(59094U);
    msg.setSourceEntity(21U);
    msg.setDestination(46879U);
    msg.setDestinationEntity(73U);
    msg.cmd = 163U;
    msg.op = 3U;
    msg.plan_id.assign("SYZXJHYIAXZKQZBOFKNHWQTAQBIVNBZGOSFOSHMLXDRJLPEYJYWSHOHDWTTOQGVAOMAHEGNPFRROZFLLVTDIB");
    msg.params.assign("XXRBHVHEEABFCNTCZYXAJSBQOJCGTANLVUWRFEIHJSILQGKWTTNRQIWBXUMJTWQBFMETBFGZYNSNGPIGLXORGFCZPLTZXIOQTYFNSIUGODHAHPURXSGHEQUUAHIGK");

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
    msg.setTimeStamp(0.16008523936247);
    msg.setSource(65524U);
    msg.setSourceEntity(122U);
    msg.setDestination(17332U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("ZJDKTVYDTPXXEQVWJZDXALJOKMGOCLBSXUIJXFRAXFVMNSBOCTYVGRDVGIWCQQAGHFJINCQZMHUHYZKOFQYEAWGEJSYCUGFRYSZWZNHWGDKQHXQKEPEPVPMMDMUETRSHVOOWMAIRDU");
    msg.op = 95U;
    msg.lat = 0.6142460322828815;
    msg.lon = 0.008673218222148282;
    msg.height = 0.7329004076725445;
    msg.x = 0.15574217933562262;
    msg.y = 0.6943105253868819;
    msg.z = 0.8725273422177523;
    msg.phi = 0.7309699238496195;
    msg.theta = 0.48431409982615825;
    msg.psi = 0.679260594110373;
    msg.vx = 0.04198459706822577;
    msg.vy = 0.5744356751705517;
    msg.vz = 0.24791220710630846;
    msg.p = 0.18039440655964023;
    msg.q = 0.5402657278000214;
    msg.r = 0.6456019853788724;
    msg.svx = 0.5337547996971796;
    msg.svy = 0.5274235614849793;
    msg.svz = 0.5267202764037404;

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
    msg.setTimeStamp(0.24087991738848868);
    msg.setSource(41880U);
    msg.setSourceEntity(114U);
    msg.setDestination(32884U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("BXGVDHBIZOOLTOIOWNUCYOALIEBICZARGCABAPDEUYDNKBZIXZVPTTKEGPTPCIJYLMFXSWEHMMJQCDNXIHTFMVPUYGKZMJKJRWMHURSBPSJAKNZQJUERYLALMNOCVXEOFGTUJRONELFTMFWQQGNJHTJAFXQFURZWPQGFVWVYCMBVYDUKELJSCZYQODUQTEPEWI");
    msg.op = 147U;
    msg.lat = 0.7709865925107238;
    msg.lon = 0.13386925696195706;
    msg.height = 0.05655958075344758;
    msg.x = 0.17014639668485088;
    msg.y = 0.4654050604002431;
    msg.z = 0.9161187092524953;
    msg.phi = 0.3934758862617509;
    msg.theta = 0.7226089174772957;
    msg.psi = 0.5544123178559269;
    msg.vx = 0.4908965536229646;
    msg.vy = 0.33324182944569625;
    msg.vz = 0.5644082683374695;
    msg.p = 0.8739436742504109;
    msg.q = 0.9243906979852342;
    msg.r = 0.518724618028883;
    msg.svx = 0.3163349219556332;
    msg.svy = 0.599071935306252;
    msg.svz = 0.6846355695461059;

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
    msg.setTimeStamp(0.6155383083092553);
    msg.setSource(14455U);
    msg.setSourceEntity(69U);
    msg.setDestination(4262U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("VDIXOQKGDXGPXYSOXHDKTXCYTBHDORUBEEDVIPGDWCMPAKCYWTWFUSOCZBNXQZDPWFMRPMXRUFMYMWYASCNSHOPUJJWKYAVZKUFQJMNFLMRNWPQRZCWVIGUYSZFQESBNAALDOQTPJ");
    msg.op = 250U;
    msg.lat = 0.39538890110240266;
    msg.lon = 0.9117092028084407;
    msg.height = 0.9670141474819094;
    msg.x = 0.7131603866063788;
    msg.y = 0.18115123114453302;
    msg.z = 0.23282210063668418;
    msg.phi = 0.6050551304729517;
    msg.theta = 0.4285497497399726;
    msg.psi = 0.8048395401888628;
    msg.vx = 0.28828436455044004;
    msg.vy = 0.2511339131744328;
    msg.vz = 0.06765002672933518;
    msg.p = 0.5234508631985635;
    msg.q = 0.7537080297005369;
    msg.r = 0.6371896560747606;
    msg.svx = 0.482013505420112;
    msg.svy = 0.6772442261562165;
    msg.svz = 0.06814666933962399;

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
    msg.setTimeStamp(0.5701196224229497);
    msg.setSource(42155U);
    msg.setSourceEntity(145U);
    msg.setDestination(51219U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("LSWDQGXBHMFNGTZVMAUCMDYBTLBRNWWLCKDSRHAKCHPBVEMBPSGQPK");
    msg.type = 217U;
    msg.properties = 54U;
    msg.durations.assign("BAQFGBYPVTDCXAIYHEVLQSKQRXZMUONQJEUZNYSPPTPNVDJEUEJHUZNKWSFEOSYLGOJGILMJMWWNDXSXTBXNDIWDHDYFYFAILBZXRVKPFHDCOQPFMZVRHFZWVTOZZVWYQDMWNCBQJIBGOACZHTGSSIBLKLBRAEOOQGJ");
    msg.distances.assign("AHRBLZWFXIBJNURAXIKPQJISJAZYBNEYCBTFGDDVSTEWLVHPALGXMRFZGCYVU");
    msg.actions.assign("TXMHIATUKKQVQVZPDLDASNREAKWJDDUQJLYBTZUBCOSLIHFROSXZZHFARTHWBRKHJNJKACYQSAXMBXUGCRZJDNHRFXFNZYWXWWPQDOMFPPTYC");
    msg.fuel.assign("VRGFXCYWTOEZNRJIRJJPNAGNOWYGWEYXBSEBAMSNADCAFNKHSHLGBVQRAVKVFVLFYMUIZAFIJTPZUYVDOEEISLUDMKDIBDXBHLTEJQUASLKRLHKTSLCQPCEGWWXWIWPJYXBOPYTBPAXGKGFNDSKUUZSVACI");

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
    msg.setTimeStamp(0.8932292933373809);
    msg.setSource(22411U);
    msg.setSourceEntity(43U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("MVQTDEKUSVEYLPQUKFEFAMTMCGJKFLGLVHPIRIXCJWDONPVNMKQSEXMXZCTTNPGDRQHKXNLAPJYOTBYZCWOPMJAOBNVKXESSFQTIHJZNBOUWZZZNQNUUKUPBSW");
    msg.type = 99U;
    msg.properties = 51U;
    msg.durations.assign("GOLQAFMSQNBYUJBNIKDFHHKHUEBJJNBGKBEBIVZPFSKZOOXPGJAOITSQURLZTQBPZLDDOWVBUVUDIHMPMMEKNWKTZZYFVHGPCITTEAWSYHRANOCNNFSFGXXLYFAZPCCTJKDKXQXASECOKIYABSQVBSZFJINTTCCIDFPLUCDMLOHSGTRWYEJDYEOHMUOJXVLVPVRVHWGGGMXLURANCMDIRUAUYLMEHXPXRNFMPWIDYWRJQJEWREXVCLKSRA");
    msg.distances.assign("OCQUOATJUFWRCPNLGUIIFYVVOGQFADUVYHXRSAICNUSPHXMHYYSVJHRXCJWNAVRIMKDICAJXJREZNHACNOEEWOTLZKPGEGLRPBHUGLUOFGJZQAOIDKVTVEXGWXJMMUZEHCDZZFZNBYZKCOYWSXSNWBXPMMXXGDTZBCSIVFRYFUYQDOSEQQTPQKTLYNDYJ");
    msg.actions.assign("ELLXYHOHPGCGOOAHSKBMOUQHCYLBRAXTBMUYUUPQVWEXEFDUONEWPIHCUMQGWWPNCBRNDYGLYPADZVSZGJVHQXZXBJZHIIKRPRJJSYRIZFZTQCDMQQVMNSIBRDNSBYDYNJSEFLKAXMYFODSKNIMUAGGEOEGNTYHUVQTPVJVHKCNOFWTRMBNHTXBFRPDATECLULADG");
    msg.fuel.assign("LFRLBDZXTBUJTSMDKBTJJTYOEGIGAAEYNAVVDEGUUBFAKQAPMVMFQNGSLNSWKSCKJCOTECTVEXNOYQIHCYHJAGYQECHTPVSTDQYLJYZIPWFGFLXBHRUTEQMENSWGKLCOCLGURXSAPPADZYRCIBCVDLIXPIJNEDXUMRCBTRZHHPFHLZMWNZUVKOHQVSFWGUQKGBOQNMIEFAJNNRWIXZOYHMWOYPFDVDMIARJVKLOQWZJ");

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
    msg.setTimeStamp(0.9113002868876307);
    msg.setSource(29036U);
    msg.setSourceEntity(73U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("YEQBCHPWGLDDPABDEHBDIXDTNMXTDFDYBMXTWLUXPFODFGFYCHAMVBSLYNVVQAAJCOEQRAPACKXCKZUYUFGLVCHIRWFEWWDFGELJPFWSQSWOKGILIPQFSAQNCXZKJJQRIOBKRHUMZRBETYQDE");
    msg.type = 97U;
    msg.properties = 115U;
    msg.durations.assign("LFCSFZQGMNRUIFIAMLVDEMQODRJYNDNYHOQPKWB");
    msg.distances.assign("WZBQBEYOMEUIANUVJWIMWHDTGJPJJXNLVXEYEDQEQLRZPDUSUPSKWNUIZRSXKYHLPVVWGYRFTELOWXJVTPZCRIFBKGYCXCBNWQNBSHKSWYGENNOMZGFLGODDDYDCOTADQGZFRMFQIXTXIXAEPHEOZNFBVDGFICTBEVGZCLLCJPHHXULYNNFSKAHOOMFFYMVYSSHRPMLCIAKGSMPOQKQDSOK");
    msg.actions.assign("KFLGFRPKCPBUZRSKDPEFDCAUZSIIVXIEOVIMCSPSYLVJBPLEOEXHYMFCYRBTUWXVCMSTOXCAXOKQOKJZIYBTQWWPXTQMXFPLODTQWKAJGVQTHQWXQTUFUHGOJIKCBSKVERYNNXRJBHAJNNODMWBPAEEYMTHNRCHESNVWZAKDPYUWMRIGP");
    msg.fuel.assign("HUZWQOZYXYRVMGNMJSULZUWUFPFMQKCPTFPMWZQZDONIYNRIVLLPXISQECIVYQBUPEEJKDYJOBOPXBUCHRHDEGMIYDDECAKSTNECOAHLFAGAVSSHJGHYXXYRCJZMSVUENSSMPFBGLXCJAQTQKFSYZMTJLCOTWVNQZEXAAVZIHPEUBJIFOBMNGHKQIWRIHDPLXBOL");

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
    msg.setTimeStamp(0.4513338259101456);
    msg.setSource(28443U);
    msg.setSourceEntity(187U);
    msg.setDestination(23996U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.8537287214287351;
    msg.lon = 0.6568351164034195;
    msg.depth = 0.17963614899629898;
    msg.roll = 0.20262266720296196;
    msg.pitch = 0.905761129323509;
    msg.yaw = 0.8596457274356288;
    msg.rcp_time = 0.3253705110763703;
    msg.sid.assign("RCHXSYTLXHDLXVLNBZKHEXIDFWRVKOELKAZQPOUJGBNMGVQQBTCDYNAUGFOUOJNCSCZPPBMVUBAXUVYJVODGLBEGTQQIWMWXHDWSDFCGURSWDFECZEQRNBJGSPZYUSALQMHFLMZUPKBRXJADRAJZKUGWCVLKXIEYEEWKYPIWIRFPMBLFMYPCSAIF");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.5183282292689583);
    msg.setSource(31845U);
    msg.setSourceEntity(198U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.9066243574726759;
    msg.lon = 0.7378600471813701;
    msg.depth = 0.17689012243527824;
    msg.roll = 0.29207568915190785;
    msg.pitch = 0.6099393129276865;
    msg.yaw = 0.744581873722187;
    msg.rcp_time = 0.8014859584251531;
    msg.sid.assign("OCKJOYOTWLPGTZKJKGWDFQZQHCOILFFRVZUZYPJXMUDNYSXCEPHNVVBEEEWUURPECUPVFODSMAUYDCBCDOJYRKATZIAMRMHHDLBKYRVDVTSPTMSFLMDEJGALSKIRYTALJDIWXIIQYHLOZJTFAIBKBQWXLGENZQNEWSJBDNNXPAHWHHWBELHSFQGVRXZFZXOVHSRNWNTCMBGVXGQXGGPQRYEQPUANTPWUUJMOCTCLIY");
    msg.s_type = 168U;

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
    msg.setTimeStamp(0.297043310280226);
    msg.setSource(27507U);
    msg.setSourceEntity(39U);
    msg.setDestination(21536U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.7734559380321694;
    msg.lon = 0.5754656429718172;
    msg.depth = 0.1001587626465209;
    msg.roll = 0.1678050152796141;
    msg.pitch = 0.1595196937546952;
    msg.yaw = 0.4921838383319417;
    msg.rcp_time = 0.07582718906109664;
    msg.sid.assign("BYFOTVKRDXSCRM");
    msg.s_type = 68U;

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
    msg.setTimeStamp(0.8621601187615325);
    msg.setSource(39488U);
    msg.setSourceEntity(121U);
    msg.setDestination(59936U);
    msg.setDestinationEntity(27U);
    msg.id.assign("XYHHPOGZCXMJIXGOGGXXGESSZQRGVGHUATZSZOAKOHKXLVYVTFRWU");
    msg.sensor_class.assign("IHPKZOUSKYVRBJERGHNYNZOHYASPBETBEZFGNHLCVTOPXYEUTNYCSDXGBPZVGXXGTHBVEVCCIFIWCGNIJZQFRXEUWMOEJZKJSDYPLVDHIULJTVYFTKALMOIDMQD");
    msg.lat = 0.6237049049798968;
    msg.lon = 0.2937531096431525;
    msg.alt = 0.5592641528718214;
    msg.heading = 0.6133458795084216;
    msg.data.assign("HCGRCAJTKRWIUFBGANUMFNHDVAXBKFOIFQCNQUVIQBWDZFJNAURAGNKEOAFVMNMKZSQOJGQRHVSYPRUSKMXCBNCXTLDWKTRPXHL");

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
    msg.setTimeStamp(0.4222103333942401);
    msg.setSource(29762U);
    msg.setSourceEntity(189U);
    msg.setDestination(42300U);
    msg.setDestinationEntity(10U);
    msg.id.assign("QXGXIZYVMVUBPTECKKNAHXQTSLMXLVSNDUPIKASRHZPCVGTIJLJAEQBVXFWHMMNOYODKARGTHNVOAWPCYUTQMKRFPDQWWRKJHZUGGETRRSAJGHEMXLGJRHSNFLCPSBIJBCTIEKZGBTRFWCUZQMBVFMYLVSPFLK");
    msg.sensor_class.assign("EAEHWUJEDYSNZFGZIFGVMGBDBYTOVNYCFJZAYMQAXDTNISLWXCCRQXQMSWCYKPTLGYSXLTXZOHNDUSFSHVFCN");
    msg.lat = 0.09872635578261657;
    msg.lon = 0.11431209383651852;
    msg.alt = 0.562737670716567;
    msg.heading = 0.760213288336108;
    msg.data.assign("RYYXWHBBKPUCJLAEDVSPMXTAZEHQSTZNUJKLPSRXVONZNPUDVDOMKQCUUWSPVRFCACYOITGJJQWFHHVBKFFQNWMEGGYTAFAEAYFV");

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
    msg.setTimeStamp(0.19696707225378063);
    msg.setSource(10724U);
    msg.setSourceEntity(187U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(191U);
    msg.id.assign("FTZFXHFSAPLYESIVJMPZSAPVCNNBFTCPZPLBAFQTLTCINYNXMXXOBSRIEDMIEHSVZWIJDEGQSNDTCGUAXZAAWSGWMQVJOOQCBAKWJJCXNJQGGWKEBOFJETSRPBMGXHHUYOWZIJDLGPUCWIHCMEBRL");
    msg.sensor_class.assign("QDYHZQOTRCKLBKYTCFCITKHHDDGNXABRWDZHOMRBENXQHDAVJUGJBUCNIZDQDCGZDFVDSAJAIMUUWLRFBWXQPU");
    msg.lat = 0.281526273452671;
    msg.lon = 0.411004082451901;
    msg.alt = 0.2745941352151352;
    msg.heading = 0.3261403507984485;
    msg.data.assign("SIOLZOWJFZCBKULEEGVAFPXLESAPRKDXNVKSGPZGBYREPVWAVZANHTFTYGKKLXLDDDNKMZFHTCQYFMEVVVISFNIYTURZMDXSECWLUPMCFBJ");

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
    msg.setTimeStamp(0.7358330687135815);
    msg.setSource(38218U);
    msg.setSourceEntity(130U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(110U);
    msg.id.assign("CEXLNTVDGXWDZQDJBLBQZIYPAHSRJILYRLGSTSQEVLUDEGRKBAQHMEOXZQKBGKNCVAYCJGKVIZMZTIGACUYYHCZBHECWYNAYRHJJDVSVMNPIEHRBTRSVHKPFAYJJEUILASM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NQAHKKZCHDFZPUDZMRSMTJQUEARLYOSWSCQEMGLYFFURBGAXMXCSOXFNPNETCJHKMBXBTBNDTUFHYFMSEQJWAKONSBUJWWVXGEOVRLRRCVOHAMRTPLIHKUMCERIHVZLQVUTKXPOWIJUBKACOEYEZRASICLJFHWQTGAULXDAGEYPFPIWLOMYDTEFCJJIDWVPJBKZITX");
    tmp_msg_0.feature_type = 29U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 155U;
    tmp_msg_0.rgb_blue = 238U;
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
    msg.setTimeStamp(0.9099505389078723);
    msg.setSource(10861U);
    msg.setSourceEntity(230U);
    msg.setDestination(61583U);
    msg.setDestinationEntity(227U);
    msg.id.assign("LHMWHJCQCOSLMEZXLXCDJCQXTUNAHZODBIBXKNKMZDMQSKKVBYULWRSZODVLEJBJVSVYCRDPZZYLIBBHROQQGZEYYHIOUJEHBVFFYBDUUNNHOCEQGDQKPGFUTWNORXTBAVWWLFOVPCYZBLUIJVTSHUWFXPZSJKFRWMOVEXTEQIDGWGSNMFPCRCPANALWRUKY");

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
    msg.setTimeStamp(0.9226565620160049);
    msg.setSource(5648U);
    msg.setSourceEntity(28U);
    msg.setDestination(2651U);
    msg.setDestinationEntity(88U);
    msg.id.assign("KFZMDUBGRVOIFHIKVDVWBPVBNOGAOUPTJRAUVWUDLNPFYRJGXCEJQDICIBUWACKQPKLNPBGOWSQXFNXSDLCDEELQTLJZBYDQWZORFXXNLWBHWORIIBUTREPJYQHEJPOKMBDSVUKHHA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YDFKFOALLRTUOWEUHPFPSCNSLBDPRRHVXAEMETXQOLQZVRMLKSAQGCYJVDMFXDQUGZHIQGYJAVKMWVKBWSBRNQQCYEENNJWLIYVPLSSOPIRUKLDPEJYKAJLUGNTMYPMYKBZUJEMDAHXDWJJBV");
    tmp_msg_0.feature_type = 98U;
    tmp_msg_0.rgb_red = 30U;
    tmp_msg_0.rgb_green = 129U;
    tmp_msg_0.rgb_blue = 49U;
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
    msg.setTimeStamp(0.794667126856034);
    msg.setSource(11150U);
    msg.setSourceEntity(216U);
    msg.setDestination(48302U);
    msg.setDestinationEntity(133U);
    msg.id.assign("FBEGRSXUKYORZEEQIKQMSZTHOWTVRJNKGUJCXHNYQXTCZCLBPHKHEJWQARADMIJZADQSACBEJRQOHWQYVMPSWXDKIUVQLDJVOPZW");
    msg.feature_type = 2U;
    msg.rgb_red = 195U;
    msg.rgb_green = 94U;
    msg.rgb_blue = 27U;

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
    msg.setTimeStamp(0.7414062431657118);
    msg.setSource(16774U);
    msg.setSourceEntity(23U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(61U);
    msg.id.assign("RWMPNBBYQRJDUJOFHOZXYBWXDBKVBCMMQXJHOSRRAEBTKZETIUIULNPMVSDKYVJPWZQEJWSZVGKOJXAPLXTAASHDIBNIMGUFCCYLZYGQXEYCSKKNTGQCGQQPOANTBDFZNEGNKFDFYWJGOOLWLAP");
    msg.feature_type = 75U;
    msg.rgb_red = 165U;
    msg.rgb_green = 24U;
    msg.rgb_blue = 214U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5468120743712594;
    tmp_msg_0.lon = 0.904352027365029;
    tmp_msg_0.alt = 0.5348923181509971;
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
    msg.setTimeStamp(0.17524048309717255);
    msg.setSource(53915U);
    msg.setSourceEntity(183U);
    msg.setDestination(18630U);
    msg.setDestinationEntity(242U);
    msg.id.assign("WXMWBRZPZBYSYJPLXQTKQEMZJDTNJCFTXCQUHUUBIYLLMKIOGTNXIHFIAZYVYVNJJEOFXDPRHIHBPDYYTEPCUDRGKVLLEDWYWJNXWENCJWDDXQFOUGGWISCHSUUFXOZINCROSXGFYZQLOOKNOVLXMMSSVVSTAPGNLCYETZQCWMLSDNHAEWRBGR");
    msg.feature_type = 8U;
    msg.rgb_red = 216U;
    msg.rgb_green = 4U;
    msg.rgb_blue = 85U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.410393914877647;
    tmp_msg_0.lon = 0.9577049906418293;
    tmp_msg_0.alt = 0.7077507660727618;
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
    msg.setTimeStamp(0.799889820147514);
    msg.setSource(62732U);
    msg.setSourceEntity(83U);
    msg.setDestination(54693U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.8132370377625393;
    msg.lon = 0.26753264351036266;
    msg.alt = 0.07237544774713112;

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
    msg.setTimeStamp(0.2040327219339274);
    msg.setSource(8752U);
    msg.setSourceEntity(104U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.4507447943276123;
    msg.lon = 0.5563163555643317;
    msg.alt = 0.8147462469757408;

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
    msg.setTimeStamp(0.45605626242401753);
    msg.setSource(1065U);
    msg.setSourceEntity(122U);
    msg.setDestination(11210U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.29786247128360455;
    msg.lon = 0.42106930262429565;
    msg.alt = 0.5857895585391304;

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
    msg.setTimeStamp(0.3535177385930277);
    msg.setSource(42306U);
    msg.setSourceEntity(135U);
    msg.setDestination(49411U);
    msg.setDestinationEntity(217U);
    msg.type = 247U;
    msg.id.assign("FUEWCJNYYGVKHESOBDHLVQFHMRSHFJXPRAXQVKMPPUTNPDLWZGGCCETKZBRQSFBVESSNQAIRPZMJGOIWCVXDXNMALMVRUWFJXSJUPLTTCUXXUBFQKYZHPGVJNOGMEFKILCLZJHYXILQRTQKYES");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VZHWSNQVDALGXEAEEJKJCOWDTYAUODOWFQLQQNXXEMIGWQHJBNDHKUZAFPXGF");
    tmp_msg_0.value.assign("AJAXUQMLBIJQFBZOUWEMPXMLGPORRMYPNHIZGEXVSZJSVIZXSEFVVGKOVEGWFTCQDFIRBSLLEKXPIQZCRXCJPRIZTHLONSPDLCKTKTDOTSTTWQEZAQZTKWSBUZGXHAEGVORYOAMIIRLLBCHDLKMYTBHWSPUJSBNFHFZEDQAUIKGULMVVMCWNFUOWICMWKBHQFYNQYGJUEHYPPMXBKNBDVYCOWDDF");
    tmp_msg_0.type = 149U;
    tmp_msg_0.access = 183U;
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
    msg.setTimeStamp(0.01284598170479212);
    msg.setSource(49655U);
    msg.setSourceEntity(38U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(150U);
    msg.type = 99U;
    msg.id.assign("PAASCZONAWOHOCJDGPIGNL");
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("LTYFLECIWKMKEPLEGIMCLRGDURTFTMQGCUOVPAUIFXFJUYYPZYEFVDYYTSSPUTCQCU");
    tmp_msg_0.value = 225U;
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
    msg.setTimeStamp(0.5475994935596271);
    msg.setSource(9034U);
    msg.setSourceEntity(233U);
    msg.setDestination(21728U);
    msg.setDestinationEntity(91U);
    msg.type = 185U;
    msg.id.assign("AGXJQYHCQXHURQVKHDQYKYYESRBIBAOPSIZCTRRDDOEMPPNFFPQCMLVWQIKNWKPUXLMFYKWMIUGZRHVANGIFLEPSKMEHCAXMXMXSTQSVBTODTJALWJGBJNGIWZKLUJAPNLJFDCWRVSCZBRSUMYAEDNDOKVTEMBQCNLIJYPWNMVIAUYYZBWKZPFDAESGTQTEUDUEJHWOBTXCHUFBXXTQOOOUS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27418U;
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
    msg.setTimeStamp(0.9518839751060866);
    msg.setSource(60226U);
    msg.setSourceEntity(118U);
    msg.setDestination(36463U);
    msg.setDestinationEntity(219U);
    msg.localname.assign("NBHFFFIKEWMMSWTKMQZVYXRVQOOPAWBEGEGJLGIKBOSKFZRJKIGRGUDYCYWQMPHSTUDUBNYQBLIXKNKPOSZMGYVUATNLCZAABULUCRWRXTNVWI");

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
    msg.setTimeStamp(0.4702966692648485);
    msg.setSource(22509U);
    msg.setSourceEntity(138U);
    msg.setDestination(58224U);
    msg.setDestinationEntity(106U);
    msg.localname.assign("VMUEJSWTHBNXUMSGYNYEQANFAGSDBQPJKQXUGGAHSDJICAVBQZIAUYHRYGCCCOYUFKDMTKLYPZPXPDJNJEHSWHWPDXMVLETGKOXNIOCVYIPEZERPFOBDVWHZYRLFRR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NNPCUYOPFICKRQQHTFPGKQFCHAJVUOWXTWGANLVRNIDMMSGUGPSNEZWKUAZJKRXJDBLK");
    tmp_msg_0.sys_type = 118U;
    tmp_msg_0.owner = 22780U;
    tmp_msg_0.lat = 0.8261732133570712;
    tmp_msg_0.lon = 0.4818689474401324;
    tmp_msg_0.height = 0.7536254175102526;
    tmp_msg_0.services.assign("IOHGLPJOOMRY");
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
    msg.setTimeStamp(0.3810518766557869);
    msg.setSource(27840U);
    msg.setSourceEntity(249U);
    msg.setDestination(30588U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("UFLFWWOXAUEKTQOHHODFIQPQYKRWUKQNYDHIQASTCVWIBBVBNZVVHGHHGDGVZTDLXGPKWRMUAQAINUNWPXXIPHNLYOXMQIZMFSZTTLPRBMEZAOVZUYOYPFEQYWZJCBGCOJUYJZN");

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
    msg.setTimeStamp(0.6205037605202727);
    msg.setSource(64483U);
    msg.setSourceEntity(39U);
    msg.setDestination(4926U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("HBVPYEDKNIXNBUFSKRMUXVLJFMNNDWXSALDMYYCMAPIIHUYULZBCUJBPJTVXXAGSWQQIJRLVWKIWXUF");
    msg.predicate.assign("FXKMRCZWLLPDPPOVMCWMVN");
    msg.attributes.assign("ZJSICTRMZOEWYYAYWMQTLUPNPPGAYVSUILWNRCCHKVQOXPABQBPXGFTMPVJNPILILENHCHTQSIWGZDKVFEHSOKUZGVAER");

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
    msg.setTimeStamp(0.0751129404049069);
    msg.setSource(64106U);
    msg.setSourceEntity(225U);
    msg.setDestination(12213U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("FRDDNAGDLJLKTUUVMGUFEXSESOEMKLODSZOVVQFZOHIUFQJBVBUAEXCXSJNHEKWGFLQZLRUIMSKKLGFXBZYPRVGILGZMRKTHDZEAXRJKXUWAPJHIVPYLDSOKWMVPQRIBTWPHSONTNNWNRWGWJFAZJMPTLABCXRECNICYITWOIQUXTGCJYIMIBFHHPVOGMAGQTRNSXLCYAQWDDKVBCBPWOAJEUCHFMHFVYEAOBUSHCYQMDQNQ");
    msg.predicate.assign("GYHGYEGUERYCEYHUAWCKSBFEHOGXRNCAWVVUMKHFHBAJWBCTVVFELIJENNYRGMDVZSRPPMSBJTXZHKMHJOQWGVJWBEKQZHDCQDYKMAQTNKQXJXFSNOLEGSTUUCIBOMPZNVZKGYVNIFIONPWBSLSNAPIRBSQJZAJYWBKJXDETQIPVFRDCTXSCDLULBULOLRDMHIG");
    msg.attributes.assign("ADJARPGQVDFQDOROMWBOSOHTHTAFHDDXOZCJFRZZLBDXBVZKCIYUANXMOTQLECYIEXWMGRRXIKSNKGGCAFTXIQKQWFJAVRPAAEOMENNIYXUURMKQLMSNFLIUUVUJQZWNYWVFQZHJCLPTUHPXRNJSEISSNROEKWQMHHOYYTZDBEWPCGNFINEVTKVEPWPKGBMT");

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
    msg.setTimeStamp(0.7715325329364356);
    msg.setSource(61966U);
    msg.setSourceEntity(82U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("XSHRPKVFWUYCFVJSASVLYAPCVZQYVUYRQTBEWWTFFHVEQTRTIKHOQBGWGHCEOKAIIXLSXQWHZCSBEKUJBYZGJRZCHKLAUPLRAWNMUCMFRXLFTEFDFVXOULEDMHQAZKDYMKPQXKONJWGTPMJLHOAIZASRUGVCKCCVUZ");
    msg.predicate.assign("LOKAJFMTVEEXOWIBTYCCEWPXHFFGPBKHVHOPCMVLPNRYFSEDTNIMXVKNKNQSRFATDZKQIPZPZZNKLSDVLCRBCIHHZCPQXZLDIAYOBUZJRONWNUSWUULLYNDQAEEEQVXRAADGJFTVBGTYAMYWJJRGBXGGFWGSLFFNGAJVRYQO");
    msg.attributes.assign("FADYWTVKLRWEZUIBGLUBLUSZRICXQIKQMTMLKBCVQOELJKRCGVKWKOGTNOEFVLTYVNUGHAPFCINHAPMWGNIVBMBXAJNQSHJMPGJTBMTMZCHQTXNEOUHTLVFBURACRXUIVAFFOPDZRDZTWQNKEDUISJEJSNAYRXZOKGWLBYWXWUDPHIUEOHHXSPXNQOSGEPCAYQYPPKZHXVTAZYESYWZYMKZLRSYQMJDJGHWNBCASQRDOFF");

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
    msg.setTimeStamp(0.7537993797347297);
    msg.setSource(30026U);
    msg.setSourceEntity(30U);
    msg.setDestination(53535U);
    msg.setDestinationEntity(169U);
    msg.command = 169U;
    msg.goal_id.assign("ZDMEWBLEHCPPBTGGLVVGKSGDYAKZTRJBRTKCKFKRQQMNSHBXTYLHKTHYQKQIRFZBYPIWECUWSZYLDNHMUDEEIMTPOSQRTKWFWAGFRBVNCODEPLOAKFAMJMRXXAXSGXPBONLOVJZIGXMUPJHPJDWBBNSOULAXXHJVJUWYWVSOGVJCFBIZDQMCAILLZIIDHNYAFYNXDMFUEGNGCACOJQHUKLRUUICPZ");
    msg.goal_xml.assign("DICWQYDUVXRPPUELSHXXDXZZTSHNAOAGWEFMRMDZSLYIKIWAIHCPWPSZZUFIXQJWCVDKHMLJACHIWNQLJFLQVSMBXKAJGCYTCINLBOFLGRHQXMUYFEDVGTLBGPVTTZORDHNHPKQJKDWJEAKOEWBNQXKBWGEJQGAXZHCKXBPOVGFRETTRSSTKMPUPGORDUIIZCDVNAVA");

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
    msg.setTimeStamp(0.13443546401956663);
    msg.setSource(60537U);
    msg.setSourceEntity(12U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(91U);
    msg.command = 161U;
    msg.goal_id.assign("PYJMDRPXDQEHNFSMFIWHWNVNXTIMETDWLNHDLWKOYWJYUAPSBSVFYQDFVMAVWTNLLYBELABDUSKBMVNGCOYITJXJRUJ");
    msg.goal_xml.assign("BGOKNKTVPZWMRUPWALOUZLXWOERFNXQJWZNJNMYTOKWSCEVUFTSATVCODBPCLFZUQKEIYDJJFEDWKGABVJSDZMIJMZEIIKIMQLPAXALYKDOSVEEGFGHEWJBRMHVTZRHXYNQPMITIDPFGQA");

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
    msg.setTimeStamp(0.0886958392921614);
    msg.setSource(35675U);
    msg.setSourceEntity(69U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(124U);
    msg.command = 195U;
    msg.goal_id.assign("YXGSYAXZJSGKBRYWDILINILFTMXDAPRBJGCVAAHOGHIEDILWBHWAMOSNJFUTOUCTUNWHZZEWAPRZJIQHQXNWDDBCYMEQTJZLVFWSVZSLRZTMEAXQJAPQATRPREMCLFKLKNYEOEWMLGKWSXTOQVDMQOHDXYCZKYKMVKEDCGBBNOVPUKPEYIHIMGHBUVNAZJRSFPURJOCS");
    msg.goal_xml.assign("DFJYBKSOXTKWYIQEVNYBPFDFCTP");

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
    msg.setTimeStamp(0.8515466357936982);
    msg.setSource(30248U);
    msg.setSourceEntity(201U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(140U);
    msg.op = 49U;
    msg.goal_id.assign("CQIMJKQMKIMXKFLGBGR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EGNNXEGRMAZPTTQBGJUNHOJMUSUOPVR");
    tmp_msg_0.predicate.assign("YVRHYFGPQYLMPUUVIQVYLEHNRHURIAYKAFAEHVXJGAWUEIONHZRYEYVOBJSTHSNFEKAMGFGOFERZXWSFIAYUBOQJEJBDYADRRQWKPUEKQWJZVCNKJYBSQMMPGBHSOZZCGPBECJTIZTTXOCHWLMXBZSOQGOCIVLJIMNQGLJMNWHDNFSVLKOFDLPBTSCDILAVTFRXMTWSDUCZCADQPFMIJXXNW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QSNOOMVJJQEDTVJZUVLESGHGPQMYTQPIFZQMTKIPECXYRXPQKKWWHQAEPSUEUCOWRSWXYLWIMLWHMLFSWFXUZSTNEUFSFDZZKNJVOZYCAAYXRNDBHOMQUWKZVTLXPGPFUKRICVARJRBKQUIBUCEVRHJKEDNFYRDDJBNGGSWGGCJZDKILZAZAFJMWCVOCRHPTPNBNBMYCEELM");
    tmp_tmp_msg_0_0.attr_type = 243U;
    tmp_tmp_msg_0_0.min.assign("VHTEHAYUSRZXRKOKYVXOLEFZGSTCUHJZYSNBHOEJHRORMICHKNVKLXKZXAPWOFEDKDOUBUKJPNRHRQJPZJYMMCVZIDCYYGICRPTGGVBFNIFWSWSSLFJGAPNOCYFQOJUVJUCMWPYGKGSHXWGCBFFTXLDMMWDBYZMLBOEKPYXT");
    tmp_tmp_msg_0_0.max.assign("HJXSCLTJUGIDTCOGVAHYADBXBVHFLHVPUCWBENUGUBLEDTLTIJEJWKBAFNZQYROMIJAMPJUACGSOUDWFMVWRHDPKPHVZENWBDVECOQCFRKPQYINPHKWZENIKORVBQYSNGHKIZWQTKATLEQRRSNAZPNXZTBFCTOYMITNUAMIPKSAAIWJNUJXPCWDVFZZIKGJMVL");
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
    msg.setTimeStamp(0.5137030570598666);
    msg.setSource(15250U);
    msg.setSourceEntity(188U);
    msg.setDestination(44388U);
    msg.setDestinationEntity(65U);
    msg.op = 110U;
    msg.goal_id.assign("TJSPEDPJMVVEBNIALOCMWEVANXDSSLBEJZUWSZGHZGIIMWDZFOCQTXBHANHVDOMBSPAKBVWKDVWDZOLXRSBSRRVHUXYHWPNKBFQRKFUHRJMKJJQUGFUXGQPQFEXENIZCVFGOMLJZCIGMCOEYUKFWUOOKGLRIRTRCXPWQINDJTUDCRBFLTPYCMAUQLXPECHXQQJYRNPTKZTEENKYVGNKM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NZRLPXUEYLHRIHSUHVYWNZAJUEHOFDSXUQCYXYDVMMHLJRNPZYQOBAQRDIFXITNVKFXPSAJVUBAJFBBLPUTEFDKEYOSSYDPUGKOVIYLHEWBTZMPSMZRCZIAXQKIQVALNRGKEHCEZKHCXYAWFARFXPGUXCHSLBIIWMWTZVQGTBRQMTDJAKPYJDESBLQWZOVZGGEEDGRCVCWTXKHROWKIOOFNQFNCMGLGN");
    tmp_msg_0.predicate.assign("JMQEFSGCXLVWRUCYODXMJIGXRVGQYCFOLPJJUNRKEYJMIBFDGIFMMMLRPCZUROQRIDYQGKTOHHIVJXCXBUZNKXDOGNC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UVQRTQWIVLJJUZQBFXEDKCHKKILXCFTFVCNNHFEVSNPOHORGELXDMTCKEFOUEOWSNPFSHHYEPDVHPNBDXMJAHZMZBYWEGIIIMDMRPRDGYDUROEUORCQOKYHBNIRFJZRMOCMBWIKGMFGJVGVZNQLOGFBPJAQZSXYEMMQJWTVFBPISXQSVKNPCAALRTCCJZWEXOUYQTANAWJWUKLLBYYTXUSUKZXSLDNALLZAXPUCDS");
    tmp_tmp_msg_0_0.attr_type = 209U;
    tmp_tmp_msg_0_0.min.assign("WHETKSOQKYQNYNGQWANKYBQDGIXTPVIBFMGAWAUWNLMOREUPKYEAOPELFSSFACQLCZAHBGPDMFXUBUUSISLZBTTLRNIYZARQCXNRECJOOMZORMDPDJVOPXDFBCDDCWLKMOURZFASJMUMULDXYHZZIVIFQKKCIXYAABTRXSMEXIHKWEKWVNNTPYUOJHHHVTBZTBTVZ");
    tmp_tmp_msg_0_0.max.assign("YSVYQWVVSKTIBCJQPJQVHQKISEJFBHVGPOQLVIBUGACZLDSLXPYOFBJGLDMCRAUKQZYNHXZNFYOIPBRDRCDAIFEJWXECTNSXMXDWSTUGWHWGQNHTCEW");
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
    msg.setTimeStamp(0.24827627351203052);
    msg.setSource(8378U);
    msg.setSourceEntity(165U);
    msg.setDestination(44223U);
    msg.setDestinationEntity(246U);
    msg.op = 229U;
    msg.goal_id.assign("UAMJECIFVCXPFBENXCUWQAVHYRTGFVNVJHCBILWQBZVZBYFJGMFUYLPLUDHIJXCPTGKDDNWZTHAMUSYX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WTKVTYJAFOKQOHXYRGPDJPRHVEWYUPWGPSLDCQMKKVSETZDLZHMNFPDLDJQOUJYIJCS");
    tmp_msg_0.predicate.assign("TYNMUWQJSUBRFLCMUKCOCJAFCJKTOSQQIZSQBAXELLVPLPFPHGJQGGZWNHSAUYGBGKVKNXLHSUTZFRYPVYGODJWHZXNJMRDOKJWLFWVZBUOQYNXAFMDXIOLWQAHGBHIRLNADNPZVOHXTXEINPREPEQCQSNIESDZEEQVZUHCSMZJAYSWKUTKVYDWFFMBCTBDBMDMVFASDGJIRR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VAJEVUDXFVMUDDZJPNCSLITGVOSZITFKOKMWIDGRULRAQBYKDYZBDALIPAGPZEIYIJSFMXBKTAPYDFLTOQXNPTYHLEZCNPCQGDHRFJHGQJUBHUQBBACZSKMXMHWSXBEXVWIFMYXPRHJFSWRINEAWRYLKNIT");
    tmp_tmp_msg_0_0.attr_type = 39U;
    tmp_tmp_msg_0_0.min.assign("VEVFYVKXEGKTGQNWIQVJMLPARBGBIUUNYGEDLJEFUVOTCVBQTGIOZCMTJBTWQKXCSOMXAVDRJHXDRDODXEHSBFCFNOSYSWQAXNUFKYGNSZJZRBHCCBABNDJZHII");
    tmp_tmp_msg_0_0.max.assign("GGXYQHLTSLQZNHNEMYJLDYPGMXYWEAZNVPFUPKMFMPHUVUUEZBIVPCFRIJZEGLBTBFHCUPNISCBYZNRFPHHNPDXGXQIPTCUNCWZARFUAJKSDWRGUWAXVAYVQGHKKRJBZICJIDWXVLRALXFSICTBWOJUJUJPIOLEDTTBOJD");
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
    msg.setTimeStamp(0.1326292597325045);
    msg.setSource(47208U);
    msg.setSourceEntity(191U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(136U);
    msg.name.assign("PXBPTAVGGNIAZOLMKWOFEBESGMMVDOJABQXAJPMQYXOLBNYKTCORDJQXTZTZHSXPNGMVHKGWYKROAHAXNYYCF");
    msg.attr_type = 79U;
    msg.min.assign("VJNPKVRVVNRWDYWRKLMGERBNCPCYXVYSAEQSTNXDOAYABYOHZJWULMGUURBWHSHOXMVTMIHSBZHSHEPCQOTJMDCAJRTKOZHQPJMILCASWJBKZYIHRZYFEGLGPEFIPARDODAOBZRUEAWEXMJQNQWWIQMSVNGQFEVXYTFDLTPFIKGRTGFUGGLOHNWQBUOIIJUDZCFCAYL");
    msg.max.assign("MBSPBTLJINLMFSPSTYRQTPQFIZNXYOVTYEIPWBVUHZEKLSJSZQEUZICALMVZRAEHEDUGCPCAMMNFPYCHBCZWEQFQKJWXIKWQISRDESUOAYQAZPXOAXMUKBJJUAJXLAHKHDUXGDONNFZFEXHGKDHRJTFNAOGBOBCKVIGSTWLOLQHIYIJFGWPZOMFNVWVYTYACVRXCMROVCDWDBHLZVUPGMSDBGSDYWOLXKRHTTXJGRBUEMQRT");

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
    msg.setTimeStamp(0.0924007245837194);
    msg.setSource(30113U);
    msg.setSourceEntity(29U);
    msg.setDestination(42362U);
    msg.setDestinationEntity(170U);
    msg.name.assign("TCKKDVQYAWTSCHPCIHOWRGULPETVHYMMVSEODOVMTFEJCKKAP");
    msg.attr_type = 153U;
    msg.min.assign("WHMNTZBRBHNTGWPLATRJ");
    msg.max.assign("GECHEQTQYAVSUPRDNMGVEJIYOSILUQRFCLBOLSPFHVNEGOHIPKMATKOAKXZQTVBQZQZFJN");

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
    msg.setTimeStamp(0.6962998933063393);
    msg.setSource(7566U);
    msg.setSourceEntity(182U);
    msg.setDestination(30605U);
    msg.setDestinationEntity(71U);
    msg.name.assign("KGVCKAKNHFHVRYYGUFXIXPBTXTJEJYFLAEPSVDHUSBRICMGVHXTOJLEJBQYONXQEWWZVWBUPXKDRWZPYYRUOFKTFTRGNZFDWIRILOZSVMSMUNOUDDOZDEBCCNHUKZVCAOJCVRUTQMPLNZATZLXIYAAVAGWBFPTZWJ");
    msg.attr_type = 3U;
    msg.min.assign("QHTNXEEZPFZPVNXYGOSKZWUJRLCMKVTBPTXTKOSHKJFEARAPZUJRTMVAVXBSYPVSMWVUOWMWOOPRGJUYJTWPNXJLES");
    msg.max.assign("ZELGTMOYGFRBTMOXBIOQLLPMQVFNDENBGUNBQPGFMXSJ");

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
    msg.setTimeStamp(0.4107002323974056);
    msg.setSource(40952U);
    msg.setSourceEntity(27U);
    msg.setDestination(59518U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("ZFEYPXOEKEIEJBNTNTVIYKWKUEHQLGXADFANJSUEGIQSAUZMXYZVCCLVRLHUEZJEGYMAIOKWJNVJBBSXDHAOIFUSRMJRGWKPKBLHOZOGCQMDWZPNFLDJAVSSRNIC");
    msg.predicate.assign("YQRMATTHQUZLYOSUPJSJSIYDIBPYSCRGOGSRQLZXUSFBAHXMDUNDZHAXYLYAQNKIPZKZDBFWMHXTHRXKVLGUFJOSEOWEDMJQDPVARNCYEPBQKXOXFUHBVWMCOCVFZVEVAUJRIOCWMGHGEPIIKKYCIUVNCNRNUSRMGPLFPAWDWCJJNMIKEWLJGTMIOVLTJZRG");

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
    msg.setTimeStamp(0.1453449544012575);
    msg.setSource(62004U);
    msg.setSourceEntity(171U);
    msg.setDestination(53224U);
    msg.setDestinationEntity(91U);
    msg.timeline.assign("VPQLEUGVFCDJIQZNRAHBRFJXUCBYJTZEJNLLBNHZPOWRXQPZMLDNXYESGFWEXUAXEIKCROYBSCAGUBU");
    msg.predicate.assign("KNFGQCUTYJDRILLUNQOFNNQHLXWLVUOTICAEFEJBNNEWCGPCWHEWYMKLCRTSPRBLMCIRCDZGPVYAGFZKXTTPOJKPHTVWKPYSWJHRJNVVFYAQPUDYTWFZHDRIAUSBOIKCUKUBAMLYGXDGHRBQQOAEHOJMEPHVOYGZPYOQGWDMVIOKVEASAUMSERZZWAVGMBFZSI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JZRRSRYOLKJWMOVCWIAGWMOCPFSTWIWABKEGNAEDUBKIPQECKSYVVQHUENZUTPLCZGVXQVHFZQUFTRCAZLVINWDUHUSMEGJTQFZKNIJHJHEVRPTHNXFDAYUZXXAIOMIDYOCKYHLEKJJUNPNBDODFGLOXQKCVHSRITBLPLNLYEVICRDQPAWUXNSSFGGZGOFITJTLOBBMWOMWCASXXXJPSYTMBYDBBKXVRJFMQB");
    tmp_msg_0.attr_type = 84U;
    tmp_msg_0.min.assign("NMWHFNCFCHOJVRUFIJDBWRBEKAQQEAPZRSAPFSKKQBXIJTRHQCOTJCAZPKJNOGUIFTVZUESDXYOWKKSHXDDHGWPUDBXVYOBSTW");
    tmp_msg_0.max.assign("ZODLWBKMBSSFEHCKUAWUXVVBXWMIUGNAZNMIKTCZQCRPGKOCVUUHXPJYHELHAVIERUAGBRYDQFYRIDKJZWDQIMBMIPSLVVKTPZUHHOPZCRLISRZXJWGJA");
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
    msg.setTimeStamp(0.9581678684018574);
    msg.setSource(5880U);
    msg.setSourceEntity(6U);
    msg.setDestination(46995U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("GSYYARKTQYISMGBKLZPYSNHAXOJLMJGWCUWVGKMEIULYWUKMJHFNTAPZMTTWCCETZQBDSLMSHMDEWIEBPNUFYJRWLVVBGEEXNFZWJYYUXWABPMGYITIEIFXOTQXHNALXEFQBCGAVORDQUCKHMQFHSCWADIVJHKPNZCKQICASDKHSGMETDIVFPQCDDBLBKKRZRVLIJGVQVNNXPVTNX");
    msg.predicate.assign("YFCASNBSYRVCCGL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XLVLFCLTQZZKSVDFCYHPRJGZUOYSNHTFGEYSHVQNBYXFAEDBNIJBQAEBPBTIROBCHTUCJPGRDBEMMVUXOOTGIMEJRSALGVATAVAWACSJJDABLAEMTZWNOWFOZLTUNEIHYVIXPMUQHDPSQPKYCNSWEMNJWLCRVMWODANPDKBZLIRDYGGXIRHXODKUVJFUTZRWQYLEKUKIUMCFOFQPOMP");
    tmp_msg_0.attr_type = 222U;
    tmp_msg_0.min.assign("QPRXTOZKQVXNKISOPYIGAQGMANDKUOAHBFWXJZHRUEGAMSNKM");
    tmp_msg_0.max.assign("MIQNEWTYXZHADVGPXPSBVWRBCJAZCDMFMEFSOXYBQWSJKLXCMIHBVILEPGKDOFCWUFTLCFHZSRCJHFPXDUGIVAJNYJSGKOMVOJGYNENYZDPNELJOQDREESZPTHKWRYJBHQGHFVPWPZVCYCZABTNMOCMLUTQUEAURTDSXVAXIKXPDYRIBIKGUVAJORBBKLOZGIZMYXUAWYAGNPUGLUEESNXVRLWSQLIUNRSTOQAQTDWTWFKZRFHCBKNIQMDK");
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
    msg.setTimeStamp(0.936441649414125);
    msg.setSource(35615U);
    msg.setSourceEntity(234U);
    msg.setDestination(11265U);
    msg.setDestinationEntity(63U);
    msg.reactor.assign("WPTLYWKTIKUNWTDYZVOZOYPABCQJRNAIVSCXBXHKLBVECIYCRSWZQVTNWPBYODFFBJZAPJZHWQUAVIBMCXYHPGVZRNGKOOOLMMIEGEPZUJNTQQGEHUYHFVPFXJQESXABRUEWCRXXZSKLDDKKIJBBGORUAQDNGTIXNSEEUYRNFWOFTGZNICQOAWEEGWHTFCLPUHSJXIQYLVNPSIXHARFCYFDMMKAPGTH");

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
    msg.setTimeStamp(0.7725953553732674);
    msg.setSource(16457U);
    msg.setSourceEntity(122U);
    msg.setDestination(65488U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("CPLWDULFPKNQOYQKBEYFTOYOWOIBXKNXCKBNAERTPXGXVGRVZGMFYZUDPKCAUITGOGIMXBRCXWEJFWRPZFMAZPOVDHPSDTYWLMZDIBNRHMUHQBQBRADNZTAVSGQXAEAHQFKRLNTMXPLYEBONDJJUNZMISHDEOPJSCTBLIHWFCHIWSEIAJHUUJFHOGCCXRKRWGTUMZXVVECYSUIQEFGVSZCRJLPLJJAZM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WEDQJCIHZDLZRINYNCGSTILLQNSXDELCHXLMMIMOLTKGEBRZXBEAXTNPVGSPMQSLBSVFDOBHYHNPROMFBUBJEKYSWNBVNXDMGVPBJGKWHDOQHRIPPXZWKIEQUGUVIWQKLROFZZOXNSXCQF");
    tmp_msg_0.predicate.assign("CBJWZNWOSGQZUOFCYVOTKOGZLOPFDJLAEZNPHSDVXAZCJVZFSQJKNCTWTYHCZIWFQMEVRPBPNMRUHQYSESWERRVLJRDMRTUDWAGRCULASGQURBKRBMNPUQPKHNYGIMEGOLDALHVLHCQGYASNJIEYYVKJFDZHXIEMMCTMFZXYWDILEITXFOZOCYJNTWSSKIUBVLPFTBQTVKHIDNPGACFBKXHOUPFIMEXKTGBSJKRXPYGAWAWDLMXQEVNH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DUYQYEBURRNKGZHFHCXFDSFWCEKJLFTQBTOCDAFEXRDWLNBPEENDODGNQTOJZELJOZQMGCCUFKGCOJQSLCLHJYAHIWUMPQILLBAROZTSYHBGWRTXJAHSVSYMLRMGPNPKIMTRYABXTEFCVAZNFQLDAAYVVGWUKMZBBZXLUASVOVENDBFGMPJKXUIQPRVXKIIXWPXHFWKWTYSICBTMNEK");
    tmp_tmp_msg_0_0.attr_type = 77U;
    tmp_tmp_msg_0_0.min.assign("LYMPDOPRCQZIYVZSBLYDSUDNWSWKCXHSMGJGRPETMXARJSWCIQCFREHHMDISZLASYEQKGERTUFISOYHSEJBFGPJFWNLQUTLXYSLBQEBVVMJMKWKDWDJJKLBRXUGIDPNHFQRRPCZKMFZCEVENCCNTGIMYUKQVBAQRLYNQUQPGOPGXVOTIAXWYVNOEFODVHGMXVXBNGIIWBAHJPBAZUOHZJNCZOHDOUTT");
    tmp_tmp_msg_0_0.max.assign("IWIOLVEWEUCCFHRSSSJVBXYSTJUHKNNXHMFWDTLNKAELLUVKSLQBIEYQZEDHOEPSCIKQUMWZWYFRAVUMPDCCIKYGHTSZ");
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
    msg.setTimeStamp(0.533135515323564);
    msg.setSource(47905U);
    msg.setSourceEntity(22U);
    msg.setDestination(18655U);
    msg.setDestinationEntity(196U);
    msg.reactor.assign("GWDQHGJVSGPVOXANFKVPDQQIIVOMWGUDVYFAUSSMPNYEHNEXPEYTQBEVIHWRILLZPTMBHWMNRCXCVSXLQZBPSSNZJROWSONKPIDLCYRLICIQSEXUATBRKRYCMRXZNHRZCQJYDDHTIPPHKXUETOGHZGJJXNZOLNERRUFMOQLSBFM");

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
    msg.setTimeStamp(0.492140586896856);
    msg.setSource(27979U);
    msg.setSourceEntity(144U);
    msg.setDestination(4972U);
    msg.setDestinationEntity(100U);
    msg.topic.assign("VRCHMMUXKBAFCPAEUDFYTPQDBZESGMLPACIKFBKETLXRPJMPCIMKVXTEAMMVXORVNP");
    msg.data.assign("LRACBTFKPONWRQZDYLGQTOHDYZEVHMOWDDDRKRJHPMJOZQPSPTXWIZYHVWNGQOWTWBZJXLNEJVYNPIPANAAVUHYVIGMGOMAAGJLLQNYAIFJUKSOCUONBDLSPCGTIEOUNQQCEPCITBYKSCSWFDJTMEGXFRZXIYDKGQKFXSYFEXYDBGWFHCVRQ");

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
    msg.setTimeStamp(0.6474982177626186);
    msg.setSource(40224U);
    msg.setSourceEntity(124U);
    msg.setDestination(4440U);
    msg.setDestinationEntity(45U);
    msg.topic.assign("BWPMOSQBLOKFQGSHPRVNRUDEMAAXYLXCGTJQ");
    msg.data.assign("RAMYTTEXUQIIZBEKXYEEKXYLFKMHBGVEHPNRGNJQZNAZUKJKTFMCFWHPDCNIXSAIWAVFMJLTRTQCIOQUONPUBFINGYXHCUUJPNRUEGZWAYAXHS");

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
    msg.setTimeStamp(0.28134777395679855);
    msg.setSource(5022U);
    msg.setSourceEntity(141U);
    msg.setDestination(10192U);
    msg.setDestinationEntity(113U);
    msg.topic.assign("MWZHINMSKLIPZYFVCRBRVOSJEPPJIEMFMBNAYSJALVWAE");
    msg.data.assign("BSKXDZZYUIVEIFVOVSWXHRJGMFUCJQWUWDQLQZZMNMNQGEZHBOPCXGFWDHLSADFCBNYSTHRNABOEYSPLFECVTNEOLZIURM");

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
    msg.setTimeStamp(0.7173804116921251);
    msg.setSource(25823U);
    msg.setSourceEntity(149U);
    msg.setDestination(64686U);
    msg.setDestinationEntity(6U);
    msg.frameid = 106U;
    const signed char tmp_msg_0[] = {115, 70, 71, 16, -28, -128, -98, 20, -98, -93, 79, -21, 51, -124, 88, 92, -126, -128, -44, 60, 33, -15, -27, 19, 66, 42, -45, 80};
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
    msg.setTimeStamp(0.8134852280882424);
    msg.setSource(50022U);
    msg.setSourceEntity(230U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(241U);
    msg.frameid = 165U;
    const signed char tmp_msg_0[] = {-31, 86, 94, -43, 102, 91, -120, -48, 79, 0, 26, -103, 110, -118, 101, 50, 121, 111, 15, -53, -2, -2, -88, -79, -37, 3, 93, -41, -26, -16, 123, 121, 78, 115, -117, 67, -45, 86, -61, 52, -34, 54, -60, -1, -15, 47, -103, -83, -118, 14, -18, -80, -69, 94, -31, 80, 31, -63, -116, 27, -12, -93, 19, 121, -64, 91, 94, -24, -102, 71, -25, 12, -79, 66, 118, 76, -91, 117, 6, 114, -66, 81, -76, 104, 54, 98, -98, 124, 99, -95, 113, 59, 95, -94, 4, -116, 85, 57, 28, -54, -43, 95, 120, 60, 111, 13, -76, 87, -93, 11, 78, -116, -61, 38, -89, 23, -42, 4, 11, 97, 30, -85, 12, 32, 123, -41, -102, -127, -99, 114, 82, -109, -33, 115, -78, -17, 2, -109, -61, -117, -77, 27, -117, 29, 122, -79, 45, -14, 90, 106, -87, -63, 55, 123, 62, -115, -44, -108, -86, -112, 89, 4, 33, -117, -124, -5, -103, 117, -68, -42, -21, -80, -46, 73, -2, 117, 41, 64, 27, 20, -65, 111};
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
    msg.setTimeStamp(0.4445718041532939);
    msg.setSource(46571U);
    msg.setSourceEntity(19U);
    msg.setDestination(58179U);
    msg.setDestinationEntity(201U);
    msg.frameid = 168U;
    const signed char tmp_msg_0[] = {71, 97, -58, 95, -10, 74, 10, -62, -92, -58, -35, -107, -69, -117, -111, 76, -62, -5, -6, 104, 107, 70, -109, 20, -71, -19, -8, 52, 16, -46, 53, -83, -100, 9, -111, 99, 48, -8, 4, 126, 82, 100, 52, -128, 2, -89, 104, 110, -76, -67, -26, -96, 101, -86, -27, -39, -29, -68, -20, -67, -111, 27, -114, -13, -128, -57, -20, -74, 87, 80, -23, 31, 25, -1, 39, 96, -94, 110, -75, -124, 75, 12, -57, -63, -27, 98, 26, -7, 94, -116, 24, -25, -113, 62, 96, 16, 9, 8, -47, -124, 38, 104, -13, -128, -122, 17, -25, -87, -105, -40, 115, -87, -22, 96, -46, -87, -125, -95, 61, 57, 92, 2, 92, 55, -58, -49, 104, 97, 4, -20, 32, -105, 48, -96, 86, -50, 123, -123, 126, 96, 47, -95, 63, -94, -14, -48, 4, 98};
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
    msg.setTimeStamp(0.5091931449573134);
    msg.setSource(17515U);
    msg.setSourceEntity(154U);
    msg.setDestination(29236U);
    msg.setDestinationEntity(5U);
    msg.fps = 51U;
    msg.quality = 102U;
    msg.reps = 59U;
    msg.tsize = 73U;

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
    msg.setTimeStamp(0.3697838678973555);
    msg.setSource(26803U);
    msg.setSourceEntity(223U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(97U);
    msg.fps = 80U;
    msg.quality = 123U;
    msg.reps = 141U;
    msg.tsize = 14U;

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
    msg.setTimeStamp(0.39503326596643684);
    msg.setSource(64707U);
    msg.setSourceEntity(110U);
    msg.setDestination(29072U);
    msg.setDestinationEntity(165U);
    msg.fps = 13U;
    msg.quality = 134U;
    msg.reps = 177U;
    msg.tsize = 92U;

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
    msg.setTimeStamp(0.3339301679185953);
    msg.setSource(46519U);
    msg.setSourceEntity(235U);
    msg.setDestination(5952U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.9395446336812625;
    msg.lon = 0.8192730469031744;
    msg.depth = 185U;
    msg.speed = 0.6388862206393285;
    msg.psi = 0.9026709154289241;

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
    msg.setTimeStamp(0.03035017689914976);
    msg.setSource(51490U);
    msg.setSourceEntity(229U);
    msg.setDestination(40489U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.23725933508138708;
    msg.lon = 0.7433154236294558;
    msg.depth = 42U;
    msg.speed = 0.9699847533430511;
    msg.psi = 0.5406832430460234;

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
    msg.setTimeStamp(0.13723991221021203);
    msg.setSource(57121U);
    msg.setSourceEntity(212U);
    msg.setDestination(25649U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.456091516309975;
    msg.lon = 0.8329023848225439;
    msg.depth = 100U;
    msg.speed = 0.7358333654643091;
    msg.psi = 0.03529119400469061;

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
    msg.setTimeStamp(0.3556686432769409);
    msg.setSource(11610U);
    msg.setSourceEntity(124U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(211U);
    msg.label.assign("BDQYTHLCHNDLTMUODZXSEAOIHSCIWNGOFMMJWUQKBBLUWVIHYOFDRGORNXNFHLJGUEQMITSUGUOICNAJJHWPKAPBUXQZRCYAORSPBITGZVRQAYEXPPFUCVASMDBDOCGVMLWNCXYXPQVSTALHKZDFRSLKZVK");
    msg.lat = 0.8912090339690334;
    msg.lon = 0.615715065442018;
    msg.z = 0.1932766292201643;
    msg.z_units = 113U;
    msg.cog = 0.04087257307730541;
    msg.sog = 0.7479937097728551;

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
    msg.setTimeStamp(0.408419168217278);
    msg.setSource(52924U);
    msg.setSourceEntity(178U);
    msg.setDestination(47004U);
    msg.setDestinationEntity(109U);
    msg.label.assign("JPVJCXUHNTSUMOVJMYBQEQOKQIIXCSSZSFWWLDJQZXVTVGKUDKPENQVMKHYQTADPZBEMNWPDKONPKFVYPPYLEUALFXBFPULGIVZRPZSXHVXJFRRMWQCVTILDHRFNMRFODBUCJENGAKODFDIECAERTGTRIHQCCWNHAXLDBBTORHGNDIRYKOLYKUVZATWCQYNLX");
    msg.lat = 0.9703683440039;
    msg.lon = 0.5219944284710706;
    msg.z = 0.17060520938404766;
    msg.z_units = 90U;
    msg.cog = 0.9983044362992833;
    msg.sog = 0.7430017704454155;

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
    msg.setTimeStamp(0.5475232619526492);
    msg.setSource(3669U);
    msg.setSourceEntity(113U);
    msg.setDestination(38271U);
    msg.setDestinationEntity(165U);
    msg.label.assign("SUUCADSNATSVONALLRLWP");
    msg.lat = 0.9659751156966763;
    msg.lon = 0.5171563190235469;
    msg.z = 0.43720188166733365;
    msg.z_units = 186U;
    msg.cog = 0.55416752729299;
    msg.sog = 0.6931890350966232;

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
    msg.setTimeStamp(0.41910098348835645);
    msg.setSource(18582U);
    msg.setSourceEntity(235U);
    msg.setDestination(33801U);
    msg.setDestinationEntity(215U);
    msg.name.assign("OAIPKUOYNPFPJRIKVUGIIFYSVARKWDCUBTBLEATYHRLBEJNXUMBDFJNAYINOMAHOLZPEUJQKPWZOQSTKXHKXWMDXGZUBRITUVKMXLICRCACGHSZDZRJFLYMAEVMJCZOVWNELVHIMTDWOYWSYCUYJWLTZRSTBBXEKQOWGBQEAHFLYQHBGFCCESLQEXNPOGMHKYCDJZQDUZGBCDHNEL");
    msg.value.assign("BIYHSZGTDGJBHZVZYTODQKGHFWHGSAXGNFCVIRSPSKLPJCBGIEWGJUUQMVUASE");

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
    msg.setTimeStamp(0.08494649976936797);
    msg.setSource(44755U);
    msg.setSourceEntity(197U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ZSQCWDZBPUSAMPVIMCFARLKLSZTDLLOEOGSNQTJFJROEMTSXPTOUVCGWKJVSXEYFGAHXFYHATLNEOCIONBUAJYJHVSJRRSRXIDNLJXNXZMMOVAGFDZNWCXUKBSQFPHWCPZRTUXKUQFPUDHLMQYJGEEGBDUAWVMYSPVEPBDWIEWRWDDLYYUNMWNXCQVAHOKVNBYIZTFZLIJKVKJIDTXWBEMHIZRKQBERAT");
    msg.value.assign("USYZIAFBUAOHMZJYEKIMLQANXJXDNLKKYJCIRADWMXPBRLKQOEFGATIXLCJNUSPVXWPUBGYPRTFSVEEZKKAPLFIB");

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
    msg.setTimeStamp(0.7054546140334117);
    msg.setSource(19373U);
    msg.setSourceEntity(158U);
    msg.setDestination(57556U);
    msg.setDestinationEntity(254U);
    msg.name.assign("LZFHKTARTIPVSLXNBHTRTQBEZCELECARBJFBNHWVXVUB");
    msg.value.assign("FMLSKXWUJWRCKNTLMYDETVSFTOUNTYXAPSLSZSSIEXFBPDGIUCZHOIXBRMITBCANFNUVIOZSAVOLEYYIYCEUJQGKRRXAAUKIVNBUKFGGDARILGHSQCOGANXZWHWLJ");

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
    msg.setTimeStamp(0.8400904322032086);
    msg.setSource(11909U);
    msg.setSourceEntity(77U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(44U);
    msg.name.assign("LGCXQCBPNKVMJJRWZHOXEECXUTAITKHWMQMOUWDKGUALISGKGFRZUDBUDFRXTDRHNUPVFZGYUSOOLLPCYQHTFGTJVJMTPZBTXTAKCSMNDZYGPNBSREDZIBYRWKBIWPBGVSLURENAFJMPWJHDBCQKNSCYGLISSHRQUGQWJQHVKLSISPJOUODLZLIHZEAPKWXONY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RKPUMFERVPJFGPGDYYVTEGHEEUIZVHNYXTCRKJQRNNDEYIZHRZCHOLA");
    tmp_msg_0.value.assign("PQJRNVMQMWSAZJKHDYAARATMLDVFNQAFQENQSUHVODLWJMMLBXCWDPMDLXPUYFXOVTBT");
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
    msg.setTimeStamp(0.45336936428791996);
    msg.setSource(51974U);
    msg.setSourceEntity(143U);
    msg.setDestination(10174U);
    msg.setDestinationEntity(252U);
    msg.name.assign("JHAGZXPNVFIDZINHJRQYNRBFTAMTOQLDVIURWFQOOJJXMPEXVRKGMFPIPSFGEUTYSKOCMLNSLOWUTFBURYLXQWKXOXLXJKOAELVSAQVNUWUFQZNAYOBDULFCLBVRPCNVZIRUGDAYVBTVHJUMMKPOBZPRITWTCFBWISCEYEJGNVESDPIBCXZKTREYQOIWQXSDZWJHELXCHTGCNAHYBRMJMDEAMKPHHYKSKQLWPAHKZGGCSZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NLTODAQJRSSZRSWYXKTPWGFELJABFSYCLVVIHZPNKUUMOHJXIZKJRBQNJQMZPBGXVTNDVHUMZBSEDXZQCUOTMCAJZWIUGAWUEISNZMJEURLGYNYREHELSFPZNEMPOEVGEYCCXOKLFOR");
    tmp_msg_0.value.assign("SNWYQTTAALXDOEQJSZWJUMMJXZCNWQEOTJIKEFYKCFUKLJURENKGHGNRPDCGVYIXNKPOFPOBLZMDPEYAOVYVACPAHEXCXZ");
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
    msg.setTimeStamp(0.6971699230642157);
    msg.setSource(40662U);
    msg.setSourceEntity(201U);
    msg.setDestination(29827U);
    msg.setDestinationEntity(13U);
    msg.name.assign("GEYMVTYJHBJRMZXVVFOYFWZIBAFXPQSLRXOAINQJHEDCMAYULDUUWLWBJQMRUJHYNEYBSRJTSIHGCZECVDNCLTMEGNQLXYUIFZGZUFZCFURCQATLUDTEGXEPKMAZZTOWDLK");

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
    msg.setTimeStamp(0.6010787354540876);
    msg.setSource(57618U);
    msg.setSourceEntity(31U);
    msg.setDestination(53389U);
    msg.setDestinationEntity(161U);
    msg.name.assign("BMZAVWFETILJLGCMQENAZGDEZKWKRFEKHKYJQZJXIFUELUFQYMCUQKSRHQSJBSJXSGPZCCODGHDHSNKKUUEAEICXIALVPPHCOMACWPNWKZMQRQBXWTOBNTZTYLLGBTAJNLJWXBROUMYHFXII");
    msg.visibility.assign("WOWNYWYIFUCCRLELSJJKMYFUFIAEBTVUJXMQHAVCRDISLSBYYLEAMGKPUKUSPKJIQDDOPIBZYGQGZEXCIHLXVZCBPKVZVFRNWXYN");
    msg.scope.assign("VEBSAXMSFHQAVWJOAWRNKIASLYIZBDYIVVEVPHNRWHVUJTTITYLLDAZCTXTSMGRXZUQDFKXDSEOWGXASBOJPFRXHFNLTGMWBQGSCLPNZEXQTLVLPCHOUPXJJZSCIUOAMSVUYKREH");

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
    msg.setTimeStamp(0.4133130865340826);
    msg.setSource(2095U);
    msg.setSourceEntity(133U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(215U);
    msg.name.assign("VZMBSSZAQIMUOIAVMKPQFGJPUVPGRFCMNHVDNELBXKIKIXFMSFSAWTHZWKRZLTPONVUQMXMWLEOMLJOHLODKCXFDVREQMRBPQJGPFEACEQSLOOZNDHQJLYTSGKQCJWJHYRBWGPDYWYRTCTGWPFQDAKHXKUGUIJVROZVAYXBCWRNXYHWIDRKOHEZLJJZTBCTSSAZQLFKNBJEBNDICUYUTXVBSPXYVYOTBUNHEN");
    msg.visibility.assign("YQWOXTXKPGVECYIZIHGYNTUWOLIQFUUZOTHZL");
    msg.scope.assign("VCLAGZOKEIVGNWTADOGFEHSTYCESJQMINBFUIMYMVOIYRGQCTARNUJUIVCGXSKBJOMREDNWUMDNHZYJBLGHLPZTBXAZMJLQRDXYSKZUKWZAWSQWIJUKULNRLYWHKCBBEOSIAGTFSSRYOJVMWMHALEXLNPEQJCOCVUTIVENVDJKFZHPOXGRCPHFWU");

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
    msg.setTimeStamp(0.17596943687221156);
    msg.setSource(12953U);
    msg.setSourceEntity(245U);
    msg.setDestination(52572U);
    msg.setDestinationEntity(98U);
    msg.name.assign("IMEOSNVKNVUCAXROMBIXDZNZBFTENMXPYQDBZYCFOHYVULAKQGIXYGTGEXLXQBGIFDCLGOAPNSKQUYMHKFQKXHMYYRKUZQFEWGYMVCXDKQGWBZLTDXWVLBVOUCOARSUHSSTEJENCQZNTHIAVZTZVRURHXJSTLRMFLJRGSERJLUCPWCKFTYHFESLOBDUDCYSPQJZMAPDIWWPO");
    msg.visibility.assign("EMHZTOSNBYNCRGRDAWZAKKKIRPVAKUJJCOPHINFFJSXJIEHASTHJDXXIEZUIVNPLKCFIDTEUWVCNVHVGMOMCGKZJSYFCCGULUBRZIDVVXGGSHAFSFHOWQTOKTWBYUJSFWELKDBPRTFYXNOL");
    msg.scope.assign("HTJHZIAEPUTGBJWMVCPLEDAGUPZUWVBHYOGKJFFWHEJKXMIYBXSZNGYOQAVOQBIZXZKWTEFVOPKYBHSSRAYIRHSUQUKLXLEZYZFSNCOMDANAWBOAFNWMTSNCDZPWCDDJMHEBAILGJLCVXDVREGCVMPOUCQYKIUAZRYMDRLBQQGBPCVRGFSCLFMWXTRREQTKNQOUTKJJDAMIJDNKZHUIXUXYRECBVWHPVWFGTIQRI");

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
    msg.setTimeStamp(0.2223370744220936);
    msg.setSource(5804U);
    msg.setSourceEntity(230U);
    msg.setDestination(44958U);
    msg.setDestinationEntity(116U);
    msg.name.assign("UNFNRTDETFLGPRYQGODZLAUWECVOIFHFVYGZMQPPHYFVSVWGBKYURXSNEKL");

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
    msg.setTimeStamp(0.882078912275037);
    msg.setSource(22357U);
    msg.setSourceEntity(89U);
    msg.setDestination(20371U);
    msg.setDestinationEntity(72U);
    msg.name.assign("OVJVGNIWNIODVBPFFJEEQMKAKOLWWIGCSMTTUGGBVULBTKWITOFICXLKMTSRPDIENMQJJHNRIHZHFHYCGWSSHBFHOEUJDLKSMLVQOGRMZNBYYJRFIIRFUPGLCZOPFJUKJNZHOQCYQVGPVUWYWENAOADYBYVTEDJQQWCBQLBNSDXMMGZMETVUPDJBKRXXADTRWKCFOXKCULYAZGPANXRSPLUFVZTCSBDKAHANRZHYXEAZHZAIXMSEL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NCAVMSYDZJFTTPSVJIZGRNOKLOYHQDPZJIYREBDWOURS");
    tmp_msg_0.value.assign("UEJSDIJPFROYWSGCTSVAALOMZHHHWJBWFBPXOCDRBAJPLB");
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
    msg.setTimeStamp(0.6799987489189464);
    msg.setSource(26001U);
    msg.setSourceEntity(58U);
    msg.setDestination(53980U);
    msg.setDestinationEntity(8U);
    msg.name.assign("SRTGLQCNUXOFMXKWPOMDLTTLRVRKMDFQWYHRXLDUVJKZRPVSDUGAGHGVFAJNOHCRFWAVMPUIUKPEMAGHCBPIFQEGEFYBIGWWSZAQVXHXZJSJCNFQDLURTZSNIGYAEIWZUWTJBNMOJSGCBIYOGVQMVSUBKPNSNLARXBT");

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
    msg.setTimeStamp(0.32061291913208745);
    msg.setSource(60022U);
    msg.setSourceEntity(194U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(56U);
    msg.name.assign("IOOSIAMUPAEQQJAT");

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
    msg.setTimeStamp(0.1044744721442118);
    msg.setSource(53342U);
    msg.setSourceEntity(132U);
    msg.setDestination(42367U);
    msg.setDestinationEntity(64U);
    msg.name.assign("FBJCTDOUPVKXPQWHZESQJJJZAMSVDLXDWMKQUUQFMLGCDGAGTCTNCQSOIRJLPZREEIUBIBCUWSPYRSOWCTBYAAVTXRPWXDYTIREAZXFKIJYINMPHKBNTHHUTXWSZENDWJFBINTQJXQSZJGZSYZCOELOUOSF");

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
    msg.setTimeStamp(0.39525375302934207);
    msg.setSource(6533U);
    msg.setSourceEntity(106U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(155U);
    msg.name.assign("SDNSFXEXVWXFKYLBYRGCYXQKRZQMTPANUQFGYQMVDKSKJXDJABVQQUDHSAIPDYLZCQMNNTGAAKZFQJRLZOWRGDLSJNWZVATMTNKJMRBECEOEHFUBZVTFCPYURDLKLGWEMHFCMYHEBMAPJYUNTARTCKRZWWUOPIHOGSEWGRXOBGNOIDTTPOBUZKXTHJMGBZCYZCUCWQEEMXWIXJVHSVIDVRWBSXIIVJLBKOAYN");

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
    msg.setTimeStamp(0.3606018881673767);
    msg.setSource(26376U);
    msg.setSourceEntity(105U);
    msg.setDestination(45567U);
    msg.setDestinationEntity(22U);
    msg.timeout = 2680420012U;

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
    msg.setTimeStamp(0.15347636330387737);
    msg.setSource(22177U);
    msg.setSourceEntity(46U);
    msg.setDestination(60581U);
    msg.setDestinationEntity(151U);
    msg.timeout = 2324091304U;

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
    msg.setTimeStamp(0.6044928593514782);
    msg.setSource(57660U);
    msg.setSourceEntity(20U);
    msg.setDestination(59489U);
    msg.setDestinationEntity(198U);
    msg.timeout = 3808554074U;

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
    msg.setTimeStamp(0.06555786547873221);
    msg.setSource(59693U);
    msg.setSourceEntity(254U);
    msg.setDestination(41035U);
    msg.setDestinationEntity(205U);
    msg.sessid = 3460712459U;

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
    msg.setTimeStamp(0.22762640504252563);
    msg.setSource(12939U);
    msg.setSourceEntity(66U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(14U);
    msg.sessid = 810788610U;

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
    msg.setTimeStamp(0.48281321208612027);
    msg.setSource(32070U);
    msg.setSourceEntity(213U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(236U);
    msg.sessid = 2498854422U;

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
    msg.setTimeStamp(0.3693384231619363);
    msg.setSource(15710U);
    msg.setSourceEntity(107U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(150U);
    msg.sessid = 2186688126U;
    msg.messages.assign("ALNAGBMWXVICRNKWDBVCAAKIUDQIPPK");

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
    msg.setTimeStamp(0.5764237695351973);
    msg.setSource(37499U);
    msg.setSourceEntity(19U);
    msg.setDestination(56172U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1296449544U;
    msg.messages.assign("ZEQPMMMPVKCLKTXJFXXUMCAUNWWNBIGZRFKPIMCZIUUWRTWNJZXTGYCEVYMZEEYKSXSFAPQLRVYPZKATHDHNJFXCDWYPBIOBUIOLUSDTGHVUROHNZQLIDIAGEVFKOMSEJOQGYKJODCNJQWVUXYOURHUTBHTGLHPCGEEZRNRFTQVGSTIOJNEFLYXSMBRWTBDMKOPLJDDHQPKHSCHOQWFAKYCIDCBRVQRISQLAAZAY");

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
    msg.setTimeStamp(0.06789278133525167);
    msg.setSource(64801U);
    msg.setSourceEntity(249U);
    msg.setDestination(38696U);
    msg.setDestinationEntity(212U);
    msg.sessid = 893688977U;
    msg.messages.assign("OBUEMQKLHGQGYXPDYSGMJDWWCIXFUKPBKFIFEXAEVKONBFLSJTXNBIITNGHZRLMQHWTBPWTMNXOYIAYFYVVGYRLYWNOYSJPRNWDQESFQAEVAWATYZEMOMUZKARCEBGJPIUOLICFDIDNWQPLPTMFPQXJRICPCOGUUXTCUBZXKDGMVHU");

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
    msg.setTimeStamp(0.29447582989803);
    msg.setSource(21991U);
    msg.setSourceEntity(216U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(17U);
    msg.sessid = 3111093510U;

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
    msg.setTimeStamp(0.16859004823714996);
    msg.setSource(18836U);
    msg.setSourceEntity(152U);
    msg.setDestination(43283U);
    msg.setDestinationEntity(157U);
    msg.sessid = 2619785076U;

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
    msg.setTimeStamp(0.7435791000237371);
    msg.setSource(59168U);
    msg.setSourceEntity(209U);
    msg.setDestination(6785U);
    msg.setDestinationEntity(83U);
    msg.sessid = 30638905U;

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
    msg.setTimeStamp(0.17543530865461532);
    msg.setSource(2011U);
    msg.setSourceEntity(160U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(20U);
    msg.sessid = 1196459800U;
    msg.status = 0U;

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
    msg.setTimeStamp(0.4912149626327956);
    msg.setSource(63899U);
    msg.setSourceEntity(224U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3078745449U;
    msg.status = 160U;

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
    msg.setTimeStamp(0.7154931640475353);
    msg.setSource(5075U);
    msg.setSourceEntity(79U);
    msg.setDestination(9677U);
    msg.setDestinationEntity(5U);
    msg.sessid = 3117668201U;
    msg.status = 3U;

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
    msg.setTimeStamp(0.7970567112363309);
    msg.setSource(55596U);
    msg.setSourceEntity(121U);
    msg.setDestination(26336U);
    msg.setDestinationEntity(205U);
    msg.name.assign("HMUYUCSJDEXGCLTYPFRQYYANFDQXVUJHILJEZKBNIPVHXWCOUVQJTVGZJTDXCNOFXNNAKVIRMKGZQIYGTWVSXDDYLSJTDLWFHXOBYVMREITGBKBKCLPQSDTWJHEULSOWFSRGEFHGBWMWNLKMNCPEMMOVL");

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
    msg.setTimeStamp(0.22308003084544592);
    msg.setSource(63363U);
    msg.setSourceEntity(225U);
    msg.setDestination(22729U);
    msg.setDestinationEntity(167U);
    msg.name.assign("ARXEWTLHHRNTUMYOLGXPUFCDTVADTVJRCOAYNVMRCOHMZQEAPPSBWLWYJKEUXXLNJWPAGEYTIPQNLTGARCWDFFZQZKQPYZSRGU");

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
    msg.setTimeStamp(0.9226330163417478);
    msg.setSource(159U);
    msg.setSourceEntity(177U);
    msg.setDestination(16520U);
    msg.setDestinationEntity(51U);
    msg.name.assign("RCXAZAEGERXVTGYTQWNBSKQVPYJWCZOXFY");

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
    msg.setTimeStamp(0.7612659705338148);
    msg.setSource(42532U);
    msg.setSourceEntity(140U);
    msg.setDestination(33706U);
    msg.setDestinationEntity(115U);
    msg.name.assign("EIPURZMFJJVTBTFKNGSKYLVGCIWRPYGOXQUEAIFKZZABADHNOHAUYDDTDJCHQQSLPNSCZEDIBGFCEQMDWRGGAFGTNVLDHXEMXTVZIHOQRSGJSIQYGJJWOUWCVZEDVIWW");

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
    msg.setTimeStamp(0.8616312963991846);
    msg.setSource(14816U);
    msg.setSourceEntity(86U);
    msg.setDestination(22448U);
    msg.setDestinationEntity(164U);
    msg.name.assign("MFWJHNEONMIARLMFKCPRBWVZZZNQLLUYXZNCBUJUTIKBLIJXMCMUGYWRSKR");

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
    msg.setTimeStamp(0.33658072357372937);
    msg.setSource(765U);
    msg.setSourceEntity(173U);
    msg.setDestination(6359U);
    msg.setDestinationEntity(103U);
    msg.name.assign("HMCWFVBAICEBMKOLVWZMHCHUFKISYJQY");

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
    msg.setTimeStamp(0.9242524504639481);
    msg.setSource(3760U);
    msg.setSourceEntity(17U);
    msg.setDestination(52549U);
    msg.setDestinationEntity(237U);
    msg.type = 220U;
    msg.error.assign("XLJTGGZOUMMPBRYQZKXNFYVZMDWNHOYQXIBDCQCOVLUEAUKPEEDAUFVVIZEWSICHEWQMPQISGIWNALVSDXAZUTHOLKRCFJTFVPIDJXDWMRTLMKQBHZPNGQJRYLZYPFUDCPXEASUDCOXZCAZBNVKDCXRTSRNVYHJ");

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
    msg.setTimeStamp(0.15174823693078143);
    msg.setSource(26608U);
    msg.setSourceEntity(194U);
    msg.setDestination(41587U);
    msg.setDestinationEntity(141U);
    msg.type = 172U;
    msg.error.assign("LNJSOQWFGLHHRXRNWEZVKAGAKYEDEXYCVLKBGLUYJWCKSAAVSIAHTKEJSSBQMZQOLQC");

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
    msg.setTimeStamp(0.553655260576769);
    msg.setSource(37720U);
    msg.setSourceEntity(112U);
    msg.setDestination(32640U);
    msg.setDestinationEntity(208U);
    msg.type = 133U;
    msg.error.assign("ZUZRYPNFEPGOWBGLCVXHBOAVESMRCIGFBBZJVILNFGRQPSDMIULJSHJPZDSU");

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
    msg.setTimeStamp(0.9334800103774132);
    msg.setSource(23258U);
    msg.setSourceEntity(109U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(201U);
    msg.seq = 31164U;
    msg.sys_dst.assign("TOKFIUSBIPOGBKHDWDZRCPWFODBTPVSERVXZUULHKLXJBDFASWAEWXIWIMNCEMFSCFRCQFKTXRMZATDMANEAJNRVHMPAYQLMXZJQYQIYZJMDCDUGHUBEVFEZNTAOBSIGIJMWJAZPVKKZRXLYJGLWHYFORYURQNPSCJJWETNH");
    msg.flags = 152U;
    const signed char tmp_msg_0[] = {65, 93, 101, 81, 50, 87, 123, -107, 17, -119, -37, 125, 72, 23, -83, 39, -40, 42, -2, -45, -66, -35, -75, -92, 92, 11, 86, -87, 114, 64, -60, -69, 78, 29, -18, -106, 121, -27, 1, -94, 49, 41, 100, -49, 9, 34, -8, 108, -43, -79, -122, -95, 120, -93, 14, -25, 58, 74, 45, -30, -126, 109, 5, -41, 7, -34, 95, -12, 51, 25, 59, 69, -42, -58, 102, -2, -63, -9, 75, -71, 108, 46, 35, 50, -121, 24, -122, -62, -3, 2, 91, 29, -31, 115, 25, -44, -23, -22, -12, -67, 112, 39, 30, 43, 34, -9, 16};
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
    msg.setTimeStamp(0.10667926965485408);
    msg.setSource(45479U);
    msg.setSourceEntity(102U);
    msg.setDestination(13796U);
    msg.setDestinationEntity(221U);
    msg.seq = 23225U;
    msg.sys_dst.assign("YEBMUNAJZJCUUAVPHXRMQNSZSFXTOG");
    msg.flags = 106U;
    const signed char tmp_msg_0[] = {8, -20, 18, -68, -18, 12, -17, -112, -105, -1, 41, -106, 42, -28, -88, -128, 83, -18, -124, 4, 122, -32, 80, 58, 58, 82, 92, -80, -14, 25, 15, 97, -117, -16, -73, -105, -83, 123, 6, -78, -102, 66, -51, -13, 14, -55, -48, -68, 66, -71, 116, 60, 52, 3, 106, 61, 121, 37, -100, 18, -18, -60, -108, -91, 53, 90, -8, -66, 29, -38, -8, -85, 16, 51, -67, 100, -80, 48, -50, -7, -44, -78, 77, -105, -99, -21, -69, -123, 66, 49, -83, -42, -53, 43, -64, -116, 122, -77, 88, 86, 24, -63, 114, 104, -32, 21, 36, -40, 94, -21, -57, 5, 79, 50, 14, -4, -5, -79, -56, -31, -57, -8, -92, -11, -19, -102, 51, -106, 42, 113, 118, -23, -38, 67, 121, 40, -33, 18, 39, -88, 118, 29, -113, 14, 112, 33, 44, -86, 91, -25, 88, 79, -99, 103, 28, 64, 55, 62, -74, 90, 117, -52, 111, -22, 101, 42, -58, 72, 25, -100, 103, -14, -3, -80, 1, -94, -5, -122, 88, -121, -48, 23, 114, -3, -56, 74, 72, 58, -10, 80, -93, -86, 109, 38, -101, 101, 91, -5, 8, -50, -55, -25, 44, 12, -121, -94, -60, 88, -122, 71, 99, 117, -117, -37, -39, -106, -93, -102, 102, 30, -115, 123, -127, -67, 42, -31, -86, 126, -127, -5, 54, 17, -50, 39, 11, 95, 107, 7, 104, -62, -127, -35, 82, 107, 54, 1, 93, 7, -82};
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
    msg.setTimeStamp(0.1665811330065463);
    msg.setSource(25081U);
    msg.setSourceEntity(233U);
    msg.setDestination(52325U);
    msg.setDestinationEntity(209U);
    msg.seq = 7549U;
    msg.sys_dst.assign("YOQQBSWTPKIGMXJHNGHBCAWDGPMKZWLFMWIHTAIJFRWZMGXNYCFJJUULEUTSVEBYYNFBTPZRDQWYOFYLPUGWXEPDMKEBKDTBDFYZTUAHJENPXCWVQFDUIDSCRRBYHOMRVFXJGJCTLOXSGSACZBNVWUYMYSCEVCZDLVKJEFDVLDGAKUNAISREZXSVQSSPJQALXII");
    msg.flags = 181U;
    const signed char tmp_msg_0[] = {126, 8, -69, 98, -86, 34, 26, 84, -15, -97, 60, -40, -75, 108, -86, 112, -22, -41, 78, -5, 47, 112, -16, -115, -99, 1, -28, -104, 69, 72, -106, 120, -112, -58, 46, 44, 80, 11, -55, 12, -45, -91, -70, -38, 111, -54, -60, 7, -52, -32, 57, -46, -90, 45, 119, -35, 113, 36, -22, 66, -117, -28, -68, 12, -95, -19, 122, -99, 58, -118, 33, 94, 26, -89, 83};
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
    msg.setTimeStamp(0.4645429711771809);
    msg.setSource(33648U);
    msg.setSourceEntity(124U);
    msg.setDestination(26561U);
    msg.setDestinationEntity(249U);
    msg.sys_src.assign("HKBWWMZACGZJNOPMCXOEQFJEVZYXCXAXTUCKDYVUDPSUDUBMZVOHLSIYIXARYAHABCLVRYXVXDNGIKHKFHRNQWWEXKEJDTBYIWFQCZRVJQSPPIGQBKELAMNTNMCOIJOGFJQ");
    msg.sys_dst.assign("QSODWYGIBBKBYNFVTRANXKVRGOVWCETSEETPPGOUTKTAZPIWHOIHRIDWMWZVFJIVNAKUWCSARCFFZJZNMYCAPMHGWLDVFXXNCWSDZPNBLULTAJKEPQGHGLLTHJOOEJNFQXUJUJZRUUPEAHPMJRBORGLKZLFVZQDYNTILXXGMAPIAZDEWOYLCFRUQDXSVBUKWMYCSQVZHJXDXIMGLIBBQPKSKYMCTAFJRYOIECBEHRYXQES");
    msg.flags = 147U;
    const signed char tmp_msg_0[] = {96, -92, -93, 6, 25, -32, -6, -108, 26, -96, 48, 32, -56, 78, 98, 126, 38, -26, 106, 82, -56, 5, -121, 44, 106, 12, -120, -66, 28, -78, 27, -39, 105, -27, 61, 26, 69, 18, -72, -66, -115, 80, 76, 99, -60, -23, 19, -19, -102, 72, 31, -6, 21, 62, -59, -44, -55, 88, -61, -68, -55, -97, 9, 92, 73, -93, -104, -114, 105, 43, 106, 57, -107, 111, -58, -8, 45, -94, 94, 35, -109, 50, -17, -77, -76, 68, -62, 15, 108, -2, 99, -93, -93, -20, -47, 36, 48, 86, -23, 63, -120, -58, -88, 0, 122, 8, 81, 118, -26, 60, 63, 15, 107, -51, 71, 119, -46, 30, -102, 49, -96, -95, 34, -33, -21, -62, 67, -121, 22, -49, 24, -61, -87, -28, 115, 50, -53, 121, -1, 61, 46, -12, -69, 20, -86, -107, 78, 84, 64, -66, 108, 43, 36, -32, -95, -105, 62, -9, -50, 49, 93, 51, -44, 8, -110, 98, 70, 20, 78};
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
    msg.setTimeStamp(0.973343351403618);
    msg.setSource(37241U);
    msg.setSourceEntity(27U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(211U);
    msg.sys_src.assign("BSRZZYDRWZRGBLVSENBRZTQWYYVKTIFXPYSGETCGWZGDNPFKIBXTNLHFAAMEHQEONNLFJTQCFFCZCOBSXDVRRUZHKXTVEPAPHS");
    msg.sys_dst.assign("EINKYOEPUMSMJVGBWNRSWLWTIAI");
    msg.flags = 235U;
    const signed char tmp_msg_0[] = {-99, 38, 82, -62, 105, -119, -53, -42, 31, 36, 95, 91, -38, -58, 92, 116, -127, -38, -81, -95, -38, 1, 107, -28, -39, -92, 87, 71, 9, 93, -127, -123, -51, 115, 75, -39, -99, 34, 99, 27, -33, -32, 20, -125, 48};
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
    msg.setTimeStamp(0.27317724096834106);
    msg.setSource(55997U);
    msg.setSourceEntity(211U);
    msg.setDestination(44289U);
    msg.setDestinationEntity(78U);
    msg.sys_src.assign("TWKFLIIUIASCHMGHJEYXEDLYSZIIRBPMFJXNLVEKSTXRTKOWWIHPPHTDGPKRQEXHJCXVDLVQMOTNLEDNQANCZAJWQEKOPMUQKOYJTOFGIQXVZYVRXWURKFRHWBTDWO");
    msg.sys_dst.assign("LEBKVREWRJQLHALFACBSXXIDJIXASXHVMEJYOOPEWARWTUYQMCFCETNUWEZWJVSNGJPURCEWFUTFMGNMANHGQXVOQYYUTTYKRDUPNGLQRBTVLCWXWNXWGCEODKRNCZPTKBDZU");
    msg.flags = 253U;
    const signed char tmp_msg_0[] = {2, 11, -72, 6, 39, 97, -56, 110, 1, 8, 21, -66, -62, 2, 82, 98, -94, 15, -1, 80, -64, -92, -22, 79, -66, -72, -9, 112, 22, 52, 93, 99, -91, -57, -60, -93, -33, 51, -10, 80, -6, 119, 106, 96, -12, -81, -114, -85, -34, -46, 61, -74, -43, -74, -82, 42, 100, -29, -58, -22, 125, -108, 8, -104, -61, 96, 78, 69, -35, 28, 89, 7, 10, -118, -66, -101, 83, -13, -51, -3, 113, 50, -5, -108, 63, -63, -103, 57, 12, -82, 75, 59, 100, 106, 75, 118, -18, -122, -32, 80, 115, -48, 22, 79, 95, -120, 37, 48, 43, -55, 73, 99, -69, 20, -89, -91, 72, -76, -25, 93, 81, 8, 123, 101, -102, -8, -35, 36, 71, -82, -38, -102, -98, 98, 102, 100, 82, 86, -114, 84, 26, -115, 25, -99, -45, -6, 26, -109, 118, 0, 97, -46, -32, 112, -27, -1, 54, 64, 109, -120, 87, -3, 44, -100, -119, -59, -42, -50, -92, -123, 59, -106, -12, -54, -102, 7, -78, -7, 39, -37, -46, 0, 100, -113, -120, 55, -11, 28, -80, 126, 50, 90, 6, -35, 102, 63, -46, 27, 34, 77, 11, -29, 74, -19, -98, -2, -89, -120, -84, 25, 81, 80, 38, 55, -100, 105, 73, -73, 82, 94, -1, 41};
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
    msg.setTimeStamp(0.9327641568240546);
    msg.setSource(3689U);
    msg.setSourceEntity(76U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(13U);
    msg.seq = 19432U;
    msg.value = 21U;
    msg.error.assign("LHFMPELFDPFVRQIODOTEXYNNHOQUZOPWQMKYUZVJMUAXVNDCXNJAPKPATLJZNDBJWYMAXCZSMRYBIDNYLJLQGUGSOCHJCIDGRDUVWRBZFXXYKIBXTKHZHETHEVSGWEYYUXTUSFJIPILUEXLZIKKEMOTCURCSWJQLCWBGVMTWFIKFDQOVVVIGWNGDYRZBLGSMNPITSMOBRPHGRRATQAWFJHKPKYENQCBKLGNZCQESFFZQAHTXSCEBURVSDWBOHJ");

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
    msg.setTimeStamp(0.7543751499667708);
    msg.setSource(59445U);
    msg.setSourceEntity(126U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(10U);
    msg.seq = 11332U;
    msg.value = 210U;
    msg.error.assign("RNADRBHGAZDFIVBNMXCOCDFETLLULAWMYCTQPXLOYIVBTRAZKPZQBFJJXQEJWPOREETWRPTUMQROSRSNINAZUHKLQMECNKQROHIUOXAKFNJMOVNHVEPZWQKQBWIHTNFFGGFLFDCMWTYIERGCUUPKLHWLXEZGDCJBPUXIOXPSGEANHSMIDRJIZSOFPWYGJWJVZXHDBCYSBNUQLGA");

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
    msg.setTimeStamp(0.8868351351853937);
    msg.setSource(9321U);
    msg.setSourceEntity(222U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(36U);
    msg.seq = 27488U;
    msg.value = 24U;
    msg.error.assign("FATLSRADURXLWTNYLVQRTXOOGMROHPCOGYZGKIKRJXWOJMNUUNFOBIQTWXNANPJVVRVOBBASGYQVJCPJFBVJQISGZUCPVVMMBEEGRGMDWHHKQUJCEVQYTEZZ");

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
    msg.setTimeStamp(0.6382218713734689);
    msg.setSource(63048U);
    msg.setSourceEntity(200U);
    msg.setDestination(55467U);
    msg.setDestinationEntity(227U);
    msg.seq = 24672U;
    msg.sys.assign("EIFPAXFSLLXDOSPBROUTWGXCPUDKWHVJTMVSZEZQJHPKOQMURSQDRWMBMIQSUUNRWDUVMGPNTAIKRQVAFYNYNGBRFEITTIZNEVYBQPZOMAZQQLYMLJPJJIZSOLGNCSDHNXTCLHLNOIEFSCCDHIGEKMBYJWRUVUKAZLYBYGUMFRFLSIADEROVNVDBWQKKEMPCWEXBHZAWGGCFOSHWFKHLKPYJTXDQJOJBAXTUVZXCXZDHNJEAVIXHWTTP");
    msg.value = 0.5588683606941741;

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
    msg.setTimeStamp(0.7738066142938014);
    msg.setSource(19273U);
    msg.setSourceEntity(175U);
    msg.setDestination(49805U);
    msg.setDestinationEntity(97U);
    msg.seq = 25679U;
    msg.sys.assign("EWMJPTRHVVVYKMDCPYWXMIRKCIJLAHRLDBNDVKFWXWZFYWZNGACLBZPXBOGORIAGQEAPUKALLHXBPJFXLRUYNFGEVNMGSRXEVRFCSKSBJHBBVNOMQDVOYATTZNEPLWQQOPMPFSFVLBZYCEUUNZHEJPCTUMOHVECPIQTJOZFXAQGIMKADHYBJSZROZUDTIKUAICGUMISANJH");
    msg.value = 0.3561670665672534;

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
    msg.setTimeStamp(0.7579632641220385);
    msg.setSource(51519U);
    msg.setSourceEntity(40U);
    msg.setDestination(49088U);
    msg.setDestinationEntity(26U);
    msg.seq = 51988U;
    msg.sys.assign("PCNJBTOAXRKTSJAYZJYXAJUXFDZHGLKXBIFRMHVZLMWIHYNYOESTSQMJXVHGGVHBBMIOIWKRBAEEMZBIMARTRWGMZLVSEGGRDUTQERKULUBSNTCRBLYFGUQDCPKVAWMOUFEWSKHVQJTYOOKKZBNDHPMZYQGNYIPWYPQFQHJDCJXYBAJCDANCLGFZZPXXZQLFPLKUHORNFEPUGOJPNI");
    msg.value = 0.19240592023500025;

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
    msg.setTimeStamp(0.4400925171663945);
    msg.setSource(16683U);
    msg.setSourceEntity(235U);
    msg.setDestination(12538U);
    msg.setDestinationEntity(96U);
    msg.seq = 5113U;
    msg.sys_dst.assign("PTSKYEUMADBZVFIJEULXABRJZTIALBHYPQJGCMDQTJPUYKRUSDABEMBDETXOSALMWPGWNOVRXDRZTMJXOHNWWLGURN");
    msg.timeout = 0.6314850320575958;

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
    msg.setTimeStamp(0.9239661989725677);
    msg.setSource(38628U);
    msg.setSourceEntity(0U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(18U);
    msg.seq = 36023U;
    msg.sys_dst.assign("MBBDFSLTDMSTJSCINPWNMPWKVHZVTMZHWHLBBEQMNOKTJGZGQSRZLLVVFSSZELIEXEGFX");
    msg.timeout = 0.7760763574937675;

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
    msg.setTimeStamp(0.5060221244724179);
    msg.setSource(39472U);
    msg.setSourceEntity(12U);
    msg.setDestination(4609U);
    msg.setDestinationEntity(26U);
    msg.seq = 17418U;
    msg.sys_dst.assign("HDPRDTTFJWGCDVOAIAQMVZMFBLDOEBSKJQYEKCHTOAYGMCNBZSPANMSRIJLVOSKUFQWRKUQCXGCYAXEZOPBNTXYMWCAXNFCXPHWJFFVGJHQYJZSJCFPSMRTKTNUERQVXIVRFALKDYGGQVXKPUHRUKCWYQGNHIEJOPSFBVJSXIWHBPTVAVFLDWAKUYEWDMDBRPRULLZDNLBZNMSUDIBGGCBHTEENSZZOEZTXYXIRKYLMIOJAUOMGITPN");
    msg.timeout = 0.8277112407499512;

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
    msg.setTimeStamp(0.8669101930999431);
    msg.setSource(24092U);
    msg.setSourceEntity(12U);
    msg.setDestination(50872U);
    msg.setDestinationEntity(152U);
    msg.action = 22U;
    msg.longain = 0.6872772985416004;
    msg.latgain = 0.9156688606089164;
    msg.bondthick = 3804908373U;
    msg.leadgain = 0.775327269162079;
    msg.deconflgain = 0.6385861004528137;

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
    msg.setTimeStamp(0.599948585163795);
    msg.setSource(38261U);
    msg.setSourceEntity(6U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(66U);
    msg.action = 210U;
    msg.longain = 0.12966607866212831;
    msg.latgain = 0.8735058747878329;
    msg.bondthick = 1073794318U;
    msg.leadgain = 0.09472509382634842;
    msg.deconflgain = 0.7250076674746719;

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
    msg.setTimeStamp(0.2622088602689422);
    msg.setSource(4293U);
    msg.setSourceEntity(106U);
    msg.setDestination(64723U);
    msg.setDestinationEntity(109U);
    msg.action = 79U;
    msg.longain = 0.6019877362119248;
    msg.latgain = 0.42581591412499364;
    msg.bondthick = 521781019U;
    msg.leadgain = 0.39972993588208405;
    msg.deconflgain = 0.35456790774474933;

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
    msg.setTimeStamp(0.5608647456602707);
    msg.setSource(41456U);
    msg.setSourceEntity(86U);
    msg.setDestination(39644U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.9153426423799819;
    msg.dist_min_abs = 0.5573428515754029;
    msg.dist_min_mean = 0.028498094996086576;

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
    msg.setTimeStamp(0.8454147165909696);
    msg.setSource(9177U);
    msg.setSourceEntity(34U);
    msg.setDestination(10841U);
    msg.setDestinationEntity(92U);
    msg.err_mean = 0.8237480020125896;
    msg.dist_min_abs = 0.028683733438373604;
    msg.dist_min_mean = 0.48808646179366033;

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
    msg.setTimeStamp(0.9574229894938266);
    msg.setSource(33641U);
    msg.setSourceEntity(239U);
    msg.setDestination(300U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.5226644622453012;
    msg.dist_min_abs = 0.8498440809733303;
    msg.dist_min_mean = 0.004821474192607367;

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
    msg.setTimeStamp(0.6364112489384948);
    msg.setSource(17787U);
    msg.setSourceEntity(143U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(249U);
    msg.action = 177U;
    msg.lon_gain = 0.7000399237315689;
    msg.lat_gain = 0.5082775045394597;
    msg.bond_thick = 0.6730014595762787;
    msg.lead_gain = 0.1767356314311388;
    msg.deconfl_gain = 0.27877015147465045;
    msg.accel_switch_gain = 0.30084389133666;
    msg.safe_dist = 0.29434242963665436;
    msg.deconflict_offset = 0.16799346346550825;
    msg.accel_safe_margin = 0.04262902830716353;
    msg.accel_lim_x = 0.7647117707021234;

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
    msg.setTimeStamp(0.21626353699287137);
    msg.setSource(4606U);
    msg.setSourceEntity(165U);
    msg.setDestination(19070U);
    msg.setDestinationEntity(195U);
    msg.action = 230U;
    msg.lon_gain = 0.46967053706746;
    msg.lat_gain = 0.6949284373477843;
    msg.bond_thick = 0.02982928791662809;
    msg.lead_gain = 0.03175520705299373;
    msg.deconfl_gain = 0.5300861347247373;
    msg.accel_switch_gain = 0.3338916106964611;
    msg.safe_dist = 0.38345478959253354;
    msg.deconflict_offset = 0.9122130004297871;
    msg.accel_safe_margin = 0.5332563917848463;
    msg.accel_lim_x = 0.40193175839226025;

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
    msg.setTimeStamp(0.47604701331198584);
    msg.setSource(6529U);
    msg.setSourceEntity(121U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(175U);
    msg.action = 117U;
    msg.lon_gain = 0.6880094309236077;
    msg.lat_gain = 0.07223732299910368;
    msg.bond_thick = 0.03893839865183457;
    msg.lead_gain = 0.344855618750726;
    msg.deconfl_gain = 0.34309012626754776;
    msg.accel_switch_gain = 0.6485161182434358;
    msg.safe_dist = 0.67396779264736;
    msg.deconflict_offset = 0.7221254723648299;
    msg.accel_safe_margin = 0.5937577499939699;
    msg.accel_lim_x = 0.435822160217766;

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
    msg.setTimeStamp(0.2208762074467876);
    msg.setSource(46248U);
    msg.setSourceEntity(193U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(184U);
    msg.type = 14U;
    msg.op = 160U;
    msg.err_mean = 0.7414782412413444;
    msg.dist_min_abs = 0.7808069928177893;
    msg.dist_min_mean = 0.8844089530661937;
    msg.roll_rate_mean = 0.728704774497;
    msg.time = 0.204222086228511;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 22U;
    tmp_msg_0.lon_gain = 0.019751892620648137;
    tmp_msg_0.lat_gain = 0.01768463022463118;
    tmp_msg_0.bond_thick = 0.13471276827177603;
    tmp_msg_0.lead_gain = 0.04914097109316096;
    tmp_msg_0.deconfl_gain = 0.6461675929789348;
    tmp_msg_0.accel_switch_gain = 0.25037429647128917;
    tmp_msg_0.safe_dist = 0.17058825057723093;
    tmp_msg_0.deconflict_offset = 0.48647017226502465;
    tmp_msg_0.accel_safe_margin = 0.7595190523805981;
    tmp_msg_0.accel_lim_x = 0.5965029598296229;
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
    msg.setTimeStamp(0.6309548842171103);
    msg.setSource(12601U);
    msg.setSourceEntity(87U);
    msg.setDestination(24039U);
    msg.setDestinationEntity(225U);
    msg.type = 108U;
    msg.op = 2U;
    msg.err_mean = 0.4750914796193464;
    msg.dist_min_abs = 0.6515859557716895;
    msg.dist_min_mean = 0.4232615473361918;
    msg.roll_rate_mean = 0.111599393541994;
    msg.time = 0.17261192074938458;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 84U;
    tmp_msg_0.lon_gain = 0.37504214703657357;
    tmp_msg_0.lat_gain = 0.7430015131296228;
    tmp_msg_0.bond_thick = 0.2532351408770136;
    tmp_msg_0.lead_gain = 0.05464134375305818;
    tmp_msg_0.deconfl_gain = 0.18842178910353202;
    tmp_msg_0.accel_switch_gain = 0.45686539519949565;
    tmp_msg_0.safe_dist = 0.585837443827372;
    tmp_msg_0.deconflict_offset = 0.34969993227566076;
    tmp_msg_0.accel_safe_margin = 0.2996596263429838;
    tmp_msg_0.accel_lim_x = 0.6755031048712514;
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
    msg.setTimeStamp(0.6090844335391905);
    msg.setSource(33298U);
    msg.setSourceEntity(191U);
    msg.setDestination(21611U);
    msg.setDestinationEntity(208U);
    msg.type = 12U;
    msg.op = 56U;
    msg.err_mean = 0.33478729948666885;
    msg.dist_min_abs = 0.6446593795113056;
    msg.dist_min_mean = 0.5660527823591919;
    msg.roll_rate_mean = 0.6176098147986755;
    msg.time = 0.9368208994482344;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 130U;
    tmp_msg_0.lon_gain = 0.9614186093233987;
    tmp_msg_0.lat_gain = 0.6586000514794518;
    tmp_msg_0.bond_thick = 0.8043617178044747;
    tmp_msg_0.lead_gain = 0.879167874654401;
    tmp_msg_0.deconfl_gain = 0.3589713043122007;
    tmp_msg_0.accel_switch_gain = 0.5397580906743652;
    tmp_msg_0.safe_dist = 0.9586359072060249;
    tmp_msg_0.deconflict_offset = 0.18942275305280165;
    tmp_msg_0.accel_safe_margin = 0.3757313815198834;
    tmp_msg_0.accel_lim_x = 0.4127714804405779;
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
    msg.setTimeStamp(0.6822360080321187);
    msg.setSource(54102U);
    msg.setSourceEntity(61U);
    msg.setDestination(58904U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.7689617848012581;
    msg.lon = 0.7032839080749164;
    msg.eta = 1284730715U;
    msg.duration = 32981U;

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
    msg.setTimeStamp(0.7406906145897906);
    msg.setSource(48070U);
    msg.setSourceEntity(130U);
    msg.setDestination(27431U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.622800692122174;
    msg.lon = 0.219469099212788;
    msg.eta = 2595842122U;
    msg.duration = 27755U;

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
    msg.setTimeStamp(0.7551093712454244);
    msg.setSource(55183U);
    msg.setSourceEntity(18U);
    msg.setDestination(25384U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.5095682244384014;
    msg.lon = 0.6022125518243076;
    msg.eta = 2414989160U;
    msg.duration = 27517U;

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
    msg.setTimeStamp(0.7953250256932466);
    msg.setSource(23709U);
    msg.setSourceEntity(243U);
    msg.setDestination(35115U);
    msg.setDestinationEntity(239U);
    msg.plan_id = 45331U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.07340307265355228;
    tmp_msg_0.lon = 0.917421713769213;
    tmp_msg_0.eta = 237097573U;
    tmp_msg_0.duration = 60198U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2621326103507916);
    msg.setSource(35639U);
    msg.setSourceEntity(62U);
    msg.setDestination(40438U);
    msg.setDestinationEntity(127U);
    msg.plan_id = 26188U;

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
    msg.setTimeStamp(0.40851042547271044);
    msg.setSource(11668U);
    msg.setSourceEntity(21U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(20U);
    msg.plan_id = 62078U;

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
    msg.setTimeStamp(0.43754086868654074);
    msg.setSource(3638U);
    msg.setSourceEntity(254U);
    msg.setDestination(8182U);
    msg.setDestinationEntity(159U);
    msg.type = 98U;
    msg.command = 157U;
    msg.settings.assign("XRSUNFDAUBPAHNXRXOYBRTVGTAQNFWNLLEACSJIHYGWMSSQJTXQHZRUHAVZVDBARHWZINMEULZESTAFDOVEOFZMXEHBPMTGTXDIKJIPSPOOPRXUWCAFKSHRJTITZACNGMDWOIKRYFJHTLDXQHDVPNQJPEQBVJYIMJFZCVMKNLZCGLIDGCBYZMDXLDBMPHFSB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 32881U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YRQXBDLUUOBNMUAIEHPMOGHQMOFSIJJMHNBXTZGHVFLLYOPWXQKICYRCSXRFEYUNMIRCKKPLZVGZWYDSEFNPIFVUEDLJMGPKRPFAKVOOAMFZGBTCXPSDYEGRYXITOPWBBFSURWGWAOBDZXUIHCXGGMCWAWDZQELTJNTVTKUHBSVRFUJQNLVHLNSQTTWLKVWVVTRNRQKXD");

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
    msg.setTimeStamp(0.899789647028728);
    msg.setSource(21576U);
    msg.setSourceEntity(232U);
    msg.setDestination(12047U);
    msg.setDestinationEntity(59U);
    msg.type = 229U;
    msg.command = 202U;
    msg.settings.assign("JDKNFWTEMWLZMEXXILBUJNWMVMIVZKPAKZAVIANFHPILBFKLYXBHLIJWMAHVDWIUEEFDFSUTISSGOYUDRCOARMCJLOKBUAJIHOXQYCPVBSSCZFYHDQSMYNVDQBVTUJHTSGLSNZLWQCWQPRGWNGFZTGXVFNKDRJLTAKTUTCQRUQRNQPVTJZZKXUZX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14399U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ATRJSAWRACVDZTBUUDEAERQIOTJFOVCLRTUFQCZOULEUPIDGTDIDKYZQVXJCENQUSSBIUCEALQFSRWGEHTIFJNCYKBOMJGLYVVBXZMHOIORMVXZGBDFTXWCVQYHOZCSMOPFKKWMNXCZA");

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
    msg.setTimeStamp(0.5704816194825839);
    msg.setSource(9582U);
    msg.setSourceEntity(54U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(230U);
    msg.type = 52U;
    msg.command = 58U;
    msg.settings.assign("TPCRSQHIMWLUXBNXFAVUTSDQDZLUOYTXZYDPBNZMDZZWCLMGLEIGYIBPOQDHEOYXRGMEBHTGZCNKFDHZYJZGBUWCPKLJJSSGPROJNKADLKIRRFIESKBEMFSRUYEIUIUCYTPAWNFQPBQCSHRJOJFHY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 57071U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9725608861192775;
    tmp_tmp_msg_0_0.lon = 0.05101701688960836;
    tmp_tmp_msg_0_0.eta = 3296511507U;
    tmp_tmp_msg_0_0.duration = 48995U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XRZOAVVKZAWENEXPACLGKEAILQGYKSQMNFZBZVHDCEMGOYRHLWPXIBLCFEQPMWJBHSNNBMKHEJDVGHGLNGZVYPDRBFWVXMTCTDMS");

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
    msg.setTimeStamp(0.49886664189318186);
    msg.setSource(784U);
    msg.setSourceEntity(242U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(174U);
    msg.state = 35U;
    msg.plan_id = 6333U;
    msg.wpt_id = 158U;
    msg.settings_chk = 8385U;

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
    msg.setTimeStamp(0.5447220938181818);
    msg.setSource(19049U);
    msg.setSourceEntity(111U);
    msg.setDestination(9799U);
    msg.setDestinationEntity(5U);
    msg.state = 214U;
    msg.plan_id = 23151U;
    msg.wpt_id = 63U;
    msg.settings_chk = 9119U;

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
    msg.setTimeStamp(0.14270712728362867);
    msg.setSource(339U);
    msg.setSourceEntity(52U);
    msg.setDestination(55025U);
    msg.setDestinationEntity(43U);
    msg.state = 114U;
    msg.plan_id = 29538U;
    msg.wpt_id = 18U;
    msg.settings_chk = 42349U;

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
    msg.setTimeStamp(0.08259948205810452);
    msg.setSource(14978U);
    msg.setSourceEntity(183U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(212U);
    msg.uid = 44U;
    msg.frag_number = 144U;
    msg.num_frags = 208U;
    const signed char tmp_msg_0[] = {13, -22, -51, 122, 94, -122, -28, 107, 22, 54, 25, 76, -2, -1, -21, 21, -97, 51, -99, 86, -7, -100, -77, -128, -63, 57, 59, -109, 40, -102, -122, -4, -85, 84, 84, 108, -23, 61, -104, -54, -121, -87, 97, -88, -33, -81, 121, -64, -125, 110, 21, -40, 64, 77, 120, 25, 18, 56, -24, 90, 120, -86, 61};
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
    msg.setTimeStamp(0.10020398059743185);
    msg.setSource(20732U);
    msg.setSourceEntity(0U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(254U);
    msg.uid = 148U;
    msg.frag_number = 35U;
    msg.num_frags = 146U;
    const signed char tmp_msg_0[] = {-8, -60, 75, -52, 33, 11, -36, 68, -111, 112, -127, -19, 15, 113, 53, -10, 24, -5, 116, 81, -81, 38, 18, -6, 71, -24, -102, 110, -16, -64, 121, 27, -115, -33, -18, -119, 64, -119, 125, 38, 6, -111, -105, -35, -49, 33, 42, -3, -28, -76, 54, -18, 90, -46, -52, 105, -119, 93, 1, -67, -62, 76, 16, -42, -110, 11, 106, 8, 36, -47, 33, 28, -85, -68, -61, -99, -1, -99, 115, 121, 96, 99, -39, -122, 17, 19, 110, 17, 37, -94, -71, -81, -37, 6, 114, -100, 1, 47, 92, 119, -60, 70, -13, -64, 54, -58, -105, -13, -70, 102, 43, -100, 65, 62, 106, -11, 19, -40, 46, -52, 105, 93, 54, -20, 12, -68, 117, -107, -51, 116, 12, 120, 32, 54, 55, -103, -50, -126, -37, -119, 111, -61, -81, 25, -53, 72, 63, -1, 71, -53, 25, -79, -82, -121, -95, -35, -44, 53, -94, -93, 14, 82, 82, 74, 4, 104, 75, -13, -22, 78, 126, 12, 41, 75, -63, -116, 32, -50, -60, 103, 12, -120, -10, 112, -75, 32, -41, 48, 51, -60, 67, 62, 33, -9, 20, -27, 116, 103, -103, -84, -102, 98, -14, 7, -66, 4, -75, -94, 36, 118, -78, 76, -66, 44, -122, -59, -116, 2, -95, 47, -63, -103, 13, 106, 89, -45, 107, 24, 119, 115, -93, -121, 32, 82, -30, 84, 81, -12, -42, 85, 102, -98, -92, -35};
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
    msg.setTimeStamp(0.8842509859171955);
    msg.setSource(43759U);
    msg.setSourceEntity(232U);
    msg.setDestination(29666U);
    msg.setDestinationEntity(222U);
    msg.uid = 92U;
    msg.frag_number = 168U;
    msg.num_frags = 61U;
    const signed char tmp_msg_0[] = {-110, -82, -98, -22, 59, 88, 61, 25, 27, -7, 94, 22, -85, -1, -77, -120, 90, 44, -125, -47, -70, 87, -104, 50, -56, 70, -80, -17, 30, -14, -128, 126, -103, 77, 103, -29, 36, -12, -72, 67, 55, -108, -85, -66, 30, -62, -66, 36, -31, 37, -101, -90, 2, -45, 33, 96, -50, 66, 125, -102, 23, 14, -105, 13, -13, -91, 102, -9, 47, -20, 95, 17, -10, 3, 111, 68, 75, 3, 57, -97, 48, -127, -56, -47, -11, 116, 34, -7, 65, 13, -45, 13, 44, -36, 101, -48, 113, -106, 78, -45, -23, 21, -81, 99, -110, -109, -89, 8, 70, -25, 113, -91, 58, -73, 11, 107, -37, -85, -4, 117, 80, 22, 28};
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
    msg.setTimeStamp(0.8539994822098675);
    msg.setSource(23301U);
    msg.setSourceEntity(107U);
    msg.setDestination(28993U);
    msg.setDestinationEntity(248U);
    msg.content_type.assign("GRIGMRLFTXSUPYDWUDVVOGHUAHNJCOSCJZECASENOPVAFAZAETICOKUIRDLKYIOIBPDJKGNDJXNCLAEUZPQMUYBWNQHLOJSHNKHJYJESUDGMVKMPFCQIEXZFWXQQSBAXOKOWEFBYBBUVZBLFTPZQMIRT");
    const signed char tmp_msg_0[] = {74, 27, -30, 69, 88, 32, -6, 124, -126, 23, -124, 74, 68, -79, -50, -93, -105, -70, 2, -88, 71, 40, 78, 112, -92, 9, 63, -61, 93, -7, 89, 71, -60, -103, -124, 58, -114, -111, 118, 44, -28, 80, 86, 42, 16, -45, -36, -5, -86, -76, -111, -82, -52, 26, -79, -10, 118, 95, 113, 85, 83, 54, 30, -59, -50, 34, -61, -73, 94, 111, -65, -73, 108, -1, -119, 112, -13, -39};
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
    msg.setTimeStamp(0.49388588192435856);
    msg.setSource(20841U);
    msg.setSourceEntity(84U);
    msg.setDestination(33325U);
    msg.setDestinationEntity(192U);
    msg.content_type.assign("YZJENPUGNTOGUCVPAACFPBYHYEWKDWBTONTARUAEXTNVCBHIJZQPESZJRAXJHLCDKMOMRYDJATMRSRWHKIGMRJBFWDRMETYLSNLLIYUXICVGSIOSRDFZISLTWPGUKQQWUFVATXXAKQFQUXJZRXWBKCJQKCPCWHOQTNQESRNZIYCHOXFTPQHWIHYHEMUVLQZXBSVGIBDWELBGCLKFVZIMBFSXNPVJVMKOAGOOLFNY");
    const signed char tmp_msg_0[] = {95, 23, 73, -12, 64, 19, 92, 31, -44, 106, -79, 17, -8, -85, 67, 44, -42, 48, -13, -17, -46, 41, -70, 29, 58, -29, 52, 95, -19, 13, 118, 13, 109, -84, 99, -86, 75, 0, -16, 61, -38, -44, -91, -115, -80, 25, 66, -47, 27, -18, -126, 73, 57, 79, -121, 77, -56, 43, 26, -20, 59, -74, 56, -86, -33, 23, -120, 126, -23, -64, 85, -104, 38, 12, 82, 53, 54, -79, -109, 51, 117, 117, -27, -43, 19, -127, -84, 100, 99, 21, -23, -21, 114, -84, 33, 23, -50, -60, 31, -53, 11, -32, 53, -20, 8, 34, 22, -84, 121, 75, -82, 60, -56, 116, 92, -31, 13, -34, -48, 123, -114, -125, 125, -80, 0, -16, 87, 3, -105, 19, 71, -59, 94, -82, -39, 67, 46, 49, 7, -45, 109, -77, -48, 51, 79, -72, 46, -92, -61, -25, 43, -87, -41, -25, -53, -55, 6, -74, -51, -49, 44, 4, 57, -20, 46, -26, 23, 60, 55, 47, 64};
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
    msg.setTimeStamp(0.8649057307303886);
    msg.setSource(32319U);
    msg.setSourceEntity(168U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(146U);
    msg.content_type.assign("KXFBYEQOETUBJJOYSOVNIDTAKRVAUMHMUOAXFNQPCXGZMZMIQHVVKIDNWPTAWEGLUUCPGFZVUEHRXNLIWLPZDULDALEZHIAUQCCMJGDSFRI");
    const signed char tmp_msg_0[] = {-87, -72, -61, -84, -89, 104, -3, 30, -28, -69, 7, 63, 33, 78, -24, -25, -84, 31, -71, -17, 109, -23, -120, 90, -50, -55, -68, 64};
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
    msg.setTimeStamp(0.6524216881409352);
    msg.setSource(48435U);
    msg.setSourceEntity(100U);
    msg.setDestination(41550U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.13837200423282747);
    msg.setSource(32151U);
    msg.setSourceEntity(96U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.973071141726176);
    msg.setSource(53582U);
    msg.setSourceEntity(180U);
    msg.setDestination(58199U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.21816132044289194);
    msg.setSource(46219U);
    msg.setSourceEntity(147U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(156U);
    msg.target = 49785U;
    msg.bearing = 0.3588914865748578;
    msg.elevation = 0.04652607981062662;

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
    msg.setTimeStamp(0.9113411783475883);
    msg.setSource(35288U);
    msg.setSourceEntity(62U);
    msg.setDestination(54585U);
    msg.setDestinationEntity(18U);
    msg.target = 30287U;
    msg.bearing = 0.5873053313113614;
    msg.elevation = 0.3636583316912608;

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
    msg.setTimeStamp(0.2763835997478977);
    msg.setSource(54346U);
    msg.setSourceEntity(73U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(204U);
    msg.target = 5723U;
    msg.bearing = 0.3094918961450803;
    msg.elevation = 0.050056832547893504;

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
    msg.setTimeStamp(0.2922314413479581);
    msg.setSource(60323U);
    msg.setSourceEntity(129U);
    msg.setDestination(18560U);
    msg.setDestinationEntity(3U);
    msg.target = 35489U;
    msg.x = 0.9527843257601148;
    msg.y = 0.4609468974455866;
    msg.z = 0.12392258902782127;

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
    msg.setTimeStamp(0.07182831755216024);
    msg.setSource(44153U);
    msg.setSourceEntity(53U);
    msg.setDestination(23892U);
    msg.setDestinationEntity(254U);
    msg.target = 981U;
    msg.x = 0.09054211690657765;
    msg.y = 0.9421746797271809;
    msg.z = 0.40056907757416726;

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
    msg.setTimeStamp(0.3723452190517328);
    msg.setSource(10202U);
    msg.setSourceEntity(76U);
    msg.setDestination(8250U);
    msg.setDestinationEntity(132U);
    msg.target = 21142U;
    msg.x = 0.4342766022098288;
    msg.y = 0.9660632639454331;
    msg.z = 0.524152262630554;

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
    msg.setTimeStamp(0.6338548680966384);
    msg.setSource(27688U);
    msg.setSourceEntity(75U);
    msg.setDestination(60465U);
    msg.setDestinationEntity(11U);
    msg.target = 17960U;
    msg.lat = 0.6565831962041659;
    msg.lon = 0.3712428392246587;
    msg.z_units = 120U;
    msg.z = 0.8219286328277253;

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
    msg.setTimeStamp(0.045959076615396555);
    msg.setSource(40963U);
    msg.setSourceEntity(7U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(107U);
    msg.target = 56622U;
    msg.lat = 0.9907431645766039;
    msg.lon = 0.8771270916641768;
    msg.z_units = 189U;
    msg.z = 0.6116628613449024;

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
    msg.setTimeStamp(0.22463035434335366);
    msg.setSource(44719U);
    msg.setSourceEntity(249U);
    msg.setDestination(34932U);
    msg.setDestinationEntity(3U);
    msg.target = 46746U;
    msg.lat = 0.6492859897364305;
    msg.lon = 0.8120502106184324;
    msg.z_units = 115U;
    msg.z = 0.21632565408114357;

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
    msg.setTimeStamp(0.6878105487664626);
    msg.setSource(48451U);
    msg.setSourceEntity(164U);
    msg.setDestination(34812U);
    msg.setDestinationEntity(210U);
    msg.locale.assign("PLWRXTUSDGCYFDZZKGQPBWMPEHGWINZKHNFVCZYNCDPQVGRNAEUTEVEAFNMKXXHRBHEMFLCBCIOHQXFLXCCWVNGVRNJKUBQUTVBTWZAYSGFILPRVKMZFLJYJFYAAPSTDQVFEURAUYJGMMJQZSSMLLXBAVVEIOZZCNIMKIKRLYXHQOKRBODWDTXALGJJIUFUJORJOTEHKQOBQPSWUAKEHDNJSOCTI");
    const signed char tmp_msg_0[] = {-42, -33, 67, 88, 25, 117, -85, -28, 6, -22, -82, 40, -24, -123, -104, 111, -57, -85, -72, 42, -31, -78, -19, 14, 27, -122, -110, 93, -32, -50, -101, -14, -12, -79, 1, -65, -80, 69, 62, 23};
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
    msg.setTimeStamp(0.2698521724253117);
    msg.setSource(21563U);
    msg.setSourceEntity(148U);
    msg.setDestination(50521U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("OBNMGRWPPVXXVEZCBZOFQLIEZIXVUNRGHRNASVSTLKSYYTCBE");
    const signed char tmp_msg_0[] = {-63, 25, -110, -88, -114, -27, 40, -10, 81, 107, -112, -76, -52, 77, 113, 57, 63, -4, 57, -87, -127, -107, -41, -26, 32, -48, -5, -7, -22, -73, -52, 43, 52, -108, 71, 17, -107, -66, 84, 122, -112, 13, -65, 76, -94, 59, 112, -91, 78, -81, -45, 92, 53, -45, -41, -4, 2, -8, 18, 13, 5, 46, 56, 35, 121, -49, -92, -91, -109, 82, 93, -45, -17, -109, 64, -120, -96, 94, 39, -31, -81, 69, -7, -61, -90, -88};
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
    msg.setTimeStamp(0.08531526145241575);
    msg.setSource(61841U);
    msg.setSourceEntity(33U);
    msg.setDestination(32479U);
    msg.setDestinationEntity(60U);
    msg.locale.assign("YGAFCLTGJQUZLZYYVKKVQDQQIFQJDXNUTZBRWCSRZXJPZMIXFTMQKDYW");
    const signed char tmp_msg_0[] = {5, 30, -37, 3, 50, 11, 31, -90, -22, -65, 111, -26, 2, 40, 5, -93, 99, 27, 51, 38, -89, -56, -20, -65, -63, 68, -117, -60, 85, -51, -116, -80, 53, 113, 17, -124, -57, -8, -104, 36, -38, 12, 104, 100, 92, 102, 111, -120, 97, -6, 110, -94, -117, 104, 85, 30, -57, 101, -113, -77, 83, 95, 3, 107, 0, 114, 93, -70, -20, -14, -59, -1, -85, 122, 97, 6, -24, 59, -55, 125, 85, 62, 113, -127, 13, -29, 69, 63, 112, -103, 89, -51, -64, -4, -60, 71, -57, 68, -104, -27, -116, -66, -45, -2, -51, 29, -46, -69, -46, -46, 102, -114, -10, 50, 18, 64, 83, 63, -98, 51, -102, -103, 59, -82, 59, 92, -33, 113, -104, 56, -99, 71, -23, 6, 95, -5, 112, 86, 30, 78, 33, -116, -37, 114, 108, 62, -92, 35, -51, 50, -19, 19, -103, -63, 31, 74, -65, -76, -41, 11, 92, 23, -97, 7, 42, -46, -86, -72, 88, -96, 100, 59, 1, -46, 1, -51, 24, 44, -1, -93, -107, 107, 66, 13, 33, -101, 107, 86, -17, -67, -21};
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
    msg.setTimeStamp(0.559323752360896);
    msg.setSource(37674U);
    msg.setSourceEntity(238U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.6190998746391316);
    msg.setSource(28092U);
    msg.setSourceEntity(191U);
    msg.setDestination(38105U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.6056072420691793);
    msg.setSource(48658U);
    msg.setSourceEntity(230U);
    msg.setDestination(48431U);
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
    msg.setTimeStamp(0.675739644427515);
    msg.setSource(60202U);
    msg.setSourceEntity(195U);
    msg.setDestination(18410U);
    msg.setDestinationEntity(18U);
    msg.camid = 98U;
    msg.x = 9223U;
    msg.y = 63178U;

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
    msg.setTimeStamp(0.8844489806253615);
    msg.setSource(18968U);
    msg.setSourceEntity(143U);
    msg.setDestination(50306U);
    msg.setDestinationEntity(104U);
    msg.camid = 123U;
    msg.x = 59100U;
    msg.y = 13877U;

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
    msg.setTimeStamp(0.9511727650453643);
    msg.setSource(62458U);
    msg.setSourceEntity(131U);
    msg.setDestination(57634U);
    msg.setDestinationEntity(251U);
    msg.camid = 103U;
    msg.x = 13593U;
    msg.y = 42065U;

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
    msg.setTimeStamp(0.8273847622077796);
    msg.setSource(12543U);
    msg.setSourceEntity(161U);
    msg.setDestination(19826U);
    msg.setDestinationEntity(134U);
    msg.camid = 242U;
    msg.x = 7537U;
    msg.y = 40312U;

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
    msg.setTimeStamp(0.9920958482237084);
    msg.setSource(41192U);
    msg.setSourceEntity(122U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(38U);
    msg.camid = 86U;
    msg.x = 56114U;
    msg.y = 21522U;

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
    msg.setTimeStamp(0.3242190771450868);
    msg.setSource(38630U);
    msg.setSourceEntity(12U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(168U);
    msg.camid = 224U;
    msg.x = 37797U;
    msg.y = 14488U;

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
    msg.setTimeStamp(0.34454345374996487);
    msg.setSource(44401U);
    msg.setSourceEntity(1U);
    msg.setDestination(5255U);
    msg.setDestinationEntity(18U);
    msg.tracking = 44U;
    msg.lat = 0.4082367885538939;
    msg.lon = 0.8336768875740992;
    msg.x = 0.38196483689341776;
    msg.y = 0.9495834757001657;
    msg.z = 0.4933114952753819;

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
    msg.setTimeStamp(0.8873478295100491);
    msg.setSource(12227U);
    msg.setSourceEntity(99U);
    msg.setDestination(8604U);
    msg.setDestinationEntity(120U);
    msg.tracking = 64U;
    msg.lat = 0.5612628168104408;
    msg.lon = 0.03389358660170039;
    msg.x = 0.9156193531146568;
    msg.y = 0.5201568619099889;
    msg.z = 0.41837518140774665;

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
    msg.setTimeStamp(0.960082131097432);
    msg.setSource(5515U);
    msg.setSourceEntity(100U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(210U);
    msg.tracking = 228U;
    msg.lat = 0.960724752648854;
    msg.lon = 0.8646856480983264;
    msg.x = 0.29256453750276035;
    msg.y = 0.3856300012470303;
    msg.z = 0.11944894787840754;

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
    msg.setTimeStamp(0.42455093361016616);
    msg.setSource(52993U);
    msg.setSourceEntity(196U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(201U);
    msg.target.assign("GRJRYOIXIQHBNTTRPYLAANMDBGBAUNMWLFJUMEBECJPHCJTISTWBSNQVCCRTFYUVEDQCQZVMQWCZDSVWVYGVZOAZQNBGUMHFKAOCSQYKJAEKXPPJCYFCFEALXTFJSPYDEFTEKOUDVKQFKXUROLCRZYNNJLYZQMZHLWOZUIQSBTBOE");
    msg.lbearing = 0.3372791327437512;
    msg.lelevation = 0.057980123666850014;
    msg.bearing = 0.8422901115294096;
    msg.elevation = 0.7585998666590354;
    msg.phi = 0.6408765871536003;
    msg.theta = 0.7640417420541484;
    msg.psi = 0.6378523053244755;
    msg.accuracy = 0.23008593606812977;

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
    msg.setTimeStamp(0.7277640399288758);
    msg.setSource(845U);
    msg.setSourceEntity(175U);
    msg.setDestination(40536U);
    msg.setDestinationEntity(162U);
    msg.target.assign("QXATMTRAPMVCCBNQJABOAUZXKOCGNNITYOQDJXLLSPTLLBABDHJMDZTHGQYUVDRZGVSFFWCBOHMTPKAVEVHYUMXCSRPWYREHQHKEURIPWYGHORQJSIMYHUFULVEDUJKWDIAKWJOVTSBCKIGINREMKPXGHIGUNXZQKZWTZZJFDKSWRDVNSPMNCIEATVJABFRFJXFPQLYWDQMULFE");
    msg.lbearing = 0.2959576993174853;
    msg.lelevation = 0.6055907325492228;
    msg.bearing = 0.007335907276845521;
    msg.elevation = 0.1969853904181197;
    msg.phi = 0.06486300658343669;
    msg.theta = 0.5430948949095085;
    msg.psi = 0.7407970822939649;
    msg.accuracy = 0.3474027062011612;

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
    msg.setTimeStamp(0.29463734104298434);
    msg.setSource(26462U);
    msg.setSourceEntity(73U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(208U);
    msg.target.assign("EJRCONAXXPHCDMGQTCAHJHKNGSOYWNYVJRTD");
    msg.lbearing = 0.814662151236912;
    msg.lelevation = 0.9169830596622475;
    msg.bearing = 0.13342021483730726;
    msg.elevation = 0.9705582440501573;
    msg.phi = 0.6700524565947545;
    msg.theta = 0.9097806977569783;
    msg.psi = 0.47617006525377836;
    msg.accuracy = 0.993758552539242;

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
    msg.setTimeStamp(0.1043633575118823);
    msg.setSource(42066U);
    msg.setSourceEntity(96U);
    msg.setDestination(52712U);
    msg.setDestinationEntity(67U);
    msg.target.assign("DRNIOCBSMMOPSLJSHOMDYDYGZYVP");
    msg.x = 0.4755170994962532;
    msg.y = 0.4581341820853745;
    msg.z = 0.018410144733687517;
    msg.n = 0.21411401945030895;
    msg.e = 0.5481204399008931;
    msg.d = 0.27138512041486207;
    msg.phi = 0.1878365138457977;
    msg.theta = 0.3798900827742433;
    msg.psi = 0.32041381109058975;
    msg.accuracy = 0.760177716512674;

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
    msg.setTimeStamp(0.36448845932955787);
    msg.setSource(21849U);
    msg.setSourceEntity(156U);
    msg.setDestination(41081U);
    msg.setDestinationEntity(54U);
    msg.target.assign("UYKKSDYXVNDKXLRTDGBCNQRAREBQJLJVPCLTPDTFNRHIURTICQMJMYOXEVFQKMGVAEYSFHRCAEQBHOSMUUXUUCWXBSEZJDQRSHHXIVTZTWMLTCACQFJQZYOZYLAABAKWUOERSWPCNPIVTWYNPJDAPRFHYCRIIGDODOMHNGTGEVLVYMNNJXSSWONA");
    msg.x = 0.07008748032010526;
    msg.y = 0.8891058962854208;
    msg.z = 0.5316358194005498;
    msg.n = 0.005853191108802114;
    msg.e = 0.3658506985750153;
    msg.d = 0.4749855952901447;
    msg.phi = 0.26894443535136237;
    msg.theta = 0.5844140294915063;
    msg.psi = 0.4635885724733064;
    msg.accuracy = 0.8213696569645007;

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
    msg.setTimeStamp(0.5554827855270196);
    msg.setSource(16035U);
    msg.setSourceEntity(55U);
    msg.setDestination(15788U);
    msg.setDestinationEntity(57U);
    msg.target.assign("DVZFUQLCNAMZEVFXFAAQPVNENROXCQJJBRBVYSPSVENIILOHWCBHIDGDOCNMGFOTGHYYXVDVMWHSQVGWPMEGRBMCBJNTJEJVTPTPOAKQZYXIXVQJXCPIEJKUOESPGZGDYRKKJFFJCCROATFRHKSABZPQ");
    msg.x = 0.662872450265582;
    msg.y = 0.031886363040953936;
    msg.z = 0.7770895353798768;
    msg.n = 0.12877158342041128;
    msg.e = 0.10396063293283297;
    msg.d = 0.7041551402036752;
    msg.phi = 0.23827372631701738;
    msg.theta = 0.7312577402353821;
    msg.psi = 0.06506954607735604;
    msg.accuracy = 0.6166624153986582;

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
    msg.setTimeStamp(0.8833212021850548);
    msg.setSource(7380U);
    msg.setSourceEntity(171U);
    msg.setDestination(8229U);
    msg.setDestinationEntity(177U);
    msg.target.assign("RZOFJPVGTWLBL");
    msg.lat = 0.7014713752949286;
    msg.lon = 0.7009201122057505;
    msg.z_units = 114U;
    msg.z = 0.11097884438530525;
    msg.accuracy = 0.2892556040431754;

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
    msg.setTimeStamp(0.6320359451287859);
    msg.setSource(26360U);
    msg.setSourceEntity(4U);
    msg.setDestination(11286U);
    msg.setDestinationEntity(238U);
    msg.target.assign("DKCHIKQWTFWOVEQPGYARTYMXBPAIELQAHGBLIAZSCXZYACJFSFINMPDSGSAZDNBZTDGKEBIMQUJRVXAQMCBWFLLCYZZNLARBYSHEPNTQQXYTHLMSTPYRBGNKVCWUVBRWBHHUPJULIQQJDRCTXXDWOWSHAJUMDONDMVRLF");
    msg.lat = 0.08924160164067885;
    msg.lon = 0.885389795917607;
    msg.z_units = 230U;
    msg.z = 0.5077582041354511;
    msg.accuracy = 0.6937666321001102;

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
    msg.setTimeStamp(0.7472000237685794);
    msg.setSource(34818U);
    msg.setSourceEntity(119U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(168U);
    msg.target.assign("XCTSZFMJTSC");
    msg.lat = 0.7052123553901549;
    msg.lon = 0.7541735632688404;
    msg.z_units = 157U;
    msg.z = 0.8949314661080945;
    msg.accuracy = 0.7345222491801726;

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
    msg.setTimeStamp(0.02217673395475439);
    msg.setSource(54852U);
    msg.setSourceEntity(175U);
    msg.setDestination(47698U);
    msg.setDestinationEntity(41U);
    msg.name.assign("VIQECVADOFXXHKRRWQIFWLTCTZJHRQQRUAXLTOKMRULGXIXGHWQSKHDOSECEOCXJFSIVIBOJXPFLATZKVUTPOMNWJZCVDLVMCBUDVLDWGUGSWWVNZNAMSCQTOULBQJFYTMFKMIUEYTNPKJEUWVXMIEAHJUNYHAJPFDPTMEHDFZYYPSQZPNNSXGFGNPRSRBRWYFJBZHYOBPGGCQYRUPLHLTDLHRDIDWKAOMVIEZXIANABCKMBBBYGGEJEKZC");
    msg.lat = 0.8118612328940581;
    msg.lon = 0.7151845300079349;
    msg.z = 0.6150663206112756;
    msg.z_units = 104U;

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
    msg.setTimeStamp(0.4982400230569958);
    msg.setSource(51887U);
    msg.setSourceEntity(204U);
    msg.setDestination(55127U);
    msg.setDestinationEntity(148U);
    msg.name.assign("EOCAQRITHBVOJDGUJGLPPAYRDBFOMCAHMNWHMLBRSUSWLEGVATCDFPEFCENGBKFQSIUZEWLYVQXOVUGBSOPTFJRNJMYKZOPGIZXUULCCKNDDICVJHKVYVMQ");
    msg.lat = 0.11179187782838151;
    msg.lon = 0.06371135314398768;
    msg.z = 0.14451831778671342;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.8601913498570251);
    msg.setSource(21005U);
    msg.setSourceEntity(249U);
    msg.setDestination(12139U);
    msg.setDestinationEntity(131U);
    msg.name.assign("CPSPKXYUHSMVGQIEYPIYDYXMUYXXLRNNKEVE");
    msg.lat = 0.45326544988441797;
    msg.lon = 0.395167234191766;
    msg.z = 0.3272697646610302;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.5948510600884457);
    msg.setSource(59415U);
    msg.setSourceEntity(162U);
    msg.setDestination(64063U);
    msg.setDestinationEntity(193U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.7164752090482767);
    msg.setSource(56650U);
    msg.setSourceEntity(230U);
    msg.setDestination(4596U);
    msg.setDestinationEntity(53U);
    msg.op = 121U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TDCQTMQBKUGANJMMJYEKYOTRAPZNAZGFAXBTDLADQCTBMNKHSHOSOHRQQAPYXEBSWEPPGOMFHXVFMWOYNCXKVGRBVUECAFLSWCGUSUZGVULIEOJKHFWVLITZBNWKUFRDYIDGXRPLTSLQLYAJNZSEZIGZTXBRUNVYIJHYVZKHKSRFMOPNTJYDJWBCQYPIOZDCEHFXHQJQTQEPJVLKRFOMGODANDXISUPJU");
    tmp_msg_0.lat = 0.10705705321941972;
    tmp_msg_0.lon = 0.4806374348572099;
    tmp_msg_0.z = 0.21168369350441574;
    tmp_msg_0.z_units = 54U;
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
    msg.setTimeStamp(0.5716503503763499);
    msg.setSource(40289U);
    msg.setSourceEntity(177U);
    msg.setDestination(22555U);
    msg.setDestinationEntity(146U);
    msg.op = 91U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VUBQICSFWFFONEPCJREMDAMJWVNBQKUVSAATKAKOHFMAM");
    tmp_msg_0.lat = 0.5062008380156199;
    tmp_msg_0.lon = 0.567988940193686;
    tmp_msg_0.z = 0.9354885019637583;
    tmp_msg_0.z_units = 137U;
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
    msg.setTimeStamp(0.65632751449604);
    msg.setSource(39073U);
    msg.setSourceEntity(115U);
    msg.setDestination(47480U);
    msg.setDestinationEntity(63U);
    msg.value = 0.07582007280096936;
    msg.type = 181U;

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
    msg.setTimeStamp(0.8421822130614915);
    msg.setSource(58272U);
    msg.setSourceEntity(88U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(200U);
    msg.value = 0.3187448145401186;
    msg.type = 161U;

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
    msg.setTimeStamp(0.8618955314971857);
    msg.setSource(18716U);
    msg.setSourceEntity(107U);
    msg.setDestination(56590U);
    msg.setDestinationEntity(122U);
    msg.value = 0.2856895230347849;
    msg.type = 239U;

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
    msg.setTimeStamp(0.01348275930325249);
    msg.setSource(34719U);
    msg.setSourceEntity(153U);
    msg.setDestination(43882U);
    msg.setDestinationEntity(9U);
    msg.value = 0.2035063948304604;

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
    msg.setTimeStamp(0.5666106201525714);
    msg.setSource(27112U);
    msg.setSourceEntity(183U);
    msg.setDestination(8937U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9847120448565124;

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
    msg.setTimeStamp(0.9177354526633704);
    msg.setSource(25621U);
    msg.setSourceEntity(214U);
    msg.setDestination(25258U);
    msg.setDestinationEntity(12U);
    msg.value = 0.4942509301252781;

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
    msg.setTimeStamp(0.429124172126658);
    msg.setSource(35319U);
    msg.setSourceEntity(67U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(88U);
    msg.timestamp_last_service = 0.05883652687886276;
    msg.time_next_service = 0.40796542173226247;
    msg.time_motor_next_service = 0.28745849114498445;
    msg.time_idle_ground = 0.7616152396394371;
    msg.time_idle_air = 0.2424284350761613;
    msg.time_idle_water = 0.9711753771125566;
    msg.time_idle_underwater = 0.8896491327568157;
    msg.time_idle_unknown = 0.35845160504567897;
    msg.time_motor_ground = 0.04780877122473193;
    msg.time_motor_air = 0.7435920726994091;
    msg.time_motor_water = 0.8023936069184644;
    msg.time_motor_underwater = 0.5999903111991797;
    msg.time_motor_unknown = 0.3061877907395376;
    msg.rpm_min = 30030;
    msg.rpm_max = -24210;
    msg.depth_max = 0.34477139563771;

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
    msg.setTimeStamp(0.16682355553740502);
    msg.setSource(55198U);
    msg.setSourceEntity(68U);
    msg.setDestination(52030U);
    msg.setDestinationEntity(207U);
    msg.timestamp_last_service = 0.743413444473541;
    msg.time_next_service = 0.5508782792670726;
    msg.time_motor_next_service = 0.9631539075890038;
    msg.time_idle_ground = 0.3547951117104102;
    msg.time_idle_air = 0.8778391355098996;
    msg.time_idle_water = 0.16989457062437285;
    msg.time_idle_underwater = 0.08862918402589859;
    msg.time_idle_unknown = 0.5181868219996087;
    msg.time_motor_ground = 0.9526392563789742;
    msg.time_motor_air = 0.9544482819453185;
    msg.time_motor_water = 0.9623054711678326;
    msg.time_motor_underwater = 0.22973457434502687;
    msg.time_motor_unknown = 0.13245591423791991;
    msg.rpm_min = -1319;
    msg.rpm_max = 20476;
    msg.depth_max = 0.7059072124554332;

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
    msg.setTimeStamp(0.8389367829939931);
    msg.setSource(32887U);
    msg.setSourceEntity(119U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(113U);
    msg.timestamp_last_service = 0.3106738869205119;
    msg.time_next_service = 0.7861275944170074;
    msg.time_motor_next_service = 0.5755154764636994;
    msg.time_idle_ground = 0.3492843565052578;
    msg.time_idle_air = 0.8495825399069761;
    msg.time_idle_water = 0.15032805011363548;
    msg.time_idle_underwater = 0.6050035966177791;
    msg.time_idle_unknown = 0.3720935295165918;
    msg.time_motor_ground = 0.5581100512192113;
    msg.time_motor_air = 0.13821787644006545;
    msg.time_motor_water = 0.6944047042132728;
    msg.time_motor_underwater = 0.9075319439169461;
    msg.time_motor_unknown = 0.7469071039383776;
    msg.rpm_min = -19338;
    msg.rpm_max = -6409;
    msg.depth_max = 0.20551798109975283;

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
    msg.setTimeStamp(0.9547921171028878);
    msg.setSource(9912U);
    msg.setSourceEntity(34U);
    msg.setDestination(36134U);
    msg.setDestinationEntity(31U);
    msg.severity = 7U;
    msg.text.assign("TEXKQUKKZWUCLHBKSNACGFEBHVGHKXOTYLWKPUEDFZPJQXXYAQHIJLJLOSBLCXVFZLMPEPMUPVRBWQEINCEQGYMLYNRFAUHTVQBOOD");

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
    msg.setTimeStamp(0.6019587843515208);
    msg.setSource(1453U);
    msg.setSourceEntity(102U);
    msg.setDestination(23096U);
    msg.setDestinationEntity(10U);
    msg.severity = 12U;
    msg.text.assign("ZVQDOSTKLGWCLDHXXAJJDCNRYHWXNHZJYUIWYUMKDJFDKWIUAKUYFFHJPBXABQUMIIJMQMWOSIPWRLIYOMHCYMYLLWMEBARDFAFEGXIEVFYOGLAZJSXFSUSFPUEDXCSSXGOMGVPTTZQQTAHIIGBRNQOKVKJOAUOATRYHCJRQBERQVSDPKNCNFKHXHGDMEVBBTJWBWFTPVUEEODNIPBSLQOPTGLNCEYMLECGVSLVARXZPNZHKTCGRZVUP");

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
    msg.setTimeStamp(0.06848254014000199);
    msg.setSource(23494U);
    msg.setSourceEntity(135U);
    msg.setDestination(15358U);
    msg.setDestinationEntity(178U);
    msg.severity = 189U;
    msg.text.assign("HCOKITNPXHFTGUCIJATJHKAJPEVQZOGEQYQSMUSYCUDZQGGQVSEFLWVYVMNCLEQVYWKLIBSTMBBATPLOQQXRFRNXDDATMGSIWMOQXLWLMCBALPARZHIHAIMMZNKDDCFWDOIJJYHPMRSNOIUTEXXSYNYJBPAFHRYRVNCPKSZCWZZAVOBCCSRROVJKFMJSQZURZFPUTPDNJEPHHXOOHWNKYRETIGNU");

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
    msg.setTimeStamp(0.21867481863084037);
    msg.setSource(16222U);
    msg.setSourceEntity(190U);
    msg.setDestination(28894U);
    msg.setDestinationEntity(70U);
    msg.channel = -117;
    msg.value = 47259846;
    msg.gain = 183U;

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
    msg.setTimeStamp(0.30699406517007977);
    msg.setSource(52856U);
    msg.setSourceEntity(53U);
    msg.setDestination(15786U);
    msg.setDestinationEntity(93U);
    msg.channel = 37;
    msg.value = 1391301971;
    msg.gain = 249U;

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
    msg.setTimeStamp(0.4937087525826228);
    msg.setSource(48971U);
    msg.setSourceEntity(125U);
    msg.setDestination(8120U);
    msg.setDestinationEntity(179U);
    msg.channel = 102;
    msg.value = 938155070;
    msg.gain = 144U;

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
    msg.setTimeStamp(0.5438660330794928);
    msg.setSource(17497U);
    msg.setSourceEntity(78U);
    msg.setDestination(64275U);
    msg.setDestinationEntity(188U);
    msg.ch01 = 0.3895713857277058;
    msg.ch02 = 0.2832392237029966;
    msg.ch03 = 0.12424396199936893;
    msg.ch04 = 0.17937025011642183;
    msg.ch05 = 0.2432587967807377;
    msg.ch06 = 0.7754489614611897;
    msg.ch07 = 0.35039511437954374;
    msg.ch08 = 0.48709782064855833;
    msg.ch09 = 0.5076515317522919;
    msg.ch10 = 0.1773000694239829;
    msg.ch11 = 0.4240763688452581;
    msg.ch12 = 0.5759617734837805;
    msg.ch13 = 0.638438272094756;
    msg.ch14 = 0.10456381778304202;
    msg.ch15 = 0.04900858757066762;
    msg.ch16 = 0.8526710131618471;

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
    msg.setTimeStamp(0.6281722845393055);
    msg.setSource(47171U);
    msg.setSourceEntity(100U);
    msg.setDestination(19485U);
    msg.setDestinationEntity(198U);
    msg.ch01 = 0.34612696794980347;
    msg.ch02 = 0.4920404813424887;
    msg.ch03 = 0.15863159988814524;
    msg.ch04 = 0.12407390934027906;
    msg.ch05 = 0.8465484466873765;
    msg.ch06 = 0.8113366872601844;
    msg.ch07 = 0.15733581084656045;
    msg.ch08 = 0.555740583508479;
    msg.ch09 = 0.5570598617985025;
    msg.ch10 = 0.4627580968526658;
    msg.ch11 = 0.26489100840107305;
    msg.ch12 = 0.8059430090309416;
    msg.ch13 = 0.5327816046753094;
    msg.ch14 = 0.5858585705041212;
    msg.ch15 = 0.7415524603000938;
    msg.ch16 = 0.301794895858697;

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
    msg.setTimeStamp(0.18059279983074605);
    msg.setSource(6234U);
    msg.setSourceEntity(1U);
    msg.setDestination(164U);
    msg.setDestinationEntity(182U);
    msg.ch01 = 0.194004628749454;
    msg.ch02 = 0.5093298325601817;
    msg.ch03 = 0.4238336820268159;
    msg.ch04 = 0.5561466214088959;
    msg.ch05 = 0.5454036474987054;
    msg.ch06 = 0.4726156947974861;
    msg.ch07 = 0.6961843313083294;
    msg.ch08 = 0.6723207776375809;
    msg.ch09 = 0.1862994835026488;
    msg.ch10 = 0.6439814157564383;
    msg.ch11 = 0.29763264142070434;
    msg.ch12 = 0.9863602436901405;
    msg.ch13 = 0.8015993125718194;
    msg.ch14 = 0.4597541249089975;
    msg.ch15 = 0.2161339333618706;
    msg.ch16 = 0.7946239648305091;

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
    msg.setTimeStamp(0.3969050153956648);
    msg.setSource(45324U);
    msg.setSourceEntity(91U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(169U);
    msg.op = 139U;
    msg.lat = 0.8578320755428118;
    msg.lon = 0.9709887386016315;
    msg.height = 0.09525928543888174;
    msg.depth = 0.12405427260059898;
    msg.alt = 0.469924410323445;

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
    msg.setTimeStamp(0.45557628170029163);
    msg.setSource(60835U);
    msg.setSourceEntity(48U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(197U);
    msg.op = 139U;
    msg.lat = 0.223209204203078;
    msg.lon = 0.43727900937506825;
    msg.height = 0.7764043498881054;
    msg.depth = 0.6413784330358159;
    msg.alt = 0.8669034552020018;

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
    msg.setTimeStamp(0.8326665709072902);
    msg.setSource(50190U);
    msg.setSourceEntity(235U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(207U);
    msg.op = 249U;
    msg.lat = 0.7391980491394748;
    msg.lon = 0.9390198286542171;
    msg.height = 0.9430310012065124;
    msg.depth = 0.9302881052224397;
    msg.alt = 0.3021083018441335;

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
    msg.setTimeStamp(0.9768772165248416);
    msg.setSource(43424U);
    msg.setSourceEntity(129U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(141U);
    msg.nbeams = 117U;
    msg.ncells = 209U;
    msg.coord_sys = 115U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.3443706015914051;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.676330605292605;
    tmp_tmp_msg_0_0.amp = 0.3162567337079851;
    tmp_tmp_msg_0_0.cor = 138U;
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
    msg.setTimeStamp(0.6686642894576186);
    msg.setSource(39389U);
    msg.setSourceEntity(160U);
    msg.setDestination(65010U);
    msg.setDestinationEntity(114U);
    msg.nbeams = 183U;
    msg.ncells = 139U;
    msg.coord_sys = 85U;

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
    msg.setTimeStamp(0.4984788304168353);
    msg.setSource(1848U);
    msg.setSourceEntity(101U);
    msg.setDestination(41555U);
    msg.setDestinationEntity(251U);
    msg.nbeams = 26U;
    msg.ncells = 21U;
    msg.coord_sys = 115U;

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
    msg.setTimeStamp(0.926953836385408);
    msg.setSource(31327U);
    msg.setSourceEntity(163U);
    msg.setDestination(31086U);
    msg.setDestinationEntity(197U);
    msg.cell_position = 0.5433803951533417;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.4177814112606263;
    tmp_msg_0.amp = 0.5876338702837883;
    tmp_msg_0.cor = 15U;
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
    msg.setTimeStamp(0.9704146535716398);
    msg.setSource(59988U);
    msg.setSourceEntity(92U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(23U);
    msg.cell_position = 0.8668546482660554;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.0981534325792297;
    tmp_msg_0.amp = 0.9475521384913997;
    tmp_msg_0.cor = 236U;
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
    msg.setTimeStamp(0.6316604742222808);
    msg.setSource(7112U);
    msg.setSourceEntity(31U);
    msg.setDestination(4897U);
    msg.setDestinationEntity(187U);
    msg.cell_position = 0.37179901631008194;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.42802870719827557;
    tmp_msg_0.amp = 0.25472651052678785;
    tmp_msg_0.cor = 52U;
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
    msg.setTimeStamp(0.5218173391646495);
    msg.setSource(61247U);
    msg.setSourceEntity(71U);
    msg.setDestination(61394U);
    msg.setDestinationEntity(212U);
    msg.vel = 0.5812656758466661;
    msg.amp = 0.6809345904374303;
    msg.cor = 160U;

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
    msg.setTimeStamp(0.2607083032323435);
    msg.setSource(5303U);
    msg.setSourceEntity(67U);
    msg.setDestination(1147U);
    msg.setDestinationEntity(100U);
    msg.vel = 0.7068832528828519;
    msg.amp = 0.573764879009173;
    msg.cor = 59U;

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
    msg.setTimeStamp(0.3130269838857629);
    msg.setSource(40170U);
    msg.setSourceEntity(8U);
    msg.setDestination(19180U);
    msg.setDestinationEntity(205U);
    msg.vel = 0.45043641394807343;
    msg.amp = 0.8517831596355765;
    msg.cor = 194U;

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
    msg.setTimeStamp(0.08256062531250163);
    msg.setSource(37018U);
    msg.setSourceEntity(112U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(167U);
    msg.destination.assign("IRTRCDPIKTSWEVIHPQXLAZAPHBMYLPCKDHMLXEOZJCVNMQDPUAJFVPTWSQMQDUMOBQFFVIQSHIQAUAEHRVKVIFBJZDCLZBSWOCYOBPNZYJRDMMLEUCCOHKUPGA");
    msg.path_executive.assign("LJHADDKISVTBDKVMYSOMRKKGFHIXZNBWIBXCKWFMZLSSAAZMXOGVJEJMYDQHNMNCUMVVLQFZXTUDEDKJAFNFWQYLRKVZEQKKGWIORIYDXXFXTSDGYPPTXZWRVJAHOSGWNAQPCJFFNJCFYREGTBOWDERCXUARTOEHIPNGIBBCJTPHTAUTZWINQLXVOBMPENQGRUYWJQLOYMJEYILHAAGYOGDBCCZCPEIQHUPVLSLHZHKUFURCBSULRTOP");
    msg.data.assign("WNNHCVXSMJWXNGMARRVRIGFHRIXZBACPPEUSGKYXWJNWALEZASEKCXYJQLHXVZIDGEDIKMZWCCDTYMKBQFYOIIAOKHOQTVBYJGEMWYLFLLFPEPUBAOUV");

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
    msg.setTimeStamp(0.7702476393340781);
    msg.setSource(10488U);
    msg.setSourceEntity(170U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(188U);
    msg.destination.assign("YWKSQVMFXTEMMXINZNIFCNUHNOSXZHFZZAKPTMTBEKUCGGOZGZWMYHIBMJBTPEWDTMURDFWEWJLVUGEMIXCUXTKYVVNRUCCKOBSJRHNBYZWBHLABGMJXEWSYUNHTDADUQGFLTKDUVCTZALCGAKGCFKHWOOFWBSDRPKAQPYSSDUWGRJFLBQIJAXJEPVDVDPYKRZQJRLSRQRMVLYQRALDLCFEFIO");
    msg.path_executive.assign("SEILABTDFWVPNCQEITPRVTBFYAFPFICEXHUSXMMJQBFWULHCBDFUF");
    msg.data.assign("JKBEHSZUDRTAQJXMFISRCNL");

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
    msg.setTimeStamp(0.7040578975616262);
    msg.setSource(16870U);
    msg.setSourceEntity(160U);
    msg.setDestination(16301U);
    msg.setDestinationEntity(41U);
    msg.destination.assign("VZHNJSMOWXVETJKROGCSOOUAFUUNGTZOPDBCNIQHNDISKUBZJHMBULWMNHYTGYPKYEOKKJPOTPXEUFYDGPFLFWUGXGVFQJSGEVDUPBQHNYPNLVHCVMQBYVNMPVPWTXCEZKHANIFMNYKSMMYHZRYSOXJTEKDVIRCQGCJSALSXBLWZWDOTUBAQZRCHAPDGRMWEFLMUIEGAQQLBKBESAIAILTDIAHQRFC");
    msg.path_executive.assign("TOUHQFGFESUNVVQPESDDCZVXFDXJWQROAXLMISZGSCNKBGEEYZZWBKCJJODHNZLGWMQERRXAJZMQUERPMIMOEIHINVNSPWUXWTZYLTZPALHPBVCYEZAVOFUWJKLVLRBSWINTKDHACTCUKOENRRRVJCOKUAAMCBVSMJBTQAQGYIFFQHKNTRNFBDTPAOXLGBIKIYBVYJSYSDMGYWAHPJKEWIFTYLSQGPYFXMLONUZDUXPIHDCFHKPHOMUJQLBCXX");
    msg.data.assign("QIKLCSNDCKNLYGVHTTZNVQAESAMRJMZZZXTUOJXKQFZFX");

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
    msg.setTimeStamp(0.7876996209522715);
    msg.setSource(11331U);
    msg.setSourceEntity(25U);
    msg.setDestination(1585U);
    msg.setDestinationEntity(109U);
    msg.destination.assign("XXXEGSCXVTCLPPZFGJIPWVCLULSYQSLJDZMPKBJXIRZEOBKWXOREPGCMVLWIWGMNBBBUTDNNU");
    msg.response.assign("GSNYIPCFUVTYQOPHUUSMFNQVSHMMIVKWYENBIIXWKTUYAZMDYTOBNUTUOYNAEEXELFBOMJBPBWHLBSAMVFVOHKDFZXZATKWBFJQCZGDUNTKBHLTRFRGBLZRQHLIXTMVDJNZGCWR");
    msg.status = 236U;

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
    msg.setTimeStamp(0.22775963771992902);
    msg.setSource(42806U);
    msg.setSourceEntity(21U);
    msg.setDestination(29089U);
    msg.setDestinationEntity(12U);
    msg.destination.assign("KSVCKRURIP");
    msg.response.assign("QNMEGVYBSAHTOUSLDTCXHWIHSRLZQZDKJGIRJJRYQBHMKVIFOJEDPJGIROUWAEMZTDKYDAXAFABKAWMMCNULYCXNTLVHEFREXNIWXCIMGPCDPCYACSAGKTQLLJZSDVG");
    msg.status = 162U;

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
    msg.setTimeStamp(0.29516662251225523);
    msg.setSource(31360U);
    msg.setSourceEntity(9U);
    msg.setDestination(51245U);
    msg.setDestinationEntity(162U);
    msg.destination.assign("DVGIDGXUUFZONMHOHWLURPCMUQUEUVNSCCPJBQIZSCNATTOKGNESW");
    msg.response.assign("ULBJWWMTJATGVOYDSERLGSFTVKDIHLUNHGIMY");
    msg.status = 62U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.8615666512283667);
    msg.setSource(30694U);
    msg.setSourceEntity(28U);
    msg.setDestination(15952U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PFNQFMTSRVNVABYREFTJHGSXAJLPWUQJBBFVQWXMRCVCZACSUJGFNFKXLEYIPWZXSPLMGQHDNDGLLKRJPISSWYGPOXDAOYCOHZDUMOJXBNXIOQJTBUEQHRIDWKGVKILMKFZGRDJIKFCJXGWMNVKQEBFATIUSWTQADBLWKBJHADOXVOMHFECKMRZHERIPUVELNMZTUQENETYTXMUDAURZSPEVZYNIZTCYBLGH");
    msg.value = 52U;

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
    msg.setTimeStamp(0.9804656437263677);
    msg.setSource(22807U);
    msg.setSourceEntity(120U);
    msg.setDestination(43958U);
    msg.setDestinationEntity(174U);
    msg.name.assign("VQAEWWPBOFIUGIKOFZHKUWPZGTGPVDCEINOJTFPXASNUSRYVAJDHKDLWTPQHEDNLJVWWMYOZKJCQGNXRUOBTXBRYCSSIBAYQZYV");
    msg.value = 91U;

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
    msg.setTimeStamp(0.6731599079553887);
    msg.setSource(31515U);
    msg.setSourceEntity(31U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(235U);
    msg.name.assign("ZEVNCQOAYJVXVSSRMRNEEIVUQTUHPFIKKLTHURIFDFYNBGXJEBLTZOZLOAKMCJGZXHIVVBVULWKGPDLZPQKLSNXBHCWIXYEHASGTUANSMPGAWWEFZTXKXPHUEPCCCDJUDXWUQCGEYSHDLCGITYVIJRZCRRIBTCSASDFWJPLWLFTIOMVFFFGSONDRHMHRZYMZTAPKPGYBVYQFBYBISJDKKJHXRDTMJNEGAPMWZBOXLWNMQAQ");
    msg.value = 85U;

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
    msg.setTimeStamp(0.11327480750827146);
    msg.setSource(31362U);
    msg.setSourceEntity(181U);
    msg.setDestination(43996U);
    msg.setDestinationEntity(11U);
    msg.name.assign("UKAKEJORFJSYPMJITIBRSTSDCCJGDMEGHAUBAIDLNKRRXFXAMNMQGPTTVWVQMMWLBEZFZHSIITXXLCTZOWINWWCCXGKGFPEBPDYKBCW");

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
    msg.setTimeStamp(0.4147231851942996);
    msg.setSource(58413U);
    msg.setSourceEntity(205U);
    msg.setDestination(50179U);
    msg.setDestinationEntity(50U);
    msg.name.assign("XDFYJHNGUHRDJGUNGUOQGCHINQALHEMLWAPTFYLKVJZNOXMQJNTMVGZPHPYDMXFYCRGQGBDIIQVVBFEMRPQEYMDTPHYD");

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
    msg.setTimeStamp(0.03587380831410547);
    msg.setSource(28788U);
    msg.setSourceEntity(140U);
    msg.setDestination(65432U);
    msg.setDestinationEntity(46U);
    msg.name.assign("GFWCQBFFSVPQSQUPAYYXWSCMZAFMEOIGBEYJBFZVAWGFEBPOTUXMYOUEWOOAVUDZUKYNRBUQNZPVKBYZPXBMKZOGDJPHWSDWKDZQIEVKTFXTEKHZMYKFIEJRRTQDOCVMTLLINXMQDUCJVKQATYSZYRMFLSOLXVAHHCBRIQQITGOFIBLLNMHHAPACWXJWIJCZPSXNOJTURAIEBGMVRDHYNPJCNGKDLTGNL");

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
    msg.setTimeStamp(0.963301725217835);
    msg.setSource(54074U);
    msg.setSourceEntity(212U);
    msg.setDestination(42396U);
    msg.setDestinationEntity(166U);
    msg.name.assign("KDWGPEEULGHQJ");
    msg.value = 27U;

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
    msg.setTimeStamp(0.10667068537630109);
    msg.setSource(19245U);
    msg.setSourceEntity(24U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(105U);
    msg.name.assign("YXIXZLBDFITUTUZRMMXLJJYRDYNFZVQQIPCPPTZNSNSWINHLHGHCGHKQHRQQWDKEPEDGMVTKFLZVBSYJPLZHSYUMBKEUHSENMDZOSXYLCQUGUEQRCBXMPVNKEYRUAIJFZBTJDAJADOILPGMCFDFWOXRJXRJOZWWPPJZCLKSNJGWVSYHAOIHEUDOCXCMLBWRTBHF");
    msg.value = 228U;

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
    msg.setTimeStamp(0.5658768057884572);
    msg.setSource(60279U);
    msg.setSourceEntity(204U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(242U);
    msg.name.assign("XOZOUEPRSXCHSTESWZMCTLQLMXTTRQHKQGEDNDINDYOWGMSLWOIZNJPSEGYDKUUPXRAGVFFJCQUDBSALZYXUIEMUICVBYOKXLGMIHWJVFHIDYVFSNQNNXZDRRRKPNQKBBFPWGPJQMJMYLGEWNRVABKTFCKJWPPEEABBAYVAVQOUTUAMIDHOLNRZXCBHJAZHFWXHTIUDCKWUVCYVTGYLGZPBSBEGTFRPJJQQITAYAOSSLKOFMKLVZFXW");
    msg.value = 124U;

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
    msg.setTimeStamp(0.35129992343257577);
    msg.setSource(40870U);
    msg.setSourceEntity(186U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6300926604664661;

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
    msg.setTimeStamp(0.13987269986206163);
    msg.setSource(47024U);
    msg.setSourceEntity(16U);
    msg.setDestination(15483U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9457855391548163;

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
    msg.setTimeStamp(0.8032878866026886);
    msg.setSource(24215U);
    msg.setSourceEntity(128U);
    msg.setDestination(24077U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9819278935348402;

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
    msg.setTimeStamp(0.07813593505584082);
    msg.setSource(62191U);
    msg.setSourceEntity(101U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(167U);
    msg.value = 0.18183298886806476;

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
    msg.setTimeStamp(0.390048366964899);
    msg.setSource(14968U);
    msg.setSourceEntity(14U);
    msg.setDestination(50738U);
    msg.setDestinationEntity(162U);
    msg.value = 0.3581838535846915;

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
    msg.setTimeStamp(0.24330686334492058);
    msg.setSource(20530U);
    msg.setSourceEntity(65U);
    msg.setDestination(1548U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5592641453156325;

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
    msg.setTimeStamp(0.2700082552087567);
    msg.setSource(49549U);
    msg.setSourceEntity(143U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(47U);
    msg.value = 0.5497679705204613;

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
    msg.setTimeStamp(0.3200029828792492);
    msg.setSource(6058U);
    msg.setSourceEntity(202U);
    msg.setDestination(17819U);
    msg.setDestinationEntity(147U);
    msg.value = 0.29584665460129544;

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
    msg.setTimeStamp(0.6335058430797559);
    msg.setSource(33922U);
    msg.setSourceEntity(7U);
    msg.setDestination(48592U);
    msg.setDestinationEntity(150U);
    msg.value = 0.39220823163824803;

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
    msg.setTimeStamp(0.9464068947787184);
    msg.setSource(39254U);
    msg.setSourceEntity(243U);
    msg.setDestination(22152U);
    msg.setDestinationEntity(169U);
    msg.restriction = 79U;
    msg.reason.assign("YFLMNNOFQLKFLAKCEMSBAOREMMVKCKRXARYYWTEMVCKSJFZDVZ");

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
    msg.setTimeStamp(0.21505287972671094);
    msg.setSource(47217U);
    msg.setSourceEntity(157U);
    msg.setDestination(2100U);
    msg.setDestinationEntity(207U);
    msg.restriction = 247U;
    msg.reason.assign("AAMFPYVRPTWFORXHUGBTFGZGXSJMWKLTHEZLMLZPAQ");

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
    msg.setTimeStamp(0.06143724502294401);
    msg.setSource(63904U);
    msg.setSourceEntity(135U);
    msg.setDestination(34381U);
    msg.setDestinationEntity(71U);
    msg.restriction = 131U;
    msg.reason.assign("QJZQPEEKQHUZHKY");

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
