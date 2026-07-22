#include <iostream>
#include <string>
using namespace std;
/** VIRTUAL FUNCTIONS & POLYMORPHISM: 
 * a virtual function lets a base-class pointer call the derived class's version of a function
 * even though the pointer's static type is the base class
*/

class Shape {
    public:
    virtual void area() const {
        cout << "Shape: undefined area" << endl;
    }
};

class Circle : public Shape {
    public:
    // everything is the same except you add override keyword at the end
    // and then change the inside
    void area() const override {
        cout << "Circle: pi * r^2" << endl;
    }
};


int main(){
    Shape* s = new Circle();
    s->area(); // prints Circle print statement NOT the undefined area
    delete s;
}