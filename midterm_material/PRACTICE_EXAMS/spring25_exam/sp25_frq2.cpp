    /**
     *3. 2025 Spring Midterm 1 - FRQ #2
    Problem Statement (25 pts)
    You are given the structure for a Point3 class which stores a vector of 3 floats that represent a point in 3D space. The default and parameterized constructors have been implemented for you. Your task is to overload the +, *, +=, and *= operators and implement the distance() method for the Point3 class:
    The operator + should perform element-wise addition of two Point3s. E.g, adding a Point3 with values (
    ) to a Point3 with values (
    ) should return a new Point3 with values 
    .
    The operator * should scale all values in a Point3 by a factor passed as a float. So, multiplying a Point3 with values (
    ) by a float 
    should return a new Point3 with values (
    ).
    The += and *= operators should perform the same operations as above, but modify the Point3 on the left-hand side of the operator and return a self-reference rather than a new Point3;
    The distance() function should return the distance between two Point3s in 3D space as a float. The distance 
    between two Point3s 
    and 
    with values 
    and 
    respectively is defined by the formula 
    We recommend using the functions std::pow() and std::sqrt() included in the <cmath> header. Here are example uses of each:
    Computing 
    :

    std::cout << std::pow(2.0f, 3) << std::endl; //Takes in ints or floats
    Output: 8
    Computing 
    :

    std::cout << std::sqrt(4) << std::endl; //Takes in an int or a float
    Output: 2
    */


    // FREEZE CODE BEGIN
    #pragma once

    #include <vector>
    #include <cmath>

    using namespace std;

    // Class declaration
    class Point3 {
    vector<float> data;

    public:
    Point3();
    Point3(float x, float y, float z);

    vector<float> getData();

    Point3 operator+(const Point3& rhs);
    Point3 operator*(const float scale);

    Point3& operator+=(const Point3& rhs);
    Point3& operator*=(const float scale);

    float distance(const Point3& other) const;
    };

    // Default Constructor
    Point3::Point3(){
    for(unsigned int i = 0; i < 3; i++)
        data.push_back(0);
    }

    // Parameterized constructor
    Point3::Point3(float x, float y, float z) {
    data.push_back(x);
    data.push_back(y);
    data.push_back(z);
    }

    // Data getter
    vector<float> Point3::getData() {
    return data;
    }

    // FREEZE CODE END

    // Write your solution below this line.
    Point3 Point3::operator+(const Point3& rhs){
    Point3 temp;
    temp.data[0] = this->data[0] + rhs.data[0];
    temp.data[1] = this->data[1] + rhs.data[1];
    temp.data[2] = this->data[2] + rhs.data[2];
    return temp;
    }

    Point3 Point3::operator*(const float scale){
    Point3 temp;
    temp.data[0] = this->data[0] * scale;
    temp.data[1] = this->data[1] * scale;
    temp.data[2] = this->data[2] * scale;
    return temp;
    }

    Point3& Point3::operator+=(const Point3& rhs){
    for(int i = 0; i < this->data.size(); i++){
        this->data[i] += rhs.data[i];
    }
    return *this;
    }

    Point3& Point3::operator*=(const float scale){
    for(int i = 0; i < this->data.size(); i++){
        this->data[i] *= scale;
    }
    return *this;
    }
    float Point3::distance(const Point3& other) const{
    float d = sqrt(pow(this->data[0] - other.data[0], 2) + pow(this->data[1] - other.data[1], 2) + pow(this->data[2] - other.data[2], 2));
    return d;
    }