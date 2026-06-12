/**
Each question carries 3 points.
START-----------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 1) Which of the following is the correct syntax for overloading the + operator in a class named Complex in C++?
void operator+ (const Complex obj);
Complex& operator+ (Complex& obj);
Complex operator+ (const Complex& obj);
Complex* operator+ (Complex obj);

ANSWER:
Complex operator+(const Complex& obj);

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 1 FEEDBACK:
This uses a const reference parameter, which is an efficient and safe way to pass an object into a function.
The const keyword means the function cannot modify obj.
The reference symbol & means the object is not copied, which saves memory and improves performance.
The other options are incorrect because they use the wrong return type.
For simple arithmetic operators such as +, -, *, and /, the result should usually be returned by value.
This is because these operators create and return a new object, rather than modifying one of the existing objects.
Returning by value also supports chained expressions such as: c1 + c2 + c3.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 2) Which of the following is the best syntax for overloading the += operator in a class named Complex in C++?
Complex operator+=(Complex obj);
void operator+=(const Complex& obj);
Complex& operator+=(const Complex& obj);
Complex* operator+=(Complex obj);

ANSWER:
Complex& operator+=(const Complex& obj);

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 2 FEEDBACK:
This is the best syntax because compound assignment operators, such as +=, -=, *=, and /=, usually modify the current object.
The return type should be Complex& because the function returns a reference to the current object after modifying it.
This avoids unnecessary copying and allows chained operations such as: c1 += c2 += c3;
The parameter is passed as a const Complex& because the right-hand object should not be modified,
and using a reference avoids making an unnecessary copy.
The other options are incorrect or less ideal because they either return void, return by value,
use a pointer return type, or make unnecessary copies.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 3) Assuming that an integer requires 4 bytes of memory, how many bytes are leaked by the following code?

int* x = new int[10];
int y = 0;
x = new int[3];
x = new int[5];
x = &y;

52
72
18
13

ANSWER:
72

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 3 FEEDBACK:
The code creates three separate dynamic arrays: new int[10] (40 bytes), new int[3] (12 bytes), and new int[5] (20 bytes).
Each time the pointer x is reassigned, the previous array becomes inaccessible without being deleted, causing a memory leak.
Total leaked memory: 40 + 12 + 20 = 72 bytes.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 4) Which of the following correctly describes the storage location and lifetime of the given variables in C++?

#include <iostream>

class Example {
public:
    int value;
    Example(int v) : value(v) {}
};

void exampleFunction() {
    int x = 10;
    int* y = new int(20);
    Example* obj = new Example(30);
}

int main() {
    int* z = new int(40);
    exampleFunction();
    return 0;
}

x is stored on the stack with a lifetime limited to the scope of exampleFunction.
y, obj, and z pointers are stored in the stack memory and their lifetime is limited to the scope that they defined in.
The memory that y, obj, and z point to is allocated on the heap memory with a lifetime until they are explicitly deleted.

x and the memory that y points to are stored on the stack with a lifetime limited to the scope of exampleFunction.
The memory that obj and z point to is allocated on the heap with a lifetime until they are explicitly deleted.

x and the memory that y and obj point to are stored on the stack with a lifetime limited to the scope of exampleFunction.
The memory that z points to is allocated on the heap with a lifetime until the end of main.

x is stored on the heap with a lifetime limited to the scope of exampleFunction.
The memory that y, obj, and z point to is stored on the stack with a lifetime until they are explicitly deleted.

ANSWER:
x is stored on the stack with a lifetime limited to the scope of exampleFunction.
y, obj, and z pointers are stored in the stack memory and their lifetime is limited to the scope that they defined in.
The memory that y, obj, and z point to is allocated on the heap memory with a lifetime until they are explicitly deleted.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 4 FEEDBACK:
Variable x is a local integer stored on the stack and automatically destroyed when exampleFunction exits.
The pointer variables y, obj, and z themselves are stored on the stack (in their respective scopes),
but they point to memory allocated on the heap using the new operator.
This heap-allocated memory persists beyond function scope and must be explicitly freed with delete to prevent memory leaks.
The other options are incorrect because they misidentify where the dynamically allocated memory is stored —
any memory allocated with new is always on the heap, not the stack.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 5) Which of the following are part of the "Big Three" in C++ class design, and why are they important?
Default constructor, Copy constructor, Move constructor - They manage object creation and movement.
Move constructor, Move assignment operator, Destructor - They optimize performance by transferring resources instead of copying them.
Copy constructor, Copy assignment operator, Destructor - They handle deep copying and resource management to prevent resource leaks and undefined behavior.
Default constructor, Move constructor, Destructor - They ensure proper initialization and efficient resource management.

ANSWER:
Copy constructor, Copy assignment operator, Destructor - They handle deep copying and resource management to prevent resource leaks and undefined behavior.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 5 FEEDBACK:
The "Big Three" in C++ are the copy constructor, copy assignment operator, and destructor.
These three special member functions are crucial when a class manages resources
(like dynamic memory, file handles, or network connections).
They work together to ensure proper resource management:
the copy constructor creates deep copies when objects are copied,
the copy assignment operator handles assignment operations with proper cleanup and copying,
and the destructor releases resources when objects go out of scope.
Without proper implementation of all three, programs can suffer from resource leaks,
double deletion errors, or shallow copying issues.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 6) When do you need to explicitly create the Big Three for a class in C++?
The implicit definition created by the compiler is sufficient for any class.
When your class has a pointer member variable that points to memory created with new keyword.
When class attributes are allocated on the stack memory.
You should always define the Big Three in your class.

ANSWER:
When your class has a pointer member variable that points to memory created with new keyword.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 6 FEEDBACK:
When a class dynamically allocates memory (using new keyword),
the compiler-generated destructor, copy constructor, and assignment operator perform shallow copies,
which can lead to memory leaks, double deletion, and dangling pointers.
Explicitly defining the Big Three ensures proper deep copying and memory management.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 7) A class stores a pointer to a dynamically allocated array. The class has a destructor that deletes the array,
but it does not define a copy constructor or copy assignment operator.
What is the most likely problem if one object is copied into another?
The destructor will stop working because the object was copied.
The program will always fail to compile.
Both objects may point to the same array, which can lead to double deletion or undefined behavior.
The array will automatically be deep copied by the compiler.

ANSWER:
Both objects may point to the same array, which can lead to double deletion or undefined behavior.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 7 FEEDBACK:
When a class doesn't define a copy constructor or copy assignment operator,
the compiler provides default shallow copy behavior.
This means both objects will contain the same pointer value, pointing to the same dynamically allocated array.
When both objects go out of scope, their destructors will both attempt to delete the same memory location,
resulting in double deletion and undefined behavior.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 8) Examine the given class and class method. What will be the output of this program?

#include <iostream>

class Example {
public:
    Example(){
      std::cout << "Created ";
    }
    ~Example(){
      std::cout << "Destroyed ";
    }
};

void exampleFunction() {
    int x = 10;
    std::cout << &x << " ";
    int* y = new int(20);
    std::cout << *(y) << " ";
    Example obj;
}

int main() {
    exampleFunction();
    return 0;
}

(memory address of x) 20 Created
(memory address of x) 20 Created Destroyed
(memory address of x) (memory address of y) Created Destroyed
10 (memory address of y) Created Destroyed

ANSWER:
(memory address of x) 20 Created Destroyed

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 8 FEEDBACK:
The program outputs the memory address of variable x using &x,
then dereferences pointer y to output its value (20),
then creates an Example object which triggers the constructor printing "Created",
and finally when the function ends, the local object goes out of scope triggering the destructor which prints "Destroyed".
The dynamically allocated memory from new int(20) is not deleted, so no destructor is called for it.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 9) When overloading the assignment operator for a class that uses dynamic memory,
what should the function usually do before copying the new data?

First check for self-assignment. If self-assignment occurs, nothing needs to be changed, so return the current object.
Otherwise, delete the existing dynamically allocated memory to prevent a memory leak.
Then perform deep copy operation by allocating new memory and copy the data from the source object.

First delete the existing dynamically allocated memory, then check for self-assignment and return if true,
otherwise allocate new memory and copy the data.

Only delete the existing dynamically allocated memory if the new object being assigned has more data than the current object,
otherwise reuse the existing memory.

Create a temporary copy of the current object's data, delete the existing memory,
then restore the data if the assignment fails.

ANSWER:
First check for self-assignment. If self-assignment occurs, nothing needs to be changed, so return the current object.
Otherwise, delete the existing dynamically allocated memory to prevent a memory leak.
Then perform deep copy operation by allocating new memory and copy the data from the source object.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 9 FEEDBACK:
When overloading the assignment operator for a class with dynamic memory, first check for self-assignment.
If the object is assigned to itself, nothing needs to change, so return the current object.
Otherwise, delete the old dynamically allocated memory to avoid a memory leak.
Then allocate new memory and perform a deep copy from the other object.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 10) Which option correctly explains the use of const in the following C++ code?

class Student {
private:
    string name;
    int score;

public:
    string getName() const;
    void compareScore(const Student& other);
};

int grade1 = 90;
int grade2 = 85;

const int* p1 = &grade1;
p1 = &grade2;
int* const p2 = &grade1;
const int* const p3 = &grade1;

p1, p2, and p3 each use const, but they apply it in different ways: p1 makes the pointed-to value constant,
p2 makes the pointer itself constant, and p3 makes both constant.
getName() is a const member function, so it cannot change the object's data members,
and other cannot be changed in compareScore() because it is a const reference.

getName() const can still change the name or score attributes.
compareScore(const Student& other) can still modify the calling object but cannot change the other which is const.
p1 cannot modify the value it points to, and p2 cannot be reassigned to point somewhere else.
p3 cannot do either.

Because other is passed by reference, compareScore() avoids making a copy of the argument.
However, the const qualifier only prevents reassignment of the reference itself, so other can still be modified inside the function.
p1 can point to a different location but cannot modify the value it points to,
while p2 cannot point to a different location and also cannot modify the value it points to.

getName() is a getter function that returns a value and should not change the object's data members.
For this reason, getter functions are often declared as const member functions.
The other parameter is declared as const so that compareScore() cannot modify the object passed to it,
since it is only being used for comparison.
p1 can point to a different location, but it cannot change the value it points to.
p2 cannot point to a different location, but it can change the value it points to.
p3 cannot point to a different location and cannot change the value it points to.

ANSWER:
p1, p2, and p3 each use const, but they apply it in different ways: p1 makes the pointed-to value constant,
p2 makes the pointer itself constant, and p3 makes both constant.
getName() is a const member function, so it cannot change the object's data members,
and other cannot be changed in compareScore() because it is a const reference.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 10 FEEDBACK:
getName() const is a const member function, so it cannot modify the student's name or score — it just returns the name.
const Student& other is a const reference parameter, so the function can read information from other, but it cannot modify other.
const int* p1 means the value being pointed to is constant.
The pointer can point somewhere else, but it cannot change the value through the pointer.
int* const p2 means the pointer itself is constant.
The pointer cannot point somewhere else, but it can change the value it points to.
const int* const p3 means both the pointer and the value being pointed to are constant.
END-------------------------------------------------------------------------------------------------------------------------------------------------------------
 */