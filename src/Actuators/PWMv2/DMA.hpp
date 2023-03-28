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

namespace Actuators
{
  namespace DMA
  {
    enum ControlRegisterAddr
    {
      DMA0 = 0x7E007000,
      DMA1 = 0x7E007100,
      DMA2 = 0x7E007200//, ...
    }

    class DMA
    {
    public:
      DMA()
      {
        /* 
          Write addr of CB structure into CONBLK_AD register and set active bit


        */
      }
      ~DMA(){}
    private:


      struct Channel
      {
        ControlRegister m_reg;
        ControlBlock m_block;
      };

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
      
      
      
      
    };
    
    
    
  } // namespace DMA
  
} // namespace Actuators



#endif