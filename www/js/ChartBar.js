//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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

function ChartWidget() {
  this.chart = null;
}

ChartWidget.prototype.create = function (container) {
  var canvas = document.createElement('canvas');
  canvas.width = 200;
  canvas.height = 100;
  container.appendChild(canvas);

  var ctx = canvas.getContext('2d');
  this.chart = {
    canvas: canvas,
    ctx: ctx,
    values: []
  };
};

ChartWidget.prototype.update = function (values) {
  if (values && values.length === 8) {
    this.chart.values = values;
    this.draw();
  }
};

ChartWidget.prototype.draw = function () {
  var ctx = this.chart.ctx;
  var canvas = this.chart.canvas;
  var values = this.chart.values;

  ctx.clearRect(0, 0, canvas.width, canvas.height);

  var barWidth = canvas.width / values.length;
  var barHeightRatio = canvas.height / 100;

  for (var i = 0; i < values.length; i++) {
    var value = values[i];
    var gradient = ctx.createLinearGradient(0, 0, 0, canvas.height);
    gradient.addColorStop(0, 'rgba(54, 162, 235, 0.2)'); // Lighter color
    gradient.addColorStop(1, 'rgba(54, 162, 235, 1)');   // Darker color
    ctx.fillStyle = gradient;
    ctx.fillRect(i * barWidth, canvas.height - value * barHeightRatio, barWidth, value * barHeightRatio);
    ctx.strokeStyle = 'rgba(54, 162, 235, 1)';
    ctx.strokeRect(i * barWidth, canvas.height - value * barHeightRatio, barWidth, value * barHeightRatio);

    // Desenha o valor no centro da barra
    ctx.fillStyle = 'black';
    ctx.font = '10px Arial';
    ctx.textAlign = 'center';

    // Calcule a posição vertical para centralizar o texto na barra
    var text = value.toString();
    var textWidth = ctx.measureText(text).width;
    var textX = i * barWidth + barWidth / 2;
    var textY = canvas.height - value * barHeightRatio + 10; // Ajuste vertical
    ctx.fillText(text, textX, textY);
  }
};

