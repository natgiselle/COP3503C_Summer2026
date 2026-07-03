#include <iostream>
using namespace std;

class LinkedList {
    private:
        struct Node {
            int data;
            Node* next;
        };
    public:
        Node* head;
        Node* tail;

        /** CONSTRUCTOR: */
        LinkedList(): head(nullptr), tail(nullptr) {}

        /** DESTRUCTOR: */
        ~LinkedList(){
            // start with current node at head
            Node* curr = head;
            // traverse until nullptr
            while(head != nullptr){
                // create a seperate Node* that stores current so that we can access the next value before deleting allocated memory
                Node* temp = curr->next;
                delete curr; // delete the current node
                curr = temp; // this makes current equal to the next node and then it goes on until we reach nullptr
            }     
        }

        void addHead(int val){ // adds node to beginning
            Node* newNode = new Node(); 
            newNode->data = val;
            newNode->next = head;
            head = newNode;
        }


};
