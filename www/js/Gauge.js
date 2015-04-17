//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

function Gauge(reverse)
{
    this.m_type = (reverse == undefined) ? '' : 'reversed/';
}

Gauge.prototype.create = function(root)
{
    this.m_root = root;
    var tr = document.createElement('tr');
    var td = document.createElement('td');
    this.m_img = document.createElement('img');
    this.m_img.src = 'images/gauge/' + this.m_type + '0.png';

    td.appendChild(this.m_img);
    tr.appendChild(td);

    this.m_value = document.createElement('td');
    this.m_value.appendChild(document.createTextNode(''));
    tr.appendChild(this.m_value);

    var table = document.createElement('table');
    table.appendChild(tr);
    this.m_root.appendChild(table);
};

Gauge.prototype.update = function(value)
{
    this.m_value.firstChild.data = Math.round(value) + '%';
    this.m_img.src = 'images/gauge/' + this.m_type + Math.round((value / 100) * 16) + '.png';
};
