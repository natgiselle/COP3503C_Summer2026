    /**
     * 2. 2025 Fall Midterm 1 - FRQ #1
    Problem Statement (25 points)
    Your task is to implement the Circle class with the following member attributes and functions:
    Note: You’re given a const float pi = 3.14159 to use in your code.
    Attributes:
    float radius stores the circle’s radius.
    float perimeter stores the circle’s circumference (2*pi*radius).
    Functions:
    1. Default Constructor
    Initializes radius to 1
    Initializes perimeter to 2*pi*radius
    2. Parameterized Constructor
    Parameter: float _radius
    Initializes radius with the given parameter
    Initializes perimeter to 2*pi*radius
    3. getRadius()
    Returns the radius attribute
    4. getPerimeter()
    Returns the perimeter attribute
    5. setRadius()
    Parameter: float _radius
    Return type: void
    updates radius with the given parameter
    updates perimeter to 2*pi*radius
    6. setPerimeter()
    Parameter: float _perimeter
    Return type: void
    updates perimeterwith the given parameter
    updates radius to perimeter/(2*pi)
    7. Display()
    Parameter: void
    Return type: void
    Prints the Circle attributes in the format which is presented in the following example.
    Example:

    Radius: 2.5
    Perimeter: 15.708
    NOTE: You must define all the functions even with empty bodies for setters and display before you run the test cases, because they will fail to compile if those are not defined.
    */


#include <string>
#include <iostream>
using namespace std;

    // FREEZE CODE BEGIN

    // Constant float pi of 3.14159
const float pi = 3.14159f;

    // FREEZE CODE END
class Circle{
    private:
        float radius;
        float perimeter;
    public:
        Circle(){
            radius = 1;
            perimeter = 2*pi*radius;
        }
        Circle(float radius_){
            radius = radius_;
            perimeter = 2*pi*radius;
        }
        float getRadius(){
            return radius;
        }
        float getPerimeter(){
            return perimeter;
        }
        void setRadius(float _radius){
            radius = _radius;
            perimeter = 2*pi*radius;
        }
        void setPerimeter(float _perimeter){
            perimeter=_perimeter;
            radius = perimeter/(2*pi);
        }

        void Display(){
            cout << "Radius: " << getRadius() << endl;
            cout << "Perimeter: " << getPerimeter() << endl;
        }
    };

    // Define your Circle class below
