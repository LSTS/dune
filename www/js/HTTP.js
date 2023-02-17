//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
