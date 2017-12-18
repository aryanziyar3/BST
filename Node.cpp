
#include "Node.h"

//default constructor - initilizes local data members
Node::Node() : left(NULL), right(NULL)
{
}

//copy constructor - calls the copy function
Node::Node(Node *&original)
{
    copy(original);
}

//destructor - sets the deleted Nodes to NULL
Node::~Node()
{
    left = NULL;
    right = NULL;
}

//copy function - creates a hard copy of the passed Node object into this Node object
int Node::copy(Node *&original)
{
    if (original == NULL)
        return 0;
    this->data = original->data;
    this->left = original->left;
    this->right = original->right;
    return 1;
}

//compare function - compares the current data string with the one being passed
int Node::compare(string &input)
{
    if (input <= this->data)
        return 0; //go left
    return 1;     //go right
}

//set function - sets this data string to match the one being passed
int Node::set_data(string &input)
{
    unsigned int length = input.length();
    if (length)
        this->data = input;
    return length;
}

//get function - returns a pointer of this left Node
Node *&Node::get_left()
{
    return this->left;
}

//get function - returns a pointer of this right Node
Node *&Node::get_right()
{
    return this->right;
}

//display function - prints out the content of this node
int Node::display()
{
    if (!this->data.length())
        cout << "- EMPTY STRING IN THE NODE" << endl;
    cout << "- " << data << endl;
    return 1;
}

//endl