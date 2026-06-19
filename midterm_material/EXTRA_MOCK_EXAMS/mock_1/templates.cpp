#include <vector>
#include <iostream>
template <typename T>
T FindMax(vector<T>& vec){
    T max = vec[0]; // our default maximum
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > max){
            max = vec[i];
        }
    }
    return max;
}

template <typename T>
T FindMin(vector<T>& vec){
    T min = vec[0];
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] < min){
            min = vec[i];
        }
    }
    return min;
}

template <typename T>
void PrintAll(vector<T>& vec){
    cout << "Max: " << FindMax(vec) << endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}