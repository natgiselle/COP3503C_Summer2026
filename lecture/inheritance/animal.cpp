#include <iostream>
using namespace std;

class Animal {
    private: // private by default 
        string name;
    public:
        Animal(string name_) : name(name_) {}

        void Voice(){
            cout << "" << endl;
        }
};


class Cat : public Animal {
    int lives;
    public:
    // must use list initializer since string is private only accessible in Animal base class
    // for the private member variable of Cat class you are allowed to write it inside or also with list initializer
    // CANNOT DO change of attribute WITH NAME like i did with lives because of the fact name_ belongs to private of Animal class
        Cat(string name_, int lives_) : Animal(name_) /** , lives(lives_) */ {
            lives = lives_;
        }
};