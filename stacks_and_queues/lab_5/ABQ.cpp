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
