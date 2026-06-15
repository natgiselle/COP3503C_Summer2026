/**
 * Templates
Templates Demo
For this class activity, you will be editing
a reverse sorting algorithm
to be implemented with any numeric type, using templates.
You will remove the defined data types,
and use a templated data type to be able to complete the function.
Do not change or edit the sorting algorithm,
as it is completed for you.
Keep the name of the sorting function the same.
Do not change the int n parameter.
*/

#include <iostream>
#include <algorithm> 
using namespace std;

// Reverse Selection Sort
template <typename T>
T selectionSort(T arr[], int n) {
    for (size_t i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (size_t j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            swap(arr[i], arr[max_idx]);
        }
    }
    return arr[0];
}

/**
 * Templates Info
Have you ever written code, and found yourself creating duplicate functions/classes for different data types. `DynamicArrayInt`, `DynamicArrayFloat`, etc. Thankfully, there is an adaptable and modular solution, in the form of `templates`!. Templates allow for you to write your code that works *with any data type*, as the compiler will generate type-specific versions of the code at compile time.
Template Function

// Function template for swapping values
template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
The example function allows you to swap values for multiple data types! When you call swap(5,10) the compiler generates swap<int>.
Template classes are the main use cases for templates, as you will use them all the time in C++! Some template classes include std::vector<T>, std::array<T>, std::set<T>, std::map<T, U>. Template classes provide efficient storage to allow many different types of data types to be contained in it, and operated on with class methods. Template classes definition must be defined in one file. This is because of the compiler, as in order to create specializations for your template class, all of the code your class uses must be in the same .h file.
Templates are versatile, however not absolute. You can’t use templates for everything. Some data types do not have proper methods to be able to work inside your template function. For this reason, keep your templates generic, and specialize your functions when needed.
 */