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
};