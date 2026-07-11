#include <iostream>
using namespace std;
#ifndef POINT2D_H
#define POINT2D_H
/**
 * Instructions:

1. Basic Arithmetic
Create a Point2D class with x and y floats. Overload + and -.

2. Relational
Add == and != to your Point2D class.

3. Compound
Add += and -= to Point2D. Then in main, test chaining: p1 += p2 += p3.

4. All three combined
Create a Fraction class with numerator and denominator ints. Overload:

+ (remember: a/b + c/d = (ad + bc) / bd)
== (remember: a/b == c/d means ad == bc)
+=
 */
class Point2D{
    private:
        float x;
        float y;
    public:
        Point2D();
        Point2D(float x_, float y_);
        float GetX();
        float GetY();
        void SetX(float x_);
        void SetY(float y_);

        // gets reference to other object which is constant since we arent changing any side of thr ewuation

        /** OVERLOADING ARITHMETIC: OPERATORS(+,-,*,/,%): */
        Point2D operator+(const Point2D& other) const; // doesnt modify either side so you return a third obj with the solution of the two values
        Point2D operator-(const Point2D& other) const;
        Point2D operator-(const Point2D& other) const;
        Point2D operator*(const Point2D& other) const;
        Point2D operator/(const Point2D& other) const;
        Point2D operator%(const Point2D& other) const;

        /** OVERLOADING ASSIGNMENT AND COMPOUND: OPERATORS () */
        Point2D& operator=(const Point2D& other);
        Point2D& operator+=(const Point2D& other);
        Point2D& operator-=(const Point2D& other);
        Point2D& operator*=(const Point2D& other);
        Point2D& operator/=(const Point2D& other);
        Point2D& operator%=(const Point2D& other);


        /** OVERLOADING RELATIONAL: OPERATORS (==, !=, <, <=, >, >=) */
        bool operator==(const Point2D& other) const;
        bool operator!=(const Point2D& other) const;
        bool operator<(const Point2D& other) const;
        bool operator<=(const Point2D& other) const;
        bool operator>(const Point2D& other) const;
        bool operator>=(const Point2D& other) const;
};
#endif