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

function Dummy(root_id)
{
  this.create('Dummy', root_id);

  let speechBubble = document.createElement("div");
  speechBubble.textContent = "Hello, World!";
  
  speechBubble.style.display = "inline-block";
  speechBubble.style.backgroundColor = "#f1f1f1";
  speechBubble.style.padding = "10px 15px";
  speechBubble.style.borderRadius = "10px";
  speechBubble.style.border = "2px solid black";
  speechBubble.style.fontFamily = "Arial, sans-serif";
  speechBubble.style.fontSize = "16px";
  speechBubble.style.position = "relative";
  speechBubble.style.margin = "20px";

  let tail = document.createElement("div");
  tail.style.position = "absolute";
  tail.style.bottom = "-10px";
  tail.style.left = "20px";
  tail.style.width = "0";
  tail.style.height = "0";
  tail.style.borderLeft = "10px solid transparent";
  tail.style.borderRight = "10px solid transparent";
  tail.style.borderTop = "10px solid black";

  speechBubble.appendChild(tail);
  this.element().appendChild(speechBubble);
};
  
Dummy.prototype = Object.create(BasicSection.prototype);
Dummy.prototype.constructor = Dummy;

Dummy.prototype.start = function()
{
};

Dummy.prototype.timeoutHandler = function()
{
  this.remove();
};

Dummy.prototype.errorHandler = function(status, status_text)
{
  this.timeoutHandler();
};

Dummy.prototype.update = function ()
{
};
