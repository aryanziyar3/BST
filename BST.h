
#ifndef BST_H
#define BST_H
#include "Node.h"

class BST
{
  public:
    BST();
    BST(const BST &);
    ~BST();
    int copy(const BST &);
    int insert(const string &);
    const int retrieve(const string &, BST &);
    const int display(const string &);
    const int display_all();
    int remove(const string &);
    int remove_all();

  private:
    Node *root;
};

#endif