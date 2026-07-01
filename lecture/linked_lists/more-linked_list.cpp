
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
    Node* tail;
    public: 

    LinkedList(): head(nullptr), tail(nullptr){} // constructor
    ~LinkedList(){
        Node* current = head;
        
        while(current != nullptr){
            Node* temp = current->next;
            delete current;
            current = temp;
        }
    }

    // INSERTHEAD FUNCTION MUST BE COMPLETED
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

            if(head->next == nullptr){ // head is starting if the next one is nullptr that means there is one element in the linked list
                delete head;
                head = nullptr;
                tail = nullptr;
                return;
            }

            // if all failed it has atleast 2 or more elements in the linked list
            Node* temp = head;
            head = head->next; // need extra temporary pointer to keep track of the rest of the linked list
            delete temp; // do not need to adjust tail pointer in this case bcs head already points to the next thing
    }

    void removeTail() {
        if(head == nullptr) { // empty
            return;
        }
        if(head->next == nullptr){
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }

        // 2 or more elements in the linkedlist we do traversal
        Node* current = head;
        while(current->next->next != nullptr){ // a node before the last node
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }


    // copy constructor
    LinkedList(const LinkedList& other){
        if(other == nullptr){
            head = nullptr;
            return;
        }

        Node* current = head;
        while(current != nullptr){
            current = current->next;
            insertHead(current->data);
        }
    }


    // copy assignment operator
    LinkedList& operator=(const LinkedList& other){
        if(other->head == nullptr){
            return;
        }

        if(other == nullptr){
            head = nullptr;
        }
        Node* current = other->head;
        while(current != nullptr){
            current= current->next;
            removeHead();
        }


        // fix this later
        current = other->head;
        while(current != nullptr){
            current= current->next;
            removeHead();
        }
    }

};

int main() {


    LinkedList L1;

    L1.insertTail(1);
    L1.insertTail(2);
    L1.insertTail(3);
    return 0;
}