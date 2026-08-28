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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// Map sys_type to the corresponding system type name
const sysTypeMap = {
  0: 'CCU',
  1: 'HUMANSENSOR',
  2: 'UUV',
  3: 'USV',
  4: 'UAV',
  5: 'UGV',
  6: 'STATICSENSOR',
  7: 'MOBILESENSOR',
  8: 'WSN',
};

function Announces(root_id) {
  this.create('Announces', root_id);
  this.m_tbl = document.createElement('div'); // Use div for flexibility with Material Design
  this.m_tbl.classList.add('announces-container'); // Class for applying styles

  this.m_base.appendChild(this.m_tbl);

  // Keep discovered systems even when they are not present in the latest data cycle.
  this.systems = {};
  this.lastUpdate = 0;
  this.offlineTimeout = 30000;
}

Announces.prototype = new BasicSection();

Announces.prototype.update = function () {
  if (!g_data || !g_data.dune_messages) {
    return;
  }

  // Only update if one second has passed since the last update.
  if (Date.now() - this.lastUpdate < 1000) {
    return;
  }
  const currentTime = Date.now();
  this.lastUpdate = currentTime;

  // Fixed priority order for sys_type
  const sysTypePriority = [2, 3, 4, 5, 0, 1, 6, 7, 8]; // Desired display order

  for (var i in g_data.dune_messages) {
    const msg = g_data.dune_messages[i];
    if (msg.abbrev === 'Announce') {
      const sysTypeName = sysTypeMap[msg.sys_type] || 'UNKNOWN';
      const sectionName = `(${sysTypeName}) ${msg.sys_name}`;
      const sysType = parseInt(msg.sys_type);
      // Source ID is unique even when several users share the same system name.
      const source = msg.src !== undefined ? msg.src : msg.source;
      const systemKey = source !== undefined ? `src:${source}` : `name:${msg.sys_type}:${msg.sys_name}`;

      let section;
      if (this.systems[systemKey]) {
        section = this.systems[systemKey];
        this.updateSection(section, msg, currentTime);
      } else {
        section = this.createSection(msg, currentTime);
        section.dataset.systemKey = systemKey;
        this.systems[systemKey] = section;
      }

      section.dataset.sysType = sysType;
      section.dataset.sysName = sectionName.toLowerCase();
    }
  }

  const sections = Object.values(this.systems);
  sections.forEach(section => this.updateFreshness(section, currentTime));

  sections.sort((a, b) => {
    const typeA = parseInt(a.dataset.sysType);
    const typeB = parseInt(b.dataset.sysType);
    const priorityA = sysTypePriority.indexOf(typeA);
    const priorityB = sysTypePriority.indexOf(typeB);
    const priorityDiff = (priorityA < 0 ? sysTypePriority.length : priorityA) -
      (priorityB < 0 ? sysTypePriority.length : priorityB);
    if (priorityDiff !== 0) return priorityDiff;
    return a.dataset.sysName.localeCompare(b.dataset.sysName);
  });

  sections.forEach(section => this.m_tbl.appendChild(section));
};

// Method to create a new section
Announces.prototype.createSection = function (msg, currentTime) {
  const section = document.createElement('div');
  section.classList.add('announce-section'); // Style for sections

  // Add the section title container
  const titleContainer = document.createElement('div');
  titleContainer.classList.add('announce-title-container'); // Class for styling title container

  // Get the system type name based on the sys_type value
  const sysTypeName = sysTypeMap[msg.sys_type] || 'UNKNOWN';

  // Add the section title with the system type in parentheses
  const title = document.createElement('h3');
  title.classList.add('announce-title'); // Class for styling the title
  title.textContent = `(${sysTypeName}) ${msg.sys_name}`;
  //title.textContent = `${msg.sys_name}`;

  const tooltip = document.createElement('div');
  tooltip.classList.add('announce-tooltip');

  const status = document.createElement('span');
  status.classList.add('announce-status');

  // Add an expand/collapse arrow
  const arrow = document.createElement('span');
  arrow.classList.add('announce-arrow'); // Class for styling the arrow
  arrow.innerHTML = '▼'; // Default to collapsed arrow

  // Toggle the "open" class and arrow direction on click
  titleContainer.addEventListener('click', () => {
    section.classList.toggle('open'); // Toggle the "open" class on the section
    arrow.innerHTML = '▼'; // Change arrow direction
  });

  // Append title and arrow to the container
  titleContainer.appendChild(title);
  titleContainer.appendChild(status);
  titleContainer.appendChild(arrow);

  // Add the container to the section
  section.appendChild(titleContainer);

  // Create a list for IPs
  const list = document.createElement('ul');
  list.classList.add('announce-list'); // Class for styling the list
  section.appendChild(list);
  section.appendChild(tooltip); // Add the tooltip to the section

  // Add initial IPs
  this.addIPsToSection(list, msg);

  section.dataset.lastSeen = this.getMessageTime(msg, currentTime);

  // Add mousemove event to dynamically position the tooltip
  title.addEventListener('mousemove', (e) => {
    this.updateTooltipPosition(e, tooltip); // Update tooltip position based on mouse
  });

  // Add mouseover event to show tooltip when hovering over the title
  title.addEventListener('mouseover', () => {
    // Hide previous tooltip if it exists
    if (this.currentTooltip) {
      this.currentTooltip.style.display = 'none';
    }

    // Show the new tooltip
    tooltip.style.display = 'block';
    this.currentTooltip = tooltip; // Set the current tooltip to be the newly shown one
  });

  // Add mouseout event to hide the tooltip when mouse leaves
  title.addEventListener('mouseout', () => {
    tooltip.style.display = 'none';
    this.currentTooltip = null; // Reset the current tooltip
  });

  // Initially hide the tooltip
  tooltip.style.display = 'none';
  this.updateFreshness(section, currentTime);

  return section;
};

