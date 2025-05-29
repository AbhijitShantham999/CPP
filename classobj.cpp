#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product{
    public:
        string name;
        int price;
        string description;
        vector<string> images;

        void displayProduct(){
            cout << "Product name : " << name << endl;
            cout << "Price : " << price << endl;
            cout << "Description : " << description << endl;
            cout << "images : ";
            for(string image : images){
                cout << image << ",";
            }
            cout << endl;
        }
};

int main(){

    Product obj1;

    obj1.name = "Iphone 16 Pro Max";
    obj1.price = 1299;
    obj1.description = "Great phone by Steve Jobs";
    obj1.images = {"image1.jpg","image2.jpg","image3.jpg"};
    obj1.displayProduct();

    Product obj2;

    obj2.name = "Samsung S24 Ultra";
    obj2.price = 1399;
    obj2.description = "Great phone by Samsung";
    obj2.images = {"S24_1.jpg","S24_2.jpg","S24_3.jpg"};
    obj2.displayProduct();

    return 0;
}



