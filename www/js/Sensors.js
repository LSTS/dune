//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id::                                                                  $:*
//***************************************************************************

function Sensors(root_id)
{
    this.create('Sensors', root_id);
};

Sensors.prototype = new BasicSection;

Sensors.prototype.m_msgs = 
    {
        'Depth': { },
        'Pressure': { },
        'Temperature': { },
        'SoundSpeed': { },
        'Salinity': { },
        'Conductivity': { },
        'Current': { },
        'Voltage': { },
        'RSSI': { },
        'LinkLevel': 
        { 
          'label': 'Link Level'
        },
        'Distance':
        {
            'label': 'Altitude'
        },
        
        'Rpm': 
        {
            'label': 'RPMs'
        }
    };

Sensors.prototype.updateSubSection = function(msg)
{
    for (var i = 0; i < this.m_base.childNodes.length; i++) 
    {
	var tbl = this.m_base.childNodes[i];
        var hdr = tbl.firstChild.firstChild.firstChild.data;

        if (hdr == this.translateAbbrev(msg.abbrev))
        {
            this.updateValue(tbl, msg);
            return;    
        }
        else if (this.translateAbbrev(msg.abbrev) < hdr)
        {
            var ss = this.createSubSection(msg);
            this.m_base.insertBefore(ss, tbl);
            return;
        }
    }

    var ss = this.createSubSection(msg);
    this.m_base.appendChild(ss);
};

Sensors.prototype.translateAbbrev = function(abbrev)
{
    if ('label' in this.m_msgs[abbrev])
        return this.m_msgs[abbrev].label;
    
    return abbrev;
};

Sensors.prototype.createSubSection = function(msg)
{
    var th = document.createElement('th');
    th.colSpan = 4;
    th.appendChild(document.createTextNode(this.translateAbbrev(msg.abbrev)));

    var tr = document.createElement('tr');
    tr.appendChild(th);
    
    var tbl = document.createElement('table');
    tbl.appendChild(tr);
    
    this.updateValue(tbl, msg);

    return tbl;
};

Sensors.prototype.updateValue = function(parent, msg)
{
    var el = this.resolveEntity(msg.src_ent);

    for (var i = 1; i < parent.childNodes.length; i++) 
    {
	var tr = parent.childNodes[i];
        var ent = tr.firstChild.firstChild.data;

        if (ent == el)
        {
            this.updateField(tr, msg);
            return;
        }
        else if (el < ent)
        {
            var vn = this.createValue(msg);
            parent.insertBefore(vn, tr);
            return;
        }
    }
    
    var vn = this.createValue(msg);
    parent.appendChild(vn);
};

Sensors.prototype.createValue = function(msg)
{
    var td_label = document.createElement('td');
    td_label.appendChild(document.createTextNode(this.resolveEntity(msg.src_ent)));
    
    var td_value = document.createElement('td');
    td_value.style.width = '50px';
    td_value.appendChild(document.createTextNode(''));

    var td_desc = document.createElement('td');
    td_desc.style.textAlign = 'left';
    td_desc.appendChild(document.createTextNode(''));

    var img_status = document.createElement('img');
    img_status.src = g_icons.path('normal');

    var td_status = document.createElement('td');
    td_status.style.width = '25px';
    td_status.style.textAlign = 'center';
    td_status.style.verticalAlign = 'middle';
    td_status.appendChild(img_status);

    var tr = document.createElement('tr');
    tr.appendChild(td_label);
    tr.appendChild(td_value);    
    tr.appendChild(td_desc);    
    tr.appendChild(td_status);    

    this.updateField(tr, msg);

    return tr;
};

Sensors.prototype.updateField = function(root, msg)
{
    var state = this.getEntityStateState(msg);

    if ((g_data.dune_time_current - msg.time) > 10.0)
    {
        root.childNodes[2].firstChild.data = 'inactive';
        root.childNodes[3].firstChild.src = this.getEntityStateIcon(state);
        if (!state)
            state = 2;
    }
    else
    {
        root.childNodes[2].firstChild.data = this.getEntityStateDesc(msg, 'active');
        if (!state)
            state = 1;
    }

    if (state)
    {
        root.childNodes[3].firstChild.src = this.getEntityStateIcon(state);    
    }


    root.childNodes[1].firstChild.data = Number(msg.value).toFixed(2);
};

Sensors.prototype.update = function()
{
    for (var i in g_data.dune_messages)
    {
        var msg = g_data.dune_messages[i];
        if (msg.abbrev in this.m_msgs)
        {
            this.updateSubSection(msg);
        }
    }
};
