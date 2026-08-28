//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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

var g_timer = null;
var g_icons = new Icons();
var g_uid = null;
var g_log_uid = null;
var g_data = null;
var g_dune_logs = null;
var g_dune_logbook = null;
var g_logbook_timer = null;
var g_data_request_pending = false;
var g_logbook_request_pending = false;

var c_poll_interval = 4000;
var c_background_poll_interval = 15000;
var g_network_received = 0;
var g_network_sent = 0;
var g_network_tracking_ready = false;

window.onload = function () {
  initializeTheme();
  initializeNetworkTraffic();
  setConnected(false);
  g_sections.create();
  resizeTasksTable();
  window.addEventListener('resize', resizeTasksTable);
  document.addEventListener('visibilitychange', handleVisibilityChange);
  requestData();
  requestLogs();
};

function formatTrafficBytes(bytes) {
  var units = ['B', 'KB', 'MB', 'GB'];
  var unit = 0;
  bytes = Math.max(0, Number(bytes) || 0);

  while (bytes >= 1024 && unit < units.length - 1) {
    bytes /= 1024;
    unit++;
  }

  var precision = unit === 0 ? 0 : (bytes < 10 ? 1 : 0);
  return bytes.toFixed(precision) + ' ' + units[unit];
}

function updateNetworkTraffic() {
  document.getElementById('TrafficReceived').textContent = formatTrafficBytes(g_network_received);
  document.getElementById('TrafficSent').textContent = formatTrafficBytes(g_network_sent);
}

function estimateRequestBytes(url) {
  // Browsers do not expose request-header sizes. This covers a typical GET
  // request and keeps the transmitted counter useful without server changes.
  return 420 + String(url || '').length;
}

function initializeNetworkTraffic() {
  if (window.performance && performance.getEntriesByType) {
    var entries = performance.getEntriesByType('navigation').concat(performance.getEntriesByType('resource'));
    for (var i = 0; i < entries.length; i++) {
      g_network_received += entries[i].transferSize || entries[i].encodedBodySize || 0;
      g_network_sent += estimateRequestBytes(entries[i].name);
    }
  }

  g_network_tracking_ready = true;
  updateNetworkTraffic();
}

function recordNetworkRequest(url) {
  if (!g_network_tracking_ready)
    return;
  g_network_sent += estimateRequestBytes(url);
  updateNetworkTraffic();
}

function recordNetworkResponse(bytes) {
  if (!g_network_tracking_ready)
    return;
  g_network_received += Math.max(0, Number(bytes) || 0);
  updateNetworkTraffic();
}

function dataPollInterval() {
  return document.hidden ? c_background_poll_interval : c_poll_interval;
}

function scheduleDataRequest(delay) {
  if (g_timer != null)
    clearTimeout(g_timer);
  g_timer = setTimeout(requestData, delay);
}

function finishDataRequest() {
  if (!g_data_request_pending)
    return;

  g_data_request_pending = false;
  scheduleDataRequest(dataPollInterval());
}

function isLogbookVisible() {
  return !document.hidden && g_sections.current() === 'Logbook';
}

function scheduleLogBookRequest(delay) {
  if (g_logbook_timer != null)
    clearTimeout(g_logbook_timer);

  g_logbook_timer = null;
  if (isLogbookVisible())
    g_logbook_timer = setTimeout(requestLogBookEntries, delay);
}

function finishLogBookRequest() {
  if (!g_logbook_request_pending)
    return;

  g_logbook_request_pending = false;
  scheduleLogBookRequest(c_poll_interval);
}

function handleVisibilityChange() {
  if (!g_data_request_pending)
    scheduleDataRequest(document.hidden ? c_background_poll_interval : 0);

  if (isLogbookVisible() && !g_logbook_request_pending)
    scheduleLogBookRequest(0);
  else if (!isLogbookVisible())
    scheduleLogBookRequest(c_poll_interval);
}

function resizeTasksTable() {
  var tasks = document.getElementById('MainTaskTableDiv');
  if (!tasks || tasks.offsetParent === null) {
    return;
  }

  // Reserve room for the container padding and copyright below the table.
  var footerSpace = 80;
  var availableHeight = window.innerHeight - tasks.getBoundingClientRect().top - footerSpace;
  tasks.style.maxHeight = Math.max(120, availableHeight) + 'px';
}

function initializeTheme() {
  var savedTheme = localStorage.getItem('duneTheme');
  var prefersDark = window.matchMedia && window.matchMedia('(prefers-color-scheme: dark)').matches;
  setTheme(savedTheme === 'dark' || (!savedTheme && prefersDark) ? 'dark' : 'light');
}

function setTheme(theme) {
  var isDark = theme === 'dark';
  document.body.className = isDark ? 'theme-dark' : 'theme-light';
  document.getElementById('ThemeIcon').textContent = isDark ? '\u2600' : '\u263e';
  document.getElementById('ThemeButton').title = isDark ? 'Use light theme' : 'Use dark theme';
  localStorage.setItem('duneTheme', theme);
}

function toggleTheme() {
  setTheme(document.body.classList.contains('theme-dark') ? 'light' : 'dark');
}

function requestLogBookEntries() {
  g_logbook_timer = null;
  if (!isLogbookVisible() || g_logbook_request_pending)
    return;

  g_logbook_request_pending = true;
  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = function () {
    timeoutHandler();
    finishLogBookRequest();
  };
  options.errorHandler = function (status, status_text) {
    errorHandler(status, status_text);
    finishLogBookRequest();
  };
  HTTP.get('dune/state/logbook.js', handleLogBookEntries, options);
}

function handleLogBookEntries(text) {
  eval(text);
  g_dune_logbook = logbook;
  g_logbook.update();
  finishLogBookRequest();
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
  if (value) {
    icon.src = g_icons.path('system-on');
    icon.title = 'Connected';
    icon.alt = 'Connected';
  }
  else {
    icon.src = g_icons.path('system-off');
    icon.title = 'Disconnected';
    icon.alt = 'Disconnected';
  }
}

function timeoutHandler() {
  setConnected(false);
}

function errorHandler(status, status_text) {
  timeoutHandler();
}

function requestData() {
  g_timer = null;
  if (g_data_request_pending)
    return;

  g_data_request_pending = true;
  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = function () {
    timeoutHandler();
    finishDataRequest();
  };
  options.errorHandler = function (status, status_text) {
    errorHandler(status, status_text);
    finishDataRequest();
  };
  HTTP.get('dune/state/messages.js', handleData, options);
};

function handleData(text) {
  setConnected(true);

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
  window.requestAnimationFrame(resizeTasksTable);
  finishDataRequest();
};

function show(section) {
  g_sections.show(section);
  if (section === 'Logbook' && !g_logbook_request_pending)
    scheduleLogBookRequest(0);
  else if (section !== 'Logbook')
    scheduleLogBookRequest(c_poll_interval);
};
