
 // never do #include on a cpp file instead run both at the same time
#include "Point2D.h"
#include <iostream>

int main() {
    Point2D obj1(1,2), obj2(3,4), obj3(5,6);
    Point2D obj4 = obj1 + obj2 + obj3;
    cout << "After + operator overloading:\n" << "obj4(" << obj4.GetX() << ", " << obj4.GetY() << ")"<< endl;
    Point2D p1(0,1), p2(1,1), p3(1,2);
    cout << "\nBefore += operator overloading" << "\np1("<< p1.GetX() << ", " << p1.GetY() << ")" << endl;
    p1 += p2 += p3;
    cout << "\nAfter += operator overloading" << "\np1("<< p1.GetX() << ", " << p1.GetY() << ")" << endl;
    return 0;
}
