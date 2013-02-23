function Icons()
{
    this.m_icons = new Array();
    this.load('normal', 'images/icons/normal.png');
    this.load('unknown', 'images/icons/unknown.png');
    this.load('warning', 'images/icons/warning.png');
    this.load('fatal', 'images/icons/fatal.png');
    this.load('error', 'images/icons/error.png');
    this.load('led_on', 'images/leds/on.png');
    this.load('led_off', 'images/leds/off.png');
}

Icons.prototype.load = function(label, path)
{
    this.m_icons[label] = new Image();
    this.m_icons[label].src = path;
};

Icons.prototype.path = function(label)
{
    return this.m_icons[label].src;  
};
