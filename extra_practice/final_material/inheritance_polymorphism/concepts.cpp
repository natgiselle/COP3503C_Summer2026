#include <iostream>
#include <vector>
#include <string>
using namespace std;
/** INHERITANCE & POLYMOPRHISM CONCEPTS: */

/** INHERITANCE:
 * a derived class that resuses and extends a base class
 */
class Animal {
    protected: // if you define this attribute as protected (it can be modified using the member function) it can be accessed and modified in the other classes
    // the dervied clases has access to the base class attributes
        string name;
    public: 
    // list initializer for parametrized constructor
    Animal(string n) : name(n) {}
}; // NEVER FORGET TO ADD SEMI COLON FOR THE END OF A CLASS!

// private it still inherits it but cannot be directly changed unless you do getters and setters
// for private outside of the class you will need public getter or setter functions
// even though dog has name you cannot change it unless you create an initializer
class Dog: public Animal { // create a Dog class that inherits from Animal class
    public: 
        Dog(string n) : Animal(n) {}
};

/** BASS-CLASS POINTERS + DYNAMIC MEMORY + VIRTUAL DESTRUCTORS: */

