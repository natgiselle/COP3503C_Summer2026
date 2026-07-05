#include <iostream>
#include <vector> // used to include vector standars library for creating arrays
using namespace std;
int main () {
    vector<int> numbers = {1,2,3,4,5}; // declares and initializes an array/list
    for(size_t i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i) << " ";
    }
    cout << endl;
    return 0;
}