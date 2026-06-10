#include <iostream>
#include "Point2D.h"
#include <cmath> // do to modulus of 2 floats use fmod(numerator, denominator)
using namespace std;

Point2D::Point2D(){
    x = y = 0;
}


// this->x = x_ not nedded since the parameter name is different from the member variable name
// this->x = x YES this-> pointer IS NEEDED because the paramater passed is the same as the member variable name
Point2D::Point2D(float x, float y){
    this->x = x;
    this->y = y; 
}

float Point2D::GetX(){
    return this->x;
}
float Point2D::GetY(){
    return this->y;
}

void Point2D::SetX(float x){
    this->x = x;
}

void Point2D::SetY(float y){
    this->y = y;
}


/** ARITHMETIC: IMPORTANT DETAIL ABOUT ARITHMETIC OPERATOR RETURN TYPE BEING COPY OF THE TYPE WE ARERETURNING WHICH IS COPY OF OBJECT*/


// copy just exists in the local scope, once the function returns it is destroyed therefore you cannot chain it when return type is copy of object 


Point2D Point2D::operator+(const Point2D& other) const { // use a reference to the object Other and return the copy of temp which has the new x and y
                                            //   ^^^^^ means this function does NOT modify *this which means it does NOT modify the current object
                                            //          the current object is the left side like p1.operator+(p2) p1 is the object calling the function
    Point2D temp;
    temp.x = x + other.x;
    temp.y = y + other.y;
    return temp; // just returns the copy of temp object
}

Point2D Point2D::operator-(const Point2D& other) const {
    Point2D temp;
    temp.x = x - other.x;
    temp.y = y - other.y;
    return temp;
}

Point2D Point2D::operator*(const Point2D& other) const {
    Point2D temp;
    temp.x = x * other.x;
    temp.y = y * other.y;
    return temp;
}

Point2D Point2D::operator/(const Point2D& other) const {
    Point2D temp;
    temp.x = x / other.x;
    temp.y = y / other.y;
    return temp;
}

Point2D Point2D::operator%(const Point2D& other) const {
    Point2D temp;
    temp.x = fmod(x, other.x);
    temp.y = fmod(y, other.y);
    return temp;
}


/** COMPOUND: IMPORTANT DETAIL ABOUT COMPOUND OPERATOR IS WE ARE RETURNING THE REFERENCE TO THE OBJECT WHICH IS THE ACTUAL VALUE from *this which deferences this pointer */
// modifies left side of the equation therefore the object calling the function is NOT declared as const since we are modifying it!

Point2D& Point2D::operator=(const Point2D& other){
    this->x = other.x;
    this->y = other.y;
    return *this;
}

// return type for assignment and compound operator is reference to type (className& )and you return *this refering to the leftside of operator function which is calling the function
Point2D& Point2D::operator+=(const Point2D& other){
                        //   ^^^^^ const because we are promising not to change the right side of the equation which gets passed as parameter always
    this->x += other.x;
    this->y += other.y;
    return *this; // dereferences the this-> pointer and returns the reference to the object
}

Point2D& Point2D::operator-=(const Point2D& other){
    this->x -= other.x;
    this->y -= other.y;
    return *this; // *this dereferences the pointer to get the actual object, and Point2D& as the return type sends it back as a reference instead of a copy
}

Point2D& Point2D::operator*=(const Point2D& other){
    this->x *= other.x;
    this->y *= other.y;
    return *this;
}

Point2D& Point2D::operator/=(const Point2D& other){
    this->x /= other.x;
    this->y /= other.y;
    return *this;
}

Point2D& Point2D::operator%=(const Point2D& other){
    this->x = fmod(x, other.x);
    this->y = fmod(y, other.y);
    return *this;
}

/** RELATIONAL: IMPORTANT DETAIL ABOUT RELATIONAL OPERATOR is it returns the bool type since it should just return the comparison statement result of either true or false not necessary to use if statements */
bool Point2D::operator==(const Point2D& other) const {
    return (this->x == other.x && this->y == other.y);
}

bool Point2D::operator!=(const Point2D& other) const {
    return !(*this == other); // more efficient bcs if its equal both object should have the same values and we are calling == operator basically
}

bool Point2D::operator<(const Point2D& other) const {
// pow(a,b) is slower since it's a general floating point function so it is best practice to multiply it by itself
// comparing magnitudes whichever one has a bigger magnitude from the origin is the one that is greater for example
// if both magnitudes are the same distance from the origin then it will return true forboth being equal magnitudes
// checking what is under the sqrt to see what has bigger magnitude x^2 + y^2 compared to other_x^2 + other_y^2
    return ((this->x * this->x) + (this->y * this->y)) < ((other.x * other.x) + (other.y * other.y));
}

bool Point2D::operator>(const Point2D& other) const {
    return ((this->x * this->x) + (this->y * this->y)) > ((other.x * other.x) + (other.y * other.y));
}

/** IMPORTANT: operator and then the operator type right after is
 * the EXACT RESERVED KEYWORD SYNTAX C++ REQUIRES!!
 * if you named it like anything else and then put the operator
 * it would NOT WORK!
 * AS OF THIS SINCE IT LEGIT IS OVERLOADING THE OPERATOR
 * WITH OUR FUNCTION FOR IT WE CAN DIRECTLY USE
 * OPERATOR OVERLOADING FUNCTIONS WE JUST MADE IN OTHER
 * OPERATOR FUNCTIONS
 * 
 * using Demorgan's Law:
 * !< is logically equivalent to >=
 * !> is logically equivalent to <=
 * !<= is logically equivalent to >
 * !>= is logically equivalent to <
 * 
 * HOWEVER WE CANNOT CALL THE FUNCTION WE ARE OVERLOADING ON ITSELF like *this < other on the operator<() function bcs it will be infinitely recursive
 * 
 * */
bool Point2D::operator<=(const Point2D& other) const {
    // <= is logically equivalent to !>
    return !(*this > other);
}


bool Point2D::operator>=(const Point2D& other) const {
    // >= is logically equivalent to !<
    return !(*this < other); // !(*this < other) = *this greater than or equal to other 
}
