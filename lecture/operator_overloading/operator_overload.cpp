/**
 * arithmetic operators
 * relational operators
 * 
 */

/**
class Matrix4x4{
    float data[4][4];
    public:
    Matrix4x4
};
/
*/

#include <iostream>

using namespace std;

class Vector3{
    private:
        float x;
        float y;
        float z;
    public:
        Vector3(){
            x = y = z = 0;
        }
        Vector3(int x_, int y_, int z_){
            x = x_;
            y = y_;
            z = z_;
        }

        // CANNOT DO CHAINING IF IT RETURNS VOID WHEN DOING ASSIGNMENT/COMPOUND OPERATOR += FOR EXAMPLE
        // returns a reference
        Vector3& operator+=(const Vector3& other){
            x = x + other.x;//x += other.x;
            y = y + other.y;//y += other.y;
            z += other.z;//z += other.z;
            return *this; // we want to return it directly
        }


        // const allows binding to temporaries (values like the result of obj1+obj2)
        // without const, chaining breaks because non-const refs can't bind to temporaries const before Vector3& other makes it so chaining is allowed
        Vector3 operator+(const Vector3& other){ // CANNOT RETURN REFRENCE FROM DELETED OBJECT MUST RETURN A COPY so you need to return the temp
            Vector3 temp;
            temp.x = x + other.x;//x += other.x;
            temp.y = y + other.y;//y += other.y;
            temp.z = z + other.z;//z += other.z;
            return temp;
        }

        bool operator==(Vector3& other){
            if(x == other.x && y == other.y && z == other.z){
                return true;
            }
            else {
                return false;
            }
        }
};

int main() {
	Vector3 obj1, obj2, obj3;
    int x = 0;
    int y = 1;
    int z = 2;
    int res = x + y + z; // does x + y which is 0+1 = 1 replaces the result which is how chaining works as it goes along
    Vector3 obj1(1,1,1), obj2(2,2,2), obj3(3,3,3);
    (obj1 + obj2) + obj3; // same thing as below chain the operator+ two times
    (obj1.operator+(obj2)).operator+(obj3);
	return 0;
}