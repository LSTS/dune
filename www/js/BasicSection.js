//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
