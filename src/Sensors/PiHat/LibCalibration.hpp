#include <DUNE/DUNE.hpp>

#include "RTIMULib/RTIMULib/RTIMULib.h"

#include "RTIMULib/RTIMULib/RTIMUAccelCal.h"
#include "RTIMULib/RTIMULib/RTIMUMagCal.h"

#include <sys/wait.h>

namespace Sensors
{
  namespace PiHat
  {

    using DUNE_NAMESPACES;

    constexpr double s_display_hz = 2.0;  // Display update rate in Hz

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
      //! Save calibration
      CMD_SAVE = 4,
      //! Invalid
      CMD_INVALID
    };

    class Calibration
    {
    public:
      Calibration(Task& owner, RTIMUSettings& settings, RTIMU& imu,
                  const std::string& ellipsoid_dir):
        m_owner(owner),
        m_curr_cal(CMD_INVALID),
        m_settings(settings),
        m_imu(imu),
        m_ellipsoid_dir(ellipsoid_dir),
        m_mag_cal(nullptr),
        m_mag_cal_done(false),
        m_wait_mag_done(false),
        m_acc_cal(nullptr),
        m_acc_axis{ false, false, false }
      { }

      ~Calibration(void)
      {
        Memory::clear(m_mag_cal);
        Memory::clear(m_acc_cal);
      }

      void
      startCalibration(CalCmd cmd)
      {
        if (cmd == CMD_EXIT && m_curr_cal < CMD_EXIT)
        {
          saveCalibration();
          return;
        }

        configCalibration();

        switch (cmd)
        {
          case CMD_MAG:
            startMag();
            break;

          case CMD_MAG_ELLI:
            startMagEllipsoid();
            break;

          case CMD_ACC:
            startAccel();
            break;

          default:
            break;
        }
      }

      bool
      onCalibration(void)
      {
        switch (m_curr_cal)
        {
          case CMD_MAG:
            doMag();
            break;

          case CMD_MAG_ELLI:
            doMagEllipsoid();
            break;

          case CMD_ACC:
            doAccel();
            break;

          default:
            return false;
        }

        displayCalibration();
        return true;
      }

      void
      displayCalibration(void)
      {
        static Counter<double> wdog(1.0 / s_display_hz);
        if (!wdog.overflow())
          return;

        switch (m_curr_cal)
        {
          case CMD_MAG:
            displayMag();
            break;

          case CMD_MAG_ELLI:
            displayMagEllipsoid();
            break;

          case CMD_ACC:
            displayAccel();
            break;

          default:
            break;
        }

        wdog.reset();
      }

      void
      configCalibration(void)
      {
        if (m_mag_cal == nullptr)
        {
          m_mag_cal = new RTIMUMagCal(&m_settings);
          m_mag_cal->magCalInit();

          m_mag_cal_done = false;
        }

        if (m_acc_cal == nullptr)
        {
          m_acc_cal = new RTIMUAccelCal(&m_settings);
          m_acc_cal->accelCalInit();
        }
      }

      void
      saveCalibration(void)
      {
        m_owner.inf("Request save calibration [not implemented]");
        if (m_curr_cal == CMD_MAG)
        {
          if (m_mag_cal->magCalValid())
          {
            m_owner.inf("Magnetometer calibration valid");
            m_mag_cal->magCalSaveMinMax();
            m_mag_cal_done = true;
            m_curr_cal = m_wait_mag_done ? CMD_MAG_ELLI : CMD_INVALID;
            m_wait_mag_done = false;
          }
        }
        else
          m_curr_cal = CMD_INVALID;
      }

      void
      startMag(void)
      {
        m_owner.debug("Starting Mag calibration!");
        m_curr_cal = CMD_MAG;
        m_mag_cal_done = false;
      }

      void
      doMag(void)
      {
        while (m_imu.IMURead())
          m_mag_cal->newMinMaxData(m_imu.getIMUData().compass);
      }

      void
      displayMag(void)
      {
        m_owner.inf("Min x: %6.2f  min y: %6.2f  min z: %6.2f", m_mag_cal->m_magMin.data(0),
                    m_mag_cal->m_magMin.data(1), m_mag_cal->m_magMin.data(2));

        m_owner.inf("Max x: %6.2f  max y: %6.2f  max z: %6.2f", m_mag_cal->m_magMax.data(0),
                    m_mag_cal->m_magMax.data(1), m_mag_cal->m_magMax.data(2));
      }

