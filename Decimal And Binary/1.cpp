#include <iostream>
#include <cmath> // Include cmath for pow function

using namespace std;

int main()
{
    int decimalNumber;
    cout << "Enter Decimal Number Which You Want To Convert: ";
    cin >> decimalNumber;

    int binary = 0;
    int i = 0;

    while (decimalNumber != 0)
    {
        int bit = decimalNumber & 1;
        cout << bit;
        binary = (bit * pow(10, i)) + binary;
        decimalNumber = decimalNumber >> 1;
        i++;
    }

    cout << "Binary Number: " << binary << endl; // Corrected the output message

    return 0; // Added a return statement at the end of main
}
