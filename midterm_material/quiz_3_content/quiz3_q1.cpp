    /**
    Coding Question 1
    Problem Statement
    RELU:
    Write a function named ReLU that takes in a vector<float> and returns nothing.
    It should modify the elements in the vector in place,
    meaning it should modify the actual vector object that was passed in upon the function call.
    The ReLU function should perform the following operation on every element in the input vector max(0, x),
    which can also be written like the following piecewise function:
    x for x > 0
    0 for x <= 0
    So if an input vector is <0, 0.6, -2.8, -4, 1> it should be modified in place and become <0, 0.6, 0, 0, 1>
    This question appeared on a previous version of Quiz 3.
    */
#include <vector>
using namespace std;

void ReLU(vector<float>& vector){
    for(float& i : vector){
        if (i <= 0) {
        i = 0;
        }
    }
}
