#include <iostream>
using namespace std;


// Multipl Inheritance
class A
{
public:
    void AFunction()
    {
        cout << "A CLASS" << endl;
    }
};

class B
{
public:
    void BFunction()
    {
        cout << "B Class" << endl;
    }
};

class Combo : public A, public B
{
public:
    void ComboFunction()
    {
        cout << "Combo Class" << endl;
    }
};

int main()
{
    Combo c1;
    c1.AFunction();
    c1.BFunction();
    c1.ComboFunction();
    return 0;
}