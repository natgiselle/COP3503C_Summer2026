/*
the same token consist of bunch of functions each serving a purpose
main is like the power button of the tv

case-sensitive
*/

/*
multi-line
comment
*/

// this is a single line comment

/*
name of file in the standard c++ library input output stream
has capabilities of printing something on the screen or getting input from the user

standard library (std) and different files each serving a purpose
character out (cout) output one or more chars on the screen
just like java you terminate a line of code with ; at the end
*/
#include <iostream>
using namespace std; // shortens it and then i would write

// specify the type of value that the function is going to return
//  white space doesnt matter but it should be one space in between
int main()
{
    // std::cout << "Hello World :3 !";
    cout << "Hello World :3 !"; // when putting using namespace std for shortcut that when i type cout it will assume i mean std::cout

    return 0; // tells the operating systems that our program is going to terminate correctly
    // encounters an error if it returns anything + or -
}

/*

################FOR COMPILING###############
must enter this into the terminal EACH TIME you intend to compile

--------------------------------------------
|   clang++ filename.cpp -o output_name    |
|   ./output_name                          |
--------------------------------------------


it updates it each time you do
clang++ filename.cpp -o output_name


if you made a change ran that but only did
./output_name

it will only show the previous compiling of the file
therefore whenever you compile you must do both in that order


clang++ filename.cpp -o output_name
./output_name

*/