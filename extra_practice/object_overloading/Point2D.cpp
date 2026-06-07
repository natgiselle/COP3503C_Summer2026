#include "Point2D.h"
#include <iostream>
using namespace std;

Point2D::Point2D(){
}

Point2D::Point2D(float x_, float y_){
    this->x = x_;
    this->y = y_;
}
// getters return the type of what its getting NO PARAM
// setters return nothing and only set value OF PARAM
float Point2D::GetX(){
    return x;
}
float Point2D::GetY(){
    return y;
}
// MUST USE GETTERS FOR PRIVATE MEMBER VARIABLES since earlier it was all in the clas therfore didnt need getters
Point2D Point2D::operator+(const Point2D& other) const {
    Point2D temp;
    temp.x = x + other.x;
    temp.y = y + other.y;
    return temp;
}

Point2D Point2D::operator-(const Point2D& other) const {
    Point2D temp;
    temp.x = x - other.x;
    temp.y = y - other.y;
    return temp;
}

bool Point2D::operator==(const Point2D& other) const {
    return x == other.x && y == other.y;
}

bool Point2D::operator!=(const Point2D& other) const {
    return !(*this == other); // negates the == operator
}

Point2D& Point2D::operator+=(const Point2D& other){
    this->x += other.x;
    this->y += other.y;
    return *this;
}

Point2D& Point2D::operator-=(const Point2D& other){
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}