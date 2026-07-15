#include <iostream>
#include <fstream>
#include <sstream>;
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        double gpa;

    public:
        Student(){
            name = "Null";
            age = 0;
            gpa = 2.0;
        }
        Student(string name_, int age_, double gpa_){
            name = name_;
            age = age_;
            gpa = gpa_;
        }
};

int main(){
{
    ofstream outFile("output.csv"); // "output.txt", ios::binary
    // to wrote information and go to next line
    // string literal but theres three piece fo information eeerate from each value
    if(outFile.is_open()){
        outFile << "Natalie, 19, 4.0" << endl; // the comma is a delimiter in this file which is used to seperate data
        outFile << "Pikachu, 3, 3.9" << endl;
    }
    // each column is seperated by comma and each row is a new line
    // thisis how you write into a txt file
    else{
        cout << "The file cannot be opened." << endl;
    }
}
// cin up to first byte space so tab or new line
//but with getline it lets you write more past space with entire line 

// the {} is a block scope ans can beused to seperate code blocks that have their own respective local scope within the same area
// is a useful way to seperate logic
{
    string line;
    string token;
    ifstream inFile("output.csv"); // text file so there is NO ios::binary necessary here
    if(inFile.is_open()){
        // you are allowed to define a variable before declaring ifstream as it is in the same scope
        while(getline(file, line1)){
       // getline(inFile, line1); // (iss, saves info here, ',')
       // getline(inFile, line2);
        istringstream iss(line1); // input a string to a stream (it will convert it to a stream which is a sequence of data)
        getline()

        // she does pushback on vector and using forloop to print i need to fix that later today
        }
        /** IMPORTANT: */
        /**
         * THE substr() FUNCTION:
         * is the sub string function which returns a portion of the string
         * <string_name>.subtr(start_index_#, #_of_chars_you_want)
         */

        /**
         * THE find_first_of() FUNCTION:
         * <string_name>.find_first_of("set of chars to match", starting_index OPTIONAL)
         */

        /** 
         * THE stoi FUNCTION:
         * stoi(some_string_with_int);
         * 
         * THE stod FUNCTION:
         * stod(some_string_with_double);
         */

        

    }
    else {
        cout << "Error opening file" << endl;
    }
}

{

}

}