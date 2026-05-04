/* CONSTANTS:
    when there is a value that is used/referred to multiple times throughout a program
    declare it as a constant to prevent the value of a sepcifci variable from changing.

    constants are unchangeable!
*/

#include <iostream>
// using namespace std
int main() {
    const double pi = 3.14;
    // cannot do const double pi and then try to set pi = to anything else other than 3.14 since const is used to preserve the value
    // the insertion operator is << and extraction is >> which is used for extracting user input with cin insteaf of c
    std::cout << "pi math constant:\n";
    std::cout << pi;
    std::cout << "\n\n";


/* EXERCISE 2:
    declare a constant with the speed of light & print it
*/
    const int speed_of_light = 299792458;
    std::cout << "speed of light constant:\n";
    std::cout << speed_of_light;
    std::cout << "\n\n";

/* EXERCISE 3:
    identify the error in the code block below & fix it:

    const int max_users = 100;
    max_users = 200;
    cout << max_users;
*/


}