#include <iostream>
using namespace std;



// Operator Overloading
class A
{
public:
    int a = 4;
    void operator()()
    {
        cout << "Object Called! -> " << this->a << endl;
    }
};
int main()
{
    A object1;
    object1();
    return 0;
}