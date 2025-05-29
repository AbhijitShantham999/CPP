#include <iostream>
#include <string>

using namespace std;

// Challenges

// Challenge 1:

// Tea Information Display
// Write a program that declares variables to store the type of tea, 
// its price per kilogram (float), and its rating (char). 
// Use data types effectively and print them in a formatted output using escape sequences.
// Hint: Use \n for new lines and " to quote the tea name.

// int main(){
//     string teaType = "Hibiscus";
//     float pricePerKilo = 239.99;
//     char rating = '5';

//     cout << teaType <<" is "<< pricePerKilo <<" per kilo\n"<< "which has "<< rating <<" rating";
// }

// Challenge 2:

// Modify Tea Prices
// Create a program where the user inputs a base price for tea. 
// Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
// Hint: Use both float and int types, and demonstrate type casting.

// int main(){
//     string input;
//     float teaPrice;

//     cout << "Enter Tea Price: ";
//     getline(cin, input);
//     teaPrice = stof(input);

//     float tenPrecent = (teaPrice * 10)/100;
//     float price = teaPrice + tenPrecent;

//     int round = int(price);
//     cout << "round : " << round;

//     return 0;
// }

// Challenge 3:

// Favorite Tea Input
// Write a program that takes the user’s favorite tea as input using 
// getline and also asks how many cups of tea they want using cin. Display the result in a fun message.
// Hint: Combine cin and getline carefully to avoid input issues.

