    /**
     * 5. 2025 Spring Midterm 1 - FRQ #4
    Problem Statement (25 points)
    You are given a custom String class that stores its string data using a dynamically allocated char array, also known as a C-style string. The last element of this char array is a special character called the null terminator ‘\0’.
    When a char array is passed to a function (as char*), it doesn’t store the length of the string. However, since the ‘\0’ marks the end of the string, you can use a while loop to count characters until you reach the null terminator.
    An example dynamically allocated char array which ends with a null terminator.

    // Note that "Hi" has 2 characters, but length of the char array is 3
    // (2 + '\0').
    char* dynamicString = new char[3]; 
    dynamicString[0] = 'H';
    dynamicString[1] = 'i';
    dynamicString[3] = '\0';  // Null terminator
    The String class has two attributes and two implemented methods:
    Attributes:
    int length: Stores the length of the char array. This length must not include the null terminator.
    char* data: A pointer to an array that holds all the characters of the char array, including the null terminator at the end.
    Implemented Methods:
    getLength(): Returns the lengthattribute.
    c_str(): Returns the data attribute.
    You need to implement the following six methods for the String class:
    A default constructor:
    – sets the length attribute to 0
    – allocates a dynamic char array of size 1, initialized with the ‘\0’.
    A parameterized constructor
    – Input: Takes a C-style string (const char* inputString).
    – Set length: Use a while loop to count characters in inputString (exclude the null terminator).
    – Set data: Allocate enough space to store inputString, including the null terminator.
    – Copy the characters from inputString into the class’s char* data.
    A copy constructor that deep-copies an existing String object to the invoking String object.
    A copy assignment operator that will deep copy an existing String object to an existing String object.
    A destructor to delete the dynamically allocated char* data.
    An operator overload on the + operator that will concatenate two String objects into a new one. It will return a new String object. It creates and returns a new String object. The new String contains:
    – The characters from the left-hand side String object (without the null terminator),
    – Followed by the characters from the right-hand side String object (also without the null terminator),
    – And ends with a null terminator to mark the end of the string.
    Example:

    ['C','O','P','\0'] + ['3','5','0','3','\0']
    = ['C','O','P','3','5','0','3','\0']
    */

    #include <iostream>
    using namespace std;

    // FREEZE CODE BEGIN
    #pragma once
    class String {
    private:
        char* data;
        int length;
    public:
    String();
    String(const char* str);
    ~String();
    String(const String& other);
    String& operator=(const String& other);
    String operator+(const String& other);
    int getLength() const { return length; }
    const char* c_str() const { return data; }
    };
    // FREEZE CODE END 


    /** DEFAULT:CONSTRUCTOR: */
    String::String(){
        length = 0;
        data = new char[1];
        data[0] = '\0';
    }

    /** PARAMETRIZED:CONSTRUCTOR: */
    String::String(const char* str){
        int i = 0; // first make a value that is gonna have placeholder for index in given pointer of chars str

        // loop through each thing to make sure it increments i for each char that is NOT the null terminator
        while(str[i] != '\0'){
        i++;
        }

        // the true length of the str becomes the value i which excludes count of null terminator
        length = i;

        // ALLOCATE NEW MEMORY NO DELETING
        data = new char[length + 1];

        // LOOP THROUGH ELEMENTS AND COPY EACH ONE FROM THE STR INTO DATA
        for(int i = 0; i < length; i++){
        data[i] = str[i];
        }
        
        data[length] = '\0';
    }

    String::~String(){
        delete[] data;
    }

    /** COPY:CONSTRUCTOR: */
    String::String(const String& other){
        // SETS OUR STR OBJECT LENGTH EQUAL TO OTHER TO CREATE AN OBJECT FROM PRE-EXISTING ONE
        length = other.length; 

         // ALLOCATE NEW MEMORY FOR DATA WITH NULL TERMINATOR NO DELETING
        data = new char[length + 1];

        // LOOP THROUGH ELEMENTS
        for(int i = 0; i < length; i++){
        data[i] = other.data[i];
        }

        // VALUE OF NULL TERMINATOR IS WHEN IT IS AT LENGTH INSTEAD OF LENGTH+1 BCS THAT IS THE LAST ELEMENT
        data[length] = '\0';
    }

    /** COPY:ASSIGNMENT:OPERATOR: */
    String& String::operator=(const String& other){
        // ALWAYS DO SELF ASSIGNMENT CHECK FIRST
        if(this == &other){
        return *this;
        }

        // EVERYTHING BELOW SELF ASSIGNMENT IS THE SAME AS COPY CONSTRUCTOR 
        // ONLY DIFFERENCE JUST RETURN REFERENCE TO STRING OBJECT
        // return *this
        length = other.length;

        delete[] this->data;

        data = new char[length + 1];

        for(int i = 0; i < length; i++){
        data[i] = other.data[i];
        }

        data[length] = '\0';
        return *this;
    }

    /** OVERLOADING:ARITHMETIC:OPERATOR: */
    String String::operator+(const String& other){
        // OVERLOADING AN ARITHMETIC OPERATOR MEANS YOU
        // RETURN THE OBJECT ITSELF
        String result;

        // DELETE PREVIOUSLY ALLOCATED DATA
        delete[] result.data;

        //
        result.length = this->length + other.length;

        result.data = new char[result.length + 1];


        for(int i = 0; i < length; i++){
        result.data[i] = this->data[i];
        }

        for(int i = 0; i < other.length; i++){
        result.data[this->length + i] = other.data[i];
        }

        result.data[result.length] = '\0';
        return result;
    }
    


