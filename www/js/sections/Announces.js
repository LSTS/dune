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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// Map sys_type to the corresponding system type name
const sysTypeMap =
{
  0: 'CCU',
  1: 'HUMANSENSOR',
  2: 'UUV',
  3: 'USV',
  4: 'UAV',
  5: 'UGV',
  6: 'STATICSENSOR',
  7: 'MOBILESENSOR',
  8: 'WSN'
};

function Announces(root_id)
{
  this.create('Announces', root_id);
  this.m_tbl = document.createElement('div');
  this.m_tbl.classList.add('announces-container');

  this.m_base.appendChild(this.m_tbl);

  this.lastMessageTimestamps = {};

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
  this.errorHandler = this.errorHandler.bind(this);
}

Announces.prototype = Object.create(BasicSection.prototype);
Announces.prototype.constructor = Announces;

Announces.prototype.start = function()
{
  this.m_logbook = [];
  this.selectedContext = 'all';
  this.uniqueContexts = new Set();

  this.requestData();
};

Announces.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Announces.prototype.requestData = function()
{
  if (!this.m_used)
    return;
  
  var options =
  {
    timeout: 10000,
    timeoutHandler: this.timeoutHandler,
    errorHandler: this.errorHandler
  };
  
  HTTP.get('dune/announces', this.handleData, options);
};

Announces.prototype.handleData = function(text)
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

Announces.prototype.update = function(data)
{
  if (data == null || data.announces == null)
    return;

  if (Date.now() - this.lastUpdate < 1000)
    return;

  this.lastUpdate = Date.now();
  const sysTypePriority = [2, 3, 4, 5, 0, 1, 6, 7, 8];

  const existingSections = {};
  const sections = this.m_tbl.querySelectorAll('.announce-section');
  sections.forEach(section =>
  {
    const title = section.querySelector('.announce-title').textContent;
    existingSections[title] = section;
  });

  const newSections = [];
  data.announces.forEach(announce =>
  {
    try
    {
      const msg = JSON.parse(announce);
      const sysTypeName = sysTypeMap[msg.sys_type] || 'UNKNOWN';
      const sectionName = `(${sysTypeName}) ${msg.sys_name}`;
      const sysType = parseInt(msg.sys_type, 10);
      const currentTime = Date.now();

      let section;
      if (existingSections[sectionName]) 
      {
        section = existingSections[sectionName];
        this.updateSection(section, msg, currentTime);
      }
      else
      {
        section = this.createSection(msg, currentTime);
        existingSections[sectionName] = section;
      }

      section.dataset.sysType = sysType;
      section.dataset.sysName = sectionName.toLowerCase();
      newSections.push(section);
    }
    catch (error)
    {
      // console.error("Failed to parse JSON:", error);
    }
  });

  newSections.sort((a, b) =>
  {
    const typeA = parseInt(a.dataset.sysType, 10);
    const typeB = parseInt(b.dataset.sysType, 10);

    const priorityDiff = sysTypePriority.indexOf(typeA) - sysTypePriority.indexOf(typeB);
    if (priorityDiff !== 0)
      return priorityDiff;

    return a.dataset.sysName.localeCompare(b.dataset.sysName);
  });

  this.m_tbl.innerHTML = '';
  newSections.forEach(section => this.m_tbl.appendChild(section));
};

Announces.prototype.createSection = function (msg, currentTime)
{
  const section = document.createElement('div');
  section.classList.add('announce-section');
  const titleContainer = document.createElement('div');
  titleContainer.classList.add('announce-title-container');

  const sysTypeName = sysTypeMap[msg.sys_type] || 'UNKNOWN';

  const title = document.createElement('h3');
  title.classList.add('announce-title');
  title.textContent = `(${sysTypeName}) ${msg.sys_name}`;

  const tooltip = document.createElement('div');
  tooltip.classList.add('announce-tooltip');
  const timeSinceLastUpdate = currentTime - this.lastMessageTimestamps[msg.sys_name] || 0;
  tooltip.textContent = `${this.formatTime(timeSinceLastUpdate)}`;
  if (timeSinceLastUpdate > 20000)
    tooltip.textContent += ' ⚠';

  const arrow = document.createElement('span');
  arrow.classList.add('announce-arrow');
  arrow.innerHTML = '▼';

  titleContainer.addEventListener('click', () =>
  {
    section.classList.toggle('open');
    arrow.innerHTML = '▼';
  });

  titleContainer.appendChild(title);
  titleContainer.appendChild(arrow);
  section.appendChild(titleContainer);

  const list = document.createElement('ul');
  list.classList.add('announce-list');
  section.appendChild(list);
  section.appendChild(tooltip);
  this.addIPsToSection(list, msg);

  this.lastMessageTimestamps[msg.sys_name] = msg.timestamp;

  title.addEventListener('mousemove', (e) =>
  {
    this.updateTooltipPosition(e, tooltip);
  });

  title.addEventListener('mouseover', () =>
  {
    if (this.currentTooltip)
      this.currentTooltip.style.display = 'none';

    tooltip.style.display = 'block';
    this.currentTooltip = tooltip;
  });

  title.addEventListener('mouseout', () =>
  {
    tooltip.style.display = 'none';
    this.currentTooltip = null;
  });

  tooltip.style.display = 'none';

  return section;
};

