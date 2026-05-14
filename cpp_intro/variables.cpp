/* VARIABLES:
    are used to temporarily store data in the computer's memory
    name of a location in memory where we can store value and can be mutable
*/

#include <iostream>
using namespace std;

int main() {
    int file_size = 100; // just int file_size; gives an error because C++ does not automaticaly assign 0 as the variable value
    double sales = 9.99;
    // can initialize another variable in the same line
    // int file_size_2 = 101, int counter = 1; but is NOT encouraged
    int counter = 0;
    cout << "file size:\n";
    cout << file_size; // prints file_size
    cout << "\n\n";

/* EXERCISE 1:
    write code to swap the value of two variables
*/
    int var_1 = 123;
    int var_2 = 456;

    int temp = var_1;
    var_1 = var_2;
    var_2 = temp;

    cout << "using temp variable:\n";
    cout << var_1;
    cout << "\n";
    cout << var_2;
    cout << "\n\n";

    // can also use the swap() method

    swap(var_1, var_2);
    cout << "using swap() method:\n";
    cout << var_1;
    cout << "\n";
    cout << var_2;

    return 0; // must always include this to ensure it runs correctly
// if it returns 1 or anything else the program signals something is wrong
}  



