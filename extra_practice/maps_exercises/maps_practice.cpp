/** 
 * MAPS:
 * std::map is a container that stores key-value pairs
 * 
 * similar to that of a dictionary data type from python
 * 
 * you search for an item in a map by its key and get value back
*/

#include <iostream>
#include <string>
#include <map>

/** REMINDER: whenever you use anything from an included library you must do std:: for anything from it */
int main() {
    // must provide type of key, value when creating a map
    // myMap is a map that has a key of type string and value of type string
    std::map<std::string, std::string> myMap;

    myMap["name"] = "Pikachu"; // key = "name" and we are creating value of "Natalie"
    std::cout << myMap["name"] << std::endl;

/** EXERCISE: 
 * create a map<string, int>
 * insert three entries: "apple"-5, "bananas"-3, "oranges"-8
 * print the values associated with bananas
*/
    std::map<std::string, int> fruits;
    fruits["apple"] = 5;
    fruits["bananas"] = 3;
    fruits["oranges"] = 8;

    std::cout << fruits["bananas"] << std::endl;
    return 0;

/** EXERCISE: 
 * create
 * 
 * 
*/
}