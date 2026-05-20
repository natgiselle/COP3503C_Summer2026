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


    /**
     * THE replace() FUNCTION:
     * combines the erase() and insert() function
     * my_string.replace(1,2,"3");
     *  start erasing at index 1 and if you do erase 1 char it will erase what waa at index 1 it starts there
     * erase 2 chars starting at index 1
     * replace with "3" which is the string that we insert at index 1
     */
// erase everything startin at 6 (inclusive) until the end of the string
             //                  and then add plus 5 chars to the right of the string
                //         || 
                //         vv   11
                //    012345678901
    string r_str_1 = "Hello world!";
    string r_str_2 = "Codio.";
    // erase all characters starting at index 6, 5 chars to the right in str_1
    // then insert r_str_2 at index 6 within string
    string r_str_3 = r_str_1.replace(2,3, "y"); 
    // 6,5, r_str_2 = Hello Codio.!
    // 6,6, r_str_2 = Hello Codio.
    // 2,3, "y = starts erasing index 2 and 3 chars up deleting llo and replacing llo with y to be Hey world!
    cout << r_str_3 << endl;
    cout << endl;


    cout << "FINAL REPLACE EXERCISE:" << endl;
    //              00000000001111
    //              01234567899012
    string sunny = "Today is sunny";
    string rainy = "rainy";
    // turn into totday is rainy
    sunny.replace(9,5, rainy);
    cout << sunny << endl;

    /**
     * THE append() FUNCTION:
     * different way to concatenate or combine strings
     * SAME as adding LITERAL STRINGS together using + operator
     */
    string a = "High";
    string b = " Five";
    // High Five since Five string has a space at the beginning
    // a.append(b + "!") = High Five! doesnt give error just adds to the end
    // a.append("Five" + "!") = ERROR: cannot establish string literal inside and then add 
    //(make sure that at least one of the strings is a string variable bcs it will think you are manipulating string literal which is not allowed)
    // int b = 5; no ierror just ignores it and doesnt append

    cout << a.append(b + "!") << endl;
    cout << endl;
    /**
     * FINAL append() EXERCISE:Given the following code snippet:
        string a = "apple";
        string b = "*banana";
        string c = "cherry*";
        string d = "*durian*";
        Which of the following pairs of statements produce the same output?
    */
    
    /**
     * UPPERCASE AND LOWERCASE FUNCTIONS:
     *  WITHOUT char() conversion it returns an integer representing the ASCII value
     * THESE ARE CHARACTER LEVEL functions-
     * char(toupper(<string>)) 
     * char(tolower(<string>))
     * 
     * BOTH TAKE ONLY A SINGLE CHARACTER (int/char) NOTTTT A WHOLE STRING:
     * can do a whole string by using a for loop for each char:
     * 
     * for (char c : std_d) {
     *     cout << char(toupper(c));
     * }
     * cout << endl;
     */
    cout << "\nchar(toupper(string)) exercise:" << endl;
    string str_d = "the big brown dog";

    
    cout << char(toupper(str_d.at(str_d.length()-1))) << endl; 
    // char(toupper(str_d.at(0))) = T 
    // char(toupper(str_d.at(str_d.length()-1))) = G
    // char(toupper('t')) = T
    //char(toupper(str_d)) ERROR: takes in single character int or char but it is giving a whole string which is NOT allowed

    cout << "\nchar(tolower(string)) exercise:" << endl;
    string str_e = "THE BIG BROWN DOG";
    cout << char(tolower('%'))  << endl;
    // char(tolower(str_e.at(1))) = h
    // char(tolower(str_e.at(str_e.length()-1))) = g
    // char(tolower('B')) = b
    // char(tolower('%')) = % if it is a special symbol it will just stay the same WILL NOT produce error

    /**
     * #1 WHICH CAN CAUSE THIS:
     * before:  t 
     * after:   T
     * 
     * ANSWER:
     * using toupper() or replace()
     */

    string t_str = "t";
    cout << t_str << " -> " << t_str.replace(0, 1, "T") << endl; // 3 param
    cout << t_str << " -> " << char(toupper(t_str.at(0))) << endl;
    // .insert() and .erase() would not work

    /**
     * Quiz QUESTION 2:
     * Create a program that checks if string sentence has a white space in the beginning of the string.
     * If the sentence has white space at the beginning then it removes that and displays the sentence without the white space.
     */
    string sentence = " hi";
    if (sentence.at(0) == ' ') {
        cout << "OG sentence:\n" + sentence << endl << "NEW sentence:\n" + sentence.erase(0,1) << endl;
    }
    return 0;
}