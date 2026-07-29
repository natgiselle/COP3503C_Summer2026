#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    /*
    So you can copy/paste, might make things faster ¯\_(ツ)_/¯
        "Team Fortress 2", 1300
        "Rocket League", 1200

        "Yakuza 0", 50
        "Bloons Tower Defense 6", 200

        "Red Dead Redemption 2", 80
        "Counter Strike 2", 600

        "Geometry Dash", 350
        "Project Diva", 80

        "Stardew Valley", 355
        "Balatro", 30
    */
    map<string, int> games;
    games.emplace("Team Fortress 2", 1300);
    games.emplace("Rocket League", 1200);

    games.emplace("Yakuza 0", 50);
    games.emplace("Bloons Tower Defense 6", 200);

    games.emplace("Red Dead Redemption 2", 80);
    games.emplace("Counter Strike 2", 600);

    games.emplace("Geometry Dash", 350);
    games.emplace("Project Diva", 80);

    games.emplace("Stardew Valley", 355);
    games.emplace("Balatro", 30);

    
    for(map<string, int>::iterator it = games.begin(); it != games.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}