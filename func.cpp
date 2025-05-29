#include <iostream>
#include <string>

using namespace std;

void playGame(string game){
    cout << "You are playing " << game << endl;
}

void gameScore(int score);

int main(){
    string game = "cricket";
    playGame(game);
    gameScore(5);
    return 0;
}

void gameScore(int score){
    cout << "your " << score << endl; 
}

