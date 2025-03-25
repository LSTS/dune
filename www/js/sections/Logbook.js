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
// Author: Ricardo Martins (legacy Logbook.js)                              *
//***************************************************************************

function Logbook(root_id)
{
  this.m_timer = null;
  
  this.create('Logbook', root_id);

  this.setupLogbookFilters();
  const logEntriesContainer = document.createElement("div");
  logEntriesContainer.id = "logbook-entries";
  this.element().appendChild(logEntriesContainer);

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
  this.errorHandler = this.errorHandler.bind(this);
  this.timeoutHandler = this.timeoutHandler.bind(this);
};

Logbook.prototype = Object.create(BasicSection.prototype);
Logbook.prototype.constructor = Logbook;

Logbook.prototype.start = function()
{
  this.m_logbook = [];
  this.selectedContext = 'all';
  this.uniqueContexts = new Set();

  this.requestData();
};

Logbook.prototype.timeoutHandler = function()
{
  this.remove();
};

Logbook.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Logbook.prototype.getActiveFilters = function()
{
  if(!document.getElementById("filter-info") ||
     !document.getElementById("filter-warning") ||
     !document.getElementById("filter-error") ||
     !document.getElementById("filter-debug"))
    return null;

  return {INFO: document.getElementById("filter-info").checked,
          WARNING: document.getElementById("filter-warning").checked,
          ERROR: document.getElementById("filter-error").checked,
          DEBUG: document.getElementById("filter-debug").checked};
};

function typeAsString(typeInt)
{
  switch (typeInt)
  {
    case '0':
      return "INFO";
    case '1':
      return "WARNING";
    case '2':
    case '3':
      return "ERROR";
    case '4':
      return "DEBUG";
  }

  return "";
}

Logbook.prototype.setupLogbookFilters = function()
{
  const logbookFilter = document.createElement("div");
  logbookFilter.id = "logbook-filter";

  const logbookFilters = document.createElement("div");

  const formGroup = document.createElement("div");
  formGroup.className = "form-group";

  const contextLabel = document.createElement("label");
  contextLabel.htmlFor = "context-filter";
  contextLabel.className = "material-label";
  contextLabel.textContent = "Filter by Entity:";

  const contextSelect = document.createElement("select");
  contextSelect.id = "context-filter";
  contextSelect.className = "material-select";
  contextSelect.addEventListener("change", () =>
  {
    this.selectedContext = contextSelect.value;
    this.update(null);
  });

  const optionAll = document.createElement("option");
  optionAll.value = "all";
  optionAll.textContent = "Show All";
  contextSelect.appendChild(optionAll);

  formGroup.appendChild(contextLabel);
  formGroup.appendChild(contextSelect);

  const filters =
  [
    { id: "filter-info", label: "INFO" },
    { id: "filter-warning", label: "WARNING" },
    { id: "filter-error", label: "ERROR" },
    { id: "filter-debug", label: "DEBUG" }
  ];

  filters.forEach(item =>
  {
    const checkboxLabel = document.createElement("label");
    checkboxLabel.htmlFor = item.id;

    const checkbox = document.createElement("input");
    checkbox.type = "checkbox";
    checkbox.className = "material-checkbox";
    checkbox.id = item.id;
    checkbox.checked = true;
    checkbox.addEventListener("change", () =>
    {
      this.update(null);
    });

    const customSpan = document.createElement("span");
    customSpan.className = "custom-checkbox";

    checkboxLabel.appendChild(checkbox);
    checkboxLabel.appendChild(customSpan);
    checkboxLabel.appendChild(document.createTextNode(" " + item.label));

    formGroup.appendChild(checkboxLabel);
  });

  logbookFilters.appendChild(formGroup);
  logbookFilter.appendChild(logbookFilters);
  this.element().prepend(logbookFilter);
};

Logbook.prototype.updateContextFilter = function()
{
  const selectElement = document.getElementById('context-filter');
  if (!selectElement)
    return;
  
  selectElement.innerHTML = '<option value="all">Show All</option>';

  this.uniqueContexts.forEach(context =>
  {
    const option = document.createElement('option');
    option.value = context;
    option.textContent = context;
    selectElement.appendChild(option);
  });

  selectElement.value = this.selectedContext;
};

Logbook.prototype.updateUniqueContexts = function(entries)
{
  this.uniqueContexts.clear();
  if (!entries)
    return;

  entries.forEach(entry =>
  {
    if (entry.context)
      this.uniqueContexts.add(entry.context);
  });

  this.updateContextFilter();
};

Logbook.prototype.requestData = function()
{
  if (!this.m_used)
    return;
  
  var options =
  {
    timeout: 10000,
    timeoutHandler: this.timeoutHandler,
    errorHandler: this.errorHandler
  };
  
  HTTP.get('dune/logbook', this.handleData, options);
};

Logbook.prototype.handleData = function(text)
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

Logbook.prototype.update = function(data)
{
  const logEntriesContainer = document.getElementById("logbook-entries");
  if (!logEntriesContainer)
    return;

  if (data && data.logbook)
  {
    this.m_logbook = [];
    data.logbook.forEach(entry =>
    {
      try
      {
        this.m_logbook.push(JSON.parse(entry));
      }
      catch (error)
      {
        // console.error("Failed to parse JSON:", error);
      }
    });
  }

  this.updateUniqueContexts(this.m_logbook);
  
  let logbookStr = null;
  if (this.m_logbook.length > 0)
  {
    const result = [];
    const selectedContext = this.selectedContext;

    for (let i = this.m_logbook.length - 1; i >= 0; i--)
    {
      const msg = this.m_logbook[i];
      const msgType = typeAsString(msg.type);
      if (selectedContext !== "all" && msg.context !== selectedContext)
        continue;
      
      const activeFilters = this.getActiveFilters();
      if (activeFilters && !activeFilters[msgType])
        continue;

      result.push
      (
        `<p class="${msgType}">[${dateToString(msg.timestamp)}] - ${msgType} [${msg.context}] >> ${msg.text}</p>`
      );
    }

    logbookStr = result.join("");
  }

  logEntriesContainer.innerHTML = logbookStr;
};