      void
      startMagEllipsoid(void)
      {
        if (!m_mag_cal_done)
        {
          m_owner.err("Cannot collect ellipsoid data until magnetometer min/max calibration has "
                      "been performed.");

          m_wait_mag_done = true;
          startCalibration(CMD_MAG);
          return;
        }

        m_curr_cal = CMD_MAG_ELLI;
      }

      void
      doMagEllipsoid(void)
      {
        while (m_imu.IMURead())
          m_mag_cal->newEllipsoidData(m_imu.getIMUData().compass);

        if (m_mag_cal->magCalEllipsoidValid())
        {
          m_owner.inf("Ellipsoid calibration valid");
          processEllipsoid();
          m_mag_cal->magCalSaveRaw(m_ellipsoid_dir.c_str());
          m_curr_cal = CMD_INVALID;
        }
      }

      void
      processEllipsoid(void)
      {
        int status;
        pid_t pid;

        pid = fork();
        if (pid == 0)
        {
          onChild();
          return;
        }
        else if (pid < 0)
        {
          m_owner.err("Failed to start ellipsoid fitting code.");
          return;
        }

        //  parent process - wait for child
        if (waitpid(pid, &status, 0) != pid)
        {
          m_owner.err("Ellipsoid fit failed, %d", status);
          return;
        }

        if (status != 0)
        {
          m_owner.err("Ellipsoid fit returned %d - aborting.", status);
          return;
        }

        m_owner.inf("Ellipsoid fit completed - saving data to file.");
        m_mag_cal->magCalSaveCorr(m_ellipsoid_dir.c_str());
      }

      void
      onChild(void)
      {
        chdir(m_ellipsoid_dir.c_str());
        execl("/bin/sh", "/bin/sh", "-c", RTIMUCALDEFS_OCTAVE_COMMAND, NULL);
        printf("here");
        _exit(EXIT_FAILURE);
      }

      void
      displayMagEllipsoid(void)
      {
        int counts[RTIMUCALDEFS_OCTANT_COUNT];

        m_mag_cal->magCalOctantCounts(counts);

        m_owner.inf("---: %d  +--: %d  -+-: %d  ++-: %d\n", counts[0], counts[1], counts[2],
                    counts[3]);
        m_owner.inf("--+: %d  +-+: %d  -++: %d  +++: %d\n", counts[4], counts[5], counts[6],
                    counts[7]);
      }

      void
      startAccel(void)
      {
        m_curr_cal = CMD_ACC;

        if (m_acc_cal == nullptr)
        {
          m_acc_cal = new RTIMUAccelCal(&m_settings);
          m_acc_cal->accelCalInit();
        }

        for (int i = 0; i < 3; i++)
          m_acc_cal->accelCalEnable(i, true);

        m_acc_cal->accelCalReset();
        for (int i = 0; i < 3; i++)
          m_acc_cal->accelCalEnable(i, false);
      }

      void
      doAccel(void)
      {
        while (m_imu.IMURead())
        {
          for (int i = 0; i < 3; i++)
            m_acc_cal->accelCalEnable(i, m_acc_axis[i]);

          m_acc_cal->newAccelCalData(m_imu.getIMUData().accel);
          m_owner.inf("Accel x: %6.2f  y: %6.2f  z: %6.2f", m_acc_cal->m_accelMin.data(0),
                      m_acc_cal->m_accelMin.data(1), m_acc_cal->m_accelMin.data(2));
        }
      }

      void
      displayAccel(void)
      {
        m_owner.inf("x - %s y - %s z - %s", m_acc_axis[0] ? "enabled" : "disabled",
                    m_acc_axis[1] ? "enabled" : "disabled", m_acc_axis[2] ? "enabled" : "disabled");

        m_owner.inf("Min x: %6.2f  min y: %6.2f  min z: %6.2f\n", m_acc_cal->m_accelMin.data(0),
                    m_acc_cal->m_accelMin.data(1), m_acc_cal->m_accelMin.data(2));
        m_owner.inf("Max x: %6.2f  max y: %6.2f  max z: %6.2f\n", m_acc_cal->m_accelMax.data(0),
                    m_acc_cal->m_accelMax.data(1), m_acc_cal->m_accelMax.data(2));
      }

      Task& m_owner;

      //! Current calibration mode.
      CalCmd m_curr_cal;

      RTIMUSettings& m_settings;
      RTIMU& m_imu;

      std::string m_ellipsoid_dir;

      RTIMUMagCal* m_mag_cal;
      bool m_mag_cal_done = false;
      bool m_wait_mag_done;

      RTIMUAccelCal* m_acc_cal;
      bool m_acc_axis[3];
    };

  }
}
