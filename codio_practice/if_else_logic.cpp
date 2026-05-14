/**
 * IF ELSE STATEMENT:
 * Describe if-else statement syntax
 * Explain the difference between an if statement and an if-else statement
 * @author Natalie Ortiz
 * @date 05/14/2026
 */

#include <iostream>
#include <limits>
using namespace std;

int main () {
    // IF ELSE STATEMENT SYNTAX
    cout << "Exercise 1:" << endl;
    short a = 5;
    short b = 4;

    // executing if means it wont execute the else in strictly if-else
    // no {} still works but only takes first line after the condition (considered bad practice)
    if (a > b)
        cout << "Print me if true" << endl;
        //cout << "True" << endl; produces an error if uncommented
    else   // error: 'else' without a previous 'if'
        cout << "Print me if false" << endl;
    cout << "\n\n\nWHEN ARE CURLY BRACES MANDATORY?" << endl;
    string str_num = "10"; // stoi(num) only works with str to int not char to int
    if (stoi(str_num) % 2 == 0) { // mandatory curly braces
        cout << str_num + " is even" << endl;
    cout << "True" << endl;
    }
    else // optional curly braces
    cout << str_num + " is odd" << endl;
    
    bool my_bool = ! true && ! false;

    //
    // ! true && ! false !T && !F = F && T = [F] prints false
    cout << "\n\n\nExercise 2:" << endl;
    if (my_bool) {
        cout << "The value of my_bool is true" << endl;
    }
    else {
        cout << "The value of my_bool is false" << endl;
    }

    cout << "CONSTRUCT LETTER GRADE ASSIGNER:\n";
    int grade = 62;
    if (grade < 60) {
        cout << "F" << endl;
    }
    else if (grade < 70) {
        cout << "D" << endl;
    }
    else if (grade < 80) {
        cout << "C" << endl;
    }
    else if (grade < 90) {
        cout << "B" << endl;
    }
    else if (grade < 100) {
        cout << "A" << endl;
    }
    
    /**
     * Construct a program that determines whether
     * the variable num is even, odd, or invalid
     * by rearranging the code blocks below.
     * ensure it does not accept letters
     * Remember to indent where appropriate!
     */
    int num;
    cout << "EVEN OR ODD PROGRAM:" << endl;
    
    // user-input validation practice!!! (optional side quest i did for fun!)
    while(true){ // always runs until correct input is given
        cout << "Enter a positive integer value: " << endl;
        cin >> num;
        if(cin.fail()) { // function returns true while there is an error in input
            // when user-input is NOT an integer
            cin.clear(); // clears the error statement so that the program can continue processing beyond this point
            cin.ignore(numeric_limits<streamsize>::max(),'\n'); // prints your own error message without crashing the program (w/o using try,exception handling, or catch blocks)
            cout << "Invalid input! Please enter an integer." << endl;
        } 
        else {
            break; // recieves valid integer
        }
    }
    if (num < 0) {
        cout << num << " is an invalid integer! (less than zero)" << endl;
    }
    else if (num % 2 == 0) {
        cout <<  num << " is even." << endl;
    }
    else {
        cout << num << " is odd." << endl;
    }
    return 0;
}
