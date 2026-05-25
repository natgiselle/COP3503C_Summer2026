/**
 * FOR LOOPS:
 * Explain for loop syntax
 *  Identify the causes of an infinite loop
 * Identify the relationship between patterns, loops, and output
 */

#include <iostream>
using namespace std;

int main() {
/**
    string word;
    string text = "Hello :3";
    cout << "printing the phrase \"" + text + "\"" << endl;
    for (int i = 0; i < 5; i++){
        cout << text << endl;
    }
    
    cout << "\nprinting 1 to 5: " << endl;

    for (int i = 1; i <= 5; i++) { // gives infinite loop printing 5 if writing i = 5 so it must be i <= 5
        cout << i << endl;
    }
*/

/**
 * The for loop runs through all the values
 * of the variable x from 0 to 10
 * as specified in the loop header.
 * For each value of x, an expression
 * is evaluated using a conditional if statement.
If x modulo 2 evaluates to 0,
then print Even followed by a newline character.
If x modulo 2 does not evaluate to 0,
then print Odd instead followed by a newline character.

    Rearrange the code blocks below to create a program that outputs the following:

    Even Odd Even
    Odd Even Odd
    Even Odd Even
    Odd Even Odd
    Even Odd Even

    Remember to indent where appropriate!
    You will only have ONE ATTEMPT at this problem.
*/

/**
for (int x = 0; x < 5; x++) {
    if (x % 2 == 0) {
        cout << "Even Odd Even" << endl;
    }
    else {
        cout << "Odd Even Odd" << endl;
    }
}
*/

}