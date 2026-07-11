/** 
 * Coding Question 2
Problem statement (40 Points)
This question appeared on 2025 Summer Exam 2.
Read 4 integers from a binary file, calculate their average, and return the result as a floating point average.
takeAverage
Parameters - string filename
Return Value - float
Description
[1] Open the binary file and check that it opened correctly
[2] Read 4 integers from the binary file,
[2] Calculate the average of the four integers,
[3] Return the average as a float.
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
float takeAverage(std::string filename){

  // Write your code here
    ifstream file(filename, ios::binary);
      if(file.is_open()){
        int value1;
        file.read((char*)&value1, sizeof(int));
        int value2;
        file.read((char*)&value2, sizeof(int));
        int value3;
        file.read((char*)&value3, sizeof(int));
        int value4;
        file.read((char*)&value4, sizeof(int));
        float average = static_cast<float>(value1+value2+value3+value4)/ 4;
        return average;
      }
    else {
      cout << "Error reading file." << endl;
    }
  }

