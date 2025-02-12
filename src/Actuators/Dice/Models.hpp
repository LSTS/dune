#ifndef ACTUATORS_DICE_MODELS_HPP_INCLUDED_
#define ACTUATORS_DICE_MODELS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace Dice
  {
    using DUNE_NAMESPACES;
    
    class Model
    {
    public:
      //! Constructor.
      Model(void) = default;
      
      //! Destructor.
      virtual
      ~Model(void) = default;
  
      virtual int16_t
      getRPM(const float& voltage, const int16_t& duty_cycle) = 0;
    };
  }
}

#endif