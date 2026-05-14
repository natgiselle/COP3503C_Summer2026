/* WRITING OUTPUT IN CONSOLE:
    go into std namespace and pick up endl
    makes it a new line for the next print statement
*/

#include <iostream>
using namespace std; // use the usign directive to pick up the std namespace; now it is defined anywehre in the file
// can access ALL OBJECTS in the std namespace
int main() {

    // write many things on the same line with one print statement
    int x = 10;
    int y = 20;
    // multiple stream insertion operators

    
    cout << "x = " << x << endl // x = 10
        << "y = " << y << endl << "\n\n";

/* EXERCISE 1: OWNING A STORE
    Imagine you have a store and made:
    state tax is 4%
    county tax = 2%
    
    Write code to show your total sales, state tax, and county tax, and total tax you have to pay on this income of sales
*/
cout << "EXERCISE 1\n" << endl;
int sales = 95000;
// total income = sales (revenue) - total taxes (expenses)
const double STATE_TAX = 4;
const double COUNTY_TAX = 2;

double total_tax = sales * ((STATE_TAX + COUNTY_TAX) / 100);
cout << "Sales: $" << sales << endl;
cout << "State Tax: " << STATE_TAX << "%" << endl;
cout << "County Tax: " << COUNTY_TAX << "%" << endl;
cout << "Total Tax Payment Amount Due : $" << total_tax;






    return 0;
}