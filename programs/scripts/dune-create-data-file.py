import argparse
import time
import math
import h5py

import numpy as np
from scipy.interpolate import griddata

# import matplotlib.pyplot as plt
# from mpl_toolkits.mplot3d import Axes3D

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

# Create target grid
def targetGrid(olat, olon, Blat, Blon):
    # Calculate step (for ~250000 points)
    x_interval = Blat - olat
    y_interval = Blon - olon
    step = (x_interval * y_interval / 65000) ** 0.5

    # Check for relative points location
    ox = olat
    oy = olon
    endx = Blat
    endy = Blon
    if x_interval < 0 or y_interval < 0:
        ox = Blat
        oy = Blon
        endx = olat
        endy = olon

    # Create grid and convert to NED
    target_points = []
    x = ox
    while x < endx:
        y = oy
        while y < endy:
            for z in range(-15, 5, 5):
                x_m, y_m, z_m = WGS84toNED(olat, olon, 0, x, y, z)
                target_points.append([x_m, y_m, z_m])
            y = y + step
        x = x + step

    # Find limits
    x_limit = max([x[0] for x in target_points])
    y_limit = max([y[1] for y in target_points])

    return target_points, x_limit, y_limit

# Input data.
def getInputData(input_file_path, time):
    time = str(time)
    time = "0"*(5-len(time)) + time

    input_file = h5py.File(input_file_path, 'r')
    lat = list(input_file['Grid/Latitude'])
    lon = list(input_file['Grid/Longitude'])
    dep = list(input_file['Grid/VerticalZ/Vertical_' + time])
    temp_data_raw = list(input_file['Results/temperature/temperature_' + time])
    sal_data_raw = list(input_file['Results/salinity/salinity_' + time])
    valid_points = list(input_file['Grid/OpenPoints/OpenPoints_' + time])

    lat = lat[0][1:]
    lon = [lon[i][0] for i in range(1, len(lon))]
    dep = dep[1:]

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
def writeToFile(target_points, data, parameter, o_reference, time, location):
    # Preamble
    model_file = open("model.ini")
    output_file = open(args.target_path + parameter.lower() + "_" + str(time) + "-" + location.lower() + ".ini", "w")
    lines = model_file.readlines()

    for i in range(0, len(lines)):

        if lines[i].find("Parameter") != -1:
            lines[i] = lines[i].replace("Parameter", parameter)
        if lines[i].find("Latitude") != -1:
            output_file.write(lines[i][:-1] + str(o_reference[0]) + '\n')
            continue
        if lines[i].find("Longitude") != -1:
            output_file.write(lines[i][:-1] + str(o_reference[1]) + '\n')
            continue
        if lines[i].find("Data") != -1:
            aux = [j for j in target_points[0]]
            aux.append(data[0])
            aux = ['{0:4.2f}'.format(j) for j in aux]
            output_file.write(lines[i][:-1] + ' '.join(aux) + ",\n")
            number_of_spaces = len(lines[i])-1
            continue

        output_file.write(lines[i])

    for i in range(1, len(data)-1):
        if not math.isnan(data[i]):
            aux = [j for j in target_points[i]]
            aux.append(data[i])
            aux = ['{0:4.2f}'.format(j) for j in aux]
            output_file.write(' '*number_of_spaces + ' '.join(aux) + ",\n")
    aux = [j for j in target_points[-1]]
    aux.append(data[-1])
    aux = ['{0:4.2f}'.format(j) for j in aux]
    output_file.write(' '*number_of_spaces + ' '.join(aux) + "\n")


########################################## Parse command line arguments ###############################################
parser = argparse.ArgumentParser(
    description="This script processes hdf5 temperature and salinity data.")
parser.add_argument('data_path', metavar='<hdf5 path>',
    help="Path to hdf5 data input file")
parser.add_argument('target_path', metavar='<target path>',
    help="Path to file output location")
parser.add_argument('location_name', metavar='<location name>',
    help="Name of desired location (Ex: apdl)")
parser.add_argument('oLat', metavar='<o latitude>', type=float,
    help="Latitude of lower right corner of interpolation area")
parser.add_argument('oLon', metavar='<o longitude>', type=float,
    help="Longitude of lower right corner of interpolation area")
parser.add_argument('urLat', metavar='<op latitude>', type=float,
    help="Latitude of upper left corner of interpolation area")
parser.add_argument('urLon', metavar='<op longitude>', type=float,
    help="Longitude of upper left corner of interpolation area")
parser.add_argument('max_time', metavar='<max time>', type=int,
    help="Number of files to produce, corresponding to data from different times")
args = parser.parse_args()

interpolation_radius = 60000

################################################# Create target grid ##################################################
print "Starting..."
target_points, x_limit, y_limit = targetGrid(args.oLat, args.oLon, args.urLat, args.urLon)

########################################## Interpolation and write to file ############################################

print "Converting..."
target_points_arr = np.array(target_points)
start_time = time.time()
for i in range(0, args.max_time):

    #Clear
    data_points = []
    temp_data_input = []
    sal_data_input = []

    #Get temperature and salinity data
    data_points_deg, temp_data, sal_data = getInputData(args.data_path, i+1)

    #Filter points
    for idx in range(0, len(data_points_deg)):
        n, e, d = WGS84toNED(args.oLat, args.oLon, 0,
                             data_points_deg[idx][0],
                             data_points_deg[idx][1],
                             data_points_deg[idx][2])
        if (-interpolation_radius < n < x_limit + interpolation_radius and
                -interpolation_radius < e < y_limit + interpolation_radius):
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
    writeToFile(target_points, temp_interpol, "Temperature", (args.oLat, args.oLon), i, args.location_name)
    writeToFile(target_points, sal_interpol, "Salinity", (args.oLat, args.oLon), i, args.location_name)
    print "Completed: " + str((i+1)*100/args.max_time) + "%"
    print "Time remaining: " + '{0:2.1f}'.format((time.time()-start_time)*(args.max_time - (i + 1))/60) + "m"
    start_time = time.time()


################################################################################################
# x_p = []
# y_p = []
# z_p = []
# for point in target_points:
#     x_p.append(point[0])
#     y_p.append(point[1])
#     z_p.append(-point[2])
#
# fig = plt.figure()
# ax = plt.axes(projection='3d')
# #ax.scatter3D(n_input[0::100], e_input[0::100], d_input[0::100], c=data_input[0::100], s=0.2)
# p = ax.scatter3D(x_p, y_p, z_p, c=temp_interpol, s=0.2)
# fig.colorbar(p)
# plt.show()

