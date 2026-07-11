/** 
 * Current layout: 1 Panel without tree
Multiple-Choice Questions
Multiple-Choice Questions
This section has 10 questions, and each question is worth 3 points.
Question 1

Which class is used for writing data to a file?


ofstream


ifstream


iomanip


writefile

ofstream is the correct class for writing data to a file in C++. It stands for ‘output file stream’ and provides methods to open a file for writing and write data to it.

Check It!

Question 2

Which class is used for both reading and writing data to a file?


ifstream


fstream


ofstream


iomanip

The fstream class is the correct answer because it provides functionality for both reading from and writing to files, combining the capabilities of both ifstream (input file stream) and ofstream (output file stream) in a single class.

Check It!

Question 3

Consider the following statements and answer accordingly.

S1: C:/Users/Desktop/HelloWorld.txt

S2: HelloWorld.txt


Both S1 and S2 are relative paths


Both S1 and S2 are absolute paths


S1 is an absolute path and S2 is a relative path


S1 is a relative path and S2 is an absolute path

S1 (C:/Users/Desktop/HelloWorld.txt) is an absolute path because it starts with the root directory (C:/) and provides the complete path from the root to the file. S2 (HelloWorld.txt) is a relative path because it only specifies the filename without any directory information, making it relative to the current working directory.

Check It!

Question 4

Which STL function is used to check if a file is opened correctly or not?


open_true()


open_false()


open_correct()


is_open()

The is_open() function is the correct STL function used to check if a file stream is successfully opened. It returns true if the file is open and ready for operations, and false if the file failed to open or is closed.

Check It!

Question 5

In some situations (i.e. different operating systems), using a backslash (\) instead of a forward slash (/) in file paths may change the behavior of the program.


true


false

True. Different operating systems use different path separators - Windows uses backslashes (\) while Unix-based systems (Linux, macOS) use forward slashes (/). Using the wrong separator can cause file path resolution issues and change program behavior across different platforms.

Check It!

Question 6

When using the read() and write() functions for binary file operations in C++, which of the following are valid ways to convert a variable to char* for the first parameter?


reinterpret_cast<char*>(&variable)


(char*)&variable


static_cast<char*>(&variable)


const_cast<char*>(&variable)

The correct answers are:

reinterpret_cast<char*>(&variable) - This is the preferred C++ method for converting between unrelated pointer types, which is exactly what we need when converting from any data type pointer to char* for binary I/O operations.

(char*)&variable - This is the C-style cast that also works in C++ for converting to char* for binary operations.

static_cast<char*>(&variable) is incorrect because static_cast cannot convert between unrelated pointer types. const_cast<char*>(&variable) is incorrect because const_cast is only for adding or removing const/volatile qualifiers, not for type conversion.

Check It!

Question 7

What is the purpose of using the ios::binary flag when opening a file in C++?


It opens the file in text mode with enhanced error checking


It opens the file in binary mode, preventing the default mode for text processing


It compresses the file to save disk space


It encrypts the file contents for security

The correct answer is that ios::binary opens the file in binary mode, preventing automatic text processing and newline conversions. By default, files are opened in text mode where the system may perform automatic conversions (such as converting \n to \r\n on Windows). The ios::binary flag tells the system to read/write the file exactly as stored without any automatic text transformations, which is essential for handling non-text files like images, executables, or when precise byte-level control is needed.

Check It!

Question 8

Which of the following correctly uses the sizeof operator as the second parameter in binary file operations?


int data = 42;
file.write((char*)&data, sizeof(&data));

int data = 42;
file.write((char*)&data, sizeof(data));

int data = 42;
file.write((char*)&data, sizeof(char));

int data = 42;
file.write((char*)&data, sizeof(int*));
The correct answer is file.write((char*)&data, sizeof(data));. When using binary file operations, the sizeof operator should return the size of the actual data type being written, not the size of a pointer to that data or a different data type. sizeof(data) returns the size of an integer (typically 4 bytes), which is what we want to write to the file. The other options are incorrect because sizeof(int*) returns the size of a pointer, sizeof(&data) also returns the size of a pointer, and sizeof(char) returns 1 byte which is too small for an integer.

Check It!

Question 9

When writing a string to a binary file in C++, what is the correct sequence of steps to ensure the string can be properly read back later?


Write the string contents directly without using c_str() or length information


Write the string length as an integer, then write the string contents using c_str()


Write the string contents using c_str(), then write the string length as an integer


Write only the string contents using c_str() without any length information

The correct answer is to write the string length as an integer first, then write the string contents using c_str(). This two-step process is essential for binary file operations:

Write the size first: The length of the string must be written as an integer so that when reading the file later, the program knows exactly how many bytes to read for the string content.

Write the string contents: Use the c_str() method to get a null-terminated C-style string from the C++ string object, then write this data to the binary file.

This approach ensures that variable-length strings can be properly stored and retrieved from binary files, as the size information tells the reading program where the string data ends.

Check It!

Question 10

Which code snippet correctly demonstrates reading a string from a binary file and saving a string to a binary file in C++?


// Reading
ifstream file("data.bin", ios::binary);
string str;
int length;
file.read(reinterpret_cast<char*>(&length), sizeof(length));
str.resize(length);
file.read(&str[0], length);

// Writing
ofstream outFile("data.bin", ios::binary);
int length = str.length();
outFile.write(reinterpret_cast<const char*>(&length), sizeof(length));
outFile.write(str.c_str(), length);

// Reading
ifstream file("data.bin", ios::binary);
string str;
file >> str;

// Writing
ofstream outFile("data.bin", ios::binary);
outFile << str;

// Reading
ifstream file("data.bin", ios::binary);
string str;
file.read(str.data(), str.size());

// Writing
ofstream outFile("data.bin", ios::binary);
outFile.write(str.data(), str.size());

// Reading
ifstream file("data.bin", ios::binary);
string str;
getline(file, str);

// Writing
ofstream outFile("data.bin", ios::binary);
outFile << str << endl;
The correct answer uses the proper binary file operations for strings in C++. When reading/writing strings to binary files, you must:

First write/read the length of the string as a int or size_t value using reinterpret_cast
Then write/read the actual string data using the length
Use resize() when reading to allocate proper space
Use c_str() or &str[0] to access the character data
The other options are incorrect because they either use text-based I/O operations (>> and <<), don’t handle string length properly, or don’t use the correct binary file methods.

Check It!
Next
*/