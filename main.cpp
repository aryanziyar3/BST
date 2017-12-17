
#include <fstream>
#include "BST.h"

int main()
{
    BST obj1;
    BST obj2;
    ifstream file;

    file.open("input.txt");
    if (!file.is_open())
        cout << "Unable to find/open the input file!";
    else if (file.peek() == -1)
        cout << "ERROR! THE FILE IS EMPTY!\n";
    else
    {
        while (!file.eof())
        {
            string name;
            getline(file, name);
            obj1.insert(name);
        }
        obj1.display_all();
    }
    file.close();
    file.clear();

    return 0;
}

//end