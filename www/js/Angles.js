function convertRadiansToDM(value)
{
    if (value < 0)
        value *= -1.0;

    value *= 180 / Math.PI;
    var degrees = Math.floor(value);
    var minutes = (value - degrees) * 60.0;
    return Array(degrees, minutes);
}
