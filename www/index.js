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
// Author: Ricardo Martins (legacy index.js)                                *
//***************************************************************************

var g_icons = new Icons();
var g_uid = null;
var g_time_current = null;
var g_entities = null;

window.onload = function()
{
  setConnected(false);
  g_sections.create();
  g_sections.updateUsedSections(DEFAULT_SECTION);
  g_sections.init();
  g_sections.requestData();
};

function show(section)
{
  g_sections.show(section)
};

function resolveEntity(input)
{
  if (!g_entities)
    return null;

  const entries = Object.entries(g_entities);
  if (typeof input === "number")
  {
    for (const [id, entity] of entries)
    {
      if (parseInt(id, 10) === input)
        return entity.label;
    }
  }
  else if (typeof input === "string")
  {
    for (const [id, entity] of entries)
    {
      if (entity.label === input)
        return parseInt(id, 10);
    }
  }

  return null;
};

function getStateIcon(state)
{
  switch (Number(state))
  {
  case 0:
    return g_icons.path('warning');
  case 1:
    return g_icons.path('normal');
  case 2: case 3:
    return g_icons.path('error');
  case 4:
    return g_icons.path('fatal');
  }

  return g_icons.path('unknown');
};

function setConnected(value)
{
  var icon = document.getElementById('ConnectionIcon');

  if (value)
  {
    icon.src = g_icons.path('normal');
    icon.title = 'Connected';
  }
  else
  {
    icon.src = g_icons.path('error');
    icon.title = 'Disconnected';
  }
};

function getMenuItem(id)
{
  return document.getElementById(id);
}