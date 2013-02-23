//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

function TextLabel()
{ }

TextLabel.prototype.create = function(root)
{
    this.m_root = root;
    var txt = document.createTextNode('');
    this.m_root.appendChild(txt);
};

TextLabel.prototype.update = function(value)
{
    this.m_root.firstChild.data = value;
};
