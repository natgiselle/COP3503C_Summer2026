#include <iostream>
#include "classes.h"
using namespace std;
int main() {
    Student s1;
    s1.display();

    Student s2("Natalie Ortiz", 12345678, 100, 100);
    s2.display();

    return 0;
}