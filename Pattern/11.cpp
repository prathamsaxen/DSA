#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;
    cout << "Please enter the number of lines of pattern : ";
    cin >> number;
    char initialAlphabet = 'A';
    for (int index = 0; index < number; index++)
    {
        for (int i = 0; i <= index; i++)
        {
            cout << char(initialAlphabet + count) << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}