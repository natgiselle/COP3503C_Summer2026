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