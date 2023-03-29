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

#include <sys/mman.h>

namespace Actuators
{
  namespace PWMv2
  {
    enum ControlRegisterAddr
    {
      DMA0 = 0x7E007000,
      DMA1 = 0x7E007100,
      DMA2 = 0x7E007200//, ...
    };

    class DMA
    {
    public:
      DMA(DUNE::Tasks::Task* task)
      {
        m_task = task;
        print_status();
      }

      ~DMA(){}
    
      void
      print_status()
      {
        int mem_f = open("/dev/mem", O_RDWR | O_SYNC);
        if (mem_f < 0)
        {
          m_task->inf("Failed to open /dev/mem");
          exit(1);
        }
        

        // 4096 default page size
        // 0x3F000000 Peripheral 
        // 0x00007000 -> channel 7 offset
        uint32_t off = 0x00001000;
        if (off*2 == 0x00002000)
        {
          std::cout << "Correct read\n";
        }
        else
          std::cout << "Incorrect read\n";

        for (int i = 0; i < 16; i++)
        {
          uint32_t *result = (uint32_t *)mmap(NULL, 4096, PROT_READ, MAP_SHARED, mem_f, 0x3F000000+off*i);
        
          if (result == MAP_FAILED)
          {
            m_task->inf("mmap failed");
            exit(1);
          }
          
          
          int cs[32];
          for (int n = 0; n < 32; n++)
          {
            int masked_bit = 1 << n;
            int mask = (*result) & masked_bit;
            int m_bit = mask >> n;
            cs[n] = m_bit;
          }
          
          std::cout << "CS channel " << i << ": ";
          for (int n = 0; n < 32; n++)
            std::cout << cs[n];

          std::cout << "\n";
        }
      
        close(mem_f);
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
        uint32_t m_src;             // Source address
        uint32_t m_dst;             // Destination address
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
      
      
    };
    
    
    
  } // namespace DMA
  
} // namespace Actuators



#endif