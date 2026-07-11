#pragma once
#include "Contact.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class ContactBook {
  // Write the class
    private:
        static const int MAX_SIZE = 100;
        Contact* contacts[MAX_SIZE];
        unsigned int curr_size;
    public:
        ContactBook();

        //function returns contact class pointer type and takes in nameornumber string to search for it pointng to the name or phone of that contact object
        Contact* Find(string nameOrNumber) const;
        int GetSize(); // gets curr_size
        void Add(Contact& newContact); // reference to new contact it passes by reference modifying directly
        void AddContacts(vector<Contact*> newContacts);
        void Remove(Contact& contactToRemove); // reference to contact to delete directly
        void Display();

        // for (int quiz : grades) if grades is a container vector
        ContactBook& operator+=(Contact& toAdd);
        ContactBook& operator+=(ContactBook& other);

        ContactBook operator+(ContactBook& other);

        ContactBook& operator-=(Contact& toRemove);
        ContactBook& operator-=(ContactBook& other);

        ContactBook operator-(ContactBook& other);

        bool operator==(const ContactBook& other) const;
        bool operator!=(const ContactBook& other) const;
        
        // pass by copy
        /** type func(string str_copy)
            copy += append;
        */
        
        // pass by pointer
        /**
            type func(&string str_ptr)
            *str_ptr += append;
        */
        
        // pass by reference
        /** 
            type func(string& str_ref)
            str_ref += append;
        */

};
