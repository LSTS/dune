#ifndef ACTUATORS_PWMV2_DIRECTPWM_HPP_
#define ACTUATORS_PWMV2_DIRECTPWM_HPP_

#include "DMA.hpp"
#include "DirectGPIO.hpp"

namespace Actuators
{
  namespace PWMv2
  {
    const unsigned int c_PWM_REGISTER_OFFSET    = 0x20C000;
    const unsigned int c_CLOCK_REGISTER_OFFSET  = 0x101000;
    
    //! READING/WRITING WITHOUT BARRIER
    class DirectPWM
    {
    public:

      DirectPWM()
      {
        off_t p_off;
        size_t p_size;
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
                /* looks like RPI 4 */
                base_address = (buf[8] << 24) |
                      (buf[9] << 16) |
                      (buf[10] << 8) |
                      (buf[11] << 0);
                      
                peri_size = (buf[12] << 24) |
                (buf[13] << 16) |
                (buf[14] << 8) |
                (buf[15] << 0);
            }
            /* check for valid known range formats */
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

        int fd = open("/dev/mem", O_RDWR | O_SYNC);
        if(fd < 0)
          throw std::runtime_error("Failed to open /dev/mem");

        uint32_t* peri = (uint32_t*)mmap(NULL, p_size, (PROT_READ | PROT_WRITE), MAP_SHARED, fd, p_off);
        if (peri == MAP_FAILED)
          throw std::runtime_error("Failed to map memory");

        volatile uint32_t *gpio_base, *pwm_base, *clock_base;
        gpio_base   = peri + c_GPIO_REGISTER_OFFSET/4;
        pwm_base    = peri + c_PWM_REGISTER_OFFSET/4;
        clock_base  = peri + c_CLOCK_REGISTER_OFFSET/4;
        
        close(fd);


        initGPIO(gpio_base, 18);
        //set PWM clock
        setPWMclock(clock_base);

        //set PWM mode
        uint32_t ctl = read_peri(pwm_base);
        ctl |= 0x01;    // enable pwm channel 0
        ctl |= 0x080;   // use M/S transmission
        write_peri(pwm_base, ctl);

        //pwm_base + 4 -> register channel 0 range
        //write peripheral range 
        write_peri(pwm_base+4, 20'000);//0x400

        //pwm_base + 5 -> register channel 0 range
        //write peripheral data
        write_peri(pwm_base+5, 1'000);
        m_pwm = pwm_base;
      }

      void
      setDutyCycle(uint32_t _duty)
      {
        *(m_pwm+5) = _duty;
      }

      ~DirectPWM()
      {

      }

    private:

      void
      write_peri(volatile uint32_t* addr, uint32_t value)
      {
        //__sync_synchronize();
        *addr = value;
        //__sync_synchronize();
      }

      uint32_t
      read_peri(volatile uint32_t* addr)
      {
        uint32_t read;
        //__sync_synchronize();
        read = *addr;
        //__sync_synchronize();
        return read;
      }


      void
      initGPIO(volatile uint32_t* base_addr, int pin)
      {
        // function select 0
        // shift ((index%10)*3) bits
        // mask is always 7
        // 010 -> set GPIO PIN alt func

        volatile uint32_t* pin_addr = base_addr + pin/10;
        uint32_t shift = (pin%10) * 3;
        uint32_t mask = 0b111 << shift;
        uint32_t mode = 0b010 << shift;
        uint32_t value = read_peri(pin_addr);
        value = (value & ~mask) | (mode & mask);
        write_peri(pin_addr, value);
      }

      void
      setPWMclock(volatile uint32_t* clock_addr)
      {
        uint32_t password = (0x5A << 24);
        write_peri(clock_addr + 40, password | 0x01);//stop clock
        Delay::waitMsec(110);

        while ((read_peri(clock_addr + 40) & 0x80) != 0)
        {
          Delay::waitMsec(10);
        }

        uint32_t div = 19; // results in 2.4MHz      19.2MHz
        div &= 0xfff;
        write_peri(clock_addr +41, password | (div << 12)); // set freq
        write_peri(clock_addr +40, password | 0x11);        // enable clock
      }
      
      volatile uint32_t* base_gpio;
      volatile uint32_t* m_pwm;
    };
    
  }
  
} 




#endif