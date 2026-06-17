

/**
 * You are given a custom IntArray class that stores integers
 * in a dynamically allocated int* array (similar to how String used char*).
 * Implement the six methods below. 
 * */
// FREEZE CODE BEGIN
#pragma once
#include <iostream>
using namespace std;

class IntArray {
private:
    int* data;
    int  size;
public:
    IntArray();
    IntArray(const int* arr, int sz);
    ~IntArray();
    IntArray(const IntArray& other);
    IntArray& operator=(const IntArray& other);
    IntArray  operator+(const IntArray& other);

    int  getSize()        const { return size; }
    int* getData()        const { return data; }
    int  at(int i)        const { return data[i]; }
};
// FREEZE CODE END

/**
 * Your task — implement these 6 methods
 * 1.Default constructor:
 * sets size to 0, allocates new int[1], sets data[0] = 0.
 * 
 * 2.Parameterized constructor: takes a const int* arr and int sz.
 * Setsize = sz, allocate new int[size],
 * copy each element from arr into data with a for loop.
 * 
 * 3.Destructor: delete[] the data array. 
 * 
 * 4.Copy constructor: deep copy from other: copy size, allocate new memory, copy each element.
 * 
 * 5.Copy assignment operator: self-assignment check first,
 * then delete old data, deep copy from other, return *this.
 * 
 * 6.operator+: concatenate two IntArrays into a new one.
 * The result contains all elements of*this followed by all elements of other.
 * Return the new IntArray by value.
 * 
 * Example: 
 * [1, 2, 3] + [4, 5] = [1, 2, 3, 4, 5]
 */

IntArray::IntArray(){
    size = 0;
    data = new int[1]; // arr with size 1 and make the first element (index 0 ) equal to zero
    data[0] = 0;
}

// PARAMETRIZED CONSTRUCTOR
IntArray::IntArray(const int* arr, int sz){
    size = sz;
    // allocate new memory for arr
    data = new int[size];
    // loop thru each element and copy arr elements INTO data so data at index i = arr at index i
    for(int i = 0; i < size; i++){
        data[i] = arr[i]; 
    }
}

// DESTRUCTOR
IntArray::~IntArray(){
    delete[] data; // deletes whatever is dynamically allocated
}

// COPY CONSTRUCTOR
IntArray::IntArray(const IntArray& other){
    // set make size have value of other.size since you CANNOT modify right hand side which is attributes of other it is constant
    size = other.size;

    // allocate new memory
    data = new int[size]; // allocates directly into data

    // deep copy the elements
    for(int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
}

// COPY ASSIGNMENT OPERATOR
IntArray& IntArray::operator=(const IntArray& other){
    // MUST DO SELF-ASSIGNMENT CHECK FIRST
    if(this == &other){
        return *this;
    }
    // AFTER SELF-ASSIGNMENT DELETE PREVIOUSLY ALLOCATED MEMORY
    delete[] data;

    // DEEP COPY SIZE
    size = other.size;

    // ALLOCATE NEW MEMORY TO THE SPECIFIC THING WE WANT TO ALLOCATE TO DIRECTLY!!!! 
    data = new int[size];

    // DEEP COPY LOOP
    for(int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
    return *this;
    // return *this
}


IntArray IntArray::operator+(const IntArray& other){
    // similar to copy assignment operator but instead no self check go straight into deleting previously allocated memory
    IntArray result;
    delete[] result.data; // delete whatever memory got previously allocated on result object
    // BECAUSE WHEN WE INITIALIZE RESULT ITCALLS THE DEFAULT CONSTRCUTOR AND GIVES IT DEFAULT VALUES ALLOCATED ON THE HEAP
    // WHICH WE DO NOT WANT AND WE WANT A CLEAN SLATE so once we initialize we want to delete whatever was created by default
    // on default constructor since we initialized without parameters

    result.size = this->size + other.size;

    result.data = new int[result.size];

    //DEEP COPY LOOPS set combined size
    for(int i = 0; i < this->size; i++){
        result.data[i] = data[i];
    }
    for(int j = 0; j < other.size; j++){
        result.data[this->size + j] = other.data[j];
    }
    return result;
}