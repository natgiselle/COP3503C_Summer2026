#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    vector<int> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);
    data.push_back(4);
    data.push_back(5);

    // with iter it must start with saying the type im iterating for 
    for(vector<int>::iterator iter = data.begin(); iter != data.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
    // to reverse you must use reverse iterator
    for(vector<int>::reverse_iterator iter = data.rbegin(); iter != data.rend(); ++iter){
        cout << *iter << " ";
    }

    map<int,string> myMap;
    myMap.emplace(1, "gigi");
    myMap.insert({2, "pikachu"});
    myMap[3] = "snow";

    myMap[1] = "nana"; // overrides arron
    myMap.emplace(3, "saeko");

    cout << "\n\n";

    // at the BEGINNING OF MAP
    // you do MAPNAME.begin() MAPNAME.end()
    // for iterator current key and value you do ITERATORNAME->first for key and then ITERATORNAME
    for(map<int, string>::iterator iter = myMap.begin(); iter != myMap.end(); ++iter){
        cout << iter->first << ": " << iter->second << endl;
    }

    return 0;
}