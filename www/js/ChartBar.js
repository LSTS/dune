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

const width_final = 240;

ChartWidget.prototype.create = function (container) {
  const canvas = document.createElement('canvas');
  const dpr = window.devicePixelRatio || 1;
  //console.log(`Container width: ${container.clientWidth}`);
  const displayWidth = width_final;
  const displayHeight = width_final/2;
  //console.log(`Creating chart with display size: ${displayWidth}x${displayHeight}`);
  canvas.style.width = displayWidth + 'px';
  canvas.style.height = displayHeight + 'px';
  canvas.style.padding = '0px';
  canvas.style.overflow = 'hidden';
  canvas.style.display = 'block';
  canvas.style.margin = 'auto auto';

  canvas.width = displayWidth * dpr;
  canvas.height = displayHeight * dpr;
  container.appendChild(canvas);
  const ctx = canvas.getContext('2d');
  ctx.scale(dpr, dpr);

  this.chart = {
    canvas: canvas,
    ctx: ctx,
    values: [],
    displayWidth: displayWidth,
    displayHeight: displayHeight
  };
};

ChartWidget.prototype.update = function (values) {
  //console.log(`Canvas width: ${this.chart.canvas.width}`);
  if (values && values.length > 0) {
    this.chart.values = values;
    const dpr = window.devicePixelRatio || 1;
    const displayWidth = width_final;
    this.chart.canvas.style.width = displayWidth + 'px';
    this.chart.canvas.width = displayWidth * dpr;
    this.chart.ctx.setTransform(1, 0, 0, 1, 0, 0); // reset transform
    this.chart.ctx.scale(dpr, dpr);
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
  const ctx = this.chart.ctx;
  const canvas = this.chart.canvas;
  const values = this.chart.values;
  const minimumValueToShow = 9;

  //const width = canvas.clientWidth - 1; // -1 to avoid scrollbar
  const width = width_final;
  const height = canvas.clientHeight;
  ctx.clearRect(0, 0, width, height);
  //console.log(`Drawing chart with ${values.length} values/cores`);
  //console.log(`Canvas size: ${width}x${height}`);
  const finalWidth = width_final;
  const barWidth = Math.floor(finalWidth / values.length);
  //console.log(`Bar width: ${barWidth}`);
  const barHeightRatio = height / 100;

  for (let i = 0; i < values.length; i++) {
    const value = values[i] || 0;

    const barColor = this.getBarColor(value);
    const x = i * barWidth;
    const barHeight = value * barHeightRatio;
    const y = height - barHeight;

    ctx.shadowColor = 'rgba(0, 0, 0, 0.15)';
    ctx.shadowBlur = 4;
    ctx.shadowOffsetX = 2;
    ctx.shadowOffsetY = 2;

    ctx.fillStyle = barColor;
    this.drawRoundedRect(ctx, x + 2, y, Math.max(0, barWidth - 4), barHeight, 4);
    ctx.fill();

    ctx.strokeStyle = 'rgba(0, 0, 0, 0.1)';
    ctx.lineWidth = 1;
    ctx.stroke();

    if (value >= minimumValueToShow) {
      ctx.fillStyle = '#000';
      ctx.font = '10px Arial';
      ctx.textAlign = 'center';
      ctx.textBaseline = 'middle';
      const textX = x + barWidth / 2;
      const textY = y + barHeight / 2;
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
