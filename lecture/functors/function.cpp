#include <iostream>
#include <vector>
using namespace std;

/** 
 * AUTO:
 * function names are pointers to the set of instructions so it will adjust to that type for auto
 * 
 * char = 50 char can be a number value like this for ASCII value it could be aspcific letter or symbol etc
 *
 * 
 * BEST FOR ITERATORS
 * THE WORST FOR BASIC DATA TYPES IT MAKES THE CODE LESS READABLE AND MORE CONFUSING
*/

/** 
 * FUNCTIONS:
 * 
*/

    
int func(){
    return 5;
}

int func2(int a, int b){
    return a+b;
}

int main(){

    cout << "func call: " << func() << endl;
    cout << "func name: " << func << endl;
    cout <<"func memory address: "<< (void*) func << endl; // gives memory address of the function cast it to void asterisk, it prints 1 for any func with just function name
    
    int a = 4;
    int* ptr = &a;

    // derefrence 
    int(*funcPtr)() = func; // pointer to the function, same list of parameter and the return type and some name
    
        cout << (void*)funcPtr << endl;

        // remove name of paramters but keep the type

        int(*func2Ptr)(int, int) = func2;

        cout << "original: " << (void*) func2 << endl;
        cout << func2Ptr(5,6) << endl; // have alias to actual function name;
    return 0;
}