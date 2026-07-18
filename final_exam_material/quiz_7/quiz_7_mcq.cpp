/**
Each question carries 3 points.
START-----------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 1) A student writes a program that reads from a text file containing several lines of data. The program works correctly on their computer, but fails on another computer even though the C++ code is the same.
Which is the most likely file I/O reason?
The file may use the absolute path which may not exist in the other system. So, the program may not be able to locate the file.
Text files can only be opened on the computer where they were created.
ifstream works only on Windows, not Linux or macOS.
Text file reading requires ios::binary.

ANSWER:
The file may use the absolute path which may not exist in the other system. So, the program may not be able to locate the file.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 1 FEEDBACK:
File I/O depends on where the file is located relative to where the program is run.
If the file path is wrong, the code can be correct but still fail to open the file.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 2) What does the following code snippet do?

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream stream("hello.txt");
    stream << "Hello World";
    return 0;
}

This code causes an error
Write the text "Hello World" into hello.txt file
Read the text "Hello World" from hello.txt file
Delete the text "Hello World" from hello.txt file

ANSWER:
Write the text "Hello World" into hello.txt file

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 2 FEEDBACK:
The code uses ofstream, which stands for output file stream and is used to write data to a file.
When ofstream stream("hello.txt"); runs, it opens or creates the file named hello.txt.
Then stream << "Hello World"; sends the text "Hello World" into that file.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 3) A text file named names.txt contains the following:
Ada Lovelace
Grace Hopper
Alan Turing

A student wants to read each full name from the file. Which approach is most appropriate?
Use getline(file, name); because each name may contain spaces.
Use file.read((char*)&name, sizeof(name)); because names are stored as text.
Use file >> name; because >> reads the entire line from a text file.
Use ofstream because the program is reading from a file.

ANSWER:
Use getline(file, name); because each name may contain spaces.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 3 FEEDBACK:
>> stops at whitespace, so it would read only "Ada" instead of "Ada Lovelace".
getline() reads the whole line, including spaces between words.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 4) Which of the following statements about binary files versus text files in C++ are correct? Select all that apply.
Binary files use ios::binary flag when opening, while text files do not require this flag
Binary files are generally more space-efficient for storing numerical data compared to text files
Reading from binary files is typically faster than reading from text files because no data conversion is needed
Text files can only be opened using ifstream, while binary files require fstream
Binary files use read() and write() methods, while text files use >> and << operators

ANSWER:
Binary files use ios::binary flag when opening, while text files do not require this flag
Binary files are generally more space-efficient for storing numerical data compared to text files
Reading from binary files is typically faster than reading from text files because no data conversion is needed
Binary files use read() and write() methods, while text files use >> and << operators

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 4 FEEDBACK:
Binary files require the ios::binary flag and use read()/write() methods for direct memory transfer, making them faster and more space-efficient.
Text files use stream operators and involve character conversion.
Both file types can be opened with ifstream, ofstream, or fstream - the stream type is not dependent on whether the file is binary or text.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 5) The file students.csv contains:
Alice,20,92.5
Bob,19,87.0

The file main.cpp contains:

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("students.csv");

    string line;
    string name;
    string age;
    string grade;

    while (getline(file, line)) {
        ______________________________

        cout << name << " | "
             << age << " | "
             << grade << endl;
    }

    return 0;
}

Which code correctly fills in the blank?

stringstream ss(line);

getline(ss, name, ',');
getline(ss, age, ',');
getline(ss, grade, ',');

stringstream ss(file);

getline(ss, name);
getline(ss, age);
getline(ss, grade);

stringstream ss(line);

getline(file, name, ',');
getline(file, age, ',');
getline(file, grade, ',');

stringstream ss;

getline(ss, line, ',');
getline(ss, name, ',');
getline(ss, age, grade);

ANSWER:
stringstream ss(line);

getline(ss, name, ',');
getline(ss, age, ',');
getline(ss, grade, ',');

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 5 FEEDBACK:
To parse CSV data, you need to: 1) Create a stringstream object initialized with the line containing comma-separated values,
2) Use getline with the stringstream and specify ',' as the delimiter.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 6) How can you create a makefile?
By creating the file and naming it "makefile" without any extension
By using the make command in the terminal will automatically create a makefile with appropriate commands
By running gcc --makefile to auto-generate one
Makefile cannot be created by users

ANSWER:
By creating the file and naming it "makefile" without any extension

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 6 FEEDBACK:
A makefile is created manually by the developer using a text editor.
The file must be named either 'makefile' or 'Makefile' (case-sensitive) for the make utility to recognize it.
The make command is used to execute the makefile, not to create it.
GCC does not have a --makefile flag to auto-generate makefiles, and while touch makefile creates an empty file, it doesn't create a pre-configured makefile with any content.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 7) What type of indentation must be used before commands in a makefile rule?
A tab character
A newline character
4 spaces
A semicolon

ANSWER:
A tab character

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 7 FEEDBACK:
Makefiles require a tab character to separate the rule's target and dependencies from the commands.
This is a strict syntactic requirement in make - using spaces instead of tabs will result in errors.
The tab character must appear at the beginning of each command line in a makefile rule.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 8) Consider the following C++ program:

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string sentence;

    for (int i = 1; i < argc; i++) {
        sentence += argv[i];

        if (i < argc - 1) {
            sentence += " ";
        }
    }

    cout << sentence << endl;
    return 0;
}

The program is run as:
./program Learning C++ is fun

Why does the loop start at i = 1 instead of i = 0?

argc stores the total number of command-line arguments, including the executable name. argv stores each argument, and argv[0] contains the executable name. The loop starts at 1 to skip the executable name and only concatenate the words in the sentence.
argc stores the number of words in the sentence only. argv[0] contains the first word, but the loop skips it because it is not needed.
argv stores each character separately. The loop starts at 1 because C++ arrays begin at index 1.
argc stores the completed sentence. The loop starts at 1 to prevent argv[0] from causing a compilation error.

ANSWER:
argc stores the total number of command-line arguments, including the executable name. argv stores each argument, and argv[0] contains the executable name. The loop starts at 1 to skip the executable name and only concatenate the words in the sentence.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 8 FEEDBACK:
In C, argc represents the total count of command-line arguments including the program name itself,
and argv is an array of character pointers where argv[0] always contains the executable name (in this case "./program").
The loop starts at index 1 to skip the program name and only process the actual sentence words "Learning", "C++", "is", "fun".
The other options are incorrect: argc includes the program name in its count, argv stores string pointers not individual characters,
C++ arrays start at index 0 not 1, and argc is a count not the sentence itself.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 9) Which of the following are correct prototypes for the int main() function to prepare it to take in command line arguments?
int main(char *argv[], int argc)
int main()
int main(int argc, char* argv[])
int main(int argc, char** argv)

ANSWER:
int main(int argc, char* argv[])
int main(int argc, char** argv)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 9 FEEDBACK:
The correct prototypes are int main(int argc, char* argv[]) and int main(int argc, char** argv) because both follow the standard convention
where argc (argument count) comes first as an integer, followed by argv (argument vector) as either an array of character pointers
or a pointer to a pointer to char.
The option int main(char *argv[], int argc) is incorrect because the parameter order is wrong - argc must come before argv.
The option int main() is incorrect because it doesn't accept any parameters and therefore cannot handle command line arguments.

----------------------------------------------------------------------------------------------------------------------------------------------------------------

QUESTION: 10) After the following commands in the terminal are executed (assume they work correctly):
g++ -o out main.cpp
./out hello world

What index of argv[] would the argument hello be in?
2
3
0
1

ANSWER:
1

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

QUESTION 10 FEEDBACK:
In C++ command line arguments, argv[0] contains the program name ("./out" in this case),
argv[1] contains the first argument ("hello"), and argv[2] contains the second argument ("world").
Therefore, "hello" is stored at index 1 of the argv array.
END-------------------------------------------------------------------------------------------------------------------------------------------------------------
 */