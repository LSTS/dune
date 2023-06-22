import os
import logging
import sys
import numpy as np
import matplotlib.image as mpimg
import imcpy
import time
import math

from picamera import PiCamera
from io import StringIO
from PIL import Image
from imcpy.actors.dynamic import DynamicActor
from imcpy.decorators import Periodic, Subscribe
from exif import Image

class ImageActor(DynamicActor):

    msg_longitude = 0.0
    msg_latitude = 0.0
    msg_height = 0.0

    def __init__(self, target_name, log_name, root_log_path ):
        """
        Initialize the actor
        :param target_name: The name of the target system
        """
        super().__init__()

        # Initialize local variables
        self.target = target_name
        self.camera = PiCamera()
        self.logname = log_name
        self.log_root = root_log_path

        self.camera.resolution = (2592, 1944)
        self.camera.framerate = 15

        # This list contains the target systems to maintain communications with
        self.heartbeat.append(target_name)

    # Listening for a CompressedImage and EstimatedState message 
    @Subscribe(imcpy.CompressedImage)
    def recv_compimg(self, msg: imcpy.CompressedImage):
        try:

            # Check if message originates from the target system
            node = self.resolve_node_id(self.target)
            if msg.src == node.id:
                
                timestr = time.strftime("%Y%m%d-%H%M%S")

                # Create Photos directory if it does not exist
                photos_dir = self.logname + '/Photos/'
                if not os.path.exists(photos_dir):
                    os.makedirs(photos_dir)

                # Capture and Save Image
                path = photos_dir + str(timestr) + ".jpeg"
                self.camera.capture(path, 'jpeg')

                # Log current state
                entry1 = imcpy.LogBookEntry()
                entry1.text = 'Image captured and saved'
                self.send(node, entry1)

                # Insert Exif data
                with open(path, "rb") as no_exif_file:
                    no_exif_image = Image(no_exif_file)

                decimal_long = self.msg_longitude
                decimal_lat = self.msg_latitude

                # Set Latitude Reference
                if decimal_lat > 0:
                    no_exif_image.gps_latitude_ref = 'N'
                elif decimal_lat < 0:
                    no_exif_image.gps_latitude_ref = 'S'

                # Convert Latitude Decimal Degrees to DMS and insert
                degrees_lat = int(decimal_lat)
                minutes_decimal_lat = (decimal_lat - degrees_lat) * 60
                minutes_lat = int(minutes_decimal_lat)
                seconds_lat = (minutes_decimal_lat - minutes_lat) * 60
                no_exif_image.gps_latitude = (abs(degrees_lat), abs(minutes_lat), abs(seconds_lat))
                      
                # Set Longitude Reference
                if decimal_long > 0:
                    no_exif_image.gps_longitude_ref = 'E'
                elif decimal_long < 0:
                    no_exif_image.gps_longitude_ref = 'W'
                
                # Convert Longitude Decimal Degrees to DMS and insert
                degrees_long = int(decimal_long)
                minutes_decimal_long = (decimal_long - degrees_long) * 60
                minutes_long = int(minutes_decimal_long)
                seconds_long = (minutes_decimal_long - minutes_long) * 60
                no_exif_image.gps_longitude = (abs(degrees_long), abs(minutes_long), abs(seconds_long))                

                # Insert altitude exif data
                no_exif_image.gps_altitude = self.msg_height

                # Log current state
                entry2 = imcpy.LogBookEntry()
                entry2.text = 'EXIF operation done'
                self.send(node, entry2)

                # Save Image with Exif data
                with open(path, 'wb') as new_image_file:
                    new_image_file.write(no_exif_image.get_file())

                # Log current state
                entry3 = imcpy.LogBookEntry()
                entry3.text = 'Captured image with Estimated State Saved'
                self.send(node, entry3)

                # Resize image and send to Dune for processing (Maximum size allowed too small for processing)
                    #image = Image.open(path)
                    #image = image.resize((140,140))

                # Create a message that contains the path of the newly created image as a response for the request
                entry4 = imcpy.LogBookEntry()
                entry4.text = 'Image is available at:' + path
                self.send(node, entry4)

        except Exception as e:
                entry5 = imcpy.LogBookEntry()
                entry5.text = str(e)
                self.send(node, entry5)

    def consumeEstimatedState(self, msg: imcpy.EstimatedState):
        try:
            # Check if message originates from the target system
            node = self.resolve_node_id(self.target)
            if msg.src == node.id:

                rlat = msg.lat
                rlon = msg.lon
                h = msg.height
                lat_offset = msg.x
                lon_offset = msg.y
                h_offset = msg.z

                # Earth radius constant
                earth_radius = 6371000
                
                # Convert lon and lat rad values into degrees
                latitude_deg = math.degrees(rlat)
                longitude_deg = math.degrees(rlon)

                # Calculate offset
                latitude_offset = lat_offset / earth_radius * (180 / math.pi)
                longitude_offset = lon_offset / (earth_radius * math.cos(rlat)) * (180 / math.pi)

                # Add offset
                latitude_new = latitude_deg + latitude_offset
                longitude_new = longitude_deg + longitude_offset
                height_new = h + h_offset

                self.msg_latitude = latitude_new
                self.msg_longitude = longitude_new
                self.msg_height = height_new

        except Exception as e:
                entry6 = imcpy.LogBookEntry()
                entry6.text = str(e)
                self.send(node, entry6)

    @Subscribe(imcpy.LoggingControl)
    def consumeLoggingControl(self, msg: imcpy.LoggingControl):
        try:
            # Check if message originates from the target system
            node = self.resolve_node_id(self.target)
            if msg.src != node.id:
                return
            # Check if logging has started and print path
            if msg.op == imcpy.LoggingControl.ControlOperationEnum.STARTED:
                self.logname = self.log_root + '/' + msg.name
                
                entry6 = imcpy.LogBookEntry()
                entry6.text = 'New log path:' + self.logname
                self.send(node, entry6)
                
        except Exception as e:
                entry7 = imcpy.LogBookEntry()
                entry7.text = str(e)
                self.send(node, entry7)

    @Subscribe(imcpy.Event)
    def consumeEvent(self, msg: imcpy.Event):
        try:
            # Check if message originates from the target system
            node = self.resolve_node_id(self.target)
            if msg.src != node.id:
                return
            
            # Check if the data field is not empty
            if msg.data != None:

                # Convert data to list and then to tuple
                resolution_data = msg.data
                resolution_list = resolution_data.split(",")
                self.camera.resolution = (int(resolution_list[0]), int(resolution_list[1]))
                
                entry8 = imcpy.LogBookEntry()
                entry8.text = 'Camera resolution changed: ' + self.camera.resolution
                self.send(node, entry8)

        except Exception as e:
                entry9 = imcpy.LogBookEntry()
                entry9.text = 'Camera resolution changed: ' + self.camera.resolution
                self.send(node, entry9)

if __name__ == '__main__':
    
    # Setup logging level and console output
    logging.basicConfig(stream=sys.stderr, level=logging.DEBUG)

    vehicle_name = sys.argv[1]
    root_log_path = sys.argv[3]

    # Create an actor, targeting the lauv-simulator-1 system
    actor = ImageActor(vehicle_name, sys.argv[2], root_log_path)

    # This command starts the asyncio event loop
    actor.run()