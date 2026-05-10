/* NUMBER RANDOMIZATION:
*/

#include <iostream>
#include <cstdlib> // includes C++ standard library
#include <ctime>

using namespace std;
int main() {
    srand(2); // seed the random changes the numbt then keps printing the same number
    int number = rand();
    cout << "Random number (same each time compiled): " << endl << rand() << endl << endl; // everytime we run this program we get the exact same number
    // are not really random has a mathematical function it goes with

    // if we use the function of getting cureent time in second since january 1970 we get a different number each time
    long elapsed_seconds = time(nullptr); // returns current time in second elapsed from Jan 1 1970 (needs a null pointer)
    // returns a long value elapsed seconds
    cout << "Elapsed Seconds (since Jan 1 1970): " << endl << elapsed_seconds << endl << endl;

    srand(elapsed_seconds);
    int rand_num = rand();
    cout << "A RANDOM NUMBER EACH TIME COMPILED: " << endl << rand_num << endl << endl;

    return 0;
}