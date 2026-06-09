#include <iostream>
#include "Point2D.h"
using namespace std;

int main() {


    // Point2D p1 = Point2D(1,2); copy initialization
    // Point2D p1 = {1,2}; uniform initialization C++11+


    /** IMPORTANT: */
    // Point2D p1 = p1(1,2); DIRECT initalization;
    // Point2D* p1 = new Point2D(1,2); HEAP ALLOCATION (dynamic memory)


    Point2D p1(1,2), p2(3,4), p3(5,6); // direct initialization
    // cout << "Point 1: (" <<  << << ")" << endl;
    return 0;
}
