#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "elements.cpp"

using namespace std;

int main(){
    int nrPlayers = 0;
    while(nrPlayers < 1 || nrPlayers > 7){
        cout << "How many players (min -> 1; max -> 7):" << endl;
        cin >> nrPlayers;
    };
    vector<string> names;
    string name;
    for(int i = 0; i < nrPlayers; i++){
        cout << "Enter player name:" << endl;
        cin >> name;
        names.push_back(name);
    }
    cout << endl;
    Game aGame(names);
    char newGame = 'y';
    while(newGame != 'n' && newGame != 'N'){
        aGame.Play();
        cout << "Do you want to play again? (Y/N)" << endl;
        cin >> newGame;
    }
    return 0;
};
