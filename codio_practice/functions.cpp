/* FUNCTIONS BASICS:
    void- no return value
    FunctionName = Capitalize the beginning of each letter for typical C++ naming conventions

    example function that does not return anything:

    void SayHi(parameter_1, parameter_2){
        ...
    }
*/

#include <iostream>
using namespace std;

// error is produced if you only try to run this without a main function
// creating this function alone without putting anything into the main method WILL NOT cause C++ to run it!

/**
 * This function greets the user twice
 * 
 * @param   specify parameters if any
 * @return  specify return value if any
 */
void GreetTwice() {
    cout << "Goodbye" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
}
// MUST DECLARE THE METHOD USED BEFORE THE MAIN METHOD ORDER MATTERS
// C++ requires a main function

void SayThanks() {
    cout << "Thanks" << endl;
}

int main()
{
    // calling it n times repeats whatever the function does n times here it prints "Hello" 4 times bcs each call prints "Hello" twice
    GreetTwice();
    GreetTwice();
    SayThanks();
    return 0;
}