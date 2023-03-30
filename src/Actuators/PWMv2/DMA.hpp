#ifndef ACTUATORS_DMA_HPP_INCLUDED_
#define ACTUATORS_DMA_HPP_INCLUDED_

/*
For DMA channel N
0xN00   -> Control and status
0x_04   -> Control Block addr
0x_08   -> Word 0 (Transfer information)
0x_0c   -> Word 1 ()
...
0x_20   -> Debug


0xFE0 -> Interrupt status of each DMA channel
0xFF0 -> Global enable bits for each DMA channel

*/

/*
For each channel Control and status (offset 0x0)

bit 31 -> Channel Reset -> write only
bit 30 -> Abort         -> write only
bit 29 -> 
*/

// Download 
// cmake -D CMAKE_C_COMPILER=/path/to/gcc/bin/gcc -D CMAKE_CXX_COMPILER=/path/to/gcc/bin/g++ .
#include <sys/mman.h>
#include <bitset>

// To brute force cmake
// cmake -D CMAKE_C_COMPILER=/home/bogas/dune/build-rpi/toolchain/glued-2022.06.c-lctr-rpi4-toolchain-x86_64-linux-gnu-armv7-lsts-linux-gnueabihf/bin/armv7-lsts-linux-gnueabihf-gcc -D CMAKE_CXX_COMPILER=/home/bogas/dune/build-rpi/toolchain/glued-2022.06.c-lctr-rpi4-toolchain-x86_64-linux-gnu-armv7-lsts-linux-gnueabihf/bin/armv7-lsts-linux-gnueabihf-g++ -DCROSS=/home/bogas/dune/build-rpi/toolchain/glued-2022.06.c-lctr-rpi4-toolchain-x86_64-linux-gnu-armv7-lsts-linux-gnueabihf/bin/armv7-lsts-linux-gnueabihf- ../source/


namespace Actuators
{
  namespace PWMv2
  {
    const int c_page_size = 4096;
    enum ControlRegisterAddr
    {
      DMA0 = 0x7E007000,
      DMA1 = 0x7E007100,
      DMA2 = 0x7E007200//, ...
    };


    enum ControlStatus
    {
      ACTIVE                            = (1 << 0),
      END                               = (1 << 1),
      INT                               = (1 << 2),
      DREQ                              = (1 << 3),
      PAUSED                            = (1 << 4),
      DREQ_STOPS_DMA                    = (1 << 5),
      WAITING_FOR_OUTSTANDING_WRITES    = (1 << 6),
      // 7 Reserved - Write as 0
      ERROR                             = (1 << 8),
      // 9:15 Reserved - Write as 0
      PRIORITY                          = (1 << 16),  //16:19 Multiple bits
      PANIC_PRIORITY                    = (1 << 20),  //20:23 Multiple bits
      // 24:27 Reserved - Write as 0
      WAIT_FOR_OUTSTANDING_WRITES       = (1 << 28),
      DISDEBUG                          = (1 << 29),
      ABORT                             = (1 << 30),
      RESET                             = (1 << 31)
    };

    class DMA
    {
    public:
      DMA(DUNE::Tasks::Task* task)
      {
        m_task = task;
        //print_status(m_task);
        m_task->inf("Hello from home");
      }

      ~DMA(){}
    
      
      void
      new_Handler(uint32_t size)
      {
        size = (size + c_page_size -1) & (-c_page_size); // rounding to multiple of c_page_size 4096
      }

      static std::array<std::bitset<32>,16>
      enumerate_channels()
      {
        std::array<std::bitset<32>,16> list;
        int mem_f = open("/dev/mem", O_RDWR | O_SYNC);
        if (mem_f < 0)
          throw std::runtime_error("Failed to open /dev/mem");


        uint32_t off = 0x00001000;
        for (int i = 0; i < 16; i++)
        {
          uint32_t *result = (uint32_t *)mmap(NULL, c_page_size, PROT_READ, MAP_SHARED, mem_f, 0x3F000000+off*i);
          
          if (result == MAP_FAILED)
            throw std::runtime_error("Failed to map memory");    

          list[i] = (*result);
        }
        
        close(mem_f);
        return list;
      }

    private:

      DUNE::Tasks::Task* m_task;

      struct ControlRegister
      {
        uint32_t m_status;          // Control register control and status
        uint32_t m_cb_addr;         // Control block address
      };

      struct ControlBlock           // 256 bits and must start at a 256-bit aligned address
      {
        uint32_t m_ti;              // Transfer information
        uint32_t m_src;             // Source bus address
        uint32_t m_dst;             // Destination bus address
        uint32_t m_len;             // Transfer lenght
        uint32_t m_stride;          // 2D mode stride ???wtf is this
        uint32_t m_next;            // Next controll block
        uint32_t m_debug[2];        // Padding set to 0
      };
      
      struct Channel
      {
        ControlRegister m_reg;
        ControlBlock m_block;
      };
      
      struct DMAHandler
      {
        void* virtual_addr;
        uint32_t bus_addr;
        uint32_t mb_handle;
        uint32_t size;
      };
    };
  } // namespace DMA
  
} // namespace Actuators



#endif