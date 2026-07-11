#include <iostream>
#include "Point2D.h"
using namespace std;

int main() {


    // Point2D p1 = Point2D(1,2); copy initialization
    // Point2D p1 = {1,2}; uniform initialization C++11+


    /** IMPORTANT: */
    // Point2D p1 = p1(1,2); DIRECT initalization;
    // Point2D* p1 = new Point2D(1,2); HEAP ALLOCATION (dynamic memory)


    Point2D p1(1,2), p2(3,4); // direct initialization
    cout << "Point 1: (" << p1.GetX() << ", " <<  p1.GetY() << ")" << endl;
    cout << "Point 2: (" << p2.GetX() << ", " << p2.GetY() << ")" << endl;
    Point2D p3 = p1.operator+(p2);
    cout << "(" << p1.GetX() << ", " <<  p1.GetY() << ") + ";
    cout << "(" << p2.GetX() << ", " <<  p2.GetY() << ") = ";
    cout << "(" << p3.GetX() << ", " <<  p3.GetY() << ")" << endl;
    return 0;
}
