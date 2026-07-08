#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    // how to create an object of ofstream 
    // output file 
    // ../out.o and ../C/out.o  are errros since it does not exist meaning it cannot open file

    /** OFSTREAM: is used to write a file */
    ofstream file("../out.o", ios::binary);

    if(file.is_open()){

        // vector object fixed size is 24 bytes regardless of their content 
        // but size() itself is what we want
        // vector<int> v1;
        // vector<int> v2 = {1};
        // vector<int> v3 = {1,2,3};




        // under the hood string is being stored usng dynamic memory allocation it has it stored as a dynamic array of characters
        // actual content is in the heap
        // string s1 = "";
        string name = "Rocky";
        string name2 = "Erid";
        // string s3 = "Very long sentence!";

        // the string OBJECTS themselves have the same size but the content itself is not the same size!!!
        // cout << "s1: " << sizeof(s1) << endl; // regardless of the content the stack memory will sotre it as 32 bytes for all!!
        // the actual content is saved over the heap memory
        // vector object itself will always be fixed size

        // c_str() is bringing a name of character
        int len1 = name.length();
        int len2 = name2.length();
        file.write((char*)&len1, sizeof(int));
        file.write(name.c_str(), name.size()); // C style conversion but we can do the same thing using c_str() which returns char ptr ptr to an array of chars
        
        file.write((char*)&(len2), sizeof(int));
        file.write(name2.c_str(),  name.size());
        }
    else {
        cerr << "Error opening file" << endl;
        return 1;
    }

    // how ot know how many bytes we need to store
    // for each string write the size for create a string object of that size
    file.close();
    return 0;
}