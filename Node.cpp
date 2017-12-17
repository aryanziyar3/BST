
#include "Node.h"

//
Node::Node()
{
}

//
Node::Node(const Node *&original)
{
    copy(original);
}

//
Node::~Node()
{
}

//
int Node::copy(const Node *&original)
{

    return 0;
}

//
int Node::compare(const string &input)
{

    return 0;
}

//
int Node::set_data(const string &input)
{
    return 0;
}

//
Node *&Node::get_left()
{
    return left;
}

//
Node *&Node::get_right()
{
    return right;
}

//endl