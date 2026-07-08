#include <iostream>
#include <string>
#include <fstream>

struct Student {
    char name[20];
    int id;
    double gpa;
};


int main(){
    // file writing 
    Student s1; // create an instance of the Student struct (object)
    
    std::string name = "Natalie";
    size_t len = name.size();   
    outFile.write(reinterpret_cast<const char*>(&len), sizeof(len));
    outFile.write(name.c_str(), len);
    return 0;
}