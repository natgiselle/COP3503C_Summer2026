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

    cout << "\n\nVariable Test Coverage:" << endl;
    // See which covers all possibilities and if it does not, fix it
    short age = 18;
    short chartPosition = 10;
    double probability = 0.1; // if you make this into a short it will be saved as 0 not 0.1 since short is an small integer value, not double
    if (probability < .1) {
        cout << "That's improbable!" << endl;
    }
    if (probability < .5 && probability >= .1) {
        cout << "That's unlikely!" << endl; 
    }
    if (probability >= .5) {
        cout << "That's a good chance!" << endl; 
    }
    cout << "\n\n";
    if (age < 18) {
        cout << "You are too young to vote" << endl;
    }
    if (age >=18) { // prev. age < 18 
        cout << "You are eligible to vote" << endl;
    }
    cout << "\n\n";
        if (chartPosition <= 10) {
            cout << "You made it into the top 10 songs!" << endl; 
    }
    if (chartPosition > 10) {
        cout << "Better luck next week." << endl; 
    }


    cout << "\n\n\nCompound Conditional Statements" << endl;
    /**
     * and &&
     * or ||
     * negate !
     */
    int num = 12;
    // num 16 -yes it executes the print statement
    // num = 8 - && (and) operator means T && F = F it does not display print statement
    // num = 8 - || (or) operator means T || F = T so it does display print statement
    cout << "Exercise 5:" << endl;
    // COMPOUND CONDITIONAL: when you prioritize conciseness & readability
    if (num % 2 == 0 && num > 10) {
        cout << "Even and greater than 10" << endl;
    }
    // NESTED IF STATEMENT: when you prefer two seperate if statements
    if (num % 2 == 0) {
        if (num > 10) {
            cout << "Even and greater than 10" << endl;
        }
    }
    return 0;

    /**
     * WHICH STATEMENT IS FALSE:
     * FALSE: A) Allow a specific command to run of the boolean expression is false
     *          code does not run what is in the if statement if the condition is false
     * ASK IN WHY OFFICE HOURS TRUE: B) Includes the keyword if, a boolean expression inside (), and a command(s) to run within {}.
     * TRUE: C) Allows a specific command(s) to run if the boolean expression is true.
     * TRUE: D) Allows a program to make decisions about what to do.
     */
}