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
// Author: João Bogas                                                  	    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "OctoTree.hpp"

namespace Simulators
{
  namespace CTD
  {		
    OctoTree::Bounds::Bounds(double _min_x, double _max_x, double _min_y, double _max_y, double _min_z, double _max_z) :
      max_x(_max_x), max_y(_max_y), max_z(_max_z), min_x(_min_x), min_y(_min_y), min_z(_min_z)
    {
      if(_max_x < min_x || _max_y < min_y || _max_z < min_z)
        throw ERR_INVALID_BOUNDS;
    }

    double
    OctoTree::Bounds::getMidpoint(char axis) const
    {
      if (axis == 'x')
        return (max_x+min_x)/2;
      if (axis == 'y')
        return (max_y+min_y)/2;
      if (axis == 'z')
        return (max_z+min_z)/2;

      return -1;
    }

    OctoTree::Node::Node()
    {
      myRoot = nullptr;
      childs.assign(8,nullptr);
      leaf = true;
    }

    OctoTree::Node::Node(Node* parent, double x, double y, double z, double temp, double cond)
    {
      myRoot = parent;
      item = new Item(x, y, z, temp, cond);
      childs.assign(8,nullptr);
      lim = Bounds(x, y, z);
      leaf = true;
    }

    OctoTree::Node::Node(Node* parent, Item* _data, Bounds oct)
    {
      myRoot = parent;
      item = _data;
      childs.assign(8,nullptr);
      lim = oct;
      leaf = true;
    }


    OctoTree::Node::~Node()
    {
      delete item;
      if (!leaf)
      {
        for (int i = 0; i < 8; i++)
          delete childs[i];
      }
    }

    OctoTree::Node*
    OctoTree::new_root(Node* child, const Bounds& prev_volume, Item* new_data)
    {
      Node* n_root = new Node(nullptr, nullptr, child->lim);
      n_root->leaf = false;

      n_root->expandsBounds(*new_data);

      int pos = n_root->getOctant(prev_volume);
      
      // when expanding if prev point is in the bounds of its node
      // it may be inserted in the "wrong" octant because this point will collide with new bounds mid point
      // the default is to insert the midpoints in the lower volume Ex: Bounds of z:[-1, 1] and new point is z = 0 -> inserting in Q5-8
      if (child->item != nullptr)
      {
        int pos_data = n_root->getOctant(*child->item);
        if (pos != pos_data)
        {
          n_root->insert_data(child->item);
          child->item = nullptr;			
        }
      }
      n_root->childs[pos] = child;
      child->myRoot = n_root;

      if(n_root->isOutBounds(*new_data))
        return new_root(n_root, prev_volume, new_data);

      n_root->item = new_data;

      if (child->lim.max_x == child->lim.min_x)
        child->lim = n_root->getOctoBounds(pos);
      
      return n_root;
    }

    void
    OctoTree::Node::expandsBounds(const Item& val)
    {
      double length = lim.max_x-lim.min_x;
      if (length == 0)
      {
        double dx = (val.x - lim.max_x > 0 ? val.x - lim.max_x : lim.max_x - val.x);
        double dy = (val.y - lim.max_y > 0 ? val.y - lim.max_y : lim.max_y - val.y);
        double dz = (val.z - lim.max_z > 0 ? val.z - lim.max_z : lim.max_z - val.z);
        
        if (dx > dy)
        {
          if (dx > dz)
            length = dx;
          else
            length = dz;
        }
        else
        {
          if (dy > dz)
            length = dy;
          else
            length = dz;
        }
      }

      double mid_x, mid_y, mid_z;
      
      mid_x = (val.x > lim.max_x ? lim.max_x : lim.min_x);
      mid_y = (val.y > lim.max_y ? lim.max_y : lim.min_y);
      mid_z = (val.z > lim.max_z ? lim.max_z : lim.min_z);
      
      lim.max_x = mid_x + length;
      lim.min_x = mid_x - length;
      
      lim.max_y = mid_y + length;
      lim.min_y = mid_y - length;

      lim.max_z = mid_z + length;
      lim.min_z = mid_z - length;
    }

