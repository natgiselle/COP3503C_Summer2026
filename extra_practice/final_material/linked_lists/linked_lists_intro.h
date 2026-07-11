/** 
 * LINKEDLIST:
 * 
 * CONTIGUOUS: in arrays means elements are sitting right next to each other in memory, address by address
 * like arr[3] has time complexity of O(1) because it does start address + 3 and jumps to that
 * 
 * a raw array stores elements in CONTIGUOUS memory
 * 
 * a linked list is NON CONTIGUOUS meaning each element
 * just knows where the next one is
 * meaning elements can live anywhere in the memory
 * and are CONNECTED: ONLY: THROUGH: POINTERS:
 * 
 * NODE: each element in a linked list is called a node
 * a node is defined in struct Node with two attributes:
 * a value holding the actual data
 *  pointer to next node Node* next
 * since the nodes are randomly stored in memory meaning it is not side by side memory addresses like raw arrays have
 * 
 * 
 * THE WHOLE POINT OF LINKED LISTS IS THERE IS NO SHIFTING NEEDED WHEN REMOVING AND ADDING ELEMENTS
 * IT HAS A TIME COMPLEXITY OF O(n) when performing the removal or addition of elements/nodes in the linked list
*/
#ifndef LINKED_LISTS_INTRO_H
#define LINKED_LISTS_INTRO_H
#include <iostream>
using namespace std;

class LinkedList{
    private:
    struct Node { // struct is in private of linkedlist and holds data and pointer to next node/element inside the struct
        int data;
        Node* next;
    };
    Node* head; // head is stored outside of Node struct but has head inside the class itself which is the starting element/node in the linked list
    public:
    LinkedList(): head(nullptr) {} // constructor
    ~LinkedList() {
        Node* curr = head; // sets current pointer to point to where head is which is the starting node 
        // beginning with starting node we will loop through the linked list until it is nullptr to get the next node and savign that value then deleting the allocated memory currently held by curr
        while(curr != nullptr){
            Node* temp = curr->next; // save next node before deleting allocated memory on curr
            delete curr;
            curr = temp; // DO NOT DELETE CURRENT NODE BEFORE SAVING THE NEXT BCS THEN THERE IS NO CHAINING AND IT WONT WORK
        }
    } // destructor filled in later


    /** EXERCISES: */
    void prepend(int val) { // prepend means to add a new node element to the linked list and then just moving the next pointer after it to be the head andn thn settin the head ewual to new node
        /** 
         * 1. create the newnode with new
         * 2. set data to val
         * 3. set its next to head
         * 4. set head to the new node
        */
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    void print() {
        Node* curr = head;
        while(curr != nullptr){
            cout << curr->data << endl;
            curr = curr->next; // just move the curr node forward to next and make current pointer point to next element/node
        }
    }
    int length() {
        Node* curr = head;
        int node_count = 0;
        while(curr != nullptr){
            node_count++;
            curr = curr->next;
        }
        return node_count;
    }
    bool contains(int val) { // checks if it finds a node that has current node ewual to the val passed if not give false if you go to the end without it 
        Node* curr = head;
        while(curr != nullptr){
            if(curr->data == val){
                return true;
            }
            curr = curr->next; // goes to next node
        }
        return false;
    }
    void append(int val){ // add a node to the end of the list
        Node* newNode = new Node();
        newNode->data = val;
        Node* curr = head;
        if(head == nullptr){
            head = newNode;
            return;
        }
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void removeVal(int val) {
        // edge case 1: empty list
        if(head == nullptr){
            return;
        }
        // edge case 2: the head is the target
        if(head->data == val){
            Node* temp = head;
            head = head->next; // new head is the next node
            delete temp;
            return;
        }

        // general case: traverse with prev and curr;
        Node* prev = head;
        Node* curr = head->next;
        while(curr != nullptr){
            if(curr->data == val){
            prev->next = curr->next; // skips over curr
            delete curr;
            return;
            }
            prev = curr;
            curr = curr->next;
        }
        // if we get here val wasnt found and there is nothing to do meaning it does not exist in the linked list to even be deleted in the first place
    }
};

#endif