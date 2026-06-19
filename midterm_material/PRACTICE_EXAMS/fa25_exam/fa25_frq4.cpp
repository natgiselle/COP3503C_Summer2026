/**
 * 5. 2025 Fall Midterm 1 - FRQ #4
Problem Statement (25 Points)
Your task is to implement two template functions: Compare() and PrintLargestValues().
Compare()
Takes two templated type parameters and compare them using the <, ==, and > operators.
If the first parameter’s value is less than (<) the second’s, return -1.
If the two parameters’ values are equal (==), return 0.
If the first parameter’s value is greater than (>) the second’s, return 1.
Parameters:
Two templated type T parameters.
Return Type:
int
PrintLargestValues()
This function compares two vectors of equal length, looping through both simultaneously. For each position, it calls the Compare() function to compare the elements at the same index. After each comparison:
If the element in the first vector is smaller, print:
"Second vector is larger!" << endl;
If both elements are equal, print:
"Both are equal!" << endl;
If the element in the first vector is greater, print:
"First vector is larger!" << endl;
Parameters:
Two same-length vectors of the templated type T, both passed by reference.
Return Type:
Nothing; void
Example:
Given the following vectors:

vector<int> firstVector {10, 5, 0, 5, 10};
vector<int> secondVector {0, 5, 10, 5, 0};
Calling PrintLargestValues(firstVector, secondVector) compares elements one by one using Compare(), producing these internal results:

1, 0, -1, 0, 1
Which then prints:

First vector is larger!
Both are equal!
Second vector is larger!
Both are equal!
First vector is larger!
IMPORTANT
You MUST call Compare() to compare elements of the vectors, and use the return value to determine what to print. Not calling Compare() will cause the test cases to fail.
IMPORTANT
Write Compare() and PrintLargestValues() functions in the designated areas marked by comments.
Writing code in the wrong section can cause compilation errors or test case failures.
 */

// FREEZE CODE BEGIN
using namespace std;
#include <iostream>
#include <vector>

#ifndef COMPARE
#define COMPARE
// FREEZE CODE END

// Compare() goes here
template <typename T>
int Compare(const T& value_1, const T& value_2){
    if (value_1 < value_2){
        return -1;
    }
    else if(value_1 == value_2){
        return 0;
    }
    else{
        return 1;
    }
}
// FREEZE CODE BEGIN
#endif
#ifndef PRINTLARGESTVALUES
#define PRINTLARGESTVALUES
// FREEZE CODE END

// PrintLargestValues() goes here
template <typename T>
// must be a vector but can be a vector with any kind of element type
void PrintLargestValues(vector<T>& vector_1, vector<T>& vector_2){
    for(int i = 0; i < vector_1.size(); i++){
        int result = Compare(vector_1[i], vector_2[i]);
        if(result == -1){ // not a member function it is just a regular function call
        cout << "Second vector is larger!" << endl; 
        }
        else if(result == 0 ){
            cout << "Both are equal!" << endl;
        }
        else {
            cout << "First vector is larger!" << endl;
        }
    }
}

template <typename T> T func(T other){ return other; }
// FREEZE CODE BEGIN
#endif
// FREEZE CODE END

