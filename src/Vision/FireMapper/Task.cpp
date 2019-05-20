/* Copyright (c) 2017-2018, CNRS-LAAS
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */

// ISO C++ 98 headers.
#include <string>
#include <sstream>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Compression/ZlibCompressor.hpp>

// OpenCV headers
#include <opencv2/opencv.hpp>

// GDAL headers
#include <gdal/ogr_spatialref.h>

// Mapping headers
#include "Mapping/Mapping.hpp"
#include "Mapping/ElevationRaster.hpp"
#include "Mapping/FireRaster.hpp"
#include "Mapping/Image.hpp"
#include "Mapping/SensorModel.hpp"

// Firemapper task headers
#include "MorseImageGrabber.hpp"
#include "Mapping_thread.hpp"


namespace Vision
{
  namespace FireMapper
  {
    using DUNE_NAMESPACES;


    //! Task Arguments
    struct Arguments
    {
      //! Main System ID
      std::string system_id;
      std::string dem_file;
      uint8_t threshold;
      int projected_coordinate_system_epsg;
      int geodetic_coordinate_system_epsg;
      Address morse_ip;
      uint16_t morse_port;
      //! Load task in mode master
      bool is_master_mode;
    };

    struct PositionProjected
    {
      double x;
      double y;
    };

    enum FireMappingState
    {
      None = 0,
      FetchImage = 1,
      MapImage = 2,
      DispatchFireMap = 3
    };

    struct Task: public DUNE::Tasks::Task
    {

      FireMappingState fm_state;

      std::string m_path_results;
      bool save_result = true;

      cv::Mat Intrinsic;
      cv::Mat Translation;
      cv::Mat Rotation;
      // Position in the projected coordinate system (ETRS89/LAEA)
      double position_x_pcs, position_y_pcs, position_z;
      double phi, theta, psi;

      cv::Mat Image_Matrix;

      std::vector<double> Radial_distortion;
      std::vector<double> Tangential_distortion;

      Mapping_thread* Map_thrd;
      FireRaster* fire_raster;
      ElevationRaster* elevation_raster;
      Mapping* mapper;
      MorseImageGrabber* morse_grabber;

      Arguments m_args;

      //!
      bool m_is_to_acivate;
      //! entitie id of master
      uint8_t m_entity_master;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx)
      {
//        setFrequency(1);

        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Main System ID", m_args.system_id)
          .defaultValue("x8-06")
          .description("Main CPU IMC address.");

        param("DEM File", m_args.dem_file)
          .defaultValue("/home/rbailonr/firers_data_porto_utm/dem/porto_dem.tif")
          .description("Digital Elevation Map path.");
        // TODO: Coordinate System is retrieved from these DEM

        param("Threshold", m_args.threshold)
          .defaultValue("128")
          .description("Threshold.");

        param("Projected Coordinate System", m_args.projected_coordinate_system_epsg)
          .defaultValue("32629") // UTM29N
          .description("EPSG of the projected coordinate system used for the fire maps.");

        param("Geodetic Coordinate System", m_args.geodetic_coordinate_system_epsg)
          .defaultValue("4326") // WGS84
          .description("EPSG of the corresponding geodetic coordinate system for the projected one.");

        param("Morse IP", m_args.morse_ip)
          .defaultValue("127.0.0.1")
          .description("IP address of the morse simulation");

        param("Morse Port", m_args.morse_port)
          .defaultValue("4000")
          .description("Port of the morse simulation");

        param("Master Mode", m_args.is_master_mode)
        .description("Load task in master mode.");


        Intrinsic = cv::Mat(3, 3, CV_64FC1);
        Translation = cv::Mat(3, 1, CV_64FC1);
        Rotation = cv::Mat(3, 3, CV_64FC1);


        // TODO: Replace this information with the obtanied from the real IR camera
        //       or take this from a parameter. Can parameters be 2d matrices?
        Radial_distortion.push_back(-0.04646865617107581);
        Radial_distortion.push_back(0.051288490946210602);
        Radial_distortion.push_back(-0.025988438162638149);
        Tangential_distortion.push_back(0.0032416606187316522);
        Tangential_distortion.push_back(0.0033995207337653736);

        // Setup processing of IMC messages
        bind<EstimatedState>(this);
        bind<EntityActivationState>(this);
        bind<EntityInfo>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (m_args.is_master_mode)
        {
          inf("master mode: update parameters");
        }
        else
        {
          inf("slave mode: update parameters");
        }
      }

