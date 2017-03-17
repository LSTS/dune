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

	logbookStr = "<p>" +
	    "[" + msg.timestamp + "] - " + msg.type +
	    " " + "[" + msg.context + "] >> " +
	    msg.text +
	    "<\p>";
    }

    this.m_base.innerHTML = logbookStr;
}
