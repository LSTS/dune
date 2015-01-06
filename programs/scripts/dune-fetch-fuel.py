# -*- coding: utf-8 -*-
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
# Author: Pedro Calado                                                     #
############################################################################

import sys
import os

exp_labels = "OP Mode Labels";
exp_values = "OP Mode Values";

#function for printing labels
def insertList( copy, num_spaces, list, exp ):
    copy.write(exp);
    for num in range(1, num_spaces):
        copy.write(' ')

    copy.write('= ')
    copy.write(list[0])

    for num in range(1, len(list)):
        copy.write(",\n")
        for i in range(1, len(exp) + num_spaces + 2):
            copy.write(' ')
        copy.write(list[num])

    copy.write('\n')

def manipIni(myfile, labels_list, values_list):
    # Open ini file
    fo = open(sys.argv[1] + myfile + ".ini", "r")

    copy = open(sys.argv[1] + myfile + "_copy.ini", "w")

    wrote_labels = False;
    wrote_values = False;
    filt = False;

    num_spaces = 0;

    while (True):
        str1 = fo.readline();
        if (str1 == ""):
            # print("EOF")
            break

        ind_labels = str1.find(exp_labels);
        ind_values = str1.find(exp_values);

        if (ind_labels != -1 and wrote_labels == False):
            num_spaces = str1.find('=') - len(exp_labels) + 1;
            insertList(copy, num_spaces, labels_list, exp_labels)
            wrote_labels = True;
            filt_labels = True;
        elif (ind_values != -1 and wrote_values == False):
            num_spaces = str1.find('=') - len(exp_values) + 1;
            insertList(copy, num_spaces, values_list, exp_values)
            wrote_values = True;
            filt_values = True;
        elif (wrote_labels and filt_labels):
            if (str1[0] == ' ' and str1[1] == ' '):
                # print("inserting empty line")
                continue
            else:
                copy.write(str1);
                filt_labels = False;
        elif (wrote_values and filt_values):
            if (str1[0] == ' ' and str1[1] == ' '):
                # print("inserting empty line")
                continue
            else:
                copy.write(str1);
                filt_values = False;
        else:
            copy.write(str1);

    # Close
    copy.close()
    fo.close()

    os.rename(sys.argv[1] + myfile + "_copy.ini", sys.argv[1] + myfile + ".ini")
    print("Wrote file " + myfile + ".ini with " + str(len(labels_list)) + " profiles.");

def isnotempty(str):
    return (str and not str.isspace());

import gspread
import getpass

if len(sys.argv) < 2:
    print("This script will fetch power consumption profiles from ", end="")
    print("a google spreadsheet accessible only by an LSTS Gmail ", end="")
    print("account.")
    print("Usage: %s <path_to_etc_folder>" % sys.argv[0])
    sys.exit(1)

print("Please provide an LSTS gmail account");

username = input("Email: ")
pw = getpass.getpass("Password: ")

gc = gspread.login(username, pw)

sheet_key = '0AuuKRsFdqSvddEtXa0dORER6OGlvYk9mMTV4VndwWVE'

print("Opening sheet " + sheet_key)

sh = gc.open_by_key(sheet_key)

worksheet = sh.get_worksheet(0)

print("Starting to fetch data...")

ce_gear = worksheet.find("Vehicles Gear")
ce_total = worksheet.find("Total (in Watt)")

i = 0;
while (True):
    value = worksheet.cell(ce_gear.row + 1, ce_gear.col + i).value
    if (isnotempty(value)):
        i = i + 1;
    else:
        break

# List of vehicles and profiles
vlist = [];
prlist = [];
polist = [];

# Crawl profiles
vehicle_index = ce_gear.col + i + 1;

while (True):
    print("Fetching profile...")
    vehicle = worksheet.cell(ce_gear.row, vehicle_index).value;
    if (not isnotempty(vehicle)):
        print(" -> no more profiles left.")
        break

    vlist.append(vehicle)
    j = 0;
    profile_list = [];
    power_list = [];

    while (True):
        temp_prof = worksheet.cell(ce_gear.row + 1, vehicle_index + j).value
        if (isnotempty(temp_prof)):
            profile_list.append(temp_prof)
            power_list.append(worksheet.cell(ce_total.row, vehicle_index + j).value)
            j = j + 1;
        else:
            break

    vehicle_index = vehicle_index + j + 1;
    prlist.append(profile_list)
    polist.append(power_list)
    print(" -> " + vehicle + ".")

for num in range(len(vlist)):
    # print(vlist[num])
    # print(prlist[num])
    # print(polist[num])
    manipIni(vlist[num], prlist[num], polist[num])
