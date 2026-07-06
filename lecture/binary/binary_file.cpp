/** 
 * BINARY:
*/

#include <iostream>
#include <fstream> // is a C++ standard library heade that provides classes for reading from and writing to files
using namespace std;

int main(){
    // name of the file or the path of the file
    ofstream fout("binaryFile.o", ios::binary);

    int intNum = 10;
    double dNum = 2.0;
    float fNum = 3.0;
    char c = 'a';


    // 1st param is address of the first byte of the integer (pass the addrs of this first byte into write func)
    // the bytes of the var (4 bytes since it is intNum) you use sizeof operator (it looka st the architecture of yur sysem and it checks how msny bytes it took to be written)

    // address of the firsdt byte usig char pointer since a char is 1 byte and we are getting the address of integer by & and putting parenthesis this is a C style conversion we are converting it into a char data type so that its just 1 byte
    fout.write((char*) &intNum, sizeof(intNum)); // write function requires pointer to character because every other data time they are atleast 1byte or more 

    return 0;
}