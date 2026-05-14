/** 
 *  IF STATEMENTS:
 * Describe if statement syntax
 * Use a conditional statement to make decisions
 * Use two or more boolean expressions in an if statement
 * Identify when to use compound conditionals and when not to use them
 * @author Natalie Ortiz
 * @date 05/13/2026
 */

#include <iostream>
using namespace std;

int main() {
    string a = "7";
    string b = "4";
    int c = stoi(a);
    int d = stoi(b); // string "4" to integer value of 4

    cout << "5 > 4?" << endl;
    if (5 < 4) {
        cout << "I print the 1st if true" << endl;
        cout << "I print the 2nd if true" << endl; // if this is true it will need endl to start the next cout on a new line
    }
    cout << "\nI will always print" << endl << "\n\n";

    cout << a + " != " + b + "?" << endl;
    if (a != b) {
        bool a_noteq_b = true;
        cout << boolalpha << a_noteq_b << endl;
    }
    cout << "\nAlways print me" << endl;

    return 0;
}