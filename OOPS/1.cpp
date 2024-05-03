#include <iostream>
using namespace std;

class Car
{
private:
    int owner=111;

public:
    char name[100];
    int price;
    int make;

    void printOwner()
    {
        cout << owner << endl;
    }
};

int main()
{
    Car car1;
    cout << "Size of class Car:- " << sizeof(car1) << endl;
    car1.price = 250;
    car1.make = 2024;
    car1.printOwner();
    cout << car1.name << endl;
    return 1;
}