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
// Author: Ricardo Martins (legacy Sections.js)                             *
//***************************************************************************

const DEFAULT_SECTION = 'Info';
// var sections_timer = null;

function Sections()
{
  this.m_sections = new Map();
  this.m_section = '';

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
};

Sections.prototype.create = function()
{
  this.add(new Info('x-container'));
  this.add(new Power('x-container'));
  this.add(new Acoustics('x-container'));
  this.add(new Announces('x-container'));
  this.add(new Sensors('x-container'));
  this.add(new Logbook('x-container'));
  this.add(new Dummy('x-container'));
};

Sections.prototype.init = function()
{
  this.show(DEFAULT_SECTION);
};

Sections.prototype.clear = function()
{
  const ctn = document.getElementById('x-container');

  if (ctn)
    ctn.replaceChildren();

  this.m_sections = new Map();
  this.m_section = '';
};

Sections.prototype.add = function(obj)
{
  this.m_sections.set(obj.id(), obj);
};

Sections.prototype.show = function(section)
{
  if (section == this.m_section)
    return;
  
  this.hideSection();
  this.showSection(section);
};

Sections.prototype.hideSection = function()
{
  if (!this.m_section)
    return;
  
  var btn = document.getElementById("button" + this.m_section);
  if (btn)
  {
    if (this.m_section == DEFAULT_SECTION)
      btn.className = 'First';
    else
      btn.className = '';
  }

  this.m_sections.get(this.m_section).hide();
  this.m_section = '';
};

Sections.prototype.showSection = function(section)
{
  let btn = document.getElementById("button" + section);
  if (section == DEFAULT_SECTION)
    btn.className = 'FirstSelected';
  else
    btn.className = 'Selected';

  this.m_sections.get(section).show();
  this.m_section = section;
};

Sections.prototype.update = function(data)
{
  this.m_sections.forEach(section => section.update(data));
};

Sections.prototype.current = function()
{
  return this.m_section;
};

Sections.prototype.timeoutHandler = function()
{
  // console.log('Timeout requesting sections...');
};

Sections.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Sections.prototype.requestData = function()
{
  var options = Array();
  options.timeout = 10000;
  options.timeoutHandler = this.timeoutHandler;
  options.errorHandler = this.errorHandler;
  HTTP.get('dune/sections', this.handleData, options);
};

Sections.prototype.handleData = function(text)
{
  // if (sections_timer == null)
  //   sections_timer = setInterval(this.requestData, 1000);

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

  this.updateUsedSections(data.sections.split(","));
};

Sections.prototype.useSection = function(section, use)
{
  if (!section)
    return;

  if ((use && section.m_used) || (!use && !section.m_used))
    return;

  if (use)
    section.add();
  else
    section.remove();
};

Sections.prototype.updateUsedSections = function(sections)
{
  this.m_sections.forEach(section =>
  {
    this.useSection(section, sections.includes(section.id()));
  });
};

var g_sections = new Sections();
