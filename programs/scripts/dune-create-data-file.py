# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Luis Venancio                                                    #
############################################################################

import argparse
import time
import math
import h5py

import numpy as np
from scipy.interpolate import griddata

################################################# Auxiliar Functions ##################################################
# Coordinate transformation
def WGS84toNED(rlat, rlon, rdep, lat, lon, dep):

    rlat = math.radians(rlat)
    rlon = math.radians(rlon)
    lat = math.radians(lat)
    lon = math.radians(lon)

    rx, ry, rz = toECEF(rlat, rlon, rdep)
    x, y, z = toECEF(lat, lon, dep)

    ox = x - rx
    oy = y - ry
    oz = z - rz

    # North.
    n = -math.sin(rlat) * math.cos(rlon) * ox - math.sin(rlat) * math.sin(rlon) * oy + math.cos(rlat) * oz

    # East.
    e = -math.sin(rlon) * ox + math.cos(rlon) * oy

    # Down.
    d = -math.cos(rlat) * math.cos(rlon) * ox - math.cos(rlat) * math.sin(rlon) * oy - math.sin(rlat) * oz

    return n, e, d

def toECEF(lat, lon, dep):

    #Semi-major axis.
    c_wgs84_a = 6378137.0
    #First eccentricity squared.
    c_wgs84_e2 = 0.00669437999013

    rn = c_wgs84_a / math.sqrt(1 - c_wgs84_e2 * (math.sin(lat) * math.sin(lat)))

    x = (rn + dep) * math.cos(lat) * math.cos(lon)
    y = (rn + dep) * math.cos(lat) * math.sin(lon)
    z = (((1.0 - c_wgs84_e2) * rn) + dep) * math.sin(lat)

    return x, y, z

# Create target grid and interpolation limits
def targetGrid(olat, olon, Blat, Blon, radius):

    # Calculate step (for ~240000 points)
    x_interval = Blat - olat
    y_interval = Blon - olon
    step = (x_interval * y_interval / 62500) ** 0.5

    x_step = step if x_interval > 0 else -step
    y_step = step if y_interval > 0 else -step

    # Create grid and convert to NED
    target_points = []
    for x in range(0, int(abs(x_interval / x_step))+1):
        for y in range(0, int(abs(y_interval / y_step))+1):
            for z in range(-15, 5, 5):
                x_m, y_m, z_m = WGS84toNED(olat, olon, 0, olat + x*x_step, olon + y*y_step, z)
                target_points.append([x_m, y_m, z_m])

    # Find interpolation limits
    x_limit, y_limit, z_m = WGS84toNED(olat, olon, 0, olat + x_interval, olon + y_interval, 0)
    if x_interval > 0:
        x_min = -radius
        x_max = x_limit + radius
    else:
        x_min = x_limit - radius
        x_max = radius
    if y_interval > 0:
        y_min = -radius
        y_max = y_limit + radius
    else:
        y_min = y_limit - radius
        y_max = radius

    x_limits = [x_min, x_max]
    y_limits = [y_min, y_max]

    return target_points, x_limits, y_limits

# Input data.
def getInputData(input_file_path, time):

    #Get data of specific time
    time = str(time)
    time = "0"*(5-len(time)) + time

    #Get data points
    input_file = h5py.File(input_file_path, 'r')
    lat = list(input_file['Grid/Latitude'])
    lon = list(input_file['Grid/Longitude'])
    dep = list(input_file['Grid/VerticalZ/Vertical_' + time])
    temp_data_raw = list(input_file['Results/temperature/temperature_' + time])
    sal_data_raw = list(input_file['Results/salinity/salinity_' + time])
    valid_points = list(input_file['Grid/OpenPoints/OpenPoints_' + time])

    #Align grid
    lat = lat[0][1:]
    lon = [lon[i][0] for i in range(1, len(lon))]
    dep = dep[1:]

    #Filter valid points
    data_points = []
    temp_data = []
    sal_data = []
    for x in range(0, len(lat)):
        for y in range(0, len(lon)):
            for z in range(0, len(dep)):
                if valid_points[z][y][x] == 1:
                    data_points.append([lat[x], lon[y], dep[z][y][x]])
                    temp_data.append(temp_data_raw[z][y][x])
                    sal_data.append(sal_data_raw[z][y][x])

    return data_points, temp_data, sal_data

