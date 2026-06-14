/**
 * Current layout: 1 Panel without tree
1. 2025 Spring Midterm 1 - MCQ
1. 2025 Spring Midterm 1 - MCQ
strong text
Question 1 (2 points)

What is the correct order of steps in the C++ compilation process?


Linking, Compilation, Preprocessing, Assembly


Preprocessing, Compilation, Linking


Compilation, Preprocessing, Linking


Assembly, Preprocessing, Compilation, Linking

Check It!

Question 2 (2 points)

Examine the code below:


void Foo(){
  int a = 20;
  int b = 20;
  int c = a + b;
}

int main(){
  Foo();
  c += 60;
  return 0;
}
In this code, there is a compiler error. Why?


The variable c is not declared in the scope of main().


The function Foo() does not return a value.


The variable a is not initialized in the function Foo().


The function Foo() cannot be called from main().

Check It!

Question 3 (2 points)

Which of these are NOT true about staticin C++?


A static member function can access non-static members of the class.


A static class member belongs to the class, not individual instances.


Only one copy of a static variable exists.


All static variable attributes are shared between class objects.

Check It!

Question 4 (2 points)

Examine the code below.


int main(){                 // Line 1
  MyClass a;                // Line 2
  MyClass b = a;            // Line 3
  MyClass c;                // Line 4
  MyClass d(c);             // Line 5
  MyClass* e = new MyClass; // Line 6
  return 0;                 // Line 7
}                           // Line 8
On which line(s) is the MyClass Destructor called?


Line 1


Line 2


Line 3


Line 4


Line 5


Line 6


Line 7


Line 8

Check It!

Question 5 (2 points)

Examine the code below:


class MyClass {
public:
    int value;
    void setValue(int newValue) const { 
      value = newValue; 
    }
};

void foo(const MyClass& obj) {
    obj.value = 20;
    obj.setValue(5000);
}
Will this code compile? If not, why?


This code will compile.


This code will not compile because it accesses the function setValue(), which will break the const-correctness.


This code will not compile because it modifies value, which breaks const-correctness.


This code will not compile because it doesn’t have a return value.

Check It!

Question 6 (2 points)

Assuming that an integer requires 4 bytes of memory, how many bytes are leaked by the following code?


int* x = new int[10];
int y = 0;
x = new int[3];
x = new int[5];
x = &y;

72


52


18


13

Check It!

Question 7 (2 points)

If ptr is a pointer to an instance of a class with the function someFunc(), which of the following are valid ways to call someFunc()?


ptr&.someFunc()


ptr->someFunc()


(*ptr).someFunc()


ptr.someFunc()

Check It!

Question 8 (2 points)

Which of the following is a reason to pass arguments to functions by reference instead of by copy?


Protecting the data of contained within function arguments from unintended changes


Modifying the memory address that arguments are stored at


Saving unnecessary memory used when making local copies of function arguments


Allowing dynamically allocated objects to be passed as arguments

Check It!

Question 9 (2 points)

When do you need to explicitly create the Big Three for a class in C++?


When class attributes are allocated on the stack memory.


When you dynamically allocate memory.


You should always define the Big Three in your class.


The implicit definition created by the compiler is sufficient for any class.

Check It!

Question 10 (2 points)

What is a key tradeoff between linked lists and arrays?


Linked lists are always faster than arrays because they do not require contiguous memory allocation.


Linked lists are better for frequent insertions and deletions, especially in the middle of the list, while arrays are better for random access.


Arrays are better for implementing stacks and queues, while linked lists are better for applications with fixed-size data.


Linked lists are better for applications requiring frequent random access to elements, while arrays are better for dynamic size requirements.

Check It!
Next
 */