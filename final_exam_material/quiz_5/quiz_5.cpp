/**
Each question carries 3 points.
START-----------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 1) What is a Linked List?
A node based and contiguous data structure.
A data structure that is the same as an array.
A node based and non-contiguous data structure.
A special constructor used to create objects.

ANSWER:
A node based and non-contiguous data structure.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 1 FEEDBACK:
A linked list is made up of individual nodes, where each node holds data plus a pointer/reference to the next node.
Unlike an array, these nodes are not required to sit next to each other in memory — they can be scattered anywhere,
which is why a linked list is described as non-contiguous.
This is also why linked lists don't support direct indexing the way arrays do.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 2) Which of the following is true about accessing elements in a singly linked list without a tail pointer?
It supports random access only for the last element, since the last element is always at the end.
It does not support random access because elements cannot be accessed directly by index; to reach the last element, you must follow links from the head through the list.
It supports random access because each node stores the address of every other node.
It does not support random access because the nodes must be stored in consecutive memory locations.

ANSWER:
It does not support random access because elements cannot be accessed directly by index; to reach the last element, you must follow links from the head through the list.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 2 FEEDBACK:
A singly linked list only stores a next pointer in each node, not any kind of index-based lookup table.
Without a tail pointer, the only way to reach any node — including the last one — is to start at the head
and follow next links one at a time. This traversal requirement is what rules out random access,
not the physical memory layout (nodes are non-contiguous, but that's a separate property from access pattern).

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 3) Which of the following statements accurately describes the primary differences between a stack and a queue in C++?
Both stack and queue are Last-In-First-Out (LIFO) data structures, but the stack allows insertion and deletion at both ends, whereas the queue allows insertion at the front and deletion at the back.
A stack is a Last-In-First-Out (LIFO) data structure, whereas a queue is a First-In-First-Out (FIFO) data structure. The stack allows insertion and deletion only at one end (top), while the queue allows insertion at the back and deletion at the front.
Both stack and queue are First-In-First-Out (FIFO) data structures, but the stack allows insertion and deletion at both ends, whereas the queue allows insertion at the back and deletion at the front.
A stack is a First-In-First-Out (FIFO) data structure, whereas a queue is a Last-In-First-Out (LIFO) data structure. The stack allows insertion at the front and deletion at the back, while the queue allows insertion and deletion only at one end (top).

ANSWER:
A stack is a Last-In-First-Out (LIFO) data structure, whereas a queue is a First-In-First-Out (FIFO) data structure. The stack allows insertion and deletion only at one end (top), while the queue allows insertion at the back and deletion at the front.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 3 FEEDBACK:
A stack follows LIFO ordering — the most recently pushed element is the first one popped — and both operations
happen at a single end, the "top." A queue follows FIFO ordering — elements are removed in the same order they
were added — with insertion at the back and removal from the front. Mixing up which end each structure
uses, or swapping LIFO/FIFO, is the most common way to get this kind of question wrong.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 4) What is the difference between a singly linked list and a doubly linked list in C++?
A singly linked list has references to both the previous and next elements, whereas a doubly linked list has a reference only to the next element
Both have references to the next and previous elements in the list.
A singly linked list has a link only to the next element, whereas a doubly linked list has links to both the previous and next elements

ANSWER:
A singly linked list has a link only to the next element, whereas a doubly linked list has links to both the previous and next elements

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 4 FEEDBACK:
A singly linked list node only stores a pointer to the next node, so traversal only goes in one direction (forward).
A doubly linked list node stores pointers to both the next and previous nodes, which allows traversal in either
direction at the cost of extra memory per node (one additional pointer) and slightly more bookkeeping on insert/delete.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 5) Given a templated class of type T with various operator overloads, what is the expected return type of operator+()?
int
bool
T
T&

ANSWER:
T

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 5 FEEDBACK:
operator+ creates a brand-new object representing the sum/combination of two operands — it should not modify
either existing operand. Because of this, it should return by value as type T, not by reference (T&), since a
reference would point to a temporary or local object that goes out of scope. Returning T also allows chained
expressions like a + b + c to work correctly.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 6) Examine the code below:

template <typename T>
T addValues(T a, T b) {
    return a + b;
}

int main() {
    cout << addValues(4, 6) << endl;
    cout << addValues(3.5, 2.1) << endl;
    cout << addValues(4, 2.5) << endl;

    return 0;
}
What happens when this code is compiled?
The first two function calls compile, but the third call causes an error because the compiler cannot choose one type for T.
All three function calls compile because T can represent multiple types at the same time.
Only the first function call compiles because templates work only with integers.
The code compiles, but all values are converted to integers.

ANSWER:
The first two function calls compile, but the third call causes an error because the compiler cannot choose one type for T.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 6 FEEDBACK:
Template argument deduction requires a single, consistent type for T based on the arguments passed in.
addValues(4, 6) deduces T = int, and addValues(3.5, 2.1) deduces T = double — both calls are internally
consistent. addValues(4, 2.5) passes one int and one double, so the compiler cannot deduce a single T
from mismatched argument types and fails to compile (no implicit conversion is performed to unify them
during deduction).

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 7) Where should the next pointer of the tail node point to for a non-circular doubly linked list?
leave uninitialized
nullptr
0
head
tail

ANSWER:
nullptr

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 7 FEEDBACK:
In a non-circular list, the tail marks the end of the chain, so its next pointer should explicitly point to
nullptr. This gives traversal code a clear, well-defined stopping condition ("keep going while next != nullptr").
Leaving it uninitialized would produce undefined behavior, and pointing it back to head would make the list
circular, which contradicts the question's premise.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 8) Fill in the missing code to complete the structure for Node for a singly linked list:

struct Node
{
 int data;
 // Fill in here
};

int* ptr;
Node* next;
const int* next;
Node next;
Node& next;

ANSWER:
Node* next;

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 8 FEEDBACK:
A node needs a pointer to the next Node in the list, so the member should be Node* next;.
It can't be Node next; because that would make Node contain a full copy of itself, giving it infinite size
(a compile error). It can't be Node& next; either, since references can't be reassigned or set to null,
which a linked list needs to be able to do (e.g., for the tail's next pointer).

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 9) Given an array-based stack implementation, which of the following is the correct way to push an item onto the stack if the underlying array is completely full?
Create a new array with a bigger capacity, copy over the original elements, and push the new item onto the top of the new array.
Overwrite the bottom of the stack with the new item to make more room.
Shift every element one position to the left to create space at the top of the stack.
Reject the push operation and throw an exception.

ANSWER:
Create a new array with a bigger capacity, copy over the original elements, and push the new item onto the top of the new array.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 9 FEEDBACK:
A fixed-size array can't grow in place, so once it's full the standard approach is to allocate a new,
larger array (commonly double the old capacity), copy every existing element over in order, and then
push the new item onto the new array. This is the same resizing strategy used internally by dynamic
array structures like std::vector. Overwriting or shifting elements would destroy existing data, and
simply rejecting the push isn't how a resizable stack is expected to behave.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 10) Given the following singly-linked list, imagine you are writing a function to insert a new Node after an existing Node located at a specific index in the list. Your code utilizes a for loop, and has reached the location of Node #1, identified as the "currentNode." You want to insert the newNode AFTER Node #1. What step should you take FIRST to make sure no data element is lost?
Assign newNode->next to Node #2.
Assign currentNode->next to newNode.
Assign currentNode to Node #0

ANSWER:
Assign newNode->next to Node #2.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 10 FEEDBACK:
Before you touch currentNode->next, you have to save where it currently points (Node #2), or that link is
gone forever once you overwrite it. So the first step is newNode->next = currentNode->next (i.e., Node #2).
Only after newNode safely points to the rest of the list is it safe to do currentNode->next = newNode,
which splices newNode into the chain. Doing it in the reverse order would overwrite currentNode->next
before newNode has a copy of it, permanently losing the rest of the list.
END-------------------------------------------------------------------------------------------------------------------------------------------------------------
 */