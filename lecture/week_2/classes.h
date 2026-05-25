#ifndef CLASSES_STUDENT_H // inclusion gard
#define CLASSES_STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name_;
        int ufid_;
        double course1_q1_;
        double course1_q2_;

    public:
        Student(); // default constructor
        Student(string name, int ufid, double course1_q1, double course1_q2);

        void display() {
            cout << "Name: " << name_ << endl;
            cout << "Ufid: " << ufid_ << endl;
        }

        string getName() {
            return name_;
        }
        string setName(string name) {
            name_ = name;
            return name;
        }
};

    Student::Student(){
        name_ = "Student";
        ufid_ = 0;
        course1_q1_ = 0;
        course1_q2_ = 0;
    }

    // parametrized constructor

    Student::Student(string name, int ufid, double course1_q1, double course1_q2){
        name_ = name;
        ufid_ = ufid;
        course1_q1_ = course1_q1;
        course1_q2_= course1_q2;
    }

#endif