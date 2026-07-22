#include <iostream>
#include <vector>
#include <string>
using namespace std;
/** INHERITANCE & POLYMOPRHISM CONCEPTS: */

/** INHERITANCE:
 * a derived class that resuses and extends a base class
 */
class Animal {
    private:
        string name;
    public: 
    // list initializer for parametrized constructor
    Animal(string n) : name(n) {}
}; // NEVER FORGET TO ADD SEMI COLON FOR THE END OF A CLASS!

class Dog: public Animal {
    public: 
        Dog(string n) : Animal(n) {}
};