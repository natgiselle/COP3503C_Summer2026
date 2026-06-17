#pragma once
#include <vector>
#include <cmath>
using namespace std;

class Vec2 {
    vector<int> data;
public:
    Vec2();
    Vec2(int x, int y);
    vector<int> getData();

    Vec2  operator+(const Vec2& rhs);
    Vec2  operator-(const Vec2& rhs);
    Vec2& operator+=(const Vec2& rhs);
    Vec2& operator-=(const Vec2& rhs);
    float magnitude() const;
};

Vec2::Vec2() {
    data.push_back(0);
    data.push_back(0);
}

Vec2::Vec2(int x, int y) {
    data.push_back(x);
    data.push_back(y);
}
// this alwaus points to whatever is on the left side of the . or -> when function is called
vector<int> Vec2::getData() { return data; }
// must use this-> when defining function outside of class
Vec2 Vec2::operator+(const Vec2& rhs){
    Vec2 temp;
    for(int i = 0; i < data.size(); i++){
        temp.data[i] = this->data[i] + rhs.data[i];
    }
    return temp;
}


Vec2 Vec2::operator-(const Vec2& rhs){
    Vec2 temp;
    for(int i = 0; i < (int)data.size(); i++){
        temp.data[i] = this->data[i] - rhs.data[i];
    }
    return temp;
}
Vec2& Vec2::operator+=(const Vec2& rhs){
    for(int i = 0; i < (int)data.size(); i++){
        this->data[i] += rhs.data[i];
    }
    return *this;
}

Vec2& Vec2::operator-=(const Vec2& rhs){
    for(int i = 0; i < (int)data.size(); i++){
        this->data[i] -= rhs.data[i];
    }
    return *this;
}

float Vec2::magnitude() const {
    return sqrt(pow(this->data[0], 2) + pow(this->data[1], 2));
}
//static_cast<type>(expression) include <>