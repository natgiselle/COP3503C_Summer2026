    #pragma once
    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;

    // FREEZE CODE BEGIN
class Starship {
    public:
        struct Weapon {
            string name;
            int powerRating;
            float energyUse;
        };

        string name;
        string shipClass;
        short length;
        int shieldCapacity;
        float maximumWarp;
        vector<Weapon> inventory;
    // FREEZE CODE END

        // Your code goes here.
        // Create the Firepower() and Print() member functions.
        int FirePower(){
            int totalFirePower = 0;
            for(int i = 0; i < inventory.size(); i++){
                totalFirePower += inventory[i].powerRating;
            }
            return totalFirePower;
        }

        void Print(){
            // the member-variables in Starship class are public meaning we can directly access without using getters/parametrized constructor
            cout << "Name: " << name << endl;
            cout << "Class: " << shipClass << endl;
            cout << "Length: " << length << endl;
            cout << "Shield capacity: " << shieldCapacity << endl;
            
            // if the ship has NO weapons
            if(inventory.size() == 0){
                cout << "Armaments: Unarmed" << endl;
            }

            // if the ship has atleast one or more weapons since .size() of a vector can never be negative
            else {
                cout << "Armaments: ";
                for(int i = 0; i < inventory.size(); i++){
                cout << inventory[i].name << ", " << inventory[i].powerRating << ", " << inventory[i].energyUse  << endl;
                }
            }
        }

        
    // FREEZE CODE BEGIN
    };
    // FREEZE CODE END

