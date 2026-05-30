#ifndef ALLIGATOR_HPP
#define ALLIGATOR_HPP
#include <iostream>
#include <string>

class Alligator{
    private:
        std::string name = "Albert";
        std::string hunger_level = "Completely Full";
        std::string owner = "UF";
        int age = 0;

    public:
        Alligator();
        Alligator(std::string name, std::string hunger_level, std::string owner, int age);
        void becomeOlder();
        void swampTransfer(std::string new_owner);
        void gatorGrowl();
        std::string getName();
        std::string getHungerLevel();
        std::string getOwner();
        int getAge();
};


#endif