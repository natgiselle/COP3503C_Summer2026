/*
    snake_case: naming variables and constants (preferred for C++)

    use all uppercase for constants

    PascalCase: naming classes
    camelCase: naming variables and constants typically used for Java/JavaScript

    (hungarian notation adds letter for the variable type) int would be iFileSize 

*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int file_size; // snake_case
    int FileSize; // PascalCase
    int fileSize; // camelCase
    int iFileSize; // <variable type char>HungarianNotation

/* EXERCISE 1: FIX THE NAMING

    Rewrite these variable names in proper C++ snake_case:

    int NumberOfStudents = 30;
    double CurrentGPA = 3.8;
    string firstName = "natalie";
*/
    int number_of_students = 30;
    double current_gpa = 3.8;
    string first_name = "natalie";

    cout << number_of_students;
    cout << current_gpa;
    cout << first_name;

/* EXERCISE 2: LEGAL OR ILLEGAL NAMING?
    Reason it out, don't run it
    cppint 1file = 10;
    int file_1 = 10;
    int file 1 = 10;
    int _file = 10;
    int float = 10;
    int File = 10;
    int file! = 10;
    int return = 5;
    int FILE = 10;
    int my-file = 10;

    ANSWER:
        - 1file: no, starts with a number
        - file_1: yes
        - file 1: no, has space in between
        - _file: yes, underscore at the start is allowed
        - float: no, uses a keyword
        - File: yes
        - file!: no, uses exclamation point
        - return: no, uses reserved keyword
        - my-file: no, uses -
*/

/* EXERCISE 3: CONSTANTS
    Declare these as properly named C++ constants:

    Number of months in a year
    Maximum password length of 20
*/

    // constants should be in all caps per conventions
    const int MONTHS_IN_YR = 12;
    const int MAX_PW_LEN = 20;

/* EXERCISE 4: SAME OR DIFFERENT?

    int score = 1;
    int Score = 2;
    int SCORE = 3;


    AWSWER:
        - all different variables because C++ is case-sensitive
*/

/* EXERCISE 5: WRITE YOUR OWN VARIABLES
    Declare valid C++ variable names for:

    A user's date of birth
    Maximum retry attempts (constant)
    Total number of login failures
*/

    string date_of_birth = "07/29/2006";
    const int MAX_RETRIES = 3;
    int total_login_fails = 10;
    return 0;
}