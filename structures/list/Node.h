/*
https://learn.microsoft.com/en-us/dotnet/standard/design-guidelines/choosing-between-class-and-struct

✔️ CONSIDER defining a struct instead of a class if instances of the type are small and commonly short-lived or are commonly embedded in other objects.

❌ AVOID defining a struct unless the type has all of the following characteristics:

It logically represents a single value, similar to primitive types (int, double, etc.).

It has an instance size under 16 bytes.

It is immutable.

It will not have to be boxed frequently.
*/

#ifndef _NODE_H_
#define _NODE_H_

template <class T> 
class Node {
    public:
    T data;
    Node<T> *next;
    Node();
    Node(T value);
};

// function definitions

template <class T>
Node<T>::Node() : data{}, next{nullptr} {}

template <class T>
Node<T>::Node(T val) : data{val}, next{nullptr} {}

#endif // _NODE_H_