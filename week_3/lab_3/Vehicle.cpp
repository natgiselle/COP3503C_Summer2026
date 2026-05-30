#include <iostream>
#include "Vehicle.h"
using namespace std;
// fix comment command
/**
Vehicle::Vehicle(){ // constructors dont have a return type
        make_ = "COP3503";
        model_ = "Rust Bucket";
        year_ = 1900;
        price_ = 0;
        mileage_ = 0;
    }
*/
    Vehicle::Vehicle(string make, string model, int year, float price, int mileage){
        make_ = make;
        model_ = model;
        year_ = year;
        price_ = price;
        mileage_ = mileage;
}

void Vehicle::Display(){
    cout << year_ << " " << make_ + " " << model_ << " $" << price_ << " " << mileage_ << endl;
}

string Vehicle::GetYearMakeModel(){
    return to_string(year_)+" "+make_+" "+model_;
}

float Vehicle::GetPrice(){
    return price_;
}