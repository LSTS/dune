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
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Edit: Pedro Gonçalves                                                    *
//***************************************************************************

function Logbook(root_id) {
  this.create('Logbook', root_id);
  setupLogbookFilters();
  this.selectedContext = 'all';
  this.uniqueContexts = new Set();
  this.update();
};

Logbook.prototype = new BasicSection;

Logbook.prototype.getActiveFilters = function () {
  if (document.getElementById("filter-info") == null) {
    return null;
  }
  return {
    INFO: document.getElementById("filter-info").checked,
    WARNING: document.getElementById("filter-warning").checked,
    ERROR: document.getElementById("filter-error").checked,
    DEBUG: document.getElementById("filter-debug").checked
  };
};

Logbook.prototype.updateFiltersState = function () {
  const filtersState = {
    INFO: document.getElementById("filter-info").checked,
    WARNING: document.getElementById("filter-warning").checked,
    ERROR: document.getElementById("filter-error").checked,
    DEBUG: document.getElementById("filter-debug").checked
  };

  localStorage.setItem('logbookFilters', JSON.stringify(filtersState));
};

Logbook.prototype.initialize = function () {
  this.m_base.innerHTML = "";
  g_logbook.setupLogbookFilters();
  this.restoreFiltersState();
  this.update();
};

Logbook.prototype.update = function () {
  //console.log("Updating logbook...");
  if (!document.getElementById("filter-info")) {
    console.log("activeFilters is null");
    location.reload();
    return;
  }

  var logbookStr = "";
  var activeFilters = this.getActiveFilters();
  var selectedContext = this.selectedContext;
  this.updateUniqueContexts();

  if (g_dune_logbook != null) {
    for (var i = g_dune_logbook.dune_logbook.length - 1; i >= 0; i--) {
      var msg = g_dune_logbook.dune_logbook[i];

      if (msg.abbrev != "LogBookEntry") continue;

      var msgType = typeAsString(msg.type);

      if (selectedContext !== "all" && msg.context !== selectedContext) continue;
      if (!activeFilters[msgType]) continue;

      logbookStr += "<p class=\"" + msgType + "\">" +
        "[" + dateToString(msg.timestamp) + "] - " +
        msgType +
        " [" + msg.context + "] >> " +
        msg.text +
        "</p>";
    }
  } else {
    logbookStr = "<p>Logbook is empty.</p>";
  }

  this.m_base.style.height = "85vh";
  this.m_base.style.fontSize = "1rem";
  this.m_base.style.overflowY = "scroll";
  this.m_base.innerHTML = "";
  this.m_base.innerHTML += logbookStr;
};

// Returns the string format of a LogBookEntry's type
function typeAsString(typeInt) {
  var typeStr = "";
  switch (typeInt) {
    case '0':
      typeStr = "INFO";
      break;
    case '1':
      typeStr = "WARNING";
      break;
    case '2':
    case '3':
      typeStr = "ERROR";
      break;
    case '4':
      typeStr = "DEBUG";
      break;
  }
  return typeStr;
}

function setupLogbookFilters() {
  const filters = [
    "filter-info",
    "filter-warning",
    "filter-error",
    "filter-debug"
  ];

  filters.forEach(filterId => {
    const filterElement = document.getElementById(filterId);
    if (filterElement) {
      filterElement.addEventListener("change", () => {
        if (g_logbook) {
          g_logbook.updateFiltersState();
          g_logbook.update();
        } else {
          console.log("g_logbook is not defined");
        }
      });
    } else {
      console.log(`Element with ID ${filterId} not found`);
    }
  });
}

Logbook.prototype.countEntries = function () {
  if (g_dune_logbook != null) {
    return g_dune_logbook.dune_logbook.filter(msg => msg.abbrev === "LogBookEntry").length;
  }
  return 0;
};

Logbook.prototype.updateContextFilter = function () {
  const selectElement = document.getElementById('context-filter');
  selectElement.innerHTML = '<option value="all">Show All</option>';

  this.uniqueContexts.forEach(context => {
    const option = document.createElement('option');
    option.value = context;
    option.textContent = context;
    selectElement.appendChild(option);
  });

  selectElement.value = this.selectedContext;
};

Logbook.prototype.updateUniqueContexts = function () {
  this.uniqueContexts.clear();
  if (g_dune_logbook != null) {
    for (var i = 0; i < g_dune_logbook.dune_logbook.length; i++) {
      var msg = g_dune_logbook.dune_logbook[i];
      if (msg.abbrev === "LogBookEntry") {
        this.uniqueContexts.add(msg.context);
      }
    }
  }
  this.updateContextFilter();
};

document.addEventListener('DOMContentLoaded', function () {
  const contextFilter = document.getElementById('context-filter');
  if (contextFilter) {
    contextFilter.onchange = function () {
      if (typeof g_logbook !== 'undefined') {
        g_logbook.selectedContext = this.value;
        g_logbook.update();
      } else {
        console.log("g_logbook is not defined");
      }
    };
  } else {
    console.log("Element with ID 'context-filter' not found");
  }
});