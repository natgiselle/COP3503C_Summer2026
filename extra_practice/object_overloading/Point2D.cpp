#include <iostream>
#include "Point2D.h"
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

