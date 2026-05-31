/**
 * LAB 2 USER-INPUT:
 * @author Natalie Ortiz
 * @date 05/22/2026
 */
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    /* Overall flow of the program:
    Get some input for the title
    Get some input for column header #1
    Get some input for column header #2
    Until the user types "-1":
    Get input for a string
    Validate input
    If valid...
        Split
        Validate second half of input
        If also valid...
        Store separate pieces
    
    Print out data in table format
    
    Print out data in chart format
    */
     // WRITE YOUR CODE HERE
    vector<string> str_data;
    vector<int> int_data;
    string title;
    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " + title << endl;

    string col_head_1;
    cout << "Enter the column 1 header:" << endl;
    getline(cin, col_head_1);
    cout << "You entered: " + col_head_1 << endl;

    string col_head_2;
    cout << "Enter the column 2 header:" << endl;
    getline(cin, col_head_2);
    cout << "You entered: " + col_head_2 << endl;
    cout << "Enter a data point (-1 to stop input):" << endl;
    string data;
    while(true){
        getline(cin, data);
        if(data == "-1") {
            break;
        }
        size_t pos = data.find(",");
        if (pos != string::npos) {
            string data_str = data.substr(0, pos);
            size_t pos_2 = data.find(",", pos + 1);
            if (pos_2 == string::npos){
                try {
                    int data_int = stoi(data.substr(pos + 1));
                    str_data.push_back(data_str);
                    int_data.push_back(data_int);
                    cout << "Data string: " << data_str << endl;
                    cout << "Data integer: " << data_int << endl;
                }
                catch(const std::invalid_argument&) {
                    cout << "Error: Comma not followed by an integer." << endl;
                }
            }
            else {
                cout << "Error: Too many commas in input." << endl;
            }
        }
        else {
            cout << "Error: No comma in string." << endl;
        }
        cout << "Enter a data point (-1 to stop input):" << endl;
    }
    cout << endl;
    cout << setw(33) << right << title << endl;
    cout << setw(20) << left << col_head_1;
    cout << "|";
    cout << setw(23) << right << col_head_2 <<endl;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < int_data.size(); i++){
        cout << setw(20) << left << str_data.at(i);
        cout << "|";
        cout << setw(23) << right << int_data.at(i) << endl;
    }
    cout << endl;
    for (int i = 0; i < int_data.size(); i++){
        cout << setw(20) << right << str_data.at(i);
        cout << " ";
        for (int j = 0; j < int_data.at(i); j++){
            cout << "*";
        }
    cout << endl;
    }
    return 0;
}