    bool
    OctoTree::Node::isOutBounds(const Item& val)
    {

      if (lim.min_x > val.x || val.x > lim.max_x)
        return true;
      if (lim.min_y > val.y || val.y > lim.max_y)
        return true;
      if (lim.min_z > val.z || val.z > lim.max_z)
        return true;

      return false;
    }

    int
    OctoTree::Node::insert_data(Item* val)
    {
      int pos = getOctant(*val);

      if (childs[pos] == nullptr)
      {
        leaf = false;
        childs[pos] = new Node(this, val, getOctoBounds(pos));
        return 0;
      }
      else if (childs[pos]->item == nullptr)
      {
        childs[pos]->item = val;
        return 0;
      }
      
      return childs[pos]->insert_data(val)+1;
    }

    int
    OctoTree::Node::getOctant(const Bounds& volume)
    {
      double mp_x, mp_y, mp_z;
      mp_x = lim.getMidpoint('x');
      mp_y = lim.getMidpoint('y');
      mp_z = lim.getMidpoint('z');

      double x, y, z;
      x = volume.getMidpoint('x');
      y = volume.getMidpoint('y');
      z = volume.getMidpoint('z');

      if (x > mp_x)
      {
        if (y > mp_y)
        {
          if (z > mp_z)	/*add to Q1 - X > 0, Y > 0, Z > 0 */
            return Q1;	
          else 					/*add to Q5 - X > 0, Y > 0, Z < 0 */
            return Q5;	
        }
        else
        {
          if (z > mp_z)	/*add to Q4 - X > 0, Y < 0, Z > 0 */
            return Q4;
          else 					/*add to Q8 - X > 0, Y < 0, Z < 0 */
            return Q8;
        }
      }
      else
      {
        if (y > mp_y)
        {
          if (z > mp_z)	/*add to Q2 - X < 0, Y > 0, Z > 0 */
            return Q2;
          else					/*add to Q6 - X < 0, Y > 0, Z < 0 */
            return Q6;
        }
        else
        {
          if (z > mp_z)	/*add to Q3 - X < 0, Y < 0, Z > 0 */
            return Q3;	
          else					/*add to Q7 - X < 0, Y < 0, Z < 0 */
            return Q7;
        }
      }
      
      return -1;
    }

    int
    OctoTree::Node::getOctant(const Item& val)
    {
      
      if (isOutBounds(val))
        throw ERR_INVALID_INSERT_POINT;

      double mp_x, mp_y, mp_z;
      mp_x = lim.getMidpoint('x');
      mp_y = lim.getMidpoint('y');
      mp_z = lim.getMidpoint('z');

      if (val.x > mp_x)
      {
        if (val.y > mp_y)
        {
          if (val.z > mp_z)	/*add to Q1 - X > 0, Y > 0, Z > 0 */
            return Q1;	
          else 							/*add to Q5 - X > 0, Y > 0, Z < 0 */
            return Q5;	
        }
        else
        {
          if (val.z > mp_z)	/*add to Q4 - X > 0, Y < 0, Z > 0 */
            return Q4;
          else 							/*add to Q8 - X > 0, Y < 0, Z < 0 */
            return Q8;
        }
      }
      else
      {
        if (val.y > mp_y)
        {
          if (val.z > mp_z)	/*add to Q2 - X < 0, Y > 0, Z > 0 */
            return Q2;
          else							/*add to Q6 - X < 0, Y > 0, Z < 0 */
            return Q6;
        }
        else
        {
          if (val.z > mp_z)	/*add to Q3 - X < 0, Y < 0, Z > 0 */
            return Q3;	
          else							/*add to Q7 - X < 0, Y < 0, Z < 0 */
            return Q7;
        }
      }
      return -1;// never utilized
    }

