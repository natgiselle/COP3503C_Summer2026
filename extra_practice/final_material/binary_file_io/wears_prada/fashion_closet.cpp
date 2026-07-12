#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/** FASHION:
 * 
 * RUNWAY ARCHIVE - Binary File I/O practice
*/
// resize() is only for the read side never the write side
// write side already has data theefore u can grab the current str and do .size() and .data()
// in this case the fstream& file parameter is an already created file passed and we just do file.write()
void WriteStringBinary(fstream& file, const string& str){
    int len = str.size(); // doing this instead of str.resize(len) 
    file.write((char*)&len, sizeof(len));
    file.write((char*)str.data(), len);
}

void WriteLookBinary(fstream& file, const string& designerPiece, int seasonYear){
//  returns the number of characters and we know that 1 char = 1 byte so the length of the string is equal to the amount of bytes it holds
    WriteStringBinary(file, designerPiece);
    file.write((char*)&seasonYear, sizeof(int)); // an int is going to be equal to 4 bytes
}


void ReadStringBinary(fstream& file, string& str){
    // because we are reading it we are going to be using resize;
    int len;
    file.read((char*)&len, sizeof(len));

    str.resize(len);
    file.read((char*)&str[0], len);
}

/** 
 * 
 * FILEREAD:
 * IT PHYSICALLY DOES THESE THINGS
 * 1. it looks at the file's current position
 * 2. it grabs the next 4 bytes from the file the ones representing 2003
 * 3. it goes to addresss 0x1000 because thats what &seasonYear gave it and overwrites the garbage in that box with those 4 bytes from the file
*/
void ReadLookBinary(fstream& file, string& designerPiece, int& seasonYear){
    ReadStringBinary(file, designerPiece);
    /** first @param: the memory address (IN MEMORY, not the file) where file.read will place the bytes it pulls from the file */
    /** second @param: how many bytes to pull out of the file and copy into that destination */
    // file.read reads bytes out of it

    // bytes gets copied from one location (the file, on disk) to another location (seasonYear, in memory)

    // seasonYear is a box in your programs memory at addrees 0x1000 for example, its 4 bytes contain garbage, whatevr leftover values happen to be sitting there
    // the file has 4 specific bytes sitting on disk that represent 2003
    file.read(reinterpret_cast<char*>(&seasonYear), sizeof(int));
}

int main() {
    // Step 1: Andy logs the runway looks into the archive
    fstream outFile("runway.bin", ios::binary | ios::out);
    
    WriteLookBinary(outFile, "Cerulean Sweater", 2003);
    WriteLookBinary(outFile, "Chanel Boots", 2004);

    outFile.close();
    cout << "Archived 2 looks (runway.bin). That's all." << endl;


}

