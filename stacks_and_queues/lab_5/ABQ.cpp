#include <iostream>
using namespace std;

template <typename T>
class ABQ {
    private:
    T* list_; // ptr to dynamic array holding queue data
        unsigned int capacity_; // max # of elements the array can hold
        unsigned int size_; // current # of elements in the queue
        float scale_; // resize factor using 2.0f

    public:
        ABQ();                          // Default constructor
        ABQ(int capacity);              // Constructor with starting capacity
        ABQ(const ABQ& d);              // Copy constructor
        ABQ& operator=(const ABQ& d);   // Copy assignment operator
        ~ABQ();                         // Destructor
        void resize(unsigned int newCapacity);

        void enqueue(T data);           // Add an item to the back of the queue
        T dequeue();                    // Remove and return the front item
        T peek();                       // Return the front item without removing it

        unsigned int getSize();         // Return current number of stored items
        unsigned int getMaxCapacity();  // Return current array capacity
        T* getData();                   // Return pointer to the internal array
};


// default constructor
    template <typename T>
    ABQ<T>::ABQ(){
        capacity_ = 1;
        size_ = 0;
        scale_ = 2.0f;
        list_ = new T[capacity_];
    }


// capacity constructor
    template <typename T>
    ABQ<T>::ABQ(int capacity){
        capacity_ = capacity;
        size_ = 0;
        scale_ = 2.0f;
        list_ = new T[capacity_];
    }

// destructor
    template <typename T>
    ABQ<T>::~ABQ(){
        delete[] list_;
    }


// copy constructor
    template <typename T>
    ABQ<T>::ABQ(const ABQ& d){
        capacity_ = d.capacity_;
        size_ = d.size_;
        scale_ = d.scale_;
        list_ = new T[capacity_];
        for(unsigned int i = 0; i < size_ ; i++){
            list_[i] = d.list_[i];
        }
    }


// copy assignment operator
    template <typename T>
    ABQ<T>& ABQ<T>::operator=(const ABQ& d){
        // self-assignment check
        if(this == &d){
            return *this;
        }
        // delete previously allocated memory
        delete[] list_;

        // set attributes equal to d's attributes
        capacity_ = d.capacity_;
        size_ = d.size_;
        scale_ = d.scale_;

        // dynamically allocate memory to list_ now that it is empty
        list_ = new T[capacity_];

        // deep copy d's list_ elements into list_
        for(unsigned int i = 0; i < size_ ; i++){
            list_[i] = d.list_[i];
        }
        
        // return actual object by dereferencing this
        return *this;
    }


// resize function
    template <typename T>
    void ABQ<T>::resize(unsigned int newCapacity){
        if(newCapacity < 1){
            newCapacity = 1;
        }

        // new list_
        T* newList = new T[newCapacity];
        for(unsigned int i = 0; i < size_; i++){
            newList[i] = list_[i];
        }
        
        // delete previously allocated memory
        delete[] list_;

        // set list equal to newList;
        list_ = newList;
        capacity_ = newCapacity;
    }


// enqueue
    template <typename T>
        void ABQ<T>::enqueue(T data){
        if(size_ == capacity_){
            unsigned int newCapacity = static_cast<unsigned int>(capacity_ * scale_);
            resize(newCapacity);
        }

        list_[size_] = data;
        size_++;
    }


// dequeue
    template <typename T>
    T ABQ<T>::dequeue(){
        if(size_ == 0){
            throw runtime_error("queue is empty!");
        }

        T front = list_[0];
        for(unsigned int i = 0; i < size_ -1 ; i++){
            list_[i] = list_[i + 1]; // this way it ignores the first one and its FIFO (first in first out)
        }
        size_--;

        // check if it should resize down
        if( capacity_ > 1 && (static_cast<float>(size_) / capacity_) < (1.0f / scale_)){
            unsigned int newCapacity = static_cast<unsigned int>(capacity_ / scale_);
            if(newCapacity < 1){
            newCapacity = 1;
            }
            resize(newCapacity);
        }
        return front;
    }


// peek function
    template <typename T>
    T ABQ<T>::peek(){
        if(size_ == 0){
            throw runtime_error("queue is empty!");
        }
        return list_[0];
    }

// getters
    template <typename T>
    unsigned int ABQ<T>::getSize(){
        return size_;
    }