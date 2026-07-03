    /** 
     * ARRAY-BASED STACK:
    */

#include <iostream>
using namespace std;
template <typename T>
class ABS {

    private:
        T* list_;
        unsigned int capacity_;
        unsigned int size_;
        float scale_;


    public:

        ABS();
        ABS(unsigned int capacity);
        void resize(unsigned int newCapacity);
        ABS(const ABS& d);
        ABS& operator=(const ABS& d);
        ~ABS();

        void push(T data);
        T pop();
        T peek();
        
        unsigned int getSize();
        unsigned int getMaxCapacity();
        T* getData();
};