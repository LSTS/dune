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
// Author: Ricardo Martins (legacy Power.js)                                *
//***************************************************************************

var HIDE_PREFIX = "Private (";

function Power(root_id)
{
  this.m_timer = null;
  
  this.create('Power', root_id);

  this.m_powerChannels = new Map();
  this.m_powerChannelsOrderedKeys = [];

  this.m_sbase = document.createElement('div');
  this.m_sbase.style.width = '100%';

  var bottomButtons = document.createElement('div');
  bottomButtons.classList.add('bottom-buttons');
  bottomButtons.style.justifyContent = "center";
  bottomButtons.style.alignItems = "center";
  bottomButtons.style.display = "flex";
  bottomButtons.style.gap = "15px";

  // Reset all schedulles button.
  var btnResetAllSchedulles = document.createElement('button');
  btnResetAllSchedulles.onclick = (event) => { resetAllSchedulles(event); };
  btnResetAllSchedulles.textContent = 'Reset all schedulles';
  btnResetAllSchedulles.style.cursor = "alias";

  bottomButtons.appendChild(btnResetAllSchedulles);

  this.m_base.appendChild(this.m_sbase);
  this.m_base.appendChild(bottomButtons);

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
  this.errorHandler = this.errorHandler.bind(this);
  this.timeoutHandler = this.timeoutHandler.bind(this);
};

Power.prototype = Object.create(BasicSection.prototype);
Power.prototype.constructor = Power;

Power.prototype.start = function()
{
  this.requestData();
}

Power.prototype.timeoutHandler = function()
{
  this.remove();
};

Power.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Power.prototype.updateEntry = function(name, value)
{
  if (name == null || value == null)
    return;

  if (name.slice(0, HIDE_PREFIX.length) == HIDE_PREFIX)
    return;

  const root = this.m_powerChannels.get(name);
  if (root != null)
    this.updateValue(root, value);
  else
    this.createEntry(name, value);
};

Power.prototype.updateValue = function(root, value)
{
  if (!root || value == null)
    return;

  var base = root.childNodes[1].firstChild.firstChild;
  if (!base)
    return;

  if (value == 0)
  {
    base.childNodes[1].disabled = false;
    base.childNodes[1].classList.add('active');
    base.childNodes[2].disabled = true;
    base.childNodes[2].classList.remove('active');
  }
  else
  {
    base.childNodes[1].disabled = true;
    base.childNodes[1].classList.remove('active');
    base.childNodes[2].disabled = false;
    base.childNodes[2].classList.add('active');
  }
};

Power.prototype.createEntry = function(name, value)
{
  if (!name || value == null)
    return;

  // Header.
  var th = document.createElement('th');
  th.colSpan = 2;
  th.appendChild(document.createTextNode(name));
  var tr = document.createElement('tr');
  tr.appendChild(th);

  // Controls.
  var ctr = document.createElement('tr');

  var form = document.createElement('form');
  form.id = 'PowerChannelForm' + name;
  var btd = document.createElement('td');
  btd.appendChild(form);

  var n = document.createElement('input');
  n.type = 'hidden';
  n.value = name;
  form.appendChild(n);

  this.appendButton(form, name, 'on', 'Turn On');
  this.appendButton(form, name, 'off', 'Turn Off');
  this.appendInput(form, form.id, 'Hours', 'hour(s)');
  this.appendInput(form, form.id, 'Minutes', 'minute(s)');
  this.appendInput(form, form.id, 'Seconds', 'second(s)');
  this.appendButton(form, name, 'sched_on', 'Schedule On');
  this.appendButton(form, name, 'sched_off', 'Schedule Off');
  this.appendButton(form, name, 'reset', 'Reset Schedules');

  ctr.appendChild(btd);

  // Table.
  var tbl = document.createElement('table');
  tbl.appendChild(tr);
  tbl.appendChild(ctr);

  this.updateValue(tbl, value);

  this.insertOrdered(tbl, name, this.m_powerChannelsOrderedKeys, this.m_powerChannels, this.m_sbase);
};

Power.prototype.appendButton = function(root, channel, op, label)
{
  if (root == null || channel == null || op == null || label == null)
    return;

  var btn = document.createElement('button');
  btn.onclick = (event) => { submitPowerChannel(channel, op, root.id, event); };
  btn.textContent = label;
  btn.setAttribute('data-op', op);
  root.appendChild(btn);
};

Power.prototype.appendInput = function(root, form_id, id, label)
{
  if (root == null || form_id == null || id == null || label == null)
    return;

  var einput = document.createElement('input');
  einput.id = form_id + id;
  einput.type = 'text';
  einput.value = '0';
  einput.size = 5;
  root.appendChild(einput);

  var etext = document.createTextNode(label);
  root.appendChild(etext);
};

Power.prototype.requestData = function()
{
  if (!this.m_used)
    return;
  
  var options =
  {
    timeout: 10000,
    timeoutHandler: this.timeoutHandler,
    errorHandler: this.errorHandler
  };
  
  HTTP.get('dune/power', this.handleData, options);
};

Power.prototype.handleData = function(text)
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

Power.prototype.update = function(data)
{
  if (data && data.power_channels)
  {
    Object.entries(data.power_channels).forEach(([key, value]) =>
    {
      this.updateEntry(key, parseInt(value, 10));
    });
  }
};

function submitPowerChannel(channel, op, id, event)
{
  if (event)
    event.preventDefault();

  var url = 'dune/power/channel/' + op + '/' + channel;

  if (op == 'sched_on' || op == 'sched_off')
  {
    var h = document.getElementById(id + 'Hours').value;
    var m = document.getElementById(id + 'Minutes').value;
    var s = document.getElementById(id + 'Seconds').value;
    url += '/' + h + '/' + m + '/' + s;
  }

  var activeBtn = event.target;
  activeBtn.classList.add('loading');
  setTimeout(function() { activeBtn.classList.remove('loading'); }, 500);

  var btnOn = document.querySelector(`#${id} button[data-op="on"]`);
  var btnOff = document.querySelector(`#${id} button[data-op="off"]`);
  if (op === 'on')
  {
    btnOn.classList.remove('active');
    btnOn.disabled = true;
    btnOff.classList.remove('active');
    btnOff.disabled = true;
  }
  else if (op === 'off')
  {
    btnOn.classList.remove('active');
    btnOn.disabled = true;
    btnOff.classList.remove('active');
    btnOff.disabled = true;
  }

  HTTP.post(url);
};

function submitPowerAll(op, event)
{
  if (event)
    event.preventDefault();

  var url = 'dune/power/channel/' + op + '/all';

  var activeBtn = event.target;
  activeBtn.classList.add('loading');
  setTimeout(function() { activeBtn.classList.remove('loading'); }, 500);

  var btnOn = document.querySelector(`#${id} button[data-op="on"]`);
  var btnOff = document.querySelector(`#${id} button[data-op="off"]`);
  if (op === 'on')
  {
    btnOn.classList.remove('active');
    btnOn.disabled = true;
    btnOff.classList.remove('active');
    btnOff.disabled = true;
  }
  else if (op === 'off')
  {
    btnOn.classList.remove('active');
    btnOn.disabled = true;
    btnOff.classList.remove('active');
    btnOff.disabled = true;
  }

  HTTP.post(url);
};

function resetAllSchedulles(op, event)
{
  if (event)
    event.preventDefault();
};
