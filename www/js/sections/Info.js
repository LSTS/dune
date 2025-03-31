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
// Author: Pedro Gonçalves (legacy Main.js)                                 *
// Author: Ricardo Martins (legacy Main.js)                                 *
//***************************************************************************

let self = null;
function Info(root_id)
{
  this.m_timer = null;

  this.create('Info', root_id);
  this.createHeader('Overview');
  this.createOverviewTable();
  this.createHeader('Tasks');
  this.createTasksTable();

  self = this;

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
};
  
Info.prototype = Object.create(BasicSection.prototype);
Info.prototype.constructor = Info;

Info.prototype.start = function()
{
  this.m_tasks = new Map();
  this.m_tasksOrderedkeys = [];
  this.m_cpu_usage = new Map();
  this.m_dune_cpu_usage_eid = null;

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
    "data_function": function(data) { return dateToString(data.dune_time_current); },
    "side": "left"
  },
  {
    "label": "DUNE Uptime:",
    "data_function": function(data) { return getUptime(data.dune_time_current - data.dune_time_start); },
    "side": "left"
  },
  {
    "label": "CPU Uptime:",
    "data_function": function(data) { return getUptime(data.cpu_uptime); },
    "side": "left"
  },
  {
    "label": "Available Storage:",
    "data_function": function(data)
    {
      const value = parseFloat(data.dune_storage_usage);
      return (value >= 0 && value <= 100) ? 100 - value : -1;
    },
    "widget": new Gauge
    ({
      reverse: false
    }),
    "side": "left"
  },
  {
    "label": "Available Energy:",
    "data_function": function(data) { return parseFloat(data.dune_fuel_level); },
    "widget": new Gauge
    ({
      reverse: false
    }),
    "side": "left"
  },
  {
    "label": "DUNE CPU Usage:",
    "data_function": function(data)
    {
      if (self.m_dune_cpu_usage_eid == null)
        return -1;

      const value = self.m_cpu_usage.get(self.m_dune_cpu_usage_eid);
      return value;
    },
    "widget": new Gauge
    ({
      reverse: true
    }),
    "side": "right"
  },
  {
    "label": "CPU Cores:",
    "data_function": function(data)
    {
      const values = [];
      for (let i = 1; ; i++)
      {
        const eid = resolveEntity(`CPU${i}`);
        if (eid == null)
          break;
        const value = self.m_cpu_usage.get(eid);
        if (value == null)
          break;
        values.push(value);
      }
      return values;
    },
    "widget": new ChartWidget(),
    "side": "right"
  }
];

Info.prototype.update = function(data)
{
  g_uid = data.dune_uid ? data.dune_uid : null;
  g_time_current = data.dune_time_current ? data.dune_time_current : null;

  if (data.dune_sections)
    g_sections.updateUsedSections(data.dune_sections.split(","));

  if (data.dune_cpu_usage)
    this.updateCpuUsage(data.dune_cpu_usage);

  if (data.dune_entities)
    this.updateEntities(data.dune_entities);

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
};

Info.prototype.updateCpuUsage = function(cpu_usage)
{
  for (let i = 0; i < cpu_usage.length; i++)
  {
    if (cpu_usage[i] && cpu_usage[i].value != null)
      this.m_cpu_usage.set(i, cpu_usage[i].value);
  }
};

Info.prototype.updateEntities = function(entities)
{
  if (!entities || !(typeof entities === 'object'))
    return;

  Object.values(entities).forEach(entity =>
  {
    if (entity && entity.id != null && entity.label != null)
    {
      const id = parseInt(entity.id, 10);
      g_resolver.set(id, entity.label);
      if (entity.state && entity.description)
      {
        const cpuUsage = this.m_cpu_usage.get(id);
        this.updateTaskNode(id, entity.state, entity.label, entity.description, (cpuUsage == null) ? -1 : cpuUsage); 
      }
    }
  });

  if (this.m_dune_cpu_usage_eid == null)
    this.m_dune_cpu_usage_eid = resolveEntity("DUNE-CPU");
};

Info.prototype.createOverviewTable = function()
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