    int
    OctoTree::Node::getOctant(double x, double y, double z)
    {
      double mp_x, mp_y, mp_z;
      mp_x = lim.getMidpoint('x');
      mp_y = lim.getMidpoint('y');
      mp_z = lim.getMidpoint('z');

      if (x > mp_x)
      {
        if (y > mp_y)
        {
          if (z > mp_z)		/*add to Q1 - X > 0, Y > 0, Z > 0 */
            return Q1;	
          else 						/*add to Q5 - X > 0, Y > 0, Z < 0 */
            return Q5;	
        }
        else
        {
          if (z > mp_z)		/*add to Q4 - X > 0, Y < 0, Z > 0 */
            return Q4;
          else 						/*add to Q8 - X > 0, Y < 0, Z < 0 */
            return Q8;
        }
      }
      else
      {
        if (y > mp_y)
        {
          if (z > mp_z)		/*add to Q2 - X < 0, Y > 0, Z > 0 */
            return Q2;
          else						/*add to Q6 - X < 0, Y > 0, Z < 0 */
            return Q6;
        }
        else
        {
          if (z > mp_z)		/*add to Q3 - X < 0, Y < 0, Z > 0 */
            return Q3;	
          else						/*add to Q7 - X < 0, Y < 0, Z < 0 */
            return Q7;
        }
      }
      return -1;// never utilized
    }

    OctoTree::Bounds
    OctoTree::Node::getOctoBounds(int oct)
    {
      Bounds res = lim;
      double mp_x, mp_y, mp_z;
      mp_x = lim.getMidpoint('x');
      mp_y = lim.getMidpoint('y');
      mp_z = lim.getMidpoint('z');

      switch (oct)
      {
        case Q1:
          res.min_x = mp_x;
          res.min_y = mp_y;
          res.min_z = mp_z;
          break;
        case Q2:
          res.min_y = mp_y;
          res.min_z = mp_z;
          res.max_x = mp_x;
          break;
        case Q3:
          res.min_z = mp_z;
          res.max_x = mp_x;
          res.max_y = mp_y;
          break;
        case Q4:
          res.min_x = mp_x;
          res.min_z = mp_z;
          res.max_y = mp_y;
          break;
        case Q5:
          res.min_x = mp_x;
          res.min_y = mp_y;
          res.max_z = mp_z;
          break;
        case Q6:
          res.min_y = mp_y;
          res.max_x = mp_x;
          res.max_z = mp_z;
          break;
        case Q7:
          res.max_x = mp_x;
          res.max_y = mp_y;
          res.max_z = mp_z;
          break;
        case Q8:
          res.min_x = mp_x;
          res.max_y = mp_y;
          res.max_z = mp_z;
          break;
        default:
          break;
      }
      return res;
    }

    OctoTree::Data
    OctoTree::Node::search(double x, double y, double z)
    {
      if (item->x == x && item->y == y && item->z == z)
        return item->val;

      int pos = getOctant(x, y, z);

      if (childs[pos] == nullptr)
        throw ERR_INVALID_POINT;

      return childs[pos]->search(x, y, z);
    }

    int OctoTree::Node::search_vol(const Bounds& vol, std::vector<Data>& points)
    {
      if (inside_vol(vol))
        return add_data(points);
      
      int res = 1;
      if (item_inside(vol))
        points.push_back(item->val);

      //comparison with octants
      int o_max = getOctant(vol.max_x, vol.max_y, vol.max_z);
      int o_min = getOctant(vol.min_x, vol.min_y, vol.min_z);
        
      if (o_max == o_min)	
        return res + search_child(vol, points, o_max);

      double mpx = lim.getMidpoint('x');
      double mpy = lim.getMidpoint('y');
      double mpz = lim.getMidpoint('z');
      
      if (vol.min_x > mpx)
      {
        if (vol.min_y > mpy)
        {
          res += search_child(vol, points, Q1);
          res += search_child(vol, points, Q5);
        }
        else if (vol.max_y < mpy)
        {
          res += search_child(vol, points, Q4);
          res += search_child(vol, points, Q8);
        }
        else
        {
          if (vol.min_z > mpz)
          {
            res += search_child(vol, points, Q1);
            res += search_child(vol, points, Q4);
          }
          else if (vol.max_z < mpz)
          {
            res += search_child(vol, points, Q5);
            res += search_child(vol, points, Q8);
          }
          else
          {
            res += search_child(vol, points, Q1);
            res += search_child(vol, points, Q4);
            res += search_child(vol, points, Q5);
            res += search_child(vol, points, Q8);
          }
        }		
      }
      else
      {
        if (vol.max_x > mpx)
        {
          for (int i = Q1; i <= Q8; i++)
            res += search_child(vol, points, i);
        }
        else
        {
          if (vol.min_y > mpx)
          {
            res += search_child(vol, points, Q2);
            res += search_child(vol, points, Q6);
          }
          else if (vol.max_y < mpy)
          {
            res += search_child(vol, points, Q3);
            res += search_child(vol, points, Q7);
          }
          else
          {
            if (vol.min_z > mpz)
            {
              res += search_child(vol, points, Q2);
              res += search_child(vol, points, Q3);
            }
            else if (vol.max_z < mpz)
            {
              res += search_child(vol, points, Q6);
              res += search_child(vol, points, Q7);
            }
            else
            {
              res += search_child(vol, points, Q2);
              res += search_child(vol, points, Q3);
              res += search_child(vol, points, Q6);
              res += search_child(vol, points, Q7);
            }
          }
        }
      }

        return res;
    }

