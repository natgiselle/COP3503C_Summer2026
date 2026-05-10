/* NUMBER SYSTEMS:
    Decimal (Base 10)
        0-9

    Binary (Base 2)
        0,1
    
    Hexadecimal (Base 16)
        0-9, A-F 
        used to represent RGB colors (ex: FF 00 00)

    short data type can store numbers from -32,000 to +32,000
    

*/
#include <iostream>
using namespace std;

int main() {
    int bin_num = 0B11111111;
    cout << "NUMBER SYSTEM CONVERSIONS: " << endl;
    cout << "0B11111111 -> DEC -> " << bin_num << endl; // 255 in decimal
    int hex_num = 0xFf; // use 0x for hex (FF ff Ff fF all valid)
    cout << "0xFF -> DEC -> "<< hex_num << endl << endl; // 255 in decimal is printed with decimal form

/* UNSIGNED KEYWORD:
    unsigned 
    removes the -range and DOUBLES the +range
    (ex: instead of storing -32'768 to 32'767 an unsigned short stores 0 to 65'535)

    is often discouraged for usage because if it goes below 0 it wraps around a HUGE POSITIVE NUMBER instead of giving a negative causing difficulties in debugging
*/
    unsigned int number_unsigned = 0; 
    cout << "unsigned int number = 0 -> " << number_unsigned << endl << endl;
    //
    int number = 1'000'000; // makes digit seperating easier
    cout << "number 1'000'000:\n" << number << endl << endl;
    short another = number; // regular assignment allows narrowing but will lose data.
    // short another{number}; brace initalization DOES NOT allow narrowing conversions (DOES GIVE ERROR)
    cout << "number: "<< number << endl; // 00001111 01000010 01000000
    //  2 bytes/16 bits
    cout << "another: " << another << endl; // 01000010 01000000 a short can only hold onto the LAST 16 BITS
    short number_2 = 100;
    int another_2 = number_2; // storing a smaller number in a larger memory space WILL NOT HAVE DATA LOSS, additional slots in memory will be filled with 0
    cout << "number 2: "<< number_2 << endl;
    cout << "another 2: " << another_2 << endl;

    // CAN EXPLICITLY TYPE CAST USING static_cast<data_type>(variable_name);

    return 0;
}