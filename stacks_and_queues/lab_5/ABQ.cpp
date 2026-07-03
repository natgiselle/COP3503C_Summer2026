/**
 * ARRAY-BASED QUEUE:
*/

#include <iostream>
using namespace std;

template <typename T>
class ABS {

    // implement your class
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

// destructor
    template <typename T>
    ABS<T>::~ABS(){
        delete[] list_; // delete the dynamically allocated array (pointer to an array called list_ of type T)
    }
    