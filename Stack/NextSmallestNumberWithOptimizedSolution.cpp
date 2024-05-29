#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> NextSmallestNumberWithOptimizedSolution(int arr[], int size)
{
    vector<int> ans(size);
    stack<int> data;

    for (int index = size - 1; index >= 0; index--)
    {
        while (!data.empty() && data.top() > arr[index])
        {
            data.pop();
        }
        if (data.empty())
        {
            ans[index] = -1;
        }
        else
        {
            ans[index] = data.top();
        }
        data.push(arr[index]);
    }
    return ans;
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {2, 3, 1, 4};
    // print(arr, 4);
    vector<int> data = NextSmallestNumberWithOptimizedSolution(arr, 4);
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }
    return 0;
}