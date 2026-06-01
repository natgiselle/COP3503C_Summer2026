/**
 * 
 * all the variables we have reside somewhere ein the memory
 * if you dont use gnu keyboaerd that is called stack which is where the memory is
 * POINTERS:
 * a pointer is a variable that stores the memory address of another variable
 * because it points to a location in memory rather than holding the value directly
 */

#include <iostream>
#include <string>
using namespace std;

class someClass{
};

int main(){

    /**
     * pointers are used to:
     * modify variables that exist in other scopes like within functions,loops,etc
     * work with dynamically allocated memory new/delete
     * is used when building data structures such as linked lists & trees
     * to avoid copying large objects and just passing an address
     * this is a pointer that stores the memory address of the x variable
     * it is pointing to this location in memory rather than holding the value directly
     */


    // UNINITIALIZED POINTERS like int* ptr; HOLD A GARBAGE ADDRESS SO ALWAYS INITIALIZE to atleast int* ptr = nullptr;
    int x = 42;
    int* ptr = &x; // * declaration syntax is what declares one pointer & one int
    int* ptr3 = nullptr; // points to nothing (best way to initialize value)
    double* dptr = nullptr; // points to double
    char* cptr = nullptr; // points to char
    int* ptr2 = &x;
    int y = 24;
    ptr = &y;
    std::cout << ptr2 << std::endl; // prints the memory address stored in pointer of variable y

    float p = 2.13f;
    double q = 4891.479;
    int someArray[5];
    cout << p;
    cout << q;
    int arr[4] = { 11, 22, 33, 4 };
    cout << "\n";
    cout << "arr: " << *(arr) << endl;
    cout << "arr+1: " << *(arr + 1) << endl;
    cout << "arr+2: " << *(arr + 2) << endl;
    // TRYING TO DEREFENCE NULLPTR WILL GIVE SEGMENTATION FAULT ERROR: SOMETHING IS WRONG IN THE MEMORY IN MOST BUT NOT ALL COMPILERS AND IT DOES NOT GIVE THE LINE IN WHICH TEH ERROR HAPPENED
    int* pointerOne;
    float* pointerTwo;
    someClass* pointerThree;
    // notation can be int *ptr2 or int* ptr2; both are allowed
    // if they didnt know how big the element is then they wont know the location of th firt one
    // so that means it requires 4 bytes that way you can calculate the location of the first one
    int number = 0;
    int *ptr4 = &number;
    // this fnction accept. pointer of somer object class instance
    // instra of passing the actual instance of object class you havw rto pass thw address of that instance
    // Foo(example);
    // Bar(&example); because you wanr to match the parameter list
    
    // POINTERS ARE JUST VARIABLES: THEREFORE THEY CAN BE DECLARED, INITIALIZED, AND REASSIGNED


    // null ptr is ZERO memory location
    // references are locked/alias for existing object is something that cannot be changed
    int a = 5; 
    int b = 12;
    int *ptr1 = &a;
    int *ptr2 = &a;
    *ptr1 = 24;
    cout << *ptr1 << endl;
    *ptr2 = 1024;
    cout << x << endl;
return 0;
// references act as a stand-in or alias for another variable
// will become an alias to that object foer thew rest of your program
// can add alias to any type
}