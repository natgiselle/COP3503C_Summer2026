/** 
 * Coding Question 2
Problem statement (40 Points)
This question appeared on 2025 Spring Exam 2.

    Caesar’s Cypher
    You’ve been tasked with encrypting a file by applying Caesar’s shift to the text file. Caesar’s Cypher function is given to you. It’s used for shifting a character by a passed in int key value. You will have to write two functions:
    readFile
    Write a function readFile that takes a file path as input and returns a vector of characters representing the contents of the file.
    Parameter List:
    filepath: a constant reference to a string representing the file path where the data will be read from.
    Return Type:
    A vector of characters containing the file’s content.
    Implementation Details:
    Attempt to open the specified file at the given filepath.
    If the file is successfully opened, read its contents line by line.
    For each line, iterate through each character and add it to a vector of characters.
    If the file does not open, print an error message "File did not open." to the console and add endl after.
    writeFile
    Write a function writeFile that takes file path, a vector of chars, and an int value key, which will shift the individual characters of the vector by calling the shiftChar function and write the result into the file.
    Parameter List:
    filepath: a constant reference to a string representing the file path where the data will be written to.
    v: a reference to a vector of characters containing the data to be processed.
    key: a constant reference to an integer used as the key for shifting characters.
    Return Type:
    void
    Implementation Details:
    Attempt to open the specified file at the given filepath.
    Iterate over each character in vector v.
    Write each character to the file after calling the shiftChar function with the given key.
    If the file does not open, print an error message "File did not open." to the console and add endl after.
    You can assume the file given will consist of only uppercase letters, and no whitespace. You can assume the key value passed in will always be between 0 and 26. You cannot assume the file will always exist.
*/

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


// FREEZE CODE BEGIN
char shiftChar(char c, int key) {
    return (c - 'A' + key) % 26 + 'A';
}
// FREEZE CODE END


// Write readFile and writeFile functions
vector<char> readFile(const string& filepath){
    // messageChars is the vector of characters from the message that is being encrypted
    vector<char> messageChars;
    ifstream inFile(filepath);


    if(inFile.is_open()){
        string line;
        while(getline(inFile, line)){
            for(int i = 0; i < line.size(); i++){
                messageChars.push_back(line[i]);
            }
        }
        inFile.close(); // need to make this before return bcs then if you write any code after return it will skip it entirely
        return messageChars;
    }

    else {
        cout << "File did not open." << endl;
        return messageChars;
    }
}


void writeFile(const string& filepath, vector<char>& v, const int& key){
    ofstream outFile(filepath);
    if(outFile.is_open()){
        for(int i = 0; i < v.size(); i++){
            outFile << shiftChar(v[i], key);
        }
        outFile.close();
    }

    else {
        cout << "File did not open." << endl;
    }
}


