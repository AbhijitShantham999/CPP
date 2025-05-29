#include <iostream>
#include <string>

using namespace std;

int main(){
    int cups;
    cout << "Enter number of cups : ";
    cin >> cups;

    if(cups >= 10 && cups <= 20){
        cout<< "You get a silver Badge";
    }
    else if(cups > 20 ){
        cout << "You get a Gold Badge";
    }
    else{
        cout << "You get nothing";
    }
    return 0;
}