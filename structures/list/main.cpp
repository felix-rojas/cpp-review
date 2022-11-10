/*
    compile with debug info:
        g++ -std=c++17 -Wall -g -o main *.cpp

    degub memory:
        valgrind --leak-check=yes a.out

    execute:
    ./a.out

    */

// List implementation

#include "LinkedList.h"
#include <iostream>
#include <stdexcept>
using std::cerr;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    try
    {
        LinkedList<int> myList;
        myList.addFirst(1);
        myList.addFirst(2);
        myList.addFirst(3);
        myList.print();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (...)
    {
        cerr << "Undefined error while initialising" << endl;
        abort();
    }

    return 0;
}
