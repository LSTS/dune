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
// Author: Ricardo Martins                                                  *
// Edit: Pedro Gonçalves                                                    *
//***************************************************************************

function Gauge(options) {
  this.m_type = options && options.reverse ? 'reversed/' : '';
}

Gauge.prototype.create = function (root) {
  this.m_root = root;
  var gaugeContainer = document.createElement('div');
  gaugeContainer.classList.add('gauge-container');
  this.m_bar = document.createElement('div');
  this.m_bar.classList.add('gauge-bar');
  gaugeContainer.appendChild(this.m_bar);
  this.m_value = document.createElement('div');
  this.m_value.classList.add('gauge-value');
  gaugeContainer.appendChild(this.m_value);
  this.m_root.appendChild(gaugeContainer);
};

Gauge.prototype.update = function (value) {
  this.m_value.textContent = Math.round(value) + '%';
  this.m_bar.style.width = Math.round(value) + '%';

  let red, green;

  if (this.m_type === 'reversed/') {
    if (value <= 50) {
      red = Math.round(value * 5.1);
      green = 255;
    } else {
      red = 255;
      green = Math.round((100 - value) * 5.1);
    }
  } else {
    if (value <= 50) {
      red = 255;
      green = Math.round(value * 5.1);
    } else {
      red = Math.round((100 - value) * 5.1);
      green = 255;
    }
  }

  // style gradient
  //const mainColor = `rgb(${red}, ${green}, 0)`;
  //const lighterColor = this._lightenColor(mainColor, 0.6);
  //this.m_bar.style.background = `linear-gradient(to right, ${lighterColor}, ${mainColor})`;

  // style solid color
  const color = `rgb(${red}, ${green}, 0)`;
  this.m_bar.style.backgroundColor = color;
};

Gauge.prototype._lightenColor = function (rgb, amount) {
  const match = rgb.match(/\d+/g);
  let [r, g, b] = match.map(Number);
  r = Math.min(255, Math.round(r + (255 - r) * amount));
  g = Math.min(255, Math.round(g + (255 - g) * amount));
  b = Math.min(255, Math.round(b + (255 - b) * amount));
  return `rgb(${r}, ${g}, ${b})`;
}