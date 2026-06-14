    /**
    Coding Question 2
    Problem Statement
    Implement three functions to demonstrate pass-by-value, pass-by-pointer, and pass-by-reference using a std::vector<int> of student grades.
    This question appeared on Summer 2025’s Exam 1.

    UPDATEGRADESBYCOPY:
    Parameters:
    A std::vector<int> of student grades passed by copy.
    An int curve_points
    Return Type: void
    Add curve_points to each student’s grade in the vector. If a grade goes over 100, cap it at 100.
    
    UPDATEGRADESBYPOINTER:
    Parameters:
    A std::vector<int> of student grades passed by pointer.
    An int curve_points
    Return Type: void
    Add curve_points to each student’s grade in the vector. If a grade goes over 100, cap it at 100.
    Hint: To add a value to index i in a vector pointer: (*vec_ptr)[i] += value;
    
    UPDATEGRADESBYREFERENCE:
    Parameters:
    A std::vector<int> of student grades passed by reference.
    An int curve_points
    Return Type: void
    Add curve_points to each student’s grade in the vector. If a grade goes over 100, cap it at 100.
    */
#include <iostream>
#include <vector>
using namespace std;

    // Write your three functions below.
    // STUDENT CODE
void updateGradesByCopy(vector<int> grades_copy, int curve_points){
    for (int i = 0; i < grades_copy.size() ; i++){
        grades_copy[i] += curve_points;
        if (grades_copy[i] > 100){
        grades_copy[i] = 100;
        }
    }
}

    // cannot range-base loop directly for pointer
void updateGradesByPointer(vector<int>* grades_ptr, int curve_points){
    for (int& element : *grades_ptr){ // dereference pointer to get actual vector
        element += curve_points; // element is a copy of each of the individual elements
        if (element > 100){
            element = 100;
        }
    }
    /**
    for (int i = 0; i < (*grades_ptr).size(); i++){
        (*grades_ptr)[i] += curve_points;
        if ((*grades_ptr)[i] > 100){
        (*grades_ptr)[i] = 100;
        }
    }
        */
}


void updateGradesByReference(vector<int>& grades_ref, int curve_points){
    for (int& grade : grades_ref){
        grade += curve_points;
        if (grade > 100) {
        grade = 100;
        }
    }
}