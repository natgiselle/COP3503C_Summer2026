#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class Student {
    private:
        std::string name;
        int age;
        double gpa;

    public:
        // default constructo
        Student(){
            name = "Null";
            age = 0;
            gpa = 2.0;
        }

        // parametrized constructor
        Student(std::string name_, int age_, double gpa_){
            name = name_;
            age = age_;
            gpa = gpa_;
        }

        // getters to access private members outside of the class
        // so that the left side does not change make it constant
        std::string getName() const {
            return name;
        }

        int getAge() const {
            return age;
        }

        double getGPA() const {
            return gpa;
        }
        
        void print() const {
            std::cout << name << "," << age << "," << gpa << std::endl;
        }
};

int main(){
{
    std::ofstream outFile("output.csv"); // "output.txt", ios::binary
    // to wrote information and go to next line
    // string literal but theres three piece fo information eeerate from each value
    if(outFile.is_open()){
        outFile << "Natalie, 19, 4.0" << std::endl; // the comma is a delimiter in this file which is used to seperate data
        outFile << "Gigi, 5, 5.6" << std::endl;
        outFile << "Pikachu, 3, 3.9" << std::endl;
    }
    // each column is seperated by comma and each row is a new line
    // thisis how you write into a txt file
    else{
        std::cout << "The file cannot be opened." << std::endl;
    }
}
// cin up to first byte space so tab or new line
//but with getline it lets you write more past space with entire line 

// the {} is a block scope ans can beused to seperate code blocks that have their own respective local scope within the same area
// is a useful way to seperate logic
{
    std::string line;
    std::ifstream inFile("output.csv"); // text file so there is NO ios::binary necessary here
    std::vector<Student> students;

    if(inFile.is_open()){
        // you are allowed to define a variable before declaring ifstream as it is in the same scope
        while(getline(inFile, line)){
       // getline(inFile, line1); // (iss, saves info here, ',')
       // getline(inFile, line2);
        std::istringstream iss(line); // input a string to a stream (it will convert it to a stream which is a sequence of data)
        std::string nameToken, ageToken, gpaToken;

        // should always have the istringstream first, second the specific token initaliazed prior to store the data, delimiter always ',' charaacter for CSV files (Comma-Seperated Values file)
        getline(iss, nameToken, ',');
        getline(iss, ageToken, ',');
        getline(iss, gpaToken, ',');

        /** IMPORTANT: make this within the while loop as well */
        /**
         * THE substr() FUNCTION:
         * is the sub string function which returns a portion of the string
         * <string_name>.subtr(start_index_#, #_of_chars_you_want)
         */
            if(!nameToken.empty() && nameToken[0] == ' '){
                nameToken = nameToken.substr(1);
            }
            if(!ageToken.empty() && ageToken[0] == ' '){
                ageToken = ageToken.substr(1); // since token is a strign you must create a new var at the end to make it into int and double

            }
            if(!gpaToken.empty() && gpaToken[0] == ' '){
                gpaToken = gpaToken.substr(1);
            }


        /** 
         * THE stoi FUNCTION:
         * stoi(some_string_with_int);
         * 
         * THE stod FUNCTION:
         * stod(some_string_with_double);
         */

            int age = std::stoi(ageToken);
            double gpa = std::stod(gpaToken);

            students.push_back(Student(nameToken, age, gpa));

            for(int i = 0; i < students.size(); i++){
                students[i].print();
            }
        /**
         * THE find_first_of() FUNCTION:
         * <string_name>.find_first_of("set of chars to match", starting_index OPTIONAL)
         * it is similar to what getlien is doing by finding the delimiter but we do not use find_first_of() method because it makes the program more complex and less efficient
         */

        }

    }
    else {
        std::cout << "Error opening file" << std::endl;
    }
}

}