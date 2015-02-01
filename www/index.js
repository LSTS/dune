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

var g_timer = null;
var g_icons = new Icons();
var g_uid = null;
var g_log_uid = null;
var g_data = null;
var g_dune_logs = null;

window.onload = function()
{
    setConnected(false);
    g_sections.create();
    requestData();
    requestLogs();
};

function requestLogs()
{
    var options = Array();
    options.timeout = 10000;
    options.timeoutHandler = timeoutHandler;
    options.errorHandler = errorHandler;
    HTTP.get('dune/logs/list.js', handleLogs, options);
};

function handleLogs(text)
{
    eval(text);
    g_dune_logs = dune_logs;
};

function setConnected(value)
{
    var icon = document.getElementById('ConnectionIcon');

    if (value)
    {
        icon.src = g_icons.path('normal');
        icon.title = 'Connected';

    }
    else
    {
        icon.src = g_icons.path('error');
        icon.title = 'Disconnected';
    }
}

function timeoutHandler()
{
    setConnected(false);
}

function errorHandler(status, status_text)
{
    timeoutHandler();
}

function requestData()
{
    var options = Array();
    options.timeout = 10000;
    options.timeoutHandler = timeoutHandler;
    options.errorHandler = errorHandler;
    HTTP.get('dune/state/messages.js', handleData, options);
};

function handleData(text)
{
    setConnected(true);

    if (g_timer == null)
        g_timer = setInterval(requestData, 4000);

    eval(text);

    // Check UID.
    if (g_uid == null)
    {
        g_uid = data.dune_uid;
    }

    if (g_uid != data.dune_uid)
    {
        g_sections.clear();
        g_sections.create();
        g_uid = data.dune_uid;
    }

    // Process entities.
    for (var i in data.dune_messages)
    {
        var msg = data.dune_messages[i];
        if (msg.abbrev != 'EntityState')
            continue;

        data.dune_entities[msg.src_ent].state = msg.state;
        data.dune_entities[msg.src_ent].description = msg.description;
    }

    g_data = data;
    g_sections.update();
};

function show(section)
{
    g_sections.show(section);
};
