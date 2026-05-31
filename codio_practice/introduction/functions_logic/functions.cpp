/** FUNCTIONS BASICS:
*  void- no return value
*   FunctionName = Capitalize the beginning of each letter for typical C++ naming conventions
*    example function that does not return anything:
*
*   void SayHi(parameter_1, parameter_2){
*       ...
*    
*   @author Natalie Ortiz
*   @version 1.0
*   }
*/
#include <iostream>
using namespace std;

// error is produced if you only try to run this without a main function
// creating this function alone without putting anything into the main method WILL NOT cause C++ to run it!


// PROPER COMMENTING BELOW 

/**
 * 
 * 
 * 
 *
 * 
 */

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

void PrintActors(){
    // can add endl in the middle of character out does not have to be strictly at the end
    cout << "Ben Affleck" << endl;
    cout << "Kevin Bacon" << endl;
    cout << "George Clooney" << endl;
}

int main()
{
    // calling it n times repeats whatever the function does n times here it prints "Hello" 4 times bcs each call prints "Hello" twice
    std::cout << "Bye Once Greet Twice Function (x2):" << std::endl;
    GreetTwice();
    cout << endl;
    GreetTwice();
    cout << "\n";
    std::cout << "Say Thanks Function:" << std::endl;
    SayThanks();
    cout << "\n";
    std::cout << "Print Actors Function:" << std::endl;
    PrintActors();
    cout << "\n";
    return 0;
}