#include <iostream>
using namespace std;



// Heirarichal Inheritance
class A
{
public:
    void funcA()
    {
        cout << "Function A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Function B" << endl;
    }
};

class C : public A
{
public:
    void funcC()
    {
        cout << "Function C" << endl;
    }
};

int main()
{
    A objectA;
    B objectB;
    C objectC;

    // A
    objectA.funcA();

    // B
    objectB.funcA();
    objectB.funcB();

    // C
    objectC.funcA();
    objectC.funcC();

    return 0;
}