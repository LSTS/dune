function findMessage(data, abbrev)
{
    for (m in data.dune_messages)
    {
        var msg = data.dune_messages[m];

        if (msg.abbrev == abbrev)
            return msg;
    }
    
    return null;
};

function getMessageValue(data, abbrev)
{
    return findMessage(data, abbrev).value;
};
