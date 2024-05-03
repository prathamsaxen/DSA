#include <iostream>
using namespace std;

// Single Inheritance
class Car
{
public:
    string name;
    int make;
};

class Maruti : public Car
{
public:
    string model;
    int mileage;
};

int main()
{
    Maruti M1;
    M1.name = "Maruti Suzuki";
    M1.model = "Baleno";
    cout << "Car -> " << M1.name << " Model -> " << M1.model << endl;
    return 0;
}