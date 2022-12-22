/*
    compile with debug info:
        g++ -std=c++17 -Wall -g -o main *.cpp
        OR
        ./run.sh

    degub memory:
        valgrind --leak-check=yes ./main
        OR
        ./debug

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
        myList.addLast(5);
        myList.print();
    }
    catch (const std::exception &e)
    {
        cerr << e.what() << '\n';
    }
    catch (...)
    {
        cerr << "Undefined error while initialising" << endl;
        abort();
    }

    try
    {
        LinkedList<int> otherList;
        otherList.addLast(1);
        otherList.addLast(2);
        otherList.addLast(5);
        otherList.addFirst(0);
        otherList.addLast(5);
        otherList.print();

        try
        {
            otherList.deleteData(5);
            otherList.print();
            otherList.getData(4);
	    otherList.updateData(5, 17);
	   otherList.print();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    catch (const std::exception &e)
    {
        cerr << e.what() << '\n';
    }
    catch (...)
    {
        cerr << "Undefined error while initialising" << endl;
        abort();
    }

    return 0;
}
