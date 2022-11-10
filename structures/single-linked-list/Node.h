#ifndef NODE_H_
#define NODE_H_

/** Node for a single-linked list */

stuct Node {
    /** contained data */
    Item_Type data; 
    /** pointer to next node */
    Node *next;

    //Constructor 
    /** Create a new Node that points to another Node 
    @param data_to_store stored data 
    @param next_pointer Pointer to the node pointed to by the **new** Node
    */
    Node(const Item_Type& data_to_store, Node *next_pointer = nullptr) :
        data(data_to_store), next(next_pointer) {}
};

#endif // NODE_H_