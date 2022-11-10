#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include <iostream>
#include <stdexcept>
#include "Node.h"

template <class T> 
class LinkedList 
{
    private:
        Node<T> *head;
        Node<T> *tail;
        int length;
   
    public:
        LinkedList();
        ~LinkedList();
        int getLength();
        void addFirst(T value);
        void addLast(T value);
        void print();
        void printLastNode();
        bool isEmpty();
        bool deleteData(T value);
        // bool deleteAt(int pos);
        // T getData(int pos);
        // void updateData(T value, T new_value);
        // void updateAt(T value, T new_value);
        // int findData(T value);
        // void operator =(const LinkedList<T> &other);
};

// Definitions

// Constructor
template <class T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

// O(n) where n is the size of the LinkedList
template <class T>
LinkedList<T>::~LinkedList()
{
    Node<T> *p, *q;       // create nodes to explore list
    p = head;             // begin at the head
    while (p != nullptr){ // while p isnt null
        q = p->next;      // q points at what p is pointing in the next location
        delete p;         // delete p
        p = q;            // set p to q
    }                     // once loop is done, reset list
    head = nullptr;
    tail = nullptr;
    length = 0;
}

// returns the length of the Linked List
// O(1)
template <class T>
int LinkedList<T>::getLength()
{
    return length;
}

// adds an element to the beginning of the LinkedList
// O(1)
template <class T>
void LinkedList<T>::addFirst(T value)
{
    Node<T>* newNode = new Node<T>(value); // create new node with value
    newNode -> next = head;                // point to head
    head = newNode;                        // set head to the New node
    if (length == 0) { tail = newNode; }   // if length is zero, tail is the new node 
    length++;                              // increade length of LinkedList
}

// adds an element to the end of the LinkedList
// O(1)
template <class T>
void LinkedList<T>::addLast(T value)
{
    if ( head == nullptr && tail == nullptr) {
        addFirst(value);
    } else {
        Node<T>* newNode = new Node<T>(value); // create new node with value
        tail -> next = newNode;                // point to last element newNode
        tail = newNode;                        // set tail to the New node
        length++;                              // increade length of LinkedList
    }
}

// prints the entire LinkedList
// O(n)
template <class T>
void LinkedList<T>::print()
{
    Node<T> *ptr = head;                 // create a pointer that is equal to head
    while (ptr != nullptr)              // when the pointer is null, we reached the end
    { 
        std::cout << ptr -> data; // print the data where the pointer is currently at
        if (ptr->next != nullptr){
            std::cout << " -> ";
        }
        ptr = ptr -> next;               // assign the temporal pointer the data and values whetre the next pointer is at
    }
    std::cout << std::endl;              // print newline
}

// print data in the last node
// O(1)
template <class T>
void LinkedList<T>::printLastNode()
{
    std::cout << tail -> data << std::endl; // print the data from the tail node
}

template <class T>
bool LinkedList<T>::isEmpty()
{
    if (head == nullptr && tail == nullptr) { return true; } 
    else { return false; }
}

template <class T>
bool LinkedList<T>::deleteData(T value)
{
    if (length == 0) return false;
    if (isEmpty() != 1) // List isnt empty
    {
        Node<T> *p = head;                   // make a pointer for the head
        Node<T> *prev = nullptr;             // make a pointer that points to the previous element
        while ( p != nullptr && p->data != value) // find value, else
        {
            prev = p;
            p = p->next;
        }
        if (p == nullptr) return false;
        if (p == head) {                    // 
            head = p->next;
        } else if (p->next == nullptr) {
            prev->next = nullptr;
            tail = prev;
        } else {
            prev->next = p->next;
        }
        delete p;
        length--;
        return true;
    } else return false;
}

#endif // _LINKEDLIST_H