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

function BasicSection()
{ };

BasicSection.prototype.create = function(id, root_id)
{
    this.m_base = document.createElement('div');
    this.m_base.id = id;
    this.m_base.width = '100%';
    this.m_base.className = 'Hidden';

    this.m_root_id = root_id;
    this.m_root = document.getElementById(root_id);
    this.m_root.appendChild(this.m_base);
};

BasicSection.prototype.createHeader = function(label)
{
    var h1 = document.createElement('h1');
    h1.appendChild(document.createTextNode(label));
    this.m_base.appendChild(h1);
    var hr = document.createElement('hr');
    this.m_base.appendChild(hr);
};

BasicSection.prototype.element = function()
{
    return this.m_base;
};

BasicSection.prototype.resolveEntity = function(id)
{
    var ent = g_data.dune_entities[id];

    if (typeof ent == 'undefined')
        return "Unknown";

    return ent.label;
};

BasicSection.prototype.getEntityStateState = function(msg)
{
    var ent = g_data.dune_entities[msg.src_ent];

    if (typeof ent == 'undefined')
        return "Unknown";

    return ent.state;
};

BasicSection.prototype.getEntityStateDesc = function(msg, defval)
{
    if (msg.src_ent in g_data.dune_entities)
    {
        if ('desc' in g_data.dune_entities[msg.src_ent])
            return g_data.dune_entities[msg.src_ent].desc;
    }

    return defval;
};

BasicSection.prototype.findMessage = function(abbrev)
{
    for (var i in g_data.dune_messages)
    {
        var msg = g_data.dune_messages[i];

        if (msg.abbrev == abbrev)
            return msg;
    }

    return null;
};

BasicSection.prototype.getMessageValue = function(abbrev)
{
    return this.findMessage(abbrev).value;
};

BasicSection.prototype.getEntityStateIcon = function(state)
{
    switch (Number(state))
    {
    case 0:
        return g_icons.path('warning');
    case 1:
        return g_icons.path('normal');
    case 2:
        return g_icons.path('error');
    case 3: case 4:
        return g_icons.path('error');
    case 5:
        return g_icons.path('fatal');
    }

    return g_icons.path('unknown');
};

BasicSection.prototype.id = function()
{
    return this.m_base.id;
};
