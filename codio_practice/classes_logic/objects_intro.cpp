/**
 * CLASSES AND OBJECTS:
 * A class is the blueprint used to create object.
 * An object is a version of a class used by programmers.
 * An object is said to be an instance of a class.
 * Instantiation is when an object is created from a class.
 */

#include <iostream>
#include <string>
// pulls all the members in std:: namespace
// INTO GLOBAL SCOPE
using namespace std; 

int main(){

    std::string s = "I am string!";
    std::cout << typeid(s).name() << std::endl;
    // boolalpha is a STREAM MANIPULATOR
    // noboolalpha flips it back to printing the binary value
    //can also do fixed, hex, oct as some other stream manipulators

    std::cout << boolalpha << s.empty() << endl; // 0 w/o boolalpha passed; false w/ boolalpha passed
    // displays to terminal/screen:
    // NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    return 0;
}