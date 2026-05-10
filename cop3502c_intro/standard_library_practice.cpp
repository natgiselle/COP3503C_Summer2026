/* WORKING WITH THE STANDARD LIBRARY:
    Implementing <cmath> library to explore a variety of math functions
*/
#include <iostream> 
#include <cmath>
using namespace std; // does not require ; but is good in practice

int main() {
    double result_floor = floor(1.2); // returns value as an int (1)
    cout << result_floor;

    double result_pow = pow(2, 3); // takes in 2 parameters 2^3


/* EXERCISE 1: AREA OF A CIRCLE
    Write a program to calculate the area of a circle
*/

    cout << " ### Welcome to Nat's Area of a Circle Calculator :3 ###" << endl;
    cout << "Input the radius of the circle (m): ";
    
    double radius; // initalize
    cin >> radius; // input set as value for radius variable

    const double pi = 3.14;
    double circle_area = pi * pow(radius, 2);

    cout << "A = π * (" << radius << ")² = " << circle_area << "m" << endl;

    return 0;
}

