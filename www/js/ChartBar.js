//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
  this.canvas = null;
  this.legend = null;
  this.history = [];
}

ChartWidget.prototype.create = function (container) {
  const chartContainer = document.createElement('div');
  chartContainer.className = 'cpu-chart';

  const canvas = document.createElement('canvas');
  canvas.className = 'cpu-history-chart';
  chartContainer.appendChild(canvas);

  const legend = document.createElement('div');
  legend.className = 'cpu-legend';
  chartContainer.appendChild(legend);

  container.appendChild(chartContainer);
  this.chart = chartContainer;
  this.canvas = canvas;
  this.legend = legend;
};

ChartWidget.prototype.update = function (values) {
  if (!values || values.length === 0)
    return;

  const now = Date.now();
  const sample = values.map(value => Math.max(0, Math.min(100, Number(value) || 0)));
  const latest = this.history[this.history.length - 1];
  if (latest && now - latest.time < 2000)
    latest.values = sample;
  else
    this.history.push({ time: now, values: sample });

  this.history = this.history.filter(point => now - point.time <= 60000);
  this.updateLegend(sample);
  window.requestAnimationFrame(() => this.draw(now, sample.length));
};

ChartWidget.prototype.updateLegend = function (values) {
  this.legend.innerHTML = '';
  for (let i = 0; i < values.length; i++) {
    const item = document.createElement('div');
    item.className = 'cpu-legend-item';
    item.title = `CPU ${i + 1}: ${Math.round(values[i])}%`;

    const swatch = document.createElement('span');
    swatch.className = 'cpu-legend-swatch';
    swatch.style.backgroundColor = this.getCoreColor(i);

    const label = document.createElement('span');
    label.textContent = `CPU${i + 1}`;

    const value = document.createElement('span');
    value.className = 'cpu-legend-value';
    value.textContent = `${Math.round(values[i])}%`;

    item.appendChild(swatch);
    item.appendChild(label);
    item.appendChild(value);
    this.legend.appendChild(item);
  }
};

ChartWidget.prototype.draw = function (now, cpuCount) {
  const canvas = this.canvas;
  const width = Math.max(240, canvas.clientWidth);
  const height = 112;
  const dpr = window.devicePixelRatio || 1;
  canvas.width = width * dpr;
  canvas.height = height * dpr;
  const ctx = canvas.getContext('2d');
  ctx.scale(dpr, dpr);

  const styles = getComputedStyle(document.body);
  const border = styles.getPropertyValue('--border').trim();
  const muted = styles.getPropertyValue('--muted').trim();
  const left = 5;
  const right = width - 28;
  const top = 7;
  const bottom = height - 19;

  ctx.clearRect(0, 0, width, height);
  ctx.strokeStyle = border;
  ctx.fillStyle = muted;
  ctx.lineWidth = 1;
  ctx.font = '8px system-ui, sans-serif';
  ctx.textAlign = 'left';

  [0, 50, 100].forEach(value => {
    const y = bottom - (value / 100) * (bottom - top);
    ctx.beginPath();
    ctx.moveTo(left, y);
    ctx.lineTo(right, y);
    ctx.stroke();
    ctx.fillText(value + '%', right + 4, y + 3);
  });

  [60, 30, 0].forEach(seconds => {
    const x = left + (60 - seconds) / 60 * (right - left);
    ctx.beginPath();
    ctx.moveTo(x, top);
    ctx.lineTo(x, bottom);
    ctx.stroke();
    ctx.fillText(seconds === 0 ? 'now' : '-' + seconds + 's', Math.min(x + 2, right - 18), bottom + 12);
  });

  for (let cpu = 0; cpu < cpuCount; cpu++) {
    ctx.beginPath();
    ctx.strokeStyle = this.getCoreColor(cpu);
    ctx.lineWidth = 1.4;
    let started = false;
    let pointCount = 0;
    let lastX = 0;
    let lastY = 0;
    for (let i = 0; i < this.history.length; i++) {
      if (this.history[i].values[cpu] === undefined)
        continue;
      const age = Math.min(60000, now - this.history[i].time);
      const x = right - age / 60000 * (right - left);
      const y = bottom - this.history[i].values[cpu] / 100 * (bottom - top);
      lastX = x;
      lastY = y;
      pointCount++;
      if (!started) {
        ctx.moveTo(x, y);
        started = true;
      } else {
        ctx.lineTo(x, y);
      }
    }
    if (started)
      ctx.stroke();
    if (pointCount === 1) {
      ctx.beginPath();
      ctx.fillStyle = this.getCoreColor(cpu);
      ctx.arc(lastX, lastY, 2, 0, Math.PI * 2);
      ctx.fill();
    }
  }
};

ChartWidget.prototype.getCoreColor = function (index) {
  const hue = Math.round((index * 137.508) % 360);
  return `hsl(${hue}, 68%, 48%)`;
};
