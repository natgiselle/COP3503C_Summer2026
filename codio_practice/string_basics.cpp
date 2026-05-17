/**
 * STRING BASICS:
 * Identify the three properties of strings
 * Understand the meaning of mutability
 * Determine if a string is present in another string
 * and at what index
 * Print a string form from the start index to the end index
 * Utilize escape characters to addd special characters to a string
 * 
 * @author Natalie Ortiz
 * @date 05/17/2026
 */

#include <iostream>
using namespace std;

int main () {
    /**
     * STRING LENGTH:
     * <string_name>.length()
     * counts per character EXCEPT:
     * foreign characters
     */
    string my_str = "Привет"; 
    // Hello world! len_str = 12
    // "" len_str = 0
    // -1 len_str = 2
    // Привет len_str = 12 NOT 6 !!! 
    // TYPICALLY ADDS TO LENGTH BY EACH CHAR BUT HERE
    // IT IS NOT 6 BECAUSE FOREIGN CHARS DO NOT FOLLOW THIS CONVENTION
    int len_str = my_str.length();
    cout << len_str << endl;

    /**
     * STRING INDICES/INDEX:
     * they start at 0
     * <string_name>.at(<index_#>)
     * OR
     * <string_name>[<index_#>]
     */
    
    string cat_str = "meow :3";
    char cat_index = cat_str.at(0);
    cout << cat_index << endl; // gives the char at that index value which is m for 0
    // cat_str[-1]; or cat_str.at(-1) gives ERROR CANNOT DO OF -1,2,3,...-n
    // cat_str[cat_str.length()-1]; DOES NOT give error it gives the last index in string
    cat_index = cat_str[cat_str.length()-1]; 
    cout << cat_index << endl;
    // cat_str.at(cat_str.length()); gives ERROR std::out_of_range

    // STRINGS ARE COMPOSED OF A SEQUENCE OF -> CHARACTERS
    // THE NUMBER OF CHARACTERS CAN BE DETERMINED BY USING length()
    // INDIVIDUAL CHARACTERS CAN BE REFERENCED BY USING THE INDEX 
    // CAN FIND THE VALUE OF A GIVEN INDEX USING at() or [] 

    /**
     * MUTABILITY:
     * STRING LITERALS ARE NOT MUTABLE THEY ARE IMMUTABLE
     * 
     * string my_str = "House";
     * my_str.at(0) = "M"; PRODUCES AN ERROR THE PROGRAM DOES NOT COMPILE
     * HOWEVER YOU CAN MANIPULATE A SPECIFIC CHAR IN THE STRING LITERAL
     * 
     * ALLOWED: my_str.at(0) = 'M';
     * CAN MODIFY A SINGULAR CHARACTER AT A TIME
     */

    string og_str = "House";
    // displays House to the screen 
    cout << og_str << endl;

    // change index 0 char to 'M'
    og_str.at(0) = 'M';
    // displays Mouse to the screen
    cout << og_str << endl;


    /**
     * STRING REASSIGNMENT:
     * CAN REPLACE AN ENTIRE STRING
     */

    string str_2 = "House";
    cout << str_2 << endl;
    str_2 = "Mouse";
    cout << str_2 << endl;

    /**
     * find() FUNCTION:
     * tells you if a chracter or a string is present in another string
     * returns the index it is found on
     * <string_name>.find("string_search")
     */

    string my_string = "The brown dog jumps over the lazy fox.";
    cout << "my_string.find(my_string) = "<< my_string.find(my_string) << endl; // returns  10 bcs the first char of the string is on index 10 index from 0 start point!! dont forget
    
    // my_string.find("cat") DOES NOT PRODUCE ERROR
    // ^ gives 18446744073709551615 which is the largest integer value possible in C++
    // means the system has search through all the values and cannot locate the specific value
    // is 18446744073709551615 as an unsigned value = -1 signed value

    // my_string.find(" ") returns the first instance of space since there is many instances
    // my_string.find(my_string) returns 0 since the entire string starts at index 0


    /**
     * THE find() FUNCTION WITH SPECIFIC START INDEX: 
     * <string_name>.find("string searched", <start_index_#>)
     */
    string book_str = "The brown dog jumps over the lazy fox.";
    cout << "book_str.find(''he'', 4) = " << book_str.find("he", 4) << endl; // search for he starting at index 4 
    // "he" starting at index 4 is found on index 26
    cout << "book_str.find(''he'') = " << book_str.find("he") << endl; // search for he starting at index 0 by default
    cout << "book_str.find(''He'') = " << book_str.find("He") << endl;
    // C++ is case sensitive therefore it does not recognize "He" and returns 18446744073709551615
    cout << "\n\n";
    /**
     * THE substr() FUNCTION:
     * is the sub string function which returns a portion of the string
     * <string_name>.subtr(start_index_#, #_of_chars_you_want)
     */
    string str = "The brown dog jumps over the lazy fox.";
    string str_slice = str.substr(4, 9);
    cout << str_slice << endl << endl; // starts at index 4 and then from that index count index 4 as the first character and then to length 9 (inclusive)
    string cal_hob_str = "Calvin and Hobbes";
    string my_slice = cal_hob_str.substr(3,8); // wil return "vin and "
    std::cout << "cal_hob_str.substr(3,8) of \"Calvin and Hobbes\" = " << my_slice << std::endl;
    cout << "\n\n";

    /**
     * ESCAPE CHARACTERS:
     * \\ used to display a literal backlash in the output
     * \" used to display double-quotes in the output
     * \' often used for char constants
     * \t inserts a tab space
     * \n moves output to a new line
     */
    string quote_str = "And then she said, \"Hi there.\"";
    cout << "using \\\"\\\": " << quote_str << endl;
    cout << "using \"\": " << "GIVES ERROR\n ERROR: unable to find string literal operator 'operator""Hi'" << endl << endl;
    /** 
     * "And then she said, "Hi there.""
     * ERROR: unable to find string literal operator 'operator""Hi'
     */
    quote_str = "And then she said, \'Hi there.\'";
    cout << "using \\\'\\\': "<< quote_str << endl;
    quote_str = "And then she said, 'Hi there.'";
    // using single quotes within double quotes does not require escape char \'
    cout << "using '': "<< quote_str << endl;


    



    return 0;
}