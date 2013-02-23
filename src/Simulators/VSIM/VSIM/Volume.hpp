//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VOLUME_HPP_INCLUDED_
#define SIMULATORS_VSIM_VOLUME_HPP_INCLUDED_

namespace Simulators
{
  namespace VSIM
  {
    //! Submersed volume calculation class.
    class Volume
    {
    public:
      //! Constructor.
      Volume(double height, double width, double length);

      //! Destructor.
      virtual
      ~Volume(void)
      { }

      //! Get aprox. submersed volume.
      //! @param[in] depth depth of the submersed part.
      //! @return submersed volume.
      virtual double
      sub_volume(double depth);

    private:
      //! Get submersed z component.
      //! @param[in] depth depth of the submersed part.
      //! @return submersed height of the volume (z coordinate).
      virtual double
      zunderwater(double depth);

      //! Dimensions of the volume.
      double m_height;
      double m_width;
      double m_length;
    };
  }
}

#endif
