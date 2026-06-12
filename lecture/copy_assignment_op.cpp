// returns reference because it allows us to chain operator calls together
// we cannot do chaining if it is not a reference bcs then if its just the object itself
// it returns a shallow copy that is a copy only in that scope so once it exits scope or returns 
// it is destroyed

// it has reference in parameter for optimizationas it is better than passing by copy

// we have big 3 because porrams by default create shalllow copy so we must manually do each attribute rather than copying the sam memory address
// Destructor prototype: 
class ExampleClass{


};

// deep copy duplicate the data; do ptr new int then fo loop setting the ptr[i] to copy  value from existing object

// shallow copy in class is like doign Obj1 = Obj2 it is not good because if uou implement one of thm you hae to impliement all 3

// if it is a container you do delete[] var with new[blank]

// member to member copy

// shallow copy IS WRONG: is when both got he objects now point to the same address one goes out of scope other becomes dangling pointer
//  must do deep copy , allocating memory(creating new memory)second is driving for loop to copy elements in the other thing
// next lab assignment queue and stackfrom scratch
// vector uses dynamic memory allocation