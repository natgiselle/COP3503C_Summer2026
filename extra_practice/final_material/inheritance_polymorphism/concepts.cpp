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
    //it can be accessed and modified in the other classes
    // the dervied clases has access to the base class attributes
        string name;
    public: 
    // list initializer for parametrized constructor
    Animal(string n) : name(n) {}
    virtual void speak() const {
        cout << name << " make a sound." << endl;
    }

    virtual ~Animal() {
        cout << name << "(Animal) destroyed." << endl;
    }
}; // NEVER FORGET TO ADD SEMI COLON FOR THE END OF A CLASS!

// private it still inherits it but cannot be directly changed unless you do getters and setters
// for private outside of the class you will need public getter or setter functions
// even though dog has name you cannot change it unless you create an initializer
class Bird: public Animal { // create a Dog class that inherits from Animal class
    public: 
        Bird(string n) : Animal(n) {}

        // new override speak
        void speak() const override {
            cout << name << " chirps!" << endl;
        }

        ~Bird() override {
            cout << name << " (Bird) destroyed." << endl;
        }
};

class Fish : public Animal {
    
    public:
        Fish(string n) : Animal(n) {}

        void speak() const override {
            cout << name << " blow bubbles!" << endl;
        }

        ~Fish() override {
            cout << name << " (Fish) destroyed" << endl;
        }
};

/** BASS-CLASS POINTERS + DYNAMIC MEMORY + VIRTUAL DESTRUCTORS: */
int main() {
    vector<Animal*> zoo;
    zoo.push_back(new Bird("Cockatiel"));
    zoo.push_back(new Fish("Nemo"));

    for (Animal* a : zoo) {
        a->speak(); // polymorphic call
    }

    for(Animal* a : zoo){
        delete a; // now calls ~Bird()/~Fish() then ~Animal(), no leaks
    }
    return 0;
}

// whenever you write class X : public Y, if you store X objects ina vector<Y*> and call function on them through that pointer

/**
 * VIRTUAL:
 * goes in the BASE class declaration at the front of the signature
 *         virtual void speak(); can have body, derived classes can override it but DO NOT have to
 * 
 * =0 PURE:
 * pure virtual
 *      virtual void speak() = 0; has NO body at all in base class (usually)
 * 
 * it does two things at once:
 * 1. FORCES EVERY DERIVED CLASS TO OVERRIDE IT- if a derived class does NOT provide own speak(), that derived class is ALSO abstract and CANNOT be instantiated either. 
 * 2. MAKES THE BASE CLASS ABSTRACT- cannot write Animal a; only have Bird, Fish, and other derived classes.
 * 
 * 
 *  YOU WANT PURE VIRTUAL WHEN BASE CLASS HAS NO SENSIBLE DEFAULT BEHAVIOR
 *  Animal::speak() even print for an animal that can be anything does not really work.
 * SINCE THERE IS NO UNIVERSAL ANSWER FOR THIS, INSTEAD OD GUESSING JUST MAKE THE FUNC VIRTUAL AT BEGINNING OF DECLARATION AND SET = 0
 * 
 *  ABSTRACT: abstract class <=> atleast 1 pure virtual function
 * either declared directly in the class or inherited from a base class and never overridden.
 * if it contains an unfulfilled = 0, then it is abstract. every pure virtual has been overridden somewhere in the chain it is instantiable.
 * 
 * ABCs abstract base classes
 */


/** 
 * OVERRIDE: 
 * derived class provides its own version of a function that already exists (as virtual) in the base class.
 * THEY DO NOT MEAN THE SAME THING
 * 
 * OVERLOAD:
 * writing multiple fucntions with the same name but different paramaters in the same class
*/


/** 
 * CAN NOT: BE VIRTUAL
 * -constructors
 * -static functions
 * -getters/setters
 * anything 100% sure will never be called through base-class pointer
*/

