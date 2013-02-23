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
