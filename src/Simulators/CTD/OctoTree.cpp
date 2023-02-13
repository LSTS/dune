#include "OctoTree.hpp"

#define Q1 0	// X > 0, Y > 0, Z > 0
#define Q2 1	// X < 0, Y > 0, Z > 0
#define Q3 2	// X < 0, Y < 0, Z > 0
#define Q4 3	// X > 0, Y < 0, Z > 0

#define Q5 4	// X > 0, Y > 0, Z < 0
#define Q6 5	// X < 0, Y > 0, Z < 0
#define Q7 6	// X < 0, Y < 0, Z < 0
#define Q8 7	// X > 0, Y < 0, Z < 0



/// @brief Create a new Item object with point (x,y,z) and a value
/// @param _x x coordinate
/// @param _y y coordinate
/// @param _z z coordinate
/// @param _v value to store
OctoTree::Item::Item(double _x, double _y, double _z, double _v) :
	x(_x), y(_y), z(_z), value(_v)
{
}

OctoTree::Item::~Item()
{
}

/// @brief Create a new Bounds object with bounds at 0
OctoTree::Bounds::Bounds()
{
	max_x = min_x = max_y = min_y = max_z = min_z = 0;
}

/// @brief Create a new Bounds object with the same max and min limits
/// @param _x x max/min limits
/// @param _y y max/min limits
/// @param _z z max/min limits
OctoTree::Bounds::Bounds(double _x, double _y, double _z) :
	max_x(_x), max_y(_y), max_z(_z), min_x(_x), min_y(_y), min_z(_z)
{

}

/// @brief Create a new Bounds object
/// @param _min_x min_x limit
/// @param _max_x max_x limit
/// @param _min_y min_y limit
/// @param _max_y max_y limit
/// @param _min_z min_z limit
/// @param _max_z max_z limit
/// @throw INVALID_BOUNDS if arguments are incorrect
OctoTree::Bounds::Bounds(double _min_x, double _max_x, double _min_y, double _max_y, double _min_z, double _max_z) :
	max_x(_max_x), max_y(_max_y), max_z(_max_z), min_x(_min_x), min_y(_min_y), min_z(_min_z)
{
	if(_max_x < min_x || _max_y < min_y || _max_z < min_z)
		throw INVALID_BOUNDS;
}

/// @brief Return the bounds midpoint correspondent to the axis
/// @param axis {x , y , z}
/// @return -1 if axis is not valid
/// @return or bounds midpoint of axis
double OctoTree::Bounds::getMidpoint(char axis) const
{
	if (axis == 'x')
		return (max_x+min_x)/2;
	
	if (axis == 'y')
		return (max_y+min_y)/2;
	
	if (axis == 'z')
		return (max_z+min_z)/2;

	return -1;
}


/// @brief Creates a new Node object with variables null
OctoTree::Node::Node()
{
	myRoot = nullptr;
	childs.assign(8,nullptr);
	leaf = true;
}


/// @brief Creates a new Node object 
/// @param parent parent node
/// @param x x coordinate of object OctoTree::Item
/// @param y y coordinate of object OctoTree::Item
/// @param z z coordinate of object OctoTree::Item
/// @param val value to store in object OctoTree::Item
OctoTree::Node::Node(Node* parent, double x, double y, double z, double val)
{
	myRoot = parent;
	data = new Item(x, y, z, val);
	childs.assign(8,nullptr);
	lim = Bounds(x, y, z);
	leaf = true;
}


/// @brief Creates a new Node object 
/// @param parent parent node
/// @param _data Item object to store in this Node
/// @param oct Bounds object of this Node
OctoTree::Node::Node(Node* parent, Item *_data, Bounds oct)
{
	myRoot = parent;
	data = _data;
	childs.assign(8,nullptr);
	lim = oct;
	leaf = true;
}


OctoTree::Node::~Node()
{
	delete data;
	for (int i = 0; i < 8; i++)
		delete childs[i];
}