Announces.prototype.updateSection = function (section, msg, currentTime)
{
  const list = section.querySelector('.announce-list');
  this.addIPsToSection(list, msg);
  const lastUpdateTimestamp = parseFloat(msg.timestamp) * 1000;
  const timeSinceLastUpdate = currentTime - lastUpdateTimestamp || 0;
  const timeElement = section.querySelector('.announce-tooltip');
  timeElement.textContent = this.formatTime(timeSinceLastUpdate);

  if (timeSinceLastUpdate > 20000)
  {
    timeElement.textContent += ' ⚠';
    section.querySelector('.announce-title').style.color = "var(--c-color-disabled)";
  }
  else
    section.querySelector('.announce-title').style.color = "var(--c-color-text)";

  this.lastMessageTimestamps[msg.sys_name] = msg.timestamp;
};

Announces.prototype.addIPsToSection = function (list, msg)
{
  const services = msg.services.split(';');
  const newServicesSet = new Set();
  const regex = /([\w+]+):\/\/([\d.]+):(\d+)/;

  services.forEach(service =>
  {
    const match = service.match(regex);

    if (match)
    {
      const protocol = match[1];
      const ip = match[2];
      const port = match[3];

      const serviceString = `${protocol} - ${ip}:${port}`;
      newServicesSet.add(serviceString);
    }
  });

  const existingItems = list.querySelectorAll('.announce-item');
  existingItems.forEach(item =>
  {
    if (!newServicesSet.has(item.textContent))
      list.removeChild(item);
    });

  newServicesSet.forEach(serviceString =>
  {
    const existingItem = Array.from(existingItems).find(item => item.textContent === serviceString);
    if (existingItem == null)
    {
      const listItem = document.createElement('li');
      listItem.textContent = serviceString;
      listItem.classList.add('announce-item');
      list.appendChild(listItem);

      const [protocol, ipPort] = serviceString.split(' - ');
      const [ip, port] = ipPort.split(':');
      if (protocol === 'http' && port >= 8080 && port <= 8089)
      {
        listItem.addEventListener('click', () =>
        {
          this.promptOpenPage(ip, port);
        });

        listItem.style.cursor = 'pointer';
        listItem.style.color = "var(--c-color-info)";
        listItem.style.textDecoration = 'underline';

        listItem.addEventListener('mouseover', () =>
        {
          listItem.style.color = "var(--c-color-link)";
        });

        listItem.addEventListener('mouseout', () =>
        {
          listItem.style.color = "var(--c-color-info)";
        });
      }
    }
  });
};

Announces.prototype.promptOpenPage = function (ip, port)
{
  const url = `http://${ip}:${port}`;
  const userConfirmed = window.confirm(`Do you want to open the page at ${url} in a new tab?`);

  if (userConfirmed)
    window.open(url, '_blank');
};

Announces.prototype.formatTime = function (timeInMillis)
{
  const seconds = Math.floor(timeInMillis / 1000);
  const minutes = Math.floor(seconds / 60);
  const hours = Math.floor(minutes / 60);
  return `Last Update at ${hours}:${String(minutes % 60).padStart(2, '0')}:${String(seconds % 60).padStart(2, '0')}`;
};

Announces.prototype.updateTooltipPosition = function (e, tooltip)
{
  const mouseX = e.clientX + 10;
  const mouseY = e.clientY + 10;

  tooltip.style.left = `${mouseX}px`;
  tooltip.style.top = `${mouseY}px`;
};
