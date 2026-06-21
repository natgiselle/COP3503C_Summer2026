/** 
 * LINKEDLIST:
 * 
 * a raw array stores elements in contagious memory
 * a linked list is NON contagious meaning each element
 * just knows where the next one is but doing something
 * to one does NOT affect the rest of the array
 * 
 * each element in a linked list is called a node:
 * 
*/

class LinkedList{
    private:
    struct Node { // struct is in private of linkedlist and holds data and pointer to next node/element inside the struct
        Node* next;
    };
    Node* head; // head is stored outside of Node struct but has head inside the class itself which is the starting element/node in the linked list
    public:
    LinkedList(): head(nullptr) {} // constructor
};