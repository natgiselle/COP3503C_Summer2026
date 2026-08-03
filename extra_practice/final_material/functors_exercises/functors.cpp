#include <iostream>
using namespace std;

/** 
 * FUNCTOR:
 * is a class that lets you use () on an object like its a function
 * similar to a parametrized or default constructor depending on if it takes parameters or not
*/
struct Square{
    int operator()(int x) const {
        return x*x;
    }
};

class Counter{
    
};

int main(){
    Square square; // makes an object called square
    square(5); // this looks like calling a function
    return 0;
}