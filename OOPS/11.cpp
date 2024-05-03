#include <iostream>
using namespace std;


// Multiplevel Inheritance
class vehicle
{
public:
    string chesis;
    int tyres;
    void printVehicle()
    {
        cout << "Vehicle Class" << endl;
    }
};
class Car : public vehicle
{
public:
    string name;
    int year;
    void printCar()
    {
        cout << "Car Class" << endl;
    }
};
class Mercedes : public Car
{
public:
    void printMercedes()
    {
        cout << "Mercedes Class" << endl;
    }
};
int main()
{
    Mercedes m1;
    m1.printVehicle();
    m1.printCar();
    m1.printMercedes();
    return 0;
}
