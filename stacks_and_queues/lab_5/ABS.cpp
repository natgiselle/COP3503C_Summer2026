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


    template <typename T>
    T* ABS<T>::getData(){
        return list_;
    }



// resize function
    template <typename T>
    void ABS<T>::resize(unsigned int newCapacity){
        T* arr = new T[newCapacity]; // an array that holds elements of type T with size of new capacity
        for(unsigned int i = 0; i < size_; i++){
            arr[i] = list_[i];
        }
        delete[] list_;
        list_ = arr; // reassign the pointer directly
        capacity_ = newCapacity;
    }



// copy constructor
    template <typename T>
    ABS<T>::ABS(const ABS& d){
        this->size_ = d.size_;
        this->capacity_ = d.capacity_;
        list_ = new T[capacity_]; // total amount of elements it can hold
        for(unsigned int i = 0; i < size_; i++){
            list_[i] = d.list_[i];
        }
    }


// copy assignment operator
    template <typename T>
    ABS<T>& ABS<T>::operator=(const ABS& d){
        // self-assignment check
        if(this == &d){ 
            return *this;
        }
        // delete previously allocated memory to avoid memory leak when going out of scope
        delete[] list_;

        // same as copy constructor below
        this->size_ = d.size_;
        this->capacity_ = d.capacity_;
        list_ = new T[capacity_]; // total amount of elements it can hold
        for(unsigned int i = 0; i < size_; i++){
            list_[i] = d.list_[i];
        }
        // return deference of this so its the actual value
        return *this;
    }