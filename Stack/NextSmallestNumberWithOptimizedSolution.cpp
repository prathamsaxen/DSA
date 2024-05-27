#include <iostream>
#include <stack>

using namespace std;
stack<int> NextSmallestNumberWithOptimizedSolution(int arr[], int size)
{
    stack<int> ans;
    ans.push(-1);
    for (int i = size - 1; i > 0; i--)
    {
        while (ans.top() >= arr[i])
        {
            ans.pop();
        }
        ans.push(ans.top());
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
    print(arr, 4);
    stack<int> data = NextSmallestNumberWithOptimizedSolution(arr, 4);
    while (!data.empty())
    {
        cout << data.top() << endl;
        data.pop();
    }
    return 0;
}