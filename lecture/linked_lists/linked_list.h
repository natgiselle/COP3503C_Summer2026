/**
 * LINKED:LIST:
 * traversal, removing, adding to the tail will be covered later!
*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"
using namespace std;

class LinkedList{
    public:
        Node* head;
        LinkedList(): head(nullptr){};
        void insertHead(int data_){ // inserts at head
         // inserted inside the data part of newNode so the address is saved in there

            Node* newNode = new Node(data_);
            if(head == nullptr){
                head = newNode; // points to new node
            }
            else{
                newNode->next = head; // now pointing to previous head location instead of nullptr
                // still has access to previous nodes
            }
        }
};


#endif
