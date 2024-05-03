#include <iostream>
using namespace std;
void swapAlternates(int *arr, int size)
{
    int i = 0;
    while (i < size - 1)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i = i + 2;
    }
}
int main()
{
    int arr[5] = {5, 85, 65, 748, 14};
    int arr2[6] = {25, 65, 85, 75, 45, 65};
    swapAlternates(arr, 5);
    swapAlternates(arr2, 6);
    for (int index = 0; index < 5; index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
    for (int index = 0; index < 6; index++)
    {
        cout << arr2[index] << " ";
    }
    cout << endl;
}