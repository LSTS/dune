############################################################################
# This Python file uses the following encoding: utf-8                      #
############################################################################
# Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

import sys
from odf.opendocument import OpenDocumentText
from odf.style import Style, TextProperties, TableColumnProperties, ParagraphProperties, PageLayout, PageLayoutProperties
from odf.text import TableOfContent, TableOfContentSource, H, P, Span, List, ListItem, BookmarkRef, BookmarkStart, BookmarkEnd
from odf.table import Table, TableColumn, TableRow, TableCell

def h1(doc, text, bookmark = None):
    e = H(outlinelevel = 1, text = text)
    if bookmark is not None:
        e.addElement(Bookmark(name = bookmark))
    doc.text.addElement(e)

def h2(doc, text, bookmark = None):
    e = H(outlinelevel = 2, text = text)
    if bookmark is not None:
        e.addElement(Bookmark(name = bookmark))
    doc.text.addElement(e)

def h3(doc, text, bookmark = None):
    e = H(outlinelevel = 3)
    if bookmark is not None:
        e.addElement(BookmarkStart(name = bookmark))
    e.addText(text)
    if bookmark is not None:
        e.addElement(BookmarkEnd(name = bookmark))
    doc.text.addElement(e)

def p(doc, text):
    e = P(text = text)
    doc.text.addElement(e)

def page_break(doc):
    doc.text.addElement(P(stylename = 'PageBreak', text = ''))

def bold(p, text):
    p.addElement(Span(text = text, stylename = 'TextBold'))

##########################################################################
# Values.
##########################################################################

def do_values(doc, values):
    if values is None:
        return None

    lst = List()

    for v in values.findall('value'):
        p = P(stylename='TextBold')
        bold(p, v.attrib['name'] + ': ')
        p.addText(v.find('doc').text)
        item = ListItem()
        item.addElement(p)
        lst.addElement(item)

    return lst

##########################################################################
# Arguments.
##########################################################################
def do_args(doc, args):
    if args is None:
        return

    table = Table(name = "Table 1")
    table.addElement(TableColumn(numbercolumnsrepeated = '3', stylename = 'TableAutoWidth'))

    tr = TableRow(stylename = 'TableAutoWidth')
    table.addElement(tr)

    tc = TableCell(valuetype = "string", stylename = 'Table Heading')
    tc.addElement(P(text = 'Name'))
    tr.addElement(tc)

    tc = TableCell(valuetype = "string", stylename = 'Table Heading')
    tc.addElement(P(text = 'Type'))
    tr.addElement(tc)

    tc = TableCell(valuetype = "string", stylename = 'Table Heading')
    tc.addElement(P(text = 'Description'))
    tr.addElement(tc)

    for t in args.findall('arg'):
        tr = TableRow(stylename = 'TableAutoWidth')
        table.addElement(tr)

        # Name.
        tc = TableCell(valuetype = "string", stylename = 'Table Contents')
        tc.addElement(P(text = t.attrib['name']))
        tr.addElement(tc)

        # Type.
        tc = TableCell(valuetype = "string", stylename = 'Table Contents')
        tname = t.attrib['type'].strip()
        if tname == 'List':
            refs = []

            for subtype in t.findall('types/type'):
                stname = subtype.attrib['name']
                ref = BookmarkRef(referenceformat = 'text', refname = stname)
                ref.addText(stname)
                refs.append(ref)

            if len(refs) == 1:
                c = P(text = 'List of ')
                c.addElement(refs[0])
                tc.addElement(c)
            else:
                c = P(text = 'List of: ')
                tc.addElement(c)

                lst = List()
                for r in refs:
                    item_p = P()
                    item_p.addElement(r)
                    item = ListItem()
                    item.addElement(item_p)
                    lst.addElement(item)
                tc.addElement(lst)

        else:
            ref = BookmarkRef(referenceformat = 'text', refname = tname)
            ref.addText(tname)
            c = P()
            c.addElement(ref)
            tc.addElement(c)

        tr.addElement(tc)

        # Description.
        tc = TableCell(valuetype = "string", stylename = 'Table Contents')
        tr.addElement(tc)
        desc = t.find('doc').text
        if 'value' in t.attrib:
            desc += 'This argument has a fixed value of %s.' % t.attrib['value']
        tc.addElement(P(text = desc))

        lst = do_values(doc, t.find('values'))
        if lst is not None:
            tc.addElement(lst)

    doc.text.addElement(table)

##########################################################################
# Argument Types.
##########################################################################
def do_arg_types(doc, types):
    p(doc, types.find('doc').text)

    for t in types.findall('type'):
        name = t.attrib['name']
        h3(doc, name, t.attrib['name'])
        p(doc, t.find('doc').text)
        lst = do_values(doc, t.find('values'))
        if lst is not None:
            doc.text.addElement(lst)

        do_args(doc, t.find('args'))

##########################################################################
# Command.
##########################################################################
def do_command(doc, cmd):
    h2(doc, cmd.attrib['name'])
    p(doc, cmd.find('doc').text)

    h3(doc, 'Arguments')
    if cmd.find('args') is None:
        p(doc, 'This command has no arguments.')
    else:
        do_args(doc, cmd.find('args'))

# Destination/build folder.
xml = sys.argv[1]
odf = xml.replace('.xml', '.odf')

import xml.etree.ElementTree as ET
tree = ET.ElementTree()
root = tree.parse(xml)

# ODF Document.
doc = OpenDocumentText()

# Page break style.
s = Style(name="PageBreak", parentstylename="Standard", family="paragraph")
s.addElement(ParagraphProperties(breakbefore = "page"))
doc.automaticstyles.addElement(s)

# Bold text.
s = Style(name="TextBold", family="text")
s.addElement(TextProperties(fontweight="bold",fontweightasian="bold",
                            fontweightcomplex="bold"))
doc.automaticstyles.addElement(s)

s = Style(name="AutoWidth", family="table-column")
s.addElement(TableColumnProperties(useoptimalcolumnwidth = "true"))
doc.automaticstyles.addElement(s)

s = Style(name="NameWidth", family="table-column")
s.addElement(TableColumnProperties(columnwidth="1cm"))
doc.automaticstyles.addElement(s)

s = Style(name="TableAutoWidth", family="table-column")
s.addElement(TableColumnProperties(useoptimalcolumnwidth='true'))
doc.styles.addElement(s)

# TOC.
toc = TableOfContent(name = 'toc')
toc.addElement(TableOfContentSource(outlinelevel = '2', useindexmarks = 'false'))
doc.text.addElement(toc)
page_break(doc)

# Introduction.
h1(doc, 'Introduction')
p(doc, root.find('doc').text)
page_break(doc)

# Argument types.
h1(doc, 'Arguments Types')
do_arg_types(doc, root.find('types'))
page_break(doc)

# Command structure.
h1(doc, 'Command Structure')

# Header.
h2(doc, 'Header')
p(doc, root.find('header/doc').text)
do_args(doc, root.find('header/args'))

# Footer.
h2(doc, 'Footer')
p(doc, root.find('footer/doc').text)
do_args(doc, root.find('footer/args'))
page_break(doc)

# Groups.
for group in root.findall('group'):
    h1(doc, group.attrib['name'])
    p(doc, group.find('doc').text)
    for cmd in group.findall('command'):
        do_command(doc, cmd)
    page_break(doc)

doc.save(odf)