/// @brief Creates a new root to insert new_data
/// @param child previus root of Octree
/// @param prev_data
/// @param new_data pointer to object Item to insert
/// @return new Node root with bounds expanded and new_data inserted as root data
/// @warning This may create nodes will data = nullptr if it expandes more than once
OctoTree::Node* OctoTree::new_root(Node* child, const Bounds& prev_volume, Item* new_data)
{
	Node* n_root = new Node(nullptr, nullptr, child->lim);
	n_root->leaf = false;

	n_root->expandeBounds(*new_data);

	int pos = n_root->getOctante(prev_volume);
	
	// when expanding if prev point is in the bounds of its node
	// it may be insered in the "wrong" octante because this point will collide with new bounds mid point
	// the default is to insert the midpoints in the lower volume Ex: Bounds of z:[-1, 1] and new point is z = 0 -> inserting in Q5-8
	if (child->data != nullptr)
	{
		int pos_data = n_root->getOctante(*child->data);
		if (pos != pos_data)
		{
			n_root->insert_data(child->data);
			child->data = nullptr;			
		}
	}
	n_root->childs[pos] = child;
	child->myRoot = n_root;

	

	if(n_root->isOutBounds(*new_data))
		return new_root(n_root, prev_volume, new_data);
	n_root->data = new_data;

	if (child->lim.max_x == child->lim.min_x)
		child->lim = n_root->getOctoBounds(pos);
	
    return n_root;
}



/// @brief Expandes node bounds in val direction
/// @param val Item object out of this node Bounds
void OctoTree::Node::expandeBounds(const Item& val)
{
	double length = lim.max_x-lim.min_x;
	if (length == 0)
	{
		double dx = (val.x - lim.max_x > 0 ? val.x - lim.max_x : lim.max_x - val.x);
		double dy = (val.y - lim.max_y > 0 ? val.y - lim.max_y : lim.max_y - val.y);
		double dz = (val.z - lim.max_z > 0 ? val.z - lim.max_z : lim.max_z - val.z);
		
		if (dx > dy)
		{
			if (dx > dz) length = dx;
			else length = dz;
		}
		else
		{
			if (dy > dz) length = dy;
			else length = dz;
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


/// @brief Checks if item is outside Node limits (Bounds)
/// @param val Item object to verify
/// @return True if item is outside Node bounds. Or false if inside
bool OctoTree::Node::isOutBounds(const Item& val)
{

	if (lim.min_x > val.x || val.x > lim.max_x)
	{
		return true;
	}
	if (lim.min_y > val.y || val.y > lim.max_y)
	{
		return true;
	}
	if (lim.min_z > val.z || val.z > lim.max_z)
	{
		return true;
	}

    return false;
}


/// @brief Insert object
/// @param val 
/// @return dept at which the item was inserted
int OctoTree::Node::insert_data(Item *val)
{
	int pos = getOctante(*val);

	if (childs[pos] == nullptr)
	{
		leaf = false;
		childs[pos] = new Node(this, val, getOctoBounds(pos));
		return 0;
	}
	else if (childs[pos]->data == nullptr)
	{
		childs[pos]->data = val;
		return 0;
	}
	
	return childs[pos]->insert_data(val)+1;
}
/// @brief Compares the Item coordinates and returns the Octante that corresponds to the Item
/// @param val Item object to verify
/// @warning Item must be inside Node bounds
int OctoTree::Node::getOctante(const Bounds &volume)
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
			else 				/*add to Q5 - X > 0, Y > 0, Z < 0 */
				return Q5;	
		}
		else
		{
			if (z > mp_z)	/*add to Q4 - X > 0, Y < 0, Z > 0 */
				return Q4;
			else 				/*add to Q8 - X > 0, Y < 0, Z < 0 */
				return Q8;
		}
	}
	else
	{
		if (y > mp_y)
		{
			if (z > mp_z)	/*add to Q2 - X < 0, Y > 0, Z > 0 */
				return Q2;
			else				/*add to Q6 - X < 0, Y > 0, Z < 0 */
				return Q6;
		}
		else
		{
			if (z > mp_z)	/*add to Q3 - X < 0, Y < 0, Z > 0 */
				return Q3;	
			else				/*add to Q7 - X < 0, Y < 0, Z < 0 */
				return Q7;
		}
	}
	
    return -1;
}

