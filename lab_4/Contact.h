    #pragma once
    #include <string>
    #include <iostream>
    using namespace std;

class Contact {
    // Write the class
    private:
        string name_;
        string number_;
    public:
        Contact(string name, string number);
        string getName();
        string getNumber();
        void Display();
};
