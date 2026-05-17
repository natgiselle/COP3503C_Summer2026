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
     */

    string og_str = "House";
    // displays House to the screen 
    cout << og_str << endl;

    // change index 0 char to 'M'
    og_str.at(0) = 'M';
    // displays Mouse to the screen
    cout << og_str << endl;
    return 0;
}