      void
      set_Rot_Trans_Matrix(double xx, double yy, double zz, double _phi, double _theta, double _psi)
      {
        // Translation
        Translation.at<double>(0) = xx;
        Translation.at<double>(1) = yy;
        Translation.at<double>(2) = zz;

        Rotation = Mapping::rotation_matrix(_phi, _theta, _psi);
      }

      PositionProjected
      transform_gcs_to_pcs(double lat, double lon, int from_epsg, int to_epsg)
      {
        OGRSpatialReference wgs84_gcs;
        OGRSpatialReference pcs;

        wgs84_gcs.importFromEPSG(from_epsg); // RGF93 (EPSG:4171) is in practice equal to WGS84 (EPSG:4326)
        pcs.importFromEPSG(to_epsg);

        auto poCT = OGRCreateCoordinateTransformation(&wgs84_gcs, &pcs);

        if (poCT == nullptr)
        {
          throw std::invalid_argument("");
        } else
        {
          PositionProjected proj_coords;

          auto xx = 180 / M_PI * lon;
          auto yy = 180 / M_PI * lat;

          poCT->Transform(1, &xx, &yy); // Again Transform must succeed

          proj_coords.x = xx;
          proj_coords.y = yy;

          OGRCoordinateTransformation::DestroyCT(poCT);
          return proj_coords;
        }
      }

      PositionProjected
      coordinate_transform(double x, double y, int from_epsg, int to_epsg)
      {
        OGRSpatialReference orig_srs;
        OGRSpatialReference dest_srs;

        orig_srs.importFromEPSG(from_epsg); // RGF93 (EPSG:4171) is in practice equal to WGS84 (EPSG:4326)
        dest_srs.importFromEPSG(to_epsg);

        auto poCT = OGRCreateCoordinateTransformation(&orig_srs, &dest_srs);

        if (poCT == nullptr)
        {
          throw std::invalid_argument("Invalid transformation");
        } else
        {
          PositionProjected proj_coords;

          auto xx = x;
          auto yy = y;

          poCT->Transform(1, &xx, &yy); // Again Transform must succeed

          proj_coords.x = xx;
          proj_coords.y = yy;

          OGRCoordinateTransformation::DestroyCT(poCT);
          return proj_coords;
        }
      }

      // Test - Receive EstimatedState message from main CPU (if FireMapper active)
      void
      consume(const IMC::EstimatedState* e_state)
      {
        if (!m_args.is_master_mode)
        {
          //war("slave mode: consume EstimatedState - %s", resolveSystemId(e_state->getSource()));
          std::string sysName = resolveSystemId(e_state->getSource());
          if(sysName != m_args.system_id)
            return;

          double m_lat = e_state->lat;
          double m_lon = e_state->lon;
          double m_height = e_state->height + (-e_state->z);

          WGS84::displace(e_state->x, e_state->y, &m_lat, &m_lon);

          try
          {
            PositionProjected point = transform_gcs_to_pcs(m_lat, m_lon,
                                                           m_args.geodetic_coordinate_system_epsg,
                                                           m_args.projected_coordinate_system_epsg);


            position_x_pcs = point.x;
            position_y_pcs = point.y;
            position_z = m_height;

            phi = e_state->phi;
            theta = e_state->theta;
            psi = e_state->psi;
          } catch (...)
          {
            err("Cannot transform coordinates from %d to %d", m_args.geodetic_coordinate_system_epsg,
                m_args.projected_coordinate_system_epsg);
            this->setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          }
        }
      }

