
// last node always points to null ptr
// head 1->2->3 tail
#include <iostream>
using namespace std;
class LinkedList{
    private:
    struct Node {
        int data;
        Node* next;
        Node(int d): data(d), next(nullptr) {}
    };
    Node* head;
    public: 

    LinkedList(): head(nullptr) {} // constructor
    ~LinkedList(){
        Node* current = head;
        
        while(current != nullptr){
            Node* temp = current->next;
            delete current;
            current = temp;
        }
    }
    void insertTail(int data_){
        Node* newNode = new Node(data_);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
    }

    void removeHead() {
        if(head == nullptr){ // handles empty case if head is nullptr there is nothing in the linked list
            return;
        }
    }


};