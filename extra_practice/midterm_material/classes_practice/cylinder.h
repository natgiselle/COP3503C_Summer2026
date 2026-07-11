#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
using namespace std;
#include <cmath>
class Cylinder {
    private:
        const double pi {3.14};
        double radius;
        double height;

    public:
        Cylinder(double _radius, double _height){
            radius = _radius;
            height = _height;
        }

        /**
         * GETTERS: @param NO @return YES
         */
        double getRadius(){ 
            return radius;
        }

        double getHeight(){
            return height;
        }

        /**
         * GETTERS: @param YES @return NO it is void
         */
        void setRadius(double _radius){
            radius = _radius;
        }

        void setHeight(double _height){
            height = _height;
        }

        double getCylinderArea(){
            return pi * pow(radius, 2);
        }

        double getCylinderVolume(){
            return getCylinderArea() * height;
        }
};
#endif