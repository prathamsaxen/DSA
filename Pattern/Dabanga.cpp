#include <iostream>
using namespace std;

int main()
{
    int number, count = 1;
    cout << "Please enter the number of lines of pattern : ";
    cin >> number;
    for (int index = 0; index < number; index++)
    {
        for (int i = 0; i < number - index; i++)
        {
            cout << i + 1 << " ";
        }
        for (int i = 0; i < index; i++)
        {
            cout << "* ";
            cout << "* ";
        }
        for (int i = 0; i < number - index; i++)
        {
            cout << number - i - index << " ";
        }
        cout << endl;
    }
    return 0;
}