    #pragma once
    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;

    // FREEZE CODE BEGIN
    class Starship
    {
    public:
        struct Weapon
        {
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

        
    // FREEZE CODE BEGIN
    };
    // FREEZE CODE END

