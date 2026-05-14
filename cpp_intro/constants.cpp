/* CONSTANTS:
    When there is a value that is used/referred to multiple times throughout a program
    Declare it as a constant to prevent the value of a sepcifci variable from changing.

    Constants are unchangeable!
*/

#include <iostream>
#include <string>
// using namespace std
int main() {
    const double pi = 3.14;
    // cannot do const double pi and then try to set pi = to anything else other than 3.14 since const is used to preserve the value
    // the insertion operator is << and extraction is >> which is used for extracting user input with cin insteaf of c
    std::cout << "Pi:\n";
    std::cout << pi;
    std::cout << "\n\n";


/* EXERCISE 1: SPEED OF LIGHT CONSTANT
    Declare a constant with the speed of light & print it
*/
    const int speed_of_light = 299792458;
    std::cout << "Speed of Light:\n";
    std::cout << speed_of_light;
    std::cout << "\n\n";


/* EXERCISE 2: CATCH THE BUG
    Identify the error in the code block below & fix it:

    const int max_users = 100;
    max_users = 200;
    cout << max_users;

    ANSWER:
    - the error in the code block above is that max_users is declared as a constant set equal to 100 but is then set to 200
    - the error is that you are unable to change the value fo a variable if it is declared as a constant
*/
    int max_users_1 = 100;
    const int max_users_2 = 100 + max_users_1;
    std::cout << "Current Max Users:\n";
    std::cout << max_users_2;
    std::cout << "\n\n";


/* EXERCISE 3: CIRCLE AREA
    Calculate the area of a circle using pi as a constant and a radius variable you set yourself.
    Print the result. 
    Formula: area = pi * radius * radius
*/
    double radius = 10.0;
    double area = pi * radius * radius;

    std::cout << "Area of a Circle:\n";
    std::cout << area;
    std::cout << "\n\n";


/*  EXERCISE 4: MULTIPLE OUTPUTS
    Declare variables for a student's name (use a string type),
    GPA as a double, and credit hours as an int.
    Print all three on separate lines using "\n" between them.
*/
    std::string student_1 = "Albert Einstein";
    double gpa = 4.0;
    int credit_hrs = 120;
    std::cout << student_1 + "\n";
    std::cout << gpa;
    std::cout << "\n";
    std::cout << credit_hrs;

/*  EXERCISE 5: SPOT THE DIFFERENCE
    What's the difference between these two and which one is safer in C++?
    Code Block A:
    int a;
    cout << a;

    Code Block B:
    int a = 0;
    cout << a;

    ANSWER:
    - code block A is creating the variable but not initalizing it
    - code block B is creating the variable and initializing it to zero
    - code block A can be done in C++ but it is highly discouraged since it will just have a random value in memory you must give it a value to be safe
    - code block A can be executed normally in languages like java
*/
return 0;
}