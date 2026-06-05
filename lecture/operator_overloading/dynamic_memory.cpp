/**
 * DYNAMIC MEMORY:
 */

#include <iostream>
#include <vector>
using namespace std;
// Dynamic memory is memory that is allocated over the heap

void foo() {
    int numbers[3];
    int* dynamic = new int[3];
    delete[] dynamic;
    vector<int>* ptr2 = new vector<int>; // bcs we created a single object o fvector type we can just do delete
    delete ptr2; // internally it takes care of deleting data as well becaue vector is a wrapper for dynamic memory arrays
    // if you have an arrua of objects then you have to use delete[] var_name;
}

int main(){
    // memory leak we dont have access to it because we do not know where is the address anymore and givws memory leak bcs it is never deleted
    foo(); // dynamic was a pointer defined in the scope bt then after itds gonna be deleted bcs they are local to foo function
    return 0;
}


// dynamic sits over the stack
// the address of that array is what its pointing to for dynamic we have indirect access to that location