    int
    OctoTree::Node::search_child(const Bounds& vol, std::vector<Data>& points, int oct)
    {
      return (childs[oct] == nullptr ? 0 : childs[oct]->search_vol(vol, points) );
    }

    bool
    OctoTree::Node::item_inside(const Bounds& vol)
    {
      if (item == nullptr)
        return false;
      if (vol.min_x > item->x || item->x > vol.max_x)
        return false;
      if (vol.min_y > item->y || item->y > vol.max_y)
        return false;
      if (vol.min_z > item->z || item->z > vol.max_z)
        return false;

      return true;
    }

    bool
    OctoTree::Node::inside_vol(const Bounds& vol)
    {
      if (vol.min_x > lim.min_x || vol.max_x < lim.max_x)
        return false;
      if (vol.min_y > lim.min_y || vol.max_y < lim.max_y)
        return false;
      if (vol.min_z > lim.min_z || vol.max_z < lim.max_z)
        return false;

      return true;
    }

    int
    OctoTree::Node::add_item(std::vector<Item*>& points)
    {
      if (item!= nullptr)
        points.push_back(item);

      int res = 1;
      for (int i = 0; i < 8; i++)
      {
        if (childs[i] != nullptr)
          res += childs[i]->add_item(points);		
      }
      return res;
    }

    int
    OctoTree::Node::add_data(std::vector<Data>& points)
    {
      if (item!= nullptr)
        points.push_back(item->val);

      int res = 1;
      for (int i = 0; i < 8; i++)
      {
        if (childs[i] != nullptr)
          res += childs[i]->add_data(points);		
      }
      return res;
    }

    int
    OctoTree::Node::number_nodes()
    {
      if (leaf)
        return 1;
      int res = 1;
      for (int i = 0; i < 8; i++)
      {
        if (childs[i] != nullptr)
          res += childs[i]->number_nodes();
      }
      return res;
    }

    int
    OctoTree::Node::remove_dat(const Item& val)
    {
      if (isOutBounds(val))
        return -1;
      if (item != nullptr)
      {
        if (val.x == item->x && val.y == item->y && val.z == item->z && val.val.temp == item->val.temp && val.val.cond == item->val.cond)
        {
          delete item;
          item = nullptr;
          return 1;
        }
      }
      
      int pos = getOctant(val);
      
      if (childs[pos] != nullptr)
        return childs[pos]->remove_dat(val);
      
      return 0;    
    }

    OctoTree::OctoTree(std::vector<std::string>& item)
    {
      root = nullptr;
      for (unsigned i = 0; i < item.size(); i++)
      {
        std::vector<double> values;
        DUNE::Utils::String::split(item[i], " ", values);
        add(values[0], values[1], values[2], values[3], values[4]);
      }
    }

    OctoTree::OctoTree(double x, double y, double z, double temp, double cond)
    {
      root = new Node(nullptr, x, y, z, temp, cond);
    }

    int
    OctoTree::add(double x, double y, double z, double temp, double cond)
    {
      if (root == nullptr)
      {
        root = new Node(nullptr, x, y, z, temp, cond);
        return 1;
      }
      Item* point = new Item(x, y, z, temp, cond);
      if(root->isOutBounds(*point))
      {
        root = new_root(root, root->lim, point);
        return 0;
      }
      return root->insert_data(point);
    }

    OctoTree::~OctoTree()
    {
      delete root;
    }

