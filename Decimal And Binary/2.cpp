#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int binaryNumber;
    cout << "Enter binary number : ";
    cin >> binaryNumber;
    int decimal = 0;
    int i = 0;
    while (binaryNumber != 0)
    {
        int bit = binaryNumber % 10;
        decimal = decimal + (bit * pow(2, i));
        binaryNumber = binaryNumber / 10;
        i++;
    }
    cout << "Decimal : " << decimal;
    return 0;
}