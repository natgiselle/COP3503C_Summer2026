#include <iostream>
#include <vector>
#include <string>
using namespace std;
/** INHERITANCE & POLYMOPRHISM CONCEPTS: */

/** INHERITANCE:
 * a derived class that resuses and extends a base class
 * 
 * a derived class: "gets/copies" all the data and functionality from the base class
 * all public member vars and funcs
 * all protected member vars and funcs
 * 
 * pricate data stays private- technically derived class has them but cannot access them
 * 
 * the new deerived class can use all the inherited functionality as the base class
 * 
 * 
 * must have "IS A" RELATIONSHIP
 * a car is a vehicle
 * a bus is a vehicle
 * 
 * a hero is a person but not every person is a hero
 * 
 */
class Animal {
    protected: // if you define this attribute as protected
    // (it can be modified using the member function)
    // it can be accessed and modified in the other classes
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

