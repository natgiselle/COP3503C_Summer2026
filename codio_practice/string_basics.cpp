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
    return 0;
}