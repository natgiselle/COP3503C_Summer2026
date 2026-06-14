/** 
 * 3. Coding Question 2
 * 
Problem Statement (40 points)
This question appeared on Summer 2025’s Exam 1.
Implement a class called IntPtr that manages a dynamically allocated integer. Make sure to use deep copy whenever it’s needed.
Private Attribute: ptr which is a pointer to an interger.
Public Functions:
Parametrized Constructor with a Default Value: Initializes ptr with p with the default value of nullptr
-Parameter: p which is an int pointer
Copy Constructor: Initializes a new object with the existing one.
-Parameter: other a const reference to an IntPtr object
Hint: Check if other.ptr is nullptr then assign ptr to nullptr. Otherwise, use ptr = new int(*other.ptr); to perform a deep copy.
Copy Assignment Operator:
1- Check for self-assignment.
2- Delete the existing object.
3- Deep-copy the value from other (use the hint above).
-Parameter: other a const reference to an IntPtr object
Destructor: Deallocate the memory.
Dereference Operator: Overload * operator to return the int value that ptr attribute points to by dereferencing the ptr pointer.
Dereferencing nullptr results in Segmentation Fault. So, if ptr is nullptr throw a std::runtime_error using the syntax below:
throw std::runtime_error("Dereferencing nullptr");
-Parameter: None
-Return Type: an int reference
*/




#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

// FREEZE CODE BEGIN
class IntPtr {
    
private:
    int* ptr;

public:
// FREEZE CODE END

    // Your code goes here


    /** 
    IntPtr(){
        ptr = nullptr;
    }
    IntPtr(int* p){
      ptr = p; // make private attribute we want to acces equal to the parameter and then from there we can use just ptr
    }
      */

  // we can avoid what we did above by just doing default parameter
  // you make the parameter  have default value inside the parameter
  // for parametrized constructor and then you do the regular
  // parametrized constructor with default value nullptr
    IntPtr(int* p = nullptr){
    ptr = p;
    }

    ~IntPtr(){
        delete ptr;
    }
    // copy constructor:
    IntPtr(const IntPtr& other){
     // ptr = other.ptr; this gives shallow copy we want to undo this
     // just allocated memory to this by creating a new object and then setting it equal to the other
     // derefences both pointers and sets it equal to each other
     // since ptr has not had memory alllocated dynamically
     // we can do this here and then make what they are pointing to the same object but not have the same address; 
        if(other.ptr != nullptr){
        // below it assigns directly to member variable which is what we want rather than creating a local variable
        ptr = new int(*other.ptr); // does the same thing as int* ptr = new int; and then doing *ptr = *other.ptr
      }
      else{
        ptr = nullptr;
      }
    }
    
    int& operator*(){
      if(ptr == nullptr){
        throw std::runtime_error("Dereferencing nullptr");
      }
      else{
        return *ptr;
      }
    }

    // copy assignment operator
    IntPtr& operator=(const IntPtr& other){
      if(ptr == other.ptr){
        return *this;
      }
      else if(other.ptr != nullptr){
        delete ptr;
        ptr = new int(*other.ptr);
        return *this;
      }
      else{
        delete ptr;
        ptr = nullptr;
      return *this;
      }
    }
    


    // FREEZE CODE BEGIN
    int* get() const {
        return ptr;
    }
    // FREEZE CODE END
};