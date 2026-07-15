#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// pointer-to-pointer its a char array of char arrays (2D array)
int main(int argc, char** argv){
    // when we use main function that takes two argements ./executablename you can type more those are passed into main function
    // a sequence of characters
    // not 1D array of characters because it will only take one thing of info
    // the way the main is working is it will take multiple arguements the space and then after white space is second arguement for example:
    if(argc < 2){ // argc = 1 it will be the name of the executable 
        cout << "Please provide one arguement" << endl;
    }
    // argv[0] is the name of the executable which is not thw arguement we want so we skip it
    for (int i = 1; i < argc; i++){
        // argv[0] is ./output
        cout << argv[i] << endl; // print the arguement starting at 1
    }
}