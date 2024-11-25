//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

Actions.prototype = new BasicSection;

function Actions(root_id) {
  this.create("Actions", root_id);

  this.m_sbase = document.createElement("div");
  this.m_sbase.style.width = "100%";

  this.sections = {
    Axis: this.createSection("Axis"),
    Button: this.createSection("Button"),
    Slider: this.createSection("Slider"),
    HalfSlider: this.createSection("HalfSlider"),
  };

  for (var key in this.sections) {
    this.m_sbase.appendChild(this.sections[key]);
  }

  this.m_base.appendChild(this.m_sbase);
  this.initLayout();
}

Actions.prototype.createSection = function (title) {
  var section = document.createElement("div");
  section.style.width = "100%";
  section.style.display = "flex";
  section.style.flexDirection = "column";
  section.style.alignItems = "center";
  section.style.marginBottom = "20px";

  var sectionContainer = document.createElement("div");
  sectionContainer.style.display = "flex";
  sectionContainer.style.flexDirection = "column";
  section.appendChild(sectionContainer);

  var header = document.createElement("h3");
  header.textContent = title;
  header.style.margin = "10px 0";
  header.style.color = "var(--c-color-text)";
  header.style.fontSize = "18px";
  sectionContainer.appendChild(header);

  var separator = document.createElement("hr");
  separator.style.width = "80%";
  separator.style.border = "none";
  separator.style.height = "2px";
  separator.style.backgroundColor = "#ccc";
  separator.style.margin = "10px auto";
  sectionContainer.appendChild(separator);

  var container = document.createElement("div");
  container.style.display = "flex";
  container.style.flexWrap = "wrap";
  container.style.justifyContent = "center";
  container.style.gap = "10px";
  sectionContainer.appendChild(container);

  section.header = header;
  section.separator = separator;
  section.container = container;

  return section;
};

Actions.prototype.createComponent = function (msg) {
  var component;

  switch (msg.type) {
    case "Axis":
      component = this.createAxis(msg);
      break;
    case "Button":
      component = this.createButton(msg);
      break;
    case "Slider":
      component = this.createSlider(msg);
      break;
    case "HalfSlider":
      component = this.createHalfSlider(msg);
      break;
    default:
      console.warn(`Unknown type "${msg.type}"`);
      return null;
  }

  return component;
};

Actions.prototype.updateValue = function (root, msg) {

};

Actions.prototype.updateEntry = function (msg) {
  var actions = msg.actions;
  var actionPairs = actions.split(";");
  var parsedActions = actionPairs.map(function (pair) {
    var [name, type] = pair.split("=");
    return { name: name.trim(), type: type.trim() };
  });

  for (var i = 0; i < parsedActions.length; i++) {
    var action = parsedActions[i];

    if (document.querySelector(`[data-name="${action.name}"]`)) {
      continue;
    }

    var component = this.createComponent(action);
    if (component) {
      var section = this.sections[action.type]?.container;
      if (section) {
        section.appendChild(component);
        this.sections[action.type].header.style.display = "block";
        this.sections[action.type].separator.style.display = "block";
      } else {
        console.warn(`Section for type "${action.type}" not found.`);
      }
    }
  }

  for (var type in this.sections) {
    var section = this.sections[type];
    if (section.container.children.length === 0) {
      section.header.style.display = "none";
      section.separator.style.display = "none";
    }
  }
};

Actions.prototype.createButton = function (msg) {
  var btn = document.createElement("button");
  btn.textContent = msg.name;
  btn.setAttribute("data-name", msg.name);
  btn.setAttribute("data-type", msg.type);
  btn.onclick = function (event) {
    submitPowerForm(msg.name, msg.type, btn.id, event);
  };
  btn.style.margin = "5px";
  return btn;
};

Actions.prototype.createSlider = function (msg) {
  var slider = document.createElement("input");
  slider.type = "range";
  slider.min = 0;
  slider.max = 100;
  slider.value = 50;
  slider.setAttribute("data-name", msg.name);
  slider.setAttribute("data-type", msg.type);
  slider.oninput = function (event) {
    console.log(`Slider "${msg.name}" valor: ${event.target.value}`);
  };
  return slider;
};

Actions.prototype.createHalfSlider = function (msg) {
  var slider = this.createSlider(msg);
  slider.min = 0;
  slider.max = 50;
  return slider;
};

Actions.prototype.createAxis = function (msg) {
  var sliderContainer = document.createElement("div");
  sliderContainer.style.display = "flex";
  sliderContainer.style.flexDirection = "column";
  sliderContainer.style.alignItems = "center";
  sliderContainer.style.justifyContent = "center";
  sliderContainer.style.marginBottom = "20px";

  var labelContainer = document.createElement("div");
  labelContainer.style.display = "flex";
  labelContainer.style.alignItems = "center";
  labelContainer.style.justifyContent = "center";
  labelContainer.style.gap = "10px";
  labelContainer.style.marginBottom = "5px";

  var actionLabel = document.createElement("span");
  actionLabel.textContent = msg.name;
  actionLabel.style.fontWeight = "bold";
  labelContainer.appendChild(actionLabel);

  var valueLabel = document.createElement("span");
  valueLabel.textContent = "0.00";
  valueLabel.style.fontSize = "14px";
  valueLabel.style.color = "var(--c-color-text)";
  labelContainer.appendChild(valueLabel);
  sliderContainer.appendChild(labelContainer);

  var slider = document.createElement("input");
  slider.type = "range";
  slider.min = -1;
  slider.max = 1;
  slider.step = 0.1;
  slider.value = 0;
  slider.style.width = "200px";
  slider.setAttribute("data-name", msg.name);
  slider.setAttribute("data-type", msg.type);
  slider.oninput = function (event) {
    valueLabel.textContent = parseFloat(event.target.value).toFixed(2);
    //console.log(`Axis "${msg.name}" valor: ${event.target.value}`);
    var url = 'dune/actions/' + msg.name + '/' + msg.type + '/' + event.target.value;
    //console.log(url);
    submitPowerForm(msg.name + "/" + event.target.value, msg.type, 0, event);
  };

  sliderContainer.appendChild(slider);
  return sliderContainer;
};

Actions.prototype.initLayout = function ()
{
  this.m_sbase.style.display = "flex";
  this.m_sbase.style.flexDirection = "row";
  this.m_sbase.style.flexWrap = "wrap";
  this.m_sbase.style.justifyContent = "center";
  this.m_sbase.style.alignItems = "center";
  this.m_sbase.style.gap = "20px";
};

Actions.prototype.appendButton = function (root, channel, op, label)
{
  var btn = document.createElement('button');
  btn.onclick = function (event) { submitPowerForm(channel, op, root.id, event); };
  btn.textContent = label;
  btn.setAttribute('data-op', op);
  root.appendChild(btn);
};

Actions.prototype.update = function ()
{
  //console.log("Updating actions");
  for (var i in g_data.dune_messages) {
    var msg = g_data.dune_messages[i];
    //console.log("Message: " + msg.abbrev + " - " + msg.source);
    if (msg.abbrev != 'RemoteActions' && msg.abbrev != 'RemoteActionsRequest')
      continue;

    this.updateEntry(msg);
  }
  //console.log("Actions updated");
};

function handlePower(text) {
}

function submitPowerForm(command, op, id, event) {
  if (event) {
    event.preventDefault();
  }

  var url = 'dune/actions/' + command;

  //print url
  console.log(url);

  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = null;
  options.errorHandler = null;

  HTTP.get(url, function (response) {
    handlePower(response);
  }, options);
}
