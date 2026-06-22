#include <iostream>
#include "linked_lists_intro.h"
using namespace std;
int main() {
    LinkedList arr1;
    arr1.prepend(1);
    arr1.prepend(2);
    arr1.prepend(3);
    arr1.prepend(4);
    arr1.prepend(5);
    arr1.print(); // stacks on top of each other so the top of the stack is 5 meanint 5 is first
    /** PRINTS:
     * 5
     * 4
     * 3
     * 2
     * 1
    */
    cout << "\narr1 length: " << arr1.length() << endl;
    cout << "arr1 contains 10 is " << boolalpha << arr1.contains(10) << endl;
    arr1.append(6); // adds to the end which is the bottom of the stacked plates
    cout << "\nafter appending 6 (adding 6 to the end of the list): " << endl;
    arr1.print();
    cout << endl;
    arr1.removeVal(6);
    cout << "\nafter appending 6 (removing 6 from the end of the list): " << endl;
    arr1.print();

    return 0;
}