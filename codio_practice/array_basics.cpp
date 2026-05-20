/**
 * ARRAY BASICS:
 * Create and initialize an array
 * Access and modify array elements
 * 
 * Iterate through arrays using both:
 * a regular for loop and an enhanced for loop
 * 
 * Determine array output
 * 
 * @author Natalie Ortiz
 * @date 05/19/2026
 */

#include <iostream>

#include <vector> // includes vector library to create arrays/lists
using namespace std;

int main() {
// arrays are a simpler form of a vector and can store collections of all kinds of data types

    int Allan = 71;
    int Bob = 42;
    int Carol = 37;
    int David = 5;
    int Ellen = 18;

    cout << "Allan's Age: " <<Allan << endl; // is repetitive to do that for each

// this is where we use lists

/**
 * HOW TO INITALIZE AND DECLARE: ARRAYS 
 * <data_type> <array_name>[] = {element_1, element_2, ... , element_n};
 * 
 * HOW TO INITIALIZE: ARRAYS
 * <data_type> <array_name>[<array_size>];
 */
    int age[5]; // 5 for 5 elements 
// cout << age[0] gives -90157536 a garbage number because itis reading uninitialized memory!!! 
    int ages[] = {71, 42, 37, 5, 18};
    cout << "Allan's Age: " << ages[0] << endl; //  displays 71 -the 1st element in the ages array of type int at index 0

// int ages[] = {71, 42, 37, 5, "eighteen"}; produve error because it is declared as int type for the entire array and its elements
    cout << "Ellen's Age: " << ages[4] << endl;

    double decimals[] = {1.00, 2.00, 3.00, 4.00, 5.00};


    bool bools[] = {true, false, true};
    double decimals_two[] = {2.3, 4};
    int integers[1];
    cout << boolalpha << bools[0] << endl;
    string weekdays[] = 
    {               // index:
        "Monday",   // 0
        "Tuesday",  // 1
        "Wednesday",// 2
        "Friday",   // 3 make this "Thursday"
        "Friday"    // 4
    };

    // lists are MUTABLE can modify element at its specified index
    cout << "Before Replacing Duplicate: " << weekdays[3] << endl;
    weekdays[3] = "Thursday";
    cout << "After Replacing Duplicate: " << weekdays[3] << endl;
    return 0;
}
