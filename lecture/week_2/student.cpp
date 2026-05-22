/**
 * LAB DISCUSSION ACTIVITY:
 * @author Natalie Ortiz
 * @date 05/21/2026
 */

#include <iostream>
using namespace std;

double takeAverage(double grade_1, double grade_2, double grade_3){
    return (grade_1 + grade_2 + grade_3) / 3;
}
// can put these all together with classes we will learn in 05/22/2026 lecture
int main() {
    string name = "Natalie Ortiz";
    int s1_id = 123456789;
    double s1_quiz1 = 90;
    double s1_lab1 = 100;
    double s1_lab2 = 100;
    double s1_average = takeAverage(s1_quiz1, s1_lab1, s1_lab2);

    string name = "Student Two";
    int s2_id = 12345678;
    double s2_quiz1 = 68;
    double s2_quiz2 = 78;
    double s1_lab1 = 96;
    double s2_average = takeAverage(s2_quiz1, s1_lab1, s1_lab2);
    return 0;
}