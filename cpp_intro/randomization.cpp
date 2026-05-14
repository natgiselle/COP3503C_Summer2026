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
    long elapsed_seconds = time(nullptr); // returns current time in terms of number of seconds elapsed from Jan 1 1970 (uses a null pointer) same as srand(time(0))
    // returns a long value elapsed seconds
    cout << "Elapsed Seconds (since Jan 1 1970): " << endl << elapsed_seconds << endl << endl;

    srand(elapsed_seconds);
    int rand_num = rand(); // can add limi
    cout << "A RANDOM NUMBER EACH TIME COMPILED (w/o limits): " << endl << rand_num << endl << endl;
    int rand_num_2 = rand() % 10; // can add limits using modulus limit to specify upper limit where here can only be numbers 0-9  
    cout << "A RANDOM NUMBER EACH TIME COMPILED (w/ limits): " << endl << rand_num_2 << endl << endl;

    // C++ we have a different way to randomize numbers and there is alimitation to the randomness with rand() function

/*  EXERCISE 1: DICE ROLL
    Write a program for rolling dice
    - Should get two random values between 1-6
*/  
    cout << "\n\n\n--$$$ Welcome to Nat's Dice Roller! $$$--\n";
    // now do it with user input without hardcoding the max/min value for dice digits!
    cout << "DICE 1:\n"<< "Provide the lowest digit on dice 1 of 2: ";
    int min_value_1;
    cin >> min_value_1;
    cout << "Provide the highest digit on dice 1 of 2: ";
    int max_value_1;
    cin >> max_value_1;
    cout << "\n\n";

    cout << "DICE 2:\n" << "Provide the lowest digit on dice 2 of 2: ";
    const short min_value_2;
    cin >> min_value_2;
    cout << "Provide the highest digit on dice 2 of 2: ";
    const short max_value_2;
    cin >> max_value_2;
    cout << "\n\n";

    int rand_dice_1 = (rand() % (max_value_1 - min_value_1 + 1)) + min_value_1;
    cout << "\t    Rolls Dice 1...\n" << "\t\t"<< rand_dice_1 << "\n\t\t\t\tNICE!\n"<< endl;
    int rand_dice_2 = (rand() % (max_value_2 - min_value_2 + 1)) + min_value_2;
    cout << "\t    Rolls Dice 2...\n" << "\t\t" << rand_dice_2 << "\n\t\t\t\tGOOD!\n"<< endl;
    return 0;
}