#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

int main(){ 
    std::unordered_map<std::string, int> groceries; // unordered_map is non-contigiuous
    groceries.emplace("banana",3);
    groceries["dragonfruit"] = 5;
    groceries["lime"]= 7;


    // unordered_map iterator for unordered_map map and it will print it NOT sorted
    // map iterator for map map it will print it sorting the keys in alphabetical order
    // map.end() similar to  != nullptr
    // wehneve you use regular map data structure, you must loop through 

    // can use auto instead when defining something in a loop
    std::cout << "MAP ITERATOR: " << std::endl;
    for(std::unordered_map<std::string, int>::iterator it = groceries.begin(); it != groceries.end(); ++it){
        std::cout << it->first << ": " << it->second << std::endl; 
    }

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    // array and vector re contigous blocks of memory therefore order matters using index
    std::cout << "VECTOR ITERATOR: " << std::endl;
    std::vector<std::string> fruits;
    fruits.push_back("strawberry");
    for(std::vector<std::string>::iterator i = fruits.begin(); i != fruits.end(); ++i){
        std::cout << *i << std::endl; // dereference iterator a iterator is a pointer to the info its iterating thru
    }
        return 0;
}