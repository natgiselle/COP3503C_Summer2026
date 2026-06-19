/** 
 * 3. 2025 Fall Midterm 1 - FRQ #2
Problem Statement (25 pts)
You are given a KPop Company class with a vector<string> attribute named groups. The constructors and helper functions are already implemented.
Your task: overload the += and + operators for the Company class.
+= operator:
Edit the Company object on the left-hand side by adding the given string groupName on the right-hand side to the vector<string> groups attribute.
Parameter:
const string& groupName
Return Type:
Company&: returns a reference to the invoking object after editing.
Operands:
Left-hand side: Company object
Right-hand side: string object
Example:

Company JYPE;
string TWICE = "TWICE";
string SKZ = "Stray Kids";

JYPE += TWICE;
JYPE += SKZ;

// After these operations:
// JYPE.groups = {"TWICE", "Stray Kids"}
+ operator:
The + operator should combine the groups vectors of both companies.
Create a new local Company object (e.g., Company merge;) which will contain the combined contents.
Loop through the groups vectors of both the left-hand side and right-hand side Company objects
Use the previously defined += operator to add each element of groups vectors to merge object.
Return merge object.
Parameter:
const Company& other
Return Type:
Company: returns a Company object with the combined contents.
Operands:
Left-hand side: Company object
Right-hand side: Company object
For example:

Company hybe;
Company sm;

string NewJeans = "NewJeans";
string BTS = "BTS";
string aespa = "aespa";

// Add group names to each company
hybe += NewJeans;
hybe += BTS;
sm += aespa;

// Merge the two companies
Company merged = hybe + sm;

// Result:
// merged.groups = {"NewJeans", "BTS", "aespa"}
*/


#include <iostream>
#include <vector>
#include <string>
#pragma once
using namespace std;

// FREEZE CODE BEGIN
class Company {
private:
    vector<string> groups;
public:
    Company(){}
    Company(vector<string> g){
        groups = g;
    }
    vector<string> groupGetter(){
        return groups;
    }
// FREEZE CODE END

    // YOUR CODE GOES HERE
    // ITS ALREADU INSIDE THE CLASS YOU DONT USE THE SCOPE RESOLUTION OPERATOR
    Company& operator+=(const string& groupName){
        (*this).groups.push_back(groupName);
      return *this;
    }

    Company operator+(const Company& other){
        Company merged;
        for(int i = 0; i < groups.size(); i++){
            merged += this->groups[i];
        }
        for(int j = 0; j < other.groups.size(); j++){
            merged += other.groups[j];
        }
        return merged;
    }

// FREEZE CODE BEGIN
    // display function to see if everything worked
    void display() const {
        cout << "Company Groups:\n";
        for (const auto& group : groups) {
            cout << group << " " << endl;
        }
    }
};
// FREEZE CODE END