# Output file
def writeToFile(target_points, data, parameter, o_reference, time):

    # Create file
    output_file = open(args.dstpath + parameter.lower() + "_" + str(time) + "-" + args.location.lower() + ".ini", "w")

    # Get licence from this script
    self_file = open("./programs/scripts/dune-create-data-file.py")
    header = False
    for line in self_file.readlines():
        line = line.strip()
        if line.startswith('# Author: '):
            break
        if line.startswith('##') and not header:
            header = True
            output_file.write(line + '\n')
        elif header:
            output_file.write(line + '\n')

    # Write preamble (parameter, origin reference and data field)
    PREAMBLE = ['\n',
                '['+parameter+']\n',
                '\n',
                'Latitude (degrees)  = ' + str(o_reference[0]) + '\n',
                'Longitude (degrees) = ' + str(o_reference[1]) + '\n',
                '\n',
                'Data =     ']
    for i in range(0, len(PREAMBLE)):
        output_file.write(PREAMBLE[i])

    # Write data
    for i in range(0, len(data)):
        if not math.isnan(data[i]):
            aux = ['{0:4.2f}'.format(j) for j in target_points[i]]
            aux.append('{0:4.2f}'.format(data[i]))
            aux = ' '.join(aux)
            if not i == 0:
                aux = aux.rjust(len(PREAMBLE[-1]) + len(aux))
            output_file.write(aux +
                            (",\n" if i < len(data) - 1 else "\n"))

########################################## Parse command line arguments ###############################################
parser = argparse.ArgumentParser(
    description="This script processes hdf5 temperature and salinity data.")
parser.add_argument('srcpath', metavar='<source path>',
    help="Path to source hdf5 data file")
parser.add_argument('oLat', metavar='<o latitude>', type=float,
    help="Latitude of lower right corner of interpolation area")
parser.add_argument('oLon', metavar='<o longitude>', type=float,
    help="Longitude of lower right corner of interpolation area")
parser.add_argument('urLat', metavar='<op latitude>', type=float,
    help="Latitude of upper left corner of interpolation area")
parser.add_argument('urLon', metavar='<op longitude>', type=float,
    help="Longitude of upper left corner of interpolation area")

parser.add_argument('--dstpath', metavar='<destination path>', default="./etc/simulation/",
    help="Destination path for file output. Default: ../../etc/simulation/")
parser.add_argument('--location', metavar='<location name>', default="data",
    help="Desired name of location (Ex: apdl). Default: \"data\"")
parser.add_argument('--times', metavar='<max time>', default=1, type=int,
    help="Number of files to produce, corresponding to data from different times.")
parser.add_argument('--radius', metavar='<interpolation radius>', default=60000, type=float,
    help="Range of source data beyond interpolation area. Default: 60000 m")
parser.add_argument('--plot', action="store_true", default=0,
    help="Plots the last temperature data set. Requires matplotlib package.")
args = parser.parse_args()

################################################# Create target grid ##################################################
print "Starting..."
target_points, x_limits, y_limits = targetGrid(args.oLat, args.oLon, args.urLat, args.urLon, args.radius)

########################################## Interpolation and write to file ############################################

print "Converting..."
target_points_arr = np.array(target_points)
start_time = time.time()
for i in range(0, args.times):

    #Clear
    data_points = []
    temp_data_input = []
    sal_data_input = []

    #Get temperature and salinity data
    data_points_deg, temp_data, sal_data = getInputData(args.srcpath, i+1)

    #Trim points for interpolation, using interpolation radius
    for idx in range(0, len(data_points_deg)):
        n, e, d = WGS84toNED(args.oLat, args.oLon, 0,
                             data_points_deg[idx][0],
                             data_points_deg[idx][1],
                             data_points_deg[idx][2])
        if (x_limits[0] < n < x_limits[1] and
                y_limits[0] < e < y_limits[1]):
            data_points.append([n, e, d])
            temp_data_input.append(temp_data[idx])
            sal_data_input.append(sal_data[idx])

    #Interpolate
    data_points_arr = np.array(data_points)
    temp_values_arr = np.array(temp_data_input)
    sal_values_arr = np.array(sal_data_input)

    temp_interpol = griddata(data_points_arr, temp_values_arr, target_points, method='linear')
    sal_interpol = griddata(data_points_arr, sal_values_arr, target_points, method='linear')

    #Write to file
    writeToFile(target_points, temp_interpol, "Temperature", (args.oLat, args.oLon), i)
    writeToFile(target_points, sal_interpol, "Salinity", (args.oLat, args.oLon), i)
    print "Completed: " + str((i+1)*100/args.times) + "%"
    print "Time remaining: " + '{0:2.1f}'.format((time.time()-start_time)*(args.times - (i + 1))/60) + "m"
    start_time = time.time()

##################################################### Plot data #######################################################
if args.plot:
    import matplotlib.pyplot as plt
    from mpl_toolkits.mplot3d import Axes3D
    x_p = []
    y_p = []
    z_p = []
    for point in target_points:
        x_p.append(point[0])
        y_p.append(point[1])
        z_p.append(-point[2])

    fig = plt.figure()
    ax = plt.axes(projection='3d')
    p = ax.scatter3D(x_p, y_p, z_p, c=temp_interpol, s=0.2)
    fig.colorbar(p)
    plt.show()
