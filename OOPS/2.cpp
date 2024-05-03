#include <iostream>
using namespace std;

class Pratham{
    private:
    int age;
    char color;
    public:
    int birthyear;
    char India;

    void setAge(int ageInput)
    {
        age=ageInput;
    }
    int DisplayAge()
    {
        return age;
    }
};
int main()
{
    Pratham Pratham1;
    Pratham1.birthyear=2002;
    Pratham1.India='Y';
    Pratham1.setAge(22);
    cout<<"Birth Year-> "<<Pratham1.birthyear<<endl;
    cout<<"India? -> "<<Pratham1.India<<endl;
    cout<<"Age -> "<<Pratham1.DisplayAge()<<endl;
    return 1;

}