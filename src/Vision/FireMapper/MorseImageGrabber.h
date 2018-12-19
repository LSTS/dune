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

#ifndef DUNE_MORSEIMAGEGRABBER_H
#define DUNE_MORSEIMAGEGRABBER_H

#include <array>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <opencv2/opencv.hpp>

#include "json.hpp"
#include "base64.hpp"

using json = nlohmann::json;

namespace Vision
{
  namespace FireMapper
  {
    using DUNE_NAMESPACES;

    struct TaggedImage
    {
      // Position of the camera, in world coordinates, in meters
      double x;
      double y;
      double z;

      // Euler angles (XYZ)
      double phi;
      double theta;
      double psi;

      cv::Mat intrinsic_matrix;

      cv::Mat image;

      TaggedImage() : TaggedImage(0, 0, 0, 0, 0, 0)
      {}

      TaggedImage(double _x, double _y, double _z, double _phi, double _theta, double _psi) :
        x(_x), y(_y), z(_z), phi(_phi), theta(_theta), psi(_psi),
        intrinsic_matrix(cv::Mat(3, 3, CV_64FC1)), image(cv::Mat(1, 1, CV_8UC1))
      {}

      TaggedImage(const TaggedImage& other) :
        x(other.x), y(other.y), z(other.z), phi(other.phi), theta(other.theta), psi(other.psi),
        intrinsic_matrix(other.intrinsic_matrix.clone()), image(other.image.clone())
      {}

      TaggedImage& operator=(const TaggedImage& other)
      {
        if (this != &other) // prevent self-move
        {
          this->x = other.x;
          this->y = other.y;
          this->z = other.z;

          this->phi = other.phi;
          this->theta = other.theta;
          this->psi = other.psi;

          this->intrinsic_matrix.release();
          this->intrinsic_matrix = other.intrinsic_matrix;
          this->image.release();
          this->image = other.image;
        }
        return *this;
      }

    };

    struct MorseImageGrabber: public Concurrency::Thread
    {
    public:
      MorseImageGrabber(DUNE::Tasks::Task* task, Address morse_address, uint16_t morse_port) :
        m_task(task), m_error(false), m_grab(false), m_is_idle(false), m_image_available(false),
        m_address(morse_address), m_port(morse_port)
      {

      }

      MorseImageGrabber(const MorseImageGrabber&) = default;

      virtual ~MorseImageGrabber()
      {
        if (m_sock_rpc != nullptr)
        {
          delete m_sock_rpc;
        }
        if (m_sock_datastream != nullptr)
        {
          delete m_sock_datastream;
        }
      }

      void
      capture(double x, double y, double z, double phi, double theta, double psi)
      {
        if (m_is_idle)
        {
          m_tagged_image = TaggedImage(x, y, z, phi, theta, psi);
          m_grab = true;
        }
      }

      bool
      is_image_available(void)
      {
        return m_image_available;
      }

      bool
      is_idle(void)
      {
        return m_is_idle;
      }

      bool
      error(void)
      {
        return m_error;
      }

      TaggedImage
      get_image(void)
      {
        if (m_image_available)
        {
          m_image_available = false;
          return m_tagged_image;
        }

        return {};
      }

