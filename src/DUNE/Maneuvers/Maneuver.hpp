//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MANEUVERS_MANEUVER_HPP_INCLUDED_
#define DUNE_MANEUVERS_MANEUVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Tasks.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Time.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Maneuver;

    //! Base abstract class for maneuver tasks.
    class Maneuver: public Tasks::Task
    {
    public:
      //! Constructor.
      Maneuver(const std::string& name, Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~Maneuver();

      //! On entity reservation
      void
      onEntityReservation(void);

      //! On resource initialization
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! On maneuver activation
      virtual void
      onManeuverActivation(void)
      { }

      //! On maneuver deactivation
      virtual void
      onManeuverDeactivation(void)
      { }

      //! On Path Control State
      virtual void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        (void)pcs;
      }

      //! On task activation
      //! Should be used only by parent class Maneuver
      void
      onActivation(void);

      //! On task deactivation
      //! Should be used only by parent class Maneuver
      void
      onDeactivation(void);

      //! Method fired on maneuver startup.
      //! It performs some initialization, then delegates handling on
      //! the task's consume method for the message.
      //! @param maneuver maneuver object
      template <typename T, typename M>
      void
      startManeuver(const M* maneuver)
      {
        debug("enabling");
        signalProgress(65535, "in progress");

        requestActivation();

        static_cast<T*>(this)->consume(maneuver);
      }

      template <typename T, typename M>
      void
      bindToManeuver(void)
      {
        void (Maneuver::* startfunc)(const M*) = &Maneuver::startManeuver<T, M>;
        Task::bind<M>(this, startfunc);
        m_reg_man.insert(M::getIdStatic());
      }

      template <typename T>
      void
      bindToManeuvers(T* task_obj, const std::vector<uint32_t>& list)
      {
        void (Maneuver::* startfunc)(const IMC::Maneuver*) = &Maneuver::startManeuver<T, IMC::Maneuver>;

        Task::bind<T, IMC::Maneuver>(task_obj, list, startfunc);

        for (unsigned int i = 0; i < list.size(); ++i)
          m_reg_man.insert(list[i]);
      }

      template <typename M, typename T>
      void
      consumeIfActive(const M* msg)
      {
        if (isActive())
          static_cast<T*>(this)->consume(msg);
      }

      template <typename M, typename T>
      void
      bind(T* task_obj, bool always = false)
      {
        if (always)
        {
          Task::bind<M>(task_obj);
        }
        else
        {
          void (Maneuver::* func)(const M*) = &Maneuver::consumeIfActive<M, T>;
          Task::bind<M>(this, func);
        }
      }

      //! Consumer for StopManeuver message.
      //! @param sm message to consume.
      void
      consume(const IMC::StopManeuver* sm);

      //! Consumer for PathControlState message.
      //! @param pcs message to consume.
      void
      consume(const IMC::PathControlState* pcs);

      //! Set or reconfigure control loops used by maneuver task.
      //! @param mask mask identifying controllers that should be made active.
      void
      setControl(uint32_t mask);

      //! Set entity Id for dispatching message
      //! Useful for maneuvers binding to more than one maneuver message
      void
      setEntityId(unsigned eid)
      {
        m_eid = eid;
      }

      //! Dispatch needs to be handled in a special fashion for DesiredPath.
      //! This function handles every other kind of message.
      //! @param[in] msg message pointer.
      //! @param[in] flags bitfield with flags.
      void
      dispatch(IMC::Message* msg, unsigned int flags = 0)
      {
        msg->setSourceEntity(m_eid);
        flags |= Tasks::DF_KEEP_SRC_EID;
        Task::dispatch(msg, flags);
      }

      //! Dispatch needs to be handled in a special fashion for DesiredPath.
      //! This function handles every other kind of message.
      //! @param[in] msg message reference.
      //! @param[in] flags bitfield with flags.
      void
      dispatch(IMC::Message& msg, unsigned int flags = 0)
      {
        dispatch(&msg, flags);
      }

      //! Dispatch needs to be handled in a special fashion for DesiredPath.
      //! @param[in] msg message pointer.
      //! @param[in] flags bitfield with flags.
      void
      dispatch(IMC::DesiredPath* msg, unsigned int flags = 0)
      {
        msg->path_ref = changePathRef();

        msg->setSourceEntity(m_eid);
        flags |= Tasks::DF_KEEP_SRC_EID;
        Task::dispatch(msg, flags);
      }

      //! Dispatch needs to be handled in a special fashion for DesiredPath.
      //! @param[in] msg message reference.
      //! @param[in] flags bitfield with flags.
      void
      dispatch(IMC::DesiredPath& msg, unsigned int flags = 0)
      {
        dispatch(&msg, flags);
      }

      //! State report handler.
      //! It should be overriden by maneuvers where it
      //! convenient to do so in time-triggered manner
      //! rather than in response to a particular message.
      virtual void
      onStateReport(void)
      { }

      //! Update active control loops
      //! @param cl control loops message
      void
      updateLoops(const IMC::ControlLoops* cl);

      //! Signal an error.
      //! This method should be used by subclasses to signal an error condition.
      //! @param msg error message
      void
      signalError(const std::string& msg);

      //! Signal invalid Z reference
      //! This method should be used by subclasses to signal an error condition.
      void
      signalInvalidZ(void);

      //! Signal no altitude error.
      //! This method should be used by subclasses to signal an error condition.
      void
      signalNoAltitude(void);

      //! Signal an error.
      //! This method should be used by subclasses to signal maneuver completion.
      //! @param msg completion message
      void
      signalCompletion(const std::string& msg = "done");

      //! Signal maneuver progress.
      //! @param time_left estimated time for completion.
      //! @param msg human-readable information.
      void
      signalProgress(uint16_t time_left, const std::string& msg);

      //! Signal maneuver progress.
      //! @param msg human-readable information.
      inline void
      signalProgress(const std::string& msg)
      {
        signalProgress(65535, msg);
      }

      //! Signal maneuver progress.
      //! @param time_left estimated time for completion.
      inline void
      signalProgress(uint16_t time_left)
      {
        signalProgress(time_left, "");
      }

      //! Signal maneuver progress.
      inline void
      signalProgress(void)
      {
        signalProgress("");
      }

      void
      onMain(void);

    private:
      //! Update the scope reference
      //! @return new sequence number for the scope
      uint32_t
      changeScopeRef(void);

      //! Update path reference
      //! @return new sequence number for the desired path
      uint32_t
      changePathRef(void);

      //! Entity to use when dispatching message
      unsigned m_eid;
      //! Set of registered maneuvers
      std::set<uint16_t> m_reg_man;
    };
  }
}

#endif
