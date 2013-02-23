function Power(root_id)
{
    this.create('Power', root_id);

    // Subpanel.
    this.m_sbase = document.createElement('div');
    this.m_sbase.width = '100%';

    // Save button.
    var btn = document.createElement('input');
    btn.type = 'button';
    btn.onclick = function() { submitPowerForm(255, 'save', 0); };
    btn.value = 'Save State';

    this.m_base.appendChild(this.m_sbase);
    this.m_base.appendChild(btn);
};

Power.prototype = new BasicSection;

Power.prototype.updateEntry = function(msg)
{
    for (var i = 0; i < this.m_sbase.childNodes.length; i++) 
    {
        var child = this.m_sbase.childNodes[i];
        var label = child.firstChild.firstChild.firstChild.data;

        if (label == msg.label)
        {
            this.updateValue(child, msg);
            return;    
        }
        else if (msg.label < label)
        {
            var ne = this.createEntry(msg);
            this.m_sbase.insertBefore(ne, child);
            return;
        }
    }

    var ne = this.createEntry(msg);
    this.m_sbase.appendChild(ne);
};

Power.prototype.updateValue = function(root, msg)
{
    var base = root.childNodes[1].firstChild.firstChild;

    if (msg.state == 0)
    {
        base.childNodes[0].disabled = false;
        base.childNodes[1].disabled = true;
    }
    else
    {
        base.childNodes[0].disabled = true;
        base.childNodes[1].disabled = false;
    }
};

Power.prototype.createEntry = function(msg)
{
    // Header.
    var th = document.createElement('th');
    th.colSpan = 2;
    th.appendChild(document.createTextNode(msg.label));
    var tr = document.createElement('tr');
    tr.appendChild(th);
    
    // Controls.
    var ctr = document.createElement('tr');

    var form = document.createElement('form');
    form.id = 'PowerChannelForm' + msg.id; 
    var btd = document.createElement('td');
    btd.appendChild(form);

    this.appendButton(form, msg.id, 'on', 'Turn On');
    this.appendButton(form, msg.id, 'off', 'Turn Off');
    this.appendInput(form, form.id, 'Hours', 'hour(s)');
    this.appendInput(form, form.id, 'Minutes', 'minute(s)');
    this.appendInput(form, form.id, 'Seconds', 'second(s)');
    this.appendButton(form, msg.id, 'sched_on', 'Schedule On');
    this.appendButton(form, msg.id, 'sched_off', 'Schedule Off');
    this.appendButton(form, msg.id, 'reset', 'Reset Schedules');

    ctr.appendChild(btd);
    
    // Table.
    var tbl = document.createElement('table');
    tbl.appendChild(tr);
    tbl.appendChild(ctr);

    this.updateValue(tbl, msg);

    return tbl;
};

Power.prototype.appendButton = function(root, channel, op, label)
{
    var btn = document.createElement('input');
    btn.type = 'button';
    btn.onclick = function() { submitPowerForm(channel, op, root.id); };
    btn.value = label;
    root.appendChild(btn);
};

Power.prototype.appendInput = function(root, form_id, id, label)
{
    var einput = document.createElement('input');
    einput.id = form_id + id;
    einput.type = 'text';
    einput.value = '0';
    einput.size = 5;
    root.appendChild(einput);
    
    var etext = document.createTextNode(label);
    root.appendChild(etext);
};

Power.prototype.update = function()
{
    for (var i in g_data.dune_messages)
    {
        var msg = g_data.dune_messages[i];
        if (msg.abbrev != 'PowerChannelState')
            continue;

        this.updateEntry(msg);
    }
};

function handlePower(text)
{
}

function submitPowerForm(channel, op, id)
{
    var url = 'dune/power/channel/' + op + '/' + channel;

    if (op == 'sched_on' || op == 'sched_off')
    {
        var h = document.getElementById(id + 'Hours').value;
        var m = document.getElementById(id + 'Minutes').value;
        var s = document.getElementById(id + 'Seconds').value;
        url += '/' + h + '/' + m + '/' + s; 
    }

    var options = Array();
    options.timeout = 10000;
    options.timeoutHandler = null;
    options.errorHandler = null;
    HTTP.get(url, handlePower, options);
}
