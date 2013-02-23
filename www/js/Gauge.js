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
