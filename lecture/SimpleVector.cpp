#include <iostream>
#include "SimpleVector.h"

//FREEZE CODE BEGIN

SimpleVector::SimpleVector(){
  arr = nullptr;
  size = 0;
}

// Parameterized constructor
SimpleVector::SimpleVector(int initial_size){
    size = initial_size;
    if (size < 0) {
        throw std::invalid_argument("Size cannot be negative.");
    }
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}

//FREEZE CODE END

//Write your Solution here. 

//Copy Constructor
//Copy Constructor
SimpleVector::SimpleVector(const SimpleVector& other){
  // step 1) set simple vars equal to the attribute of the other
  // COPY CONSTRUCTOR DOES NOT NEED TEST CASE BCS ITS BEING CREATED FROMSCRATCH
  size = other.size;

  // any container make new allocated memory
  arr = new int[size];    // arr = other.arr will make both point to same memory address  WE DONT WANT THAT! 
  

  // step 2) deep copy with for loop
  for(int i = 0; i < size; i++){
    arr[i] = other.arr[i];
  }
}

// Copy assignment operator
SimpleVector& SimpleVector::operator=(const SimpleVector& other) {
// WE ARE DELETING PREVIOUSLTY ALLOCATED MEMORY AND THRN ADDING CHECKING FOR LOOP ETC;
// step 1) FIRST CHECK FOR SELF ASSIGNMENT FOR COPY ASSIGNMENT OPERATOR
if(this == &other){
  return *this; // if this pointer points to same address as other address then return derefencing this pointer to get actual value 
}
// step 3) set left side simple attributes equal to other objs attributes
size = other.size;

// step 4)delete previously allocated memory 
delete[] arr; // must do this otherwise memory leak will happen
arr = new int[size]; // step 5) allocate new memory
for(int i = 0; i < size; i++){
  arr[i] = other.arr[i];
}
  return *this; // returning the new value of left side (obj calling the function)
}

// Destructor
SimpleVector::~SimpleVector() {
  delete[] arr; // line 55 used new brackets so delete brackets
}



//FREEZE CODE BEGIN

// Resize method
void SimpleVector::resize(int new_size) {
    if (new_size < 0) {
        throw std::invalid_argument("New size cannot be negative.");
    }

    int* new_arr = new int[new_size];
    for (int i = 0; i < new_size; ++i) {
        new_arr[i] = 0;
    }

    int min_size = (size < new_size) ? size : new_size;
    for (int i = 0; i < min_size; ++i) {
        new_arr[i] = arr[i];
    }

    delete[] arr;
    arr = new_arr;
    size = new_size;
}

// Accessor method
int& SimpleVector::operator[](int index){
  if (index < 0 || index > size-1){
    throw std::out_of_range("Index is out of range.");
  }
  return arr[index];
}

// Get the current size
int SimpleVector::getSize() {
    return size;
}

