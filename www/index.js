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

var g_icons = new Icons();
var g_uid = null;
var g_time_current = null;
var g_resolver = new Resolver();
var g_sections = new Sections();

window.onload = function () {
  setConnected(false);
  g_sections.create();
  requestData();
  requestLogs();
  requestLogBookEntries();
};

function requestLogBookEntries() {
  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = timeoutHandler;
  options.errorHandler = errorHandler;
  HTTP.get('dune/state/logbook.js', handleLogBookEntries, options);
}

function handleLogBookEntries(text) {
  if (g_logbook_timer == null)
    g_logbook_timer = setInterval(requestLogBookEntries, 4000);

  eval(text);
  g_dune_logbook = logbook;
  g_sections.update();
};

function requestLogs() {
  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = timeoutHandler;
  options.errorHandler = errorHandler;
  //HTTP.get('dune/logs/list.js', handleLogs, options);
};

function handleLogs(text) {
  eval(text);
  g_dune_logs = dune_logs;
};

function setConnected(value) {
  var icon = document.getElementById('ConnectionIcon');
  icon.style.marginTop = '-7px';
  icon.style.marginLeft = '0px';
  icon.style.marginRight = '0px';
  if (value) {
    icon.src = g_icons.path('system-on');
    icon.title = 'Connected';
  }
  else {
    icon.src = g_icons.path('system-off');
    icon.title = 'Disconnected';
  }
}

function timeoutHandler() {
  setConnected(false);
}

function errorHandler(status, status_text) {
  timeoutHandler();
}

function requestData() {
  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = timeoutHandler;
  options.errorHandler = errorHandler;
  HTTP.get('dune/state/messages.js', handleData, options);
};

function handleData(text) {
  setConnected(true);

  if (g_timer == null)
    g_timer = setInterval(requestData, 4000);

  eval(text);

  // Check UID.
  if (g_uid == null) {
    g_uid = data.dune_uid;
  }

  if (g_uid != data.dune_uid) {
    g_sections.clear();
    g_sections.create();
    g_uid = data.dune_uid;
  }

  // Process entities.
  for (var i in data.dune_messages) {
    var msg = data.dune_messages[i];
    //console.log(msg);
    if (msg.abbrev != 'EntityState' && msg.abbrev != 'CpuUsage')
      continue;

    data.dune_entities[msg.src_ent].state = msg.state;
    data.dune_entities[msg.src_ent].description = msg.description;
    data.dune_entities[msg.src_ent].value = msg.value;
  }

  g_data = data;
  g_sections.update();
};

function show(section) {
  g_sections.show(section);
};

function resolveEntity(input)
{
  if (!g_resolver)
    return null;

  if (typeof input === 'number')
    return g_resolver.get(input) || null;
  else if (typeof input === 'string')
    return g_resolver.getKey(input) || null;
  
  return null;
}

function getStateIcon(state)
{
  switch (Number(state))
  {
  case 0:
    return g_icons.path('warning');
  case 1:
    return g_icons.path('normal');
  case 2:
  case 3:
    return g_icons.path('error');
  case 4:
    return g_icons.path('fatal');
  default:
    return g_icons.path('unknown');
  }
};

function setConnected(value)
{
  var icon = document.getElementById('ConnectionIcon');

  if (value)
  {
    icon.src = g_icons.path('system-on');
    icon.title = 'Connected';
  }
  else
  {
    icon.src = g_icons.path('system-off');
    icon.title = 'Disconnected';
  }
};

function getMenuItem(id)
{
  return document.getElementById(id);
}