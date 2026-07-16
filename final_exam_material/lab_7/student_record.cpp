#include "student_record.h"
#include <iostream>
std::vector<StudentRecord> loadStudentRecords(std::string filename){
    // TODO Task A:
    // 1. Open the file using filename.
    // 2. Read each line with std::getline.
    // 3. Use std::stringstream and while loop to split each line into: id, name, major, gpa.
    // 4. Convert id with std::stoi and gpa with std::stod.
    // 5. Create a StudentRecord object and add it to records vector.
    std::string line;
    std::ifstream inFile(filename);
    std::vector<StudentRecord> records;
    
    if(inFile.is_open()){
        // 1. while loop to get each line that we are reading from the file
        while(getline(inFile, line)){
        // 2. input the line string into a string stream which is a sequence of data
            std::istringstream iss(line);

            // ensure that you make every attribute as a string with token at the end of the var name!
            std::string idToken, nameToken, majorToken, gpaToken;

            getline(iss, idToken, ',');
            getline(iss, nameToken, ',');
            getline(iss, majorToken, ',');
            getline(iss, gpaToken, ',');

            // if it has leading space
            // checks if it is not empty and if the first char is an empty space then let this execute

            // make sure you check if the at index zero it equal an empty space CHARACTER meaning it has to be in single quotes '' NOT ""
            if(!idToken.empty() && idToken[0] == ' '){
                idToken = idToken.substr(1); // make it equal to the substring that starts at index 1 instead of 0 so that the first index of the new ageToken becomes the very first non empty space character
            }

            if(!nameToken.empty() && nameToken[0] == ' '){
                nameToken = nameToken.substr(1);
            }

            if(!majorToken.empty() && majorToken[0] == ' '){
                majorToken = majorToken.substr(1);
            }

            if(!gpaToken.empty() && gpaToken[0] == ' '){
                gpaToken = gpaToken.substr(1);
            }

            int id = std::stoi(idToken);
            double gpa = std::stod(gpaToken);

            // push back a studentrecord object with given attributes using parametrized constructor into the records vector 
            records.push_back(StudentRecord{id, nameToken, majorToken, gpa});
        }
        // records.id
        return records;
    }

    else {
        std::cout << "Error opening the file" << std::endl;
        return records; 
    }

}


std::vector<StudentRecord> filterByMajor(const std::vector<StudentRecord> &records, const std::string &major){
    std::vector<StudentRecord> matches;

    // TODO Task B:
    // Loop through the records vector.
    // Check each record major.
    // Add each record whose major exactly matches the major parameter.
    // Preserve the original order.
    for (int i = 0; i < records.size(); i++){
        if(records[i].major == major){
            // if it matcheswe want to add it into the end of the vector called matches whhich holds StudentRecord objects
            matches.push_back(records[i]);
        }
    }
    return matches;
}
