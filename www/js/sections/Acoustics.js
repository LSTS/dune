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
//***************************************************************************

function Acoustics(root_id)
{
  this.m_timer = null;
  this.m_acoustic_modems_types = [];
  this.m_acoustic_modems = new Map();
  this.m_acoustic_targets = [];
  this.m_selected_modems = {};
  
  this.create('Acoustics', root_id);
  this.createHeader('Actions');
  this.createActionsSection();
  this.createHeader('Choose Modems');
  this.createChooseModemsSection();

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
  this.errorHandler = this.errorHandler.bind(this);
  this.timeoutHandler = this.timeoutHandler.bind(this);
};
  
Acoustics.prototype = Object.create(BasicSection.prototype);
Acoustics.prototype.constructor = Acoustics;

Acoustics.prototype.start = function()
{
  this.m_acoustic_modems_types = [];
  this.m_acoustic_modems = new Map();
  this.m_acoustic_targets = [];
  this.m_selected_modems = {};
  this.requestData();
};

Acoustics.prototype.timeoutHandler = function()
{
  this.remove();
};

Acoustics.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Acoustics.prototype.createActionsSection = function()
{
  const actionsContainer = document.createElement("div");
  actionsContainer.id = "acoustics-actions";
  actionsContainer.style.marginTop = "30px";
  actionsContainer.style.marginBottom = "20px";

  const actionForm = document.createElement("form");
  actionForm.id = "acoustics-actions-form";
  
  const targetsSelect = document.createElement("select");
  targetsSelect.id = "acoustics-targets-dropdown";
  
  this.fillTargetsSelect(targetsSelect);
  
  const buttonContainer = document.createElement("div");
  buttonContainer.style.display = "inline-block";
  buttonContainer.style.marginLeft = "10px";
  
  const pingButton = document.createElement("button");
  pingButton.id = "acoustics-button-ping";
  pingButton.textContent = "Ping";
  pingButton.type = "button";
  pingButton.style.marginRight = "10px";
  pingButton.disabled = this.m_acoustic_targets.length === 0;
  pingButton.onclick = (event) => { submitAction("ping", targetsSelect.value, event); };

  const abortButton = document.createElement("button");
  abortButton.id = "acoustics-button-abort";
  abortButton.textContent = "Abort";
  abortButton.type = "button";
  abortButton.disabled = this.m_acoustic_targets.length === 0;
  abortButton.onclick = (event) => { submitAction("abort", targetsSelect.value, event); };

  buttonContainer.appendChild(pingButton);
  buttonContainer.appendChild(abortButton);
  
  actionForm.appendChild(targetsSelect);
  actionForm.appendChild(buttonContainer);
  
  actionsContainer.appendChild(actionForm);
  this.element().appendChild(actionsContainer);
};

Acoustics.prototype.updateActionsSection = function()
{
  const targetsSelect = document.getElementById("acoustics-targets-dropdown");
  const pingButton = document.getElementById("acoustics-button-ping");
  const abortButton = document.getElementById("acoustics-button-abort");

  if (!targetsSelect ||
      !pingButton ||
      !abortButton)
    return;

  targetsSelect.innerHTML = "";
  this.fillTargetsSelect(targetsSelect);
  pingButton.disabled = abortButton.disabled = this.m_acoustic_targets.length === 0;
};

Acoustics.prototype.fillTargetsSelect = function(targetsSelect)
{
  if (!targetsSelect)
    return;

  if (this.m_acoustic_targets.length === 0) 
  {
    const emptyOption = document.createElement("option");
    emptyOption.textContent = "-- empty --";
    emptyOption.disabled = true;
    targetsSelect.appendChild(emptyOption);
  }
  else
  {
    this.m_acoustic_targets.forEach(target =>
    {
      const option = document.createElement("option");
      option.value = target;
      option.textContent = target;
      targetsSelect.appendChild(option);
    });
  }
};

Acoustics.prototype.createChooseModemsSection = function()
{
  const container = document.createElement("div");
  container.id = "acoustics-choose-modems";
  container.style.marginTop = "30px";
  container.style.marginBottom = "20px";

  const modemsList = document.createElement("div");
  modemsList.id = "acoustics-modems-list";
  modemsList.style.display = "flex";
  modemsList.style.flexDirection = "column";
  modemsList.style.alignItems = "center";

  this.fillAcousticsModemsList(modemsList);

  const sendButton = document.createElement("button");
  sendButton.type = "button";
  sendButton.textContent = "Send";
  sendButton.style.marginTop = "20px";
  sendButton.onclick = (event) => { submitAcousticModemsSelection(this.m_selected_modems, event); };

  const saveButton = document.createElement("button");
  saveButton.type = "button";
  saveButton.textContent = "Save";
  saveButton.style.marginTop = "20px";
  saveButton.onclick = (event) => { submitSaveAcousticModemsSelection(event); };

  container.appendChild(modemsList);
  container.appendChild(sendButton);
  container.appendChild(saveButton);
  this.element().appendChild(container);
};

