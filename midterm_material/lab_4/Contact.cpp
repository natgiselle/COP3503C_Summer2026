#include "Contact.h"
using namespace std;
    // Write implementations here
Contact::Contact(string name, string number){
    name_ = name;
    number_ = number;
}

string Contact::getName(){
    return name_;
}

string Contact::getNumber(){
    return number_;
}

void Contact::Display(){
    cout << name_ << ", " << number_ << endl;
}
