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

function dateToString(secs)
{
    var date = new Date(secs * 1000);
    var str = date.getUTCFullYear() + '-';

    var month = date.getUTCMonth() + 1;
    if (month < 10)
        str += '0';
    str += month + '-';

    if (date.getUTCDate() < 10)
        str += '0';
    str += date.getUTCDate() + ' ';

    if (date.getUTCHours() < 10)
        str += '0';
    str += date.getUTCHours() + ':';

    if (date.getUTCMinutes() < 10)
        str += '0';
    str += date.getUTCMinutes() + ':';

    if (date.getUTCSeconds() < 10)
        str += '0';
    str += date.getUTCSeconds();

    return str;
}
