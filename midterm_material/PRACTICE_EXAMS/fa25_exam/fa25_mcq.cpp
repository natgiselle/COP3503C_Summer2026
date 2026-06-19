/**
 * Question 1 (2 points)

If a linked list dynamically allocates new nodes with new, what will happen if you set both the head and tail to nullptr and you do not iterate through an entire linked list when deleting nodes through your destructor?


It will perform and compile as expected


It will result in a segmentation fault because it accesses null pointers


It will result in a memory leak since allocated memory is never freed ->MY ANSWER


It will result in a compiler error because you are not supposed to delete the head

----
Question 2 (2 points)

Compiling this code results in an error. Which answer correctly states the line and appropriate code to make the code run?


#include <iostream>
using namespace std;

struct A{                            // A
  A(){
    cout << "Hello World!" << endl;  // B
  }
  
  ~A(){                              // C
    cout << "Goodbye World!" << endl;
  }
};

int main()
{
  A obj = new A;                    // D
  return 0;
}

A, class A{


B, std::cout << "Hello World!" << std::endl;


C, void ~A(){


D, A* obj = new A;


It does not result in a error ->MY ANSWER
-----

Question 3 (2 points)

Given the following code, which of the following would NOT accurately compare NumberHolder x(7); with an integer?


class NumberHolder {
public:
  int num;
  NumberHolder(int num) {
    this->num = num;
  }
  bool operator==(int rhs) { 
    return (num == rhs);
  }
};

NumberHolder y(7);  ->MY ANSWER
x == y;


x.operator==(7);


x.num == 7;


x == 7;

----
Question 4 (2 points)

Select all correct and error free choices:


int *data = new int[3]; 
delete data;


int *data = new int[3]; ->MY ANSWER
delete[] data;


myClass object;
delete object;


myClass object = new object;
delete object;


myClass *objectptr = new myClass; ->MY ANSWER
delete objectptr;
-----


Question 5 (2 points)

Which of the following causes a memory leak?



int x = 10;
int& y = x;
y = 9;


int x = 10;
int* ptr = &x;
ptr = nullptr;


int x = 10;  ->MY ANSWER
int* ptr = new int(9);
ptr = &x;


int* ptr = new int(10);
delete ptr;
ptr = nullptr;
----


Question 6 (2 points)

How does writing code for a templated class normally differ from a non-templated class?


Non-templated classes are usually both declared and defined in a .h file, while templated classes are usually declared in a .h file and defined in a .cpp file.


Aside from templating syntax, there is no difference in how templated and non-templated classes are written.


Templated classes are usually declared and defined in a single .h file, while non-templated classes are usually declared in a .h file and defined in a .cpp file. ->MY ANSWER


Templated classes are usually both declared and defined in a .h file, while non-templated classes are usually both declared and defined in a .cpp file.
----


Question 7 (2 points)

When writing the code for a class function, what does the this keyword represent?


A pointer to the invoking object -> MY ANSWER


A pointer to the class definition


A reference to the invoking object


A pointer to the function itself
-----


Question 8 (2 points)

Assume we have a doubly linked list that stores integers.
The function AddHead(int num) adds a new node at the beginning of the list.


int main() {
    LinkedList l;
    for (int i = 1; i <= 5; i++) {
        l.AddHead(i * 10);
    }
    return 0;
}
What will the forward traversal (head → tail) of this linked list look like?


10 20 30 40 50 -> MY ANSWER


50 40 30 20 10


40 30 20 10 0


0 10 20 30 40


Having pointers whose values are nullptr
----

Question 9 (2 points)

Assume the following line of code:


int gradeData = 10;
Which options successfully change the value of gradeData to 50?



int *myData = gradeData;
*myData = 50;


int *myData = &gradeData;
myData = 50;


int &myData = gradeData; ->MY ANSWER
myData = 50;


int *myData = &gradeData; ->MY ANSWER
*myData = 50;


int myData = gradeData; ->MY ANSWER
myData = 50;
----


Question 10 (2 points)

What is the difference between a struct and a class?


Only classes can make use of the const keyword.


Structs are private by default, while classes are public by default.


Structs are public by default, while classes are private by default. ->MY ANSWER


You can make a template class, but cannot make a template struct.
 */

