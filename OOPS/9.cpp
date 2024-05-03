#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    int weight;
    int height;

public:
    void setAge(int inputAge)
    {
        this->age = inputAge;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    int displayAge()
    {
        return this->age;
    }
    int displayWeight()
    {
        return this->weight;
    }
    int displayHeight()
    {
        return this->height;
    }
};

class Male : protected Human
{
public:
    string name;
    int displayAge()
    {
        return age;
    }
    void setAgeMale(int age)
    {
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
};

int main()
{
    Male male1;
    // male1.age = 1;
    male1.setAgeMale(23);
    cout << male1.displayAge() << endl;
    male1.setName("Pratham Saxena");
    cout << male1.name << endl;
    return 0;
}