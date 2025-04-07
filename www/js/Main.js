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

function Main(root_id) {
  this.create('Main', root_id);
  this.createHeader('Overview');
  this.createTable();
  this.createHeader('Tasks');
  this.createTableTasks();
};

Main.prototype = new BasicSection;
var system_mode = 6;
var GPS_srcEntity_id = -1;
var rpm_value = 0;

Main.prototype.m_fields = [
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
    "label": "Uptime:",
    "data_function": getUptime,
    "side": "left"
  },
  {
    "label": "Position:",
    "data_function": getPosition,
    "side": "left"
  },
  {
    "label": "Speed:",
    "data_function": getSpeed,
    "side": "left"
  },
  {
    "label": "Available Storage:",
    "data_function": function (data) { return 100 - getMessageValue(data, 'StorageUsage', 0); },
    "widget": new Gauge({
      reverse: false
    }),
    "side": "left"
  },
  {
    "label": "Available Energy:",
    "data_function": function (data) { return getMessageValue(data, 'FuelLevel', 0); },
    "widget": new Gauge({
      reverse: false
    }),
    "side": "left"
  },
  {
    "label": "DUNE CPU Usage:",
    "data_function": function (data) { return getMessageCpuSingleUsage(data, 'DUNE-CPU', 0); },
    "widget": new Gauge({
      reverse: true
    }),
    "side": "right"
  },
  {
    "label": "CPUs:",
    "data_function": function (data) {
      const cpuValues = [];
      let cpuIndex = 1;
      while (true) {
        const cpuLabel = `CPU${cpuIndex}`;
        const cpuValue = getMessageCpuSingleUsage(data, cpuLabel, null);
        if (cpuValue === null) {
          break;// Stop adding CPUs when no more are found.
        }
        cpuValues.push(cpuValue);
        cpuIndex++;
      }

      return cpuValues;
    },
    "widget": new ChartWidget(),
    "side": "right"
  }
];

Main.prototype.createTable = function () {

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

  for (i in this.m_fields) {
    if (this.m_fields[i].side == 'center') {
      this.createTableHeader(i, this.sys_name_div);
    } else if (this.m_fields[i].side == 'left') {
      this.createTableEntry(i, this.m_table_left);
    } else {
      this.createTableEntry(i, this.m_table_right);
    }
  }
};

Main.prototype.createTableTasks = function () {
  this.m_tbl_task = document.createElement('table');
  this.m_tbl_task.id = 'MainTaskTable';
  this.m_tbl_task.style.width = '100%';

  var div = document.createElement('div');
  div.id = 'MainTaskTableDiv';
  div.appendChild(this.m_tbl_task);

  this.m_base.appendChild(div);
};

Main.prototype.createTableHeader = function (idx, tbl) {
  var field = this.m_fields[idx];

  if (!("widget" in field))
    field.widget = new TextLabel();
  field.widget.create(tbl);
};

