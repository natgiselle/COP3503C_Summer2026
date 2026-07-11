#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Starship.h"
using namespace std;

// FREEZE CODE BEGIN
void ReadStringBinary(fstream& file, string& str);
void LoadShips(const char* filename, vector<Starship>& ships);
void PrintAllShips(vector<Starship>& ships);
void PrintShipWithStrongestWeapon(vector<Starship>& ships);
void PrintStrongestShipOverall(vector<Starship>& ships);
void PrintWeakestArmedShip(vector<Starship>& ships);
void PrintUnarmedShips(vector<Starship>& ships);

int main()
{
    vector<Starship> ships;

    cout << "Which file(s) to open?\n";
    cout << "1. friendlyships.shp" << endl;
    cout << "2. enemyships.shp" << endl;
    cout << "3. Both files" << endl;
    int option;
    cin >> option;

    if (option == 1)
        LoadShips("friendlyships.shp", ships);
    else if (option == 2)
        LoadShips("enemyships.shp", ships);
    else if (option == 3)
    {
        LoadShips("friendlyships.shp", ships);
        LoadShips("enemyships.shp", ships);
    }

    cout << "1. Print all ships" << endl;
    cout << "2. Starship with the strongest weapon" << endl;
    cout << "3. Strongest starship overall" << endl;
    cout << "4. Weakest ship (ignoring unarmed)" << endl;
    cout << "5. Unarmed ships" << endl;

    cin >> option;

    if (option == 1)
        PrintAllShips(ships);
    else if (option == 2)
        PrintShipWithStrongestWeapon(ships);
    else if (option == 3)
        PrintStrongestShipOverall(ships);
    else if (option == 4)
        PrintWeakestArmedShip(ships);
    else if (option == 5)
        PrintUnarmedShips(ships);

    return 0;
}
// FREEZE CODE END

void ReadStringBinary(fstream& file, string& str)
{
    // Your code goes here.
    int len;
    file.read((char*)&len, sizeof(len));

    char* buffer = new char[len];
    file.read(buffer, len);

    str = string(buffer); // stops at \0 null terminator so that there isnt an extra char

    delete[] buffer; // since it is dynamically allocated we must delete before it goes out of scope
}

void LoadShips(const char* filename, vector<Starship>& ships)
{
    // Your code goes here.
    fstream file(filename, ios::binary | ios::in);
    int shipCount;
    file.read((char*)&shipCount, sizeof(shipCount));

    for(int i = 0; i < shipCount; i++){
      // create a new starship class object for reading
      Starship s;
      // read each Starship class attribute under diff attribute name
      ReadStringBinary(file, s.name);
      ReadStringBinary(file, s.shipClass);
      file.read((char*)&s.length, sizeof(s.length));
      file.read((char*)&s.shieldCapacity, sizeof(s.shieldCapacity));
      file.read((char*)&s.maximumWarp, sizeof(s.maximumWarp));

      int weaponCount;
      file.read((char*)&weaponCount, sizeof(weaponCount));
      for(int j = 0; j < weaponCount; j++){
        // create Weapon struct object for reading its attributes
        Starship::Weapon w;

        ReadStringBinary(file, w.name);

        // must do file.read since these are not  str you cannot use the read string binary functions
        file.read((char*)&w.powerRating, sizeof(w.powerRating));
        file.read((char*)&w.energyUse, sizeof(w.energyUse));
        s.inventory.push_back(w);
      }
      ships.push_back(s); // since ships are what we are adding which each have weapons
    }
}

// option 1
void PrintAllShips(vector<Starship>& ships)
{ 
    for(int i = 0; i < ships.size(); i++){
      if(i > 0){
        cout << endl;
      }
        ships[i].Print();
    }
}

// option 2
void PrintShipWithStrongestWeapon(vector<Starship>& ships)
{
    // Your code goes here.
    int bestPower = -1;
    int bestShipIndex = -1;

    for(int i = 0; i < ships.size(); i++){
      for(int j = 0; j < ships[i].inventory.size(); j++){
        if(ships[i].inventory[j].powerRating > bestPower){
          bestPower = ships[i].inventory[j].powerRating;
          bestShipIndex = i;
        }
      }
      
    }
    if(bestShipIndex == -1){
      cout << "No armed ships found." << endl;
      return;
    }

    ships[bestShipIndex].Print();
}

// option 3
void PrintStrongestShipOverall(vector<Starship>& ships)
{
    // Your code goes here.
    if(ships.empty()){
      cout << "NO ships loaded." << endl;
      return;
    }

    int bestIndex = 0;
    int bestFirepower = ships[0].Firepower();

    for(int i = 0; i < ships.size(); i++){
      if (ships[i].Firepower() > bestFirepower){
        bestFirepower = ships[i].Firepower();
        bestIndex = i;
      }
    }
    ships[bestIndex].Print();
}

// option 4
void PrintWeakestArmedShip(vector<Starship>& ships)
{
    // Your code goes here.
    int weakestIndex = -1;
    int weakestFirepower = -1;
    for (int i = 0; i < ships.size(); i++){
      if(ships[i].inventory.empty()){
        continue; // ignores the unarmed ships
      }
      int fp = ships[i].Firepower();
      if(weakestIndex == -1 || fp < weakestFirepower){
        weakestFirepower = fp;
        weakestIndex = i;
      }
  }

  if(weakestIndex == -1){
    cout << "No armed ships found." << endl;
    return;
  }

  ships[weakestIndex].Print();
}

// option 5
void PrintUnarmedShips(vector<Starship>& ships)
{
    // Your code goes here.
    bool foundAny = false;
    for(int i = 0; i < ships.size(); i++){
      if (ships[i].inventory.empty()){
        if(foundAny){
          cout << endl;
        }
        ships[i].Print();
        foundAny = true;
      }
    }

    if(!foundAny){
      cout << "No unarmed ships found." << endl;
    }

}