      void
      run(void)
      {
        m_task->inf("Morse image grabber started");

        std::stringstream cam_component;
        cam_component << m_robot_name << "." << m_camera_name;

        uint16_t stream_port = 0;
        if (connect_rpc_socket())
        {
          stream_port = get_stream_port(cam_component.str());
          connect_datastream_socket(stream_port);
        }

        while (!isStopping() && !m_error)
        {
          m_is_idle = true;
          if (m_grab)
          {
            m_grab = false;
            m_image_available = false;
            m_is_idle = false;

            try
            {
              if (!translate_camera_to(m_tagged_image.x, m_tagged_image.y, m_tagged_image.z) ||
                  !rotate_camera_to(m_tagged_image.phi, m_tagged_image.theta, m_tagged_image.psi))
              {
                m_task->err("%s", "Move robot request failed");
                m_error = true;
                break;
              }

              if (!capture_image())
              {
                m_task->err("%s", "Capture image request failed");
                m_error = true;
                break;
              }

              json cam_data = process_camera_datastream();
              if (!check_field_is_present(cam_data, "image") ||
                  !check_field_is_present(cam_data, "height") ||
                  !check_field_is_present(cam_data, "width") ||
                  !check_field_is_present(cam_data, "intrinsic_matrix"))
              {
                m_task->err("%s", "Received camera message doesn't have all the required fields");
                m_error = true;
                break;
              }

              std::string image_decoded = base64_decode(cam_data["image"]);

              unsigned int h = static_cast<unsigned int>(cam_data["height"]);
              unsigned int w = static_cast<unsigned int>(cam_data["width"]);

//              m_tagged_image.intrinsic_matrix = cv::Mat(3, 3, CV_64FC1);

              for (auto r = 0; r < m_tagged_image.intrinsic_matrix.rows; ++r)
              {
                for (auto c = 0; c < m_tagged_image.intrinsic_matrix.cols; ++c)
                {
                  m_tagged_image.intrinsic_matrix.at<double>(r, c) = cam_data["intrinsic_matrix"][r][c];
                }
              }

              // Warning! This cv::Mat constructor do not copy data!
              cv::Mat unsafe_image = cv::Mat(cv::Size(w, h), CV_8UC1,
                                             const_cast<unsigned char*>(reinterpret_cast<const unsigned char*>(image_decoded.c_str())),
                                             cv::Mat::AUTO_STEP);
              // It is now safe to keep m_image
              m_tagged_image.image = unsafe_image.clone();

              // Flag availability of a new picture
              m_image_available = true;
              m_is_idle = true;
            } catch (const ConnectionClosed& e)
            {
              m_task->err("%s", e.what());
              m_error = true;
            } catch (const NetworkError& e)
            {
              m_task->err("%s", e.what());
              m_error = true;
            }

          }

          Delay::waitMsec(10);
        }

        m_task->inf("Morse image grabber stopped");
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Flag to signal an error state
      bool m_error;
      //! Flag to control capture of frames
      bool m_grab;
      //! Flag to control state of image capture.
      bool m_is_idle;
      //! Flag to control state of image capture.
      bool m_image_available;

      //! Morse IP address
      Address m_address;
      //! Morse port
      uint16_t m_port;
      //! TCP socket to communicate with morse
      TCPSocket* m_sock_rpc;
      //! TCP socket to connect to the morse camera datastream
      TCPSocket* m_sock_datastream;

      //! Geotagged image obtained from morse
      TaggedImage m_tagged_image;

      //! Morse robot name
      std::string m_robot_name = "drone";
      //! Morse camera name
      std::string m_camera_name = "ircam";
      //! Morse teleport name
      std::string m_teleport_name = "teleport";
      //! Recv buffer.
      std::array<char, 0x100000> m_buffer = std::array<char, 0x100000>();

      bool connect_rpc_socket()
      {
        // Try connect to Morse
        int num_restarts = 999;
        while (num_restarts > 0)
        {
          try
          {
//            delete m_sock_rpc;
            m_sock_rpc = new TCPSocket();
//            m_sock_rpc->setReceiveTimeout(20);
            m_task->inf("Connecting to morse at %s:%d", m_address.c_str(), m_port);
            m_sock_rpc->connect(m_address, m_port);
            m_error = false;
            num_restarts = -1;
            return true;
          } catch (const Exception& e)
          {
            m_task->err("%s", e.what());
            m_error = true;
            num_restarts -= 1;
            delete m_sock_rpc;
            Delay::wait(1);
          }
        }
        return false;
      }

      bool connect_datastream_socket(uint16_t port)
      {
        int num_restarts = 10;
        while (num_restarts > 0)
        {
          // Try connect to Morse
          try
          {
            m_sock_datastream = new TCPSocket();
//          m_sock_datastream->setReceiveTimeout(1);
            m_sock_datastream->connect(m_address, port);
            m_error = false;
            num_restarts = -1;
            return true;
          } catch (const Exception& e)
          {
            m_task->err("%s", e.what());
            m_error = true;
            num_restarts -= 1;
            delete m_sock_datastream;
            Delay::wait(1);
          }
        }
        return true;
      }

      bool translate_camera_to(double x, double y, double z)
      {
        std::stringstream teleport_component;
        teleport_component << m_robot_name << "." << m_teleport_name;

        std::stringstream pose_args;
        pose_args << json::array({x, y, z});

        json result = rpc(teleport_component.str(),
                          "translate",
                          pose_args.str());
        return true;
      }

      bool rotate_camera_to(double phi, double theta, double psi)
      {
        std::stringstream teleport_component;
        teleport_component << m_robot_name << "." << m_teleport_name;

        std::stringstream pose_args;
        pose_args << json::array({phi, theta, psi});

        json result = rpc(teleport_component.str(),
                          "rotate",
                          pose_args.str());
        return true;
      }

      bool capture_image()
      {
        std::stringstream camera_component;
        camera_component << m_robot_name << "." << m_camera_name;

        json result = rpc(camera_component.str(),
                          "capture",
                          "[1]");
        return true;
      }

      uint16_t get_stream_port(std::string component)
      {
        std::stringstream args;
        args << "[\"" << component << "\"]";

        json result = rpc("simulation",
                          "get_stream_port",
                          args.str());
        return result["result"];
      }

      json process_camera_datastream()
      {
        // READ ANSWER
        size_t recv_last = 0;
        size_t recv_size = 0;
        bool complete = false;
        auto message_end = m_buffer.begin();
        while (!complete)
        {
          recv_last = m_sock_datastream->read(m_buffer.data() + recv_size, m_buffer.size() - recv_size);
          recv_size += recv_last;

          message_end = std::find(m_buffer.begin(), m_buffer.begin() + recv_size, '\n');
          if (message_end != m_buffer.begin() + recv_size)
          {
            complete = true;
          }
        }

        if (recv_size < 1)
        { return {}; }

        //Images are B&W 640x480 ~ 0.3MB in base64 (size ~ * 4/3) < 0.5MB
        std::string answer = std::string(m_buffer.begin(), message_end);
        rtrim(answer);

        try
        {
          json j_r = json::parse(answer);
          return j_r;
        } catch (const json::parse_error& e)
        {
          m_task->err("%s", e.what());
          return {};
        }
      }

      json rpc(std::string component, std::string service, std::string args)
      {
        std::string id = "id1";
        // BUILD MESSAGE
        std::stringstream rpc_message;
        rpc_message << id << " " << component << " " << service << " ";
        rpc_message << args << std::endl;

        m_task->inf("%s", rpc_message.str().c_str());

        // SEND
        m_sock_rpc->writeString(rpc_message.str().c_str());

        // READ ANSWER
        size_t recv_size = 0;
        recv_size = m_sock_rpc->read(m_buffer.data(), m_buffer.size());

        std::string answer = std::string(m_buffer.data(), recv_size);
        rtrim(answer);

        // DECODE ANSWER
        json j_answer;
        std::vector<std::string> tokens = split(std::string(answer.begin(), answer.end()), ' ');

        j_answer["id"] = tokens[0];
        j_answer["status"] = tokens[1];

        if (tokens[1] == "SUCCESS")
        {
          if (tokens.size() > 2)
          {
            try
            {
              json j_r = json::parse(tokens[2]);
              j_answer["result"] = j_r;
              return j_answer;
            } catch (const json::parse_error& e)
            {
              m_task->err("%s", e.what());
            }
          }
        }

        return j_answer;
      }

      static bool check_field_is_present(json json_obj, std::string field)
      {
        if ((json_obj).find(field) == (json_obj).end())
        {
          return false;
        }
        return true;
      }

      static std::vector<std::string> split(const std::string& s, char separator)
      {
        std::vector<std::string> output;

        std::string::size_type prev_pos = 0, pos = 0;

        while ((pos = s.find(separator, pos)) != std::string::npos)
        {
          std::string substring(s.substr(prev_pos, pos - prev_pos));

          output.push_back(substring);

          prev_pos = ++pos;
        }

        output.push_back(s.substr(prev_pos, pos - prev_pos)); // Last word

        return output;
      }

      static inline void rtrim(std::string& s)
      {
        s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch)
        {
          return !std::isspace(ch);
        }).base(), s.end());
      }
    };
  }
}


#endif //DUNE_MORSEIMAGEGRABBER_H
