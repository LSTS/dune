//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

HTTP = new Object();

HTTP.m_factories = 
    [
        function()
        {
            return new XMLHttpRequest(); 
        },
        
        function() 
        {
            return new ActiveXObject("Msxml2.XMLHTTP"); 
        },
        
        function() 
        {
            return new ActiveXObject("Microsoft.XMLHTTP"); 
        }
    ];

HTTP.m_factory = null;

HTTP.newRequest = function() 
{
    if (HTTP.m_factory != null)
        return HTTP.m_factory();
    
    for (var i = 0; i < HTTP.m_factories.length; i++) 
    {
        try 
        {
            var factory = HTTP.m_factories[i];
            var request = factory();
            if (request != null) 
            {
                HTTP.m_factory = factory;
                return request;
            }
        }
        catch(e) 
        {
            continue;
        }
    }

    HTTP.m_factory = function() 
    {
        throw new Error("XMLHttpRequest not supported");
    };

    HTTP.m_factory();
};

HTTP._getResponse = function(request) 
{
    return request.responseText;
};

HTTP.get = function(url, callback, options) 
{
    var request = HTTP.newRequest();
    var n = 0;
    var timer;
    if (options.timeout)
        timer = setTimeout(
            function() 
            {
                request.abort();
                if (options.timeoutHandler)
                    options.timeoutHandler(url);
            },
            options.timeout);

    request.onreadystatechange = function() 
    {
        if (request.readyState == 4) 
        {
            if (timer)
                clearTimeout(timer);
            
            if (request.status == 200) 
            {
                callback(HTTP._getResponse(request), options.callback_data);
            }
            else 
            {
                try
                {
                    if (options.errorHandler)
                        options.errorHandler(request.status, request.statusText);
                    else
                        callback(null);
                }
                catch (e)
                {
                    if (options.errorHandler)
                        options.errorHandler('', '');
                    
                }
            }
        }
        else if (options.progressHandler) 
        {
            options.progressHandler(++n);
        }
    };
    
    var target = url;
    if (options.parameters)
        target += "?" + HTTP.encodeFormData(options.parameters);

    request.open("GET", target);
    request.send(null);
};
