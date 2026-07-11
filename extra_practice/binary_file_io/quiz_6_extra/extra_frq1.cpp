/** 
 * Coding Question 1 (Practice Variant)
Problem Statement (30 points)
Write a function called readDoubleBin that takes in a string parameter and returns a double. 
The objective of the function is to read a double that is stored in a binary file. 
The parameter passed to the function is the file path of the file. The returned value is a 
double that you read from the binary file. The file structure consists of only 8 bytes 
representing the double you will be reading.
Don't write to the file, or else the contents stored there will be lost. If you accidentally 
do this, you should click the settings wheel in the top right and click "Restore current files".
*/

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

// NOTE THAT THIS IS A BINARY FILE
double readDoubleBin(std::string fileName) {
    // Open the binary file from the path in fileName
    // Read and return the double from the binary file
    ifstream file(fileName, ios::binary);

    double value;
    file.read((char*)&value, sizeof(double)); // C style cast

    file.close(); // not explicitly required because the destructor does this anyway but it is good practice to do so
    return value;
}