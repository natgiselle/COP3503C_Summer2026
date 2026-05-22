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
    Student();
    double takeAverage(double quiz1_, double lab1_, double lab2_);
}; // class requires ; at the end

#endif