/// @brief Compares the Item coordinates and returns the Octante that corresponds to the Item
/// @param val Item object to verify
/// @warning Item must be inside Node bounds
/// @exception INVALID_INSERT_POINT if Item is out of bounds
int OctoTree::Node::getOctante(const Item& val)
{
	
	if (isOutBounds(val))
		throw INVALID_INSERT_POINT;

	
	double mp_x, mp_y, mp_z;
	mp_x = lim.getMidpoint('x');
	mp_y = lim.getMidpoint('y');
	mp_z = lim.getMidpoint('z');

	if ( val.x > mp_x)
	{
		if (val.y > mp_y)
		{
			if (val.z > mp_z)	/*add to Q1 - X > 0, Y > 0, Z > 0 */
				return Q1;	
			else 				/*add to Q5 - X > 0, Y > 0, Z < 0 */
				return Q5;	
		}
		else
		{
			if (val.z > mp_z)	/*add to Q4 - X > 0, Y < 0, Z > 0 */
				return Q4;
			else 				/*add to Q8 - X > 0, Y < 0, Z < 0 */
				return Q8;
		}
	}
	else
	{
		if (val.y > mp_y)
		{
			if (val.z > mp_z)	/*add to Q2 - X < 0, Y > 0, Z > 0 */
				return Q2;
			else				/*add to Q6 - X < 0, Y > 0, Z < 0 */
				return Q6;
		}
		else
		{
			if (val.z > mp_z)	/*add to Q3 - X < 0, Y < 0, Z > 0 */
				return Q3;	
			else				/*add to Q7 - X < 0, Y < 0, Z < 0 */
				return Q7;
		}
	}
    return -1;// never utilized
}


/// @brief Compares the coordinates and returns the Octante that corresponds to the point (x,y,z)
/// @param x x coordinate
/// @param y y coordinate
/// @param z z coordinate
/// @warning Item must be inside Node bounds
int OctoTree::Node::getOctante(double x, double y, double z)
{
    double mp_x, mp_y, mp_z;
	mp_x = lim.getMidpoint('x');
	mp_y = lim.getMidpoint('y');
	mp_z = lim.getMidpoint('z');

	if ( x > mp_x)
	{
		if (y > mp_y)
		{
			if (z > mp_z)		/*add to Q1 - X > 0, Y > 0, Z > 0 */
				return Q1;	
			else 				/*add to Q5 - X > 0, Y > 0, Z < 0 */
				return Q5;	
		}
		else
		{
			if (z > mp_z)		/*add to Q4 - X > 0, Y < 0, Z > 0 */
				return Q4;
			else 				/*add to Q8 - X > 0, Y < 0, Z < 0 */
				return Q8;
		}
	}
	else
	{
		if (y > mp_y)
		{
			if (z > mp_z)		/*add to Q2 - X < 0, Y > 0, Z > 0 */
				return Q2;
			else				/*add to Q6 - X < 0, Y > 0, Z < 0 */
				return Q6;
		}
		else
		{
			if (z > mp_z)		/*add to Q3 - X < 0, Y < 0, Z > 0 */
				return Q3;	
			else				/*add to Q7 - X < 0, Y < 0, Z < 0 */
				return Q7;
		}
	}
    return -1;// never utilized
}


/// @brief Returns the octante Bounds object correspondent the param oct
/// @param oct Octante value {0-7}
OctoTree::Bounds OctoTree::Node::getOctoBounds(int oct)
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


