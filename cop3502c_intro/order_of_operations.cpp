/* ORDER OF OPERATIONS:
    Use PEMDAS
*/

#include <string>
#include <iostream>

int main() {
    double a = 1 + 2 * 3; // 7
    std::string str_a = "1 + 2 * 3 =\n";
    std::cout << str_a;
    std::cout << a;
    std::cout << "\n\n";
    
    double x = (1 + 4) * 2; // x = 10
    int y = 2 + 3; // y = 5
    /* EXERCISE 1: CREATE THE EQUATION IN CODE
    z = 
    
    x + 10
    ______
    3y
    */
    double z = (x + 10) / (3 * y);
    std::string str_z = "(x + 10) / (3 * y) =\n";
    std::cout << str_z;
    std::cout << z;
    std::cout << "\n\n";
    return 0;
}
