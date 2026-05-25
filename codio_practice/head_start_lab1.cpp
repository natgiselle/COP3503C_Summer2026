/**
    (1) Declaring a vector of ints
    (2) Prompt the user for input
    (3) Declare a string variable called "data" this is where the user input will temporarily be stored
    (4) Create a while-loop with the condition being "true"
    (5) Use getline to read a line of text from the input stream, store result in "data"
    (6) Create an if-statement that checks if the user entered "done"
    (7) If the user entered "done", break out of the loop
    (8) Convert the data to an int using the "stoi" function and push the result into the vector
    (9) Create a try-catch block to prevent an invalid_argument error
    (10) Print a statement saying "done" has been entered after exiting loop
    (11) Print out the data stored in vector using a for-loop
*/

#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> dataVector;
    cout << "Enter the data for vector, enter \"done\" when finished" << endl; 
    string data;
    while(true) {
        getline(cin,data);
        if (data == "done"){
            break;
        }
        try{
        dataVector.push_back(stoi(data));
        }
        catch(std::invalid_argument) {
            cout << "Please only enter numbers or \"done\"" << endl;
        }
    }
    cout << "\"done\" has been entered!!\n" << "Vector Size: " << dataVector.size() << endl;
    cout << "\n---Printing what is stored in vector---" << endl;
/**
    int i = 0;
    for (int n : dataVector) {
        cout << "[" << i << "]: " << n << endl;
        i++;
        }
*/
    return 0;
}