/**
 * 
 * const is short for constant and is used 
 * 
 * 
 * before type means pointee will be constant (not modified);
 *  after type means pointer itself will be constant (not modified);
 * const int* const pointer = &someValue;
 * 
 * 
 * CONST: 
 * very useful because if we know we cannot modify something 
 * if somewhere in our code it shows that we are trying to modify a const
 * the compiler will return an error
*/

int main(){
    int val = 5; // CAN be modified
    const int val2 = 10; // cannot be modifed/ or assigned to after the fact with a different value

    int* ptr = &val;

    // can point to any pointee that is of constant int type
    const int* ptrConstPointee = &val2; // pointer to const int type
    
    // means you CANNOT CHANGE MEMORY ADDRESS SO IT CANNOT POINT TO ANYTHING ELSE
    int* const constPtr = &val; // pointer itself is constant 


    // neither can be chnged the pointee nor the pointer

    // constant ptr to const integer
    const int* const constPtrConstPointee = &val2; 
    // cannot do *constPtrConstPointee = 2;
    // cannot do constPtrConstPointee = new int[3]; etc.


    // getter fucntion you can put const fter th list of parameter that nothing in there has left side changing
    // void Foo() const {
    // }

    // the job of distance function for example would be NOT changing either side youre making a third thign taht holds that vslu so temp;
    /**
     * const and Nonconst versions of fucntions;
     * CountEvenNumbers how many elements of the vectors are even
     * call to return vector of integer to modify attribute
     * want this to return constant vector of integer when we want to read from the data and  dont want to change the value
     * 
     * if you dont use reference it will create a copy so if we want to modify the original we should return reference
    */

}