/**
 * vector is a dynamically allocated data sttrctre
 * vector and array have consecutive blocks of memory
 * have to do shifting elememnts towards the left
 * 
 * there is alot of different ways to store things IRL:
 * boxes, bins, crates, drawers
 * 
 * data structures are how we store information like physical containers:
 * short, int, long, long long, float, char, string, vector, array, linked list, etc.
 * 
 * O(1) is the best we can get instant look up
 * O(n)
 * O(n^2)
 * Olog(n)
 * 
 * definition of them eill br on exam
 * 
 */

// two nested for loops: O(n^2) n first one and the next one also repeats n
#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i < 10; i++){
        for(int i = 1; i < 10;i++){
            cout << i << endl;
        }
    }

// three nested loops: O(n^2)
}