//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

function Main(root_id)
{
    this.create('Main', root_id);
    this.createHeader('Overview');
    this.createTable();
    this.createHeader('Tasks');
    this.createTableTasks();
};

Main.prototype = new BasicSection;

Main.prototype.m_fields = [
    {
        "label": "System:",
        "data_field": "dune_system",
        "side": "left"
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
        "label": "Uptime:",
        "data_function": getUptime,
        "side": "left"
    },
    {
        "label": "Position:",
        "data_function": getPosition,
        "side": "right"
    },
    {
        "label": "CPU Usage:",
        "data_function": function(data) { return getMessageValue(data, 'CpuUsage', 0); },
        "widget": new Gauge(1),
        "side": "right"
    },
    {
        "label": "Available Storage:",
        "data_function": function(data) { return 100 - getMessageValue(data, 'StorageUsage', 0); },
        "widget": new Gauge(),
        "side": "right"
    },
    {
        "label": "Available Energy:",
        "data_function": function(data) { return getMessageValue(data, 'FuelLevel', 0); },
        "widget": new Gauge(),
        "side": "right"
    }
];

Main.prototype.createTable = function()
{
    this.m_table = document.createElement('table');
    this.m_table.style.width = '100%';
    this.m_base.appendChild(this.m_table);
    var tr = document.createElement('tr');
    var tdl = document.createElement('td');
    tdl.style.verticalAlign = 'top';
    tdl.style.width = '50%';
    var tdr = document.createElement('td');
    tdr.style.verticalAlign = 'top';
    tdr.style.width = '50%';
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

    for (i in this.m_fields)
    {
        if (this.m_fields[i].side == 'left')
        {
            this.createTableEntry(i, this.m_table_left);
        }
        else
        {
            this.createTableEntry(i, this.m_table_right);
        }
    }
};

Main.prototype.createTableTasks = function()
{
    this.m_tbl_task = document.createElement('table');
    this.m_tbl_task.id = 'MainTaskTable';
    this.m_tbl_task.style.width = '100%';

    var div = document.createElement('div');
    div.id = 'MainTaskTableDiv';
    div.appendChild(this.m_tbl_task);

    this.m_base.appendChild(div);
};

Main.prototype.createTableEntry = function(idx, tbl)
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

Main.prototype.update = function()
{
    for (i in this.m_fields)
    {
        var value = null;
        var field = this.m_fields[i];

        if ("data_function" in field)
        {
            value = field.data_function(g_data);
        }
        else if ("data_field" in field)
        {
            value = g_data[field.data_field];
        }

        field.widget.update(value);
    }

    this.updateTasks();
};

Main.prototype.updateTasks = function()
{
    for (i in g_data.dune_messages)
    {
        var msg = g_data.dune_messages[i];

        if (msg.abbrev == 'EntityState')
        {
            var name = g_data.dune_entities[msg.src_ent].label;
            this.insertTaskNode(msg.src_ent, name, msg.description, msg.state);
        }
    }
};

Main.prototype.insertTaskNode = function(id, name, desc, status)
{
    for (var i = 0; i < this.m_tbl_task.childNodes.length; i++)
    {
        var item = this.m_tbl_task.childNodes[i];
        var tgt = item.childNodes[1].firstChild;
        if (tgt.data == name)
        {
            item.childNodes[0].firstChild.src = this.getEntityStateIcon(status);
            item.childNodes[2].firstChild.data = desc;
            return;
        }
        else if (name < tgt.data)
        {
            var n = this.createTask(id, name, desc, status);
            this.m_tbl_task.insertBefore(n, item);
            return;
        }
    }

    var xn = this.createTask(id, name, desc, status);
    this.m_tbl_task.appendChild(xn);
};

Main.prototype.createTask = function(id, name, desc, status)
{
    var tr = document.createElement('tr');

    var td_status = document.createElement('td');
    td_status.style.width = '30px';
    var img_status = document.createElement('img');
    img_status.src = this.getEntityStateIcon(status);
    td_status.appendChild(img_status);
    tr.appendChild(td_status);

    var th_name = document.createElement('th');
    th_name.style.width = '170px';
    th_name.appendChild(document.createTextNode(name));
    tr.appendChild(th_name);

    var td_desc = document.createElement('td');
    td_desc.appendChild(document.createTextNode(desc));
    tr.appendChild(td_desc);

    return tr;
};

function findMessage(data, abbrev)
{
    for (m in data.dune_messages)
    {
        var msg = data.dune_messages[m];

        if (msg.abbrev == abbrev)
            return msg;
    }

    return null;
};

function getMessageValue(data, abbrev, defval)
{
    try
    {
        return findMessage(data, abbrev).value;
    }
    catch (err)
    {
        return defval;
    }
};

function convertRadiansToDM(value)
{
    if (value < 0)
        value *= -1.0;

    value *= 180 / Math.PI;
    var degrees = Math.floor(value);
    var minutes = (value - degrees) * 60.0;
    return Array(degrees, minutes);
}

function getPosition(data, value)
{
    var msg = findMessage(data, 'GpsFix');

    if (msg == null)
        return 'Unknown';

    var lat = convertRadiansToDM(msg.lat);
    var str = ((msg.lat > 0) ? 'N' : 'S') + lat[0] + ' ' + lat[1].toFixed(4);
    var lon = convertRadiansToDM(msg.lon);
    return str + ' / ' + ((msg.lon > 0) ? 'E' : 'W') + lon[0] + ' ' + lon[1].toFixed(4);
}

function getUptime(data)
{
    var diff = data.dune_time_current - data.dune_time_start;
    if (diff <= 0)
        return "just started";

    var hours = Math.floor(diff / 3600);
    var minutes = Math.floor((diff % 3600) / 60);
    var seconds = Math.floor((diff % 3600) % 60);

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
        {
            str += ' and ';
        }

        str += seconds + ' ' + ((seconds > 1) ? 'seconds' : 'second') + ' ';
    }

    return str;
}
