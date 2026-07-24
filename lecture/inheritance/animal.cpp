#include <iostream>
#include <string>
using namespace std;
// first usage is resolving the diamond proble where it has double copy of base class
// second usage is to be able to use a base-class pointer to access vars, member funcs from base-class and inherited classes (derived)
class Animal {
    private: // private by default 
        string name;
    public:
        Animal(string name_) : name(name_) {}

        virtual void voice() const = 0;
        void hungry(){
            cout << "Hungry ! :p" << endl;
        }



        /** VIRTUAL DESTRUCTOR: */
        virtual ~Animal(){
            cout << "Animal destroyed." << endl;
        }
};


// must add virtual before it to override a virtual function properly from the base class
class Cat : virtual public Animal {
    int lives;
    public:
    // must use list initializer since string is private only accessible in Animal base class
    // for the private member variable of Cat class you are allowed to write it inside or also with list initializer
    // CANNOT DO change of attribute WITH NAME like i did with lives because of the fact name_ belongs to private of Animal class
        Cat(string name_, int lives_) : Animal(name_) /** , lives(lives_) */ {
            lives = lives_;
        }

        // improper polymorphism as we should use override keyword
        void voice() const override { // IS A CONCRETE CLASS BECAUSE WE OVERRIDE THE PURE VIRTUAL FUNCTION BEING SET TO =0
            cout << "Meow :3" << endl;
        }

        ~Cat(){
            cout << "Cat destroyed." << endl;
        }
};


class Dog : virtual public Animal {
    int walks;
    public:
        Dog(string name_, int walks_) : Animal(name_), walks(walks_) {}

        void voice() const override {
            cout << "Bark :3" << endl;
        }

        ~Dog(){
            cout << "Dog destroyed." << endl;
        }

};
/** 
    WITHOUT virtual:          WITH virtual:
    DOUBLE ANIMAL
    AMBIGUOUS
    Animal       Animal          Animal
        |        |               /    \
        Cat      Dog          Cat      Dog
        \         /             \      /
            Fox                   Fox
    (two Animals,           (one Animal, owned
    one per path)           directly by Fox)
*/
class Fox: public Cat, public Dog {
    string diet;
    public:
    Fox(string name_, int lives_, int walks_, string diet_): Animal(name_), Cat(name_, lives_), Dog(name_, walks_), diet(diet_) {}
    void voice() const override {
        cout << "Yowl :3" << endl;
    }

    ~Fox(){
        cout << "Fox destroyed." << endl;
    }
};

int main(){
    vector<Animal*> animals;
    animals.push_back(new Cat("gigi", 9));
    animals.push_back(new Dog("thor", 10));
    animals.push_back(new Fox("pochita", 1, 100, "rabbits"));
    for(int i = 0; i < animals.size(); i++){
        animals[i]->hungry(); // calls hungry func for base class and its derived classes
        animals[i]->voice(); // calls voice func for base class and its dderived classes
        animals[i]->~Animal(); // calls virtual destructor
    }
    return 0;
}
