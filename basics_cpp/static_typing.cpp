/**
 * STATIC TYPING
 * All variables and expressions in C++ have a fixed static type
 * data type and name cannot be changed but the value can!
 */

#include <iostream>
int main () {

    // narrowing conversions: going from a value t o a type that cannot store even approc of the original type
    double course_code = 35.04;
    int converted_code = course_code;
    long long super_large_number = 123456789123LL;
    int cant_hold_this = super_large_number;

    // widening covnersions converts a value to. type that can include atlest approx of all hr vslyes of the oroginal type
    course_code = 3504;
    double course_converted = course_code;

    // precision
    /**
     * int = 4bytes 16bits 2^31
     * double = 8bytes 32 bits 2^62
     */

    // implicit type conversions
    // assignment 
    double my_double = 9 / 5; // 1 -> 1.0
    int my_int = 9.0 /5.0; // 1.8 -> 1
    // mixed mode expressions
    // 3.14 + 8 = 3.14 + 8.0 = 11.4;

    // explicit conversions
    
    // static_cast<type_to_cast_to>(value_to_cast)
    // int/int = int
    // either one doublevalue or two makes it double
}