
#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node
{
  public:
    Node();
    Node(Node *&);
    ~Node();
    int copy(Node *&);
    int compare(string &);
    int set_data(string &);
    Node *&get_left();
    Node *&get_right();
    int display();

  private:
    string data;
    Node *left;
    Node *right;
};

#endif