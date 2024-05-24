#include <iostream>
#include <stack>
using namespace std;

void insertAtSortedPlace(stack<int> &data, int element)
{
    if(data.empty())
    {
        data.push(element);
        return;
    }
    if(data.top()<element)
    {
        data.push(element);
        return;
    }
    int elementData=data.top();
    data.pop();
    insertAtSortedPlace(data,element);
    data.push(elementData);
}
void sort(stack<int> &data)
{
    if (data.empty())
    {
        return;
    }
    int element = data.top();
    data.pop();
    sort(data);
    insertAtSortedPlace(data, element);
}

int main()
{
    stack<int> data;
    data.push(2);
    data.push(12);
    data.push(6);
    data.push(10);
    data.push(8);
    data.push(4);
    sort(data);
    while(!data.empty())
    {
        cout<<data.top()<<endl;
        data.pop();
    }
    return 0;
}