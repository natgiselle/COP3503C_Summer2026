/**
Each question carries 3 points.
QUESTION: 1) What do pointers hold?
Variables
References
Memory addresses
Objects
All of the above.

ANSWER:
Pointers hold memory addresses, which are the locations in memory where data is stored.
Variables are the named storage locations,
references are alternate names for existing objects,
and objects are the actual data structures in memory.
Pointers specifically store the numerical address that indicates where in memory the data can be found.



Question 2
Select all of the following statements that are true about the * and & operators in C++.
Using the & operator on a variable gets the memory address of that variable.
Using the * operator on a variable gets the memory address of that variable.
Using a * in a function’s declaration denotes a pass-by-value for a parameter.
Using a & in a function’s declaration denotes a pass-by-value for a parameter.
Using a * when declaring a variable creates a reference to the variable.
Using a & when declaring a variable creates a reference to the variable.

ANSWER:
The correct answers are the first and last options.
The & operator (address-of operator) returns the memory address of a variable
when used on the right side of an assignment or in expressions.
When used in variable declarations, & creates a reference variable
that serves as an alias for another variable.
The * operator is used for dereferencing pointers (accessing the value at a memory address) and for declaring pointer variables, not for getting addresses or creating references.
In function parameters, * indicates a pointer parameter (which is still technically pass-by-value of the address), while & indicates pass-by-reference.

Check It!
Question 3

Select the TRUE statement about static.


static member functions may only access static member variables of the class.


static member functions cannot be called without creating an object of the class.


static member variables are unique to each instantiation of a class.


static variables are reinitialized every time they are accessed.

The correct answer is that static member functions may only access static member variables of the class. This is because static functions belong to the class itself rather than to any specific instance, so they cannot access non-static (instance) variables which require an object to exist. The other options are incorrect because: static functions can be called directly on the class without creating an object; static variables are shared among all instances of a class, not unique to each; and static variables maintain their values between accesses, they are not reinitialized each time.

Check It!
Question 4

Which of the following is a reason to pass arguments to functions by pointer instead of by copy?


To ensure the argument cannot be modified within the function.


To allow the function to access private members of the argument’s class without using getters.


To guarantee that the function always receives a nullptr for optional arguments.


To allow the function to modify the original variable and avoid unnecessary copies of arguments.

The correct answer is the first option. Passing arguments by pointer allows the function to modify the original variable (since it has the memory address) and avoids creating expensive copies of large objects. The second option is incorrect because pointers don’t guarantee nullptr values. The third option is incorrect because pointers actually allow modification - if you want to prevent modification, you’d use const or pass by value. The fourth option is incorrect because pointers don’t bypass access control - private members remain inaccessible regardless of how arguments are passed.

Check It!
Question 5

What is the preferred way of indicating that a pointer does not point to anything?


Setting it to nullptr


Setting it to NULL


Setting it to 0


Deleting it

nullptr is the correct answer as it is the modern C++ standard (C++11 and later) for representing null pointers. It is type-safe and specifically designed for pointers. NULL is a legacy C macro that can cause ambiguity in function overloading. Setting a pointer to 0 works but is less clear and can be confused with integer values. Deleting a pointer deallocates memory but doesn’t set the pointer to null, potentially creating a dangling pointer.

Check It!
Question 6

Given int num, which of the following correctly declares, initializes, and dereferences an int pointer in c++ syntax?


int* ptr = &num;
cout << *ptr << endl;

int* ptr = &num;
cout << &ptr << endl;

int& ptr = num;
cout << &ptr << endl;

int& ptr = *num;
cout << &ptr << endl;
The correct answer declares an int pointer with int* ptr, initializes it with the address of num using &num, and then dereferences the pointer with *ptr to access the value. The second option prints the address of the pointer itself rather than dereferencing it. The third option declares a reference (not a pointer) which cannot be reassigned. The fourth option attempts to create a reference to a dereferenced pointer which is syntactically incorrect since num is already declared as a pointer.

Check It!
Question 7

Which of the following functions may be able to change the value of the passed-in variable?


void optionA(int toChange)


void optionB(int& toChange)


void optionC(int* toChange)

Option B uses a reference parameter (int& toChange), which allows the function to directly modify the original variable passed to it. Option C uses a pointer parameter (int* toChange), which can modify the value at the memory address it points to. Option A uses pass-by-value (int toChange), which creates a copy of the variable, so changes inside the function do not affect the original variable.

Check It!
Question 8

What is the output of the following code snippet?

#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int* ptr = &a;

    *ptr += 5;

    cout << ptr;

    return 0;

}

10


5


A memory address


Runtime error

The correct answer is 'A memory address’. The code declares an integer variable a with value 5, creates a pointer ptr that stores the address of a, then uses *ptr += 5 to modify the value at that address (making a equal to 10). However, the cout << ptr statement outputs the pointer itself (the memory address), not the value it points to. To output the value, you would need cout << *ptr.

Check It!
Question 9

Given the following code snippet:

#include <iostream>
int main() { 
     int x = 10;
     // Fill in the code
     return 0;
} 
How do we assign a pointer of type int to point to x?


int ptr = x;


int *ptr = *x;


int *ptr = x;


int *ptr = &x;

The correct answer is int *ptr = &x;. To declare a pointer and make it point to a variable, we need to use the address-of operator (&) to get the memory address of variable x. The asterisk (*) in the declaration indicates that ptr is a pointer to an int. Option 2 (int *ptr = x;) is incorrect because it tries to assign the value of x (10) to a pointer, not its address. Option 3 (int ptr = x;) declares ptr as a regular integer variable, not a pointer. Option 4 (int *ptr = *x;) is incorrect because it tries to dereference x, but x is not a pointer - it’s an integer variable.

Check It!
Question 10

What is the output of the following code?

void Foo(int& y) {
    y = 10;
}

void Function(int& x) {
    Foo(x);
    x += 2;
}

int main() {
    int value = 5;
    Function(value);
    cout << value;

    return 0;
}

5


5210


17


12

The correct answer is 12. Starting with value = 5, Function(value) is called with a reference parameter. Inside Function, Foo(x) sets x to 10 (which changes value to 10), then x += 2 adds 2 to x (making value = 12). Since all parameters are passed by reference, the original variable ‘value’ is modified directly.

Check It!
Next
 */