/* FUNDAMENTAL DATA TYPES:
    Statically typed variables (must declare the type):
    - C++
    - C#
    - Java

    Dynamically typed variables (type not declared explicitly):
    - Python
    - Ruby
    - JavaScript

    _____________________________________________________
    |    Type    | Bytes of Memory |        Range       |
    |____________|_________________|____________________|
    |   short    |        2        |   -32,768, 32,767  |
    |   int      |        4        |      -2B to 2B     |
    |   long     |        4        |        same        |
    | long long  |        8        |                    |
    |____________|_________________|____________________|


    _____________________________________________________
    |    Type    | Bytes of Memory |        Range       |
    |____________|_________________|____________________|
    |   float    |        4        |  -3.4E38 to 3.4E38 |
    |   double   |        8        | -1.7E308 to 1.7E308|
    | long double|        8        |-3.4E932 to 1.7E4832|  
    | bool       |        1        | true / false       |
    | char       |        1        |                    |
    |____________|_________________|____________________|
*/

#include <iostream>
using namespace std;

int main() {
    double price = 99.99;
    float interest_rate = 3.67F; // will try to store a double inside a flot variable if it is mising f or F at the end which can cause data loss
    long file_size = 90000L; // to force the compiler to treat this as a long needs l or L
    char letter = ''; // use single quotes to represent a character
    bool is_valid = false;
    auto what_is_this = "hi"; // auto data type allows for it to figure out what it is
    auto file_size_2 = 90000; // without the L or l at the end it is treated as an int by the compiler
    auto interest_rate_2 = 3.67; // without the F or f at the end it is treated as a double

    int number = 1.2; // is NOT an error it just preserves the integer part
    cout << number;

    int number_2 {}; // brace initalization is 0 without anything
    int number_3; 
    cout number_3 // gives us a random value everytime we run our program if it is not initialized to zero directly or brace intialization
    return 0;
}