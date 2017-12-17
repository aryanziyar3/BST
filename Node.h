
#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node
{
  public:
    Node();
    Node(const Node *&);
    ~Node();
    int copy(const Node *&);
    int compare(const string &);
    int set_data(const string &);
    Node *&get_left();
    Node *&get_right();

  private:
    string data;
    Node *left;
    Node *right;
};

#endif