    int
    OctoTree::remove_data(const Item& val)
    {
      return root->remove_dat(val);
    }

    int
    OctoTree::search(const Bounds& vol, std::vector<Data>& points)
    {
        return root->search_vol(vol, points);
    }

    int
    OctoTree::size()
    {
      if (root ==  nullptr)
        return 0;

      return root->number_nodes();
    }

    OctoTree::Data
    OctoTree::search_data(double x, double y, double z)
    {
      return root->search(x, y, z);	
    }

    void
    OctoTree::printTree()
    {
      std::ofstream logFile;
      std::string logPath = path;
      logPath.append("/");
      logPath.append(log);

      logFile.open(logPath);
      if ( !logFile.is_open()	)
      {
        if(!mkdir(path.c_str(), 0777))
          logFile.open(logPath);
        else
          return;
      }
        
      if (root != nullptr)
        root->printNode(0, logFile);
      else
        logFile << "Tree root is null\n";

      logFile << "\nTree has " << size() << " Nodes\n";
      logFile.close();
    }

    bool
    OctoTree::testTree()
    {
      std::vector<Item*> points;
      root->add_item(points);

      std::ofstream testFile;	

      std::string testPath = path;
      testPath.append("/");
      testPath.append(test);

      testFile.open(testPath);
      if (!testFile.is_open())
      {
        if(!mkdir(path.c_str(), 0777))
          testFile.open(testPath);
        else
          return false;
      }
      for (long unsigned int i = 0; i < points.size(); i++)
      {
        testFile << "Point " << points[i]->x << " " << points[i]->y << " " << points[i]->z << " " << points[i]->val.temp << " " << points[i]->val.cond << "\n";		
        search_data(points[i]->x, points[i]->y, points[i]->z);
      }
      testFile.close();
      return root->testNode();
    }

    void
    OctoTree::Node::printNode(int dept, std::ostream& file)
    {
      file << "At dept(" << dept << ") leaf:" << leaf << "\n";
      file << "my root is:" << myRoot << "\tmy address:" << this << "\n";
      if (item != nullptr)
        file << "Point:\tx:" << item->x << "\t y: " << item->y << "\t z:" << item->z << "\tvalue:" << item->val.temp << " " << item->val.cond << "\n";
      else
        file << "Don't have Point\n";
      
      file << "Bounds:\t";
      file << "x: (" << lim.min_x << " ; " << lim.max_x << ')';
      file << "\ty: (" << lim.min_y << " ; " << lim.max_y << ')';
      file << "\tz: (" << lim.min_z << " ; " << lim.max_z << ')';
      file << "\n\n\n";
      if(leaf)
        return;

      dept++;
      for (int i = 0; i < 8; i++)
      {
        if (childs[i] != nullptr)
        {
          file << "Child at Q" << i+1 << "\n";
          childs[i]->printNode(dept, file);
        }
      }
    }

    int
    OctoTree::Node::testNode()
    {
      int sta = 0;
      if (isOutBounds(*item))
        throw ERR_INVALID_BOUNDS;
      Bounds aux;
      for (int i = 0; i < 8; i++)
      {
        if (childs[i] != nullptr)
        {		
          aux = getOctoBounds(i);
          if (aux.max_x != childs[i]->lim.max_x || aux.min_x != childs[i]->lim.min_x)
            sta ++;
          if (aux.max_y != childs[i]->lim.max_y || aux.min_y != childs[i]->lim.min_y)
            sta ++;
          if (aux.max_z != childs[i]->lim.max_z || aux.min_z != childs[i]->lim.min_z)
            sta ++;
          sta += childs[i]->testNode();	
        }
      }
      return sta;
    }

    void
    OctoTree::print_error(int e)
    {
      std::cerr << "Error encountered id: " << e << '\n';
      switch (e)
      {
        case ERR_INVALID_BOUNDS:
          std::cerr << "INVALID_BOUNDS error" << '\n';
          break;
        case ERR_INVALID_POINT:
          std::cerr << "INVALID_POINT error" << '\n';
          break;
        case ERR_INVALID_INSERT_POINT:
          std::cerr << "INVALID_INSERT_POINT error" << '\n';
          break;
        default:
          break;
      }
      exit(EXIT_FAILURE);
    }
  }
}
