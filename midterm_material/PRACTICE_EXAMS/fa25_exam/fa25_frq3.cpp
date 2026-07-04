/** 
 * 4. 2025 Fall Midterm 1 - FRQ #3
Problem Statement (25 points)
Your task is to add the Big Three functions to DynamicArray class which manages a dynamically allocated array of characters, avoiding memory leaks and shallow copies.
Attributes (given):
int size stores the number of characters in the dynamic array
char* array pointer to the dynamically allocated character array
Functions (to implement):
1. Destructor
Releases any dynamically allocated memory.
2. Copy Constructor
Creates a new DynamicArray object as an exact copy of another one passed in as a parameter. This function must perform a deep copy so that the new object has its own separate memory.
3. Copy Assignment Operator
Sets an existing DynamicArray object to an exact copy of another existing DynamicArray object, passed in as a parameter. It should properly handle:
checking for self-assignment
freeing the currently allocated memory
performing a deep copy.
*/
#include <vector>
using namespace std;

// FREEZE CODE BEGIN
class DynamicArray {
public:
    int size;
    char* array;

    int getSize() { return size; }
    char* getArray() { return array; }

    DynamicArray() { size = 0; array = nullptr; }
// FREEZE CODE END


// Destructor
~DynamicArray(){
    delete[] array;
}

// Copy Constructor
// creating a new object so there is no need to delete anything
DynamicArray(const DynamicArray& other){
    size = other.size;
    array = new char[size];
    for(int i = 0; i < size; i++){
        array[i] = other.array[i];
    }
}

// deleting is needed here bcs we are doing it from an already existing object
// Copy Assignment Operator
DynamicArray& operator=(const DynamicArray& other){
    if(this == &other){
        return *this;
    }
    delete[] array;
    size = other.size;
    array = new char[size];
    for(int i = 0; i < size; i++){
        array[i] = other.array[i];
    }
    return *this;
}
// FREEZE CODE BEGIN
};
// FREEZE CODE END
