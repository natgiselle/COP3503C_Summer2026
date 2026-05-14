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
    cout << "Exercise 1:" << endl;
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
    cout << "\nAlways print me" << "\n\n\n";

    cout << "Exercise 2:\n";
    // == -doesnt display above statements
    // tru -always prints
    // false -never prints
    // false no {} -no error just prints the next statement of above still true
    // true no {} -no errors prints both following statements
    // basically the if without the curly braces and with a condition only makes the outcome whatevr is in the first line following it
    // if (true) 
    if (7 != 10) {
        cout << "The above statement is true" << endl;
        cout << "The above statement is still true" << endl;
        cout << "This is not related to the if statement" << endl;
    }


    cout << "\n\nExercise 3:" << endl;
    int grade = 90;
    // 90 < 70 is false so both if conditions will NOT be displayed onto the terminal (screen)
    // 90 >= 70 is true so only the first if condition executes since 90 < 70 is not true
    if (grade >= 70) {
        cout << "Congrats, you passed the class" << endl;
    }

    if (grade < 70){
        cout << "Condolences, you id not pass the class" << endl;
    }
    return 0;
}