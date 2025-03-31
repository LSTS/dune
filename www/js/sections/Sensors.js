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
  this.m_subsections = new Map();
  this.m_subsectionsOrderedkeys = [];
  this.m_values = new Map();
  this.m_valuesOrderedkeys = [];

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
  if (!msg || msg.abbrev == null || msg.value == null)
    return;

  if (!this.m_subsections.has(msg.abbrev))
    this.createSubSection(msg);

  this.updateValue(msg);
};

Sensors.prototype.createSubSection = function(msg)
{
  if (!msg || msg.abbrev == null)
    return;
  
  var th = document.createElement('th');
  th.colSpan = 4;
  th.appendChild(document.createTextNode(msg.abbrev));

  var tr = document.createElement('tr');
  tr.appendChild(th);

  var tbl = document.createElement('table');
  tbl.appendChild(tr);

  this.insertOrdered(tbl, msg.abbrev, this.m_subsectionsOrderedkeys, this.m_subsections, this.m_base);
  return tbl;
};

Sensors.prototype.updateValue = function(msg)
{
  if (!msg || msg.src_ent == null || msg.abbrev == null)
    return;

  const src = resolveEntity(parseInt(msg.src_ent, 10));
  if (src == null)
    return;

  const root = this.m_values.get(msg.abbrev + '.' + src);
  if (root != null)
    this.updateField(root, msg);
  else
    this.createValue(src, msg);
};

Sensors.prototype.createValue = function(src, msg)
{
  if (src == null || !msg || msg.abbrev == null)
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

  let root = this.m_subsections.get(msg.abbrev);
  this.insertOrdered(tr, msg.abbrev + '.' + src, this.m_valuesOrderedkeys, this.m_values, root ? root : this.createSubSection(msg));
  this.updateField(tr, msg);
};

Sensors.prototype.updateField = function(root, msg)
{
  if (!root || !msg || msg.timestamp == null || msg.value == null)
    return;

  const timestamp = parseFloat(msg.timestamp);
  const date = new Date(timestamp * 1000);
  const hours = date.getHours();
  const minutes = date.getMinutes().toString().padStart(2, '0');
  const seconds = date.getSeconds().toString().padStart(2, '0');
  const formattedTime = `${hours}:${minutes}:${seconds}`;
    
  if (timestamp >= 0)
  {
    const totalSeconds = Math.max(0, Math.floor(timestamp - g_time_current));
    const h = Math.floor(totalSeconds / 3600);
    const m = Math.floor((totalSeconds % 3600) / 60);
    const s = totalSeconds % 60;

    const formattedDiff = [h > 0 ? `${h}h` : '', m > 0 ? `${m}m` : '', `${s}s`]
      .filter(Boolean)
      .join(' ');

    root.childNodes[2].firstChild.data = 'last update at ' + formattedTime + ' (' + formattedDiff + ')';
    root.childNodes[3].firstChild.src = getStateIcon(totalSeconds <= 10.0);
  }
  else
  {
    root.childNodes[2].firstChild.data = 'last message with invalid timestamp';
    root.childNodes[3].firstChild.src = getStateIcon(-1);
  }

  root.childNodes[1].firstChild.data = Number(msg.value).toFixed(2);
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

  try
  {
    this.update(JSON.parse(text));
  }
  catch (error)
  {
    // console.error("Failed to parse JSON:", error);
    return;
  }
};

Sensors.prototype.update = function(data)
{
  if (!data && !data.messages)
    return;

  data.messages.forEach(msg =>
  {
    try
    {
      this.updateSubSection(JSON.parse(msg));
    }
    catch (error)
    {
      // console.error("Failed to parse JSON:", error);
    }
  });
};
