
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

    int -2billion to +2billion 4 bytes x 8 = 32 bits bcs each bit can have two states 0 or 1 2^0 to 2^31
    0 to 4 bytes

    overflow it will wrap around if you make it bigger than the data type allows
*/


// std is short for standard string name. :: scope resolution operator
// we have a standard namespace string is a utility class. string is a sequence of characters
// compile programming languages are faster becaue it is closer to the machine's level
// clang++ is c language ++ 
// g++ -> GNU -> open source project -> stands for GNU is not Unix!

#include <iostream> // input output sequecne of characters allows us to use tools such as cout, cin, endl
using namespace std;
int main() { // entry point of any C++ program must have atleast one in your program
    // cin vs getline:
    // cin only reads user input until the first whitespace
    // getline will read everything including the spaces until the user presses enter
    // can use endl bt it s somethign that is defined in standard li
    int x = 10;
    auto price = 3.99;
    string name = "Gator";
    cout << "Hello" << endl;
    int age; // cannot use auto here
    cin >> age; // implicit type conversion so if we put anything other than an int it must provide us with that specific thing 


    /* FIX THIS & LEARN IT!
    try{
        int age = std::stoi(); // stoi stream to integer this gives error since it is trying to convert integer to string
        std::cout << "Age: " << age << std::endl;
    } catch(const std::invalid_argument ia){
        std::cerr << "Invalid arguement: " << ia.what() << '\n'; //std::cerr or std::cout is fine
        return 1;
        }
    */

    /* FUNCTIONS:
        return_data_type function_name(parameters) {
            ...
        }
    */
    /*  IF STATEMENTS:
        if (condition){
            ...
        } else if (condition){
        } else {
        }
    */
    return 0;
}
