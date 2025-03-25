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
// Author: Ricardo Martins (legacy BasicSection.js)                         *
//***************************************************************************

function BasicSection()
{ };

BasicSection.prototype.create = function(id, root_id)
{
  this.m_used = false;
  
  this.m_base = document.createElement('div');
  this.m_base.id = id;
  this.m_base.style.width = '100%';
  this.hide();
  this.remove();

  this.m_root_id = root_id;
  this.m_root = document.getElementById(root_id);
  if (!this.m_root)
    return;

  this.m_root.appendChild(this.m_base);
};

BasicSection.prototype.createHeader = function(label)
{
  var h1 = document.createElement('h1');
  h1.appendChild(document.createTextNode(label));
  this.m_base.appendChild(h1);
  var hr = document.createElement('hr');
  this.m_base.appendChild(hr);
};

BasicSection.prototype.add = function()
{
  if (this.m_used)
    return;

  const menuItem = getMenuItem("button" + this.id());
  if (menuItem)
    menuItem.style.display = 'block';

  this.m_used = true;
  this.element().style.display = 'block';
  this.init();
};

BasicSection.prototype.remove = function()
{
  const menuItem = getMenuItem("button" + this.id());
  if (menuItem)
    menuItem.style.display = 'none';

  this.m_used = false;
  this.element().style.display = 'none';
};

BasicSection.prototype.show = function()
{
  if (!this.m_used)
    return;

  this.element().className = 'Visible';
};

BasicSection.prototype.hide = function()
{
  this.element().className = 'Hidden';
};

BasicSection.prototype.element = function()
{
  return this.m_base;
};

BasicSection.prototype.id = function()
{
  return this.m_base.id;
};

BasicSection.prototype.init = function()
{
  if (!this.m_used)
    return;

  this.start();
};

BasicSection.prototype.start = function()
{
  throw new Error("Derived class must override start()");
};

BasicSection.prototype.update = function(data)
{
  throw new Error("Derived class must override update()");
};

BasicSection.prototype.insertOrdered = function(element, key, array, map, root)
{
  if (!element || !key || !array || !map || !root)
    return;

  let low = 0;
  let high = array.length;

  while (low < high)
  {
    let mid = Math.floor((low + high) / 2);
    if (array[mid] < key)
      low = mid + 1;
    else
      high = mid;
  }

  array.splice(low, 0, key);
  map.set(key, element);
  
  if (low < array.length - 1 && low > 0)
  {
    let nextElement = map.get(array[low - 1]);
    if (nextElement)
    {
      root.insertBefore(element, nextElement);
      return;
    }
  }

  root.appendChild(element);
};
