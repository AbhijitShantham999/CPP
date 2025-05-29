#include <iostream>
#include <string>

using namespace std;

int main(){

    bool isStudent;

    int cups;

    cout << "Are you a student (type 1 for true or 0 for false) : ";
    cin >> isStudent;
    cout << "How many cups do you want : ";
    cin >> cups;

    if(isStudent || cups > 15){
        cout << "You are eligible for DISCOUNT";
    }
    else{
        cout << "NO DISCOUNT";
    }
    return 0;
}