#include <iostream>
#include <string>

using namespace std;

int main(){

    string games[5] = {"Cricket","Hockey","KoKo","Kabaddi","Football"};

    for(int i = 0 ; i < 5; i++){
        cout << games[i]<<" Game Started\n";
        for(int j = 1 ; j < 4; j++){
            cout << "Playing " << games[i] << endl;
        }
    }
    return 0;
}