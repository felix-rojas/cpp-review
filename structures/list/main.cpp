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
using std::cout;
using std::endl;

int main() {
    LinkedList<int> myList;

    myList.addFirst(1);
    myList.addFirst(2);
    myList.addFirst(3);

    myList.print();

    cout << myList.isEmpty() << endl;
}
