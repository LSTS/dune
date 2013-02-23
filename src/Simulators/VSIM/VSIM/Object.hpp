//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Object.hpp 12658 2013-01-21 11:43:00Z jbraga                     $:*
//***************************************************************************

#ifndef SIMULATORS_VSIM_OBJECT_HPP_INCLUDED_
#define SIMULATORS_VSIM_OBJECT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

namespace Simulators
{
  namespace VSIM
  {
    //! %Object properties.
    class Object
    {
    public:
      //! Vehicle type.
      enum Type
      {
        OBJECT,
        VEHICLE,
        UUV,
        UAV,
        USV,
        UGV
      };

      //! Constructor.
      Object(void);

      //! Destructor.
      virtual
      ~Object(void)
      { }

      //! Sets Mass and Inertial and Added Mass Matrix (diagonal).
      //! @param[in] m mass.
      //! @param[in] inertia inertia matrix diagonal values.
      void
      setMassProp(double m, double inertia[6]);

      //! Set linear drag coefficients.
      //! @param[in] coefs linear drag coefficients.
      void
      setLinearDragCoef(double coefs[10]);

      //! Set quadratic drag coefficients.
      //! @param[in] coefs quadratic drag coefficients.
      void
      setQuadraticDragCoef(double coefs[10]);

      //! Define integration method to be applied in update() function.
      //! @param[in] method integration method.
      void
      setIntegrationMethod(bool method)
      {
        m_integration_method = method;
      }

      //! Insert object in virtual World.
      virtual void
      insertInWorld(void);

      //! Define object inertial position.
      //! @param[in] x object position in the x-axis.
      //! @param[in] y object position in the y-axis.
      //! @param[in] z object position in the z-axis.
      virtual void
      setPosition(double x, double y, double z);

      //! Define object inertial orientation.
      //! @param[in] roll object roll orientation.
      //! @param[in] pitch object pitch orientation.
      //! @param[in] yaw object yaw orientation.
      virtual void
      setOrientation(double roll, double pitch, double yaw);

      //! Returns position vector [X,Y,Z].
      //! @return pointer to object position.
      double*
      getPosition(void)
      {
        return m_position;
      }

      //! Returns orientation vector [roll, pitch, yaw].
      //! @return pointer to object orientation
      double*
      getOrientation(void)
      {
        return m_orientation;
      }

      //! Retrieve object's linear velocity (vehicle
      //! referencial 3x1 vector).
      //! @return pointer to object linear velocity.
      double*
      getLinearVelocity(void)
      {
        return m_linear_velocity;
      }

      //! Retrieve object's angular velocity (world
      //! referencial 3x1 vector).
      //! @return pointer to object angular velocity.
      double*
      getAngularVelocity(void)
      {
        return m_angular_velocity;
      }

      //! Applies drag forces actuacting on the object.
      void
      applyDragForces(void);

      //! Apply all object's forces.
      virtual void
      applyForces(void);

      //! Add Forces to be applied to the Object.
      //! @param[in] X force along the x-axis.
      //! @param[in] Y force along the y-axis.
      //! @param[in] Z force along the z-axis.
      //! @param[in] P torque along the x-axis.
      //! @param[in] Q torque along the y-axis.
      //! @param[in] R torque along the z-axis.
      void
      addForces(double X, double Y, double Z, double P, double Q, double R);

      //! Reset Forces applied to Object for the next iteration.
      void
      resetForces(void);

      //! Fetch object position, orientation & velocity from physics engine.
      //! @param[in] timestep integration timestep.
      void
      update(double timestep);

    protected:
      //! Object's mass.
      double m_mass;
      //! Inertia matrix.
      double m_inertia[6];
      //! Object position.
      double m_position[3];
      //! Object orientation.
      double m_orientation[3];
      //! Object linear velocity (body-fixed reference frame).
      double m_linear_velocity[3];
      //! Object angular velocity (body-fixed reference frame).
      double m_angular_velocity[3];

    private:
      //! Object id.
      int m_body_id;
      //! Object type.
      Type m_obj_type;
      //! Quadratic drag coeficients.
      double m_quad_drag_coef[10];
      //! Linear drag coeficients.
      double m_linear_drag_coef[10];
      //! Forces acting on the vehicle. (body-fixed reference frame)
      double m_forces[6];
      //! Velocity Integration Method (true = regular)
      bool m_integration_method;
    };
  }
}

#endif
