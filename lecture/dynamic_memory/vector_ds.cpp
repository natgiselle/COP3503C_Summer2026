#include <iostream>
#include <vector>
// all doubling and relocation happens on the HEAP! NOT THE STACK
// the stack points to the memory address
// the stack holds 3 internal variables: pointer, size, capacity
// the actual data array lives on the heap

int main(){
    std::vector<int> vec; // can do vec(100) for vector of size 100
    for(int i = 1; i < 11; i++){
        vec.push_back(i);
    }
    return 0;
}