#include <iostream>
using namespace std;


// Inheritance Ambuiguity
class A
{
public:
    void func()
    {
        cout << "Function -> A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "Function -> B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C object;
    object.B::func();
    return 0;
}