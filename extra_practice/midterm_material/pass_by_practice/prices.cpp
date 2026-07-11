/**
EXTRA:
Coding Question Exercise
Implement three functions to demonstrate pass-by-value, pass-by-pointer, and pass-by-reference using a std::vector<double> of product prices.
APPLYDISCOUNTBYCOPY:

Parameters: std::vector<double> of prices passed by copy, a double discount_percent
Return Type: void
Subtract discount_percent% from each price. If a price goes below 0, cap it at 0.

APPLYDISCOUNTBYPOINTER:

Parameters: std::vector<double>* of prices passed by pointer, a double discount_percent
Return Type: void
Same logic as above.

APPLYDISCOUNTBYREFERENCE:

Parameters: std::vector<double> of prices passed by reference, a double discount_percent
Return Type: void
Same logic as above.
 */

// to apply discount by copy the parameter must be alone
#include <iostream>
#include <vector>
using namespace std;

void ApplyDiscountByCopy(vector<double> prices, double discount_percent){
                        //^^^^^^^^^^^^^^ regular no & no * after because its just passing the copy of that object
    for(double product : prices){
        product -= (product * (discount_percent / 100));
        if(product < 0) {
            product = 0;
        }
    }
}

void ApplyDiscountByPointer(vector<double>* prices, double discount_percent){
                        // ^^^^^^^^^^^^^^^^ with asterisk at the end of the data type to declare the pointer
    for (int i = 0; i < (*prices).size(); i++){
        (*prices)[i] -= ((*prices)[i] * (discount_percent / 100)); // dereference pointer everwhere to actually modify the value of element in prices vector of doubles with specified index
        if((*prices)[i] < 0){
            (*prices)[i] = 0;
        }
    }
}

void ApplyDiscountByReference(vector<double>& prices, double discount_percent){
    for (int i = 0; i < prices.size(); i++ ){
        prices[i] -= (prices[i] * (discount_percent / 100 ));
        if(prices[i] < 0){
            prices[i] = 0;
        }
    }
}


void printVector(vector<double>& prices_ref){
    cout << "current values in prices vector: {";
    for(int i = 0; i < prices_ref.size(); i++){
        if (i == (prices_ref.size()-1)){
            cout << prices_ref[i];
        }
        else {
            cout << prices_ref[i] << ", ";
        }    
    }
    cout << "}" << endl;
}


int main(){
    vector<double> product_prices = {10.0, 20.0, 30.0, 40.0, 50.0};
    vector<double>* prices_ptr = &product_prices;
    vector<double>& prices_ref = product_prices;
    printVector(product_prices);
    double discount_percent = 10.0;
    ApplyDiscountByCopy(product_prices, discount_percent);
    printVector(product_prices); // shouldnt be changed

    ApplyDiscountByPointer(prices_ptr, discount_percent);
    printVector(product_prices);
    ApplyDiscountByReference(prices_ref, discount_percent);
    printVector(product_prices);
    return 0;
}