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
