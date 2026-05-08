/* READING INPUT FROM THE CONSOLE:
    cout <<  -respresnts standard output stream (uses insertion operator)
    cin  >>  -represents standard input stream for reading data from the console (uses extraction operator)
*/

#include <string>
#include <iostream>
using namespace std;

int main() {
    cout << "Enter Value 1: ";
    int value;
    cin >> value; // puts user input into the value variable
    cout << "Value Saved: " << value << endl;
/*
    if the user enters a float value type(double)
    like 10.1
    it returns the integer version of the user's input
    making it 10 not 10.1 for the value stored in the value variable
    !!! WILL [NOT] return error the code still executes!!!
*/
    cout << "Enter Value 2: ";
    double value_2;
    cin >> value_2;
    cout << "Value Saved: " << value_2 << endl << "\n\n";

    // can change inputs together to do it in one line:
    cout << "~~~ Welcome To The NatCalculator! ~~~" << endl;
    cout << "Enter values for X & Y (+): " << endl;

    // initalize the values
    double x; 
    double y;
    cin >> x >> y; // read them in order so it isnt swapped value
    cout << x << " + " << y << " = " << x + y << "\n\n";

/* EXERCISE 1: TEMPERATURE CONVERSION
    Write a program to convert a temperature from fahrenheit to celsius.
    - Ask for the user to input a temperature from fahrenheit 
    - Print out conversion to celsius

    Equation:
    °C = (°F - 32) * (5/9) if i did just this the integer division on 5/9 would be zero making evrrything zero
    could fix it by changing the arrangement of 5/9 or just doing 5.0/9, 5/9.0 or 5.0/9.0
*/
    cout << "*** Fahrenheit to Celsius Converter ***" << endl;

    cout << "Enter Temperature (°F): ";
    double deg_in_fahrenheit;
    cin >> deg_in_fahrenheit;

    double deg_in_celsius = (5 * (deg_in_fahrenheit - 32)) / 9; 
    cout << "Conversion " << deg_in_fahrenheit << "°F" << " ---> " << deg_in_celsius << "°C";




    return 0;
}