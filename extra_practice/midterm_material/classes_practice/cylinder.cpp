#include "cylinder.h" // when implementing it into the C++ file you make it exactly as written
#include <iostream>
using namespace std;

int main() {
    Cylinder cylinder1 = Cylinder(5,8);
    
    cout << cylinder1.getHeight() << endl;
    cout << cylinder1.getCylinderArea() << endl; // do object.getBlank()
    cout << cylinder1.getCylinderVolume() << endl; 
    cout << endl;
    Cylinder cylinder2 = Cylinder(4,6);
    cout << cylinder2.getHeight() << endl;
    cout << cylinder2.getCylinderArea() << endl;
    cout << cylinder2.getCylinderVolume() << endl;
    return 0;
}