#include <iostream>
using namespace std;
// first usage is resolving the diamond proble where it has double copy of base class
// second usage is to be able to use a base-class pointer to access vars, member funcs from base-class and inherited classes (derived)
class Animal {
    private: // private by default 
        string name;
    public:
        Animal(string name_) : name(name_) {}

        void voice(){
            cout << "Unidentified voice" << endl;
        }
        void hungry(){
            cout << "Hungry ! :p" << endl;
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

        // improper polymorphism 
        void voice(){
            cout << "Meow :3" << endl;
        }
};


class Dog : public Animal {
    int walks;
    public:
        Dog(string name_, int walks_) : Animal(name_), walks(walks_) {}

        void voice(){
            cout << "Bark :3" << endl;
        }

};


int main(){
    Animal animal("Animal");
    Cat cat("Gigi", 9);
    Dog dog("Thor", 10);

    animal.voice();
    dog.voice();
    cat.voice();
}