      void
      consume(const IMC::EntityInfo* msg)
      {
        if (!m_args.is_master_mode)
        {
          std::string master_dune = resolveSystemId(msg->getSource());
          if (master_dune.compare(m_args.system_id) == 0 && msg->label.compare(getEntityLabel()) == 0)
          {
            debug("entity master id: %s | %d | %s", master_dune.c_str(), msg->id, msg->label.c_str());
            m_entity_master = msg->id;
          }
        }
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        if (!m_args.is_master_mode)
        {
          if (msg->getSourceEntity() == DUNE_IMC_CONST_UNK_EID)
            return;

          std::string system_id = resolveSystemId(msg->getSource());
          //Only for debug of entity
          /*if(msg->getSourceEntity() != 45)
           {
           std::string ds = resolveEntity(msg->getSourceEntity());
           debug("%s | %d | %s", system_id.c_str(), msg->state, ds.c_str());
           }*/
          if (m_entity_master == msg->getSourceEntity() && msg->state == EntityActivationState::EAS_ACT_IP)
          {
            debug("%s | %d | %s | activation", system_id.c_str(), msg->state, getEntityLabel());
            inf("received activation request - Slave");
            onActivation();
            m_is_to_acivate = true;
          }
          else if (m_entity_master == msg->getSourceEntity() && msg->state == EntityActivationState::EAS_DEACT_IP)
          {
            debug("%s | %d | %s | deactivation", system_id.c_str(), msg->state, getEntityLabel());
            inf("received deactivation request - Slave");
            onDeactivation();
            m_is_to_acivate = false;
          }
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if(!m_args.is_master_mode)
        {
          m_is_to_acivate = false;
          morse_grabber = new MorseImageGrabber(this, m_args.morse_ip, m_args.morse_port);

          Map_thrd = new Mapping_thread(this, "thrd_Mapper");

          try
          {
            Path path_DEM = Path(m_args.dem_file);
            m_path_results = path_DEM.dirname(true).str();
            elevation_raster = new ElevationRaster(m_args.dem_file);
            fire_raster = new FireRaster(elevation_raster);
            mapper = new Mapping(fire_raster, m_args.threshold, true);
            mapper->set_threshold(m_args.threshold);
          }
          catch (const std::invalid_argument& e)
          {
            err("%s", e.what());
            this->setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          }
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (!m_args.is_master_mode)
        {
          try
          {
            delete elevation_raster;
            delete fire_raster;
            delete mapper;
            delete morse_grabber;
            delete Map_thrd;
          }
          catch (const std::invalid_argument& e){}
        }
      }

      template<typename T>
      void serialize(const T& obj, std::vector<char>& buffer)
      {
        char const* obj_begin = reinterpret_cast<char const*>(&obj);
        std::copy(obj_begin, obj_begin + sizeof(T), std::back_inserter(buffer));
      }

      void dispatch_firemap(const FireRaster& map)
      {
        IMC::DevDataBinary msg = IMC::DevDataBinary();
        msg.setTimeStamp();
        msg.setSource(static_cast<uint16_t>(getSystemId()));
        msg.setSourceEntity(static_cast<uint8_t>(getEntityId()));

        // Magic number
        msg.value.emplace_back(0xF1);
        msg.value.emplace_back(0x3E);

        // srsid
        uint64_t srsid = m_args.projected_coordinate_system_epsg;
        serialize<uint64_t>(srsid, msg.value);

        // x size
        uint64_t x_size = map.get_firemap_time().rows;
        serialize<uint64_t>(x_size, msg.value);

        // y size
        uint64_t y_size = map.get_firemap_time().cols;
        serialize<uint64_t>(y_size, msg.value);

        // x offset
        double x_offset = map.get_max_west();
        serialize<double>(x_offset, msg.value);

        // y offset
        double y_offset = map.get_max_north();
        serialize<double>(y_offset, msg.value);

        // cell width
        double cell_width = map.get_pixel_width();
        serialize<double>(cell_width, msg.value);

        // Compressed fire map data
        Compression::ZlibCompressor c = Compression::ZlibCompressor();
        auto buff = c.compress(reinterpret_cast<char*>(map.get_firemap_time().data),
                               map.get_firemap_time().step[0] * map.get_firemap_time().rows);
        std::copy(buff.getBufferSigned(), buff.getBufferSigned() + buff.getSize(), std::back_inserter(msg.value));

        inf("Compressed fire map size: %zu bytes", msg.value.size());

        if (msg.getSerializationSize() < 65535)
        {
          this->dispatch(&msg);
        } else
        {
          war("Skipping fire map message dispatch. The message is too long.");
        }

      }

      void
      onActivation(void)
      {
        if (!m_args.is_master_mode)
        {
          inf("slave mode: onActivation");

        }
        else
        {
          inf("master mode: onActivation");
        }
      }

      void
      onDeactivation(void)
      {
        if (!m_args.is_master_mode)
        {
          inf("slave mode: onDeactivation");
        }
        else
        {
          inf("master mode: onDeactivation");
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        float Rotation_limit = 0.08; // 5 degrees
        if (!m_args.is_master_mode)
        {
          Map_thrd->start();
          morse_grabber->start();
        }

        TaggedImage t;

        // This Task works as an state machine:
        // FireMappingState::FetchImage -> MapImage -> DispatchFireMap

        // When FireMappingState::FetchImage is active, an image is requested to the morse_grabber.
        // If the request succeeds the task moves to FireMappingState::MapImage or else to an error state

        // When FireMappingState::MapImage is active, the image is mapped into the firemap.
        // If the actions succeeds the task moves to FireMappingState::DispatchFireMap
        // or else to FireMappingState::MapImage
        while (!stopping())
        {
          if (!m_args.is_master_mode)
          {
            waitForMessages(1.0);
            if (m_is_to_acivate)
            {
              fm_state = FireMappingState::None;
            } else
            {
              if (fm_state == FireMappingState::None)
              {
                inf("FireMappingState::None");
                fm_state = FireMappingState::FetchImage;
              } else if (fm_state == FireMappingState::FetchImage)
              {
                inf("FireMappingState::FetchImage");

                // If morse graber fails, restart it
                if (morse_grabber->error())
                {
                  err("MorseImageGrabber error");
                  morse_grabber->stopAndJoin();
                  delete morse_grabber;
                  morse_grabber = new MorseImageGrabber(this, m_args.morse_ip, m_args.morse_port);
                  morse_grabber->start();
                  fm_state = FireMappingState::None;
                  Delay::wait(1);
                  continue;
                }
                // If the morse grabber is free to do work...
                else if (morse_grabber->is_idle() && !morse_grabber->is_image_available())
                {
                  std::cout << psi << std::endl;
                  morse_grabber->capture(position_x_pcs, position_y_pcs, position_z, phi,
                                       theta, psi);
                }
                // If morse grabber work is finished...
                else if (morse_grabber->is_image_available())
                {
                  t = morse_grabber->get_image();
                  cv::Mat flipped_image;
                  cv::flip(t.image, flipped_image, 1);
                  t.image = flipped_image;
                  //cv::transpose(t.image, t.image);//this transpose is added only for Morse_grabber images
                  // because the images were tansposed so as to be sent and we have to transpose them back
                  fm_state = FireMappingState::MapImage;
                }

              } else if (fm_state == FireMappingState::MapImage)
              {
                inf("FireMappingState::MapImage");
                Image_Matrix = (t.image).clone();

                // TODO: Handle Mapping errors

                if (Map_thrd->mapping_finished())
                {
                  fm_state = FireMappingState::DispatchFireMap;
                } else if (Map_thrd->is_idle())
                {
                  // If the image has some content
                  if (Image_Matrix.data != NULL)
                  {
                    if (abs(t.phi) <= Rotation_limit)
                    {
                      Intrinsic = (t.intrinsic_matrix).clone();
                      // Convert from UTM to the LAEA coordiante system
//                      std::cout << " UTM: " << t.x << "; " << t.y << std::endl;
//                      auto gps = coordinate_transform(t.x, t.y, 32629, 4326);
//                      std::cout << " GPS: " << gps.x << "; " << gps.y << std::endl;
//                      auto pcs_defined = coordinate_transform(gps.x, gps.y, m_args.geodetic_coordinate_system_epsg, m_args.projected_coordinate_system_epsg);
//                      std::cout << "LAEA: " << pcs_defined.x << "; " << pcs_defined.y << std::endl;

                      set_Rot_Trans_Matrix(t.x, t.y, t.z, t.phi, 0., -(t.psi));

                      // FIXME: Restore threaded mapping
//                    start_mapping = Map_thrd->Map_Image(Image_Matrix, Translation, Rotation, Intrinsic,
//                                                        Radial_distortion, Tangential_distortion, mapper);

                      Image* im = new Image(Image_Matrix, Translation, Rotation, Intrinsic, Radial_distortion,
                                            Tangential_distortion);
                      bool Image_with_DEM_match = mapper->map(*im, Time::Clock::getSinceEpoch());
                      mapper->save_firemap(m_path_results);

                      if (Image_with_DEM_match)
                      {
                        inf("Image was mapped");
                     } else
                     {
                       inf("Image out of bounds");
                     }
                     delete im;
                     fm_state = FireMappingState::DispatchFireMap;
                  } else
                  {
                    war("Roll limit exceded. The image is discarded.");
                    fm_state = FireMappingState::FetchImage;
                  }
                  } else
                  {
                    war("Empty image.");
                    fm_state = FireMappingState::FetchImage;
                  }
                } else
                {
                  inf("Still working on mapping");
                }
              } else if (fm_state == FireMappingState::DispatchFireMap)
              {
                inf("FireMappingState::DispatchFireMap");
                mapper->save_firemap(m_path_results);
                dispatch_firemap(mapper->fire_map());
                fm_state = FireMappingState::FetchImage;
              }
            }
            Delay::waitMsec(500);
          }
          else
          {
            if(isActive())
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            else
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

            waitForMessages(1.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
