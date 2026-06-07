#ifndef POINT2D_H// preprocessor keyword
#define POINT2D_H

using namespace std;
class Point2D {
    private: // private member variables
        float x;
        float y;
    public: // public member functions
    Point2D();
    Point2D(float x_, float y_);
    // arithmetic operator overloading + and -
    float GetX();
    float GetY(); 
    Point2D operator+(const Point2D& other) const;
    Point2D operator-(const Point2D& other) const;

    // relational operator overloading == and !=
    bool operator==(const Point2D& other) const;
    bool operator!=(const Point2D& other) const;

    // compound operator overloading += and -=
    Point2D& operator+=(const Point2D& other);
    Point2D& operator-=(const Point2D& other); // returns reference

};
#endif