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

function Sections()
{
    this.m_sections = new Array();
    this.m_section = '';
};

Sections.prototype.create = function()
{
    if (!this.m_section)
        this.m_section = 'Main';

    this.add(new Main('x-container'));
    this.add(new Sensors('x-container'));
    this.add(new Logs('x-container'));
    this.add(new Power('x-container'));

    this.show(this.m_section);
};

Sections.prototype.clear = function()
{
    var ctn = document.getElementById('x-container');

    while (ctn.childNodes.length > 0)
    {
        ctn.removeChild(ctn.firstChild);
    }

    this.m_sections = new Array();
};

Sections.prototype.add = function(obj)
{
    this.m_sections[obj.id()] = obj;
};

Sections.prototype.show = function(section)
{
    if (this.m_section)
        this.hideSection(this.m_section);

    this.m_section = section;
    this.showSection(this.m_section);
};

Sections.prototype.hideSection = function(section)
{
    var btn = document.getElementById(section);
    if (section == 'Main')
        btn.className = 'First';
    else
        btn.className = '';

    this.m_sections[section].element().className = 'Hidden';
};

Sections.prototype.showSection = function(section)
{
    var btn = document.getElementById(section);
    if (section == 'Main')
        btn.className = 'FirstSelected';
    else
        btn.className = 'Selected';

    this.m_sections[section].element().className = '';
    this.m_sections[section].element().style.visibility = 'visible';
};

Sections.prototype.update = function(data)
{
    for (var i in this.m_sections)
    {
        this.m_sections[i].update();
    }
};

Sections.prototype.current = function()
{
    return this.m_section;
};

var g_sections = new Sections();