// Method to update an existing section
Announces.prototype.updateSection = function (section, msg, currentTime) {
  const list = section.querySelector('.announce-list');
  this.addIPsToSection(list, msg);
  section.dataset.lastSeen = this.getMessageTime(msg, currentTime);
  this.updateFreshness(section, currentTime);
};

Announces.prototype.updateFreshness = function (section, currentTime) {
  const lastSeen = parseFloat(section.dataset.lastSeen);
  const timeSinceLastUpdate = Math.max(0, currentTime - lastSeen);
  const offline = timeSinceLastUpdate > this.offlineTimeout;
  const timeElement = section.querySelector('.announce-tooltip');
  timeElement.textContent = this.formatTime(timeSinceLastUpdate);
  timeElement.textContent += offline ? ' — Offline' : ' — Online';
  section.classList.toggle('is-offline', offline);
  const status = section.querySelector('.announce-status');
  status.textContent = offline ? 'Offline' : 'Online';
};

Announces.prototype.getMessageTime = function (msg, fallback) {
  const timestamp = parseFloat(msg.timestamp) * 1000;
  return Number.isFinite(timestamp) && timestamp > 0 ? timestamp : fallback;
};

// Method to add all services with their type, IP, and ports to a list
Announces.prototype.addIPsToSection = function (list, msg) {
  // Split the services string into an array of individual services
  const services = msg.services.split(';');

  // Create a new set to store services without duplicates
  const newServicesSet = new Set();

  // Regular expression to capture protocol, IP, and port
  const regex = /([\w+]+):\/\/([\d.]+):(\d+)/;

  // Iterate through each service in the list
  services.forEach(service => {
    // Attempt to match the service with the regular expression
    const match = service.match(regex);

    // If a valid match is found
    if (match) {
      const protocol = match[1]; // Extract protocol (e.g., http, ftp)
      const ip = match[2];       // Extract IP address (e.g., 192.168.1.1)
      const port = match[3];     // Extract port number (e.g., 8080)

      // Create a string combining protocol, IP, and port
      const serviceString = `${protocol} - ${ip}:${port}`;

      // Add the service to the new set (avoids duplicates)
      newServicesSet.add(serviceString);
    }
  });

  // Remove items from the list that are no longer in the new set
  const existingItems = list.querySelectorAll('.announce-item');
  existingItems.forEach(item => {
    // If the item is not in the new set, remove it
    if (!newServicesSet.has(item.textContent)) {
      list.removeChild(item);
    }
  });

  // Add new services that are not already in the list
  newServicesSet.forEach(serviceString => {
    // Check if the service is already in the list
    const existingItem = Array.from(existingItems).find(item => item.textContent === serviceString);

    // If the service is not in the list, add it
    if (!existingItem) {
      const listItem = document.createElement('li');
      listItem.textContent = serviceString; // Set the text of the list item
      listItem.classList.add('announce-item'); // Add the CSS class for styling
      list.appendChild(listItem);

      // If the protocol is HTTP and the port is between 8080 and 8089, add a click handler
      const [protocol, ipPort] = serviceString.split(' - ');
      const [ip, port] = ipPort.split(':');
      if (protocol === 'http' && port >= 8080 && port <= 8089) {
        // When the item is clicked, prompt the user to open the page
        listItem.addEventListener('click', () => {
          this.promptOpenPage(ip, port);
        });

        // Set the item style to indicate it's clickable
        listItem.style.cursor = 'pointer';
        listItem.style.color = "var(--c-color-info)";
        listItem.style.textDecoration = 'underline';

        // Add hover effects to change the color
        listItem.addEventListener('mouseover', () => {
          listItem.style.color = "var(--c-color-link)"; // Change color on hover
        });
        listItem.addEventListener('mouseout', () => {
          listItem.style.color = "var(--c-color-info)"; // Revert to original color
        });
      }
    }
  });
};

// Method to prompt the user to open the page in a new tab
Announces.prototype.promptOpenPage = function (ip, port) {
  // Construct the URL using the IP and port
  const url = `http://${ip}:${port}`;

  // Ask the user if they want to open the page in a new tab
  const userConfirmed = window.confirm(`Do you want to open the page at ${url} in a new tab?`);

  // If the user confirms, open the URL in a new browser tab
  if (userConfirmed) {
    window.open(url, '_blank'); // Open the page in a new tab
  }
};

// Method to format the time in h:m:s
Announces.prototype.formatTime = function (timeInMillis) {
  const seconds = Math.floor(timeInMillis / 1000);
  const minutes = Math.floor(seconds / 60);
  const hours = Math.floor(minutes / 60);
  return `Last Update at ${hours}:${String(minutes % 60).padStart(2, '0')}:${String(seconds % 60).padStart(2, '0')}`;
};

// Method to update tooltip position based on mouse movement
Announces.prototype.updateTooltipPosition = function (e, tooltip) {
  const mouseX = e.clientX + 10; // Slightly offset from the pointer
  const mouseY = e.clientY + 10; // Slightly offset from the pointer

  tooltip.style.left = `${mouseX}px`;
  tooltip.style.top = `${mouseY}px`;
};
