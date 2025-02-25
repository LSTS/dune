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
// Edit: Pedro Gonçalves                                                    *
//***************************************************************************

function Sensors(root_id) {
  this.create('Sensors', root_id);
};

Sensors.prototype = new BasicSection;

Sensors.prototype.m_msgs =
{
  'Chlorophyll': {},
  'Fluorescein': {},
  'Phycocyanin': {},
  'Phycoerythrin': {},
  'RhodamineDye': {},
  'Turbidity': {},
  'Depth': {},
  'Pressure': {},
  'Temperature': {},
  'SoundSpeed': {},
  'Salinity': {},
  'Conductivity': {},
  'Current': {},
  'Voltage': {},
  'RSSI': {},
  'LinkLevel':
  {
    'label': 'Link Level'
  },
  'Distance':
  {
    'label': 'Altitude'
  },

  'Rpm':
  {
    'label': 'RPMs'
  },
  'PH': {},
  'Redox': {}
};

Sensors.prototype.updateSubSection = function (msg) {
  for (var i = 0; i < this.m_base.childNodes.length; i++) {
    var tbl = this.m_base.childNodes[i];
    var hdr = tbl.firstChild.firstChild.firstChild.data;

    if (hdr == this.translateAbbrev(msg.abbrev)) {
      this.updateValue(tbl, msg);
      return;
    }
    else if (this.translateAbbrev(msg.abbrev) < hdr) {
      var ss = this.createSubSection(msg);
      this.m_base.insertBefore(ss, tbl);
      return;
    }
  }

  var ss = this.createSubSection(msg);
  this.m_base.appendChild(ss);
};

Sensors.prototype.translateAbbrev = function (abbrev) {
  if ('label' in this.m_msgs[abbrev])
    return this.m_msgs[abbrev].label;

  return abbrev;
};

Sensors.prototype.createSubSection = function (msg) {
  var th = document.createElement('th');
  th.colSpan = 4;
  th.appendChild(document.createTextNode(this.translateAbbrev(msg.abbrev)));

  var tr = document.createElement('tr');
  tr.appendChild(th);

  var tbl = document.createElement('table');
  tbl.appendChild(tr);

  this.updateValue(tbl, msg);

  return tbl;
};

Sensors.prototype.updateValue = function (parent, msg) {
  var el = this.resolveEntity(msg.src_ent);

  for (var i = 1; i < parent.childNodes.length; i++) {
    var tr = parent.childNodes[i];
    var ent = tr.firstChild.firstChild.data;

    if (ent == el) {
      this.updateField(tr, msg);
      return;
    }
    else if (el < ent) {
      var vn = this.createValue(msg);
      parent.insertBefore(vn, tr);
      return;
    }
  }

  var vn = this.createValue(msg);
  parent.appendChild(vn);
};

Sensors.prototype.createValue = function (msg) {
  var td_label = document.createElement('td');
  td_label.appendChild(document.createTextNode(this.resolveEntity(msg.src_ent)));

  var td_value = document.createElement('td');
  td_value.style.width = '50px';
  td_value.appendChild(document.createTextNode(''));

  var td_desc = document.createElement('td');
  td_desc.style.textAlign = 'left';
  td_desc.appendChild(document.createTextNode(''));

  var img_status = document.createElement('img');
  img_status.src = g_icons.path('normal');
  img_status.style.width = '18px';

  var td_status = document.createElement('td');
  td_status.style.width = '25px';
  td_status.style.textAlign = 'center';
  td_status.style.verticalAlign = 'middle';
  td_status.appendChild(img_status);

  var tr = document.createElement('tr');
  tr.appendChild(td_label);
  tr.appendChild(td_value);
  tr.appendChild(td_desc);
  tr.appendChild(td_status);

  this.updateField(tr, msg);

  return tr;
};

Sensors.prototype.updateField = function (root, msg) {
  var date = new Date(msg.timestamp * 1000);
  var hours = date.getHours();
  var minutes = "0" + date.getMinutes();
  var seconds = "0" + date.getSeconds();
  var formattedTime = hours + ':' + minutes.substr(-2) + ':' + seconds.substr(-2);

  var dif = g_data.dune_time_current - msg.timestamp;
  var totalSeconds = Math.floor(dif);
  var h = Math.floor(totalSeconds / 3600);
  var m = Math.floor((totalSeconds % 3600) / 60);
  var s = totalSeconds % 60;
  var formattedDiff = (h > 0 ? h + 'h ' : '') + (m > 0 ? m + 'm ' : '') + s + 's';

  if (totalSeconds > 10.0) {
    state = 0;
    root.childNodes[2].firstChild.data = 'INACTIVE - Last Update at ' + formattedTime + ' (' + formattedDiff + ')';
  } else {
    state = 1;
    root.childNodes[2].firstChild.data = 'ACTIVE - Last Update at ' + formattedTime + ' (' + formattedDiff + ')';
  }

  root.childNodes[3].firstChild.src = this.getEntityStateIcon(state);
  root.childNodes[3].firstChild.style.width = '18px';
  root.childNodes[1].firstChild.data = Number(msg.value).toFixed(2);
};

Sensors.prototype.update = function () {
  if (g_data.dune_messages) {
    for (var i in g_data.dune_messages) {
      var msg = g_data.dune_messages[i];
      if (msg.abbrev in this.m_msgs) {
        this.updateSubSection(msg);
      }
    }
  }
};