Main.prototype.createTableEntry = function (idx, tbl) {
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

Main.prototype.update = function () {
  for (i in this.m_fields) {
    var value = null;
    var field = this.m_fields[i];

    if (g_data) {
      if ("data_function" in field) {
        value = field.data_function(g_data);
      }
      else if ("data_field" in field) {
        if (field.data_field === "dune_version")
          value = g_data[field.data_field];
        else
          value = "N/A";
      }
    } else {
      value = "N/A";
    }
    field.widget.update(value);
  }

  //search in dune_messages for EntityInfo, then search for GPSFix and print src_ent.
  if (g_data && g_data.dune_messages) {
    for (i in g_data.dune_messages) {
      var msg = g_data.dune_messages[i];
      if (msg.abbrev == 'EntityInfo') {
        var name = g_data.dune_entities[msg.src_ent].label;
        if (name == 'GPS') {
          GPS_srcEntity_id = msg.src_ent;
        }
      }
      if (msg.abbrev == 'Rpm') {
        rpm_value = msg.value;
      }
    }
  }

  this.updateTasks();
  this.updateVehicleState();
};

Main.prototype.updateTasks = function () {
  var now = Date.now();
  if (this.lastUpdate && (now - this.lastUpdate) < 1000) {
    //console.log("updateTasks: skipping");
    return;
  }
  this.lastUpdate = now;
  //console.log("updateTasks");
  //console.log(g_data);

  if (!g_data || !g_data.dune_messages) {
    return;
  }

  var cpuUsageMap = {};
  for (var i in g_data.dune_messages) {
    var msg = g_data.dune_messages[i];
    if (msg.abbrev === 'CpuUsage') {
      cpuUsageMap[msg.src_ent] = msg.value;
    }
  }
  for (var i in g_data.dune_messages) {
    var msg = g_data.dune_messages[i];
    if (msg.abbrev === 'EntityState') {
      var name = g_data.dune_entities[msg.src_ent].label;
      var description = msg.description;
      if (cpuUsageMap[msg.src_ent] !== undefined) {
        this.insertTaskNode(msg.src_ent, name, description, msg.state, cpuUsageMap[msg.src_ent]);
      } else {
        this.insertTaskNode(msg.src_ent, name, description, msg.state, -1);
      }
    }
  }
};

Main.prototype.insertTaskNode = function (id, name, desc, status, cpuUsage) {
  for (var i = 0; i < this.m_tbl_task.childNodes.length; i++) {
    var item = this.m_tbl_task.childNodes[i];
    var tgt = item.childNodes[1].firstChild;
    if (!item || !tgt) {
      continue;
    }
    if (tgt.data == name) {
      item.childNodes[0].firstChild.src = this.getEntityStateIcon(status);
      item.childNodes[0].firstChild.style.width = '18px';
      item.childNodes[0].firstChild.marginTop = '2px';
      item.childNodes[3].firstChild.data = desc;
      var cpuCell = item.childNodes[2];
      if (cpuCell && cpuCell.firstChild && cpuCell.firstChild.childNodes.length >= 3) {
        if (cpuUsage > 0)
          cpuCell.firstChild.childNodes[2].textContent = ' ' + cpuUsage + '%';
        else
          cpuCell.firstChild.childNodes[2].textContent = '< 1%';
      }
      item.setAttribute("data-state", status);
      this.updateHeaderBackground(status);
      return;
    }
    else if (name < tgt.data) {
      var n = this.createTask(id, name, desc, status, cpuUsage);
      this.m_tbl_task.insertBefore(n, item);
      n.setAttribute("data-state", status);
      this.updateHeaderBackground(status);
      return;
    }
  }

  var xn = this.createTask(id, name, desc, status, cpuUsage);
  this.m_tbl_task.appendChild(xn);
  xn.setAttribute("data-state", status);
  this.updateHeaderBackground(status);
};

Main.prototype.updateHeaderBackground = function (status) {
  var thName = document.querySelector('#MainTaskTable th[data-column="name"]');
  if (thName) {
    thName.style.backgroundColor = this.getBackgroundColorForStatus(status);
    thName.style.borderRadius = '18px';
  }
};

Main.prototype.getBackgroundColorForStatus = function (status) {
  switch (status) {
    case 0:
      return 'var(--c-color-warning)';
    case 2:
    case 3:
    case 4:
      return 'var(--c-color-error_2)';
    default:
    case 1:
      return 'var(--c-background)';
  }
};

Main.prototype.updateVehicleState = function () {
  if (g_data && g_data.dune_messages) {
    for (i in g_data.dune_messages) {
      var msg = g_data.dune_messages[i];
      if (msg.abbrev == 'VehicleState') {
        system_mode = msg.op_mode;
      }
    }
  }
};

Main.prototype.createTask = function (id, name, desc, status, cpuUsage) {
  var tr = document.createElement('tr');
  tr.setAttribute('data-state', status);

  var td_status = document.createElement('td');
  td_status.style.width = '20px';
  var img_status = document.createElement('img');
  img_status.src = this.getEntityStateIcon(status);
  img_status.style.width = '18px';
  img_status.style.marginTop = '2px';
  td_status.appendChild(img_status);
  tr.appendChild(td_status);

  var th_name = document.createElement('th');
  th_name.style.width = '170px';
  th_name.classList.add('rounded-corner');
  th_name.appendChild(document.createTextNode(name));
  tr.appendChild(th_name);

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
  if (cpuUsage > 0) {
    cpuText.textContent = cpuUsage + '%';
  } else {
    cpuText.textContent = '< 1%';
  }
  cpuContainer.appendChild(cpuText);

  var bracketClose = document.createElement('span');
  bracketClose.textContent = ']';
  cpuContainer.appendChild(bracketClose);

  td_cpu.appendChild(cpuContainer);
  tr.appendChild(td_cpu);

  var td_desc = document.createElement('td');
  td_desc.appendChild(document.createTextNode(desc));
  tr.appendChild(td_desc);

  return tr;
};

function findMessage(data, abbrev) {
  for (m in data.dune_messages) {
    var msg = data.dune_messages[m];

    if (msg.abbrev == abbrev)
      return msg;
  }

  return null;
};

function findMessageSRCID(data, abbrev, src_id) {
  for (m in data.dune_messages) {
    var msg = data.dune_messages[m];

    if (msg.abbrev == abbrev && msg.src_ent == src_id)
      return msg;
  }

  return null;
};

function getMessageValue(data, abbrev, defval) {
  try {
    return findMessage(data, abbrev).value;
  }
  catch (err) {
    return defval;
  }
};

function getMessageCpuSingleUsage(data, ent, defval) {
  try {
    for (m in data.dune_entities) {
      var eid = data.dune_entities[m].label;
      //console.log(">>>>>>> " + eid + " : " + data.dune_entities[m].value);
      if (eid.localeCompare(ent) == 0) {
        //console.log(">>>>>>> "+eid+" : "+data.dune_entities[m].value);
        //console.log(" ");
        return data.dune_entities[m].value;
      }
    }
    //console.log(" ");
    return defval;
  }
  catch (err) {
    return defval;
  }
};

function getSystemInfo(data) {
  if (data && data.dune_messages) {
    for (var i in data.dune_messages) {
      if (data.dune_messages[i].abbrev == 'Announce' && data.dune_messages[i].sys_name == data.dune_system) {
        var msg = data.dune_messages[i];
        var systemType = getSystemType(data, msg.sys_type);
        return msg.sys_name + ' (' + systemType + ')';
      }
    }
  }
  return 'Unknown';
}

function getSystemType(data, value) {
  //console.log("Value: "+value);
  var abbreviationMap = {
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

  var modeMap = {
    0: "SERVICE",
    1: "CALIBRATION",
    2: "ERROR",
    3: "MANEUVER",
    4: "EXTERNAL CONTROL",
    5: "BOOT",
    6: ""
  };

  changeBackgroundColor(system_mode);
  if (system_mode == 6) {
    if (value in abbreviationMap) {
      return abbreviationMap[value];
    } else {
      return "Unknown";
    }
  }
  else {
    if (value in abbreviationMap) {
      return abbreviationMap[value] + " - " + modeMap[system_mode];
    } else {
      return "Unknown";
    }
  }
}

function convertRadiansToDM(value) {
  if (value < 0)
    value *= -1.0;

  value *= 180 / Math.PI;
  var degrees = Math.floor(value);
  var minutes = (value - degrees) * 60.0;
  return Array(degrees, minutes);
}

function getPosition(data, value) {
  var msg = findMessage(data, 'GpsFix');

  if (msg == null)
    return 'Unknown';

  var lat = convertRadiansToDM(msg.lat);
  var str = ((msg.lat > 0) ? 'N' : 'S') + lat[0] + ' ' + lat[1].toFixed(4);
  var lon = convertRadiansToDM(msg.lon);
  return str + ' / ' + ((msg.lon > 0) ? 'E' : 'W') + lon[0] + ' ' + lon[1].toFixed(4);
}

function getSpeed(data, value) {
  var msg = findMessageSRCID(data, 'GpsFix', GPS_srcEntity_id);
  if (msg == null)
    return 'Unknown';

  //get the speed in meters from message, need to convert the string msg.sog to value
  var speed = parseFloat(msg.sog);
  //convert to Knots
  var speedKnots = speed * 1.9438444924406;
  var text = speed.toFixed(2) + ' m/s | ' + speedKnots.toFixed(2) + ' kn | rpm: ' + rpm_value;
  return text;
}

function getUptime(data) {
  var diff = data.dune_time_current - data.dune_time_start;
  if (diff <= 0)
    return "just started";

  var hours = Math.floor(diff / 3600);
  var minutes = Math.floor((diff % 3600) / 60);
  var seconds = Math.floor((diff % 3600) % 60);

  var str = '';
  if (hours > 0)
    str += hours + ' ' + ((hours > 1) ? 'hours' : 'hour');

  if (minutes > 0) {
    if (hours > 0) {
      if (seconds > 0)
        str += ', ';
      else
        str += ' and ';
    }

    str += minutes + ' ' + ((minutes > 1) ? 'minutes' : 'minute');
  }

  if (seconds > 0) {
    if (minutes > 0)
      str += ' and ';
    else if (hours > 0) {
      str += ' and ';
    }

    str += seconds + ' ' + ((seconds > 1) ? 'seconds' : 'second') + ' ';
  }
  return str;
}

function changeBackgroundColor(color_id) {
  color = "#757575";
  if (color_id == 0)
    color = "#57B768";
  else if (color_id == 1)
    color = "#307191";
  else if (color_id == 2)
    color = "#A23F3E";
  else if (color_id == 3)
    color = "#D2DA4A";
  else if (color_id == 4)
    color = "#ff00ff";
  else if (color_id == 5)
    color = "#797EB5";
  else if (color_id == 6)
    color = "#757575";

  const systemNameElement = document.getElementById('systemName');
  if (systemNameElement) {
    systemNameElement.style.backgroundColor = color;
  }
}