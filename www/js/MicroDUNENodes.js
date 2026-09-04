// MicroDUNE private-node status section.
function MicroDUNENodes(root_id) {
  this.create('MicroDUNENodes', root_id);
  this.createHeader('Nodes');
  this.m_summary = document.createElement('p');
  this.m_table = document.createElement('table');
  this.m_table.className = 'Info NodesTable';
  this.m_base.appendChild(this.m_summary);
  this.m_base.appendChild(this.m_table);
};

MicroDUNENodes.prototype = new BasicSection;

MicroDUNENodes.prototype.gatewayDescription = function () {
  if (!g_data || !g_data.dune_entities || !g_data.dune_messages)
    return null;

  for (var i in g_data.dune_messages) {
    var msg = g_data.dune_messages[i];
    if (msg.abbrev != 'EntityState')
      continue;

    var entity = g_data.dune_entities[msg.src_ent];
    if (entity && entity.label == 'MicroDUNE Gateway')
      return msg.description;
  }

  return null;
};

MicroDUNENodes.prototype.update = function () {
  var description = this.gatewayDescription();
  var menu = document.getElementById('MicroDUNENodes');
  this.m_table.innerHTML = '';

  if (!description) {
    this.m_summary.textContent = 'MicroDUNE gateway is not enabled.';
    menu.style.display = 'none';
    return;
  }

  // The gateway's EntityState intentionally contains only the active-node
  // count.  Nodes are discovered from the proxy entity labels it creates.
  var nodes = {};
  for (var id in g_data.dune_entities) {
    var entity = g_data.dune_entities[id];
    if (!entity || !entity.label)
      continue;

    var match = entity.label.match(/^([^/]+(?: \[[^\]]+\])?)\/(.+)$/);
    if (!match)
      continue;

    if (!nodes[match[1]])
    nodes[match[1]] = { name: match[1], entities: [], online: false };

    nodes[match[1]].entities.push({ name: match[2], state: entity.state });
    // EntityState::ESTA_NORMAL is 1. Any recent normal state means that the
    // corresponding module is currently publishing through the gateway.
    if (entity.state == 1)
      nodes[match[1]].online = true;
  }

  var names = Object.keys(nodes).sort();
  this.m_summary.textContent = description;
  var hasNodes = names.length != 0;
  menu.style.display = hasNodes ? '' : 'none';
  if (!hasNodes)
    return;

  var header = document.createElement('tr');
  ['Node / IP', 'Entities', 'State'].forEach(function (label) {
    var cell = document.createElement('th');
    cell.appendChild(document.createTextNode(label));
    header.appendChild(cell);
  });
  this.m_table.appendChild(header);

  for (var i = 0; i < names.length; ++i) {
    var node = nodes[names[i]];
    var state = node.online ? 'online' : 'offline';
    var row = document.createElement('tr');
    var name = document.createElement('strong');
    name.appendChild(document.createTextNode(node.name));
    var entityList = document.createElement('div');
    entityList.className = 'NodeEntities';
    node.entities.sort(function (a, b) {
      return a.name.localeCompare(b.name);
    }).forEach(function (entityInfo) {
      var badge = document.createElement('span');
      var stateClass = 'Unknown';
      if (entityInfo.state == 1)
        stateClass = 'Normal';
      else if (entityInfo.state == 2)
        stateClass = 'Warning';
      else if (entityInfo.state >= 3)
        stateClass = 'Error';
      badge.className = 'NodeEntityBadge ' + stateClass;
      badge.title = 'Entity state: ' + stateClass.toLowerCase();
      badge.appendChild(document.createTextNode(entityInfo.name));
      entityList.appendChild(badge);
    });
    [name, entityList, state].forEach(function (value) {
      var cell = document.createElement('td');
      if (typeof value == 'string')
        cell.appendChild(document.createTextNode(value));
      else
        cell.appendChild(value);
      row.appendChild(cell);
    });
    row.className = node.online ? 'Normal' : 'Error';
    this.m_table.appendChild(row);
  }
};
