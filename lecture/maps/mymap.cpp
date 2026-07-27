#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){


    // retrive values using the same subscript operator
    map<int, int> aMap;
    aMap[0] = 1;
    aMap.emplace(2,3);


    // inside [] is the KEY, IT IS NOT the actual index you find this at

    // non-contiguous
   // cout << aMap[aMap.size() - 1] might not exist


    /**
     * ITERATOR:
     * CANNOT USE INDICES TO ACCESS AN ELEMENT, YOU MUST USE EXACT KEY VALUE AND EACH KEY IS ALWAYS UNIQUE
     * YOU CANNOT HAVE A NEGATIVE INDEX, BUT YOU CAN HAVE NEGATIVE INFORMATION AS A KEY IN YOUR MAP
     * 
     * SINCE YOU CANNOT NORMALLY LOOP THROUGH A MAP USIND INDICES, YOU MUST USE AN ITERATOR
     * 
     * MAP HAS operator[] AND at():
     * to catch errors it checks at and if it does not exist you use a trycatch block
    */


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
    auto iter = aMap.find(2); // checks for value when key is 2
    // iterator_name->first is the key
    // iterator_name->second is the value
    // aMap.end() = not found
    if(iter != aMap.end()){ // if it is NOT true that the map key of 2 cannot be found, (if it is found)
        cout << iter->second << endl;
    }
    else{
        cout << "Not found." << endl;
    }
    return 0;
}
