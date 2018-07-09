function Logbook(root_id)
{
    this.create('Logbook', root_id);
};

Logbook.prototype = new BasicSection;

Logbook.prototype.update = function() {
    var logbookStr = "";
    for(i in g_dune_logbook.dune_logbook) {
	var msg = g_dune_logbook.dune_logbook[i];
	
	if(msg.abbrev != "LogBookEntry")
	    continue;

	var msgType = typeAsString(msg.type);
	logbookStr = "<p class=\"" + msgType + "\">" +
	    "[" + dateToString(msg.timestamp) + "] - "
	    + msgType +
	    " " + "[" + msg.context + "] >> " +
	    msg.text +
	    "<\p>" +
	    logbookStr;
    }

    this.m_base.innerHTML = logbookStr;
}

// Returns the string format of a LogBookEntry's type
function typeAsString(typeInt) {
    var typeStr = "";
    switch (typeInt) {
    case '0':
	typeStr = "INFO";
	break;
    case '1':
	typeStr = "WARNING";
	break;
    case '2':
	typeStr = "ERROR";
	break;
    case '3':
	typeStr = "CRITICAL";
	break;
    case '4':
	typeStr = "DEBUG";
	break;
    }

    return typeStr;
}
