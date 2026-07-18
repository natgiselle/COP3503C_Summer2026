/** 
 * Coding Question 1
    Make the int main() function that is able to take in command line arguments. Then, print the number of arguments as well as the first argument (not the file path), separated by " : ". You can safely assume that at least one argument will always be passed in, there are no edge cases.
    For example, if the following arguments are passed in: hello last 5, the program should print 3 : hello.
    Another example, if the following arguments are passed in: programming 2, the program should print 2 : programming.
 * 
*/

// command line arguments, and print the first argument
// can be char** argv or char* argv[] as both mean the same thing
// JUST REMEMBER THAT ORDER MATTERS!!! you must know the arguement count (argc) before figring out arguement value (argv) which is the actual content that has each character stored in an array
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]){
 // you can create a vector of type string to hold these arguements
    std::vector<std::string> args;
    // argv[0] is always the name of the executable which is the first arguement and that is NOT intended to be printed out therefore we skip it
    for(int i = 1; i < argc; i++){
        args.push_back(argv[i]);
    }
    // we want it to print out total #of arguments : the first arguement
    // we ARE NOT intending to loop over the printed statement to the terminal/screen
    std::cout << argc - 1 << " : " << args[0];
    return 0;
}
