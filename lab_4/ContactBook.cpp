#include "ContactBook.h"
#include <iostream>
using namespace std;
ContactBook::ContactBook(){
    curr_size = 0;
}
    // obj.method() obj is an actual object
    //ptr->method() ptr is a pointer to an object
    // Write implementations here
    // Contact* contacts[MAX_SIZE] is an array of pointers of Contact objects whwere each index is pointing to the address of each object and its name, number
Contact* ContactBook::Find(string nameOrNumber)const{
    for(int i = 0; i < curr_size; i++){
        if(contacts[i]->getName() == nameOrNumber || contacts[i]->getNumber() == nameOrNumber){
            return contacts[i]; // already a pointer
        }
    }
    return nullptr;
}

int ContactBook::GetSize(){
    return curr_size;
}

void ContactBook::Add(Contact& newContact){
    contacts[curr_size] = &newContact; // stores the address
    curr_size++;
}

void ContactBook::AddContacts(vector<Contact*> newContacts){
    for(int i = 0; i < newContacts.size(); i++){
        Add(*(newContacts[i]));
    }
}


void ContactBook::Remove(Contact& contactToRemove){
    // we want the memory address of the contact
    // we are removing because contacts[i]
    // is a pointer of Contact class objects
    // which gives us memory address as the
    // value so we are comparing if they are
    // the same memory address when iterating
    // through contacts array of pointers
    // to a class object
    for (int i = 0; i < curr_size; i++){ 
        if(contacts[i] == &contactToRemove){
            for(int j = i; j < curr_size-1; j++){ // starting and ending with one less size to make up for the removed contact
                contacts[j] = contacts[j+1]; // shifts elements from right of removed contact to the left so elements 1,2,3,4 turns into 1,2,4  4 goes left<-for example
            }
        curr_size--; // need to minimize size once once it goes out fo the loop to now make it once less size in the actual array
        }
    }
}

void ContactBook::Display(){
    for(int i = 0; i < curr_size; i++){
        contacts[i]->Display();
    }
}

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------

    // all operators
ContactBook& ContactBook::operator+=(Contact& toAdd){
    Add(toAdd);
    return *this;
}

ContactBook& ContactBook::operator+=(ContactBook& other){
    for(int i = 0; i < other.curr_size; i++){
        // access contacts[] attribute from other objectand adding it to the contactbook contacts[] of the object calling the function which is the left side that we are modifying
        Add(*(other.contacts[i]));
    }
    return *this;
}

ContactBook ContactBook::operator+(ContactBook& other){
    ContactBook result;
    result += *this;  // calls pre-existing += operator overloading function
    result += other;
    return result;
}

ContactBook& ContactBook::operator-=(ContactBook& other){
    for(int i = 0; i < other.curr_size; i++){
        Remove(*(other.contacts[i]));
    }
    return *this;
}

ContactBook& ContactBook::operator-=(Contact& toRemove){
    Remove(toRemove); // modifies current ContactBook;
    return *this; 
}

ContactBook ContactBook::operator-(ContactBook& other){
    // needs a new object
    ContactBook result;
    result += *this;
    for(int i = 0; i < other.curr_size; i++){
        result.Remove(*(other.contacts[i]));
    }
    return result;
}

bool ContactBook::operator==(const ContactBook& other) const {
    if (curr_size != other.curr_size){
        return false;
    }
    for(int i = 0; i < curr_size; i++){
        Contact* found = other.Find(contacts[i]->getName());
        if ((found == nullptr) || (contacts[i]->getNumber() != found->getNumber())){
            return false;
        }
    }
    return true;
}

bool ContactBook::operator!=(const ContactBook& other) const {
    return !(*this == other);
}

