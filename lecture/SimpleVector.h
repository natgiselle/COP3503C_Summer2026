#include <iostream>
#pragma once

//FREEZE CODE BEGIN
class SimpleVector {
private:
    int* arr;
    int size;

public:
    SimpleVector();
    SimpleVector(int initial_size);
    SimpleVector(const SimpleVector& other);
    SimpleVector& operator=(const SimpleVector& other);
    ~SimpleVector();
    void resize(int new_size);
    int& operator[](int index);
    int getSize();
};

//FREEZE CODE END
