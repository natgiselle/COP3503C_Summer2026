#include <iostream>
using namespace std;
/** ABSTRACT BASE CLASSES & PURE VIRTUAL FUNCTIONS:
 * adding =0 makes  function pure virtual
 * ABSTRACT: any classs with atleast one pure virtual function
 * 
*/

class Shape {
    public: 
    // pure virtual no body required
        virtual void area() const = 0;
};

class Circle : public Shape {
    public:
        virtual void area() const override {
            cout << "Circle: pi * r^2" << endl;
        }
};
/** Shape s; ERROR: object of abstract class type "Shape" is not allowed:
abstract.cpp(21, 7): function "Shape::area" is a pure virtual function */
int main(){
    Shape* s = new Circle();
}



