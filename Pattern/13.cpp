#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter the number of lines of pattern : ";
    cin >> number;
    char initialAlphabet = 'A';
    for (int index = 0; index < number; index++)
    {
        for (int i = 0; i <= index; i++)
        {
            cout << char(initialAlphabet + number - index + i -1) << " ";
        }
        cout << endl;
    }
    return 0;
}