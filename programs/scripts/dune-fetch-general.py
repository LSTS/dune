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
# Author: José Braga                                                       #
############################################################################

import sys
import os
import json
import gspread
from oauth2client.client import SignedJwtAssertionCredentials

# general parameters section
c_section = "[General]"

# general parameters labels
c_hotel_label = "Power Model -- Hotel Load";
c_imu_label = "Power Model -- IMU Power";
c_payload_label = "Power Model -- Payload Powers";

# fuel monitor profiles and labels
c_profiles = ["Hotel", "Full"]
c_profile_labels = "OP Mode Labels";
c_profile_values = "OP Mode Values";

# drive sheets
c_vehicles = "Vehicles";

def isnotempty(str):
    return (str and not str.isspace());

def isempty(str):
    return (not isnotempty(str));

def matchOption(str, options):
    for num in range(len(options)):
        if (str.find(options[num]) != -1):
            return num;
    return -1;

# check if line is a configuration section.
def isSection(str):
    if (str[0] == '['):
        if (str.find(']') != -1):
            return True;
    return False;

# write general parameters labels.
def write_op(my_str, copy, equal_pos):
    if (equal_pos <= len(my_str)):
        tow = my_str + ' = ';
    else:
        tow = my_str + ((equal_pos - len(my_str)) * ' ') + '= ';

    copy.write(tow);

# write general parameters values.
def write_values(option_list, values_list, copy, equal_pos):
    for op in range(len(option_list)):
        if (isempty(values_list[op][0])):
            continue;

        write_op(option_list[op], copy, equal_pos);
        copy.write(values_list[op][0]);
        if (len(values_list[op]) > 1):
            for vind in range(1, len(values_list[op])):
                if (isempty(values_list[op][vind])):
                    break
                copy.write(', ' + values_list[op][vind]);

        copy.write('\n');

# write fuel monitor profiles.
def write_profiles(copy, num_spaces, list, exp):
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

def editGeneral(vname, option_list, values_list):
    # Open ini file
    try:
        fo = open(sys.argv[2] + vname + ".ini", "r")
    except:
        print("File " + sys.argv[2] + vname + ".ini not found.")
        return

    copy = open(sys.argv[2] + vname + "_copy.ini", "w")

    edit_done = False;
    wrote_all = False;
    found_sec = False;
    in_match = False;
    num_spaces = 0;

    while (True):
        str1 = fo.readline();
        if (str1 == ""):
            # print("EOF")
            break

        if (found_sec == False):
            ind_general = str1.find(c_section);

            if (ind_general != -1):
                found_sec = True;
        elif (wrote_all == False):
            mat = matchOption(str1, option_list);
            if (mat != -1):
                equal_pos = str1.find('=');
                # write everything here
                write_values(option_list, values_list, copy, equal_pos);
                wrote_all = True;
            continue;
        elif (edit_done == False):
            if (isSection(str1)):
                edit_done == True;
            elif (matchOption(str1, option_list) != -1):
                in_match = True;
                continue;
            elif (in_match):
                if (str1[0] == ' ' and str1[1] == ' '):
                    continue;
                else:
                    in_match = False;

        copy.write(str1);

    copy.close()
    fo.close()

    os.rename(sys.argv[2] + vname + "_copy.ini", sys.argv[2] + vname + ".ini")

def editFuel(vname, labels_list, values_list):
    # Open ini file
    try:
        fo = open(sys.argv[2] + vname + ".ini", "r")
    except:
        print("File " + sys.argv[2] + vname + ".ini not found.")
        return

    fo = open(sys.argv[2] + vname + ".ini", "r")
    copy = open(sys.argv[2] + vname + "_copy.ini", "w")
    wrote_labels = False;
    wrote_values = False;
    filt = False;
    num_spaces = 0;

    while (True):
        str1 = fo.readline();
        if (str1 == ""):
            # print("EOF")
            break

        ind_labels = str1.find(c_profile_labels);
        ind_values = str1.find(c_profile_values);

        if (ind_labels != -1 and wrote_labels == False):
            num_spaces = str1.find('=') - len(c_profile_labels) + 1;
            write_profiles(copy, num_spaces, labels_list, c_profile_labels)
            wrote_labels = True;
            filt_labels = True;
        elif (ind_values != -1 and wrote_values == False):
            num_spaces = str1.find('=') - len(c_profile_values) + 1;
            write_profiles(copy, num_spaces, values_list, c_profile_values)
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

    copy.close()
    fo.close()

    os.rename(sys.argv[2] + vname + "_copy.ini", sys.argv[2] + vname + ".ini")

def getsubgrid(x1, y1, x2, y2, grid):
    return [item[x1:x2] for item in grid[y1:y2]]

def computeProfiles(options, values_list):
    hotel = 0;
    imu = 0;
    payload = 0;
    for num in range(len(options)):
        if (options[num] == c_hotel_label):
            hotel = float(values_list[num][0])
        if (options[num] == c_imu_label):
            imu = float(values_list[num][0])
        if (options[num] == c_payload_label):
            if (len(values_list[num]) > 1):
                for vind in range(0, len(values_list[num])):
                    if (isempty(values_list[num][vind])):
                        break
                    payload = payload + float(values_list[num][vind])
    return [str(hotel), str("{0:.2f}".format(hotel + payload + imu))];

# Main body
if len(sys.argv) < 3:
    print("This script will fetch general parameters from ", end="")
    print("a google spreadsheet accessible only by an LSTS Gmail ", end="")
    print("account.")
    print("Usage: %s <path_to_drive_credential> <path_to_etc_folder>" % sys.argv[0])
    sys.exit(1)

# use credentials to login into account.
json_key = json.load(open(sys.argv[1]))
scope = ['https://spreadsheets.google.com/feeds']
credentials = SignedJwtAssertionCredentials(json_key['client_email'], bytes(json_key['private_key'], 'utf-8'), scope)
gc = gspread.authorize(credentials)
gc.login()

# open sheet.
sheet_key = '1QzYqLM1v3n09juTqroZnJrv9Wklenw2vAEUo09Cy6Wk'
print("Opening sheet " + sheet_key)
sh = gc.open_by_key(sheet_key)

# Get data.
print("Starting to fetch data...")
ws = sh.worksheet(c_vehicles);

# Get values of the whole list
all_values = ws.get_all_values()

profile_cols = [];
first_row = all_values[0];

for p in range(len(first_row)):
    # ignore the very first
    if (p == 0):
        continue;

    if (isnotempty(first_row[p])):
        profile_cols.append(int(p));

print('Fetching profiles:')
#for i in range(len(profile_cols)):
#    print(first_row[profile_cols[i]])

# Get options, which are config ini Options
options = [];

first_col = [item[0] for item in all_values]
start_row = 1;

for i in range(start_row, len(first_col)):
    options.append(first_col[i]);

# iterate each vehicle.
for v in range(len(profile_cols)):
    # get all values from single vehicle.
    if (v < len(profile_cols) - 1):
        values_list = getsubgrid(profile_cols[v], start_row,
                                 profile_cols[v + 1], start_row + len(options),
                                 all_values);
    else:
        values_list = getsubgrid(profile_cols[v], start_row,
                                 len(all_values[0]), start_row + len(options),
                                 all_values);


    # edit general parameters.
    editGeneral(first_row[profile_cols[v]], options, values_list)
    values = computeProfiles(options, values_list)
    # edit fuel monitor profiles.
    editFuel(first_row[profile_cols[v]], c_profiles, values)
    print('Updated profile for system ' + first_row[profile_cols[v]] + '.');
