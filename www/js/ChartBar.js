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
  if (values && values.length > 0) {
    this.chart.values = values;
    this.chart.canvas.width = values.length * (this.chart.canvas.width/values.length); // Increase the width according to the number of CPUs
    this.draw();
  }
};

ChartWidget.prototype.getBarColor = function (value) {
  // Modern Material Design color palette based on load percentage
  if (value <= 20) {
    return '#66bb6a';  // Light green
  } else if (value <= 40) {
    return '#43a047';  // Medium green
  } else if (value <= 60) {
    return '#ffa726';  // Amber
  } else if (value <= 80) {
    return '#fb8c00';  // Orange
  } else {
    return '#e53935';  // Red
  }
};

ChartWidget.prototype.draw = function () {
  var ctx = this.chart.ctx;
  var canvas = this.chart.canvas;
  var values = this.chart.values;

  // Clean the canvas before drawing
  ctx.clearRect(0, 0, canvas.width, canvas.height);

  // Define the width of each bar based on the number of CPUs
  var barWidth = canvas.width / values.length;
  var barHeightRatio = canvas.height / 100; // Assume the value is a percentage

  // Draw the bars for each available CPU
  for (var i = 0; i < values.length; i++)
  {
    var value = values[i];
    if(value == null)
      value = 0;
    // Set color for the bar based on load
    var barColor = this.getBarColor(value);
    // Create a gradient effect for the bar
    var gradient = ctx.createLinearGradient(0, 0, 0, canvas.height);
    gradient.addColorStop(0, barColor);
    gradient.addColorStop(1, '#ffffff');  // Lighter gradient towards the bottom
    // Apply gradient as the fill style
    ctx.fillStyle = gradient;
    // Add a shadow for a modern material effect
    ctx.shadowColor = 'rgba(0, 0, 0, 0.2)';
    ctx.shadowBlur = 4;
    ctx.shadowOffsetX = 2;
    ctx.shadowOffsetY = 2;
    // Draw the bar
    ctx.fillRect(i * barWidth, canvas.height - value * barHeightRatio, barWidth, value * barHeightRatio);
    // Remove shadow for clean outlines
    ctx.shadowColor = 'transparent';
    // Draw the bar outline
    ctx.strokeStyle = '#cccccc';  // Light grey for outlines
    ctx.strokeRect(i * barWidth, canvas.height - value * barHeightRatio, barWidth, value * barHeightRatio);
    // Draw the value in the center of the bar
    ctx.fillStyle = 'black';
    ctx.font = '10px Arial';
    ctx.textAlign = 'center';
    var text = value.toString();
    var textX = i * barWidth + barWidth / 2;
    var textY = canvas.height - value * barHeightRatio + 10;
    ctx.fillText(text, textX, textY);
  }
};

