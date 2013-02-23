if (window.screen.width < 1024 || window.screen.height < 768)
{
    var css = document.createElement("link");
    css.setAttribute("rel", "stylesheet");
    css.setAttribute("type", "text/css");
    css.setAttribute("href", 'css/ccenter/small-screen.css');
    document.getElementsByTagName("head")[0].appendChild(css);
}
