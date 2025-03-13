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
// Author: Bernardo Gabriel                                                 *
// Author: Ricardo Martins (legacy Sensors.js)                              *
//***************************************************************************

function Sensors(root_id)
{
  this.create('Sensors', root_id);

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
  this.errorHandler = this.errorHandler.bind(this);
  this.timeoutHandler = this.timeoutHandler.bind(this);
};
  
Sensors.prototype = Object.create(BasicSection.prototype);
Sensors.prototype.constructor = Sensors;

Sensors.prototype.start = function()
{
  this.requestData();
};

Sensors.prototype.timeoutHandler = function()
{
  this.remove();
};

Sensors.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Sensors.prototype.updateSubSection = function(msg)
{
  for (var i = 0; i < this.m_base.childNodes.length; i++)
  {
    var tbl = this.m_base.childNodes[i];
    var hdr = tbl.firstChild.firstChild.firstChild.data;

    if (hdr == msg.abbrev)
    {
      this.updateValue(tbl, msg);
      return;
    }
    else if (msg.abbrev < hdr)
    {
      var ss = this.createSubSection(msg);
      this.m_base.insertBefore(ss, tbl);
      return;
    }
  }

  var ss = this.createSubSection(msg);
  this.m_base.appendChild(ss);
};

Sensors.prototype.createSubSection = function(msg)
{
  var th = document.createElement('th');
  th.colSpan = 4;
  th.appendChild(document.createTextNode(msg.abbrev));

  var tr = document.createElement('tr');
  tr.appendChild(th);

  var tbl = document.createElement('table');
  tbl.appendChild(tr);

  this.updateValue(tbl, msg);

  return tbl;
};

Sensors.prototype.updateValue = function(parent, msg)
{
  var el = resolveEntity(parseInt(msg.src_ent));
  if (!el)
    return;

  for (var i = 1; i < parent.childNodes.length; i++)
  {
    var tr = parent.childNodes[i];
    var ent = tr.firstChild.firstChild.data;

    if (ent == el)
    {
      this.updateField(tr, msg);
      return;
    }
    else if (el < ent)
    {
      var vn = this.createValue(msg);
      parent.insertBefore(vn, tr);
      return;
    }
  }

  var vn = this.createValue(msg);
  parent.appendChild(vn);
};

Sensors.prototype.createValue = function(msg)
{
  var src = resolveEntity(parseInt(msg.src_ent));
  if (!src)
    return;

  var td_label = document.createElement('td');
  td_label.appendChild(document.createTextNode(src));

  var td_value = document.createElement('td');
  td_value.style.width = '50px';
  td_value.appendChild(document.createTextNode(''));

  var td_desc = document.createElement('td');
  td_desc.style.textAlign = 'left';
  td_desc.appendChild(document.createTextNode(''));

  var img_status = document.createElement('img');
  img_status.src = g_icons.path('normal');

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

Sensors.prototype.updateField = function(root, msg)
{
  var date = new Date(msg.timestamp * 1000);
  var hours = date.getHours();
  var minutes = "0" + date.getMinutes();
  var seconds = "0" + date.getSeconds();
  var formattedTime = hours + ':' + minutes.substr(-2) + ':' + seconds.substr(-2);
  
  var totalSeconds = null;
  
  if (msg.timestamp >= 0)
  {
    var dif = msg.timestamp - g_time_current;
    totalSeconds = (dif < 0) ? Math.floor(dif) : 0;
    var h = Math.floor(totalSeconds / 3600);
    var m = Math.floor((totalSeconds % 3600) / 60);
    var s = totalSeconds % 60;
    var formattedDiff = (h > 0 ? h + 'h ' : '') + (m > 0 ? m + 'm ' : '') + s + 's';

    if (totalSeconds > 10.0)
    {
      root.childNodes[2].firstChild.data = 'INACTIVE - Last Update at ' + formattedTime + ' (' + formattedDiff + ')';
      root.childNodes[3].firstChild.src = this.getStateIcon(state);
    }
    else
    {
      root.childNodes[2].firstChild.data = 'ACTIVE - Last Update at ' + formattedTime + ' (' + formattedDiff + ')';
    }
  }
  else
    root.childNodes[2].firstChild.data = 'last message with invalid timestamp';

  root.childNodes[3].firstChild.src = this.getStateIcon((!totalSeconds || totalSeconds > 10.0) ? 1 : 0);
  root.childNodes[1].firstChild.data = Number(msg.value).toFixed(2);
};

Sensors.prototype.getStateIcon = function(state)
{
  switch (Number(state))
  {
  case 0:
    return g_icons.path('warning');
  case 1:
    return g_icons.path('normal');
  }

  return g_icons.path('unknown');
};

Sensors.prototype.requestData = function()
{
  if (!this.m_used)
    return;
  
  var options =
  {
    timeout: 10000,
    timeoutHandler: this.timeoutHandler,
    errorHandler: this.errorHandler
  };
  
  HTTP.get('dune/sensors', this.handleData, options);
};

Sensors.prototype.handleData = function(text)
{
  if (this.m_timer == null)
    this.m_timer = setInterval(this.requestData, 4000);

  let data;
  try
  {
    data = JSON.parse(text);
  }
  catch (error)
  {
    // console.error("Failed to parse JSON:", error);
    return;
  }

  this.update(data);
};

Sensors.prototype.update = function(data)
{
  let msgs = data.data;
  if (!msgs)
    return;

  msgs.forEach(msg =>
  {
    this.updateSubSection(msg);
  });
};
