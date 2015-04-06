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

function Logs(root_id)
{
    this.create('Logs', root_id);
    this.m_tbl = document.createElement('table');

    var ldr = document.createElement('table');
    ldr.marginLeft = 'auto';
    ldr.marginRight = 'auto';

    var tr = document.createElement('tr');
    var td = document.createElement('td');

    var img = document.createElement('img');
    img.marginLeft = 'auto';
    img.marginRight = 'auto';
    img.src = 'images/progress.gif';
    td.appendChild(img);
    td.appendChild(document.createElement('br'));
    td.appendChild(document.createTextNode('Loading...'));

    ldr.appendChild(tr);
    tr.appendChild(td);

    this.m_base.appendChild(ldr);

    this.m_base.appendChild(this.m_tbl);

};

Logs.prototype = new BasicSection;

Logs.prototype.update = function()
{
    if (!g_dune_logs)
        return;

    for (var i in g_dune_logs)
    {
        var r = this.createFolder(i, g_dune_logs[i]);
        this.m_tbl.appendChild(r);
    }

    // var ul = document.createElement('ul');
    // for (var i in g_dune_logs)
    // {
    //     var li = document.createElement('li');
    //     li.appendChild(document.createTextNode(i));
    //     ul.appendChild(li);

    //     var cul = document.createElement('ul');
    //     for (var j in g_dune_logs[i])
    //     {
    //         var cli = document.createElement('li');
    //         cli.appendChild(document.createTextNode(g_dune_logs[i][j].file));
    //         cul.appendChild(cli);
    //     }
    //     li.appendChild(cul);
    // }

    // this.m_base.appendChild(ul);

    g_dune_logs = null;
};

Logs.prototype.createFolder = function(root, tree)
{
    var td = document.createElement('td');
    td.appendChild(document.createTextNode(root));

    // for (var i in tree)
    // {
    //     var e = this.createFile(tree[i].file);
    // }

    var tr = document.createElement('tr');
    tr.appendChild(td);

    return tr;
};

Logs.prototype.createFile = function(root)
{
    var li = document.createElement('li');
    li.appendChild(document.createTextNode(i));
    ul.appendChild(li);
};
