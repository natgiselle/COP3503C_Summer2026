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
