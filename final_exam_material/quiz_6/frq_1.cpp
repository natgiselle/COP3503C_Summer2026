/** 
 * Coding Question 1
Problem Statement (30 points)
Write a function called readIntBin that akes in a string parameter and returns an int. The objective of the function is to read an integer that is stored in the binary file. The parameter passed to the function is the file path of the file. The returned value is an int that you read from the binary file. The file structure corresponds of only 4 bytes of the integer you will be reading.
Don’t write to the file, or else the contents stored there will be lost. If you accidentally to do this you should click the settings wheel in the top right and click "Restore current files".
*/

#include <fstream>
#include <string>
using namespace std;

// NOTE THAT THIS IS A BINARY FILE
int readIntBin(std::string fileName) {
  
  // Open the binary file from the path in fileName 
  // Read and return the int from the binary file
  ifstream file(fileName, ios::binary);
  int value = 0;
  file.read(reinterpret_cast<char*>(&value), sizeof(value));
  file.close();
  return value;
}