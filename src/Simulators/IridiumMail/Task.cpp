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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// libcurl headers.
#include <curl/curl.h>

namespace Simulators
{
  //! Simulates Iridium communications by forwarding
  //! IridiumMsgTx messages as emails via SMTP using libcurl.
  //! @author João Bogas
  namespace IridiumMail
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! SMTP server hostname.
      std::string smtp_server;
      //! Sender email address.
      std::string sender_email;
      //! Sender password.
      std::string sender_password;
      //! Recipient email address.
      std::vector<std::string> recipient_emails;
      //! Email subject prefix.
      std::string subject_prefix;
    };

    struct Position
    {
      double lat;
      double lon;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Position of the main entity.
      Position m_position;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("SMTP Server", m_args.smtp_server)
          .defaultValue("smtp://smtp.gmail.com:587")
          .description("SMTP server URL (e.g. smtps://smtp.gmail.com:587)");

        param("Sender Email", m_args.sender_email)
          .defaultValue("")
          .description("Email address used as sender");

        param("Sender Password", m_args.sender_password)
          .defaultValue("")
          .description("SMTP authentication password");

        param("Recipient Email", m_args.recipient_emails)
          .defaultValue("")
          .description("Recipient email addresses (comma-separated)");

        param("Subject Prefix", m_args.subject_prefix)
          .defaultValue("[IridiumMail]")
          .description("Prefix for email subject line");

        bind<IMC::IridiumMsgTx>(this);
        bind<IMC::EstimatedState>(this);
      }

      std::string
      getIMEI(void) const
      {
        try
        {
          return "300234060567650";
        }
        catch (const std::exception& e)
        {
          return "Unknown";
        }
      }

      //! Build email body text from an IridiumMsgTx message.
      std::string
      buildBody(const IMC::IridiumMsgTx* msg)
      {
        time_t now = msg->getTimeStamp();
        char date_buf[128];
        std::strftime(date_buf, sizeof(date_buf), "%Y-%m-%dT%H:%M:%SZ UTC", std::gmtime(&now));

        // Build hex-encoded payload.
        std::string hex_data;
        hex_data.reserve(msg->data.size() * 2);
        for (size_t i = 0; i < msg->data.size(); ++i)
        {
          char b[3];
          std::sprintf(b, "%02X", (unsigned char)msg->data[i]);
          hex_data += b;
        }

        std::stringstream body;
        body << "IMEI: " << getIMEI() << "\r\n";
        body << "MOMSN: " << msg->req_id << "\r\n";
        body << "Transmit Time: " << date_buf << "\r\n";
        body << "Iridium Latitude: " << Angles::degrees(m_position.lat) << "\r\n";
        body << "Iridium Longitude: " << Angles::degrees(m_position.lon) << "\r\n";
        body << "Iridium CEP: " << 67 << "\r\n";
        body << "Data: " << hex_data << "\r\n";

        return body.str();
      }

      //! Build email subject line from an IridiumMsgTx message.
      std::string
      buildSubject(const IMC::IridiumMsgTx* msg)
      {
        std::stringstream ss;
        ss << m_args.subject_prefix
           << " IridiumMsgTx (req_id=" << msg->req_id
           << ", dest=" << msg->destination
           << ", size=" << msg->data.size() << " bytes)";
        return ss.str();
      }

      //! Send an email using libcurl SMTP with MIME support.
      //! @param[in] body email body text.
      //! @param[in] subject email subject line.
      //! @param[in] att_data binary attachment data (empty to skip).
      //! @param[in] att_name attachment filename.
      //! @param[out] error error message on failure.
      //! @return true on success, false on error.
      bool
      sendEmail(const std::string& body, const std::string& subject,
                const std::vector<char>& att_data, const std::string& att_name,
                std::string& error)
      {
        CURL* curl = curl_easy_init();
        if (curl == NULL)
        {
          error = "failed to initialize curl handle";
          return false;
        }

        // SMTP server and credentials.
        curl_easy_setopt(curl, CURLOPT_URL, m_args.smtp_server.c_str());
        curl_easy_setopt(curl, CURLOPT_USERNAME, m_args.sender_email.c_str());
        curl_easy_setopt(curl, CURLOPT_PASSWORD, m_args.sender_password.c_str());
        curl_easy_setopt(curl, CURLOPT_USE_SSL, (long)CURLUSESSL_ALL);

        // SMTP envelope: sender and recipients.
        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, m_args.sender_email.c_str());

        struct curl_slist* rcpts = NULL;
        for (size_t i = 0; i < m_args.recipient_emails.size(); ++i)
          rcpts = curl_slist_append(rcpts, m_args.recipient_emails[i].c_str());
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, rcpts);

        // Email headers (From, To, Subject).
        std::string to_header;
        for (size_t i = 0; i < m_args.recipient_emails.size(); ++i)
        {
          if (i > 0)
            to_header += ", ";
          to_header += "<" + m_args.recipient_emails[i] + ">";
        }

        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers,
                   String::str("From: <%s>", m_args.sender_email.c_str()).c_str());
        headers = curl_slist_append(headers,
                   String::str("To: %s", to_header.c_str()).c_str());
        headers = curl_slist_append(headers,
                   String::str("Subject: %s", subject.c_str()).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        // MIME structure: body + file attachments.
        curl_mime* mime = curl_mime_init(curl);

        // Text body part.
        curl_mimepart* part = curl_mime_addpart(mime);
        curl_mime_data(part, body.c_str(), CURL_ZERO_TERMINATED);
        curl_mime_type(part, "TEXT/PLAIN; charset=UTF-8");

        // Binary attachment.
        if (!att_data.empty())
        {
          part = curl_mime_addpart(mime);
          curl_mime_data(part, &att_data[0], att_data.size());
          curl_mime_filename(part, att_name.c_str());
          std::string mime_type = "application/octet-stream; name=" + att_name;
          curl_mime_type(part, mime_type.c_str());
        }

        curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);

        CURLcode res = curl_easy_perform(curl);

        bool ok = (res == CURLE_OK);
        if (!ok)
          error = curl_easy_strerror(res);

        curl_mime_free(mime);
        curl_slist_free_all(headers);
        curl_slist_free_all(rcpts);
        curl_easy_cleanup(curl);
        return ok;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        curl_global_init(CURL_GLOBAL_DEFAULT);
        setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        curl_global_cleanup();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_position.lat = msg->lat;
        m_position.lon = msg->lon;
        WGS84::displace(msg->x, msg->y, &m_position.lat, &m_position.lon);
      }

      void
      consume(const IMC::IridiumMsgTx* msg)
      {
        IMC::IridiumTxStatus status;
        status.req_id = msg->req_id;
        status.setDestination(msg->getSource());
        status.setDestinationEntity(msg->getSourceEntity());

        std::string body = buildBody(msg);
        std::string subject = buildSubject(msg);
        std::string att_name = String::str("%s-%u.bin", getIMEI().c_str(), msg->req_id);

        inf("Sending email via %s to %s (%d bytes payload)", m_args.smtp_server.c_str(),
            m_args.recipient_emails[0].c_str(), (int)msg->data.size());

        std::string error;
        if (sendEmail(body, subject, msg->data, att_name, error))
        {
          inf("Email sent successfully");
          status.status = IMC::IridiumTxStatus::TXSTATUS_OK;
          status.text = "Sent via email (Simulation)";
        }
        else
        {
          err("Failed to send email: %s", error.c_str());
          status.status = IMC::IridiumTxStatus::TXSTATUS_ERROR;
          status.text = error;
        }

        dispatch(status);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
