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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

function ChartWidget() {
  this.chart = null;
}

ChartWidget.prototype.create = function (container) {
  var canvas = document.createElement('canvas');
  // Default width and height – the width can be adjusted during update
  canvas.width = 200;
  canvas.height = 135;
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
    // divide the canvas width by the number of values to get the default bar width
    var defaultBarWidth = this.chart.canvas.width / this.chart.values.length;
    this.chart.canvas.width = values.length * defaultBarWidth;
    this.draw();
  }
};

ChartWidget.prototype.getBarColor = function (value) {
  // Modern palette inspired by Material Design based on load percentage
  // if (value <= 20) {
  //   return '#66bb6a';  // Light green
  // } else if (value <= 40) {
  //   return '#43a047';  // Medium green
  // } else if (value <= 60) {
  //   return '#ffa726';  // Amber
  // } else if (value <= 80) {
  //   return '#fb8c00';  // Orange
  // } else {
  //   return '#e53935';  // Red
  // }
  if (value <= 50) {
    red = Math.round(value * 5.1);
    green = 255;
  } else {
    red = 255;
    green = Math.round((100 - value) * 5.1);
  }
  return `rgb(${red}, ${green}, 0)`;

};

// Helper function to draw a rounded rectangle
ChartWidget.prototype.drawRoundedRect = function (ctx, x, y, width, height, radius) {
  // Ensure the radius doesn't exceed half of the width/height
  radius = Math.min(radius, width / 2, height / 2);
  ctx.beginPath();
  ctx.moveTo(x + radius, y);
  ctx.lineTo(x + width - radius, y);
  ctx.quadraticCurveTo(x + width, y, x + width, y + radius);
  ctx.lineTo(x + width, y + height - radius);
  ctx.quadraticCurveTo(x + width, y + height, x + width - radius, y + height);
  ctx.lineTo(x + radius, y + height);
  ctx.quadraticCurveTo(x, y + height, x, y + height - radius);
  ctx.lineTo(x, y + radius);
  ctx.quadraticCurveTo(x, y, x + radius, y);
  ctx.closePath();
};

ChartWidget.prototype.draw = function () {
  var ctx = this.chart.ctx;
  var canvas = this.chart.canvas;
  var values = this.chart.values;

  // Clear the canvas before drawing
  ctx.clearRect(0, 0, canvas.width, canvas.height);

  // Calculate the width of each bar based on the total number of bars
  var maxWidth = canvas.width;  // Maximum allowed width for the entire chart (in pixels)
  var barWidth = Math.max(maxWidth / values.length, 10);  // Ensure the minimum width of 10px for each bar

  // Assume the value is a percentage (0-100)
  var barHeightRatio = canvas.height / 100;

  for (var i = 0; i < values.length; i++) {
    var value = values[i];
    if (value == null) {
      value = 0;
    }

    var barColor = this.getBarColor(value);
    var x = i * barWidth;
    var barHeight = value * barHeightRatio;
    var y = canvas.height - barHeight;

    // Create a vertical gradient from a lighter version of the bar color to the main color
    var gradient = ctx.createLinearGradient(x, y, x, canvas.height);
    gradient.addColorStop(0, this._lightenColor(barColor, 0.9));
    gradient.addColorStop(1, barColor);

    // Set a shadow for a modern effect
    ctx.shadowColor = 'rgba(0, 0, 0, 0.15)';
    ctx.shadowBlur = 4;
    ctx.shadowOffsetX = 2;
    ctx.shadowOffsetY = 2;

    // Draw the bar with rounded corners
    // style gradient
    //ctx.fillStyle = gradient;

    //style solid color
    ctx.fillStyle = barColor;

    this.drawRoundedRect(ctx, x + 2, y, barWidth - 4, barHeight, 4);
    ctx.fill();

    // Remove shadow for the outline
    ctx.strokeStyle = 'rgba(0, 0, 0, 0.1)';
    ctx.lineWidth = 1;
    ctx.stroke();

    // Display the value centered inside the bar if the value is 9 or greater
    if (value >= 9) {
      ctx.fillStyle = '#000';
      ctx.font = '10px sans-serif';
      ctx.textAlign = 'center';
      ctx.textBaseline = 'middle';
      var textX = x + barWidth / 2;
      var textY = y + barHeight / 2;
      ctx.fillText(value.toString(), textX, textY);
    }
  }
};

// Helper function to lighten a hexadecimal color
// "amount" ranges from 0 (no change) to 1 (completely white)
ChartWidget.prototype._lightenColor = function (hex, amount) {
  // Remove the '#' and convert to a number
  var num = parseInt(hex.slice(1), 16);
  var r = (num >> 16) + Math.round(255 * amount);
  var g = ((num >> 8) & 0x00FF) + Math.round(255 * amount);
  var b = (num & 0x0000FF) + Math.round(255 * amount);
  r = (r > 255) ? 255 : r;
  g = (g > 255) ? 255 : g;
  b = (b > 255) ? 255 : b;
  // Convert back to hexadecimal
  return '#' + ((1 << 24) + (r << 16) + (g << 8) + b)
    .toString(16)
    .slice(1);
};
