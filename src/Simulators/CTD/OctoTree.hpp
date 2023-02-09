#ifndef OCTOTREE_HPP_INCLUDED_
#define OCTOTREE_HPP_INCLUDED_

#include <iostream>
#include <vector>


#define INVALID_BOUNDS          1
#define INVAILD_POINT 	        2
#define INVALID_INSERT_POINT    3


class OctoTree
{
public:

    struct Item
    {
        double x, y, z, value;
        Item(){};
        Item(double _x, double _y, double _z, double _v);
        ~Item();
    };

    struct Bounds
    {
        double max_x, max_y, max_z;
        double min_x, min_y, min_z;

        Bounds();
        Bounds(double _x, double _y, double _z);
        Bounds(double min_x, double Max_x, double min_y, double Max_y, double min_z, double Max_z);
        double getMidpoint(char axis);
    };
    struct Node
    {
        bool leaf;
        Node* myRoot;
        std::vector<Node*> childs;
        Bounds lim;
        Item* data;
        Node();
        Node(Node* parent, double x, double y, double z, double val);
        Node(Node* parent, Item* _data, Bounds oct);
        ~Node();
        
        void expandeBounds(const Item& val);
        bool isOutBounds(const Item& val);
        int insert_data(Item *val);
        int getOctante(const Item& val);
        int getOctante(double x, double y, double z);
        Bounds getOctoBounds(int oct);
        double search(double x, double y, double z);
        int search_vol(const Bounds& vol, std::vector<Item*> &points);
        int search_child(const Bounds& vol, std::vector<Item*> &points, int oct);
        bool item_inside(const Bounds& vol);
        bool inside_vol(const Bounds& vol);
        int add_item(std::vector<Item*> &points);
        int number_nodes();
        int remove_dat(const Item& val);
        //debug
        void printNode(int deep);
    };
    Node* new_root(Node* child, Item* prev_data, Item* new_data);
    OctoTree();
    OctoTree(double x, double y, double z, double val);
    ~OctoTree();
    int add(double x, double y, double z, double v);
    double search_data(double x, double y, double z);
    int search(const Bounds& vol, std::vector<Item*> &points);
    int size();

    //to do
    int remove_data(const Item& val);
    
    //debug
    void printTree();

private:
    Node *root;
};

void print_error(int e);


#endif // SIMULATORS_CTD_OCTOTREE_HPP_INCLUDED_