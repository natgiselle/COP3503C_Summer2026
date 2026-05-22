/**
 * FOR LOOPS:
 * Explain for loop syntax
 *  Identify the causes of an infinite loop
 * Identify the relationship between patterns, loops, and output
 */

#include <iostream>
using namespace std;

int main() {
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





    return 0;
}