/// @brief Search the tree for the point (x,y,z)
/// @param x x coordinate
/// @param y y coordinate
/// @param z z coordinate
/// @return value stored in the point
/// @throw Throws INVALID_POINT if the point doesn't exist   
double OctoTree::Node::search(double x, double y, double z)
{
	if (data->x == x && data->y == y && data->z == z)
		return data->value;

	int pos = getOctante(x, y, z);

	if (childs[pos] == nullptr)
		throw INVAILD_POINT;

    return childs[pos]->search(x, y, z);
}

/// @brief Searches for points inside Bounds volume
/// @param vol Bounds object
/// @param points vector to store the points
/// @return number of iterations
int OctoTree::Node::search_vol(const Bounds &vol, std::vector<Item*> &points)
{
	if (inside_vol(vol))
		return add_item(points);
	
	int res = 1;
	if (item_inside(vol))
	{
		points.push_back(data);
	}
	//comparação com octantes
	int o_max = getOctante(vol.max_x, vol.max_y, vol.max_z);
	int o_min = getOctante(vol.min_x, vol.min_y, vol.min_z);
		
	if (o_max == o_min)
	{		
		return res + search_child(vol, points, o_max);
	}

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
			{
				res += search_child(vol, points, i);
			}
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

/// @brief Search child Node if not nullptr
/// @param vol Bounds to search
/// @param points vector to store the points
/// @param oct Octante to search
/// @return 0 if child is nullptr 
int OctoTree::Node::search_child(const Bounds &vol, std::vector<Item *> &points, int oct)
{
    return (childs[oct] == nullptr ? 0 : childs[oct]->search_vol(vol, points) );
}

/// @brief Checks if this node item is inside Bounds
/// @param vol Bounds object
bool OctoTree::Node::item_inside(const Bounds &vol)
{
	if (data == nullptr)
		return false;
	
	if (vol.min_x > data->x || data->x > vol.max_x)
		return false;
	if (vol.min_y > data->y || data->y > vol.max_y)
		return false;
	if (vol.min_z > data->z || data->z > vol.max_z)
		return false;

	return true;
}

/// @brief Checks if Node bounds is inside volumne
/// @param vol volume
bool OctoTree::Node::inside_vol(const Bounds &vol)
{
	if (vol.min_x > lim.min_x || vol.max_x < lim.max_x)
		return false;
	if (vol.min_y > lim.min_y || vol.max_y < lim.max_y)
		return false;
	if (vol.min_y > lim.min_z || vol.max_z < lim.max_z)
		return false;

    return true;
}

/// @brief Add all itens in this node bounds
/// @param points vector to store the points
/// @return number of iterations
int OctoTree::Node::add_item(std::vector<Item*> &points)
{
	if (data!= nullptr)
		points.push_back(data);

	int res = 1;
	for (int i = 0; i < 8; i++)
	{
		if (childs[i] != nullptr)
			res += childs[i]->add_item(points);		
	}
	return res;
}

/// @return Number of nodes 
int OctoTree::Node::number_nodes()
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

/// @brief 
/// @param val 
/// @return 
int OctoTree::Node::remove_dat(const Item& val)
{
	if (isOutBounds(val))
		return -1;
	if (data != nullptr)
	{
		if (val.x == data->x && val.y == data->y && val.z == data->z && val.value == data->value)
		{
			delete data;
			data = nullptr;
			return 1;
		}
	}
	
	int pos = getOctante(val);
	
	if (childs[pos] != nullptr)
		return childs[pos]->remove_dat(val);
	
	return 0;    
}

OctoTree::OctoTree()
{
    root = nullptr;
}

OctoTree::OctoTree(double x, double y, double z, double val)
{
	root = new Node(nullptr, x, y, z, val);
}

int OctoTree::add(double x, double y, double z, double v)
{
	if (root == nullptr)
	{
		root = new Node(nullptr, x, y, z, v);
		return 1;
	}
	Item* point = new Item(x, y, z, v);
	if(root->isOutBounds(*point))
	{
		root = new_root(root, root->lim, point);
		return 0;
	}
	return root->insert_data(point)+1;
}

OctoTree::~OctoTree()
{
	delete root;
}

int OctoTree::remove_data(const Item& val)
{
    return root->remove_dat(val);
}


int OctoTree::search(const Bounds &vol, std::vector<Item*> &points)
{
    return root->search_vol(vol, points);
}


/// @return Number of nodes inside tree
int OctoTree::size()
{
	if (root ==  nullptr)
		return 0;
	
    return root->number_nodes();
}

double OctoTree::search_data(double x, double y, double z)
{
    return root->search(x, y, z);	
}

void OctoTree::printTree()
{
	std::ofstream logFile;
	logFile.open("OctoTree_log.txt");
	if (root != nullptr)
		root->printNode(0, logFile);
	else
		logFile << "Tree root is null\n";

	logFile << "\nTree has " << size() << " Nodes\n";
	logFile.close();
}


bool OctoTree::testTree()
{
	std::vector<Item*> points;
	root->add_item(points);

	std::ofstream testFile;	
	testFile.open("OctoTree_teste.txt");
	for (long unsigned int i = 0; i < points.size(); i++)
	{
		testFile << "Point" << points[i]->x << " " << points[i]->y << " " << points[i]->z << " " << points[i]->value << "\n";		
		search_data(points[i]->x, points[i]->y, points[i]->z);
	}
	testFile.close();
	return root->testNode();
}


void OctoTree::Node::printNode(int deep, std::ostream& file)
{
	file << "At deep(" << deep << ") leaf:" << leaf << "\n";
	file << "my root is:" << myRoot << "\tmy address:" << this << "\n";
	if (data != nullptr)
		file << "Point:\tx:" << data->x << "\t y: " << data->y << "\t z:" << data->z << "\tvalue:" << data->value << "\n";
	else
		file << "Don't have Point\n";
	
	file << "Bounds:\t";
	file << "x: (" << lim.min_x << " ; " << lim.max_x << ')';
	file << "\ty: (" << lim.min_y << " ; " << lim.max_y << ')';
	file << "\tz: (" << lim.min_z << " ; " << lim.max_z << ')';
	file << "\n\n\n";
	if(leaf){
		return;
	}
	deep++;
	for (int i = 0; i < 8; i++)
	{
		if (childs[i] != nullptr)
		{
			file << "Child at Q" << i+1 << "\n";
			childs[i]->printNode(deep, file);
		}
	}
}

void print_error(int e)
{

	std::cerr << "Error encoutered id: " << e << '\n';

	switch (e)
	{
	case INVALID_BOUNDS:
		std::cerr << "INVALID_BOUNDS error" << '\n';
		break;
	
	case INVAILD_POINT:
		std::cerr << "INVAILD_POINT error" << '\n';
		break;
	
	case INVALID_INSERT_POINT:
		std::cerr << "INVALID_INSERT_POINT error" << '\n';
		break;

	default:
		break;
	}

	exit(EXIT_FAILURE);
	
}

bool OctoTree::Node::testNode()
{
	bool sta = false;
	if (isOutBounds(*data))
		exit(1);
	Bounds aux;
	for (int i = 0; i < 8; i++)
	{
		if (childs[i] != nullptr)
		{		
			aux = getOctoBounds(i);
			if (aux.max_x != childs[i]->lim.max_x || aux.min_x != childs[i]->lim.min_x)
				sta = true;
			if (aux.max_y != childs[i]->lim.max_y || aux.min_y != childs[i]->lim.min_y)
				sta = true;
			if (aux.max_z != childs[i]->lim.max_z || aux.min_z != childs[i]->lim.min_z)
				sta = true;
			
		}
	}
	
    return !sta;
}