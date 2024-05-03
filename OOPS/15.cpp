#include <iostream>
using namespace std;

// Polymorphism called with function overloading
class A
{
public:
    void abc()
    {
        cout << "ABC CALLED!" << endl;
    }
    void abc( int n)
    {
        cout << "ABC + 2 CALLED!" << endl;
    }
};

int main()
{
    A obj;
    obj.abc(1);
    return 0;
}