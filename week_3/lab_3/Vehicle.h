#ifndef VEHICLE_H // inclusion braces
#define VEHICLE_H 

#include <iostream>
#include <string>
using namespace std;
class Vehicle {
    private:
        string make_;
        string model_;
        int year_;
        float price_;
        int mileage_;
    public:
        Vehicle(); // linker isue if you dont define
        Vehicle(string make, string model, int year, float price, int mileage);
    void Display();
    string GetYearMakeModel();
    float GetPrice();
};

#endif