//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <curl/curl.h>

namespace Transports
{
  namespace FTP
  {
    namespace Client
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Verbose output from libcurl.
        bool verbose;
      };

      struct UploadData
      {
        std::string buffer;
        size_t offset = 0;
      };

      struct Destination
      {
        std::string url;
        std::string username;
        std::string password;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Arguments.
        Arguments m_args;
        //! libcurl handle.
        CURL* m_curl;
        //! Data for text uploads.
        UploadData m_upload;
        //! Destination information.
        Destination m_dest;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_curl(nullptr)
        {
          param("Verbose", m_args.verbose)
          .defaultValue("false")
          .description("Enable verbose output from libcurl.");
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
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
          curl_global_init(CURL_GLOBAL_DEFAULT);
          m_curl = curl_easy_init();
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          if (m_curl)
            curl_easy_cleanup(m_curl);

          curl_global_cleanup();
        }

        void
        sendFile(const std::string& file_dir, const Destination& dest)
        {
          if (!m_curl)
            return;

          if (file_dir.empty())
          {
            debug("file directory is empty");
            return;
          }

          if (dest.url.empty())
          {
            debug("destination URL is empty");
            return;
          }

          if (dest.username.empty())
          {
            debug("destination username is empty");
            return;
          }

          FILE* hd_src = fopen(file_dir.c_str(), "rb");
          if (!hd_src)
          {
            war("failed to open file: '%s'", file_dir.c_str());
            return;
          }

          curl_easy_reset(m_curl);
          curl_easy_setopt(m_curl, CURLOPT_URL, dest.url.c_str());
          curl_easy_setopt(m_curl, CURLOPT_USERNAME, dest.username.c_str());
          curl_easy_setopt(m_curl, CURLOPT_PASSWORD, dest.password.c_str());
          curl_easy_setopt(m_curl, CURLOPT_UPLOAD, 1L);
          curl_easy_setopt(m_curl, CURLOPT_READDATA, hd_src);

          if (m_args.verbose)
            curl_easy_setopt(m_curl, CURLOPT_VERBOSE, 1L);

          auto res = curl_easy_perform(m_curl);
          fclose(hd_src);

          if (res != CURLE_OK)
            war("file upload failed: %s", curl_easy_strerror(res));
          else
            trace("file upload successful");
        }

        static size_t
        read_callback(void *ptr, size_t size, size_t nmemb, void *userdata)
        {
          UploadData* upload = static_cast<UploadData*>(userdata);
          size_t max = size * nmemb;

          if (upload->offset >= upload->buffer.size())
            return 0;

          size_t to_copy = std::min(max, upload->buffer.size() - upload->offset);
          memcpy(ptr, upload->buffer.data() + upload->offset, to_copy);
          upload->offset += to_copy;
          return to_copy;
        }

        void
        sendText(const std::string& text, const Destination& dest, bool append = false)
        {
          if (!m_curl)
            return;

          if (dest.url.empty())
          {
            debug("destination URL is empty");
            return;
          }

          if (dest.username.empty())
          {
            debug("destination username is empty");
            return;
          }

          m_upload.buffer = text;
          m_upload.offset = 0;
          curl_easy_reset(m_curl);
          curl_easy_setopt(m_curl, CURLOPT_URL, dest.url.c_str());
          curl_easy_setopt(m_curl, CURLOPT_USERNAME, dest.username.c_str());
          curl_easy_setopt(m_curl, CURLOPT_PASSWORD, dest.password.c_str());
          curl_easy_setopt(m_curl, CURLOPT_UPLOAD, 1L);
          curl_easy_setopt(m_curl, CURLOPT_APPEND, append ? 1L : 0L);
          curl_easy_setopt(m_curl, CURLOPT_READFUNCTION, read_callback);
          curl_easy_setopt(m_curl, CURLOPT_READDATA, &m_upload);

          if (m_args.verbose)
            curl_easy_setopt(m_curl, CURLOPT_VERBOSE, 1L);

          auto res = curl_easy_perform(m_curl);

          if (res != CURLE_OK)
            war("text upload failed: %s", curl_easy_strerror(res));
          else
            trace("text upload successful");
        }

        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1);
          }
        }
      };
    }
  }
}

DUNE_TASK
