/**
 * VECTOR BASICS:
 * Create an empty vector
 * Add and remove vector elements
 * Modify vector elements
 * Iterate through vector using both a 
 * regular for loop and an enhanced for loop
 * Determine vector output
 * Determine key differences between vectors and arrays
 * @author Natalie Ortiz
 * @date 05/20/2026
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(3); // 3 total elements
    // cout << numbers << endl; returns error
    cout << numbers.at(0) << endl; // no elements automatically populates vector with 0

    // cout << numbers.at(3) << endl; out of range because that is the 4th element and there is only 3 elements 
    //index 3 refers to the fourth element, not third, which doesn't exist


    /** 
     * VECTORS: USE .size()
     * ARRAYS: USE sizeof(<array_name>)/sizeof(<array_name>[0])
     */

   // int digits[3];
    // cout << numbers.size() << endl;
    // cout << sizeof(digits) / sizeof(digits[0]) << endl;

    vector<int> numbers_2(0); //vector with no elements
    numbers_2.push_back(50); //add 50 as an element to end of vector
    
    cout << numbers_2.at(0) << endl; //50 becomes first and only element

    vector<int> numbers_3(3);
    numbers_3.insert(numbers_3.begin() + 1, 50); //add 50 to index 1
    cout << numbers_3.at(0) << endl;
    cout << numbers_3.at(1) << endl;
    cout << numbers_3.at(2) << endl;

    numbers_3.insert(numbers_3.begin() + 1, 100); //add 100 to index 1
    cout << numbers_3.at(0) << endl;
    cout << numbers_3.at(1) << endl;
    cout << numbers_3.at(2) << endl; //50 now becomes index 2

    // ADDING AND REMOVING ELEMENTS
    vector<int> numbers_4(0); //empty vector
    numbers_4.push_back(50); //add 50 to vector
    numbers_4.push_back(100); //add 100 to vector
    cout << numbers_4.at(0) << endl;
    cout << numbers_4.at(1) << endl << endl;

    numbers_4.pop_back(); //remove last element vector
    cout << numbers_4.at(0) << endl;
    return 0;

    // erase()
vector<int> numbers_5(0); //empty vector
numbers_5.push_back(50); //add 50 to vector
numbers_5.push_back(100); //add 100 to vector
cout << numbers_5.at(0) << endl;
cout << numbers_5.at(1) << endl << endl;

numbers_5.erase(numbers_5.begin()); //removes 50
cout << numbers_5.at(0) << endl;
cout << numbers_5.at(1) << endl; //no longer exists




vector<double> BMI(0);
BMI.push_back(18.5);
BMI.push_back(25.0);
BMI.push_back(30.0);

for (double d : BMI) {
    cout << d << endl;
}
}