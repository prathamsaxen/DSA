#include <iostream>
using namespace std;

class Pratham
{
public:
    static int time;
    int age;

    static int getStaticMember()
    {
        return time;
    }
};

int Pratham::time = 7;

int main()
{
    cout << Pratham::time << endl;
    cout << Pratham::getStaticMember() << endl;
    return 0;
}