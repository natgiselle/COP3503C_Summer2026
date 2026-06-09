#include <iostream>
#include "some_object.h"
// delete or delete[] only works when we use the new keyword
int main(){
    someObject* obj = new someObject;
    delete obj;
    obj = nullptr;
    int* intPointer = new int;
    delete intPointer;
    intPointer = nullptr;
    return 0;
}