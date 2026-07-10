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
 * 5. ===== Mario's Save File =====
 *      Good Egg Galaxy: 6 stars
 *     Honeyhive Galaxy: 5 stars
 *     Loopdeeloop Galaxy: 1 star
 *     Flipswitch Galaxy: 1 star
 *     Total Stars: 13
 * 
 * 
 */
#include <iostream>
#include <fstream>
using namespace std;

struct GalaxyRecord {

};


int main(){



    return 0;
}