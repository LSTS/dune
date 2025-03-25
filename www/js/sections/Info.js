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
// Author: Ricardo Martins (legacy Main.js)                                 *
//***************************************************************************

function Info(root_id)
{
  this.m_timer = null;

  this.create('Info', root_id);
  this.createHeader('Overview');
  this.createTable();
  this.createHeader('Entities');
  this.createTableEntities();

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
};
  
Info.prototype = Object.create(BasicSection.prototype);
Info.prototype.constructor = Info;

Info.prototype.start = function()
{
  this.requestData();
}

Info.prototype.timeoutHandler = function()
{
  setConnected(false);
};

Info.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Info.prototype.requestData = function()
{
  var options =
  {
    timeout: 10000,
    timeoutHandler: this.timeoutHandler,
    errorHandler: this.errorHandler
  };

  HTTP.get('dune/info', this.handleData, options);
};

Info.prototype.handleData = function(text)
{
  setConnected(true);

  if (this.m_timer == null)
    this.m_timer = setInterval(this.requestData, 4000);

  try
  {
    this.update(JSON.parse(text));
  }
  catch (error)
  {
    return;
  }
};

Info.prototype.m_fields =
[
  {
    "label": "System:",
    "data_function": getSystemInfo,
    "side": "center",
  },
  {
    "label": "Version:",
    "data_field": "dune_version",
    "side": "left"
  },
  {
    "label": "Date:",
    "data_function": function (data) { return dateToString(data.dune_time_current); },
    "side": "left"
  },
  {
    "label": "DUNE Uptime:",
    "data_function": function (data) { return getUptime(data.dune_time_current - data.dune_time_start); },
    "side": "left"
  },
  {
    "label": "CPU Uptime:",
    "data_function": function (data) { return getUptime(data.cpu_uptime); },
    "side": "left"
  }
];

Info.prototype.update = function(data)
{
  g_uid = data.dune_uid ? data.dune_uid : null;
  g_time_current = data.dune_time_current ? data.dune_time_current : null;

  if (data.sections)
    g_sections.updateUsedSections(data.sections.split(","));

  for (let i in this.m_fields)
  {
    var value = null;
    var field = this.m_fields[i];

    if (!field)
      continue;
  
    if ("data_function" in field)
    {
      if (typeof field.data_function === "function") 
      {
        try
        {
          value = field.data_function(data);
        }
        catch (error)
        {
          // console.error(`Error in data_function for field ${field.label}:`, error);
          value = "N/A";
        }
      }
      else
      {
        // console.warn(`Invalid data_function for field ${field.label}`);
        value = "N/A";
      }
    }
    else if ("data_field" in field)
    {
      if(data.hasOwnProperty(field.data_field))
        value = data[field.data_field];
      else
        value = "N/A";
    }
  
    if (field.widget && field.widget.update)
    {
      try
      {
        field.widget.update(value);
      }
      catch (error)
      {
        // console.error(`Error updating widget for field ${field.label}:`, error);
      }
    }
    else
    {
      // console.warn(`Widget update method not found for field ${field.label}`);
    }
  }

  if (data.dune_entities)
    this.updateEntities(data.dune_entities);
};
  
Info.prototype.updateEntities = function(entities)
{
  g_entities = entities;
  Object.values(entities).forEach(entity =>
  {
    this.insertEntityNode(entity.state, entity.label, entity.description);
  });
};
  
Info.prototype.createTable = function()
{
  this.sys_name_div = document.createElement('div');
  this.sys_name_div.id = 'systemName';
  this.m_base.appendChild(this.sys_name_div)
  
  this.m_table = document.createElement('table');
  this.m_table.style.maxWidth = '90%';
  this.m_table.style.overflow = 'hidden';
  this.m_table.style.width = '90%';
  this.m_table.style.marginLeft = '5%';
  this.m_table.style.marginRight = '5%';
  this.m_table.style.boxSizing = 'border-box';
  this.m_table.style.margin = '0 auto';
  
  this.m_base.appendChild(this.m_table);
  
  var tr = document.createElement('tr');
  var tdc = document.createElement('td');
  tdc.style.verticalAlign = 'top';
  
  tr.style.boxShadow = "0 1px 2px var(--c-color-text)";
  tr.style.padding = "10px 18px";
  tr.style.borderRadius = "18px";
  
  var tdl = document.createElement('td');
  tdl.style.verticalAlign = 'top';
  tdl.style.width = '70%';
  var tdr = document.createElement('td');
  tdr.style.verticalAlign = 'top';
  tdr.style.width = '30%';
  tr.appendChild(tdl);
  tr.appendChild(tdr);
  this.m_table.appendChild(tr);
  this.m_table.id = 'MainTable';
  
  this.m_table_left = document.createElement('table');
  this.m_table_left.id = 'MainOverviewLeft';
  tdl.appendChild(this.m_table_left);
  
  this.m_table_right = document.createElement('table');
  this.m_table_right.id = 'MainOverviewRight';
  tdr.appendChild(this.m_table_right);
  
  for (var i in this.m_fields)
  {
    if (this.m_fields[i].side == 'center')
      this.createTableHeader(i, this.sys_name_div);
    else if (this.m_fields[i].side == 'left')
      this.createTableEntry(i, this.m_table_left);
    else
      this.createTableEntry(i, this.m_table_right);
  }
};
  
Info.prototype.createTableEntities = function()
{
  this.m_tbl_entity = document.createElement('table');
  this.m_tbl_entity.id = 'MainEntityTable';
  this.m_tbl_entity.style.width = '100%';
  
  var div = document.createElement('div');
  div.id = 'MainEntityTableDiv';
  div.appendChild(this.m_tbl_entity);
  
  this.m_base.appendChild(div);
};
  
