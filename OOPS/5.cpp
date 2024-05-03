#include <iostream>
using namespace std;

class Pratham
{
public:
    int age;

    Pratham()
    {
        cout << "Constructor Called!" << endl;
    }
    ~Pratham()
    {
        cout << "Destructor Called!" << endl;
    }
};

int main()
{
    Pratham *ptr=new Pratham();
    // Mannual Destructor Called
    delete ptr;
    return 0;
}