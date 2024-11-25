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

function Announces(root_id) {
  this.create('Announces', root_id);
  this.m_tbl = document.createElement('div'); // Use div for flexibility with Material Design
  this.m_tbl.classList.add('announces-container'); // Class for applying styles

  this.m_base.appendChild(this.m_tbl);

  // Store timestamps for last received messages
  this.lastMessageTimestamps = {};  // e.g., { "system1": timestamp1, "system2": timestamp2 }
}

Announces.prototype = new BasicSection();

Announces.prototype.update = function () {
  // Create a map of existing sections to check for duplicates
  const existingSections = {};
  const sections = this.m_tbl.querySelectorAll('.announce-section');
  sections.forEach(section => {
    const title = section.querySelector('.announce-title').textContent;
    existingSections[title] = section; // Map by the unique section title
  });

  // Iterate through messages and process them
  for (var i in g_data.dune_messages) {
    const msg = g_data.dune_messages[i];
    if (msg.abbrev === 'Announce') {
      const sectionName = msg.sys_name;
      const currentTime = Date.now(); // Get current time in milliseconds

      // Check if the section exists and update or create
      if (existingSections[sectionName]) {
        // If section exists, update it with new IPs and check for time warning
        this.updateSection(existingSections[sectionName], msg, currentTime);
      } else {
        // If section does not exist, create a new one
        const section = this.createSection(msg, currentTime);
        this.m_tbl.appendChild(section);
        existingSections[sectionName] = section; // Add to the map
      }

      // Store the timestamp from the message for this system
      this.lastMessageTimestamps[sectionName] = msg.timestamp;
    }
  }
};

// Method to create a new section
Announces.prototype.createSection = function (msg, currentTime) {
  const section = document.createElement('div');
  section.classList.add('announce-section'); // Style for sections

  // Add the section title
  const title = document.createElement('h3');
  title.classList.add('announce-title'); // Class for styling the title
  title.textContent = msg.sys_name;

  // Create the tooltip (popup)
  const tooltip = document.createElement('div');
  tooltip.classList.add('announce-tooltip'); // Tooltip class

  // Add the time and warning icon to the tooltip
  const timeSinceLastUpdate = currentTime - this.lastMessageTimestamps[msg.sys_name] || 0;
  tooltip.textContent = `${this.formatTime(timeSinceLastUpdate)}`;

  // Add warning icon if the time since last update is more than 20 seconds
  if (timeSinceLastUpdate > 20000) { // 20 seconds = 20000 milliseconds
    tooltip.textContent += ' ⚠';
  }

  // Add the tooltip next to the section title
  section.appendChild(title);
  section.appendChild(tooltip);

  // Add event listener for toggling the section
  title.addEventListener('click', () => {
    section.classList.toggle('open'); // Toggle the "open" class on click
  });

  // Create a list for IPs
  const list = document.createElement('ul');
  list.classList.add('announce-list'); // Class for styling the list
  section.appendChild(list);

  // Add initial IPs
  this.addIPsToSection(list, msg);

  // Store the section title and time for reference
  this.lastMessageTimestamps[msg.sys_name] = msg.timestamp;

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

  return section;
};

// Method to update an existing section
Announces.prototype.updateSection = function (section, msg, currentTime) {
  const list = section.querySelector('.announce-list');
  this.addIPsToSection(list, msg);

  // Get the timestamp of the last update for the section from the stored timestamp
  const lastUpdateTimestamp = parseFloat(msg.timestamp) * 1000;
  const timeSinceLastUpdate = currentTime - lastUpdateTimestamp || 0;

  // Update the time in the tooltip
  const timeElement = section.querySelector('.announce-tooltip');
  timeElement.textContent = this.formatTime(timeSinceLastUpdate);

  // Show warning icon if last update was more than 20 seconds ago
  if (timeSinceLastUpdate > 20000) { // 20 seconds = 20000 milliseconds
    timeElement.textContent += ' ⚠';
    section.querySelector('.announce-title').style.color = "var(--c-color-disabled)";
  }

  // Update the timestamp for this section
  this.lastMessageTimestamps[msg.sys_name] = msg.timestamp;
};

// Method to add all services with their type, IP, and ports to a list
Announces.prototype.addIPsToSection = function (list, msg) {
  const services = msg.services.split(';');
  const uniqueServices = new Set(); // Use a set to avoid duplicates

  // Add already existing items to the set
  list.querySelectorAll('.announce-item').forEach(item => {
    uniqueServices.add(item.textContent);
  });

  // Regex to capture service type, IP, and port
  const regex = /([\w+]+):\/\/([\d.]+):(\d+)/;

  // Filter and add new services
  services.forEach(service => {
    const match = service.match(regex);
    if (match) {
      const protocol = match[1]; // e.g., http, ftp, imc+udp
      const ip = match[2];       // e.g., 192.168.1.1
      const port = match[3];     // e.g., 8080
      const serviceString = `${protocol} - ${ip}:${port}`;

      if (!uniqueServices.has(serviceString)) {
        uniqueServices.add(serviceString); // Add to the set
        const listItem = document.createElement('li');
        listItem.textContent = serviceString;
        listItem.classList.add('announce-item'); // Styling class for the item
        list.appendChild(listItem);

        // If the protocol is HTTP and port is in the range 8080-8089, add click listener
        if (protocol === 'http' && port >= 8080 && port <= 8089) {
          listItem.addEventListener('click', () => {
            this.promptOpenPage(ip, port); // Prompt the user to open the page
          });

          // Change cursor to 'pointer' to indicate it's clickable
          listItem.style.cursor = 'pointer';

          // Style to make it look like a link
          listItem.style.color = "var(--c-color-info)";
          listItem.style.textDecoration = 'underline';

          // Add hover effect for better user experience
          listItem.addEventListener('mouseover', () => {
            listItem.style.color = 'blue'; // Change color when hovering
          });
          listItem.addEventListener('mouseout', () => {
            listItem.style.color = "var(--c-color-info)"; // Revert color when not hovering
          });
        }
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
  return `${hours}:${String(minutes % 60).padStart(2, '0')}:${String(seconds % 60).padStart(2, '0')}`;
};

// Method to update tooltip position based on mouse movement
Announces.prototype.updateTooltipPosition = function (e, tooltip) {
  const mouseX = e.clientX + 10; // Slightly offset from the pointer
  const mouseY = e.clientY + 10; // Slightly offset from the pointer

  tooltip.style.left = `${mouseX}px`;
  tooltip.style.top = `${mouseY}px`;
};