Info.prototype.createTableHeader = function(idx, tbl)
{
  var field = this.m_fields[idx];
    
  if (!("widget" in field))
    field.widget = new TextLabel();
  field.widget.create(tbl);
};
  
Info.prototype.createTableEntry = function(idx, tbl)
{
  var field = this.m_fields[idx];
  var tr = document.createElement('tr');
  tr.style.height = '25px';
  var td_label = document.createElement('td');
  td_label.className = 'entryLeft';
  td_label.appendChild(document.createTextNode(field.label));
  tr.appendChild(td_label);
  
  var td_value = document.createElement('td');
  td_value.className = 'entryRight';
  
  tr.appendChild(td_value);
  if (!("widget" in field))
    field.widget = new TextLabel();
  field.widget.create(td_value);
  
  tbl.appendChild(tr);
};

Info.prototype.insertEntityNode = function(state, label, description)
{
  for (const item of this.m_tbl_entity.childNodes)
  {
    let tgt = item.childNodes[1].firstChild;

    if (tgt.data === label)
    {
      item.childNodes[0].firstChild.src = this.getEntityStateIcon(state);
      item.childNodes[2].firstChild.data = description;
      return;
    }

    if (label < tgt.data)
    {
      this.m_tbl_entity.insertBefore(this.createEntity(state, label, description), item);
      return;
    }
  }

  this.m_tbl_entity.appendChild(this.createEntity(state, label, description));
};
  
Info.prototype.createEntity = function(state, label, description)
{
  var tr = document.createElement('tr');

  var td_state = document.createElement('td');
  td_state.style.width = '20px';
  var img_state = document.createElement('img');
  img_state.src = this.getEntityStateIcon(state);
  td_state.appendChild(img_state);
  tr.appendChild(td_state);
  
  var th_label = document.createElement('th');
  th_label.style.width = '170px';
  th_label.appendChild(document.createTextNode(label));
  tr.appendChild(th_label);
  
  var td_description = document.createElement('td');
  td_description.appendChild(document.createTextNode(description));
  tr.appendChild(td_description);
  
  return tr;
};

Info.prototype.getEntityStateIcon = function(state)
{
  switch (Number(state))
  {
  case 0:
    return g_icons.path('warning');
  case 1:
    return g_icons.path('normal');
  case 2: case 3:
    return g_icons.path('error');
  case 4:
    return g_icons.path('fatal');
  }

  return g_icons.path('unknown');
};

function getSystemInfo(data)
{
  if (!data || typeof data.dune_system === "undefined") 
    return "Unknown";

  const { dune_system, dune_system_type, dune_operation_mode } = data;

  document.title = `${dune_system}`;

  if (dune_system_type === -1 && dune_operation_mode === -1)
    return `${dune_system}`;
  
  if (dune_system_type === -1)
    return `${dune_system} (${getOperationMode(dune_operation_mode)})`;

  if (dune_operation_mode === -1)
    return `${dune_system} (${getSystemType(dune_system_type)})`;

  return `${dune_system} (${getSystemType(dune_system_type)} - ${getOperationMode(dune_operation_mode)})`;
};
  
function getSystemType(value)
{
  var abbreviationMap =
  {
    0: "CCU",
    1: "Human-portable Sensor",
    2: "UUV",
    3: "USV",
    4: "UAV",
    5: "UGV",
    6: "Static sensor",
    7: "Mobile sensor",
    8: "Wireless Sensor Network"
  };

  if (value in abbreviationMap)
    return abbreviationMap[value];
  else
    return "Unknown";
};

function getOperationMode(value)
{
  var modeMap =
  {
    0: "SERVICE",
    1: "CALIBRATION",
    2: "ERROR",
    3: "MANEUVER",
    4: "EXTERNAL CONTROL",
    5: "BOOT"
  };

  changeSystemNameBackgroundColor(value);
  if (value in modeMap)
    return modeMap[value];
  else
    return "Unknown";
};

function getUptime(time)
{
  if (time <= 0)
    return "just started";
  
  var hours = Math.floor(time / 3600);
  var minutes = Math.floor((time % 3600) / 60);
  var seconds = Math.floor((time % 3600) % 60);
  
  var str = '';
  if (hours > 0)
    str += hours + ' ' + ((hours > 1) ? 'hours' : 'hour');
  
  if (minutes > 0)
  {
    if (hours > 0)
    {
      if (seconds > 0)
        str += ', ';
      else
        str += ' and ';  
    }
  
    str += minutes + ' ' + ((minutes > 1) ? 'minutes' : 'minute');
  }
  
  if (seconds > 0)
  {
    if (minutes > 0)
      str += ' and ';
    else if (hours > 0)
      str += ' and ';
  
    str += seconds + ' ' + ((seconds > 1) ? 'seconds' : 'second') + ' ';
  }

  return str;
};
  
function changeSystemNameBackgroundColor(mode)
{
  let color = "#757575";
  if(mode == 0)
    color = "#57B768";
  else if(mode == 1)
    color = "#307191";
  else if(mode == 2)
    color = "#A23F3E";
  else if(mode == 3)
    color = "#D2DA4A";
  else if(mode == 4)
    color = "#ff00ff";
  else if(mode == 5)
    color = "#797EB5";
  else if(mode == 6)
    color = "#757575";
  
  const systemNameElement = document.getElementById('systemName');
  if (systemNameElement)
    systemNameElement.style.backgroundColor = color;
};
