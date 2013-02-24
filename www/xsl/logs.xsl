<?xml version="1.0" encoding="UTF-8"?>

<!--
****************************************************************************
* Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
* Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
****************************************************************************
* This file is part of DUNE: Unified Navigation Environment.               *
*                                                                          *
* Commercial Licence Usage                                                 *
* Licencees holding valid commercial DUNE licences may use this file in    *
* accordance with the commercial licence agreement provided with the       *
* Software or, alternatively, in accordance with the terms contained in a  *
* written agreement between you and Universidade do Porto. For licensing   *
* terms, conditions, and further information contact lsts@fe.up.pt.        *
*                                                                          *
* European Union Public Licence - EUPL v.1.1 Usage                         *
* Alternatively, this file may be used under the terms of the EUPL,        *
* Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
* included in the packaging of this file. You may not use this work        *
* except in compliance with the Licence. Unless required by applicable     *
* law or agreed to in writing, software distributed under the Licence is   *
* distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
* ANY KIND, either express or implied. See the Licence for the specific    *
* language governing permissions and limitations at                        *
* https://www.lsts.pt/dune/licence.                                        *
****************************************************************************
* Author: Ricardo Martins                                                  *
****************************************************************************
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
