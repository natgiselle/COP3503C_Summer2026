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

/** EXERCISE: 
 * create a map<string, string>
 * inserts "FL"-"Florida", "CA"-"California", "NY"-"New York"
 * check if the key "TX" exists in the map, if it does print its value, if not print "Not found"
*/
    std::map<std::string, std::string> states;
    states.insert({"FL", "Florida"});
    states.insert({"CA", "California"});
    states.insert({"NY", "New York"});



    /** 
     * FIND:
     * use map_name.find(key) 
     * searches for a key in a key-value pair in the map container
     * if key is found, it returns an iterator to the position where the key is present in the map
     * if key is NOT found it returns an iterator to the end of the map so it returns .end();
     * 
     * the actual type of what find() is:
     * std::map<std::string, std::string>::iterator
     * 
     * using namespace std;
     * map<string, string>::iterator
     * 
     * use iter for iterator in var
     * */
    auto iter = states.find("TX");
    // iterator_name->first is the key
    // iterator_name->second is the value
    // states.end() = not found
    if(iter != states.end()){
        std::cout << iter->second << std::endl;
    }
    else{
        std::cout << "Not found." << std::endl;
    }

    return 0;
}