#ifndef ACTUATORS_PWMV2_DMA_HPP_INCLUDED_
#define ACTUATORS_PWMV2_DMA_HPP_INCLUDED_

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
    // for rasp 2
    const int c_DMA_PAGE  = 0x00001000;
    const int c_DMA_OFF   = 0x00000100; // DMA block offset
    const int c_DMA_BASE  = 0x3F007000; // DMA base addr (physical addr) 
  
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
      PRIORITY                          = (1 << 16),  //16:19 Multiple bits -> 1-8 priority
      PANIC_PRIORITY                    = (1 << 20),  //20:23 Multiple bits -> 1-8 priority
      // 24:27 Reserved - Write as 0
      WAIT_FOR_OUTSTANDING_WRITES       = (1 << 28),
      DISDEBUG                          = (1 << 29),
      ABORT                             = (1 << 30),
      RESET                             = (1 << 31)
    };

    enum TransferInformation
    {
      
    };

    enum Alloc
    {
      MEM_FLAG_DISCARDABLE      = 1 << 0, /* can be resized to 0 at any time. Use for cached data */
      MEM_FLAG_NORMAL           = 0 << 2, /* normal allocating alias. Don't use from ARM */
      MEM_FLAG_DIRECT           = 1 << 2, /* 0xC alias uncached */
      MEM_FLAG_COHERENT         = 2 << 2, /* 0x8 alias. Non-allocating in L2 but coherent */
      MEM_FLAG_L1_NONALLOCATING = (MEM_FLAG_DIRECT | MEM_FLAG_COHERENT), /* Allocating in L2 */
      MEM_FLAG_ZERO             = 1 << 4,  /* initialise buffer to all zeros */
      MEM_FLAG_NO_INIT          = 1 << 5, /* don't initialise (default is initialise to all ones */
      MEM_FLAG_HINT_PERMALOCK   = 1 << 6, /* Likely to be locked for long periods of time. */
    };

    class DMA
    {
    private: // Private structs

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

      //! Memory block that represents memory allocated in physical memory and locked there
      //! This block is not in L1/L2 cache so writing will also modify the physical memory
      //! This block is required by DMA applications so that we can write to memory acessable by the DMA controller
      struct DMAHandle
      {
        void* base_addr;            // Virtual base address
        uint32_t bus_addr;
        uint32_t mailbox;
        uint32_t size;
      };
      
    
    public:
      DMA(DUNE::Tasks::Task* task)
        :m_task(task)
      {
        m_mailbox = open_mailbox();
        m_task->inf("Opened mailbox");

        int fd = open("/dev/mem", O_RDWR | O_SYNC);
        if(fd < 0)
          throw std::runtime_error("Failed to open /dev/mem");

        uint32_t *result = (uint32_t *)mmap(NULL, c_DMA_PAGE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, c_DMA_BASE);
        if (result == MAP_FAILED)
          throw std::runtime_error("Failed addr mapping");
        
        close(fd);

        uint8_t* base = (uint8_t*)result;
        int dma_channel = 1;
        m_reg = (ControlRegister*)(base + dma_channel*c_DMA_OFF); // using dma channel 1
        
      }

      ~DMA(){}

      uint32_t
      get_ControlBlock(int index)
      {
        // goes through the list of ControlBlocks
        (void)index;
        return 0;
      }

      void
      start()
      {
        // Reset DMA channel
        m_reg->m_status  = ControlStatus::ABORT;
        m_reg->m_status  = 0;
        m_reg->m_status  = ControlStatus::RESET;
        m_reg->m_cb_addr = 0;

        m_reg->m_status  = ControlStatus::INT + ControlStatus::END;

        m_reg->m_cb_addr = get_ControlBlock(0);
        m_reg->m_status  = ControlStatus::DISDEBUG
                         + ControlStatus::WAIT_FOR_OUTSTANDING_WRITES
                         + ControlStatus::PANIC_PRIORITY * 8
                         + ControlStatus::PRIORITY * 8
                         + ControlStatus::ACTIVE;
      }

      void
      allocate_handlers(uint32_t size)
      {
        size = (size + c_DMA_PAGE -1) & (-c_DMA_PAGE); // rounding to multiple of c_page_size 4096

        DMAHandle* mem = (DMAHandle*)malloc(sizeof(DMAHandle));

        mem->mailbox = m_mailbox;
      }

      int
      open_mailbox()
      {
        int file = open("/dev/vcio", 0);
        if (file < 0)
          throw std::runtime_error("Failed to open /dev/vcio");
        
        return file;
      }

      uint32_t
      mem_alloc(uint32_t size, uint32_t align, uint32_t flags)
      {
        // acording to https://github.com/raspberrypi/firmware/wiki/Mailbox-property-interface
        uint32_t buff[32];
        buff[0] = 9*sizeof(*buff);// size in bytes (including the header values, the end tag and padding)
        buff[1] = 0x00000000;     // process request begin

        buff[2] = 0x0003000C;     // tag id
        buff[3] = 12;             // buffer size in bytes
        //buff[4] = 12;             // size of data 
        buff[5] = size;           // number of bytes
        buff[6] = align;          // alignment
        buff[7] = flags;          // flags -> 

        buff[8] = 0x0;            // process request end

        return 0;
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
          uint32_t *result = (uint32_t *)mmap(NULL, c_DMA_PAGE, PROT_READ, MAP_SHARED, mem_f, 0x3F000000+off*i);
          
          if (result == MAP_FAILED)
            throw std::runtime_error("Failed to map memory");    

          list[i] = (*result);
        }
        
        close(mem_f);
        return list;
      }

    private:

      DUNE::Tasks::Task* m_task;
      int m_mailbox;
      ControlRegister* m_reg;
      DMAHandle* m_handle;
    };
  }
  
}



#endif