#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter the number of lines of pattern : ";
    cin >> number;
    for (int index = 0; index < number; index++)
    {
        for (int index2 = 0; index2 <= index; index2++)
        {
            cout << index - index2 + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}