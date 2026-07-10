// Practice exercise for binary file I/O: Super Mario Galaxy references
// used purely as example data, not affiliated with Nintendo

/** SUPER BINARY MAR-IO: GALAXY 1
 * 
 *  OBJECTIVE: Simulate a simplified save file system that tracks which galaxies Mario has visited
 * and how many power stars he collected in each using binary file I/O
 * 
 * REQUIREMENTS:
 * 1. Create a struct GalaxyRecord with:
 *      - string galaxyName
 *      - int starsCollected
 * 
 * 2. Make  a vector<GalaxyRecord> with atleast 4 galaxies
 * 
 * 3. Write to a binary file savefile.dat
 *  - First write an int for how many galaxies are in the save file
 *  - Then for each galaxy, write the length of the galaxy name (int)
 *  - The name itself (raw chars)
 *  - starsCollected (int)
 * 
 *  4. Read it back
 *  - Read the galaxy count first.
 *  - Loop that many times reconstructing each GalaxyRecord into a fresh vector
 * 
 * 5.
 *   ====== Mario's Save File ======
 *      Good Egg Galaxy: 6 stars
 *      Honeyhive Galaxy: 5 stars
 *      Loopdeeloop Galaxy: 1 star
 *      Flipswitch Galaxy: 1 star
 *      Total Stars: 13
 * 
 * 
 */
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct GalaxyRecord {
    string galaxyName;
    int starsCollected;
};

int main(){
    vector<GalaxyRecord> galaxyRec1;
        galaxyRec1.push_back({"Good Egg Galaxy", 6});
        galaxyRec1.push_back({"Honeyhive Galaxy", 5});
        galaxyRec1.push_back({"Loopdeeloop Galaxy", 1});
        galaxyRec1.push_back({"Flipswitch Galaxy", 1});
    // can use StructName ObjName = {attribute 1, attribute 2}; to initalize a struct object with its attributes already declared with values 
    // below is what we call empty initialization which actually makes it do it twice so it is not as efficient as just aggregate initialization
    // galaxyRec1.galaxyName = "Good Egg Galaxy";
    // galaxyRec1.starsCollected = 6;
    /** OFSTREAM: writes into file */
    ofstream savefiledata("../out.o", ios::binary); // ensures that it writes in binary

    if(savefiledata.is_open()){
        int count = galaxyRec1.size();
        savefiledata.write((char*)&count, sizeof(count));
        for(int i = 0; i < galaxyRec1.size(); i++){
            int nameLen = galaxyRec1[i].galaxyName.size();
            savefiledata.write((char*)&nameLen, sizeof(nameLen));
            // creates new binary object that holds the galaxyName attribute of galaxyRecord struct object at index i in galaxyRec1 vector
            savefiledata.write(galaxyRec1[i].galaxyName.c_str(), (galaxyRec1[i].galaxyName).size());

            // creates a new binary object that holds the starsCollected attribute of galaxyRecord struct object at index i in galaxyRec1 vector
            savefiledata.write((char*)&(galaxyRec1[i].starsCollected), sizeof(galaxyRec1[i].starsCollected));

        }
    }
    else {
        cout << "Error reading file!" << endl;
        return 1;
    }
    
    savefiledata.close();




    ifstream readfiledata("../out.o", ios::binary); // one @param which is which file we are reading


    int countLength;
    readfiledata.read((char*)&countLength, sizeof(countLength));

    vector<GalaxyRecord> galaxyRec2;

    int totalStars = 0;

    if(readfiledata.is_open()){
        cout << "====== Mario's Save File ======" << endl;
        // loop 1 to read the attributes of the struct objects, initialize  attributes inside forloop and resize any string attributes and add the objects to the newly made vector
        for(int i = 0; i < countLength; i++){
            int nameLen; // 1. create a namelen attribute
            // 2. reads from file the string galaxyName attribute of the galaxyRecord struct object at index i of galaxyRec1 vector
            readfiledata.read((char*)&nameLen, sizeof(nameLen)); // bytes of len

            string name; // 3. create a new string since we do not use the already existing values when reading from a file
            name.resize(nameLen); // 4. must resize for strings
            readfiledata.read(name.data(), nameLen);

            // reads from file the int starsCollected attribute of the galaxyRecord struct object at index i of galaxyRec1 vector
            int stars;
            readfiledata.read((char*)&stars, sizeof(int));
            
            galaxyRec2.push_back({name, stars});
        }   
        // loop 2 to print from the second vector
        for(int i = 0; i < countLength; i++){
            cout << "\t" << galaxyRec2[i].galaxyName << ": "; // 2. print out newly created string 
            
            cout << " " << galaxyRec2[i].starsCollected << "★" << endl;
            totalStars += galaxyRec2[i].starsCollected;
        }
        cout << "Total Stars: " << totalStars << "★" << endl;
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }
    return 0;
}