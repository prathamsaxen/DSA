#include <iostream>
using namespace std;

class person
{
private:
    int age;

public:
    person()
    {
        cout << "Person Constructor Invoked!" << endl;
    }
    char name[50];

    void setAge(int inputAge)
    {
        age = inputAge;
    }

    int displayAge()
    {
        return age;
    }
};

int main()
{
    person *p1 = new person();
    // p1->name = [ "P", "R", "A" ];
    p1->setAge(22);
    cout << p1->displayAge() << endl;
    return 1;
}