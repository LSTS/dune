#ifndef ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_
#define ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_

#include "DMA.hpp"
#include "DirectGPIO.hpp"

namespace Actuators
{
  namespace PWMv2
  {
    const unsigned int c_PERI_BASE              = 0x3F000000;
    const unsigned int c_PAGE_SIZE              = 0x01000000;

    const unsigned int c_GPIO_REGISTER_OFFSET   = 0x00200000;
    
    //const unsigned int c_GPIO_SET_OFFSET        = 0x0000001C;
    //const unsigned int c_GPIO_CLR_OFFSET        = 0x00000028;

    const unsigned int c_PWM_REGISTER_OFFSET    = 0x0020C000;
    const unsigned int c_CLOCK_REGISTER_OFFSET  = 0x00101000;
    
    enum FSEL
    {
      INPUT   = 0b000,
      OUTPUT  = 0b001,
      FUNC0   = 0b100,
      FUNC1   = 0b101,
      FUNC2   = 0b110,
      FUNC3   = 0b111,
      FUNC4   = 0b011,
      FUNC5   = 0b010
    };

    //! READING/WRITING WITHOUT BARRIER
    class DirectPWM
    {
    public:

      DirectPWM(int port)
        : m_port(port), m_channel(-1)
      {
        // validate port and channel
        std::ifstream config;
        std::string line;
        config.open("/boot/config.txt");

        int pin1  = -1; 
        int func1 = -1;
        int pin2  = -1;
        int func2 = -1;

        if (config.is_open())
        {
          while (getline(config, line))
          {
            //line must have format {dtoverlay=pwm,pin=XX,func=X}
            if (line.find("dtoverlay=pwm", 0) == 0)
            {
              std::cout << "At [13] " << line[13] << "\n";

              if (line[13] == '-')
              {
                std::cout << "Enabled 2 pwm channels\n";
                pin1 = (line[24] - '0')*10 + line[25]-'0';
                func1 = line[32] - '0';
                std::cout << "PWM channel0: pin " << pin1 << " function " << func1 << "\n";

                pin2 = (line[39] - '0')*10 + line[40]-'0';
                func2 = line[48] - '0';
                std::cout << "PWM channel1: pin " << pin2 << " function " << func2 << "\n";
              }
              else
              {
                std::cout << "Enabled 1 pwm channels\n";
                pin1 = (line[18] - '0')*10 + line[19]-'0';
                func1 = line.back() - '0';
                std::cout << "PWM channel: pin " << pin1 << " function " << func1 << "\n";
              }
              break;
            }
          }
        }
        else
          throw std::runtime_error("Failed to open /boot/config.txt");

        if (m_port == pin1)
          m_channel = 0;
        else if(m_port == pin2)
          m_channel = 1;
        else
          std::runtime_error("PWM port not available in /boot/config.txt");

        std::cout << "Port " << m_port << " CHANNEL " << m_channel << "\n";
        int fd = open("/dev/mem", O_RDWR | O_SYNC);
        if(fd < 0)
          throw std::runtime_error("Failed to open /dev/mem");
        
        uint32_t* peri = (uint32_t*)mmap(NULL, c_PAGE_SIZE, (PROT_READ | PROT_WRITE), MAP_SHARED, fd, c_PERI_BASE);
        if (peri == MAP_FAILED)
          throw std::runtime_error("Failed to map memory");

        m_gpio   = peri + c_GPIO_REGISTER_OFFSET/4;
        m_pwm    = peri + c_PWM_REGISTER_OFFSET/4;
        m_clock  = peri + c_CLOCK_REGISTER_OFFSET/4;
        
        close(fd);

        initGPIO(m_port, FSEL::FUNC5);

        setClock();

        setMode(m_channel, 1);

        setRange(20'000);

        setData(1'000);
      }

      void
      setDutyCycle(uint32_t _duty)
      {
        setData(_duty);
      }

      ~DirectPWM()
      {
        setData(0);
        //disable pwm
      }

    private:

      void
      write_peri(volatile uint32_t* addr, uint32_t value)
      {
        __sync_synchronize();
        *addr = value;
        __sync_synchronize();
      }

      uint32_t
      read_peri(volatile uint32_t* addr)
      {
        uint32_t read;
        __sync_synchronize();
        read = *addr;
        __sync_synchronize();
        return read;
      }


      void
      initGPIO(int pin, int mode)
      {
        // function select 5
        // shift ((index%10)*3) bits
        // mask is always 0b111
        // 010 -> set GPIO PIN alt func 5

        volatile uint32_t* pin_addr = m_gpio + pin/10;
        uint32_t shift = (pin%10) * 3;
        uint32_t mask = 0b111 << shift;
        mode = mode << shift;

        uint32_t value = read_peri(pin_addr);
        value = (value & ~mask) | (mode & mask);
        
        write_peri(pin_addr, value);
      }

      void
      setClock()
      {
        uint32_t password = (0x5A << 24);

        //stop clock
        write_peri(m_clock + 40, password | 0x01);
        Delay::waitMsec(110);

        while ((read_peri(m_clock + 40) & 0x80) != 0)
        {
          Delay::waitMsec(10);
        }

        uint32_t div = 19; // results in 19.2MHz/19
        div &= 0xfff;
        write_peri(m_clock +41, password | (div << 12)); // set freq
        write_peri(m_clock +40, password | 0x11);        // enable clock
      }

      void
      setMode(uint32_t channel, uint32_t mode)
      {
        uint32_t ctl = read_peri(m_pwm);
        if (channel == 0)
        {
          ctl |= 0x0001;    // enable pwm channel 0
          ctl |= 0x0080;    // use M/S transmission
        }
        else
        {
          ctl |= 0x0100;    // enable pwm channel 1
          ctl |= 0x8000;    // use M/S transmission
        }
        
        write_peri(m_pwm, ctl);
      }

      void
      setRange(uint32_t range)
      {
        //m_pwm + 4 -> register channel 0 range
        //m_pwm + 8 -> register channel 0 range

        if (m_channel == 0)
          write_peri(m_pwm+4, range);

        else
          write_peri(m_pwm+8, range);
      }

      void
      setData(uint32_t data)
      {
        //m_pwm + 5 -> register channel 0 data
        //m_pwm + 9 -> register channel 1 data

        if (m_channel == 0)
          write_peri(m_pwm+5, data);
        
        else
          write_peri(m_pwm+9, data);
      }
      
      int m_port;
      int m_channel;
      volatile uint32_t* m_gpio;
      volatile uint32_t* m_clock;
      volatile uint32_t* m_pwm;
    };
  }
} 




#endif


/* 
        FILE* tree = fopen("/proc/device-tree/soc/ranges", "rb");
        unsigned char buf[16];
        uint32_t base_address;
        uint32_t peri_size;
        if (fread(buf, 1, sizeof(buf), tree) >= 8)
        {
            base_address = (buf[4] << 24) |
              (buf[5] << 16) |
              (buf[6] << 8) |
              (buf[7] << 0);
            
            peri_size = (buf[8] << 24) |
              (buf[9] << 16) |
              (buf[10] << 8) |
              (buf[11] << 0);
            
            if (!base_address)
            {
                // looks like RPI 4 
                base_address = (buf[8] << 24) |
                      (buf[9] << 16) |
                      (buf[10] << 8) |
                      (buf[11] << 0);
                      
                peri_size = (buf[12] << 24) |
                (buf[13] << 16) |
                (buf[14] << 8) |
                (buf[15] << 0);
            }
            // check for valid known range formats
            if ((buf[0] == 0x7e) &&
                    (buf[1] == 0x00) &&
                    (buf[2] == 0x00) &&
                    (buf[3] == 0x00) &&
                    ((base_address == c_PERI_BASE)))
            {
                p_off = (off_t)base_address;
                p_size = (size_t)peri_size;
            }
        
        }
        else
          std::runtime_error("Failed to open tree"); 
	      fclose(tree); 
*/