Info.prototype.createTasksTable = function()
{
  this.m_task_tabel = document.createElement('table');
  this.m_task_tabel.id = 'InfoTasksTable';
  this.m_task_tabel.style.width = '100%';
  
  var div = document.createElement('div');
  div.id = 'InfoTasksTableDiv';
  div.appendChild(this.m_task_tabel);
  
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

Info.prototype.updateTaskNode = function(id, state, label, description, cpuUsage)
{
  if (id == null || state == null || label == null || description == null || cpuUsage == null)
    return;
  
  const root = this.m_tasks.get(id);
  if (root)
    this.updateTaskField(root, state, description, cpuUsage);
  else
    this.createTaskNode(id, state, label, description, cpuUsage);
};

Info.prototype.createTaskNode = function(id, state, label, description, cpuUsage)
{
  if (id == null || state == null || label == null || description == null || cpuUsage == null)
    return;

  var tr = document.createElement('tr');

  var td_state = document.createElement('td');
  td_state.style.width = '20px';
  var img_state = document.createElement('img');
  img_state.src = getStateIcon(state);
  td_state.appendChild(img_state);
  tr.appendChild(td_state);
  
  var th_label = document.createElement('th');
  th_label.style.width = '170px';
  th_label.classList.add('rounded-corner');
  th_label.style.backgroundColor = getLabelBackgroundColor(state);
  th_label.appendChild(document.createTextNode(label));
  tr.appendChild(th_label);

  var td_cpu = document.createElement('td');
  td_cpu.style.width = '40px';
  var cpuContainer = document.createElement('div');
  cpuContainer.style.display = 'flex';
  cpuContainer.style.alignItems = 'center';

  var bracketOpen = document.createElement('span');
  bracketOpen.textContent = '[';
  cpuContainer.appendChild(bracketOpen);

  var cpuIcon = document.createElement('span');
  cpuIcon.classList.add('cpu-icon');
  cpuContainer.appendChild(cpuIcon);

  var cpuText = document.createElement('span');
  cpuText.style.display = 'inline-block';
  cpuText.style.width = '30px';
  cpuText.style.textAlign = 'right';
  if (cpuUsage < 0)
    cpuText.textContent = ' N/A';
  else if (cpuUsage > 0)
    cpuText.textContent = ' ' + cpuUsage + '%';
  else
    cpuText.textContent = '< 1%';
  cpuContainer.appendChild(cpuText);

  var bracketClose = document.createElement('span');
  bracketClose.textContent = ']';
  cpuContainer.appendChild(bracketClose);

  td_cpu.appendChild(cpuContainer);
  tr.appendChild(td_cpu);

  var td_description = document.createElement('td');
  td_description.appendChild(document.createTextNode(description));
  tr.appendChild(td_description);
  
  this.insertOrdered(tr, id, this.m_tasksOrderedkeys, this.m_tasks, this.m_task_tabel);
};

Info.prototype.updateTaskField = function(root, state, description, cpuUsage)
{
 if (!root || state == null || description == null ||  cpuUsage == null)
    return;
  
  root.childNodes[0].firstChild.src = getStateIcon(state);
  root.childNodes[1].style.backgroundColor = getLabelBackgroundColor(state);
  
  var cpuCell = root.childNodes[2];
  if (cpuCell && cpuCell.firstChild && cpuCell.firstChild.childNodes.length >= 3)
  {
    if (cpuUsage < 0)
      cpuCell.firstChild.childNodes[2].textContent = ' N/A';
    else if (cpuUsage > 0)
      cpuCell.firstChild.childNodes[2].textContent = ' ' + cpuUsage + '%';
    else
      cpuCell.firstChild.childNodes[2].textContent = '< 1%';
  }

  root.childNodes[3].firstChild.data = description;
};

function getSystemInfo(data)
{
  if (!data || !data.dune_system) 
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

function getLabelBackgroundColor(state)
{
  switch (Number(state))
  {
    case 0:
      return '#797EB5';
    case 2:
    case 3:
    case 4:
      return 'var(--c-color-error)';
    case 1:
    default:
      return 'var(--c-background)';
  }
};
