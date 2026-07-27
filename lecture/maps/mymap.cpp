#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){


    // retrive values using the same subscript operator
    map<int, int> aMap;
    aMap[0] = 1; /** SUBSCRIPT:  allows overriding value */

    aMap.emplace(2,3); /** EMPLACE:() ignores any overriding attempts MOST EFFICIENT BECAUSE IT CONSTRUCTS THE OBJECT OR PAIR FOR YOU from the key-value content you put in */

    aMap.insert({100,100}); /** INSERT:() slower than emplace because you MUST already have an object or values initialized meaning you cannot add an object using consructor since it must already exist prior to using it making it less efficient */


    // inside [] is the KEY, IT IS NOT the actual index you find this at

    // non-contiguous
   // cout << aMap[aMap.size() - 1] might not exist



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
     * map<string, string>::iterator // imagine iterator as a pointer to a certain pair of key-value
     * 
     * use iter for iterator in var
     * */
    auto iter = aMap.find(2); // checks for value when key is 2
    // iterator_name->first is the key
    // iterator_name->second is the value
    // aMap.end() = not found
    if(iter != aMap.end()){ // if it is NOT true that the map key of 2 cannot be found, (if it is found)
        cout << iter->second << endl; // goes until it finds it and then prints the value accoesated to the key
    }
    else{
        cout << "Not found." << endl;
    }

    
    /**
     * ITERATOR:
     * CANNOT USE INDICES TO ACCESS AN ELEMENT, YOU MUST USE EXACT KEY VALUE AND EACH KEY IS ALWAYS UNIQUE
     * YOU CANNOT HAVE A NEGATIVE INDEX, BUT YOU CAN HAVE NEGATIVE INFORMATION AS A KEY IN YOUR MAP
     * 
     * SINCE YOU CANNOT NORMALLY LOOP THROUGH A MAP USIND INDICES, YOU MUST USE AN ITERATOR
     * 
     * MAP HAS operator[] AND at():
     * to catch errors it checks at and if it does not exist you use a trycatch block
     * 
     * 
    */


    map<int, int>::iterator iterNew = aMap.begin(); // sets iterator to point to the first element of the map container

    // as long as iter isnt at the end is what ; means
    // 
    for (; iterNew != aMap.end(); ++iterNew){ // until i didnt reach end (not found) for it to keep going and once it does it stops
        cout << "(" << iterNew->first << ": " << iterNew->second << ")" << endl;
    }


    // iterators are object from iterastor class
    // you can do *iter prints theactual value at that functon when ti comesto vectors!
    vector<int> data;
    data.push_back(5);

   // cout << *iter<< endl;
    //cout << *iter + 3 << endl;
   // *iter *= 10; // deference apparently


    /** 
     * UNORDERED: MAP:
     * unordered_map<key_type, value_type> mapName;
     * IS FASTER THSN REGULAR MAP SINCE WE MAY NOT NEED TO SORT
     */
    return 0;
}
