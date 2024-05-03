#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter the number of lines of pattern : ";
    cin >> number;
    for (int index = 0; index < number; index++)
    {
        for (int i = 0; i < number - index; i++)
        {
            cout << "X ";
        }
        cout << endl;
    }
    return 0;
}