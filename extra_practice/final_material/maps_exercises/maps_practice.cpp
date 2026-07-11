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
using namespace std;

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
/** EXERCISE: 
 * creates a map<string, string>
 * "key1"-"COP"
 * "key2"-"aaa"
 * "key1"-"3503C"
 * 
 * if the key already exists, concatenate the new value with a semi colon so "key1" should end up as "COP;3503C"
 * print all key-value pairs in the map
 * 
 * figure out how to detect the duplicate and handle it
*/
    map<string, string> coding;
    coding["key1"] = "COP";
    coding["key2"] = "aaa";
    string key = "key1";
    string value = "3503C";
    auto it = coding.find(key);
    if(it != coding.end()){
        it->second += ";" + string(value); // if key already exists concatenate it to the already existing value attached to the specified key
    }
    else {
        coding[key] = value; // if key doesnt exist, insert a fresh one
    }
    for(const auto& pair : coding){
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}