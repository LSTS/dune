//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

#ifndef Plan_DB_H
#define Plan_DB_H


#include <DUNE/DUNE.hpp>
#include "DB.hpp"

namespace Plan
{
  namespace DB
  {
    using DUNE_NAMESPACES;

    struct PlanInformation
    {
      PlanInformation(float ps, char pid, int sid):
        plan_size(ps),
        plan_id(pid),
        change_sid(sid)
      { }

      template <typename Type>
      PlanInformation(const Type* plan)
      {
        plan_size = plan->getPayloadSerializationSize();
        plan_id = plan->plan_id;
        change_sid = plan->getSource();
      }

      ~PlanInformation(void)
      { }

      //! Plan size
      float plan_size;
      //! Plan Id
      char plan_id;
      //! System id
      int change_sid;
    };

    /*class Base
{
public:
  virtual void doSomething(int &i, IMC::PlanDBInformation &m_plan_info);
};

class A : public Base
{
  void doSomething(int &i, IMC::PlanDBInformation &m_plan_info) { std::cout << "Teste\n"<<m_plan_info.plan_id; i=20; }
  };*/

    /*
std::vector<Base*> pointers;
        int i = 0;
        if(i == 0)
          pointers.push_back(new A);

        pointers[0]->doSomething(i, m_plan_info);
        printf("i %d\n",i);
        delete pointers[0];
    */

  }
}
#endif
