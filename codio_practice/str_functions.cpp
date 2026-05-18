/**
 * STRING FUNCTIONS:
 * Identify the functions and applications
 * of the following string functions: 
 * 
 * find_first_of() AND find_last_of()
 * push_back() AND insert()
 * pop_back() AND erase()
 * replace()
 * append()
 * toupper() AND tolower()
 * @author Natalie Ortiz
 * @date 05/17/2026
 */

#include <iostream>
using namespace std;

int main() {
/**
 * THE find_first_of() FUNCTION:
 * <string_name>.find_first_of("set of chars to match", starting_index OPTIONAL)
 */
                //01234 'b' is in "wornb" at index 4

                // read vertically like columns for the value of the index for example:
                //3
                //8
                // reads as that is index 38

                //000000000011111111112222222222333333333
                //012345678901234567890123456789012345678
string string1 = "The brown dog jumps over the lazy fox.";
string string2 = "i"; //checks where does w,o,r,n, or b char first appear?
// checks where does a,x, or e char first appear?
// checks where does i char first appear?

// find searches for exact substring wornb but find_first_of DOES NOTT

    cout << string1.find_first_of(string2) << endl; // SEARCHES CHARACTER BY CHARACTER
/**
 * wornb
 * wornb, starting index 14 return 20
 * wornb, starting index 34, returns 35
 * axe, startin index 34, returns 36
 * i, returns string::npos which is 18446744073709551615 because it is not found
 * if (string1.find_first_of("i") == string::npos) {
 *     cout << "not found" << endl;
 * }
 */
                  //0000000000111111111122
                  //0123456789012345678901
string my_string = "Today is a great day.";
cout << my_string.find_first_of("aeiou", 11); // returns 13
/**
 * THE find_last_of() FUNCTION:
 * <string_name>.find_last_of("set of chars to match", starting_index OPTIONAL)
 */
// is the same idea just the last instance of either of those chars

/**
 * THE push_back() FUNCTION:
 * CANNOT ADD MULTIPLE CHARS (STRING) TO AN EXISTING STRING
 * !!!!!^^^^^ THE insert() FUNCTION CAN ^^^^^!!!!!
 * 
 */
    cout << "\n\nTHE push_back() FUNCTION:" << endl;
    string str_1 = "Today is Satur";
    str_1.push_back('d'); //
    str_1.push_back('day'); // multicharacter literal is valid but it doesnt work as intended
    // 'day' -> 'd' 'a' 'y' -> packed into int -> truncated to char -> 'y'
    // only thr final char in any multicharacter literal survives here
    cout << str_1 << endl;
    cout << "\n\n";
/**
 * THE insert() FUNCTION:
 * <string>.insert(index_to_insert_at, "string to insert")
 * CAN ADD MULTIPLE CHARS (STRING) TO AN EXISTING STRING
 * !!!!!^^^^^ THE insert() FUNCTION CAN ^^^^^!!!!!
 * 
 */
                  //00000000001111
                  //01234567890123
    string str_2 = "Today is Satur";
    cout << "THE insert() FUNCTION:" << endl;
    str_2.insert(str_2.length(), "day"); // adds day at index 14 because length = 14
    //str_2.insert(str_2.)    str_2.insert(0,"day");
    cout << str_2 << endl;
    string str_3 = "Today is Satur";
    str_3.insert(str_3.length(), "!"); // adds day at index 14 because length = 14
    cout << str_3 << endl;
    return 0;
}