#include <iostream>
using namespace std;

int main()
{
    int number,printNumber=1;
    cout << "Please enter the number of lines of pattern ";
    cin >> number;
    for (int index = 0; index < number; index++)
    {
        for(int index2=0; index2 < number; index2++)
        {
            cout<<printNumber<<" ";
            printNumber++;
        }   
        cout << endl;
    } 
    return 0;
}