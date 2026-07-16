// FREEZE CODE BEGIN

#ifndef STUDENT_RECORD_H
#define STUDENT_RECORD_H

#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

struct StudentRecord
{
    int id = 0;
    std::string name;
    std::string major;
    double gpa = 0.0;
};


// Required Function Prototypes
std::vector<StudentRecord> loadStudentRecords(std::string filename);
std::vector<StudentRecord> filterByMajor(
    const std::vector<StudentRecord> &records,
    const std::string &major);
std::vector<StudentRecord> filterByMinimumGpa(
    const std::vector<StudentRecord> &records,
    double minimumGpa);
double averageGpa(const std::vector<StudentRecord> &records);
bool writeAvgToFile(const std::vector<StudentRecord> &records);

#endif

// FREEZE CODE END