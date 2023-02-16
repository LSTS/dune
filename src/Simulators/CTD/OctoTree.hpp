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
// Author: João Bogas                                                  *
//***************************************************************************

#ifndef SIMULATORS_CTD_OCTO_TREE_HPP_INCLUDED_
#define SIMULATORS_CTD_OCTO_TREE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <vector>
#include <fstream>

// DUNE headers.
//#include <DUNE/DUNE.hpp>

// Local defines.
#define INVALID_BOUNDS          1
#define INVAILD_POINT 	        2
#define INVALID_INSERT_POINT    3

namespace Simulators
{
	namespace CTD
	{
		class OctoTree
		{
		public:

			//! Octants
			enum
			{
				Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8
			};

			//! Item structure
			struct Item
			{
				double x, y, z, value;

				Item(double _x, double _y, double _z, double _v):
					x(_x), y(_y), z(_z), value(_v)
				{ }
				
			};

			//! Bounds structure
			struct Bounds
			{
				double max_x, max_y, max_z;
				double min_x, min_y, min_z;

				//! Create a new Bounds object with bounds at 0
				Bounds(): 
					max_x(0), max_y(0), max_z(0), min_x(0), min_y(0), min_z(0)
				{ };
				
				//! Create a new Bounds object with the same max and min limits
				Bounds(double _x, double _y, double _z):
					max_x(_x), max_y(_y), max_z(_z), min_x(_x), min_y(_y), min_z(_z)
				{ };
				
				//! Create a new Bounds object
				Bounds(double _min_x, double _max_x, double _min_y, double _max_y, double _min_z, double _max_z);
				
				//! Return the bounds midpoint correspondent to the axis
				double
				getMidpoint(char axis) const;
			};

			struct Node
			{
				bool leaf;
				Node* myRoot;
				std::vector<Node*> childs;
				Bounds lim;
				Item* data;
				
				//! Creates a new Node object with variables null
				Node();

				//! Creates a new Node object 
				Node(Node* parent, double x, double y, double z, double val);

				//! Creates a new Node object
				Node(Node* parent, Item* _data, Bounds oct);

				//! Node Destructor
				~Node();
				
				//! Expandes node bounds in val direction
				void 
				expandeBounds(const Item& val);

				//! Checks if item is outside Node bounds
				bool 
				isOutBounds(const Item& val);

				//! Insert Item object
				//! @return Dept at which the item was inserted
				int 
				insert_data(Item *val);

				//! @return octante of midpoint of volume
				//! @warning volume midpoint must be inside Node bounds
				int 
				getOctante(const Bounds& volume);

				//! @return octante that corresponds to the Item
				//! @exception INVALID_INSERT_POINT if Item is out of bounds
				int 
				getOctante(const Item& val);

				//! @return Octante that corresponds to the point (x,y,z)
				//! @warning Item must be inside Node bounds
				int 
				getOctante(double x, double y, double z);

				//! @return Octante Bounds object correspondent the oct
				Bounds 
				getOctoBounds(int oct);

				//! Search the tree for the point (x,y,z)
				//! @return value stored in the point
				//! @exception Throws INVALID_POINT if the point doesn't exist  
				double 
				search(double x, double y, double z);

				//! Searches for points inside Bounds volume
				//! Points inside are added to vector
				//! Returns number of iterations
				int 
				search_vol(const Bounds& vol, std::vector<Item*>& points);

				//! Search_vol of child Node if not nullptr
				int 
				search_child(const Bounds& vol, std::vector<Item*>& points, int oct);

				//! Checks if this node item is inside Bounds vol
				bool 
				item_inside(const Bounds& vol);

				//! Checks if Node bounds is inside volumne
				bool 
				inside_vol(const Bounds& vol);

				//! Add all itens in this node and his childs to vector
				//! @return number of iterations
				int 
				add_item(std::vector<Item*>& points);

				//! Returns number of nodes 
				int 
				number_nodes();

				//! Removes Item object from tree
				//! @return 1 if successful or -1 if failed
				int 
				remove_dat(const Item& val);

				//! Prints node information to output stream file
				void 
				printNode(int dept, std::ostream& file = std::cout);

				//! Tests point placement and child bounds are correct
				//! Returns number of errors found
				//! @exception INVALID_BOUNDS if point is out of Node bounds 
				int
				testNode();
			};
			
			//! Creates a new root to insert new_data
			//! @return New Node root with bounds expanded and new_data inserted as root data
			//! @warning This may create nodes will data = nullptr if it expandes more than once
			Node* 
			new_root(Node* child, const Bounds& prev_volume, Item* new_data);

			//! 
			OctoTree();

			//!
			OctoTree(double x, double y, double z, double val);

			//!
			~OctoTree();

			//! Add point to tree
			//! @return dept of point
			int 
			add(double x, double y, double z, double v);

			//! Search the tree for the point (x,y,z)
			//! @return value stored in the point
			//! @exception INVALID_POINT if the point doesn't exist
			double 
			search_data(double x, double y, double z);

			//! Searches for points inside Bounds volume
			//! Points inside are added to vector
			//! Returns number of iterations
			int 
			search(const Bounds& vol, std::vector<Item*>& points);

			//! Returns number of nodes inside tree
			int 
			size();
			
			//! Removes Item object from tree
			//! @return 1 if successful or -1 if failed
			int 
			remove_data(const Item& val);

			//! Prints tree to file ../OctoTree Files/OctoTree_log.txt
			void 
			printTree();

			//! Prints all points in tree to file ../OctoTree Files/OctoTree_teste.txt 
			//! Searches for each point in Tree
			//! Returns result of testNode()
			bool 
			testTree();

		private:
			Node* root;		// Node pointer
		};

		//! Prints error and terminates program
		void
		print_error(int e);
	}
}


#endif