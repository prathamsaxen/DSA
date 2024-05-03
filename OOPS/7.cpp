#include <iostream>
using namespace std;

// Full Encapsulated Class

class EncapsulatedDataClass
{
private:
    int data;
    int size;
};

int main()
{
    EncapsulatedDataClass data1;
    cout << "Full Encapsulated Data Class -> Data1" << endl;
    cout << "It should have all Members Private" << endl;
    return 1;
}