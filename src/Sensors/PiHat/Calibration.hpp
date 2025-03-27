#include <DUNE/DUNE.hpp>

#include <array>
#include <chrono>
#include <cstdio>
#include <fcntl.h>
#include <functional>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <thread>

#include <sys/wait.h>
#include <unistd.h>

namespace Sensors
{
  namespace PiHat
  {
    using DUNE_NAMESPACES;

    constexpr unsigned c_bufsz = 1024;

    enum CalCmd
    {
      //! Magnetometer calibration
      CMD_MAG = 0,
      //! Magnetometer ellipsoid calibration
      CMD_MAG_ELLI = 1,
      //! Accelerometer calibration
      CMD_ACC = 2,
      //! Exit calibration
      CMD_EXIT = 3,
    };

    class Calibration: public DUNE::Concurrency::Thread
    {
    public:
      Calibration(Task* owner, const std::string& cmd, std::function<void(void)> onCompletion):
        p_read(-1),
        p_write(-1),
        m_owner(owner),
        m_cmd(cmd),
        onEnd(onCompletion)
      { }

      ~Calibration(void)
      {
        if (isRunning())
          stopAndJoin();
      }

      void
      setCalibration(CalCmd cmd)
      {
        if (p_write == -1)
          return;

        char option;
        switch (cmd)
        {
          case CMD_MAG:
            option = 'm';
            break;
          case CMD_MAG_ELLI:
            option = 'e';
            break;
          case CMD_ACC:
            option = 'a';
            break;
          case CMD_EXIT:
            option = 'x';
            break;
          default:
            return;
        }

        m_owner->war("[exec] - Sending calibration command: %c", option);

        sendCommand(&option, 1);
      }

    private:
      ssize_t
      sendCommand(const char* cmd, size_t len)
      {
        if (p_write == -1)
          return 0;

        return write(p_write, cmd, len);
      }

      //! Read from file descriptor
      ssize_t
      doRead(int fd, std::array<char, c_bufsz>& buffer, double seconds = 1.0)
      {
        if (!Poll::poll(fd, seconds))
          return 0;

        size_t idx = 0;
        while (idx < buffer.size() - 1)
        {
          ssize_t rv = read(fd, buffer.data() + idx, 1);
          if (rv <= 0)
            break;

          if (buffer[idx] == '\n')  // Stop reading at newline
            break;

          idx += rv;
        }

        buffer[idx] = '\0';

        return idx;
      }

      //! Create child process to execute calibration command
      pid_t
      createChild(int read[2], int write[2], const char* cmd)
      {
        pid_t pid = fork();
        if (pid == -1)
          throw std::runtime_error("fork() failed!");

        if (pid == 0)
        {
          onChild(read, write, cmd);
          return 0;
        }

        close(read[1]);   // Close unused write end
        close(write[0]);  // Close unused read end

        return pid;
      }

      void
      onChild(int pipe_read[2], int pipe_write[2], const char* cmd)
      {
        m_owner->debug("[exec] - Child process started");

        close(pipe_read[0]);   // Close unused read end
        close(pipe_write[1]);  // Close unused write end

        dup2(pipe_write[0], STDIN_FILENO);  // Redirect stdin to pipe_write read end
        dup2(pipe_read[1], STDOUT_FILENO);  // Redirect stdout to pipe_read write end

        execl("/bin/sh", "sh", "-c", cmd, (char*)NULL);
        exit(EXIT_FAILURE);  // If execl fails
      }

      //! Check if child process has finished
      bool
      checkChild(pid_t pid)
      {
        int status;
        pid_t result = waitpid(pid, &status, WNOHANG);
        if (result == -1)
        {
          m_owner->err("[exec] - waitpid() failed!");
          return false;
        }

        return result != 0;
      }

      float
      extractValue(const std::string& str, const std::string& key)
      {
        size_t start = str.find(key);
        if (start == std::string::npos)
          return NAN;

        start += key.size();
        return std::stof(str.substr(start + 1));
      };

      void
      parseCalibrationValues(const std::array<char, c_bufsz>& buffer)
      {
        float min_x = NAN;
        float min_y = NAN;
        float min_z = NAN;

        int rv = sscanf(buffer.data(), "Min x: %f min y: %f min z: %f", &min_x, &min_y, &min_z);
        if (rv == 3)
        {
          // Update values
          m_mag.min_x = min_x;
          m_mag.min_y = min_y;
          m_mag.min_z = min_z;

          m_owner->war("[exec] - Calibration values: Min x: %.2f, Min y: %.2f, Min z: %.2f", min_x,
                       min_y, min_z);
          return;
        }

        float max_x = NAN;
        float max_y = NAN;
        float max_z = NAN;

        rv = sscanf(buffer.data(), "Max x: %f max y: %f max z: %f", &max_x, &max_y, &max_z);
        if (rv != 3)
          return;

        // Update values
        m_mag.max_x = max_x;
        m_mag.max_y = max_y;
        m_mag.max_z = max_z;

        m_owner->war("[exec] - Calibration values: Max x: %.2f, Max y: %.2f, Max z: %.2f", max_x,
                     max_y, max_z);
      }

      void
      run(void)
      {
        try
        {
          onMain();
        }
        catch (const std::exception& e)
        {
          m_owner->err("[exec] - %s", e.what());
          stop();
        }
      }

      void
      onMain(void)
      {
        m_owner->debug("[exec] - Calibration command: %s", m_cmd.c_str());
        std::array<char, c_bufsz> buffer;

        int pipe_in[2];
        int pipe_out[2];

        if (pipe(pipe_in) == -1 || pipe(pipe_out) == -1)
          throw std::runtime_error("pipe() failed!");

        pid_t pid = createChild(pipe_in, pipe_out, m_cmd.c_str());

        p_read = pipe_in[0];
        p_write = pipe_out[1];

        m_owner->debug("[exec] - Calibration started");

        // int idx = 0;
        while (isRunning())
        {
          // Check if calibration command has finished
          if (checkChild(pid))
          {
            onEnd();
            close(p_read);
            close(p_write);
            return;
          }

          ssize_t count = doRead(p_read, buffer, 0.5);
          if (count <= 0)
            continue;

          m_owner->inf("%s", buffer.data());
          parseCalibrationValues(buffer);
        }

        m_owner->debug("[exec] - Killing child process");
        kill(pid, SIGTERM);
        waitpid(pid, NULL, 0);

        close(p_read);
        close(p_write);
      }

      //! File descriptor for reading from child process
      int p_read;
      //! File descriptor for writing to child process
      int p_write;

      DUNE::Tasks::Task* m_owner;

      std::string m_cmd;

      std::function<void(void)> onEnd;

      struct CalibrationValues
      {
        float min_x;
        float min_y;
        float min_z;
        float max_x;
        float max_y;
        float max_z;
      };

      CalibrationValues m_mag;
    };

  }  // namespace PiHat
}  // namespace Sensors
