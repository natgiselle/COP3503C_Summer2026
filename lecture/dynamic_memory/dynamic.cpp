/**
 * @author Natalie Ortiz
 * @date 06/10/2026
 */




/**
 * Current layout: 1 Panel without tree
Page 1
Page 1
Big Three MCQ
Answer the following MCQ correctly for class participation. Unless all answers are correct, there will be no extra credit awarded. Fill out the Class Activity MCQ Feedback Form when you are done.
Question 1

When is the copy constructor called?


MyClass obj1;
MyClass obj2 = obj1;  // A
MyClass obj3(obj1);   // B
func(obj1);           // C
return obj1;          
Assuming func takes in paramaters by value/copy.


All cases <- CORRECT ANSWER


A and B only.


B and C only.


None of the time.

Check It!

Question 2

Why do we MUST define the big three functions when using dynamic memory in a class?


Without the big three, we cannot copy the class since we won’t have any functions to do so.


Without the big three, C++ will generate a shallow copy object an object.   <- CORRECT ANSWER
This can result in a dangling pointer when the destructor
is called on either the original object or the copy object.


We don’t need to define the big three.


Without the big three, we cannot override any operators in the class.

Check It!

Question 3

Which of these correctly defines a copy assignment operator?



HeapAllocator operator=(const HeapAllocator& rhs) {
    for (int i = 0; i < rhs.current_size; ++i) {
    this->array[i] = rhs.array[i];
    }


HeapAllocator& operator=(const HeapAllocator& rhs) {
    for (int i = 0; i < rhs.current_size; ++i) {
    this->array[i] = rhs.array[i];                      
    }
    return &this;
}


HeapAllocator& operator=(const HeapAllocator& rhs) {    <-CORRECT ANSWER
    if (this == &rhs)
      return *this;
    delete[] array;
    current_size = rhs.current_size;
    array = new int[current_size];                 
    for (int i = 0; i < current_size; ++i) {
        array[i] = rhs.array[i];
    }
    return *this;
}


HeapAllocator(const HeapAllocator& other) {
    for (int i = 0; i < other.current_size; ++i) {
        this->array[i] = other.array[i];
    }
Check It!
Mark as CompletedBack to dashboard
 */






/**
 * Current layout: 1 Panel without tree
Page 1
Page 1
Dynamic Memory MCQ
Please answer the following MCQ correctly for class participation. Extra credit is awarded only if ALL answered correctly.
Fill out the Class Activity MCQ Feedback Form when you are done, your feedback will help us to improve these activities in the future.
Question 1

When is memory leaked in this code?


MyClass* obj = new MyClass();
obj = new MyClass();
delete obj;

No leak occurs.


First Assignment


Second Assignment. <-CORRECT


At delete.

Check It!

Question 2

What is wrong with this code?


int* ptr = new int[5];
delete ptr;  

delete should be used with delete[] for arrays <- CORRECT ANSWER


Memory allocation syntax is wrong.


You need to initialize the array elements before deleting it.


Nothing is wrong.

Check It!

Question 3

Why is it considered good practice to assign a pointer to nullptr after deleting the memory it points to?


It makes the code more efficient by reducing memory usage.


You shouldn’t do that.


It prevents the pointer from pointing to invalid memory, avoiding potential undefined behavior. <- CORRECT ANSWER


It allows the memory to be reused automatically.

Check It!
Mark as CompletedBack to dashboard
*/
#include <iostream>
using namespace std;
/** BIGTHREE: destructor, copy constructor, copy assignment operator */
class Dynamic{
    int* arr;
    int size_;
    public:
    Dynamic(){
        arr = new int[5]; 
        size_ = 5;
    }
    Dynamic(int size){
        arr = new int[size];
        for(int i = 0; i < size_; i++){ // initialize arr
            arr[i] = i+1;
        }
    }

    Dynamic(const Dynamic& other){
        // use other and 
        arr = new int[other.size_]; // of the size of the other array object
        size_ = other.size_;
        for(int i = 0; i < size_; i++){
            arr[i] = other.arr[i]; // make arr have other.arr's elements at each index
        }
    }

    // return by reference ebcause it is the most efficient
    /** IMPORTANT: COPY ASSIGNMENT OPERATOR  */
    
    Dynamic& operator=(const Dynamic& rhs){ // short for right hand side
        if(this == &rhs){ // pointer to current object so it has the memory address 
            return *this;
        }
        // WRONG!!!! THIS LINE DOESNT WORK AS INTENDED BY DEFAULT WE NEED TO OVERRIDE THIS  arr = rhs.arr; same problem that happened with the shallow copy  
        // copying the elements individually 
        delete[] arr; // delete the previously allocated memory to free up the space and prevent memory leak
        size_ = rhs.size_;
        arr = new int[rhs.size_];
        for(int i = 0; i < size_; i++){
            arr[i] = rhs.arr[i]; // arr attribute of rhs (right hand side) dynamic class object
        }
        return *this;
    }

    ~Dynamic(){
        delete[] arr;
        arr = nullptr;
    }


};

void foo(){
    Dynamic obj1;
}

int main(){
    Dynamic obj1(3);
    // obj2 = obj2 self assignment check!!!!! ifboth of them are the same yoy dont have to return anymore stuff
    // Dynamic obj2 = obj1; told constructor that we want obj2 to be exactly the same as obj1 but it wont work as intended
    Dynamic obj2;
    // have two independent objects sharing one array memory address one will fall out of scope and memory will be deleted
    // and the other is gonna stay pointing to it the other one is gonna change to certain value and then the other one
    // is gonna be changed we need to decouple it its just gonna copy the address it wont create individual array for you here;
    /** COPYCONSTRUCTOR: 
     * Dynamic(const Dynamic& other) is reference because its more optimal nd efficient than using passby copy */
}

// copy constructor Dynamic(const Dynamic& other) is reference because its more optimal nd efficient than using passby copy