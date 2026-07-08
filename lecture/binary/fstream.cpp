#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // how to create an object of ofstream 
    // output file 
    // ../out.o and ../C/out.o  are errros since it does not exist meaning it cannot open file

    /** OFSTREAM: is used to write a file */
    ofstream file("../out.o", ios::binary);

    if(file.is_open()){
        

        
        // under the hood string is being stored usng dynamic memory allocation it has it stored as a dynamic array of characters
        // actual content is in the heap
        string s1 = "";
        string s2 = "Rocky";
        string s3 = "Very long sentence!";

        // the string OBJECTS themselves have the same size but the content itself is not the same size!!!
        cout << "s1: " << sizeof(s1) << endl; // regardless of the content the stack memory will sotre it as 32 bytes for all!!
        // the actual content is saved over the heap memory
        // vector object itself will always be fixed size
        file.write();
    }
    return 0;
}