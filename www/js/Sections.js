//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id::                                                                  $:*
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
