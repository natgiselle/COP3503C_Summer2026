#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template<typename T>
class LinkedList{
    public:
        struct Node{ // DO NOT MAKE STRUCT NODE ATTRIBUTES PRIVATE THAT WILL BREAK EVERYTHING!
        T data;
        Node* prev;
        Node* next;
        };

    private:
        Node* head; // first node in array (first)
        Node* tail; // end node in array (last)
        unsigned int count; // # nodes in array

    public:
        void AddHead(const T& value){
        Node* newNode = new Node(); // allocate memory for a new node
        newNode->data = value; // set newnode data attribute to equal value given
        newNode->prev = nullptr; // set previous node to be nullptr meaning the one before it should be what indicates thestart and the head is right aftert nullptr
        newNode->next = head; // set the one right after the current node holding data to equal old head
        if(head != nullptr){ // if the head is NOTalready nullptr that just means you make the previous one before that head value to equal the newnode since that means that the doubly linked list is not empty
            head->prev = newNode;
        }
        if(head == nullptr){ // if the doubly linked list is empty you set tail equal to newNode because head being null means there is not starting value so thats why we just make the tail equal to the value we have and still have next ewual to null pte therefore making the ending nullptr and keeping the beginning nullptr
            tail = newNode; // the new node is now the tail
        }
        head = newNode;
        count++; // because we are adding a new node we have to increase count anytime there is new node added to give accurate # of the amount of nodes/elements in the doubly linked list
        }

        void AddTail(const T& value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = tail;
        newNode->next = nullptr;
        if(tail != nullptr){
            tail->next = newNode;
        }
        if(tail == nullptr){
            head = newNode;
        }
        tail = newNode;
        count++;
        }
}; 