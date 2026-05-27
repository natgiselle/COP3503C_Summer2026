#ifndef UNTITLED_STUDENT_CLASS_H
#define UNTITLED_STUDENT_CLASS_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private: // only accessible inside the class
    string name;
    int id;
    double quiz1;
    double lab1;
    double lab2;

public:
    // default constructor no arguements`
    Student();

    // parametrized
    Student(string name_, int id_, double quiz1_, double lab1_);
    void display();
    double takeAverage(double quiz1_, double lab1_, double lab2_);
}; // class requires ; at the end

#endif
