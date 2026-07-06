/** 
 * BINARY:
*/

#include <iostream>
#include <fstream> // is a C++ standard library heade that provides classes for reading from and writing to files
using namespace std;

// name of the file or the path of the file
ofstream fout(s: "binaryFile.o", mode: ios::binary);

int intNum = 10;
double dNum = 2.0;
float fNum = 3.0;
char c = 'a';