Acoustics.prototype.updateChooseModemsSection = function()
{
  const modemsList = document.getElementById("acoustics-modems-list");
  if (!modemsList)
    return;

  modemsList.innerHTML = "";
  this.fillAcousticsModemsList(modemsList);
};

Acoustics.prototype.fillAcousticsModemsList = function(modemsList)
{
  this.m_acoustic_modems.forEach((state, modemName) =>
  {
    const row = document.createElement("div");
    row.className = "acoustic-modem-row";
    row.style.display = "flex";
    row.style.alignItems = "center";
    row.style.justifyContent = "space-between";
    row.style.width = "300px";
    row.style.padding = "5px 10px";
    row.style.border = "1px solid #ccc";
    row.style.borderRadius = "5px";
    row.style.marginBottom = "10px";
    row.style.backgroundColor = "#f9f9f9";

    const label = document.createElement("span");
    label.textContent = modemName;
    label.style.flexGrow = "1";

    const stateCircle = document.createElement("div");
    stateCircle.style.width = "20px";
    stateCircle.style.height = "20px";
    stateCircle.style.borderRadius = "50%";
    const colors = ["#FFCCCB", "#90EE90", "#FFFFC5"];
    stateCircle.style.backgroundColor = colors[state] || "#FFFFFF";
    stateCircle.style.marginRight = "10px";

    const selectCheckbox = document.createElement("input");
    selectCheckbox.type = "checkbox";
    selectCheckbox.classList.add("acoustics-checkbox");
    selectCheckbox.style.marginRight = "10px";

    let modemType = "";
    this.m_acoustic_modems_types.forEach(type =>
    {
      if (modemName.startsWith(type))
        modemType = type;
    });

    row.dataset.modemType = modemType;
    row.dataset.modemName = modemName;

    selectCheckbox.onclick = () =>
    {
      const modemRows = modemsList.querySelectorAll(".acoustic-modem-row");

      modemRows.forEach(r =>
      {
        if (r.dataset.modemType === modemType && r !== row)
        {
          const otherCheckbox = r.querySelector("input[type='checkbox']");
          if (otherCheckbox) {
            otherCheckbox.checked = false;
          }
          if (this.m_selected_modems[modemType] === r.dataset.modemName)
            delete this.m_selected_modems[modemType];
        }
      });

      if (selectCheckbox.checked)
        this.m_selected_modems[modemType] = modemName;
      else
        delete this.m_selected_modems[modemType];
    };

    row.appendChild(selectCheckbox);
    row.appendChild(label);
    row.appendChild(stateCircle);
    modemsList.appendChild(row);
  });
};

Acoustics.prototype.requestData = function()
{
  if (!this.m_used)
    return;
  
  var options =
  {
    timeout: 10000,
    timeoutHandler: this.timeoutHandler,
    errorHandler: this.errorHandler
  };
  
  HTTP.get('dune/acoustics', this.handleData, options);
};

Acoustics.prototype.handleData = function(text)
{
  if (this.m_timer == null)
    this.m_timer = setInterval(this.requestData, 4000);

  let data;
  try
  {
    data = JSON.parse(text);
  }
  catch (error)
  {
    // console.error("Failed to parse JSON:", error);
    return;
  }

  this.update(data);
};

function mapsAreEqual(map1, map2)
{
  if (map1.size !== map2.size)
    return false;

  for (let [key, value] of map1)
  {
    if (!map2.has(key) || map2.get(key) !== value)
      return false;
  }

  return true;
};

Acoustics.prototype.update = function(data)
{
  if (data.acoustic_modems_types && data.acoustic_modems)
  {
    this.m_acoustic_modems_types = data.acoustic_modems_types.split(",");
    const receivedModemsMap = new Map(Object.entries(data.acoustic_modems));
    if (!mapsAreEqual(this.m_acoustic_modems, receivedModemsMap))
    {
      this.m_acoustic_modems = receivedModemsMap;
      this.updateChooseModemsSection();
    }
  }

  if (data.acoustic_targets)
  {
    const receivedTargets = data.acoustic_targets.split(",");
    const newTargets = !(receivedTargets.length === this.m_acoustic_targets.length && 
                         receivedTargets.every((value, index) => value === this.m_acoustic_targets[index]));
    if (newTargets)
    {
      this.m_acoustic_targets = receivedTargets;
      this.updateActionsSection();
    }
  }
  else if (this.m_acoustic_targets.length > 0)
  {
    this.m_acoustic_targets = [];
    this.updateActionsSection();
  }
};

function submitAction(action, target, event)
{
  if (!action || !target)
    return;

  if (event)
    event.preventDefault();

  const url = 'dune/acoustics/' + action + '/' + target;
  HTTP.post(url);
};

function submitAcousticModemsSelection(selection, event)
{
  if (!selection)
    return;

  if (event)
    event.preventDefault();

  const url = 'dune/acoustics/selection/' + Object.values(selection).join('&');
  HTTP.post(url);
};

function submitSaveAcousticModemsSelection(event)
{
  if (event)
    event.preventDefault();

  const url = 'dune/acoustics/selection/save';
  HTTP.post(url);
};
