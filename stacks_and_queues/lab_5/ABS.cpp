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


// destructor
    template <typename T>
    ABS<T>::~ABS(){
        delete[] list_; // delete the dynamically allocated array (pointer to an array called list_ of type T)
    }


// default constructor by doing list initializing
    template <typename T>
    ABS<T>::ABS(): capacity_(1), size_(0), scale_(2.0f){
        list_ = new T[capacity_];
    }


// parametrized constructor with starting capacity
    template <typename T>
    ABS<T>::ABS(unsigned int capacity){
        capacity_ = capacity;
        size_ = 0;
        scale_ = 2.0f;
        list_ = new T[capacity_];
    }


// getters
    template <typename T>
    unsigned int ABS<T>::getSize(){
        return size_;
    }


    template <typename T>
    unsigned int ABS<T>::getMaxCapacity(){
        return capacity_;
    }