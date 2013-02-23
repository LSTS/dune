<?xml version="1.0" encoding="UTF-8"?>

<!--
   *****************************************************************************
   * Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  *
   * Departamento de Engenharia Electrotécnica e de Computadores               *
   * Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           *
   *****************************************************************************
   * Author: Ricardo Martins                                                   *
   *****************************************************************************
   * $Id::                                                                   $:*
   *****************************************************************************
  -->

<xsl:stylesheet
   xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
   version="1.0">

  <xsl:output method="html"
              doctype-system="http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"
              doctype-public="-//W3C//DTD XHTML 1.0 Strict//EN"/>

  <xsl:template match="/logs">
    <html>
      <head>
        <title>Log List</title>
        <link rel="stylesheet" type="text/css" href="/css/default.css"/>        
      </head>
      <body>
        <table>
          <tr>
            <th>File</th>
            <th>Size</th>
          </tr>
          <xsl:apply-templates/>
        </table>
      </body>
    </html>
  </xsl:template>

  <xsl:template name="link">
    <xsl:element name="a">
      <xsl:attribute name="href">
        <xsl:value-of select="@link"/>
      </xsl:attribute>
      <xsl:value-of select="@name"/>
    </xsl:element>
  </xsl:template>

  <xsl:template name="size">
    <xsl:if test="@size &lt; 1024">
      <xsl:value-of select="@size"/><xsl:text>B</xsl:text>
    </xsl:if>
    <xsl:if test="@size &gt;= 1024 and @size &lt; 1048576">
      <xsl:value-of select="round((@size div 1024) * 10) div 10"/><xsl:text> KiB</xsl:text>
    </xsl:if>
    <xsl:if test="@size &gt;= 1048576">
      <xsl:value-of select="round((@size div 1048576) * 10) div 10"/><xsl:text> MiB</xsl:text>
    </xsl:if>
  </xsl:template>

  <xsl:template match="log[position() mod 2 = 1]">
    <tr class="odd">
      <td><xsl:call-template name="link"/></td>
      <td class="size"><xsl:call-template name="size"/></td>
    </tr>
  </xsl:template>

  <xsl:template match="log">
    <tr class="even">
      <td><xsl:call-template name="link"/></td>
      <td class="size"><xsl:call-template name="size"/></td>
    </tr>
  </xsl:template>

</xsl:stylesheet>
