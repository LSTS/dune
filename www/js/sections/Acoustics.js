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
  
  this.create('Acoustics', root_id);

  this.handleData = this.handleData.bind(this);
  this.requestData = this.requestData.bind(this);
  this.errorHandler = this.errorHandler.bind(this);
  this.timeoutHandler = this.timeoutHandler.bind(this);
};
  
Acoustics.prototype = Object.create(BasicSection.prototype);
Acoustics.prototype.constructor = Acoustics;

Acoustics.prototype.start = function()
{
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

Acoustics.prototype.update = function(data)
{
  Object.entries(data).forEach(([key, value]) =>
  {
    console.log(key, value);
  });
};
