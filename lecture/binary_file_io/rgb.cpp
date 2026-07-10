/** Binary File IO:
    RGB
    You are given a binary file that holds 16 different RGB values.
    Your job is to read the binary files,
    stored the RGB values appropriately in the given struct RGB{},
    and store all the RGB objects in a vector<RGB>. Once this is done,
    iterate through the vector and print out
    each individual RGB value for the RGB Value #.
    You are given a helper function toHex(unsigned char value),
    you will implement this like

    RGB pixel(0,255,255);
    cout << toHex(color.R) << " "; //prints 00
    cout << toHex(color.G) << " "; //prints FF
    cout << toHex(color.B) << " "; //prints FF
    Reading a Binary File
    Open the file in binary mode
    Use a for loop to read 16 pixels (R, G, B values) from the file and store them in the “colors” vector.
    Call toHex() to print the R, G, B values
    Important Considerations
    Always check if the file opened successfully before reading
    Handle potential errors (e.g., file not found, permission issues)
    Close the file after you’re done reading
    When reading binary files, be aware of data types and byte ordering
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

    struct RGB {
        unsigned char R, G, B;
        
        RGB() : R(0), G(0), B(0) {} //default constructor
        RGB(unsigned char r, unsigned char g, unsigned char b) : R(r), G(g), B(b) {} //paramaterized constructor
        //if you're confused on the constructor syntax, you will learn this when class inheritance is brought up. 
    };

    string toHex(unsigned char value) {
        const char* hex_chars = "0123456789ABCDEF"; //create hex values using char*
        string result;
        result += hex_chars[(value >> 4) & 0xF]; //bitshift left 4 bytes & logical AND (gets first hex digit)
        result += hex_chars[value & 0xF]; //logical AND (gets second hex digit)
        return result; //returns the hex value of a given unsigned char as a string
    }

    int main() {
        const string filename = "student/binary/colors.bin";
        
        // Read RGB values from binary file
        vector<RGB> colors;
        // 1- open file in binary
        ifstream file(filename, ios::binary);
        if (!file) {
            cerr << "Error opening file for reading: " << filename << endl;
            return 1;
        }

        // 2. Write a for loop that iterates 16 times to read each pixel and store it in the "colors" vector.
        //    - Each pixel has three unsigned char values: R, G, and B.
        //    - Read the R, G, and B values separately from the file, then pass them to the RGB constructor
        //      to create an RGB object and add it to the "colors" vector.
        for(int i = 0; i < 16; i++){
        unsigned char r;
        file.read((char*)&r, sizeof(r));

        unsigned char g;
        file.read((char*)&g, sizeof(g));

        unsigned char b;
        file.read((char*)&b, sizeof(b));

        colors.push_back(RGB(r,g,b));
        }


        file.close();
        
        // Print the RGB values
        for (int i = 0; i < colors.size(); ++i) {
            RGB color = colors[i];
            cout << "RGB Value #" << (i + 1) << endl;
            // 3- call toHex and pass color.R, color.B, and color.G attributes to print the RGB values
                cout << "Red: "<< toHex(color.R) << " ";
                cout << "Green: "<< toHex(color.G)<< " ";
                cout << "Blue: "<< toHex(color.B) << " ";
            cout << endl;
        }
        
        return 0;
    }